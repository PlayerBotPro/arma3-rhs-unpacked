class CfgPatches {
    class rhsusf_c_markvsoc {
        units[] = {"rhsusf_mkvsoc", "Land_MkV_Roadway"};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {"rhsusf_main", "rhsusf_c_troops"};
        name = "Mark V SOC";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        RHS_MKVSOC_Commander = "RHS_MKVSOC_Commander";
        RHS_MKVSOC_Commander02 = "RHS_MKVSOC_Commander02";
        RHS_MKVSOC_Commander03 = "RHS_MKVSOC_Commander03";
        RHS_MKVSOC_Driver = "RHS_MKVSOC_Driver";
        RHS_MKVSOC_Gunner = "RHS_MKVSOC_Gunner";
        RHS_MKVSOC_Gunner02 = "RHS_MKVSOC_Gunner02";
        RHS_MKVSOC_Gunner03 = "RHS_MKVSOC_Gunner03";
        RHS_MKVSOC_Gunner04 = "RHS_MKVSOC_Gunner04";
        RHS_MKVSOC_Cargo = "RHS_MKVSOC_Cargo";
        RHS_MKVSOC_Cargo01 = "RHS_MKVSOC_Cargo01";
        RHS_MKVSOC_Cargo02 = "RHS_MKVSOC_Cargo02";
        RHS_MKVSOC_Cargo03 = "RHS_MKVSOC_Cargo03";
        RHS_MKVSOC_Cargo04 = "RHS_MKVSOC_Cargo04";
        RHS_MKVSOC_Cargo05 = "RHS_MKVSOC_Cargo05";
        RHS_MKVSOC_Cargo06 = "RHS_MKVSOC_Cargo06";
        RHS_MKVSOC_Cargo07 = "RHS_MKVSOC_Cargo07";
        RHS_MKVSOC_Cargo08 = "RHS_MKVSOC_Cargo08";
        RHS_MKVSOC_Cargo09 = "RHS_MKVSOC_Cargo09";
        RHS_MKVSOC_Cargo010 = "RHS_MKVSOC_Cargo010";
        RHS_MKVSOC_Cargo011 = "RHS_MKVSOC_Cargo011";
        RHS_MKVSOC_Cargo012 = "RHS_MKVSOC_Cargo012";
        RHS_MKVSOC_Cargo013 = "RHS_MKVSOC_Cargo013";
        RHS_MKVSOC_Cargo014 = "RHS_MKVSOC_Cargo014";
        RHS_MKVSOC_Cargo015 = "RHS_MKVSOC_Cargo015";
        RHS_MKVSOC_Cargo016 = "RHS_MKVSOC_Cargo016";
        RHS_MKVSOC_Cargo017 = "RHS_MKVSOC_Cargo017";
        RHS_MKVSOC_Cargo018 = "RHS_MKVSOC_Cargo018";
        RHS_MKVSOC_Cargo019 = "RHS_MKVSOC_Cargo019";
        RHS_MKVSOC_Cargo020 = "RHS_MKVSOC_Cargo020";
        RHS_MKVSOC_Cargo021 = "RHS_MKVSOC_Cargo021";
        RHS_MKVSOC_Cargo022 = "RHS_MKVSOC_Cargo022";
        RHS_MKVSOC_Cargo023 = "RHS_MKVSOC_Cargo023";
        RHS_MKVSOC_Cargo024 = "RHS_MKVSOC_Cargo024";
        RHS_MKVSOC_Cargo025 = "RHS_MKVSOC_Cargo025";
        RHS_MKVSOC_Cargo026 = "RHS_MKVSOC_Cargo026";
    };
    class Actions {
        class FFV_BaseActions;
        class passenger_flatground_3Actions;
        class RHS_MKVSOC_cargo019Actions: passenger_flatground_3Actions {
            default = "RHS_MKVSOC_Cargo019";
            Stand = "RHS_MKVSOC_Cargo019";
        };
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class KIA_RHS_MKVSOC_Commander: DefaultDie {
            file = "\rhsusf\addons\rhsusf_markvsoc\data\Anim\KIA_MKVSOC_Commander.rtm";
            actions = "DeadActions";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_MKVSOC_Commander: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Commander.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Commander", 1};
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {1};
            leftLegIKCurve[] = {1};
            rightLegIKCurve[] = {1};
        };
        class KIA_RHS_MKVSOC_Commander02: DefaultDie {
            file = "\rhsusf\addons\rhsusf_markvsoc\data\Anim\KIA_MKVSOC_Commander.rtm";
            actions = "DeadActions";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_MKVSOC_Commander02: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Commander", 1};
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
            leftLegIKCurve[] = {0};
            rightLegIKCurve[] = {0};
        };
        class KIA_RHS_MKVSOC_Commander03: DefaultDie {
            file = "\rhsusf\addons\rhsusf_markvsoc\data\Anim\KIA_MKVSOC_Commander.rtm";
            actions = "DeadActions";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_MKVSOC_Commander03: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Commander", 1};
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
            leftLegIKCurve[] = {0};
            rightLegIKCurve[] = {0};
        };
        class KIA_RHS_MKVSOC_Driver: DefaultDie {
            file = "\rhsusf\addons\rhsusf_markvsoc\data\Anim\KIA_MKVSOC_Driver.rtm";
            actions = "DeadActions";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_MKVSOC_Driver: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Driver.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Driver", 1};
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {0};
            leftLegIKCurve[] = {1};
            rightLegIKCurve[] = {1};
        };
        class KIA_RHS_MKVSOC_Gunner: DefaultDie {
            file = "\A3\boat_f\Data\Anim\Zodiac_Cargo_2_KIA.rtm";
            actions = "DeadActions";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_MKVSOC_Gunner: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Gunner.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Gunner", 1};
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {1};
            leftLegIKCurve[] = {1};
            rightLegIKCurve[] = {1};
        };
        class RHS_MKVSOC_Gunner02: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Gunner_m134.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Gunner", 1};
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {1};
            leftLegIKCurve[] = {1};
            rightLegIKCurve[] = {1};
        };
        class RHS_MKVSOC_Gunner03: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Gunner.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Gunner", 1};
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {1};
            leftLegIKCurve[] = {1};
            rightLegIKCurve[] = {1};
        };
        class RHS_MKVSOC_Gunner04: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Gunner.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Gunner", 1};
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {1};
            leftLegIKCurve[] = {1};
            rightLegIKCurve[] = {1};
        };
        class KIA_RHS_MKVSOC_Cargo: DefaultDie {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
            actions = "DeadActions";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_MKVSOC_Cargo: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
        };
        class RHS_MKVSOC_Cargo01: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo1.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
        };
        class RHS_MKVSOC_Cargo02: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
        };
        class RHS_MKVSOC_Cargo03: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
        };
        class RHS_MKVSOC_Cargo04: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
        };
        class RHS_MKVSOC_Cargo05: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
        };
        class RHS_MKVSOC_Cargo06: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
        };
        class RHS_MKVSOC_Cargo07: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
        };
        class RHS_MKVSOC_Cargo08: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
        };
        class RHS_MKVSOC_Cargo09: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
        };
        class RHS_MKVSOC_Cargo010: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
        };
        class RHS_MKVSOC_Cargo011: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
        };
        class RHS_MKVSOC_Cargo012: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
        };
        class RHS_MKVSOC_Cargo013: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
        };
        class RHS_MKVSOC_Cargo014: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
        };
        class RHS_MKVSOC_Cargo015: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo_fp_standOff.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
        };
        class RHS_MKVSOC_Cargo016: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo_fr_standOff.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
        };
        class RHS_MKVSOC_Cargo017: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo_fs_standOff.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
        };
        class RHS_MKVSOC_Cargo018: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo_rs_standOff.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
        };
        class RHS_MKVSOC_Cargo019: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_FFV_p_cabin.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
            speed = -1.5;
            looped = 0;
            connectTo[] = {"passenger_flatground_crosslegs", 1};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class RHS_MKVSOC_Cargo020: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo_FFV_fs.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
        };
        class RHS_MKVSOC_Cargo021: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo_FFV_rp.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
        };
        class RHS_MKVSOC_Cargo022: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo_FFV_rs.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
        };
        class RHS_MKVSOC_Cargo023: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo_FFV_bow_p.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
        };
        class RHS_MKVSOC_Cargo024: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo_FFV_bow_s.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
        };
        class RHS_MKVSOC_Cargo025: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo_sprt_deck_pr.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
        };
        class RHS_MKVSOC_Cargo026: Crew {
            file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo_sprt_deck_sr.rtm";
            interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo", 1};
        };
    };
};
class CfgMovesWomen: CfgMovesBasic {
    class DefaultDie;
    class ManActions {};
};
class CfgFunctions {
    class RHSUSF {
        tag = "RHSUSF";
        class Functions {
            class markvsoc_init {
                file = "\rhsusf\addons\rhsusf_c_markvsoc\scripts\init.sqf";
                description = "Mark V SOC init";
            };
            class markvsoc_deleteRoadway {
                file = "\rhsusf\addons\rhsusf_c_markvsoc\scripts\deleteRoadway.sqf";
                description = "Mark V SOC curator workaround";
            };
            class markvsoc_getIn {
                file = "\rhsusf\addons\rhsusf_c_markvsoc\scripts\getin.sqf";
                description = "Mark V SOC get on deck workaround";
            };
            class markvsoc_openMenu {
                file = "\rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_menuInit.sqf";
                description = "Mark V SOC curator workaround";
            };
            class markvsoc_setOption {
                file = "\rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_setOption.sqf";
                description = "Mark V SOC curator workaround";
            };
            class markvsoc_attachBoats {
                file = "\rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_attachBoats.sqf";
                description = "Mark V SOC Loading menu";
            };
            class markvsoc_loadMenuInit {
                file = "\rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_loadMenuInit.sqf";
                description = "Mark V SOC Loading menu";
            };
            class markvsoc_loadBoat {
                file = "\rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_loadBoat.sqf";
                description = "Mark V SOC Loading menu";
            };
            class markvsoc_loadAction {
                file = "\rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_loadAction.sqf";
                description = "Mark V SOC Loading menu";
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
class RscControlsGroup;
class RscControlsGroupNoScrollbars;
class rhs_markv_button_base {
    access = 0;
    type = 1;
    text = "";
    colorText[] = {1, 1, 1, 1};
    colorDisabled[] = {1, 1, 1, 0};
    colorBackground[] = {0, 0, 0, 0};
    colorBackgroundDisabled[] = {0, 0, 0, 0};
    colorBackgroundActive[] = {0, 0, 0, 0};
    colorFocused[] = {0, 0, 0, 0};
    colorShadow[] = {0, 0, 0, 0};
    colorBorder[] = {0, 0, 0, 0};
    soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter", 0.09, 1};
    soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush", 0.09, 1};
    soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick", 0, 1};
    soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape", 0.09, 1};
    style = 2;
    x = 0;
    y = 0;
    w = "<null>";
    h = "<null>";
    shadow = 2;
    font = "PuristaMedium";
    sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
    borderSize = 0;
    offsetX = 0;
    offsetY = 0;
    offsetPressedX = 0;
    offsetPressedY = 0;
    period = 1.2;
    periodFocus = 1.2;
    periodOver = 1.2;
};
class RHS_MarkV_UI {
    enableSimulation = 1;
    idd = 101;
    movingenable = 0;
    class Controls {
        class rhs_markv_button: rhs_markv_button_base {
            idc = 1;
            soundClick[] = {"rhsusf\addons\rhsusf_optics\scripts\us_komp\sounds\button.wav", 0.89, 1};
            x = "0.477965 * safezoneW + safezoneX";
            y = "0.415365 * safezoneH + safezoneY";
            w = 0;
            h = 0;
        };
        class switch_display: rhs_markv_button {
            idc = 6001;
            x = "0.413445 * safezoneW + safezoneX";
            y = "0.477431 * safezoneH + safezoneY";
            w = "0.0396638 * safezoneW";
            h = "0.0752314 * safezoneH";
            tooltip = "Displays ON/OFF";
            action = "[7001,'c_displays_off_source',1] call rhsusf_fnc_markvsoc_setOption";
        };
        class switch_eng_sys: rhs_markv_button {
            idc = 6002;
            x = "0.394318 * safezoneW + safezoneX";
            y = "0.568461 * safezoneH + safezoneY";
            w = "0.0396638 * safezoneW";
            h = "0.0752314 * safezoneH";
            tooltip = "Engine systems displays ON/OFF";
            action = "[7002,'c_eng_ctrl_off_source',1] call rhsusf_fnc_markvsoc_setOption";
        };
        class switch_illum: rhs_markv_button {
            idc = 6003;
            x = "0.307586 * safezoneW + safezoneX";
            y = "0.50489 * safezoneH + safezoneY";
            w = "0.0412267 * safezoneW";
            h = "0.0733788 * safezoneH";
            tooltip = "Lights";
            action = "[7003,'',2] call rhsusf_fnc_markvsoc_setOption";
        };
        class switch_nav: rhs_markv_button {
            idc = 6004;
            x = "0.56972 * safezoneW + safezoneX";
            y = "0.318316 * safezoneH + safezoneY";
            w = "0.0412267 * safezoneW";
            h = "0.0733788 * safezoneH";
            tooltip = "Navigation Light";
            action = "[7004,'rL_nav_source'] call rhsusf_fnc_markvsoc_setOption";
        };
        class switch_night: rhs_markv_button {
            idc = 6005;
            x = "0.639088 * safezoneW + safezoneX";
            y = "0.317564 * safezoneH + safezoneY";
            w = "0.0412267 * safezoneW";
            h = "0.0733788 * safezoneH";
            tooltip = "OP Lights: Night";
            action = "[7005,'rL_opR_source'] call rhsusf_fnc_markvsoc_setOption";
        };
        class switch_dive: rhs_markv_button {
            idc = 6006;
            x = "0.569279 * safezoneW + safezoneX";
            y = "0.439627 * safezoneH + safezoneY";
            w = "0.0412267 * safezoneW";
            h = "0.0733788 * safezoneH";
            tooltip = "Dive Beacons";
            action = "[7006,'Beacons'] call rhsusf_fnc_markvsoc_setOption";
        };
        class switch_horiz: rhs_markv_button {
            idc = 6007;
            x = "0.639617 * safezoneW + safezoneX";
            y = "0.439815 * safezoneH + safezoneY";
            w = "0.0412267 * safezoneW";
            h = "0.0733788 * safezoneH";
            tooltip = "OP Lights: Horizon";
            action = "[7007,'rL_opT_source'] call rhsusf_fnc_markvsoc_setOption";
        };
        class switch_spot: rhs_markv_button {
            idc = 6008;
            x = "0.601363 * safezoneW + safezoneX";
            y = "0.624696 * safezoneH + safezoneY";
            w = "0.0396638 * safezoneW";
            h = "0.0752314 * safezoneH";
            tooltip = "Spot light ON/OFF";
            action = "[7008,'rL_remSpot_source',1] call rhsusf_fnc_markvsoc_setOption";
        };
        class switch_instr: rhs_markv_button {
            idc = 6009;
            x = "0.602156 * safezoneW + safezoneX";
            y = "0.549841 * safezoneH + safezoneY";
            w = "0.0396638 * safezoneW";
            h = "0.0752314 * safezoneH";
            tooltip = "Instruments illumination  ON/OFF";
            action = "[7009,'c_instr_off_source',1] call rhsusf_fnc_markvsoc_setOption";
        };
        class background: RscPicture {
            idc = 1200;
            text = "rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_console_co.paa";
            x = "0.182689 * safezoneW + safezoneX";
            y = "0.199074 * safezoneH + safezoneY";
            w = "0.608179 * safezoneW";
            h = "0.564236 * safezoneH";
        };
        class wylacznik_l_1: background {
            idc = 1205;
            text = "#(argb,8,8,3)color(0.43,0.5,0.45,0.81)";
            x = "0.312963 * safezoneW + safezoneX";
            y = "0.300825 * safezoneH + safezoneY";
            w = "0.0326521 * safezoneW";
            h = "0.0593433 * safezoneH";
        };
        class wylacznik_l_2: wylacznik_l_1 {
            idc = 1206;
            x = "0.355712 * safezoneW + safezoneX";
            y = "0.300825 * safezoneH + safezoneY";
            w = "0.0326521 * safezoneW";
            h = "0.0593433 * safezoneH";
        };
        class wylacznik_l_3: wylacznik_l_1 {
            idc = 1204;
            x = "0.312522 * safezoneW + safezoneX";
            y = "0.386965 * safezoneH + safezoneY";
            w = "0.0326521 * safezoneW";
            h = "0.0593433 * safezoneH";
        };
        class wylacznik_l_4: wylacznik_l_1 {
            idc = 1201;
            x = "0.356152 * safezoneW + safezoneX";
            y = "0.387153 * safezoneH + safezoneY";
            w = "0.0316102 * safezoneW";
            h = "0.0593433 * safezoneH";
        };
        class wylacznik_s_1: wylacznik_l_1 {
            idc = 1207;
            x = "0.42186 * safezoneW + safezoneX";
            y = "0.301769 * safezoneH + safezoneY";
            w = "0.0326521 * safezoneW";
            h = "0.0593433 * safezoneH";
        };
        class wylacznik_s_2: wylacznik_l_1 {
            idc = 1208;
            x = "0.465619 * safezoneW + safezoneX";
            y = "0.302695 * safezoneH + safezoneY";
            w = "0.0326521 * safezoneW";
            h = "0.0593433 * safezoneH";
        };
        class wylacznik_s_3: wylacznik_l_1 {
            idc = 1209;
            x = "0.508856 * safezoneW + safezoneX";
            y = "0.301769 * safezoneH + safezoneY";
            w = "0.0326521 * safezoneW";
            h = "0.0593433 * safezoneH";
        };
        class wylacznik_s_4: wylacznik_l_1 {
            idc = 1210;
            x = "0.422902 * safezoneW + safezoneX";
            y = "0.382358 * safezoneH + safezoneY";
            w = "0.0326521 * safezoneW";
            h = "0.0593433 * safezoneH";
        };
        class wylacznik_illum: wylacznik_l_1 {
            idc = 1203;
            x = "0.311993 * safezoneW + safezoneX";
            y = "0.60175 * safezoneH + safezoneY";
            w = "0.0316102 * safezoneW";
            h = "0.0593433 * safezoneH";
        };
        class switch_display_img: RscPicture {
            idc = 7001;
            text = "rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_switch_rubber_off.paa";
            x = "0.413445 * safezoneW + safezoneX";
            y = "0.477431 * safezoneH + safezoneY";
            w = "0.0396638 * safezoneW";
            h = "0.0752314 * safezoneH";
            tooltip = "Displays ON/OFF";
        };
        class switch_eng_sys_img: switch_display_img {
            idc = 7002;
            text = "rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_switch_rubber_off.paa";
            x = "0.394318 * safezoneW + safezoneX";
            y = "0.568461 * safezoneH + safezoneY";
            w = "0.0396638 * safezoneW";
            h = "0.0752314 * safezoneH";
            tooltip = "Engine systems displays ON/OFF";
        };
        class switch_illum_img: switch_display_img {
            idc = 7003;
            text = "rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_switch_off.paa";
            x = "0.307586 * safezoneW + safezoneX";
            y = "0.50489 * safezoneH + safezoneY";
            w = "0.0412267 * safezoneW";
            h = "0.0733788 * safezoneH";
            tooltip = "Lights";
        };
        class switch_nav_img: switch_display_img {
            idc = 7004;
            text = "rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_switch_off.paa";
            x = "0.56972 * safezoneW + safezoneX";
            y = "0.318316 * safezoneH + safezoneY";
            w = "0.0412267 * safezoneW";
            h = "0.0733788 * safezoneH";
            tooltip = "Navigation Light";
        };
        class switch_night_img: switch_display_img {
            idc = 7005;
            text = "rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_switch_off.paa";
            x = "0.639088 * safezoneW + safezoneX";
            y = "0.317564 * safezoneH + safezoneY";
            w = "0.0412267 * safezoneW";
            h = "0.0733788 * safezoneH";
            tooltip = "OP Lights_img: Night";
        };
        class switch_dive_img: switch_display_img {
            idc = 7006;
            text = "rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_switch_off.paa";
            x = "0.569279 * safezoneW + safezoneX";
            y = "0.439627 * safezoneH + safezoneY";
            w = "0.0412267 * safezoneW";
            h = "0.0733788 * safezoneH";
            tooltip = "Dive Beacons";
        };
        class switch_horiz_img: switch_display_img {
            idc = 7007;
            text = "rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_switch_off.paa";
            x = "0.639617 * safezoneW + safezoneX";
            y = "0.439815 * safezoneH + safezoneY";
            w = "0.0412267 * safezoneW";
            h = "0.0733788 * safezoneH";
            tooltip = "OP Lights_img: Horizon";
        };
        class switch_spot_img: switch_display_img {
            idc = 7008;
            text = "rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_switch_rubber_off.paa";
            x = "0.601363 * safezoneW + safezoneX";
            y = "0.624696 * safezoneH + safezoneY";
            w = "0.0396638 * safezoneW";
            h = "0.0752314 * safezoneH";
            tooltip = "Spot light ON/OFF";
        };
        class switch_instr_img: switch_display_img {
            idc = 7009;
            text = "rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_switch_rubber_off.paa";
            x = "0.602156 * safezoneW + safezoneX";
            y = "0.549841 * safezoneH + safezoneY";
            w = "0.0396638 * safezoneW";
            h = "0.0752314 * safezoneH";
            tooltip = "Instruments illumination  ON/OFF";
        };
    };
};
class RHS_MarkV_LoadBoat_UI {
    enableSimulation = 1;
    idd = 101;
    movingenable = 0;
    class Controls {
        class MarkV_LoadButton: RscButton {
            idc = 1600;
            text = "Load boat";
            x = "0.389823 * safezoneW + safezoneX";
            y = "0.791522 * safezoneH + safezoneY";
            w = "0.189505 * safezoneW";
            h = "0.0470196 * safezoneH";
            action = "[4] call rhsusf_fnc_markvsoc_loadAction";
        };
        class MarkV_LoadButton_Switch: MarkV_LoadButton {
            idc = 1601;
            text = "Switch to unload mode";
            x = "0.389823 * safezoneW + safezoneX";
            y = "0.735098 * safezoneH + safezoneY";
            w = "0.189505 * safezoneW";
            h = "0.0470196 * safezoneH";
            action = "[3] call rhsusf_fnc_markvsoc_loadAction";
        };
        class MarkV_button1: RscButton {
            idc = 2400;
            text = "";
            x = "0.367787 * safezoneW + safezoneX";
            y = "0.349537 * safezoneH + safezoneY";
            w = "0.185098 * safezoneW";
            h = "0.21629 * safezoneH";
            colorBackground[] = {-1, -1, -1, 0};
            colorBackgroundActive[] = {-1, -1, -1, 0};
            colorBackgroundDisabled[] = {-1, -1, -1, 0};
            colorActive[] = {-1, -1, -1, 0};
            colorFocused[] = {-1, -1, -1, 0};
            colorShadow[] = {-1, -1, -1, 0};
            colorBorder[] = {-1, -1, -1, 0};
            colorDisabled[] = {-1, -1, -1, 0};
            action = "[1] call rhsusf_fnc_markvsoc_loadAction";
        };
        class MarkV_button2: MarkV_button1 {
            idc = 2401;
            text = "";
            x = "0.200318 * safezoneW + safezoneX";
            y = "0.349537 * safezoneH + safezoneY";
            w = "0.154248 * safezoneW";
            h = "0.21629 * safezoneH";
            action = "[2] call rhsusf_fnc_markvsoc_loadAction";
        };
    };
};
class DefaultEventhandlers;
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
class RCWSOptics;
class CfgVehicles {
    class All;
    class AllVehicles: All {
        class ViewOptics;
    };
    class Ship: AllVehicles {
        class MarkerLights;
        class ViewPilot;
    };
    class Ship_F: Ship {};
    class RHS_Ship: Ship_F {
        class NewTurret;
        class Turrets {};
        class CargoTurret;
        author = "AlphaSquad DEVGRU";
        unitInfoType = "UnitInfoShip";
        memoryPointsLeftEngineEffect = "EngineEffectL";
        memoryPointsRightEngineEffect = "EngineEffectR";
        class Components;
    };
    class rhsusf_mkvsoc: RHS_Ship {
        dlc = "RHS_USAF";
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_mkvsoc.paa";
        scope = 2;
        author = "Hatchet_AS";
        displayName = "Mk.V SOC";
        side = 1;
        faction = "rhs_faction_socom";
        vehicleClass = "Ship";
        editorSubcategory = "EdSubcat_Boats";
        model = "\rhsusf\addons\rhsusf_markvsoc\mkvsoc.p3d";
        picture = "\A3\boat_f\Boat_Armed_01\data\ui\Boat_Armed_01_base.paa";
        Icon = "\A3\boat_f\Boat_Armed_01\data\ui\map_boat_armed_01.paa";
        nameSound = "veh_ship_attackBoat_s";
        textSingular = "$STR_A3_nameSound_veh_ship_attackBoat_s";
        textPlural = "$STR_A3_nameSound_veh_ship_attackBoat_p";
        mapSize = 22;
        canFloat = 0;
        type = 1;
        armor = 600;
        canBeShot = 1;
        enableManualFire = 0;
        extCameraPosition[] = {0, 2.5, -25};
        fuelCapacity = 1000;
        hideProxyInCombat = 0;
        precision = 80;
        secondaryExplosion = -1;
        sensitivity = 2;
        memoryPointCommonDamage = "zamerny";
        driveOnComponent[] = {"Slide"};
        accuracy = 0.6;
        camouflage = 3;
        cost = 500000;
        threat[] = {1, 0.6, 0.6};
        htMin = 60;
        htMax = 1800;
        afMax = 100;
        mfMax = 80;
        mFact = 1;
        tBody = 150;
        crew = "rhsusf_socom_swcc_officer";
        typicalCargo[] = {
            "rhsusf_socom_swcc_crewman",
            "rhsusf_socom_swcc_crewman",
            "rhsusf_socom_swcc_crewman",
            "rhsusf_socom_swcc_crewman"
        };
        crewCrashProtection = 0.1;
        ejectDamageLimit = 0.9;
        unloadInCombat = 0;
        hasCommander = 1;
        commanderAction = "RHS_MKVSOC_Commander";
        commanderCanSee = "1+2+4+8+16";
        hideWeaponsCommander = 1;
        showNVGCommander = 1;
        commanderOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
        hasdriver = 1;
        driverAction = "RHS_MKVSOC_Driver";
        driverisCommander = 0;
        driverCanSee = "1+2+8+16";
        hideWeaponsDriver = 1;
        castDriverShadow = 1;
        showNVGDriver = 1;
        driverLeftHandAnimName = "drv_hand_l";
        driverRightHandAnimName = "drv_hand_r";
        driverLeftLegAnimName = "drv_leg_l";
        driverRightLegAnimName = "drv_leg_r";
        hasGunner = 1;
        gunneriscommander = 0;
        gunnerCanSee = "1+4+8+16";
        hideWeaponsGunner = 1;
        showNVGGunner = 1;
        cargoAction[] = {
            "RHS_MKVSOC_Cargo01",
            "RHS_MKVSOC_Cargo02",
            "RHS_MKVSOC_Cargo03",
            "RHS_MKVSOC_Cargo04",
            "RHS_MKVSOC_Cargo05",
            "RHS_MKVSOC_Cargo06",
            "RHS_MKVSOC_Cargo07",
            "RHS_MKVSOC_Cargo08",
            "RHS_MKVSOC_Cargo09",
            "RHS_MKVSOC_Cargo010",
            "RHS_MKVSOC_Cargo011",
            "RHS_MKVSOC_Cargo012",
            "RHS_MKVSOC_Cargo013",
            "RHS_MKVSOC_Cargo014",
            "RHS_MKVSOC_Cargo015",
            "RHS_MKVSOC_Cargo016",
            "RHS_MKVSOC_Cargo017",
            "RHS_MKVSOC_Cargo018",
            "RHS_MKVSOC_Cargo019",
            "RHS_MKVSOC_Cargo020",
            "RHS_MKVSOC_Cargo021",
            "RHS_MKVSOC_Cargo022",
            "RHS_MKVSOC_Cargo023",
            "RHS_MKVSOC_Cargo024",
            "RHS_MKVSOC_Cargo025",
            "RHS_MKVSOC_Cargo026"
        };
        hideWeaponsCargo = 1;
        castCargoShadow = 1;
        showNVGCargo[] = {1};
        supplyRadius = 0;
        transportAmmo = 0;
        transportSoldier = 26;
        transportVehiclesCount = 0;
        maximumLoad = 3000;
        getInRadius = 10;
        getInAction = "GetInLow";
        getOutAction = "GetOutLow";
        cargoGetInAction[] = {"GetInLow"};
        cargoGetOutAction[] = {"GetOutLow"};
        memoryPointsGetInDriver = "driver_pos";
        memoryPointsGetInDriverDir = "driver_dir";
        memoryPointsGetInCargo = "cargo_pos";
        memoryPointsGetInCargoDir = "cargo_dir";
        memoryPointsGetInGunner = "gunner_pos";
        memoryPointsGetInGunnerDir = "gunner_dir";
        memoryPointsGetInCommander = "comm_pos";
        memoryPointsGetInCommanderDir = "comm_dir";
        LockDetectionSystem = "8 + 4";
        incomingMissileDetectionSystem = 16;
        irTarget = 1;
        irTargetSize = 1.7;
        visualTarget = 1;
        visualTargetSize = 1.8;
        radarTarget = 1;
        radarTargetSize = 1.5;
        enableGPS = 1;
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
                        class AirTarget {
                            minRange = 11000;
                            maxRange = 11000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 11000;
                            maxRange = 11000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = -1;
                        angleRangeHorizontal = 360;
                        angleRangeVertical = 20;
                        typeRecognitionDistance = 4000;
                        maxFogSeeThrough = 1;
                        maxTrackableATL = 100;
                        maxTrackableSpeed = 75;
                    };
                };
            };
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
                        range[] = {8000, 16000, 4000};
                        resource = "RscCustomInfoSensors";
                    };
                };
            };
            class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                defaultDisplay = "SensorDisplay";
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
                        range[] = {8000, 16000, 4000};
                        resource = "RscCustomInfoSensors";
                    };
                };
            };
        };
        smokeLauncherGrenadeCount = 8;
        smokeLauncherVelocity = 75;
        smokeLauncherOnTurret = 0;
        smokeLauncherAngle = 360;
        weapons[] = {};
        magazines[] = {};
        memoryPointCM[] = {"cm_port", "cm_stbd"};
        memoryPointCMDir[] = {"cm_port_dir", "cm_stbd_dir"};
        predictTurnSimul = 0.95;
        predictTurnPlan = 0.75;
        steerAheadSimul = 0.95;
        steerAheadPlan = 0.75;
        brakeDistance = 5;
        simulation = "shipx";
        waterLeakiness = 95.5;
        waterLinearDampingCoefY = 1.65;
        waterLinearDampingCoefX = 1.15;
        waterAngularDampingCoef = 1.125;
        turnCoef = 0.5;
        waterResistanceCoef = 0.0024;
        rudderForceCoef = 0.825;
        rudderForceCoefAtMaxSpeed = 0.155;
        torqueCurve[] = {
            {0.3, 0.8500307},
            {0.4, 0.95003074},
            {0.5, 1},
            {0.6, 0.95003074},
            {0.7, 0.8500307},
            {0.8, 0.65003073},
            {0.9, 0.5500307},
            {1, 0.41001844}
        };
        maxOmega = 209.44;
        enginePower = 3908;
        peakTorque = 16270;
        idleRPM = 600;
        redRPM = 2000;
        maxSpeed = 115;
        minSpeed = -25;
        engineShiftY = 1.125;
        thrustDelay = 1.175;
        overSpeedBrakeCoef = 0.01;
        slowSpeedForwardCoef = 0.275;
        normalSpeedForwardCoef = 0.675;
        class complexGearbox {
            GearboxRatios[] = {"R1", -7.625, "N", 0, "D1", 1.97};
            TransmissionRatios[] = {"High", 1};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        leftFastWaterEffect = "LFastWaterEffects";
        rightFastWaterEffect = "RFastWaterEffects";
        waterEffectSpeed = 10;
        engineEffectSpeed = 1;
        waterFastEffectSpeed = 1;
        memoryPointExhaust = "eng_1_exh";
        memoryPointExhaustDir = "eng_1_exh_dir";
        memoryPointsLeftWaterEffect = "waterEffectLeft";
        memoryPointsRightWaterEffect = "waterEffectRight";
        class AnimationSources {
            class mL_pos_port_source {
                source = "markerLight";
                markerLight = "mL_pos_port";
            };
            class mL_pos_stbd_source {
                source = "markerLight";
                markerLight = "mL_pos_stbd";
            };
            class mL_pos_aft_source {
                source = "markerLight";
                markerLight = "mL_pos_aft";
            };
            class rL_nav_source {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
            };
            class rL_remSpot_source {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
            };
            class c_displays_off_source {
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
            };
            class c_eng_ctrl_off_source {
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
            };
            class c_instr_off_source {
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
            };
            class rL_opR_source {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
            };
            class rL_opT_source {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
            };
            class Beacons {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
            };
            class m2_p_muzzle_source {
                source = "reload";
                weapon = "RHS_MKV_M2_p";
            };
            class m2_p_reloadMagazine: m2_p_muzzle_source {
                source = "reloadMagazine";
            };
            class m2_p_muzzle_source_rot: m2_p_muzzle_source {
                source = "ammorandom";
            };
            class m2_s_muzzle_source {
                source = "reload";
                weapon = "RHS_MKV_M2_s";
            };
            class m2_s_reloadMagazine: m2_s_muzzle_source {
                source = "reloadMagazine";
            };
            class m2_s_muzzle_source_rot: m2_s_muzzle_source {
                source = "ammorandom";
            };
            class m134_p_muzzle_source {
                source = "reload";
                weapon = "RHS_MKV_M134";
            };
            class m134_p_muzzle_source_rot: m134_p_muzzle_source {
                source = "ammorandom";
            };
            class m134_p_revolving_source: m134_p_muzzle_source {
                source = "revolving";
            };
            class mk19_s_muzzle_source {
                source = "reload";
                weapon = "RHS_MKV_MK19";
            };
            class mk19_s_muzzle_source_rot {
                source = "ammorandom";
                weapon = "RHS_MKV_MK19";
            };
            class attach_load_1 {
                source = "user";
                animPeriod = 6;
                initPhase = 0;
            };
            class attach_load_2: attach_load_1 {};
            class attach_load_3: attach_load_1 {
                animPeriod = 3;
            };
            class attach_load_4: attach_load_1 {};
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_markvsoc\data\mkvsoc_hull.rvmat",
                "rhsusf\addons\rhsusf_markvsoc\data\mkvsoc_hull_d.rvmat",
                "rhsusf\addons\rhsusf_markvsoc\data\rhs_destr_mkvsoc.rvmat",
                "rhsusf\addons\rhsusf_markvsoc\data\RHIB.rvmat",
                "rhsusf\addons\rhsusf_markvsoc\data\RHIB_d.rvmat",
                "rhsusf\addons\rhsusf_markvsoc\data\rhs_destr_mkvsoc.rvmat"
            };
        };
        class EventHandlers: DefaultEventhandlers {
            class rhs_markvsoc_eh {};
        };
        class Exhausts {
            class Exhaust1 {
                position = "eng_1_exh";
                direction = "eng_1_exh_dir";
                effect = "ExhaustsEffectBig";
            };
            class Exhaust2 {
                position = "eng_2_exh";
                direction = "eng_2_exh_dir";
                effect = "ExhaustsEffectBig";
            };
        };
        class Library {
            libTextDesc = "MKVLIB";
        };
        class MarkerLights {
            class mL_pos_port {
                color[] = {0.8, 0, 0};
                ambient[] = {0.08, 0, 0};
                intensity = 100;
                name = "mL_pos_port";
                drawLight = 1;
                drawLightSize = 1.2;
                drawLightCenterSize = 0.1;
                activeLight = 0;
                blinking = 0;
                dayLight = 0;
                useFlare = 0;
            };
            class mL_pos_stbd: mL_pos_port {
                color[] = {0, 0.8, 0};
                ambient[] = {0, 0.08, 0};
                name = "mL_pos_stbd";
            };
            class mL_pos_aft {
                color[] = {0.8, 0.8, 0.8};
                ambient[] = {0.08, 0.08, 0.08};
                intensity = 100;
                name = "mL_pos_aft";
                drawLight = 1;
                drawLightSize = 1.2;
                drawLightCenterSize = 0.1;
                activeLight = 0;
                blinking = 0;
                dayLight = 0;
                useFlare = 0;
            };
        };
        class Reflectors {
            class rL_nav {
                color[] = {1900, 1800, 1700};
                ambient[] = {5, 5, 5};
                position = "axis_rL_nav";
                direction = "axis_rL_nav_dir";
                hitpoint = "rL_nav_illum";
                selection = "rL_nav_illum";
                size = 5;
                innerAngle = 10;
                outerAngle = 25;
                coneFadeCoef = 3;
                intensity = 1500;
                useFlare = 1;
                dayLight = 0;
                flareSize = 1;
                flareMaxDistance = 350;
                class Attenuation {
                    start = 1;
                    constant = 0;
                    linear = 0.1;
                    quadratic = 0;
                    hardLimitStart = 150;
                    hardLimitEnd = 300;
                };
            };
            class rL_rem_spot {
                color[] = {1900, 1800, 1700};
                ambient[] = {10, 9, 8};
                position = "axis_remSpot_pos";
                direction = "axis_remSpot_dir";
                hitpoint = "rL_remSpot_illum";
                selection = "rL_remSpot_illum";
                size = 5;
                innerAngle = 2;
                outerAngle = 6;
                coneFadeCoef = 1;
                intensity = 5000;
                useFlare = 1;
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
            class rL_opR_boom {
                color[] = {15000, 100, 100};
                ambient[] = {15, 1, 1};
                intensity = 3;
                size = 1;
                innerAngle = 45;
                outerAngle = 120;
                coneFadeCoef = 5;
                position = "axis_rL_opR_boom_pos";
                direction = "axis_rL_opR_boom_dir";
                hitpoint = "rL_op_red_illum";
                selection = "rL_op_red_illum";
                useFlare = 0;
                flareSize = 0.65;
                flareMaxDistance = 20;
                dayLight = 0;
                blinking = 0;
                class Attenuation {
                    start = 2;
                    constant = 0;
                    linear = 1;
                    quadratic = 50;
                    hardLimitStart = 3;
                    hardLimitEnd = 75;
                };
            };
            class rL_opR_cabin {
                color[] = {1800, 0, 0};
                ambient[] = {5, 0, 0};
                intensity = 11;
                size = 1;
                innerAngle = 90;
                outerAngle = 165;
                coneFadeCoef = 1;
                position = "axis_rL_opR_cabin_pos";
                direction = "axis_rL_opR_cabin_dir";
                hitpoint = "rL_op_red_illum";
                selection = "rL_op_red_illum";
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
                    hardLimitStart = 0;
                    hardLimitEnd = 3;
                };
            };
            class rL_opR_cabin2: rL_opR_cabin {
                position = "axis_rL_opR_cabin2_pos";
                direction = "axis_rL_opR_cabin2_dir";
                hitpoint = "rL_op_red_illum";
                selection = "rL_op_red_illum";
            };
            class rL_opT_boom {
                color[] = {1875, 2475, 2175};
                ambient[] = {5, 5, 5};
                position = "axis_rL_opT_boom_pos";
                direction = "axis_rL_opT_boom_dir";
                hitpoint = "rL_op_teal_illum";
                selection = "rL_op_teal_illum";
                size = 5;
                innerAngle = 35;
                outerAngle = 90;
                coneFadeCoef = 2;
                intensity = 2;
                useFlare = 1;
                dayLight = 0;
                flareSize = 1;
                flareMaxDistance = 250;
                class Attenuation {
                    start = 1;
                    constant = 0;
                    linear = 0.1;
                    quadratic = 0;
                    hardLimitStart = 25;
                    hardLimitEnd = 150;
                };
            };
            class rL_opT_cabin {
                color[] = {1875, 2475, 2175};
                ambient[] = {5, 5, 5};
                intensity = 1;
                size = 1;
                innerAngle = 90;
                outerAngle = 165;
                coneFadeCoef = 1;
                position = "axis_rL_opT_cabin_pos";
                direction = "axis_rL_opT_cabin_dir";
                hitpoint = "rL_op_teal_illum";
                selection = "rL_op_teal_illum";
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
                    hardLimitStart = 0;
                    hardLimitEnd = 3;
                };
            };
            class rL_opT_cabin2: rL_opT_cabin {
                position = "axis_rL_opT_cabin2_pos";
                direction = "axis_rL_opT_cabin2_dir";
                hitpoint = "rL_op_teal_illum";
                selection = "rL_op_teal_illum";
            };
        };
        aggregateReflectors[] = {};
        class RenderTargets {
            class display_cam_cmdr {
                renderTarget = "rendertarget0";
                class CameraView1 {
                    pointPosition = "axis_camera_b_pos";
                    pointDirection = "axis_camera_b_dir";
                    renderVisionMode = 2;
                    renderQuality = 2;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_1_TL", "PIP_1_TR", "PIP_1_BL", "PIP_1_BR"};
            };
            class cam_drv_bow {
                renderTarget = "rendertarget1";
                class CameraView1 {
                    pointPosition = "axis_cam_drv_bow_pos";
                    pointDirection = "axis_cam_drv_bow_dir";
                    renderVisionMode = 1;
                    fov = 0.6;
                };
                BBoxes[] = {"PIP_2_TL", "PIP_2_TR", "PIP_2_BL", "PIP_2_BR"};
            };
            class cam_drv_deck {
                renderTarget = "rendertarget2";
                class CameraView1 {
                    pointPosition = "axis_cam_drv_deck_pos";
                    pointDirection = "axis_cam_drv_deck_dir";
                    renderVisionMode = 0;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_3_TL", "PIP_3_TR", "PIP_3_BL", "PIP_3_BR"};
            };
        };
        attenuationEffectType = "CarAttenuation";
        audible = 4;
        insideSoundCoef = 0.75;
        occludeSoundsWhenIn = 0.316228;
        obstructSoundsWhenIn = 0.562341;
        buildCrash0[] = {
            "A3\sounds_f\Vehicles\soft\noises\crash_building_01",
            1.7782794,
            1,
            200
        };
        buildCrash1[] = {
            "A3\sounds_f\Vehicles\soft\noises\crash_building_02",
            1.7782794,
            1,
            200
        };
        buildCrash2[] = {
            "A3\sounds_f\Vehicles\soft\noises\crash_building_03",
            1.7782794,
            1,
            200
        };
        buildCrash3[] = {
            "A3\sounds_f\Vehicles\soft\noises\crash_building_04",
            1.7782794,
            1,
            200
        };
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
        WoodCrash0[] = {
            "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",
            1.7782794,
            1,
            200
        };
        WoodCrash1[] = {
            "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",
            1.7782794,
            1,
            200
        };
        WoodCrash2[] = {
            "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",
            1.7782794,
            1,
            200
        };
        WoodCrash3[] = {
            "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",
            1.7782794,
            1,
            200
        };
        WoodCrash4[] = {
            "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",
            1.7782794,
            1,
            200
        };
        WoodCrash5[] = {
            "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",
            1.7782794,
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
            "A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",
            1.7782794,
            1,
            200
        };
        ArmorCrash1[] = {
            "A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",
            1.7782794,
            1,
            200
        };
        ArmorCrash2[] = {
            "A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",
            1.7782794,
            1,
            200
        };
        ArmorCrash3[] = {
            "A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",
            1.7782794,
            1,
            200
        };
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
            class IdleOut {
                sound[] = {
                    "rhsusf\addons\rhsusf_markvsoc\data\Sound\idle_ext",
                    1,
                    1,
                    250
                };
                frequency = "0.95 + ((rpm/ 2000) factor[(0/ 2000),(500/ 2000)])*0.5";
                volume = "engineOn*(((rpm/ 2000) factor[(0/ 2000),(30/ 2000)]) * ((rpm/ 2000) factor[(500/ 2000),(300/ 2000)]))";
            };
            class Engine {
                sound[] = {
                    "rhsusf\addons\rhsusf_markvsoc\data\Sound\engine_ext",
                    1,
                    1,
                    350
                };
                frequency = "0.5 + ((rpm/ 2000) factor[(150/ 2000),(2000/ 2000)])*0.8";
                volume = "engineOn*((rpm/ 2000) factor[(300/ 600),(2000/ 2000)])";
            };
            class EngineMidOut {
                sound[] = {
                    "rhsusf\addons\rhsusf_markvsoc\data\Sound\distance",
                    1,
                    1,
                    800
                };
                frequency = "0.5 + ((rpm/ 2000) factor[(150/ 2000),(2000/ 2000)])*0.8";
                volume = "engineOn*((rpm/ 2000) factor[(300/ 600),(2000/ 2000)])";
            };
            class EngineMaxOut {
                sound[] = {
                    "rhsusf\addons\rhsusf_markvsoc\data\Sound\engine_rev",
                    0.75,
                    1,
                    400
                };
                frequency = "0.5 + ((rpm/ 2000) factor[(150/ 2000),(2000/ 2000)])*0.8";
                volume = "engineOn*((rpm/ 2000) factor[(1300/ 2000),(2000/ 2000)])";
            };
            class WaternoiseOutW0 {
                sound[] = {
                    "A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",
                    0.70794576,
                    1,
                    150
                };
                frequency = "1";
                volume = "(speed factor[4, 1]) * water";
            };
            class WaternoiseOutW1 {
                sound[] = {
                    "A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",
                    0.7943282,
                    1,
                    250
                };
                frequency = "1";
                volume = "((speed factor[2, 6]) min (speed factor[6, 4]))";
            };
            class WaternoiseOutW2 {
                sound[] = {
                    "A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",
                    1,
                    1,
                    350
                };
                frequency = "1";
                volume = "(speed factor[3, 9])";
            };
            class WaternoiseOutW3 {
                sound[] = {
                    "A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",
                    0.70794576,
                    1,
                    150
                };
                frequency = "1";
                volume = "(speed factor[-4, -1]) * water";
            };
            class WaternoiseOutW4 {
                sound[] = {
                    "A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",
                    0.7943282,
                    0.9,
                    250
                };
                frequency = "1";
                volume = "((speed factor[-2, -6]) min (speed factor[-6, -4]))";
            };
            class WaternoiseOutW5 {
                sound[] = {
                    "A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",
                    1,
                    0.9,
                    350
                };
                frequency = "1";
                volume = "(speed factor[-3, -9])";
            };
            class scrubLandExt {
                sound[] = {
                    "A3\Sounds_F\vehicles\boat\noises\boat_land_on_shallow",
                    1.7782794,
                    0.9,
                    100
                };
                frequency = 1;
                volume = "(scrubLand factor[0.01, 0.20])";
            };
        };
        class SoundEvents {};
        class SpeechVariants {
            class Default {
                speechSingular[] = {"veh_ship_attackBoat_s"};
                speechPlural[] = {"veh_ship_attackBoat_p"};
            };
        };
        class TransportItems {};
        class Turrets: Turrets {
            class MainTurret: NewTurret {
                gunnerType = "rhsusf_socom_swcc_crewman";
                stabilizedInAxes = 3;
                proxyType = "CPGunner";
                proxyindex = 1;
                gunnerCompartments = "Compartment2";
                body = "mainTurret";
                gun = "mainGun";
                animationSourceBody = "mainTurret";
                animationSourceGun = "mainGun";
                gunnerAction = "RHS_MKVSOC_Gunner";
                gunnerGetInAction = "";
                gunnerGetOutAction = "";
                gunnerReversedGetOut = 0;
                memoryPointsGetInGunner = "gunner_pos_s_m2";
                memoryPointsGetInGunnerDir = "gunner_dir_s_m2";
                ejectDeadGunner = 1;
                outGunnerMayFire = 1;
                inGunnerMayFire = 1;
                soundServo[] = {"A3\sounds_f\dummysound", 0.0056234132, 1};
                gunBeg = "m2_p_beginBarrel";
                gunEnd = "m2_p_endBarrel";
                weapons[] = {"RHS_MKV_M2_p"};
                magazines[] = {
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red"
                };
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
                gunnerName = "Port M2";
                memoryPointGunnerOptics = "m2_p_sight";
                gunnerLeftHandAnimName = "m2_p_hand_l";
                gunnerRightHandAnimName = "m2_p_hand_r";
                gunnerLeftLegAnimName = "m2_p_leg_l";
                gunnerRightLegAnimName = "m2_p_leg_r";
                gunnerOpticsModel = "a3\weapons_f\Reticle\optics_empty";
                gunnerForceOptics = 0;
                startEngine = 0;
                commanding = 0;
                primaryGunner = 0;
                primaryObserver = 0;
                usePip = 0;
                LODOpticsIn = 1000;
                LODOpticsOut = 1000;
                lodTurnedIn = 1000;
                lodTurnedOut = 1000;
                minElev = -45;
                maxElev = 45;
                initElev = 45;
                minTurn = 5;
                maxTurn = 145;
                initTurn = 65;
                class m2_p_ViewOptics: ViewOptics {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                class m2_p_ViewGunner: ViewOptics {
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
                disableSoundAttenuation = 1;
                maxHorizontalRotSpeed = 1.8;
                maxVerticalRotSpeed = 1.2;
                class HitPoints {
                    class HitTurret1 {
                        isTurret = 1;
                        armor = 0.8;
                        material = 60;
                        name = "hit_gunTurret_m2_1";
                        visual = "gunTurret_m2_1";
                        passThrough = 0;
                    };
                    class HitGun1 {
                        isGun = 1;
                        armor = 0.6;
                        material = 60;
                        name = "hit_gunBarrel_m2_1";
                        visual = "gunBarrel_m2_1";
                        passThrough = 0;
                    };
                };
            };
            class m2_s_gunTurret: MainTurret {
                proxyindex = 2;
                gunnerCompartments = "Compartment3";
                body = "m2_s_gunTurret";
                gun = "m2_s_gun";
                animationSourceBody = "m2_s_gunTurret";
                animationSourceGun = "m2_s_gun";
                gunnerAction = "RHS_MKVSOC_Gunner04";
                memoryPointsGetInGunner = "gunner_pos_p_m2";
                memoryPointsGetInGunnerDir = "gunner_dir_p_m2";
                gunBeg = "m2_s_beginBarrel";
                gunEnd = "m2_s_endBarrel";
                weapons[] = {"RHS_MKV_M2_s"};
                gunnerName = "Stbd M2";
                memoryPointGunnerOptics = "m2_s_sight";
                gunnerLeftHandAnimName = "m2_s_hand_l";
                gunnerRightHandAnimName = "m2_s_hand_r";
                gunnerLeftLegAnimName = "m2_s_leg_l";
                gunnerRightLegAnimName = "m2_s_leg_r";
                minElev = -45;
                maxElev = 45;
                initElev = 45;
                minTurn = -145;
                maxTurn = -5;
                initTurn = -65;
                class HitPoints {
                    class HitTurret2 {
                        isTurret = 1;
                        armor = 0.8;
                        material = 60;
                        name = "m2_s_turret";
                        visual = "-";
                        passThrough = 0;
                    };
                    class HitGun2 {
                        isGun = 1;
                        armor = 0.6;
                        material = 60;
                        name = "m2_s_barrels";
                        visual = "-";
                        passThrough = 0;
                    };
                };
            };
            class m134_p_gunTurret: MainTurret {
                proxyindex = 3;
                gunnerCompartments = "Compartment4";
                body = "m134_p_gunTurret";
                gun = "m134_p_gun";
                animationSourceBody = "m134_p_gunTurret";
                animationSourceGun = "m134_p_gun";
                gunnerAction = "RHS_MKVSOC_Gunner02";
                memoryPointsGetInGunner = "gunner_pos_m134";
                memoryPointsGetInGunnerDir = "gunner_dir_m134";
                gunBeg = "m134_p_beginBarrel";
                gunEnd = "m134_p_endBarrel";
                weapons[] = {"RHS_MKV_M134"};
                magazines[] = {"2000Rnd_762x51_Belt_T_Red", "2000Rnd_762x51_Belt_T_Red"};
                discreteDistance[] = {300};
                discreteDistanceInitIndex = 2;
                gunnerName = "Port M134";
                memoryPointGunnerOptics = "m134_p_sight";
                gunnerLeftHandAnimName = "m134_p_hand_l";
                gunnerRightHandAnimName = "m134_p_hand_r";
                gunnerLeftLegAnimName = "m134_p_leg_l";
                gunnerRightLegAnimName = "m134_p_leg_r";
                minElev = -45;
                maxElev = 35;
                initElev = 45;
                minTurn = 35;
                maxTurn = 140;
                initTurn = 65;
                class m134_p_ViewOptics: ViewOptics {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                class m134_p_ViewGunner: ViewOptics {
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
                maxHorizontalRotSpeed = 1.8;
                maxVerticalRotSpeed = 1.2;
                class HitPoints {
                    class HitTurret3 {
                        armor = 0.8;
                        material = 60;
                        name = "m134_p_turret";
                        visual = "m134_p_gunTurret";
                        passThrough = 0;
                    };
                    class HitGun3 {
                        armor = 0.6;
                        material = 60;
                        name = "m134_p_barrels";
                        visual = "m134_p_gun";
                        passThrough = 0;
                    };
                };
            };
            class mk19_s_gunTurret: MainTurret {
                proxyindex = 4;
                gunnerCompartments = "Compartment5";
                body = "mk19_s_gunTurret";
                gun = "mk19_s_gun";
                animationSourceBody = "mk19_s_gunTurret";
                animationSourceGun = "mk19_s_gun";
                gunnerAction = "RHS_MKVSOC_Gunner03";
                gunnerGetInAction = "GetInLow";
                gunnerGetOutAction = "GetOutLow";
                memoryPointsGetInGunner = "gunner_pos_mk19";
                memoryPointsGetInGunnerDir = "gunner_dir_mk19";
                gunBeg = "mk19_s_beginBarrel";
                gunEnd = "mk19_s_endBarrel";
                weapons[] = {"RHS_MKV_MK19"};
                magazines[] = {
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1"
                };
                discreteDistance[] = {
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
                gunnerName = "Stbd Mk19";
                memoryPointGunnerOptics = "mk19_s_sight";
                gunnerLeftHandAnimName = "mk19_s_hand_l";
                gunnerRightHandAnimName = "mk19_s_hand_r";
                gunnerLeftLegAnimName = "mk19_s_leg_l";
                gunnerRightLegAnimName = "mk19_s_leg_r";
                minElev = -45;
                maxElev = 55;
                initElev = 45;
                minTurn = -137;
                maxTurn = -35;
                initTurn = -65;
                class mk19_s_ViewOptics: ViewOptics {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                class mk19_s_ViewGunner: ViewOptics {
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
                class HitPoints {
                    class HitTurret4 {
                        isTurret = 1;
                        armor = 0.8;
                        material = 60;
                        name = "m134_p_turret";
                        visual = "m134_p_gunTurret";
                        passThrough = 0;
                    };
                    class HitGun4 {
                        isGun = 1;
                        armor = 0.6;
                        material = 60;
                        name = "m134_p_barrels";
                        visual = "m134_p_gun";
                        passThrough = 0;
                    };
                };
            };
            class camera_b_gunTurret: MainTurret {
                gunnerType = "rhsusf_socom_swcc_officer";
                stabilizedInAxes = 3;
                proxyType = "CPCommander";
                proxyindex = 1;
                gunnerCompartments = "Compartment1";
                body = "camera_b_gunTurret";
                gun = "camera_b_gun";
                animationSourceBody = "camera_b_gunTurret";
                animationSourceGun = "camera_b_gun";
                gunnerAction = "RHS_MKVSOC_Commander";
                gunnerGetInAction = "GetInMedium";
                gunnerGetOutAction = "GetOutMedium";
                ejectDeadGunner = 0;
                outGunnerMayFire = 1;
                inGunnerMayFire = 1;
                soundServo[] = {
                    "A3\Sounds_F\vehicles\armor\noises\servo_best",
                    0.01,
                    1,
                    50
                };
                gunBeg = "axis_camera_b_dir";
                gunEnd = "axis_camera_b_pos";
                memoryPointGunnerOptics = "axis_camera_b_pos";
                memoryPointsGetInGunner = "comm_pos";
                memoryPointsGetInGunnerDir = "comm_dir";
                weapons[] = {"Laserdesignator_mounted"};
                magazines[] = {"Laserbatteries"};
                gunnerLeftHandAnimName = "cmdr_hand_l";
                gunnerRightHandAnimName = "cmdr_hand_r";
                gunnerLeftLegAnimName = "cmdr_leg_l";
                gunnerRightLegAnimName = "cmdr_leg_r";
                gunnerName = "Commander";
                gunnerOpticsModel = "\A3\weapons_f_beta\reticle\reticle_SDV";
                gunnerForceOptics = 0;
                startEngine = 0;
                commanding = 0;
                primaryGunner = 0;
                primaryObserver = 1;
                usePip = 1;
                laser = 1;
                minElev = -30;
                maxElev = 60;
                initElev = 60;
                minTurn = -180;
                maxTurn = 180;
                initTurn = 0;
                class camera_b_ViewOptics: ViewOptics {
                    initAngleX = 0;
                    minAngleX = 0;
                    maxAngleX = 0;
                    initAngleY = 0;
                    minAngleY = -180;
                    maxAngleY = 180;
                    initFov = 0.14;
                    minFov = 0.0175;
                    maxFov = 0.14;
                    visionMode[] = {"Normal", "NVG", "Ti"};
                    thermalMode[] = {2, 3, 4};
                };
                class camera_b_ViewGunner: ViewOptics {
                    initAngleX = -15;
                    minAngleX = -45;
                    maxAngleX = 45;
                    initAngleY = 0;
                    minAngleY = -150;
                    maxAngleY = 150;
                    initFov = 0.9;
                    minFov = 0.42;
                    maxFov = 0.9;
                    visionMode[] = {};
                };
                maxHorizontalRotSpeed = 1.8;
                maxVerticalRotSpeed = 1.2;
                class HitPoints {};
            };
            class rem_spotL_gunTurret: MainTurret {
                gunnerType = "rhsusf_socom_swcc_officer";
                stabilizedInAxes = 4;
                proxyType = "CPCommander";
                proxyindex = 2;
                gunnerCompartments = "Compartment1";
                body = "rem_spotL_gunTurret";
                gun = "rem_spotL_gun";
                animationSourceBody = "rem_spotL_gunTurret";
                animationSourceGun = "rem_spotL_gun";
                gunnerAction = "RHS_MKVSOC_Commander02";
                gunnerGetInAction = "GetInMedium";
                gunnerGetOutAction = "GetOutMedium";
                ejectDeadGunner = 0;
                outGunnerMayFire = 1;
                inGunnerMayFire = 0;
                soundServo[] = {
                    "A3\Sounds_F\vehicles\armor\noises\servo_best",
                    0.2,
                    1,
                    1
                };
                gunBeg = "axis_rem_spotL_dir";
                gunEnd = "axis_rem_spotL_pos";
                memoryPointGunnerOptics = "rem_spotL_sight";
                memoryPointsGetInGunner = "gunner_pos";
                memoryPointsGetInGunnerDir = "gunner_dir";
                weapons[] = {};
                magazines[] = {};
                gunnerName = "Technician";
                gunnerOpticsModel = "a3\weapons_f\Reticle\optics_empty";
                gunnerForceOptics = 0;
                startEngine = 0;
                commanding = 0;
                primaryGunner = 0;
                primaryObserver = 0;
                usePip = 0;
                laser = 0;
                minElev = -7.5;
                maxElev = 60;
                initElev = 0;
                minTurn = -145;
                maxTurn = 145;
                initTurn = 0;
                class rem_spotL_ViewOptics: ViewOptics {
                    initAngleX = 0;
                    minAngleX = 0;
                    maxAngleX = 0;
                    initAngleY = 0;
                    minAngleY = -150;
                    maxAngleY = 150;
                    initFov = 0.14;
                    minFov = 0.0175;
                    maxFov = 0.14;
                    visionMode[] = {};
                    thermalMode[] = {};
                };
                class rem_spotL_ViewGunner: ViewOptics {
                    initAngleX = -15;
                    minAngleX = -45;
                    maxAngleX = 45;
                    initAngleY = 0;
                    minAngleY = -150;
                    maxAngleY = 150;
                    initFov = 0.9;
                    minFov = 0.42;
                    maxFov = 0.9;
                    visionMode[] = {};
                };
                maxHorizontalRotSpeed = 1.8;
                maxVerticalRotSpeed = 1.2;
                class HitPoints {};
            };
        };
        class UserActions {
            class OpenMenu {
                userActionID = 74;
                priority = 11.008;
                displayName = "<t color='#FDDE00'>Open control panel</t>";
                position = "beacon_point";
                radius = 10;
                animPeriod = 2;
                onlyForplayer = 1;
                condition = "driver this == (call rhsusf_fnc_findPlayer)";
                statement = "[this] call rhsusf_fnc_markvsoc_openMenu";
            };
            class OpenLoadMenu {
                userActionID = 74;
                priority = 10.008;
                displayName = "<t color='#038D4A'>Open vehicle loading menu</t>";
                position = "beacon_point";
                radius = 10;
                animPeriod = 2;
                onlyForplayer = 1;
                condition = "driver this == (call rhsusf_fnc_findPlayer)";
                statement = "[this] spawn rhsusf_fnc_markvsoc_loadMenuInit";
            };
            class GetOnDeck {
                userActionID = 74;
                priority = 11.008;
                displayName = "Get on deck";
                position = "axis_ramp_roller";
                radius = 4;
                animPeriod = 2;
                onlyForplayer = 1;
                condition = "(getposasl (call rhsusf_fnc_findPlayer)) select 2 < -1";
                statement = "[] spawn rhsusf_fnc_markvsoc_getIn";
            };
        };
        class Attributes {
            class ObjectTexture {
                control = "ObjectTexture";
                data = "ObjectTexture";
                displayName = "Skin";
                tooltip = "Texture and material set applied on the object.";
            };
            class rhs_attachCargo {
                control = "CheckboxNumber";
                defaultValue = "0";
                displayName = "Attach cargo";
                tooltip = "Attaching cargo (using attachTo command) just like when you use ramp action";
                property = "rhs_attachCargo";
                expression = "if(_value == 1)then{[_this] spawn rhsusf_fnc_markvsoc_attachBoats};";
            };
        };
        hiddenSelections[] = {"camo1"};
        hiddenselectionstextures[] = {"rhsusf\addons\rhsusf_markvsoc\data\hull_co.paa"};
        class textureSources {
            class marsoc {
                displayName = "US";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {"rhsusf\addons\rhsusf_markvsoc\data\hull_co.paa"};
            };
        };
        textureList[] = {};
    };
    class House_F;
    class Land_PierLadder_F;
    class Land_MkV_Ladder: Land_PierLadder_F {
        displayName = "Ladder (MkV)";
        model = "rhsusf\addons\rhsusf_markvsoc\mkv_ladder_aft_h.p3d";
        mapSize = 0.01;
        icon = "";
        armor = 150;
        ladders[] = {{"start", "end"}};
        vehicleClass = "Misc";
    };
    class Land_MkV_Roadway: House_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Roadway (MkV)";
        model = "rhsusf\addons\rhsusf_markvsoc\hull_roadway.p3d";
        mapSize = 0.01;
        icon = "";
        armor = 150;
        vehicleClass = "Misc";
    };
};
