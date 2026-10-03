class CfgPatches {
    class rhsusf_c_stryker {
        units[] = {
            "rhsusf_stryker_m1126_m2_wd",
            "rhsusf_stryker_m1126_m2_d",
            "rhsusf_stryker_m1126_mk19_wd",
            "rhsusf_stryker_m1126_mk19_d",
            "rhsusf_stryker_m1127_m2_wd",
            "rhsusf_stryker_m1127_m2_d",
            "rhsusf_stryker_m1132_m2_wd",
            "rhsusf_stryker_m1132_m2_d",
            "rhsusf_stryker_m1132_m2_np_d",
            "rhsusf_stryker_m1132_m2_np_wd",
            "rhsusf_stryker_m1134_wd",
            "rhsusf_stryker_m1134_d"
        };
        weapons[] = {};
        requiredVersion = 1.64;
        requiredAddons[] = {"rhsusf_main", "rhsusf_c_troops", "rhsusf_c_heavyweapons"};
        name = "IAV Stryker vehicles";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        RHS_Stryker_M1126_Driver_in = "RHS_Stryker_M1126_Driver_in";
        RHS_Stryker_M1126_Driver_out = "RHS_Stryker_M1126_Driver_out";
        RHS_Stryker_M1126_Driver_turnin = "RHS_Stryker_M1126_Driver_turnin";
        RHS_Stryker_M1126_Driver_turnout = "RHS_Stryker_M1126_Driver_turnout";
        RHS_Stryker_M1126_Gunner_in = "RHS_Stryker_M1126_Gunner_in";
        RHS_Stryker_M1126_Gunner_out = "RHS_Stryker_M1126_Gunner_turnout";
        RHS_Stryker_M1126_TC_in = "RHS_Stryker_M1126_TC_in";
        RHS_Stryker_M1126_TC_out = "vehicle_turnout_2_Idle";
        RHS_Stryker_M1126_TC_turnin = "RHS_Stryker_M1126_TC_turnin";
        RHS_Stryker_M1126_TC_turout = "RHS_Stryker_M1126_TC_turnout";
        RHS_Stryker_M1126_AG_in = "RHS_Stryker_M1126_AG_in";
        RHS_Stryker_M1126_AG_out = "vehicle_turnout_2_Idle";
        RHS_Stryker_M1126_AG_turnin = "RHS_Stryker_M1126_AG_turnin";
        RHS_Stryker_M1126_AG_turnout = "RHS_Stryker_M1126_AG_turnout";
        RHS_Stryker_M1127_Gunner_in = "RHS_Stryker_M1127_Gunner_in";
        RHS_Stryker_M1127_Gunner_out = "RHS_Stryker_M1127_Gunner_turnout";
        RHS_Stryker_M1127_M2_Gunner = "RHS_Stryker_M1127_M2_Gunner";
        RHS_Stryker_M1127_LRAS_Gunner = "RHS_Stryker_M1127_LRAS_Gunner";
        RHS_Stryker_M1134_Gunner_in = "RHS_Stryker_M1134_Gunner_in";
        RHS_Stryker_M1134_M240_Gunner = "RHS_Stryker_M1134_M240_Gunner";
    };
    class Actions {
        class CargoActions;
        class rhs_stryker_m1126_tc_in_actions: CargoActions {
            RHS_Stryker_M1126_TC_out = "RHS_Stryker_M1126_TC_turnout";
        };
        class rhs_stryker_m1126_AG_in_actions: CargoActions {
            RHS_Stryker_M1126_AG_out = "RHS_Stryker_M1126_AG_turnout";
        };
        class rhs_stryker_m1126_Driver_in_actions: CargoActions {
            RHS_Stryker_M1126_Driver_out = "RHS_Stryker_M1126_Driver_turnout";
        };
        class rhs_stryker_m1126_Driver_out_actions: CargoActions {
            RHS_Stryker_M1126_Driver_in = "RHS_Stryker_M1126_Driver_turnin";
        };
        class RifleStandActions;
        class FFV_BaseActions: RifleStandActions {
            RHS_Stryker_M1126_TC_in = "RHS_Stryker_M1126_TC_turnin";
            RHS_Stryker_M1126_AG_in = "RHS_Stryker_M1126_AG_turnin";
            RHS_Stryker_M1126_Gunner_in = "RHS_Stryker_M1126_Gunner_turnin";
            RHS_Stryker_M1127_Gunner_in = "RHS_Stryker_M1127_Gunner_turnin";
        };
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class PreciseCrew;
        class RHS_CrewIn_Base: Crew {};
        class RHS_Stryker_M1126_Driver_in_Dead: DefaultDie {
            actions = "DeadActions";
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_m1126_driver_in_kia.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_Stryker_M1126_Driver_in: RHS_CrewIn_Base {
            actions = "CargoActions";
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_m1126_Driver_in.rtm";
            interpolateTo[] = {"RHS_Stryker_M1126_Driver_in_Dead", 1};
            interpolateFrom[] = {};
            looped = 1;
        };
        class RHS_Stryker_M1126_Driver_out: RHS_Stryker_M1126_Driver_in {
            actions = "CargoActions";
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_m1126_Driver_out.rtm";
            looped = 1;
            minplaytime = 0.4;
            InterpolateTo[] = {"RHS_Stryker_M1126_Driver_in_Dead", 1};
            ConnectTo[] = {};
        };
        class RHS_Stryker_M1126_Driver_turnout: Crew {
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_m1126_Driver_turnout.rtm";
            speed = 1.1;
            looped = 0;
            minplaytime = 0.4;
            variantsAI[] = {"RHS_Stryker_M1126_Driver_out", 1};
            variantsPlayer[] = {"RHS_Stryker_M1126_Driver_out", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            interpolationspeed = 0.6;
        };
        class RHS_Stryker_M1126_Driver_turnin: RHS_Stryker_M1126_Driver_turnout {
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_m1126_Driver_turnin.rtm";
            InterpolateFrom[] = {"RHS_Stryker_M1126_Driver_in", 1.1};
            InterpolateTo[] = {"RHS_Stryker_M1126_Driver_in", 1.1};
            variantsAI[] = {"RHS_Stryker_M1126_Driver_in", 1};
            variantsPlayer[] = {"RHS_Stryker_M1126_Driver_in", 1};
            speed = 1.1;
        };
        class RHS_Stryker_M1126_Gunner_in_Dead: DefaultDie {
            actions = "DeadActions";
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_m1126_gunner_in_kia.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_Stryker_M1126_Gunner_in: RHS_CrewIn_Base {
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_m1126_gunner_in.rtm";
            interpolateTo[] = {
                "RHS_Stryker_M1126_TC_in_Dead",
                1,
                "RHS_Stryker_M1126_TC_turnout",
                0.1
            };
            interpolateFrom[] = {"RHS_Stryker_M1126_TC_turnin", 0.1};
        };
        class RHS_Stryker_M1126_gunner_turnout: Crew {
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_m1126_gunner_turnout.rtm";
            speed = 0.91;
            looped = 0;
            minplaytime = 0.4;
            InterpolateTo[] = {"vehicle_turnout_2_Idle", 1.1};
            ConnectTo[] = {"vehicle_turnout_2_Idle", 1};
            boundingSphere = 3;
            interpolationspeed = 3.2;
        };
        class RHS_Stryker_M1126_gunner_turnin: RHS_Stryker_M1126_gunner_turnout {
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_m1126_gunner_turnin.rtm";
            interpolateFrom[] = {"vehicle_turnout_2_Idle", 1};
            connectTo[] = {"RHS_Stryker_M1126_Gunner_in", 1};
            interpolateTo[] = {"RHS_Stryker_M1126_Gunner_in_Dead", 1};
            variantsAI[] = {"RHS_Stryker_M1126_Gunner_in", 1};
            variantsPlayer[] = {"RHS_Stryker_M1126_Gunner_in", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            interpolationspeed = 2;
            speed = 0.74;
        };
        class RHS_Stryker_M1126_TC_in_Dead: DefaultDie {
            actions = "DeadActions";
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_m1126_tc_in_kia.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_Stryker_M1126_TC_in: RHS_CrewIn_Base {
            actions = "rhs_stryker_m1126_tc_in_actions";
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_m1126_tc_in.rtm";
            interpolateTo[] = {
                "RHS_Stryker_M1126_TC_in_Dead",
                1,
                "RHS_Stryker_M1126_TC_turnout",
                0.1
            };
            interpolateFrom[] = {"RHS_Stryker_M1126_TC_turnin", 0.1};
            variantAfter[] = {5, 5, 5};
        };
        class RHS_Stryker_M1126_TC_turnout: Crew {
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_m1126_tc_turnout.rtm";
            speed = 0.65;
            looped = 0;
            minplaytime = 0.8;
            InterpolateTo[] = {"vehicle_turnout_2_Idle", 1.1};
            ConnectTo[] = {"vehicle_turnout_2_Idle", 1};
            boundingSphere = 3;
            interpolationspeed = 3.2;
        };
        class RHS_Stryker_M1126_TC_turnin: RHS_Stryker_M1126_TC_turnout {
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_m1126_tc_turnin.rtm";
            speed = 0.65;
            interpolateFrom[] = {"vehicle_turnout_2_Idle", 1};
            connectTo[] = {"RHS_Stryker_M1126_TC_in", 1};
            interpolateTo[] = {"RHS_Stryker_M1126_TC_in_Dead", 1};
            variantsAI[] = {"RHS_Stryker_M1126_TC_in", 1};
            variantsPlayer[] = {"RHS_Stryker_M1126_TC_in", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            interpolationspeed = 2;
        };
        class RHS_Stryker_M1126_AG_in_Dead: DefaultDie {
            actions = "DeadActions";
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_m1126_ag_in_kia.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_Stryker_M1126_AG_in: RHS_CrewIn_Base {
            actions = "rhs_stryker_m1126_AG_in_actions";
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_m1126_AG_in.rtm";
            interpolateTo[] = {
                "RHS_Stryker_M1126_AG_in_Dead",
                1,
                "RHS_Stryker_M1126_AG_turnout",
                0.1
            };
            interpolateFrom[] = {"RHS_Stryker_M1126_AG_turnin", 0.1};
            variantAfter[] = {5, 5, 5};
        };
        class RHS_Stryker_M1126_AG_turnout: RHS_Stryker_M1126_TC_turnout {
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_m1126_AG_turnout.rtm";
            speed = 0.65;
            interpolateTo[] = {"RHS_Stryker_M1126_AG_in_Dead", 1};
        };
        class RHS_Stryker_M1126_AG_turnin: RHS_Stryker_M1126_AG_turnout {
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_m1126_AG_turnin.rtm";
            speed = 0.65;
            interpolateFrom[] = {"vehicle_turnout_2_Idle", 1};
            connectTo[] = {"RHS_Stryker_M1126_AG_in", 1};
            interpolateTo[] = {"RHS_Stryker_M1126_AG_in_Dead", 1};
            variantsAI[] = {"RHS_Stryker_M1126_AG_in", 1};
            variantsPlayer[] = {"RHS_Stryker_M1126_AG_in", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            interpolationspeed = 2.2;
        };
        class RHS_Stryker_M1127_Gunner_in_Dead: DefaultDie {
            actions = "DeadActions";
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_M1127_gunner_in_kia.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_Stryker_M1127_Gunner_in: RHS_CrewIn_Base {
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_M1127_gunner_in.rtm";
            interpolateTo[] = {
                "RHS_Stryker_M1127_Gunner_in_Dead",
                1,
                "RHS_Stryker_M1127_gunner_turnout",
                0.1
            };
            interpolateFrom[] = {"RHS_Stryker_M1127_Gunner_turnin", 0.1};
        };
        class RHS_Stryker_M1127_gunner_turnout: Crew {
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_M1127_gunner_turnout.rtm";
            speed = 0.91;
            looped = 0;
            minplaytime = 0.4;
            InterpolateTo[] = {"vehicle_turnout_2_Idle", 1.1};
            ConnectTo[] = {"vehicle_turnout_2_Idle", 1};
            boundingSphere = 3;
            interpolationspeed = 3.2;
        };
        class RHS_Stryker_M1127_gunner_turnin: RHS_Stryker_M1127_gunner_turnout {
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_M1127_gunner_turnin.rtm";
            interpolateFrom[] = {"vehicle_turnout_2_Idle", 1};
            connectTo[] = {"RHS_Stryker_M1127_Gunner_in", 1};
            interpolateTo[] = {"RHS_Stryker_M1127_Gunner_in_Dead", 1};
            variantsAI[] = {"RHS_Stryker_M1127_Gunner_in", 1};
            variantsPlayer[] = {"RHS_Stryker_M1127_Gunner_in", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            interpolationspeed = 2;
            speed = 0.74;
        };
        class RHS_Stryker_M1127_M2_Gunner_Dead: DefaultDie {
            actions = "DeadActions";
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_m1127_M2_Gunner_kia.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_Stryker_M1127_M2_Gunner: RHS_CrewIn_Base {
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_m1127_M2_Gunner.rtm";
            interpolateTo[] = {"RHS_Stryker_M1127_M2_Gunner_Dead", 1};
            variantAfter[] = {5, 5, 5};
        };
        class RHS_Stryker_M1127_LRAS_Gunner_Dead: DefaultDie {
            actions = "DeadActions";
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_m1127_LRAS_Gunner_kia.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_Stryker_M1127_LRAS_Gunner: RHS_CrewIn_Base {
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_m1127_LRAS_Gunner.rtm";
            interpolateTo[] = {"RHS_Stryker_M1127_LRAS_Gunner_Dead", 1};
            variantAfter[] = {5, 5, 5};
        };
        class RHS_Stryker_M1134_Gunner_in_Dead: DefaultDie {
            actions = "DeadActions";
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_m1134_Gunner_in_kia.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_Stryker_M1134_Gunner_in: RHS_CrewIn_Base {
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_m1134_Gunner_in.rtm";
            interpolateTo[] = {"RHS_Stryker_M1134_Gunner_in_Dead", 1};
            variantAfter[] = {5, 5, 5};
        };
        class RHS_Stryker_M1134_m240_Gunner: RHS_CrewIn_Base {
            file = "rhsusf\addons\rhsusf_c_stryker\anims\stryker_m1134_m240_Gunner.rtm";
            interpolateTo[] = {"RHS_HMMWV_KIA_Gunner", 1};
            variantAfter[] = {5, 5, 5};
        };
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class Stryker {
            class stryker_turnActions {
                file = "rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_turnActions.sqf";
            };
            class stryker_seatSwitched {
                file = "rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_seatSwitched.sqf";
            };
            class stryker_m1126_init {
                file = "rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_m1126_init.sqf";
            };
            class stryker_m1127_init {
                file = "rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_m1127_init.sqf";
            };
            class stryker_m1127_turret {
                file = "rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_m1127_turret.sqf";
            };
            class stryker_m1127_turret_turnout {
                file = "rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_m1127_turret_turnout.sqf";
            };
            class stryker_m1127_turret_getout_eh {
                file = "rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_m1127_turret_getout_eh.sqf";
            };
            class stryker_m1127_turret_getin_eh {
                file = "rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_m1127_turret_getin_eh.sqf";
            };
            class stryker_m1127_fireSmoke {
                file = "rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_m1127_fireSmoke.sqf";
            };
            class stryker_m1127_GLUA_UI {
                file = "rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_m1127_GLUA_UI.sqf";
            };
            class stryker_m1132_LMS_VG {
                file = "rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_m1132_LMS_VG.sqf";
            };
            class stryker_m1132_LMS_UI {
                file = "rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_m1132_LMS_UI.sqf";
            };
            class stryker_m1134_init {
                file = "rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_m1134_init.sqf";
            };
            class stryker_m1134_mast {
                file = "rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_m1134_mast.sqf";
            };
            class stryker_m1134_turret {
                file = "rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_m1134_turret.sqf";
            };
            class stryker_m1134_turret_getout_eh {
                file = "rhsusf\addons\rhsusf_c_stryker\scripts\rhs_stryker_m1134_turret_getout_eh.sqf";
            };
        };
    };
};
class RscEdit;
class RscButton;
class RscOpticsValue;
class RscOpticsText;
class RscIGUIText;
class RscIGUIValue;
class RscText;
class RscPicture;
class HScrollbar;
class VScrollbar;
class RscSlider;
class IGUIBack;
class RHS_BFT_Map_Scale_UI {
    enableSimulation = 1;
    idd = 101;
    movingenable = 0;
    class Controls {
        class RscSlider_1900: RscSlider {
            idc = 1900;
            x = "0.352539 * safezoneW + safezoneX";
            y = "0.487963 * safezoneH + safezoneY";
            w = "0.193912 * safezoneW";
            h = "0.0376157 * safezoneH";
            onSliderPosChanged = "cameraon animateSource ['BFT_Map_Scale',_this # 1,true];";
        };
        class text: RscText {
            idc = 1001;
            text = "map scale";
            x = "0.425079 * safezoneW + safezoneX";
            y = "0.434173 * safezoneH + safezoneY";
            w = "0.0352567 * safezoneW";
            h = "0.0470196 * safezoneH";
        };
    };
};
class RscInGameUI {
    class RscUnitInfo;
    class RHS_RscUnitInfoAir_m1127_turret: RscUnitInfo {
        idd = 300;
        controls[] = {"CA_Zeroing", "RHS_tigr_handler"};
        class RHS_m1127_handler: RscPicture {
            idc = 699999;
        };
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhs_fnc_m1127_turret_ui";
    };
};
class RHS_LaneMarkingSystem_Controls {
    enableSimulation = 1;
    idd = 201;
    movingenable = 0;
    class Controls {
        class IGUIBack_2200: IGUIBack {
            idc = 2200;
            x = "-0.5 * 	((0.01875 * SafezoneH)) + 	(0)";
            y = "3 * 	((0.025 * SafezoneH)) + 	(0)";
            w = "26.5 * 	((0.01875 * SafezoneH))";
            h = "11 * 	((0.025 * SafezoneH))";
        };
        class Button_TimeInterval: RscButton {
            idc = 1600;
            text = "Activate Time Interval";
            x = "0 * 	((0.01875 * SafezoneH)) + 	(0)";
            y = "8 * 	((0.025 * SafezoneH)) + 	(0)";
            w = "6 * 	((0.01875 * SafezoneH))";
            h = "2 * 	((0.025 * SafezoneH))";
        };
        class Button_DistanceInterval: RscButton {
            idc = 1601;
            text = "Activate Distance Interval";
            x = "0 * 	((0.01875 * SafezoneH)) + 	(0)";
            y = "11 * 	((0.025 * SafezoneH)) + 	(0)";
            w = "6 * 	((0.01875 * SafezoneH))";
            h = "2 * 	((0.025 * SafezoneH))";
        };
        class Button_Distance_1: RscButton {
            idc = 1602;
            text = "15m";
            x = "6.5 * 	((0.01875 * SafezoneH)) + 	(0)";
            y = "11 * 	((0.025 * SafezoneH)) + 	(0)";
            w = "3.5 * 	((0.01875 * SafezoneH))";
            h = "2 * 	((0.025 * SafezoneH))";
        };
        class Button_Distance_2: RscButton {
            idc = 1603;
            text = "25m";
            x = "10.5 * 	((0.01875 * SafezoneH)) + 	(0)";
            y = "11 * 	((0.025 * SafezoneH)) + 	(0)";
            w = "3.5 * 	((0.01875 * SafezoneH))";
            h = "2 * 	((0.025 * SafezoneH))";
        };
        class Button_Distance_3: RscButton {
            idc = 1604;
            text = "50m";
            x = "14.5 * 	((0.01875 * SafezoneH)) + 	(0)";
            y = "11 * 	((0.025 * SafezoneH)) + 	(0)";
            w = "3.5 * 	((0.01875 * SafezoneH))";
            h = "2 * 	((0.025 * SafezoneH))";
        };
        class Button_Distance_4: RscButton {
            idc = 1605;
            text = "100m";
            x = "18.5 * 	((0.01875 * SafezoneH)) + 	(0)";
            y = "11 * 	((0.025 * SafezoneH)) + 	(0)";
            w = "3.5 * 	((0.01875 * SafezoneH))";
            h = "2 * 	((0.025 * SafezoneH))";
        };
        class Button_Distance_5: RscButton {
            idc = 1606;
            text = "250m";
            x = "22.5 * 	((0.01875 * SafezoneH)) + 	(0)";
            y = "11 * 	((0.025 * SafezoneH)) + 	(0)";
            w = "3 * 	((0.01875 * SafezoneH))";
            h = "2 * 	((0.025 * SafezoneH))";
        };
        class Button_Time_1: RscButton {
            idc = 1607;
            text = "5s";
            x = "6.5 * 	((0.01875 * SafezoneH)) + 	(0)";
            y = "8 * 	((0.025 * SafezoneH)) + 	(0)";
            w = "3.5 * 	((0.01875 * SafezoneH))";
            h = "2 * 	((0.025 * SafezoneH))";
        };
        class Button_Time_2: RscButton {
            idc = 1608;
            text = "10s";
            x = "10.5 * 	((0.01875 * SafezoneH)) + 	(0)";
            y = "8 * 	((0.025 * SafezoneH)) + 	(0)";
            w = "3.5 * 	((0.01875 * SafezoneH))";
            h = "2 * 	((0.025 * SafezoneH))";
        };
        class Button_Time_3: RscButton {
            idc = 1609;
            text = "15s";
            x = "14.5 * 	((0.01875 * SafezoneH)) + 	(0)";
            y = "8 * 	((0.025 * SafezoneH)) + 	(0)";
            w = "3.5 * 	((0.01875 * SafezoneH))";
            h = "2 * 	((0.025 * SafezoneH))";
        };
        class Button_Time_4: RscButton {
            idc = 1610;
            text = "25s";
            x = "18.5 * 	((0.01875 * SafezoneH)) + 	(0)";
            y = "8 * 	((0.025 * SafezoneH)) + 	(0)";
            w = "3.5 * 	((0.01875 * SafezoneH))";
            h = "2 * 	((0.025 * SafezoneH))";
        };
        class Button_Time_5: RscButton {
            idc = 1611;
            text = "40s";
            x = "22.5 * 	((0.01875 * SafezoneH)) + 	(0)";
            y = "8 * 	((0.025 * SafezoneH)) + 	(0)";
            w = "3 * 	((0.01875 * SafezoneH))";
            h = "2 * 	((0.025 * SafezoneH))";
        };
        class TitleText: RscText {
            idc = 1000;
            text = "Lane Marking System controls";
            style = 2;
            x = "7 * 	((0.01875 * SafezoneH)) + 	(0)";
            y = "4 * 	((0.025 * SafezoneH)) + 	(0)";
            w = "11.5 * 	((0.01875 * SafezoneH))";
            h = "2.5 * 	((0.025 * SafezoneH))";
        };
    };
};
class RHS_GrenadeLauncherUnitAssembly_Options {
    enableSimulation = 1;
    idd = 201;
    movingenable = 0;
    class Objects {
        class Model {
            idc = 901;
            type = 82;
            model = "\rhsusf\addons\rhsusf_c_stryker\data\rhsusf_GLUA.p3d";
            direction[] = {0, 0, -1};
            up[] = {0, 1, 0};
            x = "20.0 * (((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
            y = "14.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
            z = 0.06;
            scale = "0.15 * (SafeZoneW Min SafeZoneH)";
            xBack = 0;
            yBack = 0;
            zBack = 0;
            inBack = 0;
            enableZoom = 0;
            zoomDuration = 0;
            useGlobalLight = 0;
            minGlobalLightIntensity = -11111111000;
            class AnimationSources {
                class rhsusf_weap_M6_active {
                    source = "user";
                    initPhase = 1;
                    animPeriod = 0.25;
                };
                class rhsusf_weap_M6_reload {
                    source = "user";
                    initPhase = 0;
                    animPeriod = 0.25;
                };
                class rhsusf_weap_M6_L1_active {
                    source = "user";
                    initPhase = 1;
                    animPeriod = 0.25;
                };
                class rhsusf_weap_M6_L2_active {
                    source = "user";
                    initPhase = 1;
                    animPeriod = 0.25;
                };
                class rhsusf_weap_M6_L3_active {
                    source = "user";
                    initPhase = 1;
                    animPeriod = 0.25;
                };
                class rhsusf_weap_M6_R1_active {
                    source = "user";
                    initPhase = 1;
                    animPeriod = 0.25;
                };
                class rhsusf_weap_M6_R2_active {
                    source = "user";
                    initPhase = 1;
                    animPeriod = 0.25;
                };
                class rhsusf_weap_M6_R3_active {
                    source = "user";
                    initPhase = 1;
                    animPeriod = 0.25;
                };
                class ind_smoke_override {
                    source = "user";
                    initPhase = 0;
                    animPeriod = 0.25;
                };
            };
        };
    };
    class Controls {
        class Button_Smoke_L1: RscButton {
            idc = 1600;
            x = "5.5 * 	((0.01875 * SafezoneH)) + 	(0)";
            y = "2 * 	((0.025 * SafezoneH)) + 	(0)";
            w = "3.0 * 	((0.01875 * SafezoneH))";
            h = "4.0 * 	((0.025 * SafezoneH))";
            tooltip = "Switch smoke launcher";
            colorDisabled[] = {1, 1, 1, 0.25};
            colorBackground[] = {0, 0, 0, 0};
            colorBackgroundDisabled[] = {0, 0, 0, 0};
            colorBackgroundActive[] = {0, 0, 0, 0};
            colorFocused[] = {0, 0, 0, 0};
            soundClick[] = {"", 0, 1};
        };
        class Button_Smoke_L2: Button_Smoke_L1 {
            idc = 1601;
            x = "5.5 * 	((0.01875 * SafezoneH)) + 	(0)";
            y = "9.5 * 	((0.025 * SafezoneH)) + 	(0)";
            w = "3.0 * 	((0.01875 * SafezoneH))";
            h = "4.0 * 	((0.025 * SafezoneH))";
        };
        class Button_Smoke_L3: Button_Smoke_L1 {
            idc = 1602;
            x = "5.5 * 	((0.01875 * SafezoneH)) + 	(0)";
            y = "16.5 * 	((0.025 * SafezoneH)) + 	(0)";
            w = "3.0 * 	((0.01875 * SafezoneH))";
            h = "4.0 * 	((0.025 * SafezoneH))";
        };
        class Button_Smoke_R1: Button_Smoke_L1 {
            idc = 1603;
            x = "17.0 * 	((0.01875 * SafezoneH)) + 	(0)";
            y = "2 * 	((0.025 * SafezoneH)) + 	(0)";
            w = "3.0 * 	((0.01875 * SafezoneH))";
            h = "4.0 * 	((0.025 * SafezoneH))";
        };
        class Button_Smoke_R2: Button_Smoke_L1 {
            idc = 1604;
            x = "17.0 * 	((0.01875 * SafezoneH)) + 	(0)";
            y = "9.5 * 	((0.025 * SafezoneH)) + 	(0)";
            w = "3.0 * 	((0.01875 * SafezoneH))";
            h = "4.0 * 	((0.025 * SafezoneH))";
        };
        class Button_Smoke_R3: Button_Smoke_L1 {
            idc = 1605;
            x = "17.0 * 	((0.01875 * SafezoneH)) + 	(0)";
            y = "16.5 * 	((0.025 * SafezoneH)) + 	(0)";
            w = "3.0 * 	((0.01875 * SafezoneH))";
            h = "4.0 * 	((0.025 * SafezoneH))";
        };
        class Button_Smoke_Fire: Button_Smoke_L1 {
            tooltip = "Fire smoke grenades";
            idc = 1606;
            x = "22.5 * 	((0.01875 * SafezoneH)) + 	(0)";
            y = "14.0 * 	((0.025 * SafezoneH)) + 	(0)";
            w = "3.0 * 	((0.01875 * SafezoneH))";
            h = "4.0 * 	((0.025 * SafezoneH))";
        };
    };
};
class CfgAnimationSourceSounds {
    class RHS_ButtonSwitch {
        class SwitchSound {
            loop = 0;
            terminate = 1;
            trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
            sound0[] = {
                "\rhsusf\addons\rhsusf_optics\sounds\switch_pyk.ogg",
                26,
                1,
                5
            };
            sound[] = {"sound0", 1};
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
class DefaultEventhandlers;
class CfgVehicles {
    class Car;
    class Car_F: Car {
        class AnimationSources;
    };
    class Wheeled_APC_F: Car_F {
        class ViewPilot;
        class ViewOptics;
        class ViewCargo;
        class NewTurret;
        class Turrets {
            class MainTurret: NewTurret {
                class ViewOptics;
                class ViewGunner;
                class Turrets {
                    class CommanderOptics;
                };
            };
        };
        class EventHandlers;
        class Components;
    };
    class rhsusf_stryker_base: Wheeled_APC_F {
        dlc = "RHS_USAF";
        accuracy = 0.25;
        category = "rhs_vehclass_apc";
        editorSubcategory = "EdSubcat_APCs";
        driverAction = "RHS_Stryker_M1126_Driver_out";
        driverInAction = "RHS_Stryker_M1126_Driver_in";
        driverDoor = "Hatch_Driver";
        cargoIsCoDriver[] = {0};
        forceHideDriver = 0;
        hideProxyInCombat = 1;
        viewDriverInExternal = 1;
        viewDriverShadowAmb = 0.5;
        viewDriverShadowDiff = 0.05;
        driverForceOptics = 0;
        LODDriverTurnedOut = 1;
        LODDriverTurnedin = 1100;
        driverOpticsModel = "\A3\weapons_f\reticle\optics_empty";
        driverLeftHandAnimName = "drivewheel";
        driverRightHandAnimName = "drivewheel";
        driverLeftLegAnimName = "pedal_brake";
        driveOnComponent[] = {"Hull"};
        unitInfoType = "RHS_RscUnitInfoStryker";
        selectionBackLights = "Light_Back";
        selectionBrakeLights = "Light_Brake";
        class TransportBackpacks {
            class _xx_rhsusf_falconii {
                backpack = "rhsusf_falconii";
                count = 8;
            };
        };
        class TransportMagazines {
            class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
                magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
                count = 75;
            };
            class _xx_rhsusf_100Rnd_556x45_soft_pouch {
                magazine = "rhsusf_100Rnd_556x45_soft_pouch";
                count = 11;
            };
            class _xx_rhsusf_100Rnd_762x51 {
                magazine = "rhsusf_100Rnd_762x51";
                count = 11;
            };
            class _xx_rhs_fgm148_magazine_AT {
                magazine = "rhs_fgm148_magazine_AT";
                count = 2;
            };
            class _xx_rhs_m136_mag {
                magazine = "rhs_m136_mag";
                count = 2;
            };
            class _xx_rhs_mag_M433_HEDP {
                magazine = "rhs_mag_M433_HEDP";
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
            class _xx_rhs_weap_m4 {
                weapon = "rhs_weap_m4";
                count = 2;
            };
            class _xx_rhs_weap_fgm148 {
                weapon = "rhs_weap_fgm148";
                count = 2;
            };
            class _xx_rhs_weap_M136 {
                weapon = "rhs_weap_M136";
                count = 2;
            };
        };
        memoryPointSupply = "SupplyPos";
        supplyRadius = 4.7;
        transportMaxMagazines = 160;
        transportMaxWeapons = 10;
        class AnimationSources: AnimationSources {
            class Extend_Mirrors {
                displayName = "Fold mirrors";
                useSource = 1;
                source = "user";
                animPeriod = 1;
            };
            class Hatch_Driver {
                displayName = "Open driver hatch";
                source = "door";
                animPeriod = 2.1;
                sound = "RHS_HMMWV_Door";
                soundPosition = "hatch_driver_axis";
            };
            class Unhide_vis_optic_d_driver1 {
                source = "hit";
                hitpoint = "Hit_Optic_Driver1";
            };
            class Unhide_vis_optic_d_driver2 {
                source = "hit";
                hitpoint = "Hit_Optic_Driver2";
            };
            class Unhide_vis_optic_d_driver3 {
                source = "hit";
                hitpoint = "Hit_Optic_Driver3";
            };
            class Unhide_vis_optic_d_DVEA {
                source = "hit";
                hitpoint = "Hit_Optic_DVEA";
            };
            class Unhide_vis_optic_d_driver_rear {
                source = "hit";
                hitpoint = "Hit_Optic_Driver_Rear";
            };
        };
        class ViewPilot: ViewPilot {
            initAngleX = -0;
            initAngleY = 0;
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
        class ViewOptics: ViewOptics {
            visionMode[] = {"Normal", "NVG"};
            initFov = 0.4;
            minFov = 0.23;
            maxFov = 0.4;
        };
        class DriverOpticsIn {
            class Wide: ViewOptics {
                camPos = "view_driver";
                opticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block";
                visionMode[] = {"Normal"};
                hitpoint = "Hit_Optic_Driver2";
            };
            class DVE_Wide: Wide {
                camPos = "view_DVE";
                opticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_DVE_4x3";
                visionMode[] = {"TI"};
                thermalMode[] = {0, 1};
                initFov = 1.07692;
                minFov = 1.07692;
                maxFov = 1.07692;
                hitpoint = "Hit_Optic_DVEA";
            };
            class DVS_Rear: DVE_Wide {
                camPos = "view_rear";
                camDir = "view_rear_dir";
                hitpoint = "Hit_Optic_Driver_Rear";
            };
        };
        class PlateInfos {
            name = "spz";
            color[] = {0, 0, 0, 1};
            plateFont = "rhsusf_font_stencil";
            plateFormat = "#/# SCR";
            plateLetters = "ABCDEFHIKLMOPRSTVXYZ";
        };
        class Exhausts {};
        class Reflectors {
            class Left {
                color[] = {1, 0.7, 0.6};
                ambient[] = {1, 0.9, 0.7};
                selection = "Light_L";
                position = "Light_L";
                direction = "Light_L_end";
                hitpointClass = "Hit_Light_L";
                size = 1;
                innerAngle = 60;
                outerAngle = 179;
                coneFadeCoef = 10;
                intensity = 100;
                useFlare = 0;
                dayLight = 0;
                flareSize = 1;
                class Attenuation {
                    start = 0.1;
                    constant = 0;
                    linear = 0;
                    quadratic = 0.05;
                    hardLimitStart = 80;
                    hardLimitEnd = 120;
                };
            };
            class Right: Left {
                selection = "Light_R";
                position = "Light_R";
                direction = "Light_R_end";
                hitpointClass = "Hit_Light_R";
            };
            class Left_Flare: Left {
                position = "Light_L_Flare";
                useFlare = 1;
            };
            class Right_Flare: Right {
                position = "Light_R_Flare";
                useFlare = 1;
            };
        };
        aggregateReflectors[] = {{"Left", "Right", "Left_Flare", "Right_Flare"}};
        armorLights = 0.1;
        class compartmentsLights {
            class Comp1 {
                class Light1 {
                    point = "light_1";
                    color[] = {20, 30, 30};
                    ambient[] = {0, 0, 0};
                    intensity = 1.5;
                    size = 0;
                    useFlare = 0;
                    flareSize = 0;
                    flareMaxDistance = 0;
                    dayLight = 0;
                    blinking = 0;
                    drawLight = 0;
                    activeLight = 0;
                    class Attenuation {
                        start = 0;
                        constant = 0;
                        linear = 1;
                        quadratic = 70;
                        hardLimitStart = 0.15;
                        hardLimitEnd = 1.15;
                    };
                };
                class Light2: Light1 {
                    point = "light_2";
                    color[] = {20, 30, 30};
                    ambient[] = {0, 0, 0};
                    intensity = 5.5;
                };
                class Light3: Light2 {
                    point = "light_3";
                };
                class Light4: Light2 {
                    point = "light_4";
                };
            };
        };
        fuelExplosionPower = 0.1;
        secondaryExplosion = -1;
        armor = 220;
        armorStructural = 200;
        explosionShielding = 2;
        crewExplosionProtection = 0.9999995;
        class HitPoints {
            class HitHull {
                armor = -400;
                minimalHit = -0.4;
                explosionShielding = 0.05;
                armorComponent = "hit_hull";
                name = "hit_hull";
                visual = "zbytek";
                passThrough = 0.1;
                radius = 0.2;
            };
            class HitEngine {
                armor = -180;
                minimalHit = -0.1;
                explosionShielding = 0.5;
                armorComponent = "hit_engine";
                name = "hit_engine";
                visual = "-";
                passThrough = 0.1;
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
                };
            };
            class HitFuel_L {
                armor = -70;
                minimalHit = 0.1;
                explosionShielding = 0.6;
                armorComponent = "hit_fuel_l";
                name = "hit_fuel_l";
                visual = "-";
                passThrough = 0.15;
                radius = 0.2;
            };
            class HitFuel_R {
                armor = -70;
                minimalHit = 0.1;
                explosionShielding = 0.6;
                armorComponent = "hit_fuel_r";
                name = "hit_fuel_r";
                visual = "-";
                passThrough = 0.15;
                radius = 0.2;
            };
            class HitFuel {
                armor = 999;
                depends = "(HitFuel_L+HitFuel_R)*0.5";
                name = "hit_fuel";
                visual = "-";
                passThrough = 0;
                radius = 0.2;
            };
            class Hit_Light_L {
                armor = -10;
                explosionShielding = 1;
                name = "Hit_Light_L";
                visual = "Light_L";
                armorComponent = "Hit_Light_L";
                passThrough = 0;
                radius = 0.2;
            };
            class Hit_Light_R {
                armor = -10;
                explosionShielding = 1;
                name = "Hit_Light_R";
                visual = "Light_R";
                armorComponent = "Hit_Light_R";
                passThrough = 0;
                radius = 0.2;
            };
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
            class Hit_Optic_DVEA {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_DVEA";
                armorComponent = "Hit_Optic_DVEA";
                passThrough = 0;
            };
            class Hit_Optic_Driver_Rear {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_driver_rear";
                armorComponent = "Hit_Optic_Driver";
                passThrough = 0;
            };
            class HitLFWheel {
                armor = -180;
                minimalHit = -0.1;
                explosionShielding = 0.2;
                passThrough = 0;
                radius = 0.2;
                name = "wheel_1_1_hit";
                visual = "wheel_1_1_damage";
                armorComponent = "wheel_1_1_hide";
            };
            class HitLF2Wheel {
                armor = -180;
                minimalHit = -0.1;
                explosionShielding = 0.2;
                passThrough = 0;
                radius = 0.2;
                name = "wheel_1_2_hit";
                visual = "wheel_1_2_damage";
                armorComponent = "wheel_1_2_hide";
            };
            class HitLMWheel {
                armor = -180;
                minimalHit = -0.1;
                explosionShielding = 0.2;
                passThrough = 0;
                radius = 0.2;
                name = "wheel_1_3_hit";
                visual = "wheel_1_3_damage";
                armorComponent = "wheel_1_3_hide";
            };
            class HitLBWheel {
                armor = -180;
                minimalHit = -0.1;
                explosionShielding = 0.2;
                passThrough = 0;
                radius = 0.2;
                name = "wheel_1_4_hit";
                visual = "wheel_1_4_damage";
                armorComponent = "wheel_1_4_hide";
            };
            class HitRFWheel {
                armor = -180;
                minimalHit = -0.1;
                explosionShielding = 0.2;
                passThrough = 0;
                radius = 0.2;
                name = "wheel_2_1_hit";
                visual = "wheel_2_1_damage";
                armorComponent = "wheel_2_1_hide";
            };
            class HitRF2Wheel {
                armor = -180;
                minimalHit = -0.1;
                explosionShielding = 0.2;
                passThrough = 0;
                radius = 0.2;
                name = "wheel_2_2_hit";
                visual = "wheel_2_2_damage";
                armorComponent = "wheel_2_2_hide";
            };
            class HitRMWheel {
                armor = -180;
                minimalHit = -0.1;
                explosionShielding = 0.2;
                passThrough = 0;
                radius = 0.2;
                name = "wheel_2_3_hit";
                visual = "wheel_2_3_damage";
                armorComponent = "wheel_2_3_hide";
            };
            class HitRBWheel {
                armor = -180;
                minimalHit = -0.1;
                explosionShielding = 0.2;
                passThrough = 0;
                radius = 0.2;
                name = "wheel_2_4_hit";
                visual = "wheel_2_4_damage";
                armorComponent = "wheel_2_4_hide";
            };
        };
        simulation = "CarX";
        thrustDelay = 0.35;
        brakeIdleSpeed = 1.78;
        maxSpeed = 100;
        fuelCapacity = 25;
        wheelCircumference = 3.805;
        waterLeakiness = 2.5;
        dampersBumpCoef = 4.5;
        terrainCoef = 1.5;
        turnCoef = 3;
        wheelDestroyRadiusCoef = 0.6;
        normalSpeedForwardCoef = 0.6;
        slowSpeedForwardCoef = 0.3;
        accelAidForceYOffset = -1.5;
        antiRollbarForceCoef = 24;
        antiRollbarForceLimit = 30;
        antiRollbarSpeedMin = 15;
        antiRollbarSpeedMax = 65;
        enginePower = 325;
        peakTorque = 1457.5;
        idleRpm = 650;
        redRpm = 2600;
        maxOmega = 272.271;
        minOmega = 52.3599;
        dampingRateFullThrottle = 0.08;
        dampingRateZeroThrottleClutchEngaged = 2;
        dampingRateZeroThrottleClutchDisengaged = 0.05;
        torqueCurve[] = {
            {0, 0},
            {0.163077, 0.277015},
            {0.231154, 0.614065},
            {0.306154, 0.932247},
            {0.358846, 1},
            {0.615, 1},
            {0.973846, 0.795026},
            {1.28192, 0.227273}
        };
        changeGearMinEffectivity[] = {0.5, 0.15, 0.97, 0.97, 0.97, 0.97, 0.97, 0.985};
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -5.03,
                "N",
                0,
                "D1",
                3.49,
                "D2",
                1.86,
                "D3",
                1.41,
                "D4",
                1,
                "D5",
                0.75,
                "D6",
                0.65
            };
            TransmissionRatios[] = {"High", 8};
            AmphibiousRatios[] = {"R1", -10, "N", 0, "D1", 30};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        switchTime = 0.1;
        latency = 1.4;
        clutchStrength = 35;
        differentialType = "all_limited";
        frontRearSplit = 0.5;
        frontBias = 1.3;
        rearBias = 1.3;
        centreBias = 1.3;
        class Wheels {
            class L1 {
                steering = 1;
                side = "left";
                suspTravelDirection[] = {-0.125, -1, 0};
                boneName = "wheel_1_1_damper";
                center = "wheel_1_1_center";
                boundary = "wheel_1_1_bound";
                suspForceAppPointOffset = "wheel_1_1_center";
                tireForceAppPointOffset = "wheel_1_1_center";
                width = 0.275;
                mass = 187.5;
                MOI = 60;
                dampingRate = 0.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 45000;
                maxHandBrakeTorque = 0;
                maxCompression = 0.1125;
                maxDroop = 0.15;
                sprungMass = -1;
                springStrength = 160000;
                springDamperRate = 8790;
                longitudinalStiffnessPerUnitGravity = 10000;
                latStiffX = 25;
                latStiffY = 180;
                frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1, 1}};
            };
            class L2: L1 {
                steering = 1;
                boneName = "wheel_1_2_damper";
                center = "wheel_1_2_center";
                boundary = "wheel_1_2_bound";
                suspForceAppPointOffset = "wheel_1_2_center";
                tireForceAppPointOffset = "wheel_1_2_center";
            };
            class L3: L1 {
                steering = 0;
                boneName = "wheel_1_3_damper";
                center = "wheel_1_3_center";
                boundary = "wheel_1_3_bound";
                suspForceAppPointOffset = "wheel_1_3_center";
                tireForceAppPointOffset = "wheel_1_3_center";
                maxHandBrakeTorque = 300000;
            };
            class L4: L1 {
                steering = 0;
                boneName = "wheel_1_4_damper";
                center = "wheel_1_4_center";
                boundary = "wheel_1_4_bound";
                suspForceAppPointOffset = "wheel_1_4_center";
                tireForceAppPointOffset = "wheel_1_4_center";
                maxHandBrakeTorque = 300000;
            };
            class R1: L1 {
                side = "right";
                suspTravelDirection[] = {0.125, -1, 0};
                boneName = "wheel_2_1_damper";
                center = "wheel_2_1_center";
                boundary = "wheel_2_1_bound";
                suspForceAppPointOffset = "wheel_2_1_center";
                tireForceAppPointOffset = "wheel_2_1_center";
            };
            class R2: R1 {
                steering = 1;
                boneName = "wheel_2_2_damper";
                center = "wheel_2_2_center";
                boundary = "wheel_2_2_bound";
                suspForceAppPointOffset = "wheel_2_2_center";
                tireForceAppPointOffset = "wheel_2_2_center";
            };
            class R3: R1 {
                steering = 0;
                boneName = "wheel_2_3_damper";
                center = "wheel_2_3_center";
                boundary = "wheel_2_3_bound";
                suspForceAppPointOffset = "wheel_2_3_center";
                tireForceAppPointOffset = "wheel_2_3_center";
                maxHandBrakeTorque = 300000;
            };
            class R4: R1 {
                steering = 0;
                boneName = "wheel_2_4_damper";
                center = "wheel_2_4_center";
                boundary = "wheel_2_4_bound";
                suspForceAppPointOffset = "wheel_2_4_center";
                tireForceAppPointOffset = "wheel_2_4_center";
                maxHandBrakeTorque = 300000;
            };
        };
        attenuationEffectType = "TankAttenuation";
        soundGetIn[] = {"A3\Sounds_F_EPB\Tracked\noises\get_in_out", 0.56234133, 1};
        soundGetOut[] = {
            "A3\Sounds_F_EPB\Tracked\noises\get_in_out",
            0.56234133,
            1,
            20
        };
        soundTurnIn[] = {
            "A3\Sounds_F\vehicles\noises\Turn_in_out",
            1.7782794,
            1,
            20
        };
        soundTurnOut[] = {
            "A3\Sounds_F\vehicles\noises\Turn_in_out",
            1.7782794,
            1,
            20
        };
        soundTurnInInternal[] = {
            "A3\Sounds_F\vehicles\noises\Turn_in_out",
            1.7782794,
            1,
            20
        };
        soundTurnOutInternal[] = {
            "A3\Sounds_F\vehicles\noises\Turn_in_out",
            1.7782794,
            1,
            20
        };
        soundDammage[] = {"", 0.56234133, 1};
        soundEngineOnInt[] = {"A3\Sounds_F\vehicles2\armor\APC_Wheeled_01\APC_Wheeled_01_Engine_Int_Start", 0.7943282, 1};
        soundEngineOffInt[] = {"A3\Sounds_F\vehicles2\armor\APC_Wheeled_01\APC_Wheeled_01_Engine_Int_Stop", 0.7943282, 1};
        soundEngineOnExt[] = {
            "A3\Sounds_F\vehicles2\armor\APC_Wheeled_01\APC_Wheeled_01_Engine_Ext_Start",
            1,
            1,
            100
        };
        soundEngineOffExt[] = {
            "A3\Sounds_F\vehicles2\armor\APC_Wheeled_01\APC_Wheeled_01_Engine_Ext_Stop",
            1,
            1,
            100
        };
        BushCrash1[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_01",
            0.63095737,
            1,
            100
        };
        BushCrash2[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_02",
            0.63095737,
            1,
            100
        };
        BushCrash3[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_03",
            0.63095737,
            1,
            100
        };
        soundBushCrash[] = {
            "BushCrash1",
            0.33,
            "BushCrash2",
            0.33,
            "BushCrash3",
            0.33
        };
        buildCrash0[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
            3.1622777,
            1,
            200
        };
        buildCrash1[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
            3.1622777,
            1,
            200
        };
        buildCrash2[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
            3.1622777,
            1,
            200
        };
        buildCrash3[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
            3.1622777,
            1,
            200
        };
        buildCrash4[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
            3.1622777,
            1,
            200
        };
        buildCrash5[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
            3.1622777,
            1,
            200
        };
        soundBuildingCrash[] = {
            "buildCrash0",
            0.166,
            "buildCrash1",
            0.166,
            "buildCrash2",
            0.166,
            "buildCrash3",
            0.166,
            "buildCrash4",
            0.166,
            "buildCrash5",
            0.166
        };
        woodCrash0[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
            3.1622777,
            1,
            200
        };
        woodCrash1[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
            3.1622777,
            1,
            200
        };
        woodCrash2[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
            3.1622777,
            1,
            200
        };
        woodCrash3[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
            3.1622777,
            1,
            200
        };
        woodCrash4[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
            3.1622777,
            1,
            200
        };
        woodCrash5[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
            3.1622777,
            1,
            200
        };
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
        ArmorCrash0[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
            3.1622777,
            1,
            200
        };
        ArmorCrash1[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
            3.1622777,
            1,
            200
        };
        ArmorCrash2[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
            3.1622777,
            1,
            200
        };
        ArmorCrash3[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
            3.1622777,
            1,
            200
        };
        ArmorCrash4[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
            3.1622777,
            1,
            200
        };
        ArmorCrash5[] = {
            "A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
            3.1622777,
            1,
            200
        };
        soundArmorCrash[] = {
            "ArmorCrash0",
            0.166,
            "ArmorCrash1",
            0.166,
            "ArmorCrash2",
            0.166,
            "ArmorCrash3",
            0.166,
            "ArmorCrash4",
            0.166,
            "ArmorCrash5",
            0.166
        };
        class Sounds {
            soundSetsExt[] = {
                "APC_Wheeled_01_Engine_RPM0_EXT_SoundSet",
                "APC_Wheeled_01_Engine_RPM1_EXT_SoundSet",
                "APC_Wheeled_01_Engine_RPM2_EXT_SoundSet",
                "APC_Wheeled_01_Engine_RPM3_EXT_SoundSet",
                "APC_Wheeled_01_Engine_RPM4_EXT_SoundSet",
                "APC_Wheeled_01_Engine_RPM5_EXT_SoundSet",
                "APC_Wheeled_01_Rattling_EXT_SoundSet",
                "APC_Wheeled_01_Stress_EXT_SoundSet",
                "APC_Wheeled_01_Rain_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Rock_Fast_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Grass_Fast_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Sand_Fast_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Gravel_Fast_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Mud_Fast_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Asphalt_Fast_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Water_Fast_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Rock_Slow_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Grass_Slow_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Sand_Slow_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Gravel_Slow_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Mud_Slow_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Asphalt_Slow_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Water_Slow_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Turn_Hard_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Turn_Soft_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Brake_Hard_EXT_SoundSet",
                "APC_Wheeled_01_Tires_Brake_Soft_EXT_SoundSet"
            };
            soundSetsInt[] = {
                "APC_Wheeled_01_Engine_RPM0_INT_SoundSet",
                "APC_Wheeled_01_Engine_RPM1_INT_SoundSet",
                "APC_Wheeled_01_Engine_RPM2_INT_SoundSet",
                "APC_Wheeled_01_Engine_RPM3_INT_SoundSet",
                "APC_Wheeled_01_Engine_RPM4_INT_SoundSet",
                "APC_Wheeled_01_Engine_RPM5_INT_SoundSet",
                "APC_Wheeled_01_Interior_Tone_Engine_Off_SoundSet",
                "APC_Wheeled_01_Interior_Tone_Engine_On_SoundSet",
                "APC_Wheeled_01_Rattling_INT_SoundSet",
                "APC_Wheeled_01_Stress_INT_SoundSet",
                "APC_Wheeled_01_Rain_INT_SoundSet",
                "APC_Wheeled_01_Tires_Rock_Fast_INT_SoundSet",
                "APC_Wheeled_01_Tires_Grass_Fast_INT_SoundSet",
                "APC_Wheeled_01_Tires_Sand_Fast_INT_SoundSet",
                "APC_Wheeled_01_Tires_Gravel_Fast_INT_SoundSet",
                "APC_Wheeled_01_Tires_Mud_Fast_INT_SoundSet",
                "APC_Wheeled_01_Tires_Asphalt_Fast_INT_SoundSet",
                "APC_Wheeled_01_Tires_Water_Fast_INT_SoundSet",
                "APC_Wheeled_01_Tires_Rock_Slow_INT_SoundSet",
                "APC_Wheeled_01_Tires_Grass_Slow_INT_SoundSet",
                "APC_Wheeled_01_Tires_Sand_Slow_INT_SoundSet",
                "APC_Wheeled_01_Tires_Gravel_Slow_INT_SoundSet",
                "APC_Wheeled_01_Tires_Mud_Slow_INT_SoundSet",
                "APC_Wheeled_01_Tires_Asphalt_Slow_INT_SoundSet",
                "APC_Wheeled_01_Tires_Water_Slow_INT_SoundSet",
                "APC_Wheeled_01_Tires_Turn_Hard_INT_SoundSet",
                "APC_Wheeled_01_Tires_Turn_Soft_INT_SoundSet",
                "APC_Wheeled_01_Tires_Brake_Hard_INT_SoundSet",
                "APC_Wheeled_01_Tires_Brake_Soft_INT_SoundSet"
            };
        };
        receiveRemoteTargets = 1;
        reportRemoteTargets = 1;
        reportOwnPosition = 1;
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class DataLinkSensorComponent: SensorTemplateDataLink {};
                };
            };
            class VehicleSystemsDisplayManagerComponentLeft {
                class Components {
                    class EmptyDisplay {
                        componentType = "EmptyDisplayComponent";
                    };
                    class MinimapDisplay {
                        componentType = "MinimapDisplayComponent";
                        resource = "RscCustomInfoMiniMap";
                    };
                    class CrewDisplay {
                        componentType = "CrewDisplayComponent";
                        resource = "RscCustomInfoCrew";
                    };
                };
            };
            class VehicleSystemsDisplayManagerComponentRight {
                class Components {
                    class EmptyDisplay {
                        componentType = "EmptyDisplayComponent";
                    };
                    class MinimapDisplay {
                        componentType = "MinimapDisplayComponent";
                        resource = "RscCustomInfoMiniMap";
                    };
                    class CrewDisplay {
                        componentType = "CrewDisplayComponent";
                        resource = "RscCustomInfoCrew";
                    };
                };
            };
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
                statement = "[this,'cargolights_hide',[1]] call rhs_fnc_toggleIntLight";
                onlyforplayer = 1;
            };
            class AdjustMap {
                displayName = "Adjust BFT Map Scale";
                position = "pos driver";
                radius = 20;
                condition = "player == gunner this";
                statement = "createDialog 'RHS_BFT_Map_Scale_UI';sliderSetRange [1900,0.01,1];sliderSetPosition [1900,cameraon animationSourcePhase 'BFT_Map_Scale']";
                onlyforplayer = 1;
            };
        };
        class EventHandlers: EventHandlers {
            class BIS_Randomisation {
                init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
            };
            class RHSUSF_EventHandlers {
                init = "_this call rhs_fnc_stryker_m1126_init";
                postInit = "_this call rhs_fnc_reapplyTextures";
                getIn = "_this call rhs_fnc_m2_doors;";
                getOut = "_this call rhs_fnc_m2_doors;";
                seatSwitched = "_this call rhs_fnc_stryker_seatSwitched";
                engine = "_this call rhs_fnc_engineCheckDamage";
            };
            class RHSUSF_TurnInActions {
                turnIn = "(_this + [false])  spawn rhs_fnc_stryker_turnActions;";
                turnOut = "(_this + [true]) spawn rhs_fnc_stryker_turnActions;";
            };
        };
    };
    class rhsusf_stryker_m1126_base: rhsusf_stryker_base {
        displayName = "M1126";
        defaultUserMFDvalues[] = {1000};
        class MFD {
            class MFD_CROWS {
                topLeft = "PIP_3_TL";
                topRight = "PIP_3_TR";
                bottomLeft = "PIP_3_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0.84, 0.86, 0.84};
                alpha = 1;
                enableParallax = 0;
                font = "RobotoCondensedLight";
                class material {
                    ambient[] = {3, 3, 3, 1};
                    diffuse[] = {10, 10, 10, 1};
                    emissive[] = {400, 200, 200, 1};
                };
                class Bones {
                    class Static_Offset {
                        type = "fixed";
                        pos[] = {0.08, 0.9};
                    };
                    class Cross {
                        type = "fixed";
                        pos[] = {0, -0.145};
                    };
                    class TurretRotation {
                        type = "rotational";
                        source = "weaponHeading";
                        sourceIndex = 0;
                        center[] = {0, 0};
                        min = -180;
                        max = 180;
                        minAngle = -180;
                        maxAngle = 180;
                        sourceOffset = -180;
                        aspectRatio = 1.29101;
                    };
                };
                class Draw {
                    color[] = {1, 0, 0, 1};
                    alpha = 1;
                    class StaticDraw {
                        type = "line";
                        width = 3;
                        points[] = {
                            {"Cross", {0.43, 0.645503}, 1},
                            {"Cross", {0.57, 0.645503}, 1},
                            {},
                            {"Cross", {0.5, 0.555132}, 1},
                            {"Cross", {0.5, 0.735873}, 1},
                            {},
                            {"Static_Offset", {0, -0.0774603}, 1},
                            {"Static_Offset", {0.010416, -0.0762829}, 1},
                            {"Static_Offset", {0.02052, -0.0727895}, 1},
                            {"Static_Offset", {0.03, -0.0670806}, 1},
                            {"Static_Offset", {0.038568, -0.0593346}, 1},
                            {"Static_Offset", {0.04596, -0.0497915}, 1},
                            {"Static_Offset", {0.05196, -0.0387302}, 1},
                            {"Static_Offset", {0.056382, -0.0264914}, 1},
                            {"Static_Offset", {0.059088, -0.0134471}, 1},
                            {"Static_Offset", {0.06, 0}, 1},
                            {"Static_Offset", {0.059088, 0.0134471}, 1},
                            {"Static_Offset", {0.056382, 0.0264914}, 1},
                            {"Static_Offset", {0.05196, 0.0387302}, 1},
                            {"Static_Offset", {0.04596, 0.0497915}, 1},
                            {"Static_Offset", {0.038568, 0.0593346}, 1},
                            {"Static_Offset", {0.03, 0.0670806}, 1},
                            {"Static_Offset", {0.02052, 0.0727895}, 1},
                            {"Static_Offset", {0.010416, 0.0762829}, 1},
                            {"Static_Offset", {0, 0.0774603}, 1},
                            {"Static_Offset", {-0.010416, 0.0762829}, 1},
                            {"Static_Offset", {-0.02052, 0.0727895}, 1},
                            {"Static_Offset", {-0.03, 0.0670806}, 1},
                            {"Static_Offset", {-0.038568, 0.0593346}, 1},
                            {"Static_Offset", {-0.04596, 0.0497915}, 1},
                            {"Static_Offset", {-0.05196, 0.0387302}, 1},
                            {"Static_Offset", {-0.056382, 0.0264914}, 1},
                            {"Static_Offset", {-0.059088, 0.0134471}, 1},
                            {"Static_Offset", {-0.06, 0}, 1},
                            {"Static_Offset", {-0.059088, -0.0134471}, 1},
                            {"Static_Offset", {-0.056382, -0.0264914}, 1},
                            {"Static_Offset", {-0.05196, -0.0387302}, 1},
                            {"Static_Offset", {-0.04596, -0.0497915}, 1},
                            {"Static_Offset", {-0.038568, -0.0593346}, 1},
                            {"Static_Offset", {-0.03, -0.0670806}, 1},
                            {"Static_Offset", {-0.02052, -0.0727895}, 1},
                            {"Static_Offset", {-0.010416, -0.0762829}, 1},
                            {"Static_Offset", {0, -0.0774603}, 1},
                            {},
                            {"Static_Offset", {0, -0.0774603}, 1},
                            {"Static_Offset", {0, -0.0645503}, 1},
                            {},
                            {"Static_Offset", {0.03, -0.0670826}, 1},
                            {"Static_Offset", {0.025, -0.0559022}, 1},
                            {},
                            {"Static_Offset", {0.0519615, -0.0387302}, 1},
                            {"Static_Offset", {0.0433013, -0.0322751}, 1},
                            {},
                            {"Static_Offset", {0.06, 0.0000000033859}, 1},
                            {"Static_Offset", {0.05, 0.00000000282158}, 1},
                            {},
                            {"Static_Offset", {0.0519615, 0.0387302}, 1},
                            {"Static_Offset", {0.0433013, 0.0322751}, 1},
                            {},
                            {"Static_Offset", {0.03, 0.0670826}, 1},
                            {"Static_Offset", {0.025, 0.0559022}, 1},
                            {},
                            {"Static_Offset", {-0.00000000524537, 0.0774603}, 1},
                            {"Static_Offset", {-0.00000000437114, 0.0645503}, 1},
                            {},
                            {"Static_Offset", {-0.03, 0.0670826}, 1},
                            {"Static_Offset", {-0.025, 0.0559022}, 1},
                            {},
                            {"Static_Offset", {-0.0519615, 0.0387302}, 1},
                            {"Static_Offset", {-0.0433013, 0.0322751}, 1},
                            {},
                            {"Static_Offset", {-0.06, -0.000000000923705}, 1},
                            {"Static_Offset", {-0.05, -0.000000000769754}, 1},
                            {},
                            {"Static_Offset", {-0.0519615, -0.0387302}, 1},
                            {"Static_Offset", {-0.0433013, -0.0322752}, 1},
                            {},
                            {"Static_Offset", {-0.03, -0.0670826}, 1},
                            {"Static_Offset", {-0.025, -0.0559022}, 1},
                            {},
                            {"Static_Offset", 1, {"TurretRotation", 0, -0.0580952}, 1},
                            {"Static_Offset", 1, {"TurretRotation", 0, 0}, 1},
                            {}
                        };
                    };
                    class StaticDrawBold {
                        type = "line";
                        width = 8;
                        points[] = {
                            {"Cross", {0.3, 0.645503}, 1},
                            {"Cross", {0.43, 0.645503}, 1},
                            {},
                            {"Cross", {0.57, 0.645503}, 1},
                            {"Cross", {0.7, 0.645503}, 1},
                            {},
                            {"Cross", {0.5, 0.387302}, 1},
                            {"Cross", {0.5, 0.555132}, 1},
                            {},
                            {"Cross", {0.5, 0.735873}, 1},
                            {"Cross", {0.5, 0.903704}, 1},
                            {}
                        };
                    };
                    class Range_Text {
                        type = "text";
                        source = "static";
                        text = "LRF:";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.01, 0.51}, 1};
                        right[] = {{0.06, 0.51}, 1};
                        down[] = {{0.01, 0.56}, 1};
                    };
                    class Range_Value {
                        type = "text";
                        source = "laserDist";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.08;
                        pos[] = {{"0.01+0.1", 0.51}, 1};
                        right[] = {{0.16, 0.51}, 1};
                        down[] = {{"0.01+0.1", 0.56}, 1};
                    };
                    class Ballistic_Text {
                        type = "text";
                        source = "static";
                        text = "Ballistic:";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.01, 0.67}, 1};
                        right[] = {{0.06, 0.67}, 1};
                        down[] = {{0.01, 0.72}, 1};
                    };
                    class Ballistic_Value {
                        type = "text";
                        source = "laserDist";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.08;
                        pos[] = {{"0.01+0.13", 0.67}, 1};
                        right[] = {{0.19, 0.67}, 1};
                        down[] = {{"0.01+0.13", 0.72}, 1};
                    };
                    class Mode_Text {
                        type = "text";
                        source = "static";
                        text = "FOV:";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.01, 0.71}, 1};
                        right[] = {{0.06, 0.71}, 1};
                        down[] = {{0.01, 0.76}, 1};
                    };
                    class Mode_Value {
                        type = "text";
                        source = "userText";
                        text = "1.0x";
                        sourceIndex = 1;
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.08;
                        pos[] = {{"0.01+0.1", 0.71}, 1};
                        right[] = {{0.16, 0.71}, 1};
                        down[] = {{"0.01+0.1", 0.76}, 1};
                    };
                    class Elev_Text {
                        type = "text";
                        source = "static";
                        text = "Elev:";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.01, 0.75}, 1};
                        right[] = {{0.06, 0.75}, 1};
                        down[] = {{0.01, 0.8}, 1};
                    };
                    class Elev_Value {
                        type = "text";
                        source = "[y]turretworld";
                        sourceScale = 1;
                        sourcePrecision = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.08;
                        pos[] = {{"0.01+0.1", 0.75}, 1};
                        right[] = {{0.16, 0.75}, 1};
                        down[] = {{"0.01+0.1", 0.8}, 1};
                    };
                };
            };
            class MFD_BFT {
                topLeft = "BFT_Map_TL";
                topRight = "BFT_Map_TR";
                bottomLeft = "BFT_Map_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {1, 1, 1, 1};
                helmetMountedDisplay = 0;
                helmetPosition[] = {-0.0375, 0.0375, 0.1};
                helmetRight[] = {0.075, 0, 0};
                helmetDown[] = {0, -0.075, 0};
                font = "rhsusf_txled";
                class material {
                    ambient[] = {3, 3, 3, 1};
                    diffuse[] = {1, 1, 1, 1};
                    emissive[] = {400, 200, 200, 1};
                };
                class Bones {
                    class Sensor_Offset {
                        type = "fixed";
                        pos[] = {0.5, 0.48};
                    };
                    class Static_Offset {
                        type = "fixed";
                        pos[] = {0.5, 0.5};
                    };
                    class LimitWaypoint {
                        type = "limit";
                        limits[] = {0.22, 0.06, 0.78, 0.06};
                    };
                    class Sensor_Rotation {
                        center[] = {0, 0};
                        type = "rotational";
                        source = "heading";
                        sourceScale = 1;
                        min = 0;
                        max = 360;
                        minAngle = 0;
                        maxAngle = -180;
                        aspectRatio = 1.25714;
                    };
                    class WPPoint {
                        type = "vector";
                        source = "WPPoint";
                        pos0[] = {0.5, 0.5};
                        pos10[] = {0.71, 0.764};
                    };
                    class Direction_Center {
                        type = "fixed";
                        pos[] = {0.5, 0.5};
                    };
                    class Rotation_WP_Dir {
                        pos0[] = {0, 0};
                        pos10[] = {0, 0};
                        center[] = {0, 0};
                        type = "rotational";
                        source = "user";
                        sourceIndex = 10;
                        min = 0;
                        max = 360;
                        minAngle = 0;
                        maxAngle = -360;
                        aspectRatio = 1;
                    };
                    class Rotation_WP_Center {
                        pos0[] = {0, 0};
                        pos10[] = {0, 0};
                        center[] = {0.5, 0.555};
                        type = "rotational";
                        source = "heading";
                        min = 0;
                        max = 360;
                        minAngle = -180;
                        maxAngle = "-360-180";
                        aspectRatio = 1.25714;
                    };
                    class MovementY {
                        type = "linear";
                        source = "user";
                        sourceIndex = 5;
                        refreshRate = 0.1;
                        min = 0;
                        max = 2;
                        sourceScale = 1;
                        maxPos[] = {0, 1};
                        minPos[] = {0, -1};
                    };
                    class MovementX: MovementY {
                        sourceIndex = 4;
                        maxPos[] = {-1, 0};
                        minPos[] = {1, 0};
                    };
                    class WP1_PosX: MovementX {
                        sourceIndex = 26;
                    };
                    class WP1_PosY: MovementY {
                        sourceIndex = 27;
                    };
                    class WP2_PosX: MovementX {
                        sourceIndex = 28;
                    };
                    class WP2_PosY: MovementY {
                        sourceIndex = 29;
                    };
                    class WP3_PosX: MovementX {
                        sourceIndex = 30;
                    };
                    class WP3_PosY: MovementY {
                        sourceIndex = 31;
                    };
                    class WP4_PosX: MovementX {
                        sourceIndex = 32;
                    };
                    class WP4_PosY: MovementY {
                        sourceIndex = 33;
                    };
                    class WP5_PosX: MovementX {
                        sourceIndex = 34;
                    };
                    class WP5_PosY: MovementY {
                        sourceIndex = 35;
                    };
                    class WP6_PosX: MovementX {
                        sourceIndex = 36;
                    };
                    class WP6_PosY: MovementY {
                        sourceIndex = 37;
                    };
                    class WP7_PosX: MovementX {
                        sourceIndex = 38;
                    };
                    class WP7_PosY: MovementY {
                        sourceIndex = 39;
                    };
                    class WP8_PosX: MovementX {
                        sourceIndex = 40;
                    };
                    class WP8_PosY: MovementY {
                        sourceIndex = 41;
                    };
                    class WP9_PosX: MovementX {
                        sourceIndex = 42;
                    };
                    class WP9_PosY: MovementY {
                        sourceIndex = 43;
                    };
                    class WP10_PosX: MovementX {
                        sourceIndex = 44;
                    };
                    class WP10_PosY: MovementY {
                        sourceIndex = 45;
                    };
                    class WP11_PosX: MovementX {
                        sourceIndex = 46;
                    };
                    class WP11_PosY: MovementY {
                        sourceIndex = 47;
                    };
                };
                class Draw {
                    alpha = 1;
                    color[] = {0, 0, 0.12};
                    class StaticClip {
                        class WaypointGroup {
                            color[] = {0, 0, 0.12};
                            alpha = 0.6;
                            class WP {
                                condition = "wpvalid";
                                class Draw {
                                    type = "line";
                                    points[] = {};
                                };
                                class WP1 {
                                    condition = "user26>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "1-WPIndex";
                                        class WaypointShape {
                                            width = 16;
                                            type = "line";
                                            points[] = {
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, -0.0125714}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.005, -0.0108869}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.01, 0}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.005, 0.0108869}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, 0.0125714}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.01, 0}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0, -0.0251429}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.01, -0.0217737}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.02, 0}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.01, 0.0217737}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0, 0.0251429}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.02, 0}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0, -0.0251429}, 1},
                                            {}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "01";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP1_PosX",
                                            1,
                                            "WP1_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP1_PosX",
                                            1,
                                            "WP1_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP1_PosX",
                                            1,
                                            "WP1_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP2 {
                                    condition = "user28>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=1)*(WPIndex<=1)";
                                        class WaypointShape {
                                            width = 16;
                                            type = "line";
                                            points[] = {
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, -0.0125714}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.005, -0.0108869}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.01, 0}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.005, 0.0108869}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, 0.0125714}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.01, 0}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, -0.0251429}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.01, -0.0217737}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.02, 0}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.01, 0.0217737}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, 0.0251429}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.02, 0}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP1_PosX", 1, "WP1_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP2_PosX", 1, "WP2_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "02";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP2_PosX",
                                            1,
                                            "WP2_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP2_PosX",
                                            1,
                                            "WP2_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP2_PosX",
                                            1,
                                            "WP2_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP3 {
                                    condition = "user30>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=2)*(WPIndex<=2)";
                                        class WaypointShape {
                                            width = 22;
                                            type = "line";
                                            points[] = {
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0, -0.0125714}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.005, -0.0108869}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.01, 0}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.005, 0.0108869}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0, 0.0125714}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.01, 0}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0, -0.0251429}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.01, -0.0217737}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.02, 0}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.01, 0.0217737}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0, 0.0251429}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.02, 0}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP2_PosX", 1, "WP2_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP3_PosX", 1, "WP3_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "03";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP3_PosX",
                                            1,
                                            "WP3_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP3_PosX",
                                            1,
                                            "WP3_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP3_PosX",
                                            1,
                                            "WP3_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP4 {
                                    condition = "user32>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=3)*(WPIndex<=3)";
                                        class WaypointShape {
                                            width = 22;
                                            type = "line";
                                            points[] = {
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0, -0.0125714}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.005, -0.0108869}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.01, 0}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.005, 0.0108869}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0, 0.0125714}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.01, 0}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0, -0.0251429}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.01, -0.0217737}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.02, 0}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.01, 0.0217737}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0, 0.0251429}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.02, 0}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP3_PosX", 1, "WP3_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP4_PosX", 1, "WP4_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "04";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP4_PosX",
                                            1,
                                            "WP4_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP4_PosX",
                                            1,
                                            "WP4_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP4_PosX",
                                            1,
                                            "WP4_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP5 {
                                    condition = "user34>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=4)*(WPIndex<=4)";
                                        class WaypointShape {
                                            width = 22;
                                            type = "line";
                                            points[] = {
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0, -0.0125714}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.005, -0.0108869}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.01, 0}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.005, 0.0108869}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0, 0.0125714}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.01, 0}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0, -0.0251429}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.01, -0.0217737}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.02, 0}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.01, 0.0217737}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0, 0.0251429}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.02, 0}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP4_PosX", 1, "WP4_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP5_PosX", 1, "WP5_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "05";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP5_PosX",
                                            1,
                                            "WP5_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP5_PosX",
                                            1,
                                            "WP5_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP5_PosX",
                                            1,
                                            "WP5_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP6 {
                                    condition = "user36>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=5)*(WPIndex<=5)";
                                        class WaypointShape {
                                            width = 22;
                                            type = "line";
                                            points[] = {
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0, -0.0125714}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.005, -0.0108869}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.01, 0}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.005, 0.0108869}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0, 0.0125714}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.01, 0}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0, -0.0251429}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.01, -0.0217737}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.02, 0}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.01, 0.0217737}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0, 0.0251429}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.02, 0}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP5_PosX", 1, "WP5_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP6_PosX", 1, "WP6_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "06";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP6_PosX",
                                            1,
                                            "WP6_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP6_PosX",
                                            1,
                                            "WP6_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP6_PosX",
                                            1,
                                            "WP6_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP7 {
                                    condition = "user38>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=6)*(WPIndex<=6)";
                                        class WaypointShape {
                                            width = 22;
                                            type = "line";
                                            points[] = {
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0, -0.0125714}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.005, -0.0108869}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.01, 0}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.005, 0.0108869}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0, 0.0125714}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.01, 0}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0, -0.0251429}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.01, -0.0217737}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.02, 0}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.01, 0.0217737}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0, 0.0251429}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.02, 0}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP6_PosX", 1, "WP6_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP7_PosX", 1, "WP7_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "07";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP7_PosX",
                                            1,
                                            "WP7_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP7_PosX",
                                            1,
                                            "WP7_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP7_PosX",
                                            1,
                                            "WP7_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP8 {
                                    condition = "user40>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=7)*(WPIndex<=7)";
                                        class WaypointShape {
                                            width = 22;
                                            type = "line";
                                            points[] = {
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0, -0.0125714}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.005, -0.0108869}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.01, 0}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.005, 0.0108869}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0, 0.0125714}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.01, 0}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0, -0.0251429}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.01, -0.0217737}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.02, 0}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.01, 0.0217737}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0, 0.0251429}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.02, 0}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP7_PosX", 1, "WP7_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP8_PosX", 1, "WP8_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "08";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP8_PosX",
                                            1,
                                            "WP8_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP8_PosX",
                                            1,
                                            "WP8_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP8_PosX",
                                            1,
                                            "WP8_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP9 {
                                    condition = "user42>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=8)*(WPIndex<=8)";
                                        class WaypointShape {
                                            width = 22;
                                            type = "line";
                                            points[] = {
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0, -0.0125714}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.005, -0.0108869}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.01, 0}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.005, 0.0108869}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0, 0.0125714}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.01, 0}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0, -0.0251429}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.01, -0.0217737}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.02, 0}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.01, 0.0217737}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0, 0.0251429}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.02, 0}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP8_PosX", 1, "WP8_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP9_PosX", 1, "WP9_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "09";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP9_PosX",
                                            1,
                                            "WP9_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP9_PosX",
                                            1,
                                            "WP9_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP9_PosX",
                                            1,
                                            "WP9_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP10 {
                                    condition = "user44>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=9)*(WPIndex<=9)";
                                        class WaypointShape {
                                            width = 22;
                                            type = "line";
                                            points[] = {
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0, -0.0125714}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.005, -0.0108869}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.01, 0}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.005, 0.0108869}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0, 0.0125714}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.01, 0}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0, -0.0251429}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.01, -0.0217737}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.02, 0}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.01, 0.0217737}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0, 0.0251429}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.02, 0}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP9_PosX", 1, "WP9_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP10_PosX", 1, "WP10_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "10";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP10_PosX",
                                            1,
                                            "WP10_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP10_PosX",
                                            1,
                                            "WP10_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP10_PosX",
                                            1,
                                            "WP10_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class CustomWP {
                                    condition = "user46>=0";
                                    color[] = {1, 0.5, 0};
                                    alpha = 0.5;
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0, -0.0251429}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.01, -0.0217737}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.02, 0}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.01, 0.0217737}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0, 0.0251429}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.02, 0}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0, -0.0251429}, 1},
                                            {}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "CWP";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP11_PosX",
                                            1,
                                            "WP11_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP11_PosX",
                                            1,
                                            "WP11_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP11_PosX",
                                            1,
                                            "WP11_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                            };
                        };
                    };
                    class LightBlue {
                        color[] = {0.43, 0.8, 0.93};
                        alpha = 0.15;
                        class StaticDrawPolygon {
                            type = "polygon";
                            points[] = {
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.00347296, -0.0247609}, 1}, {"Static_Offset", {0.0068404, -0.0236266}, 1}, {"Static_Offset", {0.01, -0.0217744}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.01, -0.0217744}, 1}, {"Static_Offset", {0.0128558, -0.0192605}, 1}, {"Static_Offset", {0.0153209, -0.0161615}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.0153209, -0.0161615}, 1}, {"Static_Offset", {0.0173205, -0.0125714}, 1}, {"Static_Offset", {0.0187939, -0.00859936}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.0187939, -0.00859936}, 1}, {"Static_Offset", {0.0196962, -0.00436601}, 1}, {"Static_Offset", {0.02, 0.00000000109903}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.02, 0.00000000109903}, 1}, {"Static_Offset", {0.0196962, 0.00436601}, 1}, {"Static_Offset", {0.0187939, 0.00859936}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.0187939, 0.00859936}, 1}, {"Static_Offset", {0.0173205, 0.0125714}, 1}, {"Static_Offset", {0.0153209, 0.0161615}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.0153209, 0.0161615}, 1}, {"Static_Offset", {0.0128557, 0.0192606}, 1}, {"Static_Offset", {0.01, 0.0217744}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.01, 0.0217744}, 1}, {"Static_Offset", {0.0068404, 0.0236266}, 1}, {"Static_Offset", {0.00347297, 0.0247609}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.00347297, 0.0247609}, 1}, {"Static_Offset", {-0.00000000174846, 0.0251429}, 1}, {"Static_Offset", {-0.00347297, 0.0247609}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.00347297, 0.0247609}, 1}, {"Static_Offset", {-0.0068404, 0.0236266}, 1}, {"Static_Offset", {-0.01, 0.0217743}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.01, 0.0217743}, 1}, {"Static_Offset", {-0.0128558, 0.0192605}, 1}, {"Static_Offset", {-0.0153209, 0.0161615}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.0153209, 0.0161615}, 1}, {"Static_Offset", {-0.0173205, 0.0125714}, 1}, {"Static_Offset", {-0.0187939, 0.00859936}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.0187939, 0.00859936}, 1}, {"Static_Offset", {-0.0196962, 0.00436601}, 1}, {"Static_Offset", {-0.02, -0.000000000299826}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.02, -0.000000000299826}, 1}, {"Static_Offset", {-0.0196962, -0.00436602}, 1}, {"Static_Offset", {-0.0187939, -0.00859936}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.0187939, -0.00859936}, 1}, {"Static_Offset", {-0.0173205, -0.0125714}, 1}, {"Static_Offset", {-0.0153209, -0.0161615}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.0153209, -0.0161615}, 1}, {"Static_Offset", {-0.0128557, -0.0192606}, 1}, {"Static_Offset", {-0.01, -0.0217744}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.01, -0.0217744}, 1}, {"Static_Offset", {-0.00684041, -0.0236266}, 1}, {"Static_Offset", {-0.00347296, -0.0247609}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.00347296, -0.0247609}, 1}, {"Static_Offset", {0.00000000349691, -0.0251429}, 1}, {"Static_Offset", {0.00347297, -0.0247609}, 1}}
                            };
                        };
                    };
                    class StaticDraw {
                        type = "line";
                        width = 6;
                        points[] = {
                            {"Static_Offset", {0, -0.0264}, 1},
                            {"Static_Offset", {0.0036456, -0.0259987}, 1},
                            {"Static_Offset", {0.007182, -0.0248081}, 1},
                            {"Static_Offset", {0.0105, -0.0228624}, 1},
                            {"Static_Offset", {0.0134988, -0.0202224}, 1},
                            {"Static_Offset", {0.016086, -0.0169699}, 1},
                            {"Static_Offset", {0.018186, -0.0132}, 1},
                            {"Static_Offset", {0.0197337, -0.0090288}, 1},
                            {"Static_Offset", {0.0206808, -0.00458304}, 1},
                            {"Static_Offset", {0.021, 0}, 1},
                            {"Static_Offset", {0.0206808, 0.00458304}, 1},
                            {"Static_Offset", {0.0197337, 0.0090288}, 1},
                            {"Static_Offset", {0.018186, 0.0132}, 1},
                            {"Static_Offset", {0.016086, 0.0169699}, 1},
                            {"Static_Offset", {0.0134988, 0.0202224}, 1},
                            {"Static_Offset", {0.0105, 0.0228624}, 1},
                            {"Static_Offset", {0.007182, 0.0248081}, 1},
                            {"Static_Offset", {0.0036456, 0.0259987}, 1},
                            {"Static_Offset", {0, 0.0264}, 1},
                            {"Static_Offset", {-0.0036456, 0.0259987}, 1},
                            {"Static_Offset", {-0.007182, 0.0248081}, 1},
                            {"Static_Offset", {-0.0105, 0.0228624}, 1},
                            {"Static_Offset", {-0.0134988, 0.0202224}, 1},
                            {"Static_Offset", {-0.016086, 0.0169699}, 1},
                            {"Static_Offset", {-0.018186, 0.0132}, 1},
                            {"Static_Offset", {-0.0197337, 0.0090288}, 1},
                            {"Static_Offset", {-0.0206808, 0.00458304}, 1},
                            {"Static_Offset", {-0.021, 0}, 1},
                            {"Static_Offset", {-0.0206808, -0.00458304}, 1},
                            {"Static_Offset", {-0.0197337, -0.0090288}, 1},
                            {"Static_Offset", {-0.018186, -0.0132}, 1},
                            {"Static_Offset", {-0.016086, -0.0169699}, 1},
                            {"Static_Offset", {-0.0134988, -0.0202224}, 1},
                            {"Static_Offset", {-0.0105, -0.0228624}, 1},
                            {"Static_Offset", {-0.007182, -0.0248081}, 1},
                            {"Static_Offset", {-0.0036456, -0.0259987}, 1},
                            {"Static_Offset", {0, -0.0264}, 1},
                            {},
                            {"Static_Offset", 1, {-0.012, -0.01}, 1},
                            {"Static_Offset", 1, {-0.012, 0.01}, 1},
                            {"Static_Offset", 1, {0.012, 0.01}, 1},
                            {"Static_Offset", 1, {0.012, -0.01}, 1},
                            {"Static_Offset", 1, {-0.012, -0.01}, 1},
                            {}
                        };
                    };
                    class SensorGroup {
                        class Sensor {
                            type = "sensor";
                            pos[] = {"Sensor_Offset", 1, {"-0+-1", "-0+-1"}, 1};
                            down[] = {"Sensor_Offset", 1, {"0--1", "0--1"}, 1};
                            showTargetTypes = "2+4+8+16+32+64+128+256+512+1024";
                            width = 4;
                            sensorLineType = 0;
                            sensorLineWidth = 3;
                            targetLineWidth = -0.00192;
                            targetLineLength = 0.02;
                            range = "user0";
                            class MissileThreat {
                                color[] = {1, 0, 0};
                                class TargetLines {
                                    type = "line";
                                    width = 2;
                                    points[] = {
                                        {{0, -0.0251429}, 1},
                                        {{0.003472, -0.0247607}, 1},
                                        {{0.00684, -0.0236267}, 1},
                                        {{0.01, -0.0217737}, 1},
                                        {{0.012856, -0.0192594}, 1},
                                        {{0.01532, -0.0161618}, 1},
                                        {{0.01732, -0.0125714}, 1},
                                        {{0.018794, -0.00859886}, 1},
                                        {{0.019696, -0.0043648}, 1},
                                        {{0.02, 0}, 1},
                                        {{0.019696, 0.0043648}, 1},
                                        {{0.018794, 0.00859886}, 1},
                                        {{0.01732, 0.0125714}, 1},
                                        {{0.01532, 0.0161618}, 1},
                                        {{0.012856, 0.0192594}, 1},
                                        {{0.01, 0.0217737}, 1},
                                        {{0.00684, 0.0236267}, 1},
                                        {{0.003472, 0.0247607}, 1},
                                        {{0, 0.0251429}, 1},
                                        {{-0.003472, 0.0247607}, 1},
                                        {{-0.00684, 0.0236267}, 1},
                                        {{-0.01, 0.0217737}, 1},
                                        {{-0.012856, 0.0192594}, 1},
                                        {{-0.01532, 0.0161618}, 1},
                                        {{-0.01732, 0.0125714}, 1},
                                        {{-0.018794, 0.00859886}, 1},
                                        {{-0.019696, 0.0043648}, 1},
                                        {{-0.02, 0}, 1},
                                        {{-0.019696, -0.0043648}, 1},
                                        {{-0.018794, -0.00859886}, 1},
                                        {{-0.01732, -0.0125714}, 1},
                                        {{-0.01532, -0.0161618}, 1},
                                        {{-0.012856, -0.0192594}, 1},
                                        {{-0.01, -0.0217737}, 1},
                                        {{-0.00684, -0.0236267}, 1},
                                        {{-0.003472, -0.0247607}, 1},
                                        {{0, -0.0251429}, 1}
                                    };
                                };
                                class TextM {
                                    type = "text";
                                    source = "static";
                                    text = "M";
                                    align = "center";
                                    scale = 1;
                                    pos[] = {{0, -0.01}, 1};
                                    right[] = {{0.02, -0.01}, 1};
                                    down[] = {{0, 0.01}, 1};
                                };
                            };
                            class lockingThreat {
                                color[] = {1, 0.3, 0};
                                class TargetLines {
                                    type = "line";
                                    points[] = {
                                        {{0.02, 0}, 1},
                                        {{0, 0.0251429}, 1},
                                        {{-0.02, 0}, 1},
                                        {{0, -0.0251429}, 1},
                                        {{0.02, 0}, 1}
                                    };
                                };
                            };
                            class markingThreat: lockingThreat {
                                class TargetLines: TargetLines {};
                            };
                            class rwr {
                                class TargetLines {
                                    type = "line";
                                    width = 2;
                                    points[] = {
                                        {{0.02, 0}, 1},
                                        {{0, 0.0251429}, 1},
                                        {{-0.02, 0}, 1},
                                        {{0, -0.0251429}, 1},
                                        {{0.02, 0}, 1}
                                    };
                                };
                            };
                            class rwrFriendly: rwr {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class rwrEnemy: rwr {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class rwrGroup: rwr {
                                color[] = {1, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class rwrDestroyed {};
                            class markedTarget {
                                color[] = {1, 0.3, 0};
                                class TargetLines {
                                    type = "line";
                                    width = 3;
                                    points[] = {
                                        {{-0.017, -0.0213714}, 1},
                                        {{-0.01, -0.0213714}, 1},
                                        {},
                                        {{0.017, -0.0213714}, 1},
                                        {{0.01, -0.0213714}, 1},
                                        {},
                                        {{-0.017, -0.0213714}, 1},
                                        {{-0.017, -0.0125714}, 1},
                                        {},
                                        {{0.017, -0.0213714}, 1},
                                        {{0.017, -0.0125714}, 1},
                                        {},
                                        {{-0.017, 0.0213714}, 1},
                                        {{-0.01, 0.0213714}, 1},
                                        {},
                                        {{0.017, 0.0213714}, 1},
                                        {{0.01, 0.0213714}, 1},
                                        {},
                                        {{-0.017, 0.0213714}, 1},
                                        {{-0.017, 0.0125714}, 1},
                                        {},
                                        {{0.017, 0.0213714}, 1},
                                        {{0.017, 0.0125714}, 1},
                                        {}
                                    };
                                };
                            };
                            class assignedTarget: markedTarget {
                                color[] = {1, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class target {
                                color[] = {1, 0.3, 0};
                                class TargetLines {
                                    type = "polygon";
                                    points[] = {{{{-0.01, -0.01}, 1}, {{0, -0.01}, 1}, {{0, 0}, 1}, {{-0.01, 0}, 1}}};
                                };
                            };
                            class targetFriendly: target {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetEnemy: target {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class targetGroup: target {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetDestroyed {};
                            class targetGround: target {
                                class TargetLines: TargetLines {
                                    type = "line";
                                    width = 3;
                                    points[] = {
                                        {{-0.026, -0}, 1},
                                        {{-0, 0.026}, 1},
                                        {{0.026, 0}, 1},
                                        {{0, -0.026}, 1},
                                        {{-0.026, -0}, 1},
                                        {}
                                    };
                                };
                                class StaticDraw {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.012, -0.01}, 1},
                                        {{-0.012, 0.01}, 1},
                                        {{0.012, 0.01}, 1},
                                        {{0.012, -0.01}, 1},
                                        {{-0.012, -0.01}, 1},
                                        {}
                                    };
                                };
                            };
                            class targetGroundFriendly: targetGround {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {
                                    type = "line";
                                    width = 3;
                                    points[] = {
                                        {{0, -0.0264}, 1},
                                        {{0.0036456, -0.0259987}, 1},
                                        {{0.007182, -0.0248081}, 1},
                                        {{0.0105, -0.0228624}, 1},
                                        {{0.0134988, -0.0202224}, 1},
                                        {{0.016086, -0.0169699}, 1},
                                        {{0.018186, -0.0132}, 1},
                                        {{0.0197337, -0.0090288}, 1},
                                        {{0.0206808, -0.00458304}, 1},
                                        {{0.021, 0}, 1},
                                        {{0.0206808, 0.00458304}, 1},
                                        {{0.0197337, 0.0090288}, 1},
                                        {{0.018186, 0.0132}, 1},
                                        {{0.016086, 0.0169699}, 1},
                                        {{0.0134988, 0.0202224}, 1},
                                        {{0.0105, 0.0228624}, 1},
                                        {{0.007182, 0.0248081}, 1},
                                        {{0.0036456, 0.0259987}, 1},
                                        {{0, 0.0264}, 1},
                                        {{-0.0036456, 0.0259987}, 1},
                                        {{-0.007182, 0.0248081}, 1},
                                        {{-0.0105, 0.0228624}, 1},
                                        {{-0.0134988, 0.0202224}, 1},
                                        {{-0.016086, 0.0169699}, 1},
                                        {{-0.018186, 0.0132}, 1},
                                        {{-0.0197337, 0.0090288}, 1},
                                        {{-0.0206808, 0.00458304}, 1},
                                        {{-0.021, 0}, 1},
                                        {{-0.0206808, -0.00458304}, 1},
                                        {{-0.0197337, -0.0090288}, 1},
                                        {{-0.018186, -0.0132}, 1},
                                        {{-0.016086, -0.0169699}, 1},
                                        {{-0.0134988, -0.0202224}, 1},
                                        {{-0.0105, -0.0228624}, 1},
                                        {{-0.007182, -0.0248081}, 1},
                                        {{-0.0036456, -0.0259987}, 1},
                                        {{0, -0.0264}, 1}
                                    };
                                };
                                class StaticDraw {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.012, -0.01}, 1},
                                        {{-0.012, 0.01}, 1},
                                        {{0.012, 0.01}, 1},
                                        {{0.012, -0.01}, 1},
                                        {{-0.012, -0.01}, 1},
                                        {}
                                    };
                                };
                            };
                            class targetGroundEnemy: targetGround {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {
                                    type = "line";
                                    width = 3;
                                    points[] = {
                                        {{-0.026, -0}, 1},
                                        {{-0, 0.026}, 1},
                                        {{0.026, 0}, 1},
                                        {{0, -0.026}, 1},
                                        {{-0.026, -0}, 1},
                                        {}
                                    };
                                };
                                class StaticDraw {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.012, -0.01}, 1},
                                        {{-0.012, 0.01}, 1},
                                        {{0.012, 0.01}, 1},
                                        {{0.012, -0.01}, 1},
                                        {{-0.012, -0.01}, 1},
                                        {}
                                    };
                                };
                            };
                            class targetGroundGroup: targetGroundFriendly {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                                class StaticDraw: StaticDraw {};
                            };
                            class targetGroundDestroyed {};
                            class targetGroundRemote: target {
                                class TargetLines: TargetLines {};
                            };
                            class targetGroundRemoteFriendly: targetGroundRemote {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetGroundRemoteEnemy: targetGroundRemote {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class targetGroundRemoteGroup: targetGroundRemote {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetGroundRemoteDestroyed {};
                            class targetLaser: target {
                                class TargetLines: TargetLines {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{0, -0.0251429}, 1},
                                        {{-0.00000000174846, 0.0251429}, 1},
                                        {},
                                        {{0.02, 0.00000000109903}, 1},
                                        {{-0.02, -0.000000000299826}, 1},
                                        {},
                                        {{0.0106066, -0.013334}, 1},
                                        {{-0.0106066, 0.013334}, 1},
                                        {},
                                        {{0.0106066, 0.013334}, 1},
                                        {{-0.0106066, -0.013334}, 1},
                                        {}
                                    };
                                };
                            };
                            class targetLaserFriendly: targetLaser {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetLaserEnemy: targetLaser {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class targetLaserGroup: targetLaser {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetNVG: targetLaser {
                                class TargetLines: TargetLines {};
                            };
                            class targetNVGFriendly: targetNVG {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetNVGEnemy: targetNVG {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class targetNVGGroup: targetNVG {
                                color[] = {1, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class targetMan: target {
                                class TargetLines: TargetLines {};
                            };
                            class targetManFriendly: targetMan {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetManEnemy: targetMan {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class targetManGroup: targetMan {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetManRemote: target {
                                class TargetLines: TargetLines {};
                            };
                            class targetManRemoteFriendly: targetManRemote {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetManRemoteEnemy: targetManRemote {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class targetManRemoteGroup: targetManRemote {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetAir {
                                color[] = {1, 1, 1};
                                class TargetLines {
                                    type = "polygon";
                                    points[] = {{{{0, 0}, 1}, {{0.012, 0.01}, 1}, {{0.012, -0.01}, 1}}, {{{0, 0}, 1}, {{-0.012, 0.01}, 1}, {{-0.012, -0.01}, 1}}};
                                };
                                class TargetArc {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.02, 0.0175}, 1},
                                        {{-0.02, -0.025}, 1},
                                        {{0.02, -0.025}, 1},
                                        {{0.02, 0.0175}, 1}
                                    };
                                };
                            };
                            class targetAirFriendly: targetAir {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                                class TargetArc {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.02, 0.0175}, 1},
                                        {{-0.016, 0.000400007}, 1},
                                        {{-0.012, -0.0129}, 1},
                                        {{-0.008, -0.0224}, 1},
                                        {{-0.004, -0.0281}, 1},
                                        {{0, -0.03}, 1},
                                        {{0.004, -0.0281}, 1},
                                        {{0.008, -0.0224}, 1},
                                        {{0.012, -0.0129}, 1},
                                        {{0.016, 0.000400007}, 1},
                                        {{0.02, 0.0175}, 1}
                                    };
                                };
                            };
                            class targetAirEnemy: targetAir {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                                class TargetArc {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.02, 0.0175}, 1},
                                        {{-0.016, 0.000400007}, 1},
                                        {{-0.012, -0.0129}, 1},
                                        {{-0.008, -0.0224}, 1},
                                        {{-0.004, -0.0281}, 1},
                                        {{0, -0.03}, 1},
                                        {{0.004, -0.0281}, 1},
                                        {{0.008, -0.0224}, 1},
                                        {{0.012, -0.0129}, 1},
                                        {{0.016, 0.000400007}, 1},
                                        {{0.02, 0.0175}, 1}
                                    };
                                };
                            };
                            class targetAirGroup: targetAir {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetAirDestroyed {};
                            class targetAirRemote: targetAir {
                                color[] = {1, 1, 1};
                                class TargetLines: TargetLines {};
                                class TargetArc {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.02, 0.0175}, 1},
                                        {{-0.02, -0.025}, 1},
                                        {{0.02, -0.025}, 1},
                                        {{0.02, 0.0175}, 1}
                                    };
                                };
                            };
                            class targetAirRemoteFriendly: targetAirRemote {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                                class TargetArc {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.02, 0.0175}, 1},
                                        {{-0.016, 0.000400007}, 1},
                                        {{-0.012, -0.0129}, 1},
                                        {{-0.008, -0.0224}, 1},
                                        {{-0.004, -0.0281}, 1},
                                        {{0, -0.03}, 1},
                                        {{0.004, -0.0281}, 1},
                                        {{0.008, -0.0224}, 1},
                                        {{0.012, -0.0129}, 1},
                                        {{0.016, 0.000400007}, 1},
                                        {{0.02, 0.0175}, 1}
                                    };
                                };
                            };
                            class targetAirRemoteEnemy: targetAirRemote {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                                class TargetArc {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.02, 0.0175}, 1},
                                        {{-0.02, -0.0075}, 1},
                                        {{-0, -0.03}, 1},
                                        {{0.02, -0.0075}, 1},
                                        {{0.02, 0.0175}, 1}
                                    };
                                };
                            };
                            class targetAirRemoteGroup: targetAirRemote {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetAirRemoteDestroyed {};
                        };
                    };
                };
            };
        };
        class RenderTargets {
            class LeftMirror {
                renderTarget = "rendertarget0";
                class CameraView1 {
                    pointPosition = "PIP_1_Pos";
                    pointDirection = "PIP_1_Dir";
                    renderQuality = 2;
                    renderVisionMode = 4;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_1_TL", "PIP_1_TR", "PIP_1_BL", "PIP_1_BR"};
            };
            class RightMirror {
                renderTarget = "rendertarget1";
                class CameraView1 {
                    pointPosition = "PIP_2_Pos";
                    pointDirection = "PIP_2_Dir";
                    renderQuality = 2;
                    renderVisionMode = 4;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_2_TL", "PIP_2_TR", "PIP_2_BL", "PIP_2_BR"};
            };
            class DVE_Front {
                renderTarget = "rendertarget_dve";
                class CameraView1 {
                    pointPosition = "View_DVE_pip";
                    pointDirection = "View_DVE_pip_dir";
                    renderQuality = 2;
                    renderVisionMode = 2;
                    fov = 0.7;
                };
                BBoxes[] = {
                    "DVE_Front_TL",
                    "DVE_Front_TR",
                    "DVE_Front_BL",
                    "DVE_Front_BR"
                };
            };
            class Gunner_display {
                renderTarget = "rendertarget2";
                class CameraView1 {
                    pointPosition = "View_CROWS_TI";
                    pointDirection = "View_CROWS_TI_dir";
                    renderVisionMode = 2;
                    renderQuality = 2;
                    fov = 0.7;
                    turret[] = {0};
                };
                BBoxes[] = {"PIP_3_TL", "PIP_3_TR", "PIP_3_BL", "PIP_3_BR"};
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_stryker\data\periscope.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\periscope_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\periscope_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\periscope_round.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\periscope_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\periscope_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_M1126_acc.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_M1126_acc_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_M1126_acc.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_M1126_acc_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_d.rvmat",
                "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_d_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc.rvmat",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc.rvmat",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc.rvmat",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc.rvmat",
                "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat"
            };
        };
        hiddenSelections[] = {
            "Camo_1",
            "Camo_2",
            "Camo_3",
            "Camo_4",
            "Camo_5",
            "Camo_Acc",
            "Camo_AccA",
            "Camo_DUKE",
            "Camo_fc01",
            "Camo_fc02",
            "Camo_wc01",
            "Camo_wc02",
            "callsign1",
            "callsign2",
            "callsign3",
            "callsign4",
            "dec_hull",
            "BFT_screen"
        };
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
            "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
            "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
            "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
            "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
            "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa"
        };
        class TextureSources {
            class Olive {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "Olive";
                textures[] = {
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
                    "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa"
                };
            };
            class OliveDirty {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "Olive (Dirty)";
                textures[] = {
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_od_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_od_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_od_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_od_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_od_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_od_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_od_ca.paa",
                    "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_c_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa"
                };
            };
            class Tan {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "Tan";
                textures[] = {
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_ca.paa",
                    "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_c_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa"
                };
            };
        };
        transportSoldier = 6;
        cargoProxyIndexes[] = {2, 3, 4, 5, 6, 7};
        getInProxyOrder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        cargoAction[] = {
            "rhs_passenger_apc_narrow_generic02",
            "rhs_passenger_apc_narrow_generic01",
            "rhs_passenger_apc_narrow_generic01",
            "rhs_passenger_apc_narrow_generic01",
            "rhs_passenger_apc_narrow_generic01",
            "rhs_passenger_apc_narrow_generic01"
        };
        cargoDoors[] = {"Ramp"};
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
        class HitPoints: HitPoints {
            class Hit_Optic_CROWS_Day {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_CROWS_Day";
                armorComponent = "Hit_Optic_CROWS_Day";
                passThrough = 0;
            };
            class Hit_Optic_CROWS_TI {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_CROWS_TI";
                armorComponent = "Hit_Optic_CROWS_TI";
                passThrough = 0;
            };
            class Hit_Optic_CROWS_LRF {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_CROWS_LRF";
                armorComponent = "Hit_Optic_CROWS_LRF";
                passThrough = 0;
            };
            class Hit_Optic_ComPeriscope1 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_ComPeriscope1";
                armorComponent = "Hit_Optic_ComPeriscope1";
                passThrough = 0;
            };
            class Hit_Optic_ComPeriscope2 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_ComPeriscope2";
                armorComponent = "Hit_Optic_ComPeriscope2";
                passThrough = 0;
            };
            class Hit_Optic_ComPeriscope3 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_ComPeriscope3";
                armorComponent = "Hit_Optic_ComPeriscope3";
                passThrough = 0;
            };
            class Hit_Optic_ComPeriscope4 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_ComPeriscope4";
                armorComponent = "Hit_Optic_ComPeriscope4";
                passThrough = 0;
            };
            class Hit_Optic_ComPeriscope5 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_ComPeriscope5";
                armorComponent = "Hit_Optic_ComPeriscope5";
                passThrough = 0;
            };
            class Hit_Optic_ComPeriscope6 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_ComPeriscope6";
                armorComponent = "Hit_Optic_ComPeriscope6";
                passThrough = 0;
            };
            class Hit_Optic_ComPeriscope7 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_ComPeriscope7";
                armorComponent = "Hit_Optic_ComPeriscope7";
                passThrough = 0;
            };
        };
        class CargoTurret;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets {};
                soundServo[] = {
                    "A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
                    0.39810717,
                    1,
                    30
                };
                soundServoVertical[] = {
                    "A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
                    0.39810717,
                    1,
                    30
                };
                gunnerName = "Vehicle Commander";
                discreteDistance[] = {
                    100,
                    150,
                    200,
                    250,
                    300,
                    350,
                    400,
                    450,
                    500,
                    550,
                    600,
                    650,
                    700,
                    750,
                    800,
                    850,
                    900,
                    950,
                    1000,
                    1050,
                    1100,
                    1150,
                    1200,
                    1250,
                    1300,
                    1350,
                    1400,
                    1450,
                    1500,
                    1550,
                    1600,
                    1650,
                    1700,
                    1750,
                    1800,
                    1850,
                    1900,
                    1950,
                    2000
                };
                discreteDistanceInitIndex = 2;
                minElev = -20;
                maxElev = 60;
                gunnerAction = "RHS_Stryker_M1126_Gunner_out";
                gunnerInAction = "RHS_Stryker_M1126_Gunner_in";
                personturretAction = "vehicle_turnout_2";
                isPersonTurret = 1;
                gunnerGetInAction = "GetInMRAP_01_cargo";
                gunnerGetOutAction = "GetOutMRAP_01";
                gunnerCompartments = "Compartment1";
                gunnerDoor = "Hatch_Commander";
                animationSourceHatch = "Hatch_Commander_A";
                gunnerForceOptics = 0;
                gunnerOutOpticsShowCursor = 0;
                viewGunnerInExternal = 1;
                LODTurnedOut = 1;
                LODTurnedin = 1000;
                LODOpticsIn = 0;
                LODOpticsOut = 0;
                castGunnerShadow = 1;
                stabilizedInAxes = 3;
                startEngine = 0;
                usePip = 1;
                selectionFireAnim = "muzzleFlash";
                memoryPointGunnerOptics = "View_CROWS";
                animationSourceStickX = "gunner_stick_trav";
                animationSourceStickY = "gunner_stick_elev";
                gunnerRightHandAnimName = "gunner_stick";
                memoryPointsGetInGunner = "pos gunner";
                memoryPointsGetInGunnerDir = "pos gunner dir";
                class ViewOptics: ViewOptics {
                    visionMode[] = {"Normal"};
                    thermalMode[] = {0, 1};
                };
                class ViewGunner: ViewGunner {
                    initAngleX = -25;
                    initAngleY = 0;
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
                turretInfoType = "RHS_RscStryker_M151_CROWS";
                class OpticsIn {
                    class DaysightWFOV: ViewOptics {
                        camPos = "View_CROWS";
                        opticsDisplayName = "1.0x";
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_CROWS_monitor";
                        initFov = 0.7;
                        minFov = 0.7;
                        maxFov = 0.7;
                        visionMode[] = {"Normal"};
                        hitpoint = "Hit_Optic_CROWS_Day";
                    };
                    class ThermalWFOV: DaysightWFOV {
                        camPos = "View_CROWS_TI";
                        opticsDisplayName = "4.3x";
                        visionMode[] = {"TI"};
                        thermalMode[] = {0, 1};
                        initFov = 0.162791;
                        minFov = 0.162791;
                        maxFov = 0.162791;
                        hitpoint = "Hit_Optic_CROWS_TI";
                    };
                    class ThermalNFOV: ThermalWFOV {
                        opticsDisplayName = "12.5x";
                        initFov = 0.056;
                        minFov = 0.056;
                        maxFov = 0.056;
                    };
                    class DaysightNFOV: DaysightWFOV {
                        opticsDisplayName = "15.0x";
                        initFov = 0.0466667;
                        minFov = 0.0466667;
                        maxFov = 0.0466667;
                    };
                    class DaysightVNFOV: DaysightWFOV {
                        opticsDisplayName = "30.0x";
                        initFov = 0.0233333;
                        minFov = 0.0233333;
                        maxFov = 0.0233333;
                    };
                };
                class Hitpoints {
                    class HitTurret {
                        armor = -120;
                        minimalHit = -0.13;
                        explosionShielding = 0.5;
                        name = "Hit_Turret";
                        visual = "vis_turret";
                        armorComponent = "Hit_Turret";
                        passThrough = 0;
                        radius = 0.2;
                    };
                    class HitGun {
                        armor = -120;
                        minimalHit = -0.13;
                        explosionShielding = 0.5;
                        name = "Hit_Gun";
                        visual = "vis_gun";
                        armorComponent = "Hit_Gun";
                        passThrough = 0;
                        radius = 0.2;
                    };
                };
                class Components {
                    class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                        class Components: components {
                            class EmptyDisplay {
                                componentType = "EmptyDisplayComponent";
                            };
                            class MinimapDisplay {
                                componentType = "MinimapDisplayComponent";
                                resource = "RscCustomInfoMiniMap";
                            };
                            class CrewDisplay {
                                componentType = "CrewDisplayComponent";
                                resource = "RscCustomInfoCrew";
                            };
                            class SensorDisplay {
                                componentType = "SensorsDisplayComponent";
                                range[] = {8000, 16000, 25000, 4000};
                                resource = "RscCustomInfoSensors";
                            };
                        };
                    };
                    class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                        class Components: components {
                            class EmptyDisplay {
                                componentType = "EmptyDisplayComponent";
                            };
                            class MinimapDisplay {
                                componentType = "MinimapDisplayComponent";
                                resource = "RscCustomInfoMiniMap";
                            };
                            class CrewDisplay {
                                componentType = "CrewDisplayComponent";
                                resource = "RscCustomInfoCrew";
                            };
                            class SensorDisplay {
                                componentType = "SensorsDisplayComponent";
                                range[] = {8000, 4000, 2000, 1000};
                                resource = "RscCustomInfoSensors";
                            };
                        };
                    };
                };
            };
            class CargoTurret_01: CargoTurret {
                gunnerName = "Troop Commander";
                gunnerCompartments = "Compartment1";
                gunnerInAction = "RHS_Stryker_M1126_TC_in";
                gunnerAction = "RHS_Stryker_M1126_TC_out";
                showAsCargo = 1;
                personturretAction = "";
                gunnerDoor = "Ramp";
                proxyIndex = 1;
                viewGunnerInExternal = 1;
                isPersonTurret = 2;
                commanding = 4;
                maxOutTurn = 110;
                minOutTurn = -110;
                maxOutElev = 75;
                minOutElev = -15;
                LODTurnedOut = 1;
                LODTurnedin = 1200;
                animationSourceHatch = "";
                rhs_hatch = "Hatch_Front";
                rhs_hatch_control = 1;
                enabledByAnimationSource = "Hatch_Front";
                gunnerForceOptics = 0;
                class ViewGunner {
                    initAngleX = 0;
                    initAngleY = 0;
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
                class OpticsIn {
                    class DVE_Wide: ViewOptics {
                        camPos = "view_DVE";
                        camDir = "view_DVE_dir";
                        gunnerOpticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_DVE_4x3";
                        visionMode[] = {"TI"};
                        thermalMode[] = {0, 1};
                        initFov = 1.07692;
                        minFov = 1.07692;
                        maxFov = 1.07692;
                        hitpoint = "Hit_Optic_DVEA";
                    };
                    class DVS_Rear: DVE_Wide {
                        camPos = "view_rear";
                        camDir = "view_rear_dir";
                        hitpoint = "Hit_Optic_Driver_Rear";
                    };
                    class DaysightWFOV: ViewOptics {
                        camPos = "View_CROWS";
                        camDir = "View_CROWS_dir";
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_CROWS_monitor";
                        initFov = 0.7;
                        minFov = 0.7;
                        maxFov = 0.7;
                        visionMode[] = {"Normal"};
                        hitpoint = "Hit_Optic_CROWS_Day";
                        opticsDisplayName = "1.0x";
                    };
                    class ThermalWFOV: DaysightWFOV {
                        camPos = "View_CROWS_TI";
                        camDir = "View_CROWS_TI_dir";
                        visionMode[] = {"TI"};
                        thermalMode[] = {0, 1};
                        initFov = 0.162791;
                        minFov = 0.162791;
                        maxFov = 0.162791;
                        hitpoint = "Hit_Optic_CROWS_TI";
                        opticsDisplayName = "4.3x";
                    };
                    class ThermalNFOV: ThermalWFOV {
                        initFov = 0.056;
                        minFov = 0.056;
                        maxFov = 0.056;
                        opticsDisplayName = "12.5x";
                    };
                    class DaysightNFOV: DaysightWFOV {
                        initFov = 0.0466667;
                        minFov = 0.0466667;
                        maxFov = 0.0466667;
                        opticsDisplayName = "15.0x";
                    };
                    class DaysightVNFOV: DaysightWFOV {
                        initFov = 0.0233333;
                        minFov = 0.0233333;
                        maxFov = 0.0233333;
                        opticsDisplayName = "30.0x";
                    };
                };
                class Reflectors {
                    class cargo_light_1 {
                        color[] = {800, 900, 650};
                        ambient[] = {5, 5, 5};
                        position = "cargo_light_1";
                        direction = "cargo_light_1_dir";
                        hitpoint = "cargo_light_1";
                        selection = "cargo_light_1";
                        size = 1;
                        intensity = 4;
                        coneFadeCoef = 0.1;
                        innerAngle = 140;
                        outerAngle = 175;
                        useFlare = 0;
                        flareSize = 1;
                        flareMaxDistance = 5;
                        dayLight = 1;
                        blinking = 0;
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
            class CargoTurret_02: CargoTurret_01 {
                commanding = -9;
                gunnerName = "Passenger (Air Guard Left)";
                proxyIndex = 8;
                animationSourceHatch = "";
                rhs_hatch = "Hatch_Left";
                rhs_hatch_control = 1;
                enabledByAnimationSource = "Hatch_Left";
                gunnerInAction = "RHS_Stryker_M1126_AG_in";
                gunnerAction = "RHS_Stryker_M1126_AG_out";
                class Reflectors {};
            };
            class CargoTurret_03: CargoTurret_02 {
                commanding = -9;
                gunnerName = "Passenger (Air Guard Right)";
                proxyIndex = 9;
                rhs_hatch = "Hatch_Right";
                enabledByAnimationSource = "Hatch_Right";
            };
        };
        class AnimationSources: AnimationSources {
            class Hatch_Commander: Hatch_Driver {
                displayName = "Open commander hatch";
                animPeriod = 1.1;
                soundPosition = "hatch_commander_axis";
            };
            class Hatch_Front: Hatch_Driver {
                displayName = "Open front hatch";
                animPeriod = 1.1;
                soundPosition = "hatch_front_axis";
            };
            class Hatch_Left: Hatch_Driver {
                displayName = "Open left hatch";
                animPeriod = 1.1;
                soundPosition = "hatch_left_axis";
            };
            class Hatch_Right: Hatch_Driver {
                displayName = "Open right hatch";
                animPeriod = 1.1;
                soundPosition = "hatch_right_axis";
            };
            class Ramp: Hatch_Driver {
                displayName = "Open ramp";
                animPeriod = 3.285;
                soundPosition = "ramp_axis";
                sound = "rhs_ramp";
            };
            class Smoke_Revolving_Source {
                weapon = "rhsusf_weap_M6";
                source = "revolving";
            };
            class Hide_Antenna_1 {
                displayName = "Hide antenna #1";
                source = "user";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class Hide_Antenna_2 {
                displayName = "Hide antenna #2";
                source = "user";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class Hide_Antenna_3 {
                displayName = "Hide antenna #3";
                source = "user";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class Hide_CIP {
                displayName = "Hide Combat Identification Panel";
                source = "user";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class Hide_DEK {
                displayName = "Hide Driver's Enhancement Kit";
                source = "user";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class Hide_DUKE {
                displayName = "Hide Duke antenna";
                source = "user";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class Hide_ExDiff {
                displayName = "Hide exhaust diffuser";
                source = "user";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class Hide_FCans {
                displayName = "Hide rear fuel cans";
                source = "user";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class Hide_WCans {
                displayName = "Hide rear water cans";
                source = "user";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class Hide_GPS {
                displayName = "Hide GPS antenna";
                source = "user";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class Hide_PioKit {
                displayName = "Hide pioneer tools";
                source = "user";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class Hide_StgBar {
                displayName = "Hide storage bars";
                source = "user";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class Hide_STORM {
                displayName = "Hide STORM laser range-finder";
                source = "user";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class Hide_SuspCov {
                displayName = "Hide suspension coverings";
                source = "user";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class Hide_Towbar {
                displayName = "Hide tow bar";
                source = "user";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class cargolights_hide {
                source = "user";
                animPeriod = 0;
                initPhase = 0;
            };
            class BFT_Map_Scale {
                source = "user";
                animPeriod = 0;
                initPhase = 0.1;
            };
            class BFT_Map_Move_X {
                source = "user";
                animPeriod = 0;
                initPhase = 0;
            };
            class BFT_Map_Move_Y {
                source = "user";
                animPeriod = 0;
                initPhase = 0;
            };
            class Unhide_vis_optic_d_CROWS_Day {
                source = "hit";
                hitpoint = "Hit_Optic_CROWS_Day";
            };
            class Unhide_vis_optic_d_CROWS_TI {
                source = "hit";
                hitpoint = "Hit_Optic_CROWS_TI";
            };
            class Unhide_vis_optic_d_CROWS_LRF {
                source = "hit";
                hitpoint = "Hit_Optic_CROWS_LRF";
            };
            class Unhide_vis_optic_d_ComPeriscope1 {
                source = "hit";
                hitpoint = "Hit_Optic_ComPeriscope1";
            };
            class Unhide_vis_optic_d_ComPeriscope2 {
                source = "hit";
                hitpoint = "Hit_Optic_ComPeriscope2";
            };
            class Unhide_vis_optic_d_ComPeriscope3 {
                source = "hit";
                hitpoint = "Hit_Optic_ComPeriscope3";
            };
            class Unhide_vis_optic_d_ComPeriscope4 {
                source = "hit";
                hitpoint = "Hit_Optic_ComPeriscope4";
            };
            class Unhide_vis_optic_d_ComPeriscope5 {
                source = "hit";
                hitpoint = "Hit_Optic_ComPeriscope5";
            };
            class Unhide_vis_optic_d_ComPeriscope6 {
                source = "hit";
                hitpoint = "Hit_Optic_ComPeriscope6";
            };
            class Unhide_vis_optic_d_ComPeriscope7 {
                source = "hit";
                hitpoint = "Hit_Optic_ComPeriscope7";
            };
        };
        class UVAnimations {
            class BFT_Map_Scale {
                type = "scale";
                section = "BFT_screen";
                source = "BFT_Map_Scale";
                minValue = 0;
                maxValue = 1;
                center[] = {1, 1};
                scale0[] = {0, 0};
                scale1[] = {1, 1};
            };
            class BFT_Map_Move_X {
                section = "BFT_screen";
                type = "translation";
                source = "BFT_Map_Move_X";
                maxValue = 100000;
                center[] = {1, 0};
                offset0[] = {0, 0};
                offset1[] = {100, 0};
            };
            class BFT_Map_Move_Y: BFT_Map_Move_X {
                source = "BFT_Map_Move_Y";
                maxValue = 100000;
                offset0[] = {0, 0};
                offset1[] = {0, -100};
            };
            class BFT_Map_Rotate: BFT_Map_Scale {
                type = "rotate";
                source = "direction";
                minValue = "rad -180";
                maxValue = "rad 180";
                angle0 = "rad -180";
                angle1 = "rad 180";
            };
        };
    };
    class rhsusf_stryker_m1126_m2_base: rhsusf_stryker_m1126_base {
        displayName = "M1126 (M2)";
        model = "\rhsusf\addons\rhsusf_stryker\rhsusf_m1126_m2.p3d";
        picture = "\rhsusf\addons\rhsusf_stryker\data\ui\rhsusf_stryker_m1126_m2_ca.paa";
        Icon = "\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\map_APC_Wheeled_03_CA.paa";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"RHS_M2_CROWS_M151", "rhsusf_weap_M6"};
                magazines[] = {
                    "rhs_mag_200rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_200rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_200rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_200rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_200rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_200rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_200rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_200rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_200rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_200rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_200rnd_127x99_mag_Tracer_Red",
                    "rhsusf_mag_L8A3_16"
                };
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
        };
        class AnimationSources: AnimationSources {
            class M2_CROWS_AmmoRandom {
                weapon = "RHS_M2_CROWS_M151";
                source = "ammorandom";
            };
            class M2_CROWS_Reload {
                weapon = "RHS_M2_CROWS_M151";
                source = "reload";
            };
            class M2_CROWS_ReloadMagazine {
                weapon = "RHS_M2_CROWS_M151";
                source = "reloadmagazine";
            };
            class M2_CROWS_Revolving {
                weapon = "RHS_M2_CROWS_M151";
                source = "revolving";
            };
        };
    };
    class rhsusf_stryker_m1126_mk19_base: rhsusf_stryker_m1126_base {
        displayName = "M1126 (Mk19)";
        model = "\rhsusf\addons\rhsusf_stryker\rhsusf_m1126_mk19";
        picture = "\rhsusf\addons\rhsusf_stryker\data\ui\rhsusf_stryker_m1126_mk19_ca.paa";
        Icon = "\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\map_APC_Wheeled_03_CA.paa";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"RHS_MK19_CROWS_M153", "rhsusf_weap_M6"};
                magazines[] = {
                    "RHS_96Rnd_40mm_MK19_M430A1",
                    "RHS_96Rnd_40mm_MK19_M430A1",
                    "RHS_96Rnd_40mm_MK19_M430A1",
                    "RHS_96Rnd_40mm_MK19_M430A1",
                    "RHS_96Rnd_40mm_MK19_M430A1",
                    "RHS_96Rnd_40mm_MK19_M430A1",
                    "RHS_96Rnd_40mm_MK19_M430A1",
                    "RHS_96Rnd_40mm_MK19_M430A1",
                    "RHS_96Rnd_40mm_MK19_M430A1",
                    "RHS_96Rnd_40mm_MK19_M430A1",
                    "RHS_96Rnd_40mm_MK19_M430A1",
                    "rhsusf_mag_L8A3_16"
                };
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
        };
        class AnimationSources: AnimationSources {
            class MK19_CROWS_Reload {
                weapon = "RHS_MK19_CROWS_M153";
                source = "reload";
            };
            class MK19_CROWS_ReloadMagazine {
                weapon = "RHS_MK19_CROWS_M153";
                source = "reloadmagazine";
            };
            class MK19_CROWS_Revolving {
                weapon = "RHS_MK19_CROWS_M153";
                source = "revolving";
            };
        };
    };
    class rhsusf_stryker_m1126_m2_wd: rhsusf_stryker_m1126_m2_base {
        author = "$STR_RHSUSF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_rifleman_m4";
        rhs_decalParameters[] = {"['Label', 'dec_hull', 'HullDecals_Stryker_WD']"};
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_stryker_m1126_m2_wd.paa";
    };
    class rhsusf_stryker_m1126_m2_d: rhsusf_stryker_m1126_m2_base {
        author = "$STR_RHSUSF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_rifleman_m4";
        rhs_decalParameters[] = {"['Label', 'dec_hull', 'HullDecals_Stryker_WD']"};
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_stryker_m1126_m2_d.paa";
        textureList[] = {"OliveDirty", 1};
    };
    class rhsusf_stryker_m1126_mk19_wd: rhsusf_stryker_m1126_mk19_base {
        author = "$STR_RHSUSF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_rifleman_m4";
        rhs_decalParameters[] = {"['Label', 'dec_hull', 'HullDecals_Stryker_WD']"};
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_stryker_m1126_mk19_wd.paa";
    };
    class rhsusf_stryker_m1126_mk19_d: rhsusf_stryker_m1126_mk19_base {
        author = "$STR_RHSUSF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_rifleman_m4";
        rhs_decalParameters[] = {"['Label', 'dec_hull', 'HullDecals_Stryker_WD']"};
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_stryker_m1126_mk19_d.paa";
        textureList[] = {"OliveDirty", 1};
    };
    class rhsusf_stryker_m1127_base: rhsusf_stryker_m1126_base {
        displayName = "M1127";
        defaultUserMFDvalues[] = {1000, 4};
        class TransportBackpacks {
            class _xx_rhsusf_falconii {
                backpack = "rhsusf_falconii";
                count = 8;
            };
        };
        class TransportMagazines {
            class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
                magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
                count = 75;
            };
            class _xx_rhsusf_100Rnd_556x45_soft_pouch {
                magazine = "rhsusf_100Rnd_556x45_soft_pouch";
                count = 11;
            };
            class _xx_rhsusf_100Rnd_762x51 {
                magazine = "rhsusf_100Rnd_762x51";
                count = 11;
            };
            class _xx_rhsusf_5Rnd_00Buck {
                magazine = "rhsusf_5Rnd_00Buck";
                count = 20;
            };
            class _xx_rhs_fgm148_magazine_AT {
                magazine = "rhs_fgm148_magazine_AT";
                count = 1;
            };
            class _xx_rhs_m136_mag {
                magazine = "rhs_m136_mag";
                count = 2;
            };
            class _xx_rhs_mag_M433_HEDP {
                magazine = "rhs_mag_M433_HEDP";
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
                count = 1;
            };
            class _xx_Toolkit {
                name = "Toolkit";
                count = 1;
            };
        };
        class TransportWeapons {
            class _xx_rhs_weap_m4 {
                weapon = "rhs_weap_m4";
                count = 2;
            };
            class _xx_rhs_weap_m240B {
                weapon = "rhs_weap_m240B";
                count = 1;
            };
            class _xx_rhs_weap_M590_5RD {
                weapon = "rhs_weap_M590_5RD";
                count = 1;
            };
            class _xx_rhs_weap_fgm148 {
                weapon = "rhs_weap_fgm148";
                count = 1;
            };
            class _xx_rhs_weap_M136 {
                weapon = "rhs_weap_M136";
                count = 2;
            };
        };
        class MFD {
            class MFD_LRAS3 {
                topLeft = "PIP_3_TL";
                topRight = "PIP_3_TR";
                bottomLeft = "PIP_3_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0.2;
                borderBottom = 0.2;
                color[] = {0.84, 0.86, 0.84};
                alpha = 1;
                enableParallax = 0;
                font = "rhsusf_digital_font_var";
                turret[] = {2};
                class material {
                    ambient[] = {3, 3, 3, 1};
                    diffuse[] = {10, 10, 10, 1};
                    emissive[] = {400, 200, 200, 1};
                };
                class Bones {
                    class Cross {
                        type = "fixed";
                        pos[] = {0.5, 0.49};
                    };
                };
                class Draw {
                    color[] = {1, 0, 0, 1};
                    alpha = 1;
                    class StaticDraw {
                        type = "line";
                        width = 3;
                        points[] = {};
                    };
                    class StaticDrawBold {
                        type = "line";
                        width = 5;
                        points[] = {};
                    };
                    class Green {
                        color[] = {0, 1, 0};
                        alpha = 0.1;
                        class Mode_Value {
                            type = "text";
                            source = "userText";
                            text = "DAY";
                            sourceIndex = 1;
                            sourceScale = 1;
                            sourceLength = 3;
                            scale = 1;
                            align = "right";
                            pos[] = {{0.75, 0.06}, 1};
                            right[] = {{0.77, 0.06}, 1};
                            down[] = {{0.75, 0.08}, 1};
                        };
                        class Clear_Text {
                            type = "text";
                            source = "static";
                            text = "CLEAR";
                            scale = 1;
                            sourceScale = 1;
                            align = "right";
                            pos[] = {{0.75, 0.08}, 1};
                            right[] = {{0.77, 0.08}, 1};
                            down[] = {{0.75, 0.1}, 1};
                        };
                        class Stare_Text {
                            type = "text";
                            source = "static";
                            text = "STARE";
                            scale = 1;
                            sourceScale = 1;
                            align = "right";
                            pos[] = {{0.75, 0.1}, 1};
                            right[] = {{0.77, 0.1}, 1};
                            down[] = {{0.75, 0.12}, 1};
                        };
                        class LASER_Text {
                            type = "text";
                            source = "static";
                            text = "FIRST";
                            scale = 1;
                            sourceScale = 1;
                            align = "right";
                            pos[] = {{0.75, 0.12}, 1};
                            right[] = {{0.77, 0.12}, 1};
                            down[] = {{0.75, 0.14}, 1};
                        };
                        class Pos_Text {
                            type = "text";
                            source = "static";
                            text = "RANGE";
                            scale = 1;
                            sourceScale = 1;
                            align = "right";
                            pos[] = {{0.42, 0.85}, 1};
                            right[] = {{0.44, 0.85}, 1};
                            down[] = {{0.42, 0.87}, 1};
                        };
                        class Range_Value {
                            type = "text";
                            source = "laserDist";
                            sourceScale = 1;
                            sourceLength = 3;
                            scale = 1;
                            align = "right";
                            pos[] = {{0.52, 0.85}, 1};
                            right[] = {{0.54, 0.85}, 1};
                            down[] = {{0.52, 0.87}, 1};
                        };
                        class TimeStatic_Text {
                            type = "text";
                            source = "static";
                            text = "TIME";
                            scale = 1;
                            sourceScale = 1;
                            align = "right";
                            pos[] = {{0.2, 0.85}, 1};
                            right[] = {{0.22, 0.85}, 1};
                            down[] = {{0.2, 0.87}, 1};
                        };
                        class CurrentTimeHour {
                            type = "text";
                            source = "time";
                            text = "%H";
                            scale = 1;
                            align = "right";
                            pos[] = {{0.25, 0.85}, 1};
                            right[] = {{0.27, 0.85}, 1};
                            down[] = {{0.25, 0.87}, 1};
                        };
                        class TimeStatic2_Text {
                            type = "text";
                            source = "static";
                            text = ":";
                            scale = 1;
                            sourceScale = 1;
                            align = "right";
                            pos[] = {{0.27, 0.85}, 1};
                            right[] = {{0.29, 0.85}, 1};
                            down[] = {{0.27, 0.87}, 1};
                        };
                        class CurrentTimeMinute: CurrentTimeHour {
                            text = "%M";
                            pos[] = {{0.28, 0.85}, 1};
                            right[] = {{0.3, 0.85}, 1};
                            down[] = {{0.28, 0.87}, 1};
                        };
                        class SIGHT_Text {
                            type = "text";
                            source = "static";
                            text = "SIGHT";
                            scale = 1;
                            sourceScale = 1;
                            align = "right";
                            pos[] = {{0.2, 0.9}, 1};
                            right[] = {{0.22, 0.9}, 1};
                            down[] = {{0.2, 0.92}, 1};
                        };
                        class CordX {
                            type = "text";
                            source = "coordinateX";
                            sourceScale = 0.01;
                            sourceLength = 3;
                            sourceOffset = -0.5;
                            align = "right";
                            scale = 1;
                            pos[] = {{0.26, 0.9}, 1};
                            right[] = {{0.28, 0.9}, 1};
                            down[] = {{0.26, 0.92}, 1};
                        };
                        class CordY: CordX {
                            source = "coordinateY";
                            pos[] = {{0.3, 0.9}, 1};
                            right[] = {{0.32, 0.9}, 1};
                            down[] = {{0.3, 0.92}, 1};
                        };
                        class Tgt_Text {
                            type = "text";
                            source = "static";
                            text = "TGT";
                            scale = 1;
                            sourceScale = 1;
                            align = "right";
                            pos[] = {{0.41, 0.9}, 1};
                            right[] = {{0.43, 0.9}, 1};
                            down[] = {{0.41, 0.92}, 1};
                        };
                        class TgtPos_Value {
                            type = "text";
                            source = "userText";
                            text = "434 434";
                            sourceIndex = 2;
                            sourceScale = 1;
                            sourceLength = 3;
                            scale = 1;
                            align = "right";
                            pos[] = {{0.46, 0.9}, 1};
                            right[] = {{0.48, 0.9}, 1};
                            down[] = {{0.46, 0.92}, 1};
                        };
                        class AZ_Text {
                            type = "text";
                            source = "static";
                            text = "AZ";
                            scale = 1;
                            sourceScale = 1;
                            align = "right";
                            pos[] = {{0.67, 0.9}, 1};
                            right[] = {{0.69, 0.9}, 1};
                            down[] = {{0.67, 0.92}, 1};
                        };
                        class AZ_Value {
                            type = "text";
                            source = "[x]turretworld";
                            text = "DAY";
                            sourceIndex = 1;
                            sourceScale = 1;
                            sourceLength = 3;
                            scale = 1;
                            align = "left";
                            pos[] = {{0.73, 0.9}, 1};
                            right[] = {{0.75, 0.9}, 1};
                            down[] = {{0.73, 0.92}, 1};
                        };
                        class EL_Text {
                            type = "text";
                            source = "static";
                            text = "EL";
                            scale = 1;
                            sourceScale = 1;
                            align = "right";
                            pos[] = {{0.75, 0.9}, 1};
                            right[] = {{0.77, 0.9}, 1};
                            down[] = {{0.75, 0.92}, 1};
                        };
                        class EL_Value {
                            type = "text";
                            source = "[y]turretworld";
                            text = "DAY";
                            sourceIndex = 1;
                            sourceScale = 1;
                            sourceLength = 1;
                            scale = 1;
                            align = "left";
                            pos[] = {{0.8, 0.9}, 1};
                            right[] = {{0.82, 0.9}, 1};
                            down[] = {{0.8, 0.92}, 1};
                        };
                        class ZoomLevel_4 {
                            condition = "(user1 >= 4) * (user1 <= 4)";
                            class StaticDraw {
                                type = "line";
                                width = 1;
                                points[] = {
                                    {"Cross", {0.049, 0}, 1},
                                    {"Cross", {0.0104, 0}, 1},
                                    {},
                                    {"Cross", {-0.049, 0}, 1},
                                    {"Cross", {-0.0104, 0}, 1},
                                    {},
                                    {"Cross", {0.0104, 0.016}, 1},
                                    {"Cross", {0.0104, -0.016}, 1},
                                    {"Cross", {-0.0104, -0.016}, 1},
                                    {"Cross", {-0.0104, 0.016}, 1},
                                    {"Cross", {0.0104, 0.016}, 1},
                                    {},
                                    {"Cross", {0.00052, 0.0008}, 1},
                                    {"Cross", {0.00052, -0.0008}, 1},
                                    {"Cross", {-0.00052, -0.0008}, 1},
                                    {"Cross", {-0.00052, 0.0008}, 1},
                                    {"Cross", {0.00052, 0.0008}, 1},
                                    {},
                                    {"Cross", {0, 0.016}, 1},
                                    {"Cross", {0, 0.032}, 1},
                                    {},
                                    {"Cross", {0, -0.016}, 1},
                                    {"Cross", {0, -0.032}, 1},
                                    {},
                                    {"Cross", {-0.049, 0.032}, 1},
                                    {"Cross", {-0.098, 0.032}, 1},
                                    {},
                                    {"Cross", {0.049, 0.032}, 1},
                                    {"Cross", {0.098, 0.032}, 1},
                                    {},
                                    {"Cross", {-0.049, -0.032}, 1},
                                    {"Cross", {-0.098, -0.032}, 1},
                                    {},
                                    {"Cross", {0.049, -0.032}, 1},
                                    {"Cross", {0.098, -0.032}, 1},
                                    {},
                                    {"Cross", {0.1472, 0}, 1},
                                    {"Cross", {0.196, 0}, 1},
                                    {},
                                    {"Cross", {-0.1472, 0}, 1},
                                    {"Cross", {-0.196, 0}, 1},
                                    {},
                                    {"Cross", {0, 0.064}, 1},
                                    {"Cross", {0, 0.0928}, 1},
                                    {},
                                    {"Cross", {0, -0.064}, 1},
                                    {"Cross", {0, -0.0928}, 1},
                                    {}
                                };
                            };
                        };
                        class ZoomLevel_8 {
                            condition = "(user1 >= 8) * (user1 <= 8)";
                            class StaticDraw {
                                type = "line";
                                width = 1;
                                points[] = {
                                    {"Cross", {0.05635, 0}, 1},
                                    {"Cross", {0.01196, 0}, 1},
                                    {},
                                    {"Cross", {-0.05635, 0}, 1},
                                    {"Cross", {-0.01196, 0}, 1},
                                    {},
                                    {"Cross", {0.01196, 0.0184}, 1},
                                    {"Cross", {0.01196, -0.0184}, 1},
                                    {"Cross", {-0.01196, -0.0184}, 1},
                                    {"Cross", {-0.01196, 0.0184}, 1},
                                    {"Cross", {0.01196, 0.0184}, 1},
                                    {},
                                    {"Cross", {0.000598, 0.00092}, 1},
                                    {"Cross", {0.000598, -0.00092}, 1},
                                    {"Cross", {-0.000598, -0.00092}, 1},
                                    {"Cross", {-0.000598, 0.00092}, 1},
                                    {"Cross", {0.000598, 0.00092}, 1},
                                    {},
                                    {"Cross", {0, 0.0184}, 1},
                                    {"Cross", {0, 0.0368}, 1},
                                    {},
                                    {"Cross", {0, -0.0184}, 1},
                                    {"Cross", {0, -0.0368}, 1},
                                    {},
                                    {"Cross", {-0.05635, 0.0368}, 1},
                                    {"Cross", {-0.1127, 0.0368}, 1},
                                    {},
                                    {"Cross", {0.05635, 0.0368}, 1},
                                    {"Cross", {0.1127, 0.0368}, 1},
                                    {},
                                    {"Cross", {-0.05635, -0.0368}, 1},
                                    {"Cross", {-0.1127, -0.0368}, 1},
                                    {},
                                    {"Cross", {0.05635, -0.0368}, 1},
                                    {"Cross", {0.1127, -0.0368}, 1},
                                    {},
                                    {"Cross", {0.16928, 0}, 1},
                                    {"Cross", {0.2254, 0}, 1},
                                    {},
                                    {"Cross", {-0.16928, 0}, 1},
                                    {"Cross", {-0.2254, 0}, 1},
                                    {},
                                    {"Cross", {0, 0.0736}, 1},
                                    {"Cross", {0, 0.10672}, 1},
                                    {},
                                    {"Cross", {0, -0.0736}, 1},
                                    {"Cross", {0, -0.10672}, 1},
                                    {}
                                };
                            };
                        };
                        class ZoomLevel_12 {
                            condition = "(user1 >= 12) * (user1 <= 12)";
                            class StaticDraw {
                                type = "line";
                                width = 1;
                                points[] = {
                                    {"Cross", {0.0637, 0}, 1},
                                    {"Cross", {0.01352, 0}, 1},
                                    {},
                                    {"Cross", {-0.0637, 0}, 1},
                                    {"Cross", {-0.01352, 0}, 1},
                                    {},
                                    {"Cross", {0.01352, 0.0208}, 1},
                                    {"Cross", {0.01352, -0.0208}, 1},
                                    {"Cross", {-0.01352, -0.0208}, 1},
                                    {"Cross", {-0.01352, 0.0208}, 1},
                                    {"Cross", {0.01352, 0.0208}, 1},
                                    {},
                                    {"Cross", {0.000676, 0.00104}, 1},
                                    {"Cross", {0.000676, -0.00104}, 1},
                                    {"Cross", {-0.000676, -0.00104}, 1},
                                    {"Cross", {-0.000676, 0.00104}, 1},
                                    {"Cross", {0.000676, 0.00104}, 1},
                                    {},
                                    {"Cross", {0, 0.0208}, 1},
                                    {"Cross", {0, 0.0416}, 1},
                                    {},
                                    {"Cross", {0, -0.0208}, 1},
                                    {"Cross", {0, -0.0416}, 1},
                                    {},
                                    {"Cross", {-0.0637, 0.0416}, 1},
                                    {"Cross", {-0.1274, 0.0416}, 1},
                                    {},
                                    {"Cross", {0.0637, 0.0416}, 1},
                                    {"Cross", {0.1274, 0.0416}, 1},
                                    {},
                                    {"Cross", {-0.0637, -0.0416}, 1},
                                    {"Cross", {-0.1274, -0.0416}, 1},
                                    {},
                                    {"Cross", {0.0637, -0.0416}, 1},
                                    {"Cross", {0.1274, -0.0416}, 1},
                                    {},
                                    {"Cross", {0.19136, 0}, 1},
                                    {"Cross", {0.2548, 0}, 1},
                                    {},
                                    {"Cross", {-0.19136, 0}, 1},
                                    {"Cross", {-0.2548, 0}, 1},
                                    {},
                                    {"Cross", {0, 0.0832}, 1},
                                    {"Cross", {0, 0.12064}, 1},
                                    {},
                                    {"Cross", {0, -0.0832}, 1},
                                    {"Cross", {0, -0.12064}, 1},
                                    {}
                                };
                            };
                        };
                        class ZoomLevel_24 {
                            condition = "(user1 >= 24) * (user1 <= 24)";
                            class StaticDraw {
                                type = "line";
                                width = 1;
                                points[] = {
                                    {"Cross", {0.08575, 0}, 1},
                                    {"Cross", {0.0182, 0}, 1},
                                    {},
                                    {"Cross", {-0.08575, 0}, 1},
                                    {"Cross", {-0.0182, 0}, 1},
                                    {},
                                    {"Cross", {0.0182, 0.028}, 1},
                                    {"Cross", {0.0182, -0.028}, 1},
                                    {"Cross", {-0.0182, -0.028}, 1},
                                    {"Cross", {-0.0182, 0.028}, 1},
                                    {"Cross", {0.0182, 0.028}, 1},
                                    {},
                                    {"Cross", {0.00091, 0.0014}, 1},
                                    {"Cross", {0.00091, -0.0014}, 1},
                                    {"Cross", {-0.00091, -0.0014}, 1},
                                    {"Cross", {-0.00091, 0.0014}, 1},
                                    {"Cross", {0.00091, 0.0014}, 1},
                                    {},
                                    {"Cross", {0, 0.028}, 1},
                                    {"Cross", {0, 0.056}, 1},
                                    {},
                                    {"Cross", {0, -0.028}, 1},
                                    {"Cross", {0, -0.056}, 1},
                                    {},
                                    {"Cross", {-0.08575, 0.056}, 1},
                                    {"Cross", {-0.1715, 0.056}, 1},
                                    {},
                                    {"Cross", {0.08575, 0.056}, 1},
                                    {"Cross", {0.1715, 0.056}, 1},
                                    {},
                                    {"Cross", {-0.08575, -0.056}, 1},
                                    {"Cross", {-0.1715, -0.056}, 1},
                                    {},
                                    {"Cross", {0.08575, -0.056}, 1},
                                    {"Cross", {0.1715, -0.056}, 1},
                                    {},
                                    {"Cross", {0.2576, 0}, 1},
                                    {"Cross", {0.343, 0}, 1},
                                    {},
                                    {"Cross", {-0.2576, 0}, 1},
                                    {"Cross", {-0.343, 0}, 1},
                                    {},
                                    {"Cross", {0, 0.112}, 1},
                                    {"Cross", {0, 0.1624}, 1},
                                    {},
                                    {"Cross", {0, -0.112}, 1},
                                    {"Cross", {0, -0.1624}, 1},
                                    {}
                                };
                            };
                        };
                        class ZoomLevel_48 {
                            condition = "(user1 >= 48) * (user1 <= 48)";
                            class StaticDraw {
                                type = "line";
                                width = 1;
                                points[] = {
                                    {"Cross", {0.18375, 0}, 1},
                                    {"Cross", {0.039, 0}, 1},
                                    {},
                                    {"Cross", {-0.18375, 0}, 1},
                                    {"Cross", {-0.039, 0}, 1},
                                    {},
                                    {"Cross", {0.039, 0.06}, 1},
                                    {"Cross", {0.039, -0.06}, 1},
                                    {"Cross", {-0.039, -0.06}, 1},
                                    {"Cross", {-0.039, 0.06}, 1},
                                    {"Cross", {0.039, 0.06}, 1},
                                    {},
                                    {"Cross", {0.00195, 0.003}, 1},
                                    {"Cross", {0.00195, -0.003}, 1},
                                    {"Cross", {-0.00195, -0.003}, 1},
                                    {"Cross", {-0.00195, 0.003}, 1},
                                    {"Cross", {0.00195, 0.003}, 1},
                                    {},
                                    {"Cross", {0, 0.06}, 1},
                                    {"Cross", {0, 0.12}, 1},
                                    {},
                                    {"Cross", {0, -0.06}, 1},
                                    {"Cross", {0, -0.12}, 1},
                                    {},
                                    {"Cross", {-0.18375, 0.12}, 1},
                                    {"Cross", {-0.3675, 0.12}, 1},
                                    {},
                                    {"Cross", {0.18375, 0.12}, 1},
                                    {"Cross", {0.3675, 0.12}, 1},
                                    {},
                                    {"Cross", {-0.18375, -0.12}, 1},
                                    {"Cross", {-0.3675, -0.12}, 1},
                                    {},
                                    {"Cross", {0.18375, -0.12}, 1},
                                    {"Cross", {0.3675, -0.12}, 1},
                                    {},
                                    {"Cross", {0.552, 0}, 1},
                                    {"Cross", {0.735, 0}, 1},
                                    {},
                                    {"Cross", {-0.552, 0}, 1},
                                    {"Cross", {-0.735, 0}, 1},
                                    {},
                                    {"Cross", {0, 0.24}, 1},
                                    {"Cross", {0, 0.348}, 1},
                                    {},
                                    {"Cross", {0, -0.24}, 1},
                                    {"Cross", {0, -0.348}, 1},
                                    {}
                                };
                            };
                        };
                    };
                };
            };
            class MFD_BFT {
                topLeft = "BFT_Map_TL";
                topRight = "BFT_Map_TR";
                bottomLeft = "BFT_Map_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {1, 1, 1, 1};
                helmetMountedDisplay = 0;
                helmetPosition[] = {-0.0375, 0.0375, 0.1};
                helmetRight[] = {0.075, 0, 0};
                helmetDown[] = {0, -0.075, 0};
                font = "rhsusf_txled";
                class material {
                    ambient[] = {3, 3, 3, 1};
                    diffuse[] = {1, 1, 1, 1};
                    emissive[] = {400, 200, 200, 1};
                };
                class Bones {
                    class Sensor_Offset {
                        type = "fixed";
                        pos[] = {0.5, 0.48};
                    };
                    class Static_Offset {
                        type = "fixed";
                        pos[] = {0.5, 0.5};
                    };
                    class LimitWaypoint {
                        type = "limit";
                        limits[] = {0.22, 0.06, 0.78, 0.06};
                    };
                    class Sensor_Rotation {
                        center[] = {0, 0};
                        type = "rotational";
                        source = "heading";
                        sourceScale = 1;
                        min = 0;
                        max = 360;
                        minAngle = 0;
                        maxAngle = -180;
                        aspectRatio = 1.25714;
                    };
                    class WPPoint {
                        type = "vector";
                        source = "WPPoint";
                        pos0[] = {0.5, 0.5};
                        pos10[] = {0.71, 0.764};
                    };
                    class Direction_Center {
                        type = "fixed";
                        pos[] = {0.5, 0.5};
                    };
                    class Rotation_WP_Dir {
                        pos0[] = {0, 0};
                        pos10[] = {0, 0};
                        center[] = {0, 0};
                        type = "rotational";
                        source = "user";
                        sourceIndex = 10;
                        min = 0;
                        max = 360;
                        minAngle = 0;
                        maxAngle = -360;
                        aspectRatio = 1;
                    };
                    class Rotation_WP_Center {
                        pos0[] = {0, 0};
                        pos10[] = {0, 0};
                        center[] = {0.5, 0.555};
                        type = "rotational";
                        source = "heading";
                        min = 0;
                        max = 360;
                        minAngle = -180;
                        maxAngle = "-360-180";
                        aspectRatio = 1.25714;
                    };
                    class MovementY {
                        type = "linear";
                        source = "user";
                        sourceIndex = 5;
                        refreshRate = 0.1;
                        min = 0;
                        max = 2;
                        sourceScale = 1;
                        maxPos[] = {0, 1};
                        minPos[] = {0, -1};
                    };
                    class MovementX: MovementY {
                        sourceIndex = 4;
                        maxPos[] = {-1, 0};
                        minPos[] = {1, 0};
                    };
                    class WP1_PosX: MovementX {
                        sourceIndex = 26;
                    };
                    class WP1_PosY: MovementY {
                        sourceIndex = 27;
                    };
                    class WP2_PosX: MovementX {
                        sourceIndex = 28;
                    };
                    class WP2_PosY: MovementY {
                        sourceIndex = 29;
                    };
                    class WP3_PosX: MovementX {
                        sourceIndex = 30;
                    };
                    class WP3_PosY: MovementY {
                        sourceIndex = 31;
                    };
                    class WP4_PosX: MovementX {
                        sourceIndex = 32;
                    };
                    class WP4_PosY: MovementY {
                        sourceIndex = 33;
                    };
                    class WP5_PosX: MovementX {
                        sourceIndex = 34;
                    };
                    class WP5_PosY: MovementY {
                        sourceIndex = 35;
                    };
                    class WP6_PosX: MovementX {
                        sourceIndex = 36;
                    };
                    class WP6_PosY: MovementY {
                        sourceIndex = 37;
                    };
                    class WP7_PosX: MovementX {
                        sourceIndex = 38;
                    };
                    class WP7_PosY: MovementY {
                        sourceIndex = 39;
                    };
                    class WP8_PosX: MovementX {
                        sourceIndex = 40;
                    };
                    class WP8_PosY: MovementY {
                        sourceIndex = 41;
                    };
                    class WP9_PosX: MovementX {
                        sourceIndex = 42;
                    };
                    class WP9_PosY: MovementY {
                        sourceIndex = 43;
                    };
                    class WP10_PosX: MovementX {
                        sourceIndex = 44;
                    };
                    class WP10_PosY: MovementY {
                        sourceIndex = 45;
                    };
                    class WP11_PosX: MovementX {
                        sourceIndex = 46;
                    };
                    class WP11_PosY: MovementY {
                        sourceIndex = 47;
                    };
                };
                class Draw {
                    alpha = 1;
                    color[] = {0, 0, 0.12};
                    class StaticClip {
                        class WaypointGroup {
                            color[] = {0, 0, 0.12};
                            alpha = 0.6;
                            class WP {
                                condition = "wpvalid";
                                class Draw {
                                    type = "line";
                                    points[] = {};
                                };
                                class WP1 {
                                    condition = "user26>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "1-WPIndex";
                                        class WaypointShape {
                                            width = 16;
                                            type = "line";
                                            points[] = {
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, -0.0125714}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.005, -0.0108869}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.01, 0}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.005, 0.0108869}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, 0.0125714}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.01, 0}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0, -0.0251429}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.01, -0.0217737}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.02, 0}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.01, 0.0217737}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0, 0.0251429}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.02, 0}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0, -0.0251429}, 1},
                                            {}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "01";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP1_PosX",
                                            1,
                                            "WP1_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP1_PosX",
                                            1,
                                            "WP1_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP1_PosX",
                                            1,
                                            "WP1_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP2 {
                                    condition = "user28>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=1)*(WPIndex<=1)";
                                        class WaypointShape {
                                            width = 16;
                                            type = "line";
                                            points[] = {
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, -0.0125714}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.005, -0.0108869}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.01, 0}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.005, 0.0108869}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, 0.0125714}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.01, 0}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, -0.0251429}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.01, -0.0217737}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.02, 0}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.01, 0.0217737}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, 0.0251429}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.02, 0}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP1_PosX", 1, "WP1_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP2_PosX", 1, "WP2_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "02";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP2_PosX",
                                            1,
                                            "WP2_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP2_PosX",
                                            1,
                                            "WP2_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP2_PosX",
                                            1,
                                            "WP2_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP3 {
                                    condition = "user30>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=2)*(WPIndex<=2)";
                                        class WaypointShape {
                                            width = 22;
                                            type = "line";
                                            points[] = {
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0, -0.0125714}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.005, -0.0108869}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.01, 0}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.005, 0.0108869}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0, 0.0125714}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.01, 0}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0, -0.0251429}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.01, -0.0217737}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.02, 0}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.01, 0.0217737}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0, 0.0251429}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.02, 0}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP2_PosX", 1, "WP2_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP3_PosX", 1, "WP3_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "03";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP3_PosX",
                                            1,
                                            "WP3_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP3_PosX",
                                            1,
                                            "WP3_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP3_PosX",
                                            1,
                                            "WP3_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP4 {
                                    condition = "user32>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=3)*(WPIndex<=3)";
                                        class WaypointShape {
                                            width = 22;
                                            type = "line";
                                            points[] = {
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0, -0.0125714}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.005, -0.0108869}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.01, 0}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.005, 0.0108869}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0, 0.0125714}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.01, 0}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0, -0.0251429}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.01, -0.0217737}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.02, 0}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.01, 0.0217737}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0, 0.0251429}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.02, 0}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP3_PosX", 1, "WP3_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP4_PosX", 1, "WP4_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "04";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP4_PosX",
                                            1,
                                            "WP4_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP4_PosX",
                                            1,
                                            "WP4_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP4_PosX",
                                            1,
                                            "WP4_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP5 {
                                    condition = "user34>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=4)*(WPIndex<=4)";
                                        class WaypointShape {
                                            width = 22;
                                            type = "line";
                                            points[] = {
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0, -0.0125714}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.005, -0.0108869}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.01, 0}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.005, 0.0108869}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0, 0.0125714}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.01, 0}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0, -0.0251429}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.01, -0.0217737}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.02, 0}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.01, 0.0217737}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0, 0.0251429}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.02, 0}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP4_PosX", 1, "WP4_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP5_PosX", 1, "WP5_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "05";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP5_PosX",
                                            1,
                                            "WP5_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP5_PosX",
                                            1,
                                            "WP5_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP5_PosX",
                                            1,
                                            "WP5_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP6 {
                                    condition = "user36>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=5)*(WPIndex<=5)";
                                        class WaypointShape {
                                            width = 22;
                                            type = "line";
                                            points[] = {
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0, -0.0125714}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.005, -0.0108869}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.01, 0}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.005, 0.0108869}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0, 0.0125714}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.01, 0}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0, -0.0251429}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.01, -0.0217737}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.02, 0}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.01, 0.0217737}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0, 0.0251429}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.02, 0}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP5_PosX", 1, "WP5_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP6_PosX", 1, "WP6_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "06";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP6_PosX",
                                            1,
                                            "WP6_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP6_PosX",
                                            1,
                                            "WP6_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP6_PosX",
                                            1,
                                            "WP6_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP7 {
                                    condition = "user38>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=6)*(WPIndex<=6)";
                                        class WaypointShape {
                                            width = 22;
                                            type = "line";
                                            points[] = {
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0, -0.0125714}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.005, -0.0108869}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.01, 0}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.005, 0.0108869}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0, 0.0125714}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.01, 0}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0, -0.0251429}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.01, -0.0217737}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.02, 0}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.01, 0.0217737}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0, 0.0251429}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.02, 0}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP6_PosX", 1, "WP6_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP7_PosX", 1, "WP7_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "07";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP7_PosX",
                                            1,
                                            "WP7_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP7_PosX",
                                            1,
                                            "WP7_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP7_PosX",
                                            1,
                                            "WP7_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP8 {
                                    condition = "user40>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=7)*(WPIndex<=7)";
                                        class WaypointShape {
                                            width = 22;
                                            type = "line";
                                            points[] = {
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0, -0.0125714}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.005, -0.0108869}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.01, 0}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.005, 0.0108869}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0, 0.0125714}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.01, 0}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0, -0.0251429}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.01, -0.0217737}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.02, 0}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.01, 0.0217737}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0, 0.0251429}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.02, 0}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP7_PosX", 1, "WP7_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP8_PosX", 1, "WP8_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "08";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP8_PosX",
                                            1,
                                            "WP8_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP8_PosX",
                                            1,
                                            "WP8_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP8_PosX",
                                            1,
                                            "WP8_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP9 {
                                    condition = "user42>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=8)*(WPIndex<=8)";
                                        class WaypointShape {
                                            width = 22;
                                            type = "line";
                                            points[] = {
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0, -0.0125714}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.005, -0.0108869}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.01, 0}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.005, 0.0108869}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0, 0.0125714}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.01, 0}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0, -0.0251429}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.01, -0.0217737}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.02, 0}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.01, 0.0217737}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0, 0.0251429}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.02, 0}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP8_PosX", 1, "WP8_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP9_PosX", 1, "WP9_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "09";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP9_PosX",
                                            1,
                                            "WP9_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP9_PosX",
                                            1,
                                            "WP9_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP9_PosX",
                                            1,
                                            "WP9_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP10 {
                                    condition = "user44>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=9)*(WPIndex<=9)";
                                        class WaypointShape {
                                            width = 22;
                                            type = "line";
                                            points[] = {
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0, -0.0125714}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.005, -0.0108869}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.01, 0}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.005, 0.0108869}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0, 0.0125714}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.01, 0}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0, -0.0251429}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.01, -0.0217737}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.02, 0}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.01, 0.0217737}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0, 0.0251429}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.02, 0}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP9_PosX", 1, "WP9_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP10_PosX", 1, "WP10_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "10";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP10_PosX",
                                            1,
                                            "WP10_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP10_PosX",
                                            1,
                                            "WP10_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP10_PosX",
                                            1,
                                            "WP10_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class CustomWP {
                                    condition = "user46>=0";
                                    color[] = {1, 0.5, 0};
                                    alpha = 0.5;
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0, -0.0251429}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.01, -0.0217737}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.02, 0}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.01, 0.0217737}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0, 0.0251429}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.02, 0}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0, -0.0251429}, 1},
                                            {}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "CWP";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP11_PosX",
                                            1,
                                            "WP11_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP11_PosX",
                                            1,
                                            "WP11_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP11_PosX",
                                            1,
                                            "WP11_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                            };
                        };
                    };
                    class LightBlue {
                        color[] = {0.43, 0.8, 0.93};
                        alpha = 0.15;
                        class StaticDrawPolygon {
                            type = "polygon";
                            points[] = {
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.00347296, -0.0247609}, 1}, {"Static_Offset", {0.0068404, -0.0236266}, 1}, {"Static_Offset", {0.01, -0.0217744}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.01, -0.0217744}, 1}, {"Static_Offset", {0.0128558, -0.0192605}, 1}, {"Static_Offset", {0.0153209, -0.0161615}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.0153209, -0.0161615}, 1}, {"Static_Offset", {0.0173205, -0.0125714}, 1}, {"Static_Offset", {0.0187939, -0.00859936}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.0187939, -0.00859936}, 1}, {"Static_Offset", {0.0196962, -0.00436601}, 1}, {"Static_Offset", {0.02, 0.00000000109903}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.02, 0.00000000109903}, 1}, {"Static_Offset", {0.0196962, 0.00436601}, 1}, {"Static_Offset", {0.0187939, 0.00859936}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.0187939, 0.00859936}, 1}, {"Static_Offset", {0.0173205, 0.0125714}, 1}, {"Static_Offset", {0.0153209, 0.0161615}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.0153209, 0.0161615}, 1}, {"Static_Offset", {0.0128557, 0.0192606}, 1}, {"Static_Offset", {0.01, 0.0217744}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.01, 0.0217744}, 1}, {"Static_Offset", {0.0068404, 0.0236266}, 1}, {"Static_Offset", {0.00347297, 0.0247609}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.00347297, 0.0247609}, 1}, {"Static_Offset", {-0.00000000174846, 0.0251429}, 1}, {"Static_Offset", {-0.00347297, 0.0247609}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.00347297, 0.0247609}, 1}, {"Static_Offset", {-0.0068404, 0.0236266}, 1}, {"Static_Offset", {-0.01, 0.0217743}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.01, 0.0217743}, 1}, {"Static_Offset", {-0.0128558, 0.0192605}, 1}, {"Static_Offset", {-0.0153209, 0.0161615}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.0153209, 0.0161615}, 1}, {"Static_Offset", {-0.0173205, 0.0125714}, 1}, {"Static_Offset", {-0.0187939, 0.00859936}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.0187939, 0.00859936}, 1}, {"Static_Offset", {-0.0196962, 0.00436601}, 1}, {"Static_Offset", {-0.02, -0.000000000299826}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.02, -0.000000000299826}, 1}, {"Static_Offset", {-0.0196962, -0.00436602}, 1}, {"Static_Offset", {-0.0187939, -0.00859936}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.0187939, -0.00859936}, 1}, {"Static_Offset", {-0.0173205, -0.0125714}, 1}, {"Static_Offset", {-0.0153209, -0.0161615}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.0153209, -0.0161615}, 1}, {"Static_Offset", {-0.0128557, -0.0192606}, 1}, {"Static_Offset", {-0.01, -0.0217744}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.01, -0.0217744}, 1}, {"Static_Offset", {-0.00684041, -0.0236266}, 1}, {"Static_Offset", {-0.00347296, -0.0247609}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.00347296, -0.0247609}, 1}, {"Static_Offset", {0.00000000349691, -0.0251429}, 1}, {"Static_Offset", {0.00347297, -0.0247609}, 1}}
                            };
                        };
                    };
                    class StaticDraw {
                        type = "line";
                        width = 6;
                        points[] = {
                            {"Static_Offset", {0, -0.0264}, 1},
                            {"Static_Offset", {0.0036456, -0.0259987}, 1},
                            {"Static_Offset", {0.007182, -0.0248081}, 1},
                            {"Static_Offset", {0.0105, -0.0228624}, 1},
                            {"Static_Offset", {0.0134988, -0.0202224}, 1},
                            {"Static_Offset", {0.016086, -0.0169699}, 1},
                            {"Static_Offset", {0.018186, -0.0132}, 1},
                            {"Static_Offset", {0.0197337, -0.0090288}, 1},
                            {"Static_Offset", {0.0206808, -0.00458304}, 1},
                            {"Static_Offset", {0.021, 0}, 1},
                            {"Static_Offset", {0.0206808, 0.00458304}, 1},
                            {"Static_Offset", {0.0197337, 0.0090288}, 1},
                            {"Static_Offset", {0.018186, 0.0132}, 1},
                            {"Static_Offset", {0.016086, 0.0169699}, 1},
                            {"Static_Offset", {0.0134988, 0.0202224}, 1},
                            {"Static_Offset", {0.0105, 0.0228624}, 1},
                            {"Static_Offset", {0.007182, 0.0248081}, 1},
                            {"Static_Offset", {0.0036456, 0.0259987}, 1},
                            {"Static_Offset", {0, 0.0264}, 1},
                            {"Static_Offset", {-0.0036456, 0.0259987}, 1},
                            {"Static_Offset", {-0.007182, 0.0248081}, 1},
                            {"Static_Offset", {-0.0105, 0.0228624}, 1},
                            {"Static_Offset", {-0.0134988, 0.0202224}, 1},
                            {"Static_Offset", {-0.016086, 0.0169699}, 1},
                            {"Static_Offset", {-0.018186, 0.0132}, 1},
                            {"Static_Offset", {-0.0197337, 0.0090288}, 1},
                            {"Static_Offset", {-0.0206808, 0.00458304}, 1},
                            {"Static_Offset", {-0.021, 0}, 1},
                            {"Static_Offset", {-0.0206808, -0.00458304}, 1},
                            {"Static_Offset", {-0.0197337, -0.0090288}, 1},
                            {"Static_Offset", {-0.018186, -0.0132}, 1},
                            {"Static_Offset", {-0.016086, -0.0169699}, 1},
                            {"Static_Offset", {-0.0134988, -0.0202224}, 1},
                            {"Static_Offset", {-0.0105, -0.0228624}, 1},
                            {"Static_Offset", {-0.007182, -0.0248081}, 1},
                            {"Static_Offset", {-0.0036456, -0.0259987}, 1},
                            {"Static_Offset", {0, -0.0264}, 1},
                            {},
                            {"Static_Offset", 1, {-0.012, -0.01}, 1},
                            {"Static_Offset", 1, {-0.012, 0.01}, 1},
                            {"Static_Offset", 1, {0.012, 0.01}, 1},
                            {"Static_Offset", 1, {0.012, -0.01}, 1},
                            {"Static_Offset", 1, {-0.012, -0.01}, 1},
                            {}
                        };
                    };
                    class SensorGroup {
                        class Sensor {
                            type = "sensor";
                            pos[] = {"Sensor_Offset", 1, {"-0+-1", "-0+-1"}, 1};
                            down[] = {"Sensor_Offset", 1, {"0--1", "0--1"}, 1};
                            showTargetTypes = "2+4+8+16+32+64+128+256+512+1024";
                            width = 4;
                            sensorLineType = 0;
                            sensorLineWidth = 3;
                            targetLineWidth = -0.00192;
                            targetLineLength = 0.02;
                            range = "user0";
                            class MissileThreat {
                                color[] = {1, 0, 0};
                                class TargetLines {
                                    type = "line";
                                    width = 2;
                                    points[] = {
                                        {{0, -0.0251429}, 1},
                                        {{0.003472, -0.0247607}, 1},
                                        {{0.00684, -0.0236267}, 1},
                                        {{0.01, -0.0217737}, 1},
                                        {{0.012856, -0.0192594}, 1},
                                        {{0.01532, -0.0161618}, 1},
                                        {{0.01732, -0.0125714}, 1},
                                        {{0.018794, -0.00859886}, 1},
                                        {{0.019696, -0.0043648}, 1},
                                        {{0.02, 0}, 1},
                                        {{0.019696, 0.0043648}, 1},
                                        {{0.018794, 0.00859886}, 1},
                                        {{0.01732, 0.0125714}, 1},
                                        {{0.01532, 0.0161618}, 1},
                                        {{0.012856, 0.0192594}, 1},
                                        {{0.01, 0.0217737}, 1},
                                        {{0.00684, 0.0236267}, 1},
                                        {{0.003472, 0.0247607}, 1},
                                        {{0, 0.0251429}, 1},
                                        {{-0.003472, 0.0247607}, 1},
                                        {{-0.00684, 0.0236267}, 1},
                                        {{-0.01, 0.0217737}, 1},
                                        {{-0.012856, 0.0192594}, 1},
                                        {{-0.01532, 0.0161618}, 1},
                                        {{-0.01732, 0.0125714}, 1},
                                        {{-0.018794, 0.00859886}, 1},
                                        {{-0.019696, 0.0043648}, 1},
                                        {{-0.02, 0}, 1},
                                        {{-0.019696, -0.0043648}, 1},
                                        {{-0.018794, -0.00859886}, 1},
                                        {{-0.01732, -0.0125714}, 1},
                                        {{-0.01532, -0.0161618}, 1},
                                        {{-0.012856, -0.0192594}, 1},
                                        {{-0.01, -0.0217737}, 1},
                                        {{-0.00684, -0.0236267}, 1},
                                        {{-0.003472, -0.0247607}, 1},
                                        {{0, -0.0251429}, 1}
                                    };
                                };
                                class TextM {
                                    type = "text";
                                    source = "static";
                                    text = "M";
                                    align = "center";
                                    scale = 1;
                                    pos[] = {{0, -0.01}, 1};
                                    right[] = {{0.02, -0.01}, 1};
                                    down[] = {{0, 0.01}, 1};
                                };
                            };
                            class lockingThreat {
                                color[] = {1, 0.3, 0};
                                class TargetLines {
                                    type = "line";
                                    points[] = {
                                        {{0.02, 0}, 1},
                                        {{0, 0.0251429}, 1},
                                        {{-0.02, 0}, 1},
                                        {{0, -0.0251429}, 1},
                                        {{0.02, 0}, 1}
                                    };
                                };
                            };
                            class markingThreat: lockingThreat {
                                class TargetLines: TargetLines {};
                            };
                            class rwr {
                                class TargetLines {
                                    type = "line";
                                    width = 2;
                                    points[] = {
                                        {{0.02, 0}, 1},
                                        {{0, 0.0251429}, 1},
                                        {{-0.02, 0}, 1},
                                        {{0, -0.0251429}, 1},
                                        {{0.02, 0}, 1}
                                    };
                                };
                            };
                            class rwrFriendly: rwr {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class rwrEnemy: rwr {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class rwrGroup: rwr {
                                color[] = {1, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class rwrDestroyed {};
                            class markedTarget {
                                color[] = {1, 0.3, 0};
                                class TargetLines {
                                    type = "line";
                                    width = 3;
                                    points[] = {
                                        {{-0.017, -0.0213714}, 1},
                                        {{-0.01, -0.0213714}, 1},
                                        {},
                                        {{0.017, -0.0213714}, 1},
                                        {{0.01, -0.0213714}, 1},
                                        {},
                                        {{-0.017, -0.0213714}, 1},
                                        {{-0.017, -0.0125714}, 1},
                                        {},
                                        {{0.017, -0.0213714}, 1},
                                        {{0.017, -0.0125714}, 1},
                                        {},
                                        {{-0.017, 0.0213714}, 1},
                                        {{-0.01, 0.0213714}, 1},
                                        {},
                                        {{0.017, 0.0213714}, 1},
                                        {{0.01, 0.0213714}, 1},
                                        {},
                                        {{-0.017, 0.0213714}, 1},
                                        {{-0.017, 0.0125714}, 1},
                                        {},
                                        {{0.017, 0.0213714}, 1},
                                        {{0.017, 0.0125714}, 1},
                                        {}
                                    };
                                };
                            };
                            class assignedTarget: markedTarget {
                                color[] = {1, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class target {
                                color[] = {1, 0.3, 0};
                                class TargetLines {
                                    type = "polygon";
                                    points[] = {{{{-0.01, -0.01}, 1}, {{0, -0.01}, 1}, {{0, 0}, 1}, {{-0.01, 0}, 1}}};
                                };
                            };
                            class targetFriendly: target {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetEnemy: target {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class targetGroup: target {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetDestroyed {};
                            class targetGround: target {
                                class TargetLines: TargetLines {
                                    type = "line";
                                    width = 3;
                                    points[] = {
                                        {{-0.026, -0}, 1},
                                        {{-0, 0.026}, 1},
                                        {{0.026, 0}, 1},
                                        {{0, -0.026}, 1},
                                        {{-0.026, -0}, 1},
                                        {}
                                    };
                                };
                                class StaticDraw {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.012, -0.01}, 1},
                                        {{-0.012, 0.01}, 1},
                                        {{0.012, 0.01}, 1},
                                        {{0.012, -0.01}, 1},
                                        {{-0.012, -0.01}, 1},
                                        {}
                                    };
                                };
                            };
                            class targetGroundFriendly: targetGround {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {
                                    type = "line";
                                    width = 3;
                                    points[] = {
                                        {{0, -0.0264}, 1},
                                        {{0.0036456, -0.0259987}, 1},
                                        {{0.007182, -0.0248081}, 1},
                                        {{0.0105, -0.0228624}, 1},
                                        {{0.0134988, -0.0202224}, 1},
                                        {{0.016086, -0.0169699}, 1},
                                        {{0.018186, -0.0132}, 1},
                                        {{0.0197337, -0.0090288}, 1},
                                        {{0.0206808, -0.00458304}, 1},
                                        {{0.021, 0}, 1},
                                        {{0.0206808, 0.00458304}, 1},
                                        {{0.0197337, 0.0090288}, 1},
                                        {{0.018186, 0.0132}, 1},
                                        {{0.016086, 0.0169699}, 1},
                                        {{0.0134988, 0.0202224}, 1},
                                        {{0.0105, 0.0228624}, 1},
                                        {{0.007182, 0.0248081}, 1},
                                        {{0.0036456, 0.0259987}, 1},
                                        {{0, 0.0264}, 1},
                                        {{-0.0036456, 0.0259987}, 1},
                                        {{-0.007182, 0.0248081}, 1},
                                        {{-0.0105, 0.0228624}, 1},
                                        {{-0.0134988, 0.0202224}, 1},
                                        {{-0.016086, 0.0169699}, 1},
                                        {{-0.018186, 0.0132}, 1},
                                        {{-0.0197337, 0.0090288}, 1},
                                        {{-0.0206808, 0.00458304}, 1},
                                        {{-0.021, 0}, 1},
                                        {{-0.0206808, -0.00458304}, 1},
                                        {{-0.0197337, -0.0090288}, 1},
                                        {{-0.018186, -0.0132}, 1},
                                        {{-0.016086, -0.0169699}, 1},
                                        {{-0.0134988, -0.0202224}, 1},
                                        {{-0.0105, -0.0228624}, 1},
                                        {{-0.007182, -0.0248081}, 1},
                                        {{-0.0036456, -0.0259987}, 1},
                                        {{0, -0.0264}, 1}
                                    };
                                };
                                class StaticDraw {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.012, -0.01}, 1},
                                        {{-0.012, 0.01}, 1},
                                        {{0.012, 0.01}, 1},
                                        {{0.012, -0.01}, 1},
                                        {{-0.012, -0.01}, 1},
                                        {}
                                    };
                                };
                            };
                            class targetGroundEnemy: targetGround {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {
                                    type = "line";
                                    width = 3;
                                    points[] = {
                                        {{-0.026, -0}, 1},
                                        {{-0, 0.026}, 1},
                                        {{0.026, 0}, 1},
                                        {{0, -0.026}, 1},
                                        {{-0.026, -0}, 1},
                                        {}
                                    };
                                };
                                class StaticDraw {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.012, -0.01}, 1},
                                        {{-0.012, 0.01}, 1},
                                        {{0.012, 0.01}, 1},
                                        {{0.012, -0.01}, 1},
                                        {{-0.012, -0.01}, 1},
                                        {}
                                    };
                                };
                            };
                            class targetGroundGroup: targetGroundFriendly {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                                class StaticDraw: StaticDraw {};
                            };
                            class targetGroundDestroyed {};
                            class targetGroundRemote: target {
                                class TargetLines: TargetLines {};
                            };
                            class targetGroundRemoteFriendly: targetGroundRemote {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetGroundRemoteEnemy: targetGroundRemote {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class targetGroundRemoteGroup: targetGroundRemote {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetGroundRemoteDestroyed {};
                            class targetLaser: target {
                                class TargetLines: TargetLines {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{0, -0.0251429}, 1},
                                        {{-0.00000000174846, 0.0251429}, 1},
                                        {},
                                        {{0.02, 0.00000000109903}, 1},
                                        {{-0.02, -0.000000000299826}, 1},
                                        {},
                                        {{0.0106066, -0.013334}, 1},
                                        {{-0.0106066, 0.013334}, 1},
                                        {},
                                        {{0.0106066, 0.013334}, 1},
                                        {{-0.0106066, -0.013334}, 1},
                                        {}
                                    };
                                };
                            };
                            class targetLaserFriendly: targetLaser {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetLaserEnemy: targetLaser {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class targetLaserGroup: targetLaser {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetNVG: targetLaser {
                                class TargetLines: TargetLines {};
                            };
                            class targetNVGFriendly: targetNVG {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetNVGEnemy: targetNVG {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class targetNVGGroup: targetNVG {
                                color[] = {1, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class targetMan: target {
                                class TargetLines: TargetLines {};
                            };
                            class targetManFriendly: targetMan {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetManEnemy: targetMan {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class targetManGroup: targetMan {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetManRemote: target {
                                class TargetLines: TargetLines {};
                            };
                            class targetManRemoteFriendly: targetManRemote {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetManRemoteEnemy: targetManRemote {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class targetManRemoteGroup: targetManRemote {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetAir {
                                color[] = {1, 1, 1};
                                class TargetLines {
                                    type = "polygon";
                                    points[] = {{{{0, 0}, 1}, {{0.012, 0.01}, 1}, {{0.012, -0.01}, 1}}, {{{0, 0}, 1}, {{-0.012, 0.01}, 1}, {{-0.012, -0.01}, 1}}};
                                };
                                class TargetArc {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.02, 0.0175}, 1},
                                        {{-0.02, -0.025}, 1},
                                        {{0.02, -0.025}, 1},
                                        {{0.02, 0.0175}, 1}
                                    };
                                };
                            };
                            class targetAirFriendly: targetAir {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                                class TargetArc {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.02, 0.0175}, 1},
                                        {{-0.016, 0.000400007}, 1},
                                        {{-0.012, -0.0129}, 1},
                                        {{-0.008, -0.0224}, 1},
                                        {{-0.004, -0.0281}, 1},
                                        {{0, -0.03}, 1},
                                        {{0.004, -0.0281}, 1},
                                        {{0.008, -0.0224}, 1},
                                        {{0.012, -0.0129}, 1},
                                        {{0.016, 0.000400007}, 1},
                                        {{0.02, 0.0175}, 1}
                                    };
                                };
                            };
                            class targetAirEnemy: targetAir {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                                class TargetArc {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.02, 0.0175}, 1},
                                        {{-0.016, 0.000400007}, 1},
                                        {{-0.012, -0.0129}, 1},
                                        {{-0.008, -0.0224}, 1},
                                        {{-0.004, -0.0281}, 1},
                                        {{0, -0.03}, 1},
                                        {{0.004, -0.0281}, 1},
                                        {{0.008, -0.0224}, 1},
                                        {{0.012, -0.0129}, 1},
                                        {{0.016, 0.000400007}, 1},
                                        {{0.02, 0.0175}, 1}
                                    };
                                };
                            };
                            class targetAirGroup: targetAir {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetAirDestroyed {};
                            class targetAirRemote: targetAir {
                                color[] = {1, 1, 1};
                                class TargetLines: TargetLines {};
                                class TargetArc {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.02, 0.0175}, 1},
                                        {{-0.02, -0.025}, 1},
                                        {{0.02, -0.025}, 1},
                                        {{0.02, 0.0175}, 1}
                                    };
                                };
                            };
                            class targetAirRemoteFriendly: targetAirRemote {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                                class TargetArc {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.02, 0.0175}, 1},
                                        {{-0.016, 0.000400007}, 1},
                                        {{-0.012, -0.0129}, 1},
                                        {{-0.008, -0.0224}, 1},
                                        {{-0.004, -0.0281}, 1},
                                        {{0, -0.03}, 1},
                                        {{0.004, -0.0281}, 1},
                                        {{0.008, -0.0224}, 1},
                                        {{0.012, -0.0129}, 1},
                                        {{0.016, 0.000400007}, 1},
                                        {{0.02, 0.0175}, 1}
                                    };
                                };
                            };
                            class targetAirRemoteEnemy: targetAirRemote {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                                class TargetArc {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.02, 0.0175}, 1},
                                        {{-0.02, -0.0075}, 1},
                                        {{-0, -0.03}, 1},
                                        {{0.02, -0.0075}, 1},
                                        {{0.02, 0.0175}, 1}
                                    };
                                };
                            };
                            class targetAirRemoteGroup: targetAirRemote {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetAirRemoteDestroyed {};
                        };
                    };
                };
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_stryker\data\periscope.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\periscope_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\periscope_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\periscope_round.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\periscope_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\periscope_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_LRAS3.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_LRAS3_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1127.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1127_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat"
            };
        };
        hiddenSelections[] = {
            "Camo_1",
            "Camo_2",
            "Camo_3",
            "Camo_4",
            "Camo_5",
            "camo_6",
            "camo_lras",
            "Camo_Acc",
            "Camo_AccA",
            "Camo_DUKE",
            "Camo_fc01",
            "Camo_fc02",
            "Camo_wc01",
            "Camo_wc02",
            "callsign1",
            "callsign2",
            "callsign3",
            "callsign4",
            "dec_hull",
            "BFT_screen"
        };
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_M1127_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_LRAS3_CO.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
            "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
            "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
            "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
            "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
            "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa"
        };
        class TextureSources {
            class Olive {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "Olive";
                textures[] = {
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_M1127_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_LRAS3_CO.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
                    "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa"
                };
            };
            class Tan {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "Tan";
                textures[] = {
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_M1127_des_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_LRAS3_d_CO.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_ca.paa",
                    "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_c_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa"
                };
            };
        };
        transportSoldier = 7;
        cargoProxyIndexes[] = {1, 2, 3, 4, 5, 6, 7};
        getInProxyOrder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        cargoAction[] = {
            "rhs_passenger_apc_narrow_generic02",
            "rhs_passenger_apc_narrow_generic01",
            "rhs_passenger_apc_narrow_generic01",
            "rhs_passenger_apc_narrow_generic01",
            "rhs_passenger_apc_narrow_generic01",
            "rhs_passenger_apc_narrow_generic01",
            "rhs_passenger_apc_narrow_generic01"
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerName = "Vehicle Commander";
                minElev = -20;
                maxElev = 60;
                body = "";
                gun = "";
                animationSourceBody = "";
                animationSourceGun = "";
                turretInfoType = "RscOptics_Offroad_01";
                gunnerAction = "RHS_Stryker_M1127_Gunner_out";
                gunnerInAction = "RHS_Stryker_M1127_Gunner_in";
                gunnerGetInAction = "GetInMRAP_01_cargo";
                gunnerGetOutAction = "GetOutMRAP_01";
                gunnerCompartments = "Compartment1";
                gunnerDoor = "Hatch_Commander";
                animationSourceHatch = "Hatch_Commander_A";
                gunnerForceOptics = 0;
                gunnerOutOpticsShowCursor = 0;
                viewGunnerInExternal = 1;
                LODTurnedOut = 1;
                LODTurnedin = 1201;
                LODOpticsIn = 0;
                LODOpticsOut = 0;
                castGunnerShadow = 1;
                stabilizedInAxes = 0;
                startEngine = 0;
                usePip = 0;
                inGunnerMayFire = 1;
                outGunnerMayFire = 1;
                gunBeg = "";
                gunEnd = "";
                memoryPointGunnerOptics = "";
                memoryPointGunnerOutOptics = "gunnerview";
                memoryPointsGetInGunner = "pos gunner";
                memoryPointsGetInGunnerDir = "pos gunner dir";
                selectionFireAnim = "";
                gunnerOpticsModel = "";
                gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                optics = 0;
                disableSoundAttenuation = 0;
                weapons[] = {
                    "rhsusf_weap_M6_GLUA",
                    "rhsusf_weap_M6_L1",
                    "rhsusf_weap_M6_L2",
                    "rhsusf_weap_M6_L3",
                    "rhsusf_weap_M6_R1",
                    "rhsusf_weap_M6_R2",
                    "rhsusf_weap_M6_R3"
                };
                magazines[] = {
                    "rhsusf_mag_L8A3_48",
                    "rhsusf_mag_L8A3_L1_8",
                    "rhsusf_mag_L8A3_L2_8",
                    "rhsusf_mag_L8A3_L3_8",
                    "rhsusf_mag_L8A3_R1_8",
                    "rhsusf_mag_L8A3_R2_8",
                    "rhsusf_mag_L8A3_R3_8"
                };
                class ViewOptics: ViewOptics {
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                class ViewGunner: ViewOptics {
                    initAngleX = -25;
                    initAngleY = 0;
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
            };
            class Turret_Weapon: MainTurret {
                gunnercompartments = "Compartment5";
                soundServo[] = {"", 0.39810717, 1, 30};
                soundServoVertical[] = {"", 0.39810717, 1, 30};
                gunnerName = "Turret (M2)";
                gunnerDoor = "";
                gunnerAction = "RHS_Stryker_M1127_M2_Gunner";
                isPersonTurret = 0;
                dontCreateAI = 1;
                personturretAction = "";
                proxyIndex = 2;
                canHideGunner = 0;
                initTurn = -20;
                minTurn = -180;
                maxTurn = 180;
                minElev = -9;
                maxElev = 30;
                maxhorizontalrotspeed = 0.6;
                maxverticalrotspeed = 0.44;
                inGunnerMayFire = 1;
                outGunnerMayFire = 1;
                LODTurnedOut = 1000;
                LODTurnedin = 1000;
                LODOpticsIn = 1000;
                LODOpticsOut = 1000;
                body = "Weapon_Turret";
                gun = "Weapon_Gun";
                animationSourceBody = "Weapon_Turret";
                animationSourceGun = "Weapon_Gun";
                gunnerLeftHandAnimName = "Weapon_Gun";
                gunnerRightHandAnimName = "Weapon_Gun";
                gunnerLeftLegAnimName = "Gunner_Weapon_Legs";
                gunnerRightLegAnimName = "Gunner_Weapon_Legs";
                animationSourceStickX = "Weapon_Turret_inertia";
                animationSourceStickY = "Weapon_Gun_Inertia";
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                memoryPointGunnerOutOptics = "Weapon_GunnerView";
                selectionFireAnim = "muzzleFlash";
                discreteDistance[] = {
                    100,
                    150,
                    200,
                    250,
                    300,
                    350,
                    400,
                    450,
                    500,
                    550,
                    600,
                    650,
                    700,
                    750,
                    800,
                    850,
                    900,
                    950,
                    1000,
                    1050,
                    1100,
                    1150,
                    1200,
                    1250,
                    1300,
                    1350,
                    1400,
                    1450,
                    1500,
                    1550,
                    1600,
                    1650,
                    1700,
                    1750,
                    1800,
                    1850,
                    1900,
                    1950,
                    2000
                };
                discreteDistanceInitIndex = 2;
                weapons[] = {"RHS_M2"};
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
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red"
                };
                class ViewGunner: ViewOptics {
                    initAngleX = -1;
                    initAngleY = 0;
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
                class Hitpoints {
                    class HitTurret_M2 {
                        armor = -120;
                        minimalHit = -0.13;
                        explosionShielding = 0.5;
                        name = "Hit_M2_Turret";
                        visual = "-";
                        armorComponent = "Hit_M2_Turret";
                        passThrough = 0;
                        radius = 0.2;
                    };
                    class HitGun_M2 {
                        armor = -120;
                        minimalHit = -0.13;
                        explosionShielding = 0.5;
                        name = "Hit_M2_Gun";
                        visual = "-";
                        armorComponent = "Hit_M2_Gun";
                        passThrough = 0;
                        radius = 0.2;
                    };
                };
            };
            class Turret_LRAS: Turret_Weapon {
                gunnerName = "Turret (LRAS3)";
                gunnerAction = "RHS_Stryker_M1127_LRAS_Gunner";
                proxyIndex = 3;
                initTurn = 20;
                minTurn = -180;
                maxTurn = 180;
                minElev = -20;
                maxElev = 30;
                inGunnerMayFire = 1;
                outGunnerMayFire = 1;
                gunnerForceOptics = 0;
                body = "LRAS3_Turret";
                gun = "LRAS3_Gun";
                animationSourceBody = "LRAS3_Turret";
                animationSourceGun = "LRAS3_Gun";
                gunnerLeftHandAnimName = "LRAS3";
                gunnerRightHandAnimName = "LRAS3";
                gunnerLeftLegAnimName = "Gunner_LRAS_Legs";
                gunnerRightLegAnimName = "Gunner_LRAS_Legs";
                animationSourceStickX = "";
                animationSourceStickY = "";
                memoryPointGunnerOutOptics = "LRAS3_GunnerView";
                gunBeg = "LRAS3_GunnerView_Dir";
                gunEnd = "LRAS3_GunnerView";
                selectionFireAnim = "";
                weapons[] = {"rhs_weap_laserDesignator_AI"};
                magazines[] = {"rhs_LaserMag_ai"};
                class ViewGunner: ViewOptics {
                    initAngleX = -5;
                    initAngleY = 0;
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
                class Components {};
                gunnerOutOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_LRAS3";
                turretInfoType = "RHS_RscLRAS3";
                class OpticsIn {
                    class Wide: ViewOptics {
                        opticsDisplayName = "4";
                        initFov = 0.175;
                        minFov = 0.175;
                        maxFov = 0.175;
                        visionMode[] = {"TI"};
                        thermalMode[] = {2, 3};
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_CITV_w";
                        hitpoint = "Hit_Optic_LRAS3";
                    };
                    class WideZoom: Wide {
                        opticsDisplayName = "8";
                        initFov = 0.0875;
                        minFov = 0.0875;
                        maxFov = 0.0875;
                    };
                    class Narrow: Wide {
                        opticsDisplayName = "12";
                        initFov = 0.0583333;
                        minFov = 0.0583333;
                        maxFov = 0.0583333;
                    };
                    class NarrowZoom: Wide {
                        opticsDisplayName = "24";
                        initFov = 0.0291667;
                        minFov = 0.0291667;
                        maxFov = 0.0291667;
                    };
                    class NarrowDoubleZoom: Wide {
                        opticsDisplayName = "48";
                        initFov = 0.0145833;
                        minFov = 0.0145833;
                        maxFov = 0.0145833;
                    };
                };
                class OpticsOut {
                    class Wide: ViewOptics {
                        initFov = 0.9;
                        minFov = 0.25;
                        maxFov = 1.25;
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_LRAS3";
                        hitpoint = "Hit_Optic_LRAS3";
                    };
                };
                class Hitpoints {
                    class HitTurret_LRAS3 {
                        armor = -120;
                        minimalHit = -0.13;
                        explosionShielding = 0.5;
                        name = "Hit_LRAS3_Turret";
                        visual = "vis_LRAS3_Turret";
                        armorComponent = "Hit_LRAS3_Turret";
                        passThrough = 0;
                        radius = 0.1;
                    };
                    class HitGun_LRAS3 {
                        armor = -120;
                        minimalHit = -0.13;
                        explosionShielding = 0.5;
                        name = "Hit_LRAS3_Gun";
                        visual = "vis_LRAS3_Gun";
                        armorComponent = "Hit_LRAS3_Gun";
                        passThrough = 0;
                        radius = 0.1;
                    };
                };
            };
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
        };
        class RenderTargets: RenderTargets {
            class LeftMirror: LeftMirror {
                renderTarget = "rendertarget0";
                class CameraView1: CameraView1 {};
            };
            class RightMirror: RightMirror {
                renderTarget = "rendertarget1";
                class CameraView1: CameraView1 {};
            };
            class DVE_Front: DVE_Front {
                renderTarget = "rendertarget_dve";
                class CameraView1: CameraView1 {};
            };
            class Gunner_display {
                renderTarget = "rendertarget2";
                class CameraView1 {
                    pointPosition = "LRAS3_GunnerView";
                    pointDirection = "LRAS3_GunnerView_Dir";
                    renderVisionMode = 2;
                    renderQuality = 2;
                    fov = 0.7;
                    turret[] = {2};
                };
                BBoxes[] = {"PIP_3_TL", "PIP_3_TR", "PIP_3_BL", "PIP_3_BR"};
            };
        };
        class Hitpoints: HitPoints {
            class Hit_Optic_LRAS3 {
                armor = -40;
                explosionShielding = 0.1;
                radius = 0.2;
                name = "Hit_Optic_LRAS3";
                visual = "vis_optic_LRAS3";
                armorComponent = "Hit_Optic_LRAS3";
                passThrough = 0;
            };
        };
        class AnimationSources: AnimationSources {
            class Unhide_vis_optic_d_LRAS3 {
                source = "hit";
                hitpoint = "Hit_Optic_LRAS3";
            };
            class Hatch_Front: Hatch_Front {
                displayName = "";
            };
            class Hide_STORM: Hide_STORM {
                displayName = "";
            };
            class Hide_DUKE: Hide_DUKE {
                initPhase = 1;
            };
            class Gunner_Rotate {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class rhsusf_weap_M6_active {
                source = "revolving";
                weapon = "rhsusf_weap_M6_GLUA";
            };
            class rhsusf_weap_M6_reload {
                source = "reload";
                weapon = "rhsusf_weap_M6_GLUA";
            };
            class rhsusf_weap_M6_L1_ammo {
                source = "revolving";
                weapon = "rhsusf_weap_M6_L1";
            };
            class rhsusf_weap_M6_L2_ammo {
                source = "revolving";
                weapon = "rhsusf_weap_M6_L2";
            };
            class rhsusf_weap_M6_L3_ammo {
                source = "revolving";
                weapon = "rhsusf_weap_M6_L3";
            };
            class rhsusf_weap_M6_R1_ammo {
                source = "revolving";
                weapon = "rhsusf_weap_M6_R1";
            };
            class rhsusf_weap_M6_R2_ammo {
                source = "revolving";
                weapon = "rhsusf_weap_M6_R2";
            };
            class rhsusf_weap_M6_R3_ammo {
                source = "revolving";
                weapon = "rhsusf_weap_M6_R3";
            };
            class rhsusf_weap_M6_L1_active {
                source = "user";
                initPhase = 1;
                animPeriod = 0.25;
                sound = "RHS_ButtonSwitch";
                soundPosition = "Ind_Smoke_L1_switch_axis";
            };
            class rhsusf_weap_M6_L2_active {
                source = "user";
                initPhase = 1;
                animPeriod = 0.25;
                sound = "RHS_ButtonSwitch";
                soundPosition = "Ind_Smoke_L2_switch_axis";
            };
            class rhsusf_weap_M6_L3_active {
                source = "user";
                initPhase = 1;
                animPeriod = 0.25;
                sound = "RHS_ButtonSwitch";
                soundPosition = "Ind_Smoke_L3_switch_axis";
            };
            class rhsusf_weap_M6_R1_active {
                source = "user";
                initPhase = 1;
                animPeriod = 0.25;
                sound = "RHS_ButtonSwitch";
                soundPosition = "Ind_Smoke_R1_switch_axis";
            };
            class rhsusf_weap_M6_R2_active {
                source = "user";
                initPhase = 1;
                animPeriod = 0.25;
                sound = "RHS_ButtonSwitch";
                soundPosition = "Ind_Smoke_R2_switch_axis";
            };
            class rhsusf_weap_M6_R3_active {
                source = "user";
                initPhase = 1;
                animPeriod = 0.25;
                sound = "RHS_ButtonSwitch";
                soundPosition = "Ind_Smoke_R3_switch_axis";
            };
            class ind_smoke_override {
                source = "user";
                initPhase = 0;
                animPeriod = 0.25;
            };
            class MainTurret {
                source = "user";
                initPhase = 0;
                animPeriod = 0.25;
            };
            class MainGun {
                source = "user";
                initPhase = 0;
                animPeriod = 0.25;
            };
        };
        class UserActions: UserActions {
            class Use_M2 {
                displayName = "Use M2";
                position = "";
                radius = 4;
                onlyForplayer = 0;
                condition = "this animationSourcePhase 'Hatch_Commander_A' > 0.5 and (this turretUnit [0]) isEqualTo (call rhs_fnc_findPlayer);";
                statement = "[this,'USE_M2'] call rhs_fnc_stryker_m1127_turret";
            };
            class Use_LRAS: Use_M2 {
                displayName = "Use LRAS3";
                condition = "this animationSourcePhase 'Hatch_Commander_A' > 0.5 and (this turretUnit [0]) isEqualTo (call rhs_fnc_findPlayer);";
                statement = "[this,'USE_LRAS3'] call rhs_fnc_stryker_m1127_turret";
            };
            class SwitchTurret: Use_M2 {
                condition = "(this turretUnit [1]) isEqualTo (call rhs_fnc_findPlayer) OR (this turretUnit [2]) isEqualTo (call rhs_fnc_findPlayer);";
                displayName = "Switch turret";
                shortcut = "curatorMoveCamTo";
                statement = "[this,'SWITCH_WEAPON'] call rhs_fnc_stryker_m1127_turret";
                showwindow = 0;
            };
            class LeaveTurret: SwitchTurret {
                displayName = "Leave weapon";
                shortcut = "turnIn";
                statement = "[this,'LEAVE_WEAPON'] call rhs_fnc_stryker_m1127_turret";
            };
            class SmokeLaunchers_Options {
                displayName = "Grenade Launcher Unit options";
                position = "";
                radius = 4;
                onlyForplayer = 0;
                shortcut = "binocular";
                condition = "(this turretUnit [0]) isEqualTo (call rhs_fnc_findPlayer);";
                statement = "this call rhs_fnc_stryker_m1127_GLUA_UI";
            };
        };
        class EventHandlers: EventHandlers {
            class RHSUSF_m1127_EventHandlers {
                init = "_this call rhs_fnc_stryker_m1127_init";
                getin = "_this call rhs_fnc_stryker_m1127_turret_getin_eh";
                getout = "_this spawn rhs_fnc_stryker_m1127_turret_getout_eh";
                turnIn = "(_this + [false])  spawn rhs_fnc_stryker_m1127_turret_turnout;";
                turnOut = "(_this + [true]) spawn rhs_fnc_stryker_m1127_turret_turnout;";
            };
        };
    };
    class rhsusf_stryker_m1127_m2_base: rhsusf_stryker_m1127_base {
        displayName = "M1127 (M2/LRAS3)";
        model = "\rhsusf\addons\rhsusf_stryker\rhsusf_m1127_m2.p3d";
        picture = "\rhsusf\addons\rhsusf_stryker\data\ui\rhsusf_stryker_m1127_m2_ca.paa";
        Icon = "\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\map_APC_Wheeled_03_CA.paa";
        class Turrets: Turrets {
            class MainTurret: MainTurret {};
            class Turret_Weapon: Turret_Weapon {};
            class Turret_LRAS: Turret_LRAS {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
        };
        class AnimationSources: AnimationSources {
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
    };
    class rhsusf_stryker_m1127_m2_wd: rhsusf_stryker_m1127_m2_base {
        author = "$STR_RHSUSF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_rifleman_m4";
        rhs_decalParameters[] = {"['Label', 'dec_hull', 'HullDecals_Stryker_WD']"};
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_stryker_m1127_m2_wd.paa";
    };
    class rhsusf_stryker_m1127_m2_d: rhsusf_stryker_m1127_m2_base {
        author = "$STR_RHSUSF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_rifleman_m4";
        rhs_decalParameters[] = {"['Label', 'dec_hull', 'HullDecals_Stryker_WD']"};
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_stryker_m1127_m2_d.paa";
    };
    class rhsusf_stryker_m1132_m2_base: rhsusf_stryker_m1126_m2_base {
        displayName = "M1132 (SMP/M2)";
        model = "\rhsusf\addons\rhsusf_stryker\rhsusf_m1132_m2.p3d";
        picture = "\rhsusf\addons\rhsusf_stryker\data\ui\rhsusf_stryker_m1132_m2_ca.paa";
        Icon = "\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\map_APC_Wheeled_03_CA.paa";
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_stryker\data\periscope.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\periscope_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\periscope_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\periscope_round.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\periscope_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\periscope_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1132.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1132_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat"
            };
        };
        class TransportBackpacks {
            class _xx_rhsusf_falconii {
                backpack = "rhsusf_falconii";
                count = 8;
            };
        };
        class TransportMagazines {
            class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
                magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
                count = 75;
            };
            class _xx_rhsusf_100Rnd_556x45_soft_pouch {
                magazine = "rhsusf_100Rnd_556x45_soft_pouch";
                count = 11;
            };
            class _xx_rhsusf_100Rnd_762x51 {
                magazine = "rhsusf_100Rnd_762x51";
                count = 11;
            };
            class _xx_rhsusf_5Rnd_00Buck {
                magazine = "rhsusf_5Rnd_00Buck";
                count = 20;
            };
            class _xx_rhs_m136_mag {
                magazine = "rhs_m136_mag";
                count = 2;
            };
            class _xx_rhs_mag_M433_HEDP {
                magazine = "rhs_mag_M433_HEDP";
                count = 20;
            };
            class _xx_rhs_mag_M441_HE {
                magazine = "rhs_mag_M441_HE";
                count = 10;
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
                count = 1;
            };
            class _xx_Toolkit {
                name = "Toolkit";
                count = 1;
            };
            class _xx_MineDetector {
                name = "MineDetector";
                count = 1;
            };
        };
        class TransportWeapons {
            class _xx_rhs_weap_m4 {
                weapon = "rhs_weap_m4";
                count = 2;
            };
            class _xx_rhs_weap_m240B {
                weapon = "rhs_weap_m240B";
                count = 1;
            };
            class _xx_rhs_weap_M136 {
                weapon = "rhs_weap_M136";
                count = 2;
            };
            class _xx_rhs_weap_M320 {
                weapon = "rhs_weap_M320";
                count = 1;
            };
            class _xx_rhs_weap_M590_5RD {
                weapon = "rhs_weap_M590_5RD";
                count = 1;
            };
        };
        hiddenSelections[] = {
            "Camo_1",
            "Camo_2",
            "Camo_3",
            "Camo_4",
            "Camo_5",
            "camo_6",
            "Camo_Acc",
            "Camo_AccA",
            "Camo_DUKE",
            "Camo_fc01",
            "Camo_fc02",
            "Camo_wc01",
            "Camo_wc02",
            "callsign1",
            "callsign2",
            "callsign3",
            "callsign4",
            "dec_hull",
            "BFT_screen"
        };
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1132_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
            "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
            "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
            "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
            "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
            "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa"
        };
        weapons[] = {};
        magazines[] = {"rhsusf_mag_laneMarkerSystem"};
        class TextureSources {
            class Olive {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "Olive";
                textures[] = {
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1132_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
                    "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa"
                };
            };
            class Tan {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "Tan";
                textures[] = {
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1132_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_ca.paa",
                    "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_c_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa"
                };
            };
        };
        class Hitpoints: HitPoints {
            class Hit_MinePlow_1 {
                armor = -300;
                explosionShielding = 0.1;
                name = "MinePlow_1";
                visual = "MinePlow_1";
                armorComponent = "MinePlow_1";
                simulation = "RHS_MinePlow";
                passThrough = 0;
                radius = 0.2;
            };
            class Hit_MinePlow_2 {
                armor = -300;
                explosionShielding = 0.1;
                name = "MinePlow_2";
                visual = "MinePlow_2";
                armorComponent = "MinePlow_2";
                simulation = "RHS_MinePlow";
                passThrough = 0;
                radius = 0.2;
            };
            class Hit_MinePlow_3 {
                armor = -300;
                explosionShielding = 0.1;
                name = "MinePlow_3";
                visual = "MinePlow_3";
                armorComponent = "MinePlow_3";
                simulation = "RHS_MinePlow";
                passThrough = 0;
                radius = 0.2;
            };
            class Hit_MinePlow_4 {
                armor = -300;
                explosionShielding = 0.1;
                name = "MinePlow_4";
                visual = "MinePlow_4";
                armorComponent = "MinePlow_4";
                simulation = "RHS_MinePlow";
                passThrough = 0;
                radius = 0.2;
            };
            class Hit_MinePlow_5 {
                armor = -300;
                explosionShielding = 0.1;
                name = "MinePlow_5";
                visual = "MinePlow_5";
                armorComponent = "MinePlow_5";
                simulation = "RHS_MinePlow";
                passThrough = 0;
                radius = 0.2;
            };
            class Hit_MinePlow_6 {
                armor = -300;
                explosionShielding = 0.1;
                name = "MinePlow_6";
                visual = "MinePlow_6";
                armorComponent = "MinePlow_6";
                simulation = "RHS_MinePlow";
                passThrough = 0;
                radius = 0.2;
            };
            class Hit_MinePlow_7 {
                armor = -300;
                explosionShielding = 0.1;
                name = "MinePlow_7";
                visual = "MinePlow_7";
                armorComponent = "MinePlow_7";
                simulation = "RHS_MinePlow";
                passThrough = 0;
                radius = 0.2;
            };
            class Hit_MinePlow_8 {
                armor = -300;
                explosionShielding = 0.1;
                name = "MinePlow_8";
                visual = "MinePlow_8";
                armorComponent = "MinePlow_8";
                simulation = "RHS_MinePlow";
                passThrough = 0;
                radius = 0.2;
            };
            class Hit_MinePlow_9 {
                armor = -300;
                explosionShielding = 0.1;
                name = "MinePlow_9";
                visual = "MinePlow_9";
                armorComponent = "MinePlow_9";
                simulation = "RHS_MinePlow";
                passThrough = 0;
                radius = 0.2;
            };
        };
        class AnimationSources: AnimationSources {
            class MinePlow_1_damage_source {
                source = "hit";
                hitpoint = "Hit_MinePlow_1";
            };
            class MinePlow_2_damage_source {
                source = "hit";
                hitpoint = "Hit_MinePlow_2";
            };
            class MinePlow_3_damage_source {
                source = "hit";
                hitpoint = "Hit_MinePlow_3";
            };
            class MinePlow_4_damage_source {
                source = "hit";
                hitpoint = "Hit_MinePlow_4";
            };
            class MinePlow_5_damage_source {
                source = "hit";
                hitpoint = "Hit_MinePlow_5";
            };
            class MinePlow_6_damage_source {
                source = "hit";
                hitpoint = "Hit_MinePlow_6";
            };
            class MinePlow_7_damage_source {
                source = "hit";
                hitpoint = "Hit_MinePlow_7";
            };
            class MinePlow_8_damage_source {
                source = "hit";
                hitpoint = "Hit_MinePlow_8";
            };
            class MinePlow_9_damage_source {
                source = "hit";
                hitpoint = "Hit_MinePlow_9";
            };
            class SMP {
                displayName = "Raise mine plow";
                useSource = 1;
                source = "user";
                animPeriod = 3;
                initPhase = 1;
                sound = "PlowSound";
                soundPosition = "plow_sound";
            };
            class SMP_L {
                useSource = 1;
                source = "user";
                animPeriod = 1;
                initPhase = 1;
                sound = "MetalBigDoorsSound";
                soundPosition = "SMPL_Axis";
                displayName = "Fold left mine plow part";
            };
            class SMP_R: SMP_L {
                soundPosition = "SMPR_Axis";
                displayName = "Fold right mine plow part";
            };
            class hide_SMP {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "Hide mine plow";
                source = "user";
                mass = -20;
                animPeriod = 0.00001;
                initPhase = 0;
                forceAnimatePhase = 0;
                forceAnimate[] = {"Hide_CIP", 1};
            };
            class Hide_CIP: Hide_CIP {
                initPhase = 1;
                forceAnimatePhase = 0;
                forceAnimate[] = {"hide_SMP", 1};
            };
            class Dispenser_Fold {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                useSource = 1;
                displayName = "Unfold Lane Marking System";
                source = "user";
                mass = -20;
                animPeriod = 3;
                initPhase = 0;
                sound = "PlowSound";
                soundPosition = "DispenserL_axis";
                onPhaseChanged = "_this call rhs_fnc_stryker_m1132_LMS_VG";
            };
            class Dispenser_MarkerHide {
                source = "user";
                initPhase = 50;
                animPeriod = 0.1;
            };
        };
        class UserActions: UserActions {
            class RaiseSMP {
                displayName = "Raise Mine Plow";
                position = "pos_driverpos";
                radius = 2;
                showwindow = 0;
                onlyforplayer = 1;
                condition = "((driver this) isEqualTo (call rhs_fnc_findPlayer)) && this animationSourcePhase 'hide_SMP' < 0.5 && this animationSourcePhase 'SMP' < 0.5;";
                statement = "this animateSource ['SMP', 1]";
            };
            class LowerSMP: RaiseSMP {
                displayName = "Lower Mine Plow";
                condition = "((driver this) isEqualTo (call rhs_fnc_findPlayer)) && this animationSourcePhase 'hide_SMP' < 0.5 && this animationSourcePhase 'SMP' > 0.5;";
                statement = "this animateSource ['SMP', 0]";
            };
            class SMP_TravelPosition_On: RaiseSMP {
                displayName = "Switch Mine Plow to travel position";
                condition = "((driver this) isEqualTo (call rhs_fnc_findPlayer)) && {this animationSourcePhase 'hide_SMP' < 0.5} && {this animationSourcePhase 'SMP' > 0.5} && {this animationSourcePhase 'SMP_L' isEqualTo 0} && {this animationSourcePhase 'SMP_R' isEqualTo 0};";
                statement = "this animateSource ['SMP_L', 1];this animateSource ['SMP_R', 1]";
            };
            class SMP_TravelPosition_Off: RaiseSMP {
                displayName = "Switch Mine Plow to work position";
                condition = "((driver this) isEqualTo (call rhs_fnc_findPlayer)) && {this animationSourcePhase 'hide_SMP' < 0.5} && {this animationSourcePhase 'SMP' > 0.5} && {this animationSourcePhase 'SMP_L' isEqualTo 1} && {this animationSourcePhase 'SMP_R' isEqualTo 1};";
                statement = "this animateSource ['SMP_L', 0];this animateSource ['SMP_R', 0]";
            };
            class LaneMarkingSystem_Activate {
                displayName = "Activate Lane Marking System";
                position = "pos_driverpos";
                radius = 2;
                showwindow = 0;
                onlyforplayer = 1;
                condition = "((driver this) isEqualTo (call rhs_fnc_findPlayer)) && {this animationSourcePhase 'Dispenser_Fold' isEqualTo 0};";
                statement = "this animateSource ['Dispenser_Fold', 1];this addWeaponTurret ['rhsusf_weap_laneMarkerSystem',[-1]]";
            };
            class LaneMarkingSystem_Deactivate: LaneMarkingSystem_Activate {
                displayName = "Deactivate Lane Marking System";
                condition = "((driver this) isEqualTo (call rhs_fnc_findPlayer)) && {this animationSourcePhase 'Dispenser_Fold' isEqualTo 1};";
                statement = "this animateSource ['Dispenser_Fold', 0];this removeWeaponTurret ['rhsusf_weap_laneMarkerSystem',[-1]]";
            };
            class LaneMarkingSystem_Options: LaneMarkingSystem_Deactivate {
                displayName = "<t color='#FDDE00'>Lane Marking System - Options</t>";
                statement = "this call rhs_fnc_stryker_m1132_LMS_UI;";
            };
            class Interact_LeftPlow {
                displayName = "Interact with left mine plow";
                position = "";
                radius = 1.5;
                onlyforplayer = 0;
                actionNamedSel = "SMP_L";
                condition = "speed this < 1";
                statement = "this animateSource ['SMP_L', abs((this animationSourcePhase 'SMP_L') - 1)]";
            };
            class Interact_RightPlow: Interact_LeftPlow {
                displayName = "Interact with right mine plow";
                actionNamedSel = "SMP_R";
                statement = "this animateSource ['SMP_R', abs((this animationSourcePhase 'SMP_R') - 1)]";
            };
        };
    };
    class rhsusf_stryker_m1132_m2_np_base: rhsusf_stryker_m1132_m2_base {
        displayName = "M1132 (M2)";
        picture = "\rhsusf\addons\rhsusf_stryker\data\ui\rhsusf_stryker_m1132_m2_ca.paa";
        class AnimationSources: AnimationSources {
            class hide_SMP: hide_SMP {
                initPhase = 1;
            };
        };
    };
    class rhsusf_stryker_m1132_m2_wd: rhsusf_stryker_m1132_m2_base {
        author = "$STR_RHSUSF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_rifleman_m4";
        rhs_decalParameters[] = {"['Label', 'dec_hull', 'HullDecals_Stryker_WD']"};
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_stryker_m1132_m2_wd.paa";
    };
    class rhsusf_stryker_m1132_m2_d: rhsusf_stryker_m1132_m2_base {
        author = "$STR_RHSUSF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_rifleman_m4";
        rhs_decalParameters[] = {"['Label', 'dec_hull', 'HullDecals_Stryker_WD']"};
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_stryker_m1132_m2_d.paa";
    };
    class rhsusf_stryker_m1132_m2_np_wd: rhsusf_stryker_m1132_m2_np_base {
        author = "$STR_RHSUSF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_rifleman_m4";
        rhs_decalParameters[] = {"['Label', 'dec_hull', 'HullDecals_Stryker_WD']"};
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_stryker_m1132_m2_wd.paa";
    };
    class rhsusf_stryker_m1132_m2_np_d: rhsusf_stryker_m1132_m2_np_base {
        author = "$STR_RHSUSF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_rifleman_m4";
        rhs_decalParameters[] = {"['Label', 'dec_hull', 'HullDecals_Stryker_WD']"};
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_stryker_m1132_m2_d.paa";
    };
    class rhsusf_stryker_m1134_base: rhsusf_stryker_m1126_m2_base {
        displayName = "M1134";
        model = "\rhsusf\addons\rhsusf_stryker\rhsusf_m1134.p3d";
        picture = "\rhsusf\addons\rhsusf_stryker\data\ui\rhsusf_stryker_m1134_ca.paa";
        Icon = "\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\map_APC_Wheeled_03_CA.paa";
        unitInfoType = "RHS_RscUnitInfoStryker_M1134";
        transportSoldier = 0;
        cargoProxyIndexes[] = {};
        getInProxyOrder[] = {1};
        defaultUserMFDvalues[] = {1000, 1};
        class MFD {
            class MFD_CROWS {
                topLeft = "PIP_3_TL";
                topRight = "PIP_3_TR";
                bottomLeft = "PIP_3_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0.84, 0.86, 0.84};
                alpha = 1;
                enableParallax = 0;
                font = "RobotoCondensedLight";
                class material {
                    ambient[] = {3, 3, 3, 1};
                    diffuse[] = {10, 10, 10, 1};
                    emissive[] = {400, 200, 200, 1};
                };
                class Bones {
                    class Static_Offset {
                        type = "fixed";
                        pos[] = {0.08, 0.9};
                    };
                    class Cross {
                        type = "fixed";
                        pos[] = {0, -0.145};
                    };
                    class TurretRotation {
                        type = "rotational";
                        source = "weaponHeading";
                        sourceIndex = 0;
                        center[] = {0, 0};
                        min = -180;
                        max = 180;
                        minAngle = -180;
                        maxAngle = 180;
                        sourceOffset = -180;
                        aspectRatio = 1.29101;
                    };
                };
                class Draw {
                    color[] = {1, 0, 0, 1};
                    alpha = 1;
                    class StaticDraw {
                        type = "line";
                        width = 3;
                        points[] = {
                            {"Cross", {0.43, 0.645503}, 1},
                            {"Cross", {0.57, 0.645503}, 1},
                            {},
                            {"Cross", {0.5, 0.555132}, 1},
                            {"Cross", {0.5, 0.735873}, 1},
                            {},
                            {"Static_Offset", {0, -0.0774603}, 1},
                            {"Static_Offset", {0.010416, -0.0762829}, 1},
                            {"Static_Offset", {0.02052, -0.0727895}, 1},
                            {"Static_Offset", {0.03, -0.0670806}, 1},
                            {"Static_Offset", {0.038568, -0.0593346}, 1},
                            {"Static_Offset", {0.04596, -0.0497915}, 1},
                            {"Static_Offset", {0.05196, -0.0387302}, 1},
                            {"Static_Offset", {0.056382, -0.0264914}, 1},
                            {"Static_Offset", {0.059088, -0.0134471}, 1},
                            {"Static_Offset", {0.06, 0}, 1},
                            {"Static_Offset", {0.059088, 0.0134471}, 1},
                            {"Static_Offset", {0.056382, 0.0264914}, 1},
                            {"Static_Offset", {0.05196, 0.0387302}, 1},
                            {"Static_Offset", {0.04596, 0.0497915}, 1},
                            {"Static_Offset", {0.038568, 0.0593346}, 1},
                            {"Static_Offset", {0.03, 0.0670806}, 1},
                            {"Static_Offset", {0.02052, 0.0727895}, 1},
                            {"Static_Offset", {0.010416, 0.0762829}, 1},
                            {"Static_Offset", {0, 0.0774603}, 1},
                            {"Static_Offset", {-0.010416, 0.0762829}, 1},
                            {"Static_Offset", {-0.02052, 0.0727895}, 1},
                            {"Static_Offset", {-0.03, 0.0670806}, 1},
                            {"Static_Offset", {-0.038568, 0.0593346}, 1},
                            {"Static_Offset", {-0.04596, 0.0497915}, 1},
                            {"Static_Offset", {-0.05196, 0.0387302}, 1},
                            {"Static_Offset", {-0.056382, 0.0264914}, 1},
                            {"Static_Offset", {-0.059088, 0.0134471}, 1},
                            {"Static_Offset", {-0.06, 0}, 1},
                            {"Static_Offset", {-0.059088, -0.0134471}, 1},
                            {"Static_Offset", {-0.056382, -0.0264914}, 1},
                            {"Static_Offset", {-0.05196, -0.0387302}, 1},
                            {"Static_Offset", {-0.04596, -0.0497915}, 1},
                            {"Static_Offset", {-0.038568, -0.0593346}, 1},
                            {"Static_Offset", {-0.03, -0.0670806}, 1},
                            {"Static_Offset", {-0.02052, -0.0727895}, 1},
                            {"Static_Offset", {-0.010416, -0.0762829}, 1},
                            {"Static_Offset", {0, -0.0774603}, 1},
                            {},
                            {"Static_Offset", {0, -0.0774603}, 1},
                            {"Static_Offset", {0, -0.0645503}, 1},
                            {},
                            {"Static_Offset", {0.03, -0.0670826}, 1},
                            {"Static_Offset", {0.025, -0.0559022}, 1},
                            {},
                            {"Static_Offset", {0.0519615, -0.0387302}, 1},
                            {"Static_Offset", {0.0433013, -0.0322751}, 1},
                            {},
                            {"Static_Offset", {0.06, 0.0000000033859}, 1},
                            {"Static_Offset", {0.05, 0.00000000282158}, 1},
                            {},
                            {"Static_Offset", {0.0519615, 0.0387302}, 1},
                            {"Static_Offset", {0.0433013, 0.0322751}, 1},
                            {},
                            {"Static_Offset", {0.03, 0.0670826}, 1},
                            {"Static_Offset", {0.025, 0.0559022}, 1},
                            {},
                            {"Static_Offset", {-0.00000000524537, 0.0774603}, 1},
                            {"Static_Offset", {-0.00000000437114, 0.0645503}, 1},
                            {},
                            {"Static_Offset", {-0.03, 0.0670826}, 1},
                            {"Static_Offset", {-0.025, 0.0559022}, 1},
                            {},
                            {"Static_Offset", {-0.0519615, 0.0387302}, 1},
                            {"Static_Offset", {-0.0433013, 0.0322751}, 1},
                            {},
                            {"Static_Offset", {-0.06, -0.000000000923705}, 1},
                            {"Static_Offset", {-0.05, -0.000000000769754}, 1},
                            {},
                            {"Static_Offset", {-0.0519615, -0.0387302}, 1},
                            {"Static_Offset", {-0.0433013, -0.0322752}, 1},
                            {},
                            {"Static_Offset", {-0.03, -0.0670826}, 1},
                            {"Static_Offset", {-0.025, -0.0559022}, 1},
                            {},
                            {"Static_Offset", 1, {"TurretRotation", 0, -0.0580952}, 1},
                            {"Static_Offset", 1, {"TurretRotation", 0, 0}, 1},
                            {}
                        };
                    };
                    class StaticDrawBold {
                        type = "line";
                        width = 8;
                        points[] = {
                            {"Cross", {0.3, 0.645503}, 1},
                            {"Cross", {0.43, 0.645503}, 1},
                            {},
                            {"Cross", {0.57, 0.645503}, 1},
                            {"Cross", {0.7, 0.645503}, 1},
                            {},
                            {"Cross", {0.5, 0.387302}, 1},
                            {"Cross", {0.5, 0.555132}, 1},
                            {},
                            {"Cross", {0.5, 0.735873}, 1},
                            {"Cross", {0.5, 0.903704}, 1},
                            {}
                        };
                    };
                    class Range_Text {
                        type = "text";
                        source = "static";
                        text = "LRF:";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.01, 0.51}, 1};
                        right[] = {{0.06, 0.51}, 1};
                        down[] = {{0.01, 0.56}, 1};
                    };
                    class Range_Value {
                        type = "text";
                        source = "laserDist";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.08;
                        pos[] = {{"0.01+0.1", 0.51}, 1};
                        right[] = {{0.16, 0.51}, 1};
                        down[] = {{"0.01+0.1", 0.56}, 1};
                    };
                    class Ballistic_Text {
                        type = "text";
                        source = "static";
                        text = "Ballistic:";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.01, 0.67}, 1};
                        right[] = {{0.06, 0.67}, 1};
                        down[] = {{0.01, 0.72}, 1};
                    };
                    class Ballistic_Value {
                        type = "text";
                        source = "laserDist";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.08;
                        pos[] = {{"0.01+0.13", 0.67}, 1};
                        right[] = {{0.19, 0.67}, 1};
                        down[] = {{"0.01+0.13", 0.72}, 1};
                    };
                    class Mode_Text {
                        type = "text";
                        source = "static";
                        text = "FOV:";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.01, 0.71}, 1};
                        right[] = {{0.06, 0.71}, 1};
                        down[] = {{0.01, 0.76}, 1};
                    };
                    class Mode_Value {
                        type = "text";
                        source = "userText";
                        text = "1.0x";
                        sourceIndex = 1;
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.08;
                        pos[] = {{"0.01+0.1", 0.71}, 1};
                        right[] = {{0.16, 0.71}, 1};
                        down[] = {{"0.01+0.1", 0.76}, 1};
                    };
                    class Elev_Text {
                        type = "text";
                        source = "static";
                        text = "Elev:";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.01, 0.75}, 1};
                        right[] = {{0.06, 0.75}, 1};
                        down[] = {{0.01, 0.8}, 1};
                    };
                    class Elev_Value {
                        type = "text";
                        source = "[y]turretworld";
                        sourceScale = 1;
                        sourcePrecision = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.08;
                        pos[] = {{"0.01+0.1", 0.75}, 1};
                        right[] = {{0.16, 0.75}, 1};
                        down[] = {{"0.01+0.1", 0.8}, 1};
                    };
                };
            };
            class MFD_MITAS {
                topLeft = "MFD_MITAS_TL";
                topRight = "MFD_MITAS_TR";
                bottomLeft = "MFD_MITAS_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0.84, 0.86, 0.84};
                alpha = 1;
                enableParallax = 0;
                font = "rhsusf_digital_font_var";
                class material {
                    ambient[] = {3, 3, 3, 1};
                    diffuse[] = {10, 10, 10, 1};
                    emissive[] = {400, 200, 200, 1};
                };
                class Bones {
                    class Static_Offset {
                        type = "fixed";
                        pos[] = {0.08, 0.9};
                    };
                    class Cross {
                        type = "fixed";
                        pos[] = {0, -0.145};
                    };
                };
                class Draw {
                    color[] = {1, 0, 0, 1};
                    alpha = 1;
                    class StaticDraw {
                        type = "line";
                        width = 3;
                        points[] = {};
                    };
                    class Reticle_1 {
                        condition = "(user1 >= 1) * (user1 <= 1)";
                        class StaticDrawBold {
                            type = "line";
                            width = 5;
                            points[] = {
                                {"Cross", {0.35, 0.645503}, 1},
                                {"Cross", {0.48, 0.645503}, 1},
                                {},
                                {"Cross", {0.52, 0.645503}, 1},
                                {"Cross", {0.65, 0.645503}, 1},
                                {},
                                {"Cross", {0.5, 0.451852}, 1},
                                {"Cross", {0.5, 0.619683}, 1},
                                {},
                                {"Cross", {0.5, 0.671323}, 1},
                                {"Cross", {0.5, 0.839153}, 1},
                                {}
                            };
                        };
                    };
                    class Reticle_2 {
                        condition = "(user1 >= 2) * (user1 <= 2)";
                        class StaticDraw {
                            type = "line";
                            width = 0.5;
                            points[] = {
                                {"Cross", {0.45, 0.645503}, 1},
                                {"Cross", {0.55, 0.645503}, 1},
                                {},
                                {"Cross", {0.5, 0.580952}, 1},
                                {"Cross", {0.5, 0.710053}, 1},
                                {}
                            };
                        };
                        class StaticDrawBold {
                            type = "line";
                            width = 5;
                            points[] = {
                                {"Cross", {0, 0.645503}, 1},
                                {"Cross", {0.45, 0.645503}, 1},
                                {},
                                {"Cross", {0.55, 0.645503}, 1},
                                {"Cross", {1, 0.645503}, 1},
                                {},
                                {"Cross", {0.5, 0}, 1},
                                {"Cross", {0.5, 0.580952}, 1},
                                {},
                                {"Cross", {0.5, 0.710053}, 1},
                                {"Cross", {0.5, 1.12317}, 1},
                                {}
                            };
                        };
                    };
                    class Reticle_3 {
                        condition = "(user1 >= 3) * (user1 <= 4)";
                        color[] = {0, 1, 0};
                        alpha = 0.2;
                        class StaticDraw {
                            type = "line";
                            width = 0.5;
                            points[] = {
                                {"Cross", {0.48, 0.645503}, 1},
                                {"Cross", {0.52, 0.645503}, 1},
                                {},
                                {"Cross", {0.5, 0.619683}, 1},
                                {"Cross", {0.5, 0.671323}, 1},
                                {}
                            };
                        };
                        class StaticDrawBold {
                            type = "line";
                            width = 5;
                            points[] = {
                                {"Cross", {0.35, 0.645503}, 1},
                                {"Cross", {0.48, 0.645503}, 1},
                                {},
                                {"Cross", {0.52, 0.645503}, 1},
                                {"Cross", {0.65, 0.645503}, 1},
                                {},
                                {"Cross", {0.5, 0.451852}, 1},
                                {"Cross", {0.5, 0.619683}, 1},
                                {},
                                {"Cross", {0.5, 0.671323}, 1},
                                {"Cross", {0.5, 0.839153}, 1},
                                {}
                            };
                        };
                    };
                    class Reticle_4 {
                        condition = "(user1 >= 5) * (user1 <= 6)";
                        color[] = {0, 1, 0};
                        alpha = 0.2;
                        class StaticDraw {
                            type = "line";
                            width = 0.5;
                            points[] = {
                                {"Cross", {0.45, 0.645503}, 1},
                                {"Cross", {0.55, 0.645503}, 1},
                                {},
                                {"Cross", {0.5, 0.580952}, 1},
                                {"Cross", {0.5, 0.710053}, 1},
                                {}
                            };
                        };
                        class StaticDrawBold {
                            type = "line";
                            width = 5;
                            points[] = {
                                {"Cross", {0, 0.645503}, 1},
                                {"Cross", {0.45, 0.645503}, 1},
                                {},
                                {"Cross", {0.55, 0.645503}, 1},
                                {"Cross", {1, 0.645503}, 1},
                                {},
                                {"Cross", {0.5, 0}, 1},
                                {"Cross", {0.5, 0.580952}, 1},
                                {},
                                {"Cross", {0.5, 0.710053}, 1},
                                {"Cross", {0.5, 1.12317}, 1},
                                {}
                            };
                        };
                    };
                    class Green {
                        color[] = {0, 1, 0};
                        alpha = 0.1;
                        class ManualEngage_1 {
                            type = "text";
                            source = "static";
                            text = "MANUAL";
                            scale = 1;
                            sourceScale = 1;
                            align = "right";
                            pos[] = {{0.2, 0.01}, 1};
                            right[] = {{0.23, 0.01}, 1};
                            down[] = {{0.2, 0.04}, 1};
                        };
                        class ManualEngage_2 {
                            type = "text";
                            source = "static";
                            text = "ENGAGE";
                            scale = 1;
                            sourceScale = 1;
                            align = "right";
                            pos[] = {{0.2, 0.04}, 1};
                            right[] = {{0.23, 0.04}, 1};
                            down[] = {{0.2, 0.07}, 1};
                        };
                        class Mode_Value {
                            type = "text";
                            source = "userText";
                            text = "DAY";
                            sourceIndex = 1;
                            sourceScale = 1;
                            sourceLength = 3;
                            scale = 1;
                            align = "right";
                            refreshRate = 0.08;
                            pos[] = {{0.8, 0.01}, 1};
                            right[] = {{0.83, 0.01}, 1};
                            down[] = {{0.8, 0.04}, 1};
                        };
                        class FOV_Value {
                            type = "text";
                            source = "userText";
                            text = "WFOV";
                            sourceIndex = 2;
                            sourceScale = 1;
                            sourceLength = 3;
                            scale = 1;
                            align = "right";
                            refreshRate = 0.08;
                            pos[] = {{0.8, 0.04}, 1};
                            right[] = {{0.83, 0.04}, 1};
                            down[] = {{0.8, 0.07}, 1};
                        };
                        class LASER_Text {
                            type = "text";
                            source = "static";
                            text = "FIRST";
                            scale = 1;
                            sourceScale = 1;
                            align = "right";
                            pos[] = {{0.8, 0.07}, 1};
                            right[] = {{0.83, 0.07}, 1};
                            down[] = {{0.8, 0.1}, 1};
                        };
                        class Range_Value {
                            type = "text";
                            source = "laserDist";
                            sourceScale = 1;
                            sourceLength = 3;
                            scale = 1;
                            align = "right";
                            refreshRate = 0.08;
                            pos[] = {{0.51, 0.8}, 1};
                            right[] = {{0.54, 0.8}, 1};
                            down[] = {{0.51, 0.83}, 1};
                        };
                        class TOW_Type_Value {
                            type = "text";
                            source = "userText";
                            text = "TOW2A";
                            sourceIndex = 3;
                            sourceScale = 1;
                            sourceLength = 3;
                            scale = 1;
                            align = "right";
                            refreshRate = 0.08;
                            pos[] = {{0.2, 0.9}, 1};
                            right[] = {{0.23, 0.9}, 1};
                            down[] = {{0.2, 0.93}, 1};
                        };
                        class StaticDraw {
                            type = "line";
                            width = 3;
                            points[] = {
                                {{0.195, 0.005}, 1},
                                {{0.195, 0.11}, 1},
                                {{0.29, 0.11}, 1},
                                {{0.29, 0.005}, 1},
                                {{0.195, 0.005}, 1},
                                {},
                                {{0.795, 0.005}, 1},
                                {{0.795, 0.15}, 1},
                                {{0.89, 0.15}, 1},
                                {{0.89, 0.005}, 1},
                                {{0.795, 0.005}, 1},
                                {},
                                {{0.18, 0.88}, 1},
                                {{0.18, 0.94}, 1},
                                {{0.3, 0.94}, 1},
                                {{0.315, 0.93}, 1},
                                {{0.32, 0.92}, 1},
                                {{0.322, 0.915}, 1},
                                {{0.322, 0.905}, 1},
                                {{0.32, 0.9}, 1},
                                {{0.315, 0.89}, 1},
                                {{0.3, 0.88}, 1},
                                {{0.18, 0.88}, 1},
                                {},
                                {{0.188, 0.88}, 1},
                                {{0.188, 0.86}, 1},
                                {{0.2, 0.86}, 1},
                                {{0.2, 0.88}, 1},
                                {{0.188, 0.88}, 1},
                                {},
                                {{0.188, 0.94}, 1},
                                {{0.188, 0.96}, 1},
                                {{0.2, 0.96}, 1},
                                {{0.2, 0.94}, 1},
                                {{0.188, 0.94}, 1}
                            };
                        };
                    };
                };
            };
            class MFD_BFT {
                topLeft = "BFT_Map_TL";
                topRight = "BFT_Map_TR";
                bottomLeft = "BFT_Map_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {1, 1, 1, 1};
                helmetMountedDisplay = 0;
                helmetPosition[] = {-0.0375, 0.0375, 0.1};
                helmetRight[] = {0.075, 0, 0};
                helmetDown[] = {0, -0.075, 0};
                font = "rhsusf_txled";
                class material {
                    ambient[] = {3, 3, 3, 1};
                    diffuse[] = {1, 1, 1, 1};
                    emissive[] = {400, 200, 200, 1};
                };
                class Bones {
                    class Sensor_Offset {
                        type = "fixed";
                        pos[] = {0.5, 0.48};
                    };
                    class Static_Offset {
                        type = "fixed";
                        pos[] = {0.5, 0.5};
                    };
                    class LimitWaypoint {
                        type = "limit";
                        limits[] = {0.22, 0.06, 0.78, 0.06};
                    };
                    class Sensor_Rotation {
                        center[] = {0, 0};
                        type = "rotational";
                        source = "heading";
                        sourceScale = 1;
                        min = 0;
                        max = 360;
                        minAngle = 0;
                        maxAngle = -180;
                        aspectRatio = 1.25714;
                    };
                    class WPPoint {
                        type = "vector";
                        source = "WPPoint";
                        pos0[] = {0.5, 0.5};
                        pos10[] = {0.71, 0.764};
                    };
                    class Direction_Center {
                        type = "fixed";
                        pos[] = {0.5, 0.5};
                    };
                    class Rotation_WP_Dir {
                        pos0[] = {0, 0};
                        pos10[] = {0, 0};
                        center[] = {0, 0};
                        type = "rotational";
                        source = "user";
                        sourceIndex = 10;
                        min = 0;
                        max = 360;
                        minAngle = 0;
                        maxAngle = -360;
                        aspectRatio = 1;
                    };
                    class Rotation_WP_Center {
                        pos0[] = {0, 0};
                        pos10[] = {0, 0};
                        center[] = {0.5, 0.555};
                        type = "rotational";
                        source = "heading";
                        min = 0;
                        max = 360;
                        minAngle = -180;
                        maxAngle = "-360-180";
                        aspectRatio = 1.25714;
                    };
                    class MovementY {
                        type = "linear";
                        source = "user";
                        sourceIndex = 5;
                        refreshRate = 0.1;
                        min = 0;
                        max = 2;
                        sourceScale = 1;
                        maxPos[] = {0, 1};
                        minPos[] = {0, -1};
                    };
                    class MovementX: MovementY {
                        sourceIndex = 4;
                        maxPos[] = {-1, 0};
                        minPos[] = {1, 0};
                    };
                    class WP1_PosX: MovementX {
                        sourceIndex = 26;
                    };
                    class WP1_PosY: MovementY {
                        sourceIndex = 27;
                    };
                    class WP2_PosX: MovementX {
                        sourceIndex = 28;
                    };
                    class WP2_PosY: MovementY {
                        sourceIndex = 29;
                    };
                    class WP3_PosX: MovementX {
                        sourceIndex = 30;
                    };
                    class WP3_PosY: MovementY {
                        sourceIndex = 31;
                    };
                    class WP4_PosX: MovementX {
                        sourceIndex = 32;
                    };
                    class WP4_PosY: MovementY {
                        sourceIndex = 33;
                    };
                    class WP5_PosX: MovementX {
                        sourceIndex = 34;
                    };
                    class WP5_PosY: MovementY {
                        sourceIndex = 35;
                    };
                    class WP6_PosX: MovementX {
                        sourceIndex = 36;
                    };
                    class WP6_PosY: MovementY {
                        sourceIndex = 37;
                    };
                    class WP7_PosX: MovementX {
                        sourceIndex = 38;
                    };
                    class WP7_PosY: MovementY {
                        sourceIndex = 39;
                    };
                    class WP8_PosX: MovementX {
                        sourceIndex = 40;
                    };
                    class WP8_PosY: MovementY {
                        sourceIndex = 41;
                    };
                    class WP9_PosX: MovementX {
                        sourceIndex = 42;
                    };
                    class WP9_PosY: MovementY {
                        sourceIndex = 43;
                    };
                    class WP10_PosX: MovementX {
                        sourceIndex = 44;
                    };
                    class WP10_PosY: MovementY {
                        sourceIndex = 45;
                    };
                    class WP11_PosX: MovementX {
                        sourceIndex = 46;
                    };
                    class WP11_PosY: MovementY {
                        sourceIndex = 47;
                    };
                };
                class Draw {
                    alpha = 1;
                    color[] = {0, 0, 0.12};
                    class StaticClip {
                        class WaypointGroup {
                            color[] = {0, 0, 0.12};
                            alpha = 0.6;
                            class WP {
                                condition = "wpvalid";
                                class Draw {
                                    type = "line";
                                    points[] = {};
                                };
                                class WP1 {
                                    condition = "user26>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "1-WPIndex";
                                        class WaypointShape {
                                            width = 16;
                                            type = "line";
                                            points[] = {
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, -0.0125714}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.005, -0.0108869}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.01, 0}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.005, 0.0108869}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, 0.0125714}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.01, 0}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0, -0.0251429}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.01, -0.0217737}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.02, 0}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.01, 0.0217737}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0, 0.0251429}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.02, 0}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP1_PosY", 1, "Direction_Center", 1, "WP1_PosX", {0, -0.0251429}, 1},
                                            {}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "01";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP1_PosX",
                                            1,
                                            "WP1_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP1_PosX",
                                            1,
                                            "WP1_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP1_PosX",
                                            1,
                                            "WP1_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP2 {
                                    condition = "user28>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=1)*(WPIndex<=1)";
                                        class WaypointShape {
                                            width = 16;
                                            type = "line";
                                            points[] = {
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, -0.0125714}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.005, -0.0108869}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.01, 0}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.005, 0.0108869}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, 0.0125714}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.01, 0}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, -0.0251429}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.01, -0.0217737}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.02, 0}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.01, 0.0217737}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, 0.0251429}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.02, 0}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP2_PosY", 1, "Direction_Center", 1, "WP2_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP1_PosX", 1, "WP1_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP2_PosX", 1, "WP2_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "02";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP2_PosX",
                                            1,
                                            "WP2_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP2_PosX",
                                            1,
                                            "WP2_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP2_PosX",
                                            1,
                                            "WP2_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP3 {
                                    condition = "user30>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=2)*(WPIndex<=2)";
                                        class WaypointShape {
                                            width = 22;
                                            type = "line";
                                            points[] = {
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0, -0.0125714}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.005, -0.0108869}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.01, 0}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.005, 0.0108869}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0, 0.0125714}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.01, 0}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0, -0.0251429}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.01, -0.0217737}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.02, 0}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.01, 0.0217737}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0, 0.0251429}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.02, 0}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP3_PosY", 1, "Direction_Center", 1, "WP3_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP2_PosX", 1, "WP2_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP3_PosX", 1, "WP3_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "03";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP3_PosX",
                                            1,
                                            "WP3_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP3_PosX",
                                            1,
                                            "WP3_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP3_PosX",
                                            1,
                                            "WP3_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP4 {
                                    condition = "user32>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=3)*(WPIndex<=3)";
                                        class WaypointShape {
                                            width = 22;
                                            type = "line";
                                            points[] = {
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0, -0.0125714}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.005, -0.0108869}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.01, 0}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.005, 0.0108869}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0, 0.0125714}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.01, 0}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0, -0.0251429}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.01, -0.0217737}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.02, 0}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.01, 0.0217737}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0, 0.0251429}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.02, 0}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP4_PosY", 1, "Direction_Center", 1, "WP4_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP3_PosX", 1, "WP3_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP4_PosX", 1, "WP4_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "04";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP4_PosX",
                                            1,
                                            "WP4_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP4_PosX",
                                            1,
                                            "WP4_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP4_PosX",
                                            1,
                                            "WP4_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP5 {
                                    condition = "user34>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=4)*(WPIndex<=4)";
                                        class WaypointShape {
                                            width = 22;
                                            type = "line";
                                            points[] = {
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0, -0.0125714}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.005, -0.0108869}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.01, 0}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.005, 0.0108869}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0, 0.0125714}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.01, 0}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0, -0.0251429}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.01, -0.0217737}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.02, 0}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.01, 0.0217737}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0, 0.0251429}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.02, 0}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP5_PosY", 1, "Direction_Center", 1, "WP5_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP4_PosX", 1, "WP4_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP5_PosX", 1, "WP5_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "05";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP5_PosX",
                                            1,
                                            "WP5_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP5_PosX",
                                            1,
                                            "WP5_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP5_PosX",
                                            1,
                                            "WP5_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP6 {
                                    condition = "user36>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=5)*(WPIndex<=5)";
                                        class WaypointShape {
                                            width = 22;
                                            type = "line";
                                            points[] = {
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0, -0.0125714}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.005, -0.0108869}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.01, 0}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.005, 0.0108869}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0, 0.0125714}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.01, 0}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0, -0.0251429}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.01, -0.0217737}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.02, 0}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.01, 0.0217737}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0, 0.0251429}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.02, 0}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP6_PosY", 1, "Direction_Center", 1, "WP6_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP5_PosX", 1, "WP5_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP6_PosX", 1, "WP6_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "06";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP6_PosX",
                                            1,
                                            "WP6_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP6_PosX",
                                            1,
                                            "WP6_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP6_PosX",
                                            1,
                                            "WP6_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP7 {
                                    condition = "user38>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=6)*(WPIndex<=6)";
                                        class WaypointShape {
                                            width = 22;
                                            type = "line";
                                            points[] = {
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0, -0.0125714}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.005, -0.0108869}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.01, 0}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.005, 0.0108869}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0, 0.0125714}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.01, 0}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0, -0.0251429}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.01, -0.0217737}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.02, 0}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.01, 0.0217737}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0, 0.0251429}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.02, 0}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP7_PosY", 1, "Direction_Center", 1, "WP7_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP6_PosX", 1, "WP6_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP7_PosX", 1, "WP7_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "07";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP7_PosX",
                                            1,
                                            "WP7_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP7_PosX",
                                            1,
                                            "WP7_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP7_PosX",
                                            1,
                                            "WP7_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP8 {
                                    condition = "user40>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=7)*(WPIndex<=7)";
                                        class WaypointShape {
                                            width = 22;
                                            type = "line";
                                            points[] = {
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0, -0.0125714}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.005, -0.0108869}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.01, 0}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.005, 0.0108869}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0, 0.0125714}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.01, 0}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0, -0.0251429}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.01, -0.0217737}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.02, 0}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.01, 0.0217737}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0, 0.0251429}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.02, 0}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP8_PosY", 1, "Direction_Center", 1, "WP8_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP7_PosX", 1, "WP7_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP8_PosX", 1, "WP8_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "08";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP8_PosX",
                                            1,
                                            "WP8_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP8_PosX",
                                            1,
                                            "WP8_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP8_PosX",
                                            1,
                                            "WP8_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP9 {
                                    condition = "user42>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=8)*(WPIndex<=8)";
                                        class WaypointShape {
                                            width = 22;
                                            type = "line";
                                            points[] = {
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0, -0.0125714}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.005, -0.0108869}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.01, 0}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.005, 0.0108869}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0, 0.0125714}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.01, 0}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0, -0.0251429}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.01, -0.0217737}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.02, 0}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.01, 0.0217737}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0, 0.0251429}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.02, 0}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP9_PosY", 1, "Direction_Center", 1, "WP9_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP8_PosX", 1, "WP8_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP9_PosX", 1, "WP9_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "09";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP9_PosX",
                                            1,
                                            "WP9_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP9_PosX",
                                            1,
                                            "WP9_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP9_PosX",
                                            1,
                                            "WP9_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class WP10 {
                                    condition = "user44>=0";
                                    class CurrentWaypoint {
                                        color[] = {0.9, 0, 0};
                                        alpha = 1;
                                        condition = "(WPIndex>=9)*(WPIndex<=9)";
                                        class WaypointShape {
                                            width = 22;
                                            type = "line";
                                            points[] = {
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0, -0.0125714}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.001736, -0.0123803}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.00342, -0.0118134}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.005, -0.0108869}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.006428, -0.00962971}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.00766, -0.00808091}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.00866, -0.00628571}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.009397, -0.00429943}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.009848, -0.0021824}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.01, 0}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.009848, 0.0021824}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.009397, 0.00429943}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.00866, 0.00628571}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.00766, 0.00808091}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.006428, 0.00962971}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.005, 0.0108869}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.00342, 0.0118134}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.001736, 0.0123803}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0, 0.0125714}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.001736, 0.0123803}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.00342, 0.0118134}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.005, 0.0108869}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.006428, 0.00962971}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.00766, 0.00808091}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.00866, 0.00628571}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.009397, 0.00429943}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.009848, 0.0021824}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.01, 0}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.009848, -0.0021824}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.009397, -0.00429943}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.00866, -0.00628571}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.00766, -0.00808091}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.006428, -0.00962971}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.005, -0.0108869}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.00342, -0.0118134}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.001736, -0.0123803}, 1},
                                                {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0, -0.0125714}, 1},
                                                {}
                                            };
                                        };
                                    };
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0, -0.0251429}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.01, -0.0217737}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.02, 0}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.01, 0.0217737}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0, 0.0251429}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.02, 0}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP10_PosY", 1, "Direction_Center", 1, "WP10_PosX", {0, -0.0251429}, 1},
                                            {},
                                            {"Direction_Center", 1, "WP9_PosX", 1, "WP9_PosY", 1, {0, 0}, 1},
                                            {"Direction_Center", 1, "WP10_PosX", 1, "WP10_PosY", 1, {0, 0}, 1}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "10";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP10_PosX",
                                            1,
                                            "WP10_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP10_PosX",
                                            1,
                                            "WP10_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP10_PosX",
                                            1,
                                            "WP10_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                                class CustomWP {
                                    condition = "user46>=0";
                                    color[] = {1, 0.5, 0};
                                    alpha = 0.5;
                                    class WaypointShape {
                                        width = 6;
                                        type = "line";
                                        points[] = {
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0, -0.0251429}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.003472, -0.0247607}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.00684, -0.0236267}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.01, -0.0217737}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.012856, -0.0192594}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.01532, -0.0161618}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.01732, -0.0125714}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.018794, -0.00859886}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.019696, -0.0043648}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.02, 0}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.019696, 0.0043648}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.018794, 0.00859886}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.01732, 0.0125714}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.01532, 0.0161618}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.012856, 0.0192594}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.01, 0.0217737}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.00684, 0.0236267}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0.003472, 0.0247607}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0, 0.0251429}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.003472, 0.0247607}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.00684, 0.0236267}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.01, 0.0217737}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.012856, 0.0192594}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.01532, 0.0161618}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.01732, 0.0125714}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.018794, 0.00859886}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.019696, 0.0043648}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.02, 0}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.019696, -0.0043648}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.018794, -0.00859886}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.01732, -0.0125714}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.01532, -0.0161618}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.012856, -0.0192594}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.01, -0.0217737}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.00684, -0.0236267}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {-0.003472, -0.0247607}, 1},
                                            {"WP11_PosY", 1, "Direction_Center", 1, "WP11_PosX", {0, -0.0251429}, 1},
                                            {}
                                        };
                                    };
                                    class TexWPNumber {
                                        type = "text";
                                        source = "static";
                                        text = "CWP";
                                        scale = 1;
                                        sourceScale = 1;
                                        align = "center";
                                        pos[] = {
                                            "Direction_Center",
                                            1,
                                            "WP11_PosX",
                                            1,
                                            "WP11_PosY",
                                            1,
                                            {0.05, -0.008},
                                            1
                                        };
                                        right[] = {
                                            "Direction_Center",
                                            1,
                                            "WP11_PosX",
                                            1,
                                            "WP11_PosY",
                                            1,
                                            {0.072, -0.008},
                                            1
                                        };
                                        down[] = {
                                            "Direction_Center",
                                            1,
                                            "WP11_PosX",
                                            1,
                                            "WP11_PosY",
                                            1,
                                            {0.05, 0.011},
                                            1
                                        };
                                    };
                                };
                            };
                        };
                    };
                    class LightBlue {
                        color[] = {0.43, 0.8, 0.93};
                        alpha = 0.15;
                        class StaticDrawPolygon {
                            type = "polygon";
                            points[] = {
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.00347296, -0.0247609}, 1}, {"Static_Offset", {0.0068404, -0.0236266}, 1}, {"Static_Offset", {0.01, -0.0217744}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.01, -0.0217744}, 1}, {"Static_Offset", {0.0128558, -0.0192605}, 1}, {"Static_Offset", {0.0153209, -0.0161615}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.0153209, -0.0161615}, 1}, {"Static_Offset", {0.0173205, -0.0125714}, 1}, {"Static_Offset", {0.0187939, -0.00859936}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.0187939, -0.00859936}, 1}, {"Static_Offset", {0.0196962, -0.00436601}, 1}, {"Static_Offset", {0.02, 0.00000000109903}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.02, 0.00000000109903}, 1}, {"Static_Offset", {0.0196962, 0.00436601}, 1}, {"Static_Offset", {0.0187939, 0.00859936}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.0187939, 0.00859936}, 1}, {"Static_Offset", {0.0173205, 0.0125714}, 1}, {"Static_Offset", {0.0153209, 0.0161615}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.0153209, 0.0161615}, 1}, {"Static_Offset", {0.0128557, 0.0192606}, 1}, {"Static_Offset", {0.01, 0.0217744}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.01, 0.0217744}, 1}, {"Static_Offset", {0.0068404, 0.0236266}, 1}, {"Static_Offset", {0.00347297, 0.0247609}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {0.00347297, 0.0247609}, 1}, {"Static_Offset", {-0.00000000174846, 0.0251429}, 1}, {"Static_Offset", {-0.00347297, 0.0247609}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.00347297, 0.0247609}, 1}, {"Static_Offset", {-0.0068404, 0.0236266}, 1}, {"Static_Offset", {-0.01, 0.0217743}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.01, 0.0217743}, 1}, {"Static_Offset", {-0.0128558, 0.0192605}, 1}, {"Static_Offset", {-0.0153209, 0.0161615}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.0153209, 0.0161615}, 1}, {"Static_Offset", {-0.0173205, 0.0125714}, 1}, {"Static_Offset", {-0.0187939, 0.00859936}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.0187939, 0.00859936}, 1}, {"Static_Offset", {-0.0196962, 0.00436601}, 1}, {"Static_Offset", {-0.02, -0.000000000299826}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.02, -0.000000000299826}, 1}, {"Static_Offset", {-0.0196962, -0.00436602}, 1}, {"Static_Offset", {-0.0187939, -0.00859936}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.0187939, -0.00859936}, 1}, {"Static_Offset", {-0.0173205, -0.0125714}, 1}, {"Static_Offset", {-0.0153209, -0.0161615}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.0153209, -0.0161615}, 1}, {"Static_Offset", {-0.0128557, -0.0192606}, 1}, {"Static_Offset", {-0.01, -0.0217744}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.01, -0.0217744}, 1}, {"Static_Offset", {-0.00684041, -0.0236266}, 1}, {"Static_Offset", {-0.00347296, -0.0247609}, 1}},
                                {{"Static_Offset", 1, {0, 0}, 1}, {"Static_Offset", {-0.00347296, -0.0247609}, 1}, {"Static_Offset", {0.00000000349691, -0.0251429}, 1}, {"Static_Offset", {0.00347297, -0.0247609}, 1}}
                            };
                        };
                    };
                    class StaticDraw {
                        type = "line";
                        width = 6;
                        points[] = {
                            {"Static_Offset", {0, -0.0264}, 1},
                            {"Static_Offset", {0.0036456, -0.0259987}, 1},
                            {"Static_Offset", {0.007182, -0.0248081}, 1},
                            {"Static_Offset", {0.0105, -0.0228624}, 1},
                            {"Static_Offset", {0.0134988, -0.0202224}, 1},
                            {"Static_Offset", {0.016086, -0.0169699}, 1},
                            {"Static_Offset", {0.018186, -0.0132}, 1},
                            {"Static_Offset", {0.0197337, -0.0090288}, 1},
                            {"Static_Offset", {0.0206808, -0.00458304}, 1},
                            {"Static_Offset", {0.021, 0}, 1},
                            {"Static_Offset", {0.0206808, 0.00458304}, 1},
                            {"Static_Offset", {0.0197337, 0.0090288}, 1},
                            {"Static_Offset", {0.018186, 0.0132}, 1},
                            {"Static_Offset", {0.016086, 0.0169699}, 1},
                            {"Static_Offset", {0.0134988, 0.0202224}, 1},
                            {"Static_Offset", {0.0105, 0.0228624}, 1},
                            {"Static_Offset", {0.007182, 0.0248081}, 1},
                            {"Static_Offset", {0.0036456, 0.0259987}, 1},
                            {"Static_Offset", {0, 0.0264}, 1},
                            {"Static_Offset", {-0.0036456, 0.0259987}, 1},
                            {"Static_Offset", {-0.007182, 0.0248081}, 1},
                            {"Static_Offset", {-0.0105, 0.0228624}, 1},
                            {"Static_Offset", {-0.0134988, 0.0202224}, 1},
                            {"Static_Offset", {-0.016086, 0.0169699}, 1},
                            {"Static_Offset", {-0.018186, 0.0132}, 1},
                            {"Static_Offset", {-0.0197337, 0.0090288}, 1},
                            {"Static_Offset", {-0.0206808, 0.00458304}, 1},
                            {"Static_Offset", {-0.021, 0}, 1},
                            {"Static_Offset", {-0.0206808, -0.00458304}, 1},
                            {"Static_Offset", {-0.0197337, -0.0090288}, 1},
                            {"Static_Offset", {-0.018186, -0.0132}, 1},
                            {"Static_Offset", {-0.016086, -0.0169699}, 1},
                            {"Static_Offset", {-0.0134988, -0.0202224}, 1},
                            {"Static_Offset", {-0.0105, -0.0228624}, 1},
                            {"Static_Offset", {-0.007182, -0.0248081}, 1},
                            {"Static_Offset", {-0.0036456, -0.0259987}, 1},
                            {"Static_Offset", {0, -0.0264}, 1},
                            {},
                            {"Static_Offset", 1, {-0.012, -0.01}, 1},
                            {"Static_Offset", 1, {-0.012, 0.01}, 1},
                            {"Static_Offset", 1, {0.012, 0.01}, 1},
                            {"Static_Offset", 1, {0.012, -0.01}, 1},
                            {"Static_Offset", 1, {-0.012, -0.01}, 1},
                            {}
                        };
                    };
                    class SensorGroup {
                        class Sensor {
                            type = "sensor";
                            pos[] = {"Sensor_Offset", 1, {"-0+-1", "-0+-1"}, 1};
                            down[] = {"Sensor_Offset", 1, {"0--1", "0--1"}, 1};
                            showTargetTypes = "2+4+8+16+32+64+128+256+512+1024";
                            width = 4;
                            sensorLineType = 0;
                            sensorLineWidth = 3;
                            targetLineWidth = -0.00192;
                            targetLineLength = 0.02;
                            range = "user0";
                            class MissileThreat {
                                color[] = {1, 0, 0};
                                class TargetLines {
                                    type = "line";
                                    width = 2;
                                    points[] = {
                                        {{0, -0.0251429}, 1},
                                        {{0.003472, -0.0247607}, 1},
                                        {{0.00684, -0.0236267}, 1},
                                        {{0.01, -0.0217737}, 1},
                                        {{0.012856, -0.0192594}, 1},
                                        {{0.01532, -0.0161618}, 1},
                                        {{0.01732, -0.0125714}, 1},
                                        {{0.018794, -0.00859886}, 1},
                                        {{0.019696, -0.0043648}, 1},
                                        {{0.02, 0}, 1},
                                        {{0.019696, 0.0043648}, 1},
                                        {{0.018794, 0.00859886}, 1},
                                        {{0.01732, 0.0125714}, 1},
                                        {{0.01532, 0.0161618}, 1},
                                        {{0.012856, 0.0192594}, 1},
                                        {{0.01, 0.0217737}, 1},
                                        {{0.00684, 0.0236267}, 1},
                                        {{0.003472, 0.0247607}, 1},
                                        {{0, 0.0251429}, 1},
                                        {{-0.003472, 0.0247607}, 1},
                                        {{-0.00684, 0.0236267}, 1},
                                        {{-0.01, 0.0217737}, 1},
                                        {{-0.012856, 0.0192594}, 1},
                                        {{-0.01532, 0.0161618}, 1},
                                        {{-0.01732, 0.0125714}, 1},
                                        {{-0.018794, 0.00859886}, 1},
                                        {{-0.019696, 0.0043648}, 1},
                                        {{-0.02, 0}, 1},
                                        {{-0.019696, -0.0043648}, 1},
                                        {{-0.018794, -0.00859886}, 1},
                                        {{-0.01732, -0.0125714}, 1},
                                        {{-0.01532, -0.0161618}, 1},
                                        {{-0.012856, -0.0192594}, 1},
                                        {{-0.01, -0.0217737}, 1},
                                        {{-0.00684, -0.0236267}, 1},
                                        {{-0.003472, -0.0247607}, 1},
                                        {{0, -0.0251429}, 1}
                                    };
                                };
                                class TextM {
                                    type = "text";
                                    source = "static";
                                    text = "M";
                                    align = "center";
                                    scale = 1;
                                    pos[] = {{0, -0.01}, 1};
                                    right[] = {{0.02, -0.01}, 1};
                                    down[] = {{0, 0.01}, 1};
                                };
                            };
                            class lockingThreat {
                                color[] = {1, 0.3, 0};
                                class TargetLines {
                                    type = "line";
                                    points[] = {
                                        {{0.02, 0}, 1},
                                        {{0, 0.0251429}, 1},
                                        {{-0.02, 0}, 1},
                                        {{0, -0.0251429}, 1},
                                        {{0.02, 0}, 1}
                                    };
                                };
                            };
                            class markingThreat: lockingThreat {
                                class TargetLines: TargetLines {};
                            };
                            class rwr {
                                class TargetLines {
                                    type = "line";
                                    width = 2;
                                    points[] = {
                                        {{0.02, 0}, 1},
                                        {{0, 0.0251429}, 1},
                                        {{-0.02, 0}, 1},
                                        {{0, -0.0251429}, 1},
                                        {{0.02, 0}, 1}
                                    };
                                };
                            };
                            class rwrFriendly: rwr {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class rwrEnemy: rwr {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class rwrGroup: rwr {
                                color[] = {1, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class rwrDestroyed {};
                            class markedTarget {
                                color[] = {1, 0.3, 0};
                                class TargetLines {
                                    type = "line";
                                    width = 3;
                                    points[] = {
                                        {{-0.017, -0.0213714}, 1},
                                        {{-0.01, -0.0213714}, 1},
                                        {},
                                        {{0.017, -0.0213714}, 1},
                                        {{0.01, -0.0213714}, 1},
                                        {},
                                        {{-0.017, -0.0213714}, 1},
                                        {{-0.017, -0.0125714}, 1},
                                        {},
                                        {{0.017, -0.0213714}, 1},
                                        {{0.017, -0.0125714}, 1},
                                        {},
                                        {{-0.017, 0.0213714}, 1},
                                        {{-0.01, 0.0213714}, 1},
                                        {},
                                        {{0.017, 0.0213714}, 1},
                                        {{0.01, 0.0213714}, 1},
                                        {},
                                        {{-0.017, 0.0213714}, 1},
                                        {{-0.017, 0.0125714}, 1},
                                        {},
                                        {{0.017, 0.0213714}, 1},
                                        {{0.017, 0.0125714}, 1},
                                        {}
                                    };
                                };
                            };
                            class assignedTarget: markedTarget {
                                color[] = {1, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class target {
                                color[] = {1, 0.3, 0};
                                class TargetLines {
                                    type = "polygon";
                                    points[] = {{{{-0.01, -0.01}, 1}, {{0, -0.01}, 1}, {{0, 0}, 1}, {{-0.01, 0}, 1}}};
                                };
                            };
                            class targetFriendly: target {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetEnemy: target {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class targetGroup: target {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetDestroyed {};
                            class targetGround: target {
                                class TargetLines: TargetLines {
                                    type = "line";
                                    width = 3;
                                    points[] = {
                                        {{-0.026, -0}, 1},
                                        {{-0, 0.026}, 1},
                                        {{0.026, 0}, 1},
                                        {{0, -0.026}, 1},
                                        {{-0.026, -0}, 1},
                                        {}
                                    };
                                };
                                class StaticDraw {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.012, -0.01}, 1},
                                        {{-0.012, 0.01}, 1},
                                        {{0.012, 0.01}, 1},
                                        {{0.012, -0.01}, 1},
                                        {{-0.012, -0.01}, 1},
                                        {}
                                    };
                                };
                            };
                            class targetGroundFriendly: targetGround {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {
                                    type = "line";
                                    width = 3;
                                    points[] = {
                                        {{0, -0.0264}, 1},
                                        {{0.0036456, -0.0259987}, 1},
                                        {{0.007182, -0.0248081}, 1},
                                        {{0.0105, -0.0228624}, 1},
                                        {{0.0134988, -0.0202224}, 1},
                                        {{0.016086, -0.0169699}, 1},
                                        {{0.018186, -0.0132}, 1},
                                        {{0.0197337, -0.0090288}, 1},
                                        {{0.0206808, -0.00458304}, 1},
                                        {{0.021, 0}, 1},
                                        {{0.0206808, 0.00458304}, 1},
                                        {{0.0197337, 0.0090288}, 1},
                                        {{0.018186, 0.0132}, 1},
                                        {{0.016086, 0.0169699}, 1},
                                        {{0.0134988, 0.0202224}, 1},
                                        {{0.0105, 0.0228624}, 1},
                                        {{0.007182, 0.0248081}, 1},
                                        {{0.0036456, 0.0259987}, 1},
                                        {{0, 0.0264}, 1},
                                        {{-0.0036456, 0.0259987}, 1},
                                        {{-0.007182, 0.0248081}, 1},
                                        {{-0.0105, 0.0228624}, 1},
                                        {{-0.0134988, 0.0202224}, 1},
                                        {{-0.016086, 0.0169699}, 1},
                                        {{-0.018186, 0.0132}, 1},
                                        {{-0.0197337, 0.0090288}, 1},
                                        {{-0.0206808, 0.00458304}, 1},
                                        {{-0.021, 0}, 1},
                                        {{-0.0206808, -0.00458304}, 1},
                                        {{-0.0197337, -0.0090288}, 1},
                                        {{-0.018186, -0.0132}, 1},
                                        {{-0.016086, -0.0169699}, 1},
                                        {{-0.0134988, -0.0202224}, 1},
                                        {{-0.0105, -0.0228624}, 1},
                                        {{-0.007182, -0.0248081}, 1},
                                        {{-0.0036456, -0.0259987}, 1},
                                        {{0, -0.0264}, 1}
                                    };
                                };
                                class StaticDraw {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.012, -0.01}, 1},
                                        {{-0.012, 0.01}, 1},
                                        {{0.012, 0.01}, 1},
                                        {{0.012, -0.01}, 1},
                                        {{-0.012, -0.01}, 1},
                                        {}
                                    };
                                };
                            };
                            class targetGroundEnemy: targetGround {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {
                                    type = "line";
                                    width = 3;
                                    points[] = {
                                        {{-0.026, -0}, 1},
                                        {{-0, 0.026}, 1},
                                        {{0.026, 0}, 1},
                                        {{0, -0.026}, 1},
                                        {{-0.026, -0}, 1},
                                        {}
                                    };
                                };
                                class StaticDraw {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.012, -0.01}, 1},
                                        {{-0.012, 0.01}, 1},
                                        {{0.012, 0.01}, 1},
                                        {{0.012, -0.01}, 1},
                                        {{-0.012, -0.01}, 1},
                                        {}
                                    };
                                };
                            };
                            class targetGroundGroup: targetGroundFriendly {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                                class StaticDraw: StaticDraw {};
                            };
                            class targetGroundDestroyed {};
                            class targetGroundRemote: target {
                                class TargetLines: TargetLines {};
                            };
                            class targetGroundRemoteFriendly: targetGroundRemote {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetGroundRemoteEnemy: targetGroundRemote {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class targetGroundRemoteGroup: targetGroundRemote {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetGroundRemoteDestroyed {};
                            class targetLaser: target {
                                class TargetLines: TargetLines {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{0, -0.0251429}, 1},
                                        {{-0.00000000174846, 0.0251429}, 1},
                                        {},
                                        {{0.02, 0.00000000109903}, 1},
                                        {{-0.02, -0.000000000299826}, 1},
                                        {},
                                        {{0.0106066, -0.013334}, 1},
                                        {{-0.0106066, 0.013334}, 1},
                                        {},
                                        {{0.0106066, 0.013334}, 1},
                                        {{-0.0106066, -0.013334}, 1},
                                        {}
                                    };
                                };
                            };
                            class targetLaserFriendly: targetLaser {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetLaserEnemy: targetLaser {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class targetLaserGroup: targetLaser {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetNVG: targetLaser {
                                class TargetLines: TargetLines {};
                            };
                            class targetNVGFriendly: targetNVG {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetNVGEnemy: targetNVG {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class targetNVGGroup: targetNVG {
                                color[] = {1, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class targetMan: target {
                                class TargetLines: TargetLines {};
                            };
                            class targetManFriendly: targetMan {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetManEnemy: targetMan {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class targetManGroup: targetMan {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetManRemote: target {
                                class TargetLines: TargetLines {};
                            };
                            class targetManRemoteFriendly: targetManRemote {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetManRemoteEnemy: targetManRemote {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                            };
                            class targetManRemoteGroup: targetManRemote {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetAir {
                                color[] = {1, 1, 1};
                                class TargetLines {
                                    type = "polygon";
                                    points[] = {{{{0, 0}, 1}, {{0.012, 0.01}, 1}, {{0.012, -0.01}, 1}}, {{{0, 0}, 1}, {{-0.012, 0.01}, 1}, {{-0.012, -0.01}, 1}}};
                                };
                                class TargetArc {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.02, 0.0175}, 1},
                                        {{-0.02, -0.025}, 1},
                                        {{0.02, -0.025}, 1},
                                        {{0.02, 0.0175}, 1}
                                    };
                                };
                            };
                            class targetAirFriendly: targetAir {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                                class TargetArc {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.02, 0.0175}, 1},
                                        {{-0.016, 0.000400007}, 1},
                                        {{-0.012, -0.0129}, 1},
                                        {{-0.008, -0.0224}, 1},
                                        {{-0.004, -0.0281}, 1},
                                        {{0, -0.03}, 1},
                                        {{0.004, -0.0281}, 1},
                                        {{0.008, -0.0224}, 1},
                                        {{0.012, -0.0129}, 1},
                                        {{0.016, 0.000400007}, 1},
                                        {{0.02, 0.0175}, 1}
                                    };
                                };
                            };
                            class targetAirEnemy: targetAir {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                                class TargetArc {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.02, 0.0175}, 1},
                                        {{-0.016, 0.000400007}, 1},
                                        {{-0.012, -0.0129}, 1},
                                        {{-0.008, -0.0224}, 1},
                                        {{-0.004, -0.0281}, 1},
                                        {{0, -0.03}, 1},
                                        {{0.004, -0.0281}, 1},
                                        {{0.008, -0.0224}, 1},
                                        {{0.012, -0.0129}, 1},
                                        {{0.016, 0.000400007}, 1},
                                        {{0.02, 0.0175}, 1}
                                    };
                                };
                            };
                            class targetAirGroup: targetAir {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetAirDestroyed {};
                            class targetAirRemote: targetAir {
                                color[] = {1, 1, 1};
                                class TargetLines: TargetLines {};
                                class TargetArc {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.02, 0.0175}, 1},
                                        {{-0.02, -0.025}, 1},
                                        {{0.02, -0.025}, 1},
                                        {{0.02, 0.0175}, 1}
                                    };
                                };
                            };
                            class targetAirRemoteFriendly: targetAirRemote {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                                class TargetArc {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.02, 0.0175}, 1},
                                        {{-0.016, 0.000400007}, 1},
                                        {{-0.012, -0.0129}, 1},
                                        {{-0.008, -0.0224}, 1},
                                        {{-0.004, -0.0281}, 1},
                                        {{0, -0.03}, 1},
                                        {{0.004, -0.0281}, 1},
                                        {{0.008, -0.0224}, 1},
                                        {{0.012, -0.0129}, 1},
                                        {{0.016, 0.000400007}, 1},
                                        {{0.02, 0.0175}, 1}
                                    };
                                };
                            };
                            class targetAirRemoteEnemy: targetAirRemote {
                                color[] = {0.12, 0, 0};
                                class TargetLines: TargetLines {};
                                class TargetArc {
                                    type = "line";
                                    width = 4;
                                    points[] = {
                                        {{-0.02, 0.0175}, 1},
                                        {{-0.02, -0.0075}, 1},
                                        {{-0, -0.03}, 1},
                                        {{0.02, -0.0075}, 1},
                                        {{0.02, 0.0175}, 1}
                                    };
                                };
                            };
                            class targetAirRemoteGroup: targetAirRemote {
                                color[] = {0, 0, 0.12};
                                class TargetLines: TargetLines {};
                            };
                            class targetAirRemoteDestroyed {};
                        };
                    };
                };
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_stryker\data\periscope.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\periscope_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\periscope_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\periscope_round.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\periscope_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\periscope_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1134.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1134_damage.rvmat",
                "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat"
            };
        };
        class TransportBackpacks {
            class _xx_rhsusf_falconii {
                backpack = "rhsusf_falconii";
                count = 2;
            };
        };
        class TransportMagazines {
            class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
                magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
                count = 30;
            };
            class _xx_rhsusf_100Rnd_762x51 {
                magazine = "rhsusf_100Rnd_762x51";
                count = 11;
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
            class _xx_Toolkit {
                name = "Toolkit";
                count = 1;
            };
        };
        class TransportWeapons {
            class _xx_rhs_weap_m4 {
                weapon = "rhs_weap_m4";
                count = 2;
            };
        };
        hiddenSelections[] = {
            "Camo_1",
            "Camo_2",
            "Camo_3",
            "Camo_4",
            "Camo_5",
            "camo_6",
            "camo_7",
            "Camo_Acc",
            "Camo_AccA",
            "Camo_DUKE",
            "Camo_fc01",
            "Camo_fc02",
            "Camo_wc01",
            "Camo_wc02",
            "callsign1",
            "callsign2",
            "callsign3",
            "callsign4",
            "dec_hull",
            "BFT_screen"
        };
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1134_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1134_int_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
            "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
            "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
            "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
            "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
            "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa"
        };
        class TextureSources {
            class Olive {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "Olive";
                textures[] = {
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1134_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1134_int_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
                    "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa"
                };
            };
            class Tan {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "Tan";
                textures[] = {
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1134_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1134_int_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_ca.paa",
                    "rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_c_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
                    "rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa"
                };
            };
        };
        class RenderTargets: RenderTargets {
            class LeftMirror: LeftMirror {
                renderTarget = "rendertarget0";
                class CameraView1: CameraView1 {};
            };
            class RightMirror: RightMirror {
                renderTarget = "rendertarget1";
                class CameraView1: CameraView1 {};
            };
            class DVE_Front: DVE_Front {
                renderTarget = "rendertarget_dve";
                class CameraView1: CameraView1 {};
            };
            class Gunner_display: Gunner_display {
                renderTarget = "rendertarget2";
                class CameraView1: CameraView1 {
                    pointPosition = "View_CROWS_PIP_Pos";
                    pointDirection = "View_CROWS_PIP_Dir";
                };
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets {};
                soundServo[] = {
                    "A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
                    0.39810717,
                    1,
                    30
                };
                soundServoVertical[] = {
                    "A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
                    0.39810717,
                    1,
                    30
                };
                gunnerName = "Gunner";
                discreteDistance[] = {
                    0,
                    200,
                    400,
                    600,
                    800,
                    1000,
                    1200,
                    1400,
                    1600,
                    1800,
                    2000,
                    2200,
                    2400,
                    2600,
                    2800,
                    3000
                };
                discreteDistanceInitIndex = 2;
                minElev = -20;
                maxElev = 30;
                gunnerAction = "RHS_Stryker_M1126_Gunner_out";
                gunnerInAction = "RHS_Stryker_M1134_Gunner_in";
                personturretAction = "vehicle_turnout_2";
                isPersonTurret = 1;
                gunnerGetInAction = "GetInMRAP_01_cargo";
                gunnerGetOutAction = "GetOutMRAP_01";
                gunnerCompartments = "Compartment1";
                gunnerForceOptics = 0;
                gunnerOutOpticsShowCursor = 0;
                viewGunnerInExternal = 1;
                LODTurnedOut = 1;
                LODTurnedin = 1100;
                LODOpticsIn = 0;
                LODOpticsOut = 0;
                maxhorizontalrotspeed = 0.86;
                maxverticalrotspeed = 0.54;
                castGunnerShadow = 1;
                stabilizedInAxes = 3;
                startEngine = 0;
                usePip = 2;
                memoryPointGunnerOptics = "View_CROWS";
                animationSourceStickX = "gunner_stick_trav";
                animationSourceStickY = "gunner_stick_elev";
                gunnerLeftHandAnimName = "Gunner_Joystick_Elev";
                gunnerRightHandAnimName = "Gunner_Joystick_Elev";
                memoryPointsGetInGunner = "pos gunner";
                memoryPointsGetInGunnerDir = "pos gunner dir";
                animationSourceHatch = "Hatch_Front";
                gun = "Missile_Launch_Move";
                weapons[] = {"Rhs_weap_TOW_Launcher", "rhsusf_weap_M6"};
                magazines[] = {
                    "rhs_mag_2Rnd_TOW2A",
                    "rhs_mag_2Rnd_TOW2A",
                    "rhs_mag_2Rnd_TOW2A",
                    "rhs_mag_2Rnd_TOW2B",
                    "rhs_mag_2Rnd_TOW2B",
                    "rhs_mag_2Rnd_TOW2B",
                    "rhsusf_mag_L8A3_16"
                };
                class ViewOptics: ViewOptics {
                    visionMode[] = {"Normal"};
                    thermalMode[] = {0, 1};
                };
                class ViewGunner: ViewGunner {
                    initAngleX = -16;
                    initAngleY = 0;
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
                turretInfoType = "RHS_RscMITAS";
                class OpticsIn {
                    class DaysightWFOV: ViewOptics {
                        camPos = "View_CROWS";
                        opticsDisplayName = "WFOV1";
                        gunnerOpticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_ITAS_Day_WFOV.p3d";
                        initFov = 0.162791;
                        minFov = 0.162791;
                        maxFov = 0.162791;
                        visionMode[] = {"Normal"};
                        hitpoint = "Hit_Optic_MITAS_Day";
                    };
                    class DaysightNFOV: DaysightWFOV {
                        gunnerOpticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_ITAS_Day_NFOV.p3d";
                        opticsDisplayName = "NFOV2";
                        initFov = 0.0777778;
                        minFov = 0.0777778;
                        maxFov = 0.0777778;
                    };
                    class ThermalWFOV: DaysightWFOV {
                        gunnerOpticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_MITAS_Night_WFOV.p3d";
                        camPos = "View_CROWS_TI";
                        opticsDisplayName = "WFOV3";
                        visionMode[] = {"TI"};
                        thermalMode[] = {2, 3};
                        initFov = 0.175;
                        minFov = 0.175;
                        maxFov = 0.175;
                        hitpoint = "Hit_Optic_MITAS_TI";
                    };
                    class ThermalWFOV2X: ThermalWFOV {
                        opticsDisplayName = "WFOV42X";
                        initFov = 0.0875;
                        minFov = 0.0875;
                        maxFov = 0.0875;
                    };
                    class ThermalNFOV: ThermalWFOV {
                        gunnerOpticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_MITAS_Night_NFOV.p3d";
                        opticsDisplayName = "NFOV5";
                        initFov = 0.0583333;
                        minFov = 0.0583333;
                        maxFov = 0.0583333;
                    };
                    class DaysightNFOV2X: ThermalNFOV {
                        opticsDisplayName = "NFOV62X";
                        initFov = 0.0291667;
                        minFov = 0.0291667;
                        maxFov = 0.0291667;
                    };
                };
                class Hitpoints {
                    class HitTurret {
                        armor = -120;
                        minimalHit = -0.13;
                        explosionShielding = 0.5;
                        name = "Hit_Turret";
                        visual = "vis_turret";
                        armorComponent = "Hit_Turret";
                        passThrough = 0;
                        radius = 0.2;
                    };
                    class HitGun {
                        armor = -120;
                        minimalHit = -0.13;
                        explosionShielding = 0.5;
                        name = "Hit_Gun";
                        visual = "vis_gun";
                        armorComponent = "Hit_Gun";
                        passThrough = 0;
                        radius = 0.2;
                    };
                };
                class Components {
                    class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                        class Components: components {
                            class EmptyDisplay {
                                componentType = "EmptyDisplayComponent";
                            };
                            class MinimapDisplay {
                                componentType = "MinimapDisplayComponent";
                                resource = "RscCustomInfoMiniMap";
                            };
                            class CrewDisplay {
                                componentType = "CrewDisplayComponent";
                                resource = "RscCustomInfoCrew";
                            };
                            class SensorDisplay {
                                componentType = "SensorsDisplayComponent";
                                range[] = {8000, 16000, 25000, 4000};
                                resource = "RscCustomInfoSensors";
                            };
                        };
                    };
                    class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                        class Components: components {
                            class EmptyDisplay {
                                componentType = "EmptyDisplayComponent";
                            };
                            class MinimapDisplay {
                                componentType = "MinimapDisplayComponent";
                                resource = "RscCustomInfoMiniMap";
                            };
                            class CrewDisplay {
                                componentType = "CrewDisplayComponent";
                                resource = "RscCustomInfoCrew";
                            };
                            class SensorDisplay {
                                componentType = "SensorsDisplayComponent";
                                range[] = {8000, 4000, 2000, 1000};
                                resource = "RscCustomInfoSensors";
                            };
                        };
                    };
                };
            };
            class CargoTurret_01: CargoTurret {
                proxyType = "CPCommander";
                gunnerName = "Commander";
                gunnerCompartments = "Compartment1";
                gunnerInAction = "RHS_Stryker_M1126_Gunner_in";
                gunnerAction = "RHS_Stryker_M1126_Gunner_out";
                personturretAction = "";
                proxyIndex = 1;
                viewGunnerInExternal = 1;
                isPersonTurret = 1;
                dontCreateAI = 0;
                commanding = -2;
                maxOutTurn = 110;
                minOutTurn = -110;
                maxOutElev = 75;
                minOutElev = -15;
                LODTurnedOut = 1;
                LODTurnedin = 1201;
                gunnerDoor = "Hatch_Commander";
                animationSourceHatch = "Hatch_Commander_A";
                gunnerForceOptics = 0;
                class ViewGunner {
                    initAngleX = 0;
                    initAngleY = 0;
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
                turretInfoType = "RHS_RscITAS";
                class OpticsIn {
                    class DVE_Wide: ViewOptics {
                        camPos = "view_DVE";
                        camDir = "view_DVE_dir";
                        gunnerOpticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_DVE_4x3";
                        visionMode[] = {"TI"};
                        thermalMode[] = {0, 1};
                        initFov = 1.07692;
                        minFov = 1.07692;
                        maxFov = 1.07692;
                        hitpoint = "Hit_Optic_DVEA";
                    };
                    class DVS_Rear: DVE_Wide {
                        camPos = "view_rear";
                        camDir = "view_rear_dir";
                        hitpoint = "Hit_Optic_Driver_Rear";
                    };
                    class DaysightWFOV: ViewOptics {
                        camPos = "View_CROWS";
                        opticsDisplayName = "WFOV";
                        gunnerOpticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_ITAS_Day_WFOV.p3d";
                        initFov = 0.162791;
                        minFov = 0.162791;
                        maxFov = 0.162791;
                        visionMode[] = {"Normal"};
                        hitpoint = "Hit_Optic_MITAS_Day";
                    };
                    class DaysightNFOV: DaysightWFOV {
                        gunnerOpticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_ITAS_Day_NFOV.p3d";
                        opticsDisplayName = "NFOV";
                        initFov = 0.0777778;
                        minFov = 0.0777778;
                        maxFov = 0.0777778;
                    };
                    class ThermalWFOV: DaysightWFOV {
                        gunnerOpticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_ITAS_Night_WFOV.p3d";
                        camPos = "View_CROWS_TI";
                        opticsDisplayName = "WFOV";
                        visionMode[] = {"TI"};
                        thermalMode[] = {0, 1};
                        initFov = 0.175;
                        minFov = 0.175;
                        maxFov = 0.175;
                        hitpoint = "Hit_MITAS_CROWS_TI";
                    };
                    class ThermalWFOV2X: ThermalWFOV {
                        opticsDisplayName = "WFOV2X";
                        initFov = 0.0875;
                        minFov = 0.0875;
                        maxFov = 0.0875;
                    };
                    class ThermalNFOV: ThermalWFOV {
                        gunnerOpticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_ITAS_Night_NFOV.p3d";
                        opticsDisplayName = "NFOV";
                        initFov = 0.0583333;
                        minFov = 0.0583333;
                        maxFov = 0.0583333;
                    };
                    class DaysightNFOV2X: ThermalNFOV {
                        opticsDisplayName = "NFOV2X";
                        initFov = 0.0291667;
                        minFov = 0.0291667;
                        maxFov = 0.0291667;
                    };
                };
                class Reflectors {
                    class cargo_light_1 {
                        color[] = {800, 900, 650};
                        ambient[] = {5, 5, 5};
                        position = "cargo_light_1";
                        direction = "cargo_light_1_dir";
                        hitpoint = "cargo_light_1";
                        selection = "cargo_light_1";
                        size = 1;
                        intensity = 4;
                        coneFadeCoef = 0.1;
                        innerAngle = 140;
                        outerAngle = 175;
                        useFlare = 0;
                        flareSize = 1;
                        flareMaxDistance = 5;
                        dayLight = 1;
                        blinking = 0;
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
            class Turret_Weapon: MainTurret {
                gunnercompartments = "Compartment5";
                soundServo[] = {"", 0.39810717, 1, 30};
                soundServoVertical[] = {"", 0.39810717, 1, 30};
                gunnerName = "Turret (M240)";
                gunnerDoor = "";
                gunnerAction = "RHS_Stryker_M1134_M240_Gunner";
                isPersonTurret = 0;
                dontCreateAI = 1;
                personturretAction = "";
                proxyIndex = 2;
                canHideGunner = 0;
                initTurn = -20;
                minTurn = -45;
                maxTurn = 9;
                initElev = 5;
                minElev = -9;
                maxElev = 30;
                maxhorizontalrotspeed = 0.6;
                maxverticalrotspeed = 0.44;
                inGunnerMayFire = 1;
                outGunnerMayFire = 1;
                LODTurnedOut = 1000;
                LODTurnedin = 1000;
                LODOpticsIn = 1000;
                LODOpticsOut = 1000;
                turretInfoType = "RscOptics_Offroad_01";
                body = "Weapon_Turret";
                gun = "Weapon_Gun";
                animationSourceBody = "Weapon_Turret";
                animationSourceGun = "Weapon_Gun";
                gunnerLeftHandAnimName = "Weapon_Gun";
                gunnerRightHandAnimName = "Weapon_Gun";
                gunnerLeftLegAnimName = "Gunner_Weapon_Legs";
                gunnerRightLegAnimName = "Gunner_Weapon_Legs";
                animationSourceStickX = "Weapon_Turret_inertia";
                animationSourceStickY = "Weapon_Gun_Inertia";
                gunBeg = "Weapon_Gun_Beg";
                gunEnd = "Weapon_Gun_End";
                memoryPointGunnerOutOptics = "Weapon_GunnerView";
                selectionFireAnim = "muzzleFlash";
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
                weapons[] = {"rhs_weap_m240_m1134"};
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
                    "rhs_mag_762x51_M240_200"
                };
                gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                class OpticsIn {};
                class ViewGunner: ViewOptics {
                    initAngleX = -1;
                    initAngleY = 0;
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
                class Hitpoints {
                    class HitTurret_Weapon {
                        armor = -120;
                        minimalHit = -0.13;
                        explosionShielding = 0.5;
                        name = "";
                        visual = "-";
                        armorComponent = "Hit_Turret_Weapon";
                        passThrough = 0;
                    };
                    class HitGun_Weapon {
                        armor = -120;
                        minimalHit = -0.13;
                        explosionShielding = 0.5;
                        name = "";
                        visual = "-";
                        armorComponent = "Hit_Gun_Weapon";
                        passThrough = 0;
                    };
                };
            };
            class CargoTurret_02: CargoTurret_01 {
                dontCreateAI = 0;
                proxyType = "CPCargo";
                gunnerName = "Loader";
                proxyIndex = 1;
                animationSourceHatch = "";
                rhs_hatch = "Hatch_Loader";
                rhs_hatch_control = 1;
                enabledByAnimationSource = "Hatch_Loader";
                gunnerInAction = "RHS_Stryker_M1126_AG_in";
                gunnerAction = "RHS_Stryker_M1126_AG_out";
                class Reflectors {};
            };
        };
        class Hitpoints: HitPoints {
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
            class Hit_Optic_MITAS_Day {
                armor = -40;
                explosionShielding = 0;
                name = "Hit_Optic_MITAS_Day";
                visual = "vis_optic_MITAS_Day";
                armorComponent = "Hit_Optic_MITAS_Day";
                passThrough = 0;
                radius = 0.08;
            };
            class Hit_Optic_MITAS_TI {
                armor = -40;
                explosionShielding = 0;
                name = "Hit_Optic_MITAS_TI";
                visual = "vis_optic_MITAS_TI";
                armorComponent = "Hit_Optic_MITAS_TI";
                passThrough = 0;
                radius = 0.1;
            };
            class Hit_Optic_MITAS_LRF {
                armor = -40;
                explosionShielding = 0;
                name = "Hit_Optic_MITAS_LRF";
                visual = "vis_optic_MITAS_LRF";
                armorComponent = "Hit_Optic_MITAS_LRF";
                passThrough = 0;
                radius = 0.07;
            };
        };
        class AnimationSources: AnimationSources {
            class Unhide_vis_optic_d_MITAS_Day {
                source = "hit";
                hitpoint = "Hit_Optic_MITAS_Day";
            };
            class Unhide_vis_optic_d_MITAS_TI {
                source = "hit";
                hitpoint = "Hit_Optic_MITAS_TI";
            };
            class Unhide_vis_optic_d_MITAS_LRF {
                source = "hit";
                hitpoint = "Hit_Optic_MITAS_LRF";
            };
            class Hatch_Front: Hatch_Front {
                displayName = "";
            };
            class Hatch_Left: Hatch_Left {
                displayName = "";
            };
            class Hatch_Right: Hatch_Right {
                displayName = "";
            };
            class Hide_STORM: Hide_STORM {
                displayName = "";
            };
            class Hide_DUKE: Hide_DUKE {
                initPhase = 1;
            };
            class Weapon_ReloadAnim {
                weapon = "rhs_weap_m240_m1134";
                source = "reload";
            };
            class Weapon_ReloadMagazine {
                weapon = "rhs_weap_m240_m1134";
                source = "reloadmagazine";
            };
            class Weapon_Revolving {
                weapon = "rhs_weap_m240_m1134";
                source = "revolving";
            };
            class Weapon_muzzle_rot_MG {
                weapon = "rhs_weap_m240_m1134";
                source = "ammorandom";
            };
            class Ammo {
                source = "ammo";
                weapon = "rhs_weap_TOW_Launcher";
            };
            class ReloadMagazine {
                source = "reloadmagazine";
                weapon = "rhs_weap_TOW_Launcher";
            };
            class MainTurret_override {
                source = "user";
                animPeriod = 1.1;
                initPhase = 0;
            };
            class MainGun_override {
                source = "user";
                animPeriod = 1.1;
                initPhase = 0;
            };
            class View_CROWS_PIP_move {
                source = "user";
                animPeriod = 1.1;
                initPhase = 0;
            };
            class Mast_Folded {
                displayName = "Fold ATGM mast";
                source = "user";
                animPeriod = 4;
                initPhase = 0;
                sound = "PlowSound";
                soundPosition = "osaveze";
                onPhaseChanged = "[_this # 0,(_this # 1) isEqualTo 1] call rhs_fnc_stryker_m1134_mast";
            };
            class Hatch_Loader: Hatch_Driver {
                displayName = "Open Loader hatch";
                animPeriod = 1.1;
                soundPosition = "hatch_loader_axis";
            };
            class Hit_Turret_Source {
                source = "hit";
                hitpoint = "HitTurret";
            };
        };
        class UserActions: UserActions {
            class AdjustMap: AdjustMap {
                condition = "player == commander this";
            };
            class FoldMast {
                displayName = "Fold ATGM mast";
                position = "pos_driverpos";
                radius = 2;
                showwindow = 0;
                onlyforplayer = 1;
                condition = "((gunner this) isEqualTo (call rhs_fnc_findPlayer)) && {(this animationSourcePhase 'mast_folded') isEqualTo 0};";
                statement = "[this,true] call rhs_fnc_stryker_m1134_mast";
            };
            class UnFoldMast: FoldMast {
                displayName = "Unfold ATGM mast";
                condition = "((gunner this) isEqualTo (call rhs_fnc_findPlayer)) && {(this animationSourcePhase 'mast_folded') isEqualTo 1};";
                statement = "[this,false] call rhs_fnc_stryker_m1134_mast";
            };
            class Use_Weapon {
                displayName = "Use Weapon";
                position = "";
                radius = 4;
                onlyForplayer = 0;
                condition = "this animationSourcePhase 'Hatch_Commander_A' > 0.5 and (this turretUnit [1]) isEqualTo (call rhs_fnc_findPlayer);";
                statement = "[this,'USE_WEAPON'] call rhs_fnc_stryker_m1134_turret";
            };
            class Leave_Weapon: Use_Weapon {
                displayName = "Leave weapon";
                shortcut = "turnIn";
                condition = "(this turretUnit [2]) isEqualTo (call rhs_fnc_findPlayer);";
                statement = "[this,'LEAVE_WEAPON'] call rhs_fnc_stryker_m1134_turret";
            };
        };
        class EventHandlers: EventHandlers {
            class RHSUSF_m1134_EventHandlers {
                init = "_this call rhs_fnc_stryker_m1134_init";
                getout = "_this spawn rhs_fnc_stryker_m1134_turret_getout_eh";
            };
        };
    };
    class rhsusf_stryker_m1134_wd: rhsusf_stryker_m1134_base {
        author = "$STR_RHSUSF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_rifleman_m4";
        rhs_decalParameters[] = {"['Label', 'dec_hull', 'HullDecals_Stryker_WD']"};
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_stryker_m1134_wd.paa";
    };
    class rhsusf_stryker_m1134_d: rhsusf_stryker_m1134_base {
        author = "$STR_RHSUSF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_rifleman_m4";
        rhs_decalParameters[] = {"['Label', 'dec_hull', 'HullDecals_Stryker_WD']"};
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_stryker_m1134_d.paa";
    };
};
class CfgNonAIVehicles {
    class ProxyRetex;
    class Proxyrhsusf_m1126_wheel: ProxyRetex {
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5"};
        model = "\rhsusf\addons\rhsusf_stryker\rhsusf_m1126_wheel.p3d";
    };
};
