class CfgPatches {
    class rhsusf_optics {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {"rhsusf_main"};
    };
};
class CfgFontFamilies {
    class rhsusf_digital_font {
        fonts[] = {"\rhsusf\addons\rhsusf_optics\scripts\digitalfont\digital46"};
    };
    class rhsusf_digital_font_var {
        fonts[] = {"\rhsusf\addons\rhsusf_optics\scripts\digitalfont_var\digital_var46"};
    };
    class rhsusf_digital_font_usa {
        fonts[] = {"\rhsusf\addons\rhsusf_optics\scripts\digitalfont_usa\digitalfont_usa46"};
    };
    class rhsusf_font_stencil {
        fonts[] = {"\rhsusf\addons\rhsusf_optics\scripts\font_stencil\font_stencil46"};
    };
    class rhsusf_txled {
        fonts[] = {
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled6",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled7",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled9",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled10",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled11",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled12",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled13",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled14",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled15",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled16",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled17",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled18",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled19",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled20",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled21",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled22",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled23",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled24",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled25",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled26",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled27",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled28",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled29",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled30",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled31",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled34",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled37",
            "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled46"
        };
        spaceWidth = 0.3;
        spacing = 0.2;
    };
};
class RscEdit;
class RscOpticsValue;
class RscOpticsText;
class RscIGUIText;
class RscIGUIValue;
class RscText;
class RscPicture;
class HScrollbar;
class VScrollbar;
class RscMapControl;
class RscControlsGroup;
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
class RHS_m1_ccp_computer {
    enableSimulation = 1;
    idd = 101;
    movingenable = 0;
    class Controls {
        class us_button_base: rhs_1v528_Button {
            idc = 1;
            soundClick[] = {"rhsusf\addons\rhsusf_optics\scripts\us_komp\sounds\button.wav", 0.89, 1};
            x = "0.477965 * safezoneW + safezoneX";
            y = "0.415365 * safezoneH + safezoneY";
            w = 0;
            h = 0;
        };
        class num9: us_button_base {
            idc = 7509;
            x = "0.477965 * safezoneW + safezoneX";
            y = "0.415365 * safezoneH + safezoneY";
            w = "0.0220355 * safezoneW";
            h = "0.0470196 * safezoneH";
            action = "[9] call rhsusf_fnc_ccp_setRange";
        };
        class num8: us_button_base {
            idc = 7508;
            x = "0.447115 * safezoneW + safezoneX";
            y = "0.415365 * safezoneH + safezoneY";
            w = "0.0220355 * safezoneW";
            h = "0.0470196 * safezoneH";
            action = "[8] call rhsusf_fnc_ccp_setRange";
        };
        class num7: us_button_base {
            idc = 7507;
            x = "0.414943 * safezoneW + safezoneX";
            y = "0.418186 * safezoneH + safezoneY";
            w = "0.0220355 * safezoneW";
            h = "0.0470196 * safezoneH";
            action = "[7] call rhsusf_fnc_ccp_setRange";
        };
        class num6: us_button_base {
            idc = 7506;
            x = "0.477965 * safezoneW + safezoneX";
            y = "0.490596 * safezoneH + safezoneY";
            w = "0.0220355 * safezoneW";
            h = "0.0470196 * safezoneH";
            action = "[6] call rhsusf_fnc_ccp_setRange";
        };
        class num5: us_button_base {
            idc = 7505;
            x = "0.447115 * safezoneW + safezoneX";
            y = "0.490596 * safezoneH + safezoneY";
            w = "0.0220355 * safezoneW";
            h = "0.0470196 * safezoneH";
            action = "[5] call rhsusf_fnc_ccp_setRange";
        };
        class num4: us_button_base {
            idc = 7504;
            x = "0.416265 * safezoneW + safezoneX";
            y = "0.490596 * safezoneH + safezoneY";
            w = "0.0220355 * safezoneW";
            h = "0.0470196 * safezoneH";
            action = "[4] call rhsusf_fnc_ccp_setRange";
        };
        class num3: us_button_base {
            idc = 7503;
            x = "0.477965 * safezoneW + safezoneX";
            y = "0.556424 * safezoneH + safezoneY";
            w = "0.0220355 * safezoneW";
            h = "0.0470196 * safezoneH";
            action = "[3] call rhsusf_fnc_ccp_setRange";
        };
        class num2: us_button_base {
            idc = 7502;
            x = "0.447115 * safezoneW + safezoneX";
            y = "0.556424 * safezoneH + safezoneY";
            w = "0.0220355 * safezoneW";
            h = "0.0470196 * safezoneH";
            action = "[2] call rhsusf_fnc_ccp_setRange";
        };
        class num1: us_button_base {
            idc = 7501;
            x = "0.416265 * safezoneW + safezoneX";
            y = "0.556424 * safezoneH + safezoneY";
            w = "0.0220355 * safezoneW";
            h = "0.0470196 * safezoneH";
            action = "[1] call rhsusf_fnc_ccp_setRange";
        };
        class num0: us_button_base {
            idc = 7500;
            x = "0.447115 * safezoneW + safezoneX";
            y = "0.622251 * safezoneH + safezoneY";
            w = "0.0220355 * safezoneW";
            h = "0.0470196 * safezoneH";
            action = "[0] call rhsusf_fnc_ccp_setRange";
        };
        class enter: us_button_base {
            idc = 7401;
            x = "0.411858 * safezoneW + safezoneX";
            y = "0.688079 * safezoneH + safezoneY";
            w = "0.0352567 * safezoneW";
            h = "0.0470196 * safezoneH";
            action = "[11] call rhsusf_fnc_ccp_setRange";
        };
        class clear: us_button_base {
            idc = 7402;
            x = "0.46915 * safezoneW + safezoneX";
            y = "0.688079 * safezoneH + safezoneY";
            w = "0.0352567 * safezoneW";
            h = "0.0470196 * safezoneH";
            action = "[12] call rhsusf_fnc_ccp_setRange";
        };
        class range: us_button_base {
            idc = 7403;
            x = "0.522035 * safezoneW + safezoneX";
            y = "0.603443 * safezoneH + safezoneY";
            w = "0.0352567 * safezoneW";
            h = "0.0752314 * safezoneH";
            action = "[13] call rhsusf_fnc_ccp_setRange";
        };
        class background: RscPicture {
            idc = 1200;
            text = "rhsusf\addons\rhsusf_c_m1a1\data\komputer_2d.paa";
            x = "0.314902 * safezoneW + safezoneX";
            y = "0.105035 * safezoneH + safezoneY";
            w = "0.370196 * safezoneW";
            h = "0.78993 * safezoneH";
        };
        class screen1: RscPicture {
            idc = 1201;
            text = "rhsusf\addons\rhsusf_c_m1a1\data\numbers\red_2.paa";
            x = "0.451522 * safezoneW + safezoneX";
            y = "0.3181325 * safezoneH + safezoneY";
            w = "0.0132213 * safezoneW";
            h = "0.0282118 * safezoneH";
        };
        class screen2: screen1 {
            idc = 1202;
            text = "rhsusf\addons\rhsusf_c_m1a1\data\numbers\red_2.paa";
            x = "0.436301 * safezoneW + safezoneX";
        };
        class screen3: screen1 {
            idc = 1203;
            text = "rhsusf\addons\rhsusf_c_m1a1\data\numbers\red_2.paa";
            x = "0.420672 * safezoneW + safezoneX";
        };
        class screen4: screen1 {
            idc = 1204;
            text = "rhsusf\addons\rhsusf_c_m1a1\data\numbers\red_2.paa";
            x = "0.403044 * safezoneW + safezoneX";
        };
        class range_lit: RscPicture {
            idc = 1205;
            text = "rhsusf\addons\rhsusf_optics\scripts\us_komp\range_lit.paa";
            x = "0.513221 * safezoneW + safezoneX";
            y = "0.584635 * safezoneH + safezoneY";
            w = "0.0528851 * safezoneW";
            h = "0.112847 * safezoneH";
        };
    };
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
    class RHS_RscWeaponZeroing: RscUnitInfo {
        idd = 300;
        controls[] = {"CA_Zeroing"};
    };
    class RHS_RscWeaponZeroing_TurretAdjust: RHS_RscWeaponZeroing {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhsusf_fnc_turret_gunnerAdjust";
        class RHS_Turret_GunnerAdjust_handler: RscPicture {
            idc = 9601;
        };
        controls[] = {"CA_Zeroing", "RHS_Turret_GunnerAdjust_handler"};
    };
    class RscUnitInfoTank;
    class RscUnitInfoAirNoWeapon: RscUnitInfo {
        class CA_VehicleTogglesBackground;
    };
    class RscUnitInfoAir: RscUnitInfoAirNoWeapon {
        class WeaponInfoControlsGroupRight;
    };
    class RscUnitInfoAirPlaneNoWeapon: RscUnitInfoAirNoWeapon {};
    class RscUnitInfoAirPlane: RscUnitInfoAirPlaneNoWeapon {};
    class RscUnitInfoArtillery: RscUnitInfo {
        class CA_VehicleTogglesBackground;
    };
    class RHSUSF_RscOptics_Empty_TGP: RscUnitInfo {
        idd = 300;
        controls[] = {};
    };
    class RHSUSF_RscUnitInfoWestTank: RscUnitInfoTank {};
    class RHS_RscUnitInfoM113: RHSUSF_RscUnitInfoWestTank {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhsusf_fnc_pipHandler_m113";
    };
    class RHS_RscUnitInfoM1117: RHSUSF_RscUnitInfoWestTank {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn rhsusf_fnc_pipHandler_m1117";
    };
    class RHS_RscUnitInfoStryker: RHSUSF_RscUnitInfoWestTank {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhsusf_fnc_stryker_unitInfo";
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
            "CA_VehicleTogglesBackground",
            "CA_VehicleToggles",
            "CA_SpeedBackground",
            "CA_SpeedUnits",
            "CA_Speed",
            "CA_ValueFuel",
            "DrawMap"
        };
        class DrawMap: RscMapControl {
            idc = 7001;
            type = 101;
            x = 0;
            y = 0;
            w = 0;
            h = 0;
        };
    };
    class RHS_RscUnitInfoStryker_M1134: RHS_RscUnitInfoStryker {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhsusf_fnc_stryker_unitInfo;_this call rhsusf_fnc_stryker_unitInfo_m1134";
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
            "CA_VehicleTogglesBackground",
            "CA_VehicleToggles",
            "CA_SpeedBackground",
            "CA_SpeedUnits",
            "CA_Speed",
            "CA_ValueFuel",
            "DrawMap",
            "RHS_TurretLock"
        };
        class RHS_TurretLock: RscPicture {
            idc = 10101;
            text = "\rhsusf\addons\rhsusf_optics\data\tex\rhs_turretLock_ca.paa";
            colorText[] = {
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
            };
            x = "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable ['GUI_GRID_VEHICLE_X',		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
            y = "2.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable ['GUI_GRID_VEHICLE_Y',		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
            w = "3.55 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
            h = "0.95 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
    };
    class RHS_RscUnitInfoMATV: RHS_RscUnitInfoStryker {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn rhsusf_fnc_matv_unitInfo";
    };
    class RHSUSF_RscUnitInfoAir_NoRadar: RscUnitInfoAir {
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
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); ['jet',17] spawn RHSUSF_fnc_randomRadio;_this call rhsusf_fnc_announcer;_this spawn rhs_fnc_dynamicObjectDrawing_loop";
        class CA_VehicleTogglesBackground: CA_VehicleTogglesBackground {
            idc = 1243;
        };
    };
    class RHSUSF_RscUnitInfoAir: RscUnitInfoAir {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); ['jet',17] spawn RHSUSF_fnc_randomRadio;_this call rhsusf_fnc_announcer;_this spawn rhs_fnc_dynamicObjectDrawing_loop";
    };
    class RHSUSF_RscUnitInfoAirPlane: RscUnitInfoAirPlane {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); ['jet',17] spawn RHSUSF_fnc_randomRadio;_this call rhsusf_fnc_announcer;_this spawn rhs_fnc_dynamicObjectDrawing_loop";
        class CA_VehicleTogglesBackground: CA_VehicleTogglesBackground {
            idc = 1243;
        };
    };
    class RHSUSF_RscUnitInfoJet: RscUnitInfoAirPlane {
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
            "CA_Throttle",
            "CA_Mode"
        };
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');['jet',17] spawn RHSUSF_fnc_randomRadio;_this call rhsusf_fnc_announcer;_this spawn rhs_fnc_dynamicObjectDrawing_loop";
        class CA_VehicleTogglesBackground: CA_VehicleTogglesBackground {
            idc = 1243;
        };
    };
    class RHSUSF_RscUnitInfoJet_F22: RscUnitInfoAirPlane {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');['jet',17] spawn RHSUSF_fnc_randomRadio;_this call rhsusf_fnc_announcer;_this spawn rhs_fnc_dynamicObjectDrawing_loop;_this call rhs_fnc_afterburner;[] call RHS_fnc_UI_Options";
        class CA_VehicleTogglesBackground: CA_VehicleTogglesBackground {
            idc = 1243;
        };
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
    };
    class RHSUSF_RscUnitInfoAir_UH60: RscUnitInfoArtillery {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); ['jet',17] spawn RHSUSF_fnc_randomRadio;_this call rhsusf_fnc_announcer;_this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
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
            "CA_Zeroing",
            "CA_Mode",
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
    };
    class RHSUSF_RscUnitInfoAir_CH47: RHSUSF_RscUnitInfoAir_UH60 {};
    class RHSUSF_RscUnitInfoAir_UH1Y: RHSUSF_RscUnitInfoAir_UH60 {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');['jet',17] spawn RHSUSF_fnc_randomRadio;_this call rhsusf_fnc_uh1_handler;_this call rhsusf_fnc_announcer;_this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
    };
    class RHSUSF_RscUnitInfoAir_AH64: RscUnitInfoArtillery {
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
            "CA_Zeroing",
            "CA_Mode",
            "RHS_UI_Handler",
            "RHS_WheelBrakes_SFM"
        };
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); ['jet',17] spawn RHSUSF_fnc_randomRadio;_this call rhsusf_fnc_announcer;_this spawn rhs_fnc_dynamicObjectDrawing_loop;_this call rhs_fnc_ah64_mainLoop;[] call RHS_fnc_UI_Options";
        class RHS_UI_Handler: RscPicture {
            idc = 8550;
        };
        class CA_VehicleTogglesBackground: CA_VehicleTogglesBackground {
            idc = 1243;
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
            x = "3.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable ['GUI_GRID_VEHICLE_X',		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
            y = "3.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable ['GUI_GRID_VEHICLE_Y',		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
            w = "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
            h = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
        class Objects {
            class Scope {
                idc = 411;
                type = 82;
                model = "\rhsusf\addons\rhsusf_optics\data\rhsusf_IHADSS_scope.p3d";
                scale = "0.05 * (SafeZoneW Min SafeZoneH)";
                direction[] = {0, 0, 1};
                up[] = {0, 1, 0};
                x = "20 * (((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
                y = "13.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
                z = 0.103;
                xBack = 0.5;
                yBack = 0.5;
                zBack = 0;
                inBack = 0;
                enableZoom = 0;
                zoomDuration = 4.001;
            };
        };
    };
    class RscUnitInfoAirRTDFullDigitalNoWeapon: RscUnitInfoAir {
        class WeaponInfoControlsGroupRight;
    };
    class RscUnitInfoAirRTDFullDigital: RscUnitInfoAirRTDFullDigitalNoWeapon {
        class WeaponInfoControlsGroupRight: WeaponInfoControlsGroupRight {
            class controls;
        };
    };
    class RHSUSF_RscUnitInfoAirRTDFullDigital_Base: RscUnitInfoAirRTDFullDigital {
        class WeaponInfoControlsGroupRight: WeaponInfoControlsGroupRight {
            class controls: controls {
                class CA_BackgroundWeapon;
                class CA_BackgroundWeaponTitle;
                class CA_BackgroundWeaponTitleDark;
                class CA_BackgroundWeaponMode;
                class CA_Weapon;
                class CA_ModeTexture;
                class CA_Mode;
                class CA_ValueReload;
                class CA_AmmoCount;
                class CA_MagCount;
                class CA_AmmoType;
                class CA_GrenadeType;
                class CA_GrenadeCount;
                class CA_GunnerWeapon;
            };
        };
    };
    class RHSUSF_RscUnitInfoAirRTDFullDigital: RHSUSF_RscUnitInfoAirRTDFullDigital_Base {
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
            "CA_Horizon_Lite",
            "CA_Speed_Analogue",
            "CA_Altitude_Analogue",
            "CA_Horizon_Analogue",
            "CA_Stability_Analogue",
            "CA_Compass_Analogue",
            "WeaponInfoControlsGroupRight",
            "CA_Mode"
        };
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); ['jet',17] spawn RHSUSF_fnc_randomRadio;_this call rhsusf_fnc_announcer;_this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
        class CA_VehicleTogglesBackground;
        class WeaponInfoControlsGroupRight: WeaponInfoControlsGroupRight {
            class controls: controls {
                class CA_BackgroundWeapon: CA_BackgroundWeapon {};
                class CA_BackgroundWeaponTitle: CA_BackgroundWeaponTitle {};
                class CA_BackgroundWeaponTitleDark: CA_BackgroundWeaponTitleDark {};
                class CA_BackgroundWeaponMode: CA_BackgroundWeaponMode {};
                class CA_Weapon: CA_Weapon {};
                class CA_ModeTexture: CA_ModeTexture {};
                class CA_ValueReload: CA_ValueReload {};
                class CA_AmmoCount: CA_AmmoCount {};
                class CA_MagCount: CA_MagCount {};
                class CA_AmmoType: CA_AmmoType {
                    y = "1.80 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                };
                class CA_GrenadeType: CA_GrenadeType {};
                class CA_GrenadeCount: CA_GrenadeCount {};
                class CA_GunnerWeapon: CA_GunnerWeapon {};
                class CA_Mode: RscText {
                    idc = -1;
                };
            };
        };
        class CA_Mode: RscText {
            idc = 149;
            colorText[] = {
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
            };
            x = "3.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_X"",		((safezoneX + safezoneW) - 		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 4.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
            y = "1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
            w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
            h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };
    };
    class RHSUSF_RscUnitInfoAirRTDFullDigital_NoRadar: RHSUSF_RscUnitInfoAirRTDFullDigital {
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
            "CA_Horizon_Lite",
            "CA_Speed_Analogue",
            "CA_Altitude_Analogue",
            "CA_Horizon_Analogue",
            "CA_Stability_Analogue",
            "CA_Compass_Analogue",
            "WeaponInfoControlsGroupRight",
            "CA_Mode"
        };
        class CA_VehicleTogglesBackground: CA_VehicleTogglesBackground {
            idc = 1243;
        };
    };
    class RHSUSF_RscUnitInfoAirRTDFullDigital_UH1Y: RHSUSF_RscUnitInfoAirRTDFullDigital_NoRadar {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');['jet',17] spawn RHSUSF_fnc_randomRadio;_this call rhsusf_fnc_uh1_handler;_this call rhsusf_fnc_announcer;_this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
    };
    class RHSUSF_RscUnitInfoAirRTDFullDigital_AH64: RHSUSF_RscUnitInfoAirRTDFullDigital_NoRadar {
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
            "CA_Horizon_Lite",
            "CA_Speed_Analogue",
            "CA_Altitude_Analogue",
            "CA_Horizon_Analogue",
            "CA_Stability_Analogue",
            "CA_Compass_Analogue",
            "WeaponInfoControlsGroupRight",
            "RHS_UI_Handler",
            "CA_Mode"
        };
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); ['jet',17] spawn RHSUSF_fnc_randomRadio;_this call rhsusf_fnc_announcer;_this spawn rhs_fnc_dynamicObjectDrawing_loop;_this call rhs_fnc_ah64_mainLoop;[] call RHS_fnc_UI_Options";
        class RHS_UI_Handler: RscPicture {
            idc = 8550;
        };
        class Objects {
            class Scope {
                idc = 411;
                type = 82;
                model = "\rhsusf\addons\rhsusf_optics\data\rhsusf_IHADSS_scope.p3d";
                scale = "0.05 * (SafeZoneW Min SafeZoneH)";
                direction[] = {0, 0, 1};
                up[] = {0, 1, 0};
                x = "20 * (((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
                y = "13.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
                z = 0.103;
                xBack = 0.5;
                yBack = 0.5;
                zBack = 0;
                inBack = 0;
                enableZoom = 0;
                zoomDuration = 4.001;
            };
        };
    };
    class RHSUSF_RscUnitInfoAirRTDFullDigital_MELB: RHSUSF_RscUnitInfoAirRTDFullDigital {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_MELB_fnc_handler";
    };
    class rhsusf_gui_optic_mortar: RscUnitInfo {
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
    class RHS_RscWeaponM1_FCS: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHSUSF_fnc_rF_M1";
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
                class RangeDigit1: RscPicture {
                    idc = 1;
                    x = "24.5 *   (0.01875 * Safezoneh)";
                    y = "36.7 *   (0.025 * SafezoneH)";
                    w = "1.5 *   (0.01875 * SafezoneH)";
                    h = "1.5 *   (0.025 * SafezoneH)";
                    text = "";
                    colorBackground[] = {0, 0, 0, 0};
                    colorText[] = {1, 1, 1, 1};
                    font = "EtelkaMonospacePro";
                    sizeEx = 0;
                    waitForLoad = 0;
                };
                class RangeDigit2: RangeDigit1 {
                    idc = 2;
                    x = "25.5 *   (0.01875 * Safezoneh)";
                };
                class RangeDigit3: RangeDigit1 {
                    idc = 3;
                    x = "26.5 *   (0.01875 * Safezoneh)";
                };
                class RangeDigit4: RangeDigit1 {
                    idc = 4;
                    x = "27.5 *   (0.01875 * Safezoneh)";
                };
                class Ready: RangeDigit1 {
                    idc = 5;
                    x = "23.7 *   (0.01875 * Safezoneh)";
                    y = "35.8 *   (0.025 * SafezoneH)";
                    w = "0.8 *   (0.01875 * SafezoneH)";
                    h = "0.8*   (0.025 * SafezoneH)";
                };
                class Multiple: RangeDigit1 {
                    idc = 6;
                    x = "24.95 *   (0.01875 * Safezoneh)";
                    y = "35.3 *   (0.025 * SafezoneH)";
                    w = "3.8 *   (0.01875 * SafezoneH)";
                    h = "1.8*   (0.025 * SafezoneH)";
                };
                class Fault: RangeDigit1 {
                    idc = 7;
                    x = "29 *   (0.01875 * Safezoneh)";
                    y = "35.9 *   (0.025 * SafezoneH)";
                    w = "1.2 *   (0.01875 * SafezoneH)";
                    h = "1.2*   (0.025 * SafezoneH)";
                };
                class CA_HorizontalCompass: RscPicture {
                    IDC = 207;
                    type = 105;
                    font = "EtelkaMonospacePro";
                    textSize = "0.02*SafezoneH";
                    style = 1;
                    color[] = {0.709, 0.972, 0.384, 1};
                    x = "13.04 * 		(0.01875 * SafezoneH)";
                    y = "8.0 * 		(0.025 * SafezoneH)";
                    w = "27.18 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                    imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
                    imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
                    imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassObsTurret.paa";
                    imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
                };
            };
        };
    };
    class RHS_RscUH1Y_Observer: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHSUSF_fnc_uh1_obsHandler";
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
                    idc = 180;
                    style = 1;
                    colorText[] = {0.48, 0.77, 0.46, 1};
                    sizeEx = "0.038*SafezoneH";
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "4.5";
                    x = "43.85 * 		(0.01875 * SafezoneH)";
                    y = "19.6 * 		(0.025 * SafezoneH)";
                    w = "0* 		(0.01875 * SafezoneH)";
                    h = "0 * 		(0.025 * SafezoneH)";
                };
                class CA_Distance: RscOpticsValue {
                    idc = 151;
                    style = 2;
                    colorText[] = {0.48, 0.77, 0.46, 1};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    x = "34.41 * 		(0.01875 * SafezoneH)";
                    y = "35.6 * 		(0.025 * SafezoneH)";
                    w = "0* 		(0.01875 * SafezoneH)";
                    h = "0 * 		(0.025 * SafezoneH)";
                };
                class CA_FlirMode: RscText {
                    idc = 153;
                    style = 0;
                    sizeEx = "0.0295*SafezoneH";
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "BHOT";
                    x = "11.15 * 		(0.01875 * SafezoneH)";
                    y = "15.34 * 		(0.025 * SafezoneH)";
                    w = "4.5 * 		(0.01875 * SafezoneH)";
                    h = "1.2 * 		(0.025 * SafezoneH)";
                };
                class CA_Laser: RscText {
                    idc = 158;
                    style = "0x30 + 0x800";
                    sizeEx = "0.038*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
                    x = "31.1 * 		(0.01875 * SafezoneH)";
                    y = "12.85 * 		(0.025 * SafezoneH)";
                    w = "3.5 * 		(0.01875 * SafezoneH)";
                    h = "1.5 * 		(0.025 * SafezoneH)";
                };
                class rhs_Distance: CA_Distance {
                    idc = 1;
                    text = "";
                    w = "6 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class rhs_zoom: RscText {
                    idc = 2;
                    text = "28 0";
                    colorText[] = {0.48, 0.77, 0.46, 1};
                    colorBackground[] = {0, 0, 0, 0};
                    sizeEx = "0.034*SafezoneH";
                    font = "rhsusf_digital_font_var";
                    x = "18.41 * 		(0.01875 * SafezoneH)";
                    y = "36.3 * 		(0.025 * SafezoneH)";
                    w = "6 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class rhs_grid1: CA_Distance {
                    idc = 3;
                    text = "1 3 2  4 2 3";
                    sizeEx = "0.02*SafezoneH";
                    x = "41.41 * 		(0.01875 * SafezoneH)";
                    y = "35.9 * 		(0.025 * SafezoneH)";
                    w = "6 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class rhs_grid2: rhs_grid1 {
                    idc = 31;
                    x = "3.61 * 		(0.01875 * SafezoneH)";
                    y = "35.6 * 		(0.025 * SafezoneH)";
                };
                class rhs_time1: rhs_grid1 {
                    idc = 4;
                    text = "12 41 23";
                    sizeEx = "0.028*SafezoneH";
                    x = "21.05 * 		(0.01875 * SafezoneH)";
                    y = "37.9 * 		(0.025 * SafezoneH)";
                };
                class rhs_time2: rhs_time1 {
                    idc = 41;
                    sizeEx = "0.035*SafezoneH";
                    x = "44.35 * 		(0.01875 * SafezoneH)";
                    y = "10.3 * 		(0.025 * SafezoneH)";
                };
                class rhs_arr_vert: RscPicture {
                    idc = 5;
                    text = "rhsusf\addons\rhsusf_optics\data\tex\arrow_vert.paa";
                    x = "10.65 * 		(0.01875 * SafezoneH)";
                    y = "10.8 * 		(0.025 * SafezoneH)";
                    w = "0.8 * 		(0.01875 * SafezoneH)";
                    h = "0.8 * 		(0.025 * SafezoneH)";
                };
                class rhs_arr_horiz: rhs_arr_vert {
                    idc = 6;
                    text = "rhsusf\addons\rhsusf_optics\data\tex\arrow_hor.paa";
                    x = "26.29 * 		(0.01875 * SafezoneH)";
                    y = "31.8 * 		(0.025 * SafezoneH)";
                };
            };
        };
    };
    class RHS_RscM1117_Commander: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHSUSF_fnc_m1117com";
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
                    idc = 180;
                    style = 1;
                    colorText[] = {0.48, 0.77, 0.46, 1};
                    sizeEx = "0.038*SafezoneH";
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "4.5";
                    x = "43.85 * 		(0.01875 * SafezoneH)";
                    y = "19.6 * 		(0.025 * SafezoneH)";
                    w = "0* 		(0.01875 * SafezoneH)";
                    h = "0 * 		(0.025 * SafezoneH)";
                };
            };
        };
    };
    class RHS_RscM153_CROWS: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhsusf_fnc_crows_m153_loader";
        controls[] = {"CA_Zeroing", "CA_IGUI_elements_group"};
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
                class DrawMap: RscMapControl {
                    idc = 6001;
                    type = 101;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                };
                class CA_TurretIndicator: RscPicture {
                    IDC = 206;
                    type = 105;
                    textSize = "0.02*SafezoneH";
                    style = 0;
                    color[] = {0.706, 0.0745, 0.0196, 1};
                    x = "4.45 * 		(0.01875 * SafezoneH)";
                    y = "31.36 * 		(0.025 * SafezoneH)";
                    w = "6 * 		(0.01875 * SafezoneH)";
                    h = "6 * 		(0.025 * SafezoneH)";
                    imageHull = "#(argb,8,8,3)color(0,0,0,0.0)";
                    imageTurret = "rhsusf\addons\rhsusf_optics\data\tex\turretIndicatorCROWS.paa";
                    imageObsTurret = "#(argb,8,8,3)color(0,0,0,0.0)";
                    imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
                };
                class CA_Distance: RscText {
                    idc = 198;
                    style = 0;
                    sizeEx = "0.04*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "2456";
                    x = "7.5 * 		(0.01875 * SafezoneH)";
                    y = "21.1 * 		(0.025 * SafezoneH)";
                    w = "4.5 * 		(0.01875 * SafezoneH)";
                    h = "1.1 * 		(0.025 * SafezoneH)";
                };
                class TextOpticsDistance: RscText {
                    style = 0;
                    sizeEx = "0.04*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    idc = 1003;
                    text = "LRF";
                    x = "4 * 		(0.01875 * SafezoneH)";
                    y = "21.1 * 		(0.025 * SafezoneH)";
                    w = "5.5 * 		(0.01875 * SafezoneH)";
                    h = "1.1 * 		(0.025 * SafezoneH)";
                };
                class CA_Zeroing: RscText {
                    idc = 1000;
                    style = 0;
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    sizeEx = "0.04*SafezoneH";
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "4.5";
                    x = "12 * 		(0.01875 * SafezoneH)";
                    y = "27.9 * 		(0.025 * SafezoneH)";
                    w = "8 * 		(0.01875 * SafezoneH)";
                    h = "1.1 * 		(0.025 * SafezoneH)";
                };
                class TextOpticsZero: RscText {
                    style = 0;
                    sizeEx = "0.04*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    idc = 1008;
                    text = "Ballistic";
                    x = "4 * 		(0.01875 * SafezoneH)";
                    y = "27.9 * 		(0.025 * SafezoneH)";
                    w = "8 * 		(0.01875 * SafezoneH)";
                    h = "1.1 * 		(0.025 * SafezoneH)";
                };
                class CA_OpticsZoom: RscText {
                    idc = 154;
                    style = 0;
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    sizeEx = "0.04*SafezoneH";
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "4.5";
                    x = "7.5 * 		(0.01875 * SafezoneH)";
                    y = "29 * 		(0.025 * SafezoneH)";
                    w = "5 * 		(0.01875 * SafezoneH)";
                    h = "1.1 * 		(0.025 * SafezoneH)";
                };
                class TextOpticsZoom: RscText {
                    style = 0;
                    sizeEx = "0.04*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    idc = 1008;
                    text = "FOV";
                    x = "4 * 		(0.01875 * SafezoneH)";
                    y = "29 * 		(0.025 * SafezoneH)";
                    w = "5.5 * 		(0.01875 * SafezoneH)";
                    h = "1.1 * 		(0.025 * SafezoneH)";
                };
                class CA_OpticsPitch: RscText {
                    idc = 182;
                    style = 0;
                    sizeEx = "0.04*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "36";
                    x = "7.5 * 		(0.01875 * SafezoneH)";
                    y = "30.1 * 		(0.025 * SafezoneH)";
                    w = "5.2 * 		(0.01875 * SafezoneH)";
                    h = "1.1 * 		(0.025 * SafezoneH)";
                };
                class TextOpticsPitch: RscText {
                    style = 0;
                    sizeEx = "0.04*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    idc = 1008;
                    text = "Elev";
                    x = "4 * 		(0.01875 * SafezoneH)";
                    y = "30.1 * 		(0.025 * SafezoneH)";
                    w = "5.5 * 		(0.01875 * SafezoneH)";
                    h = "1.1 * 		(0.025 * SafezoneH)";
                };
            };
        };
    };
    class RHS_RscM153_CROWS_Abrams: RHS_RscM153_CROWS {
        class CA_IGUI_elements_group: CA_IGUI_elements_group {
            class controls: controls {
                class DrawMap: DrawMap {};
                class CA_TurretIndicator: RscPicture {
                    IDC = 206;
                    type = 105;
                    textSize = "0.02*SafezoneH";
                    style = 0;
                    color[] = {0.706, 0.0745, 0.0196, 1};
                    x = "4.45 * 		(0.01875 * SafezoneH)";
                    y = "31.36 * 		(0.025 * SafezoneH)";
                    w = "6 * 		(0.01875 * SafezoneH)";
                    h = "6 * 		(0.025 * SafezoneH)";
                    imageHull = "#(argb,8,8,3)color(0,0,0,0.0)";
                    imageObsTurret = "rhsusf\addons\rhsusf_optics\data\tex\turretIndicatorCROWS.paa";
                    imageTurret = "#(argb,8,8,3)color(0,0,0,0.0)";
                    imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
                };
                class CA_Distance: CA_Distance {};
                class TextOpticsDistance: TextOpticsDistance {};
                class CA_Zeroing: CA_Zeroing {};
                class TextOpticsZero: TextOpticsZero {};
                class CA_OpticsZoom: CA_OpticsZoom {};
                class TextOpticsZoom: TextOpticsZoom {};
                class CA_OpticsPitch: CA_OpticsPitch {};
                class TextOpticsPitch: TextOpticsPitch {};
            };
        };
    };
    class RHS_RscStryker_M151_CROWS: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhsusf_fnc_stryker_m151_loader";
        controls[] = {"CA_Zeroing", "CA_IGUI_elements_group"};
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
                class RHS_UI_Handler: RscPicture {
                    idc = 8551;
                };
                class DrawMap: RscMapControl {
                    idc = 6001;
                    type = 101;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                };
                class CA_OpticsMode: RscText {
                    idc = 1542;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                };
                class CA_TurretIndicator: RscPicture {
                    IDC = 206;
                    type = 105;
                    textSize = "0.02*SafezoneH";
                    style = 0;
                    color[] = {0.706, 0.0745, 0.0196, 1};
                    x = "4.45 * 		(0.01875 * SafezoneH)";
                    y = "31.36 * 		(0.025 * SafezoneH)";
                    w = "6 * 		(0.01875 * SafezoneH)";
                    h = "6 * 		(0.025 * SafezoneH)";
                    imageHull = "#(argb,8,8,3)color(0,0,0,0.0)";
                    imageTurret = "rhsusf\addons\rhsusf_optics\data\tex\turretIndicatorCROWS.paa";
                    imageObsTurret = "#(argb,8,8,3)color(0,0,0,0.0)";
                    imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
                };
                class CA_Distance: RscText {
                    idc = 198;
                    style = 0;
                    sizeEx = "0.04*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "2456";
                    x = "7.5 * 		(0.01875 * SafezoneH)";
                    y = "21.1 * 		(0.025 * SafezoneH)";
                    w = "4.5 * 		(0.01875 * SafezoneH)";
                    h = "1.1 * 		(0.025 * SafezoneH)";
                };
                class TextOpticsDistance: RscText {
                    style = 0;
                    sizeEx = "0.04*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    idc = 1003;
                    text = "LRF";
                    x = "4 * 		(0.01875 * SafezoneH)";
                    y = "21.1 * 		(0.025 * SafezoneH)";
                    w = "5.5 * 		(0.01875 * SafezoneH)";
                    h = "1.1 * 		(0.025 * SafezoneH)";
                };
                class CA_Zeroing: RscText {
                    idc = 1000;
                    style = 0;
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    sizeEx = "0.04*SafezoneH";
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "4.5";
                    x = "12 * 		(0.01875 * SafezoneH)";
                    y = "27.9 * 		(0.025 * SafezoneH)";
                    w = "8 * 		(0.01875 * SafezoneH)";
                    h = "1.1 * 		(0.025 * SafezoneH)";
                };
                class TextOpticsZero: RscText {
                    style = 0;
                    sizeEx = "0.04*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    idc = 1001;
                    text = "Ballistic";
                    x = "4 * 		(0.01875 * SafezoneH)";
                    y = "27.9 * 		(0.025 * SafezoneH)";
                    w = "8 * 		(0.01875 * SafezoneH)";
                    h = "1.1 * 		(0.025 * SafezoneH)";
                };
                class CA_OpticsZoom: RscText {
                    idc = 154;
                    style = 0;
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    sizeEx = "0.04*SafezoneH";
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "4.5";
                    x = "7.5 * 		(0.01875 * SafezoneH)";
                    y = "29 * 		(0.025 * SafezoneH)";
                    w = "5 * 		(0.01875 * SafezoneH)";
                    h = "1.1 * 		(0.025 * SafezoneH)";
                };
                class TextOpticsZoom: RscText {
                    style = 0;
                    sizeEx = "0.04*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    idc = 1002;
                    text = "FOV";
                    x = "4 * 		(0.01875 * SafezoneH)";
                    y = "29 * 		(0.025 * SafezoneH)";
                    w = "5.5 * 		(0.01875 * SafezoneH)";
                    h = "1.1 * 		(0.025 * SafezoneH)";
                };
                class CA_OpticsPitch: RscText {
                    idc = 182;
                    style = 0;
                    sizeEx = "0.04*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "36";
                    x = "7.5 * 		(0.01875 * SafezoneH)";
                    y = "30.1 * 		(0.025 * SafezoneH)";
                    w = "5.2 * 		(0.01875 * SafezoneH)";
                    h = "1.1 * 		(0.025 * SafezoneH)";
                };
                class TextOpticsPitch: RscText {
                    style = 0;
                    sizeEx = "0.04*SafezoneH";
                    colorText[] = {0.706, 0.0745, 0.0196, 1};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    idc = 1003;
                    text = "Elev";
                    x = "4 * 		(0.01875 * SafezoneH)";
                    y = "30.1 * 		(0.025 * SafezoneH)";
                    w = "5.5 * 		(0.01875 * SafezoneH)";
                    h = "1.1 * 		(0.025 * SafezoneH)";
                };
            };
        };
    };
    class RHS_RscIBAS: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHSUSF_fnc_IBAS_handler";
        controls[] = {"CA_Zeroing", "CA_IGUI_elements_group"};
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
                class CA_Distance: RscText {
                    idc = 198;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "2456";
                    x = "27* 		(0.01875 * SafezoneH)";
                    y = "33.5 * 		(0.025 * SafezoneH)";
                    w = "2.5 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class FireSolutionValid: RscPicture {
                    idc = 200;
                    text = "rhsusf\addons\rhsusf_optics\data\tex\rhs_ibas_lase_bar.paa";
                    textSize = "0.02*SafezoneH";
                    x = "27.15 * 		(0.01875 * SafezoneH)";
                    y = "32.8 * 		(0.025 * SafezoneH)";
                    w = "1.5 * 		(0.01875 * SafezoneH)";
                    h = "1.5 * 		(0.025 * SafezoneH)";
                };
                class CA_TurretIndicator: RscPicture {
                    IDC = 206;
                    type = 105;
                    textSize = "0.02*SafezoneH";
                    style = 0;
                    color[] = {1, 1, 1, 1};
                    x = "33.1 * 		(0.01875 * SafezoneH)";
                    y = "29 * 		(0.025 * SafezoneH)";
                    w = "6 * 		(0.01875 * SafezoneH)";
                    h = "6 * 		(0.025 * SafezoneH)";
                    imageHull = "rhsusf\addons\rhsusf_optics\data\tex\turretindicatorhull_bradley.paa";
                    imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret_RWS.paa";
                    imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret_RWS.paa";
                    imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
                };
                class TextSightType: RscText {
                    idc = 1008;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "IBAS";
                    x = "7* 		(0.01875 * SafezoneH)";
                    y = "36.5 * 		(0.025 * SafezoneH)";
                    w = "2.5 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextRefreshRate: RscText {
                    idc = 154;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "60HZ";
                    x = "47* 		(0.01875 * SafezoneH)";
                    y = "2.5 * 		(0.025 * SafezoneH)";
                    w = "3 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextSightMode: RscText {
                    idc = 3;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "TV";
                    x = "8.75* 		(0.01875 * SafezoneH)";
                    y = "36.5 * 		(0.025 * SafezoneH)";
                    w = "1.25 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextWeapon: RscText {
                    idc = 4;
                    style = 160;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "HE";
                    x = "23* 		(0.01875 * SafezoneH)";
                    y = "33.5 * 		(0.025 * SafezoneH)";
                    w = "2 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextLowAmmo: RscText {
                    idc = 5;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "";
                    x = "30* 		(0.01875 * SafezoneH)";
                    y = "36.5 * 		(0.025 * SafezoneH)";
                    w = "4 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
            };
        };
    };
    class RHS_RscCIV: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHSUSF_fnc_IBAS_CIV_handler";
        controls[] = {"CA_Zeroing", "CA_IGUI_elements_group"};
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
                class CA_Distance: RscText {
                    idc = 198;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "2456";
                    x = "26.5* 		(0.01875 * SafezoneH)";
                    y = "35.5 * 		(0.025 * SafezoneH)";
                    w = "2.5 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class CA_TurretIndicator: RscPicture {
                    IDC = 206;
                    type = 105;
                    textSize = "0.02*SafezoneH";
                    style = 0;
                    color[] = {1, 1, 1, 1};
                    x = "33.1 * 		(0.01875 * SafezoneH)";
                    y = "31 * 		(0.025 * SafezoneH)";
                    w = "6 * 		(0.01875 * SafezoneH)";
                    h = "6 * 		(0.025 * SafezoneH)";
                    imageHull = "rhsusf\addons\rhsusf_optics\data\tex\turretindicatorhull_bradley.paa";
                    imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret_RWS.paa";
                    imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret_RWS.paa";
                    imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
                };
                class TextSightType: RscText {
                    idc = 1008;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "CIV";
                    x = "7* 		(0.01875 * SafezoneH)";
                    y = "36.5 * 		(0.025 * SafezoneH)";
                    w = "2.5 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextSightType2: RscText {
                    idc = 1008;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "CIV";
                    x = "26* 		(0.01875 * SafezoneH)";
                    y = "33 * 		(0.025 * SafezoneH)";
                    w = "2 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextRefreshRate: RscText {
                    idc = 154;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "60HZ";
                    x = "47* 		(0.01875 * SafezoneH)";
                    y = "2.5 * 		(0.025 * SafezoneH)";
                    w = "3 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextSightMode: RscText {
                    idc = 3;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "TV";
                    x = "8.75* 		(0.01875 * SafezoneH)";
                    y = "36.5 * 		(0.025 * SafezoneH)";
                    w = "1.25 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextWeapon: RscText {
                    idc = 4;
                    style = 160;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "HE";
                    x = "23.75* 		(0.01875 * SafezoneH)";
                    y = "35.5 * 		(0.025 * SafezoneH)";
                    w = "2 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextLowAmmo: RscText {
                    idc = 5;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "";
                    x = "30* 		(0.01875 * SafezoneH)";
                    y = "36.5 * 		(0.025 * SafezoneH)";
                    w = "4 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
            };
        };
    };
    class RHS_Rsc_ISU: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHSUSF_fnc_ISU_handler";
        controls[] = {"CA_Zeroing", "CA_IGUI_elements_group"};
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
                class CA_Distance: RscOpticsText {
                    idc = 6;
                    style = 2;
                    sizeEx = "0.075*SafezoneH";
                    colorText[] = {1, 0.15, 0.15, 0.65};
                    shadow = 0;
                    font = "rhsusf_digital_font";
                    text = "00";
                    x = "25 *   		(0.01875 * SafezoneH)";
                    y = "35 *   		(0.025 * SafezoneH)";
                    w = "3.5 * 		(0.01875 * SafezoneH)";
                    h = "2 * 		(0.025 * SafezoneH)";
                };
                class CA_OpticsMode: RscText {
                    idc = 154;
                    w = "0 * 		(0.01875 * SafezoneH)";
                    h = "0 * 		(0.025 * SafezoneH)";
                };
                class Indicator_HE: RscPicture {
                    idc = 1;
                    style = "0x30 + 0x800";
                    sizeEx = "0.028*SafezoneH";
                    colorText[] = {1, 0.15, 0.15, 0.65};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "\rhsusf\addons\rhsusf_optics\data\tex\ISU\HE_co.paa";
                    x = "19.25 * 			(0.01875 * SafezoneH)";
                    y = "35 * 		(0.025 * SafezoneH)";
                    w = "2 * 		(0.01875 * SafezoneH)";
                    h = "2 * 		(0.025 * SafezoneH)";
                };
                class Indicator_TOW: RscPicture {
                    idc = 2;
                    style = "0x30 + 0x800";
                    sizeEx = "0.028*SafezoneH";
                    colorText[] = {0.2941, 0.2941, 0.2941, 0.65};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "\rhsusf\addons\rhsusf_optics\data\tex\ISU\TOW_co.paa";
                    x = "21.25 * 			(0.01875 * SafezoneH)";
                    y = "35 * 		(0.025 * SafezoneH)";
                    w = "2 * 		(0.01875 * SafezoneH)";
                    h = "2 * 		(0.025 * SafezoneH)";
                };
                class Indecator_762: RscPicture {
                    idc = 3;
                    style = "0x30 + 0x800";
                    sizeEx = "0.028*SafezoneH";
                    colorText[] = {0.2941, 0.2941, 0.2941, 0.65};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "\rhsusf\addons\rhsusf_optics\data\tex\ISU\762_co.paa";
                    x = "30.25 * 		(0.01875 * SafezoneH)";
                    y = "35 * 		(0.025 * SafezoneH)";
                    w = "2 * 		(0.01875 * SafezoneH)";
                    h = "2 * 		(0.025 * SafezoneH)";
                };
                class Indicator_AP: RscPicture {
                    idc = 4;
                    style = "0x30 + 0x800";
                    sizeEx = "0.028*SafezoneH";
                    colorText[] = {0.2941, 0.2941, 0.2941, 0.65};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "\rhsusf\addons\rhsusf_optics\data\tex\ISU\AP_co.paa";
                    x = "32.25 * 		(0.01875 * SafezoneH)";
                    y = "35 * 		(0.025 * SafezoneH)";
                    w = "2 * 		(0.01875 * SafezoneH)";
                    h = "2 * 		(0.025 * SafezoneH)";
                };
                class Reticle: RscPicture {
                    idc = 5;
                    style = "0x30 + 0x800";
                    sizeEx = "0.028*SafezoneH";
                    colorText[] = {1, 0.15, 0.15, 0.65};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "a3\weapons_f\reticle\data\optics_gunner_mtb_01_ca.paa";
                    x = "14.65 * 		(0.01875 * SafezoneH)";
                    y = "8 * 		(0.025 * SafezoneH)";
                    w = "24 * 		(0.01875 * SafezoneH)";
                    h = "24 * 		(0.025 * SafezoneH)";
                };
            };
        };
    };
    class RHS_RscODS_ISU: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHSUSF_fnc_ODS_ISU_handler";
        controls[] = {"CA_Zeroing", "CA_IGUI_elements_group"};
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
                class CA_Distance: RscOpticsText {
                    idc = 198;
                    style = 2;
                    sizeEx = "0.075*SafezoneH";
                    colorText[] = {1, 0.15, 0.15, 0.65};
                    shadow = 0;
                    font = "rhsusf_digital_font";
                    text = "- - - -";
                    x = "23.25 *   		(0.01875 * SafezoneH)";
                    y = "35 *   		(0.025 * SafezoneH)";
                    w = "7 * 		(0.01875 * SafezoneH)";
                    h = "2 * 		(0.025 * SafezoneH)";
                };
                class CA_OpticsMode: RscText {
                    idc = 154;
                    w = "0 * 		(0.01875 * SafezoneH)";
                    h = "0 * 		(0.025 * SafezoneH)";
                };
                class Indicator_HE: RscPicture {
                    idc = 1;
                    style = "0x30 + 0x800";
                    sizeEx = "0.028*SafezoneH";
                    colorText[] = {1, 0.15, 0.15, 0.65};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "\rhsusf\addons\rhsusf_optics\data\tex\ISU\HE_co.paa";
                    x = "19.25 * 			(0.01875 * SafezoneH)";
                    y = "35 * 		(0.025 * SafezoneH)";
                    w = "2 * 		(0.01875 * SafezoneH)";
                    h = "2 * 		(0.025 * SafezoneH)";
                };
                class Indicator_TOW: RscPicture {
                    idc = 2;
                    style = "0x30 + 0x800";
                    sizeEx = "0.028*SafezoneH";
                    colorText[] = {0.2941, 0.2941, 0.2941, 0.65};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "\rhsusf\addons\rhsusf_optics\data\tex\ISU\TOW_co.paa";
                    x = "21.25 * 			(0.01875 * SafezoneH)";
                    y = "35 * 		(0.025 * SafezoneH)";
                    w = "2 * 		(0.01875 * SafezoneH)";
                    h = "2 * 		(0.025 * SafezoneH)";
                };
                class Indecator_762: RscPicture {
                    idc = 3;
                    style = "0x30 + 0x800";
                    sizeEx = "0.028*SafezoneH";
                    colorText[] = {0.2941, 0.2941, 0.2941, 0.65};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "\rhsusf\addons\rhsusf_optics\data\tex\ISU\762_co.paa";
                    x = "30.25 * 		(0.01875 * SafezoneH)";
                    y = "35 * 		(0.025 * SafezoneH)";
                    w = "2 * 		(0.01875 * SafezoneH)";
                    h = "2 * 		(0.025 * SafezoneH)";
                };
                class Indicator_AP: RscPicture {
                    idc = 4;
                    style = "0x30 + 0x800";
                    sizeEx = "0.028*SafezoneH";
                    colorText[] = {0.2941, 0.2941, 0.2941, 0.65};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "\rhsusf\addons\rhsusf_optics\data\tex\ISU\AP_co.paa";
                    x = "32.25 * 		(0.01875 * SafezoneH)";
                    y = "35 * 		(0.025 * SafezoneH)";
                    w = "2 * 		(0.01875 * SafezoneH)";
                    h = "2 * 		(0.025 * SafezoneH)";
                };
                class Reticle: RscPicture {
                    idc = 5;
                    style = "0x30 + 0x800";
                    sizeEx = "0.028*SafezoneH";
                    colorText[] = {1, 0.15, 0.15, 0.65};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "a3\weapons_f\reticle\data\optics_gunner_mtb_01_ca.paa";
                    x = "14.65 * 		(0.01875 * SafezoneH)";
                    y = "8 * 		(0.025 * SafezoneH)";
                    w = "24 * 		(0.01875 * SafezoneH)";
                    h = "24 * 		(0.025 * SafezoneH)";
                };
            };
        };
    };
    class RHSUSF_RscOptics_A10A_TVM: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn rhsusf_fnc_a10a_tvm_screen;";
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
                class rhs_cross: RscPicture {
                    idc = 1;
                    text = "\rhsusf\addons\rhsusf_a2port_air\A10\data\rhs_tvm_cross_ca.paa";
                    x = "25.9 * 		(0.01875 * SafezoneH)";
                    y = "18.8 * 		(0.025 * SafezoneH)";
                    w = "1.8 * 		(0.01875 * SafezoneH)";
                    h = "1.8 * 		(0.025 * SafezoneH)";
                };
                class rhs_bgr: RscPicture {
                    idc = 2;
                    text = "\rhsusf\addons\rhsusf_a2port_air\A10\data\rhs_tvm_bg_off_co.paa";
                    x = "3.05 	*   (0.01875 * SafezoneH)";
                    y = "-4.6 	* 	(0.025 * SafezoneH)";
                    w = "46.65	* 	(0.01875 * SafezoneH)";
                    h = "46.8 	* 	(0.025 * SafezoneH)";
                };
                class CA_OpticsMode: RscText {
                    idc = 180;
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
    class RHS_RscCWSS: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHSUSF_fnc_CWSS_handler";
        controls[] = {"CA_Zeroing", "CA_IGUI_elements_group"};
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
                    w = "0 * 		(0.01875 * SafezoneH)";
                    h = "0 * 		(0.025 * SafezoneH)";
                };
                class Reticle: RscPicture {
                    idc = 1;
                    style = "0x30 + 0x800";
                    sizeEx = "0.028*SafezoneH";
                    colorText[] = {1, 1, 1, 0.65};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "rhsusf\addons\rhsusf_optics\data\tex\CWSS\comoptics_m1a1_ca.paa";
                    x = "14.65 * 		(0.01875 * SafezoneH)";
                    y = "8 * 		(0.025 * SafezoneH)";
                    w = "24 * 		(0.01875 * SafezoneH)";
                    h = "24 * 		(0.025 * SafezoneH)";
                };
                class TextPos: RscText {
                    idc = 3;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 0, 0, 0};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "POS";
                    x = "10* 		(0.01875 * SafezoneH)";
                    y = "28 * 		(0.025 * SafezoneH)";
                    w = "2.5 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextGrid: RscText {
                    idc = 4;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 0, 0, 0};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "-	-	-		-	-	-";
                    x = "10* 		(0.01875 * SafezoneH)";
                    y = "29 * 		(0.025 * SafezoneH)";
                    w = "10 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextDate: RscText {
                    idc = 5;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 0, 0, 0};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "04-07-76";
                    x = "10* 		(0.01875 * SafezoneH)";
                    y = "30 * 		(0.025 * SafezoneH)";
                    w = "8 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextSightMode: RscText {
                    idc = 2;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 0, 0, 0};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "DAY";
                    x = "40* 		(0.01875 * SafezoneH)";
                    y = "13 * 		(0.025 * SafezoneH)";
                    w = "3 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
            };
        };
    };
    class RHS_RscLRAS3: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHSUSF_fnc_LRAS3_handler";
        controls[] = {"CA_Zeroing", "CA_IGUI_elements_group"};
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
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                };
                class CA_FlirMode: RscText {
                    idc = 153;
                    style = 2;
                    colorText[] = {1, 1, 1, 0};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    x = 0;
                    y = "(SafezoneY+SafezoneH) - 0.195";
                    w = 0;
                    h = 0;
                };
                class CA_OpticsPitch: RscText {
                    idc = 175;
                    style = 2;
                    colorText[] = {1, 1, 1, 0};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "36";
                    x = 0;
                    y = "(SafezoneY+SafezoneH) - 0.195";
                    w = 0;
                    h = 0;
                };
                class CA_TargetGrid: RscText {
                    idc = 172;
                    style = 2;
                    colorText[] = {1, 1, 1, 0};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "";
                    x = 0;
                    y = "(SafezoneY+SafezoneH) - 0.195";
                    w = 0;
                    h = 0;
                };
                class CA_Elev: RscText {
                    idc = 151;
                    style = 2;
                    colorText[] = {1, 1, 1, 0};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "";
                    x = 0;
                    y = "(SafezoneY+SafezoneH) - 0.195";
                    w = 0;
                    h = 0;
                };
                class TextFlirMode: RscText {
                    idc = 1000;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 1, 0, 0.65};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "FLIR - WH";
                    x = "46* 		(0.01875 * SafezoneH)";
                    y = "2.5 * 		(0.025 * SafezoneH)";
                    w = "3.5 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextClear: RscText {
                    idc = -1;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 1, 0, 0.65};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "CLEAR";
                    x = "46* 		(0.01875 * SafezoneH)";
                    y = "3.2 * 		(0.025 * SafezoneH)";
                    w = "2.5 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextStare: RscText {
                    idc = -1;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 1, 0, 0.65};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "STARE";
                    x = "46* 		(0.01875 * SafezoneH)";
                    y = "3.9 * 		(0.025 * SafezoneH)";
                    w = "2.5 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextLaserReturnMode: RscText {
                    idc = -1;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 1, 0, 0.65};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "FIRST";
                    x = "46* 		(0.01875 * SafezoneH)";
                    y = "4.6 * 		(0.025 * SafezoneH)";
                    w = "2.5 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextTime: RscText {
                    idc = -1;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 1, 0, 0.65};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "TIME";
                    x = "7* 		(0.01875 * SafezoneH)";
                    y = "33.5 * 		(0.025 * SafezoneH)";
                    w = "2.5 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextCurrentTime: RscText {
                    idc = 1001;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 1, 0, 0.65};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "HH:MM";
                    x = "9* 		(0.01875 * SafezoneH)";
                    y = "33.5 * 		(0.025 * SafezoneH)";
                    w = "3.5 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextSight: RscText {
                    idc = -1;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 1, 0, 0.65};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "SIGHT";
                    x = "7* 		(0.01875 * SafezoneH)";
                    y = "35 * 		(0.025 * SafezoneH)";
                    w = "3.5 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextSightPos: RscText {
                    idc = 1002;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 1, 0, 0.65};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "";
                    x = "9.5* 		(0.01875 * SafezoneH)";
                    y = "35 * 		(0.025 * SafezoneH)";
                    w = "7 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextRange: RscText {
                    idc = -1;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 1, 0, 0.65};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "RANGE";
                    x = "23* 		(0.01875 * SafezoneH)";
                    y = "33.5 * 		(0.025 * SafezoneH)";
                    w = "7 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextRangeVal: RscText {
                    idc = 1003;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 1, 0, 0.65};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "";
                    x = "27* 		(0.01875 * SafezoneH)";
                    y = "33.5 * 		(0.025 * SafezoneH)";
                    w = "7 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextTgt: RscText {
                    idc = -1;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 1, 0, 0.65};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "TGT";
                    x = "22* 		(0.01875 * SafezoneH)";
                    y = "35 * 		(0.025 * SafezoneH)";
                    w = "3.5 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextTgtPos: RscText {
                    idc = 1004;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 1, 0, 0.65};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "";
                    x = "24.5* 		(0.01875 * SafezoneH)";
                    y = "35 * 		(0.025 * SafezoneH)";
                    w = "7 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextAzimuth: RscText {
                    idc = -1;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 1, 0, 0.65};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "AZ";
                    x = "38* 		(0.01875 * SafezoneH)";
                    y = "35 * 		(0.025 * SafezoneH)";
                    w = "3.5 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextAzimuthVal: RscText {
                    idc = 156;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 1, 0, 0.65};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "360";
                    x = "39.5* 		(0.01875 * SafezoneH)";
                    y = "35 * 		(0.025 * SafezoneH)";
                    w = "7 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextElevation: RscText {
                    idc = -1;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 1, 0, 0.65};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "EL";
                    x = "42.5* 		(0.01875 * SafezoneH)";
                    y = "35 * 		(0.025 * SafezoneH)";
                    w = "3.5 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
                class TextElevationVal: RscText {
                    idc = 1006;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 1, 0, 0.65};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "69";
                    x = "44.5* 		(0.01875 * SafezoneH)";
                    y = "35 * 		(0.025 * SafezoneH)";
                    w = "7 * 		(0.01875 * SafezoneH)";
                    h = "1 * 		(0.025 * SafezoneH)";
                };
            };
        };
        class Objects {
            class MainSight {
                idc = 901;
                type = 82;
                model = "\rhsusf\addons\rhsusf_optics\data\rhsusf_LRAS3_cross.p3d";
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
                    class LRAS3_Scale {
                        source = "user";
                        animPeriod = 0.000001;
                        initPhase = 10;
                    };
                };
            };
        };
    };
    class RHS_RscITAS: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHSUSF_fnc_ITAS_handler";
        controls[] = {"CA_Zeroing", "CA_IGUI_elements_group"};
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
                class CA_FOVMode: RscText {
                    idc = 154;
                    style = 2;
                    colorText[] = {1, 1, 1, 0};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    x = 0;
                    y = "(SafezoneY+SafezoneH) - 0.195";
                    w = 0;
                    h = 0;
                };
                class CA_Elev: RscText {
                    idc = 151;
                    style = 2;
                    colorText[] = {1, 1, 1, 0};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "";
                    x = 0;
                    y = "(SafezoneY+SafezoneH) - 0.195";
                    w = 0;
                    h = 0;
                };
                class TempText: RscText {
                    idc = -1;
                    style = 16;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {1, 0, 1, 0};
                    colorBackground[] = {0, 0, 1, 0};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "";
                    x = 0;
                    y = "(SafezoneY+SafezoneH) - 0.195";
                    w = 0;
                    h = 0;
                };
                class ModeText: RscText {
                    idc = 1000;
                    style = 16;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    colorBackground[] = {0, 0, 0, 1};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "MANUAL\nENGAGE";
                    x = "12 * 		(0.01875 * SafezoneH)";
                    y = "3 * 		(0.025 * SafezoneH)";
                    w = "3.5 * 		(0.01875 * SafezoneH)";
                    h = "2.5 * 		(0.025 * SafezoneH)";
                };
                class ModeBox: RscText {
                    idc = 1001;
                    style = 160;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "";
                    x = "12 * 		(0.01875 * SafezoneH)";
                    y = "3 * 		(0.025 * SafezoneH)";
                    w = "3.5 * 		(0.01875 * SafezoneH)";
                    h = "2.5 * 		(0.025 * SafezoneH)";
                };
                class StateText: RscText {
                    idc = 1002;
                    style = 16;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    colorBackground[] = {0, 0, 0, 1};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "DAY\nWFOV\nFIRST";
                    x = "38 * 		(0.01875 * SafezoneH)";
                    y = "3 * 		(0.025 * SafezoneH)";
                    w = "3 * 		(0.01875 * SafezoneH)";
                    h = "3.5 * 		(0.025 * SafezoneH)";
                };
                class StateBox: RscText {
                    idc = 1003;
                    style = 160;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "";
                    x = "38 * 		(0.01875 * SafezoneH)";
                    y = "3 * 		(0.025 * SafezoneH)";
                    w = "3 * 		(0.01875 * SafezoneH)";
                    h = "3.5 * 		(0.025 * SafezoneH)";
                };
                class ZoomText: RscText {
                    idc = 1004;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    colorBackground[] = {0, 0, 0, 0};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "";
                    x = "38 * 		(0.01875 * SafezoneH)";
                    y = "6.5 * 		(0.025 * SafezoneH)";
                    w = "1.2 * 		(0.01875 * SafezoneH)";
                    h = "0.8 * 		(0.025 * SafezoneH)";
                };
                class RangeText: RscText {
                    idc = 1005;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 1, 0, 0.65};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "";
                    x = "27 * 		(0.01875 * SafezoneH)";
                    y = "30 * 		(0.025 * SafezoneH)";
                    w = "2 * 		(0.01875 * SafezoneH)";
                    h = "0.8 * 		(0.025 * SafezoneH)";
                };
                class MissileIcon: RscPicture {
                    idc = 1006;
                    style = "0x30 + 0x800";
                    sizeEx = "0.028*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "";
                    x = "12 * 		(0.01875 * SafezoneH)";
                    y = "34 * 		(0.025 * SafezoneH)";
                    w = "4 * 		(0.01875 * SafezoneH)";
                    h = "4 * 		(0.025 * SafezoneH)";
                };
                class MissileText: RscText {
                    idc = 1007;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {1, 1, 1, 1};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "";
                    x = "12.5 * 		(0.01875 * SafezoneH)";
                    y = "35.7 * 		(0.025 * SafezoneH)";
                    w = "2.6 * 		(0.01875 * SafezoneH)";
                    h = "0.7 * 		(0.025 * SafezoneH)";
                };
            };
        };
    };
    class RHS_RscMITAS: RscUnitInfo {
        idd = 300;
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHSUSF_fnc_MITAS_handler";
        controls[] = {"CA_Zeroing", "CA_IGUI_elements_group"};
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
                class CA_FOVMode: RscText {
                    idc = 154;
                    style = 2;
                    colorText[] = {1, 1, 1, 0};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    x = 0;
                    y = "(SafezoneY+SafezoneH) - 0.195";
                    w = 0;
                    h = 0;
                };
                class CA_Elev: RscText {
                    idc = 151;
                    style = 2;
                    colorText[] = {1, 1, 1, 0};
                    shadow = 0;
                    font = "EtelkaMonospacePro";
                    text = "";
                    x = 0;
                    y = "(SafezoneY+SafezoneH) - 0.195";
                    w = 0;
                    h = 0;
                };
                class TempText: RscText {
                    idc = -1;
                    style = 16;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {1, 0, 1, 0};
                    colorBackground[] = {0, 0, 1, 0};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "";
                    x = 0;
                    y = "(SafezoneY+SafezoneH) - 0.195";
                    w = 0;
                    h = 0;
                };
                class ModeText: RscText {
                    idc = 1000;
                    style = 16;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 1, 0, 0.65};
                    colorBackground[] = {0, 0, 0, 0};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "MANUAL\nENGAGE";
                    x = "12 * 		(0.01875 * SafezoneH)";
                    y = "3 * 		(0.025 * SafezoneH)";
                    w = "3.5 * 		(0.01875 * SafezoneH)";
                    h = "2.5 * 		(0.025 * SafezoneH)";
                };
                class ModeBox: RscText {
                    idc = 1001;
                    style = 160;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 1, 0, 0.65};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "";
                    x = "12 * 		(0.01875 * SafezoneH)";
                    y = "3 * 		(0.025 * SafezoneH)";
                    w = "3.5 * 		(0.01875 * SafezoneH)";
                    h = "2.5 * 		(0.025 * SafezoneH)";
                };
                class StateText: RscText {
                    idc = 1002;
                    style = 16;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 1, 0, 0.65};
                    colorBackground[] = {0, 0, 0, 0};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "DAY\nWFOV\nFIRST";
                    x = "38 * 		(0.01875 * SafezoneH)";
                    y = "3 * 		(0.025 * SafezoneH)";
                    w = "3 * 		(0.01875 * SafezoneH)";
                    h = "3.5 * 		(0.025 * SafezoneH)";
                };
                class StateBox: RscText {
                    idc = 1003;
                    style = 160;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 1, 0, 0.65};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "";
                    x = "38 * 		(0.01875 * SafezoneH)";
                    y = "3 * 		(0.025 * SafezoneH)";
                    w = "3 * 		(0.01875 * SafezoneH)";
                    h = "3.5 * 		(0.025 * SafezoneH)";
                };
                class ZoomText: RscText {
                    idc = 1004;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 1, 0, 0.65};
                    colorBackground[] = {0, 0, 0, 0};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "";
                    x = "38 * 		(0.01875 * SafezoneH)";
                    y = "6.5 * 		(0.025 * SafezoneH)";
                    w = "1.2 * 		(0.01875 * SafezoneH)";
                    h = "0.8 * 		(0.025 * SafezoneH)";
                };
                class RangeText: RscText {
                    idc = 1005;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 1, 0, 0.65};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "";
                    x = "27 * 		(0.01875 * SafezoneH)";
                    y = "30 * 		(0.025 * SafezoneH)";
                    w = "2 * 		(0.01875 * SafezoneH)";
                    h = "0.8 * 		(0.025 * SafezoneH)";
                };
                class MissileIcon: RscPicture {
                    idc = 1006;
                    style = "0x30 + 0x800";
                    sizeEx = "0.028*SafezoneH";
                    colorText[] = {0, 1, 0, 0.65};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "";
                    x = "12 * 		(0.01875 * SafezoneH)";
                    y = "34 * 		(0.025 * SafezoneH)";
                    w = "4 * 		(0.01875 * SafezoneH)";
                    h = "4 * 		(0.025 * SafezoneH)";
                };
                class MissileText: RscText {
                    idc = 1007;
                    style = 0;
                    sizeEx = "0.02*SafezoneH";
                    colorText[] = {0, 1, 0, 0.65};
                    shadow = 0;
                    font = "rhsusf_digital_font_var";
                    text = "";
                    x = "12.5 * 		(0.01875 * SafezoneH)";
                    y = "35.7 * 		(0.025 * SafezoneH)";
                    w = "2.6 * 		(0.01875 * SafezoneH)";
                    h = "0.7 * 		(0.025 * SafezoneH)";
                };
            };
        };
    };
};
class CfgFunctions {
    class RHSUSF {
        tag = "RHSUSF";
        class functions {
            class RF_M1 {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_rf_m1.sqf";
                description = "FCS Script for M1 Abrams series";
            };
            class rf_M1_digit {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_rf_m1_digit.sqf";
                description = "FCS Digits showing Script for M1 Abrams series";
            };
            class rf_M1_elev {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_rf_m1_elev.sqf";
                description = "FCS Digits showing Script for M1 Abrams series";
            };
            class sight_m1_lead {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_lead_m1.sqf";
                description = "M1 Lead calculation";
            };
            class fireOnMove {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_fireOnMove.sqf";
                description = "Fire on move script";
            };
            class ccp_setRange {
                file = "\rhsusf\addons\rhsusf_optics\scripts\us_komp\setRange.sqf";
                description = "FCS Digits showing Script for M1 Abrams series";
            };
            class findAngle {
                file = "\rhsusf\addons\rhsusf_optics\scripts\RHS_findAngle.sqf";
                description = "FCS PLISSA for T-80UE-1";
            };
            class calcBalistic {
                file = "\rhsusf\addons\rhsusf_optics\scripts\RHS_calcBalistic.sqf";
                description = "FCS PLISSA for T-80UE-1";
            };
            class gunOffset {
                file = "\rhsusf\addons\rhsusf_optics\scripts\RHS_gunOffset.sqf";
                description = "Gun & view mem point offset fixer";
            };
            class uh1_Handler {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_uh1_Handler.sqf";
                description = "UH-1Y FLIR Observer Handler";
            };
            class uh1_obsHandler {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_uh1_obsHandler.sqf";
                description = "UH-1Y FLIR Observer Handler";
            };
            class announcer {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_announcer.sqf";
                description = "Announcer handler";
            };
            class incomingMissile {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_incomingMissle.sqf";
                description = "incoming missile voice announcer";
            };
            class pipHandler_m113 {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_pipHandler_m113.sqf";
                description = "M113 Driver PiP Handler";
            };
            class pipHandler_m1117 {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_pipHandler_m1117.sqf";
                description = "M1117 gunner feed Handler";
            };
            class m1117com {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_m1117com.sqf";
                description = "M1117 gunner feed";
            };
            class autoTrack {
                file = "\rhsusf\addons\rhsusf_optics\scripts\RHS_autoTrack.sqf";
                description = "Auto track target script";
            };
            class laserTarget {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_laserTarget.sqf";
                description = "Additional functionality and interaction for FCS laser range finders";
            };
            class ammoIndexing {
                file = "\rhsusf\addons\rhsusf_optics\scripts\RHS_ammoIndexing.sqf";
                description = "Indexing rounds in carousel";
            };
            class randomRadio {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_randomRadio.sqf";
                description = "Random Radio script";
            };
            class IBAS_handler {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_ibas_handler.sqf";
                description = "FCS handler for M2A3 IBAS sight (used on M2A2SA/M2A3/M2A3ECP1/M2A3ECP2)";
            };
            class IBAS_CIV_handler {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_ibas_civ_handler.sqf";
                description = "FCS handler for M2A3 CIV commander's sight (used on M2A2SA/M2A3/M2A3ECP1/M2A3ECP2)";
            };
            class ISU_handler {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_isu_handler.sqf";
                description = "FCS handler for M2 ISU sight (used on M2/M2A1/M2A2)";
            };
            class ODS_ISU_handler {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_ods_isu_handler.sqf";
                description = "FCS handler for M2A2ODS ISU sight (used on M2A2ODS)";
            };
            class A10A_tvm_screen {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_a10a_tvm_screen.sqf";
                description = "FCS handler for A-10A TVM targeting screen";
            };
            class CWSS_handler {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_cwss_handler.sqf";
                description = "FCS handler for M1A1 CWSS commander's sight";
            };
            class LRAS3_handler {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_LRAS3_handler.sqf";
                description = "FCS handler for LRAS3 optic";
            };
            class ITAS_handler {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_ITAS_handler.sqf";
                description = "FCS handler for ITAS sight";
            };
            class MITAS_handler {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_MITAS_handler.sqf";
                description = "FCS handler for MITAS sight";
            };
            class stryker_m151_loader {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_stryker_m151_loader.sqf";
            };
            class stryker_m151_handler {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_stryker_m151_handler.sqf";
            };
            class stryker_unitInfo {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_stryker_unitInfo.sqf";
            };
            class stryker_unitInfo_m1134 {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_stryker_unitInfo_m1134.sqf";
            };
            class matv_unitInfo {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_matv_unitInfo.sqf";
            };
            class CROWS_M153_loader {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_CROWS_M153_loader.sqf";
            };
            class CROWS_M153_handler {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_CROWS_M153_handler.sqf";
            };
            class BFT_Update {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_bft_update.sqf";
            };
            class turret_gunnerAdjust {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_turret_gunnerAdjust.sqf";
            };
            class turret_gunnerAdjust_turnIn {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_turret_gunnerAdjust_turnIn.sqf";
            };
            class turret_gunnerAdjust_AI_hit {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_turret_gunnerAdjust_AI_hit.sqf";
            };
            class turret_gunnerAdjust_AI_engine {
                file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_turret_gunnerAdjust_AI_engine.sqf";
            };
        };
    };
};
