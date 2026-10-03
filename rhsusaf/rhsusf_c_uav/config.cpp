class CfgPatches {
    class rhsusf_c_uav {
        units[] = {
            "rhsusf_RQ11RAVEN",
            "rhsusf_RQ11_B_RAVEN",
            "rhsusf_RQ11MONITOR",
            "rhsusf_RQ11RAVEN_STATIC",
            "rhsusf_RQ11RAVEN_B_STATIC",
            "rq11_base_object",
            "rq11_zerlegt",
            "rq11_body",
            "rq11_camera",
            "rq11b_camera",
            "rq11_paddle",
            "rq11_rotor",
            "rq11_tail",
            "rq11_wing_m",
            "rq11_wing_lr"
        };
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"rhsusf_main", "rhsusf_c_troops"};
        name = "RQ-11 Drone";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class CfgVehicleClasses {
    class rq11 {
        displayName = "RHS RQ-11 Parts";
    };
};
class CfgVehicles {
    class rhsusf_assault_eagleaiii_ocp;
    class Building;
    class Thing;
    class RoadCone_F;
    class rq11_base_object: RoadCone_F {
        dlc = "RHS_USAF";
        author = "Feint";
        scope = 1;
        accuracy = 0.3;
        vehicleClass = "rq11";
        simulation = "thingX";
        nameSound = "";
        class DestructionEffects {};
        armor = 450;
        cost = 0;
        class EventHandlers;
    };
    class rhsusf_RQ11MONITOR: rq11_base_object {
        author = "Feint";
        scope = 1;
        Icon = "\rhsusf\addons\rhsusf_uav\data\icon_MAVModule.paa";
        model = "\rhsusf\addons\rhsusf_uav\model\rq11_monitor.p3d";
        displayName = "[GCS] Ground Control Station";
        vehicleClass = "rq11";
        class EventHandlers: EventHandlers {
            class RHSUSF_EventHandlers {
                init = "_this execVM ('\rhsusf\addons\rhsusf_c_uav\scripts\init\init_GCSActions.sqf')";
            };
        };
    };
    class rhsusf_RQ11RAVEN_STATIC: rq11_base_object {
        author = "Feint";
        scope = 1;
        Icon = "\rhsusf\addons\rhsusf_uav\data\icon_MAVModule.paa";
        model = "\rhsusf\addons\rhsusf_uav\model\rq_11.p3d";
        displayName = "[RQ-11] Raven A (static)";
        vehicleClass = "rq11";
        class EventHandlers: EventHandlers {
            class RHSUSF_EventHandlers {
                init = "_this execVM ('\rhsusf\addons\rhsusf_c_uav\scripts\init\init_staticRavenActions.sqf')";
            };
        };
    };
    class rhsusf_RQ11RAVEN_B_STATIC: rq11_base_object {
        author = "Feint";
        scope = 1;
        Icon = "\rhsusf\addons\rhsusf_uav\data\icon_MAVModule.paa";
        model = "\rhsusf\addons\rhsusf_uav\model\rq11b.p3d";
        displayName = "[RQ-11] Raven B (static)";
        vehicleClass = "rq11";
        class EventHandlers: EventHandlers {
            class RHSUSF_EventHandlers {
                init = "_this execVM ('\rhsusf\addons\rhsusf_c_uav\scripts\init\init_staticRavenActions.sqf')";
            };
        };
    };
    class rq11_zerlegt: rq11_base_object {
        author = "Feint";
        scope = 2;
        Icon = "\rhsusf\addons\rhsusf_uav\data\icon_MAVModule.paa";
        model = "\rhsusf\addons\rhsusf_uav\model\raven_zerlegt.p3d";
        displayName = "Raven A blanket with parts";
        vehicleClass = "rq11";
    };
    class rq11b_zerlegt: rq11_base_object {
        author = "Feint";
        scope = 2;
        Icon = "\rhsusf\addons\rhsusf_uav\data\icon_MAVModule.paa";
        model = "\rhsusf\addons\rhsusf_uav\model\rq11b_zerlegt.p3d";
        displayName = "Raven B Blanket with parts";
        vehicleClass = "rq11";
    };
    class carpet_empty: rq11_base_object {
        author = "Feint";
        scope = 2;
        Icon = "\rhsusf\addons\rhsusf_uav\data\icon_MAVModule.paa";
        model = "\rhsusf\addons\rhsusf_uav\model\carpet_empty.p3d";
        displayName = "Blanket";
        vehicleClass = "rq11";
    };
    class rq11_body: rq11_base_object {
        author = "Feint";
        scope = 2;
        Icon = "\rhsusf\addons\rhsusf_uav\data\icon_MAVModule.paa";
        model = "\rhsusf\addons\rhsusf_uav\model\rq11_body.p3d";
        displayName = "Raven Body";
        vehicleClass = "rq11";
    };
    class rq11_camera: rq11_base_object {
        author = "Feint";
        scope = 2;
        Icon = "\rhsusf\addons\rhsusf_uav\data\icon_MAVModule.paa";
        model = "\rhsusf\addons\rhsusf_uav\model\rq11_camera.p3d";
        displayName = "Raven A Camera Package";
        vehicleClass = "rq11";
        type = 4096;
    };
    class rq11b_camera: rq11_base_object {
        author = "Feint";
        scope = 2;
        Icon = "\rhsusf\addons\rhsusf_uav\data\icon_MAVModule.paa";
        model = "\rhsusf\addons\rhsusf_uav\model\rq11b_camera.p3d";
        displayName = "Raven B Camera Package";
        vehicleClass = "rq11";
    };
    class rq11_paddle: rq11_base_object {
        author = "Feint";
        scope = 2;
        Icon = "\rhsusf\addons\rhsusf_uav\data\icon_MAVModule.paa";
        model = "\rhsusf\addons\rhsusf_uav\model\rq11_paddle.p3d";
        displayName = "Raven Elevator";
        vehicleClass = "rq11";
    };
    class rq11_rotor: rq11_base_object {
        author = "Feint";
        scope = 2;
        Icon = "\rhsusf\addons\rhsusf_uav\data\icon_MAVModule.paa";
        model = "\rhsusf\addons\rhsusf_uav\model\rq11_rotor.p3d";
        displayName = "Raven Propeller";
        vehicleClass = "rq11";
    };
    class rq11_tail: rq11_base_object {
        scope = 2;
        Icon = "\rhsusf\addons\rhsusf_uav\data\icon_MAVModule.paa";
        model = "\rhsusf\addons\rhsusf_uav\model\rq11_tail.p3d";
        displayName = "Raven Tail";
        vehicleClass = "rq11";
    };
    class rq11_wing_m: rq11_base_object {
        author = "Feint";
        scope = 2;
        Icon = "\rhsusf\addons\rhsusf_uav\data\icon_MAVModule.paa";
        model = "\rhsusf\addons\rhsusf_uav\model\rq11_wing_m.p3d";
        displayName = "Raven Wing Center";
        vehicleClass = "rq11";
    };
    class rq11_wing_lr: rq11_base_object {
        author = "Feint";
        scope = 2;
        Icon = "\rhsusf\addons\rhsusf_uav\data\icon_MAVModule.paa";
        model = "\rhsusf\addons\rhsusf_uav\model\rq11_wing_lr.p3d";
        displayName = "Raven Wing Ends";
        vehicleClass = "rq11";
    };
    class ContainerSupply;
    class Bag_Base;
    class B_Kitbag_Base;
    class B_rhsusf_BACKPACK: B_Kitbag_Base {
        dlc = "RHS_USAF";
        author = "Feint";
        scope = 1;
        displayName = "Raven A Backpack";
        hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_uav\data\backpack_RQ-11A_blk_co.paa"};
        maximumLoad = 0.1;
        mass = 40;
    };
    class B_rhsusf_B_BACKPACK: rhsusf_assault_eagleaiii_ocp {
        scope = 2;
        author = "Feint";
        displayName = "Eagle A-III OCP (Raven)";
        maximumLoad = 0.1;
        mass = 100;
        class UserActions {
            class UNPACKRAVENACTION {
                displayName = "Assemble RQ-11 B Raven";
                priority = 0;
                shortcut = "";
                condition = "alive this";
                statement = "[this] execVM '\rhsusf\addons\rhsusf_c_uav\scripts\backpack_UnpackRaven.sqf'";
                displayNameDefault = "";
                position = "camo";
                radius = 5;
                onlyforplayer = 1;
            };
        };
    };
};
class CfgNonAiVehicles {
    class Bird;
    class Kestrel_Random_F;
    class rhsusf_RQ11RAVEN: Kestrel_Random_F {
        dlc = "RHS_USAF";
        model = "\rhsusf\addons\rhsusf_uav\model\rq_11.p3d";
        singSound[] = {
            "\rhsusf\addons\rhsusf_uav\sounds\zoom_in.ogg",
            1,
            1,
            1
        };
        canBeShot = 1;
        minHeight = 30;
        avgHeight = 30.1;
        maxHeight = 300;
        moves = "";
        class EventHandlers {
            class RHSUSF_EventHandlers {
                init = "_this execVM ('\rhsusf\addons\rhsusf_c_uav\scripts\init\init_staticRavenActions.sqf')";
            };
        };
    };
    class rhsusf_RQ11_B_RAVEN: Kestrel_Random_F {
        model = "\rhsusf\addons\rhsusf_uav\model\rq11b_flying.p3d";
        singSound[] = {
            "\rhsusf\addons\rhsusf_uav\sounds\zoom_in.ogg",
            1,
            1,
            1
        };
        canBeShot = 1;
        minHeight = 30;
        avgHeight = 30.1;
        maxHeight = 300;
        moves = "";
        class EventHandlers {
            class RHSUSF_EventHandlers {
                init = "_this execVM ('\rhsusf\addons\rhsusf_c_uav\scripts\init\init_staticRavenActions.sqf')";
            };
        };
    };
};
class CfgSounds {
    class propBuzz {
        name = "propBuzz";
        sound[] = {"\rhsusf\addons\rhsusf_uav\sounds\propBuzz.ogg", 1, 1};
        titles[] = {0, ""};
    };
    class antiTamper {
        name = "antiTamper";
        sound[] = {"\rhsusf\addons\rhsusf_uav\sounds\antiTamper.ogg", 1, 1};
        titles[] = {0, ""};
    };
    class watchBeep_alarm {
        name = "watchBeep_alarm";
        sound[] = {"\rhsusf\addons\rhsusf_uav\sounds\watchBeep_alarm.ogg", 1, 1};
        titles[] = {0, ""};
    };
    class beep_strobe {
        name = "beep_strobe";
        sound[] = {"\rhsusf\addons\rhsusf_uav\sounds\beep_strobe.ogg", 0.39810717, 1};
        titles[] = {0, ""};
    };
    class prop_running02 {
        name = "prop_running02";
        sound[] = {"\rhsusf\addons\rhsusf_uav\sounds\prop_running02.ogg", 0.39810717, 1};
        titles[] = {0, ""};
    };
    class prop_startup02 {
        name = "prop_startup02";
        sound[] = {"\rhsusf\addons\rhsusf_uav\sounds\prop_startup02.ogg", 0.39810717, 1};
        titles[] = {0, ""};
    };
    class prop_end {
        name = "prop_end";
        sound[] = {"\rhsusf\addons\rhsusf_uav\sounds\prop_end.ogg", 0.39810717, 1};
        titles[] = {0, ""};
    };
    class addTime {
        name = "addTime";
        sound[] = {"\rhsusf\addons\rhsusf_uav\sounds\addTime.ogg", 1, 1};
        titles[] = {0, ""};
    };
    class watchBeep_off {
        name = "watchBeep_off";
        sound[] = {"\rhsusf\addons\rhsusf_uav\sounds\watchBeep_off.ogg", 1, 1};
        titles[] = {0, ""};
    };
    class watchBeep_single {
        name = "watchBeep_single";
        sound[] = {"\rhsusf\addons\rhsusf_uav\sounds\watchBeep_single.ogg", 1, 1};
        titles[] = {0, ""};
    };
    class button_small {
        name = "button_small";
        sound[] = {"\rhsusf\addons\rhsusf_uav\sounds\button_small.ogg", 1, 1};
        titles[] = {0, ""};
    };
    class button_large {
        name = "button_large";
        sound[] = {"\rhsusf\addons\rhsusf_uav\sounds\button_large.ogg", 1, 1};
        titles[] = {0, ""};
    };
    class zoom_in {
        name = "zoom_in";
        sound[] = {"\rhsusf\addons\rhsusf_uav\sounds\zoom_in.ogg", 1, 1};
        titles[] = {0, ""};
    };
    class zoom_out {
        name = "zoom_out";
        sound[] = {"\rhsusf\addons\rhsusf_uav\sounds\zoom_out.ogg", 1, 1};
        titles[] = {0, ""};
    };
    class zoom_fail {
        name = "zoom_fail";
        sound[] = {"\rhsusf\addons\rhsusf_uav\sounds\zoom_fail.ogg", 1, 1};
        titles[] = {0, ""};
    };
    class target_locked {
        name = "target_locked";
        sound[] = {"\rhsusf\addons\rhsusf_uav\sounds\target_locked.ogg", 1, 1};
        titles[] = {0, ""};
    };
    class target_unlocked {
        name = "target_unlocked";
        sound[] = {"\rhsusf\addons\rhsusf_uav\sounds\target_unlocked.ogg", 1, 1};
        titles[] = {0, ""};
    };
    class laser_on {
        name = "laser_on";
        sound[] = {"\rhsusf\addons\rhsusf_uav\sounds\laser_on.ogg", 1, 1};
        titles[] = {0, ""};
    };
    class laser_off {
        name = "laser_off";
        sound[] = {"\rhsusf\addons\rhsusf_uav\sounds\laser_off.ogg", 1, 1};
        titles[] = {0, ""};
    };
    class tacticalLaser_on {
        name = "tacticalLaser_on";
        sound[] = {"\rhsusf\addons\rhsusf_uav\sounds\tacticalLaser_on.ogg", 1, 1};
        titles[] = {0, ""};
    };
};
class MAVRscText {
    type = 0;
    idc = -1;
    style = 0;
    colorBackground[] = {0, 0, 0, 0};
    colorText[] = {1, 1, 1, 1};
    font = "PuristaMedium";
    sizeEx = 0.02;
    linespacing = 1;
    text = "";
    x = "SafeZoneX";
    y = "SafeZoneY";
    w = "SafeZoneW";
    h = "SafeZoneH";
};
class MAVRscStructuredText {
    access = 0;
    type = 13;
    idc = -1;
    style = "2 + 			16";
    lineSpacing = 1;
    w = 0.1;
    h = 0.05;
    size = "0.013 * SafeZoneH";
    colorBackground[] = {0, 0, 0, 0};
    colorText[] = {0, 0, 0, 0};
    text = "";
    font = "PuristaMedium";
    class Attributes {
        font = "PuristaMedium";
        color = "#FFFFFF";
        shadow = 1;
        shadowOffset = 0.06;
        shadowColor = "#000000";
    };
    shadow = 1;
};
class MAVRscPicture {
    type = 0;
    idc = -1;
    style = 48;
    x = "safeZoneX";
    y = "safeZoneY+((safeZoneH-(safeZoneW/2*(4/3)))/2)";
    w = "safeZoneW";
    h = "safeZoneH/2*(4/3)";
    sizeEx = 0;
    colorBackground[] = {0, 0, 0, 0};
    colorText[] = {1, 1, 1, 1};
    font = "PuristaMedium";
    text = "";
    class Attributes {
        font = "PuristaMedium";
        color = "#FFFFFF";
        shadow = 1;
        shadowOffset = 0.06;
        shadowColor = "#000000";
    };
};
class RscTitles {
    class rhsusf_RQ11_display {
        idd = 2020999;
        movingEnable = 1;
        duration = 500000;
        fadein = 0;
        fadeout = 0;
        name = "rhsusf_RQ11_display";
        onLoad = "uiNamespace setVariable ['d_rhsusf_RQ11_display', _this select 0]";
        class Attributes {
            font = "PuristaMedium";
            color = "#FFFFFF";
            shadow = 1;
            shadowOffset = 0.06;
            shadowColor = "#000000";
        };
        class controls {
            class VerticalTargetLine: MAVRscText {
                idc = 2020658;
                x = 0.5;
                y = 0.425;
                w = 0.005;
                h = 0.05;
                text = "";
                colorBackground[] = {0, 0, 0, 0};
            };
            class VerticalTargetLine2: VerticalTargetLine {
                idc = 2020659;
                y = 0.525;
            };
            class HorizontalTargetLine: MAVRscText {
                idc = 2020660;
                x = 0.425;
                y = 0.5;
                w = 0.05;
                h = 0.005;
                text = "";
                colorBackground[] = {0, 0, 0, 0};
            };
            class HorizontalTargetLine2: HorizontalTargetLine {
                idc = 2020661;
                x = 0.525;
            };
            class VerticalBoxLeft1: MAVRscText {
                x = 0.2;
                y = 0.2;
                w = 0.005;
                h = 0.05;
                text = "";
                colorBackground[] = {1, 1, 1, 1};
            };
            class VerticalBoxLeft2: VerticalBoxLeft1 {
                y = 0.75;
            };
            class VerticalBoxRight1: MAVRscText {
                x = 0.8;
                y = 0.2;
                w = 0.005;
                h = 0.05;
                text = "";
                colorBackground[] = {1, 1, 1, 1};
            };
            class VerticalBoxRight2: VerticalBoxRight1 {
                y = 0.75;
            };
            class HorizontalBoxTopLeft: MAVRscText {
                x = 0.2;
                y = 0.2;
                w = 0.05;
                h = 0.005;
                text = "";
                colorBackground[] = {1, 1, 1, 1};
            };
            class HorizontalBoxTopRight: HorizontalBoxTopLeft {
                x = 0.75;
            };
            class HorizontalBoxBottomLeft: MAVRscText {
                x = 0.2;
                y = 0.795;
                w = 0.05;
                h = 0.005;
                text = "";
                colorBackground[] = {1, 1, 1, 1};
            };
            class HorizontalBoxBottomRight: HorizontalBoxBottomLeft {
                x = 0.75;
            };
            class VerticalGridLines: MAVRscText {
                x = "safezoneX + 0 * safezoneW";
                y = "safezoneY + 0 * safezoneW";
                w = 0.001;
                h = "safezoneH";
                text = "";
                colorBackground[] = {1, 0, 0, 0.1};
            };
            class VerticalGridLines01: VerticalGridLines {
                x = "safezoneX + 0.1 * safezoneW";
            };
            class VerticalGridLines02: VerticalGridLines {
                x = "safezoneX + 0.2 * safezoneW";
            };
            class VerticalGridLines03: VerticalGridLines {
                x = "safezoneX + 0.3 * safezoneW";
            };
            class VerticalGridLines04: VerticalGridLines {
                x = "safezoneX + 0.4 * safezoneW";
            };
            class VerticalGridLines05: VerticalGridLines {
                x = "safezoneX + 0.5 * safezoneW";
            };
            class VerticalGridLines06: VerticalGridLines {
                x = "safezoneX + 0.6 * safezoneW";
            };
            class VerticalGridLines07: VerticalGridLines {
                x = "safezoneX + 0.7 * safezoneW";
            };
            class VerticalGridLines08: VerticalGridLines {
                x = "safezoneX + 0.8 * safezoneW";
            };
            class VerticalGridLines09: VerticalGridLines {
                x = "safezoneX + 0.9 * safezoneW";
            };
            class VerticalGridLines10: VerticalGridLines {
                x = "safezoneX + 1 * safezoneW";
            };
            class HorizontalGridLines: MAVRscText {
                x = "safezoneX + 0 * safezoneW";
                y = "safezoneY + 0 * safezoneW";
                w = "safezoneW";
                h = 0.001;
                text = "";
                colorBackground[] = {1, 0, 0, 0.1};
            };
            class HorizontalGridLines01: HorizontalGridLines {
                y = "safezoneY + 0.05* safezoneW";
            };
            class HorizontalGridLines02: HorizontalGridLines {
                y = "safezoneY + 0.15* safezoneW";
            };
            class HorizontalGridLines03: HorizontalGridLines {
                y = "safezoneY + 0.25 * safezoneW";
            };
            class HorizontalGridLines04: HorizontalGridLines {
                y = "safezoneY + 0.35 * safezoneW";
            };
            class HorizontalGridLines05: HorizontalGridLines {
                y = "safezoneY + 0.45* safezoneW";
            };
            class HorizontalGridLines06: HorizontalGridLines {
                y = "safezoneY + 0.55* safezoneW";
            };
            class HorizontalGridLines07: HorizontalGridLines {
                y = "safezoneY + 0.65* safezoneW";
            };
            class HorizontalGridLines08: HorizontalGridLines {
                y = "safezoneY + 0.75* safezoneW";
            };
            class HorizontalGridLines09: HorizontalGridLines {
                y = "safezoneY + 0.85* safezoneW";
            };
            class HorizontalGridLines10: HorizontalGridLines {
                y = "safezoneY + 0.95 * safezoneW";
            };
            class MAVCompassNorth: MAVRscStructuredText {
                idc = 2020662;
                x = 0.45;
                y = 0.45;
                w = "safezoneW * 0.02";
                h = "safezoneH * 0.02";
                text = "north";
                colorBackground[] = {0, 0, 0, 0};
            };
            class MAVCompassSouth: MAVRscStructuredText {
                idc = 2020663;
                x = 0.45;
                y = 0.45;
                w = "safezoneW * 0.02";
                h = "safezoneH * 0.02";
                text = "south";
                colorBackground[] = {0, 0, 0, 0};
            };
            class MAVCompassWest: MAVRscStructuredText {
                idc = 2020664;
                x = 0.45;
                y = 0.45;
                w = "safezoneW * 0.02";
                h = "safezoneH * 0.02";
                text = "west";
                colorBackground[] = {0, 0, 0, 0};
            };
            class MAVCompassEast: MAVRscStructuredText {
                idc = 2020665;
                x = 0.45;
                y = 0.45;
                w = "safezoneW * 0.02";
                h = "safezoneH * 0.02";
                text = "east";
                colorBackground[] = {0, 0, 0, 0};
            };
            class MAVText: MAVRscStructuredText {
                idc = 2020666;
                x = "safezoneX + 0.70 * safezoneW";
                y = "safezoneY + 0.25 * safezoneW";
                w = "safezoneW * 0.15";
                h = "safezoneH * 0.4";
                text = "Loading Raven Info...";
                colorBackground[] = {0, 0, 0, 0};
            };
            class MAVKeyInfo: MAVRscStructuredText {
                idc = 2020667;
                x = "safezoneX + 0.25 * safezoneW";
                y = "safezoneY + 0.25 * safezoneW";
                w = "safezoneW * 0.1";
                h = "safezoneH * 0.4";
                text = "";
                colorBackground[] = {0, 0, 0, 0};
            };
            class MAVBattInfo: MAVRscStructuredText {
                idc = 2020668;
                x = "safezoneX + 0.25 * safezoneW";
                y = "safezoneY + 0.12* safezoneW";
                w = "safezoneW * 0.15";
                h = "safezoneH * 0.04";
                text = "Loading Battery...";
                colorBackground[] = {0, 0, 0, 0};
            };
            class MAVClockInfo: MAVRscStructuredText {
                idc = 2020669;
                x = "safezoneX + 0.70 * safezoneW";
                y = "safezoneY + 0.12* safezoneW";
                w = "safezoneW * 0.15";
                h = "safezoneH * 0.04";
                text = "Loading Clock...";
                colorBackground[] = {0, 0, 0, 0};
            };
            class MAVLaserInfo: MAVRscStructuredText {
                idc = 2020670;
                x = "safezoneX + 0.45 * safezoneW";
                y = "safezoneY + 0.12* safezoneW";
                w = "safezoneW * 0.1";
                h = "safezoneH * 0.08";
                text = "Loading Display...";
                colorBackground[] = {0, 0, 0, 0};
            };
            class MAVAltArrow: MAVRscStructuredText {
                idc = 2020671;
                x = "safezoneX + 0.170 * safezoneW";
                y = "safezoneY + 0.120 * safezoneW";
                size = "0.012 * SafeZoneH";
                w = "safezoneW * 0.050";
                h = "safezoneH * 0.8";
                text = "Loading Instructions...";
                colorBackground[] = {0, 0, 0, 0};
            };
            class MAVAltRibbon: MAVRscStructuredText {
                idc = 2020672;
                x = "safezoneX + 0.125 * safezoneW";
                y = "safezoneY + 0.12 * safezoneW";
                size = "0.012 * SafeZoneH";
                w = "safezoneW * 0.050";
                h = "safezoneH * 0.8";
                text = "Loading Instructions...";
                colorBackground[] = {0, 0, 0, 0};
            };
        };
    };
};
class CfgFunctions {
    class RHSUSF {
        tag = "RHSUSF";
        class cameraCategory {
            class cameraTime {
                file = "\rhsusf\addons\rhsusf_c_uav\scripts\functions\fnc_cameraTime.sqf";
                description = "Creates the display for time and date";
            };
            class visionMode {
                file = "\rhsusf\addons\rhsusf_c_uav\scripts\functions\fnc_visionMode.sqf";
                description = "Creates the display for vision mode, i.e. DTV, NV and different FLIR modes";
            };
            class cameraFOVLevel {
                file = "\rhsusf\addons\rhsusf_c_uav\scripts\functions\fnc_cameraFOVLevel.sqf";
                description = "Creates the display for camera FOV level in mm";
            };
            class dataStreamTitle {
                file = "\rhsusf\addons\rhsusf_c_uav\scripts\functions\fnc_dataStreamTitle.sqf";
                description = "Creates the display for data stream with Raven code in the title";
            };
            class distanceDisplay {
                file = "\rhsusf\addons\rhsusf_c_uav\scripts\functions\fnc_distanceDisplay.sqf";
                description = "Creates the display for distance from Raven to GCS and target in Imperial or Metric units";
            };
            class altitudeDisplay {
                file = "\rhsusf\addons\rhsusf_c_uav\scripts\functions\fnc_altitudeDisplay.sqf";
                description = "Creates the display for altitude of an object in Imperial or Metric Units";
            };
            class speedDisplay {
                file = "\rhsusf\addons\rhsusf_c_uav\scripts\functions\fnc_speedDisplay.sqf";
                description = "Creates the display for speed of an object in Imperial or Metric Units";
            };
            class batteryDisplay {
                file = "\rhsusf\addons\rhsusf_c_uav\scripts\functions\fnc_batteryDisplay.sqf";
                description = "Creates the display for battery level remaining in Raven";
            };
            class laserPointer {
                file = "\rhsusf\addons\rhsusf_c_uav\scripts\functions\fnc_laserPointer.sqf";
                description = "Creates the laser pointer activated in camera view for MAV";
            };
            class leftSideAltBarGraph {
                file = "\rhsusf\addons\rhsusf_c_uav\scripts\functions\fnc_leftSideAltBarGraph.sqf";
                description = "Creates left side altitude bar graph in camera view for MAV";
            };
        };
        class laserCategory {
            class laserPointer {
                file = "\rhsusf\addons\rhsusf_c_uav\scripts\functions\fnc_laserPointer.sqf";
                description = "Creates the visible laser";
            };
        };
    };
    class RHS {
        tag = "RHS";
        class functions {
            class sayGlobal {
                file = "\rhsusf\addons\rhsusf_c_uav\scripts\functions\fnc_sayGlobal.sqf";
                description = "MP synced say command";
            };
        };
    };
};
