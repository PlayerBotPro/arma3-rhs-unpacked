class CfgPatches {
    class rhs_optics {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {"rhs_main"};
        version = "0.1.1.1";
    };
};
class CfgFontFamilies {
    class rhs_font_rus {
        fonts[] = {"\rhsafrf\addons\rhs_optics\scripts\font_rus\rus_font_b-bold46"};
    };
    class rhs_digital_font {
        fonts[] = {"\rhsafrf\addons\rhs_optics\scripts\digitalfont\digital46"};
    };
    class rhs_digital_font_var {
        fonts[] = {"\rhsafrf\addons\rhs_optics\scripts\digitalfont_var\digital_var46"};
    };
    class rhs_digital_font_rus {
        fonts[] = {"\rhsafrf\addons\rhs_optics\scripts\digitalfont_rus\digital_var46"};
    };
};
class RscMapControl;
class RscEdit;
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
class rhs_1v528_Button {
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
class RHS_1g42_1v528_computer {
    enableSimulation = 1;
    idd = 101;
    movingenable = 0;
    class Controls {
        class switch: rhs_1v528_Button {
            idc = 7400;
            x = "0.548478 * safezoneW + safezoneX";
            y = "0.565828 * safezoneH + safezoneY";
            w = "0.0352567 * safezoneW";
            h = "0.0470196 * safezoneH";
            tooltip = "On/Off";
            soundClick[] = {"rhsafrf\addons\rhs_optics\scripts\1v528\sounds\switch_pyk.ogg", 0.89, 1};
            action = "['0',2] call rhs_fnc_1v528_setRange";
        };
        class check: rhs_1v528_Button {
            idc = 7401;
            x = "0.583735 * safezoneW + safezoneX";
            y = "0.565828 * safezoneH + safezoneY";
            w = "0.0352567 * safezoneW";
            h = "0.0470196 * safezoneH";
            tooltip = "Check controls";
            soundClick[] = {"rhsafrf\addons\rhs_optics\scripts\1v528\sounds\button_press.ogg", 0.89, 1};
            action = "['0',3] call rhs_fnc_1v528_setRange";
        };
        class switch_base: rhs_1v528_Button {
            idc = 0;
            x = 0;
            y = 0;
            w = 0;
            h = 0;
            soundClick[] = {"rhsafrf\addons\rhs_optics\scripts\1v528\sounds\switch_click.ogg", 0.89, 1};
        };
        class d0: switch_base {
            idc = 7501;
            x = "0.5 * safezoneW + safezoneX";
            y = "0.481192 * safezoneH + safezoneY";
            w = "0.0132213 * safezoneW";
            h = "0.0188079 * safezoneH";
            tooltip = "0m";
            action = "['0',0] call rhs_fnc_1v528_setRange";
        };
        class d50: switch_base {
            idc = 7502;
            x = "0.495593 * safezoneW + safezoneX";
            y = "0.462384 * safezoneH + safezoneY";
            w = "0.0132213 * safezoneW";
            h = "0.0188079 * safezoneH";
            tooltip = "50m";
            action = "['50',0] call rhs_fnc_1v528_setRange";
        };
        class d100: switch_base {
            idc = 7503;
            x = "0.482372 * safezoneW + safezoneX";
            y = "0.462384 * safezoneH + safezoneY";
            w = "0.0132213 * safezoneW";
            h = "0.0188079 * safezoneH";
            tooltip = "100m";
            action = "['100',0] call rhs_fnc_1v528_setRange";
        };
        class d150: switch_base {
            idc = 7504;
            x = "0.486779 * safezoneW + safezoneX";
            y = "0.443576 * safezoneH + safezoneY";
            w = "0.0132213 * safezoneW";
            h = "0.0188079 * safezoneH";
            tooltip = "150m";
            action = "['150',0] call rhs_fnc_1v528_setRange";
        };
        class d200: switch_base {
            idc = 7505;
            x = "0.482372 * safezoneW + safezoneX";
            y = "0.434173 * safezoneH + safezoneY";
            w = "0.0132213 * safezoneW";
            h = "0.00940393 * safezoneH";
            tooltip = "200m";
            action = "['200',0] call rhs_fnc_1v528_setRange";
        };
        class d250: switch_base {
            idc = 7506;
            x = "0.486779 * safezoneW + safezoneX";
            y = "0.415365 * safezoneH + safezoneY";
            w = "0.0132213 * safezoneW";
            h = "0.0188079 * safezoneH";
            tooltip = "250";
            action = "['250',0] call rhs_fnc_1v528_setRange";
        };
        class d300: switch_base {
            idc = 7507;
            x = "0.477965 * safezoneW + safezoneX";
            y = "0.396557 * safezoneH + safezoneY";
            w = "0.0132213 * safezoneW";
            h = "0.0188079 * safezoneH";
            tooltip = "300m";
            action = "['300',0] call rhs_fnc_1v528_setRange";
        };
        class d350: switch_base {
            idc = 7508;
            x = "0.491186 * safezoneW + safezoneX";
            y = "0.396557 * safezoneH + safezoneY";
            w = "0.0132213 * safezoneW";
            h = "0.0188079 * safezoneH";
            tooltip = "350m";
            action = "['350',0] call rhs_fnc_1v528_setRange";
        };
        class d400: switch_base {
            idc = 7509;
            x = "0.491186 * safezoneW + safezoneX";
            y = "0.377749 * safezoneH + safezoneY";
            w = "0.0132213 * safezoneW";
            h = "0.0188079 * safezoneH";
            tooltip = "400m";
            action = "['400',0] call rhs_fnc_1v528_setRange";
        };
        class d450: switch_base {
            idc = 7510;
            x = "0.504407 * safezoneW + safezoneX";
            y = "0.387153 * safezoneH + safezoneY";
            w = "0.00881419 * safezoneW";
            h = "0.0188079 * safezoneH";
            tooltip = "450m";
            action = "['450',0] call rhs_fnc_1v528_setRange";
        };
        class d500: switch_base {
            idc = 7511;
            x = "0.513221 * safezoneW + safezoneX";
            y = "0.377749 * safezoneH + safezoneY";
            w = "0.00440709 * safezoneW";
            h = "0.0282118 * safezoneH";
            tooltip = "500m";
            action = "['500',0] call rhs_fnc_1v528_setRange";
        };
        class d550: switch_base {
            idc = 7512;
            x = "0.517628 * safezoneW + safezoneX";
            y = "0.387153 * safezoneH + safezoneY";
            w = "0.00881419 * safezoneW";
            h = "0.0282118 * safezoneH";
            tooltip = "550m";
            action = "['550',0] call rhs_fnc_1v528_setRange";
        };
        class d600: switch_base {
            idc = 7513;
            x = "0.526443 * safezoneW + safezoneX";
            y = "0.377749 * safezoneH + safezoneY";
            w = "0.00881419 * safezoneW";
            h = "0.0188079 * safezoneH";
            tooltip = "600m";
            action = "['600',0] call rhs_fnc_1v528_setRange";
        };
        class d650: switch_base {
            idc = 7514;
            x = "0.526443 * safezoneW + safezoneX";
            y = "0.396557 * safezoneH + safezoneY";
            w = "0.0132213 * safezoneW";
            h = "0.00940393 * safezoneH";
            tooltip = "650m";
            action = "['650',0] call rhs_fnc_1v528_setRange";
        };
        class d700: switch_base {
            idc = 7515;
            x = "0.539664 * safezoneW + safezoneX";
            y = "0.396557 * safezoneH + safezoneY";
            w = "0.0132213 * safezoneW";
            h = "0.0188079 * safezoneH";
            tooltip = "700m";
            action = "['700',0] call rhs_fnc_1v528_setRange";
        };
        class d750: switch_base {
            idc = 7516;
            x = "0.53085 * safezoneW + safezoneX";
            y = "0.415365 * safezoneH + safezoneY";
            w = "0.0132213 * safezoneW";
            h = "0.0188079 * safezoneH";
            tooltip = "750m";
            action = "['750',0] call rhs_fnc_1v528_setRange";
        };
        class d80: switch_base {
            idc = 7517;
            x = "0.544071 * safezoneW + safezoneX";
            y = "0.424769 * safezoneH + safezoneY";
            w = "0.0132213 * safezoneW";
            h = "0.0188079 * safezoneH";
            tooltip = "800m";
            action = "['800',0] call rhs_fnc_1v528_setRange";
        };
        class d850: switch_base {
            idc = 7518;
            x = "0.53085 * safezoneW + safezoneX";
            y = "0.443576 * safezoneH + safezoneY";
            w = "0.00881419 * safezoneW";
            h = "0.0188079 * safezoneH";
            tooltip = "850m";
            action = "['850',0] call rhs_fnc_1v528_setRange";
        };
        class d900: switch_base {
            idc = 7519;
            x = "0.535257 * safezoneW + safezoneX";
            y = "0.462384 * safezoneH + safezoneY";
            w = "0.0132213 * safezoneW";
            h = "0.0188079 * safezoneH";
            tooltip = "900m";
            action = "['900',0] call rhs_fnc_1v528_setRange";
        };
        class d950: switch_base {
            idc = 7520;
            x = "0.526443 * safezoneW + safezoneX";
            y = "0.462384 * safezoneH + safezoneY";
            w = "0.00881419 * safezoneW";
            h = "0.0188079 * safezoneH";
            tooltip = "950m";
            action = "['950',0] call rhs_fnc_1v528_setRange";
        };
        class d1000: switch_base {
            idc = 7521;
            x = "0.517628 * safezoneW + safezoneX";
            y = "0.462384 * safezoneH + safezoneY";
            w = "0.00881419 * safezoneW";
            h = "0.0188079 * safezoneH";
            tooltip = "1000m";
            action = "['1000',0] call rhs_fnc_1v528_setRange";
        };
        class gA: switch_base {
            idc = 7421;
            x = "0.544071 * safezoneW + safezoneX";
            y = "0.443576 * safezoneH + safezoneY";
            w = "0.0308497 * safezoneW";
            h = "0.0188079 * safezoneH";
            tooltip = "Automatic mode";
            action = "['aw',1] call rhs_fnc_1v528_setRange";
        };
        class g0: switch_base {
            idc = 7422;
            x = "0.548478 * safezoneW + safezoneX";
            y = "0.405961 * safezoneH + safezoneY";
            w = "0.0220355 * safezoneW";
            h = "0.0188079 * safezoneH";
            tooltip = "0m";
            action = "['0',1] call rhs_fnc_1v528_setRange";
        };
        class g1000: switch_base {
            idc = 7423;
            x = "0.552885 * safezoneW + safezoneX";
            y = "0.387153 * safezoneH + safezoneY";
            w = "0.0176284 * safezoneW";
            h = "0.0188079 * safezoneH";
            tooltip = "1000m";
            action = "['1000',1] call rhs_fnc_1v528_setRange";
        };
        class g2000: switch_base {
            idc = 7424;
            x = "0.570513 * safezoneW + safezoneX";
            y = "0.368345 * safezoneH + safezoneY";
            w = "0.0176284 * safezoneW";
            h = "0.0376157 * safezoneH";
            tooltip = "2000m";
            action = "['2000',1] call rhs_fnc_1v528_setRange";
        };
        class g3000: switch_base {
            idc = 7425;
            x = "0.592549 * safezoneW + safezoneX";
            y = "0.368345 * safezoneH + safezoneY";
            w = "0.0220355 * safezoneW";
            h = "0.0376157 * safezoneH";
            tooltip = "3000m";
            action = "['3000',1] call rhs_fnc_1v528_setRange";
        };
        class rhs_1v528_background: RscPicture {
            idc = 1200;
            text = "rhsafrf\addons\rhs_optics\scripts\1v528\1v528_computer_bg.paa";
            x = "0.328123 * safezoneW + safezoneX";
            y = "0.358941 * safezoneH + safezoneY";
            w = "0.317311 * safezoneW";
            h = "0.291522 * safezoneH";
        };
        class switch_distance_100: rhs_1v528_background {
            idc = 1201;
            text = "rhsafrf\addons\rhs_optics\scripts\1v528\dist100\1v528_distS_0.paa";
        };
        class switch_distance_1000: rhs_1v528_background {
            idc = 1202;
            text = "rhsafrf\addons\rhs_optics\scripts\1v528\dist1000\1v528_dist_aw.paa";
        };
        class switch_slope: rhs_1v528_background {
            idc = 1203;
            text = "rhsafrf\addons\rhs_optics\scripts\1v528\controls\switch.paa";
        };
        class light_slope: rhs_1v528_background {
            idc = 1205;
            text = "rhsafrf\addons\rhs_optics\scripts\1v528\controls\slope_control.paa";
        };
        class light_w: rhs_1v528_background {
            idc = 1206;
            text = "rhsafrf\addons\rhs_optics\scripts\1v528\controls\w_control.paa";
        };
        class light_st_beta: rhs_1v528_background {
            idc = 1207;
            text = "rhsafrf\addons\rhs_optics\scripts\1v528\controls\st_beta.paa";
        };
        class light_st_alpha: rhs_1v528_background {
            idc = 1208;
            text = "rhsafrf\addons\rhs_optics\scripts\1v528\controls\st_alpha.paa";
        };
        class distance_100: rhs_1v528_Button {
            x = "0.5 * safezoneW + safezoneX";
            y = "0.415365 * safezoneH + safezoneY";
            w = "0.0308497 * safezoneW";
            h = "0.0376157 * safezoneH";
            tooltip = "Distance switch 100m";
            idc = 31;
        };
        class Distance_1000: distance_100 {
            x = "0.574921 * safezoneW + safezoneX";
            y = "0.415365 * safezoneH + safezoneY";
            w = "0.0352567 * safezoneW";
            h = "0.0470196 * safezoneH";
            tooltip = "Distance switch 1000m";
            idc = 31;
        };
        class Slope_text: distance_100 {
            x = "0.544071 * safezoneW + safezoneX";
            y = "0.518808 * safezoneH + safezoneY";
            w = "0.0528851 * safezoneW";
            h = "0.0188079 * safezoneH";
            tooltip = "Angle sensor";
        };
        class switch_off: distance_100 {
            x = "0.552885 * safezoneW + safezoneX";
            y = "0.612847 * safezoneH + safezoneY";
            w = "0.0220355 * safezoneW";
            h = "0.0188079 * safezoneH";
            tooltip = "Off";
        };
        class switch_on: distance_100 {
            x = "0.552885 * safezoneW + safezoneX";
            y = "0.54702 * safezoneH + safezoneY";
            w = "0.0220355 * safezoneW";
            h = "0.0188079 * safezoneH";
            tooltip = "On";
        };
        class t_ground: distance_100 {
            x = "0.429487 * safezoneW + safezoneX";
            y = "0.603443 * safezoneH + safezoneY";
            w = "0.0264426 * safezoneW";
            h = "0.0282118 * safezoneH";
            tooltip = "Ground temperature";
        };
        class t_air: distance_100 {
            x = "0.5 * safezoneW + safezoneX";
            y = "0.603443 * safezoneH + safezoneY";
            w = "0.0264426 * safezoneW";
            h = "0.0282118 * safezoneH";
            tooltip = "Air temperature";
        };
        class delta: distance_100 {
            x = "0.358973 * safezoneW + safezoneX";
            y = "0.612847 * safezoneH + safezoneY";
            w = "0.0308497 * safezoneW";
            h = "0.0282118 * safezoneH";
            tooltip = "Delta D adjustment";
        };
        class pressure: distance_100 {
            x = "0.354566 * safezoneW + safezoneX";
            y = "0.490596 * safezoneH + safezoneY";
            w = "0.048478 * safezoneW";
            h = "0.0188079 * safezoneH";
            tooltip = "Air pressure";
        };
        class deltaV: distance_100 {
            x = "0.429487 * safezoneW + safezoneX";
            y = "0.481192 * safezoneH + safezoneY";
            w = "0.0264426 * safezoneW";
            h = "0.0282118 * safezoneH";
            tooltip = "Delta V adjustment";
        };
        class manualD: distance_100 {
            x = "0.53085 * safezoneW + safezoneX";
            y = "0.481192 * safezoneH + safezoneY";
            w = "0.0396638 * safezoneW";
            h = "0.0282118 * safezoneH";
            tooltip = "Manual distance input";
        };
    };
};
class RHS_Empty_Control {
    enableSimulation = 1;
    idd = 8101;
    movingenable = 0;
    class Controls {};
};
class RscCompass;
class CfgInGameUI {
    class Cursor {
        class Targeting {
            class MarkedTarget {
                color[] = {
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
                };
                colorLockable[] = {
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
                };
                colorFriendly[] = {
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
                };
            };
            class MarkedTargetNoLos: MarkedTarget {
                color[] = {
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                    "0.6+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
                };
                colorLockable[] = {
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
                };
                colorFriendly[] = {
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
                };
            };
            class Seeker {
                color[] = {
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
                };
            };
            class SeekerLocked: Seeker {
                color[] = {
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
                };
            };
            class SeekerNoLOS: Seeker {
                color[] = {
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                    "0.6+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
                };
            };
            class ImpactPoint: Seeker {
                color[] = {
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
                };
            };
            class ImpactPointNoLOS: ImpactPoint {
                color[] = {
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
                };
            };
            class HitPrediction: Seeker {
                color[] = {
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
                };
            };
            class HitConfirm: Seeker {};
            class KnownTarget: Seeker {
                color[] = {
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
                };
            };
            class LaserTarget: KnownTarget {
                color[] = {
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
                };
            };
            class MarkedTargetNoLosRemote: MarkedTarget {
                color[] = {
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
                };
                colorLockable[] = {
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
                };
                colorFriendly[] = {
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
                };
            };
            class SeekerRemote {
                color[] = {
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
                };
            };
            class SeekerLockedRemote: Seeker {
                color[] = {
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
                };
            };
            class SeekerNoLosRemote: Seeker {
                color[] = {
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                    "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
                };
            };
        };
    };
};
class RscInGameUI {
    class RscUnitInfo;
    class RscUnitInfoSoldier;
    class RscUnitInfoTank;
    class RscUnitInfoAirNoWeapon: RscUnitInfo {
        class CA_VehicleTogglesBackground;
    };
    class RscUnitInfoAir: RscUnitInfoAirNoWeapon {};
    class RscUnitInfoAirPlaneNoWeapon: RscUnitInfoAirNoWeapon {};
    class RscUnitInfoAirPlane: RscUnitInfoAirPlaneNoWeapon {};
    class RscUnitInfoAirRTDBasic: RscUnitInfoAir {};
    class RscUnitInfoAirRTDFullDigitalNoWeapon: RscUnitInfoAir {};
    class RscUnitInfoAirRTDFullDigital: RscUnitInfoAirRTDFullDigitalNoWeapon {};
    class RscWeaponZeroing: RscUnitInfo {
        class WeaponInfoControlsGroupLeft;
    };
    class RHS_RscWeaponZeroing: RscUnitInfo {
        idd = 300;
        controls[] = {"CA_Zeroing"};
    };
    class RHS_RscUnitInfoBTR: RscUnitInfo {
        onLoad = "[""onLoad"",_this,""RscUnitInfo"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_cmLoad";
        onUnload = "[""onUnload"",_this,""RscUnitInfo"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay; ')";
        controls[] = {
            "WeaponInfoControlsGroupRight",
            "CA_BackgroundVehicle",
            "CA_BackgroundVehicleTitle",
            "CA_BackgroundVehicleTitleDark",
            "CA_BackgroundFuel",
            "CA_Vehicle",
            "CA_VehicleRole",
            "CA_HitZones",
            "CA_VehicleTogglesBackground",
            "CA_VehicleToggles",
            "CA_SpeedBackground",
            "CA_SpeedUnits",
            "CA_Speed",
            "CA_ValueFuel"
        };
    };
    class RHS_RscUnitInfoEastTank: RscUnitInfoTank {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');; ['onLoad',_this,'RscUnitInfo','IGUI'] call a3_ui_initDisplay; ";
        controls[] = {
            "WeaponInfoControlsGroupRight",
            "CA_Zeroing",
            "CA_BackgroundVehicle",
            "CA_BackgroundVehicleTitle",
            "CA_BackgroundVehicleTitleDark",
            "CA_BackgroundFuel",
            "CA_Vehicle",
            "CA_VehicleRole",
            "CA_HitZones",
            "CA_SpeedBackground",
            "CA_SpeedUnits",
            "CA_Speed",
            "CA_ValueFuel",
            "CA_Mode"
        };
        class CA_Mode: RscText {
            idc = 149;
            colorText[] = {
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
            };
            y = -1;
            x = "-5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
            w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
            h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
    };
    class RHS_RscUnitInfoAir_NoRadar: RscUnitInfoAir {
        controls[] = {
            "WeaponInfoControlsGroupRight",
            "CA_BackgroundVehicle",
            "CA_BackgroundVehicleTitle",
            "CA_BackgroundVehicleTitleDark",
            "CA_BackgroundFuel",
            "CA_Vehicle",
            "CA_VehicleRole",
            "CA_HitZones",
            "CA_VehicleTogglesBackground",
            "CA_VehicleToggles",
            "CA_SpeedBackground",
            "CA_SpeedUnits",
            "CA_Speed",
            "CA_ValueFuel",
            "CA_AltBackground",
            "CA_AltUnits",
            "CA_Alt"
        };
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_fnc_randomRadio";
        class CA_VehicleTogglesBackground: CA_VehicleTogglesBackground {
            idc = 1243;
        };
    };
    class RHS_RscUnitInfoAir: RscUnitInfoAir {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_fnc_randomRadio";
        class CA_VehicleTogglesBackground: CA_VehicleTogglesBackground {
            idc = 1243;
        };
    };
    class RHS_RscUnitInfoAirPlane: RscUnitInfoAirPlane {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_fnc_randomRadio";
        class CA_VehicleTogglesBackground: CA_VehicleTogglesBackground {
            idc = 1243;
        };
    };
    class RHS_RscUnitInfoAir_Mi8: RscUnitInfoAir {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); ['jet',17] spawn RHSUSF_fnc_randomRadio;_this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
        controls[] = {
            "CA_BackgroundVehicle",
            "CA_BackgroundVehicleTitle",
            "CA_BackgroundVehicleTitleDark",
            "CA_BackgroundFuel",
            "CA_Vehicle",
            "CA_VehicleRole",
            "CA_HitZones",
            "CA_VehicleTogglesBackground",
            "CA_VehicleToggles",
            "CA_SpeedBackground",
            "CA_SpeedUnits",
            "CA_Speed",
            "CA_ValueFuel",
            "CA_AltBackground",
            "CA_AltUnits",
            "CA_Alt",
            "WeaponInfoControlsGroupRight",
            "RHS_WheelBrakes_SFM"
        };
        class RHS_WheelBrakes_SFM: RscPicture {
            idc = 10101;
            text = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\WheelBreakIconOn_ca.paa";
            colorText[] = {
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
            };
            x = "4.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable ['GUI_GRID_VEHICLE_X',		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
            y = "3.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable ['GUI_GRID_VEHICLE_Y',		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
            w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
            h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class CA_VehicleTogglesBackground: CA_VehicleTogglesBackground {
            idc = 1243;
        };
    };
    class RHS_RscUnitInfoAir_RTD_Mi8: RscUnitInfoAirRTDFullDigital {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_fnc_randomRadio;_this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
        class CA_VehicleTogglesBackground: CA_VehicleTogglesBackground {
            idc = 1243;
        };
    };
    class RHS_RscUnitInfoAir_RTD_Basic_Mi8: RscUnitInfoAirRTDBasic {
        onLoad = "uinamespace setvariable ['RscUnitInfoAir',_this select 0]; _this spawn RHS_fnc_randomRadio;_this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
        class CA_VehicleTogglesBackground: CA_VehicleTogglesBackground {
            idc = 1243;
        };
    };
    class RHS_RscUnitInfoAir_Mi24: RHS_RscUnitInfoAir_NoRadar {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_fnc_randomRadio;_this spawn rhs_fnc_rwr_spo15;_this spawn rhs_fnc_mi24_map;_this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
        controls[] = {
            "RHS_SPO15_handler",
            "CA_BackgroundVehicle",
            "CA_BackgroundVehicleTitle",
            "CA_BackgroundVehicleTitleDark",
            "CA_BackgroundFuel",
            "CA_Vehicle",
            "CA_VehicleRole",
            "CA_HitZones",
            "CA_VehicleTogglesBackground",
            "CA_VehicleToggles",
            "CA_SpeedBackground",
            "CA_SpeedUnits",
            "CA_Speed",
            "CA_ValueFuel",
            "CA_AltBackground",
            "CA_AltUnits",
            "CA_Alt",
            "WeaponInfoControlsGroupRight"
        };
        class RHS_SPO15_handler: RscPicture {
            idc = 8655;
        };
        class CA_VehicleTogglesBackground: CA_VehicleTogglesBackground {
            idc = 1243;
        };
    };
    class RHS_RscUnitInfoAir_RTD_Mi24: RscUnitInfoAirRTDFullDigital {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_fnc_randomRadio;_this spawn rhs_fnc_rwr_spo15;_this spawn rhs_fnc_dynamicObjectDrawing_loop;_this spawn rhs_fnc_mi24_map;[] call RHS_fnc_UI_Options";
        controls[] = {
            "RHS_SPO15_handler",
            "CA_BackgroundVehicle",
            "CA_BackgroundVehicleTitle",
            "CA_BackgroundVehicleTitleDark",
            "CA_BackgroundFuel",
            "CA_Vehicle",
            "CA_VehicleRole",
            "CA_HitZones",
            "CA_VehicleTogglesBackground",
            "CA_VehicleToggles",
            "CA_SpeedBackground",
            "CA_SpeedUnits",
            "CA_Speed",
            "CA_ValueFuel",
            "CA_AltBackground",
            "CA_AltUnits",
            "CA_Alt",
            "CA_Horizon_Lite",
            "CA_Speed_Analogue",
            "CA_Altitude_Analogue",
            "CA_Horizon_Analogue",
            "CA_Stability_Analogue",
            "CA_Compass_Analogue",
            "WeaponInfoControlsGroupRight"
        };
        class RHS_SPO15_handler: RscPicture {
            idc = 8655;
        };
        class CA_VehicleTogglesBackground: CA_VehicleTogglesBackground {
            idc = 1243;
        };
    };
    class RHS_RscUnitInfoAir_RTD_Basic_Mi24: RscUnitInfoAirRTDBasic {
        onLoad = "uinamespace setvariable ['RscUnitInfoAir',_this select 0]; _this spawn RHS_fnc_randomRadio;_this spawn rhs_fnc_rwr_spo15;_this spawn rhs_fnc_mi24_map;_this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
        controls[] = {"RHS_SPO15_handler"};
        class RHS_SPO15_handler: RscPicture {
            idc = 8655;
        };
        class CA_VehicleTogglesBackground: CA_VehicleTogglesBackground {
            idc = 1243;
        };
    };
    class RHS_RscUnitInfoAir_Su25: RscUnitInfoAirPlane {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_fnc_randomRadio;_this spawn rhs_fnc_rwr_spo15;_this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
        controls[] = {
            "RHS_SPO15_handler",
            "CA_BackgroundVehicle",
            "CA_BackgroundVehicleTitle",
            "CA_BackgroundVehicleTitleDark",
            "CA_BackgroundFuel",
            "CA_Vehicle",
            "CA_VehicleRole",
            "CA_HitZones",
            "CA_VehicleTogglesBackground",
            "CA_VehicleToggles",
            "CA_SpeedBackground",
            "CA_SpeedUnits",
            "CA_Speed",
            "CA_ValueFuel",
            "CA_AltBackground",
            "CA_AltUnits",
            "CA_Alt",
            "WeaponInfoControlsGroupRight",
            "CA_Throttle"
        };
        class RHS_SPO15_handler: RscPicture {
            idc = 8655;
        };
        class CA_VehicleTogglesBackground: CA_VehicleTogglesBackground {
            idc = 1243;
        };
    };
    class RHS_RscUnitInfoAir_MiG29S: RscUnitInfoAirPlane {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_fnc_randomRadio;_this spawn rhs_fnc_rwr_spo15;_this spawn rhs_fnc_dynamicObjectDrawing_loop;_this spawn rhs_fnc_mig29_map;_this call rhs_fnc_afterburner;[] call RHS_fnc_UI_Options";
        controls[] = {
            "RHS_SPO15_handler",
            "RHS_Afterburner_handler",
            "CA_BackgroundVehicle",
            "CA_BackgroundVehicleTitle",
            "CA_BackgroundVehicleTitleDark",
            "CA_BackgroundFuel",
            "CA_Vehicle",
            "CA_VehicleRole",
            "CA_HitZones",
            "CA_VehicleTogglesBackground",
            "CA_VehicleToggles",
            "CA_SpeedBackground",
            "CA_SpeedUnits",
            "CA_Speed",
            "CA_ValueFuel",
            "CA_AltBackground",
            "CA_AltUnits",
            "CA_Alt",
            "WeaponInfoControlsGroupRight",
            "CA_Throttle"
        };
        class RHS_SPO15_handler: RscPicture {
            idc = 8655;
        };
        class RHS_Afterburner_handler: RscPicture {
            idc = 8656;
        };
        class CA_VehicleTogglesBackground: CA_VehicleTogglesBackground {
            idc = 1243;
        };
    };
    class RHS_RscUnitInfoAir_MiG29SM: RscUnitInfoAirPlane {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_fnc_randomRadio;_this spawn rhs_fnc_rwr_spo15;_this spawn rhs_fnc_dynamicObjectDrawing_loop;_this spawn rhs_fnc_mig29sm_cockpit;_this call rhs_fnc_afterburner;[] call RHS_fnc_UI_Options";
        controls[] = {
            "RHS_SPO15_handler",
            "RHS_Afterburner_handler",
            "CA_BackgroundVehicle",
            "CA_BackgroundVehicleTitle",
            "CA_BackgroundVehicleTitleDark",
            "CA_BackgroundFuel",
            "CA_Vehicle",
            "CA_VehicleRole",
            "CA_HitZones",
            "CA_VehicleTogglesBackground",
            "CA_VehicleToggles",
            "CA_SpeedBackground",
            "CA_SpeedUnits",
            "CA_Speed",
            "CA_ValueFuel",
            "CA_AltBackground",
            "CA_AltUnits",
            "CA_Alt",
            "WeaponInfoControlsGroupRight",
            "CA_Throttle"
        };
        class RHS_SPO15_handler: RscPicture {
            idc = 8655;
        };
        class RHS_Afterburner_handler: RscPicture {
            idc = 8656;
        };
        class CA_VehicleTogglesBackground: CA_VehicleTogglesBackground {
            idc = 1243;
        };
    };
    class RHS_RscUnitInfoAir_Ka52: RscUnitInfoAir {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_fnc_randomRadio;_this call rhs_fnc_Ka52_handler;_this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
        class CA_VehicleTogglesBackground: CA_VehicleTogglesBackground {
            idc = 1243;
        };
    };
    class RHS_RscUnitInfoAir_Mi28: RscUnitInfoAir {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_fnc_randomRadio;_this call rhs_fnc_Mi28_handler;_this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
        controls[] = {
            "CA_BackgroundVehicle",
            "CA_BackgroundVehicleTitle",
            "CA_BackgroundVehicleTitleDark",
            "CA_BackgroundFuel",
            "CA_Vehicle",
            "CA_VehicleRole",
            "CA_HitZones",
            "CA_VehicleTogglesBackground",
            "CA_VehicleToggles",
            "CA_SpeedBackground",
            "CA_SpeedUnits",
            "CA_Speed",
            "CA_ValueFuel",
            "CA_AltBackground",
            "CA_AltUnits",
            "CA_Alt",
            "WeaponInfoControlsGroupRight",
            "RHS_WheelBrakes_SFM"
        };
        class RHS_WheelBrakes_SFM: RscPicture {
            idc = 10101;
            text = "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\WheelBreakIconOn_ca.paa";
            colorText[] = {
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
            };
            x = "4.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable ['GUI_GRID_VEHICLE_X',		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
            y = "3.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable ['GUI_GRID_VEHICLE_Y',		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
            w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
            h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class CA_VehicleTogglesBackground: CA_VehicleTogglesBackground {
            idc = 1243;
        };
    };
    class RHS_RscUnitInfoAir_PAKFA: RscUnitInfoAirPlane {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_fnc_randomRadio;_this call rhs_fnc_pakfa_init;_this spawn rhs_fnc_dynamicObjectDrawing_loop;_this call rhs_fnc_afterburner;[] call RHS_fnc_UI_Options";
        controls[] = {
            "RHS_Afterburner_handler",
            "CA_BackgroundVehicle",
            "CA_BackgroundVehicleTitle",
            "CA_BackgroundVehicleTitleDark",
            "CA_BackgroundFuel",
            "CA_Vehicle",
            "CA_VehicleRole",
            "CA_HitZones",
            "CA_VehicleTogglesBackground",
            "CA_VehicleToggles",
            "CA_SpeedBackground",
            "CA_SpeedUnits",
            "CA_Speed",
            "CA_ValueFuel",
            "CA_AltBackground",
            "CA_AltUnits",
            "CA_Alt",
            "WeaponInfoControlsGroupRight",
            "CA_Throttle"
        };
        class RHS_Afterburner_handler: RscPicture {
            idc = 8656;
        };
        class CA_VehicleTogglesBackground: CA_VehicleTogglesBackground {
            idc = 1243;
        };
    };
    class RHS_RscUnitInfoEastTankCompass: RHS_RscUnitInfoEastTank {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_1G42; ";
        class Objects {
            class Bgr {
                idc = 411;
                type = 82;
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\bg.p3d";
                scale = 0.29;
                direction[] = {0, 0, 1};
                up[] = {0, 1, 0};
                x = "0.1716+safezoneX";
                y = "0.3751+safezoneY";
                z = 0.103;
                xBack = 0.5;
                yBack = 0.5;
                zBack = 0;
                inBack = 0;
                enableZoom = 0;
                zoomDuration = 4.001;
            };
            class Com: Bgr {
                idc = 412;
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\com.p3d";
                z = 0.102;
            };
            class Gun: Bgr {
                idc = 413;
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\gun.p3d";
                z = 0.101;
            };
            class Compass: Bgr {
                idc = 211;
                x = "0.143757 + safezoneX";
                y = "0.706185+safezoneY";
                z = 0.1025;
                direction[] = {0.406737, 0, -0.913545};
                up[] = {0, 1, 0};
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\gpk59_compass.p3d";
            };
            class Compass_wheel: Compass {
                idc = 212;
                z = 0.1021;
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\gpk59_wheel.p3d";
            };
        };
    };
    class RHS_RscInfoSprut: RHS_RscUnitInfoEastTank {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_compass_sprutsd;";
        class Objects {
            class Bgr {
                idc = 411;
                type = 82;
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\sprut\bg.p3d";
                scale = 0.29;
                direction[] = {0, 0, 1};
                up[] = {0, 1, 0};
                x = "0.1716+safezoneX";
                y = "0.3751+safezoneY";
                z = 0.103;
                xBack = 0.5;
                yBack = 0.5;
                zBack = 0;
                inBack = 0;
                enableZoom = 0;
                zoomDuration = 4.001;
            };
            class Com: Bgr {
                idc = 412;
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\sprut\com.p3d";
                z = 0.102;
            };
            class Gun: Bgr {
                idc = 413;
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\sprut\gun.p3d";
                z = 0.101;
            };
            class Compass: Bgr {
                idc = 211;
                x = "0.143757 + safezoneX";
                y = "0.706185+safezoneY";
                z = 0.1025;
                direction[] = {0.406737, 0, -0.913545};
                up[] = {0, 1, 0};
                scale = 0.3;
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\gpk59_compass.p3d";
            };
            class Compass_wheel: Compass {
                idc = 212;
                z = 0.1021;
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\gpk59_wheel.p3d";
            };
        };
    };
    class RHS_RscInfoBMP3: RHS_RscInfoSprut {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_compass_sprutsd;_this call RHS_fnc_pipHandler_BMP3;";
    };
    class RHS_RscInfoBMP3M: RHS_RscInfoSprut {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_compass_sprutsd;_this call RHS_fnc_pipHandler_BMP3M;";
    };
    class RHS_RscInfoT72: RHS_RscUnitInfoEastTank {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_compass_t72;";
        class Objects {
            class Bgr {
                idc = 411;
                type = 82;
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\bg.p3d";
                scale = 0.29;
                direction[] = {0, 0, 1};
                up[] = {0, 1, 0};
                x = "0.1716+safezoneX";
                y = "0.3751+safezoneY";
                z = 0.103;
                xBack = 0.5;
                yBack = 0.5;
                zBack = 0;
                inBack = 0;
                enableZoom = 0;
                zoomDuration = 4.001;
            };
            class Com: Bgr {
                idc = 412;
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\com.p3d";
                z = 0.102;
            };
            class Gun: Bgr {
                idc = 413;
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\gun.p3d";
                z = 0.101;
            };
            class Compass: Bgr {
                idc = 211;
                x = "0.143757 + safezoneX";
                y = "0.706185+safezoneY";
                z = 0.1025;
                direction[] = {0.406737, 0, -0.913545};
                up[] = {0, 1, 0};
                scale = 0.3;
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\gpk59_compass.p3d";
            };
            class Compass_wheel: Compass {
                idc = 212;
                z = 0.1021;
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\gpk59_wheel.p3d";
            };
        };
    };
    class RHS_RscInfoBMP2: RHS_RscInfoT72 {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_compass_sprutsd; _this call rhs_fnc_cmLoad";
    };
    class RHS_RscInfoT80: RHS_RscInfoT72 {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_compass_t80; _this call RHS_fnc_cmLoad";
    };
    class RHS_RscInfoT90: RHS_RscInfoT72 {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_compass_sprutsd; _this call rhs_fnc_cmLoad";
    };
    class RHS_RscWeaponSprutSD_FCS: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_sprutsd";
        controls[] = {"CA_OpticsZoom", "CA_IGUI_elements_group"};
        class CA_OpticsZoom: RscText {
            idc = 180;
            style = 1;
            colorText[] = {0.706, 0.0745, 0.0196, 1};
            sizeEx = "0.038*SafezoneH";
            shadow = 0;
            font = "EtelkaMonospacePro";
            text = "4.5";
            x = "43.85 * 		(0.01875 * SafezoneH)";
            y = "19.6 * 		(0.025 * SafezoneH)";
            w = "0* 		(0.01875 * SafezoneH)";
            h = "0 * 		(0.025 * SafezoneH)";
        };
        class CA_IGUI_elements_group: RscControlsGroup {
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "53.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            idc = 170;
            class VScrollbar {
                autoScrollSpeed = -1;
                autoScrollDelay = 5;
                autoScrollRewind = 0;
                color[] = {1, 1, 1, 0};
                width = 0.001;
            };
            class HScrollbar {
                color[] = {1, 1, 1, 0};
                height = 0.001;
            };
            class Controls {
                class CA_Laser: RscText {
                    idc = 158;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "\a3\weapons_f\acc\data\collimdot_red_ca.paa";
                    x = "25.85 *   (0.01875 * Safezoneh)";
                    y = "19.27 *   (0.025 * SafezoneH)";
                    w = "1.5 * 		(0.01875 * SafezoneH)";
                    h = "1.5 * 		(0.025 * SafezoneH)";
                };
                class CA_Distance: RscOpticsValue {
                    idc = 151;
                    style = 1;
                    shadow = 0;
                    colorText[] = {1, 0, 0, 1};
                    font = "rhs_digital_font";
                    sizeEx = "0.039*SafezoneH";
                    x = "16.98 *   (0.01875 * Safezoneh)";
                    y = "-3.75 *   (0.025 * SafezoneH)";
                    w = "0";
                    h = "0";
                };
                class CA_OpticsMode: CA_OpticsZoom {
                    idc = 154;
                };
                class RHS_Ammo: CA_Distance {
                    idc = 3;
                    text = "$";
                    x = "26.18 *   (0.01875 * Safezoneh)";
                    y = "3.45 *   (0.025 * SafezoneH)";
                    w = "1.9 *   (0.01875 * SafezoneH)";
                    h = "1.9 *   (0.025 * SafezoneH)";
                };
                class RHS_Distance: CA_Distance {
                    idc = 4;
                    text = "$$$$";
                    w = "12.9 *   (0.01875 * SafezoneH)";
                    h = "12.9 *   (0.025 * SafezoneH)";
                };
                class RHS_NightSight: RscPicture {
                    idc = 5;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    shadow = 0;
                    font = "rhs_digital_font";
                    colorText[] = {0.5, 1, 1, 0};
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42n_b_static.paa";
                    x = "12.08 *   (0.01875 * Safezoneh)";
                    y = "5.55 *   (0.025 * SafezoneH)";
                    w = "29 *   (0.01875 * SafezoneH)";
                    h = "29 *   (0.025 * SafezoneH)";
                };
                class RHS_NightSight_Moving: RHS_NightSight {
                    idc = 6;
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42n_moving.paa";
                };
            };
        };
        class Objects {
            class AmmoSelector_bgr {
                idc = 311;
                type = 82;
                x = "0.535152-safezoneX";
                y = "0.140276+safezoneY";
                z = 0.1;
                scale = 0.15;
                direction[] = {0, 0, -1};
                up[] = {0, 1, 0};
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_bg.p3d";
                xBack = 0.5;
                yBack = 0.5;
                zBack = 0;
                inBack = 0;
                enableZoom = 0;
                zoomDuration = 4.001;
            };
            class AmmoSelector: AmmoSelector_bgr {
                idc = 312;
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch.p3d";
            };
            class AutoloaderSelector: AmmoSelector_bgr {
                idc = 313;
                x = "0.335152-safezoneX";
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_autoloader_on.p3d";
            };
        };
    };
    class RHS_RscWeapon1k13_FCS: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_1k13_3s_sprut";
        controls[] = {"CA_OpticsZoom", "CA_IGUI_elements_group"};
        class CA_OpticsZoom: RscText {
            idc = 180;
            style = 1;
            colorText[] = {0.706, 0.0745, 0.0196, 1};
            sizeEx = "0.038*SafezoneH";
            shadow = 0;
            font = "EtelkaMonospacePro";
            text = "4.5";
            x = "43.85 * 		(0.01875 * SafezoneH)";
            y = "19.6 * 		(0.025 * SafezoneH)";
            w = "0* 		(0.01875 * SafezoneH)";
            h = "0 * 		(0.025 * SafezoneH)";
        };
        class CA_IGUI_elements_group: RscControlsGroup {
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "53.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            idc = 170;
            class VScrollbar {
                autoScrollSpeed = -1;
                autoScrollDelay = 5;
                autoScrollRewind = 0;
                color[] = {1, 1, 1, 0};
                width = 0.001;
            };
            class HScrollbar {
                color[] = {1, 1, 1, 0};
                height = 0.001;
            };
            class Controls {
                class CA_Distance: RscOpticsValue {
                    idc = 151;
                    style = 1;
                    shadow = 0;
                    colorText[] = {1, 0, 0, 1};
                    font = "rhs_digital_font";
                    sizeEx = "0.039*SafezoneH";
                    x = "16.98 *   (0.01875 * Safezoneh)";
                    y = "-3.75 *   (0.025 * SafezoneH)";
                    w = "0";
                    h = "0";
                };
                class RHS_Ammo: CA_Distance {
                    idc = 3;
                    text = "$";
                    type = 13;
                    size = "0.039*SafezoneH";
                    shadow = 1;
                    x = "25.16 *   (0.01875 * Safezoneh)";
                    y = "3.45 *   (0.025 * SafezoneH)";
                    w = "2.9 *   (0.01875 * SafezoneH)";
                    h = "1.9 *   (0.025 * SafezoneH)";
                    class Attributes {
                        font = "rhs_digital_font";
                        color = "#ff0000";
                        align = "center";
                        shadow = "false";
                    };
                };
                class RHS_Distance: CA_Distance {
                    idc = 4;
                    text = "$$$$";
                    w = "12.9 *   (0.01875 * SafezoneH)";
                    h = "12.9 *   (0.025 * SafezoneH)";
                };
                class CA_OpticsMode: CA_OpticsZoom {
                    idc = 154;
                };
            };
        };
    };
    class RHS_RscWeapon1k13_bmp3_FCS: RHS_RscWeapon1k13_FCS {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_1k13_3s_bmp3";
    };
    class RHS_RscWeaponT72_FCS: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_rF_t72";
        controls[] = {"CA_Distance", "CA_IGUI_elements_group", "CA_OpticsZoom"};
        class CA_OpticsZoom: RscText {
            idc = 180;
            style = 1;
            colorText[] = {0.706, 0.0745, 0.0196, 1};
            sizeEx = "0.038*SafezoneH";
            shadow = 0;
            font = "EtelkaMonospacePro";
            text = "4.5";
            x = "43.85 * 		(0.01875 * SafezoneH)";
            y = "19.6 * 		(0.025 * SafezoneH)";
            w = "0* 		(0.01875 * SafezoneH)";
            h = "0 * 		(0.025 * SafezoneH)";
        };
        class CA_IGUI_elements_group: RscControlsGroup {
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "53.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            idc = 170;
            class VScrollbar {
                autoScrollSpeed = -1;
                autoScrollDelay = 5;
                autoScrollRewind = 0;
                color[] = {1, 1, 1, 0};
                width = 0.001;
            };
            class HScrollbar {
                color[] = {1, 1, 1, 0};
                height = 0.001;
            };
            class Controls {
                class CA_Laser: RscText {
                    idc = 258;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "\rhsafrf\addons\rhs_t72\data\RF\TPD_K1_lasermark_6x.paa";
                    x = "26.4 *   (0.01875 * Safezoneh)";
                    y = "19.85 *   (0.025 * SafezoneH)";
                    w = "0.5 * 		(0.01875 * SafezoneH)";
                    h = "0.5 * 		(0.025 * SafezoneH)";
                };
                class CA_OpticsMode: CA_OpticsZoom {
                    idc = 154;
                };
            };
        };
        class CA_Distance: RscOpticsValue {
            idc = 151;
            style = 2;
            colorText[] = {1, 0.15, 0.15, 0.65};
            shadow = 0;
            font = "EtelkaMonospacePro";
            x = 0;
            y = "(SafezoneY+SafezoneH) - 0.195";
            w = 0;
            h = 0;
        };
        class Objects {
            class AmmoSelector_bgr {
                idc = 311;
                type = 82;
                x = "0.535152-safezoneX";
                y = "0.140276+safezoneY";
                z = 0.1;
                scale = 0.15;
                direction[] = {0, 0, -1};
                up[] = {0, 1, 0};
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_bg.p3d";
                xBack = 0.5;
                yBack = 0.5;
                zBack = 0;
                inBack = 0;
                enableZoom = 0;
                zoomDuration = 4.001;
            };
            class AmmoSelector: AmmoSelector_bgr {
                idc = 312;
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch.p3d";
            };
        };
    };
    class RHS_RscWeaponT72_Comm: RscUnitInfo {
        idd = 300;
        onLoad = "[] call RHS_fnc_comm_t72";
        controls[] = {"CA_Zeroing"};
    };
    class rhs_gui_optic_t80_rangefinder: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_1G42";
        controls[] = {"CA_IGUI_elements_group"};
        class CA_IGUI_elements_group: RscControlsGroup {
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "53.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            idc = 170;
            class VScrollbar {
                autoScrollSpeed = -1;
                autoScrollDelay = 5;
                autoScrollRewind = 0;
                color[] = {1, 1, 1, 0};
                width = 0.001;
            };
            class HScrollbar {
                color[] = {1, 1, 1, 0};
                height = 0.001;
            };
            class Controls {
                class CA_Distance: RscOpticsValue {
                    idc = 151;
                    style = 1;
                    shadow = 0;
                    colorText[] = {1, 0, 0, 1};
                    font = "rhs_digital_font";
                    sizeEx = "0.039*SafezoneH";
                    x = "18.65 *   (0.01875 * Safezoneh)";
                    y = "30.45 *   (0.025 * SafezoneH)";
                    w = "0";
                    h = "0";
                };
                class CA_OpticsZoom: RscText {
                    idc = 180;
                    style = 1;
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    sizeEx = "0.038*SafezoneH";
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "4.5";
                    x = "43.85 * 		(0.01875 * SafezoneH)";
                    y = "19.6 * 		(0.025 * SafezoneH)";
                    w = "0";
                    h = "0";
                };
                class CA_OpticsMode: CA_OpticsZoom {
                    idc = 154;
                };
                class RHS_Sight: RscPicture {
                    idc = 1;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "rhs_digital_font";
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42_moving_ca.paa";
                    x = "10.32 *   (0.01875 * Safezoneh)";
                    y = "-3.95 *   (0.025 * SafezoneH)";
                    w = "29 *   (0.01875 * SafezoneH)";
                    h = "29 *   (0.025 * SafezoneH)";
                };
                class RHS_ReadyLight: RscPicture {
                    idc = 2;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42_readylight_ca.paa";
                    x = "18.75 *   (0.01875 * SafezoneH)";
                    y = "34.00 *   (0.025 * SafezoneH)";
                    w = "1.9 *   (0.01875 * SafezoneH)";
                    h = "1.9 *   (0.025 * SafezoneH)";
                };
                class RHS_Ammo: CA_Distance {
                    idc = 3;
                    text = "$";
                    x = "21.85 *   (0.01875 * Safezoneh)";
                    y = "36 *   (0.025 * SafezoneH)";
                    w = "1.9 *   (0.01875 * SafezoneH)";
                    h = "1.9 *   (0.025 * SafezoneH)";
                };
                class RHS_Distance: CA_Distance {
                    idc = 4;
                    text = "$$$$";
                    w = "12.9 *   (0.01875 * SafezoneH)";
                    h = "12.9 *   (0.025 * SafezoneH)";
                };
                class RHS_NightSight: RHS_Sight {
                    idc = 5;
                    colorText[] = {0.5, 1, 1, 0};
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42n_b_static.paa";
                    x = "12.08 *   (0.01875 * Safezoneh)";
                    y = "5.55 *   (0.025 * SafezoneH)";
                    w = "29 *   (0.01875 * SafezoneH)";
                    h = "29 *   (0.025 * SafezoneH)";
                };
                class RHS_NightSight_Moving: RHS_NightSight {
                    idc = 6;
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42n_moving.paa";
                };
            };
        };
        class Objects {
            class AmmoSelector_bgr {
                idc = 311;
                type = 82;
                x = "0.535152-safezoneX";
                y = "0.140276+safezoneY";
                z = 0.1;
                scale = 0.15;
                direction[] = {0, 0, -1};
                up[] = {0, 1, 0};
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_bg_1g42.p3d";
                xBack = 0.5;
                yBack = 0.5;
                zBack = 0;
                inBack = 0;
                enableZoom = 0;
                zoomDuration = 4.001;
            };
            class AmmoSelector: AmmoSelector_bgr {
                idc = 312;
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_1g42.p3d";
            };
            class AutoloaderSelector: AmmoSelector_bgr {
                idc = 313;
                x = "0.335152-safezoneX";
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_autoloader_on.p3d";
            };
        };
    };
    class rhs_gui_optic_t80u_rangefinder: rhs_gui_optic_t80_rangefinder {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0,'RHS_T80B_Recoil'] call RHS_fnc_sight_1G46";
        controls[] = {"CA_IGUI_elements_group"};
        class CA_IGUI_elements_group: CA_IGUI_elements_group {
            class Controls: Controls {
                class CA_Distance: RscOpticsValue {
                    idc = 151;
                    style = 1;
                    shadow = 0;
                    colorText[] = {1, 0, 0, 1};
                    font = "rhs_digital_font";
                    sizeEx = "0.039*SafezoneH";
                    x = "17.65 *   (0.01875 * Safezoneh)";
                    y = "30.45 *   (0.025 * SafezoneH)";
                    w = "0";
                    h = "0";
                };
                class CA_OpticsZoom: RscText {
                    idc = 180;
                    style = 1;
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    sizeEx = "0.038*SafezoneH";
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "4.5";
                    x = "43.85 * 		(0.01875 * SafezoneH)";
                    y = "19.6 * 		(0.025 * SafezoneH)";
                    w = "0";
                    h = "0";
                };
                class CA_OpticsMode: CA_OpticsZoom {
                    idc = 154;
                };
                class RHS_Sight: RscPicture {
                    idc = 1;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "rhs_digital_font";
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g46_moving_ca.paa";
                    x = "10.32 *   (0.01875 * Safezoneh)";
                    y = "-3.95 *   (0.025 * SafezoneH)";
                    w = "29 *   (0.01875 * SafezoneH)";
                    h = "29 *   (0.025 * SafezoneH)";
                };
                class RHS_ReadyLight: RscPicture {
                    idc = 2;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g46_readylight_ca.paa";
                    x = "17.65 *   (0.01875 * SafezoneH)";
                    y = "36.00 *   (0.025 * SafezoneH)";
                    w = "1.7 *   (0.01875 * SafezoneH)";
                    h = "1.7 *   (0.025 * SafezoneH)";
                };
                class RHS_Ammo: CA_Distance {
                    idc = 3;
                    text = "$";
                    x = "21.65 *   (0.01875 * Safezoneh)";
                    y = "36 *   (0.025 * SafezoneH)";
                    w = "1.9 *   (0.01875 * SafezoneH)";
                    h = "1.9 *   (0.025 * SafezoneH)";
                };
                class RHS_Distance: CA_Distance {
                    idc = 4;
                    text = "$$$$";
                    w = "12.9 *   (0.01875 * SafezoneH)";
                    h = "12.9 *   (0.025 * SafezoneH)";
                };
                class RHS_NightSight: RHS_Sight {
                    idc = 5;
                    colorText[] = {0.5, 1, 1, 0};
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42n_b_static.paa";
                    x = "12.08 *   (0.01875 * Safezoneh)";
                    y = "5.55 *   (0.025 * SafezoneH)";
                    w = "29 *   (0.01875 * SafezoneH)";
                    h = "29 *   (0.025 * SafezoneH)";
                };
                class RHS_NightSight_Moving: RHS_NightSight {
                    idc = 6;
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42n_moving.paa";
                };
            };
        };
        class Objects {
            class AmmoSelector_bgr {
                idc = 311;
                type = 82;
                x = "0.535152-safezoneX";
                y = "0.140276+safezoneY";
                z = 0.1;
                scale = 0.15;
                direction[] = {0, 0, -1};
                up[] = {0, 1, 0};
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_bg_1g42.p3d";
                xBack = 0.5;
                yBack = 0.5;
                zBack = 0;
                inBack = 0;
                enableZoom = 0;
                zoomDuration = 4.001;
            };
            class AmmoSelector: AmmoSelector_bgr {
                idc = 312;
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_1g42.p3d";
            };
            class AutoloaderSelector: AmmoSelector_bgr {
                idc = 313;
                x = "0.335152-safezoneX";
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_autoloader_on.p3d";
            };
        };
    };
    class rhs_gui_optic_t90_rangefinder: rhs_gui_optic_t80u_rangefinder {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0,'Recoil'] call RHS_fnc_sight_1G46";
    };
    class RHS_RscWeaponBMP2_TKN3_FCS: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_fnc_sight_BMP2_TKN3";
        controls[] = {"CA_IGUI_elements_group"};
        class CA_IGUI_elements_group: RscControlsGroup {
            idc = 170;
            class VScrollbar: VScrollbar {
                width = 0;
            };
            class HScrollbar: HScrollbar {
                height = 0;
            };
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "53.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            class controls {
                class Sight: RscPicture {
                    idc = 1;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {0.7, 0.07, 0.0196, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1pz3_1x_ca.paa";
                    x = "11.0 *   (0.01875 * Safezoneh)";
                    y = "4.7 *   (0.025 * SafezoneH)";
                    w = "31.5 *   (0.01875 * SafezoneH)";
                    h = "31.5 *   (0.025 * SafezoneH)";
                };
                class SightBar: RscPicture {
                    idc = 2;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1pz3_horizontal.paa";
                    x = "8.3 *   (0.01875 * SafezoneH)";
                    y = "2.1 *   (0.025 * SafezoneH)";
                    w = "35.5 *   (0.01875 * SafezoneH)";
                    h = "35.5 *   (0.025 * SafezoneH)";
                };
                class CA_OpticsZoom: RscText {
                    idc = 154;
                    style = 1;
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    sizeEx = "0.038*SafezoneH";
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    w = "0";
                    h = "0";
                };
                class RHS_ControlNumber: CA_OpticsZoom {
                    idc = 1000;
                    text = "RHS_TKN3";
                };
            };
        };
    };
    class RHS_RscWeaponTKN3_FCS: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_fnc_sight_TKN3";
        controls[] = {"CA_IGUI_elements_group"};
        class CA_IGUI_elements_group: RscControlsGroup {
            idc = 170;
            class VScrollbar: VScrollbar {
                width = 0;
            };
            class HScrollbar: HScrollbar {
                height = 0;
            };
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "53.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            class controls {
                class CA_OpticsZoom: RscText {
                    idc = 154;
                    style = 1;
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    sizeEx = "0.038*SafezoneH";
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "4.5";
                    x = "43.85 * 		(0.01875 * SafezoneH)";
                    y = "19.6 * 		(0.025 * SafezoneH)";
                    w = "0";
                    h = "0";
                };
                class RHS_ControlNumber: CA_OpticsZoom {
                    idc = 1000;
                    text = "RHS_TKN3";
                };
            };
        };
    };
    class rhs_gui_optic_TKN4S_rangefinder: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_TKN4s";
        controls[] = {"CA_IGUI_elements_group", "CA_Zeroing"};
        class CA_Zeroing: RscText {
            idc = 168;
            colorText[] = {
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
            };
            x = "3.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_X"",		((safezoneX + safezoneW) - 		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 4.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
            y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
            w = "3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
            h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class CA_IGUI_elements_group: RscControlsGroup {
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "53.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            idc = 170;
            class VScrollbar {
                autoScrollSpeed = -1;
                autoScrollDelay = 5;
                autoScrollRewind = 0;
                color[] = {1, 1, 1, 0};
                width = 0.001;
            };
            class HScrollbar {
                color[] = {1, 1, 1, 0};
                height = 0.001;
            };
            class Controls {
                class CA_Distance: RscOpticsValue {
                    idc = 151;
                    style = 1;
                    shadow = 0;
                    colorText[] = {1, 0, 0, 1};
                    font = "rhs_digital_font";
                    sizeEx = "0.039*SafezoneH";
                    x = "18.05 *   (0.01875 * Safezoneh)";
                    y = "29.6 *   (0.025 * SafezoneH)";
                    w = "0";
                    h = "0";
                };
                class CA_OpticsZoom: RscText {
                    idc = 180;
                    style = 1;
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    sizeEx = "0.038*SafezoneH";
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "4.5";
                    x = "43.85 * 		(0.01875 * SafezoneH)";
                    y = "19.6 * 		(0.025 * SafezoneH)";
                    w = "0";
                    h = "0";
                };
                class CA_OpticsMode: CA_OpticsZoom {
                    idc = 154;
                };
                class RHS_Sight: RscPicture {
                    idc = 1;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "rhs_digital_font";
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_tkn4s_moving.paa";
                    x = "11.16 *   (0.01875 * Safezoneh)";
                    y = "2.95 *   (0.025 * SafezoneH)";
                    w = "31 *   (0.01875 * SafezoneH)";
                    h = "31 *   (0.025 * SafezoneH)";
                };
                class RHS_ReadyLight: RscPicture {
                    idc = 2;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g46_readylight_ca.paa";
                    x = "20.85 *   (0.01875 * SafezoneH)";
                    y = "35.20 *   (0.025 * SafezoneH)";
                    w = "1.55 *   (0.01875 * SafezoneH)";
                    h = "1.55 *   (0.025 * SafezoneH)";
                };
                class RHS_Ammo: CA_Distance {
                    idc = 3;
                    text = "$";
                    x = "23.55 *   (0.01875 * Safezoneh)";
                    y = "35.3 *   (0.025 * SafezoneH)";
                    w = "1.5 *   (0.01875 * SafezoneH)";
                    h = "1.5 *   (0.025 * SafezoneH)";
                };
                class RHS_Distance: CA_Distance {
                    idc = 4;
                    text = "$$$$";
                    w = "12.9 *   (0.01875 * SafezoneH)";
                    h = "12.9 *   (0.025 * SafezoneH)";
                };
                class RHS_NightSight: RHS_Sight {
                    idc = 5;
                    colorText[] = {0.5, 1, 1, 0};
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42n_b_static.paa";
                    x = "12.08 *   (0.01875 * Safezoneh)";
                    y = "5.55 *   (0.025 * SafezoneH)";
                    w = "29 *   (0.01875 * SafezoneH)";
                    h = "29 *   (0.025 * SafezoneH)";
                };
                class RHS_NightSight_Moving: RHS_NightSight {
                    idc = 6;
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42n_moving.paa";
                };
            };
        };
    };
    class rhs_gui_optic_1d13 {
        idd = 300;
        controls[] = {"CA_IGUI_elements_group", "CA_Zeroing"};
        class CA_IGUI_elements_group: RscControlsGroup {
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "53.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            idc = 170;
            class VScrollbar {
                autoScrollSpeed = -1;
                autoScrollDelay = 5;
                autoScrollRewind = 0;
                color[] = {1, 0, 0, 0};
                width = 0.001;
            };
            class HScrollbar {
                color[] = {1, 0, 0, 0};
                height = 0.001;
            };
            class Controls {
                class CA_Distance: RscOpticsValue {
                    idc = 151;
                    style = 1;
                    shadow = 0;
                    font = "rhs_digital_font";
                    colorText[] = {1, 0, 0, 1};
                    sizeEx = "0.038*SafezoneH";
                    x = "-0.89*   (0.01875 * Safezoneh)";
                    y = "16*   (0.025 * SafezoneH)";
                    w = "14.9 *   (0.01875 * SafezoneH)";
                    h = "5.9*   (0.025 * SafezoneH)";
                };
            };
        };
        class CA_Zeroing: RscText {
            colorText[] = {
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
            };
            idc = 168;
            style = 1;
            x = "(SafeZoneW + SafeZoneX) - (1 - 0.761)";
            y = "0.095 + SafeZoneY";
            w = 0.214;
            h = 0.039;
        };
    };
    class rhs_gui_optic_2s3_computer: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_fcs_2s3";
        controls[] = {"CA_IGUI_elements_group"};
        class CA_IGUI_elements_group: RscControlsGroup {
            idc = 170;
            class VScrollbar: VScrollbar {
                width = 0;
            };
            class HScrollbar: HScrollbar {
                height = 0;
            };
            x = "((safezoneX + safezoneW) - (16.4 * (((safezoneW / safezoneH) min 1.2) / 40)) - 0.5 * (((safezoneW /safezoneH) min 1.2) / 40))";
            y = "0 *   (0.025 * SafezoneH) +   (SafezoneY)";
            w = "17 * (((safezoneW / safezoneH) min 1.2) / 40)";
            h = "17 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            class controls {
                class RHS_ComputerBG: RscPicture {
                    idc = 1;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_komputer2s3.paa";
                    x = 0;
                    y = 0;
                    w = "13 *   (0.01875 * SafezoneH)";
                    h = "13 *   (0.025 * SafezoneH)";
                };
                class CA_Distance: RscText {
                    idc = 173;
                    style = 1;
                    sizeEx = "0.068*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "rhs_digital_font";
                    text = "$$$$$";
                    x = "-6 * 		(0.01875 * SafezoneH)";
                    y = "0.25 * 		(0.025 * SafezoneH)";
                    w = "0 * 		(0.01875 * SafezoneH)";
                    h = "0 * 		(0.025 * SafezoneH)";
                };
                class RHS_Distance: CA_Distance {
                    idc = 2;
                    text = "$$$$";
                    w = "13 * 		(0.01875 * SafezoneH)";
                    h = "13 * 		(0.025 * SafezoneH)";
                };
                class CA_Elev: RscText {
                    idc = 175;
                    style = 1;
                    sizeEx = "0.032*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "rhs_digital_font";
                    text = "-80.5";
                    x = "-2 * 		(0.01875 * SafezoneH)";
                    y = "-0.4 * 		(0.025 * SafezoneH)";
                    w = "13 * 		(0.01875 * SafezoneH)";
                    h = "13 * 		(0.025 * SafezoneH)";
                };
                class CA_Elev_Need: RscText {
                    idc = 176;
                    style = 1;
                    sizeEx = "0.032*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "rhs_digital_font";
                    text = "-35.4";
                    x = "-2 * 		(0.01875 * SafezoneH)";
                    y = "0.95 * 		(0.025 * SafezoneH)";
                    w = "0 * 		(0.01875 * SafezoneH)";
                    h = "0 * 		(0.025 * SafezoneH)";
                };
                class RHS_Elev_Need: CA_Elev_Need {
                    idc = 3;
                    text = "$$$$$";
                    w = "13 * 		(0.01875 * SafezoneH)";
                    h = "13 * 		(0.025 * SafezoneH)";
                };
            };
        };
    };
    class rhs_gui_optic_2s3_op5_computer: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_fcs_2s3";
        controls[] = {"CA_IGUI_elements_group"};
        class CA_IGUI_elements_group: RscControlsGroup {
            idc = 170;
            class VScrollbar: VScrollbar {
                width = 0;
            };
            class HScrollbar: HScrollbar {
                height = 0;
            };
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "73.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            class controls {
                class RHS_ComputerBG: RscPicture {
                    idc = 1;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_komputer2s3.paa";
                    x = "(48) * 		(0.01875 * SafezoneH)";
                    y = 0;
                    w = "13 *   (0.01875 * SafezoneH)";
                    h = "13 *   (0.025 * SafezoneH)";
                };
                class CA_Distance: RscText {
                    idc = 173;
                    style = 1;
                    sizeEx = "0.068*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "rhs_digital_font";
                    text = "$$$$$";
                    x = "(-6 + 48) * 		(0.01875 * SafezoneH)";
                    y = "0.25 * 		(0.025 * SafezoneH)";
                    w = "0 * 		(0.01875 * SafezoneH)";
                    h = "0 * 		(0.025 * SafezoneH)";
                };
                class RHS_Distance: CA_Distance {
                    idc = 2;
                    text = "$$$$";
                    w = "13 * 		(0.01875 * SafezoneH)";
                    h = "13 * 		(0.025 * SafezoneH)";
                };
                class CA_OpticsMode: CA_Distance {
                    idc = 154;
                };
                class RHS_Horizontal: RscPicture {
                    idc = 4;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {0.7, 0, 0, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1pz3_horizontal.paa";
                    x = "3.75 *   (0.01875 * Safezoneh)";
                    y = "-10.15 *   (0.025 * SafezoneH)";
                    w = "45.9 *   (0.01875 * SafezoneH)";
                    h = "45.9 *   (0.025 * SafezoneH)";
                };
                class RHS_Reticle: RHS_Horizontal {
                    idc = 5;
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_op5_38_ca.paa";
                    y = "-2.95 *   (0.025 * SafezoneH)";
                };
                class CA_Elev: RscText {
                    idc = 175;
                    style = 1;
                    sizeEx = "0.032*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "rhs_digital_font";
                    text = "-80.5";
                    x = "(-2 + 48) * 		(0.01875 * SafezoneH)";
                    y = "-0.4 * 		(0.025 * SafezoneH)";
                    w = "13 * 		(0.01875 * SafezoneH)";
                    h = "13 * 		(0.025 * SafezoneH)";
                };
                class CA_Elev_Need: RscText {
                    idc = 176;
                    style = 1;
                    sizeEx = "0.032*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "rhs_digital_font";
                    text = "-35.4";
                    x = "(-2 + 48) * 		(0.01875 * SafezoneH)";
                    y = "0.95 * 		(0.025 * SafezoneH)";
                    w = "0 * 		(0.01875 * SafezoneH)";
                    h = "0 * 		(0.025 * SafezoneH)";
                };
                class RHS_Elev_Need: CA_Elev_Need {
                    idc = 3;
                    text = "$$$$$";
                    w = "13 * 		(0.01875 * SafezoneH)";
                    h = "13 * 		(0.025 * SafezoneH)";
                };
            };
        };
    };
    class rhs_gui_optic_2s1_op5_computer: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_fcs_2s1";
        controls[] = {"CA_IGUI_elements_group"};
        class CA_IGUI_elements_group: RscControlsGroup {
            idc = 170;
            class VScrollbar: VScrollbar {
                width = 0;
            };
            class HScrollbar: HScrollbar {
                height = 0;
            };
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "73.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            class controls {
                class RHS_ComputerBG: RscPicture {
                    idc = 1;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_komputer2s3.paa";
                    x = "(48) * 		(0.01875 * SafezoneH)";
                    y = 0;
                    w = "13 *   (0.01875 * SafezoneH)";
                    h = "13 *   (0.025 * SafezoneH)";
                };
                class CA_Distance: RscText {
                    idc = 173;
                    style = 1;
                    sizeEx = "0.068*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "rhs_digital_font";
                    text = "$$$$$";
                    x = "(-6 + 48) * 		(0.01875 * SafezoneH)";
                    y = "0.25 * 		(0.025 * SafezoneH)";
                    w = "0 * 		(0.01875 * SafezoneH)";
                    h = "0 * 		(0.025 * SafezoneH)";
                };
                class RHS_Distance: CA_Distance {
                    idc = 2;
                    text = "$$$$";
                    w = "13 * 		(0.01875 * SafezoneH)";
                    h = "13 * 		(0.025 * SafezoneH)";
                };
                class CA_OpticsMode: CA_Distance {
                    idc = 154;
                };
                class RHS_Horizontal: RscPicture {
                    idc = 4;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {0.7, 0, 0, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1pz3_horizontal.paa";
                    x = "3.75 *   (0.01875 * Safezoneh)";
                    y = "-10.15 *   (0.025 * SafezoneH)";
                    w = "45.9 *   (0.01875 * SafezoneH)";
                    h = "45.9 *   (0.025 * SafezoneH)";
                };
                class RHS_Reticle: RHS_Horizontal {
                    idc = 5;
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_op5_37_ca.paa";
                    y = "-2.95 *   (0.025 * SafezoneH)";
                };
                class CA_Elev: RscText {
                    idc = 175;
                    style = 1;
                    sizeEx = "0.032*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "rhs_digital_font";
                    text = "-80.5";
                    x = "(-2 + 48) * 		(0.01875 * SafezoneH)";
                    y = "-0.4 * 		(0.025 * SafezoneH)";
                    w = "13 * 		(0.01875 * SafezoneH)";
                    h = "13 * 		(0.025 * SafezoneH)";
                };
                class CA_Elev_Need: RscText {
                    idc = 176;
                    style = 1;
                    sizeEx = "0.032*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "rhs_digital_font";
                    text = "-35.4";
                    x = "(-2 + 48) * 		(0.01875 * SafezoneH)";
                    y = "0.95 * 		(0.025 * SafezoneH)";
                    w = "0 * 		(0.01875 * SafezoneH)";
                    h = "0 * 		(0.025 * SafezoneH)";
                };
                class RHS_Elev_Need: CA_Elev_Need {
                    idc = 3;
                    text = "$$$$$";
                    w = "13 * 		(0.01875 * SafezoneH)";
                    h = "13 * 		(0.025 * SafezoneH)";
                };
            };
        };
    };
    class rhs_gui_optic_d30_op4: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_fcs_d30";
        controls[] = {"CA_IGUI_elements_group"};
        class CA_IGUI_elements_group: RscControlsGroup {
            idc = 170;
            class VScrollbar: VScrollbar {
                width = 0;
            };
            class HScrollbar: HScrollbar {
                height = 0;
            };
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "73.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            class controls {
                class CA_Distance: RscText {
                    idc = 173;
                    style = 1;
                    sizeEx = "0.068*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "rhs_digital_font";
                    text = "$$$$$";
                    x = "(-6 + 48) * 		(0.01875 * SafezoneH)";
                    y = "0.25 * 		(0.025 * SafezoneH)";
                    w = "0 * 		(0.01875 * SafezoneH)";
                    h = "0 * 		(0.025 * SafezoneH)";
                };
                class CA_OpticsMode: CA_Distance {
                    idc = 154;
                };
                class RHS_Horizontal: RscPicture {
                    idc = 4;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {0.7, 0, 0, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1pz3_horizontal.paa";
                    x = "3.7 *   (0.01875 * Safezoneh)";
                    y = "-9.29 *   (0.025 * SafezoneH)";
                    w = "45.9 *   (0.01875 * SafezoneH)";
                    h = "45.9 *   (0.025 * SafezoneH)";
                };
                class RHS_Vertical: RHS_Horizontal {
                    idc = 3;
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1pz32_vertical.paa";
                    x = "13.41 *   (0.01875 * Safezoneh)";
                    y = "-8.29 *   (0.025 * SafezoneH)";
                };
                class RHS_Reticle: RHS_Horizontal {
                    idc = 5;
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_op4m45_ca.paa";
                    y = "-11.13 *   (0.025 * SafezoneH)";
                };
                class CA_Elev: RscText {
                    idc = 175;
                    style = 1;
                    sizeEx = "0.032*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "rhs_digital_font";
                    text = "-80.5";
                    x = "(-2 + 48) * 		(0.01875 * SafezoneH)";
                    y = "-0.4 * 		(0.025 * SafezoneH)";
                    w = "13 * 		(0.01875 * SafezoneH)";
                    h = "13 * 		(0.025 * SafezoneH)";
                };
            };
        };
    };
    class RHS_RscWeapon1PN22M_FCS: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); ";
        controls[] = {"CA_IGUI_elements_group"};
        class CA_IGUI_elements_group: RscControlsGroup {
            idc = 170;
            class VScrollbar: VScrollbar {
                width = 0;
            };
            class HScrollbar: HScrollbar {
                height = 0;
            };
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "53.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            class controls {
                class CA_OpticsMode: RscText {
                    idc = 154;
                    style = 1;
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    sizeEx = "0.038*SafezoneH";
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "4.5";
                    x = "43.85 * 		(0.01875 * SafezoneH)";
                    y = "19.6 * 		(0.025 * SafezoneH)";
                    w = "0";
                    h = "0";
                };
                class RHS_ControlNumber: CA_OpticsMode {
                    idc = 1000;
                    text = "RHS_1PN22M";
                };
            };
        };
    };
    class RHS_RscWeaponBPK42_FCS: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_BMP2";
        controls[] = {"CA_IGUI_elements_group"};
        class CA_IGUI_elements_group: RscControlsGroup {
            idc = 170;
            class VScrollbar: VScrollbar {
                width = 0;
            };
            class HScrollbar: HScrollbar {
                height = 0;
            };
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "53.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            class controls {
                class RDS_Sight: RscPicture {
                    idc = 1;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_bpk_1_42_sight.paa";
                    x = "13.4 *   (0.01875 * Safezoneh)";
                    y = "3.66 *   (0.025 * SafezoneH)";
                    w = "25.5 *   (0.01875 * SafezoneH)";
                    h = "25.5 *   (0.025 * SafezoneH)";
                };
                class RDS_SightBar: RscPicture {
                    idc = 2;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_bpk_1_42_bar.paa";
                    x = "14.3 *   (0.01875 * SafezoneH)";
                    y = "7.26 *   (0.025 * SafezoneH)";
                    w = "25.5 *   (0.01875 * SafezoneH)";
                    h = "25.5 *   (0.025 * SafezoneH)";
                };
                class CA_OpticsZoom: RscText {
                    idc = 180;
                    style = 1;
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    sizeEx = "0.038*SafezoneH";
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "4.5";
                    x = "43.85 * 		(0.01875 * SafezoneH)";
                    y = "19.6 * 		(0.025 * SafezoneH)";
                    w = "0";
                    h = "0";
                };
                class CA_OpticsMode: CA_OpticsZoom {
                    idc = 154;
                };
                class RHS_ControlNumber: CA_OpticsZoom {
                    idc = 1000;
                    text = "RHS_BPK42";
                };
            };
        };
    };
    class RHS_RscWeaponBPK42_BTR80A_FCS: RHS_RscWeaponBPK42_FCS {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_BTR80A";
    };
    class RHS_RscWeaponOb681_FCS: RHS_RscWeaponBPK42_FCS {
        class CA_IGUI_elements_group: RscControlsGroup {
            idc = 170;
            class VScrollbar: VScrollbar {
                width = 0;
            };
            class HScrollbar: HScrollbar {
                height = 0;
            };
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "53.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            class controls {
                class CA_OpticsZoom: RscText {
                    idc = 180;
                    style = 1;
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    sizeEx = "0.038*SafezoneH";
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "4.5";
                    x = "43.85 * 		(0.01875 * SafezoneH)";
                    y = "19.6 * 		(0.025 * SafezoneH)";
                    w = "0";
                    h = "0";
                };
                class CA_OpticsMode: CA_OpticsZoom {
                    idc = 154;
                };
                class RHS_ControlNumber: CA_OpticsZoom {
                    idc = 1000;
                    text = "RHS_BPK42";
                };
            };
        };
    };
    class RHS_RscWeapon1PZ3_FCS: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_fnc_sight_1PZ3";
        controls[] = {"CA_IGUI_elements_group"};
        class CA_IGUI_elements_group: RscControlsGroup {
            idc = 170;
            class VScrollbar: VScrollbar {
                width = 0;
            };
            class HScrollbar: HScrollbar {
                height = 0;
            };
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "53.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            class controls {
                class RDS_Horizontal: RscPicture {
                    idc = 1;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1pz3_horizontal.paa";
                    x = "3.65 *   (0.01875 * Safezoneh)";
                    y = "-2.95 *   (0.025 * SafezoneH)";
                    w = "45.9 *   (0.01875 * SafezoneH)";
                    h = "45.9 *   (0.025 * SafezoneH)";
                };
                class RDS_Reticle: RDS_Horizontal {
                    idc = 2;
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1pz3_1x_ca.paa";
                };
                class CA_OpticsZoom: RscText {
                    idc = 154;
                    style = 1;
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    sizeEx = "0.038*SafezoneH";
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "4.5";
                    x = "43.85 * 		(0.01875 * SafezoneH)";
                    y = "19.6 * 		(0.025 * SafezoneH)";
                    w = "0";
                    h = "0";
                };
                class RHS_ControlNumber: CA_OpticsZoom {
                    idc = 1000;
                    text = "RHS_1PZ3";
                };
            };
        };
    };
    class RHS_RscWeapon1PZ32_FCS: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_fnc_sight_1PZ32 ";
        controls[] = {"CA_IGUI_elements_group"};
        class CA_IGUI_elements_group: RscControlsGroup {
            idc = 170;
            class VScrollbar: VScrollbar {
                width = 0;
            };
            class HScrollbar: HScrollbar {
                height = 0;
            };
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "53.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            class controls {
                class RDS_Horizontal: RscPicture {
                    idc = 1;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1pz32_horizontal.paa";
                    x = "3.65 *   (0.01875 * Safezoneh)";
                    y = "-2.95 *   (0.025 * SafezoneH)";
                    w = "45.9 *   (0.01875 * SafezoneH)";
                    h = "45.9 *   (0.025 * SafezoneH)";
                };
                class CA_OpticsZoom: RscText {
                    idc = 180;
                    style = 1;
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    sizeEx = "0.038*SafezoneH";
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "4.5";
                    x = "43.85 * 		(0.01875 * SafezoneH)";
                    y = "19.6 * 		(0.025 * SafezoneH)";
                    w = "0";
                    h = "0";
                };
                class CA_OpticsMode: CA_OpticsZoom {
                    idc = 154;
                };
            };
        };
    };
    class rhs_gui_optic_thermalscreen: RscUnitInfo {
        idd = 300;
        controls[] = {"CA_IGUI_elements_group"};
        class CA_IGUI_elements_group: RscControlsGroup {
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "53.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            idc = 170;
            class VScrollbar {
                autoScrollSpeed = -1;
                autoScrollDelay = 5;
                autoScrollRewind = 0;
                color[] = {1, 1, 1, 0};
                width = 0.001;
            };
            class HScrollbar {
                color[] = {1, 1, 1, 0};
                height = 0.001;
            };
            class Controls {
                class CA_DistanceBackground: RscEdit {
                    idc = -1;
                    sizeEx = 0.034;
                    colorBackground[] = {0, 0, 0, 1};
                    colorText[] = {1, 1, 1, 1};
                    colorSelection[] = {0, 0, 0, 1};
                    style = 2;
                    shadow = 0;
                    type = 0;
                    x = "23.99 *   (0.01875 *    Safezoneh)";
                    y = "31.0*   (0.025 *    SafezoneH)";
                    w = "5.9 *   (0.01875 * SafezoneH)";
                    h = "1.9 *   (0.025 * SafezoneH)";
                };
                class CA_Distance: RscOpticsValue {
                    idc = 151;
                    style = 1;
                    shadow = 0;
                    colorText[] = {1, 1, 1, 1};
                    sizeEx = "0.038*SafezoneH";
                    x = "15.49 *   (0.01875 *    Safezoneh)";
                    y = "29.0*   (0.025 *    SafezoneH)";
                    w = "14.9 *   (0.01875 * SafezoneH)";
                    h = "5.9 *   (0.025 * SafezoneH)";
                };
            };
        };
    };
    class RHS_RscWeaponESSA_FCS: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_ESSA";
        controls[] = {"CA_OpticsZoom", "CA_IGUI_elements_group"};
        class CA_OpticsZoom: RscText {
            idc = 180;
            style = 1;
            colorText[] = {0.706, 0.0745, 0.0196, 1};
            sizeEx = "0.038*SafezoneH";
            shadow = 0;
            font = "EtelkaMonospacePro";
            text = "4.5";
            x = "43.85 * 		(0.01875 * SafezoneH)";
            y = "19.6 * 		(0.025 * SafezoneH)";
            w = "0* 		(0.01875 * SafezoneH)";
            h = "0 * 		(0.025 * SafezoneH)";
        };
        class CA_IGUI_elements_group: RscControlsGroup {
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "53.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            idc = 170;
            class VScrollbar {
                autoScrollSpeed = -1;
                autoScrollDelay = 5;
                autoScrollRewind = 0;
                color[] = {1, 1, 1, 0};
                width = 0.001;
            };
            class HScrollbar {
                color[] = {1, 1, 1, 0};
                height = 0.001;
            };
            class Controls {
                class CA_Distance: RscOpticsValue {
                    idc = 151;
                    style = 1;
                    shadow = 0;
                    colorBackground[] = {0, 0, 0, 1};
                    colorText[] = {1, 1, 1, 1};
                    font = "PuristaLight";
                    sizeEx = "0.018*SafezoneH";
                    x = "28.14 *   (0.01875 * Safezoneh)";
                    y = "30.14 *   (0.025 * SafezoneH)";
                    w = "0";
                    h = "0";
                };
                class CA_OpticsMode: CA_OpticsZoom {
                    idc = 154;
                };
                class RHS_Sight: RscPicture {
                    idc = 1;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    font = "PuristaMedium";
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_essa_wide.paa";
                    x = "9.15 *   (0.01875 * Safezoneh)";
                    y = "4.5 *   (0.025 * SafezoneH)";
                    w = "35 *   (0.01875 * SafezoneH)";
                    h = "35 *   (0.025 * SafezoneH)";
                };
                class RHS_SSU_ReadyText: RscEdit {
                    idc = 6;
                    sizeEx = "0.018*SafezoneH";
                    colorBackground[] = {0, 0, 0, 1};
                    colorText[] = {1, 1, 1, 1};
                    colorSelection[] = {0, 0, 0, 1};
                    font = "PuristaMedium";
                    text = "ССУ ВКЛ";
                    style = 2;
                    shadow = 0;
                    type = 0;
                    x = "12.14 *   (0.01875 * SafezoneH)";
                    y = "30.14 *   (0.025 * SafezoneH)";
                    w = "2.7 *   (0.01875 * SafezoneH)";
                    h = "1.0 *   (0.025 * SafezoneH)";
                };
                class RHS_ModeText: RHS_SSU_ReadyText {
                    idc = 5;
                    x = "35.14 *   (0.01875 * SafezoneH)";
                    w = "1.6 *   (0.01875 * SafezoneH)";
                    text = "ОСН";
                };
                class RHS_AutoTrackerText: RHS_SSU_ReadyText {
                    idc = 21;
                    x = "35.14 *   (0.01875 * SafezoneH)";
                    y = "11.84 *   (0.025 *    SafezoneH)";
                    w = "1.6 *   (0.01875 * SafezoneH)";
                    text = "АСЦ";
                };
                class RHS_AutoTrackerMode: RHS_AutoTrackerText {
                    idc = 22;
                    y = "13.14 *   (0.025 * SafezoneH)";
                    text = "ВЫКЛ";
                };
                class RHS_Gun_ReadyText: RHS_ModeText {
                    idc = 2;
                    x = "16.14 *   (0.01875 * SafezoneH)";
                    text = "ГОТ";
                };
                class RHS_Ammo: CA_Distance {
                    idc = 3;
                    text = "Б";
                    font = "PuristaMedium";
                    x = "21.14 *   (0.01875 * Safezoneh)";
                    y = "30.14 *   (0.025 * SafezoneH)";
                    w = "1.2 *   (0.01875 * SafezoneH)";
                    h = "1.0 *   (0.025 * SafezoneH)";
                };
                class RHS_Distance: CA_Distance {
                    idc = 4;
                    text = "----";
                    font = "PuristaMedium";
                    w = "3.5 *   (0.01875 * SafezoneH)";
                    h = "1 *   (0.025 * SafezoneH)";
                };
            };
        };
    };
    class RHS_RscWeaponESSA_commander_FCS: RHS_RscWeaponESSA_FCS {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_ESSA_commander";
    };
    class RHS_RscWeaponTPD1K_SosnaU_FCS: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_sosnaU";
        controls[] = {"CA_OpticsZoom", "CA_IGUI_elements_group"};
        class CA_OpticsZoom: RscText {
            idc = 180;
            style = 1;
            colorText[] = {0.706, 0.0745, 0.0196, 1};
            sizeEx = "0.038*SafezoneH";
            shadow = 0;
            font = "EtelkaMonospacePro";
            text = "4.5";
            x = "43.85 * 		(0.01875 * SafezoneH)";
            y = "19.6 * 		(0.025 * SafezoneH)";
            w = "0* 		(0.01875 * SafezoneH)";
            h = "0 * 		(0.025 * SafezoneH)";
        };
        class CA_IGUI_elements_group: RscControlsGroup {
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "53.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            idc = 170;
            class VScrollbar {
                autoScrollSpeed = -1;
                autoScrollDelay = 5;
                autoScrollRewind = 0;
                color[] = {1, 1, 1, 0};
                width = 0.001;
            };
            class HScrollbar {
                color[] = {1, 1, 1, 0};
                height = 0.001;
            };
            class Controls {
                class CA_Distance: RscOpticsValue {
                    idc = 151;
                    style = 1;
                    shadow = 0;
                    colorBackground[] = {0, 0, 0, 1};
                    colorText[] = {1, 1, 1, 1};
                    font = "PuristaLight";
                    sizeEx = "0.018*SafezoneH";
                    x = "28.14 *   (0.01875 * Safezoneh)";
                    y = "30.14 *   (0.025 * SafezoneH)";
                    w = "0";
                    h = "0";
                };
                class CA_OpticsMode: CA_OpticsZoom {
                    idc = 154;
                };
                class RHS_Sight: RscPicture {
                    idc = 1;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_essa_wide.paa";
                    x = "9.15 *   (0.01875 * Safezoneh)";
                    y = "4.5 *   (0.025 * SafezoneH)";
                    w = "35 *   (0.01875 * SafezoneH)";
                    h = "35 *   (0.025 * SafezoneH)";
                };
                class RHS_SSU_ReadyText: RscEdit {
                    idc = 6;
                    sizeEx = "0.018*SafezoneH";
                    colorBackground[] = {0, 0, 0, 1};
                    colorText[] = {1, 1, 1, 1};
                    colorSelection[] = {0, 0, 0, 1};
                    text = "ССУ ВКЛ";
                    font = "PuristaMedium";
                    style = 2;
                    shadow = 0;
                    type = 0;
                    x = "12.14 *   (0.01875 * SafezoneH)";
                    y = "30.14 *   (0.025 * SafezoneH)";
                    w = "2.7 *   (0.01875 * SafezoneH)";
                    h = "1.0 *   (0.025 * SafezoneH)";
                };
                class RHS_AutoTrackerText: RHS_SSU_ReadyText {
                    idc = 21;
                    x = "35.14 *   (0.01875 * SafezoneH)";
                    y = "11.84 *   (0.025 *    SafezoneH)";
                    w = "1.6 *   (0.01875 * SafezoneH)";
                    text = "АСЦ";
                };
                class RHS_AutoTrackerMode: RHS_AutoTrackerText {
                    idc = 22;
                    y = "13.14 *   (0.025 * SafezoneH)";
                    text = "ВЫКЛ";
                };
                class RHS_ModeText: RHS_SSU_ReadyText {
                    idc = 5;
                    x = "35.14 *   (0.01875 * SafezoneH)";
                    w = "1.6 *   (0.01875 * SafezoneH)";
                    text = "ОСН";
                };
                class RHS_Gun_ReadyText: RHS_ModeText {
                    idc = 2;
                    x = "16.14 *   (0.01875 * SafezoneH)";
                    text = "ГОТ";
                };
                class RHS_Ammo: CA_Distance {
                    idc = 3;
                    text = "Б";
                    font = "PuristaMedium";
                    x = "21.14 *   (0.01875 * Safezoneh)";
                    y = "30.14 *   (0.025 * SafezoneH)";
                    w = "1.2 *   (0.01875 * SafezoneH)";
                    h = "1.0 *   (0.025 * SafezoneH)";
                };
                class RHS_Distance: CA_Distance {
                    idc = 4;
                    text = "----";
                    font = "PuristaMedium";
                    w = "3.5 *   (0.01875 * SafezoneH)";
                    h = "1 *   (0.025 * SafezoneH)";
                };
            };
        };
        class Objects {
            class MainSight {
                idc = 901;
                type = 82;
                model = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tpdk1_animated.p3d";
                direction[] = {0, 0, -1};
                up[] = {0, 1, 0};
                x = "20.0 * (((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
                y = "14.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
                z = 0.01;
                scale = "0.15 * (SafeZoneW Min SafeZoneH)";
                xBack = 0;
                yBack = 0;
                zBack = 0;
                inBack = 0;
                enableZoom = 0;
                zoomDuration = 0;
                class AnimationSources {
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
                    class sightReadyLight: sightRange {};
                };
            };
            class AmmoSelector_bgr {
                idc = 311;
                type = 82;
                x = "0.535152-safezoneX";
                y = "0.140276+safezoneY";
                z = 0.1;
                scale = 0.15;
                direction[] = {0, 0, -1};
                up[] = {0, 1, 0};
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_bg.p3d";
                xBack = 0.5;
                yBack = 0.5;
                zBack = 0;
                inBack = 0;
                enableZoom = 0;
                zoomDuration = 4.001;
            };
            class AmmoSelector: AmmoSelector_bgr {
                idc = 312;
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch.p3d";
            };
            class AutoloaderSelector: AmmoSelector_bgr {
                idc = 313;
                x = "0.335152-safezoneX";
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_autoloader_on.p3d";
            };
        };
    };
    class RHS_RscWeaponSosnaU_FCS: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_sosnaU";
        controls[] = {"CA_OpticsZoom", "CA_IGUI_elements_group"};
        class CA_OpticsZoom: RscText {
            idc = 180;
            style = 1;
            colorText[] = {0.706, 0.0745, 0.0196, 1};
            sizeEx = "0.038*SafezoneH";
            shadow = 0;
            font = "EtelkaMonospacePro";
            text = "4.5";
            x = "43.85 * 		(0.01875 * SafezoneH)";
            y = "19.6 * 		(0.025 * SafezoneH)";
            w = "0* 		(0.01875 * SafezoneH)";
            h = "0 * 		(0.025 * SafezoneH)";
        };
        class CA_IGUI_elements_group: RscControlsGroup {
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "53.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            idc = 170;
            class VScrollbar {
                autoScrollSpeed = -1;
                autoScrollDelay = 5;
                autoScrollRewind = 0;
                color[] = {1, 1, 1, 0};
                width = 0.001;
            };
            class HScrollbar {
                color[] = {1, 1, 1, 0};
                height = 0.001;
            };
            class Controls {
                class CA_Distance: RscOpticsValue {
                    idc = 151;
                    style = 1;
                    shadow = 0;
                    colorBackground[] = {0, 0, 0, 1};
                    colorText[] = {1, 1, 1, 1};
                    font = "PuristaLight";
                    sizeEx = "0.018*SafezoneH";
                    x = "28.14 *   (0.01875 * Safezoneh)";
                    y = "30.14 *   (0.025 * SafezoneH)";
                    w = "0";
                    h = "0";
                };
                class CA_OpticsMode: CA_OpticsZoom {
                    idc = 154;
                };
                class RHS_Sight: RscPicture {
                    idc = 1;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_essa_wide.paa";
                    x = "9.15 *   (0.01875 * Safezoneh)";
                    y = "4.5 *   (0.025 * SafezoneH)";
                    w = "35 *   (0.01875 * SafezoneH)";
                    h = "35 *   (0.025 * SafezoneH)";
                };
                class RHS_SSU_ReadyText: RscEdit {
                    idc = 6;
                    sizeEx = "0.018*SafezoneH";
                    colorBackground[] = {0, 0, 0, 1};
                    colorText[] = {1, 1, 1, 1};
                    colorSelection[] = {0, 0, 0, 1};
                    text = "ССУ ВКЛ";
                    font = "PuristaMedium";
                    style = 2;
                    shadow = 0;
                    type = 0;
                    x = "12.14 *   (0.01875 * SafezoneH)";
                    y = "30.14 *   (0.025 * SafezoneH)";
                    w = "2.7 *   (0.01875 * SafezoneH)";
                    h = "1.0 *   (0.025 * SafezoneH)";
                };
                class RHS_AutoTrackerText: RHS_SSU_ReadyText {
                    idc = 21;
                    x = "35.14 *   (0.01875 * SafezoneH)";
                    y = "11.84 *   (0.025 *    SafezoneH)";
                    w = "1.6 *   (0.01875 * SafezoneH)";
                    text = "АСЦ";
                };
                class RHS_AutoTrackerMode: RHS_AutoTrackerText {
                    idc = 22;
                    y = "13.14 *   (0.025 * SafezoneH)";
                    text = "ВЫКЛ";
                };
                class RHS_ModeText: RHS_SSU_ReadyText {
                    idc = 5;
                    x = "35.14 *   (0.01875 * SafezoneH)";
                    w = "1.6 *   (0.01875 * SafezoneH)";
                    text = "ОСН";
                };
                class RHS_Gun_ReadyText: RHS_ModeText {
                    idc = 2;
                    x = "16.14 *   (0.01875 * SafezoneH)";
                    text = "ГОТ";
                };
                class RHS_Ammo: CA_Distance {
                    idc = 3;
                    text = "Б";
                    font = "PuristaMedium";
                    x = "21.14 *   (0.01875 * Safezoneh)";
                    y = "30.14 *   (0.025 * SafezoneH)";
                    w = "1.2 *   (0.01875 * SafezoneH)";
                    h = "1.0 *   (0.025 * SafezoneH)";
                };
                class RHS_Distance: CA_Distance {
                    idc = 4;
                    text = "----";
                    font = "PuristaMedium";
                    w = "3.5 *   (0.01875 * SafezoneH)";
                    h = "1 *   (0.025 * SafezoneH)";
                };
            };
        };
        class Objects {
            class AmmoSelector_bgr {
                idc = 311;
                type = 82;
                x = "0.535152-safezoneX";
                y = "0.140276+safezoneY";
                z = 0.1;
                scale = 0.15;
                direction[] = {0, 0, -1};
                up[] = {0, 1, 0};
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_bg.p3d";
                xBack = 0.5;
                yBack = 0.5;
                zBack = 0;
                inBack = 0;
                enableZoom = 0;
                zoomDuration = 4.001;
            };
            class AmmoSelector: AmmoSelector_bgr {
                idc = 312;
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch.p3d";
            };
            class AutoloaderSelector: AmmoSelector_bgr {
                idc = 313;
                x = "0.335152-safezoneX";
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_autoloader_on.p3d";
            };
        };
    };
    class RHS_RscWeaponSosnaU_commander_FCS: RHS_RscWeaponSosnaU_FCS {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); (_this + [true]) call RHS_fnc_sight_sosnaU";
    };
    class RHS_RscWeaponAgava_FCS: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_agava2";
        controls[] = {"CA_OpticsZoom", "CA_IGUI_elements_group"};
        class CA_OpticsZoom: RscText {
            idc = 180;
            style = 1;
            colorText[] = {0.706, 0.0745, 0.0196, 1};
            sizeEx = "0.038*SafezoneH";
            shadow = 0;
            font = "EtelkaMonospacePro";
            text = "4.5";
            x = "43.85 * 		(0.01875 * SafezoneH)";
            y = "19.6 * 		(0.025 * SafezoneH)";
            w = "0* 		(0.01875 * SafezoneH)";
            h = "0 * 		(0.025 * SafezoneH)";
        };
        class CA_IGUI_elements_group: RscControlsGroup {
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "53.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            idc = 170;
            class VScrollbar {
                autoScrollSpeed = -1;
                autoScrollDelay = 5;
                autoScrollRewind = 0;
                color[] = {1, 1, 1, 0};
                width = 0.001;
            };
            class HScrollbar {
                color[] = {1, 1, 1, 0};
                height = 0.001;
            };
            class Controls {
                class CA_Distance: RscOpticsValue {
                    idc = 151;
                    style = 1;
                    shadow = 0;
                    colorText[] = {1, 0, 0, 1};
                    font = "rhs_digital_font";
                    sizeEx = "0.039*SafezoneH";
                    x = "17.65 *   (0.01875 * Safezoneh)";
                    y = "30.45 *   (0.025 * SafezoneH)";
                    w = "0";
                    h = "0";
                };
                class CA_OpticsMode: CA_OpticsZoom {
                    idc = 154;
                };
                class RHS_Sight: RscPicture {
                    idc = 1;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "rhs_digital_font";
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g46_moving_ca.paa";
                    x = "10.32 *   (0.01875 * Safezoneh)";
                    y = "-3.95 *   (0.025 * SafezoneH)";
                    w = "29 *   (0.01875 * SafezoneH)";
                    h = "29 *   (0.025 * SafezoneH)";
                };
                class RHS_ReadyLight: RscPicture {
                    idc = 2;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g46_readylight_ca.paa";
                    x = "17.65 *   (0.01875 * SafezoneH)";
                    y = "36.00 *   (0.025 * SafezoneH)";
                    w = "1.7 *   (0.01875 * SafezoneH)";
                    h = "1.7 *   (0.025 * SafezoneH)";
                };
                class RHS_Ammo: CA_Distance {
                    idc = 3;
                    text = "$";
                    x = "21.65 *   (0.01875 * Safezoneh)";
                    y = "36 *   (0.025 * SafezoneH)";
                    w = "1.9 *   (0.01875 * SafezoneH)";
                    h = "1.9 *   (0.025 * SafezoneH)";
                };
                class RHS_Distance: CA_Distance {
                    idc = 4;
                    text = "$$$$";
                    w = "12.9 *   (0.01875 * SafezoneH)";
                    h = "12.9 *   (0.025 * SafezoneH)";
                };
                class RHS_agava_static: RscPicture {
                    idc = 5;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {1, 1, 1, 0.8};
                    shadow = 0;
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_agava_static.paa";
                    x = "16.14 *   (0.01875 * Safezoneh)";
                    y = "3.5 *   (0.025 * SafezoneH)";
                    w = "20 *   (0.01875 * SafezoneH)";
                    h = "20 *   (0.025 * SafezoneH)";
                };
                class RHS_Ammo_agava: CA_Distance {
                    idc = 6;
                    text = "Б";
                    font = "rhs_digital_font_var";
                    sizeEx = "0.022*SafezoneH";
                    colorText[] = {1, 1, 1, 0.8};
                    x = "21.14 *   (0.01875 * Safezoneh)";
                    y = "12.44 *   (0.025 * SafezoneH)";
                    w = "1.2 *   (0.01875 * SafezoneH)";
                    h = "1.0 *   (0.025 * SafezoneH)";
                };
                class RHS_Gun_ReadyText_agava: RHS_Ammo_agava {
                    idc = 7;
                    x = "17.24 *   (0.01875 * SafezoneH)";
                    w = "4 *   (0.01875 * SafezoneH)";
                    text = "ГОТ";
                };
                class RHS_Distance_agava: CA_Distance {
                    idc = 8;
                    text = "----";
                    x = "18.14 *   (0.01875 * Safezoneh)";
                    y = "13.54 *   (0.025 * SafezoneH)";
                    w = "3.5 *   (0.01875 * SafezoneH)";
                    h = "1 *   (0.025 * SafezoneH)";
                    sizeEx = "0.028*SafezoneH";
                    font = "rhs_digital_font_var";
                    colorText[] = {1, 1, 1, 0.8};
                };
            };
        };
        class Objects {
            class AmmoSelector_bgr {
                idc = 311;
                type = 82;
                x = "0.535152-safezoneX";
                y = "0.140276+safezoneY";
                z = 0.1;
                scale = 0.15;
                direction[] = {0, 0, -1};
                up[] = {0, 1, 0};
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_bg_1g42.p3d";
                xBack = 0.5;
                yBack = 0.5;
                zBack = 0;
                inBack = 0;
                enableZoom = 0;
                zoomDuration = 4.001;
            };
            class AmmoSelector: AmmoSelector_bgr {
                idc = 312;
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_1g42.p3d";
            };
            class AutoloaderSelector: AmmoSelector_bgr {
                idc = 313;
                x = "0.335152-safezoneX";
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_autoloader_on.p3d";
            };
        };
    };
    class RHS_RscWeaponPlissa_FCS: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0,'RHS_T80B_Recoil'] call RHS_fnc_sight_plissa";
        controls[] = {"CA_OpticsZoom", "CA_IGUI_elements_group"};
        class CA_OpticsZoom: RscText {
            idc = 180;
            style = 1;
            colorText[] = {0.706, 0.0745, 0.0196, 1};
            sizeEx = "0.038*SafezoneH";
            shadow = 0;
            font = "EtelkaMonospacePro";
            text = "4.5";
            x = "43.85 * 		(0.01875 * SafezoneH)";
            y = "19.6 * 		(0.025 * SafezoneH)";
            w = "0* 		(0.01875 * SafezoneH)";
            h = "0 * 		(0.025 * SafezoneH)";
        };
        class CA_IGUI_elements_group: RscControlsGroup {
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "53.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            idc = 170;
            class VScrollbar {
                autoScrollSpeed = -1;
                autoScrollDelay = 5;
                autoScrollRewind = 0;
                color[] = {1, 1, 1, 0};
                width = 0.001;
            };
            class HScrollbar {
                color[] = {1, 1, 1, 0};
                height = 0.001;
            };
            class Controls {
                class CA_Distance: RscOpticsValue {
                    idc = 151;
                    style = 1;
                    shadow = 0;
                    colorText[] = {1, 0, 0, 1};
                    font = "rhs_digital_font";
                    sizeEx = "0.039*SafezoneH";
                    x = "17.65 *   (0.01875 * Safezoneh)";
                    y = "30.45 *   (0.025 * SafezoneH)";
                    w = "0";
                    h = "0";
                };
                class CA_OpticsMode: CA_OpticsZoom {
                    idc = 154;
                };
                class RHS_Sight: RscPicture {
                    idc = 1;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "rhs_digital_font";
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g46_moving_ca.paa";
                    x = "10.32 *   (0.01875 * Safezoneh)";
                    y = "-3.95 *   (0.025 * SafezoneH)";
                    w = "29 *   (0.01875 * SafezoneH)";
                    h = "29 *   (0.025 * SafezoneH)";
                };
                class RHS_ReadyLight: RscPicture {
                    idc = 2;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g46_readylight_ca.paa";
                    x = "17.65 *   (0.01875 * SafezoneH)";
                    y = "36.00 *   (0.025 * SafezoneH)";
                    w = "1.7 *   (0.01875 * SafezoneH)";
                    h = "1.7 *   (0.025 * SafezoneH)";
                };
                class RHS_Ammo: CA_Distance {
                    idc = 3;
                    text = "$";
                    x = "21.65 *   (0.01875 * Safezoneh)";
                    y = "36 *   (0.025 * SafezoneH)";
                    w = "1.9 *   (0.01875 * SafezoneH)";
                    h = "1.9 *   (0.025 * SafezoneH)";
                };
                class RHS_Distance: CA_Distance {
                    idc = 4;
                    text = "$$$$";
                    w = "12.9 *   (0.01875 * SafezoneH)";
                    h = "12.9 *   (0.025 * SafezoneH)";
                };
                class RHS_plissa_static: RscPicture {
                    idc = 5;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_essa_wide.paa";
                    x = "9.15 *   (0.01875 * Safezoneh)";
                    y = "4.75 *   (0.025 * SafezoneH)";
                    w = "35 *   (0.01875 * SafezoneH)";
                    h = "35 *   (0.025 * SafezoneH)";
                };
                class RHS_SSU_ReadyText: RscEdit {
                    idc = 6;
                    sizeEx = "0.018*SafezoneH";
                    colorBackground[] = {0, 0, 0, 0};
                    colorText[] = {1, 1, 1, 1};
                    colorSelection[] = {0, 0, 0, 1};
                    font = "rhs_digital_font_var";
                    text = "ССУ ВКЛ";
                    style = 2;
                    shadow = 0;
                    type = 0;
                    x = "12.14 *   (0.01875 * SafezoneH)";
                    y = "30.14 *   (0.025 * SafezoneH)";
                    w = "2.7 *   (0.01875 * SafezoneH)";
                    h = "1.0 *   (0.025 * SafezoneH)";
                };
                class RHS_ModeText: RHS_SSU_ReadyText {
                    idc = 7;
                    x = "35.14 *   (0.01875 * SafezoneH)";
                    w = "1.6 *   (0.01875 * SafezoneH)";
                    text = "ОСН";
                };
                class RHS_Gun_ReadyText_plissa: RHS_ModeText {
                    idc = 8;
                    x = "17.24 *   (0.01875 * SafezoneH)";
                    text = "ГОТ";
                };
                class RHS_AutoTrackerText: RHS_SSU_ReadyText {
                    idc = 21;
                    x = "35.14 *   (0.01875 * SafezoneH)";
                    y = "11.84 *   (0.025 *    SafezoneH)";
                    w = "1.6 *   (0.01875 * SafezoneH)";
                    text = "АСЦ";
                };
                class RHS_AutoTrackerMode: RHS_AutoTrackerText {
                    idc = 22;
                    y = "13.14 *   (0.025 * SafezoneH)";
                    text = "ВЫКЛ";
                };
                class RHS_ammo_plissa: CA_Distance {
                    idc = 9;
                    text = "Б";
                    font = "rhs_digital_font_var";
                    colorText[] = {1, 1, 1, 0.8};
                    sizeEx = "0.018*SafezoneH";
                    x = "21.14 *   (0.01875 * Safezoneh)";
                    y = "30.14 *   (0.025 * SafezoneH)";
                    w = "1.0 *   (0.01875 * SafezoneH)";
                    h = "1.0 *   (0.025 * SafezoneH)";
                };
                class RHS_Distance_plissa: CA_Distance {
                    idc = 10;
                    text = "----";
                    x = "28.14 *   (0.01875 * Safezoneh)";
                    y = "30.14 *   (0.025 * SafezoneH)";
                    w = "2.0 *   (0.01875 * SafezoneH)";
                    h = "1 *   (0.025 * SafezoneH)";
                    font = "rhs_digital_font_var";
                    sizeEx = "0.018*SafezoneH";
                    colorText[] = {1, 1, 1, 0.8};
                };
            };
        };
        class Objects {
            class AmmoSelector_bgr {
                idc = 311;
                type = 82;
                x = "0.535152-safezoneX";
                y = "0.140276+safezoneY";
                z = 0.1;
                scale = 0.15;
                direction[] = {0, 0, -1};
                up[] = {0, 1, 0};
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_bg_1g42.p3d";
                xBack = 0.5;
                yBack = 0.5;
                zBack = 0;
                inBack = 0;
                enableZoom = 0;
                zoomDuration = 4.001;
            };
            class AmmoSelector: AmmoSelector_bgr {
                idc = 312;
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_1g42.p3d";
            };
            class AutoloaderSelector: AmmoSelector_bgr {
                idc = 313;
                x = "0.335152-safezoneX";
                model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_autoloader_on.p3d";
            };
        };
    };
    class RHS_RscWeaponPlissa_t90_FCS: RHS_RscWeaponPlissa_FCS {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0,'Recoil'] call RHS_fnc_sight_plissa";
    };
    class rhs_gui_optic_2p130: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call rhs_fnc_sight_prp3_mortar";
        controls[] = {"CA_IGUI_elements_group"};
        class CA_IGUI_elements_group: RscControlsGroup {
            idc = 170;
            class VScrollbar: VScrollbar {
                width = 0;
            };
            class HScrollbar: HScrollbar {
                height = 0;
            };
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "53.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            class controls {
                class CA_Heading: RscText {
                    idc = 1;
                    style = 0;
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    sizeEx = "0.032*SafezoneH";
                    shadow = 0;
                    font = "PuristaBold";
                    text = "015";
                    x = "48.35 * 		(0.01875 * SafezoneH)";
                    y = "5 * 		(0.025 * SafezoneH)";
                    w = "4 * 		(0.01875 * SafezoneH)";
                    h = "4 * 		(0.025 * SafezoneH)";
                };
                class CA_Elev: RscText {
                    idc = 175;
                    style = 1;
                    sizeEx = "0.032*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "PuristaBold";
                    text = "-48.15";
                    x = "48.15 * 		(0.01875 * SafezoneH)";
                    y = "3.4 * 		(0.025 * SafezoneH)";
                    w = "4 * 		(0.01875 * SafezoneH)";
                    h = "4 * 		(0.025 * SafezoneH)";
                };
            };
        };
    };
    class rhs_gui_optic_mortar: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');";
        controls[] = {"CA_IGUI_elements_group"};
        class CA_IGUI_elements_group: RscControlsGroup {
            idc = 170;
            class VScrollbar: VScrollbar {
                width = 0;
            };
            class HScrollbar: HScrollbar {
                height = 0;
            };
            x = "((safezoneX + safezoneW) - (16.4 * (((safezoneW / safezoneH) min 1.2) / 40)) - 0.5 * (((safezoneW /safezoneH) min 1.2) / 40))";
            y = "0 *   (0.025 * SafezoneH) +   (SafezoneY)";
            w = "17 * (((safezoneW / safezoneH) min 1.2) / 40)";
            h = "17 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            class controls {
                class CA_Elev: RscText {
                    idc = 175;
                    style = 1;
                    sizeEx = "0.032*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "PuristaBold";
                    text = "-80.5";
                    x = "-2 * 		(0.01875 * SafezoneH)";
                    y = "-0.4 * 		(0.025 * SafezoneH)";
                    w = "13 * 		(0.01875 * SafezoneH)";
                    h = "13 * 		(0.025 * SafezoneH)";
                };
            };
        };
    };
    class RHS_RscWeaponMi24_FCS: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_9S475";
        controls[] = {"CA_IGUI_elements_group", "CA_OpticsZoom"};
        class CA_OpticsZoom: RscText {
            idc = 154;
            style = 1;
            colorText[] = {0.706, 0.0745, 0.0196, 1};
            sizeEx = "0.038*SafezoneH";
            shadow = 0;
            font = "EtelkaMonospacePro";
            text = "";
            x = "43.85 * 		(0.01875 * SafezoneH)";
            y = "19.6 * 		(0.025 * SafezoneH)";
            w = "0* 		(0.01875 * SafezoneH)";
            h = "0 * 		(0.025 * SafezoneH)";
        };
        class CA_IGUI_elements_group: RscControlsGroup {
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "53.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            idc = 170;
            class VScrollbar {
                autoScrollSpeed = -1;
                autoScrollDelay = 5;
                autoScrollRewind = 0;
                color[] = {1, 1, 1, 0};
                width = 0.001;
            };
            class HScrollbar {
                color[] = {1, 1, 1, 0};
                height = 0.001;
            };
            class Controls {
                class rhs_arr_vert: RscPicture {
                    idc = 1;
                    text = "rhsafrf\addons\rhs_a2port_air\Mi35\Data\rhs_mi24_missile_line_ca.paa";
                    colorText[] = {1, 1, 1, 0};
                    x = "8.89 *   (0.01875 * Safezoneh)";
                    y = "2.39 * (0.025 * SafezoneH)";
                    w = "35.18 *   (0.01875 * SafezoneH)";
                    h = "35.18 *   (0.025 * SafezoneH)";
                };
            };
        };
    };
    class RHS_RscWeaponMi28_FCS: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_Mi28_fcs";
        controls[] = {
            "CA_IGUI_elements_group",
            "CA_Distance",
            "CA_Mode",
            "CA_OpticsZoom"
        };
        class CA_OpticsZoom: RscText {
            idc = 180;
            style = 1;
            colorText[] = {0.706, 0.0745, 0.0196, 1};
            sizeEx = "0.038*SafezoneH";
            shadow = 0;
            font = "EtelkaMonospacePro";
            text = "4.5";
            x = "43.85 * 		(0.01875 * SafezoneH)";
            y = "19.6 * 		(0.025 * SafezoneH)";
            w = "0* 		(0.01875 * SafezoneH)";
            h = "0 * 		(0.025 * SafezoneH)";
        };
        class CA_Mode: CA_OpticsZoom {
            idc = 154;
        };
        class CA_Distance: RscOpticsValue {
            idc = 151;
            style = 2;
            colorText[] = {0, 0.36, 0.12, 1};
            shadow = 0;
            font = "rhs_digital_font_var";
            x = "34.41 * 		(0.01875 * SafezoneH)";
            y = "35.6 * 		(0.025 * SafezoneH)";
            w = "0* 		(0.01875 * SafezoneH)";
            h = "0 * 		(0.025 * SafezoneH)";
        };
        class CA_IGUI_elements_group: RscControlsGroup {
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "53.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            idc = 170;
            class VScrollbar {
                autoScrollSpeed = -1;
                autoScrollDelay = 5;
                autoScrollRewind = 0;
                color[] = {1, 1, 1, 0};
                width = 0.001;
            };
            class HScrollbar {
                color[] = {1, 1, 1, 0};
                height = 0.001;
            };
            class Controls {
                class rhs_Distance: CA_Distance {
                    idc = 1;
                    text = "";
                    sizeEx = "0.054*SafezoneH";
                    x = "17.2 * 		(0.01875 * SafezoneH)";
                    y = "24.02 * 		(0.025 * SafezoneH)";
                    w = "20 * 		(0.01875 * SafezoneH)";
                    h = "20 * 		(0.025 * SafezoneH)";
                };
                class rhs_timeToTarget: CA_Distance {
                    idc = 601;
                    text = "";
                    sizeEx = "0.012*SafezoneH";
                    font = "rhs_digital_font_var";
                    x = "17.2 * 		(0.01875 * SafezoneH)";
                    y = "22.52 * 		(0.025 * SafezoneH)";
                    w = "20 * 		(0.01875 * SafezoneH)";
                    h = "20 * 		(0.025 * SafezoneH)";
                };
                class rhs_height: CA_Distance {
                    idc = 189;
                    style = 1;
                    text = "----";
                    sizeEx = "0.094*SafezoneH";
                    x = "18.9 * 		(0.01875 * SafezoneH)";
                    y = "0.422 * 		(0.025 * SafezoneH)";
                    w = "20 * 		(0.01875 * SafezoneH)";
                    h = "20 * 		(0.025 * SafezoneH)";
                };
                class rhs_speed: RscText {
                    idc = 188;
                    style = 1;
                    text = "228";
                    colorText[] = {0, 0.36, 0.12, 1};
                    colorBackground[] = {0, 0, 0, 0};
                    sizeEx = "0.094*SafezoneH";
                    shadow = 0;
                    font = "rhs_digital_font_var";
                    x = "-1.7 * 		(0.01875 * SafezoneH)";
                    y = "0.422 * 		(0.025 * SafezoneH)";
                    w = "20 * 		(0.01875 * SafezoneH)";
                    h = "20 * 		(0.025 * SafezoneH)";
                };
                class rhs_arr_turret: RscPicture {
                    idc = 3;
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_mi28_turret.paa";
                    x = "6.14 *   (0.01875 * Safezoneh)";
                    y = "25.79 * (0.025 * SafezoneH)";
                    w = "10 *   (0.01875 * SafezoneH)";
                    h = "10 *   (0.025 * SafezoneH)";
                };
                class rhs_arr_horizont: RscPicture {
                    idc = 4;
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_mi28_arr_horiz.paa";
                    x = "26.15 *   (0.01875 * Safezoneh)";
                    y = "6.71 * (0.025 * SafezoneH)";
                    w = "1.5 *   (0.01875 * SafezoneH)";
                    h = "1.5 *   (0.025 * SafezoneH)";
                };
                class rhs_arr_elevation: rhs_arr_horizont {
                    idc = 5;
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_mi28_arr_vert.paa";
                    x = "42.58 *   (0.01875 * Safezoneh)";
                    y = "19.11 * (0.025 * SafezoneH)";
                    w = "1.5 *   (0.01875 * SafezoneH)";
                    h = "1.5 *   (0.025 * SafezoneH)";
                };
                class rhs_ind_as: rhs_arr_horizont {
                    idc = 6;
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_mi28_autotrack.paa";
                    x = "34.88 *   (0.01875 * Safezoneh)";
                    y = "37.21 * (0.025 * SafezoneH)";
                    w = "5.3 *   (0.01875 * SafezoneH)";
                    h = "2.6 *   (0.025 * SafezoneH)";
                };
                class rhs_ind_ps: rhs_ind_as {
                    idc = 7;
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_mi28_groundlock.paa";
                    x = "40.188 *   (0.01875 * Safezoneh)";
                };
                class rhs_ind_tvk: rhs_ind_as {
                    idc = 8;
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_mi28_tvk.paa";
                    x = "1.688 *   (0.01875 * Safezoneh)";
                    y = "6.01 * (0.025 * SafezoneH)";
                    w = "2.8 *   (0.01875 * SafezoneH)";
                    h = "5.5 *   (0.025 * SafezoneH)";
                };
                class rhs_ind_tpk: rhs_ind_tvk {
                    idc = 9;
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_mi28_tpk.paa";
                    y = "11.51 * (0.025 * SafezoneH)";
                };
                class rhs_ind_tsl: rhs_ind_tvk {
                    idc = 10;
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_mi28_tsl.paa";
                    y = "17.01 * (0.025 * SafezoneH)";
                };
                class rhs_cross: rhs_arr_elevation {
                    idc = 11;
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_mi28_cross.paa";
                    x = "23.09 *   (0.01875 * Safezoneh)";
                    y = "16.39 * (0.025 * SafezoneH)";
                    w = "7.18 *   (0.01875 * SafezoneH)";
                    h = "7.18 *   (0.025 * SafezoneH)";
                };
            };
        };
    };
    class RHS_RscWeaponMi28_Pilot_FCS: RHS_RscWeaponMi28_FCS {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_Mi28_fcs_pilot";
    };
    class RHS_RscWeaponKa52_FCS: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_Samshin";
        controls[] = {"CA_IGUI_elements_group", "CA_Distance", "CA_OpticsZoom"};
        class CA_OpticsZoom: RscText {
            idc = 154;
            style = 1;
            colorText[] = {0.706, 0.0745, 0.0196, 1};
            sizeEx = "0.038*SafezoneH";
            shadow = 0;
            font = "EtelkaMonospacePro";
            text = "4.5";
            x = "43.85 * 		(0.01875 * SafezoneH)";
            y = "19.6 * 		(0.025 * SafezoneH)";
            w = "0* 		(0.01875 * SafezoneH)";
            h = "0 * 		(0.025 * SafezoneH)";
        };
        class CA_Distance: RscOpticsValue {
            idc = 198;
            style = 2;
            colorText[] = {0.48, 0.77, 0.46, 1};
            shadow = 0;
            font = "rhs_digital_font_var";
            x = "34.41 * 		(0.01875 * SafezoneH)";
            y = "35.6 * 		(0.025 * SafezoneH)";
            w = "0* 		(0.01875 * SafezoneH)";
            h = "0 * 		(0.025 * SafezoneH)";
        };
        class CA_IGUI_elements_group: RscControlsGroup {
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "53.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            idc = 170;
            class VScrollbar {
                autoScrollSpeed = -1;
                autoScrollDelay = 5;
                autoScrollRewind = 0;
                color[] = {1, 1, 1, 0};
                width = 0.001;
            };
            class HScrollbar {
                color[] = {1, 1, 1, 0};
                height = 0.001;
            };
            class Controls {
                class rhs_Distance: CA_Distance {
                    idc = 1;
                    text = "";
                    sizeEx = "0.054*SafezoneH";
                    x = "17.2 * 		(0.01875 * SafezoneH)";
                    y = "24.02 * 		(0.025 * SafezoneH)";
                    w = "20 * 		(0.01875 * SafezoneH)";
                    h = "20 * 		(0.025 * SafezoneH)";
                };
                class rhs_timeToTarget: CA_Distance {
                    idc = 601;
                    text = "";
                    sizeEx = "0.012*SafezoneH";
                    font = "rhs_digital_font_var";
                    x = "17.2 * 		(0.01875 * SafezoneH)";
                    y = "22.52 * 		(0.025 * SafezoneH)";
                    w = "20 * 		(0.01875 * SafezoneH)";
                    h = "20 * 		(0.025 * SafezoneH)";
                };
                class rhs_height: CA_Distance {
                    idc = 189;
                    style = 1;
                    text = "----";
                    sizeEx = "0.044*SafezoneH";
                    x = "14.2 * 		(0.01875 * SafezoneH)";
                    y = "-3.52 * 		(0.025 * SafezoneH)";
                    w = "20 * 		(0.01875 * SafezoneH)";
                    h = "20 * 		(0.025 * SafezoneH)";
                };
                class rhs_speed: RscText {
                    idc = 188;
                    style = 1;
                    text = "228";
                    colorText[] = {0.48, 0.77, 0.46, 1};
                    colorBackground[] = {0, 0, 0, 0};
                    sizeEx = "0.044*SafezoneH";
                    font = "rhs_digital_font_var";
                    x = "11.8 * 		(0.01875 * SafezoneH)";
                    y = "4.44 * 		(0.025 * SafezoneH)";
                    w = "10 * 		(0.01875 * SafezoneH)";
                    h = "4 * 		(0.025 * SafezoneH)";
                };
                class rhs_arr_turret: RscPicture {
                    idc = 2;
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_ka52_samshin_turret.paa";
                    x = "2.74 *   (0.01875 * Safezoneh)";
                    y = "26.79 * (0.025 * SafezoneH)";
                    w = "10 *   (0.01875 * SafezoneH)";
                    h = "10 *   (0.025 * SafezoneH)";
                };
                class rhs_arr_horizont: RscPicture {
                    idc = 3;
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_green.paa";
                    x = "27.1 *   (0.01875 * Safezoneh)";
                    y = "3.24 * (0.025 * SafezoneH)";
                    w = "12.18 *   (0.01875 * SafezoneH)";
                    h = "0.6 *   (0.025 * SafezoneH)";
                };
                class rhs_tex_horizont: RscText {
                    idc = 4;
                    text = "110";
                    style = "0x02";
                    font = "rhs_digital_font_var";
                    colorText[] = {0.48, 0.77, 0.46, 1};
                    colorBackground[] = {0, 0, 0, 0};
                    sizeEx = "0.044*SafezoneH";
                    x = "21.94 *   (0.01875 * Safezoneh)";
                    y = "1.19 * (0.025 * SafezoneH)";
                    w = "10 *   (0.01875 * SafezoneH)";
                    h = "10 *   (0.025 * SafezoneH)";
                };
                class rhs_arr_elevation: rhs_arr_horizont {
                    idc = 5;
                    x = "50.7 *   (0.01875 * Safezoneh)";
                    y = "16.04 * (0.025 * SafezoneH)";
                    w = "0.6 *   (0.01875 * SafezoneH)";
                    h = "2 *   (0.025 * SafezoneH)";
                };
                class rhs_tex_elevation: rhs_tex_horizont {
                    idc = 10;
                    text = "-27";
                    style = 0;
                    sizeEx = "0.024*SafezoneH";
                    font = "rhs_digital_font_var";
                    x = "47.18 *   (0.01875 * Safezoneh)";
                    y = "11.19 * (0.025 * SafezoneH)";
                    w = "10 *   (0.01875 * SafezoneH)";
                    h = "10 *   (0.025 * SafezoneH)";
                };
                class rhs_ind_tg: rhs_arr_horizont {
                    idc = 6;
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_ka52_samshin_text_tg.paa";
                    x = "16.84 *   (0.01875 * Safezoneh)";
                    y = "14.79 * (0.025 * SafezoneH)";
                    w = "3 *   (0.01875 * SafezoneH)";
                    h = "3 *   (0.025 * SafezoneH)";
                };
                class rhs_ind_ta: rhs_ind_tg {
                    idc = 7;
                    text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_ka52_samshin_text_ta.paa";
                    x = "33.34 *   (0.01875 * Safezoneh)";
                };
                class rhs_cross: rhs_arr_elevation {
                    idc = 8;
                    text = "rhsafrf\addons\rhs_a2port_air\Ka52\Data\rhs_ka52_samshin_cross.paa";
                    x = "23.09 *   (0.01875 * Safezoneh)";
                    y = "16.39 * (0.025 * SafezoneH)";
                    w = "7.18 *   (0.01875 * SafezoneH)";
                    h = "7.18 *   (0.025 * SafezoneH)";
                };
            };
        };
    };
    class RHS_RscInfoStaticWeapon: RscUnitInfo {
        idd = 300;
        controls[] = {"CA_Zeroing"};
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call rhs_fnc_ui_staticWeapon";
    };
    class RHS_RscOptics_Su25_KlenPS: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn rhs_fnc_su25_klenps;";
        controls[] = {"CA_IGUI_elements_group"};
        class CA_IGUI_elements_group: RscControlsGroup {
            idc = 170;
            class VScrollbar: VScrollbar {
                width = 0;
            };
            class HScrollbar: HScrollbar {
                height = 0;
            };
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "53.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            class controls {
                class CA_OpticsMode: RscText {
                    idc = 158;
                    w = "0";
                    h = "0";
                };
                class TextTrackArea: CA_OpticsMode {
                    idc = 194;
                    style = 2;
                    text = "AREA";
                };
                class TextTrackPoint: TextTrackArea {
                    idc = 195;
                    text = "POINT";
                };
            };
        };
    };
    class RHS_RscWeaponZU23_T3_Optic: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhs_fnc_sight_zu23_t3";
        controls[] = {"CA_OpticsZoom", "CA_IGUI_elements_group"};
        class CA_OpticsZoom: RscText {
            idc = 180;
            style = 1;
            colorText[] = {0.706, 0.0745, 0.0196, 1};
            sizeEx = "0.038*SafezoneH";
            shadow = 0;
            font = "EtelkaMonospacePro";
            text = "4.5";
            x = "43.85 * 		(0.01875 * SafezoneH)";
            y = "19.6 * 		(0.025 * SafezoneH)";
            w = "0* 		(0.01875 * SafezoneH)";
            h = "0 * 		(0.025 * SafezoneH)";
        };
        class CA_IGUI_elements_group: RscControlsGroup {
            x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
            y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
            w = "53.5 * 		(0.01875 * SafezoneH)";
            h = "40 * 		(0.025 * SafezoneH)";
            idc = 170;
            class VScrollbar {
                autoScrollSpeed = -1;
                autoScrollDelay = 5;
                autoScrollRewind = 0;
                color[] = {1, 1, 1, 0};
                width = 0.001;
            };
            class HScrollbar {
                color[] = {1, 1, 1, 0};
                height = 0.001;
            };
            class Controls {
                class CA_Distance: RscOpticsValue {
                    idc = 151;
                    style = 1;
                    shadow = 0;
                    colorBackground[] = {0, 0, 0, 1};
                    colorText[] = {1, 1, 1, 1};
                    font = "PuristaLight";
                    sizeEx = "0.018*SafezoneH";
                    x = "28.14 *   (0.01875 * Safezoneh)";
                    y = "30.14 *   (0.025 * SafezoneH)";
                    w = "0";
                    h = "0";
                };
                class CA_OpticsMode: CA_OpticsZoom {
                    idc = 154;
                };
            };
        };
        class Objects {
            class MainSight {
                idc = 901;
                type = 82;
                useGlobalLight = 1;
                minGlobalLightIntensity = -4;
                model = "\rhsafrf\addons\rhs_optics\vehicles\rhs_t3_scope_animated.p3d";
                direction[] = {0, 0, -1};
                up[] = {0, 1, 0};
                x = "20.0 * (((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
                y = "14.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
                z = 0.01;
                scale = "0.15 * (SafeZoneW Min SafeZoneH)";
                xBack = 0;
                yBack = 0;
                zBack = 0;
                inBack = 0;
                enableZoom = 0;
                zoomDuration = 0;
                class AnimationSources {
                    class Elevation {
                        source = "user";
                        animPeriod = 0.1;
                        initPhase = 5;
                    };
                };
            };
        };
    };
};
class RHS_P37_Radar {
    idd = 314;
    scriptName = "RscCustomInfoSensors";
    scriptPath = "IGUI";
    onLoad = "['onLoad',_this,'RscCustomInfoSensors','IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
    onUnload = "['onUnload',_this,'RscCustomInfoSensors','IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
    class controlsBackground {
        class Background: RscPicture {
            IDC = 15110;
            text = "A3\Ui_f\data\IGUI\RscCustomInfo\background_ca.paa";
            x = 0;
            y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            w = "(40 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))";
            h = "(40 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - (1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
            colorText[] = {
                "(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])",
                "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])",
                "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",
                "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8)"
            };
        };
        class BackgroundGroup: RscControlsGroupNoScrollbars {
            IDC = 15111;
            x = "0.125 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
            y = "1.125 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            w = "(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) - 0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
            h = "(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_H',		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            class controls {
                class Viewport: RscControlsGroupNoScrollbars {
                    IDC = 101;
                    x = 0;
                    y = 0;
                    w = "(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) - 0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
                    h = "(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_H',		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                };
                class Circles: RscPicture {
                    IDC = 102;
                    text = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\SENSCircles_ca.paa";
                    x = "0 - 0.7875 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
                    y = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    w = "(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) + 1.325 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
                    h = "(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_H',		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) + 1.325 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    colorText[] = {
                        "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                        "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                        "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                        "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
                    };
                };
                class OwnerVehicle: RscPicture {
                    IDC = 103;
                    text = "";
                    x = "0.5 * (		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) + 1.325 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 1.2875 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
                    y = "0.5 * (		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_H',		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) + 1.325 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
                    w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
                    h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    colorText[] = {
                        "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                        "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                        "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                        "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
                    };
                };
            };
        };
    };
    class controls {
        class RadarOff: RscIGUIText {
            text = "RDR OFF";
            style = 2;
            idc = 106;
            x = "0.2 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
            y = 0;
            h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            w = "0.3 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
            sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class Title: RscIGUIText {
            colorBackground[] = {
                "(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])",
                "(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])",
                "(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",
                "(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"
            };
            idc = 15112;
            text = "SENS";
            x = 0;
            y = 0;
            w = "(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
            h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class RadarOn: RadarOff {
            text = "RDR ON";
            idc = 105;
            colorText[] = {0, 1, 1, 1};
        };
        class Heading: RscIGUIText {
            style = 2;
            text = "HDG";
            idc = 111;
            x = "0.55 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
            y = 0;
            h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            w = "0.15 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
            sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class Range: RscIGUIValue {
            IDC = 104;
            text = "disprange";
            style = 1;
            x = "0.5 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
            y = 0;
            w = "0.5 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
            h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class Target: RscIGUIText {
            IDC = 107;
            text = "tgttype";
            x = 0;
            y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            w = "(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
            h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class TargetRange: RscIGUIText {
            IDC = 108;
            text = "tgtrange";
            x = 0;
            y = "1.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            w = "0.5 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
            h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class TargetAlt: RscIGUIText {
            IDC = 110;
            text = "tgtalt";
            style = 1;
            x = "0.5 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
            y = "1.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            w = "0.5 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
            h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class TargetSpeed: RscIGUIText {
            IDC = 109;
            text = "tgtspeed";
            style = 1;
            x = "0.5 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
            y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            w = "0.5 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
            h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
    };
    class sectors {
        icon15 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector15_ca.paa";
        icon30 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector30_ca.paa";
        icon45 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector45_ca.paa";
        icon60 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector60_ca.paa";
        icon75 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector75_ca.paa";
        icon90 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector90_ca.paa";
        icon105 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector105_ca.paa";
        icon120 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector120_ca.paa";
        icon135 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector135_ca.paa";
        icon150 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector150_ca.paa";
        icon165 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector165_ca.paa";
        icon180 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector180_ca.paa";
        icon195 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector195_ca.paa";
        icon210 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector210_ca.paa";
        icon225 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector225_ca.paa";
        icon240 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector240_ca.paa";
        icon255 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector255_ca.paa";
        icon270 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector270_ca.paa";
        icon285 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector285_ca.paa";
        icon300 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector300_ca.paa";
        icon315 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector315_ca.paa";
        icon330 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector330_ca.paa";
        icon345 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector345_ca.paa";
        icon360 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector360_ca.paa";
    };
    class targets {
        colorGroup[] = {0.7, 1, 0.4, 1};
        colorAssigned[] = {1, 0, 0, 1};
        colorMarked[] = {1, 1, 1, 1};
        iconLaserTarget = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\LaserTarget_ca.paa";
        iconNVTarget = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\NVTarget_ca.paa";
        iconActiveSensor = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\ActiveSensor_ca.paa";
        iconMarkedTarget = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\MarkedTarget_ca.paa";
        iconAssignedTarget = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\AssignedTarget_ca.paa";
        colorUnknown[] = {1, 1, 1, 1};
        iconUnknownAir = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\Air_ca.paa";
        iconUnknownAirRemote = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\AirRemote_ca.paa";
        iconUnknownGround = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\Ground_ca.paa";
        iconUnknownGroundRemote = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\GroundRemote_ca.paa";
        iconUnknownMan = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\UnknownMan_ca.paa";
        iconUnknownManRemote = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\UnknownManRemote_ca.paa";
        colorFriendly[] = {0, 1, 0, 1};
        iconFriendlyAir = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\Air_ca.paa";
        iconFriendlyAirRemote = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\AirRemote_ca.paa";
        iconFriendlyGround = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\Ground_ca.paa";
        iconFriendlyGroundRemote = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\GroundRemote_ca.paa";
        iconFriendlyMan = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\FriendlyMan_ca.paa";
        iconFriendlyManRemote = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\FriendlyManRemote_ca.paa";
        colorEnemy[] = {1, 0, 0, 1};
        iconEnemyAir = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\Air_ca.paa";
        iconEnemyAirRemote = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\AirRemote_ca.paa";
        iconEnemyGround = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\Ground_ca.paa";
        iconEnemyGroundRemote = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\GroundRemote_ca.paa";
        iconEnemyMan = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\EnemyMan_ca.paa";
        iconEnemyManRemote = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\EnemyManRemote_ca.paa";
    };
    class threats {
        colorMarking[] = {1, 1, 0, 1};
        colorLocking[] = {1, 0.5, 0, 1};
        colorMissile[] = {1, 0, 0, 1};
        iconmissile = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Threats\missile_ca.paa";
        iconlocking = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Threats\locking_ca.paa";
        iconmarking = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Threats\marking_ca.paa";
        iconsector = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Threats\sector_ca.paa";
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class sight_bmp2 {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_bmp2.sqf";
                description = "FCS for BMP-2";
            };
            class sight_btr80a {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_btr80a.sqf";
                description = "FCS for BTR-80A";
            };
            class sight_1pz32 {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_1pz32.sqf";
                description = "FCS for BTR-80 (1PZ-3-2)";
            };
            class sight_1pz3 {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_1pz3.sqf";
                description = "FCS for TKN-3B & 1PZ-3";
            };
            class rF_t72 {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_rF_t72.sqf";
                description = "FCS for T72";
            };
            class rF_t72_Animate {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_rF_T72_anim.sqf";
                description = "FCS for T72 - Gun Animation Part";
            };
            class sight_1g42 {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_1g42.sqf";
                description = "FCS for 1G42 Sights (T80 series)";
            };
            class sight_1g46 {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_1g46.sqf";
                description = "FCS for 1G46 Sights (T80U/T90 series)";
            };
            class sight_lead {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_lead.sqf";
                description = "Calculating lead for tanks";
            };
            class sight_1g42_setElev {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_1g42_elev.sqf";
                description = "Calculating elevation for 1g42";
            };
            class sight_bmp2_tkn3 {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_bmp2_tkn3.sqf";
                description = "FCS for TKN3-B Sights (BMP2)";
            };
            class sight_tkn3 {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_tkn3.sqf";
                description = "FCS for TKN3-B Sights (T72B/BMP series)";
            };
            class sight_tkn4s {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_tkn4s.sqf";
                description = "FCS for TKN4-S Sights (T80U/T90 series)";
            };
            class sight_tkn4s_setElev {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_tkn4s_elev.sqf";
                description = "Calculating elevation for TKN4-S";
            };
            class sight_sprutsd {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_sprutsd.sqf";
                description = "FCS for Sprut-SD";
            };
            class sight_1k13_3s_sprut {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_1k13_3s_sprut.sqf";
                description = "FCS for TKN4-S Sights (T80A/U/T90 series)";
            };
            class sight_1k13_3s_bmp3 {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_1k13_3s_bmp3.sqf";
                description = "FCS for TKN4-S Sights (T80A/U/T90 series)";
            };
            class sight_essa {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_essa.sqf";
                description = "FCS Catherine for BMD4 & BMP3M";
            };
            class sight_sosnau {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_sosnau.sqf";
                description = "FCS Sosna-U for T-72B3";
            };
            class sight_essa_commander {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_essa_commander.sqf";
                description = "FCS Catherine for BMD4 & BMP3M";
            };
            class sight_essa_elev {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_essa_elev.sqf";
                description = "FCS Catherine for BMD4 & BMP3M";
            };
            class sight_agava2 {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_agava2.sqf";
                description = "FCS AGAVA-2 for T-80UM";
            };
            class sight_plissa {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_plissa.sqf";
                description = "FCS PLISSA for T-80UE-1";
            };
            class sight_prp3_mortar {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_prp3_mortar.sqf";
                description = "FCS for PRP3 mortar";
            };
            class sight_9s475 {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_9s475.sqf";
                description = "FCS for Mi-24 missle launcher";
            };
            class sight_1pn22m {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_1pn22m.sqf";
                description = "FCS for 1PN22M sight used on BMP & BMD 1";
            };
            class sight_zu23_t3 {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_zu23_t3.sqf";
            };
            class ammoSwitch {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_ammoSwitch.sqf";
                description = "Handling of automatic shell loading for tanks with autoloaders";
            };
            class ammoIndexing {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_ammoIndexing.sqf";
                description = "Indexing rounds in carousel";
            };
            class openBallisticMenu {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_openBallisticMenu.sqf";
                description = "Handling of automatic shell loading for tanks with autoloaders";
            };
            class autoloader {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_autoloader.sqf";
                description = "Handling of automatic shell loading for tanks with autoloaders";
            };
            class autoloader_ui_eh {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_autoloader_ui_eh.sqf";
                description = "Handling of inGameUISetEventHandler for autoloaders";
            };
            class autoloaderSwitch {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_autoloaderSwitch.sqf";
                description = "Sequential Mode autoloader switch handler";
            };
            class fireOnMove {
                file = "\rhsafrf\addons\rhs_optics\scripts\rhs_fireOnMove.sqf";
                description = "Fire on move script";
            };
            class findAngle {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_findAngle.sqf";
                description = "FCS PLISSA for T-80UE-1";
            };
            class findAngle2 {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_findAngle2.sqf";
                description = "FCS PLISSA for T-80UE-1";
            };
            class calcBalistic {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_calcBalistic.sqf";
                description = "FCS PLISSA for T-80UE-1";
            };
            class calcBalistic2 {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_calcBalistic2.sqf";
                description = "FCS PLISSA for T-80UE-1";
            };
            class gunOffset {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_gunOffset.sqf";
                description = "Gun & view mem point offset fixer";
            };
            class autoTrack {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_autoTrack.sqf";
                description = "Auto track target script";
            };
            class compass_sprutsd {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_compass_sprutsd.sqf";
                description = "Compass for Sprut-SD";
            };
            class compass_t72 {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_compass_t72.sqf";
                description = "Compass for T72";
            };
            class compass_t80 {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_compass_t80.sqf";
                description = "Compass for T80 Tanks";
            };
            class pipHandler_bmp3 {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_pipHandler_bmp3.sqf";
                description = "PiP windows handler for BMP3";
            };
            class pipHandler_bmp3m {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_pipHandler_bmp3m.sqf";
                description = "PiP windows handler for BMP3M";
            };
            class ui_staticWeapon {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_ui_staticWeapon.sqf";
                description = "UI handler for rotation of static weapons";
            };
            class fcs_2s3 {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_fcs_2s3.sqf";
                description = "Simple fcs function for 2s3";
            };
            class fcs_2s1 {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_fcs_2s1.sqf";
            };
            class fcs_d30 {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_fcs_d30.sqf";
            };
            class 1v528_setRange {
                file = "\rhsafrf\addons\rhs_optics\scripts\1v528\setRange.sqf";
                description = "Calculating elevation for 1g42";
            };
            class randomRadio {
                file = "\rhsafrf\addons\rhs_optics\scripts\rhs_randomRadio.sqf";
                description = "Random Radio script";
            };
            class laserTarget {
                file = "\rhsafrf\addons\rhs_optics\scripts\rhs_laserTarget.sqf";
                description = "Check laser target";
            };
            class su25_klenps {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_su25_klenps.sqf";
                description = "Klen-PS simulation for Su-25";
            };
        };
        class SPO15_functions {
            class rwr_spo15 {
                file = "\rhsafrf\addons\rhs_optics\scripts\rhs_rwr_spo15.sqf";
                description = "SPO-15 Beryeza main handler";
            };
            class rwr_spo15_eh {
                file = "\rhsafrf\addons\rhs_optics\scripts\rhs_rwr_spo15_eh.sqf";
                description = "SPO-15 Incoming Missile EH";
            };
        };
        class Ka52_functions {
            class ka52_handler {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_ka52.sqf";
                description = "Ka-52 sync handler";
            };
            class sight_Samshin {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_samshin.sqf";
                description = "Ka-52 Samshin-1 simulation handler";
            };
            class sight_Samshin_elev {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_samshin_elev.sqf";
                description = "Ka-52 Samshin-1 simulation handler";
            };
        };
        class Mi28_functions {
            class Mi28_handler {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_mi28.sqf";
                description = "Mi-28sync handler";
            };
            class sight_mi28_fcs {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_mi28_fcs.sqf";
                description = "Mi-28 OPS-28 'TOR' simulation handler";
            };
            class sight_mi28_fcs_pilot {
                file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_mi28_fcs_pilot.sqf";
                description = "Mi-28 TOES-521 camera simulation handler";
            };
        };
    };
};
class CfgSounds {
    class RHS_SwitchClick {
        name = "Tank switch click";
        sound[] = {"rhsafrf\addons\rhs_optics\scripts\1v528\sounds\switch_click.ogg", 1, 1};
        titles[] = {};
    };
    class RHS_SwitchToggle {
        name = "Tank toggle click";
        sound[] = {"rhsafrf\addons\rhs_optics\scripts\1v528\sounds\switch_pyk.ogg", 1, 1};
        titles[] = {};
    };
    class RHS_ButtonPress {
        name = "Tank button press";
        sound[] = {"rhsafrf\addons\rhs_optics\scripts\1v528\sounds\button_press.ogg", 1, 1};
        titles[] = {};
    };
    class rhs_rwr_beep_single {
        name = "beep";
        sound[] = {
            "rhsafrf\addons\rhs_optics\sounds\single_beep.wav",
            1.5848932,
            1,
            1
        };
        titles[] = {0, ""};
    };
    class rhs_rwr_beep_short: rhs_rwr_beep_single {
        sound[] = {
            "rhsafrf\addons\rhs_optics\sounds\short_beep.wav",
            1.5848932,
            1,
            1
        };
    };
    class rhs_rwr_beep_long: rhs_rwr_beep_single {
        sound[] = {
            "rhsafrf\addons\rhs_optics\sounds\long_beep.wav",
            1.5848932,
            1,
            1
        };
    };
};
