class CfgPatches {
    class rhs_main {
        units[] = {
            "rhs_Flag_Russia_F",
            "rhs_Flag_vdv_F",
            "rhs_Flag_vmf_F",
            "rhs_Flag_che_F",
            "rhs_Flag_trn_F",
            "rhs_Flag_ose_F",
            "rhs_Flag_abk_F",
            "rhs_Flag_dnr_F",
            "rhs_Flag_lnr_F"
        };
        weapons[] = {};
        requiredVersion = 1.78;
        requiredAddons[] = {"A3_Data_F_Oldman_Loadorder"};
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
        authorUrl = "http://www.rhsmods.org/";
        versionDesc = "RHS";
        text = "QUOTE(RHS0.3.8.1359)";
    };
};
class CfgMods {
    class Mod_Base;
    class RHS_AFRF: Mod_Base {
        author = "$STR_RHS_AUTHOR_FULL";
        picture = "\rhsafrf\addons\rhs_main\data\rhs_logo_ca.paa";
        logo = "\rhsafrf\addons\rhs_main\data\rhs_logo_ca.paa";
        logoOver = "\rhsafrf\addons\rhs_main\data\rhs_logo_ca.paa";
        logoSmall = "\rhsafrf\addons\rhs_main\data\rhs_logo_ca.paa";
        dlcColor[] = {0, 0, 0, 1};
        fieldManualTopicAndHint[] = {"RHS_AFRF", "RHS_AFRF_MAIN"};
        hideName = 1;
        hidePicture = 0;
        tooltip = "RHS: AFRF";
        tooltipOwned = "RHS: AFRF";
        name = "RHS: Armed Forces of the Russian Federation";
        overview = "Armed Forces of the Russian Federation brought to Arma 3 in full glory!";
        action = "http://www.rhsmods.org/";
        dir = "rhsafrf";
    };
    class RHSAFRF: RHS_AFRF {};
    class RHSAFRFDEV: RHS_AFRF {
        picture = "\rhsafrf\addons\rhs_main\data\rhsdev_logo_ca.paa";
        logo = "\rhsafrf\addons\rhs_main\data\rhsdev_logo_ca.paa";
        logoOver = "\rhsafrf\addons\rhs_main\data\rhsdev_logo_ca.paa";
        logoSmall = "\rhsafrf\addons\rhs_main\data\rhsdev_logo_ca.paa";
        tooltip = "RHS: AFRF Development Version";
        tooltipOwned = "RHS: AFRF Development Version";
        name = "RHS: Armed Forces of the Russian Federation [Development Version]";
        overview = "Development version, please report bugs to http://feedback.rhsmods.org/view_all_bug_page.php";
    };
};
class CfgVideoOptions {
    class PiP {
        class 6000_meters {
            text = "6000m";
            value = 6000;
        };
        class 8000_meters {
            text = "8000m";
            value = 8000;
        };
        class 12000_meters {
            text = "12000m";
            value = 12000;
        };
    };
};
class CfgAddons {
    class PreloadAddons {
        class RHS_AFRF {
            list[] = {
                "rhs_main",
                "rhs_air",
                "rhs_aps",
                "rhs_decals",
                "rhs_sounds",
                "rhs_c_weaponsounds",
                "rhs_weapon_sounds",
                "rhs_c_vehiclesounds",
                "rhs_c_troops",
                "rhs_c_cars",
                "rhs_c_a2port_car",
                "rhs_c_kamaz",
                "rhs_c_zil131",
                "rhs_c_heavyweapons",
                "rhs_c_identity",
                "rhs_c_radars",
                "rhs_c_weapons",
                "rhs_c_airweapons",
                "rhs_c_a2port_air",
                "rhs_c_air",
                "rhs_c_mi28",
                "rhs_c_mig29",
                "rhs_c_radio",
                "rhs_c_trucks",
                "rhs_c_2s1",
                "rhs_c_2s3",
                "rhs_c_a3retex",
                "rhs_c_bmd",
                "rhs_c_bmd_camo",
                "rhs_c_bmp3",
                "rhs_c_bmp",
                "rhs_c_btr",
                "rhs_c_pts",
                "rhs_c_rva",
                "rhs_c_sprut",
                "rhs_c_t72",
                "rhs_c_tanks",
                "rhs_c_a2port_armor",
                "rhs_c_btr70_camo",
                "rhs_c_kraz255",
                "rhs_c_pontoon",
                "rhs_c_bmk_t",
                "rhs_c_t14",
                "rhs_c_2s1"
            };
        };
    };
};
class cfgScriptPaths {
    RHS_Main = "\rhsafrf\addons\rhs_main\scripts\";
};
class RscListBox;
class RscListNBox;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscText;
class RscPicture;
class RscActiveText;
class RscCombo;
class RscProgress;
class RscButton;
class RscButtonMenu;
class RscObject;
class RscStandardDisplay;
class RscStructuredText;
class RscControlsGroupNoScrollbars;
class RscHTML;
class RscEdit;
class RscTitle;
class RscVignette;
class RscFrame;
class RscControlsGroupNoHScrollbars;
class RscControlsGroup;
class RscIGProgress;
class RscHitZones;
class RscIGUIValue;
class RscIGUIText;
class RscPictureKeepAspect;
class RscUnitInfo;
class VScrollbar;
class HScrollbar;
class RscOpticsValue;
class RscOpticsText;
class RscLadderPicture;
class Attributes;
class RscDisplayGetReady;
class IGUIBack;
class CA_Title;
class ScrollBar;
class RscDisplayGarage;
class RHS_RscDisplayGarage: RscDisplayGarage {
    idd = -1;
    enableSimulation = 1;
    scriptName = "RHS_RscDisplayGarage";
    scriptPath = "RHS_Main";
    onLoad = "['onLoad',_this,'RHS_RscDisplayGarage','GUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay')";
    onUnload = "['onUnload',_this,'RHS_RscDisplayGarage','GUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay')";
};
class RscDisplayMain: RscStandardDisplay {
    onLoad = "_this call compile preprocessfilelinenumbers '\rhsafrf\addons\rhs_main\scripts\handleWelcomeScreen.sqf'";
};
class rhs_rscWelcomeScreen {
    idd = -1;
    onLoad = "['onLoad',[(_this select 0),'showWelcome'],'welcomeScreen','RHS_Main'] call  (uinamespace getvariable 'BIS_fnc_initDisplay')";
    class controlsBackground {
        class Vignette: RscVignette {
            idc = 114998;
        };
        class TileGroup: RscControlsGroupNoScrollbars {
            idc = 115099;
            x = "safezoneX";
            y = "safezoneY";
            w = "safezoneW";
            h = "safezoneH";
            disableCustomColors = 1;
            class Controls {
                class TileFrame: RscFrame {
                    idc = 114999;
                    x = 0;
                    y = 0;
                    w = "safezoneW";
                    h = "safezoneH";
                    colortext[] = {0, 0, 0, 1};
                };
                class Tile_0_0: RscText {
                    idc = 115000;
                    x = "(0 * 1/6) * safezoneW";
                    y = "(0 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_0_1: RscText {
                    idc = 115001;
                    x = "(0 * 1/6) * safezoneW";
                    y = "(1 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_0_2: RscText {
                    idc = 115002;
                    x = "(0 * 1/6) * safezoneW";
                    y = "(2 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_0_3: RscText {
                    idc = 115003;
                    x = "(0 * 1/6) * safezoneW";
                    y = "(3 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_0_4: RscText {
                    idc = 115004;
                    x = "(0 * 1/6) * safezoneW";
                    y = "(4 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_0_5: RscText {
                    idc = 115005;
                    x = "(0 * 1/6) * safezoneW";
                    y = "(5 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_1_0: RscText {
                    idc = 115010;
                    x = "(1 * 1/6) * safezoneW";
                    y = "(0 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_1_1: RscText {
                    idc = 115011;
                    x = "(1 * 1/6) * safezoneW";
                    y = "(1 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_1_2: RscText {
                    idc = 115012;
                    x = "(1 * 1/6) * safezoneW";
                    y = "(2 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_1_3: RscText {
                    idc = 115013;
                    x = "(1 * 1/6) * safezoneW";
                    y = "(3 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_1_4: RscText {
                    idc = 115014;
                    x = "(1 * 1/6) * safezoneW";
                    y = "(4 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_1_5: RscText {
                    idc = 115015;
                    x = "(1 * 1/6) * safezoneW";
                    y = "(5 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_2_0: RscText {
                    idc = 115020;
                    x = "(2 * 1/6) * safezoneW";
                    y = "(0 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_2_1: RscText {
                    idc = 115021;
                    x = "(2 * 1/6) * safezoneW";
                    y = "(1 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_2_2: RscText {
                    idc = 115022;
                    x = "(2 * 1/6) * safezoneW";
                    y = "(2 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_2_3: RscText {
                    idc = 115023;
                    x = "(2 * 1/6) * safezoneW";
                    y = "(3 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_2_4: RscText {
                    idc = 115024;
                    x = "(2 * 1/6) * safezoneW";
                    y = "(4 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_2_5: RscText {
                    idc = 115025;
                    x = "(2 * 1/6) * safezoneW";
                    y = "(5 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_3_0: RscText {
                    idc = 115030;
                    x = "(3 * 1/6) * safezoneW";
                    y = "(0 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_3_1: RscText {
                    idc = 115031;
                    x = "(3 * 1/6) * safezoneW";
                    y = "(1 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_3_2: RscText {
                    idc = 115032;
                    x = "(3 * 1/6) * safezoneW";
                    y = "(2 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_3_3: RscText {
                    idc = 115033;
                    x = "(3 * 1/6) * safezoneW";
                    y = "(3 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_3_4: RscText {
                    idc = 115034;
                    x = "(3 * 1/6) * safezoneW";
                    y = "(4 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_3_5: RscText {
                    idc = 115035;
                    x = "(3 * 1/6) * safezoneW";
                    y = "(5 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_4_0: RscText {
                    idc = 115040;
                    x = "(4 * 1/6) * safezoneW";
                    y = "(0 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_4_1: RscText {
                    idc = 115041;
                    x = "(4 * 1/6) * safezoneW";
                    y = "(1 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_4_2: RscText {
                    idc = 115042;
                    x = "(4 * 1/6) * safezoneW";
                    y = "(2 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_4_3: RscText {
                    idc = 115043;
                    x = "(4 * 1/6) * safezoneW";
                    y = "(3 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_4_4: RscText {
                    idc = 115044;
                    x = "(4 * 1/6) * safezoneW";
                    y = "(4 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_4_5: RscText {
                    idc = 115045;
                    x = "(4 * 1/6) * safezoneW";
                    y = "(5 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_5_0: RscText {
                    idc = 115050;
                    x = "(5 * 1/6) * safezoneW";
                    y = "(0 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_5_1: RscText {
                    idc = 115051;
                    x = "(5 * 1/6) * safezoneW";
                    y = "(1 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_5_2: RscText {
                    idc = 115052;
                    x = "(5 * 1/6) * safezoneW";
                    y = "(2 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_5_3: RscText {
                    idc = 115053;
                    x = "(5 * 1/6) * safezoneW";
                    y = "(3 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_5_4: RscText {
                    idc = 115054;
                    x = "(5 * 1/6) * safezoneW";
                    y = "(4 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
                class Tile_5_5: RscText {
                    idc = 115055;
                    x = "(5 * 1/6) * safezoneW";
                    y = "(5 * 1/6) * safezoneH";
                    w = "1/6 * safezoneW";
                    h = "1/6 * safezoneH";
                    colorBackground[] = {0, 0, 0, 0.1};
                };
            };
        };
        class TitleBackground: RscText {
            colorBackground[] = {
                "(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
                "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
                "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
                "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"
            };
            idc = 1080;
            x = "1 *      (   ((safezoneW / safezoneH) min 1.2) / 40) +   (safezoneX + (safezoneW -      ((safezoneW / safezoneH) min 1.2))/2)";
            y = "1 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +   (safezoneY + (safezoneH -      (   ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
            w = "38 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
            h = "1 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class RightBackground: RscText {
            colorBackground[] = {0, 0, 0, 0.7};
            idc = 1081;
            x = "1 *      (   ((safezoneW / safezoneH) min 1.2) / 40) +   (safezoneX + (safezoneW -      ((safezoneW / safezoneH) min 1.2))/2)";
            y = "2.1 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +   (safezoneY + (safezoneH -      (   ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
            w = "38 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
            h = "20.8 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
    };
    class controls {
        class Title: RscTitle {
            style = 0;
            idc = 1000;
            text = "Red Hammer Studios: Escalation";
            x = "1 *      (   ((safezoneW / safezoneH) min 1.2) / 40) +   (safezoneX + (safezoneW -      ((safezoneW / safezoneH) min 1.2))/2)";
            y = "1 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +   (safezoneY + (safezoneH -      (   ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
            w = "38 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
            h = "1 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class ButtonContinue: RscButtonMenuOK {
            text = "$STR_A3_RscDisplayWelcome_ButtonContinue";
            x = "32.75 *      (   ((safezoneW / safezoneH) min 1.2) / 40) +   (safezoneX + (safezoneW -      ((safezoneW / safezoneH) min 1.2))/2)";
            y = "23 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +   (safezoneY + (safezoneH -      (   ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
            w = "6.25 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
            h = "1 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class MainControlsGroup: RscControlsGroupNoHScrollbars {
            idc = 2300;
            x = "1 *      (   ((safezoneW / safezoneH) min 1.2) / 40) +   (safezoneX + (safezoneW -      ((safezoneW / safezoneH) min 1.2))/2)";
            y = "2.1 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +   (safezoneY + (safezoneH -      (   ((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
            w = "38 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
            h = "20.8 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            class controls {
                class WelcomeStructuredText: RscStructuredText {
                    idc = 1100;
                    x = "0.5 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
                    y = "0 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    w = "37 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
                    h = "7.3 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                };
            };
        };
    };
};
class RscShortcutButton;
class RHS_Options_Button: RscShortcutButton {
    default = 0;
    idc = -1;
    type = 16;
    style = "0x02 + 0xC0";
    text = "RHS - Game Options";
    action = "(findDisplay 49) closeDisplay 0; 0 spawn {_n=  createDialog 'RHS_Options_Menu';0 spawn rhs_fnc_menuOptions;};";
    class ShortcutPos {
        left = 0;
        top = 0;
        w = 0;
        h = 0;
    };
    class TextPos {
        left = 0.01;
        top = 0;
        right = 0;
        bottom = 0;
    };
    animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
    animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
    animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
    animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
    animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
    animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
    color2[] = {0, 0, 0, 1};
    color[] = {1, 1, 1, 1};
    colorBackground[] = {
        "(profilenamespace getvariable ['GUI_BCG_RGB_R',1])",
        "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.647])",
        "(profilenamespace getvariable ['GUI_BCG_RGB_B',0])",
        "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.5])"
    };
    colorBackground2[] = {
        "(profilenamespace getvariable ['GUI_BCG_RGB_R',1])",
        "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.647])",
        "(profilenamespace getvariable ['GUI_BCG_RGB_B',0])",
        "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.5])"
    };
    colorBackgroundFocused[] = {1, 1, 1, 0};
    colorDisabled[] = {1, 1, 1, 0.25};
    colorFocused[] = {0, 0, 0, 1};
    colorText[] = {1, 1, 1, 1};
    period = 1.2;
    periodFocus = 1.2;
    periodOver = 1.2;
    tooltip = "Configure Various RHS Options";
    tooltipColorBox[] = {1, 1, 1, 1};
    tooltipColorShade[] = {0, 0, 0, 0.65};
    tooltipColorText[] = {1, 1, 1, 1};
    x = "1 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX)";
    y = "0.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +  (safezoneY + safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))";
    w = "15 * (((safezoneW / safezoneH) min 1.2) / 40)";
    h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
};
class RscDisplayMPInterrupt: RscStandardDisplay {
    class controls {
        class RHS_Options: RHs_Options_Button {};
    };
};
class RscDisplayInterrupt: RscStandardDisplay {
    class controls {
        class RHS_Options: RHs_Options_Button {};
    };
};
class RscDisplayInterruptEditor3D: RscStandardDisplay {
    class controls {
        class RHS_Options: RHs_Options_Button {};
    };
};
class RscDisplayInterruptEditorPreview: RscStandardDisplay {
    class controls {
        class RHS_Options: RHs_Options_Button {};
    };
};
class RscCheckbox;
class RHS_Options_Menu {
    enableSimulation = 1;
    idd = 101;
    movingenable = 0;
    class Controls {
        class rhs_background: RscPicture {
            idc = 1200;
            text = "rhsafrf\addons\rhs_main\data\rhs_papier.paa";
            colorText[] = {1, 1, 1, 1};
            x = "0.336938 * safezoneW + safezoneX";
            y = "-0.0924473 * safezoneH + safezoneY";
            w = "0.321718 * safezoneW";
            h = "1.16609 * safezoneH";
        };
        class rhs_version_text: RscStructuredText {
            text = "Current version:";
            x = "0.354566 * safezoneW + safezoneX";
            y = "0.246094 * safezoneH + safezoneY";
            w = "0.123399 * safezoneW";
            h = "0.0188079 * safezoneH";
            size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.9)";
            colorText[] = {0.1, 0.1, 0.1, 0.9};
            colorBackground[] = {-1, -1, -1, 0};
            colorActive[] = {-1, -1, -1, 0};
            font = "EtelkaMonospaceProBold";
            shadow = 0;
            class Attributes {
                font = "EtelkaMonospaceProBold";
                color = "#4f4848";
                align = "left";
                shadow = 0;
            };
        };
        class rhs_version_input: rhs_version_text {
            text = "0.5.6";
            x = "0.491186 * safezoneW + safezoneX";
            y = "0.246094 * safezoneH + safezoneY";
            w = "0.0661064 * safezoneW";
            h = "0.0188079 * safezoneH";
        };
        class rhs_miscOption_text: rhs_version_text {
            text = "Misc options:";
            x = "0.354566 * safezoneW + safezoneX";
            y = "0.302518 * safezoneH + safezoneY";
            w = "0.123399 * safezoneW";
            h = "0.0188079 * safezoneH";
        };
        class rhs_option1_text: rhs_version_text {
            text = "Radio Chatter";
            tooltip = "Toggle random vehicle radio chatter";
            x = "0.367787 * safezoneW + safezoneX";
            y = "0.340133 * safezoneH + safezoneY";
            w = "0.110177 * safezoneW";
            h = "0.0188079 * safezoneH";
        };
        class rhs_checkbox1: RscCheckbox {
            idc = 2801;
            checked = "(profilenamespace getvariable ['rhs_vehicleRadioChatter',1])";
            x = "0.487043 * safezoneW + safezoneX";
            y = "0.33543105 * safezoneH + safezoneY";
            w = "0.0176284 * safezoneW";
            h = "0.0282118 * safezoneH";
            color[] = {0.1, 0.1, 0.1, 0.7};
            colorFocused[] = {0.1, 0.1, 0.1, 0.95};
            colorHover[] = {0.1, 0.1, 0.1, 0.95};
            colorPressed[] = {0.1, 0.1, 0.1, 0.95};
            colorDisabled[] = {0.1, 0.1, 0.1, 0.3};
            colorBackground[] = {0, 0, 0, 0};
            colorBackgroundFocused[] = {0, 0, 0, 0};
            colorBackgroundHover[] = {0, 0, 0, 0};
            colorBackgroundPressed[] = {0, 0, 0, 0};
            colorBackgroundDisabled[] = {0, 0, 0, 0};
            onCheckedChanged = "profileNamespace setVariable ['rhs_vehicleRadioChatter', (_this select 1)];saveProfileNamespace;";
        };
        class rhs_option2_text: rhs_option1_text {
            text = "Active Tire Pressure";
            tooltip = "Active Tire Pressure script is used on BTRs, Ural & Tochka-U to keep pressure in wheels even when damaged";
            x = "0.367787 * safezoneW + safezoneX";
            y = "0.366624 * safezoneH + safezoneY";
            w = "0.110177 * safezoneW";
            h = "0.0188079 * safezoneH";
        };
        class rhs_checkbox2: rhs_checkbox1 {
            checked = "(profilenamespace getvariable ['rhs_activeTirePressure',1])";
            idc = 2802;
            x = "0.487043 * safezoneW + safezoneX";
            y = "0.36192205 * safezoneH + safezoneY";
            w = "0.0176284 * safezoneW";
            h = "0.0282118 * safezoneH";
            onCheckedChanged = "profileNamespace setVariable ['rhs_activeTirePressure', (_this select 1)];saveProfileNamespace;";
        };
        class rhs_option3_text: rhs_option1_text {
            text = "FCS Target Lead";
            tooltip = "Toggle automatic target leading for fire control systems";
            x = "0.367787 * safezoneW + safezoneX";
            y = "0.393115 * safezoneH + safezoneY";
            w = "0.110177 * safezoneW";
            h = "0.0188079 * safezoneH";
        };
        class rhs_checkbox3: rhs_checkbox1 {
            checked = "(profilenamespace getvariable['rhs_fcsTargetLead',1])";
            idc = 2803;
            x = "0.487043 * safezoneW + safezoneX";
            y = "0.38841305 * safezoneH + safezoneY";
            w = "0.0176284 * safezoneW";
            h = "0.0282118 * safezoneH";
            onCheckedChanged = "profileNamespace setVariable ['rhs_fcsTargetLead', (_this select 1)];saveProfileNamespace;";
        };
        class rhs_option4_text: rhs_option1_text {
            text = "Throw disposables";
            tooltip = "Automatic throw away of used disposables launchers after changing weapon";
            x = "0.367787 * safezoneW + safezoneX";
            y = "0.423115 * safezoneH + safezoneY";
            w = "0.110177 * safezoneW";
            h = "0.0188079 * safezoneH";
        };
        class rhs_checkbox4: rhs_checkbox1 {
            checked = "(profilenamespace getvariable['rhs_throwDisposable',1])";
            idc = 2804;
            x = "0.487043 * safezoneW + safezoneX";
            y = "0.41641305 * safezoneH + safezoneY";
            w = "0.0176284 * safezoneW";
            h = "0.0282118 * safezoneH";
            onCheckedChanged = "profileNamespace setVariable ['rhs_throwDisposable', (_this select 1)];saveProfileNamespace;";
        };
        class rhs_option5_text: rhs_option1_text {
            text = "Disable safemode";
            tooltip = "Disables weapon safemode switch script";
            x = "0.367787 * safezoneW + safezoneX";
            y = "0.450115 * safezoneH + safezoneY";
            w = "0.110177 * safezoneW";
            h = "0.0188079 * safezoneH";
        };
        class rhs_checkbox5: rhs_checkbox1 {
            checked = "(profilenamespace getvariable['rhs_disableSafe',1])";
            idc = 2805;
            x = "0.487043 * safezoneW + safezoneX";
            y = "0.44641305 * safezoneH + safezoneY";
            w = "0.0176284 * safezoneW";
            h = "0.0282118 * safezoneH";
            onCheckedChanged = "profileNamespace setVariable ['rhs_disableSafe', (_this select 1)];saveProfileNamespace;";
        };
        class rhs_option6_text: rhs_option1_text {
            text = "Disable anim change";
            tooltip = "Disables automatic weapon animation change on deploy";
            x = "0.367787 * safezoneW + safezoneX";
            y = "0.480115 * safezoneH + safezoneY";
            w = "0.110177 * safezoneW";
            h = "0.0188079 * safezoneH";
        };
        class rhs_checkbox6: rhs_checkbox1 {
            checked = "(profilenamespace getvariable['rhs_disableAnimChange',0])";
            idc = 2805;
            x = "0.487043 * safezoneW + safezoneX";
            y = "0.47641305 * safezoneH + safezoneY";
            w = "0.0176284 * safezoneW";
            h = "0.0282118 * safezoneH";
            onCheckedChanged = "profileNamespace setVariable ['rhs_disableAnimChange', (_this select 1)];saveProfileNamespace;";
        };
        class rhs_option7_text: rhs_option1_text {
            text = "Manual bolting";
            tooltip = "Manual rifle bolting. By default, you need to hold fire button in order to delay reload anim. Switching this on will require you to press fire button again in order to bolt rifle [RO2 style]";
            x = "(0.14+0.367787) * safezoneW + safezoneX";
        };
        class rhs_checkbox7: rhs_checkbox1 {
            checked = "(profilenamespace getvariable ['rhs_manualBolting',0])";
            idc = 2802;
            x = "(0.14+0.487043) * safezoneW + safezoneX";
            onCheckedChanged = "profileNamespace setVariable ['rhs_manualBolting', (_this select 1)];saveProfileNamespace;";
        };
        class rhs_option8_text: rhs_option2_text {
            text = "Prefered optic";
            tooltip = "If available, optic will be replaced with prefered type";
            x = "(0.14+0.367787) * safezoneW + safezoneX";
        };
        class rhs_option9_text: rhs_option3_text {
            text = "Voice Announcer";
            tooltip = "Enable Voice Announcer aka 'Bitching Betty' in aircrafts";
            x = "(0.14+0.367787) * safezoneW + safezoneX";
        };
        class rhs_checkbox9: rhs_checkbox3 {
            checked = "(profilenamespace getvariable ['rhs_voiceAnnouncer',1])";
            idc = 2805;
            x = "(0.14+0.487043) * safezoneW + safezoneX";
            onCheckedChanged = "profileNamespace setVariable ['rhs_voiceAnnouncer', (_this select 1)];saveProfileNamespace;";
        };
        class rhs_option10_text: rhs_option4_text {
            text = "Dynamic Drawing";
            tooltip = "Vehicles are always visible within terrain draw distance when controling planes or helicopters";
            x = "(0.14+0.367787) * safezoneW + safezoneX";
        };
        class rhs_checkbox10: rhs_checkbox4 {
            checked = "(profilenamespace getvariable ['rhs_dynamicObjectDistance',1])";
            idc = 2822;
            x = "(0.14+0.487043) * safezoneW + safezoneX";
            onCheckedChanged = "profileNamespace setVariable ['rhs_dynamicObjectDistance', (_this select 1)];saveProfileNamespace;";
        };
        class rhs_option11_text: rhs_option5_text {
            text = "Afterburner toggle";
            tooltip = "Afterburner is activated once throttle is at 100%. By default afterburner is activated by pressing turbo key";
            x = "(0.14+0.367787) * safezoneW + safezoneX";
        };
        class rhs_checkbox11: rhs_checkbox5 {
            checked = "(profilenamespace getvariable ['rhs_afterburner_mode',0])";
            idc = 2823;
            x = "(0.14+0.487043) * safezoneW + safezoneX";
            onCheckedChanged = "profileNamespace setVariable ['rhs_afterburner_mode', (_this select 1)];saveProfileNamespace;";
        };
        class rhs_option12_text: rhs_option6_text {
            text = "Vehicle UI";
            tooltip = "Toggle vanilla lock UI icons like locking, selected target, impact point, etc. Changes are applied after game restart";
            x = "(0.14+0.367787) * safezoneW + safezoneX";
        };
        class rhs_keybinding_static_text: rhs_version_text {
            idc = 1105;
            text = "Keybindings:";
            tooltip = "User Action Keys are defined in Menu >> Configuration >> Controls >> Custom Controls";
            x = "0.355095 * safezoneW + safezoneX";
            y = "(0.033*2)*(2.1267/safezoneH)+ 0.491725 * safezoneH + safezoneY";
            w = "0.123399 * safezoneW";
            h = "0.0188079 * safezoneH";
        };
        class rhs_keybinding_inf_static_text: rhs_version_text {
            idc = 1106;
            text = "Infantry";
            x = "0.361794 * safezoneW + safezoneX";
            y = "(0.033*2)*(2.1267/safezoneH)+0.521817 * safezoneH + safezoneY";
            w = "0.123399 * safezoneW";
            h = "0.0188079 * safezoneH";
        };
        class rhs_keybinding_inf1_static_text: rhs_version_text {
            idc = 1107;
            text = "Weapon Interaction";
            tooltip = "Used in: Folding, NPZ dismount & Bipod script";
            x = "0.373252 * safezoneW + safezoneX";
            y = "(0.033*2)*(2.1267/safezoneH)+0.54796 * safezoneH + safezoneY";
            w = "0.123399 * safezoneW";
            h = "0.0188079 * safezoneH";
        };
        class rhs_keybinding_inf2_static_text: rhs_keybinding_inf1_static_text {
            idc = 1108;
            text = "Accessory Interaction";
            tooltip = "Used in: Flashlight/Laser script";
            y = "(0.033*2)*(2.1267/safezoneH)+0.563006 * safezoneH + safezoneY";
        };
        class rhs_keybinding_inf3_static_text: rhs_keybinding_inf1_static_text {
            idc = 1109;
            text = "Optic Interaction";
            tooltip = "Used in: Kobra (changing reticle) & AT4 (peephole)  script";
            y = "(0.033*2)*(2.1267/safezoneH)+0.579933 * safezoneH + safezoneY";
        };
        class rhs_keybinding_inf4_static_text: rhs_keybinding_inf1_static_text {
            idc = 1110;
            text = "Lase Target";
            tooltip = "Used in infantry LRF to determine range to target";
            y = "(0.033*2)*(2.1267/safezoneH)+0.594227 * safezoneH + safezoneY";
        };
        class rhs_keybinding_inf5_static_text: rhs_keybinding_inf1_static_text {
            idc = 1111;
            text = "Safemode switch key";
            tooltip = "Used for switching weapon to safe mode";
            y = "(0.033*2)*(2.1267/safezoneH)+ (0.033*1)*(2.1267/safezoneH)+0.594227 * safezoneH + safezoneY";
        };
        class rhs_keybinding_veh_static_text: rhs_keybinding_inf_static_text {
            idc = 1111;
            text = "Vehicles";
            y = "(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.61943 * safezoneH + safezoneY";
        };
        class rhs_keybinding_veh1_static_text: rhs_keybinding_inf1_static_text {
            idc = 1112;
            text = "Open Balistic Computer";
            tooltip = "Open balistic computer menu to manualy input range. Avaiable in i.e. T80 or M1 tanks";
            y = "(0.033*2)*(2.1267/safezoneH)+(0.033*2)*(2.1267/safezoneH)+0.645761 * safezoneH + safezoneY";
        };
        class rhs_keybinding_veh2_static_text: rhs_keybinding_veh1_static_text {
            idc = 1113;
            text = "Range Up";
            tooltip = "FCS or optic range adjustment";
            y = "(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.659867 * safezoneH + safezoneY";
        };
        class rhs_keybinding_veh3_static_text: rhs_keybinding_veh1_static_text {
            idc = 1114;
            text = "Range Down";
            tooltip = "FCS or optic range adjustment";
            y = "(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.674161 * safezoneH + safezoneY";
        };
        class rhs_keybinding_veh4_static_text: rhs_keybinding_veh1_static_text {
            idc = 1115;
            text = "Lase Target";
            tooltip = "FCS target lasing";
            y = "(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.687326 * safezoneH + safezoneY";
        };
        class rhs_keybinding_veh5_static_text: rhs_keybinding_veh1_static_text {
            idc = 1116;
            text = "Dump Lead";
            tooltip = "Stops automatic lead calculation";
            y = "(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.702373 * safezoneH + safezoneY";
        };
        class rhs_keybinding_veh6_static_text: rhs_keybinding_veh1_static_text {
            idc = 1117;
            text = "Next round switch";
            tooltip = "Used for autoloader control in T tanks. Determines next loaded round";
            y = "(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.717373 * safezoneH + safezoneY";
        };
        class rhs_keybinding_veh7_static_text: rhs_keybinding_veh1_static_text {
            idc = 1118;
            text = "Autoloader mode switch";
            tooltip = "Used for autoloader sequential modecontrol in T tanks. Determines if next round is automaticly loaded into gun";
            y = "(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.732373 * safezoneH + safezoneY";
        };
        class rhs_keybinding_listbox_inf1: RscCombo {
            idc = 1500;
            text = "TEST";
            x = "0.50133 * safezoneW + safezoneX";
            y = "(0.033*2)*(2.1267/safezoneH)+ 0.552543 * safezoneH + safezoneY";
            w = "0.150177 * safezoneW";
            h = "0.0109079 * safezoneH";
            font = "EtelkaMonospaceProBold";
            sizeEX = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
            colorText[] = {0, 0, 0, 1};
            colorBackground[] = {0.99, 0.98, 0.67, 1};
            colorScrollbar[] = {1, 0, 0, 1};
            colorSelectBackground[] = {0.8, 0.8, 0.8, 1};
            colorDisabled[] = {1, 1, 1, 0.45};
            onLBSelChanged = "rhs_options_comboChng=_this";
        };
        class rhs_keybinding_listbox_inf2: rhs_keybinding_listbox_inf1 {
            idc = 1501;
            y = "(0.033*2)*(2.1267/safezoneH)+ 0.567708 * safezoneH + safezoneY";
        };
        class rhs_keybinding_listbox_inf3: rhs_keybinding_listbox_inf1 {
            idc = 1502;
            y = "(0.033*2)*(2.1267/safezoneH)+ 0.582002 * safezoneH + safezoneY";
        };
        class rhs_keybinding_listbox_inf4: rhs_keybinding_listbox_inf1 {
            idc = 1503;
            y = "(0.033*2)*(2.1267/safezoneH)+ 0.596108 * safezoneH + safezoneY";
        };
        class rhs_keybinding_listbox_inf5: rhs_keybinding_listbox_inf1 {
            idc = 1504;
            y = "(0.033*2)*(2.1267/safezoneH)+ (0.033*1)*(2.1267/safezoneH)+0.596108 * safezoneH + safezoneY";
        };
        class rhs_keybinding_listbox_veh1: rhs_keybinding_listbox_inf1 {
            idc = 1600;
            y = "(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.646701 * safezoneH + safezoneY";
        };
        class rhs_keybinding_listbox_veh2: rhs_keybinding_listbox_veh1 {
            idc = 1601;
            y = "(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.660807 * safezoneH + safezoneY";
        };
        class rhs_keybinding_listbox_veh3: rhs_keybinding_listbox_veh1 {
            idc = 1602;
            y = "(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.675853 * safezoneH + safezoneY";
        };
        class rhs_keybinding_listbox_veh4: rhs_keybinding_listbox_veh1 {
            idc = 1603;
            y = "(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.691088 * safezoneH + safezoneY";
        };
        class rhs_keybinding_listbox_veh5: rhs_keybinding_listbox_veh1 {
            idc = 1604;
            y = "(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.706075 * safezoneH + safezoneY";
        };
        class rhs_keybinding_listbox_veh6: rhs_keybinding_listbox_veh1 {
            idc = 1605;
            y = "(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.721075 * safezoneH + safezoneY";
        };
        class rhs_keybinding_listbox_veh7: rhs_keybinding_listbox_veh1 {
            idc = 1606;
            y = "(0.033*2)*(2.1267/safezoneH)+ (0.033*2)*(2.1267/safezoneH)+0.736075 * safezoneH + safezoneY";
        };
        class rhs_listbox8: rhs_keybinding_listbox_inf1 {
            idc = 2821;
            x = "0.610043 * safezoneW + safezoneX";
            y = "0.36892205 * safezoneH + safezoneY";
            w = "0.030177 * safezoneW";
            h = "0.0129079 * safezoneH";
            onLBSelChanged = "profileNamespace setVariable ['rhs_preferedOptic', (_this select 1)];saveProfileNamespace;[] call RHS_fnc_preferedOptic";
        };
        class rhs_listbox12: rhs_keybinding_listbox_inf1 {
            idc = 2824;
            x = "0.590043 * safezoneW + safezoneX";
            y = "0.48041305 * safezoneH + safezoneY";
            w = "0.050177 * safezoneW";
            h = "0.0129079 * safezoneH";
            onLBSelChanged = "[_this select 1] call RHS_fnc_UI_Options";
        };
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class hitSpall {
                file = "rhsafrf\addons\rhs_main\scripts\rhs_hitSpall.sqf";
                description = "Spalling (WIP)";
            };
            class hintArmor {
                file = "rhsafrf\addons\rhs_main\scripts\rhs_hintArmor.sqf";
                description = "Extended armor hint";
            };
            class findPlayer {
                file = "rhsafrf\addons\rhs_main\scripts\rhs_findPlayer.sqf";
                description = "Find player controlled unit";
            };
            class menuOptions {
                file = "rhsafrf\addons\rhs_main\scripts\rhs_menuOptions.sqf";
                description = "Handling of options menu";
            };
            class isPlayer {
                file = "rhsafrf\addons\rhs_main\scripts\rhs_isPlayer.sqf";
                description = "Is the unit a player or controlled by a player";
            };
            class retread {
                file = "rhsafrf\addons\rhs_main\scripts\rhs_retread.sqf";
                description = "Retreading function for wheeled vehicles";
            };
            class wheelDamaged {
                file = "rhsafrf\addons\rhs_main\scripts\rhs_wheelDamaged.sqf";
                description = "Retreading EH for wheel damage";
            };
            class garage {
                file = "rhsafrf\addons\rhs_main\scripts\rhs_garage.sqf";
                description = "global Virtual Garage version";
            };
            class dynamicObjectDrawing {
                file = "rhsafrf\addons\rhs_main\scripts\rhs_dynamicOD.sqf";
                description = "Dynamic Object Drawing";
            };
            class dynamicObjectDrawing_loop {
                file = "rhsafrf\addons\rhs_main\scripts\rhs_dynamicOD_loop.sqf";
                description = "Dynamic Object Drawing - main loop";
            };
            class UI_Options {
                file = "rhsafrf\addons\rhs_main\scripts\rhs_UI_Options.sqf";
            };
            class setTurretLock {
                file = "rhsafrf\addons\rhs_main\scripts\rhs_setTurretLock.sqf";
            };
            class reapplyTextures {
                file = "rhsafrf\addons\rhs_main\scripts\rhs_reapplyTextures.sqf";
            };
        };
        class TowingSystem {
            class towing_attach {
                file = "rhsafrf\addons\rhs_main\scripts\towing\rhs_towing_attach.sqf";
            };
            class towing_detach {
                file = "rhsafrf\addons\rhs_main\scripts\towing\rhs_towing_detach.sqf";
            };
            class towing_selectVehicle {
                file = "rhsafrf\addons\rhs_main\scripts\towing\rhs_towing_selectVehicle.sqf";
            };
            class towing_drag {
                file = "rhsafrf\addons\rhs_main\scripts\towing\rhs_towing_drag.sqf";
            };
            class towing_dragAI {
                file = "rhsafrf\addons\rhs_main\scripts\towing\rhs_towing_dragAI.sqf";
            };
            class towing_destroyed {
                file = "rhsafrf\addons\rhs_main\scripts\towing\rhs_towing_destroyed.sqf";
            };
            class towing_dragHelper {
                file = "rhsafrf\addons\rhs_main\scripts\towing\rhs_towing_dragHelper.sqf";
            };
            class towing_dragHelperAI {
                file = "rhsafrf\addons\rhs_main\scripts\towing\rhs_towing_dragHelperAI.sqf";
            };
            class towing_pushHelper {
                file = "rhsafrf\addons\rhs_main\scripts\towing\rhs_towing_pushHelper.sqf";
            };
            class towing_changeOwner {
                file = "rhsafrf\addons\rhs_main\scripts\towing\rhs_towing_changeOwner.sqf";
            };
        };
        class VehicleEffects {
            class engineCheckDamage {
                file = "rhsafrf\addons\rhs_main\scripts\VehicleEffects\rhs_engineCheckDamage.sqf";
            };
            class setDamageState {
                file = "rhsafrf\addons\rhs_main\scripts\VehicleEffects\rhs_setDamageState.sqf";
            };
        };
    };
};
class CfgArmorSimulations {
    class Armor_ERA_Light;
    class Armor_ERA_Heavy;
    class RHS_Sideskirt_Rubber: Armor_ERA_Light {
        class Default {
            hit[] = {1};
            speed[] = {1};
        };
        class AP {
            hit[] = {2};
            speed[] = {1, 1};
        };
        class HE {
            hit[] = {0.5, 1};
            speed[] = {1};
        };
        class HEAT {
            hit[] = {3};
            speed[] = {0.7, 0.7};
        };
        class TandemHEAT {
            hit[] = {3};
            speed[] = {0.85, 1};
        };
    };
    class RHS_ERA_K1: Armor_ERA_Light {
        class Default {
            hit[] = {1};
            speed[] = {1};
        };
        class AP {
            hit[] = {2};
            speed[] = {1, 1};
        };
        class HE {
            hit[] = {0.1, 1};
            speed[] = {1};
        };
        class HEAT {
            hit[] = {2};
            speed[] = {0.1, 0.1};
        };
        class TandemHEAT {
            hit[] = {3};
            speed[] = {0.85, 1};
        };
    };
    class RHS_ERA_K5: Armor_ERA_Heavy {
        class AP {
            hit[] = {2};
            speed[] = {0.75, 0.75};
        };
        class HE {
            hit[] = {0.1, 1};
            speed[] = {1};
        };
        class HEAT {
            hit[] = {2};
            speed[] = {0.05, 0.05};
        };
        class TandemHEAT {
            hit[] = {3};
            speed[] = {0.75, 1};
        };
    };
    class RHS_ERA_RELIKT: Armor_ERA_Heavy {
        class AP {
            hit[] = {2};
            speed[] = {0.6, 0.6};
        };
        class HE {
            hit[] = {0.1, 1};
            speed[] = {1};
        };
        class HEAT {
            hit[] = {2};
            speed[] = {0.05, 0.05};
        };
        class TandemHEAT {
            hit[] = {3};
            speed[] = {0.65, 1};
        };
    };
    class RHS_ERA_MALACHIT: Armor_ERA_Heavy {
        class AP {
            hit[] = {2};
            speed[] = {0.5, 0.5};
        };
        class HE {
            hit[] = {0.1, 1};
            speed[] = {1};
        };
        class HEAT {
            hit[] = {2};
            speed[] = {0.03, 0.03};
        };
        class TandemHEAT {
            hit[] = {3};
            speed[] = {0.3, 0.3};
        };
    };
    class RHS_SLAT: Armor_ERA_Light {
        class HEAT {
            hit[] = {3};
            speed[] = {0.3, 0.3};
        };
        class TandemHEAT {
            hit[] = {3};
            speed[] = {1, 1};
        };
    };
    class RHS_Composite_50 {
        class Default {
            hit[] = {1};
            speed[] = {1};
        };
        class AP: Default {};
        class HE: Default {};
        class HEAT {
            hit[] = {1};
            speed[] = {0.5, 0.5};
        };
        class TandemHEAT {
            hit[] = {1};
            speed[] = {0.5, 0.5};
        };
    };
    class RHS_Composite_55 {
        class Default {
            hit[] = {1};
            speed[] = {1};
        };
        class AP: Default {};
        class HE: Default {};
        class HEAT {
            hit[] = {1};
            speed[] = {0.55, 0.55};
        };
        class TandemHEAT {
            hit[] = {1};
            speed[] = {0.55, 0.55};
        };
    };
    class RHS_Composite_60 {
        class Default {
            hit[] = {1};
            speed[] = {1};
        };
        class AP: Default {};
        class HE: Default {};
        class HEAT {
            hit[] = {1};
            speed[] = {0.6, 0.6};
        };
        class TandemHEAT {
            hit[] = {1};
            speed[] = {0.6, 0.6};
        };
    };
    class RHS_Composite_65 {
        class Default {
            hit[] = {1};
            speed[] = {1};
        };
        class AP: Default {};
        class HE: Default {};
        class HEAT {
            hit[] = {1};
            speed[] = {0.65, 0.65};
        };
        class TandemHEAT {
            hit[] = {1};
            speed[] = {0.65, 0.65};
        };
    };
    class RHS_Composite_70 {
        class Default {
            hit[] = {1};
            speed[] = {1};
        };
        class AP: Default {};
        class HE: Default {};
        class HEAT {
            hit[] = {1};
            speed[] = {0.7, 0.7};
        };
        class TandemHEAT {
            hit[] = {1};
            speed[] = {0.7, 0.7};
        };
    };
    class RHS_Composite_75 {
        class Default {
            hit[] = {1};
            speed[] = {1};
        };
        class AP: Default {};
        class HE: Default {};
        class HEAT {
            hit[] = {1};
            speed[] = {0.75, 0.75};
        };
        class TandemHEAT {
            hit[] = {1};
            speed[] = {0.75, 0.75};
        };
    };
    class RHS_Composite_80 {
        class Default {
            hit[] = {1};
            speed[] = {1};
        };
        class AP: Default {};
        class HE: Default {};
        class HEAT {
            hit[] = {1};
            speed[] = {0.8, 0.8};
        };
        class TandemHEAT {
            hit[] = {1};
            speed[] = {0.8, 0.8};
        };
    };
    class RHS_Composite_85 {
        class Default {
            hit[] = {1};
            speed[] = {1};
        };
        class AP: Default {};
        class HE: Default {};
        class HEAT {
            hit[] = {1};
            speed[] = {0.85, 0.85};
        };
        class TandemHEAT {
            hit[] = {1};
            speed[] = {0.85, 0.85};
        };
    };
    class RHS_Composite_90 {
        class Default {
            hit[] = {1};
            speed[] = {1};
        };
        class AP: Default {};
        class HE: Default {};
        class HEAT {
            hit[] = {1};
            speed[] = {0.9, 0.9};
        };
        class TandemHEAT {
            hit[] = {1};
            speed[] = {0.9, 0.9};
        };
    };
    class RHS_Composite_95 {
        class Default {
            hit[] = {1};
            speed[] = {1};
        };
        class AP: Default {};
        class HE: Default {};
        class HEAT {
            hit[] = {1};
            speed[] = {0.95, 0.95};
        };
        class TandemHEAT {
            hit[] = {1};
            speed[] = {0.95, 0.95};
        };
    };
    class RHS_Hull_Helicopter {
        class Default {
            hit[] = {1};
            speed[] = {1};
        };
        class AP {
            hit[] = {1};
            speed[] = {1};
        };
        class HE {
            hit[] = {2};
            speed[] = {1};
        };
        class HEAT {
            hit[] = {3};
            speed[] = {1};
        };
        class TandemHEAT {
            hit[] = {3};
            speed[] = {1};
        };
    };
    class RHS_FuelTank {
        class Default {
            hit[] = {1};
            speed[] = {1};
        };
        class AP {
            hit[] = {1};
            speed[] = {0.75, 1};
        };
        class HE {
            hit[] = {0.1, 1};
            speed[] = {1};
        };
        class HEAT {
            hit[] = {1};
            speed[] = {0.05, 1};
        };
        class TandemHEAT {
            hit[] = {1};
            speed[] = {0.75, 1};
        };
    };
    class RHS_Gost_1 {
        class Default {
            hit[] = {0.1, 3};
            speed[] = {0.1, 1};
        };
        class HE {
            hit[] = {0.1, 1};
            speed[] = {1};
        };
        class AP_Level_1: Default {
            hit[] = {0.5, 3};
        };
        class AP_Level_2: Default {
            hit[] = {0.7, 3};
        };
        class AP_Level_3: Default {
            hit[] = {0.95, 3};
        };
    };
    class RHS_Gost_2: RHS_Gost_1 {
        class AP_Level_1: Default {
            hit[] = {0.5, 3};
        };
        class AP_Level_2: Default {
            hit[] = {0.7, 3};
        };
        class AP_Level_3: Default {
            hit[] = {0.8, 3};
        };
    };
    class RHS_Gost_3: RHS_Gost_1 {
        class AP_Level_1: Default {
            hit[] = {0.5, 3};
        };
        class AP_Level_2: Default {
            hit[] = {0.6, 3};
        };
        class AP_Level_3: Default {
            hit[] = {0.7, 3};
        };
    };
    class RHS_Gost_4: RHS_Gost_1 {
        class AP_Level_1: Default {
            hit[] = {0.4, 3};
        };
        class AP_Level_2: Default {
            hit[] = {0.5, 3};
        };
        class AP_Level_3: Default {
            hit[] = {0.6, 3};
        };
    };
    class RHS_Gost_5: RHS_Gost_1 {
        class AP_Level_1: Default {
            hit[] = {0.2, 3};
        };
        class AP_Level_2: Default {
            hit[] = {0.4, 3};
        };
        class AP_Level_3: Default {
            hit[] = {0.5, 3};
        };
    };
    class RHS_Gost_6: RHS_Gost_1 {
        class AP_Level_1: Default {
            hit[] = {0.1, 3};
        };
        class AP_Level_2: Default {
            hit[] = {0.3, 3};
        };
        class AP_Level_3: Default {
            hit[] = {0.4, 3};
        };
    };
};
class CfgFactionClasses {
    class rhs_faction_msv {
        displayName = "$STR_RHS_FAC_MSV";
        priority = -9;
        side = 0;
        icon = "\rhsafrf\addons\rhs_main\data\icons\msv.paa";
        flag = "\rhsafrf\addons\rhs_main\data\flag_rus_co.paa";
        backpack_tf_faction_radio_api = "tf_bussole";
    };
    class rhs_faction_vdv: rhs_faction_msv {
        displayName = "$STR_RHS_FAC_VDV";
        priority = -8;
        icon = "\rhsafrf\addons\rhs_main\data\icons\vdv.paa";
    };
    class rhs_faction_vdv_45: rhs_faction_msv {
        displayName = "$STR_RHS_FAC_VDV_45";
        priority = -8;
        icon = "\rhsafrf\addons\rhs_main\data\icons\vdv.paa";
    };
    class rhs_faction_vmf: rhs_faction_msv {
        displayName = "$STR_RHS_FAC_VMF";
        priority = -7;
        icon = "\rhsafrf\addons\rhs_main\data\icons\vmf.paa";
    };
    class rhs_faction_vv: rhs_faction_msv {
        displayName = "$STR_RHS_FAC_VV";
        priority = -6;
        icon = "\rhsafrf\addons\rhs_main\data\icons\vv.paa";
    };
    class rhs_faction_tv: rhs_faction_msv {
        displayName = "$STR_RHS_FAC_TV";
        priority = -5;
        icon = "\rhsafrf\addons\rhs_main\data\icons\tv.paa";
    };
    class rhs_faction_vpvo: rhs_faction_msv {
        displayName = "$STR_RHS_FAC_VPVO";
        priority = -4;
        icon = "\rhsafrf\addons\rhs_main\data\icons\vpvo.paa";
    };
    class rhs_faction_vvs: rhs_faction_msv {
        displayName = "$STR_RHS_FAC_VVS";
        priority = -3;
        icon = "\rhsafrf\addons\rhs_main\data\icons\vvs_g.paa";
    };
    class rhs_faction_vvs_c: rhs_faction_msv {
        displayName = "$STR_RHS_FAC_VVS_C";
        priority = -2;
        icon = "\rhsafrf\addons\rhs_main\data\icons\vvs_c.paa";
    };
    class rhs_faction_rva: rhs_faction_msv {
        displayName = "$STR_RHS_FAC_RVA";
        priority = -1;
        icon = "\rhsafrf\addons\rhs_main\data\icons\rva.paa";
    };
};
class CfgVehicleClasses {
    class rhs_vehclass_apc {
        displayname = "$STR_RHS_VEHCLASS_APC";
    };
    class rhs_vehclass_ifv {
        displayname = "$STR_RHS_VEHCLASS_IFV";
    };
    class rhs_vehclass_car {
        displayname = "$STR_RHS_VEHCLASS_CAR";
    };
    class rhs_vehclass_truck {
        displayname = "$STR_RHS_VEHCLASS_TRUCK";
    };
    class rhs_vehclass_tank {
        displayname = "$STR_RHS_VEHCLASS_TANK";
    };
    class rhs_vehclass_infantry_flora {
        displayname = "$STR_RHS_VEHCLASS_INFANTRY_FLORA";
    };
    class rhs_vehclass_infantry_mflora {
        displayname = "$STR_RHS_VEHCLASS_INFANTRY_MFLORA";
    };
    class rhs_vehclass_infantry_emr {
        displayname = "$STR_RHS_VEHCLASS_INFANTRY_EMR";
    };
    class rhs_vehclass_infantry_emr_des {
        displayname = "$STR_RHS_VEHCLASS_INFANTRY_EMR_DES";
    };
    class rhs_vehclass_infantry_gorka {
        displayname = "$STR_RHS_VEHCLASS_INFANTRY_GORKA";
    };
    class rhs_vehclass_infantry_osn {
        displayname = "$STR_RHS_VEHCLASS_INFANTRY_OSN";
    };
    class rhs_vehclass_infantry_recon {
        displayname = "$STR_RHS_VEHCLASS_INFANTRYRECON";
    };
    class rhs_vehclass_artillery {
        displayname = "$STR_RHS_VEHCLASS_ARTILLERY";
    };
    class rhs_vehclass_radar {
        displayname = "$STR_RHS_VEHCLASS_RADAR";
    };
    class rhs_vehclass_targeting {
        displayname = "$STR_RHS_VEHCLASS_TARGETING";
    };
    class rhs_vehclass_launcher {
        displayname = "$STR_RHS_VEHCLASS_LAUNCHER";
    };
    class rhs_vehclass_aircraft {
        displayname = "$STR_RHS_VEHCLASS_AIRPLANE";
    };
    class rhs_vehclass_helicopter {
        displayname = "$STR_RHS_VEHCLASS_HELICOPTER";
    };
    class rhs_vehclass_aa {
        displayname = "$STR_RHS_VEHCLASS_AA";
    };
    class rhs_vehclass_boat {
        displayname = "$STR_RHS_VEHCLASS_BOAT";
    };
};
class CfgEditorSubcategories {
    class rhs_EdSubcat_apc {
        displayname = "$STR_RHS_VEHCLASS_APC";
    };
    class rhs_EdSubcat_ifv {
        displayname = "$STR_RHS_VEHCLASS_IFV";
    };
    class rhs_EdSubcat_car {
        displayname = "$STR_RHS_VEHCLASS_CAR";
    };
    class rhs_EdSubcat_truck {
        displayname = "$STR_RHS_VEHCLASS_TRUCK";
    };
    class rhs_EdSubcat_tank {
        displayname = "$STR_RHS_VEHCLASS_TANK";
    };
    class rhs_EdSubcat_infantry_flora {
        displayname = "$STR_RHS_VEHCLASS_INFANTRY_FLORA";
    };
    class rhs_EdSubcat_infantry_mflora {
        displayname = "$STR_RHS_VEHCLASS_INFANTRY_MFLORA";
    };
    class rhs_EdSubcat_infantry_emr {
        displayname = "$STR_RHS_VEHCLASS_INFANTRY_EMR";
    };
    class rhs_EdSubcat_infantry_emr_des {
        displayname = "$STR_RHS_VEHCLASS_INFANTRY_EMR_DES";
    };
    class rhs_EdSubcat_infantry_gorka {
        displayname = "$STR_RHS_VEHCLASS_INFANTRY_GORKA";
    };
    class rhs_EdSubcat_infantry_osn {
        displayname = "$STR_RHS_VEHCLASS_INFANTRY_OSN";
    };
    class rhs_EdSubcat_infantry_recon {
        displayname = "$STR_RHS_VEHCLASS_INFANTRYRECON";
    };
    class rhs_EdSubcat_artillery {
        displayname = "$STR_RHS_VEHCLASS_ARTILLERY";
    };
    class rhs_EdSubcat_radar {
        displayname = "$STR_RHS_VEHCLASS_RADAR";
    };
    class rhs_EdSubcat_targeting {
        displayname = "$STR_RHS_VEHCLASS_TARGETING";
    };
    class rhs_EdSubcat_launcher {
        displayname = "$STR_RHS_VEHCLASS_LAUNCHER";
    };
    class rhs_EdSubcat_aircraft {
        displayname = "$STR_RHS_VEHCLASS_AIRPLANE";
    };
    class rhs_EdSubcat_helicopter {
        displayname = "$STR_RHS_VEHCLASS_HELICOPTER";
    };
    class rhs_EdSubcat_aa {
        displayname = "$STR_RHS_VEHCLASS_AA";
    };
    class rhs_EdSubcat_boat {
        displayname = "$STR_RHS_VEHCLASS_BOAT";
    };
};
class CfgVehicles {
    class All;
    class AllVehicles;
    class Air;
    class Helicopter;
    class Plane;
    class Land;
    class Man;
    class CAManBase;
    class LandVehicle;
    class Tank;
    class Tank_F;
    class Car;
    class Car_F;
    class Ship;
    class Ship_F;
    class FlagCarrier;
    class rhs_Flag_Russia_F: FlagCarrier {
        author = "Red Hammer Studio";
        scope = 2;
        displayName = "$STR_RHS_FLAGRUSSIANFEDERATION_NAME";
        class EventHandlers {
            init = "(_this select 0) setFlagTexture '\rhsafrf\addons\rhs_main\data\Flag_rus_CO.paa'";
        };
        scopeCurator = 2;
    };
    class rhs_Flag_DNR_F: rhs_Flag_Russia_F {
        author = "Red Hammer Studio";
        scope = 2;
        displayName = "$STR_RHS_FLAGDNR_NAME";
        class EventHandlers {
            init = "(_this select 0) setFlagTexture '\rhsafrf\addons\rhs_main\data\Flag_dnr_CO.paa'";
        };
    };
    class rhs_Flag_LNR_F: rhs_Flag_Russia_F {
        author = "Red Hammer Studio";
        scope = 2;
        displayName = "$STR_RHS_FLAGLNR_NAME";
        class EventHandlers {
            init = "(_this select 0) setFlagTexture '\rhsafrf\addons\rhs_main\data\Flag_lnr_CO.paa'";
        };
    };
    class rhs_Flag_vdv_F: rhs_Flag_Russia_F {
        author = "Red Hammer Studio";
        scope = 2;
        displayName = "$STR_RHS_FLAGVDV_NAME";
        class EventHandlers {
            init = "(_this select 0) setFlagTexture '\rhsafrf\addons\rhs_main\data\Flag_vdv_CO.paa'";
        };
    };
    class rhs_Flag_vmf_F: rhs_Flag_Russia_F {
        author = "Red Hammer Studio";
        scope = 2;
        displayName = "$STR_RHS_FLAGVMF_NAME";
        class EventHandlers {
            init = "(_this select 0) setFlagTexture '\rhsafrf\addons\rhs_main\data\Flag_vmf_CO.paa'";
        };
    };
    class rhs_Flag_Che_F: rhs_Flag_Russia_F {
        author = "Red Hammer Studio";
        scope = 2;
        displayName = "$STR_RHS_FLAGCHECHENREPUBLIC_NAME";
        class EventHandlers {
            init = "(_this select 0) setFlagTexture '\rhsafrf\addons\rhs_main\data\Flag_che_CO.paa'";
        };
    };
    class rhs_Flag_abk_F: rhs_Flag_Russia_F {
        author = "Red Hammer Studio";
        scope = 2;
        displayName = "$STR_RHS_FLAGABKHAZIA_NAME";
        class EventHandlers {
            init = "(_this select 0) setFlagTexture '\rhsafrf\addons\rhs_main\data\Flag_abk_CO.paa'";
        };
    };
    class rhs_Flag_Ose_F: rhs_Flag_Russia_F {
        author = "Red Hammer Studio";
        scope = 2;
        displayName = "$STR_RHS_FLAGOSSETIA_NAME";
        class EventHandlers {
            init = "(_this select 0) setFlagTexture '\rhsafrf\addons\rhs_main\data\Flag_ose_CO.paa'";
        };
    };
    class rhs_Flag_TRN_F: rhs_Flag_Russia_F {
        author = "Red Hammer Studio";
        scope = 2;
        displayName = "$STR_RHS_FLAGTRANSNISTRIA_NAME";
        class EventHandlers {
            init = "(_this select 0) setFlagTexture '\rhsafrf\addons\rhs_main\data\Flag_trn_CO.paa'";
        };
    };
};
class CfgMarkers {
    class flag_NATO;
    class rhs_flag_Russia: flag_NATO {
        name = "Russia";
        icon = "\rhsafrf\addons\rhs_main\data\flag_map\Flag_rus_CO.paa";
        texture = "\rhsafrf\addons\rhs_main\data\flag_map\Flag_rus_CO.paa";
    };
    class rhs_flag_vdv: flag_NATO {
        name = "Russia - VDV";
        icon = "\rhsafrf\addons\rhs_main\data\flag_map\Flag_vdv_CO.paa";
        texture = "\rhsafrf\addons\rhs_main\data\flag_map\Flag_vdv_CO.paa";
    };
    class rhs_flag_vmf: flag_NATO {
        name = "VMF";
        icon = "\rhsafrf\addons\rhs_main\data\flag_map\Flag_vmf_CO.paa";
        texture = "\rhsafrf\addons\rhs_main\data\flag_map\Flag_vmf_CO.paa";
    };
    class rhs_flag_LNR: flag_NATO {
        name = "LNR";
        icon = "\rhsafrf\addons\rhs_main\data\flag_map\Flag_lnr_CO.paa";
        texture = "\rhsafrf\addons\rhs_main\data\flag_map\Flag_lnr_CO.paa";
    };
    class rhs_flag_DNR: flag_NATO {
        name = "DNR";
        icon = "\rhsafrf\addons\rhs_main\data\flag_map\Flag_dnr_CO.paa";
        texture = "\rhsafrf\addons\rhs_main\data\flag_map\Flag_dnr_CO.paa";
    };
    class rhs_flag_Ose: flag_NATO {
        name = "North Ossetia";
        icon = "\rhsafrf\addons\rhs_main\data\flag_map\Flag_ose_CO.paa";
        texture = "\rhsafrf\addons\rhs_main\data\flag_map\Flag_ose_CO.paa";
    };
    class rhs_flag_Abk: flag_NATO {
        name = "Abkhazia";
        icon = "\rhsafrf\addons\rhs_main\data\flag_map\Flag_abk_CO.paa";
        texture = "\rhsafrf\addons\rhs_main\data\flag_map\Flag_abk_CO.paa";
    };
    class rhs_flag_che: flag_NATO {
        name = "Chechen Republic";
        icon = "\rhsafrf\addons\rhs_main\data\flag_map\Flag_che_CO.paa";
        texture = "\rhsafrf\addons\rhs_main\data\flag_map\Flag_che_CO.paa";
    };
    class rhs_flag_trn: flag_NATO {
        name = "Transnistria";
        icon = "\rhsafrf\addons\rhs_main\data\flag_map\Flag_trn_CO.paa";
        texture = "\rhsafrf\addons\rhs_main\data\flag_map\Flag_trn_CO.paa";
    };
};
class CfgHints {
    class RHS_AFRF {
        displayName = "RHS: AFRF";
        class RHS_AFRF_MAIN {
            displayName = "Armed Forces of the Russian Federation";
            displayNameShort = "";
            description = "Armed Forces of the Russian Federation brought to Arma 3 in full glory!<br/><br/>AFRF focuses on Russian military equipment from the mid-2000s to present. Dozens of vehicles, units, and weapons, all modelled and textured with the finest details and packed with features.<br/><br/>For more information please visit our frequently asked questions page at <a href='http://www.rhsmods.org/faq'>www.rhsmods.org/faq</a> and our wiki at <a href='http://www.rhsmods.org/w'>www.rhsmods.org/w</a>. For bug reports and feature requests please visit our feedback tracker at <a href='http://feedback.rhsmods.org/'>www.feedback.rhsmods.org</a>.<br/><br/><a href='http://www.rhsmods.org/'>www.rhsmods.org</a>";
            image = "\rhsafrf\addons\rhs_main\data\rhs_logobig_ca.paa";
            arguments[] = {};
        };
        class RHS_AFRF_AMMO {
            displayName = "Ammunition Acronyms";
            displayNameShort = "";
            description = "AP - Armor Piercing<br/>AP-T - Armor Piercing Tracer<br/>AP-I - Armor Piercing Incendiary<br/>APHE - Armour Piercing High Explosive<br/>APBC - Armour Piercing Ballistic Capped<br/>APCR - Armour Piercing Composite Rigid<br/>APDS - Armour Piercing Discarding Sabot<br/>APFSDS - Armour Piercing Fin Stabilised Discarding Sabot<br/>HE - High-explosive<br/>HE-T - High Explosive Tracer<br/>HE-I - High Explosive Incendiary<br/>HEAT - High Explosive Anti Tank<br/>";
            image = "\a3\ui_f\data\gui\cfg\Hints\ammotype_ca.paa";
            arguments[] = {};
        };
        class RHS_AFRF_AUTOLOADER {
            displayName = "Autoloaders";
            displayNameShort = "";
            description = "Use the FCS with the target key (by default T). When available, the binoculars key (by default B) open's the ballistic computer window where you can set manually the firing values (can be closed with ESC). The handbrake key (by default X) switch the kind of round that will be loaded next. The grenade key (by default G) erase the automatic lead calculation.<br/><br/>Selector translations:<br/><br/>О - High Explosive<br/>Б - Armor Piercing<br/>К - High Explosive Anti Tank<br/>У - Anti Tank Guided Missile";
            image = "\a3\ui_f\data\gui\cfg\Hints\firemode_ca.paa";
            arguments[] = {};
        };
        class RHS_AFRF_GROUNDRADAR {
            displayName = "Ground Radar";
            description = "The BRM-1K is equipped with a PSNR-5K 'Tall Mike' ground surveillance radar. The radar can be accesssed from the commander position via the action menu. Radar information is displayed on the map.<br/><br/>For more information please visit the wiki page at <a href='http://www.rhsmods.org/w/brm1k'>http://www.rhsmods.org/w/brm1k</a>";
            displayNameShort = "";
            image = "\a3\ui_f\data\gui\cfg\hints\Radar_ca.paa";
            arguments[] = {};
        };
        class RHS_AFRF_SHTORA {
            displayName = "SHTORA Protection System";
            description = "The T-90/T-90A/T-80UK is equipped with the SHTORA-1 protection system. When active it automatically detects and protects against beam guided anti-tank weapons systems such as the TOW ATGM. The system can be controlled from the commander position via the action menu.<br/><br/>For more information please visit the wiki page at <a href='http://www.rhsmods.org/w/t90'>http://www.rhsmods.org/w/t90</a>";
            displayNameShort = "";
            image = "\a3\ui_f\data\gui\cfg\hints\Designator_ca.paa";
            arguments[] = {};
        };
        class RHS_AFRF_RETREAD {
            displayName = "Spare Tyres";
            description = "Spare tyres can be used to replace damaged or destroyed wheels. To change a damaged wheel you have to be standing near the wheel and use the action menu on it. Once used the spare tyre will be unavailable until the vehicle is fully repaired.";
            displayNameShort = "";
            image = "\a3\ui_f\data\gui\cfg\hints\VehicleRepair_CA.paa";
            arguments[] = {};
        };
        class RHS_AFRF_KLENPS {
            displayName = "Su-25 Missile Guidance";
            displayNameShort = "Using the Klen-PS laser designator...";
            description = "The base model Su-25 in RHS is capable of launching several types of laser guided missiles such as the Kh-25, Kh-29, and S-25L. However, unlike default Arma 3 aircraft which use targeting cameras that people familiar with western aircraft might be used to, the basic model Su-25 in RHS has no such system in the real world or in game. Instead, it uses the Klen-PS laser designator located in the nose of the Su-25. Rather than being aimed by a camera, the Klen-PS is aimed through a crosshair located on the HUD whcih the pilot can move and lock to a specific point on the ground in front of the aircraft. The following is a basic firing proceedure using the Klen-PS:<br/><br/><br/><br/><br/>1. With the nose of the aircraft pointed at a target, press the %11 key to turn on the Klen-PS laser. Once the laser is active, a green light located to the bottom left of the HUD will turn on.<br/><br/>2. With the laser now active, the targeting reticle can be locked to a specific point on the ground via the %12 key and moved around the HUD via the user 15-18 keybindings. If those keys are bound, they will show up below:<br/>%2Move reticle left (User 15): %13<br/>%2Move reticle right (User 16): %14<br/>%2Move reticle up (User 17): %15<br/>%2Move reticle down (User 18): %16<br/><br/>3. With the laser locked to the ground and/or pointed at the target, fire a guided missile. Continue pointing the nose of the aircraft in the general direction of the target until the missile impacts the target. Moving the nose of the aircraft beyond the gimbal limit of the laser designator will cause the Klen-PS to lose its lock on the targeted point.<br/><br/>4. After the missile has impacted the target, it is %3extremely important%4 to turn off the Klen-PS laser by pressing the %11 key again. The laser on the Klen-PS can only stay on for a maximum of 60 seconds, but it requires a cool down period that is directly proportional to how long the laser has been active. The cool down period can be anywhere between 15 seconds and 1 minute, depending on how long the laser was active.<br/><br/><br/><br/><br/>For a more detailed walkthrough and other information, please visit the <a href='http://www.rhsmods.org/w/su25'>Su-25 Wiki page on the RHS website</a>.";
            image = "\a3\ui_f\data\gui\cfg\hints\Designator_ca.paa";
            arguments[] = {
                {{"vehLockTargets"}},
                {{"vehLockTurretView"}},
                {{"User15"}},
                {{"User16"}},
                {{"User17"}},
                {{"User18"}}
            };
        };
    };
    class RHS_Towing {
        displayName = "RHS: Towing";
        class RHS_AFRF_Towing_Prepare {
            displayName = "Preparing heavy weapon";
            description = "To prepare heavy weapon for towing or dragging:%1%2Get close to the heavy weapon%1Make sure heavy weapon has no crew%1%2Select %3<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\unloadVehicle_ca.paa' /> Switch to moving mode%4 from action menu";
            tip = "Vehicle can be switched to static mode in a same way by selecting %3<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa' /> Switch to static mode%4";
            logicalOrder = 1;
            image = "\rhsafrf\addons\rhs_main\data\hints\rhs_towing_prepare_ca.paa";
            arguments[] = {};
        };
        class RHS_AFRF_Towing_Attach {
            displayName = "Attaching heavy weapon";
            description = "To attach heavy weapon:%1%2Make sure that heavy weapon is in %3<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\unloadVehicle_ca.paa' />Moving Mode%4. %1%2Get close to hitch point of heavy weapon%1%2Select %3<img image='\rhsafrf\addons\rhs_main\data\actions\rhs_tow_attach_ca.paa' size='1.5'/> Select towing vehicle%4 from action menu%1%2Locate %3<img image='\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_loadDevice_ca.paa'/> Attach Point%4 on target vehicle%1%2Confirm selection by activating %3<img image='\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_loadDevice_ca.paa'/> Attach vehicle%4 action on target vehicle by holding %11.%1%1If there are no valid vehicles in 5 meters radius you will see a hint informing you about it after selecting %3<img image='\rhsafrf\addons\rhs_main\data\actions\rhs_tow_attach_ca.paa'  size='1.5'/> Select towing vehicle%4 action";
            tip = "Towing functionality requires per vehicle configuration so it might not work with all assets in game.";
            logicalOrder = 2;
            image = "\rhsafrf\addons\rhs_main\data\hints\rhs_towing_attach_ca.paa";
            arguments[] = {{{"Action"}}};
        };
        class RHS_AFRF_Towing_Detach {
            displayName = "Detaching heavy weapon";
            description = "To detach heavy weapon:%1%2Get close to the heavy weapon.%1%2Select %3<img image='\rhsafrf\addons\rhs_main\data\actions\rhs_tow_detach_ca.paa' size='1.5' />Detach vehicle%4 from the action menu.";
            logicalOrder = 3;
            image = "\rhsafrf\addons\rhs_main\data\hints\rhs_towing_detach_ca.paa";
            arguments[] = {};
        };
        class RHS_AFRF_Towing_Dragging {
            displayName = "Dragging heavy weapon";
            description = "Beside towing vehicles, player are also able to drag heavy weapons to desired place. To drag heavy weapon:%1%2Make sure that heavy weapon is in %3<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\unloadVehicle_ca.paa' />Moving Mode%4.%1%2Select %3<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\ladderup_ca.paa' /> <t color='#00FF7F'>Drag heavy weapon</t>%4 from action menu when looking at heavy weapon hitch point.%1%2Start dragging weapon by moving backwards with %12 key%1%1To stop dragging heavy weapon:%1%2Select %3Stop dragging%4 from the action menu.";
            tip = "If your character cannot move, try to change moving pace with %11 key.";
            logicalOrder = 4;
            image = "\rhsafrf\addons\rhs_main\data\hints\rhs_towing_dragging_ca.paa";
            arguments[] = {{{"TactToggle"}}, {{"MoveBack"}}};
        };
    };
};
class RHS_Effects_Helicopter_Hull_Destruction {
    ammoExplosionEffect = "";
    effectRadius = 1;
    ignoreFuel = 1;
    class RHS_Hull_Smoke {
        simulation = "particles";
        type = "SmallWreckSmoke";
        position = "hull_fire_1";
        intensity = 0.5;
        interval = 1;
        lifeTime = 60;
    };
    class RHS_Hull_Fire: RHS_Hull_Smoke {
        type = "MediumDestructionFire";
    };
    class RHS_Hull_Sparks: RHS_Hull_Smoke {
        type = "AirFireSparks";
    };
    class RHS_Hull_Sounds: RHS_Hull_Smoke {
        simulation = "sound";
        type = "Fire";
    };
    class RHS_Hull_Smoke_small1: RHS_Hull_Smoke {
        type = "WeaponWreckSmoke";
        position = "hull_fire_2";
    };
    class RHS_Hull_Smoke_small2: RHS_Hull_Smoke_small1 {
        position = "hull_fire_3";
    };
    class RHS_Hull_Fire_2: RHS_Hull_Smoke_small1 {
        type = "MediumDestructionFire";
    };
    class RHS_Hull_Fire_3: RHS_Hull_Smoke_small2 {
        type = "MediumDestructionFire";
    };
};
class RHS_Effects_Tank_Engine_Destruction {
    ammoExplosionEffect = "";
    effectRadius = 1;
    ignoreFuel = 1;
    class RHS_Engine_Smoke {
        simulation = "particles";
        type = "SmallWreckSmoke";
        position = "engine_smoke1";
        intensity = 0.5;
        interval = 1;
        lifeTime = 60;
        enabled = "engineDamage";
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
