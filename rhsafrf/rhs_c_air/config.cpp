class DefaultEventhandlers;
class CfgPatches {
    class rhs_c_air {
        units[] = {
            "RHS_T50_vvs_051",
            "RHS_T50_vvs_052",
            "RHS_T50_vvs_053",
            "RHS_T50_vvs_054",
            "RHS_T50_vvs_blueonblue",
            "RHS_T50_vvs_generic",
            "RHS_T50_vvs_generic_ext",
            "RHS_TU95MS_vvs_old",
            "RHS_TU95MS_vvs_dubna",
            "RHS_TU95MS_vvs_irkutsk",
            "RHS_TU95MS_vvs_tambov",
            "RHS_TU95MS_vvs_chelyabinsk",
            "rhs_k36d5_seat"
        };
        weapons[] = {};
        requiredVersion = 1.5;
        requiredAddons[] = {"rhs_main", "rhs_c_a2port_air", "rhs_c_airweapons"};
        name = "AFRF Planes";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class Afterburner {
            class Afterburner {
                file = "\rhsafrf\addons\rhs_c_air\scripts\rhs_afterburner.sqf";
            };
        };
        class PAKFA {
            class PAKFA_Init {
                file = "\rhsafrf\addons\rhs_c_air\scripts\rhs_pakfa_init.sqf";
            };
            class PAKFA_Glonass {
                file = "\rhsafrf\addons\rhs_c_air\scripts\Glonass_map.sqf";
            };
            class PAKFA_Navigation {
                file = "\rhsafrf\addons\rhs_c_air\scripts\Navigation.sqf";
            };
            class PAKFA_MapData {
                file = "\rhsafrf\addons\rhs_c_air\scripts\MAP_data.sqf";
            };
        };
        class Tu95 {
            class tu95_dialog_control {
                file = "\rhsafrf\addons\rhs_c_air\scripts\tu95\dialog_control.sqf";
                description = "";
            };
            class tu95_AI_launch {
                file = "\rhsafrf\addons\rhs_c_air\scripts\tu95\AI_launch.sqf";
                description = "";
            };
            class tu95_AI_prepare {
                file = "\rhsafrf\addons\rhs_c_air\scripts\tu95\AI_prepare.sqf";
                description = "Prepare tochka for launch";
            };
            class tu95_AI_waitForTarget {
                file = "\rhsafrf\addons\rhs_c_air\scripts\tu95\AI_waitForTarget.sqf";
                description = "";
            };
            class tu95_missile_control {
                file = "\rhsafrf\addons\rhs_c_air\scripts\tu95\missile_control.sqf";
                description = "";
            };
            class tu95_anim {
                file = "\rhsafrf\addons\rhs_c_air\scripts\tu95\anim_tu95.sqf";
                description = "";
            };
            class tu95_deploy {
                file = "\rhsafrf\addons\rhs_c_air\scripts\tu95\deploy.sqf";
                description = "";
            };
        };
        class Air {
            class K36D_seatEjection {
                file = "\rhsafrf\addons\rhs_c_air\scripts\rhs_seatEjection.sqf";
            };
            class AI_Eject {
                file = "\rhsafrf\addons\rhs_c_air\scripts\rhs_ejectAI.sqf";
            };
            class seatPreload {
                file = "\rhsafrf\addons\rhs_c_air\scripts\rhs_seatPreload.sqf";
            };
            class infantryParadrop {
                file = "\rhsafrf\addons\rhs_c_air\scripts\infParadrop.sqf";
            };
        };
    };
};
class RscMapControl;
class RscShortcutButton;
class RscButton;
class RscPicture;
class RscCombo;
class RscText;
class RscListBox;
class RscEdit;
class tu95_main_dialog {
    idd = 61461;
    name = "tu95_main_dialog";
    movingEnable = 0;
    onLoad = "[0] spawn rhs_fnc_tu95_dialog_control";
    onUnload = "[1] call rhs_fnc_tu95_dialog_control";
    controlsBackground[] = {"tu95_backgroundCover", "tu95_background"};
    objects[] = {};
    controls[] = {
        "tu95_map",
        "tu95_label",
        "tu95_status",
        "tu95_coord_control_group",
        "tu95_btn_control_group"
    };
    class RHS_tu95_control_group {
        idc = -1;
        type = 15;
        style = 0;
        class VScrollbar {
            color[] = {1, 1, 1, 1};
            width = 0.021;
            autoScrollSpeed = -1;
            autoScrollDelay = 5;
            autoScrollRewind = 0;
        };
        class HScrollbar {
            color[] = {1, 1, 1, 1};
            height = 0.028;
        };
        class ScrollBar {
            color[] = {1, 1, 1, 0.6};
            colorActive[] = {1, 1, 1, 1};
            colorDisabled[] = {1, 1, 1, 0.3};
            arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
            arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
            border = "#(argb,8,8,3)color(0,0,0,0.1)";
            thumb = "#(argb,8,8,3)color(1,1,1,1)";
        };
        x = 0;
        w = 1;
        y = 0;
        h = 1;
    };
    class RHS_tu95_text: RscText {
        idc = -1;
        type = 0;
        style = 0;
        x = 0;
        w = 0.3;
        y = 0;
        h = 0.04;
        sizeEx = 0.03921;
        colorBackground[] = {0.5, 0.5, 0.5, 0};
        colorText[] = {0.85, 0.85, 0.85, 1};
        font = "PuristaMedium";
        text = "";
    };
    class RHS_tu95_text_border: RscPicture {
        idc = -1;
        type = 0;
        style = 0;
        x = 0;
        w = 0.3;
        y = 0;
        h = 0.035;
        sizeEx = 0.03921;
        colorBackground[] = {0, 0, 0, 0.2};
        colorText[] = {0.85, 0.85, 0.85, 1};
        font = "PuristaMedium";
        text = "";
    };
    class RHS_tu95_edit: RscEdit {
        type = 2;
        style = "0x00+16";
        idc = -1;
        font = "PuristaMedium";
        sizeEx = 0.026;
        htmlControl = 1;
        lineSpacing = 0.004;
        x = 0;
        w = 0.3;
        y = 0;
        h = 0.06;
        colorText[] = {0.85, 0.85, 0.85, 1};
        colorSelection[] = {1, 1, 1, 1};
        text = "";
    };
    class RHS_tu95_image: RscPicture {
        idc = -1;
        type = 0;
        style = "48+0x800";
        x = 0.25;
        w = 0.1;
        y = 0.1;
        h = 0.1;
        colorText[] = {1, 1, 1, 1};
        colorBackground[] = {0, 0, 0, 0};
        text = "";
        font = "PuristaMedium";
        sizeEx = 0.032;
    };
    class RHS_tu95_btn: RscShortcutButton {
        idc = -1;
        type = 16;
        style = 0;
        text = "btn";
        action = "";
        x = 0;
        y = 0;
        w = 0.23;
        h = 0.1;
        size = 0.03921;
        sizeEx = 0.03921;
        color[] = {0.543, 0.5742, 0.4102, 1};
        color2[] = {0.95, 0.95, 0.95, 1};
        colorBackground[] = {1, 1, 1, 1};
        colorbackground2[] = {1, 1, 1, 0.4};
        colorDisabled[] = {1, 1, 1, 0.25};
        periodFocus = 1.2;
        periodOver = 0.8;
        class HitZone {
            left = 0.004;
            top = 0.029;
            right = 0.004;
            bottom = 0.029;
        };
        class ShortcutPos {
            left = 0.0145;
            top = 0.026;
            w = 0.0392157;
            h = 0.0522876;
        };
        class TextPos {
            left = 0.025;
            top = 0.03;
            right = 0.005;
            bottom = 0.005;
        };
        textureNoShortcut = "";
        animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";
        animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";
        animTextureOver = "#(argb,8,8,3)color(1,1,1,0.0)";
        animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";
        animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";
        animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";
        period = 0.4;
        font = "PuristaMedium";
        soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter", 0.09, 1};
        soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush", 0.09, 1};
        soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick", 0.09, 1};
        soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape", 0.09, 1};
        class Attributes {
            font = "PuristaMedium";
            color = "#E5E5E5";
            align = "left";
            shadow = "true";
        };
        class AttributesImage {
            font = "PuristaMedium";
            color = "#E5E5E5";
            align = "left";
            shadow = "true";
        };
    };
    class RHS_tu95_list: RscListBox {
        type = 5;
        style = 16;
        idc = -1;
        text = "";
        w = 0.275;
        h = 0.04;
        colorSelect[] = {1, 1, 1, 1};
        colorText[] = {1, 1, 1, 1};
        colorBackground[] = {0.8, 0.8, 0.8, 1};
        colorSelectBackground[] = {0.4, 0.43, 0.28, 0.5};
        colorScrollbar[] = {0.2, 0.2, 0.2, 1};
        arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
        arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
        wholeHeight = 0.45;
        rowHeight = 0.04;
        color[] = {0.7, 0.7, 0.7, 1};
        colorActive[] = {0, 0, 0, 1};
        colorDisabled[] = {0, 0, 0, 0.3};
        font = "PuristaMedium";
        sizeEx = 0.023;
        soundSelect[] = {"", 0.1, 1};
        soundExpand[] = {"", 0.1, 1};
        soundCollapse[] = {"", 0.1, 1};
        maxHistoryDelay = 1;
        autoScrollSpeed = -1;
        autoScrollDelay = 5;
        autoScrollRewind = 0;
        class ScrollBar {
            color[] = {1, 1, 1, 1};
            colorActive[] = {1, 1, 1, 1};
            colorDisabled[] = {1, 1, 1, 1};
            thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
            arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
            arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
            border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
        };
    };
    class RHS_tu95_map: RscMapControl {
        idc = -1;
        type = 101;
        style = 48;
        x = 0;
        y = 0;
        w = 1;
        h = 1;
        colorBackground[] = {1, 1, 1, 1};
        colorOutside[] = {0, 0, 0, 1};
        colorSea[] = {0.4, 0.6, 0.8, 0.5};
        colorForest[] = {0.6, 0.8, 0.4, 0.5};
        colorForestBorder[] = {0.6, 0.8, 0.4, 1};
        colorRocks[] = {0, 0, 0, 0.3};
        colorRocksBorder[] = {0, 0, 0, 1};
        colorLevels[] = {0.3, 0.2, 0.1, 0.5};
        colorMainCountlines[] = {0.6, 0.4, 0.2, 0.5};
        colorCountlines[] = {0.6, 0.4, 0.2, 0.3};
        colorMainCountlinesWater[] = {0.5, 0.6, 0.7, 0.6};
        colorCountlinesWater[] = {0.5, 0.6, 0.7, 0.3};
        colorPowerLines[] = {0.1, 0.1, 0.1, 1};
        colorRailWay[] = {0.8, 0.2, 0, 1};
        colorNames[] = {1.1, 0.1, 1.1, 0.9};
        colorInactive[] = {1, 1, 0, 0.5};
        colorTracks[] = {0.8, 0.8, 0.7, 0.2};
        colorTracksFill[] = {0.8, 0.7, 0.7, 1};
        colorRoads[] = {0.7, 0.7, 0.7, 1};
        colorRoadsFill[] = {1, 1, 1, 1};
        colorMainRoads[] = {0.9, 0.5, 0.3, 1};
        colorMainRoadsFill[] = {1, 0.6, 0.4, 1};
        colorGrid[] = {0.1, 0.1, 0.1, 0.6};
        colorGridMap[] = {0.1, 0.1, 0.1, 0.6};
        font = "PuristaMedium";
        sizeEx = 0.04;
        stickX[] = {0.2, {"Gamma", 1, 1.5}};
        stickY[] = {0.2, {"Gamma", 1, 1.5}};
        ptsPerSquareSea = 6;
        ptsPerSquareTxt = 8;
        ptsPerSquareCLn = 8;
        ptsPerSquareExp = 8;
        ptsPerSquareCost = 8;
        ptsPerSquareFor = "4.0f";
        ptsPerSquareForEdge = "10.0f";
        ptsPerSquareRoad = 2;
        ptsPerSquareObj = 10;
        fontLabel = "PuristaMedium";
        sizeExLabel = 0.034;
        fontGrid = "PuristaMedium";
        sizeExGrid = 0.034;
        fontUnits = "PuristaMedium";
        sizeExUnits = 0.034;
        fontNames = "PuristaMedium";
        sizeExNames = 0.056;
        fontInfo = "PuristaMedium";
        sizeExInfo = 0.034;
        fontLevel = "PuristaMedium";
        sizeExLevel = 0.034;
        text = "#(argb,8,8,3)color(1,1,1,1)";
        maxSatelliteAlpha = 0;
        alphaFadeStartScale = 1;
        alphaFadeEndScale = 1.1;
        showCountourInterval = 2;
        scaleDefault = 0.1;
        onMouseButtonClick = "";
        onMouseButtonDblClick = "";
        class Legend {
            colorBackground[] = {1, 1, 1, 0.5};
            color[] = {0, 0, 0, 1};
            x = "SafeZoneX + 					(			((safezoneW / safezoneH) min 1.2) / 40)";
            y = "SafeZoneY + safezoneH - 4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
            h = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            font = "PuristaMedium";
            sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
        };
        class ActiveMarker {
            color[] = {0.3, 0.1, 0.9, 1};
            size = 50;
        };
        class Command {
            color[] = {1, 1, 1, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
            size = 18;
            importance = 1;
            coefMin = 1;
            coefMax = 1;
        };
        class Task {
            colorCreated[] = {1, 1, 1, 1};
            colorCanceled[] = {0.7, 0.7, 0.7, 1};
            colorDone[] = {0.7, 1, 0.3, 1};
            colorFailed[] = {1, 0.3, 0.2, 1};
            color[] = {
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
            };
            icon = "\A3\ui_f\data\map\mapcontrol\taskIcon_CA.paa";
            iconCreated = "\A3\ui_f\data\map\mapcontrol\taskIconCreated_CA.paa";
            iconCanceled = "\A3\ui_f\data\map\mapcontrol\taskIconCanceled_CA.paa";
            iconDone = "\A3\ui_f\data\map\mapcontrol\taskIconDone_CA.paa";
            iconFailed = "\A3\ui_f\data\map\mapcontrol\taskIconFailed_CA.paa";
            size = 27;
            importance = 1;
            coefMin = 1;
            coefMax = 1;
        };
        class CustomMark {
            color[] = {0, 0, 0, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\custommark_ca.paa";
            size = 24;
            importance = 1;
            coefMin = 1;
            coefMax = 1;
        };
        class Tree {
            color[] = {0.45, 0.64, 0.33, 0.4};
            icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
            size = 12;
            importance = "0.9 * 16 * 0.05";
            coefMin = 0.25;
            coefMax = 4;
        };
        class SmallTree {
            color[] = {0.45, 0.64, 0.33, 0.4};
            icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
            size = 12;
            importance = "0.6 * 12 * 0.05";
            coefMin = 0.25;
            coefMax = 4;
        };
        class Bush {
            color[] = {0.45, 0.64, 0.33, 0.4};
            icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
            size = "14/2";
            importance = "0.2 * 14 * 0.05 * 0.05";
            coefMin = 0.25;
            coefMax = 4;
        };
        class Church {
            color[] = {1, 1, 1, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\church_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
        };
        class Chapel {
            color[] = {0, 0, 0, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
        };
        class Cross {
            color[] = {0, 0, 0, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
        };
        class Rock {
            color[] = {0.1, 0.1, 0.1, 0.8};
            icon = "\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
            size = 12;
            importance = "0.5 * 12 * 0.05";
            coefMin = 0.25;
            coefMax = 4;
        };
        class Bunker {
            color[] = {0, 0, 0, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
            size = 14;
            importance = "1.5 * 14 * 0.05";
            coefMin = 0.25;
            coefMax = 4;
        };
        class Fortress {
            color[] = {0, 0, 0, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
            size = 16;
            importance = "2 * 16 * 0.05";
            coefMin = 0.25;
            coefMax = 4;
        };
        class Fountain {
            color[] = {0, 0, 0, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\fountain_ca.paa";
            size = 11;
            importance = "1 * 12 * 0.05";
            coefMin = 0.25;
            coefMax = 4;
        };
        class ViewTower {
            color[] = {0, 0, 0, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";
            size = 16;
            importance = "2.5 * 16 * 0.05";
            coefMin = 0.5;
            coefMax = 4;
        };
        class Lighthouse {
            color[] = {1, 1, 1, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\lighthouse_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
        };
        class Quay {
            color[] = {1, 1, 1, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\quay_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
        };
        class Fuelstation {
            color[] = {1, 1, 1, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
        };
        class Hospital {
            color[] = {1, 1, 1, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\hospital_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
        };
        class BusStop {
            color[] = {1, 1, 1, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\busstop_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
        };
        class Transmitter {
            color[] = {1, 1, 1, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
        };
        class Stack {
            color[] = {0, 0, 0, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\stack_ca.paa";
            size = 20;
            importance = "2 * 16 * 0.05";
            coefMin = 0.9;
            coefMax = 4;
        };
        class Ruin {
            color[] = {0, 0, 0, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\ruin_ca.paa";
            size = 16;
            importance = "1.2 * 16 * 0.05";
            coefMin = 1;
            coefMax = 4;
        };
        class Tourism {
            color[] = {0, 0, 0, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";
            size = 16;
            importance = "1 * 16 * 0.05";
            coefMin = 0.7;
            coefMax = 4;
        };
        class Watertower {
            color[] = {1, 1, 1, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\watertower_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
        };
        class Waypoint {
            color[] = {0, 0, 0, 1};
            size = 24;
            importance = 1;
            coefMin = 1;
            coefMax = 1;
            icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
        };
        class WaypointCompleted {
            color[] = {0, 0, 0, 1};
            size = 24;
            importance = 1;
            coefMin = 1;
            coefMax = 1;
            icon = "\A3\ui_f\data\map\mapcontrol\waypointCompleted_ca.paa";
        };
        class power {
            icon = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
            color[] = {1, 1, 1, 1};
        };
        class powersolar {
            icon = "\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
            color[] = {1, 1, 1, 1};
        };
        class powerwave {
            icon = "\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
            color[] = {1, 1, 1, 1};
        };
        class powerwind {
            icon = "\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
            color[] = {1, 1, 1, 1};
        };
        class Shipwreck {
            icon = "\A3\ui_f\data\map\mapcontrol\Shipwreck_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
            color[] = {0, 0, 0, 1};
        };
    };
    class tu95_backgroundCover: RHS_tu95_text {
        h = "SafeZoneH";
        w = "SafeZoneW";
        x = "SafeZoneX";
        y = "SafeZoneY";
        colorBackground[] = {0, 0, 0, 1};
        text = "";
    };
    class tu95_background {
        idc = -1;
        type = 0;
        style = 48;
        x = "0.1-0.03";
        w = "0.3*3 + 0.03*4";
        y = 0;
        h = "1+0.01*2+0.043*4";
        colorText[] = {1, 1, 1, 1};
        colorBackground[] = {0, 0, 0, 0};
        text = "#(argb,8,8,3)color(0,0,0,1)";
        font = "PuristaMedium";
        sizeEx = 0.032;
    };
    class tu95_label: RHS_tu95_text {
        style = 2;
        x = 0.1;
        w = "0.9 - 0.01";
        y = 0.05;
        h = 0.05;
        sizeEx = 0.05;
        text = "Tu-95MS-6 Launch Platform";
    };
    class tu95_map: RHS_tu95_map {
        idc = "(61461 + 1)";
        x = 0.1;
        w = "0.3*2 - 0.01";
        y = "0.1 + 0.2";
        h = "1 - (0.1 + 0.2*2) + 0.04";
    };
    class tu95_status: RHS_tu95_text_border {
        idc = "(61461 + 2)";
        x = 0.1;
        w = "0.9 - 0.01";
        y = "1-0.1- 0.02";
        text = "--";
    };
    class tu95_coord_control_group: RHS_tu95_control_group {
        x = 0.1;
        w = 1;
        y = "0.1+0.025";
        h = "0.04*5";
        class Controls {
            class tu95_coord_desc: RHS_tu95_text {
                style = 1;
                x = 0;
                w = "0.17 - 0.01";
                y = 0;
                text = "$STR_RHS_ss21_coord_desc";
            };
            class tu95_latitude_desc: RHS_tu95_text {
                style = 1;
                x = 0;
                w = "0.17 - 0.01";
                y = 0.04;
                text = "$STR_RHS_ss21_latitude_desc";
            };
            class tu95_longitude_desc: RHS_tu95_text {
                style = 1;
                x = 0;
                w = "0.17 - 0.01";
                y = "0.04*2";
                text = "$STR_RHS_ss21_longitude_desc";
            };
            class tu95_elevation_desc: RHS_tu95_text {
                style = 1;
                x = 0;
                w = "0.17 - 0.01";
                y = "0.04*3";
                h = 0.04;
                text = "$STR_RHS_ss21_elevation_desc";
            };
            class tu95_target_desc: RHS_tu95_text {
                x = 0.17;
                w = "0.17 - 0.01";
                y = 0;
                text = "$STR_RHS_ss21_target_desc";
            };
            class tu95_target_x: RHS_tu95_text_border {
                idc = "(61461 + 3)";
                x = 0.17;
                w = "0.17 - 0.01";
                y = "0.04*1";
                text = "--";
            };
            class tu95_target_y: RHS_tu95_text_border {
                idc = "(61461 + 4)";
                x = 0.17;
                w = "0.17 - 0.01";
                y = "0.04*2";
                text = "--";
            };
            class tu95_target_z: RHS_tu95_text_border {
                idc = "(61461 + 5)";
                x = 0.17;
                w = "0.17 - 0.01";
                y = "0.04*3";
                text = "--";
            };
            class tu95_tochka_desc: RHS_tu95_text {
                x = "0.17*2";
                w = "0.17 - 0.01";
                y = 0;
                text = "$STR_RHS_ss21_tochka_desc";
            };
            class tu95_tochka_x: RHS_tu95_text_border {
                idc = "(61461 + 6)";
                x = "0.17*2";
                w = "0.17 - 0.01";
                y = "0.04*1";
                text = "--";
            };
            class tu95_tochka_y: RHS_tu95_text_border {
                idc = "(61461 + 7)";
                x = "0.17*2";
                w = "0.17 - 0.01";
                y = "0.04*2";
                text = "--";
            };
            class tu95_tochka_z: RHS_tu95_text_border {
                idc = "(61461 + 8)";
                x = "0.17*2";
                w = "0.17 - 0.01";
                y = "0.04*3";
                text = "--";
            };
            class tu95_rel_desc: RHS_tu95_text {
                style = 2;
                x = "0.17*4.3 - 0.03";
                w = "0.17 - 0.01 + 0.03";
                y = 0;
                text = "$STR_RHS_ss21_rel_desc";
            };
            class tu95_dir_desc: RHS_tu95_text {
                style = 1;
                x = "0.17*3.3";
                w = "0.17 - 0.01";
                y = 0.04;
                text = "$STR_RHS_ss21_dir_desc";
            };
            class tu95_dist_desc: RHS_tu95_text {
                style = 1;
                x = "0.17*3.3";
                w = "0.17 - 0.01";
                y = "0.04*2";
                text = "$STR_RHS_ss21_dist_desc";
            };
            class tu95_elevation_rel_desc: RHS_tu95_text {
                style = 1;
                x = "0.17*3.3";
                w = "0.17 - 0.01";
                y = "0.04*3";
                text = "$STR_RHS_ss21_elevation_desc";
            };
            class tu95_rel_dir: RHS_tu95_text_border {
                idc = "(61461 + 9)";
                x = "0.17*4.3";
                w = "0.17 - 0.01";
                y = "0.04*1";
                text = "--";
            };
            class tu95_rel_dist: RHS_tu95_text_border {
                idc = "(61461 + 10)";
                x = "0.17*4.3";
                w = "0.17 - 0.01";
                y = "0.04*2";
                text = "--";
            };
            class tu95_rel_elev: RHS_tu95_text_border {
                idc = "(61461 + 11)";
                x = "0.17*4.3";
                w = "0.17 - 0.01";
                y = "0.04*3";
                text = "--";
            };
        };
    };
    class tu95_btn_control_group: RHS_tu95_control_group {
        x = "0.1 + 0.3*2";
        w = 0.3;
        y = "0.1 + 0.2 - 0.05";
        h = 1;
        class Controls {
            class tu95_ammo_desc: RHS_tu95_text {
                style = 2;
                x = 0;
                w = 0.3;
                y = "0.043*1 + 0.032";
                text = "Missile type";
            };
            class tu95_ammo_text: RscCombo {
                idc = "(61461 + 12)";
                style = 2;
                x = 0;
                w = 0.3;
                y = "0.043*2 + 0.032";
                text = "Kh-55Sh HE";
                font = "PuristaSemibold";
                onLBSelChanged = "[6,_this select 1] spawn rhs_fnc_tu95_dialog_control";
            };
            class tu95_ammo_count_desc: RHS_tu95_text {
                style = 2;
                x = 0;
                w = 0.3;
                y = "0.043*3 + 0.032";
                text = "Total ammo count";
            };
            class tu95_ammo_count_text: RHS_tu95_text {
                idc = "(61461 + 13)";
                style = 2;
                x = 0;
                w = 0.3;
                y = "0.043*4 + 0.032";
                text = "6";
                font = "PuristaSemibold";
            };
            class tu95_bay_desc: RHS_tu95_text {
                style = 2;
                x = 0;
                w = 0.3;
                y = "0.043*7 + 0.032";
                text = "$STR_RHS_ss21_bay_desc";
            };
            class tu95_bay_close_btn: RHS_tu95_btn {
                idc = "(61461 + 15)";
                x = 0;
                w = "0.3/2";
                y = "0.043*8";
                text = "$STR_RHS_ss21_bay_close_btn";
                action = "[4] spawn rhs_fnc_tu95_dialog_control";
            };
            class tu95_bay_open_btn: RHS_tu95_btn {
                idc = "(61461 + 14)";
                x = "0.3/2";
                w = "0.3/2";
                y = "0.043*8";
                text = "$STR_RHS_ss21_bay_open_btn";
                action = "[5] spawn rhs_fnc_tu95_dialog_control";
            };
            class tu95_designate_target_btn: RHS_tu95_btn {
                x = 0;
                w = 0.3;
                y = "0.35+0.043*1";
                text = "$STR_RHS_ss21_designate_target_btn";
                action = "[10] call rhs_fnc_tu95_dialog_control";
            };
            class tu95_launch_btn: RHS_tu95_btn {
                idc = "(61461 + 19)";
                x = 0;
                w = 0.3;
                y = "0.35+0.043*2";
                text = "$STR_RHS_ss21_launch_btn";
                action = "[12] spawn rhs_fnc_tu95_dialog_control";
            };
            class tu95_close_btn: RHS_tu95_btn {
                x = 0;
                w = 0.3;
                y = "0.35+0.043*4";
                text = "$STR_RHS_ss21_close_btn";
                action = "closeDialog 0";
            };
        };
    };
};
class CfgSounds {
    class rhs_eject_sound {
        name = "Seat ejection sound";
        sound[] = {
            "\rhsafrf\addons\rhs_air\sounds\ejection_sound.wss",
            2.12202,
            1,
            300,
            1,
            0,
            0,
            0
        };
        titles[] = {};
    };
};
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        RHS_PAKFA_Pilot = "RHS_PAKFA_Pilot";
        RHS_PAKFA_Pilot_GetIn = "RHS_PAKFA_Pilot_GetIn";
        RHS_K36D_PilotEject = "rhs_k36d_PilotEject";
        RHS_TU95_Pilot = "rhs_tu95_pilot";
        RHS_TU95_RearGunner = "RHS_TU95_RearGunner";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class PreciseCrew;
        class RHS_PAKFA_Pilot: Crew {
            file = "\rhsafrf\addons\rhs_c_air\anims\rhs_pakfa_pilot.rtm";
            interpolateTo[] = {"RHS_KIA_PAKFA_Pilot", 1};
            speed = 0.066519;
            leaning = "crewShake_half";
        };
        class RHS_PAKFA_Pilot_GetIn: PreciseCrew {
            file = "\rhsafrf\addons\rhs_c_air\anims\rhs_pakfa_pilot_getin.rtm";
            speed = -8.2;
            looped = 0;
            connectTo[] = {};
            interpolateTo[] = {"RHS_PAKFA_Pilot", 0.2, "RHS_KIA_PAKFA_Pilot", 1};
            variantsAI[] = {};
            variantsPlayer[] = {};
            variantAfter[] = {2.7, 2.7, 2.7};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
            headBobMode = 1;
            headBobStrength = 0.8;
            soundOverride = "walk";
            soundEnabled = 1;
            soundEdge[] = {
                0.10869,
                0.243478,
                0.3826,
                0.5,
                0.613,
                0.786,
                0.873,
                0.926,
                0.991
            };
        };
        class RHS_KIA_PAKFA_Pilot: DefaultDie {
            actions = "DeadActions";
            file = "\rhsafrf\addons\rhs_c_air\anims\rhs_kia_pakfa_pilot.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_K36D_PilotEject: Crew {
            file = "\rhsafrf\addons\rhs_c_air\anims\rhs_pakfa_pilot_eject.rtm";
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {1};
            leftLegIKCurve[] = {1};
            rightLegIKCurve[] = {1};
            leaning = "empty";
            interpolateTo[] = {"RHS_KIA_PAKFA_Pilot", 1};
        };
        class RHS_TU95_Pilot: Crew {
            file = "\rhsafrf\addons\rhs_c_air\anims\rhs_tu95_pilot.rtm";
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
            interpolateTo[] = {"RHS_KIA_PAKFA_Pilot", 1};
            speed = 0.066519;
        };
        class RHS_TU95_RearGunner: Crew {
            file = "\rhsafrf\addons\rhs_c_air\anims\rhs_tu95_RearGunner.rtm";
            interpolateTo[] = {"RHS_KIA_PAKFA_Pilot", 1};
            speed = 0.066519;
        };
    };
};
class cfgWaypoints {
    class RHS {
        displayName = "RHS Special Waypoints";
        class wpParadropInfantry {
            displayName = "Infantry paradrop";
            tooltip = "Ejects infantry from vehicle. If parachute backpack is not present new artifical parachute is created upon ejection";
            file = "\rhsafrf\addons\rhs_c_air\scripts\WP_ParaInf.sqf";
            icon = "\a3\3DEN\Data\CfgWaypoints\Unload_ca.paa";
            class Attributes {
                class ParaDropDelay {
                    property = "ParadropDelay";
                    displayName = "Delay between paradrop";
                    tooltip = "Defines delay between ejection of units. By default ejection delay is calculated based on vehicle speed. Leave it at -1 for default setting.";
                    control = "Edit";
                    typeName = "NUMBER";
                    defaultValue = "-1";
                    expression = "_this setWaypointScript (waypointScript _this + format [' + [%1]',_value]);";
                };
                class ParachuteType {
                    property = "ParachuteType";
                    displayName = "Parachute type";
                    tooltip = "Defines what kind of parachute will units use after ejection. By default Russian D-6 parachute is used.";
                    control = "Edit";
                    defaultValue = "rhs_d6_Parachute";
                    typeName = "STRING";
                    expression = "_this setWaypointScript (waypointScript _this + format [' [%1]',_value]);";
                };
            };
        };
        class wpTu95Fire: wpParadropInfantry {
            displayName = "Tu-95 - Fire";
            tooltip = "Tu-95 will fire missile at waypoint position";
            file = "\rhsafrf\addons\rhs_c_air\scripts\WP_Tu95Fire.sqf";
            icon = "\a3\3DEN\Data\CfgWaypoints\Destroy_ca.paa";
        };
    };
};
class CfgWeapons {
    class ItemCore;
    class InventoryFirstAidKitItem_Base_F;
    class InventoryFlashLightItem_Base_F;
    class InventoryFinsItem_Base_F;
    class rhs_item_flightrecorder: ItemCore {
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "Flight recorder";
        picture = "\rhsafrf\addons\rhs_air\misc\data\rhs_flightrecorder_pic_ca.paa";
        model = "\rhsafrf\addons\rhs_air\misc\rhs_flightrecorder_item.p3d";
        descriptionShort = "Plane flight recorder";
        class ItemInfo: InventoryFinsItem_Base_F {
            mass = 110;
            type = 301;
            class Pointer {};
            class FlashLight {};
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
class EventHandlers;
class CfgVehicles {
    class RHS_Su25_VVS_Base;
    class RHS_Su25SM_vvs: RHS_Su25_VVS_Base {
        class userActions;
        class Components;
    };
    class Air;
    class Plane: Air {
        class HitPoints;
        class NewTurret;
    };
    class Plane_Base_F: Plane {
        class NewTurret: NewTurret {
            class ViewGunner;
        };
        class Turrets;
        class ViewPilot;
        class AnimationSources;
        class HitPoints: HitPoints {
            class HitHull;
        };
        class Components;
    };
    class PlaneWreck;
    class Wreck_base_F;
    class ThingX;
    class RHS_T50_base: Plane_Base_F {
        scope = 1;
        dlc = "RHS_AFRF";
        rhs_decalParameters[] = {"['Number',cRHSAIRT50NumberPlaces,'AviaBlue']", "['Label', cRHSAIRT50SquadPlaces, 'AviationsSquadrons']", "['Label', cRHSAIRT50StarPlaces, 'Aviation',1]"};
        displayName = "$STR_T50_name";
        model = "\rhsafrf\addons\rhs_air\t50\t50";
        picture = "\rhsafrf\addons\rhs_air\t50\data\ui\pak_fa_icon.paa";
        icon = "\rhsafrf\addons\rhs_air\t50\data\ui\icomap_pakfa.paa";
        LESH_canBeTowed = 1;
        LESH_towFromFront = 1;
        LESH_AxisOffsetTarget[] = {0, 6.8, -2.04};
        LESH_WheelOffset[] = {0, -0.7};
        category = "Air";
        vehicleClass = "rhs_vehclass_aircraft";
        memoryPointsGetInDriver = "pos driver";
        memoryPointsGetInDriverDir = "pos driver dir";
        memoryPointsGetInDriverPrecise = "pos driver";
        camShakeCoef = 0.7;
        driverCanEject = 1;
        driverCompartments = 1;
        driverLeftHandAnimName = "lever_pilot";
        driverRightHandAnimName = "stick_pilot";
        driverLeftLegAnimName = "pedal_L";
        driverRightLegAnimName = "pedal_R";
        driverAction = "rhs_PAKFA_Pilot";
        getinAction = "RHS_PAKFA_Pilot_getin";
        getoutaction = "pilot_plane_cas_02_Exit";
        precisegetinout = 1;
        allowTabLock = 1;
        destrType = "DestructDefault";
        selectionDamage = "zbytek";
        incommingMisslieDetectionSystem = "8+16";
        ejectDamageLimit = 1;
        driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
        HeadAimDown = 6;
        headGforceLeaningFactor[] = {0.005, 0.001, 0.015};
        slingLoadCargoMemoryPoints[] = {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        memoryPointTaskMarker = "TaskMarker_1_pos";
        memoryPointLMissile = "missile_1";
        memoryPointLRocket = "rocket_1";
        memoryPointRMissile = "missile_2";
        memoryPointRRocket = "rocket_2";
        class EjectionSystem {};
        class Turrets {};
        class TransportItems {};
        threat[] = {1, 1, 1};
        waterLeakiness = 1.5;
        showAllTargets = 4;
        laserScanner = 1;
        extCameraPosition[] = {0, 4.1, -20};
        class Damage {
            tex[] = {"rhsafrf\addons\rhs_air\t50\data\afterburner_ca.paa", "#(argb,8,8,3)color(0,0,0,0,co)"};
            mat[] = {
                "rhsafrf\addons\rhs_air\t50\data\pakfa_glass.rvmat",
                "rhsafrf\addons\rhs_air\t50\data\pakfa_glass_damage.rvmat",
                "rhsafrf\addons\rhs_air\t50\data\pakfa_glass_destruct.rvmat",
                "rhsafrf\addons\rhs_air\t50\data\PakFa.rvmat",
                "rhsafrf\addons\rhs_air\t50\data\PakFa_damage.rvmat",
                "rhsafrf\addons\rhs_air\t50\data\PakFa_destruct.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class UserActions {
            class MFD_top {
                displayName = "$STR_RHS_PAKFA_TOPOGRAPHIC_MAP";
                condition = "this animationPhase 'display2_switch' == 0 and player in this and isengineon this";
                statement = "this animate ['display2_switch',1,true]; [this,0] spawn RHS_fnc_PAKFA_MapData;";
                position = "pilotcontrol";
                radius = 10;
                onlyforplayer = 1;
                showWindow = 0;
                hideOnUse = 1;
            };
            class MFD_glonass {
                displayName = "$STR_RHS_PAKFA_GLONASS_MAP";
                condition = "this animationPhase 'display2_switch' == 1 and player in this and isengineon this";
                statement = "this animate ['display2_switch',2,true]; [this,1] spawn RHS_fnc_PAKFA_MapData;";
                position = "pilotcontrol";
                radius = 10;
                onlyforplayer = 1;
                showWindow = 0;
                hideOnUse = 1;
            };
            class MFD_off {
                displayName = "$STR_RHS_PAKFA_MAP_OFF";
                condition = "this animationPhase 'display2_switch' == 2 and player in this and isengineon this";
                statement = " this animate ['display2_switch',0];[this,2] spawn RHS_fnc_PAKFA_MapData;";
                position = "pilotcontrol";
                radius = 10;
                onlyforplayer = 1;
                showWindow = 0;
                hideOnUse = 1;
            };
            class SAFEMODE {
                displayName = "<t color='#00FF7F'>MASTERSAFE</t>";
                condition = "(call rhs_fnc_findPlayer) in this";
                statement = "(call rhs_fnc_findPlayer) action ['SwitchWeapon', this, (call rhs_fnc_findPlayer), (weapons this) find 'rhs_weap_MASTERSAFE'];";
                position = "";
                radius = 10;
                priority = 10.5;
                onlyforplayer = 1;
                showWindow = 0;
                shortcut = "user13";
                hideOnUse = 1;
            };
        };
        weapons[] = {"rhs_weap_MASTERSAFE_Holdster15", "rhs_weap_CMFlareLauncher", "rhs_weap_GSh301"};
        magazines[] = {"rhs_mag_gsh30_bt_250", "120Rnd_CMFlare_Chaff_Magazine"};
        weaponsGroup1 = 128;
        weaponsGroup4 = 64;
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_air\t50\data\pakfa_generic_co.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new2_ca.paa",
            "rhsafrf\addons\rhs_c_air\scripts\data\altis_co.paa",
            "rhsafrf\addons\rhs_c_air\scripts\data\WP_move_ca.paa"
        };
        hiddenselections[] = {
            "camo1",
            "n1",
            "n2",
            "n3",
            "n4",
            "n5",
            "n6",
            "i1",
            "i2",
            "Glonass_map",
            "display2_wp2"
        };
        class textureSources {
            class standard {
                displayName = "$STR_T50_blue_name";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "\rhsafrf\addons\rhs_air\t50\data\pakfa_bluecamo_co.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\5_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\1_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\AviationCompanies\sukhoi_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new2_ca.paa",
                    "rhsafrf\addons\rhs_c_air\scripts\data\altis_co.paa",
                    "rhsafrf\addons\rhs_c_air\scripts\data\WP_move_ca.paa"
                };
                factions[] = {"rhs_faction_vvs_c", "rhs_faction_vvs"};
            };
            class standard2: standard {
                displayName = "$STR_T50_blueonblue_name";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "\rhsafrf\addons\rhs_air\t50\data\pakfa_blueonblue_co.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new2_ca.paa",
                    "rhsafrf\addons\rhs_c_air\scripts\data\altis_co.paa",
                    "rhsafrf\addons\rhs_c_air\scripts\data\WP_move_ca.paa"
                };
            };
            class standard3: standard {
                displayName = "$STR_T50_grey_name";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "\rhsafrf\addons\rhs_air\t50\data\pakfa_greycamo_co.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\5_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\1_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\AviationCompanies\sukhoi_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new2_ca.paa",
                    "rhsafrf\addons\rhs_c_air\scripts\data\altis_co.paa",
                    "rhsafrf\addons\rhs_c_air\scripts\data\WP_move_ca.paa"
                };
            };
            class standard4: standard {
                displayName = "$STR_T50_bluegeneric_name";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "\rhsafrf\addons\rhs_air\t50\data\pakfa_generic_co.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new2_ca.paa",
                    "rhsafrf\addons\rhs_c_air\scripts\data\altis_co.paa",
                    "rhsafrf\addons\rhs_c_air\scripts\data\WP_move_ca.paa"
                };
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
                displayName = "Define font type of side number";
                tooltip = "Define kind of font that will be drawn on vehicle";
                property = "rhs_decalNumber_type";
                control = "Combo";
                expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHSAIRT50NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
                defaultValue = 0;
                typeName = "STRING";
                class values {
                    class NoChange {
                        name = "Default";
                        value = "NoChange";
                    };
                    class AviaBlue {
                        name = "Aviation Blue";
                        value = "AviaBlue";
                        defaultValue = "AviaBlue";
                    };
                    class AviaYellow {
                        name = "Aviation Yellow";
                        value = "AviaYellow";
                    };
                    class AviaRed {
                        name = "Aviation Red";
                        value = "AviaRed";
                    };
                    class AviaWhiteOut {
                        name = "Aviation White Out";
                        value = "AviaWhiteOut";
                    };
                    class AviaCDF {
                        name = "Aviation CDF";
                        value = "AviaCDF";
                    };
                    class Default {
                        name = "Default (White)";
                        value = "Default";
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
                };
            };
            class rhs_decalNumber {
                displayName = "Set side number";
                tooltip = "Set side number. 2 numbers are required. Hides on 0";
                property = "rhs_decalNumber";
                control = "Edit";
                validate = "Number";
                defaultValue = "-1";
                expression = "if(_value >= 0)then{if(_value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRT50NumberPlaces}else{[_this, [['Number', cRHSAIRT50NumberPlaces, _this getVariable ['rhs_decalNumber_type','AviaBlue'], _value] ] ] call rhs_fnc_decalsInit}};";
            };
            class rhs_decalNumber_type2: rhs_decalNumber_type {
                displayName = "Define font type of side number (3 digits)";
                tooltip = "Define kind of font that will be drawn on vehicle";
                property = "rhs_decalNumber_type2";
                expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHSAIRT50NumberPlaces2, _value]]] call rhs_fnc_decalsInit}";
            };
            class rhs_decalNumber2: rhs_decalNumber {
                displayName = "Set side number (3 digits)";
                tooltip = "Set side number. 3 numbers are required. Hides on 0";
                property = "rhs_decalNumber2";
                expression = "if(_value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRT50NumberPlaces2}else{[_this, [['Number', cRHSAIRT50NumberPlaces2, _this getVariable ['rhs_decalNumber_type2','AviaBlue'], _value] ] ] call rhs_fnc_decalsInit}};";
            };
            class rhs_decalSquadArt {
                displayName = "Define Squadron Art";
                tooltip = "Define Squadron Art texture located on tail wings. Appears on both sides";
                property = "rhs_decalNoseArt";
                control = "Combo";
                expression = "if(_value >= 0)then{ [_this, [ [ 'Label', cRHSAIRT50SquadPlaces, 'AviationsSquadrons',_value] ] ] call rhs_fnc_decalsInit};";
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
                    };
                    class Seal1 {
                        name = "Seal 1";
                        value = 1;
                    };
                    class Polar {
                        name = "Polar bear";
                        value = 2;
                    };
                    class Wolf {
                        name = "Wolf";
                        value = 3;
                    };
                    class Weird {
                        name = "Weird Piece of Decal";
                        value = 4;
                    };
                    class One {
                        name = "One";
                        value = 5;
                    };
                    class Snake {
                        name = "Snake";
                        value = 6;
                    };
                    class Eagle {
                        name = "Eagle";
                        value = 7;
                    };
                    class seal2 {
                        name = "Seal 2";
                        value = 8;
                    };
                    class russia {
                        name = "Russia Decal";
                        value = 9;
                    };
                    class navy {
                        name = "Russian Navy";
                        value = 10;
                    };
                };
            };
            class rhs_decalStarArt: rhs_decalSquadArt {
                displayName = "Define Stars Art";
                tooltip = "Define Stars Art texture located on wings";
                property = "rhs_decalStarArt";
                expression = "if(_value >= 0)then{ [_this, [ [ 'Label', cRHSAIRT50StarPlaces, 'Aviation',_value] ] ] call rhs_fnc_decalsInit};";
                class values {
                    class Random {
                        name = "Random";
                        value = -1;
                        defaultValue = -1;
                    };
                    class Empty {
                        name = "Empty";
                        value = 0;
                    };
                    class New {
                        name = "New type star";
                        value = 1;
                    };
                    class Old {
                        name = "Old type star";
                        value = 2;
                    };
                };
            };
            class rhs_hideantenna {
                displayName = "Remove antenna";
                property = "rhs_hideantenna";
                control = "CheckboxNumber";
                expression = "_this animate ['antenna_hide',_value,true]";
                defaultValue = "0";
            };
            class rhs_hidesensors: rhs_hideantenna {
                displayName = "Remove sensors";
                property = "rhs_hidesensors";
                expression = "_this animate ['sensors_hide',_value,true]";
            };
        };
        landingAoa = "rad 10";
        landingSpeed = 240;
        acceleration = 1775;
        maxSpeed = 1800;
        stallSpeed = 240;
        stallWarningTreshold = 0.5;
        RHS_AfterBurner_MaxSpeed = 2100;
        takeoffSpeed = 180;
        altFullForce = 9000;
        altNoForce = 20000;
        aileronSensitivity = 1.2;
        elevatorSensitivity = 2.3;
        rudderInfluence = 0.02;
        aileronControlsSensitivityCoef = 4;
        elevatorControlsSensitivity = 5;
        elevatorControlsSensitivityCoef = 3.4;
        rudderControlsSensitivityCoef = 4;
        elevatorCoef[] = {0.8, 1.1, 0.7, 0.6, 0.55, 0.5, 0.5};
        aileronCoef[] = {0.7, 1, 1, 1, 0.95, 0.9, 0.85};
        rudderCoef[] = {0.7, 1, 1, 1, 0.9, 0.8, 0.7};
        flapsFrictionCoef = 0.5;
        angleOfIndicence = 0.04;
        draconicForceXCoef = 5.4;
        draconicForceYCoef = 3;
        draconicForceZCoef = 0.1;
        draconicTorqueXCoef = 1.2;
        draconicTorqueYCoef = 3;
        envelope[] = {
            0,
            0.15,
            1.1,
            3,
            5,
            5.83,
            6,
            5.85,
            5.5,
            4.8,
            3.6,
            1.8,
            0
        };
        thrustCoef[] = {
            2.5,
            2.2,
            2.1,
            2,
            2,
            2,
            2,
            1.9,
            1.7,
            1.5,
            1.3,
            1.1,
            1,
            1,
            1,
            1
        };
        airBrake = 1;
        gearUpTime = 4.5;
        gearDownTime = 3;
        wheelSteeringSensitivity = 1.5;
        memorypointcm[] = {"flare_launcher1", "flare_launcher2", "flare_launcher3"};
        memorypointcmdir[] = {"flare_launcher1_dir", "flare_launcher2_dir", "flare_launcher3_dir"};
        unitInfoType = "RHS_RscUnitInfoAir_PAKFA";
        driverCanSee = "1+2+4+8+16";
        defaultUserMFDvalues[] = {0.15, 1, 0.15, 0.4};
        class MFD {
            class AirplaneHUD {
                topLeft = "HUD_top_left";
                topRight = "HUD_top_right";
                bottomLeft = "HUD_bottom_left";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0, 1, 0, 0.1};
                enableParallax = 1;
                font = "rhs_digital_font_rus";
                class Bones {
                    class PlaneOrientation {
                        type = "fixed";
                        pos[] = {0.5, 0.53};
                    };
                    class ClimbFixed {
                        type = "fixed";
                        pos[] = {"0.898+0.09", 0.53};
                    };
                    class ClimbRotate {
                        type = "rotational";
                        source = "vspeed";
                        sourceScale = 1;
                        center[] = {"0.91+0.09", 0.53};
                        min = -30;
                        max = 30;
                        minAngle = -80;
                        maxAngle = 80;
                        aspectRatio = 1.25806;
                    };
                    class WeaponAim {
                        type = "fixed";
                        source = "weapon";
                        pos[] = {0.5, 0.53};
                    };
                    class Velocity {
                        type = "vector";
                        source = "velocity";
                        pos0[] = {0.5, 0.53};
                        pos10[] = {1.12, 1.31};
                    };
                    class HorizonBankSource {
                        type = "rotational";
                        source = "HorizonBank";
                        center[] = {0.5, 0.53};
                        min = -6.2831;
                        max = 6.2831;
                        minAngle = -360;
                        maxAngle = 360;
                    };
                    class HorizonBankInverted {
                        type = "rotational";
                        source = "HorizonBank";
                        center[] = {0.5, 0.53};
                        min = -6.2831;
                        max = 6.2831;
                        minAngle = 360;
                        maxAngle = -360;
                    };
                    class HorizonBankRotFull {
                        type = "rotational";
                        source = "horizonBank";
                        center[] = {0, 0};
                        min = -3.1416;
                        max = 3.1416;
                        minAngle = -180;
                        maxAngle = 180;
                        aspectRatio = 1;
                    };
                    class Level0 {
                        source = "horizonDive";
                        type = "linear";
                        angle = 0;
                        min = -3.4;
                        max = 3.4;
                        minPos[] = {0.5, 4.78};
                        maxPos[] = {0.5, -3.72};
                    };
                    class TerrainBone {
                        type = "linear";
                        source = "altitudeAGL";
                        sourceScale = 1;
                        min = 0;
                        max = 200;
                        minPos[] = {0, 0.666};
                        maxPos[] = {0, 0.4};
                    };
                    class ImpactPoint {
                        type = "vector";
                        source = "ImpactPoint";
                        pos0[] = {0.5, 0.53};
                        pos10[] = {1.12, 1.31};
                    };
                    class ImpactPointRelative {
                        type = "vector";
                        source = "impactpointweaponRelative";
                        pos0[] = {0.5, 0.53};
                        pos10[] = {1.12, 1.31};
                    };
                    class Limit0109 {
                        type = "limit";
                        limits[] = {0.1, 0.1, 0.9, 0.9};
                    };
                    class Target {
                        source = "target";
                        type = "vector";
                        pos0[] = {0.5, 0.53};
                        pos10[] = {1.12, 1.31};
                    };
                    class WPPoint {
                        type = "vector";
                        source = "WPPoint";
                        pos0[] = {0.5, 0.53};
                        pos10[] = {1.12, 1.31};
                    };
                    class MissileFlightTimeRot1 {
                        type = "rotational";
                        source = "MissileFlightTime";
                        sourceScale = 1;
                        center[] = {0, 0};
                        min = 0;
                        max = 0.5;
                        minAngle = 0;
                        maxAngle = 18;
                        aspectRatio = 1.25806;
                    };
                    class MissileFlightTimeRot2: MissileFlightTimeRot1 {
                        maxAngle = 37;
                        max = 2;
                    };
                    class MissileFlightTimeRot3: MissileFlightTimeRot1 {
                        maxAngle = 55.5;
                        max = 3;
                    };
                    class MissileFlightTimeRot4: MissileFlightTimeRot1 {
                        maxAngle = 74;
                        max = 4;
                    };
                    class MissileFlightTimeRot5: MissileFlightTimeRot1 {
                        maxAngle = 92.5;
                        max = 5;
                    };
                    class MissileFlightTimeRot6: MissileFlightTimeRot1 {
                        maxAngle = 111;
                        max = 6;
                    };
                    class MissileFlightTimeRot7: MissileFlightTimeRot1 {
                        maxAngle = 129.5;
                        max = 7;
                    };
                    class MissileFlightTimeRot8: MissileFlightTimeRot1 {
                        maxAngle = 148;
                        max = 8;
                    };
                    class MissileFlightTimeRot9: MissileFlightTimeRot1 {
                        maxAngle = 166.5;
                        max = 9;
                    };
                    class MissileFlightTimeRot10: MissileFlightTimeRot1 {
                        maxAngle = 185;
                        max = 10;
                    };
                    class MissileFlightTimeRot11: MissileFlightTimeRot1 {
                        maxAngle = 203.5;
                        max = 11;
                    };
                    class MissileFlightTimeRot12: MissileFlightTimeRot1 {
                        maxAngle = 222;
                        max = 12;
                    };
                    class MissileFlightTimeRot13: MissileFlightTimeRot1 {
                        maxAngle = 240.5;
                        max = 13;
                    };
                    class MissileFlightTimeRot14: MissileFlightTimeRot1 {
                        maxAngle = 259;
                        max = 14;
                    };
                    class MissileFlightTimeRot15: MissileFlightTimeRot1 {
                        maxAngle = 277.5;
                        max = 15;
                    };
                    class MissileFlightTimeRot16: MissileFlightTimeRot1 {
                        maxAngle = 296;
                        max = 16;
                    };
                    class MissileFlightTimeRot17: MissileFlightTimeRot1 {
                        maxAngle = 314.5;
                        max = 17;
                    };
                    class MissileFlightTimeRot18: MissileFlightTimeRot1 {
                        maxAngle = 333;
                        max = 18;
                    };
                    class MissileFlightTimeRot19: MissileFlightTimeRot1 {
                        maxAngle = 351.5;
                        max = 19;
                    };
                    class MissileFlightTimeRot20: MissileFlightTimeRot1 {
                        maxAngle = 370;
                        max = 20;
                    };
                    class Airport1 {
                        type = "vector";
                        source = "airportCorner1";
                        pos0[] = {0.5, 0.53};
                        pos10[] = {1.12, 1.31};
                    };
                    class Airport2: Airport1 {
                        source = "airportCorner2";
                    };
                    class Airport3: Airport1 {
                        source = "airportCorner3";
                    };
                    class Airport4: Airport1 {
                        source = "airportCorner4";
                    };
                    class ILS_H {
                        type = "ils";
                        pos0[] = {0.5, 0.53};
                        pos3[] = {0.686, 0.53};
                    };
                    class ILS_W: ILS_H {
                        pos3[] = {0.5, 0.764};
                    };
                    class LarAmmoMax {
                        type = "linear";
                        source = "LarAmmoMax";
                        sourceScale = 1;
                        min = 0;
                        max = 1;
                        minPos[] = {0, 1};
                        maxPos[] = {0, 0};
                    };
                    class LarAmmoMin: LarAmmoMax {
                        source = "LarAmmoMin";
                    };
                    class LarTargetDist: LarAmmoMax {
                        source = "LarTargetDist";
                    };
                    class LarAmmoMGunMax {
                        type = "rotational";
                        source = "LarAmmoMax";
                        sourceScale = 1;
                        center[] = {0, 0};
                        min = 0;
                        max = 1;
                        minAngle = -180;
                        maxAngle = 180;
                        aspectRatio = 1.25806;
                    };
                    class LarAmmoMGunMin: LarAmmoMGunMax {
                        source = "LarAmmoMin";
                    };
                };
                class Draw {
                    alpha = "user3";
                    color[] = {"user0", "user1", "user2"};
                    condition = "on";
                    class Horizont {
                        clipTL[] = {0.1, 0.28};
                        clipBR[] = {0.9, 0.8};
                        class Dimmed {
                            class Level00 {
                                type = "line";
                                width = 2;
                                points[] = {{"Level0", {0.24, 0}, 1}, {"Level0", {-0.24, 0}, 1}, {}};
                            };
                            class Level2MH5: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {
                                    {"Level0", {0.204, -0.14625}, 1},
                                    {"Level0", {0.196, -0.14625}, 1},
                                    {},
                                    {"Level0", {0.188, -0.14625}, 1},
                                    {"Level0", {0.18, -0.14625}, 1}
                                };
                            };
                            class Level2MH0: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {
                                    {"Level0", {0.204, -0.04875}, 1},
                                    {"Level0", {0.196, -0.04875}, 1},
                                    {},
                                    {"Level0", {0.188, -0.04875}, 1},
                                    {"Level0", {0.18, -0.04875}, 1}
                                };
                            };
                            class Level2PH5: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.204, 0.14625}, 1}, {"Level0", {0.18, 0.14625}, 1}};
                            };
                            class Level2PH0: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.204, 0.04875}, 1}, {"Level0", {0.18, 0.04875}, 1}};
                            };
                            class Level2M5: Level00 {
                                type = "line";
                                points[] = {
                                    {"Level0", {0.22, -0.0975}, 1},
                                    {"Level0", {0.212, -0.0975}, 1},
                                    {},
                                    {"Level0", {0.204, -0.0975}, 1},
                                    {"Level0", {0.196, -0.0975}, 1},
                                    {},
                                    {"Level0", {0.188, -0.0975}, 1},
                                    {"Level0", {0.18, -0.0975}, 1}
                                };
                            };
                            class VALM2_1_5 {
                                type = "text";
                                source = "static";
                                text = 5;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.26, -0.1135}, 1};
                                right[] = {"Level0", {0.3, -0.1135}, 1};
                                down[] = {"Level0", {0.26, -0.0815}, 1};
                            };
                            class Level2P5: Level00 {
                                type = "line";
                                points[] = {{"Level0", {0.22, 0.0975}, 1}, {"Level0", {0.18, 0.0975}, 1}};
                            };
                            class VALP2_1_5 {
                                type = "text";
                                source = "static";
                                text = -5;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.26, 0.0815}, 1};
                                right[] = {"Level0", {0.3, 0.0815}, 1};
                                down[] = {"Level0", {0.26, 0.1135}, 1};
                            };
                            class Level2MH10: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {
                                    {"Level0", {0.204, -0.24375}, 1},
                                    {"Level0", {0.196, -0.24375}, 1},
                                    {},
                                    {"Level0", {0.188, -0.24375}, 1},
                                    {"Level0", {0.18, -0.24375}, 1}
                                };
                            };
                            class Level2PH10: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.204, 0.24375}, 1}, {"Level0", {0.18, 0.24375}, 1}};
                            };
                            class Level2M10: Level00 {
                                type = "line";
                                points[] = {
                                    {"Level0", {0.22, -0.195}, 1},
                                    {"Level0", {0.212, -0.195}, 1},
                                    {},
                                    {"Level0", {0.204, -0.195}, 1},
                                    {"Level0", {0.196, -0.195}, 1},
                                    {},
                                    {"Level0", {0.188, -0.195}, 1},
                                    {"Level0", {0.18, -0.195}, 1}
                                };
                            };
                            class VALM2_1_10 {
                                type = "text";
                                source = "static";
                                text = 10;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.26, -0.211}, 1};
                                right[] = {"Level0", {0.3, -0.211}, 1};
                                down[] = {"Level0", {0.26, -0.179}, 1};
                            };
                            class Level2P10: Level00 {
                                type = "line";
                                points[] = {{"Level0", {0.22, 0.195}, 1}, {"Level0", {0.18, 0.195}, 1}};
                            };
                            class VALP2_1_10 {
                                type = "text";
                                source = "static";
                                text = -10;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.26, 0.179}, 1};
                                right[] = {"Level0", {0.3, 0.179}, 1};
                                down[] = {"Level0", {0.26, 0.211}, 1};
                            };
                            class Level2MH15: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {
                                    {"Level0", {0.204, -0.34125}, 1},
                                    {"Level0", {0.196, -0.34125}, 1},
                                    {},
                                    {"Level0", {0.188, -0.34125}, 1},
                                    {"Level0", {0.18, -0.34125}, 1}
                                };
                            };
                            class Level2PH15: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.204, 0.34125}, 1}, {"Level0", {0.18, 0.34125}, 1}};
                            };
                            class Level2M15: Level00 {
                                type = "line";
                                points[] = {
                                    {"Level0", {0.22, -0.2925}, 1},
                                    {"Level0", {0.212, -0.2925}, 1},
                                    {},
                                    {"Level0", {0.204, -0.2925}, 1},
                                    {"Level0", {0.196, -0.2925}, 1},
                                    {},
                                    {"Level0", {0.188, -0.2925}, 1},
                                    {"Level0", {0.18, -0.2925}, 1}
                                };
                            };
                            class VALM2_1_15 {
                                type = "text";
                                source = "static";
                                text = 15;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.26, -0.3085}, 1};
                                right[] = {"Level0", {0.3, -0.3085}, 1};
                                down[] = {"Level0", {0.26, -0.2765}, 1};
                            };
                            class Level2P15: Level00 {
                                type = "line";
                                points[] = {{"Level0", {0.22, 0.2925}, 1}, {"Level0", {0.18, 0.2925}, 1}};
                            };
                            class VALP2_1_15 {
                                type = "text";
                                source = "static";
                                text = -15;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.26, 0.2765}, 1};
                                right[] = {"Level0", {0.3, 0.2765}, 1};
                                down[] = {"Level0", {0.26, 0.3085}, 1};
                            };
                            class Level2MH20: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {
                                    {"Level0", {0.204, -0.43875}, 1},
                                    {"Level0", {0.196, -0.43875}, 1},
                                    {},
                                    {"Level0", {0.188, -0.43875}, 1},
                                    {"Level0", {0.18, -0.43875}, 1}
                                };
                            };
                            class Level2PH20: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.204, 0.43875}, 1}, {"Level0", {0.18, 0.43875}, 1}};
                            };
                            class Level2M20: Level00 {
                                type = "line";
                                points[] = {
                                    {"Level0", {0.22, -0.39}, 1},
                                    {"Level0", {0.212, -0.39}, 1},
                                    {},
                                    {"Level0", {0.204, -0.39}, 1},
                                    {"Level0", {0.196, -0.39}, 1},
                                    {},
                                    {"Level0", {0.188, -0.39}, 1},
                                    {"Level0", {0.18, -0.39}, 1}
                                };
                            };
                            class VALM2_1_20 {
                                type = "text";
                                source = "static";
                                text = 20;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.26, -0.406}, 1};
                                right[] = {"Level0", {0.3, -0.406}, 1};
                                down[] = {"Level0", {0.26, -0.374}, 1};
                            };
                            class Level2P20: Level00 {
                                type = "line";
                                points[] = {{"Level0", {0.22, 0.39}, 1}, {"Level0", {0.18, 0.39}, 1}};
                            };
                            class VALP2_1_20 {
                                type = "text";
                                source = "static";
                                text = -20;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.26, 0.374}, 1};
                                right[] = {"Level0", {0.3, 0.374}, 1};
                                down[] = {"Level0", {0.26, 0.406}, 1};
                            };
                            class Level2MH25: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {
                                    {"Level0", {0.204, -0.53625}, 1},
                                    {"Level0", {0.196, -0.53625}, 1},
                                    {},
                                    {"Level0", {0.188, -0.53625}, 1},
                                    {"Level0", {0.18, -0.53625}, 1}
                                };
                            };
                            class Level2PH25: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.204, 0.53625}, 1}, {"Level0", {0.18, 0.53625}, 1}};
                            };
                            class Level2M25: Level00 {
                                type = "line";
                                points[] = {
                                    {"Level0", {0.22, -0.4875}, 1},
                                    {"Level0", {0.212, -0.4875}, 1},
                                    {},
                                    {"Level0", {0.204, -0.4875}, 1},
                                    {"Level0", {0.196, -0.4875}, 1},
                                    {},
                                    {"Level0", {0.188, -0.4875}, 1},
                                    {"Level0", {0.18, -0.4875}, 1}
                                };
                            };
                            class VALM2_1_25 {
                                type = "text";
                                source = "static";
                                text = 25;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.26, -0.5035}, 1};
                                right[] = {"Level0", {0.3, -0.5035}, 1};
                                down[] = {"Level0", {0.26, -0.4715}, 1};
                            };
                            class Level2P25: Level00 {
                                type = "line";
                                points[] = {{"Level0", {0.22, 0.4875}, 1}, {"Level0", {0.18, 0.4875}, 1}};
                            };
                            class VALP2_1_25 {
                                type = "text";
                                source = "static";
                                text = -25;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.26, 0.4715}, 1};
                                right[] = {"Level0", {0.3, 0.4715}, 1};
                                down[] = {"Level0", {0.26, 0.5035}, 1};
                            };
                            class Level2MH30: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {
                                    {"Level0", {0.204, -0.63375}, 1},
                                    {"Level0", {0.196, -0.63375}, 1},
                                    {},
                                    {"Level0", {0.188, -0.63375}, 1},
                                    {"Level0", {0.18, -0.63375}, 1}
                                };
                            };
                            class Level2PH30: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.204, 0.63375}, 1}, {"Level0", {0.18, 0.63375}, 1}};
                            };
                            class Level2M30: Level00 {
                                type = "line";
                                points[] = {
                                    {"Level0", {0.22, -0.585}, 1},
                                    {"Level0", {0.212, -0.585}, 1},
                                    {},
                                    {"Level0", {0.204, -0.585}, 1},
                                    {"Level0", {0.196, -0.585}, 1},
                                    {},
                                    {"Level0", {0.188, -0.585}, 1},
                                    {"Level0", {0.18, -0.585}, 1}
                                };
                            };
                            class VALM2_1_30 {
                                type = "text";
                                source = "static";
                                text = 30;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.26, -0.601}, 1};
                                right[] = {"Level0", {0.3, -0.601}, 1};
                                down[] = {"Level0", {0.26, -0.569}, 1};
                            };
                            class Level2P30: Level00 {
                                type = "line";
                                points[] = {{"Level0", {0.22, 0.585}, 1}, {"Level0", {0.18, 0.585}, 1}};
                            };
                            class VALP2_1_30 {
                                type = "text";
                                source = "static";
                                text = -30;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.26, 0.569}, 1};
                                right[] = {"Level0", {0.3, 0.569}, 1};
                                down[] = {"Level0", {0.26, 0.601}, 1};
                            };
                            class Level2MH35: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {
                                    {"Level0", {0.204, -0.73125}, 1},
                                    {"Level0", {0.196, -0.73125}, 1},
                                    {},
                                    {"Level0", {0.188, -0.73125}, 1},
                                    {"Level0", {0.18, -0.73125}, 1}
                                };
                            };
                            class Level2PH35: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.204, 0.73125}, 1}, {"Level0", {0.18, 0.73125}, 1}};
                            };
                            class Level2M35: Level00 {
                                type = "line";
                                points[] = {
                                    {"Level0", {0.22, -0.6825}, 1},
                                    {"Level0", {0.212, -0.6825}, 1},
                                    {},
                                    {"Level0", {0.204, -0.6825}, 1},
                                    {"Level0", {0.196, -0.6825}, 1},
                                    {},
                                    {"Level0", {0.188, -0.6825}, 1},
                                    {"Level0", {0.18, -0.6825}, 1}
                                };
                            };
                            class VALM2_1_35 {
                                type = "text";
                                source = "static";
                                text = 35;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.26, -0.6985}, 1};
                                right[] = {"Level0", {0.3, -0.6985}, 1};
                                down[] = {"Level0", {0.26, -0.6665}, 1};
                            };
                            class Level2P35: Level00 {
                                type = "line";
                                points[] = {{"Level0", {0.22, 0.6825}, 1}, {"Level0", {0.18, 0.6825}, 1}};
                            };
                            class VALP2_1_35 {
                                type = "text";
                                source = "static";
                                text = -35;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.26, 0.6665}, 1};
                                right[] = {"Level0", {0.3, 0.6665}, 1};
                                down[] = {"Level0", {0.26, 0.6985}, 1};
                            };
                            class Level2MH40: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {
                                    {"Level0", {0.204, -0.82875}, 1},
                                    {"Level0", {0.196, -0.82875}, 1},
                                    {},
                                    {"Level0", {0.188, -0.82875}, 1},
                                    {"Level0", {0.18, -0.82875}, 1}
                                };
                            };
                            class Level2PH40: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.204, 0.82875}, 1}, {"Level0", {0.18, 0.82875}, 1}};
                            };
                            class Level2M40: Level00 {
                                type = "line";
                                points[] = {
                                    {"Level0", {0.22, -0.78}, 1},
                                    {"Level0", {0.212, -0.78}, 1},
                                    {},
                                    {"Level0", {0.204, -0.78}, 1},
                                    {"Level0", {0.196, -0.78}, 1},
                                    {},
                                    {"Level0", {0.188, -0.78}, 1},
                                    {"Level0", {0.18, -0.78}, 1}
                                };
                            };
                            class VALM2_1_40 {
                                type = "text";
                                source = "static";
                                text = 40;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.26, -0.796}, 1};
                                right[] = {"Level0", {0.3, -0.796}, 1};
                                down[] = {"Level0", {0.26, -0.764}, 1};
                            };
                            class Level2P40: Level00 {
                                type = "line";
                                points[] = {{"Level0", {0.22, 0.78}, 1}, {"Level0", {0.18, 0.78}, 1}};
                            };
                            class VALP2_1_40 {
                                type = "text";
                                source = "static";
                                text = -40;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.26, 0.764}, 1};
                                right[] = {"Level0", {0.3, 0.764}, 1};
                                down[] = {"Level0", {0.26, 0.796}, 1};
                            };
                            class Level2MH45: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {
                                    {"Level0", {0.204, -0.92625}, 1},
                                    {"Level0", {0.196, -0.92625}, 1},
                                    {},
                                    {"Level0", {0.188, -0.92625}, 1},
                                    {"Level0", {0.18, -0.92625}, 1}
                                };
                            };
                            class Level2PH45: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.204, 0.92625}, 1}, {"Level0", {0.18, 0.92625}, 1}};
                            };
                            class Level2M45: Level00 {
                                type = "line";
                                points[] = {
                                    {"Level0", {0.22, -0.8775}, 1},
                                    {"Level0", {0.212, -0.8775}, 1},
                                    {},
                                    {"Level0", {0.204, -0.8775}, 1},
                                    {"Level0", {0.196, -0.8775}, 1},
                                    {},
                                    {"Level0", {0.188, -0.8775}, 1},
                                    {"Level0", {0.18, -0.8775}, 1}
                                };
                            };
                            class VALM2_1_45 {
                                type = "text";
                                source = "static";
                                text = 45;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.26, -0.8935}, 1};
                                right[] = {"Level0", {0.3, -0.8935}, 1};
                                down[] = {"Level0", {0.26, -0.8615}, 1};
                            };
                            class Level2P45: Level00 {
                                type = "line";
                                points[] = {{"Level0", {0.22, 0.8775}, 1}, {"Level0", {0.18, 0.8775}, 1}};
                            };
                            class VALP2_1_45 {
                                type = "text";
                                source = "static";
                                text = -45;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.26, 0.8615}, 1};
                                right[] = {"Level0", {0.3, 0.8615}, 1};
                                down[] = {"Level0", {0.26, 0.8935}, 1};
                            };
                        };
                    };
                    class PlaneOrientationCrosshair {
                        type = "line";
                        width = 3;
                        points[] = {
                            {"HorizonBankInverted", {-0.165, 0}, 1},
                            {"HorizonBankInverted", {-0.11, 0}, 1},
                            {"HorizonBankInverted", {-0.1, -0.02}, 1},
                            {"HorizonBankInverted", {-0.09, 0}, 1},
                            {"HorizonBankInverted", {-0.05, 0}, 1},
                            {},
                            {"HorizonBankInverted", {0.05, 0}, 1},
                            {"HorizonBankInverted", {0.09, 0}, 1},
                            {"HorizonBankInverted", {0.1, -0.02}, 1},
                            {"HorizonBankInverted", {0.11, 0}, 1},
                            {"HorizonBankInverted", {0.165, 0}, 1},
                            {},
                            {"HorizonBankInverted", {-0, 0.06}, 1},
                            {"HorizonBankInverted", {-0, 0.12}, 1},
                            {},
                            {"PlaneOrientation", {-0.205, 0}, 1},
                            {"PlaneOrientation", {-0.175, 0}, 1},
                            {},
                            {"PlaneOrientation", {0.175, 0}, 1},
                            {"PlaneOrientation", {0.205, 0}, 1},
                            {},
                            {"PlaneOrientation", {0, -0.002}, 1},
                            {"PlaneOrientation", {-0.002, 0}, 1},
                            {"PlaneOrientation", {0, 0.002}, 1},
                            {"PlaneOrientation", {0.002, 0}, 1},
                            {"PlaneOrientation", {0, -0.002}, 1},
                            {}
                        };
                    };
                    class BankDetailed {
                        condition = "1-(bomb+mgun+atmissile+aamissile+rocket+missilelocked + missilelocking+activeSensorsOn)";
                        class Level00 {
                            type = "line";
                            width = 5;
                            points[] = {
                                {"PlaneOrientation", {-0.129904, 0.0943549}, 1},
                                {"PlaneOrientation", {-0.147224, 0.106935}, 1},
                                {},
                                {"PlaneOrientation", {-0.075, 0.163427}, 1},
                                {"PlaneOrientation", {-0.085, 0.185218}, 1},
                                {},
                                {"PlaneOrientation", {0.0000000131134, 0.18871}, 1},
                                {"PlaneOrientation", {0.0000000148619, 0.213871}, 1},
                                {},
                                {"PlaneOrientation", {0.129904, 0.0943548}, 1},
                                {"PlaneOrientation", {0.147224, 0.106935}, 1},
                                {},
                                {"PlaneOrientation", {0.075, 0.163427}, 1},
                                {"PlaneOrientation", {0.085, 0.185218}, 1},
                                {}
                            };
                        };
                    };
                    class PlaneMovementCrosshair {
                        type = "line";
                        width = 3;
                        points[] = {
                            {"Velocity", {0, -0.0251613}, 1},
                            {"Velocity", {0.01, -0.0217897}, 1},
                            {"Velocity", {0.01732, -0.0125806}, 1},
                            {"Velocity", {0.02, 0}, 1},
                            {"Velocity", {0.01732, 0.0125806}, 1},
                            {"Velocity", {0.01, 0.0217897}, 1},
                            {"Velocity", {0, 0.0251613}, 1},
                            {"Velocity", {-0.01, 0.0217897}, 1},
                            {"Velocity", {-0.01732, 0.0125806}, 1},
                            {"Velocity", {-0.02, 0}, 1},
                            {"Velocity", {-0.01732, -0.0125806}, 1},
                            {"Velocity", {-0.01, -0.0217897}, 1},
                            {"Velocity", {0, -0.0251613}, 1},
                            {},
                            {"Velocity", {0.04, 0}, 1},
                            {"Velocity", {0.02, 0}, 1},
                            {},
                            {"Velocity", {-0.04, 0}, 1},
                            {"Velocity", {-0.02, 0}, 1},
                            {},
                            {"Velocity", {0, -0.0503226}, 1},
                            {"Velocity", {0, -0.0251613}, 1}
                        };
                    };
                    class WeaponsGroupMGun {
                        condition = "mgun";
                        class WeaponName {
                            type = "text";
                            source = "static";
                            sourceScale = 1;
                            text = "ГШ";
                            align = "right";
                            scale = 1;
                            pos[] = {{0.14, 0.74}, 1};
                            right[] = {{0.19, 0.74}, 1};
                            down[] = {{0.14, 0.785}, 1};
                        };
                    };
                    class WeaponsGroup {
                        condition = "1-mgun";
                        class PylonName1 {
                            type = "pylonicon";
                            pos[] = {{0.145, 0.72}, 1};
                            pylon = 1;
                            name = "rhs_rus_ammoname_right";
                        };
                        class PylonName2: PylonName1 {
                            pylon = 2;
                        };
                        class PylonName3: PylonName1 {
                            pylon = 3;
                        };
                        class PylonName4: PylonName1 {
                            pylon = 4;
                        };
                        class PylonName5: PylonName1 {
                            pylon = 5;
                        };
                        class PylonName6: PylonName1 {
                            pylon = 6;
                        };
                    };
                    class AmmoCount {
                        type = "text";
                        source = "ammo";
                        sourceScale = 1;
                        align = "right";
                        scale = 1;
                        pos[] = {{0.14, "0.000+0.79"}, 1};
                        right[] = {{0.19, "0.000+0.79"}, 1};
                        down[] = {{0.14, "0.045+0.79"}, 1};
                    };
                    class CMText {
                        type = "text";
                        source = "static";
                        text = "ЛТЦ";
                        scale = 1;
                        sourceScale = 1;
                        align = "left";
                        pos[] = {{0.95, 0.25}, 1};
                        right[] = {{1, 0.25}, 1};
                        down[] = {{0.95, 0.3}, 1};
                    };
                    class CMCount {
                        type = "text";
                        source = "cmammo";
                        sourceScale = 1;
                        align = "left";
                        scale = 1;
                        pos[] = {{0.95, 0.3}, 1};
                        right[] = {{1, 0.3}, 1};
                        down[] = {{0.95, 0.34}, 1};
                    };
                    class GearGroup {
                        type = "group";
                        condition = "ils";
                        class GearText {
                            type = "text";
                            source = "static";
                            text = "ШАССИ";
                            align = "center";
                            scale = 1;
                            pos[] = {{0.495, 0.885}, 1};
                            right[] = {{0.545, 0.885}, 1};
                            down[] = {{0.495, 0.925}, 1};
                        };
                    };
                    class ILS {
                        condition = "ils";
                        class Glideslope {
                            clipTL[] = {0, 0};
                            clipBR[] = {1, 1};
                            class ILS {
                                type = "line";
                                points[] = {
                                    {"ILS_W", {-0.24, 0}, 1},
                                    {"ILS_W", {0.24, 0}, 1},
                                    {},
                                    {"ILS_W", {-0.24, -0.0301935}, 1},
                                    {"ILS_W", {-0.24, 0.0301935}, 1},
                                    {},
                                    {"ILS_W", {-0.12, -0.0226452}, 1},
                                    {"ILS_W", {-0.12, 0.0226452}, 1},
                                    {},
                                    {"ILS_W", {0, -0.0301935}, 1},
                                    {"ILS_W", {0, 0.0301935}, 1},
                                    {},
                                    {"ILS_W", {0.12, -0.0226452}, 1},
                                    {"ILS_W", {0.12, 0.0226452}, 1},
                                    {},
                                    {"ILS_W", {0.24, -0.0301935}, 1},
                                    {"ILS_W", {0.24, 0.0301935}, 1},
                                    {},
                                    {"ILS_H", {0, -0.301935}, 1},
                                    {"ILS_H", {0, 0.301935}, 1},
                                    {},
                                    {"ILS_H", {-0.024, -0.301935}, 1},
                                    {"ILS_H", {0.024, -0.301935}, 1},
                                    {},
                                    {"ILS_H", {-0.018, -0.150968}, 1},
                                    {"ILS_H", {0.018, -0.150968}, 1},
                                    {},
                                    {"ILS_H", {-0.024, 0}, 1},
                                    {"ILS_H", {0.024, 0}, 1},
                                    {},
                                    {"ILS_H", {-0.018, 0.150968}, 1},
                                    {"ILS_H", {0.018, 0.150968}, 1},
                                    {},
                                    {"ILS_H", {-0.024, 0.301935}, 1},
                                    {"ILS_H", {0.024, 0.301935}, 1}
                                };
                            };
                            class airport {
                                type = "line";
                                points[] = {
                                    {"airport1", 1},
                                    {"airport2", 1},
                                    {"airport4", 1},
                                    {"airport3", 1},
                                    {"airport1", 1}
                                };
                            };
                        };
                    };
                    class SpeedNumber {
                        type = "text";
                        source = "speed";
                        sourceScale = 3.6;
                        sourceLength = 3;
                        align = "left";
                        scale = 1;
                        pos[] = {{0.21, 0.11}, 1};
                        right[] = {{0.255, 0.11}, 1};
                        down[] = {{0.21, 0.155}, 1};
                    };
                    class SpeedText {
                        type = "text";
                        source = "static";
                        text = "И";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.24, 0.11}, 1};
                        right[] = {{0.285, 0.11}, 1};
                        down[] = {{0.24, 0.155}, 1};
                    };
                    class MachNumber: SpeedNumber {
                        sourceScale = 0.002939;
                        sourceLength = 1;
                        sourcePrecision = 2;
                        pos[] = {{0.21, 0.15}, 1};
                        right[] = {{0.255, 0.15}, 1};
                        down[] = {{0.21, 0.195}, 1};
                    };
                    class MachText {
                        type = "text";
                        source = "static";
                        text = "М";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.24, 0.15}, 1};
                        right[] = {{0.285, 0.15}, 1};
                        down[] = {{0.24, 0.195}, 1};
                    };
                    class TerrainNumber {
                        type = "text";
                        source = "altitudeAGL";
                        sourceScale = 1;
                        sourceLength = 3;
                        sourceOffset = -2;
                        align = "right";
                        scale = 1;
                        pos[] = {{0.78, 0.15}, 1};
                        right[] = {{0.825, 0.15}, 1};
                        down[] = {{0.78, 0.195}, 1};
                    };
                    class RadarText {
                        type = "text";
                        source = "static";
                        text = "Р";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.86, 0.15}, 1};
                        right[] = {{0.905, 0.15}, 1};
                        down[] = {{0.86, 0.195}, 1};
                    };
                    class AltitudeNumber {
                        type = "text";
                        source = "altitudeASL";
                        sourceScale = 1;
                        sourceLength = 3;
                        align = "right";
                        scale = 1;
                        pos[] = {{0.78, 0.11}, 1};
                        right[] = {{0.825, 0.11}, 1};
                        down[] = {{0.78, 0.155}, 1};
                    };
                    class ClimbNumber {
                        type = "text";
                        source = "vspeed";
                        sourceScale = 1;
                        align = "left";
                        scale = 1;
                        pos[] = {{0.885, 0.51}, 1};
                        right[] = {{0.935, 0.51}, 1};
                        down[] = {{0.885, 0.55}, 1};
                    };
                    class ClimbArrow {
                        type = "line";
                        width = 4;
                        points[] = {
                            {"ClimbRotate", {-0.074, -0.006}, 1},
                            {"ClimbRotate", {-0.084, 0}, 1},
                            {"ClimbRotate", {-0.074, 0.006}, 1},
                            {"ClimbRotate", {-0.074, -0.006}, 1},
                            {},
                            {"ClimbRotate", {-0.084, 0}, 1},
                            {"ClimbRotate", {0.006, 0}, 1}
                        };
                    };
                    class ClimbLine {
                        type = "line";
                        width = 4;
                        points[] = {
                            {"ClimbFixed", {-0.09, 0.00000000494926}, 1},
                            {"ClimbFixed", {-0.075, 0.00000000412438}, 1},
                            {},
                            {"ClimbFixed", {-0.070477, -0.0322712}, 1},
                            {"ClimbFixed", {-0.0798739, -0.0365741}, 1},
                            {},
                            {"ClimbFixed", {-0.0574533, -0.0606501}, 1},
                            {"ClimbFixed", {-0.0651138, -0.0687368}, 1},
                            {},
                            {"ClimbFixed", {-0.0375, -0.0817137}, 1},
                            {"ClimbFixed", {-0.0425, -0.0926088}, 1},
                            {},
                            {"ClimbFixed", {-0.0130236, -0.0929214}, 1},
                            {"ClimbFixed", {-0.0147601, -0.105311}, 1},
                            {},
                            {"ClimbFixed", {-0.0704769, 0.0322713}, 1},
                            {"ClimbFixed", {-0.0798739, 0.0365741}, 1},
                            {},
                            {"ClimbFixed", {-0.0574533, 0.0606501}, 1},
                            {"ClimbFixed", {-0.0651138, 0.0687368}, 1},
                            {},
                            {"ClimbFixed", {-0.0375, 0.0817137}, 1},
                            {"ClimbFixed", {-0.0425, 0.0926089}, 1},
                            {},
                            {"ClimbFixed", {-0.0130236, 0.0929214}, 1},
                            {"ClimbFixed", {-0.0147601, 0.105311}, 1},
                            {}
                        };
                    };
                    class HeadingArrow {
                        type = "line";
                        width = 3;
                        points[] = {
                            {{0.48, 0.145}, 1},
                            {{0.5, 0.125}, 1},
                            {{0.52, 0.145}, 1},
                            {{0.54, 0.145}, 1},
                            {{0.54, 0.18}, 1},
                            {{0.46, 0.18}, 1},
                            {{0.46, 0.145}, 1},
                            {{0.48, 0.145}, 1}
                        };
                    };
                    class HeadingLine {
                        type = "line";
                        width = 4;
                        points[] = {{{0.3, 0.12}, 1}, {{0.7, 0.12}, 1}};
                    };
                    class HeadingNumber {
                        type = "text";
                        source = "heading";
                        sourceScale = 1;
                        align = "center";
                        scale = 1;
                        pos[] = {{0.5, 0.145}, 1};
                        right[] = {{0.55, 0.145}, 1};
                        down[] = {{0.5, 0.18}, 1};
                    };
                    class HeadingScale {
                        type = "scale";
                        horizontal = 1;
                        source = "heading";
                        sourceScale = 0.1;
                        width = 4;
                        NeverEatSeaWeed = 1;
                        top = 0.3;
                        center = 0.5;
                        bottom = 0.7;
                        lineXleft = 0.118;
                        lineYright = 0.108;
                        lineXleftMajor = 0.118;
                        lineYrightMajor = 0.098;
                        majorLineEach = 2;
                        numberEach = 2;
                        step = 0.5;
                        stepSize = 0.0344828;
                        align = "center";
                        scale = 1;
                        pos[] = {0.295, 0.05};
                        right[] = {0.35, 0.05};
                        down[] = {0.295, 0.09};
                    };
                    class MGun {
                        condition = "-2+(mgun+rocket)*ImpactDistance";
                        class Cross {
                            type = "line";
                            width = 3;
                            points[] = {
                                {"ImpactPointRelative", {0, -0.07}, 1},
                                {"ImpactPointRelative", {0, -0.03}, 1},
                                {},
                                {"ImpactPointRelative", {0, 0.045}, 1},
                                {"ImpactPointRelative", {0, 0.03}, 1},
                                {},
                                {"ImpactPointRelative", {-0.045, 0}, 1},
                                {"ImpactPointRelative", {-0.03, 0}, 1},
                                {},
                                {"ImpactPointRelative", {0.045, 0}, 1},
                                {"ImpactPointRelative", {0.03, 0}, 1},
                                {},
                                {"ImpactPointRelative", {0, -0.002}, 1},
                                {"ImpactPointRelative", {0, 0.002}, 1},
                                {},
                                {"ImpactPointRelative", {-0.002, 0}, 1},
                                {"ImpactPointRelative", {0.002, 0}, 1},
                                {}
                            };
                        };
                        class Circle {
                            type = "line";
                            width = 6;
                            points[] = {
                                {"ImpactPointRelative", {0, -0.0503226}, 1},
                                {"ImpactPointRelative", {0, -0.0629032}, 1},
                                {"MissileFlightTimeRot1", {0, 0.05}, 1, "ImpactPointRelative", 1},
                                {"MissileFlightTimeRot2", {0, 0.05}, 1, "ImpactPointRelative", 1},
                                {"MissileFlightTimeRot3", {0, 0.05}, 1, "ImpactPointRelative", 1},
                                {"MissileFlightTimeRot4", {0, 0.05}, 1, "ImpactPointRelative", 1},
                                {"MissileFlightTimeRot5", {0, 0.05}, 1, "ImpactPointRelative", 1},
                                {"MissileFlightTimeRot6", {0, 0.05}, 1, "ImpactPointRelative", 1},
                                {"MissileFlightTimeRot7", {0, 0.05}, 1, "ImpactPointRelative", 1},
                                {"MissileFlightTimeRot8", {0, 0.05}, 1, "ImpactPointRelative", 1},
                                {"MissileFlightTimeRot9", {0, 0.05}, 1, "ImpactPointRelative", 1},
                                {"MissileFlightTimeRot10", {0, 0.05}, 1, "ImpactPointRelative", 1},
                                {"MissileFlightTimeRot11", {0, 0.05}, 1, "ImpactPointRelative", 1},
                                {"MissileFlightTimeRot12", {0, 0.05}, 1, "ImpactPointRelative", 1},
                                {"MissileFlightTimeRot13", {0, 0.05}, 1, "ImpactPointRelative", 1},
                                {"MissileFlightTimeRot14", {0, 0.05}, 1, "ImpactPointRelative", 1},
                                {"MissileFlightTimeRot15", {0, 0.05}, 1, "ImpactPointRelative", 1},
                                {"MissileFlightTimeRot16", {0, 0.05}, 1, "ImpactPointRelative", 1},
                                {"MissileFlightTimeRot17", {0, 0.05}, 1, "ImpactPointRelative", 1},
                                {"MissileFlightTimeRot18", {0, 0.05}, 1, "ImpactPointRelative", 1},
                                {"MissileFlightTimeRot19", {0, 0.05}, 1, "ImpactPointRelative", 1},
                                {"MissileFlightTimeRot20", {0, 0.05}, 1, "ImpactPointRelative", 1},
                                {"MissileFlightTimeRot20", {0, 0.04}, 1, "ImpactPointRelative", 1}
                            };
                        };
                        class Circle_LAR {
                            type = "line";
                            width = 5;
                            points[] = {
                                {"ImpactPointRelative", 1, {"LarAmmoMGunMin", 0, -0.0754839}, 1},
                                {"ImpactPointRelative", 1, {"LarAmmoMGunMin", 0, -0.0629032}, 1},
                                {},
                                {"ImpactPointRelative", 1, {"LarAmmoMGunMax", 0, -0.0754839}, 1},
                                {"ImpactPointRelative", 1, {"LarAmmoMGunMax", 0, -0.0629032}, 1},
                                {}
                            };
                        };
                        class Distance {
                            type = "text";
                            source = "ImpactDistance";
                            sourceScale = 0.001;
                            sourcePrecision = 1;
                            max = 15;
                            align = "center";
                            scale = 1;
                            pos[] = {"ImpactPointRelative", {-0.002, -0.1}, 1};
                            right[] = {"ImpactPointRelative", {0.045, -0.1}, 1};
                            down[] = {"ImpactPointRelative", {-0.002, -0.06}, 1};
                        };
                    };
                    class AAMissileCrosshairGroup {
                        type = "group";
                        condition = "AAmissile";
                        class AAMissileCrosshair {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"WeaponAim", {0, -0.314516}, 1},
                                {"WeaponAim", {0.0434, -0.309735}, 1},
                                {"WeaponAim", {0.0855, -0.295551}, 1},
                                {"WeaponAim", {0.125, -0.272371}, 1},
                                {"WeaponAim", {0.1607, -0.240919}, 1},
                                {"WeaponAim", {0.1915, -0.202171}, 1},
                                {"WeaponAim", {0.2165, -0.157258}, 1},
                                {"WeaponAim", {0.234925, -0.107565}, 1},
                                {"WeaponAim", {0.2462, -0.0546}, 1},
                                {"WeaponAim", {0.25, 0}, 1},
                                {"WeaponAim", {0.2462, 0.0546}, 1},
                                {"WeaponAim", {0.234925, 0.107565}, 1},
                                {"WeaponAim", {0.2165, 0.157258}, 1},
                                {"WeaponAim", {0.1915, 0.202171}, 1},
                                {"WeaponAim", {0.1607, 0.240919}, 1},
                                {"WeaponAim", {0.125, 0.272371}, 1},
                                {"WeaponAim", {0.0855, 0.295551}, 1},
                                {"WeaponAim", {0.0434, 0.309735}, 1},
                                {"WeaponAim", {0, 0.314516}, 1},
                                {"WeaponAim", {-0.0434, 0.309735}, 1},
                                {"WeaponAim", {-0.0855, 0.295551}, 1},
                                {"WeaponAim", {-0.125, 0.272371}, 1},
                                {"WeaponAim", {-0.1607, 0.240919}, 1},
                                {"WeaponAim", {-0.1915, 0.202171}, 1},
                                {"WeaponAim", {-0.2165, 0.157258}, 1},
                                {"WeaponAim", {-0.234925, 0.107565}, 1},
                                {"WeaponAim", {-0.2462, 0.0546}, 1},
                                {"WeaponAim", {-0.25, 0}, 1},
                                {"WeaponAim", {-0.2462, -0.0546}, 1},
                                {"WeaponAim", {-0.234925, -0.107565}, 1},
                                {"WeaponAim", {-0.2165, -0.157258}, 1},
                                {"WeaponAim", {-0.1915, -0.202171}, 1},
                                {"WeaponAim", {-0.1607, -0.240919}, 1},
                                {"WeaponAim", {-0.125, -0.272371}, 1},
                                {"WeaponAim", {-0.0855, -0.295551}, 1},
                                {"WeaponAim", {-0.0434, -0.309735}, 1},
                                {"WeaponAim", {0, -0.314516}, 1}
                            };
                        };
                    };
                    class ATMissileCrosshairGroup {
                        condition = "ATmissile";
                        type = "group";
                        class ATMissileCrosshair {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"WeaponAim", {-0.15, -0.15}, 1},
                                {"WeaponAim", {-0.15, -0.13}, 1},
                                {},
                                {"WeaponAim", {-0.15, 0.15}, 1},
                                {"WeaponAim", {-0.15, 0.13}, 1},
                                {},
                                {"WeaponAim", {0.15, -0.15}, 1},
                                {"WeaponAim", {0.15, -0.13}, 1},
                                {},
                                {"WeaponAim", {0.15, 0.15}, 1},
                                {"WeaponAim", {0.15, 0.13}, 1},
                                {},
                                {"WeaponAim", {-0.15, -0.15}, 1},
                                {"WeaponAim", {-0.13, -0.15}, 1},
                                {},
                                {"WeaponAim", {-0.15, 0.15}, 1},
                                {"WeaponAim", {-0.13, 0.15}, 1},
                                {},
                                {"WeaponAim", {0.15, -0.15}, 1},
                                {"WeaponAim", {0.13, -0.15}, 1},
                                {},
                                {"WeaponAim", {0.15, 0.15}, 1},
                                {"WeaponAim", {0.13, 0.15}, 1}
                            };
                        };
                    };
                    class BombCrosshairGroup {
                        type = "group";
                        condition = "bomb";
                        class BombCrosshair {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"ImpactPoint", {0, -0.125806}, 1},
                                {"ImpactPoint", {0.01736, -0.123894}, 1},
                                {"ImpactPoint", {0.0342, -0.11822}, 1},
                                {"ImpactPoint", {0.05, -0.108948}, 1},
                                {"ImpactPoint", {0.06428, -0.0963677}, 1},
                                {"ImpactPoint", {0.0766, -0.0808684}, 1},
                                {"ImpactPoint", {0.0866, -0.0629032}, 1},
                                {"ImpactPoint", {0.09397, -0.0430258}, 1},
                                {"ImpactPoint", {0.09848, -0.02184}, 1},
                                {"ImpactPoint", {0.1, 0}, 1},
                                {"ImpactPoint", {0.09848, 0.02184}, 1},
                                {"ImpactPoint", {0.09397, 0.0430258}, 1},
                                {"ImpactPoint", {0.0866, 0.0629032}, 1},
                                {"ImpactPoint", {0.0766, 0.0808684}, 1},
                                {"ImpactPoint", {0.06428, 0.0963677}, 1},
                                {"ImpactPoint", {0.05, 0.108948}, 1},
                                {"ImpactPoint", {0.0342, 0.11822}, 1},
                                {"ImpactPoint", {0.01736, 0.123894}, 1},
                                {"ImpactPoint", {0, 0.125806}, 1},
                                {"ImpactPoint", {-0.01736, 0.123894}, 1},
                                {"ImpactPoint", {-0.0342, 0.11822}, 1},
                                {"ImpactPoint", {-0.05, 0.108948}, 1},
                                {"ImpactPoint", {-0.06428, 0.0963677}, 1},
                                {"ImpactPoint", {-0.0766, 0.0808684}, 1},
                                {"ImpactPoint", {-0.0866, 0.0629032}, 1},
                                {"ImpactPoint", {-0.09397, 0.0430258}, 1},
                                {"ImpactPoint", {-0.09848, 0.02184}, 1},
                                {"ImpactPoint", {-0.1, 0}, 1},
                                {"ImpactPoint", {-0.09848, -0.02184}, 1},
                                {"ImpactPoint", {-0.09397, -0.0430258}, 1},
                                {"ImpactPoint", {-0.0866, -0.0629032}, 1},
                                {"ImpactPoint", {-0.0766, -0.0808684}, 1},
                                {"ImpactPoint", {-0.06428, -0.0963677}, 1},
                                {"ImpactPoint", {-0.05, -0.108948}, 1},
                                {"ImpactPoint", {-0.0342, -0.11822}, 1},
                                {"ImpactPoint", {-0.01736, -0.123894}, 1},
                                {"ImpactPoint", {0, -0.125806}, 1},
                                {},
                                {"ImpactPoint", 1, "Limit0109", 1, {0, -0.0251613}, 1},
                                {"ImpactPoint", 1, "Limit0109", 1, {0.014, -0.0176129}, 1},
                                {"ImpactPoint", 1, "Limit0109", 1, {"+ 0.02", 0}, 1},
                                {"ImpactPoint", 1, "Limit0109", 1, {0.014, 0.0176129}, 1},
                                {"ImpactPoint", 1, "Limit0109", 1, {0, 0.0251613}, 1},
                                {"ImpactPoint", 1, "Limit0109", 1, {-0.014, 0.0176129}, 1},
                                {"ImpactPoint", 1, "Limit0109", 1, {"- 0.02", 0}, 1},
                                {"ImpactPoint", 1, "Limit0109", 1, {-0.014, -0.0176129}, 1},
                                {"ImpactPoint", 1, "Limit0109", 1, {0, -0.0251613}, 1},
                                {},
                                {"Velocity", 0.001, "ImpactPoint", 1, "Limit0109", 1, {0, 0}, 1},
                                {"Velocity", 1, "Limit0109", 1, {0, 0}, 1}
                            };
                        };
                        class Distance {
                            type = "text";
                            source = "ImpactDistance";
                            sourceScale = 0.001;
                            sourcePrecision = 1;
                            max = 15;
                            align = "center";
                            scale = 1;
                            pos[] = {"ImpactPoint", {-0.002, 0.11}, 1};
                            right[] = {"ImpactPoint", {0.045, 0.11}, 1};
                            down[] = {"ImpactPoint", {-0.002, 0.15}, 1};
                        };
                    };
                    class WP {
                        condition = "wpvalid";
                        class WPdist {
                            type = "text";
                            source = "WPDist";
                            sourceScale = 0.001;
                            sourcePrecision = 1;
                            align = "center";
                            scale = 1;
                            pos[] = {{0.5, 0.8}, 1};
                            right[] = {{0.55, 0.8}, 1};
                            down[] = {{0.5, 0.85}, 1};
                        };
                        class WP {
                            width = 1;
                            type = "line";
                            points[] = {{"Limit0109", 1, "wppoint", 1, {"HorizonBankRotFull", 0.015, -0.035}, 1}, {"Limit0109", 1, "wppoint", 1, {"HorizonBankRotFull", 0, 0}, 1}, {"Limit0109", 1, "wppoint", 1, {"HorizonBankRotFull", -0.015, -0.035}, 1}};
                        };
                    };
                    class CoordXNumber {
                        type = "text";
                        source = "coordinateX";
                        sourceScale = 0.01;
                        sourceLength = 3;
                        sourceOffset = -0.5;
                        align = "left";
                        scale = 1;
                        pos[] = {{0.874, 0.789}, 1};
                        right[] = {{0.924, 0.789}, 1};
                        down[] = {{0.874, 0.824}, 1};
                    };
                    class CoordYNumber: CoordXNumber {
                        source = "coordinateY";
                        pos[] = {{0.951, 0.789}, 1};
                        right[] = {{1.001, 0.789}, 1};
                        down[] = {{0.951, 0.824}, 1};
                    };
                    class Time: CoordXNumber {
                        source = "time";
                        text = "%X";
                        align = "left";
                        pos[] = {{0.949, 0.822}, 1};
                        right[] = {{0.999, 0.822}, 1};
                        down[] = {{0.949, 0.857}, 1};
                    };
                    class MissileLocked {
                        condition = "missilelocked";
                        class LaunchReady {
                            type = "text";
                            source = "static";
                            text = "ПР";
                            align = "center";
                            scale = 1;
                            pos[] = {{0.5, "0.49+0.19"}, 1};
                            right[] = {{0.58, "0.49+0.19"}, 1};
                            down[] = {{0.5, 0.75}, 1};
                        };
                    };
                    class MissileLocking {
                        condition = "missilelocking";
                        blinkingPattern[] = {0.2, 0.5};
                        blinkingStartsOn = 1;
                        class LaunchReady {
                            type = "text";
                            source = "static";
                            text = "ПР";
                            align = "center";
                            scale = 1;
                            pos[] = {{0.5, "0.49+0.19"}, 1};
                            right[] = {{0.58, "0.49+0.19"}, 1};
                            down[] = {{0.5, 0.75}, 1};
                        };
                    };
                    class TargetLocked {
                        condition = "TargetHeight>=1";
                        class shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Target", 1, "Limit0109", 1, {0, -0.015}, 1},
                                {"Target", 1, "Limit0109", 1, {-0.0075, 0}, 1},
                                {"Target", 1, "Limit0109", 1, {0, 0.0125}, 1},
                                {"Target", 1, "Limit0109", 1, {0.0075, 0}, 1},
                                {"Target", 1, "Limit0109", 1, {0, -0.0125}, 1},
                                {},
                                {{0.145, 0.06}, 1},
                                {{0.215, 0.06}, 1},
                                {{0.215, 0.11}, 1},
                                {{0.145, 0.11}, 1},
                                {{0.145, 0.06}, 1},
                                {},
                                {{0.777, 0.06}, 1},
                                {{0.847, 0.06}, 1},
                                {{0.847, 0.11}, 1},
                                {{0.777, 0.11}, 1},
                                {{0.777, 0.06}, 1}
                            };
                        };
                        class TargetSquare {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Target", 1, "Limit0109", 1, {0, -0.0629032}, 1},
                                {"Target", 1, "Limit0109", 1, {0.05, 0}, 1},
                                {"Target", 1, "Limit0109", 1, {0, 0.0629032}, 1},
                                {"Target", 1, "Limit0109", 1, {-0.05, 0}, 1},
                                {"Target", 1, "Limit0109", 1, {0, -0.0629032}, 1}
                            };
                        };
                        class TargetSpeed: SpeedNumber {
                            source = "LarTargetSpeed";
                            sourceScale = 0.36;
                            pos[] = {{0.21, 0.065}, 1};
                            right[] = {{0.255, 0.065}, 1};
                            down[] = {{0.21, 0.11}, 1};
                        };
                        class TargetHeight: AltitudeNumber {
                            source = "TargetHeight";
                            sourceScale = 0.1;
                            sourceLength = 3;
                            pos[] = {{0.78, 0.065}, 1};
                            right[] = {{0.825, 0.065}, 1};
                            down[] = {{0.78, 0.11}, 1};
                        };
                    };
                    class RadarOnGroup {
                        condition = "activeSensorsOn";
                        class RadarText {
                            type = "text";
                            source = "static";
                            text = "РЛ";
                            align = "left";
                            scale = 1;
                            pos[] = {{0.1, 0.45}, 1};
                            right[] = {{0.15, 0.45}, 1};
                            down[] = {{0.1, 0.5}, 1};
                        };
                    };
                    class LAR {
                        type = "group";
                        condition = "bomb+mgun+atmissile+aamissile+rocket";
                        class Lines {
                            type = "line";
                            width = 3;
                            points[] = {
                                {{0.18, 0.245}, 1},
                                {{0.2, 0.245}, 1},
                                {{0.2, 0.695}, 1},
                                {{0.18, 0.695}, 1},
                                {},
                                {{0.18, 0.605}, 1},
                                {{0.2, 0.605}, 1},
                                {},
                                {{0.18, 0.515}, 1},
                                {{0.2, 0.515}, 1},
                                {},
                                {{0.18, 0.425}, 1},
                                {{0.2, 0.425}, 1},
                                {},
                                {{0.18, 0.335}, 1},
                                {{0.2, 0.335}, 1},
                                {},
                                {"LarTargetDist", -0.45, {0.212, 0.707}, 1},
                                {"LarTargetDist", -0.45, {0.2, 0.695}, 1},
                                {"LarTargetDist", -0.45, {0.212, 0.683}, 1},
                                {"LarTargetDist", -0.45, {0.212, 0.692}, 1},
                                {"LarTargetDist", -0.45, {0.222, 0.692}, 1},
                                {"LarTargetDist", -0.45, {0.222, 0.698}, 1},
                                {"LarTargetDist", -0.45, {0.212, 0.698}, 1},
                                {"LarTargetDist", -0.45, {0.212, 0.707}, 1}
                            };
                        };
                        class Poly {
                            type = "polygon";
                            points[] = {{{"LarAmmoMin", -0.45, {0.201, 0.695}, 1}, {"LarAmmoMin", -0.45, {0.201, 0.7}, 1}, {"LarAmmoMin", -0.45, {0.212, 0.7}, 1}, {"LarAmmoMin", -0.45, {0.212, 0.695}, 1}}, {{"LarAmmoMin", -0.45, {0.201, 0.62}, 1}, {"LarAmmoMin", -0.45, {0.201, 0.63}, 1}, {"LarAmmoMin", -0.45, {0.212, 0.63}, 1}, {"LarAmmoMin", -0.45, {0.212, 0.62}, 1}}, {{"LarAmmoMax", -0.45, {0.201, 0.795}, 1}, {"LarAmmoMax", -0.45, {0.201, 0.8}, 1}, {"LarAmmoMax", -0.45, {0.212, 0.8}, 1}, {"LarAmmoMax", -0.45, {0.212, 0.795}, 1}}};
                        };
                        class LARText1 {
                            type = "text";
                            source = "LarTop";
                            sourceScale = 0.001;
                            scale = 1;
                            pos[] = {{0.175, 0.231}, 1};
                            right[] = {{0.21, 0.231}, 1};
                            down[] = {{0.175, 0.259}, 1};
                            align = "left";
                        };
                        class LARText2: LARText1 {
                            source = "LarTop";
                            sourcePrecision = -1;
                            sourceScale = 0.0008;
                            pos[] = {{0.175, 0.321}, 1};
                            right[] = {{0.21, 0.321}, 1};
                            down[] = {{0.175, 0.349}, 1};
                        };
                        class LARText3: LARText1 {
                            source = "LarTop";
                            sourcePrecision = -1;
                            sourceScale = 0.0006;
                            pos[] = {{0.175, 0.411}, 1};
                            right[] = {{0.21, 0.411}, 1};
                            down[] = {{0.175, 0.439}, 1};
                        };
                        class LARText4: LARText1 {
                            source = "LarTop";
                            sourcePrecision = -1;
                            sourceScale = 0.0004;
                            pos[] = {{0.175, 0.501}, 1};
                            right[] = {{0.21, 0.501}, 1};
                            down[] = {{0.175, 0.529}, 1};
                        };
                        class LARText5: LARText1 {
                            source = "LarTop";
                            sourcePrecision = -1;
                            sourceScale = 0.0002;
                            pos[] = {{0.175, 0.591}, 1};
                            right[] = {{0.21, 0.591}, 1};
                            down[] = {{0.175, 0.619}, 1};
                        };
                        class LARText6: LARText1 {
                            source = "static";
                            text = 0;
                            sourcePrecision = -1;
                            sourceScale = 0.0002;
                            pos[] = {{0.175, 0.681}, 1};
                            right[] = {{0.21, 0.681}, 1};
                            down[] = {{0.175, 0.709}, 1};
                        };
                    };
                    class RadarBoxes {
                        type = "radar";
                        pos0[] = {0.5, 0.53};
                        pos10[] = {1.12, 1.31};
                        width = 4;
                        points[] = {
                            {{0, -0.0503226}, 1},
                            {{0.006944, -0.0495577}, 1},
                            {{0.01368, -0.0472881}, 1},
                            {{0.02, -0.0435794}, 1},
                            {{0.025712, -0.0385471}, 1},
                            {{0.03064, -0.0323474}, 1},
                            {{0.03464, -0.0251613}, 1},
                            {{0.037588, -0.0172103}, 1},
                            {{0.039392, -0.008736}, 1},
                            {{0.04, 0}, 1},
                            {{0.039392, 0.008736}, 1},
                            {{0.037588, 0.0172103}, 1},
                            {{0.03464, 0.0251613}, 1},
                            {{0.03064, 0.0323474}, 1},
                            {{0.025712, 0.0385471}, 1},
                            {{0.02, 0.0435794}, 1},
                            {{0.01368, 0.0472881}, 1},
                            {{0.006944, 0.0495577}, 1},
                            {{0, 0.0503226}, 1},
                            {{-0.006944, 0.0495577}, 1},
                            {{-0.01368, 0.0472881}, 1},
                            {{-0.02, 0.0435794}, 1},
                            {{-0.025712, 0.0385471}, 1},
                            {{-0.03064, 0.0323474}, 1},
                            {{-0.03464, 0.0251613}, 1},
                            {{-0.037588, 0.0172103}, 1},
                            {{-0.039392, 0.008736}, 1},
                            {{-0.04, 0}, 1},
                            {{-0.039392, -0.008736}, 1},
                            {{-0.037588, -0.0172103}, 1},
                            {{-0.03464, -0.0251613}, 1},
                            {{-0.03064, -0.0323474}, 1},
                            {{-0.025712, -0.0385471}, 1},
                            {{-0.02, -0.0435794}, 1},
                            {{-0.01368, -0.0472881}, 1},
                            {{-0.006944, -0.0495577}, 1},
                            {{0, -0.0503226}, 1},
                            {}
                        };
                    };
                };
            };
            class HMD {
                topLeft = "HUD_top_left";
                topRight = "HUD_top_right";
                bottomLeft = "HUD_bottom_left";
                helmetMountedDisplay = 1;
                helmetPosition[] = {-0.0325, 0.0325, 0.1};
                helmetRight[] = {0.065, 0, 0};
                helmetDown[] = {0, -0.065, 0};
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0, 1, 0, 0.1};
                font = "rhs_digital_font_rus";
                class Bones {
                    class PlaneW {
                        type = "fixed";
                        pos[] = {0.5, 0.5};
                        pos10[] = {0.774, 0.77};
                    };
                    class Target {
                        source = "targettoview";
                        type = "vector";
                        pos0[] = {0.5, 0.5};
                        pos10[] = {0.774, 0.77};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    condition = "on";
                    class HeadOutside {
                        condition = "(abs(cameraHeadingDiffY)>7)+(abs(cameraHeadingDiffX)>12)";
                        class SearchMode {
                            condition = "1-missileLocked - missileLocking";
                            class CircleLock {
                                type = "line";
                                width = 12;
                                points[] = {
                                    {"PlaneW", {0, -0.0591241}, 1},
                                    {"PlaneW", {0.010416, -0.0582254}, 1},
                                    {"PlaneW", {0.02052, -0.0555589}, 1},
                                    {"PlaneW", {0.03, -0.0512015}, 1},
                                    {"PlaneW", {0.038568, -0.0452891}, 1},
                                    {"PlaneW", {0.04596, -0.038005}, 1},
                                    {"PlaneW", {0.05196, -0.029562}, 1},
                                    {"PlaneW", {0.056382, -0.0202204}, 1},
                                    {"PlaneW", {0.059088, -0.0102639}, 1},
                                    {"PlaneW", {0.06, 0}, 1},
                                    {"PlaneW", {0.059088, 0.0102639}, 1},
                                    {"PlaneW", {0.056382, 0.0202204}, 1},
                                    {"PlaneW", {0.05196, 0.029562}, 1},
                                    {"PlaneW", {0.04596, 0.038005}, 1},
                                    {"PlaneW", {0.038568, 0.0452891}, 1},
                                    {"PlaneW", {0.03, 0.0512015}, 1},
                                    {"PlaneW", {0.02052, 0.0555589}, 1},
                                    {"PlaneW", {0.010416, 0.0582254}, 1},
                                    {"PlaneW", {0, 0.0591241}, 1},
                                    {"PlaneW", {-0.010416, 0.0582254}, 1},
                                    {"PlaneW", {-0.02052, 0.0555589}, 1},
                                    {"PlaneW", {-0.03, 0.0512015}, 1},
                                    {"PlaneW", {-0.038568, 0.0452891}, 1},
                                    {"PlaneW", {-0.04596, 0.038005}, 1},
                                    {"PlaneW", {-0.05196, 0.029562}, 1},
                                    {"PlaneW", {-0.056382, 0.0202204}, 1},
                                    {"PlaneW", {-0.059088, 0.0102639}, 1},
                                    {"PlaneW", {-0.06, 0}, 1},
                                    {"PlaneW", {-0.059088, -0.0102639}, 1},
                                    {"PlaneW", {-0.056382, -0.0202204}, 1},
                                    {"PlaneW", {-0.05196, -0.029562}, 1},
                                    {"PlaneW", {-0.04596, -0.038005}, 1},
                                    {"PlaneW", {-0.038568, -0.0452891}, 1},
                                    {"PlaneW", {-0.03, -0.0512015}, 1},
                                    {"PlaneW", {-0.02052, -0.0555589}, 1},
                                    {"PlaneW", {-0.010416, -0.0582254}, 1},
                                    {"PlaneW", {0, -0.0591241}, 1},
                                    {}
                                };
                            };
                        };
                        class Locking {
                            blinkingPattern[] = {0.2, 0.2};
                            blinkingStartsOn = 1;
                            condition = "missileLocking";
                            class CircleLock {
                                type = "line";
                                width = 12;
                                points[] = {
                                    {"Target", {0, -0.0591241}, 1},
                                    {"Target", {0.010416, -0.0582254}, 1},
                                    {"Target", {0.02052, -0.0555589}, 1},
                                    {"Target", {0.03, -0.0512015}, 1},
                                    {"Target", {0.038568, -0.0452891}, 1},
                                    {"Target", {0.04596, -0.038005}, 1},
                                    {"Target", {0.05196, -0.029562}, 1},
                                    {"Target", {0.056382, -0.0202204}, 1},
                                    {"Target", {0.059088, -0.0102639}, 1},
                                    {"Target", {0.06, 0}, 1},
                                    {"Target", {0.059088, 0.0102639}, 1},
                                    {"Target", {0.056382, 0.0202204}, 1},
                                    {"Target", {0.05196, 0.029562}, 1},
                                    {"Target", {0.04596, 0.038005}, 1},
                                    {"Target", {0.038568, 0.0452891}, 1},
                                    {"Target", {0.03, 0.0512015}, 1},
                                    {"Target", {0.02052, 0.0555589}, 1},
                                    {"Target", {0.010416, 0.0582254}, 1},
                                    {"Target", {0, 0.0591241}, 1},
                                    {"Target", {-0.010416, 0.0582254}, 1},
                                    {"Target", {-0.02052, 0.0555589}, 1},
                                    {"Target", {-0.03, 0.0512015}, 1},
                                    {"Target", {-0.038568, 0.0452891}, 1},
                                    {"Target", {-0.04596, 0.038005}, 1},
                                    {"Target", {-0.05196, 0.029562}, 1},
                                    {"Target", {-0.056382, 0.0202204}, 1},
                                    {"Target", {-0.059088, 0.0102639}, 1},
                                    {"Target", {-0.06, 0}, 1},
                                    {"Target", {-0.059088, -0.0102639}, 1},
                                    {"Target", {-0.056382, -0.0202204}, 1},
                                    {"Target", {-0.05196, -0.029562}, 1},
                                    {"Target", {-0.04596, -0.038005}, 1},
                                    {"Target", {-0.038568, -0.0452891}, 1},
                                    {"Target", {-0.03, -0.0512015}, 1},
                                    {"Target", {-0.02052, -0.0555589}, 1},
                                    {"Target", {-0.010416, -0.0582254}, 1},
                                    {"Target", {0, -0.0591241}, 1},
                                    {}
                                };
                            };
                        };
                        class Locked {
                            condition = "missileLocked";
                            class CircleLock {
                                type = "line";
                                width = 12;
                                points[] = {
                                    {"Target", {0, -0.0591241}, 1},
                                    {"Target", {0.010416, -0.0582254}, 1},
                                    {"Target", {0.02052, -0.0555589}, 1},
                                    {"Target", {0.03, -0.0512015}, 1},
                                    {"Target", {0.038568, -0.0452891}, 1},
                                    {"Target", {0.04596, -0.038005}, 1},
                                    {"Target", {0.05196, -0.029562}, 1},
                                    {"Target", {0.056382, -0.0202204}, 1},
                                    {"Target", {0.059088, -0.0102639}, 1},
                                    {"Target", {0.06, 0}, 1},
                                    {"Target", {0.059088, 0.0102639}, 1},
                                    {"Target", {0.056382, 0.0202204}, 1},
                                    {"Target", {0.05196, 0.029562}, 1},
                                    {"Target", {0.04596, 0.038005}, 1},
                                    {"Target", {0.038568, 0.0452891}, 1},
                                    {"Target", {0.03, 0.0512015}, 1},
                                    {"Target", {0.02052, 0.0555589}, 1},
                                    {"Target", {0.010416, 0.0582254}, 1},
                                    {"Target", {0, 0.0591241}, 1},
                                    {"Target", {-0.010416, 0.0582254}, 1},
                                    {"Target", {-0.02052, 0.0555589}, 1},
                                    {"Target", {-0.03, 0.0512015}, 1},
                                    {"Target", {-0.038568, 0.0452891}, 1},
                                    {"Target", {-0.04596, 0.038005}, 1},
                                    {"Target", {-0.05196, 0.029562}, 1},
                                    {"Target", {-0.056382, 0.0202204}, 1},
                                    {"Target", {-0.059088, 0.0102639}, 1},
                                    {"Target", {-0.06, 0}, 1},
                                    {"Target", {-0.059088, -0.0102639}, 1},
                                    {"Target", {-0.056382, -0.0202204}, 1},
                                    {"Target", {-0.05196, -0.029562}, 1},
                                    {"Target", {-0.04596, -0.038005}, 1},
                                    {"Target", {-0.038568, -0.0452891}, 1},
                                    {"Target", {-0.03, -0.0512015}, 1},
                                    {"Target", {-0.02052, -0.0555589}, 1},
                                    {"Target", {-0.010416, -0.0582254}, 1},
                                    {"Target", {0, -0.0591241}, 1},
                                    {}
                                };
                            };
                        };
                        class SpeedNumber {
                            type = "text";
                            source = "speed";
                            sourceScale = 3.6;
                            sourceLength = 3;
                            align = "left";
                            scale = 1;
                            pos[] = {{0.21, 0.11}, 1};
                            right[] = {{0.255, 0.11}, 1};
                            down[] = {{0.21, 0.155}, 1};
                        };
                        class SpeedText {
                            type = "text";
                            source = "static";
                            text = "И";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{0.24, 0.11}, 1};
                            right[] = {{0.285, 0.11}, 1};
                            down[] = {{0.24, 0.155}, 1};
                        };
                        class MachNumber: SpeedNumber {
                            sourceScale = 0.002939;
                            sourceLength = 1;
                            sourcePrecision = 2;
                            pos[] = {{0.21, 0.15}, 1};
                            right[] = {{0.255, 0.15}, 1};
                            down[] = {{0.21, 0.195}, 1};
                        };
                        class MachText {
                            type = "text";
                            source = "static";
                            text = "М";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{0.24, 0.15}, 1};
                            right[] = {{0.285, 0.15}, 1};
                            down[] = {{0.24, 0.195}, 1};
                        };
                        class TerrainNumber {
                            type = "text";
                            source = "altitudeAGL";
                            sourceScale = 1;
                            sourceLength = 3;
                            sourceOffset = -2;
                            align = "right";
                            scale = 1;
                            pos[] = {{0.78, 0.15}, 1};
                            right[] = {{0.825, 0.15}, 1};
                            down[] = {{0.78, 0.195}, 1};
                        };
                        class RadarText {
                            type = "text";
                            source = "static";
                            text = "Р";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{0.86, 0.15}, 1};
                            right[] = {{0.905, 0.15}, 1};
                            down[] = {{0.86, 0.195}, 1};
                        };
                        class AltitudeNumber {
                            type = "text";
                            source = "altitudeASL";
                            sourceScale = 1;
                            sourceLength = 3;
                            align = "right";
                            scale = 1;
                            pos[] = {{0.78, 0.11}, 1};
                            right[] = {{0.825, 0.11}, 1};
                            down[] = {{0.78, 0.155}, 1};
                        };
                        class RadarBoxes {
                            type = "radartoview";
                            pos0[] = {0.5, 0.5};
                            pos10[] = {0.774, 0.77};
                            width = 3;
                            points[] = {
                                {{0, -0.019708}, 1},
                                {{0.003472, -0.0194085}, 1},
                                {{0.00684, -0.0185196}, 1},
                                {{0.01, -0.0170672}, 1},
                                {{0.012856, -0.0150964}, 1},
                                {{0.01532, -0.0126683}, 1},
                                {{0.01732, -0.00985401}, 1},
                                {{0.018794, -0.00674015}, 1},
                                {{0.019696, -0.00342131}, 1},
                                {{0.02, 0}, 1},
                                {{0.019696, 0.00342131}, 1},
                                {{0.018794, 0.00674015}, 1},
                                {{0.01732, 0.00985401}, 1},
                                {{0.01532, 0.0126683}, 1},
                                {{0.012856, 0.0150964}, 1},
                                {{0.01, 0.0170672}, 1},
                                {{0.00684, 0.0185196}, 1},
                                {{0.003472, 0.0194085}, 1},
                                {{0, 0.019708}, 1},
                                {{-0.003472, 0.0194085}, 1},
                                {{-0.00684, 0.0185196}, 1},
                                {{-0.01, 0.0170672}, 1},
                                {{-0.012856, 0.0150964}, 1},
                                {{-0.01532, 0.0126683}, 1},
                                {{-0.01732, 0.00985401}, 1},
                                {{-0.018794, 0.00674015}, 1},
                                {{-0.019696, 0.00342131}, 1},
                                {{-0.02, 0}, 1},
                                {{-0.019696, -0.00342131}, 1},
                                {{-0.018794, -0.00674015}, 1},
                                {{-0.01732, -0.00985401}, 1},
                                {{-0.01532, -0.0126683}, 1},
                                {{-0.012856, -0.0150964}, 1},
                                {{-0.01, -0.0170672}, 1},
                                {{-0.00684, -0.0185196}, 1},
                                {{-0.003472, -0.0194085}, 1},
                                {{0, -0.019708}, 1},
                                {}
                            };
                        };
                        class WeaponsGroupMGun {
                            condition = "mgun";
                            class WeaponName {
                                type = "text";
                                source = "static";
                                sourceScale = 1;
                                text = "ГШ";
                                align = "right";
                                scale = 1;
                                pos[] = {{0.14, 0.74}, 1};
                                right[] = {{0.19, 0.74}, 1};
                                down[] = {{0.14, 0.785}, 1};
                            };
                        };
                        class WeaponsGroup {
                            condition = "1-mgun";
                            class PylonName1 {
                                type = "pylonicon";
                                pos[] = {{0.145, 0.72}, 1};
                                pylon = 1;
                                name = "rhs_rus_ammoname_right";
                            };
                            class PylonName2: PylonName1 {
                                pylon = 2;
                            };
                            class PylonName3: PylonName1 {
                                pylon = 3;
                            };
                            class PylonName4: PylonName1 {
                                pylon = 4;
                            };
                            class PylonName5: PylonName1 {
                                pylon = 5;
                            };
                            class PylonName6: PylonName1 {
                                pylon = 6;
                            };
                        };
                        class AmmoCount {
                            type = "text";
                            source = "ammo";
                            sourceScale = 1;
                            align = "right";
                            scale = 1;
                            pos[] = {{0.14, "0.000+0.79"}, 1};
                            right[] = {{0.19, "0.000+0.79"}, 1};
                            down[] = {{0.14, "0.045+0.79"}, 1};
                        };
                        class TargetLocked {
                            condition = "TargetHeight>=1";
                            class shape {
                                type = "line";
                                width = 4;
                                points[] = {
                                    {{0.145, 0.06}, 1},
                                    {{0.215, 0.06}, 1},
                                    {{0.215, 0.11}, 1},
                                    {{0.145, 0.11}, 1},
                                    {{0.145, 0.06}, 1},
                                    {},
                                    {{0.777, 0.06}, 1},
                                    {{0.847, 0.06}, 1},
                                    {{0.847, 0.11}, 1},
                                    {{0.777, 0.11}, 1},
                                    {{0.777, 0.06}, 1}
                                };
                            };
                            class TargetSpeed: SpeedNumber {
                                source = "LarTargetSpeed";
                                sourceScale = 0.36;
                                pos[] = {{0.21, 0.065}, 1};
                                right[] = {{0.255, 0.065}, 1};
                                down[] = {{0.21, 0.11}, 1};
                            };
                            class TargetHeight: AltitudeNumber {
                                source = "TargetHeight";
                                sourceScale = 0.1;
                                sourceLength = 3;
                                pos[] = {{0.78, 0.065}, 1};
                                right[] = {{0.825, 0.065}, 1};
                                down[] = {{0.78, 0.11}, 1};
                            };
                        };
                        class HeadingHeadNumber {
                            type = "text";
                            source = "cameraDir";
                            sourceScale = 1;
                            align = "center";
                            scale = 1;
                            pos[] = {{"0.80-0.302", "0.082+0.001"}, 1};
                            right[] = {{"0.83-0.302", "0.082+0.001"}, 1};
                            down[] = {{"0.80-0.302", "0.113+0.001"}, 1};
                        };
                        class HeadingArrow {
                            type = "line";
                            width = 3;
                            points[] = {
                                {{0.478, 0.075}, 1},
                                {{0.522, 0.075}, 1},
                                {{0.552, 0.095}, 1},
                                {{0.522, 0.115}, 1},
                                {{0.478, 0.115}, 1},
                                {{0.448, 0.095}, 1},
                                {{0.478, 0.075}, 1},
                                {}
                            };
                        };
                    };
                    class InvalidLock {
                        condition = "abs(cameraHeadingDiff) > 85 - missileLocked - missileLocking";
                        class CircleLock {
                            type = "line";
                            width = 12;
                            points[] = {
                                {"PlaneW", {-0.0707107, 0.0696784}, 1},
                                {"PlaneW", {0.0707107, -0.0696784}, 1},
                                {},
                                {"PlaneW", {-0.0707107, -0.0696784}, 1},
                                {"PlaneW", {0.0707107, 0.0696784}, 1}
                            };
                        };
                    };
                };
            };
        };
        engineMOI = 16;
        maxOmega = 2000;
        dampingRateFullThrottle = 0.4;
        clutchStrength = 100;
        class Wheels {
            disableWheelsWhenDestroyed = 1;
            class Wheel_1 {
                boneName = "gear_f1";
                steering = 1;
                side = "left";
                center = "Wheel_1_center";
                boundary = "Wheel_1_rim";
                width = 0.16;
                mass = 150;
                MOI = 40;
                dampingRate = 0.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 21500;
                maxHandBrakeTorque = 0;
                suspTravelDirection[] = {0, -1, 0};
                suspForceAppPointOffset = "Wheel_1_center";
                tireForceAppPointOffset = "Wheel_1_center";
                maxCompression = 0.05;
                maxDroop = 0.05;
                sprungMass = 4066;
                springStrength = 56600;
                springDamperRate = 115569.6;
                longitudinalStiffnessPerUnitGravity = 5000;
                latStiffX = 25;
                latStiffY = 180;
                frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1, 1}};
            };
            class Wheel_1_fake: Wheel_1 {};
            class Wheel_2: Wheel_1 {
                boneName = "gear_l2";
                steering = 0;
                center = "Wheel_2_center";
                boundary = "Wheel_2_rim";
                width = 0.28;
                maxCompression = 0.06;
                maxDroop = 0.06;
                sprungMass = 1952;
                springStrength = 51000;
                springDamperRate = 20569.6;
                suspForceAppPointOffset = "Wheel_2_center";
                tireForceAppPointOffset = "Wheel_2_center";
            };
            class Wheel_3: Wheel_2 {
                boneName = "gear_r2";
                side = "right";
                center = "Wheel_3_center";
                boundary = "Wheel_3_rim";
                suspForceAppPointOffset = "Wheel_3_center";
                tireForceAppPointOffset = "Wheel_3_center";
            };
        };
        soundSetSonicBoom[] = {"Plane_Fighter_SonicBoom_SoundSet"};
        soundLocked[] = {"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_lockedOn1", 1, 1};
        soundIncommingMissile[] = {"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_lockedon2", 1, 1.5};
        soundGearUp[] = {
            "A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_gear_up",
            2.25,
            1,
            250
        };
        soundGearDown[] = {
            "A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_gear_down",
            2.25,
            1,
            250
        };
        soundFlapsUp[] = {
            "A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_Flaps_Up",
            1.5,
            1,
            150
        };
        soundFlapsDown[] = {
            "A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_Flaps_Down",
            1.5,
            1,
            150
        };
        cabinOpenSound[] = {
            "A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_02\FX_Plane_Fighter_02_cabine_open_ext",
            3.16228,
            1,
            40
        };
        cabinCloseSound[] = {
            "A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_02\FX_Plane_Fighter_02_cabine_close_ext",
            3.16228,
            1,
            40
        };
        cabinOpenSoundInternal[] = {
            "A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_02\FX_Plane_Fighter_02_cabine_open_int",
            10,
            1,
            40
        };
        cabinCloseSoundInternal[] = {
            "A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_02\FX_Plane_Fighter_02_cabine_close_int",
            10,
            1,
            40
        };
        soundEngineOnInt[] = {"A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_02\O_Plane_Fighter_02_engine_start_int", 1, 1};
        soundEngineOnExt[] = {
            "A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_02\O_Plane_Fighter_02_engine_start_ext",
            1.75,
            1,
            300
        };
        soundEngineOffInt[] = {"A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_02\O_Plane_Fighter_02_engine_shut_int", 1, 1};
        soundEngineOffExt[] = {
            "A3\Sounds_F_Jets\vehicles\air\Plane_Fighter_02\O_Plane_Fighter_02_engine_shut_ext",
            1.75,
            1,
            300
        };
        soundGetIn[] = {
            "A3\Sounds_F\vehicles\air\CAS_01\getin_wipeout",
            1,
            1,
            40
        };
        soundGetOut[] = {
            "A3\Sounds_F\air\Plane_Fighter_03\getout",
            1,
            1,
            40
        };
        soundWaterCollision1[] = {
            "A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_1",
            1.41254,
            1,
            500
        };
        soundWaterCollision2[] = {
            "A3\Sounds_F\vehicles\crashes\planes\plane_crash_water_2",
            1.41254,
            1,
            500
        };
        soundWaterCrashes[] = {
            "soundWaterCollision1",
            0.5,
            "soundWaterCollision2",
            0.5
        };
        buildCrash0[] = {
            "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
            1,
            1,
            900
        };
        buildCrash1[] = {
            "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
            1,
            1,
            900
        };
        buildCrash2[] = {
            "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
            1,
            1,
            900
        };
        buildCrash3[] = {
            "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
            1,
            1,
            900
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
            "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
            3.16228,
            1,
            900
        };
        WoodCrash1[] = {
            "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_2",
            3.16228,
            1,
            900
        };
        WoodCrash2[] = {
            "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_6",
            3.16228,
            1,
            900
        };
        WoodCrash3[] = {
            "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_8",
            3.16228,
            1,
            900
        };
        soundWoodCrash[] = {
            "woodCrash0",
            0.25,
            "woodCrash1",
            0.25,
            "woodCrash2",
            0.25,
            "woodCrash3",
            0.25
        };
        armorCrash0[] = {
            "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
            1,
            1,
            900
        };
        armorCrash1[] = {
            "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
            1,
            1,
            900
        };
        armorCrash2[] = {
            "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
            1,
            1,
            900
        };
        armorCrash3[] = {
            "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
            1,
            1,
            900
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
        Crash0[] = {
            "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
            1,
            1,
            900
        };
        Crash1[] = {
            "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
            1,
            1,
            900
        };
        Crash2[] = {
            "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
            1,
            1,
            900
        };
        Crash3[] = {
            "A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
            1,
            1,
            900
        };
        soundCrashes[] = {
            "Crash0",
            0.25,
            "Crash1",
            0.25,
            "Crash2",
            0.25,
            "Crash3",
            0.25
        };
        soundDammage[] = {"", 0.562341, 1};
        class scrubLandInt {
            sound[] = {
                "A3\Sounds_F\vehicles\air\noises\wheelsInt",
                1,
                1,
                100
            };
            frequency = 1;
            volume = "(scrubLand factor[0.01, 0.20])";
        };
        class Sounds {
            soundSets[] = {
                "Plane_Fighter_02_EngineLowExt_SoundSet",
                "Plane_Fighter_02_EngineHighExt_SoundSet",
                "Plane_Fighter_02_ForsageExt_SoundSet",
                "Plane_Fighter_02_WindNoiseExt_SoundSet",
                "Plane_Fighter_02_EngineExt_Dist_Front_SoundSet",
                "Plane_Fighter_02_EngineExt_Middle_SoundSet",
                "Plane_Fighter_02_EngineExt_Dist_Rear_SoundSet",
                "Plane_Fighter_02_EngineLowInt_SoundSet",
                "Plane_Fighter_02_EngineHighInt_SoundSet",
                "Plane_Fighter_02_ForsageInt_SoundSet",
                "Plane_Fighter_02_WindNoiseInt_SoundSet",
                "Plane_Fighter_02_VelocityInt_SoundSet"
            };
        };
        driveOnComponent[] = {};
        class Exhausts {
            class Exhaust1 {
                position = "exhaust1";
                direction = "exhaust1_dir";
                effect = "ExhaustsEffectPlaneHP";
                engineIndex = 0;
            };
            class Exhaust2 {
                position = "exhaust2";
                direction = "exhaust2_dir";
                effect = "ExhaustsEffectPlaneHP";
                engineIndex = 1;
            };
        };
        class WingVortices {
            class WingTipLeft {
                effectName = "WingVortices";
                position = "wing_vortex_l";
            };
            class WingTipRight {
                effectName = "WingVortices";
                position = "wing_vortex_r";
            };
            class BodyLeft {
                effectName = "BodyVortices";
                position = "body_vapour_L_S";
            };
            class BodyRight {
                effectName = "BodyVortices";
                position = "body_vapour_R_S";
            };
        };
        attenuationEffectType = "PlaneAttenuation";
        damageResistance = 0.00336;
        armor = 80;
        armorStructural = 3;
        armorLights = 0.1;
        explosionShielding = 1;
        epeImpulseDamageCoef = 1;
        class Hitpoints {
            class HitHull {
                armor = 999;
                explosionShielding = 0;
                passThrough = 0.01;
                minimalHit = 1;
                radius = 0.15;
                material = -1;
                name = "hit_hull";
                visual = "-";
                depends = "Total";
            };
            class HitAvionics {
                armor = 0.2;
                explosionShielding = 0.2;
                passThrough = 0.01;
                minimalHit = 0.1;
                radius = 0.08;
                material = -1;
                name = "hit_avionics";
                visual = "vis_avionics";
                depends = "0";
            };
            class HitEngine_c {
                armor = 0.7;
                explosionShielding = 0.65;
                passThrough = 0.01;
                minimalHit = 0.01;
                radius = 0.07;
                material = -1;
                name = "hit_engine";
                visual = "vis_engine";
                depends = "0";
            };
            class HitEngine {
                armor = 0.7;
                explosionShielding = 0.65;
                passThrough = 0.01;
                minimalHit = 0.01;
                radius = 0.07;
                material = -1;
                name = "hit_engine_l";
                visual = "vis_engine_l";
                depends = "HitEngine_c*0.7";
            };
            class HitEngine2 {
                armor = 0.7;
                explosionShielding = 0.65;
                passThrough = 0.01;
                minimalHit = 0.01;
                radius = 0.07;
                material = -1;
                name = "hit_engine_r";
                visual = "vis_engine_r";
                depends = "HitEngine_c*0.7";
            };
            class HitFuel {
                armor = 1.1;
                explosionShielding = 0.4;
                passThrough = 0.01;
                minimalHit = 0.1;
                radius = 0.1;
                material = -1;
                name = "hit_fuel";
                visual = "vis_fuel";
                depends = "0";
            };
            class HitFuel_left {
                armor = 1.1;
                explosionShielding = 0.4;
                passThrough = 0.01;
                minimalHit = 0.1;
                radius = 0.1;
                material = -1;
                name = "hit_fuel_wing_l";
                visual = "vis_wing_l";
                depends = "0";
            };
            class HitFuel_right {
                armor = 1.1;
                explosionShielding = 0.4;
                passThrough = 0.01;
                minimalHit = 0.1;
                radius = 0.1;
                material = -1;
                name = "hit_fuel_wing_r";
                visual = "vis_wing_r";
                depends = "0";
            };
            class HitFuel2 {
                armor = 1.1;
                explosionShielding = 0.4;
                passThrough = 0.01;
                minimalHit = 1;
                radius = 0.01;
                material = -1;
                name = "hit_fuel";
                visual = "-";
                depends = "(HitFuel_left+HitFuel_right)*0.5";
            };
            class HitLAileron_link {
                armor = 0.7;
                explosionShielding = 0.7;
                passThrough = 0.01;
                minimalHit = 0.1;
                radius = 0.12;
                material = -1;
                name = "hit_aileron_link_l";
                visual = "-";
                depends = "0";
            };
            class HitRAileron_link {
                armor = 0.7;
                explosionShielding = 0.7;
                passThrough = 0.01;
                minimalHit = 0.1;
                radius = 0.12;
                material = -1;
                name = "hit_aileron_link_r";
                visual = "-";
                depends = "0";
            };
            class HitLAileron {
                armor = 0.2;
                explosionShielding = 0.3;
                passThrough = 0.01;
                minimalHit = 0.1;
                radius = 0.13;
                material = -1;
                name = "hit_aileron_l";
                visual = "vis_wing_l";
                depends = "HitLAileron_link*0.7";
            };
            class HitRAileron {
                armor = 0.2;
                explosionShielding = 0.3;
                passThrough = 0.01;
                minimalHit = 0.1;
                radius = 0.13;
                material = -1;
                name = "hit_aileron_r";
                visual = "vis_wing_r";
                depends = "HitRAileron_link*0.7";
            };
            class HitControlRear {
                armor = 0.2;
                explosionShielding = 0.3;
                passThrough = 0.01;
                minimalHit = 0.1;
                radius = 0.04;
                material = -1;
                name = "hit_control_link";
                visual = "-";
                depends = "0";
            };
            class HitLCElevator {
                armor = 0.2;
                explosionShielding = 0.3;
                passThrough = 0.01;
                minimalHit = 0.1;
                radius = 0.15;
                material = -1;
                name = "hit_elevator_l";
                visual = "vis_elevator_l";
                depends = "HitControlRear";
            };
            class HitRElevator {
                armor = 0.2;
                explosionShielding = 0.3;
                passThrough = 0.01;
                minimalHit = 0.1;
                radius = 0.15;
                material = -1;
                name = "hit_elevator_r";
                visual = "vis_elevator_r";
                depends = "HitControlRear";
            };
            class HitLCRudder {
                armor = 0.2;
                explosionShielding = 0.3;
                passThrough = 0.01;
                minimalHit = 0.1;
                radius = 0.15;
                material = -1;
                name = "hit_rudder_l";
                visual = "vis_rudder_l";
                depends = "HitControlRear";
            };
            class HitRightRudder {
                armor = 0.2;
                explosionShielding = 0.3;
                passThrough = 0.01;
                minimalHit = 0.1;
                radius = 0.15;
                material = -1;
                name = "hit_rudder_r";
                visual = "vis_rudder_r";
                depends = "HitControlRear";
            };
            class HitGlass1 {
                armor = 0.2;
                explosionShielding = 0.6;
                passThrough = 0.01;
                minimalHit = 0.1;
                radius = 0.4;
                material = -1;
                name = "glass1";
                visual = "glass1";
                depends = "0";
            };
            class HitGlass2 {
                armor = 0.2;
                explosionShielding = 0.6;
                passThrough = 0.01;
                minimalHit = 0.1;
                radius = 0.4;
                material = -1;
                name = "glass2";
                visual = "glass2";
                depends = "0";
            };
        };
        class AnimationSources {
            class Damper_1_source {
                source = "damper";
                wheel = "Wheel_1";
            };
            class Damper_2_source {
                source = "damper";
                wheel = "Wheel_2";
            };
            class Damper_3_source {
                source = "damper";
                wheel = "Wheel_3";
            };
            class Wheel_1_source {
                source = "wheel";
                wheel = "Wheel_1";
            };
            class Wheel_2_source {
                source = "wheel";
                wheel = "Wheel_2";
            };
            class Wheel_3_source {
                source = "wheel";
                wheel = "Wheel_3";
            };
            class CollisionLightRed_source {
                source = "MarkerLight";
                markerLight = "CollisionRed";
            };
            class CollisionLightWhite_source: CollisionLightRed_source {
                markerLight = "CollisionWhite";
            };
            class Muzzle_flash {
                source = "ammorandom";
                weapon = "rhs_weap_GSh30";
            };
            class Cannon_30mm_ammorandom: Muzzle_flash {
                source = "ammorandom";
            };
            class Cannon_30mm_revolving: Muzzle_flash {
                source = "revolving";
            };
            class Hatch_open {
                source = "user";
                initPhase = 0;
                animPeriod = 0.4;
            };
            class Numbers_hide {
                source = "user";
                initPhase = 0;
                animPeriod = 0.001;
            };
            class afterburner_source {
                source = "user";
                initPhase = 0;
                animPeriod = 1.5;
            };
            class lever_pilot_1 {
                source = "user";
                initPhase = 0;
                animPeriod = 0.3;
            };
            class pods_hide {
                source = "user";
                initPhase = 1;
                animPeriod = 0.001;
            };
            class eject {
                source = "door";
                animPeriod = 0.6;
                initPhase = 0;
            };
            class eject_hide {
                source = "user";
                animPeriod = 0.6;
                initPhase = 0;
            };
            class Display2 {
                source = "user";
                initPhase = 0;
                animPeriod = 0.0001;
            };
            class form_lights_hide: Display2 {};
            class Display2_wp1_rot: Display2 {};
            class Display2_wp1_m: Display2 {};
            class Display2_select_wp: Display2 {};
            class Display2_sector_hide: Display2 {};
            class Display2_sector_rot: Display2 {};
            class Display_Glonass_Map_X: Display2 {};
            class Display_Glonass_Map_Y: Display2 {};
            class display2_wp2_rot: Display2 {};
            class display2_switch: Display2 {
                animPeriod = 1;
            };
            class antenna_hide {
                source = "user";
                initPhase = 1;
                animPeriod = 0.001;
                mass = 1;
                displayName = "hide antenna";
            };
            class sensors_hide: antenna_hide {
                displayName = "hide sensors";
            };
        };
        class MarkerLights {
            class PositionRed {
                color[] = {0.8, 0, 0};
                ambient[] = {0.08, 0, 0};
                intensity = 500;
                name = "PositionLight_red_1_pos";
                drawLight = 1.5;
                drawLightSize = 0.25;
                drawLightCenterSize = 0.04;
                activeLight = 0;
                blinking = 0;
                dayLight = 0;
                useFlare = 0;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 25;
                    quadratic = 50;
                    hardLimitStart = 0.75;
                    hardLimitEnd = 1;
                };
            };
            class PositionGreen: PositionRed {
                color[] = {0, 0.8, 0};
                ambient[] = {0, 0.08, 0};
                name = "PositionLight_green_1_pos";
            };
        };
        class RenderTargets {
            class right_mirror {
                renderTarget = "rendertarget0";
                class CameraView1 {
                    pointPosition = "PIP_mirror_0";
                    pointDirection = "PIP_mirror_0_dir";
                    renderQuality = 0;
                    renderVisionMode = 0;
                    fov = 1;
                };
            };
            class Glonass_Camera {
                renderTarget = "rendertarget4";
                class CameraView1 {
                    pointPosition = "pip_GPS_1";
                    pointDirection = "pip_GPS_1_dir";
                    renderQuality = 2;
                    renderVisionMode = 0;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_4_TL", "PIP_4_TR", "PIP_4_BL", "PIP_4_BR"};
            };
        };
        class compartmentsLights {
            class Comp1 {
                class Light_General {
                    color[] = {20, 40, 20};
                    ambient[] = {0, 0, 0};
                    intensity = 2.5;
                    size = 0;
                    useFlare = 0;
                    flareSize = 0;
                    flareMaxDistance = 0;
                    dayLight = 0;
                    blinking = 0;
                    class Attenuation {
                        start = 0;
                        constant = 0;
                        linear = 1;
                        quadratic = 70;
                        hardLimitStart = 1.45;
                        hardLimitEnd = 2.45;
                    };
                    point = "light_general";
                };
            };
        };
        class Reflectors {
            class Left {
                color[] = {7000, 7500, 10000, 1};
                ambient[] = {100, 100, 100};
                position = "l svetlo";
                selection = "l svetlo";
                direction = "konec l svetla";
                hitpoint = "l svetlo";
                innerAngle = 20;
                outerAngle = 60;
                coneFadeCoef = 10;
                intensity = 50;
                useFlare = 1;
                dayLight = 0;
                FlareSize = 1;
                size = 1;
                class Attenuation {
                    constant = 0;
                    linear = 0;
                    quadratic = 4;
                    start = 1;
                    hardLimitStart = 150;
                    hardLimitEnd = 300;
                };
            };
            class Right: Left {
                position = "p svetlo";
                direction = "konec p svetla";
                hitpoint = "p svetlo";
                selection = "p svetlo";
            };
        };
        aggregateReflectors[] = {{"Left"}, {"Right"}};
        class EventHandlers: EventHandlers {
            hit = "";
            class RHS_EventHandlers {
                hit = "_this call RHS_fnc_AI_eject";
                init = "_this call rhs_fnc_air_init";
                postInit = "_this call rhs_fnc_reapplyTextures";
                incomingMissile = "_this call rhs_fnc_rwr_air";
                getout = "[_this select 0, _this select 2,'rhs_t50_canopy'] call rhs_fnc_K36D_seatEjection";
                engine = "[_this select 0,_this select 1,10] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_addParachutes;";
            };
        };
        irTarget = 1;
        irTargetSize = 0.5;
        visualTarget = 1;
        visualTargetSize = 1;
        radarTarget = 1;
        radarTargetSize = 0.4;
        LockDetectionSystem = 8;
        incomingMissileDetectionSystem = 16;
        receiveRemoteTargets = 1;
        reportRemoteTargets = 1;
        reportOwnPosition = 1;
        class Components: Components {
            class TransportPylonsComponent {
                UIPicture = "\rhsafrf\addons\rhs_air\t50\data\loadouts\RHS_T50_EDEN_CA.paa";
                class pylons {
                    class pylonBayCenter1 {
                        hardpoints[] = {
                            "RHS_HP_R77",
                            "RHS_HP_R77M",
                            "RHS_HP_KAB250_INT",
                            "RHS_HP_Kh38_INT"
                        };
                        priority = 9;
                        attachment = "rhs_mag_R77M";
                        maxweight = 1200;
                        UIposition[] = {0.27, 0.3};
                        bay = 1;
                    };
                    class pylonBayCenter2: pylonBayCenter1 {
                        UIposition[] = {0.27, 0.25};
                        mirroredMissilePos = 1;
                    };
                    class pylonBayCenter3: pylonBayCenter1 {
                        priority = 7;
                        UIposition[] = {0.45, 0.25};
                        bay = 2;
                    };
                    class pylonBayCenter4: pylonBayCenter3 {
                        UIposition[] = {0.45, 0.3};
                        mirroredMissilePos = 3;
                    };
                    class pylonBayRight1 {
                        hardpoints[] = {"RHS_HP_R74M2_int"};
                        priority = 10;
                        attachment = "rhs_mag_R74M2_int";
                        maxweight = 1200;
                        UIposition[] = {0.18, 0.37};
                        bay = 4;
                    };
                    class pylonBayLeft1: pylonBayRight1 {
                        UIposition[] = {0.18, 0.18};
                        mirroredMissilePos = 4;
                        bay = 3;
                    };
                };
                class Bays {
                    class BayCenter1 {
                        bayOpenTime = 0.5;
                        openBayWhenWeaponSelected = 0;
                        autoCloseWhenEmptyDelay = 4.5;
                    };
                    class BayCenter2: BayCenter1 {};
                    class BayLeft1 {
                        bayOpenTime = 0.5;
                        openBayWhenWeaponSelected = 0;
                        autoCloseWhenEmptyDelay = 2;
                    };
                    class BayRight1: BayLeft1 {};
                };
            };
            class SensorsManagerComponent {
                class Components {
                    class IRSensorComponent: SensorTemplateIR {
                        class AirTarget {
                            minRange = 500;
                            maxRange = 16000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 500;
                            maxRange = 12000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        angleRangeHorizontal = 360;
                        angleRangeVertical = 120;
                        maxTrackableSpeed = 500;
                    };
                    class VisualSensorComponent: SensorTemplateVisual {
                        class AirTarget {
                            minRange = 500;
                            maxRange = 4000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 500;
                            maxRange = 3000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        angleRangeHorizontal = 26;
                        angleRangeVertical = 20;
                        maxTrackableSpeed = 100;
                        aimDown = 1;
                    };
                    class PassiveRadarSensorComponent: SensorTemplatePassiveRadar {};
                    class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
                        class AirTarget {
                            minRange = 32000;
                            maxRange = 32000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 10000;
                            maxRange = 10000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        typeRecognitionDistance = 6000;
                        angleRangeHorizontal = 60;
                        angleRangeVertical = 60;
                        groundNoiseDistanceCoef = 0.0004;
                    };
                    class LaserSensorComponent: SensorTemplateLaser {};
                    class NVSensorComponent: SensorTemplateNV {};
                    class DataLinkSensorComponent: SensorTemplateDataLink {};
                };
            };
            class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                class Components {
                    class EmptyDisplay {
                        componentType = "EmptyDisplayComponent";
                    };
                    class MinimapDisplay {
                        componentType = "MinimapDisplayComponent";
                        resource = "RscCustomInfoMiniMap";
                    };
                    class UAVDisplay {
                        componentType = "UAVFeedDisplayComponent";
                    };
                    class SensorDisplay {
                        componentType = "SensorsDisplayComponent";
                        resource = "RscCustomInfoSensors";
                        range[] = {16000, 35000, 3000, 8000};
                    };
                };
            };
            class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                defaultDisplay = "SensorDisplay";
                class Components {
                    class EmptyDisplay {
                        componentType = "EmptyDisplayComponent";
                    };
                    class MinimapDisplay {
                        componentType = "MinimapDisplayComponent";
                        resource = "RscCustomInfoMiniMap";
                    };
                    class UAVDisplay {
                        componentType = "UAVFeedDisplayComponent";
                    };
                    class SensorDisplay {
                        componentType = "SensorsDisplayComponent";
                        resource = "RscCustomInfoSensors";
                        range[] = {16000, 35000, 3000, 8000};
                    };
                };
            };
        };
    };
    class RHS_T50_vvs_generic: RHS_T50_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_T50_vvs_generic.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_vvs";
        crew = "rhs_pilot";
        typicalCargo[] = {"rhs_pilot"};
        scope = 2;
        side = 0;
        accuracy = 0.5;
    };
    class RHS_T50_vvs_generic_ext: RHS_T50_vvs_generic {
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "T-50 obr. 2011 (external pylons)";
        radarTargetSize = 0.8;
        class AnimationSources: AnimationSources {
            class pods_hide: pods_hide {
                initPhase = 0;
            };
        };
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class pylonBayCenter1: pylonBayCenter1 {};
                    class pylonBayCenter2: pylonBayCenter2 {};
                    class pylonBayCenter3: pylonBayCenter3 {};
                    class pylonBayCenter4: pylonBayCenter4 {};
                    class pylonBayRight1: pylonBayRight1 {};
                    class pylonBayLeft1: pylonBayLeft1 {};
                    class pylons1 {
                        hardpoints[] = {
                            "RHS_HP_R77M_AKU170",
                            "RHS_HP_R77_AKU170",
                            "RHS_HP_R74",
                            "RHS_HP_KAB250",
                            "RHS_HP_FAB500_BD3_USK_A",
                            "RHS_HP_Kh38"
                        };
                        attachment = "rhs_mag_Kh38mae";
                        priority = 13;
                        maxweight = 500;
                        UIposition[] = {0.36, 0.5};
                    };
                    class pylons2: pylons1 {
                        UIposition[] = {0.36, 0.05};
                        mirroredMissilePos = 7;
                    };
                    class pylons3: pylons1 {
                        attachment = "rhs_mag_Kh38mae";
                        priority = 11;
                        maxweight = 700;
                        UIposition[] = {0.36, 0.45};
                    };
                    class pylons4: pylons3 {
                        UIposition[] = {0.36, 0.1};
                        mirroredMissilePos = 9;
                    };
                    class pylons5: pylons1 {
                        attachment = "rhs_mag_kab250";
                        priority = 9;
                        maxweight = 300;
                        UIposition[] = {0.36, 0.35};
                    };
                    class pylons6: pylons5 {
                        UIposition[] = {0.36, 0.2};
                        mirroredMissilePos = 11;
                    };
                };
                class Bays: Bays {
                    class BayCenter1: BayCenter1 {};
                    class BayCenter2: BayCenter2 {};
                    class BayLeft1: BayLeft1 {};
                    class BayRight1: BayRight1 {};
                };
            };
        };
    };
    class RHS_T50_vvs_051: RHS_T50_vvs_generic {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_T50_vvs_051.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        dlc = "RHS_AFRF";
        displayName = "$STR_T50_051_name";
        rhs_decalParameters[] = {};
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_air\t50\data\pakfa_bluecamo_co.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\5_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\1_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\AviationCompanies\sukhoi_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new2_ca.paa",
            "rhsafrf\addons\rhs_c_air\scripts\data\altis_co.paa",
            "rhsafrf\addons\rhs_c_air\scripts\data\WP_move_ca.paa"
        };
        class AnimationSources: AnimationSources {
            class antenna_hide: antenna_hide {
                initPhase = 0;
            };
            class sensors_hide: sensors_hide {
                initPhase = 0;
            };
        };
    };
    class RHS_T50_vvs_052: RHS_T50_vvs_051 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_T50_vvs_052.paa";
        displayName = "$STR_T50_052_name";
        author = "$STR_RHS_AUTHOR_FULL";
        dlc = "RHS_AFRF";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_air\t50\data\pakfa_greycamo_co.paa",
            "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\0_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\5_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\2_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\AviationCompanies\sukhoi_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new2_ca.paa",
            "rhsafrf\addons\rhs_c_air\scripts\data\altis_co.paa",
            "rhsafrf\addons\rhs_c_air\scripts\data\WP_move_ca.paa"
        };
    };
    class RHS_T50_vvs_053: RHS_T50_vvs_051 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_T50_vvs_053.paa";
        displayName = "$STR_T50_053_name";
        author = "$STR_RHS_AUTHOR_FULL";
        dlc = "RHS_AFRF";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_air\t50\data\pakfa_bluecamo_co.paa",
            "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\0_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\5_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\3_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\AviationCompanies\sukhoi_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new2_ca.paa",
            "rhsafrf\addons\rhs_c_air\scripts\data\altis_co.paa",
            "rhsafrf\addons\rhs_c_air\scripts\data\WP_move_ca.paa"
        };
        class AnimationSources: AnimationSources {
            class antenna_hide: antenna_hide {
                initPhase = 1;
            };
        };
    };
    class RHS_T50_vvs_054: RHS_T50_vvs_051 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_T50_vvs_054.paa";
        displayName = "$STR_T50_054_name";
        author = "$STR_RHS_AUTHOR_FULL";
        dlc = "RHS_AFRF";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_air\t50\data\pakfa_bluecamo_co.paa",
            "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\0_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\5_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\4_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\AviationCompanies\sukhoi_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new2_ca.paa",
            "rhsafrf\addons\rhs_c_air\scripts\data\altis_co.paa",
            "rhsafrf\addons\rhs_c_air\scripts\data\WP_move_ca.paa"
        };
        class AnimationSources: AnimationSources {
            class antenna_hide: antenna_hide {
                initPhase = 1;
            };
            class sensors_hide: sensors_hide {
                initPhase = 1;
            };
        };
    };
    class RHS_T50_vvs_blueonblue: RHS_T50_vvs_051 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_T50_vvs_blueonblue.paa";
        displayName = "$STR_T50_055_name";
        author = "$STR_RHS_AUTHOR_FULL";
        dlc = "RHS_AFRF";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_air\t50\data\pakfa_blueonblue_co.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\0_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\5_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaBlue\5_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\no_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new_ca.paa",
            "rhsafrf\addons\rhs_c_air\scripts\data\altis_co.paa",
            "rhsafrf\addons\rhs_c_air\scripts\data\WP_move_ca.paa"
        };
        class AnimationSources: AnimationSources {
            class antenna_hide: antenna_hide {
                initPhase = 0;
            };
            class sensors_hide: sensors_hide {
                initPhase = 1;
            };
        };
    };
    class Car_f;
    class rhs_k36d5_seat: Car_f {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_k36d5_seat.paa";
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;
        hiddenSelections[] = {};
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "K36D-5 Ejection Seat";
        Icon = "iconParachute";
        picture = "\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
        model = "\rhsafrf\addons\rhs_air\t50\rhs_k36d.p3d";
        simulation = "motorcycle";
        isBicycle = 0;
        textureTrackWheel = "";
        memoryPointTrack1L = "";
        memoryPointTrack2L = "";
        memoryPointsGetInCargo = "Cargo";
        memoryPointsGetInCargoDir = "Cargo dir";
        ejectSpeed[] = {10, 0, 10};
        unitInfoType = "RscUnitInfoSoldier";
        hideUnitInfo = 1;
        cargoAction[] = {"RHS_K36D_PilotEject"};
        hasdriver = 0;
        weapons[] = {};
        magazines[] = {};
        fuelCapacity = 0;
        secondaryExplosion = 0;
        fuelExplosionPower = 0;
        explosionEffect = "";
        destrType = "DestructNo";
        castCargoShadow = 1;
        transportSoldier = 1;
        vehicleClass = "Objects";
        occludeSoundsWhenIn = 1;
        obstructSoundsWhenIn = 1;
        driverRightHandAnimName = "handle";
        driverLeftHandAnimName = "handle";
        class AnimationSources {
            class hide_booster {
                source = "user";
                animPeriod = 0.6;
                initPhase = 0;
            };
            class handle_move: hide_booster {};
        };
        class Turrets {};
        class MFD {};
        class RenderTargets {};
        class UserActions {};
        driveOnComponent[] = {};
        class Eventhandlers {};
        SLX_XEH_DISABLED = 1;
    };
    class rhs_t50_canopy: ThingX {
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;
        hiddenSelections[] = {};
        displayName = "T-50 Canopy";
        editorCategory = "EdCat_Things";
        editorSubcategory = "EdSubcat_Military";
        vehicleClass = "Small_items";
        model = "\rhsafrf\addons\rhs_air\t50\t50_canopy.p3d";
        armor = 100;
        gearsUpFrictionCoef = 0.01;
        hasdriver = 0;
        weapons[] = {};
        magazines[] = {};
        fuelCapacity = 0;
        secondaryExplosion = 0;
        fuelExplosionPower = 0;
        explosionEffect = "";
        destrType = "DestructNo";
        castCargoShadow = 1;
        transportSoldier = 0;
        occludeSoundsWhenIn = 1;
        obstructSoundsWhenIn = 1;
        class Eventhandlers {
            HandleDamage = "deleteVehicle (_this select 0)";
        };
        class MFD {};
        class RenderTargets {};
        class UserActions {};
        driveOnComponent[] = {};
        SLX_XEH_DISABLED = 1;
    };
    class rhs_su25_canopy: rhs_t50_canopy {
        scope = 1;
        displayName = "Su-25 Canopy";
        model = "\rhsafrf\addons\rhs_a2port_air\su25\su25_canopy";
    };
    class RHS_TU95MS_base: Plane_Base_F {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\RHS_TU95MS_vvs_old.paa";
        faction = "rhs_faction_vvs";
        dlc = "RHS_AFRF";
        category = "Air";
        side = 0;
        rhs_decalParameters[] = {"['Number',cRHSAIRTU95NumberPlaces,'AviaRed2']"};
        scope = 0;
        displayName = "$STR_TU95_name";
        model = "\rhsafrf\addons\rhs_air\tu95ms\rhs_tu95ms";
        destrType = "DestructWreck";
        picture = "\rhsafrf\addons\rhs_air\tu95ms\data\ui\tu95_icon.paa";
        icon = "\rhsafrf\addons\rhs_air\tu95ms\data\ui\icomap_tu95.paa";
        memoryPointsGetInDriver = "pos driver";
        memoryPointsGetInDriverDir = "pos driver dir";
        memoryPointsGetInDriverPrecise = "pos driver";
        driverLeftHandAnimName = "pilotyoke";
        driverRightHandAnimName = "pilotyoke";
        driverLeftLegAnimName = "pilotpedal_L";
        driverRightLegAnimName = "pilotpedal_R";
        author = "$STR_RHS_AUTHOR_FULL";
        driverAction = "RHS_TU95_Pilot";
        crew = "rhs_pilot";
        typicalCargo[] = {
            "rhs_pilot",
            "rhs_pilot",
            "rhs_pilot",
            "rhs_pilot",
            "rhs_pilot",
            "rhs_pilot",
            "rhs_pilot"
        };
        memoryPointsGetInCargo[] = {"pos driver"};
        memoryPointsGetInCargoDir[] = {"pos driver dir"};
        cargoAction[] = {
            "Truck_Cargo01",
            "Truck_Cargo04",
            "Truck_Cargo04",
            "Truck_Cargo02",
            "Truck_Cargo01",
            "Truck_Cargo04",
            "Truck_Cargo01"
        };
        transportSoldier = 0;
        gunnerUsesPilotView = 1;
        cargoIsCoDriver[] = {0, 0};
        getInAction = "RHS_HIND_Cargo_Enter";
        getOutAction = "GetOutHigh";
        cargoGetInAction[] = {"RHS_HIND_Cargo_Enter"};
        cargoGetOutAction[] = {"GetOutHigh"};
        soundGetIn[] = {"A3\Sounds_F_EPC\CAS_01\getin_wipeout", 1, 1, 40};
        soundGetOut[] = {
            "A3\Sounds_F\air\Plane_Fighter_03\getout",
            1,
            1,
            40
        };
        soundDammage[] = {"", 0.56234133, 1};
        soundEngineOnInt[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\air\Tu95\tu95_int_start",
            6,
            1,
            500
        };
        soundEngineOnExt[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\air\Tu95\tu95_ext_start",
            6.4125376,
            1,
            500
        };
        soundEngineOffInt[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\air\Tu95\tu95_int_stop",
            6,
            1,
            500
        };
        soundEngineOffExt[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\air\Tu95\tu95_ext_stop",
            6.4125376,
            1,
            500
        };
        soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1", 0.31622776, 1};
        soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1", 0.31622776, 1};
        soundGearUp[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\air\Tu95\tu95_hydraulicpump",
            5.794328,
            1,
            150
        };
        soundGearDown[] = {
            "rhsafrf\addons\rhs_vehiclesounds\sounds\air\Tu95\tu95_hydraulicpump",
            5.794328,
            1,
            150
        };
        soundFlapsUp[] = {
            "A3\Sounds_F_EPC\CAS_01\Flaps_Up",
            4.6309576,
            1,
            100
        };
        soundFlapsDown[] = {
            "A3\Sounds_F_EPC\CAS_01\Flaps_Down",
            4.6309576,
            1,
            100
        };
        class Sounds {
            class EngineLowOut {
                sound[] = {
                    "rhsafrf\addons\rhs_vehiclesounds\sounds\air\Tu95\tu95_ext_low",
                    10,
                    1,
                    4000
                };
                frequency = "1.0 min (rpm + 0.5)";
                volume = "(camPos*4*(rpm factor[0.2, 1.1])*(rpm factor[1.1, 0.5]))*2";
            };
            class EngineHighOut {
                sound[] = {
                    "rhsafrf\addons\rhs_vehiclesounds\sounds\air\Tu95\tu95_ext_low",
                    10,
                    1.2,
                    4300
                };
                frequency = "1";
                volume = "(camPos*4*(rpm factor[0.2, 1.1])*(rpm factor[1.1, 0.5]))*1";
            };
            class ForsageOut {
                sound[] = {
                    "rhsafrf\addons\rhs_vehiclesounds\sounds\air\Tu95\tu95_ext_high",
                    10,
                    1.2,
                    4500
                };
                frequency = "1";
                volume = "(engineOn*camPos*(thrust factor[0.6, 1.0]))*1";
                cone[] = {3.14, 3.92, 2, 0.5};
            };
            class WindNoiseOut {
                sound[] = {
                    "A3\Sounds_F\air\Plane_Fighter_03\noise",
                    1.0623413,
                    1,
                    150
                };
                frequency = "(0.1+(1.2*(speed factor[1, 150])))";
                volume = "camPos*(speed factor[1, 150])";
            };
            class EngineLowIn {
                sound[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\air\Tu95\tu95_int_low", 3.1622777, 1};
                frequency = "1.0 + (rpm + 0.5)";
                volume = "((1-camPos)*((rpm factor[0.2, 0.1])*(rpm factor[0.1, 0.7])))*3";
            };
            class EngineHighIn {
                sound[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\air\Tu95\tu95_int_low", 3.1622777, 1.2};
                frequency = "1";
                volume = "((1-camPos)*(rpm factor[0.85, 1.0]))*3";
            };
            class ForsageIn {
                sound[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\air\Tu95\tu95_ext_high", 3.3496544, 1.2};
                frequency = "1";
                volume = "((1-camPos)*(engineOn*(thrust factor[0.6, 1.0])))*0.5";
            };
            class WindNoiseIn {
                sound[] = {"A3\Sounds_F\air\Plane_Fighter_03\noise_int", 0.81622773, 1};
                frequency = "(0.1+(1.2*(speed factor[1, 150])))";
                volume = "(1-camPos)*(speed factor[1, 150])";
            };
            class RainExt {
                sound[] = {
                    "A3\Sounds_F\vehicles\noises\rain1_ext",
                    1.7782794,
                    1,
                    100
                };
                frequency = 1;
                volume = "camPos * rain * (speed factor[50, 0])";
            };
            class RainInt {
                sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int", 1, 1, 100};
                frequency = 1;
                volume = "(1-camPos) * rain * (speed factor[50, 0])";
            };
        };
        class Components: Components {
            class TransportPylonsComponent {
                UIPicture = "\rhsafrf\addons\rhs_air\tu95ms\loadouts\RHS_Tu95_EDEN_CA.paa";
                class pylons {
                    class pylon1 {
                        hardpoints[] = {"RHS_HP_TU95MS6_INT"};
                        priority = 6;
                        attachment = "rhs_mag_kh55sh";
                        maxweight = 2000;
                        UIposition[] = {0.333, 0.52};
                        bay = 1;
                        turret[] = {4};
                    };
                    class pylon2: pylon1 {
                        UIposition[] = {0.486, 0.46};
                        bay = 2;
                        priority = 5;
                    };
                    class pylon3: pylon1 {
                        UIposition[] = {0.486, 0.41};
                        bay = 3;
                        priority = 4;
                    };
                    class pylon4: pylon1 {
                        UIposition[] = {0.333, 0.35};
                        bay = 4;
                        priority = 3;
                    };
                    class pylon5: pylon1 {
                        UIposition[] = {0.18, 0.41};
                        bay = 5;
                        priority = 2;
                    };
                    class pylon6: pylon1 {
                        UIposition[] = {0.18, 0.46};
                        bay = 6;
                        priority = 1;
                    };
                };
                class Bays {
                    class Bay1 {
                        bayOpenTime = 3.5;
                        openBayWhenWeaponSelected = 1;
                        autoCloseWhenEmptyDelay = 0;
                    };
                    class Bay2: Bay1 {};
                    class Bay3: Bay1 {};
                    class Bay4: Bay1 {};
                    class Bay5: Bay1 {};
                    class Bay6: Bay1 {};
                };
            };
            class SensorsManagerComponent {
                class Components {
                    class PassiveRadarSensorComponent: SensorTemplatePassiveRadar {};
                };
            };
            class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                class Components: components {
                    class EmptyDisplay {
                        componentType = "EmptyDisplayComponent";
                    };
                    class CrewDisplay {
                        componentType = "CrewDisplayComponent";
                        resource = "RscCustomInfoCrew";
                    };
                };
            };
            class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                defaultDisplay = "SensorDisplay";
                class Components: components {
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
        armor = 50;
        irTarget = 1;
        irTargetSize = 1.2;
        visualTarget = 1;
        visualTargetSize = 1.6;
        radarTarget = 1;
        radarTargetSize = 1.6;
        gearUpTime = 26;
        gearDownTime = 24;
        wheelSteeringSensitivity = 2.5;
        cabinOpening = 0;
        airBrake = 0;
        lightOnGear = 1;
        driverCanEject = 0;
        class EjectionSystem {};
        landingAoa = "rad 10";
        angleOfIndicence = "rad 3";
        landingSpeed = 240;
        acceleration = 1775;
        takeoffSpeed = 290;
        altFullForce = 9000;
        altNoForce = 20000;
        maxSpeed = 920;
        slowSpeedForwardCoef = 0.6;
        aileronSensitivity = 0.35;
        elevatorSensitivity = 0.45;
        rudderInfluence = 0.015;
        aileronControlsSensitivityCoef = 1.2;
        elevatorControlsSensitivity = 1;
        rudderControlsSensitivityCoef = 0.8;
        elevatorCoef[] = {
            0,
            0.6,
            1.15,
            1.45,
            1.65,
            1.65,
            1.65,
            1.35,
            0.9,
            0.57,
            0.35,
            0.2,
            0.1,
            0,
            0,
            0
        };
        aileronCoef[] = {
            0,
            0.4,
            0.75,
            0.9,
            1,
            1,
            1,
            1,
            0.85,
            0.65,
            0.4,
            0.1,
            0,
            0,
            0,
            0
        };
        rudderCoef[] = {
            0,
            0.1,
            0.35,
            0.5,
            0.6,
            0.6,
            0.45,
            0.35,
            0.2,
            0.1,
            0,
            0,
            0,
            0,
            0,
            0
        };
        flapsFrictionCoef = 0.5;
        draconicForceXCoef = 10;
        draconicForceYCoef = 0.25;
        draconicForceZCoef = 0.1;
        draconicTorqueXCoef = 0.15;
        draconicTorqueYCoef = 0.1;
        envelope[] = {
            0.1,
            0.1,
            0.65,
            1.75,
            2.5,
            3,
            3,
            2.5,
            1.75,
            1.35,
            1,
            0.5,
            0
        };
        thrustCoef[] = {
            0.45,
            0.65,
            0.65,
            0.75,
            0.95,
            1.25,
            1.25,
            1.4,
            1.35,
            1.25,
            1.2,
            1.1,
            1,
            0.75,
            0.55,
            0
        };
        class Turrets: Turrets {
            class MainTurret: NewTurret {
                proxyindex = 1;
                isCopilot = 1;
                primaryGunner = 0;
                canEject = 0;
                body = "";
                gun = "";
                startEngine = 0;
                animationSourceBody = "";
                animationSourceGun = "";
                weapons[] = {};
                magazines[] = {};
                gunnerAction = "RHS_TU95_Pilot";
                gunnerInAction = "RHS_TU95_Pilot";
                gunnerName = "$STR_A3_COPILOT";
                gunnerGetInAction = "RHS_HIND_Cargo_Enter";
                gunnerNotSpawned = 0;
                gunnerUsesPilotView = 1;
                gunnerCompartments = "Compartment1";
                hasGunner = 1;
                memoryPointsGetInGunner = "pos driver";
                memoryPointsGetInGunnerDir = "pos driver dir";
                minElev = -50;
                maxElev = 30;
                initElev = 11;
                minTurn = -170;
                maxTurn = 170;
                initTurn = 0;
                maxHorizontalRotSpeed = 3;
                maxVerticalRotSpeed = 3;
                class ViewGunner: ViewGunner {
                    minAngleX = -65;
                    maxAngleX = 85;
                    initAngleX = 0;
                    minAngleY = -150;
                    maxAngleY = 150;
                    initAngleY = 0;
                    minFov = 0.3;
                    maxFov = 1.2;
                    initFov = 1;
                };
                commanding = -1;
                gunnerLeftHandAnimName = "copilotyoke";
                gunnerRightHandAnimName = "copilotyoke";
                gunnerLeftLegAnimName = "copilotpedal_L";
                gunnerRightLegAnimName = "copilotpedal_R";
                turretCanSee = 15;
                class Components {
                    class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                        class Components: components {
                            class EmptyDisplay {
                                componentType = "EmptyDisplayComponent";
                            };
                            class CrewDisplay {
                                componentType = "CrewDisplayComponent";
                                resource = "RscCustomInfoCrew";
                            };
                        };
                    };
                    class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                        defaultDisplay = "SensorDisplay";
                        class Components: components {
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
                class Hitpoints {};
            };
            class MainTurret2: MainTurret {
                proxyindex = 2;
                isCopilot = 0;
                showAsCargo = 1;
                primaryGunner = 0;
                gunnerName = "$STR_RHS_FLIGHTENGINEER";
                gunnerAction = "Truck_Cargo01";
                gunnerInAction = "Truck_Cargo01";
                gunnerLeftHandAnimName = "";
                gunnerRightHandAnimName = "";
                gunnerLeftLegAnimName = "";
                gunnerRightLegAnimName = "";
            };
            class MainTurret3: MainTurret2 {
                proxyindex = 3;
                gunnerName = "$STR_RHS_RADIOOPERATOR";
            };
            class MainTurret4: MainTurret2 {
                proxyindex = 4;
                gunnerName = "$STR_RHS_WEAPONSENGINEER";
                class Components {
                    class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                        class Components: components {
                            class EmptyDisplay {
                                componentType = "EmptyDisplayComponent";
                            };
                            class CrewDisplay {
                                componentType = "CrewDisplayComponent";
                                resource = "RscCustomInfoCrew";
                            };
                            class SensorDisplay {
                                componentType = "SensorsDisplayComponent";
                                resource = "RscCustomInfoSensors";
                                range[] = {3000, 8000, 16000, 35000};
                            };
                        };
                    };
                    class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                        defaultDisplay = "SensorDisplay";
                        class Components: components {
                            class EmptyDisplay {
                                componentType = "EmptyDisplayComponent";
                            };
                            class CrewDisplay {
                                componentType = "CrewDisplayComponent";
                                resource = "RscCustomInfoCrew";
                            };
                            class SensorDisplay {
                                componentType = "SensorsDisplayComponent";
                                resource = "RscCustomInfoSensors";
                                range[] = {3000, 8000, 16000, 35000};
                            };
                        };
                    };
                };
            };
            class MainTurret5: MainTurret4 {
                proxyindex = 6;
                gunnerName = "$STR_RHS_NAVIGATIONPLOTTER";
                primaryGunner = 1;
                showAsCargo = 0;
                weapons[] = {};
                magazines[] = {};
                weaponsOnUnDeploy[] = {"rhs_weap_kh55sm_Dummy_Launcher"};
                weaponsOnDeploy[] = {"rhs_weap_kh55sm_Launcher"};
                missileBeg = "missile_pos";
                missileEnd = "missile_dir";
            };
            class RearTurret: MainTurret2 {
                proxyindex = 7;
                canEject = 1;
                gunnerName = "Rear Gunner";
                memoryPointsGetInGunner = "reargunner_pos";
                memoryPointsGetInGunnerDir = "reargunner_dir";
                gunnerAction = "RHS_TU95_RearGunner";
                gunnerInAction = "RHS_TU95_RearGunner";
                gunnerLeftHandAnimName = "collimator_turret";
                gunnerRightHandAnimName = "collimator_turret";
                gunnerLeftLegAnimName = "reargunner_leg_left";
                gunnerRightLegAnimName = "reargunner_leg_right";
                gunnerCompartments = "Compartment2";
                lodTurnedIn = 1200;
                lodTurnedOut = 1200;
                lodOpticsIn = 1200;
                lodOpticsOut = 1200;
                body = "gunnerballY";
                gun = "gunnerballX";
                animationSourceBody = "rear_turret";
                animationSourceGun = "rear_gun";
                memoryPointGun[] = {"chase01", "chase02", "chase03", "chase04"};
                gunBeg = "chase01dir";
                gunEnd = "chase01";
                selectionFireAnim = "rearFlash";
                castGunnerShadow = 1;
                viewGunnerShadow = 1;
                weapons[] = {"RHS_Weap_GSh23Lx2"};
                magazines[] = {"rhs_mag_AM23_500"};
                minElev = -35;
                maxElev = 35;
                initElev = 0;
                minTurn = -245;
                maxTurn = -115;
                initTurn = -180;
                canUseScanners = 0;
                allowTabLock = 0;
                outGunnerMayFire = 1;
                stabilizedInAxes = 3;
                memoryPointGunnerOptics = "reargunnerview";
                gunnerForceOptics = 0;
                class OpticsIn {
                    class KPS53AV {
                        opticsDisplayName = "KPS53AV";
                        gunneropticsmodel = "\A3\weapons_f\reticle\optics_empty";
                        initanglex = 0;
                        initangley = 0;
                        maxanglex = 30;
                        maxangley = 100;
                        minfov = 0.275;
                        maxfov = 1.1;
                        initfov = 0.75;
                        minanglex = -30;
                        minangley = -100;
                        thermalmode[] = {0, 1};
                    };
                };
                class OpticsOut {
                    class KPS53AV {
                        gunneropticsmodel = "\A3\weapons_f\reticle\optics_empty";
                        initanglex = 0;
                        initangley = 0;
                        maxanglex = 30;
                        maxangley = 100;
                        minfov = 0.275;
                        maxfov = 1.1;
                        initfov = 0.75;
                        minanglex = -30;
                        minangley = -100;
                        thermalmode[] = {0, 1};
                        visionmode[] = {"Normal"};
                    };
                };
            };
            class MainTurret6: MainTurret2 {
                proxyindex = 5;
                gunnerName = "$STR_RHS_INSTRUCTOR";
                dontCreateAI = 1;
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_air\tu95ms\data\rhs_tu95ms_body.rvmat",
                "rhsafrf\addons\rhs_air\tu95ms\data\rhs_tu95ms_body_damage.rvmat",
                "rhsafrf\addons\rhs_air\tu95ms\data\rhs_tu95ms_destr.rvmat",
                "rhsafrf\addons\rhs_air\tu95ms\data\rhs_tu95ms_wing.rvmat",
                "rhsafrf\addons\rhs_air\tu95ms\data\rhs_tu95ms_wing_damage.rvmat",
                "rhsafrf\addons\rhs_air\tu95ms\data\rhs_tu95ms_destr.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "rhsafrf\addons\rhs_air\tu95ms\data\rhs_tu95ms_destr.rvmat"
            };
        };
        class UserActions {
            class ControlPanel {
                displayName = "$STR_RHS_ss21_control_panel";
                position = "zamerny";
                radius = 10.01;
                onlyForplayer = 0;
                condition = "(alive this)&&((call rhs_fnc_findPlayer)==(gunner this))";
                statement = "createDialog 'tu95_main_dialog'";
            };
            class crewEject {
                displayName = "Eject";
                position = "";
                radius = 52;
                priority = 1.5;
                showWindow = 0;
                onlyForplayer = 1;
                condition = "(findPlayer in this) AND (findPlayer != this turretUnit [5]) AND (this animationSourcePhase 'gear' < 0.4)";
                statement = "moveOut findPlayer";
            };
        };
        weapons[] = {};
        magazines[] = {};
        hiddenselections[] = {"i1", "i2", "i3", "n1", "n2"};
        hiddenselectionstextures[] = {
            "",
            "",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_old_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\2_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\3_ca.paa"
        };
        class textureSources {
            class Old {
                displayName = "$STR_TU95_name";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "",
                    "",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_old_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\2_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\3_ca.paa"
                };
                factions[] = {"rhs_faction_vvs"};
            };
            class standard: Old {
                displayName = "$STR_TU95_chelyabinsk_name";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_chelyabinsk_coa_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_chelyabinsk_name_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\2_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\2_ca.paa"
                };
            };
            class standard2: standard {
                displayName = "$STR_TU95_dubna_name";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_dubna_coa_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_dubna_name_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed2\2_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed2\0_ca.paa"
                };
            };
            class standard3: standard {
                displayName = "$STR_TU95_irkutsk_name";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_irkutsk_coa_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_irkutsk_name_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\0_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\1_ca.paa"
                };
            };
            class standard4: standard {
                displayName = "$STR_TU95_tambov_name";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_tambov_coa_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_tambov_name_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\2_ca.paa",
                    "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\3_ca.paa"
                };
            };
        };
        textureList[] = {};
        class Attributes {
            class rhs_decalNumber_type {
                displayName = "Define font type of side number";
                tooltip = "Define kind of font that will be drawn on vehicle";
                property = "rhs_decalNumber_type";
                control = "Combo";
                expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHSAIRTU95NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
                defaultValue = 0;
                typeName = "STRING";
                class values {
                    class AviaRed {
                        name = "Aviation Red 1";
                        value = "AviaRed";
                    };
                    class AviaRed2 {
                        name = "Aviation Red 2";
                        value = "AviaRed2";
                    };
                    class AviaRed3 {
                        name = "Aviation Red 3";
                        value = "AviaRed3";
                    };
                    class AviaRed4 {
                        name = "Aviation Red 4";
                        value = "AviaRed4";
                    };
                };
            };
            class rhs_decalNumber {
                displayName = "Set side number";
                tooltip = "Set side number. 2 numbers are required. Hides on 0";
                property = "rhs_decalNumber";
                control = "Edit";
                validate = "Number";
                defaultValue = "-1";
                expression = "if(parseNumber _value >= 0)then{if(parseNumber _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRTU95NumberPlaces}else{[_this, [['Number', cRHSAIRTU95NumberPlaces, _this getVariable ['rhs_decalNumber_type','AviaBlue'],parseNumber _value] ] ] call rhs_fnc_decalsInit}};";
            };
            class rhs_decalNames {
                displayName = "Define City Names Art";
                tooltip = "Define City Names texture located on side under the cockpit. Appears on both sides";
                property = "rhs_decalNoseArt";
                control = "Combo";
                expression = "if(_value >= 0)then{ [_this, [ [ 'Label', cRHSAIRTU95NamePlaces, 'AviationsSquadrons',_value] ] ] call rhs_fnc_decalsInit};";
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
                    };
                };
            };
            class rhs_decalCoA {
                displayName = "Define City Coat of Arms Art";
                tooltip = "Define City Coat of Arms texture located on nose. Appears on both sides";
                property = "rhs_decalNoseArt";
                control = "Combo";
                expression = "if(_value >= 0)then{ [_this, [ [ 'Label', cRHSAIRTU95COAPlaces, 'AviationsSquadrons',_value] ] ] call rhs_fnc_decalsInit};";
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
                    };
                };
            };
            class rhs_decalStarArt: rhs_decalCoA {
                displayName = "Define Stars Art";
                tooltip = "Define Stars Art texture located on wings";
                property = "rhs_decalStarArt";
                expression = "if(_value >= 0)then{ [_this, [ [ 'Label', cRHSAIRTU95StarPlaces, 'Aviation',_value] ] ] call rhs_fnc_decalsInit};";
                class values {
                    class Random {
                        name = "Random";
                        value = -1;
                        defaultValue = -1;
                    };
                    class Empty {
                        name = "Empty";
                        value = 0;
                    };
                    class New {
                        name = "New type star";
                        value = 1;
                    };
                    class Old {
                        name = "Old type star";
                        value = 2;
                    };
                };
            };
            class bbcpoccnn_decals1_hide {
                displayName = "Remove Part One of VVS Decal";
                property = "bbcpoccnn_decals1_hide";
                control = "CheckboxNumber";
                expression = "_this animate ['bbcpoccnn_decals1_hide',_value,true]";
                defaultValue = "1";
            };
            class bbcpoccnn_decals2_hide {
                displayName = "Remove Part Two of VVS Decal";
                property = "bbcpoccnn_decals2_hide";
                control = "CheckboxNumber";
                expression = "_this animate ['bbcpoccnn_decals2_hide',_value,true]";
                defaultValue = "1";
            };
            class rf_decals_hide: bbcpoccnn_decals2_hide {
                displayName = "Remove RF- Decal";
                property = "rf_decals_hide";
                expression = "_this animate ['rf_decals_hide',_value,true]";
                defaultValue = "1";
            };
        };
        class HitPoints: HitPoints {
            class HitHull: HitHull {
                armor = 3;
                explosionShielding = 5;
                name = "HitHull";
                passThrough = 0.5;
                visual = "hull_hit";
                radius = 0.3;
                minimalHit = 0.02;
                depends = "Total";
                material = -1;
            };
            class HitEngine_1: HitHull {
                armor = 1.5;
                explosionShielding = 2;
                name = "engine_1_hit";
                passThrough = 0.5;
                visual = "engine_1_vis";
                radius = 0.55;
                minimalHit = 0.1;
            };
            class HitEngine_2: HitHull {
                armor = 1.5;
                explosionShielding = 2;
                name = "engine_2_hit";
                passThrough = 0.5;
                visual = "engine_2_vis";
                radius = 0.55;
                minimalHit = 0.1;
            };
            class HitEngine: HitHull {
                armor = 1.5;
                explosionShielding = 2;
                name = "engine_1_hit";
                passThrough = 0.5;
                visual = "-";
                radius = 0.55;
                minimalHit = 0.1;
                depends = "(HitEngine_1 + HitEngine_2)*0.5";
            };
            class HitEngine_3: HitHull {
                armor = 1.5;
                explosionShielding = 2;
                name = "engine_3_hit";
                passThrough = 0.5;
                visual = "engine_3_vis";
                radius = 0.55;
                minimalHit = 0.1;
            };
            class HitEngine_4: HitHull {
                armor = 1.5;
                explosionShielding = 2;
                name = "engine_4_hit";
                passThrough = 0.5;
                visual = "engine_4_vis";
                radius = 0.55;
                minimalHit = 0.1;
            };
            class HitEngine2: HitEngine {
                armor = 1.5;
                explosionShielding = 2;
                name = "engine_2_hit";
                passThrough = 0.5;
                visual = "-";
                radius = 0.55;
                minimalHit = 0.1;
                depends = "(HitEngine_3 + HitEngine_4)*0.5";
            };
            class HitAvionics: HitHull {
                armor = 3;
                explosionShielding = 1;
                name = "HitAvionics";
                passThrough = 0.2;
                visual = "-";
                radius = 0.2;
            };
            class HitAmmo: HitHull {
                armor = 3;
                explosionShielding = 1;
                name = "revolver_hit";
                passThrough = 0;
                visual = "-";
                radius = 0.3;
            };
            class HitFuel: HitHull {
                armor = 3;
                explosionShielding = 4;
                name = "fuel_central";
                passThrough = 0.5;
                visual = "-";
                radius = 0.3;
                minimalHit = 0.1;
            };
            class HitFuel_left_wing: HitFuel {
                name = "fuel_left_wing";
                visual = "Aileron_1";
            };
            class HitFuel_right_wing: HitFuel {
                name = "fuel_right_wing";
                visual = "Aileron_2";
            };
            class HitFuel2: HitFuel {
                armor = 3;
                explosionShielding = 4;
                name = "fuel_central";
                passThrough = 0.5;
                visual = "-";
                radius = 0.3;
                minimalHit = 0.1;
                depends = "(HitFuel_left_wing + HitFuel_right_wing)*0.5";
            };
            class HitLAileron: HitHull {
                armor = 1.5;
                explosionShielding = 3;
                name = "HitLAileron";
                passThrough = 0.1;
                visual = "Aileron_1";
                radius = 0.2;
                minimalHit = 0.1;
            };
            class HitRAileron: HitLAileron {
                armor = 1.5;
                explosionShielding = 3;
                name = "HitRAileron";
                passThrough = 0.1;
                visual = "Aileron_2";
                radius = 0.2;
                minimalHit = 0.1;
            };
            class HitLCRudder: HitHull {
                armor = 1.5;
                explosionShielding = 3;
                name = "HitRudder";
                passThrough = 0.1;
                visual = "Rudder_1_vis";
                radius = 0.2;
                minimalHit = 0.1;
            };
            class HitLCElevator: HitHull {
                armor = 1.5;
                explosionShielding = 3;
                name = "HitLCElevator";
                passThrough = 0.1;
                visual = "Elevator_1_vis";
                radius = 0.2;
                minimalHit = 0.1;
            };
            class HitRElevator: HitLCElevator {
                armor = 1.5;
                explosionShielding = 3;
                name = "HitRElevator";
                passThrough = 0.1;
                visual = "Elevator_2_vis";
                radius = 0.2;
                minimalHit = 0.1;
            };
        };
        extCameraPosition[] = {0, 5, -65};
        unitInfoType = "RHS_RscUnitInfoAirPlane";
        driverCompartments = "Compartment1";
        maxOmega = 2000;
        engineMOI = 90;
        class Wheels {
            disableWheelsWhenDestroyed = 1;
            class Wheel_1 {
                side = "left";
                boneName = "Wheel_1_damper_land";
                center = "Wheel_1_center";
                boundary = "Wheel_1_rim";
                suspForceAppPointOffset = "Wheel_1_center";
                tireForceAppPointOffset = "Wheel_1_center";
                suspTravelDirection[] = {0, -1, 0};
                steering = 1;
                width = 0.83;
                mass = 150;
                MOI = 15.2551;
                dampingRate = 0.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 21500;
                maxHandBrakeTorque = 0;
                maxCompression = 0.09;
                maxDroop = 0.11;
                sprungMass = 3200;
                springStrength = 16600;
                springDamperRate = 12569.6;
                longitudinalStiffnessPerUnitGravity = 5000;
                latStiffX = 25;
                latStiffY = 180;
                frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1, 1}};
            };
            class Wheel_1_fake: Wheel_1 {};
            class Wheel_2: Wheel_1 {
                boneName = "Wheel_2_damper_land";
                suspForceAppPointOffset = "Wheel_2_center";
                tireForceAppPointOffset = "Wheel_2_center";
                center = "Wheel_2_center";
                boundary = "Wheel_2_rim";
                MOI = 25.0563;
                steering = 0;
                width = 1.2;
                maxCompression = 0.25;
                maxDroop = 0.06;
                sprungMass = 34200;
                springStrength = 261000;
                springDamperRate = 9000;
            };
            class Wheel_3: Wheel_2 {
                boneName = "Wheel_2_damper_land";
                center = "Wheel_3_center";
                boundary = "Wheel_3_rim";
                suspForceAppPointOffset = "Wheel_3_center";
                tireForceAppPointOffset = "Wheel_3_center";
            };
            class Wheel_4: Wheel_2 {
                side = "Wheel_4_damper_land";
                boneName = "Wheel_4";
                center = "Wheel_4_center";
                boundary = "Wheel_4_rim";
                suspForceAppPointOffset = "Wheel_4_center";
                tireForceAppPointOffset = "Wheel_4_center";
            };
            class Wheel_5: Wheel_4 {
                boneName = "Wheel_5_damper_land";
                center = "Wheel_5_center";
                boundary = "Wheel_5_rim";
                suspForceAppPointOffset = "Wheel_5_center";
                tireForceAppPointOffset = "Wheel_5_center";
            };
        };
        driveOnComponent[] = {};
        class Exhausts {
            class Exhaust1 {
                position = "exhaust1";
                direction = "exhaust1_dir";
                effect = "ExhaustsEffectPlaneBig";
            };
            class Exhaust2 {
                position = "exhaust2";
                direction = "exhaust2_dir";
                effect = "ExhaustsEffectPlaneBig";
            };
            class Exhaust3 {
                position = "exhaust3";
                direction = "exhaust3_dir";
                effect = "ExhaustsEffectPlaneBig";
            };
            class Exhaust4 {
                position = "exhaust4";
                direction = "exhaust4_dir";
                effect = "ExhaustsEffectPlaneBig";
            };
        };
        class Reflectors {
            class Left {
                color[] = {7000, 7500, 10000, 1};
                ambient[] = {100, 100, 100};
                position = "gearlight_1_pos";
                selection = "gearlight_1_sel";
                direction = "gearlight_1_dir";
                hitpoint = "l svetlo";
                innerAngle = 20;
                outerAngle = 60;
                coneFadeCoef = 10;
                intensity = 50;
                useFlare = 1;
                dayLight = 0;
                FlareSize = 2;
                size = 1;
                class Attenuation {
                    constant = 0;
                    linear = 0;
                    quadratic = 4;
                    start = 1;
                    hardLimitStart = 150;
                    hardLimitEnd = 300;
                };
            };
            class Left_Flare: Left {
                innerAngle = 20;
                outerAngle = 178;
            };
            class Right: Left {
                position = "gearlight_2_pos";
                selection = "gearlight_2_sel";
                direction = "gearlight_2_dir";
                hitpoint = "p svetlo";
            };
            class Right_Flare: Right {
                innerAngle = 20;
                outerAngle = 178;
            };
            class Center: Left {
                position = "gearlight_3_pos";
                selection = "gearlight_3_sel";
                direction = "gearlight_3_dir";
                hitpoint = "svetlo";
            };
            class Center_Flare: Center {
                innerAngle = 20;
                outerAngle = 178;
            };
        };
        aggregateReflectors[] = {{"Left", "Left_Flare", "Right", "Right_Flare", "Center", "Center_Flare"}};
        class MarkerLights {
            class PositionRed1 {
                color[] = {0.8, 0, 0};
                ambient[] = {0.08, 0, 0};
                intensity = 750;
                name = "PositionLight_red_1_pos";
                drawLight = 2.5;
                drawLightSize = 0.35;
                drawLightCenterSize = 0.14;
                activeLight = 0;
                blinking = 0;
                dayLight = 0;
                useFlare = 0;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 25;
                    quadratic = 50;
                    hardLimitStart = 0.75;
                    hardLimitEnd = 1;
                };
            };
            class PositionRed2: PositionRed1 {
                name = "PositionLight_red_2_pos";
            };
            class PositionGreen1: PositionRed1 {
                color[] = {0, 0.8, 0};
                ambient[] = {0, 0.08, 0};
                name = "PositionLight_green_1_pos";
            };
            class PositionGreen2: PositionGreen1 {
                name = "PositionLight_green_2_pos";
            };
            class PositionWhite1: PositionGreen2 {
                color[] = {1, 1, 1};
                ambient[] = {0.1, 0.1, 0.1};
                name = "PositionLight_white_1_pos";
            };
            class PositionWhite2: PositionWhite1 {
                name = "PositionLight_white_2_pos";
            };
            class CollisionWhite1: PositionRed1 {
                color[] = {1, 1, 1};
                ambient[] = {0.1, 0.1, 0.1};
                name = "CollisionLight_white_1_pos";
                blinking = 1;
                blinkingPattern[] = {0.1, 0.9};
                blinkingPatternGuarantee = 0;
                drawLightSize = 1.5;
                drawLightCenterSize = 0.7;
            };
            class CollisionWhite2: CollisionWhite1 {
                name = "CollisionLight_white_2_pos";
            };
        };
        class AnimationSources {
            class Damper_1_source {
                source = "damper";
                wheel = "Wheel_1";
            };
            class Damper_2_source {
                source = "damper";
                wheel = "Wheel_2";
            };
            class Damper_3_source {
                source = "damper";
                wheel = "Wheel_3";
            };
            class Damper_4_source {
                source = "damper";
                wheel = "Wheel_4";
            };
            class Damper_5_source {
                source = "damper";
                wheel = "Wheel_5";
            };
            class Damper_6_source {
                source = "damper";
                wheel = "Wheel_6";
            };
            class muzzle_hide_hmg {
                weapon = "RHS_Weap_GSh23Lx2";
                source = "reload";
            };
            class muzzle_rot_hmg {
                weapon = "RHS_Weap_GSh23Lx2";
                source = "ammorandom";
            };
            class missilebay {
                source = "door";
                initPhase = 1;
                animPeriod = 5;
                sound = "ServoRampSound_2";
                soundPosition = "missile_pos";
            };
            class missile_revolver {
                weapon = "rhs_weap_kh55sm_Launcher";
                source = "revolving";
            };
            class reload_source: missile_revolver {
                source = "reload";
            };
            class lader_source {
                source = "user";
                initPhase = 0;
                animPeriod = 0.001;
                mass = 1;
                displayName = "hide lader";
                onPhaseChanged = "(_this select 0) animateSource ['lader_source',(_this select 1)];";
            };
            class bbcpoccnn_decals1_hide {
                source = "user";
                initPhase = 1;
                animPeriod = 0.001;
                mass = 1;
                displayName = "hide vvs decal 1";
            };
            class bbcpoccnn_decals2_hide: bbcpoccnn_decals1_hide {
                displayName = "hide vvs decal 2";
            };
            class rf_decals_hide: bbcpoccnn_decals1_hide {
                displayName = "hide rf decal";
            };
        };
        class TransportBackpacks {
            class _xx_B_Parachute {
                backpack = "rhs_d6_Parachute_backpack";
                count = 8;
            };
        };
        class RenderTargets {};
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this call rhs_fnc_air_init;";
                postInit = "_this call rhs_fnc_reapplyTextures";
                engine = "[_this select 0,_this select 1,10] call rhs_fnc_engineStartupDelay";
            };
        };
    };
    class RHS_TU95MS_vvs_old: RHS_TU95MS_base {
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        side = 0;
        vehicleClass = "rhs_vehclass_aircraft";
        editorSubcategory = "EdSubcat_Planes";
        rhs_decalParameters[] = {};
        displayName = "$STR_TU95_name";
        faction = "rhs_faction_vvs";
        dlc = "RHS_AFRF";
        hiddenselectionstextures[] = {
            "",
            "",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_old_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\2_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\3_ca.paa"
        };
        class AnimationSources: AnimationSources {
            class bbcpoccnn_decals1_hide: bbcpoccnn_decals1_hide {
                initPhase = 1;
            };
            class bbcpoccnn_decals2_hide: bbcpoccnn_decals2_hide {
                initPhase = 1;
            };
            class rf_decals_hide: rf_decals_hide {
                initPhase = 1;
            };
        };
    };
    class RHS_TU95MS_vvs_dubna: RHS_TU95MS_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\RHS_TU95MS_vvs_dubna.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        side = 0;
        vehicleClass = "rhs_vehclass_aircraft";
        editorSubcategory = "EdSubcat_Planes";
        rhs_decalParameters[] = {};
        displayName = "$STR_TU95_dubna_name";
        faction = "rhs_faction_vvs";
        dlc = "RHS_AFRF";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_dubna_coa_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_dubna_name_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed2\2_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed2\0_ca.paa"
        };
        class AnimationSources: AnimationSources {
            class bbcpoccnn_decals1_hide: bbcpoccnn_decals1_hide {
                initPhase = 0;
            };
            class bbcpoccnn_decals2_hide: bbcpoccnn_decals2_hide {
                initPhase = 0;
            };
            class rf_decals_hide: rf_decals_hide {
                initPhase = 0;
            };
        };
    };
    class RHS_TU95MS_vvs_irkutsk: RHS_TU95MS_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\RHS_TU95MS_vvs_irkutsk.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        side = 0;
        vehicleClass = "rhs_vehclass_aircraft";
        editorSubcategory = "EdSubcat_Planes";
        displayName = "$STR_TU95_irkutsk_name";
        faction = "rhs_faction_vvs";
        dlc = "RHS_AFRF";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_irkutsk_coa_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_irkutsk_name_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\0_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\1_ca.paa"
        };
    };
    class RHS_TU95MS_vvs_tambov: RHS_TU95MS_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\RHS_TU95MS_vvs_tambov.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        side = 0;
        vehicleClass = "rhs_vehclass_aircraft";
        editorSubcategory = "EdSubcat_Planes";
        displayName = "$STR_TU95_tambov_name";
        faction = "rhs_faction_vvs";
        dlc = "RHS_AFRF";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_tambov_coa_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_tambov_name_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\2_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\3_ca.paa"
        };
    };
    class RHS_TU95MS_vvs_chelyabinsk: RHS_TU95MS_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\RHS_TU95MS_vvs_chelyabinsk.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        side = 0;
        vehicleClass = "rhs_vehclass_aircraft";
        editorSubcategory = "EdSubcat_Planes";
        displayName = "$STR_TU95_chelyabinsk_name";
        faction = "rhs_faction_vvs";
        dlc = "RHS_AFRF";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_chelyabinsk_coa_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Tu95\rhs_decal_chelyabinsk_name_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Labels\Aviation\star_new_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\2_ca.paa",
            "\rhsafrf\addons\rhs_decals\Data\Numbers\AviaRed4\2_ca.paa"
        };
    };
    class Land_rhs_tu95_wreck: Wreck_base_F {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\Land_rhs_tu95_wreck.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tu-95MS6 Wreck";
        class Armory {
            disabled = 1;
        };
        model = "\rhsafrf\addons\rhs_air\tu95ms\rhs_tu95_wreck";
        icon = "iconObject_1x2";
        mapSize = 30.04;
        editorSubcategory = "EdSubcat_Planes";
    };
    class rhs_flightrecorder_assembled: ThingX {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_flightrecorder_assembled.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        displayName = "Plane flight recorder (assembled)";
        model = "\rhsafrf\addons\rhs_air\misc\rhs_flightrecorder.p3d";
        mapSize = 1.4;
        icon = "iconObject_1x1";
        editorCategory = "EdCat_Things";
        editorSubcategory = "EdSubcat_Intel";
        vehicleCategory = "Interactive_F";
        vehicleClass = "Intel";
        destrType = "DestructNo";
        cost = 100;
        class AnimationSources {
            class recorder_action {
                source = "user";
                initPhase = 0;
                animPeriod = 1.2;
            };
        };
        class UserActions {
            class takeItem {
                displayName = "Take flight recorder";
                position = "";
                radius = 2;
                showWindow = 1;
                condition = "alive this && (this animationSourcePhase 'recorder_action' isEqualTo 0)";
                statement = "this spawn {_this animateSource ['recorder_action',1];sleep 1.2;private _n = 'rhs_flightrecorder' createVehicle [0,0,0];_n setpos ((getpos _this) vectorAdd [0,0.2,0.1]);_n setdir getdir _this;_n setVelocity [0.5,0.5,0]}";
                onlyForPlayer = 1;
            };
            class restoreItem: takeItem {
                displayName = "Put flight recorder";
                condition = "alive this && (this animationSourcePhase 'recorder_action' isEqualTo 1) && ('rhs_item_flightrecorder' in (items player))";
                statement = "this animateSource ['recorder_action',0];player removeItem 'rhs_item_flightrecorder'";
            };
        };
    };
    class Item_Base_F;
    class rhs_flightrecorder: ThingX {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_flightrecorder.paa";
        scope = 2;
        scopeCurator = 2;
        displayName = "Plane flight recorder";
        author = "$STR_RHS_AUTHOR_FULL";
        editorCategory = "EdCat_Things";
        editorSubcategory = "EdSubcat_Intel";
        vehicleCategory = "Interactive_F";
        vehicleClass = "Intel";
        model = "\rhsafrf\addons\rhs_air\misc\rhs_flightrecorder_holder.p3d";
        forceSupply = 1;
        showWeaponCargo = 1;
        transportMaxMagazines = 1000000000;
        transportMaxWeapons = 1000000000;
        isGround = 1;
        class TransportItems {
            class rhs_item_flightrecorder {
                name = "rhs_item_flightrecorder";
                count = 1;
            };
        };
    };
};
