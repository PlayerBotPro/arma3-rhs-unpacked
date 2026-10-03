class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        RHS_Mig29_Pilot = "RHS_Mig29_Pilot";
        RHS_Mig29_Pilot_gear_up = "RHS_Mig29_Pilot_gear_up";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class KIA_Mig29_Pilot: DefaultDie {
            actions = "DeadActions";
            file = "\rhsafrf\addons\rhs_c_mig29\anim\KIA_Mig29_Pilot.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"DeadState", 0.1};
        };
        class RHS_Mig29_Pilot: Crew {
            leaning = "crewShake_half";
            file = "\rhsafrf\addons\rhs_c_mig29\anim\Mig29_Pilot.rtm";
            interpolateTo[] = {"RHS_Mig29_Pilot_gear_up", 1, "KIA_Mig29_Pilot", 1};
            connectFrom[] = {"RHS_Mig29_Pilot_gear_up", 1};
        };
        class RHS_Mig29_Pilot_gear_up: RHS_Mig29_Pilot {
            speed = 0.45;
            looped = 0;
            file = "\rhsafrf\addons\rhs_c_mig29\anim\Mig29_Pilot_gear_up.rtm";
            interpolateTo[] = {"RHS_Mig29_Pilot", 1};
            connectFrom[] = {"RHS_Mig29_Pilot", 1};
            connectTo[] = {"RHS_Mig29_Pilot", 1};
            rightHandIKCurve[] = {1};
            leftHandIKCurve[] = {0, 1, 0.45, 1, 0.5, 0, 0.6, 0, 0.75, 0.8, 1, 1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
            rightHandIKBeg = 1;
            rightHandIKEnd = 1;
        };
    };
};
class CfgPatches {
    class rhs_c_mig29 {
        units[] = {
            "rhs_mig29s_vvs",
            "rhs_mig29s_vvsc",
            "rhs_mig29s_vmf",
            "rhs_mig29sm_vvs",
            "rhs_mig29sm_vvsc",
            "rhs_mig29sm_vmf",
            "rhs_mig29sWreck",
            "rhs_mig29s_canopy"
        };
        weapons[] = {};
        requiredVersion = 1.7;
        requiredAddons[] = {
            "rhs_main",
            "rhs_c_airweapons",
            "rhs_c_heavyweapons",
            "rhs_c_a2port_air",
            "rhs_c_air"
        };
        author = "$STR_RHS_AUTHOR_FULL";
        name = "RHS Mig-29 Jets";
        url = "http://www.rhsmods.org/";
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
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class mig29_map {
                file = "rhsafrf\addons\rhs_c_mig29\scripts\rhs_mig29_map.sqf";
                description = "MiG-29S GPS unit handling";
            };
            class mig29sm_cockpit {
                file = "rhsafrf\addons\rhs_c_mig29\scripts\rhs_mig29sm_cockpit.sqf";
                description = "MiG-29SM Cockpit actions handling";
            };
        };
        class WP_Managment {
            class wp_manager {
                file = "rhsafrf\addons\rhs_c_mig29\scripts\rhs_wp_manager.sqf";
                description = "Waypoint management - mapclick";
            };
            class wp_find {
                file = "rhsafrf\addons\rhs_c_mig29\scripts\rhs_wp_find.sqf";
                description = "Waypoint management - find nearby waypoints";
            };
        };
    };
};
class RscControlsGroup {
    class VScrollbar;
    class HScrollbar;
};
class RscButtonMenu;
class RscTextCheckBox;
class RHS_WP_Control_Checbkox: RscTextCheckBox {
    idc = -1;
    style = 2;
    colorSelectedBg[] = {0.07, 0.1, 0};
    strings[] = {"Waypoint Management - Off"};
    checked_strings[] = {"Waypoint Management - On"};
    onCheckBoxesSelChanged = "(vehicle (call rhs_fnc_findPlayer)) setVariable ['RHS_WP_Manage',(_this select 2) isEqualTo 1];";
    tooltip = "When this checkbox is ticked on it's possible to add, remove & change currently selected waypoint.";
    x = "0.45 * safezoneW + safezoneX";
    y = "0.0003998 * safezoneH + safezoneY";
    w = "0.088478 * safezoneW";
    h = "0.0282118 * safezoneH";
};
class RHS_WP_Control_Group: RscControlsGroup {
    idc = 170;
    class VScrollbar: VScrollbar {
        width = 0;
    };
    class HScrollbar: HScrollbar {
        height = 0;
    };
    x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
    y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
    w = "53.5 * 	(0.01875 * SafezoneH)";
    h = "40 * 		(0.025 * SafezoneH)";
    class controls {
        class Button_1: RscButtonMenu {
            text = "Mark as next WP";
            x = "0.33 * safezoneW + safezoneX";
            y = "0.28 * safezoneH + safezoneY";
            w = "0.0837348 * safezoneW";
            h = "0.0282118 * safezoneH";
            action = "(group player) setCurrentWaypoint (call RHS_fnc_wp_find);[] spawn {sleep 0.1;ctrlDelete ((findDisplay 12) displayCtrl 20001)}";
        };
        class Button_2: RscButtonMenu {
            text = "Delete WP";
            x = "0.33 * safezoneW + safezoneX";
            y = "0.31 * safezoneH + safezoneY";
            w = "0.0837348 * safezoneW";
            h = "0.0282118 * safezoneH";
            action = "deleteWaypoint (call RHS_fnc_wp_find);[] spawn {sleep 0.1;ctrlDelete ((findDisplay 12) displayCtrl 20001)}";
        };
        class Button_3: RscButtonMenu {
            action = "[] spawn {sleep 0.1;ctrlDelete ((findDisplay 12) displayCtrl 20001)}";
            text = "Close";
            x = "0.33 * safezoneW + safezoneX";
            y = "0.34 * safezoneH + safezoneY";
            w = "0.0837348 * safezoneW";
            h = "0.0282118 * safezoneH";
        };
    };
};
class CfgVehicles {
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
        class Eventhandlers;
    };
    class rhs_mig29s_base: Plane_Base_F {
        dlc = "RHS_AFRF";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 0;
        displayName = "$STR_MiG29S_name";
        model = "\rhsafrf\addons\rhs_mig29\mig29s.p3d";
        picture = "\rhsafrf\addons\rhs_mig29\data\ui\picture_mig29s_ca.paa";
        icon = "\rhsafrf\addons\rhs_mig29\data\ui\icon_mig29s_co.paa";
        mapSize = 20;
        vehicleClass = "rhs_vehclass_aircraft";
        destrType = "DestructWreck";
        cost = 20000000;
        leftDustEffect = "LDustEffects";
        rightDustEffect = "RDustEffects";
        extCameraPosition[] = {0, 0, -15};
        fuelCapacity = 500;
        canFloat = 0;
        waterLeakiness = 25;
        waterResistanceCoef = 0.004;
        class Library {
            libEnable = 0;
            libTextDesc = "";
        };
        irTarget = 1;
        irTargetSize = 1;
        irScanGround = 1;
        irScanRangeMin = 100;
        irScanRangeMax = 60000;
        irScanToEyeFactor = 2;
        visualTarget = 1;
        visualTargetSize = 0.9;
        radarTarget = 1;
        radarTargetSize = 1;
        receiveRemoteTargets = 1;
        reportRemoteTargets = 1;
        reportOwnPosition = 1;
        LESH_canBeTowed = 1;
        LESH_towFromFront = 1;
        LESH_AxisOffsetTarget[] = {0, 6.8, -2.04};
        LESH_WheelOffset[] = {0, -0.7};
        selectionFireAnim = "";
        memoryPointGun[] = {"machinegun"};
        gunBeg[] = {"muzzle_1"};
        gunEnd[] = {"chamber_1"};
        memorypointcm[] = {"flare_launcher1", "flare_launcher2"};
        memorypointcmdir[] = {"flare_launcher1_dir", "flare_launcher2_dir"};
        gunAimDown = 0;
        weapons[] = {"rhs_weap_MASTERSAFE", "rhs_weap_GSh301"};
        magazines[] = {"rhs_mag_gsh30_mixed_150"};
        lockDetectionSystem = 8;
        incommingMisslieDetectionSystem = 8;
        soundLocked[] = {"\rhsafrf\addons\rhs_mig29\sound\locking", 0.000316228, 1};
        soundIncommingMissile[] = {"\rhsafrf\addons\rhs_mig29\sound\incomingmissile", 0.8, 1};
        weaponsGroup1 = 128;
        weaponsGroup4 = 64;
        unitInfoType = "RHS_RscUnitInfoAir_MiG29S";
        threat[] = {1, 1, 1};
        type = 2;
        minFireTime = 30;
        camouflage = 8;
        audible = 5;
        accuracy = 0.2;
        ejectDamageLimit = 1;
        availableForSupportTypes[] = {"CAS_Bombing"};
        class Turrets {};
        class EjectionSystem {};
        armor = 60;
        damageResistance = 0.00336;
        armorStructural = 3;
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
            class HitEngine {
                armor = 0.7;
                explosionShielding = 0.65;
                passThrough = 0.01;
                minimalHit = 0.01;
                radius = 0.07;
                material = -1;
                name = "hit_engine_l";
                visual = "vis_engine_l";
                depends = "0";
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
                depends = "0";
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
                name = "hit_control_rear";
                visual = "-";
                depends = "0";
            };
            class HitLCElevator {
                armor = 0.2;
                explosionShielding = 0.3;
                passThrough = 0.01;
                minimalHit = 0.1;
                radius = 0.12;
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
                radius = 0.12;
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
                radius = 0.3;
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
                radius = 0.3;
                material = -1;
                name = "glass2";
                visual = "glass2";
                depends = "0";
            };
            class IndicatorEng1: HitHull {
                visual = "ind_eng_l_dam";
                depends = "HitEngine";
            };
            class IndicatorEng2: IndicatorEng1 {
                visual = "ind_eng_r_dam";
                depends = "HitEngine2";
            };
            class IndicatorOil1: IndicatorEng1 {
                visual = "ind_oil_l";
                depends = "HitLAileron+HitLAileron_link+HitControlRear+HitLCElevator+HitLCRudder";
            };
            class IndicatorOil2: IndicatorEng1 {
                visual = "ind_oil_r";
                depends = "HitRAileron+HitRAileron_link+HitControlRear+HitRElevator+HitRightRudder";
            };
            class HitPylon1 {
                armor = -30;
                material = -1;
                name = "hit_pylon_1";
                passThrough = 0;
                minimalHit = -0.1;
                explosionShielding = 0.1;
                radius = 0.85;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Pylon_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_pylon_1";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_Pylon_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_pylon_1";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_Pylon_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_pylon_1";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_Pylon_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_pylon_1";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class HitPylon2 {
                armor = -30;
                material = -1;
                name = "hit_pylon_2";
                passThrough = 0;
                minimalHit = -0.1;
                explosionShielding = 0.1;
                radius = 0.85;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Pylon_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_pylon_2";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_Pylon_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_pylon_2";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_Pylon_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_pylon_2";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_Pylon_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_pylon_2";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class HitPylon3 {
                armor = -30;
                material = -1;
                name = "hit_pylon_3";
                passThrough = 0;
                minimalHit = -0.1;
                explosionShielding = 0.1;
                radius = 0.85;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Pylon_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_pylon_3";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_Pylon_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_pylon_3";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_Pylon_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_pylon_3";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_Pylon_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_pylon_3";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class HitPylon4 {
                armor = -30;
                material = -1;
                name = "hit_pylon_4";
                passThrough = 0;
                minimalHit = -0.1;
                explosionShielding = 0.1;
                radius = 0.85;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Pylon_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_pylon_4";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_Pylon_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_pylon_4";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_Pylon_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_pylon_4";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_Pylon_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_pylon_4";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class HitPylon5 {
                armor = -30;
                material = -1;
                name = "hit_pylon_5";
                passThrough = 0;
                minimalHit = -0.1;
                explosionShielding = 0.1;
                radius = 0.85;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Pylon_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_pylon_5";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_Pylon_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_pylon_5";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_Pylon_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_pylon_5";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_Pylon_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_pylon_5";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class HitPylon6 {
                armor = -30;
                material = -1;
                name = "hit_pylon_6";
                passThrough = 0;
                minimalHit = -0.1;
                explosionShielding = 0.1;
                radius = 0.85;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Pylon_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_pylon_6";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_Pylon_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_pylon_6";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_Pylon_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_pylon_6";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_Pylon_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_pylon_6";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class HitPylon7 {
                armor = -30;
                material = -1;
                name = "hit_pylon_7";
                passThrough = 0;
                minimalHit = -0.1;
                explosionShielding = 0.1;
                radius = 0.85;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Pylon_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_pylon_7";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_Pylon_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_pylon_7";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_Pylon_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_pylon_7";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_Pylon_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_pylon_7";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
        };
        maxSpeed = 1300;
        landingAoa = "5*3.1415/180";
        landingSpeed = 190;
        stallSpeed = 170;
        stallWarningTreshold = 0.5;
        wheelSteeringSensitivity = 2;
        airBrake = 1;
        airBrakeFrictionCoef = 3.3;
        flaps = 1;
        flapsFrictionCoef = 0.32;
        gearsUpFrictionCoef = 0.5;
        airFrictionCoefs0[] = {0, 0, 0};
        airFrictionCoefs1[] = {0.1, 0.5, 0.0082};
        airFrictionCoefs2[] = {0.001, 0.005, 0.000075};
        angleOfIndicence = "1*3.1415/180";
        envelope[] = {
            0,
            0.02,
            0.6,
            1.19,
            1.45,
            2.2,
            2.7,
            3.1,
            4.2,
            4.9,
            5.1,
            5,
            5.6,
            5.75,
            5.82,
            5.9,
            5.95,
            6,
            6.03,
            6.05,
            6.07,
            6.08,
            6.09,
            4,
            1.5
        };
        altNoForce = 14000;
        altFullForce = 6000;
        thrustCoef[] = {
            1.54,
            1.46,
            1.37,
            1.35,
            1.21,
            1.17,
            1.02,
            0.97,
            0.92,
            0.85,
            0.7,
            0.3,
            0,
            0,
            0,
            0
        };
        aileronSensitivity = 1.1;
        aileronCoef[] = {
            0,
            0.15,
            0.4,
            0.85,
            1.2,
            1.3,
            1.4,
            1.4,
            1.4,
            1.4,
            1.4,
            1.4,
            1.4,
            1.4,
            1.1,
            0.6
        };
        elevatorSensitivity = 1.6;
        elevatorCoef[] = {
            0,
            0.2,
            0.55,
            0.8,
            1.02,
            1.04,
            1.05,
            1.06,
            1.07,
            1.07,
            1.06,
            1.04,
            1.02,
            1,
            0.9,
            0.6
        };
        rudderInfluence = 0.866;
        rudderCoef[] = {0, 0.6, 1, 1.5, 2, 2.2, 2.3, 2.3, 2, 1.6, 1};
        aileronControlsSensitivityCoef = 4;
        elevatorControlsSensitivityCoef = 3.5;
        rudderControlsSensitivityCoef = 4;
        draconicForceXCoef = 9;
        draconicForceYCoef = 1.9;
        draconicForceZCoef = 1;
        draconicTorqueXCoef[] = {4.8, 5, 5.5, 6.2, 7, 7.7, 8.4, 10.1, 11, 12, 13};
        draconicTorqueYCoef[] = {
            12,
            10,
            6,
            2,
            0.2,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        };
        gearRetracting = 1;
        gearUpTime = 4.5;
        gearDownTime = 3;
        RHS_AfterBurner_FuelDrag = 0.3;
        category = "Air";
        DriverAction = "rhs_Mig29_Pilot";
        driverLeftHandAnimName = "lever_pilot";
        driverRightHandAnimName = "stick_pilot";
        driverLeftLegAnimName = "pedal_L";
        driverRightLegAnimName = "pedal_R";
        viewDriverShadow = 1;
        castDriverShadow = 1;
        hadDriver = 1;
        hasGunner = 0;
        hasCommander = 1;
        driverIsCommander = 1;
        driverCompartments = 1;
        HeadAimDown = 3;
        camShakeCoef = 0.6;
        headGforceLeaningFactor[] = {0.005, 0.001, 0.015};
        attenuationEffectType = "PlaneAttenuation";
        insideSoundCoef = 1;
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
        soundLandCrash[] = {"\rhsafrf\addons\rhs_mig29\sound\touch", 1, 1.1};
        soundServo[] = {"\rhsafrf\addons\rhs_mig29\sound\gear", 10, 0.5};
        soundGear[] = {"\rhsafrf\addons\rhs_mig29\sound\gear", 10, 0.5};
        soundDammage[] = {"\rhsafrf\addons\rhs_mig29\sound\warn", 0.562341, 1};
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
        soundSetSonicBoom[] = {"Plane_Fighter_SonicBoom_SoundSet"};
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
            class EngineLowOut {
                sound[] = {"\rhsafrf\addons\rhs_mig29\sound\ext", 10, 1, 1600};
                frequency = "1.0 min (rpm + 0.5)";
                volume = "engineOn*camPos*(rpm factor[0.85, 0])";
            };
            class EngineHighOut {
                sound[] = {
                    "\rhsafrf\addons\rhs_mig29\sound\ext",
                    10,
                    1.3,
                    1800
                };
                frequency = "1";
                volume = "engineOn*camPos*(rpm factor[0.55, 1.0])";
            };
            class ForsageOut {
                sound[] = {
                    "\rhsafrf\addons\rhs_mig29\sound\ext-aft",
                    3.1622777,
                    0.8,
                    2000
                };
                frequency = "1";
                volume = "engineOn*camPos*(thrust factor[0.5, 1.0])";
                cone[] = {3.14, 3.92, 2, 0.4};
            };
            class WindNoiseOut {
                sound[] = {
                    "\rhsafrf\addons\rhs_mig29\sound\ext-wind",
                    1,
                    1,
                    150
                };
                frequency = "(0.1+(1.2*(speed factor[1, 150])))";
                volume = "camPos*(speed factor[1, 150])";
            };
            class EngineLowIn {
                sound[] = {"\rhsafrf\addons\rhs_mig29\sound\int", 3.1622777, 1};
                frequency = "1.0 min (rpm + 0.5)";
                volume = "(1-camPos)*(engineOn*(rpm factor[0.85, 0]))";
            };
            class EngineHighIn {
                sound[] = {"\rhsafrf\addons\rhs_mig29\sound\int", 3.1622777, 1};
                frequency = "1";
                volume = "(1-camPos)*(engineOn*(rpm factor[0.55, 1.0]))";
            };
            class ForsageIn {
                sound[] = {"\rhsafrf\addons\rhs_mig29\sound\int-aft", 1.7782794, 0.8};
                frequency = "1";
                volume = "(1-camPos)*(engineOn*(thrust factor[0.5, 1.0]))";
            };
            class WindNoiseIn {
                sound[] = {"\rhsafrf\addons\rhs_mig29\sound\int-wind", 1, 1};
                frequency = "(0.1+(1.2*(speed factor[1, 150])))";
                volume = "(1-camPos)*(speed factor[1, 150])";
            };
        };
        class ViewPilot: ViewPilot {
            initFov = 1;
            minFov = 0.3;
            maxFov = 1.2;
            initAngleX = 0;
            minAngleX = -65;
            maxAngleX = 85;
            initAngleY = 0;
            minAngleY = -125;
            maxAngleY = 125;
        };
        class Eventhandlers: Eventhandlers {
            hit = "";
            class RHS_EventHandlers {
                hit = "_this call RHS_fnc_AI_eject";
                init = "_this call rhs_fnc_air_init";
                postInit = "_this call rhs_fnc_reapplyTextures";
                fired = "[_this select 0,_this select 1,'RHS_Weap_GSh301',1] call rhs_fnc_burstLimiter";
                getout = "[_this select 0, _this select 2,'rhs_mig29s_canopy'] call rhs_fnc_K36D_seatEjection";
                engine = "[_this select 0,_this select 1,10] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_addParachutes;";
            };
            class BIS_Randomisation {
                init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;}";
            };
        };
        class Damage {
            tex[] = {
                "rhsafrf\addons\rhs_air\t50\data\afterburner_ca.paa",
                "#(argb,8,8,3)color(0,0,0,0,co)",
                "rhsafrf\addons\rhs_mig29\data\rhs_mig29_warnings_empty_ca.paa",
                "rhsafrf\addons\rhs_mig29\data\rhs_mig29_warnings_ca.paa"
            };
            mat[] = {
                "rhsafrf\addons\rhs_mig29\data\mig29s_glass.rvmat",
                "rhsafrf\addons\rhs_mig29\data\mig29s_glass_damage.rvmat",
                "rhsafrf\addons\rhs_mig29\data\mig29s_glass_damage.rvmat",
                "rhsafrf\addons\rhs_mig29\data\skin1.rvmat",
                "rhsafrf\addons\rhs_mig29\data\skin1_damage.rvmat",
                "rhsafrf\addons\rhs_mig29\data\mig29s_destruct.rvmat",
                "rhsafrf\addons\rhs_mig29\data\skin2.rvmat",
                "rhsafrf\addons\rhs_mig29\data\skin2_damage.rvmat",
                "rhsafrf\addons\rhs_mig29\data\mig29s_destruct.rvmat",
                "rhsafrf\addons\rhs_mig29\data\skin3.rvmat",
                "rhsafrf\addons\rhs_mig29\data\skin3_damage.rvmat",
                "rhsafrf\addons\rhs_mig29\data\mig29s_destruct.rvmat"
            };
        };
        hiddenselections[] = {
            "camo1",
            "camo2",
            "camo3",
            "n1",
            "n2",
            "i1",
            "nt1",
            "nt2",
            "ntt1",
            "ntt2",
            "nts1",
            "nts2",
            "nts3",
            "nts4",
            "nts5",
            "ns1",
            "ns2",
            "ns3",
            "it1",
            "in1",
            "gps_map"
        };
        rhs_decalParameters[] = {"['Number',[cRHSAIRMIG29NumberPlaces,cRHSAIRMIG29TailNumberPlaces],['AviaRed','AviaBlue']]", "['Label', cRHSAIRMIG29StarPlaces, 'Aviation', 2]"};
        class textureSources {
            class Standard {
                author = "$STR_RHS_AUTHOR_FULL";
                displayName = "Blue";
                textures[] = {"rhsafrf\addons\rhs_mig29\data\rhs_mig29_01_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_02_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_03_co.paa"};
                factions[] = {};
            };
            class Gray: Standard {
                displayName = "Gray";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_mig29\data\rhs_mig29_01_gray_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_02_gray_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_03_gray_co.paa"};
            };
            class LightGray: Standard {
                displayName = "Light Gray";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_mig29\data\rhs_mig29_01_lgray_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_02_lgray_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_03_lgray_co.paa"};
            };
            class LightGray2: Standard {
                displayName = "Light Gray 2";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_mig29\data\rhs_mig29_01_lgray_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_02_lgray2_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_03_lgray_co.paa"};
            };
            class Gray_camo: Standard {
                displayName = "Gray Camo";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_mig29\data\rhs_mig29_01_mimic_gray_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_02_mimic_gray_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_03_mimic_gray_co.paa"};
            };
            class Green_camo: Standard {
                displayName = "Green Camo 1";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_mig29\data\rhs_mig29_01_mimic_green_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_02_mimic_green_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_03_mimic_green_co.paa"};
            };
            class Green_camo2: Standard {
                displayName = "Green Camo 2";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_mig29\data\rhs_mig29_01_mimic_green2_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_02_mimic_green2_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_03_mimic_green2_co.paa"};
            };
            class Green_camo3: Standard {
                displayName = "Green Camo 3";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_mig29\data\rhs_mig29_01_mimic_green2_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_02_mimic_green22_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_03_mimic_green2_co.paa"};
            };
            class Green_camo4: Standard {
                displayName = "Green Camo 4";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_mig29\data\rhs_mig29_01_mimic_green2_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_02_mimic_green23_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_03_mimic_green2_co.paa"};
            };
            class Green_camo5: Standard {
                displayName = "Green Camo 5";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_mig29\data\rhs_mig29_01_mimic_green2_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_02_mimic_green24_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_03_mimic_green2_co.paa"};
            };
            class Green_camo6: Standard {
                displayName = "Green Camo 6";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_mig29\data\rhs_mig29_01_mimic_green2_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_02_mimic_green25_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_03_mimic_green2_co.paa"};
            };
            class Green_camo7: Standard {
                displayName = "Green Camo 7";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_mig29\data\rhs_mig29_01_mimic_green3_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_02_mimic_green3_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_03_mimic_green3_co.paa"};
            };
            class Green_camo_kubinka: Standard {
                displayName = "Green Camo Kubinka";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_mig29\data\rhs_mig29_01_mimic_green_kubinka.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_02_mimic_green_kubinka.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_03_mimic_green_kubinka.paa"};
            };
            class Green_camo_lipetsk: Standard {
                displayName = "Green Camo Lipetsk";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_mig29\data\rhs_mig29_01_mimic_green_lipetsk_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_02_mimic_green24_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_03_mimic_green_lipetsk_co.paa"};
            };
            class Green_camo_aggressor1: Standard {
                displayName = "Aggressor 1";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_mig29\data\rhs_mig29_01_mimic_green_aggressor1_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_02_mimic_green_aggressor1_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_03_mimic_green2_co.paa"};
            };
            class Green_camo_aggressor2: Standard {
                displayName = "Aggressor 2";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_mig29\data\rhs_mig29_01_mimic_green_aggressor2_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_02_mimic_green_aggressor2_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_03_mimic_green_aggressor2_co.paa"};
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
                displayName = "Define font type of intake number";
                tooltip = "Define kind of font that will be drawn on vehicle intake";
                property = "rhs_decalNumber_type";
                control = "Combo";
                expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', [cRHSAIRMIG29NumberPlaces,cRHSAIRMIG29TailNumberPlaces, cRHSAIRMIG29TailTopNumberPlaces], [_value,_this getVariable ['rhs_decalTailNumber_type',['AviaWhite','AviaYellow','Empty']],['AviaWhite','Empty']]]]] call rhs_fnc_decalsInit}";
                defaultValue = 0;
                typeName = "STRING";
                class values {
                    class NoChange {
                        name = "Default";
                        value = "NoChange";
                    };
                    class Hidden {
                        name = "Hidden";
                        value = "Empty";
                    };
                    class AviaYellow {
                        name = "Aviation Yellow";
                        value = "AviaYellow";
                    };
                    class AviaBlue {
                        name = "Aviation Blue";
                        value = "AviaBlue";
                        defaultValue = "AviaBlue";
                    };
                    class AviaRed {
                        name = "Aviation Red";
                        value = "AviaRed";
                    };
                    class AviaWhiteOut {
                        name = "Aviation White Out";
                        value = "AviaWhiteOut";
                    };
                    class AviaWhite {
                        name = "Aviation White";
                        value = "AviaWhite";
                    };
                    class AviaWhiteShadow {
                        name = "Aviation White Shadow";
                        value = "AviaWhiteShadow";
                    };
                    class AviaOrange {
                        name = "Aviation Orange";
                        value = "AviaOrange";
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
            class rhs_decalTailNumber_type {
                displayName = "Define font type of tail number";
                tooltip = "Define kind of font that will be drawn on vehicle tail";
                property = "rhs_decalTailNumber_type";
                control = "Combo";
                expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', [cRHSAIRMIG29NumberPlaces,cRHSAIRMIG29TailNumberPlaces, cRHSAIRMIG29TailTopNumberPlaces], [_this getVariable ['rhs_decalNumber_type',['AviaWhite','AviaRed','AviaBlue','AviaOrange','AviaWhiteShadow']],_value,['AviaWhite','Empty']]]]] call rhs_fnc_decalsInit}";
                defaultValue = 0;
                typeName = "STRING";
                class values {
                    class NoChange {
                        name = "Default";
                        value = "NoChange";
                    };
                    class Hidden {
                        name = "Hidden";
                        value = "Empty";
                    };
                    class AviaYellow {
                        name = "Aviation Yellow";
                        value = "AviaYellow";
                    };
                    class AviaBlue {
                        name = "Aviation Blue";
                        value = "AviaBlue";
                        defaultValue = "AviaBlue";
                    };
                    class AviaRed {
                        name = "Aviation Red";
                        value = "AviaRed";
                    };
                    class AviaWhiteOut {
                        name = "Aviation White Out";
                        value = "AviaWhiteOut";
                    };
                    class AviaWhite {
                        name = "Aviation White";
                        value = "AviaWhite";
                    };
                    class AviaWhiteShadow {
                        name = "Aviation White Shadow";
                        value = "AviaWhiteShadow";
                    };
                    class AviaOrange {
                        name = "Aviation Orange";
                        value = "AviaOrange";
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
                tooltip = "Set side number. 2 numbers are required. Type 0 to hide numbers completly";
                property = "rhs_decalNumber";
                control = "Edit";
                validate = "Number";
                defaultValue = "-1";
                typeName = "Number";
                expression = "if(_value >= 0)then{if(_value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRMIG29NumberPlaces;{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRMIG29TailNumberPlaces;{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRMIG29TailTopNumberPlaces}else{[_this, [['Number', [cRHSAIRMIG29NumberPlaces,cRHSAIRMIG29TailNumberPlaces, cRHSAIRMIG29TailTopNumberPlaces], [_this getVariable ['rhs_decalNumber_type',['AviaWhite','AviaRed','AviaBlue','AviaOrange','AviaWhiteShadow']],_this getVariable ['rhs_decalTailNumber_type',['AviaWhite','AviaYellow','Empty']],['AviaWhite','Empty']], _value] ] ] call rhs_fnc_decalsInit}};";
            };
            class rhs_decalRoundel {
                displayName = "Define Roundel";
                tooltip = "Define Roundel texture located on the wings and tail.";
                property = "rhs_decalRoundel";
                control = "Combo";
                expression = "if(_value >= 0)then{ [_this, [[ 'Label', cRHSAIRMIG29StarPlaces, 'Aviation', _value ]]] call rhs_fnc_decalsInit};";
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
                    class RU_Star_Old {
                        name = "Russia";
                        value = 2;
                    };
                    class RU_Star_New2 {
                        name = "Russia (New)";
                        value = 7;
                    };
                    class CDF {
                        name = "Chernarus";
                        value = 4;
                    };
                    class CDF_New {
                        name = "Chernarus (Gray)";
                        value = 5;
                    };
                    class Takistan {
                        name = "Takistan";
                        value = 6;
                    };
                };
            };
            class rhs_decalNoseArt {
                displayName = "Define Nose Art";
                tooltip = "Define Nose Art texture located near the cabin.";
                property = "rhs_decalNoseArt";
                control = "Combo";
                expression = "if(_value >= 0)then{ [_this, [[ 'Label', cRHSAIRMIG29NosePlaces, 'Mig29NoseArt', _value ]]] call rhs_fnc_decalsInit};";
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
                    class VvsRandom {
                        name = "VVS Random";
                        value = 1;
                    };
                    class Vmf {
                        name = "VMF Flag";
                        value = 2;
                    };
                    class Excellence {
                        name = "Aircraft of Excellence";
                        value = 8;
                    };
                    class Mig787 {
                        name = "787th IAP (MiG Logo)";
                        value = 3;
                    };
                    class Shark1 {
                        name = "Shark Mouth 1";
                        value = 4;
                    };
                    class Shark2 {
                        name = "Shark Mouth 2";
                        value = 5;
                    };
                    class Iap33 {
                        name = "33rd IAP";
                        value = 6;
                    };
                    class Osad21 {
                        name = "21st OSAD";
                        value = 7;
                    };
                    class Iap968 {
                        name = "968th IAP";
                        value = 9;
                    };
                    class Iap960 {
                        name = "960th IAP";
                        value = 10;
                    };
                    class Gvardiya {
                        name = "Guards Regiment";
                        value = 11;
                    };
                };
            };
            class rhs_decalTail {
                displayName = "Define Tail Art";
                tooltip = "Define tail decal that will be drawn on vehicle";
                property = "rhs_decalTail";
                control = "Combo";
                expression = "if(_value >= 0)then{[_this,[['Label', cRHSAIRMIG29TailPlaces, 'Mig29TailSign',_value]]] call rhs_fnc_decalsInit};";
                defaultValue = -1;
                typeName = "Number";
                class values {
                    class Default {
                        name = "Default";
                        value = -1;
                    };
                    class Empty {
                        name = "Empty";
                        value = 0;
                    };
                    class VMF {
                        name = "VMF Russia";
                        value = 1;
                        defaultValue = 1;
                    };
                    class VVS {
                        name = "VVS Russia";
                        value = 2;
                    };
                    class VvsRandom {
                        name = "VVS Random";
                        value = 3;
                    };
                    class Mary1st {
                        name = "Mary 1st AB Bee";
                        value = 4;
                    };
                    class Iap33 {
                        name = "33rd IAP";
                        value = 5;
                    };
                    class Iap120 {
                        name = "120th IAP";
                        value = 6;
                    };
                    class Iap404 {
                        name = "404th IAP";
                        value = 7;
                    };
                    class Ab1521 {
                        name = "1521st AB";
                        value = 8;
                    };
                    class Mig {
                        name = "787th IAP (MiG Logo)";
                        value = 9;
                    };
                    class Rusavia {
                        name = "787th IAP (Rusavia)";
                        value = 10;
                    };
                };
            };
        };
        class compartmentsLights {
            class Comp1 {
                class Light_General {
                    color[] = {40, 20, 20};
                    ambient[] = {0, 0, 0};
                    intensity = 2.15;
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
                        hardLimitStart = 0.65;
                        hardLimitEnd = 0.95;
                    };
                    point = "light_general";
                };
            };
        };
        class Reflectors {
            class Left {
                color[] = {0.8, 0.8, 1, 1};
                ambient[] = {0.07, 0.07, 0.07, 1};
                position = "light_l_source";
                direction = "light_l_target";
                hitpoint = "light_l";
                selection = "light_l";
                size = 1;
                brightness = 1;
                intensity = 5000000;
                innerAngle = 20;
                outerAngle = 120;
                coneFadeCoef = 50;
                useFlare = 0;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 50;
                    hardLimitStart = 0;
                    hardLimitEnd = 3;
                };
            };
            class Left_flare: Left {
                innerAngle = 10;
                outerAngle = 170;
                useFlare = 1;
                intensity = 111;
            };
            class Right: Left {
                position = "light_r_source";
                direction = "light_r_target";
                hitpoint = "light_r";
                selection = "light_r";
            };
            class Right_flare: Right {
                innerAngle = 120;
                outerAngle = 170;
                useFlare = 1;
                intensity = 111;
            };
            class Center: Left {
                position = "light_f_source";
                direction = "light_f_target";
                hitpoint = "light_f";
                selection = "light_f";
            };
            class Center_flare: Center {
                innerAngle = 120;
                outerAngle = 170;
                useFlare = 1;
                intensity = 111;
            };
        };
        aggregateReflectors[] = {
            {"Left"},
            {"Left_flare"},
            {"Right"},
            {"Right_flare"},
            {"Center"},
            {"Center_flare"}
        };
        class Exhausts {
            class Exhaust1 {
                position = "exhaust_l_axis_base";
                direction = "exhaust_l_axis_end";
                effect = "RHS_ExhaustsEffectPlaneHP";
                engineIndex = 0;
            };
            class Exhaust2 {
                position = "exhaust_r_axis_base";
                direction = "exhaust_r_axis_end";
                effect = "RHS_ExhaustsEffectPlaneHP";
                engineIndex = 1;
            };
        };
        class WingVortices {
            class WingTipLeft {
                effectName = "WingVortices";
                position = "light_nav_left";
            };
            class WingTipRight {
                effectName = "WingVortices";
                position = "light_nav_right";
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
        maxOmega = 2000;
        class Wheels {
            disableWheelsWhenDestroyed = 1;
            class Wheel_1 {
                boneName = "fg_damper";
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
                maxCompression = 0.18;
                maxDroop = 0.18;
                sprungMass = 3966;
                springStrength = 56600;
                springDamperRate = 215569.6;
                longitudinalStiffnessPerUnitGravity = 5000;
                latStiffX = 2.5;
                latStiffY = 18;
                frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1, 1}};
            };
            class Wheel_1_fake: Wheel_1 {};
            class Wheel_2: Wheel_1 {
                boneName = "lg_damper";
                center = "Wheel_2_center";
                boundary = "Wheel_2_rim";
                suspForceAppPointOffset = "Wheel_2_center";
                tireForceAppPointOffset = "Wheel_2_center";
                steering = 0;
                width = 0.28;
                maxCompression = 0.13;
                maxDroop = 0.13;
                sprungMass = 4652;
                springDamperRate = 220569.6;
                springStrength = 151000;
            };
            class Wheel_3: Wheel_2 {
                boneName = "rg_damper";
                center = "Wheel_3_center";
                boundary = "Wheel_3_rim";
                suspForceAppPointOffset = "Wheel_3_center";
                tireForceAppPointOffset = "Wheel_3_center";
                side = "right";
            };
        };
        class AnimationSources {
            class CollisionLightRed_source {
                source = "MarkerLight";
                markerLight = "PositionRed";
            };
            class CollisionLightGreen_source {
                source = "MarkerLight";
                markerLight = "PositionGreen";
            };
            class CollisionLightWhite_source {
                source = "MarkerLight";
                markerLight = "PositionWhite";
            };
            class UserSunfilter {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class fold_mirrors {
                source = "user";
                animPeriod = 0.6;
                initPhase = 0;
            };
            class switch_gear: fold_mirrors {
                animPeriod = 0.8;
            };
            class switch_hud: switch_gear {};
            class switch_mastersafe: switch_gear {};
            class afterburner_source {
                source = "user";
                initPhase = 0;
                animPeriod = 1.5;
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
            class rwr_lights_lock {
                source = "user";
                initPhase = 0;
                animPeriod = 8;
            };
            class rwr_lock_dir_primary: rwr_lights_lock {
                animPeriod = 0.1;
            };
            class rwr_lock_primary: rwr_lights_lock {
                animPeriod = 0.0000001;
            };
            class rwr_signal_strenght: rwr_lights_lock {
                animPeriod = 0.0000001;
            };
            class HitEngine_1 {
                source = "hit";
                hitpoint = "HitEngine";
            };
            class HitEngine_2 {
                source = "hit";
                hitpoint = "HitEngine2";
            };
            class GSh_ammorandom {
                source = "ammorandom";
                weapon = "rhs_weap_GSh301";
            };
            class GSh_reload {
                source = "reload";
                weapon = "rhs_weap_GSh301";
            };
            class rwr_lights: rwr_lock_primary {};
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
            class hit_pylon_1_source {
                source = "Hit";
                hitpoint = "HitPylon1";
            };
            class hit_pylon_2_source {
                source = "Hit";
                hitpoint = "HitPylon2";
            };
            class hit_pylon_3_source {
                source = "Hit";
                hitpoint = "HitPylon3";
            };
            class hit_pylon_4_source {
                source = "Hit";
                hitpoint = "HitPylon4";
            };
            class hit_pylon_5_source {
                source = "Hit";
                hitpoint = "HitPylon5";
            };
            class hit_pylon_6_source {
                source = "Hit";
                hitpoint = "HitPylon6";
            };
            class hit_pylon_7_source {
                source = "Hit";
                hitpoint = "HitPylon7";
            };
        };
        class MarkerLights {
            class PositionRed {
                color[] = {0.8, 0, 0};
                ambient[] = {0.08, 0, 0};
                intensity = 500;
                name = "light_nav_left";
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
                name = "light_nav_right";
            };
            class PositionWhite: PositionRed {
                color[] = {1, 1, 1};
                ambient[] = {0.08, 0.08, 0.08};
                name = "light_nav_back";
            };
        };
        class UserActions {
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
            class FilterOn: SAFEMODE {
                displayName = "Sunfilter on";
                condition = "(call rhs_fnc_findPlayer) in this && (this animationPhase 'AnimateSunfilter' == 0)";
                statement = "this animate ['AnimateSunfilter',1];";
                priority = 0.5;
            };
            class FilterOff: FilterOn {
                displayName = "Sunfilter off";
                condition = "(this animationPhase 'AnimateSunfilter' == 1)";
                statement = "this animate ['AnimateSunfilter',0];";
            };
            class Helmet: SAFEMODE {
                displayName = "Toggle HMD";
                shortcut = "user14";
                statement = "if(this getVariable ['rhs_mfd_2',false])then{this setUserMFDvalue [2,0];this setVariable ['rhs_mfd_2',false]}else{this setUserMFDvalue [2,1];this setVariable ['rhs_mfd_2',true]}";
            };
            class Reticle {
                displayName = "<t color='#FBB829'>Toggle reticle</t>";
                position = "";
                radius = 10;
                priority = 10.5;
                onlyforplayer = 1;
                showWindow = 0;
                hideOnUse = 1;
                condition = "(call rhs_fnc_findPlayer) in this";
                shortcut = "user10";
                statement = "if(((getUserMFDvalue this) select 3) isEqualTo 0)then{this setUserMFDvalue [3,1];}else{this setUserMFDvalue [3,0];}";
            };
            class Mirrors {
                displayName = "<t color='#FBB829'>Toggle mirrors</t>";
                position = "";
                radius = 10;
                priority = 10.5;
                onlyforplayer = 1;
                showWindow = 0;
                hideOnUse = 1;
                condition = "(call rhs_fnc_findPlayer) in this";
                shortcut = "";
                statement = "this animateSource ['fold_mirrors',abs((this animationSourcePhase 'fold_mirrors') -1)]";
            };
        };
        class Components: Components {
            class TransportPylonsComponent {
                UIPicture = "\rhsafrf\addons\rhs_mig29\data\loadouts\RHS_MiG29_EDEN_CA.paa";
                class pylons {
                    class pylon1 {
                        hardpoints[] = {
                            "RHS_HP_FAB100_BD3_UMK2A",
                            "RHS_HP_FAB100_MBD3_U4T",
                            "RHS_HP_FAB250_BD3_UMK2A",
                            "RHS_HP_FAB500_BD3_UMK2A",
                            "RHS_HP_KMGU2_BD3_UMK2A",
                            "RHS_HP_BD3_UMK2A_O25L",
                            "RHS_HP_APU68_BD3_UMK2A",
                            "RHS_HP_B13L_BD3_UMK2A",
                            "RHS_HP_B8M1_BD3_UMK2A",
                            "RHS_HP_UB16_BD3_UMK2A",
                            "RHS_HP_UB32_BD3_UMK2A",
                            "RHS_HP_R77M_AKU170_MIG29",
                            "RHS_HP_R77_AKU170_MIG29",
                            "RHS_HP_R27_APU470",
                            "RHS_HP_R60_APU60",
                            "RHS_HP_R73_APU73",
                            "RHS_HP_PTB1150"
                        };
                        priority = 9;
                        attachment = "rhs_mag_R27ER_APU470";
                        maxweight = 1200;
                        UIposition[] = {0.32, 0.2};
                        hitpoint = "HitPylon1";
                    };
                    class pylon2: pylon1 {
                        UIposition[] = {0.32, 0.35};
                        mirroredMissilePos = 1;
                        hitpoint = "HitPylon2";
                    };
                    class pylon3: pylon1 {
                        hardpoints[] = {
                            "RHS_HP_FAB100_BD3_UMK2A",
                            "RHS_HP_FAB100_MBD3_U4T",
                            "RHS_HP_FAB250_BD3_UMK2A",
                            "RHS_HP_FAB500_BD3_UMK2A",
                            "RHS_HP_KMGU2_BD3_UMK2A",
                            "RHS_HP_BD3_UMK2A_O25L",
                            "RHS_HP_APU68_BD3_UMK2A",
                            "RHS_HP_B13L_BD3_UMK2A",
                            "RHS_HP_B8M1_BD3_UMK2A",
                            "RHS_HP_UB16_BD3_UMK2A",
                            "RHS_HP_UB32_BD3_UMK2A",
                            "RHS_HP_R77M_AKU170_MIG29",
                            "RHS_HP_R77_AKU170_MIG29",
                            "RHS_HP_R60_APU60",
                            "RHS_HP_R73_APU73"
                        };
                        priority = 7;
                        UIposition[] = {0.33, 0.15};
                        attachment = "rhs_mag_R73M_APU73";
                        hitpoint = "HitPylon3";
                    };
                    class pylon4: pylon3 {
                        UIposition[] = {0.33, 0.4};
                        mirroredMissilePos = 3;
                        hitpoint = "HitPylon4";
                    };
                    class pylon5: pylon1 {
                        hardpoints[] = {
                            "RHS_HP_R77M_AKU170_MIG29",
                            "RHS_HP_R77_AKU170_MIG29",
                            "RHS_HP_R60_APU60",
                            "RHS_HP_R73_APU73"
                        };
                        priority = 10;
                        attachment = "rhs_mag_R73M_APU73";
                        maxweight = 1200;
                        UIposition[] = {0.34, 0.1};
                        hitpoint = "HitPylon5";
                    };
                    class pylon6: pylon5 {
                        UIposition[] = {0.34, 0.45};
                        mirroredMissilePos = 5;
                        hitpoint = "HitPylon6";
                    };
                    class pylon7: pylon1 {
                        hardpoints[] = {"RHS_HP_PTB1500"};
                        priority = 1;
                        UIposition[] = {0.33, 0.275};
                        attachment = "";
                        hitpoint = "HitPylon7";
                    };
                    class cmDispenser {
                        hardpoints[] = {"RHS_cm_BVP3026", "RHS_cm_BVP3026_x2"};
                        priority = 1;
                        attachment = "rhs_BVP3026_CMFlare_Chaff_Magazine_x2";
                        maxweight = 800;
                        UIposition[] = {0.625, 0.275};
                    };
                };
                class Presets {
                    class Bomb {
                        attachment[] = {
                            "rhs_mag_fab500_bd3_umk2a",
                            "rhs_mag_fab500_bd3_umk2a",
                            "rhs_mag_fab500_bd3_umk2a",
                            "rhs_mag_fab500_bd3_umk2a",
                            "rhs_mag_R73M_APU73",
                            "rhs_mag_R73M_APU73",
                            "rhs_BVP3026_CMFlare_Chaff_Magazine_x2"
                        };
                        displayname = "Bomb";
                    };
                    class KMGU {
                        attachment[] = {
                            "rhs_mag_kmgu2_ao25_bd3_umk2a",
                            "rhs_mag_kmgu2_ao25_bd3_umk2a",
                            "rhs_mag_kmgu2_ao25_bd3_umk2a",
                            "rhs_mag_kmgu2_ao25_bd3_umk2a",
                            "rhs_mag_R73M_APU73",
                            "rhs_mag_R73M_APU73",
                            "rhs_BVP3026_CMFlare_Chaff_Magazine_x2"
                        };
                        displayname = "KMGU-2 (AO-2.5)";
                    };
                    class AA {
                        attachment[] = {
                            "rhs_mag_R27ER_APU470",
                            "rhs_mag_R27ER_APU470",
                            "rhs_mag_R73M_APU73",
                            "rhs_mag_R73M_APU73",
                            "rhs_mag_R73M_APU73",
                            "rhs_mag_R73M_APU73",
                            "rhs_BVP3026_CMFlare_Chaff_Magazine_x2"
                        };
                        displayname = "Anti Air";
                    };
                    class CAS {
                        attachment[] = {
                            "rhs_mag_b8m1_bd3_umk2a_s8kom",
                            "rhs_mag_b8m1_bd3_umk2a_s8kom",
                            "rhs_mag_b8m1_bd3_umk2a_s8df",
                            "rhs_mag_b8m1_bd3_umk2a_s8df",
                            "rhs_mag_R73M_APU73",
                            "rhs_mag_R73M_APU73",
                            "rhs_BVP3026_CMFlare_Chaff_Magazine_x2"
                        };
                        displayname = "Close Air Support";
                    };
                };
            };
            class SensorsManagerComponent {
                class Components {
                    class IRSensorComponent: SensorTemplateIR {
                        class AirTarget {
                            minRange = 500;
                            maxRange = 5000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 500;
                            maxRange = 500;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        angleRangeHorizontal = 360;
                        angleRangeVertical = 120;
                        maxTrackableSpeed = 500;
                    };
                    class PassiveRadarSensorComponent: SensorTemplatePassiveRadar {};
                    class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
                        class AirTarget {
                            minRange = 23000;
                            maxRange = 23000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 9000;
                            maxRange = 9000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        typeRecognitionDistance = 6000;
                        angleRangeHorizontal = 60;
                        angleRangeVertical = 60;
                        groundNoiseDistanceCoef = 0.1;
                    };
                    class LaserSensorComponent: SensorTemplateLaser {};
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
                };
            };
            class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                defaultDisplay = "";
                class Components {
                    class EmptyDisplay {
                        componentType = "EmptyDisplayComponent";
                    };
                    class MinimapDisplay {
                        componentType = "MinimapDisplayComponent";
                        resource = "RscCustomInfoMiniMap";
                    };
                };
            };
        };
        class RenderTargets {
            class Mirror {
                renderTarget = "rendertarget0";
                class CameraView1 {
                    pointPosition = "PIP_mirror_0";
                    pointDirection = "PIP_mirror_0_dir";
                    renderQuality = 0;
                    renderVisionMode = 0;
                    fov = 1;
                };
                BBoxes[] = {"PIP_0_TL", "PIP_0_TR", "PIP_0_BL", "PIP_0_BR"};
            };
        };
        defaultUserMFDvalues[] = {1, 0, 0, 0};
        defaultUserMFDstrings[] = {"rhsafrf\addons\rhs_c_a2port_air\Su25\rhs_su25_reticle_static_ca.paa"};
        class MFD {
            class HUD {
                topLeft = "HUD_top_left";
                topRight = "HUD_top_right";
                bottomLeft = "HUD_bottom_left";
                enableParallax = 1;
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0, 1, 0, 0.1};
                font = "rhs_digital_font_rus";
                class material {
                    ambient[] = {10, 10, 10, 1};
                    diffuse[] = {10, 10, 10, 1};
                    emissive[] = {400, 200, 200, 1};
                };
                class Bones {
                    class PlaneOrientation {
                        type = "fixed";
                        refreshRate = 0.1;
                        pos[] = {0.503, 0.53};
                    };
                    class ClimbFixed {
                        type = "fixed";
                        pos[] = {0.898, 0.7};
                    };
                    class ClimbRotate {
                        type = "rotational";
                        source = "vspeed";
                        sourceScale = 1;
                        center[] = {0.88, 0.7};
                        min = -30;
                        max = 30;
                        minAngle = -90;
                        maxAngle = 90;
                        aspectRatio = 0.985714;
                    };
                    class WeaponAim {
                        type = "vector";
                        source = "weapon";
                        pos0[] = {0.503, 0.53};
                        pos10[] = {1.1162, 1.13444};
                    };
                    class Velocity {
                        type = "vector";
                        source = "velocity";
                        pos0[] = {0.503, 0.53};
                        pos10[] = {1.1162, 1.13444};
                    };
                    class HorizonBankSource {
                        type = "rotational";
                        source = "HorizonBank";
                        center[] = {0.503, 0.53};
                        min = -6.2831;
                        max = 6.2831;
                        minAngle = -360;
                        maxAngle = 360;
                    };
                    class HorizonBankInverted {
                        type = "rotational";
                        source = "HorizonBank";
                        center[] = {0.503, 0.53};
                        min = -6.2831;
                        max = 6.2831;
                        minAngle = 360;
                        maxAngle = -360;
                        refreshRate = 0.1;
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
                        minPos[] = {0.503, 4.78};
                        maxPos[] = {0.503, -3.72};
                        refreshRate = 0.1;
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
                        pos10[] = {1.1132, 1.13444};
                    };
                    class ImpactPointRelative {
                        type = "vector";
                        source = "impactpointweaponRelative";
                        pos0[] = {0.5, 0.53};
                        pos10[] = {1.1132, 1.13444};
                    };
                    class Limit0109 {
                        type = "limit";
                        limits[] = {0.1, 0.1, 0.9, 0.9};
                    };
                    class Target {
                        source = "target";
                        type = "vector";
                        pos0[] = {0.503, 0.53};
                        pos10[] = {1.1162, 1.13444};
                    };
                    class TargetingPodTarget {
                        source = "pilotcamera";
                        type = "vector";
                        pos0[] = {0.503, 0.53};
                        pos10[] = {1.1162, 1.13444};
                    };
                    class WPPoint {
                        type = "vector";
                        source = "WPPoint";
                        pos0[] = {0.5, 0.53};
                        pos10[] = {1.1132, 1.13444};
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
                        aspectRatio = 0.985714;
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
                        pos10[] = {1.1132, 1.13444};
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
                        pos3[] = {0.68396, 0.53};
                    };
                    class ILS_W: ILS_H {
                        pos3[] = {0.5, 0.711332};
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
                        sourceScale = 0.65;
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
                        aspectRatio = 0.985714;
                    };
                    class LarAmmoMGunMin: LarAmmoMGunMax {
                        source = "LarAmmoMin";
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    condition = "on-user3";
                    class Horizont {
                        clipTL[] = {0.1, 0.38};
                        clipBR[] = {0.9, 0.78};
                        condition = "1-(bomb+mgun+atmissile+aamissile+rocket)*activeSensorsOn";
                        class Dimmed {
                            class Level00 {
                                type = "line";
                                width = 5;
                                points[] = {{"Level0", {0.176, 0}, 1}, {"Level0", {-0.176, 0}, 1}, {}};
                            };
                            class Level2M00: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, 0}, 1}, {"Level0", {0.18, 0}, 1}};
                            };
                            class VALM2_1_00 {
                                type = "text";
                                source = "static";
                                text = 0;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -0.036}, 1};
                                right[] = {"Level0", {0.24, -0.036}, 1};
                                down[] = {"Level0", {0.2, -0.004}, 1};
                            };
                            class Level2M10: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, -0.223867}, 1}, {"Level0", {0.18, -0.223867}, 1}};
                            };
                            class VALM2_1_10 {
                                type = "text";
                                source = "static";
                                text = 10;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -0.259867}, 1};
                                right[] = {"Level0", {0.24, -0.259867}, 1};
                                down[] = {"Level0", {0.2, -0.227867}, 1};
                            };
                            class Level2P10: Level00 {
                                type = "line";
                                lineType = 2;
                                points[] = {{"Level0", {0.224, 0.223867}, 1}, {"Level0", {0.18, 0.223867}, 1}};
                            };
                            class VALP2_1_10 {
                                type = "text";
                                source = "static";
                                text = -10;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, 0.187867}, 1};
                                right[] = {"Level0", {0.24, 0.187867}, 1};
                                down[] = {"Level0", {0.2, 0.219867}, 1};
                            };
                            class Level2M20: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, -0.447733}, 1}, {"Level0", {0.18, -0.447733}, 1}};
                            };
                            class VALM2_1_20 {
                                type = "text";
                                source = "static";
                                text = 20;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -0.483733}, 1};
                                right[] = {"Level0", {0.24, -0.483733}, 1};
                                down[] = {"Level0", {0.2, -0.451733}, 1};
                            };
                            class Level2P20: Level00 {
                                type = "line";
                                lineType = 2;
                                points[] = {{"Level0", {0.224, 0.447733}, 1}, {"Level0", {0.18, 0.447733}, 1}};
                            };
                            class VALP2_1_20 {
                                type = "text";
                                source = "static";
                                text = -20;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, 0.411733}, 1};
                                right[] = {"Level0", {0.24, 0.411733}, 1};
                                down[] = {"Level0", {0.2, 0.443733}, 1};
                            };
                            class Level2M30: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, -0.6716}, 1}, {"Level0", {0.18, -0.6716}, 1}};
                            };
                            class VALM2_1_30 {
                                type = "text";
                                source = "static";
                                text = 30;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -0.7076}, 1};
                                right[] = {"Level0", {0.24, -0.7076}, 1};
                                down[] = {"Level0", {0.2, -0.6756}, 1};
                            };
                            class Level2P30: Level00 {
                                type = "line";
                                lineType = 2;
                                points[] = {{"Level0", {0.224, 0.6716}, 1}, {"Level0", {0.18, 0.6716}, 1}};
                            };
                            class VALP2_1_30 {
                                type = "text";
                                source = "static";
                                text = -30;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, 0.6356}, 1};
                                right[] = {"Level0", {0.24, 0.6356}, 1};
                                down[] = {"Level0", {0.2, 0.6676}, 1};
                            };
                            class Level2M40: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, -0.895467}, 1}, {"Level0", {0.18, -0.895467}, 1}};
                            };
                            class VALM2_1_40 {
                                type = "text";
                                source = "static";
                                text = 40;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -0.931467}, 1};
                                right[] = {"Level0", {0.24, -0.931467}, 1};
                                down[] = {"Level0", {0.2, -0.899467}, 1};
                            };
                            class Level2P40: Level00 {
                                type = "line";
                                lineType = 2;
                                points[] = {{"Level0", {0.224, 0.895467}, 1}, {"Level0", {0.18, 0.895467}, 1}};
                            };
                            class VALP2_1_40 {
                                type = "text";
                                source = "static";
                                text = -40;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, 0.859467}, 1};
                                right[] = {"Level0", {0.24, 0.859467}, 1};
                                down[] = {"Level0", {0.2, 0.891467}, 1};
                            };
                            class Level2M50: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, -1.11933}, 1}, {"Level0", {0.18, -1.11933}, 1}};
                            };
                            class VALM2_1_50 {
                                type = "text";
                                source = "static";
                                text = 50;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -1.15533}, 1};
                                right[] = {"Level0", {0.24, -1.15533}, 1};
                                down[] = {"Level0", {0.2, -1.12333}, 1};
                            };
                            class Level2P50: Level00 {
                                type = "line";
                                lineType = 2;
                                points[] = {{"Level0", {0.224, 1.11933}, 1}, {"Level0", {0.18, 1.11933}, 1}};
                            };
                            class VALP2_1_50 {
                                type = "text";
                                source = "static";
                                text = -50;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, 1.08333}, 1};
                                right[] = {"Level0", {0.24, 1.08333}, 1};
                                down[] = {"Level0", {0.2, 1.11533}, 1};
                            };
                            class Level2M60: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, -1.3432}, 1}, {"Level0", {0.18, -1.3432}, 1}};
                            };
                            class VALM2_1_60 {
                                type = "text";
                                source = "static";
                                text = 60;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -1.3792}, 1};
                                right[] = {"Level0", {0.24, -1.3792}, 1};
                                down[] = {"Level0", {0.2, -1.3472}, 1};
                            };
                            class Level2P60: Level00 {
                                type = "line";
                                lineType = 2;
                                points[] = {{"Level0", {0.224, 1.3432}, 1}, {"Level0", {0.18, 1.3432}, 1}};
                            };
                            class VALP2_1_60 {
                                type = "text";
                                source = "static";
                                text = -60;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, 1.3072}, 1};
                                right[] = {"Level0", {0.24, 1.3072}, 1};
                                down[] = {"Level0", {0.2, 1.3392}, 1};
                            };
                            class Level2M70: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, -1.56707}, 1}, {"Level0", {0.18, -1.56707}, 1}};
                            };
                            class VALM2_1_70 {
                                type = "text";
                                source = "static";
                                text = 70;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -1.60307}, 1};
                                right[] = {"Level0", {0.24, -1.60307}, 1};
                                down[] = {"Level0", {0.2, -1.57107}, 1};
                            };
                            class Level2P70: Level00 {
                                type = "line";
                                lineType = 2;
                                points[] = {{"Level0", {0.224, 1.56707}, 1}, {"Level0", {0.18, 1.56707}, 1}};
                            };
                            class VALP2_1_70 {
                                type = "text";
                                source = "static";
                                text = -70;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, 1.53107}, 1};
                                right[] = {"Level0", {0.24, 1.53107}, 1};
                                down[] = {"Level0", {0.2, 1.56307}, 1};
                            };
                            class Level2M80: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, -1.79093}, 1}, {"Level0", {0.18, -1.79093}, 1}};
                            };
                            class VALM2_1_80 {
                                type = "text";
                                source = "static";
                                text = 80;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -1.82693}, 1};
                                right[] = {"Level0", {0.24, -1.82693}, 1};
                                down[] = {"Level0", {0.2, -1.79493}, 1};
                            };
                            class Level2P80: Level00 {
                                type = "line";
                                lineType = 2;
                                points[] = {{"Level0", {0.224, 1.79093}, 1}, {"Level0", {0.18, 1.79093}, 1}};
                            };
                            class VALP2_1_80 {
                                type = "text";
                                source = "static";
                                text = -80;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, 1.75493}, 1};
                                right[] = {"Level0", {0.24, 1.75493}, 1};
                                down[] = {"Level0", {0.2, 1.78693}, 1};
                            };
                        };
                        class BankDetailed {
                            condition = "1-(bomb+mgun+atmissile+aamissile+rocket+missilelocked + missilelocking+activeSensorsOn)";
                            class Level00 {
                                type = "line";
                                width = 5;
                                points[] = {
                                    {"PlaneOrientation", {-0.144889, 0.0382683}, 1},
                                    {"PlaneOrientation", {-0.164207, 0.0433707}, 1},
                                    {},
                                    {"PlaneOrientation", {-0.129904, 0.0739286}, 1},
                                    {"PlaneOrientation", {-0.164545, 0.0936429}, 1},
                                    {},
                                    {"PlaneOrientation", {-0.106066, 0.104551}, 1},
                                    {"PlaneOrientation", {-0.120208, 0.118491}, 1},
                                    {},
                                    {"PlaneOrientation", {-0.075, 0.128048}, 1},
                                    {"PlaneOrientation", {-0.095, 0.162194}, 1},
                                    {},
                                    {"PlaneOrientation", {0.144889, 0.0382682}, 1},
                                    {"PlaneOrientation", {0.164207, 0.0433707}, 1},
                                    {},
                                    {"PlaneOrientation", {0.129904, 0.0739285}, 1},
                                    {"PlaneOrientation", {0.164545, 0.0936428}, 1},
                                    {},
                                    {"PlaneOrientation", {0.106066, 0.104551}, 1},
                                    {"PlaneOrientation", {0.120208, 0.118491}, 1},
                                    {},
                                    {"PlaneOrientation", {0.075, 0.128048}, 1},
                                    {"PlaneOrientation", {0.095, 0.162194}, 1},
                                    {}
                                };
                            };
                        };
                    };
                    class PlaneOrientationCrosshair {
                        type = "line";
                        width = 3;
                        points[] = {
                            {"HorizonBankInverted", {-0.1375, 0}, 1},
                            {"HorizonBankInverted", {-0.0416667, 0}, 1},
                            {},
                            {"HorizonBankInverted", {-0.0833333, 0}, 1},
                            {"HorizonBankInverted", {-0.0833333, -0.025}, 1},
                            {},
                            {"HorizonBankInverted", {0.0416667, 0}, 1},
                            {"HorizonBankInverted", {0.1375, 0}, 1},
                            {},
                            {"HorizonBankInverted", {0.0833333, 0}, 1},
                            {"HorizonBankInverted", {0.0833333, -0.025}, 1},
                            {},
                            {"HorizonBankInverted", {-0, 0.0333333}, 1},
                            {"HorizonBankInverted", {-0, 0.075}, 1},
                            {},
                            {"PlaneOrientation", {-0.170833, 0}, 1},
                            {"PlaneOrientation", {-0.145833, 0}, 1},
                            {},
                            {"PlaneOrientation", {0.145833, 0}, 1},
                            {"PlaneOrientation", {0.170833, 0}, 1},
                            {}
                        };
                    };
                    class GunCross {
                        condition = "1-mgun*impactDistance*(altitudeAGL>=5)";
                        class Cross {
                            type = "line";
                            width = 3;
                            points[] = {
                                {"PlaneOrientation", {0, -0.03}, 1},
                                {"PlaneOrientation", {0, -0.01}, 1},
                                {},
                                {"PlaneOrientation", {0, 0.03}, 1},
                                {"PlaneOrientation", {0, 0.01}, 1},
                                {},
                                {"PlaneOrientation", {-0.03, 0}, 1},
                                {"PlaneOrientation", {-0.01, 0}, 1},
                                {},
                                {"PlaneOrientation", {0.03, 0}, 1},
                                {"PlaneOrientation", {0.01, 0}, 1},
                                {}
                            };
                        };
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
                    class SpeedNumber0 {
                        type = "text";
                        source = "static";
                        text = 0;
                        align = "left";
                        scale = 1;
                        pos[] = {{0.31, "0.09+0.19"}, 1};
                        right[] = {{0.375, "0.09+0.19"}, 1};
                        down[] = {{0.31, 0.35}, 1};
                    };
                    class SpeedNumber: SpeedNumber0 {
                        source = "speed";
                        sourceScale = 0.36;
                        pos[] = {{0.275, "0.09+0.19"}, 1};
                        right[] = {{0.34, "0.09+0.19"}, 1};
                        down[] = {{0.275, 0.35}, 1};
                    };
                    class AccelerationLine {
                        type = "line";
                        width = 4;
                        points[] = {{{0.22, 0.35}, 1}, {{0.29, 0.35}, 1}};
                    };
                    class Acceleration0Group {
                        condition = "1-abs(gmeterZ)";
                        class Acceleration {
                            type = "line";
                            width = 2;
                            points[] = {
                                {{0.249, 0.362}, 1},
                                {{0.255, 0.35}, 1},
                                {{0.261, 0.362}, 1},
                                {{0.249, 0.362}, 1}
                            };
                        };
                    };
                    class AccelerationPlusGroup {
                        condition = "gmeterZ>=0.5";
                        class Acceleration {
                            type = "line";
                            width = 2;
                            points[] = {
                                {{0.279, 0.362}, 1},
                                {{0.285, 0.35}, 1},
                                {{0.291, 0.362}, 1},
                                {{0.279, 0.362}, 1}
                            };
                        };
                    };
                    class AccelerationMinusGroup {
                        condition = "gmeterZ<=-0.5";
                        class Acceleration {
                            type = "line";
                            width = 2;
                            points[] = {
                                {{0.219, 0.362}, 1},
                                {{0.225, 0.35}, 1},
                                {{0.231, 0.362}, 1},
                                {{0.219, 0.362}, 1}
                            };
                        };
                    };
                    class AltitudeNumber0 {
                        type = "text";
                        source = "static";
                        text = 0;
                        align = "left";
                        scale = 1;
                        pos[] = {{0.82, "0.09+0.19"}, 1};
                        right[] = {{0.885, "0.09+0.19"}, 1};
                        down[] = {{0.82, 0.35}, 1};
                    };
                    class AltitudeNumber: AltitudeNumber0 {
                        source = "altitudeASL";
                        sourceScale = 0.1;
                        sourceLength = 1;
                        pos[] = {{0.785, "0.09+0.19"}, 1};
                        right[] = {{0.85, "0.09+0.19"}, 1};
                        down[] = {{0.785, 0.35}, 1};
                    };
                    class RadarOnGroup {
                        condition = "activeSensorsOn";
                        class RadarText {
                            type = "text";
                            source = "static";
                            text = "РЛ";
                            align = "left";
                            scale = 1;
                            pos[] = {{0.18, 0.45}, 1};
                            right[] = {{0.23, 0.45}, 1};
                            down[] = {{0.18, 0.5}, 1};
                        };
                    };
                    class PylonGroup {
                        condition = "bomb+mgun+atmissile+aamissile+rocket";
                        class Pylon1 {
                            condition = "1-pylonSelected1";
                            class PylonLine {
                                type = "line";
                                width = 6;
                                points[] = {{{0.509, 0.78}, 1}, {{0.541, 0.78}, 1}};
                            };
                        };
                        class Pylon1Selected: Pylon1 {
                            condition = "pylonSelected1";
                            class PylonLine: PylonLine {
                                points[] = {{{0.509, 0.745}, 1}, {{0.541, 0.745}, 1}};
                            };
                        };
                        class Pylon2 {
                            condition = "1-pylonSelected2";
                            class PylonLine {
                                type = "line";
                                width = 6;
                                points[] = {{{0.434, 0.78}, 1}, {{0.466, 0.78}, 1}};
                            };
                        };
                        class Pylon2Selected: Pylon2 {
                            condition = "pylonSelected2";
                            class PylonLine: PylonLine {
                                points[] = {{{0.434, 0.745}, 1}, {{0.466, 0.745}, 1}};
                            };
                        };
                        class Pylon3 {
                            condition = "1-pylonSelected3";
                            class PylonLine {
                                type = "line";
                                width = 6;
                                points[] = {{{0.559, 0.78}, 1}, {{0.591, 0.78}, 1}};
                            };
                        };
                        class Pylon3Selected: Pylon3 {
                            condition = "pylonSelected3";
                            class PylonLine: PylonLine {
                                points[] = {{{0.559, 0.745}, 1}, {{0.591, 0.745}, 1}};
                            };
                        };
                        class Pylon4 {
                            condition = "1-pylonSelected4";
                            class PylonLine {
                                type = "line";
                                width = 6;
                                points[] = {{{0.384, 0.78}, 1}, {{0.416, 0.78}, 1}};
                            };
                        };
                        class Pylon4Selected: Pylon4 {
                            condition = "pylonSelected4";
                            class PylonLine: PylonLine {
                                points[] = {{{0.384, 0.745}, 1}, {{0.416, 0.745}, 1}};
                            };
                        };
                        class Pylon5 {
                            condition = "1-pylonSelected5";
                            class PylonLine {
                                type = "line";
                                width = 6;
                                points[] = {{{0.609, 0.78}, 1}, {{0.641, 0.78}, 1}};
                            };
                        };
                        class Pylon5Selected: Pylon5 {
                            condition = "pylonSelected5";
                            class PylonLine: PylonLine {
                                points[] = {{{0.609, 0.745}, 1}, {{0.641, 0.745}, 1}};
                            };
                        };
                        class Pylon6 {
                            condition = "1-pylonSelected6";
                            class PylonLine {
                                type = "line";
                                width = 6;
                                points[] = {{{0.334, 0.78}, 1}, {{0.366, 0.78}, 1}};
                            };
                        };
                        class Pylon6Selected: Pylon6 {
                            condition = "pylonSelected6";
                            class PylonLine: PylonLine {
                                points[] = {{{0.334, 0.745}, 1}, {{0.366, 0.745}, 1}};
                            };
                        };
                        class PylonName1 {
                            type = "pylonicon";
                            pos[] = {{0.74, 0.73}, 1};
                            pylon = 1;
                            name = "rhs_rus_ammoname";
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
                                    {"ILS_W", {-0.24, -0.0236571}, 1},
                                    {"ILS_W", {-0.24, 0.0236571}, 1},
                                    {},
                                    {"ILS_W", {-0.12, -0.0177429}, 1},
                                    {"ILS_W", {-0.12, 0.0177429}, 1},
                                    {},
                                    {"ILS_W", {0, -0.0236571}, 1},
                                    {"ILS_W", {0, 0.0236571}, 1},
                                    {},
                                    {"ILS_W", {0.12, -0.0177429}, 1},
                                    {"ILS_W", {0.12, 0.0177429}, 1},
                                    {},
                                    {"ILS_W", {0.24, -0.0236571}, 1},
                                    {"ILS_W", {0.24, 0.0236571}, 1},
                                    {},
                                    {"ILS_H", {0, -0.236571}, 1},
                                    {"ILS_H", {0, 0.236571}, 1},
                                    {},
                                    {"ILS_H", {-0.024, -0.236571}, 1},
                                    {"ILS_H", {0.024, -0.236571}, 1},
                                    {},
                                    {"ILS_H", {-0.018, -0.118286}, 1},
                                    {"ILS_H", {0.018, -0.118286}, 1},
                                    {},
                                    {"ILS_H", {-0.024, 0}, 1},
                                    {"ILS_H", {0.024, 0}, 1},
                                    {},
                                    {"ILS_H", {-0.018, 0.118286}, 1},
                                    {"ILS_H", {0.018, 0.118286}, 1},
                                    {},
                                    {"ILS_H", {-0.024, 0.236571}, 1},
                                    {"ILS_H", {0.024, 0.236571}, 1}
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
                    class HeadingArrow {
                        type = "line";
                        width = 3;
                        points[] = {
                            {{0.48, 0.365}, 1},
                            {{0.5, 0.345}, 1},
                            {{0.52, 0.365}, 1},
                            {{0.48, 0.365}, 1}
                        };
                    };
                    class HeadingLine {
                        type = "line";
                        width = 4;
                        points[] = {{{0.35, 0.34}, 1}, {{0.65, 0.34}, 1}};
                    };
                    class HeadingScale {
                        type = "scale";
                        horizontal = 1;
                        source = "heading";
                        sourceScale = 0.1;
                        width = 4;
                        NeverEatSeaWeed = 0;
                        refreshRate = 0.1;
                        top = 0.35;
                        center = 0.5;
                        bottom = 0.65;
                        lineXleft = 0.338;
                        lineYright = 0.328;
                        lineXleftMajor = 0.338;
                        lineYrightMajor = 0.318;
                        majorLineEach = 2;
                        numberEach = 2;
                        step = 0.5;
                        stepSize = 0.0526316;
                        align = "center";
                        scale = 1;
                        pos[] = {0.35, 0.27};
                        right[] = {0.4, 0.27};
                        down[] = {0.35, 0.31};
                    };
                    class MarchGroup {
                        condition = "1-(bomb+mgun+atmissile+aamissile+rocket)";
                        class MarchText {
                            type = "text";
                            source = "static";
                            text = "МРШ";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{0.18, 0.75}, 1};
                            right[] = {{0.23, 0.75}, 1};
                            down[] = {{0.18, 0.8}, 1};
                        };
                        class SpeedNumber0 {
                            type = "text";
                            source = "WPDist";
                            sourceScale = 0.001;
                            sourcePrecision = 1;
                            align = "center";
                            scale = 1;
                            pos[] = {{0.5, 0.75}, 1};
                            right[] = {{0.55, 0.75}, 1};
                            down[] = {{0.5, 0.8}, 1};
                        };
                        class WP {
                            condition = "wpvalid";
                            class shape {
                                type = "line";
                                width = 4;
                                points[] = {
                                    {"WPPoint", {0, -0.0394286}, 1},
                                    {"WPPoint", {0.006944, -0.0388293}, 1},
                                    {"WPPoint", {0.01368, -0.037051}, 1},
                                    {"WPPoint", {0.02, -0.0341451}, 1},
                                    {"WPPoint", {0.025712, -0.0302023}, 1},
                                    {"WPPoint", {0.03064, -0.0253447}, 1},
                                    {"WPPoint", {0.03464, -0.0197143}, 1},
                                    {"WPPoint", {0.037588, -0.0134846}, 1},
                                    {"WPPoint", {0.039392, -0.0068448}, 1},
                                    {"WPPoint", {0.04, 0}, 1},
                                    {"WPPoint", {0.039392, 0.0068448}, 1},
                                    {"WPPoint", {0.037588, 0.0134846}, 1},
                                    {"WPPoint", {0.03464, 0.0197143}, 1},
                                    {"WPPoint", {0.03064, 0.0253447}, 1},
                                    {"WPPoint", {0.025712, 0.0302023}, 1},
                                    {"WPPoint", {0.02, 0.0341451}, 1},
                                    {"WPPoint", {0.01368, 0.037051}, 1},
                                    {"WPPoint", {0.006944, 0.0388293}, 1},
                                    {"WPPoint", {0, 0.0394286}, 1},
                                    {"WPPoint", {-0.006944, 0.0388293}, 1},
                                    {"WPPoint", {-0.01368, 0.037051}, 1},
                                    {"WPPoint", {-0.02, 0.0341451}, 1},
                                    {"WPPoint", {-0.025712, 0.0302023}, 1},
                                    {"WPPoint", {-0.03064, 0.0253447}, 1},
                                    {"WPPoint", {-0.03464, 0.0197143}, 1},
                                    {"WPPoint", {-0.037588, 0.0134846}, 1},
                                    {"WPPoint", {-0.039392, 0.0068448}, 1},
                                    {"WPPoint", {-0.04, 0}, 1},
                                    {"WPPoint", {-0.039392, -0.0068448}, 1},
                                    {"WPPoint", {-0.037588, -0.0134846}, 1},
                                    {"WPPoint", {-0.03464, -0.0197143}, 1},
                                    {"WPPoint", {-0.03064, -0.0253447}, 1},
                                    {"WPPoint", {-0.025712, -0.0302023}, 1},
                                    {"WPPoint", {-0.02, -0.0341451}, 1},
                                    {"WPPoint", {-0.01368, -0.037051}, 1},
                                    {"WPPoint", {-0.006944, -0.0388293}, 1},
                                    {"WPPoint", {0, -0.0394286}, 1},
                                    {}
                                };
                            };
                        };
                    };
                    class HelmetModeGroup {
                        condition = "user2*(bomb+mgun+atmissile+aamissile+rocket)";
                        class HelmetText {
                            type = "text";
                            source = "static";
                            text = "ШЛМ";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{0.18, 0.75}, 1};
                            right[] = {{0.23, 0.75}, 1};
                            down[] = {{0.18, 0.8}, 1};
                        };
                        class BWBText {
                            type = "text";
                            source = "static";
                            text = "БВБ";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{0.18, 0.79}, 1};
                            right[] = {{0.23, 0.79}, 1};
                            down[] = {{0.18, 0.84}, 1};
                        };
                    };
                    class MGun {
                        condition = "mgun";
                        class AmmoBox {
                            type = "line";
                            width = 3;
                            points[] = {
                                {{0.757, 0.748}, 1},
                                {{0.757, 0.782}, 1},
                                {{0.723, 0.782}, 1},
                                {{0.723, 0.748}, 1},
                                {{0.757, 0.748}, 1},
                                {}
                            };
                        };
                        class Full {
                            condition = "ammo>=113";
                            class AmmoText {
                                type = "text";
                                source = "static";
                                text = "4";
                                scale = 1;
                                sourceScale = 1;
                                align = "center";
                                pos[] = {{0.74, 0.745}, 1};
                                right[] = {{0.785, 0.745}, 1};
                                down[] = {{0.74, 0.79}, 1};
                            };
                        };
                        class AlmostFull {
                            condition = "(ammo>=75)*(ammo<=112)";
                            class AmmoText {
                                type = "text";
                                source = "static";
                                text = "3";
                                scale = 1;
                                sourceScale = 1;
                                align = "center";
                                pos[] = {{0.74, 0.74}, 1};
                                right[] = {{0.785, 0.74}, 1};
                                down[] = {{0.74, 0.785}, 1};
                            };
                        };
                        class Half {
                            condition = "(ammo>=38)*(ammo<=74)";
                            class AmmoText {
                                type = "text";
                                source = "static";
                                text = "2";
                                scale = 1;
                                sourceScale = 1;
                                align = "center";
                                pos[] = {{0.74, 0.74}, 1};
                                right[] = {{0.785, 0.74}, 1};
                                down[] = {{0.74, 0.785}, 1};
                            };
                        };
                        class AlmostEmpty {
                            condition = "(ammo>=1)*(ammo<=37)";
                            class AmmoText {
                                type = "text";
                                source = "static";
                                text = "1";
                                scale = 1;
                                sourceScale = 1;
                                align = "center";
                                pos[] = {{0.74, 0.745}, 1};
                                right[] = {{0.785, 0.745}, 1};
                                down[] = {{0.74, 0.79}, 1};
                            };
                        };
                        class Empty {
                            condition = "ammo<=0";
                            class AmmoText {
                                type = "text";
                                source = "static";
                                text = "0";
                                scale = 1;
                                sourceScale = 1;
                                align = "center";
                                pos[] = {{0.74, 0.745}, 1};
                                right[] = {{0.785, 0.745}, 1};
                                down[] = {{0.74, 0.79}, 1};
                            };
                        };
                        class CrossCondition {
                            condition = "impactDistance*(altitudeAGL>=5)";
                            class Cross {
                                type = "line";
                                width = 3;
                                points[] = {
                                    {"ImpactPointRelative", {0, -0.0246429}, 1},
                                    {"ImpactPointRelative", {0, -0.0147857}, 1},
                                    {},
                                    {"ImpactPointRelative", {0, 0.0246429}, 1},
                                    {"ImpactPointRelative", {0, 0.0147857}, 1},
                                    {},
                                    {"ImpactPointRelative", {-0.025, 0}, 1},
                                    {"ImpactPointRelative", {-0.015, 0}, 1},
                                    {},
                                    {"ImpactPointRelative", {0.025, 0}, 1},
                                    {"ImpactPointRelative", {0.015, 0}, 1},
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
                                width = 4;
                                points[] = {
                                    {"ImpactPointRelative", {0, -0.0252343}, 1},
                                    {"ImpactPointRelative", {0, -0.0315429}, 1},
                                    {"MissileFlightTimeRot1", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot2", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot3", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot4", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot5", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot6", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot7", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot8", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot9", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot10", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot11", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot12", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot13", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot14", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot15", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot16", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot17", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot18", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot19", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot20", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot20", {0, 0.0256}, 1, "ImpactPointRelative", 1}
                                };
                            };
                        };
                    };
                    class BombCrosshairGroup {
                        type = "group";
                        condition = "bomb+rocket*impactDistance";
                        class BombCrosshair {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"ImpactPoint", {0, -0.0394286}, 1},
                                {"ImpactPoint", {0.006944, -0.0388293}, 1},
                                {"ImpactPoint", {0.01368, -0.037051}, 1},
                                {"ImpactPoint", {0.02, -0.0341451}, 1},
                                {"ImpactPoint", {0.025712, -0.0302023}, 1},
                                {"ImpactPoint", {0.03064, -0.0253447}, 1},
                                {"ImpactPoint", {0.03464, -0.0197143}, 1},
                                {"ImpactPoint", {0.037588, -0.0134846}, 1},
                                {"ImpactPoint", {0.039392, -0.0068448}, 1},
                                {"ImpactPoint", {0.04, 0}, 1},
                                {"ImpactPoint", {0.039392, 0.0068448}, 1},
                                {"ImpactPoint", {0.037588, 0.0134846}, 1},
                                {"ImpactPoint", {0.03464, 0.0197143}, 1},
                                {"ImpactPoint", {0.03064, 0.0253447}, 1},
                                {"ImpactPoint", {0.025712, 0.0302023}, 1},
                                {"ImpactPoint", {0.02, 0.0341451}, 1},
                                {"ImpactPoint", {0.01368, 0.037051}, 1},
                                {"ImpactPoint", {0.006944, 0.0388293}, 1},
                                {"ImpactPoint", {0, 0.0394286}, 1},
                                {"ImpactPoint", {-0.006944, 0.0388293}, 1},
                                {"ImpactPoint", {-0.01368, 0.037051}, 1},
                                {"ImpactPoint", {-0.02, 0.0341451}, 1},
                                {"ImpactPoint", {-0.025712, 0.0302023}, 1},
                                {"ImpactPoint", {-0.03064, 0.0253447}, 1},
                                {"ImpactPoint", {-0.03464, 0.0197143}, 1},
                                {"ImpactPoint", {-0.037588, 0.0134846}, 1},
                                {"ImpactPoint", {-0.039392, 0.0068448}, 1},
                                {"ImpactPoint", {-0.04, 0}, 1},
                                {"ImpactPoint", {-0.039392, -0.0068448}, 1},
                                {"ImpactPoint", {-0.037588, -0.0134846}, 1},
                                {"ImpactPoint", {-0.03464, -0.0197143}, 1},
                                {"ImpactPoint", {-0.03064, -0.0253447}, 1},
                                {"ImpactPoint", {-0.025712, -0.0302023}, 1},
                                {"ImpactPoint", {-0.02, -0.0341451}, 1},
                                {"ImpactPoint", {-0.01368, -0.037051}, 1},
                                {"ImpactPoint", {-0.006944, -0.0388293}, 1},
                                {"ImpactPoint", {0, -0.0394286}, 1},
                                {},
                                {},
                                {"ImpactPoint", {0, 0.005}, 1},
                                {"ImpactPoint", {0.005, -0}, 1},
                                {"ImpactPoint", {0, -0.005}, 1},
                                {"ImpactPoint", {-0.005, -0}, 1},
                                {"ImpactPoint", {0, 0.005}, 1}
                            };
                        };
                    };
                    class AAMissilesGroup {
                        type = "group";
                        condition = "aamissile";
                        class PPSGroup {
                            condition = "1";
                            class GText {
                                type = "text";
                                source = "static";
                                text = "ППС";
                                align = "left";
                                scale = 1;
                                pos[] = {{0.18, 0.39}, 1};
                                right[] = {{0.23, 0.39}, 1};
                                down[] = {{0.18, 0.44}, 1};
                            };
                        };
                        class ZPSGroup: PPSGroup {
                            condition = "0";
                            class GText: GText {
                                text = "ЗПС";
                            };
                        };
                    };
                    class TargetDiamond {
                        class shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Target", 1, "Limit0109", 1, {0, -0.015}, 1},
                                {"Target", 1, "Limit0109", 1, {-0.0075, 0}, 1},
                                {"Target", 1, "Limit0109", 1, {0, 0.0125}, 1},
                                {"Target", 1, "Limit0109", 1, {0.0075, 0}, 1},
                                {"Target", 1, "Limit0109", 1, {0, -0.0125}, 1}
                            };
                        };
                    };
                    class TargetLocked {
                        condition = "TargetHeight>=1";
                        class TargetSquare {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Target", 1, "Limit0109", 1, {0, -0.0492857}, 1},
                                {"Target", 1, "Limit0109", 1, {0.05, 0}, 1},
                                {"Target", 1, "Limit0109", 1, {0, 0.0492857}, 1},
                                {"Target", 1, "Limit0109", 1, {-0.05, 0}, 1},
                                {"Target", 1, "Limit0109", 1, {0, -0.0492857}, 1}
                            };
                        };
                        class TargetSpeed0 {
                            type = "text";
                            source = "static";
                            text = 0;
                            align = "left";
                            scale = 1;
                            pos[] = {{0.31, "0.09+0.15"}, 1};
                            right[] = {{0.35, "0.09+0.15"}, 1};
                            down[] = {{0.31, 0.285}, 1};
                        };
                        class TargetSpeed: SpeedNumber0 {
                            source = "LarTargetSpeed";
                            sourceScale = 0.36;
                            pos[] = {{0.29, "0.09+0.15"}, 1};
                            right[] = {{0.33, "0.09+0.15"}, 1};
                            down[] = {{0.29, 0.285}, 1};
                        };
                        class TargetHeight0 {
                            type = "text";
                            source = "static";
                            text = 0;
                            align = "left";
                            scale = 1;
                            pos[] = {{0.82, "0.09+0.15"}, 1};
                            right[] = {{0.86, "0.09+0.15"}, 1};
                            down[] = {{0.82, 0.285}, 1};
                        };
                        class TargetHeight: AltitudeNumber0 {
                            source = "TargetHeight";
                            sourceScale = 0.1;
                            sourceLength = 1;
                            pos[] = {{0.8, "0.09+0.15"}, 1};
                            right[] = {{0.84, "0.09+0.15"}, 1};
                            down[] = {{0.8, 0.285}, 1};
                        };
                    };
                    class LAR {
                        type = "group";
                        condition = "bomb+mgun+atmissile+aamissile+rocket";
                        class Lines {
                            type = "line";
                            width = 3;
                            points[] = {
                                {{0.24, 0.375}, 1},
                                {{0.26, 0.375}, 1},
                                {{0.26, 0.695}, 1},
                                {{0.24, 0.695}, 1},
                                {},
                                {{0.24, 0.631}, 1},
                                {{0.26, 0.631}, 1},
                                {},
                                {{0.24, 0.567}, 1},
                                {{0.26, 0.567}, 1},
                                {},
                                {{0.24, 0.503}, 1},
                                {{0.26, 0.503}, 1},
                                {},
                                {{0.24, 0.439}, 1},
                                {{0.26, 0.439}, 1},
                                {},
                                {"LarTargetDist", -0.32, {0.272, 0.707}, 1},
                                {"LarTargetDist", -0.32, {0.26, 0.695}, 1},
                                {"LarTargetDist", -0.32, {0.272, 0.683}, 1},
                                {"LarTargetDist", -0.32, {0.272, 0.692}, 1},
                                {"LarTargetDist", -0.32, {0.282, 0.692}, 1},
                                {"LarTargetDist", -0.32, {0.282, 0.698}, 1},
                                {"LarTargetDist", -0.32, {0.272, 0.698}, 1},
                                {"LarTargetDist", -0.32, {0.272, 0.707}, 1}
                            };
                        };
                        class RadarSearch {
                            condition = "activeSensorsOn - missilelocked - missilelocking";
                            class Shape {
                                type = "line";
                                width = 3;
                                points[] = {
                                    {{0.725, 0.375}, 1},
                                    {{0.74, 0.375}, 1},
                                    {{0.74, 0.695}, 1},
                                    {{0.725, 0.695}, 1},
                                    {},
                                    {{0.74, 0.535}, 1},
                                    {{0.725, 0.535}, 1},
                                    {},
                                    {{0.76, 0.519}, 1},
                                    {{0.76, 0.551}, 1},
                                    {},
                                    {{0.755, 0.5222}, 1},
                                    {{0.74, 0.5222}, 1},
                                    {},
                                    {{0.74, 0.5478}, 1},
                                    {{0.755, 0.5478}, 1},
                                    {},
                                    {{0.47, 0.715}, 1},
                                    {{0.53, 0.715}, 1}
                                };
                            };
                            class RadarTopText {
                                type = "text";
                                source = "static";
                                text = "60";
                                scale = 1;
                                sourceScale = 1;
                                align = "center";
                                pos[] = {{"0.96-0.26", 0.35625}, 1};
                                right[] = {{0.735, 0.35625}, 1};
                                down[] = {{"0.96-0.26", 0.39125}, 1};
                            };
                            class RadarElevText {
                                type = "text";
                                source = "static";
                                text = "0";
                                scale = 1;
                                sourceScale = 1;
                                align = "center";
                                pos[] = {{"1.035-0.26", 0.519}, 1};
                                right[] = {{0.81, 0.519}, 1};
                                down[] = {{"1.035-0.26", 0.554}, 1};
                            };
                        };
                        class Poly {
                            type = "polygon";
                            points[] = {{{"LarAmmoMin", -0.32, {0.261, 0.695}, 1}, {"LarAmmoMin", -0.32, {0.261, 0.7}, 1}, {"LarAmmoMin", -0.32, {0.272, 0.7}, 1}, {"LarAmmoMin", -0.32, {0.272, 0.695}, 1}}, {{"LarAmmoMin", -0.32, {0.261, 0.62}, 1}, {"LarAmmoMin", -0.32, {0.261, 0.63}, 1}, {"LarAmmoMin", -0.32, {0.272, 0.63}, 1}, {"LarAmmoMin", -0.32, {0.272, 0.62}, 1}}, {{"LarAmmoMax", -0.32, {0.261, 0.785}, 1}, {"LarAmmoMax", -0.32, {0.261, 0.79}, 1}, {"LarAmmoMax", -0.32, {0.272, 0.79}, 1}, {"LarAmmoMax", -0.32, {0.272, 0.785}, 1}}};
                        };
                        class LARText1 {
                            type = "text";
                            source = "LarTop";
                            sourceScale = "0.001*1.5";
                            scale = 1;
                            pos[] = {{0.235, 0.361}, 1};
                            right[] = {{0.27, 0.361}, 1};
                            down[] = {{0.235, 0.389}, 1};
                            align = "left";
                        };
                        class LARText2: LARText1 {
                            source = "LarTop";
                            sourcePrecision = -1;
                            sourceScale = "0.0008*1.5";
                            pos[] = {{0.235, 0.425}, 1};
                            right[] = {{0.27, 0.425}, 1};
                            down[] = {{0.235, 0.453}, 1};
                        };
                        class LARText3: LARText1 {
                            source = "LarTop";
                            sourcePrecision = -1;
                            sourceScale = "0.0006*1.5";
                            pos[] = {{0.235, 0.489}, 1};
                            right[] = {{0.27, 0.489}, 1};
                            down[] = {{0.235, 0.517}, 1};
                        };
                        class LARText4: LARText1 {
                            source = "LarTop";
                            sourcePrecision = -1;
                            sourceScale = "0.0004*1.5";
                            pos[] = {{0.235, 0.553}, 1};
                            right[] = {{0.27, 0.553}, 1};
                            down[] = {{0.235, 0.581}, 1};
                        };
                        class LARText5: LARText1 {
                            source = "LarTop";
                            sourcePrecision = -1;
                            sourceScale = "0.0002*1.5";
                            pos[] = {{0.235, 0.617}, 1};
                            right[] = {{0.27, 0.617}, 1};
                            down[] = {{0.235, 0.645}, 1};
                        };
                        class LARText6: LARText1 {
                            source = "static";
                            text = 0;
                            sourcePrecision = -1;
                            sourceScale = "0.0002*1.5";
                            pos[] = {{0.235, 0.681}, 1};
                            right[] = {{0.27, 0.681}, 1};
                            down[] = {{0.235, 0.709}, 1};
                        };
                    };
                    class RadarBoxes {
                        type = "radar";
                        pos0[] = {0.503, 0.53};
                        pos10[] = {1.1162, 1.13444};
                        width = 4;
                        points[] = {
                            {{0, -0.0394286}, 1},
                            {{0.006944, -0.0388293}, 1},
                            {{0.01368, -0.037051}, 1},
                            {{0.02, -0.0341451}, 1},
                            {{0.025712, -0.0302023}, 1},
                            {{0.03064, -0.0253447}, 1},
                            {{0.03464, -0.0197143}, 1},
                            {{0.037588, -0.0134846}, 1},
                            {{0.039392, -0.0068448}, 1},
                            {{0.04, 0}, 1},
                            {{0.039392, 0.0068448}, 1},
                            {{0.037588, 0.0134846}, 1},
                            {{0.03464, 0.0197143}, 1},
                            {{0.03064, 0.0253447}, 1},
                            {{0.025712, 0.0302023}, 1},
                            {{0.02, 0.0341451}, 1},
                            {{0.01368, 0.037051}, 1},
                            {{0.006944, 0.0388293}, 1},
                            {{0, 0.0394286}, 1},
                            {{-0.006944, 0.0388293}, 1},
                            {{-0.01368, 0.037051}, 1},
                            {{-0.02, 0.0341451}, 1},
                            {{-0.025712, 0.0302023}, 1},
                            {{-0.03064, 0.0253447}, 1},
                            {{-0.03464, 0.0197143}, 1},
                            {{-0.037588, 0.0134846}, 1},
                            {{-0.039392, 0.0068448}, 1},
                            {{-0.04, 0}, 1},
                            {{-0.039392, -0.0068448}, 1},
                            {{-0.037588, -0.0134846}, 1},
                            {{-0.03464, -0.0197143}, 1},
                            {{-0.03064, -0.0253447}, 1},
                            {{-0.025712, -0.0302023}, 1},
                            {{-0.02, -0.0341451}, 1},
                            {{-0.01368, -0.037051}, 1},
                            {{-0.006944, -0.0388293}, 1},
                            {{0, -0.0394286}, 1},
                            {}
                        };
                    };
                };
            };
            class HUD_static {
                topLeft = "HUD_top_left";
                topRight = "HUD_top_right";
                bottomLeft = "HUD_bottom_left";
                enableParallax = 1;
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0, 1, 0, 0.1};
                font = "rhs_digital_font_rus";
                class Bones {};
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    condition = "user3*on";
                    class Shape {
                        type = "polygon";
                        texture = "rhsafrf\addons\rhs_c_a2port_air\Su25\rhs_su25_reticle_static_ca.paa";
                        points[] = {{{{0.225, 0.415}, 1}, {{0.785, 0.415}, 1}, {{0.785, 0.915}, 1}, {{0.225, 0.915}, 1}}};
                    };
                };
            };
            class HUD_Repeater {
                topLeft = "MFD_1_TL";
                topRight = "MFD_1_TR";
                bottomLeft = "MFD_1_BL";
                enableParallax = 0;
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0, 1, 0, 0.1};
                font = "rhs_digital_font_rus";
                class material {
                    ambient[] = {10, 10, 10, 1};
                    diffuse[] = {10, 10, 10, 1};
                    emissive[] = {400, 200, 200, 1};
                };
                class Bones {
                    class PlaneOrientation {
                        type = "fixed";
                        refreshRate = 0.1;
                        pos[] = {0.5, 0.53};
                    };
                    class ClimbFixed {
                        type = "fixed";
                        pos[] = {0.898, 0.7};
                    };
                    class ClimbRotate {
                        type = "rotational";
                        source = "vspeed";
                        sourceScale = 1;
                        center[] = {0.88, 0.7};
                        min = -30;
                        max = 30;
                        minAngle = -90;
                        maxAngle = 90;
                        aspectRatio = 0.988636;
                    };
                    class WeaponAim {
                        type = "vector";
                        source = "weapon";
                        pos0[] = {0.5, 0.53};
                        pos10[] = {1.38, 1.4};
                    };
                    class Velocity {
                        type = "vector";
                        source = "velocity";
                        pos0[] = {0.5, 0.53};
                        pos10[] = {1.38, 1.4};
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
                        refreshRate = 0.1;
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
                        refreshRate = 0.1;
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
                        pos10[] = {1.38, 1.4};
                    };
                    class ImpactPointRelative {
                        type = "vector";
                        source = "impactpointweaponRelative";
                        pos0[] = {0.5, 0.53};
                        pos10[] = {1.38, 1.4};
                    };
                    class Limit0109 {
                        type = "limit";
                        limits[] = {0.1, 0.1, 0.9, 0.9};
                    };
                    class Target {
                        source = "target";
                        type = "vector";
                        pos0[] = {0.5, 0.53};
                        pos10[] = {1.38, 1.4};
                    };
                    class TargetingPodTarget {
                        source = "pilotcamera";
                        type = "vector";
                        pos0[] = {0.5, 0.53};
                        pos10[] = {1.38, 1.4};
                    };
                    class WPPoint {
                        type = "vector";
                        source = "WPPoint";
                        pos0[] = {0.5, 0.53};
                        pos10[] = {1.38, 1.4};
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
                        aspectRatio = 0.988636;
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
                        pos10[] = {1.38, 1.4};
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
                        pos3[] = {0.764, 0.53};
                    };
                    class ILS_W: ILS_H {
                        pos3[] = {0.5, 0.791};
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
                        sourceScale = 0.65;
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
                        aspectRatio = 0.988636;
                    };
                    class LarAmmoMGunMin: LarAmmoMGunMax {
                        source = "LarAmmoMin";
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    condition = "on-user3";
                    class Horizont {
                        clipTL[] = {0.1, 0.38};
                        clipBR[] = {0.9, 0.78};
                        condition = "1-(bomb+mgun+atmissile+aamissile+rocket)*activeSensorsOn";
                        class Dimmed {
                            class Level00 {
                                type = "line";
                                width = 5;
                                points[] = {{"Level0", {0.176, 0}, 1}, {"Level0", {-0.176, 0}, 1}, {}};
                            };
                            class Level2M00: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, 0}, 1}, {"Level0", {0.18, 0}, 1}};
                            };
                            class VALM2_1_00 {
                                type = "text";
                                source = "static";
                                text = 0;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -0.036}, 1};
                                right[] = {"Level0", {0.24, -0.036}, 1};
                                down[] = {"Level0", {0.2, -0.004}, 1};
                            };
                            class Level2M10: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, -0.322222}, 1}, {"Level0", {0.18, -0.322222}, 1}};
                            };
                            class VALM2_1_10 {
                                type = "text";
                                source = "static";
                                text = 10;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -0.358222}, 1};
                                right[] = {"Level0", {0.24, -0.358222}, 1};
                                down[] = {"Level0", {0.2, -0.326222}, 1};
                            };
                            class Level2P10: Level00 {
                                type = "line";
                                lineType = 2;
                                points[] = {{"Level0", {0.224, 0.322222}, 1}, {"Level0", {0.18, 0.322222}, 1}};
                            };
                            class VALP2_1_10 {
                                type = "text";
                                source = "static";
                                text = -10;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, 0.286222}, 1};
                                right[] = {"Level0", {0.24, 0.286222}, 1};
                                down[] = {"Level0", {0.2, 0.318222}, 1};
                            };
                            class Level2M20: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, -0.644444}, 1}, {"Level0", {0.18, -0.644444}, 1}};
                            };
                            class VALM2_1_20 {
                                type = "text";
                                source = "static";
                                text = 20;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -0.680444}, 1};
                                right[] = {"Level0", {0.24, -0.680444}, 1};
                                down[] = {"Level0", {0.2, -0.648444}, 1};
                            };
                            class Level2P20: Level00 {
                                type = "line";
                                lineType = 2;
                                points[] = {{"Level0", {0.224, 0.644444}, 1}, {"Level0", {0.18, 0.644444}, 1}};
                            };
                            class VALP2_1_20 {
                                type = "text";
                                source = "static";
                                text = -20;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, 0.608444}, 1};
                                right[] = {"Level0", {0.24, 0.608444}, 1};
                                down[] = {"Level0", {0.2, 0.640444}, 1};
                            };
                            class Level2M30: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, -0.966667}, 1}, {"Level0", {0.18, -0.966667}, 1}};
                            };
                            class VALM2_1_30 {
                                type = "text";
                                source = "static";
                                text = 30;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -1.00267}, 1};
                                right[] = {"Level0", {0.24, -1.00267}, 1};
                                down[] = {"Level0", {0.2, -0.970667}, 1};
                            };
                            class Level2P30: Level00 {
                                type = "line";
                                lineType = 2;
                                points[] = {{"Level0", {0.224, 0.966667}, 1}, {"Level0", {0.18, 0.966667}, 1}};
                            };
                            class VALP2_1_30 {
                                type = "text";
                                source = "static";
                                text = -30;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, 0.930667}, 1};
                                right[] = {"Level0", {0.24, 0.930667}, 1};
                                down[] = {"Level0", {0.2, 0.962667}, 1};
                            };
                            class Level2M40: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, -1.28889}, 1}, {"Level0", {0.18, -1.28889}, 1}};
                            };
                            class VALM2_1_40 {
                                type = "text";
                                source = "static";
                                text = 40;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -1.32489}, 1};
                                right[] = {"Level0", {0.24, -1.32489}, 1};
                                down[] = {"Level0", {0.2, -1.29289}, 1};
                            };
                            class Level2P40: Level00 {
                                type = "line";
                                lineType = 2;
                                points[] = {{"Level0", {0.224, 1.28889}, 1}, {"Level0", {0.18, 1.28889}, 1}};
                            };
                            class VALP2_1_40 {
                                type = "text";
                                source = "static";
                                text = -40;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, 1.25289}, 1};
                                right[] = {"Level0", {0.24, 1.25289}, 1};
                                down[] = {"Level0", {0.2, 1.28489}, 1};
                            };
                            class Level2M50: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, -1.61111}, 1}, {"Level0", {0.18, -1.61111}, 1}};
                            };
                            class VALM2_1_50 {
                                type = "text";
                                source = "static";
                                text = 50;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -1.64711}, 1};
                                right[] = {"Level0", {0.24, -1.64711}, 1};
                                down[] = {"Level0", {0.2, -1.61511}, 1};
                            };
                            class Level2P50: Level00 {
                                type = "line";
                                lineType = 2;
                                points[] = {{"Level0", {0.224, 1.61111}, 1}, {"Level0", {0.18, 1.61111}, 1}};
                            };
                            class VALP2_1_50 {
                                type = "text";
                                source = "static";
                                text = -50;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, 1.57511}, 1};
                                right[] = {"Level0", {0.24, 1.57511}, 1};
                                down[] = {"Level0", {0.2, 1.60711}, 1};
                            };
                            class Level2M60: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, -1.93333}, 1}, {"Level0", {0.18, -1.93333}, 1}};
                            };
                            class VALM2_1_60 {
                                type = "text";
                                source = "static";
                                text = 60;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -1.96933}, 1};
                                right[] = {"Level0", {0.24, -1.96933}, 1};
                                down[] = {"Level0", {0.2, -1.93733}, 1};
                            };
                            class Level2P60: Level00 {
                                type = "line";
                                lineType = 2;
                                points[] = {{"Level0", {0.224, 1.93333}, 1}, {"Level0", {0.18, 1.93333}, 1}};
                            };
                            class VALP2_1_60 {
                                type = "text";
                                source = "static";
                                text = -60;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, 1.89733}, 1};
                                right[] = {"Level0", {0.24, 1.89733}, 1};
                                down[] = {"Level0", {0.2, 1.92933}, 1};
                            };
                            class Level2M70: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, -2.25556}, 1}, {"Level0", {0.18, -2.25556}, 1}};
                            };
                            class VALM2_1_70 {
                                type = "text";
                                source = "static";
                                text = 70;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -2.29156}, 1};
                                right[] = {"Level0", {0.24, -2.29156}, 1};
                                down[] = {"Level0", {0.2, -2.25956}, 1};
                            };
                            class Level2P70: Level00 {
                                type = "line";
                                lineType = 2;
                                points[] = {{"Level0", {0.224, 2.25556}, 1}, {"Level0", {0.18, 2.25556}, 1}};
                            };
                            class VALP2_1_70 {
                                type = "text";
                                source = "static";
                                text = -70;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, 2.21956}, 1};
                                right[] = {"Level0", {0.24, 2.21956}, 1};
                                down[] = {"Level0", {0.2, 2.25156}, 1};
                            };
                            class Level2M80: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, -2.57778}, 1}, {"Level0", {0.18, -2.57778}, 1}};
                            };
                            class VALM2_1_80 {
                                type = "text";
                                source = "static";
                                text = 80;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -2.61378}, 1};
                                right[] = {"Level0", {0.24, -2.61378}, 1};
                                down[] = {"Level0", {0.2, -2.58178}, 1};
                            };
                            class Level2P80: Level00 {
                                type = "line";
                                lineType = 2;
                                points[] = {{"Level0", {0.224, 2.57778}, 1}, {"Level0", {0.18, 2.57778}, 1}};
                            };
                            class VALP2_1_80 {
                                type = "text";
                                source = "static";
                                text = -80;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, 2.54178}, 1};
                                right[] = {"Level0", {0.24, 2.54178}, 1};
                                down[] = {"Level0", {0.2, 2.57378}, 1};
                            };
                        };
                        class BankDetailed {
                            condition = "1-(bomb+mgun+atmissile+aamissile+rocket+missilelocked + missilelocking+activeSensorsOn)";
                            class Level00 {
                                type = "line";
                                width = 5;
                                points[] = {
                                    {"PlaneOrientation", {-0.144889, 0.0383817}, 1},
                                    {"PlaneOrientation", {-0.164207, 0.0434993}, 1},
                                    {},
                                    {"PlaneOrientation", {-0.129904, 0.0741477}, 1},
                                    {"PlaneOrientation", {-0.164545, 0.0939205}, 1},
                                    {},
                                    {"PlaneOrientation", {-0.106066, 0.104861}, 1},
                                    {"PlaneOrientation", {-0.120208, 0.118842}, 1},
                                    {},
                                    {"PlaneOrientation", {-0.075, 0.128428}, 1},
                                    {"PlaneOrientation", {-0.095, 0.162675}, 1},
                                    {},
                                    {"PlaneOrientation", {0.144889, 0.0383817}, 1},
                                    {"PlaneOrientation", {0.164207, 0.0434992}, 1},
                                    {},
                                    {"PlaneOrientation", {0.129904, 0.0741477}, 1},
                                    {"PlaneOrientation", {0.164545, 0.0939204}, 1},
                                    {},
                                    {"PlaneOrientation", {0.106066, 0.104861}, 1},
                                    {"PlaneOrientation", {0.120208, 0.118842}, 1},
                                    {},
                                    {"PlaneOrientation", {0.075, 0.128428}, 1},
                                    {"PlaneOrientation", {0.095, 0.162675}, 1},
                                    {}
                                };
                            };
                        };
                    };
                    class PlaneOrientationCrosshair {
                        type = "line";
                        width = 3;
                        points[] = {
                            {"HorizonBankInverted", {-0.1375, 0}, 1},
                            {"HorizonBankInverted", {-0.0416667, 0}, 1},
                            {},
                            {"HorizonBankInverted", {-0.0833333, 0}, 1},
                            {"HorizonBankInverted", {-0.0833333, -0.025}, 1},
                            {},
                            {"HorizonBankInverted", {0.0416667, 0}, 1},
                            {"HorizonBankInverted", {0.1375, 0}, 1},
                            {},
                            {"HorizonBankInverted", {0.0833333, 0}, 1},
                            {"HorizonBankInverted", {0.0833333, -0.025}, 1},
                            {},
                            {"HorizonBankInverted", {-0, 0.0333333}, 1},
                            {"HorizonBankInverted", {-0, 0.075}, 1},
                            {},
                            {"PlaneOrientation", {-0.170833, 0}, 1},
                            {"PlaneOrientation", {-0.145833, 0}, 1},
                            {},
                            {"PlaneOrientation", {0.145833, 0}, 1},
                            {"PlaneOrientation", {0.170833, 0}, 1},
                            {}
                        };
                    };
                    class GunCross {
                        condition = "1-mgun*impactDistance*(altitudeAGL>=5)";
                        class Cross {
                            type = "line";
                            width = 3;
                            points[] = {
                                {"PlaneOrientation", {0, -0.03}, 1},
                                {"PlaneOrientation", {0, -0.01}, 1},
                                {},
                                {"PlaneOrientation", {0, 0.03}, 1},
                                {"PlaneOrientation", {0, 0.01}, 1},
                                {},
                                {"PlaneOrientation", {-0.03, 0}, 1},
                                {"PlaneOrientation", {-0.01, 0}, 1},
                                {},
                                {"PlaneOrientation", {0.03, 0}, 1},
                                {"PlaneOrientation", {0.01, 0}, 1},
                                {}
                            };
                        };
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
                    class SpeedNumber0 {
                        type = "text";
                        source = "static";
                        text = 0;
                        align = "left";
                        scale = 1;
                        pos[] = {{0.31, "0.09+0.19"}, 1};
                        right[] = {{0.375, "0.09+0.19"}, 1};
                        down[] = {{0.31, 0.35}, 1};
                    };
                    class SpeedNumber: SpeedNumber0 {
                        source = "speed";
                        sourceScale = 0.36;
                        pos[] = {{0.275, "0.09+0.19"}, 1};
                        right[] = {{0.34, "0.09+0.19"}, 1};
                        down[] = {{0.275, 0.35}, 1};
                    };
                    class AccelerationLine {
                        type = "line";
                        width = 4;
                        points[] = {{{0.22, 0.35}, 1}, {{0.29, 0.35}, 1}};
                    };
                    class Acceleration0Group {
                        condition = "1-abs(gmeterZ)";
                        class Acceleration {
                            type = "line";
                            width = 2;
                            points[] = {
                                {{0.249, 0.362}, 1},
                                {{0.255, 0.35}, 1},
                                {{0.261, 0.362}, 1},
                                {{0.249, 0.362}, 1}
                            };
                        };
                    };
                    class AccelerationPlusGroup {
                        condition = "gmeterZ>=0.5";
                        class Acceleration {
                            type = "line";
                            width = 2;
                            points[] = {
                                {{0.279, 0.362}, 1},
                                {{0.285, 0.35}, 1},
                                {{0.291, 0.362}, 1},
                                {{0.279, 0.362}, 1}
                            };
                        };
                    };
                    class AccelerationMinusGroup {
                        condition = "gmeterZ<=-0.5";
                        class Acceleration {
                            type = "line";
                            width = 2;
                            points[] = {
                                {{0.219, 0.362}, 1},
                                {{0.225, 0.35}, 1},
                                {{0.231, 0.362}, 1},
                                {{0.219, 0.362}, 1}
                            };
                        };
                    };
                    class AltitudeNumber0 {
                        type = "text";
                        source = "static";
                        text = 0;
                        align = "left";
                        scale = 1;
                        pos[] = {{0.82, "0.09+0.19"}, 1};
                        right[] = {{0.885, "0.09+0.19"}, 1};
                        down[] = {{0.82, 0.35}, 1};
                    };
                    class AltitudeNumber: AltitudeNumber0 {
                        source = "altitudeASL";
                        sourceScale = 0.1;
                        sourceLength = 1;
                        pos[] = {{0.785, "0.09+0.19"}, 1};
                        right[] = {{0.85, "0.09+0.19"}, 1};
                        down[] = {{0.785, 0.35}, 1};
                    };
                    class RadarOnGroup {
                        condition = "activeSensorsOn";
                        class RadarText {
                            type = "text";
                            source = "static";
                            text = "РЛ";
                            align = "left";
                            scale = 1;
                            pos[] = {{0.18, 0.45}, 1};
                            right[] = {{0.23, 0.45}, 1};
                            down[] = {{0.18, 0.5}, 1};
                        };
                    };
                    class PylonGroup {
                        condition = "bomb+mgun+atmissile+aamissile+rocket";
                        class Pylon1 {
                            condition = "1-pylonSelected1";
                            class PylonLine {
                                type = "line";
                                width = 6;
                                points[] = {{{0.509, 0.78}, 1}, {{0.541, 0.78}, 1}};
                            };
                        };
                        class Pylon1Selected: Pylon1 {
                            condition = "pylonSelected1";
                            class PylonLine: PylonLine {
                                points[] = {{{0.509, 0.745}, 1}, {{0.541, 0.745}, 1}};
                            };
                        };
                        class Pylon2 {
                            condition = "1-pylonSelected2";
                            class PylonLine {
                                type = "line";
                                width = 6;
                                points[] = {{{0.434, 0.78}, 1}, {{0.466, 0.78}, 1}};
                            };
                        };
                        class Pylon2Selected: Pylon2 {
                            condition = "pylonSelected2";
                            class PylonLine: PylonLine {
                                points[] = {{{0.434, 0.745}, 1}, {{0.466, 0.745}, 1}};
                            };
                        };
                        class Pylon3 {
                            condition = "1-pylonSelected3";
                            class PylonLine {
                                type = "line";
                                width = 6;
                                points[] = {{{0.559, 0.78}, 1}, {{0.591, 0.78}, 1}};
                            };
                        };
                        class Pylon3Selected: Pylon3 {
                            condition = "pylonSelected3";
                            class PylonLine: PylonLine {
                                points[] = {{{0.559, 0.745}, 1}, {{0.591, 0.745}, 1}};
                            };
                        };
                        class Pylon4 {
                            condition = "1-pylonSelected4";
                            class PylonLine {
                                type = "line";
                                width = 6;
                                points[] = {{{0.384, 0.78}, 1}, {{0.416, 0.78}, 1}};
                            };
                        };
                        class Pylon4Selected: Pylon4 {
                            condition = "pylonSelected4";
                            class PylonLine: PylonLine {
                                points[] = {{{0.384, 0.745}, 1}, {{0.416, 0.745}, 1}};
                            };
                        };
                        class Pylon5 {
                            condition = "1-pylonSelected5";
                            class PylonLine {
                                type = "line";
                                width = 6;
                                points[] = {{{0.609, 0.78}, 1}, {{0.641, 0.78}, 1}};
                            };
                        };
                        class Pylon5Selected: Pylon5 {
                            condition = "pylonSelected5";
                            class PylonLine: PylonLine {
                                points[] = {{{0.609, 0.745}, 1}, {{0.641, 0.745}, 1}};
                            };
                        };
                        class Pylon6 {
                            condition = "1-pylonSelected6";
                            class PylonLine {
                                type = "line";
                                width = 6;
                                points[] = {{{0.334, 0.78}, 1}, {{0.366, 0.78}, 1}};
                            };
                        };
                        class Pylon6Selected: Pylon6 {
                            condition = "pylonSelected6";
                            class PylonLine: PylonLine {
                                points[] = {{{0.334, 0.745}, 1}, {{0.366, 0.745}, 1}};
                            };
                        };
                        class PylonName1 {
                            type = "pylonicon";
                            pos[] = {{0.74, 0.73}, 1};
                            pylon = 1;
                            name = "rhs_rus_ammoname";
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
                                    {"ILS_W", {-0.24, -0.0237273}, 1},
                                    {"ILS_W", {-0.24, 0.0237273}, 1},
                                    {},
                                    {"ILS_W", {-0.12, -0.0177955}, 1},
                                    {"ILS_W", {-0.12, 0.0177955}, 1},
                                    {},
                                    {"ILS_W", {0, -0.0237273}, 1},
                                    {"ILS_W", {0, 0.0237273}, 1},
                                    {},
                                    {"ILS_W", {0.12, -0.0177955}, 1},
                                    {"ILS_W", {0.12, 0.0177955}, 1},
                                    {},
                                    {"ILS_W", {0.24, -0.0237273}, 1},
                                    {"ILS_W", {0.24, 0.0237273}, 1},
                                    {},
                                    {"ILS_H", {0, -0.237273}, 1},
                                    {"ILS_H", {0, 0.237273}, 1},
                                    {},
                                    {"ILS_H", {-0.024, -0.237273}, 1},
                                    {"ILS_H", {0.024, -0.237273}, 1},
                                    {},
                                    {"ILS_H", {-0.018, -0.118636}, 1},
                                    {"ILS_H", {0.018, -0.118636}, 1},
                                    {},
                                    {"ILS_H", {-0.024, 0}, 1},
                                    {"ILS_H", {0.024, 0}, 1},
                                    {},
                                    {"ILS_H", {-0.018, 0.118636}, 1},
                                    {"ILS_H", {0.018, 0.118636}, 1},
                                    {},
                                    {"ILS_H", {-0.024, 0.237273}, 1},
                                    {"ILS_H", {0.024, 0.237273}, 1}
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
                    class HeadingArrow {
                        type = "line";
                        width = 3;
                        points[] = {
                            {{0.48, 0.365}, 1},
                            {{0.5, 0.345}, 1},
                            {{0.52, 0.365}, 1},
                            {{0.48, 0.365}, 1}
                        };
                    };
                    class HeadingLine {
                        type = "line";
                        width = 4;
                        points[] = {{{0.35, 0.34}, 1}, {{0.65, 0.34}, 1}};
                    };
                    class HeadingScale {
                        type = "scale";
                        horizontal = 1;
                        source = "heading";
                        sourceScale = 0.1;
                        width = 4;
                        NeverEatSeaWeed = 0;
                        refreshRate = 0.1;
                        top = 0.35;
                        center = 0.5;
                        bottom = 0.65;
                        lineXleft = 0.338;
                        lineYright = 0.328;
                        lineXleftMajor = 0.338;
                        lineYrightMajor = 0.318;
                        majorLineEach = 2;
                        numberEach = 2;
                        step = 0.5;
                        stepSize = 0.0526316;
                        align = "center";
                        scale = 1;
                        pos[] = {0.35, 0.27};
                        right[] = {0.4, 0.27};
                        down[] = {0.35, 0.31};
                    };
                    class MarchGroup {
                        condition = "1-(bomb+mgun+atmissile+aamissile+rocket)";
                        class MarchText {
                            type = "text";
                            source = "static";
                            text = "МРШ";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{0.18, 0.75}, 1};
                            right[] = {{0.23, 0.75}, 1};
                            down[] = {{0.18, 0.8}, 1};
                        };
                        class SpeedNumber0 {
                            type = "text";
                            source = "WPDist";
                            sourceScale = 0.001;
                            sourcePrecision = 1;
                            align = "center";
                            scale = 1;
                            pos[] = {{0.5, 0.75}, 1};
                            right[] = {{0.55, 0.75}, 1};
                            down[] = {{0.5, 0.8}, 1};
                        };
                        class WP {
                            condition = "wpvalid";
                            class shape {
                                type = "line";
                                width = 4;
                                points[] = {
                                    {"WPPoint", {0, -0.0395455}, 1},
                                    {"WPPoint", {0.006944, -0.0389444}, 1},
                                    {"WPPoint", {0.01368, -0.0371609}, 1},
                                    {"WPPoint", {0.02, -0.0342464}, 1},
                                    {"WPPoint", {0.025712, -0.0302918}, 1},
                                    {"WPPoint", {0.03064, -0.0254198}, 1},
                                    {"WPPoint", {0.03464, -0.0197727}, 1},
                                    {"WPPoint", {0.037588, -0.0135245}, 1},
                                    {"WPPoint", {0.039392, -0.00686509}, 1},
                                    {"WPPoint", {0.04, 0}, 1},
                                    {"WPPoint", {0.039392, 0.00686509}, 1},
                                    {"WPPoint", {0.037588, 0.0135245}, 1},
                                    {"WPPoint", {0.03464, 0.0197727}, 1},
                                    {"WPPoint", {0.03064, 0.0254198}, 1},
                                    {"WPPoint", {0.025712, 0.0302918}, 1},
                                    {"WPPoint", {0.02, 0.0342464}, 1},
                                    {"WPPoint", {0.01368, 0.0371609}, 1},
                                    {"WPPoint", {0.006944, 0.0389444}, 1},
                                    {"WPPoint", {0, 0.0395455}, 1},
                                    {"WPPoint", {-0.006944, 0.0389444}, 1},
                                    {"WPPoint", {-0.01368, 0.0371609}, 1},
                                    {"WPPoint", {-0.02, 0.0342464}, 1},
                                    {"WPPoint", {-0.025712, 0.0302918}, 1},
                                    {"WPPoint", {-0.03064, 0.0254198}, 1},
                                    {"WPPoint", {-0.03464, 0.0197727}, 1},
                                    {"WPPoint", {-0.037588, 0.0135245}, 1},
                                    {"WPPoint", {-0.039392, 0.00686509}, 1},
                                    {"WPPoint", {-0.04, 0}, 1},
                                    {"WPPoint", {-0.039392, -0.00686509}, 1},
                                    {"WPPoint", {-0.037588, -0.0135245}, 1},
                                    {"WPPoint", {-0.03464, -0.0197727}, 1},
                                    {"WPPoint", {-0.03064, -0.0254198}, 1},
                                    {"WPPoint", {-0.025712, -0.0302918}, 1},
                                    {"WPPoint", {-0.02, -0.0342464}, 1},
                                    {"WPPoint", {-0.01368, -0.0371609}, 1},
                                    {"WPPoint", {-0.006944, -0.0389444}, 1},
                                    {"WPPoint", {0, -0.0395455}, 1},
                                    {}
                                };
                            };
                        };
                    };
                    class HelmetModeGroup {
                        condition = "user2*(bomb+mgun+atmissile+aamissile+rocket)";
                        class HelmetText {
                            type = "text";
                            source = "static";
                            text = "ШЛМ";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{0.18, 0.75}, 1};
                            right[] = {{0.23, 0.75}, 1};
                            down[] = {{0.18, 0.8}, 1};
                        };
                        class BWBText {
                            type = "text";
                            source = "static";
                            text = "БВБ";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{0.18, 0.79}, 1};
                            right[] = {{0.23, 0.79}, 1};
                            down[] = {{0.18, 0.84}, 1};
                        };
                    };
                    class MGun {
                        condition = "mgun";
                        class AmmoBox {
                            type = "line";
                            width = 3;
                            points[] = {
                                {{0.757, 0.748}, 1},
                                {{0.757, 0.782}, 1},
                                {{0.723, 0.782}, 1},
                                {{0.723, 0.748}, 1},
                                {{0.757, 0.748}, 1},
                                {}
                            };
                        };
                        class Full {
                            condition = "ammo>=113";
                            class AmmoText {
                                type = "text";
                                source = "static";
                                text = "4";
                                scale = 1;
                                sourceScale = 1;
                                align = "center";
                                pos[] = {{0.74, 0.745}, 1};
                                right[] = {{0.785, 0.745}, 1};
                                down[] = {{0.74, 0.79}, 1};
                            };
                        };
                        class AlmostFull {
                            condition = "(ammo>=75)*(ammo<=112)";
                            class AmmoText {
                                type = "text";
                                source = "static";
                                text = "3";
                                scale = 1;
                                sourceScale = 1;
                                align = "center";
                                pos[] = {{0.74, 0.74}, 1};
                                right[] = {{0.785, 0.74}, 1};
                                down[] = {{0.74, 0.785}, 1};
                            };
                        };
                        class Half {
                            condition = "(ammo>=38)*(ammo<=74)";
                            class AmmoText {
                                type = "text";
                                source = "static";
                                text = "2";
                                scale = 1;
                                sourceScale = 1;
                                align = "center";
                                pos[] = {{0.74, 0.74}, 1};
                                right[] = {{0.785, 0.74}, 1};
                                down[] = {{0.74, 0.785}, 1};
                            };
                        };
                        class AlmostEmpty {
                            condition = "(ammo>=1)*(ammo<=37)";
                            class AmmoText {
                                type = "text";
                                source = "static";
                                text = "1";
                                scale = 1;
                                sourceScale = 1;
                                align = "center";
                                pos[] = {{0.74, 0.745}, 1};
                                right[] = {{0.785, 0.745}, 1};
                                down[] = {{0.74, 0.79}, 1};
                            };
                        };
                        class Empty {
                            condition = "ammo<=0";
                            class AmmoText {
                                type = "text";
                                source = "static";
                                text = "0";
                                scale = 1;
                                sourceScale = 1;
                                align = "center";
                                pos[] = {{0.74, 0.745}, 1};
                                right[] = {{0.785, 0.745}, 1};
                                down[] = {{0.74, 0.79}, 1};
                            };
                        };
                        class CrossCondition {
                            condition = "impactDistance*(altitudeAGL>=5)";
                            class Cross {
                                type = "line";
                                width = 3;
                                points[] = {
                                    {"ImpactPointRelative", {0, -0.0247159}, 1},
                                    {"ImpactPointRelative", {0, -0.0148295}, 1},
                                    {},
                                    {"ImpactPointRelative", {0, 0.0247159}, 1},
                                    {"ImpactPointRelative", {0, 0.0148295}, 1},
                                    {},
                                    {"ImpactPointRelative", {-0.025, 0}, 1},
                                    {"ImpactPointRelative", {-0.015, 0}, 1},
                                    {},
                                    {"ImpactPointRelative", {0.025, 0}, 1},
                                    {"ImpactPointRelative", {0.015, 0}, 1},
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
                                width = 4;
                                points[] = {
                                    {"ImpactPointRelative", {0, -0.0253091}, 1},
                                    {"ImpactPointRelative", {0, -0.0316364}, 1},
                                    {"MissileFlightTimeRot1", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot2", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot3", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot4", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot5", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot6", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot7", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot8", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot9", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot10", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot11", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot12", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot13", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot14", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot15", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot16", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot17", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot18", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot19", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot20", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot20", {0, 0.0256}, 1, "ImpactPointRelative", 1}
                                };
                            };
                        };
                    };
                    class BombCrosshairGroup {
                        type = "group";
                        condition = "bomb+rocket*impactDistance";
                        class BombCrosshair {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"ImpactPoint", {0, -0.0395455}, 1},
                                {"ImpactPoint", {0.006944, -0.0389444}, 1},
                                {"ImpactPoint", {0.01368, -0.0371609}, 1},
                                {"ImpactPoint", {0.02, -0.0342464}, 1},
                                {"ImpactPoint", {0.025712, -0.0302918}, 1},
                                {"ImpactPoint", {0.03064, -0.0254198}, 1},
                                {"ImpactPoint", {0.03464, -0.0197727}, 1},
                                {"ImpactPoint", {0.037588, -0.0135245}, 1},
                                {"ImpactPoint", {0.039392, -0.00686509}, 1},
                                {"ImpactPoint", {0.04, 0}, 1},
                                {"ImpactPoint", {0.039392, 0.00686509}, 1},
                                {"ImpactPoint", {0.037588, 0.0135245}, 1},
                                {"ImpactPoint", {0.03464, 0.0197727}, 1},
                                {"ImpactPoint", {0.03064, 0.0254198}, 1},
                                {"ImpactPoint", {0.025712, 0.0302918}, 1},
                                {"ImpactPoint", {0.02, 0.0342464}, 1},
                                {"ImpactPoint", {0.01368, 0.0371609}, 1},
                                {"ImpactPoint", {0.006944, 0.0389444}, 1},
                                {"ImpactPoint", {0, 0.0395455}, 1},
                                {"ImpactPoint", {-0.006944, 0.0389444}, 1},
                                {"ImpactPoint", {-0.01368, 0.0371609}, 1},
                                {"ImpactPoint", {-0.02, 0.0342464}, 1},
                                {"ImpactPoint", {-0.025712, 0.0302918}, 1},
                                {"ImpactPoint", {-0.03064, 0.0254198}, 1},
                                {"ImpactPoint", {-0.03464, 0.0197727}, 1},
                                {"ImpactPoint", {-0.037588, 0.0135245}, 1},
                                {"ImpactPoint", {-0.039392, 0.00686509}, 1},
                                {"ImpactPoint", {-0.04, 0}, 1},
                                {"ImpactPoint", {-0.039392, -0.00686509}, 1},
                                {"ImpactPoint", {-0.037588, -0.0135245}, 1},
                                {"ImpactPoint", {-0.03464, -0.0197727}, 1},
                                {"ImpactPoint", {-0.03064, -0.0254198}, 1},
                                {"ImpactPoint", {-0.025712, -0.0302918}, 1},
                                {"ImpactPoint", {-0.02, -0.0342464}, 1},
                                {"ImpactPoint", {-0.01368, -0.0371609}, 1},
                                {"ImpactPoint", {-0.006944, -0.0389444}, 1},
                                {"ImpactPoint", {0, -0.0395455}, 1},
                                {},
                                {},
                                {"ImpactPoint", {0, 0.005}, 1},
                                {"ImpactPoint", {0.005, -0}, 1},
                                {"ImpactPoint", {0, -0.005}, 1},
                                {"ImpactPoint", {-0.005, -0}, 1},
                                {"ImpactPoint", {0, 0.005}, 1}
                            };
                        };
                    };
                    class AAMissilesGroup {
                        type = "group";
                        condition = "aamissile";
                        class PPSGroup {
                            condition = "1";
                            class GText {
                                type = "text";
                                source = "static";
                                text = "ППС";
                                align = "left";
                                scale = 1;
                                pos[] = {{0.18, 0.39}, 1};
                                right[] = {{0.23, 0.39}, 1};
                                down[] = {{0.18, 0.44}, 1};
                            };
                        };
                        class ZPSGroup: PPSGroup {
                            condition = "0";
                            class GText: GText {
                                text = "ЗПС";
                            };
                        };
                    };
                    class TargetDiamond {
                        class shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Target", 1, "Limit0109", 1, {0, -0.015}, 1},
                                {"Target", 1, "Limit0109", 1, {-0.0075, 0}, 1},
                                {"Target", 1, "Limit0109", 1, {0, 0.0125}, 1},
                                {"Target", 1, "Limit0109", 1, {0.0075, 0}, 1},
                                {"Target", 1, "Limit0109", 1, {0, -0.0125}, 1}
                            };
                        };
                    };
                    class TargetLocked {
                        condition = "TargetHeight>=1";
                        class TargetSquare {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Target", 1, "Limit0109", 1, {0, -0.0494318}, 1},
                                {"Target", 1, "Limit0109", 1, {0.05, 0}, 1},
                                {"Target", 1, "Limit0109", 1, {0, 0.0494318}, 1},
                                {"Target", 1, "Limit0109", 1, {-0.05, 0}, 1},
                                {"Target", 1, "Limit0109", 1, {0, -0.0494318}, 1}
                            };
                        };
                        class TargetSpeed0 {
                            type = "text";
                            source = "static";
                            text = 0;
                            align = "left";
                            scale = 1;
                            pos[] = {{0.31, "0.09+0.15"}, 1};
                            right[] = {{0.35, "0.09+0.15"}, 1};
                            down[] = {{0.31, 0.285}, 1};
                        };
                        class TargetSpeed: SpeedNumber0 {
                            source = "LarTargetSpeed";
                            sourceScale = 0.36;
                            pos[] = {{0.29, "0.09+0.15"}, 1};
                            right[] = {{0.33, "0.09+0.15"}, 1};
                            down[] = {{0.29, 0.285}, 1};
                        };
                        class TargetHeight0 {
                            type = "text";
                            source = "static";
                            text = 0;
                            align = "left";
                            scale = 1;
                            pos[] = {{0.82, "0.09+0.15"}, 1};
                            right[] = {{0.86, "0.09+0.15"}, 1};
                            down[] = {{0.82, 0.285}, 1};
                        };
                        class TargetHeight: AltitudeNumber0 {
                            source = "TargetHeight";
                            sourceScale = 0.1;
                            sourceLength = 1;
                            pos[] = {{0.8, "0.09+0.15"}, 1};
                            right[] = {{0.84, "0.09+0.15"}, 1};
                            down[] = {{0.8, 0.285}, 1};
                        };
                    };
                    class LAR {
                        type = "group";
                        condition = "bomb+mgun+atmissile+aamissile+rocket";
                        class Lines {
                            type = "line";
                            width = 3;
                            points[] = {
                                {{0.24, 0.375}, 1},
                                {{0.26, 0.375}, 1},
                                {{0.26, 0.695}, 1},
                                {{0.24, 0.695}, 1},
                                {},
                                {{0.24, 0.631}, 1},
                                {{0.26, 0.631}, 1},
                                {},
                                {{0.24, 0.567}, 1},
                                {{0.26, 0.567}, 1},
                                {},
                                {{0.24, 0.503}, 1},
                                {{0.26, 0.503}, 1},
                                {},
                                {{0.24, 0.439}, 1},
                                {{0.26, 0.439}, 1},
                                {},
                                {"LarTargetDist", -0.32, {0.272, 0.707}, 1},
                                {"LarTargetDist", -0.32, {0.26, 0.695}, 1},
                                {"LarTargetDist", -0.32, {0.272, 0.683}, 1},
                                {"LarTargetDist", -0.32, {0.272, 0.692}, 1},
                                {"LarTargetDist", -0.32, {0.282, 0.692}, 1},
                                {"LarTargetDist", -0.32, {0.282, 0.698}, 1},
                                {"LarTargetDist", -0.32, {0.272, 0.698}, 1},
                                {"LarTargetDist", -0.32, {0.272, 0.707}, 1}
                            };
                        };
                        class RadarSearch {
                            condition = "activeSensorsOn - missilelocked - missilelocking";
                            class Shape {
                                type = "line";
                                width = 3;
                                points[] = {
                                    {{0.725, 0.375}, 1},
                                    {{0.74, 0.375}, 1},
                                    {{0.74, 0.695}, 1},
                                    {{0.725, 0.695}, 1},
                                    {},
                                    {{0.74, 0.535}, 1},
                                    {{0.725, 0.535}, 1},
                                    {},
                                    {{0.76, 0.519}, 1},
                                    {{0.76, 0.551}, 1},
                                    {},
                                    {{0.755, 0.5222}, 1},
                                    {{0.74, 0.5222}, 1},
                                    {},
                                    {{0.74, 0.5478}, 1},
                                    {{0.755, 0.5478}, 1},
                                    {},
                                    {{0.47, 0.715}, 1},
                                    {{0.53, 0.715}, 1}
                                };
                            };
                            class RadarTopText {
                                type = "text";
                                source = "static";
                                text = "60";
                                scale = 1;
                                sourceScale = 1;
                                align = "center";
                                pos[] = {{"0.96-0.26", 0.35625}, 1};
                                right[] = {{0.735, 0.35625}, 1};
                                down[] = {{"0.96-0.26", 0.39125}, 1};
                            };
                            class RadarElevText {
                                type = "text";
                                source = "static";
                                text = "0";
                                scale = 1;
                                sourceScale = 1;
                                align = "center";
                                pos[] = {{"1.035-0.26", 0.519}, 1};
                                right[] = {{0.81, 0.519}, 1};
                                down[] = {{"1.035-0.26", 0.554}, 1};
                            };
                        };
                        class Poly {
                            type = "polygon";
                            points[] = {{{"LarAmmoMin", -0.32, {0.261, 0.695}, 1}, {"LarAmmoMin", -0.32, {0.261, 0.7}, 1}, {"LarAmmoMin", -0.32, {0.272, 0.7}, 1}, {"LarAmmoMin", -0.32, {0.272, 0.695}, 1}}, {{"LarAmmoMin", -0.32, {0.261, 0.62}, 1}, {"LarAmmoMin", -0.32, {0.261, 0.63}, 1}, {"LarAmmoMin", -0.32, {0.272, 0.63}, 1}, {"LarAmmoMin", -0.32, {0.272, 0.62}, 1}}, {{"LarAmmoMax", -0.32, {0.261, 0.785}, 1}, {"LarAmmoMax", -0.32, {0.261, 0.79}, 1}, {"LarAmmoMax", -0.32, {0.272, 0.79}, 1}, {"LarAmmoMax", -0.32, {0.272, 0.785}, 1}}};
                        };
                        class LARText1 {
                            type = "text";
                            source = "LarTop";
                            sourceScale = "0.001*1.5";
                            scale = 1;
                            pos[] = {{0.235, 0.361}, 1};
                            right[] = {{0.27, 0.361}, 1};
                            down[] = {{0.235, 0.389}, 1};
                            align = "left";
                        };
                        class LARText2: LARText1 {
                            source = "LarTop";
                            sourcePrecision = -1;
                            sourceScale = "0.0008*1.5";
                            pos[] = {{0.235, 0.425}, 1};
                            right[] = {{0.27, 0.425}, 1};
                            down[] = {{0.235, 0.453}, 1};
                        };
                        class LARText3: LARText1 {
                            source = "LarTop";
                            sourcePrecision = -1;
                            sourceScale = "0.0006*1.5";
                            pos[] = {{0.235, 0.489}, 1};
                            right[] = {{0.27, 0.489}, 1};
                            down[] = {{0.235, 0.517}, 1};
                        };
                        class LARText4: LARText1 {
                            source = "LarTop";
                            sourcePrecision = -1;
                            sourceScale = "0.0004*1.5";
                            pos[] = {{0.235, 0.553}, 1};
                            right[] = {{0.27, 0.553}, 1};
                            down[] = {{0.235, 0.581}, 1};
                        };
                        class LARText5: LARText1 {
                            source = "LarTop";
                            sourcePrecision = -1;
                            sourceScale = "0.0002*1.5";
                            pos[] = {{0.235, 0.617}, 1};
                            right[] = {{0.27, 0.617}, 1};
                            down[] = {{0.235, 0.645}, 1};
                        };
                        class LARText6: LARText1 {
                            source = "static";
                            text = 0;
                            sourcePrecision = -1;
                            sourceScale = "0.0002*1.5";
                            pos[] = {{0.235, 0.681}, 1};
                            right[] = {{0.27, 0.681}, 1};
                            down[] = {{0.235, 0.709}, 1};
                        };
                    };
                    class RadarBoxes {
                        type = "radar";
                        pos0[] = {0.5, 0.53};
                        pos10[] = {1.38, 1.4};
                        width = 4;
                        points[] = {
                            {{0, -0.0395455}, 1},
                            {{0.006944, -0.0389444}, 1},
                            {{0.01368, -0.0371609}, 1},
                            {{0.02, -0.0342464}, 1},
                            {{0.025712, -0.0302918}, 1},
                            {{0.03064, -0.0254198}, 1},
                            {{0.03464, -0.0197727}, 1},
                            {{0.037588, -0.0135245}, 1},
                            {{0.039392, -0.00686509}, 1},
                            {{0.04, 0}, 1},
                            {{0.039392, 0.00686509}, 1},
                            {{0.037588, 0.0135245}, 1},
                            {{0.03464, 0.0197727}, 1},
                            {{0.03064, 0.0254198}, 1},
                            {{0.025712, 0.0302918}, 1},
                            {{0.02, 0.0342464}, 1},
                            {{0.01368, 0.0371609}, 1},
                            {{0.006944, 0.0389444}, 1},
                            {{0, 0.0395455}, 1},
                            {{-0.006944, 0.0389444}, 1},
                            {{-0.01368, 0.0371609}, 1},
                            {{-0.02, 0.0342464}, 1},
                            {{-0.025712, 0.0302918}, 1},
                            {{-0.03064, 0.0254198}, 1},
                            {{-0.03464, 0.0197727}, 1},
                            {{-0.037588, 0.0135245}, 1},
                            {{-0.039392, 0.00686509}, 1},
                            {{-0.04, 0}, 1},
                            {{-0.039392, -0.00686509}, 1},
                            {{-0.037588, -0.0135245}, 1},
                            {{-0.03464, -0.0197727}, 1},
                            {{-0.03064, -0.0254198}, 1},
                            {{-0.025712, -0.0302918}, 1},
                            {{-0.02, -0.0342464}, 1},
                            {{-0.01368, -0.0371609}, 1},
                            {{-0.006944, -0.0389444}, 1},
                            {{0, -0.0395455}, 1},
                            {}
                        };
                    };
                };
            };
            class MFD_GPS {
                topLeft = "MFD_GPS_TL";
                topRight = "MFD_GPS_TR";
                bottomLeft = "MFD_GPS_BL";
                enableParallax = 0;
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0, 1, 0, 0.1};
                class material {
                    ambient[] = {3, 3, 3, 1};
                    diffuse[] = {10, 10, 10, 1};
                    emissive[] = {400, 200, 200, 1};
                };
                class Bones {
                    class MovementY {
                        type = "linear";
                        source = "user";
                        sourceIndex = 5;
                        refreshRate = 0.1;
                        min = 0;
                        max = 1;
                        sourceScale = 1;
                        maxPos[] = {0, 1};
                        minPos[] = {0, 0};
                    };
                    class MovementX: MovementY {
                        sourceIndex = 4;
                        maxPos[] = {0.24, 0};
                        minPos[] = {1, 0};
                    };
                    class PlaneDirection {
                        type = "rotational";
                        source = "heading";
                        sourceScale = 1;
                        center[] = {0, 0};
                        min = 0;
                        max = 360;
                        minAngle = 0;
                        maxAngle = 360;
                        aspectRatio = 1.27941;
                    };
                    class WP1_PosX: MovementX {
                        sourceIndex = 6;
                    };
                    class WP1_PosY: MovementY {
                        sourceIndex = 7;
                    };
                    class WP2_PosX: MovementX {
                        sourceIndex = 8;
                    };
                    class WP2_PosY: MovementY {
                        sourceIndex = 9;
                    };
                    class WP3_PosX: MovementX {
                        sourceIndex = 10;
                    };
                    class WP3_PosY: MovementY {
                        sourceIndex = 11;
                    };
                    class WP4_PosX: MovementX {
                        sourceIndex = 12;
                    };
                    class WP4_PosY: MovementY {
                        sourceIndex = 13;
                    };
                    class WP5_PosX: MovementX {
                        sourceIndex = 14;
                    };
                    class WP5_PosY: MovementY {
                        sourceIndex = 15;
                    };
                    class WP6_PosX: MovementX {
                        sourceIndex = 16;
                    };
                    class WP6_PosY: MovementY {
                        sourceIndex = 17;
                    };
                    class WP7_PosX: MovementX {
                        sourceIndex = 18;
                    };
                    class WP7_PosY: MovementY {
                        sourceIndex = 19;
                    };
                    class WP8_PosX: MovementX {
                        sourceIndex = 20;
                    };
                    class WP8_PosY: MovementY {
                        sourceIndex = 21;
                    };
                    class WP9_PosX: MovementX {
                        sourceIndex = 22;
                    };
                    class WP9_PosY: MovementY {
                        sourceIndex = 23;
                    };
                    class WP10_PosX: MovementX {
                        sourceIndex = 24;
                    };
                    class WP10_PosY: MovementY {
                        sourceIndex = 25;
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    condition = "on";
                    class CurrentTimeText {
                        type = "text";
                        source = "static";
                        text = "Current time:";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.01, 0.02}, 1};
                        right[] = {{0.06, 0.02}, 1};
                        down[] = {{0.01, 0.07}, 1};
                    };
                    class CurrentTimeSource: CurrentTimeText {
                        source = "time";
                        text = "%X";
                        pos[] = {{0.01, 0.08}, 1};
                        right[] = {{0.06, 0.08}, 1};
                        down[] = {{0.01, 0.13}, 1};
                    };
                    class CurrentDateText {
                        type = "text";
                        source = "static";
                        text = "Date:";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.01, 0.15}, 1};
                        right[] = {{0.06, 0.15}, 1};
                        down[] = {{0.01, 0.2}, 1};
                    };
                    class CurrentDateSource: CurrentDateText {
                        source = "time";
                        text = "%x";
                        pos[] = {{0.01, 0.22}, 1};
                        right[] = {{0.06, 0.22}, 1};
                        down[] = {{0.01, 0.27}, 1};
                    };
                    class SpeedText {
                        type = "text";
                        source = "static";
                        text = "Speed:";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.01, 0.3}, 1};
                        right[] = {{0.06, 0.3}, 1};
                        down[] = {{0.01, 0.35}, 1};
                    };
                    class SpeedSource: CurrentDateText {
                        source = "speed";
                        sourceScale = 3.6;
                        refreshRate = 0.9;
                        pos[] = {{0.01, 0.37}, 1};
                        right[] = {{0.06, 0.37}, 1};
                        down[] = {{0.01, 0.42}, 1};
                    };
                    class SpeedText2 {
                        type = "text";
                        source = "static";
                        text = "KM/H";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.09, 0.37}, 1};
                        right[] = {{0.14, 0.37}, 1};
                        down[] = {{0.09, 0.42}, 1};
                    };
                    class WP_Data {
                        condition = "wpvalid";
                        class WPdistText {
                            type = "text";
                            source = "static";
                            text = "Dist to WP:";
                            scale = 1;
                            sourceScale = 1;
                            align = "right";
                            pos[] = {{0.01, 0.6}, 1};
                            right[] = {{0.06, 0.6}, 1};
                            down[] = {{0.01, 0.65}, 1};
                        };
                        class WPdist {
                            type = "text";
                            source = "WPDist";
                            sourceScale = 0.001;
                            sourcePrecision = 1;
                            align = "right";
                            scale = 1;
                            pos[] = {{0.01, "0.47+0.2"}, 1};
                            right[] = {{0.06, "0.47+0.2"}, 1};
                            down[] = {{0.01, 0.72}, 1};
                        };
                        class WPIndexText {
                            type = "text";
                            source = "static";
                            text = "Current WP:";
                            scale = 1;
                            sourceScale = 1;
                            align = "right";
                            pos[] = {{0.01, 0.75}, 1};
                            right[] = {{0.06, 0.75}, 1};
                            down[] = {{0.01, 0.8}, 1};
                        };
                        class WPIndex {
                            type = "text";
                            source = "WPIndex";
                            sourceScale = 1;
                            align = "right";
                            scale = 1;
                            pos[] = {{0.01, "0.62+0.2"}, 1};
                            right[] = {{0.06, "0.62+0.2"}, 1};
                            down[] = {{0.01, 0.87}, 1};
                        };
                        class WP1 {
                            condition = "user6>=0";
                            class CurrentWaypoint {
                                color[] = {0.9, 0, 0};
                                condition = "1-WPIndex";
                                class WaypointShape {
                                    width = 22;
                                    type = "line";
                                    points[] = {
                                        {"WP2_PosX", 1, "WP2_PosY", {0, -0.0255882}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.003472, -0.0251993}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.00684, -0.0240453}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.01, -0.0221594}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.012856, -0.0196006}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.01532, -0.0164481}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.01732, -0.0127941}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.018794, -0.00875118}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.019696, -0.00444212}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.02, 0}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.019696, 0.00444212}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.018794, 0.00875118}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.01732, 0.0127941}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.01532, 0.0164481}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.012856, 0.0196006}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.01, 0.0221594}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.00684, 0.0240453}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.003472, 0.0251993}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0, 0.0255882}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.003472, 0.0251993}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.00684, 0.0240453}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.01, 0.0221594}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.012856, 0.0196006}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.01532, 0.0164481}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.01732, 0.0127941}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.018794, 0.00875118}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.019696, 0.00444212}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.02, 0}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.019696, -0.00444212}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.018794, -0.00875118}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.01732, -0.0127941}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.01532, -0.0164481}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.012856, -0.0196006}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.01, -0.0221594}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.00684, -0.0240453}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.003472, -0.0251993}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0, -0.0255882}, 1},
                                        {}
                                    };
                                };
                            };
                            class WaypointShape {
                                width = 6;
                                type = "line";
                                points[] = {
                                    {"WP1_PosX", 1, "WP1_PosY", {0, -0.0255882}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {0.003472, -0.0251993}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {0.00684, -0.0240453}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {0.01, -0.0221594}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {0.012856, -0.0196006}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {0.01532, -0.0164481}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {0.01732, -0.0127941}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {0.018794, -0.00875118}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {0.019696, -0.00444212}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {0.02, 0}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {0.019696, 0.00444212}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {0.018794, 0.00875118}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {0.01732, 0.0127941}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {0.01532, 0.0164481}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {0.012856, 0.0196006}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {0.01, 0.0221594}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {0.00684, 0.0240453}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {0.003472, 0.0251993}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {0, 0.0255882}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {-0.003472, 0.0251993}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {-0.00684, 0.0240453}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {-0.01, 0.0221594}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {-0.012856, 0.0196006}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {-0.01532, 0.0164481}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {-0.01732, 0.0127941}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {-0.018794, 0.00875118}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {-0.019696, 0.00444212}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {-0.02, 0}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {-0.019696, -0.00444212}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {-0.018794, -0.00875118}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {-0.01732, -0.0127941}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {-0.01532, -0.0164481}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {-0.012856, -0.0196006}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {-0.01, -0.0221594}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {-0.00684, -0.0240453}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {-0.003472, -0.0251993}, 1},
                                    {"WP1_PosX", 1, "WP1_PosY", {0, -0.0255882}, 1},
                                    {}
                                };
                            };
                        };
                        class WP2 {
                            condition = "user8>=0";
                            class CurrentWaypoint {
                                color[] = {0.9, 0, 0};
                                condition = "(WPIndex>=1)*(WPIndex<=1)";
                                class WaypointShape {
                                    width = 22;
                                    type = "line";
                                    points[] = {
                                        {"WP2_PosX", 1, "WP2_PosY", {0, -0.0255882}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.003472, -0.0251993}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.00684, -0.0240453}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.01, -0.0221594}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.012856, -0.0196006}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.01532, -0.0164481}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.01732, -0.0127941}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.018794, -0.00875118}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.019696, -0.00444212}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.02, 0}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.019696, 0.00444212}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.018794, 0.00875118}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.01732, 0.0127941}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.01532, 0.0164481}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.012856, 0.0196006}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.01, 0.0221594}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.00684, 0.0240453}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0.003472, 0.0251993}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0, 0.0255882}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.003472, 0.0251993}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.00684, 0.0240453}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.01, 0.0221594}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.012856, 0.0196006}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.01532, 0.0164481}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.01732, 0.0127941}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.018794, 0.00875118}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.019696, 0.00444212}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.02, 0}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.019696, -0.00444212}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.018794, -0.00875118}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.01732, -0.0127941}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.01532, -0.0164481}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.012856, -0.0196006}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.01, -0.0221594}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.00684, -0.0240453}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {-0.003472, -0.0251993}, 1},
                                        {"WP2_PosX", 1, "WP2_PosY", {0, -0.0255882}, 1},
                                        {}
                                    };
                                };
                            };
                            class WaypointShape {
                                width = 6;
                                type = "line";
                                points[] = {
                                    {"WP2_PosX", 1, "WP2_PosY", {0, -0.0255882}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {0.003472, -0.0251993}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {0.00684, -0.0240453}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {0.01, -0.0221594}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {0.012856, -0.0196006}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {0.01532, -0.0164481}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {0.01732, -0.0127941}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {0.018794, -0.00875118}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {0.019696, -0.00444212}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {0.02, 0}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {0.019696, 0.00444212}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {0.018794, 0.00875118}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {0.01732, 0.0127941}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {0.01532, 0.0164481}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {0.012856, 0.0196006}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {0.01, 0.0221594}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {0.00684, 0.0240453}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {0.003472, 0.0251993}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {0, 0.0255882}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {-0.003472, 0.0251993}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {-0.00684, 0.0240453}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {-0.01, 0.0221594}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {-0.012856, 0.0196006}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {-0.01532, 0.0164481}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {-0.01732, 0.0127941}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {-0.018794, 0.00875118}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {-0.019696, 0.00444212}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {-0.02, 0}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {-0.019696, -0.00444212}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {-0.018794, -0.00875118}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {-0.01732, -0.0127941}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {-0.01532, -0.0164481}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {-0.012856, -0.0196006}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {-0.01, -0.0221594}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {-0.00684, -0.0240453}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {-0.003472, -0.0251993}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", {0, -0.0255882}, 1},
                                    {},
                                    {"WP1_PosX", 1, "WP1_PosY", 1, {0, 0}, 1},
                                    {"WP2_PosX", 1, "WP2_PosY", 1, {0, 0}, 1}
                                };
                            };
                        };
                        class WP3 {
                            condition = "user10>=0";
                            class CurrentWaypoint {
                                color[] = {0.9, 0, 0};
                                condition = "(WPIndex>=2)*(WPIndex<=2)";
                                class WaypointShape {
                                    width = 22;
                                    type = "line";
                                    points[] = {
                                        {"WP3_PosX", 1, "WP3_PosY", {0, -0.0255882}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {0.003472, -0.0251993}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {0.00684, -0.0240453}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {0.01, -0.0221594}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {0.012856, -0.0196006}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {0.01532, -0.0164481}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {0.01732, -0.0127941}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {0.018794, -0.00875118}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {0.019696, -0.00444212}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {0.02, 0}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {0.019696, 0.00444212}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {0.018794, 0.00875118}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {0.01732, 0.0127941}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {0.01532, 0.0164481}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {0.012856, 0.0196006}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {0.01, 0.0221594}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {0.00684, 0.0240453}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {0.003472, 0.0251993}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {0, 0.0255882}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {-0.003472, 0.0251993}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {-0.00684, 0.0240453}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {-0.01, 0.0221594}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {-0.012856, 0.0196006}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {-0.01532, 0.0164481}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {-0.01732, 0.0127941}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {-0.018794, 0.00875118}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {-0.019696, 0.00444212}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {-0.02, 0}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {-0.019696, -0.00444212}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {-0.018794, -0.00875118}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {-0.01732, -0.0127941}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {-0.01532, -0.0164481}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {-0.012856, -0.0196006}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {-0.01, -0.0221594}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {-0.00684, -0.0240453}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {-0.003472, -0.0251993}, 1},
                                        {"WP3_PosX", 1, "WP3_PosY", {0, -0.0255882}, 1},
                                        {}
                                    };
                                };
                            };
                            class WaypointShape {
                                width = 6;
                                type = "line";
                                points[] = {
                                    {"WP3_PosX", 1, "WP3_PosY", {0, -0.0255882}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {0.003472, -0.0251993}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {0.00684, -0.0240453}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {0.01, -0.0221594}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {0.012856, -0.0196006}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {0.01532, -0.0164481}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {0.01732, -0.0127941}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {0.018794, -0.00875118}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {0.019696, -0.00444212}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {0.02, 0}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {0.019696, 0.00444212}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {0.018794, 0.00875118}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {0.01732, 0.0127941}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {0.01532, 0.0164481}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {0.012856, 0.0196006}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {0.01, 0.0221594}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {0.00684, 0.0240453}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {0.003472, 0.0251993}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {0, 0.0255882}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {-0.003472, 0.0251993}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {-0.00684, 0.0240453}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {-0.01, 0.0221594}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {-0.012856, 0.0196006}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {-0.01532, 0.0164481}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {-0.01732, 0.0127941}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {-0.018794, 0.00875118}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {-0.019696, 0.00444212}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {-0.02, 0}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {-0.019696, -0.00444212}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {-0.018794, -0.00875118}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {-0.01732, -0.0127941}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {-0.01532, -0.0164481}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {-0.012856, -0.0196006}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {-0.01, -0.0221594}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {-0.00684, -0.0240453}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {-0.003472, -0.0251993}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", {0, -0.0255882}, 1},
                                    {},
                                    {"WP2_PosX", 1, "WP2_PosY", 1, {0, 0}, 1},
                                    {"WP3_PosX", 1, "WP3_PosY", 1, {0, 0}, 1}
                                };
                            };
                        };
                        class WP4 {
                            condition = "user12>=0";
                            class CurrentWaypoint {
                                color[] = {0.9, 0, 0};
                                condition = "(WPIndex>=3)*(WPIndex<=3)";
                                class WaypointShape {
                                    width = 22;
                                    type = "line";
                                    points[] = {
                                        {"WP4_PosX", 1, "WP4_PosY", {0, -0.0255882}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {0.003472, -0.0251993}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {0.00684, -0.0240453}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {0.01, -0.0221594}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {0.012856, -0.0196006}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {0.01532, -0.0164481}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {0.01732, -0.0127941}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {0.018794, -0.00875118}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {0.019696, -0.00444212}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {0.02, 0}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {0.019696, 0.00444212}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {0.018794, 0.00875118}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {0.01732, 0.0127941}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {0.01532, 0.0164481}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {0.012856, 0.0196006}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {0.01, 0.0221594}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {0.00684, 0.0240453}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {0.003472, 0.0251993}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {0, 0.0255882}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {-0.003472, 0.0251993}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {-0.00684, 0.0240453}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {-0.01, 0.0221594}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {-0.012856, 0.0196006}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {-0.01532, 0.0164481}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {-0.01732, 0.0127941}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {-0.018794, 0.00875118}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {-0.019696, 0.00444212}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {-0.02, 0}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {-0.019696, -0.00444212}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {-0.018794, -0.00875118}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {-0.01732, -0.0127941}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {-0.01532, -0.0164481}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {-0.012856, -0.0196006}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {-0.01, -0.0221594}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {-0.00684, -0.0240453}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {-0.003472, -0.0251993}, 1},
                                        {"WP4_PosX", 1, "WP4_PosY", {0, -0.0255882}, 1},
                                        {}
                                    };
                                };
                            };
                            class WaypointShape {
                                width = 6;
                                type = "line";
                                points[] = {
                                    {"WP4_PosX", 1, "WP4_PosY", {0, -0.0255882}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {0.003472, -0.0251993}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {0.00684, -0.0240453}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {0.01, -0.0221594}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {0.012856, -0.0196006}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {0.01532, -0.0164481}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {0.01732, -0.0127941}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {0.018794, -0.00875118}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {0.019696, -0.00444212}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {0.02, 0}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {0.019696, 0.00444212}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {0.018794, 0.00875118}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {0.01732, 0.0127941}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {0.01532, 0.0164481}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {0.012856, 0.0196006}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {0.01, 0.0221594}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {0.00684, 0.0240453}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {0.003472, 0.0251993}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {0, 0.0255882}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {-0.003472, 0.0251993}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {-0.00684, 0.0240453}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {-0.01, 0.0221594}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {-0.012856, 0.0196006}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {-0.01532, 0.0164481}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {-0.01732, 0.0127941}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {-0.018794, 0.00875118}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {-0.019696, 0.00444212}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {-0.02, 0}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {-0.019696, -0.00444212}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {-0.018794, -0.00875118}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {-0.01732, -0.0127941}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {-0.01532, -0.0164481}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {-0.012856, -0.0196006}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {-0.01, -0.0221594}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {-0.00684, -0.0240453}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {-0.003472, -0.0251993}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", {0, -0.0255882}, 1},
                                    {},
                                    {"WP3_PosX", 1, "WP3_PosY", 1, {0, 0}, 1},
                                    {"WP4_PosX", 1, "WP4_PosY", 1, {0, 0}, 1}
                                };
                            };
                        };
                        class WP5 {
                            condition = "user14>=0";
                            class CurrentWaypoint {
                                color[] = {0.9, 0, 0};
                                condition = "(WPIndex>=4)*(WPIndex<=4)";
                                class WaypointShape {
                                    width = 22;
                                    type = "line";
                                    points[] = {
                                        {"WP5_PosX", 1, "WP5_PosY", {0, -0.0255882}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.003472, -0.0251993}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.00684, -0.0240453}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.01, -0.0221594}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.012856, -0.0196006}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.01532, -0.0164481}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.01732, -0.0127941}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.018794, -0.00875118}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.019696, -0.00444212}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.02, 0}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.019696, 0.00444212}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.018794, 0.00875118}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.01732, 0.0127941}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.01532, 0.0164481}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.012856, 0.0196006}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.01, 0.0221594}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.00684, 0.0240453}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.003472, 0.0251993}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0, 0.0255882}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.003472, 0.0251993}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.00684, 0.0240453}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.01, 0.0221594}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.012856, 0.0196006}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.01532, 0.0164481}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.01732, 0.0127941}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.018794, 0.00875118}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.019696, 0.00444212}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.02, 0}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.019696, -0.00444212}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.018794, -0.00875118}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.01732, -0.0127941}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.01532, -0.0164481}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.012856, -0.0196006}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.01, -0.0221594}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.00684, -0.0240453}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.003472, -0.0251993}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0, -0.0255882}, 1},
                                        {}
                                    };
                                };
                            };
                            class WaypointShape {
                                width = 6;
                                type = "line";
                                points[] = {
                                    {"WP5_PosX", 1, "WP5_PosY", {0, -0.0255882}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {0.003472, -0.0251993}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {0.00684, -0.0240453}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {0.01, -0.0221594}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {0.012856, -0.0196006}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {0.01532, -0.0164481}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {0.01732, -0.0127941}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {0.018794, -0.00875118}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {0.019696, -0.00444212}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {0.02, 0}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {0.019696, 0.00444212}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {0.018794, 0.00875118}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {0.01732, 0.0127941}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {0.01532, 0.0164481}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {0.012856, 0.0196006}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {0.01, 0.0221594}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {0.00684, 0.0240453}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {0.003472, 0.0251993}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {0, 0.0255882}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {-0.003472, 0.0251993}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {-0.00684, 0.0240453}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {-0.01, 0.0221594}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {-0.012856, 0.0196006}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {-0.01532, 0.0164481}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {-0.01732, 0.0127941}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {-0.018794, 0.00875118}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {-0.019696, 0.00444212}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {-0.02, 0}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {-0.019696, -0.00444212}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {-0.018794, -0.00875118}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {-0.01732, -0.0127941}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {-0.01532, -0.0164481}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {-0.012856, -0.0196006}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {-0.01, -0.0221594}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {-0.00684, -0.0240453}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {-0.003472, -0.0251993}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", {0, -0.0255882}, 1},
                                    {},
                                    {"WP4_PosX", 1, "WP4_PosY", 1, {0, 0}, 1},
                                    {"WP5_PosX", 1, "WP5_PosY", 1, {0, 0}, 1}
                                };
                            };
                        };
                        class WP6 {
                            condition = "user16>=0";
                            class CurrentWaypoint {
                                color[] = {0.9, 0, 0};
                                condition = "(WPIndex>=5)*(WPIndex<=5)";
                                class WaypointShape {
                                    width = 22;
                                    type = "line";
                                    points[] = {
                                        {"WP5_PosX", 1, "WP5_PosY", {0, -0.0255882}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.003472, -0.0251993}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.00684, -0.0240453}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.01, -0.0221594}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.012856, -0.0196006}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.01532, -0.0164481}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.01732, -0.0127941}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.018794, -0.00875118}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.019696, -0.00444212}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.02, 0}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.019696, 0.00444212}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.018794, 0.00875118}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.01732, 0.0127941}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.01532, 0.0164481}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.012856, 0.0196006}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.01, 0.0221594}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.00684, 0.0240453}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0.003472, 0.0251993}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0, 0.0255882}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.003472, 0.0251993}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.00684, 0.0240453}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.01, 0.0221594}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.012856, 0.0196006}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.01532, 0.0164481}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.01732, 0.0127941}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.018794, 0.00875118}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.019696, 0.00444212}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.02, 0}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.019696, -0.00444212}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.018794, -0.00875118}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.01732, -0.0127941}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.01532, -0.0164481}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.012856, -0.0196006}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.01, -0.0221594}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.00684, -0.0240453}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {-0.003472, -0.0251993}, 1},
                                        {"WP5_PosX", 1, "WP5_PosY", {0, -0.0255882}, 1},
                                        {}
                                    };
                                };
                            };
                            class WaypointShape {
                                width = 6;
                                type = "line";
                                points[] = {
                                    {"WP6_PosX", 1, "WP6_PosY", {0, -0.0255882}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {0.003472, -0.0251993}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {0.00684, -0.0240453}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {0.01, -0.0221594}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {0.012856, -0.0196006}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {0.01532, -0.0164481}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {0.01732, -0.0127941}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {0.018794, -0.00875118}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {0.019696, -0.00444212}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {0.02, 0}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {0.019696, 0.00444212}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {0.018794, 0.00875118}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {0.01732, 0.0127941}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {0.01532, 0.0164481}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {0.012856, 0.0196006}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {0.01, 0.0221594}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {0.00684, 0.0240453}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {0.003472, 0.0251993}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {0, 0.0255882}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {-0.003472, 0.0251993}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {-0.00684, 0.0240453}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {-0.01, 0.0221594}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {-0.012856, 0.0196006}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {-0.01532, 0.0164481}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {-0.01732, 0.0127941}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {-0.018794, 0.00875118}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {-0.019696, 0.00444212}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {-0.02, 0}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {-0.019696, -0.00444212}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {-0.018794, -0.00875118}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {-0.01732, -0.0127941}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {-0.01532, -0.0164481}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {-0.012856, -0.0196006}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {-0.01, -0.0221594}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {-0.00684, -0.0240453}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {-0.003472, -0.0251993}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", {0, -0.0255882}, 1},
                                    {},
                                    {"WP5_PosX", 1, "WP5_PosY", 1, {0, 0}, 1},
                                    {"WP6_PosX", 1, "WP6_PosY", 1, {0, 0}, 1}
                                };
                            };
                        };
                        class WP7 {
                            condition = "user18>=0";
                            class CurrentWaypoint {
                                color[] = {0.9, 0, 0};
                                condition = "(WPIndex>=6)*(WPIndex<=6)";
                                class WaypointShape {
                                    width = 22;
                                    type = "line";
                                    points[] = {
                                        {"WP7_PosX", 1, "WP7_PosY", {0, -0.0255882}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {0.003472, -0.0251993}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {0.00684, -0.0240453}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {0.01, -0.0221594}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {0.012856, -0.0196006}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {0.01532, -0.0164481}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {0.01732, -0.0127941}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {0.018794, -0.00875118}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {0.019696, -0.00444212}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {0.02, 0}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {0.019696, 0.00444212}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {0.018794, 0.00875118}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {0.01732, 0.0127941}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {0.01532, 0.0164481}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {0.012856, 0.0196006}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {0.01, 0.0221594}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {0.00684, 0.0240453}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {0.003472, 0.0251993}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {0, 0.0255882}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {-0.003472, 0.0251993}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {-0.00684, 0.0240453}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {-0.01, 0.0221594}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {-0.012856, 0.0196006}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {-0.01532, 0.0164481}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {-0.01732, 0.0127941}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {-0.018794, 0.00875118}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {-0.019696, 0.00444212}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {-0.02, 0}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {-0.019696, -0.00444212}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {-0.018794, -0.00875118}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {-0.01732, -0.0127941}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {-0.01532, -0.0164481}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {-0.012856, -0.0196006}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {-0.01, -0.0221594}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {-0.00684, -0.0240453}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {-0.003472, -0.0251993}, 1},
                                        {"WP7_PosX", 1, "WP7_PosY", {0, -0.0255882}, 1},
                                        {}
                                    };
                                };
                            };
                            class WaypointShape {
                                width = 6;
                                type = "line";
                                points[] = {
                                    {"WP7_PosX", 1, "WP7_PosY", {0, -0.0255882}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {0.003472, -0.0251993}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {0.00684, -0.0240453}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {0.01, -0.0221594}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {0.012856, -0.0196006}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {0.01532, -0.0164481}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {0.01732, -0.0127941}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {0.018794, -0.00875118}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {0.019696, -0.00444212}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {0.02, 0}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {0.019696, 0.00444212}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {0.018794, 0.00875118}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {0.01732, 0.0127941}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {0.01532, 0.0164481}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {0.012856, 0.0196006}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {0.01, 0.0221594}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {0.00684, 0.0240453}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {0.003472, 0.0251993}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {0, 0.0255882}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {-0.003472, 0.0251993}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {-0.00684, 0.0240453}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {-0.01, 0.0221594}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {-0.012856, 0.0196006}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {-0.01532, 0.0164481}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {-0.01732, 0.0127941}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {-0.018794, 0.00875118}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {-0.019696, 0.00444212}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {-0.02, 0}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {-0.019696, -0.00444212}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {-0.018794, -0.00875118}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {-0.01732, -0.0127941}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {-0.01532, -0.0164481}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {-0.012856, -0.0196006}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {-0.01, -0.0221594}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {-0.00684, -0.0240453}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {-0.003472, -0.0251993}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", {0, -0.0255882}, 1},
                                    {},
                                    {"WP6_PosX", 1, "WP6_PosY", 1, {0, 0}, 1},
                                    {"WP7_PosX", 1, "WP7_PosY", 1, {0, 0}, 1}
                                };
                            };
                        };
                        class WP8 {
                            condition = "user20>=0";
                            class CurrentWaypoint {
                                color[] = {0.9, 0, 0};
                                condition = "(WPIndex>=7)*(WPIndex<=7)";
                                class WaypointShape {
                                    width = 22;
                                    type = "line";
                                    points[] = {
                                        {"WP8_PosX", 1, "WP8_PosY", {0, -0.0255882}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {0.003472, -0.0251993}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {0.00684, -0.0240453}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {0.01, -0.0221594}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {0.012856, -0.0196006}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {0.01532, -0.0164481}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {0.01732, -0.0127941}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {0.018794, -0.00875118}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {0.019696, -0.00444212}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {0.02, 0}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {0.019696, 0.00444212}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {0.018794, 0.00875118}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {0.01732, 0.0127941}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {0.01532, 0.0164481}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {0.012856, 0.0196006}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {0.01, 0.0221594}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {0.00684, 0.0240453}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {0.003472, 0.0251993}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {0, 0.0255882}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {-0.003472, 0.0251993}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {-0.00684, 0.0240453}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {-0.01, 0.0221594}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {-0.012856, 0.0196006}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {-0.01532, 0.0164481}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {-0.01732, 0.0127941}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {-0.018794, 0.00875118}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {-0.019696, 0.00444212}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {-0.02, 0}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {-0.019696, -0.00444212}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {-0.018794, -0.00875118}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {-0.01732, -0.0127941}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {-0.01532, -0.0164481}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {-0.012856, -0.0196006}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {-0.01, -0.0221594}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {-0.00684, -0.0240453}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {-0.003472, -0.0251993}, 1},
                                        {"WP8_PosX", 1, "WP8_PosY", {0, -0.0255882}, 1},
                                        {}
                                    };
                                };
                            };
                            class WaypointShape {
                                width = 6;
                                type = "line";
                                points[] = {
                                    {"WP8_PosX", 1, "WP8_PosY", {0, -0.0255882}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {0.003472, -0.0251993}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {0.00684, -0.0240453}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {0.01, -0.0221594}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {0.012856, -0.0196006}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {0.01532, -0.0164481}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {0.01732, -0.0127941}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {0.018794, -0.00875118}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {0.019696, -0.00444212}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {0.02, 0}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {0.019696, 0.00444212}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {0.018794, 0.00875118}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {0.01732, 0.0127941}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {0.01532, 0.0164481}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {0.012856, 0.0196006}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {0.01, 0.0221594}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {0.00684, 0.0240453}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {0.003472, 0.0251993}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {0, 0.0255882}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {-0.003472, 0.0251993}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {-0.00684, 0.0240453}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {-0.01, 0.0221594}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {-0.012856, 0.0196006}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {-0.01532, 0.0164481}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {-0.01732, 0.0127941}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {-0.018794, 0.00875118}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {-0.019696, 0.00444212}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {-0.02, 0}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {-0.019696, -0.00444212}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {-0.018794, -0.00875118}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {-0.01732, -0.0127941}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {-0.01532, -0.0164481}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {-0.012856, -0.0196006}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {-0.01, -0.0221594}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {-0.00684, -0.0240453}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {-0.003472, -0.0251993}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", {0, -0.0255882}, 1},
                                    {},
                                    {"WP7_PosX", 1, "WP7_PosY", 1, {0, 0}, 1},
                                    {"WP8_PosX", 1, "WP8_PosY", 1, {0, 0}, 1}
                                };
                            };
                        };
                        class WP9 {
                            condition = "user22>=0";
                            class CurrentWaypoint {
                                color[] = {0.9, 0, 0};
                                condition = "(WPIndex>=8)*(WPIndex<=8)";
                                class WaypointShape {
                                    width = 22;
                                    type = "line";
                                    points[] = {
                                        {"WP9_PosX", 1, "WP9_PosY", {0, -0.0255882}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {0.003472, -0.0251993}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {0.00684, -0.0240453}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {0.01, -0.0221594}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {0.012856, -0.0196006}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {0.01532, -0.0164481}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {0.01732, -0.0127941}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {0.018794, -0.00875118}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {0.019696, -0.00444212}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {0.02, 0}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {0.019696, 0.00444212}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {0.018794, 0.00875118}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {0.01732, 0.0127941}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {0.01532, 0.0164481}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {0.012856, 0.0196006}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {0.01, 0.0221594}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {0.00684, 0.0240453}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {0.003472, 0.0251993}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {0, 0.0255882}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {-0.003472, 0.0251993}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {-0.00684, 0.0240453}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {-0.01, 0.0221594}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {-0.012856, 0.0196006}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {-0.01532, 0.0164481}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {-0.01732, 0.0127941}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {-0.018794, 0.00875118}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {-0.019696, 0.00444212}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {-0.02, 0}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {-0.019696, -0.00444212}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {-0.018794, -0.00875118}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {-0.01732, -0.0127941}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {-0.01532, -0.0164481}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {-0.012856, -0.0196006}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {-0.01, -0.0221594}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {-0.00684, -0.0240453}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {-0.003472, -0.0251993}, 1},
                                        {"WP9_PosX", 1, "WP9_PosY", {0, -0.0255882}, 1},
                                        {}
                                    };
                                };
                            };
                            class WaypointShape {
                                width = 6;
                                type = "line";
                                points[] = {
                                    {"WP9_PosX", 1, "WP9_PosY", {0, -0.0255882}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {0.003472, -0.0251993}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {0.00684, -0.0240453}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {0.01, -0.0221594}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {0.012856, -0.0196006}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {0.01532, -0.0164481}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {0.01732, -0.0127941}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {0.018794, -0.00875118}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {0.019696, -0.00444212}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {0.02, 0}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {0.019696, 0.00444212}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {0.018794, 0.00875118}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {0.01732, 0.0127941}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {0.01532, 0.0164481}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {0.012856, 0.0196006}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {0.01, 0.0221594}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {0.00684, 0.0240453}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {0.003472, 0.0251993}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {0, 0.0255882}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {-0.003472, 0.0251993}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {-0.00684, 0.0240453}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {-0.01, 0.0221594}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {-0.012856, 0.0196006}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {-0.01532, 0.0164481}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {-0.01732, 0.0127941}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {-0.018794, 0.00875118}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {-0.019696, 0.00444212}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {-0.02, 0}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {-0.019696, -0.00444212}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {-0.018794, -0.00875118}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {-0.01732, -0.0127941}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {-0.01532, -0.0164481}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {-0.012856, -0.0196006}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {-0.01, -0.0221594}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {-0.00684, -0.0240453}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {-0.003472, -0.0251993}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", {0, -0.0255882}, 1},
                                    {},
                                    {"WP8_PosX", 1, "WP8_PosY", 1, {0, 0}, 1},
                                    {"WP9_PosX", 1, "WP9_PosY", 1, {0, 0}, 1}
                                };
                            };
                        };
                        class WP10 {
                            condition = "user24>=0";
                            class CurrentWaypoint {
                                color[] = {0.9, 0, 0};
                                condition = "(WPIndex>=9)*(WPIndex<=9)";
                                class WaypointShape {
                                    width = 22;
                                    type = "line";
                                    points[] = {
                                        {"WP10_PosX", 1, "WP10_PosY", {0, -0.0255882}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {0.003472, -0.0251993}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {0.00684, -0.0240453}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {0.01, -0.0221594}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {0.012856, -0.0196006}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {0.01532, -0.0164481}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {0.01732, -0.0127941}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {0.018794, -0.00875118}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {0.019696, -0.00444212}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {0.02, 0}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {0.019696, 0.00444212}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {0.018794, 0.00875118}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {0.01732, 0.0127941}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {0.01532, 0.0164481}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {0.012856, 0.0196006}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {0.01, 0.0221594}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {0.00684, 0.0240453}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {0.003472, 0.0251993}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {0, 0.0255882}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {-0.003472, 0.0251993}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {-0.00684, 0.0240453}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {-0.01, 0.0221594}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {-0.012856, 0.0196006}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {-0.01532, 0.0164481}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {-0.01732, 0.0127941}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {-0.018794, 0.00875118}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {-0.019696, 0.00444212}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {-0.02, 0}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {-0.019696, -0.00444212}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {-0.018794, -0.00875118}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {-0.01732, -0.0127941}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {-0.01532, -0.0164481}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {-0.012856, -0.0196006}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {-0.01, -0.0221594}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {-0.00684, -0.0240453}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {-0.003472, -0.0251993}, 1},
                                        {"WP10_PosX", 1, "WP10_PosY", {0, -0.0255882}, 1},
                                        {}
                                    };
                                };
                            };
                            class WaypointShape {
                                width = 6;
                                type = "line";
                                points[] = {
                                    {"WP10_PosX", 1, "WP10_PosY", {0, -0.0255882}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {0.003472, -0.0251993}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {0.00684, -0.0240453}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {0.01, -0.0221594}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {0.012856, -0.0196006}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {0.01532, -0.0164481}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {0.01732, -0.0127941}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {0.018794, -0.00875118}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {0.019696, -0.00444212}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {0.02, 0}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {0.019696, 0.00444212}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {0.018794, 0.00875118}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {0.01732, 0.0127941}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {0.01532, 0.0164481}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {0.012856, 0.0196006}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {0.01, 0.0221594}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {0.00684, 0.0240453}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {0.003472, 0.0251993}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {0, 0.0255882}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {-0.003472, 0.0251993}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {-0.00684, 0.0240453}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {-0.01, 0.0221594}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {-0.012856, 0.0196006}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {-0.01532, 0.0164481}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {-0.01732, 0.0127941}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {-0.018794, 0.00875118}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {-0.019696, 0.00444212}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {-0.02, 0}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {-0.019696, -0.00444212}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {-0.018794, -0.00875118}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {-0.01732, -0.0127941}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {-0.01532, -0.0164481}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {-0.012856, -0.0196006}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {-0.01, -0.0221594}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {-0.00684, -0.0240453}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {-0.003472, -0.0251993}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", {0, -0.0255882}, 1},
                                    {},
                                    {"WP9_PosX", 1, "WP9_PosY", 1, {0, 0}, 1},
                                    {"WP10_PosX", 1, "WP10_PosY", 1, {0, 0}, 1}
                                };
                            };
                        };
                    };
                    class PlanePositionGroup {
                        color[] = {0.7, 0, 0.1};
                        class PlanePosition {
                            width = 8;
                            type = "line";
                            points[] = {
                                {"MovementY", 1, "MovementX", 1, {"PlaneDirection", 0, 0.02}, 1},
                                {"MovementY", 1, "MovementX", 1, {"PlaneDirection", 0.02, -0.015}, 1},
                                {"MovementY", 1, "MovementX", 1, {"PlaneDirection", 0, -0.005}, 1},
                                {"MovementY", 1, "MovementX", 1, {"PlaneDirection", -0.02, -0.015}, 1},
                                {"MovementY", 1, "MovementX", 1, {"PlaneDirection", 0, 0.02}, 1}
                            };
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
                    condition = "user2";
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
                    class InvalidLock {
                        condition = "abs(cameraHeadingDiff) > 70 - missileLocked - missileLocking";
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
                };
            };
            class CM_Counter {
                topLeft = "MFD_CM_TL";
                topRight = "MFD_CM_TR";
                bottomLeft = "MFD_CM_BL";
                enableParallax = 0;
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0, 1, 0, 0.1};
                class Bones {};
                class Draw {
                    color[] = {1, 1, 1};
                    alpha = 0.06;
                    class CMcount {
                        type = "text";
                        source = "cmammo";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.5, 0.2}, 1};
                        right[] = {{0.8, 0.2}, 1};
                        down[] = {{0.5, 0.7}, 1};
                    };
                };
            };
            class EKRAN {
                topLeft = "MFD_Ekran_TL";
                topRight = "MFD_Ekran_TR";
                bottomLeft = "MFD_Ekran_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0, 1, 0, 0.1};
                font = "rhs_digital_font_var";
                class Bones {};
                class Draw {
                    color[] = {0.98, 0.63, 0};
                    alpha = 0.66;
                    condition = "gmeter>=19";
                    class CMcount {
                        type = "text";
                        source = "static";
                        text = "Вибрация";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.5, 0.2}, 1};
                        right[] = {{0.7, 0.2}, 1};
                        down[] = {{0.5, 0.4}, 1};
                    };
                    class WarText2 {
                        type = "text";
                        source = "static";
                        text = "двиг.";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.5, 0.6}, 1};
                        right[] = {{0.7, 0.6}, 1};
                        down[] = {{0.5, 0.8}, 1};
                    };
                };
            };
        };
    };
    class rhs_mig29sm_base: rhs_mig29s_base {
        displayName = "$STR_MiG29SM_name";
        model = "\rhsafrf\addons\rhs_mig29\mig29sm.p3d";
        class AnimationSources: AnimationSources {
            class Hide_TV {
                source = "user";
                initPhase = 0;
                animPeriod = 0;
            };
        };
        unitInfoType = "RHS_RscUnitInfoAir_MiG29SM";
        class pilotCamera {
            class OpticsIn {
                class Wide {
                    opticsDisplayName = "DEFAULT";
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.35;
                    minFov = 0.35;
                    maxFov = 0.35;
                    directionStabilized = 0;
                    visionMode[] = {"Normal", "TI"};
                    thermalMode[] = {0, 1};
                    gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_mig29sm_tv_1x.p3d";
                };
                class Narrow: Wide {
                    opticsDisplayName = "ZOOM";
                    initFov = 0.04375;
                    minFov = 0.04375;
                    maxFov = 0.04375;
                    gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_mig29sm_tv_1x.p3d";
                };
                class VeryNarrow: Wide {
                    opticsDisplayName = "ZOOM";
                    initFov = 0.0152174;
                    minFov = 0.0152174;
                    maxFov = 0.0152174;
                    gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_mig29sm_tv_1x.p3d";
                };
            };
            minElev = -60;
            maxElev = 60;
            initElev = 0;
            minTurn = -60;
            maxTurn = 60;
            maxXRotSpeed = 0.25;
            maxYRotSpeed = 0.25;
            pilotOpticsShowCursor = 0;
            controllable = 1;
        };
        memoryPointDriverOptics = "pilotCamera";
        class Components: Components {
            class TransportPylonsComponent {
                UIPicture = "\rhsafrf\addons\rhs_mig29\data\loadouts\RHS_MiG29_EDEN_CA.paa";
                class pylons {
                    class pylon1 {
                        hardpoints[] = {
                            "RHS_HP_KH25_APU68_MIG29",
                            "RHS_HP_KH29_AKU58_MIG29",
                            "RHS_HP_FAB100_BD3_UMK2A",
                            "RHS_HP_FAB100_MBD3_U4T",
                            "RHS_HP_FAB250_BD3_UMK2A",
                            "RHS_HP_FAB500_BD3_UMK2A",
                            "RHS_HP_KAB500_BD3_UMK2A",
                            "RHS_HP_KMGU2_BD3_UMK2A",
                            "RHS_HP_BD3_USK_A_O25L",
                            "RHS_HP_APU68_BD3_UMK2A",
                            "RHS_HP_B13L_BD3_UMK2A",
                            "RHS_HP_B8M1_BD3_UMK2A",
                            "RHS_HP_UB16_BD3_UMK2A",
                            "RHS_HP_UB32_BD3_UMK2A",
                            "RHS_HP_R77M_AKU170_MIG29",
                            "RHS_HP_R77_AKU170_MIG29",
                            "RHS_HP_R27_APU470",
                            "RHS_HP_R60_APU60",
                            "RHS_HP_R73_APU73",
                            "RHS_HP_PTB1150"
                        };
                        priority = 9;
                        attachment = "rhs_mag_R27ER_APU470";
                        maxweight = 1200;
                        UIposition[] = {0.32, 0.2};
                        hitpoint = "HitPylon1";
                    };
                    class pylon2: pylon1 {
                        UIposition[] = {0.32, 0.35};
                        mirroredMissilePos = 1;
                        hitpoint = "HitPylon2";
                    };
                    class pylon3: pylon1 {
                        hardpoints[] = {
                            "RHS_HP_KH25_APU68_MIG29",
                            "RHS_HP_FAB100_BD3_UMK2A",
                            "RHS_HP_FAB100_MBD3_U4T",
                            "RHS_HP_FAB250_BD3_UMK2A",
                            "RHS_HP_FAB500_BD3_UMK2A",
                            "RHS_HP_KAB500_BD3_UMK2A",
                            "RHS_HP_KMGU2_BD3_UMK2A",
                            "RHS_HP_BD3_USK_A_O25L",
                            "RHS_HP_APU68_BD3_UMK2A",
                            "RHS_HP_B13L_BD3_UMK2A",
                            "RHS_HP_B8M1_BD3_UMK2A",
                            "RHS_HP_UB16_BD3_UMK2A",
                            "RHS_HP_UB32_BD3_UMK2A",
                            "RHS_HP_R77M_AKU170_MIG29",
                            "RHS_HP_R77_AKU170_MIG29",
                            "RHS_HP_R60_APU60",
                            "RHS_HP_R73_APU73"
                        };
                        priority = 7;
                        UIposition[] = {0.33, 0.15};
                        attachment = "rhs_mag_R73M_APU73";
                        hitpoint = "HitPylon3";
                    };
                    class pylon4: pylon3 {
                        UIposition[] = {0.33, 0.4};
                        mirroredMissilePos = 3;
                        hitpoint = "HitPylon4";
                    };
                    class pylon5: pylon1 {
                        hardpoints[] = {
                            "RHS_HP_R77M_AKU170_MIG29",
                            "RHS_HP_R77_AKU170_MIG29",
                            "RHS_HP_R60_APU60",
                            "RHS_HP_R73_APU73"
                        };
                        priority = 10;
                        attachment = "rhs_mag_R73M_APU73";
                        maxweight = 1200;
                        UIposition[] = {0.34, 0.1};
                        hitpoint = "HitPylon5";
                    };
                    class pylon6: pylon5 {
                        UIposition[] = {0.34, 0.45};
                        mirroredMissilePos = 5;
                        hitpoint = "HitPylon6";
                    };
                    class pylon7: pylon1 {
                        hardpoints[] = {"RHS_HP_PTB1500"};
                        priority = 1;
                        UIposition[] = {0.33, 0.275};
                        attachment = "";
                        hitpoint = "HitPylon7";
                    };
                    class cmDispenser {
                        hardpoints[] = {"RHS_cm_BVP3026", "RHS_cm_BVP3026_x2"};
                        priority = 1;
                        attachment = "rhs_BVP3026_CMFlare_Chaff_Magazine_x2";
                        maxweight = 800;
                        UIposition[] = {0.625, 0.275};
                    };
                };
                class Presets {
                    class Bomb {
                        attachment[] = {
                            "rhs_mag_fab500_bd3_umk2a",
                            "rhs_mag_fab500_bd3_umk2a",
                            "rhs_mag_fab500_bd3_umk2a",
                            "rhs_mag_fab500_bd3_umk2a",
                            "rhs_mag_R73M_APU73",
                            "rhs_mag_R73M_APU73",
                            "rhs_BVP3026_CMFlare_Chaff_Magazine_x2"
                        };
                        displayname = "Bomb";
                    };
                    class LaserBomb {
                        attachment[] = {
                            "rhs_mag_kab500kr_bd3_umk2a",
                            "rhs_mag_kab500kr_bd3_umk2a",
                            "rhs_mag_kab500kr_bd3_umk2a",
                            "rhs_mag_kab500kr_bd3_umk2a",
                            "rhs_mag_R73M_APU73",
                            "rhs_mag_R73M_APU73",
                            "rhs_BVP3026_CMFlare_Chaff_Magazine_x2"
                        };
                        displayname = "Guided bombs";
                    };
                    class AirToGround {
                        attachment[] = {
                            "rhs_mag_kh29T_aku58_mig29",
                            "rhs_mag_kh29T_aku58_mig29",
                            "rhs_mag_b8m1_bd3_umk2a_s8df",
                            "rhs_mag_b8m1_bd3_umk2a_s8df",
                            "rhs_mag_R73M_APU73",
                            "rhs_mag_R73M_APU73",
                            "rhs_BVP3026_CMFlare_Chaff_Magazine_x2"
                        };
                        displayname = "Kh-29T";
                    };
                    class KMGU {
                        attachment[] = {
                            "rhs_mag_kmgu2_ao25_bd3_umk2a",
                            "rhs_mag_kmgu2_ao25_bd3_umk2a",
                            "rhs_mag_kmgu2_ao25_bd3_umk2a",
                            "rhs_mag_kmgu2_ao25_bd3_umk2a",
                            "rhs_mag_R73M_APU73",
                            "rhs_mag_R73M_APU73",
                            "rhs_BVP3026_CMFlare_Chaff_Magazine_x2"
                        };
                        displayname = "KMGU-2 (AO-2.5)";
                    };
                    class AA {
                        attachment[] = {
                            "rhs_mag_R27ER_APU470",
                            "rhs_mag_R27ER_APU470",
                            "rhs_mag_R73M_APU73",
                            "rhs_mag_R73M_APU73",
                            "rhs_mag_R73M_APU73",
                            "rhs_mag_R73M_APU73",
                            "rhs_BVP3026_CMFlare_Chaff_Magazine_x2"
                        };
                        displayname = "Anti Air";
                    };
                    class CAS {
                        attachment[] = {
                            "rhs_mag_b8m1_bd3_umk2a_s8kom",
                            "rhs_mag_b8m1_bd3_umk2a_s8kom",
                            "rhs_mag_b8m1_bd3_umk2a_s8df",
                            "rhs_mag_b8m1_bd3_umk2a_s8df",
                            "rhs_mag_R73M_APU73",
                            "rhs_mag_R73M_APU73",
                            "rhs_BVP3026_CMFlare_Chaff_Magazine_x2"
                        };
                        displayname = "Close Air Support";
                    };
                };
            };
            class SensorsManagerComponent {
                class Components {
                    class IRSensorComponent: SensorTemplateIR {
                        class AirTarget {
                            minRange = 500;
                            maxRange = 5000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 500;
                            maxRange = 500;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        angleRangeHorizontal = 360;
                        angleRangeVertical = 120;
                        maxTrackableSpeed = 500;
                    };
                    class PassiveRadarSensorComponent: SensorTemplatePassiveRadar {};
                    class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
                        class AirTarget {
                            minRange = 23000;
                            maxRange = 23000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 9000;
                            maxRange = 9000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        typeRecognitionDistance = 6000;
                        angleRangeHorizontal = 60;
                        angleRangeVertical = 60;
                        groundNoiseDistanceCoef = 0.1;
                    };
                    class LaserSensorComponent: SensorTemplateLaser {};
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
                    class SensorDisplay {
                        componentType = "SensorsDisplayComponent";
                        resource = "RscCustomInfoSensors";
                        range[] = {16000, 35000, 3000, 8000};
                        showTargetTypes = "1+2+4+8+32+128+256";
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
                    class SensorDisplay {
                        componentType = "SensorsDisplayComponent";
                        resource = "RscCustomInfoSensors";
                        range[] = {16000, 35000, 3000, 8000};
                        showTargetTypes = "1+2+4+8+32+128+256";
                    };
                };
            };
        };
        defaultUserMFDvalues[] = {1, 0, 0, 0};
        class MFD {
            class HUD {
                topLeft = "HUD_top_left";
                topRight = "HUD_top_right";
                bottomLeft = "HUD_bottom_left";
                enableParallax = 1;
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0, 1, 0, 0.1};
                font = "rhs_digital_font_rus";
                class material {
                    ambient[] = {10, 10, 10, 1};
                    diffuse[] = {10, 10, 10, 1};
                    emissive[] = {400, 200, 200, 1};
                };
                class Bones {
                    class PlaneOrientation {
                        type = "fixed";
                        refreshRate = 0.1;
                        pos[] = {0.5, 0.53};
                    };
                    class ClimbFixed {
                        type = "fixed";
                        pos[] = {0.898, 0.7};
                    };
                    class ClimbRotate {
                        type = "rotational";
                        source = "vspeed";
                        sourceScale = 1;
                        center[] = {0.88, 0.7};
                        min = -30;
                        max = 30;
                        minAngle = -90;
                        maxAngle = 90;
                        aspectRatio = 1.01724;
                    };
                    class WeaponAim {
                        type = "vector";
                        source = "weapon";
                        pos0[] = {0.5, 0.53};
                        pos10[] = {1.08, 1.12};
                    };
                    class Velocity {
                        type = "vector";
                        source = "velocity";
                        pos0[] = {0.5, 0.53};
                        pos10[] = {1.08, 1.12};
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
                        refreshRate = 0.1;
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
                        refreshRate = 0.1;
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
                        pos10[] = {1.08, 1.12};
                    };
                    class ImpactPointRelative {
                        type = "vector";
                        source = "impactpointweaponRelative";
                        pos0[] = {0.5, 0.53};
                        pos10[] = {1.08, 1.12};
                    };
                    class Limit0109 {
                        type = "limit";
                        limits[] = {0.1, 0.1, 0.9, 0.9};
                    };
                    class Target {
                        source = "target";
                        type = "vector";
                        pos0[] = {0.5, 0.53};
                        pos10[] = {1.08, 1.12};
                    };
                    class TargetingPodTarget {
                        source = "pilotcamera";
                        type = "vector";
                        pos0[] = {0.5, 0.53};
                        pos10[] = {1.08, 1.12};
                    };
                    class WPPoint {
                        type = "vector";
                        source = "WPPoint";
                        pos0[] = {0.5, 0.53};
                        pos10[] = {1.08, 1.12};
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
                        aspectRatio = 1.01724;
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
                        pos10[] = {1.08, 1.12};
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
                        pos3[] = {0.674, 0.53};
                    };
                    class ILS_W: ILS_H {
                        pos3[] = {0.5, 0.707};
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
                        sourceScale = 0.65;
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
                        aspectRatio = 1.01724;
                    };
                    class LarAmmoMGunMin: LarAmmoMGunMax {
                        source = "LarAmmoMin";
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    condition = "on-user3";
                    class Horizont {
                        clipTL[] = {0.1, 0.38};
                        clipBR[] = {0.9, 0.78};
                        condition = "1-(bomb+mgun+atmissile+aamissile+rocket)*activeSensorsOn";
                        class Dimmed {
                            class Level00 {
                                type = "line";
                                width = 5;
                                points[] = {{"Level0", {0.176, 0}, 1}, {"Level0", {-0.176, 0}, 1}, {}};
                            };
                            class Level2M00: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, 0}, 1}, {"Level0", {0.18, 0}, 1}};
                            };
                            class VALM2_1_00 {
                                type = "text";
                                source = "static";
                                text = 0;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -0.036}, 1};
                                right[] = {"Level0", {0.24, -0.036}, 1};
                                down[] = {"Level0", {0.2, -0.004}, 1};
                            };
                            class Level2M10: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, -0.218519}, 1}, {"Level0", {0.18, -0.218519}, 1}};
                            };
                            class VALM2_1_10 {
                                type = "text";
                                source = "static";
                                text = 10;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -0.254519}, 1};
                                right[] = {"Level0", {0.24, -0.254519}, 1};
                                down[] = {"Level0", {0.2, -0.222519}, 1};
                            };
                            class Level2P10: Level00 {
                                type = "line";
                                lineType = 2;
                                points[] = {{"Level0", {0.224, 0.218519}, 1}, {"Level0", {0.18, 0.218519}, 1}};
                            };
                            class VALP2_1_10 {
                                type = "text";
                                source = "static";
                                text = -10;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, 0.182519}, 1};
                                right[] = {"Level0", {0.24, 0.182519}, 1};
                                down[] = {"Level0", {0.2, 0.214519}, 1};
                            };
                            class Level2M20: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, -0.437037}, 1}, {"Level0", {0.18, -0.437037}, 1}};
                            };
                            class VALM2_1_20 {
                                type = "text";
                                source = "static";
                                text = 20;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -0.473037}, 1};
                                right[] = {"Level0", {0.24, -0.473037}, 1};
                                down[] = {"Level0", {0.2, -0.441037}, 1};
                            };
                            class Level2P20: Level00 {
                                type = "line";
                                lineType = 2;
                                points[] = {{"Level0", {0.224, 0.437037}, 1}, {"Level0", {0.18, 0.437037}, 1}};
                            };
                            class VALP2_1_20 {
                                type = "text";
                                source = "static";
                                text = -20;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, 0.401037}, 1};
                                right[] = {"Level0", {0.24, 0.401037}, 1};
                                down[] = {"Level0", {0.2, 0.433037}, 1};
                            };
                            class Level2M30: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, -0.655556}, 1}, {"Level0", {0.18, -0.655556}, 1}};
                            };
                            class VALM2_1_30 {
                                type = "text";
                                source = "static";
                                text = 30;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -0.691556}, 1};
                                right[] = {"Level0", {0.24, -0.691556}, 1};
                                down[] = {"Level0", {0.2, -0.659556}, 1};
                            };
                            class Level2P30: Level00 {
                                type = "line";
                                lineType = 2;
                                points[] = {{"Level0", {0.224, 0.655556}, 1}, {"Level0", {0.18, 0.655556}, 1}};
                            };
                            class VALP2_1_30 {
                                type = "text";
                                source = "static";
                                text = -30;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, 0.619556}, 1};
                                right[] = {"Level0", {0.24, 0.619556}, 1};
                                down[] = {"Level0", {0.2, 0.651556}, 1};
                            };
                            class Level2M40: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, -0.874074}, 1}, {"Level0", {0.18, -0.874074}, 1}};
                            };
                            class VALM2_1_40 {
                                type = "text";
                                source = "static";
                                text = 40;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -0.910074}, 1};
                                right[] = {"Level0", {0.24, -0.910074}, 1};
                                down[] = {"Level0", {0.2, -0.878074}, 1};
                            };
                            class Level2P40: Level00 {
                                type = "line";
                                lineType = 2;
                                points[] = {{"Level0", {0.224, 0.874074}, 1}, {"Level0", {0.18, 0.874074}, 1}};
                            };
                            class VALP2_1_40 {
                                type = "text";
                                source = "static";
                                text = -40;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, 0.838074}, 1};
                                right[] = {"Level0", {0.24, 0.838074}, 1};
                                down[] = {"Level0", {0.2, 0.870074}, 1};
                            };
                            class Level2M50: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, -1.09259}, 1}, {"Level0", {0.18, -1.09259}, 1}};
                            };
                            class VALM2_1_50 {
                                type = "text";
                                source = "static";
                                text = 50;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -1.12859}, 1};
                                right[] = {"Level0", {0.24, -1.12859}, 1};
                                down[] = {"Level0", {0.2, -1.09659}, 1};
                            };
                            class Level2P50: Level00 {
                                type = "line";
                                lineType = 2;
                                points[] = {{"Level0", {0.224, 1.09259}, 1}, {"Level0", {0.18, 1.09259}, 1}};
                            };
                            class VALP2_1_50 {
                                type = "text";
                                source = "static";
                                text = -50;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, 1.05659}, 1};
                                right[] = {"Level0", {0.24, 1.05659}, 1};
                                down[] = {"Level0", {0.2, 1.08859}, 1};
                            };
                            class Level2M60: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, -1.31111}, 1}, {"Level0", {0.18, -1.31111}, 1}};
                            };
                            class VALM2_1_60 {
                                type = "text";
                                source = "static";
                                text = 60;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -1.34711}, 1};
                                right[] = {"Level0", {0.24, -1.34711}, 1};
                                down[] = {"Level0", {0.2, -1.31511}, 1};
                            };
                            class Level2P60: Level00 {
                                type = "line";
                                lineType = 2;
                                points[] = {{"Level0", {0.224, 1.31111}, 1}, {"Level0", {0.18, 1.31111}, 1}};
                            };
                            class VALP2_1_60 {
                                type = "text";
                                source = "static";
                                text = -60;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, 1.27511}, 1};
                                right[] = {"Level0", {0.24, 1.27511}, 1};
                                down[] = {"Level0", {0.2, 1.30711}, 1};
                            };
                            class Level2M70: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, -1.52963}, 1}, {"Level0", {0.18, -1.52963}, 1}};
                            };
                            class VALM2_1_70 {
                                type = "text";
                                source = "static";
                                text = 70;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -1.56563}, 1};
                                right[] = {"Level0", {0.24, -1.56563}, 1};
                                down[] = {"Level0", {0.2, -1.53363}, 1};
                            };
                            class Level2P70: Level00 {
                                type = "line";
                                lineType = 2;
                                points[] = {{"Level0", {0.224, 1.52963}, 1}, {"Level0", {0.18, 1.52963}, 1}};
                            };
                            class VALP2_1_70 {
                                type = "text";
                                source = "static";
                                text = -70;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, 1.49363}, 1};
                                right[] = {"Level0", {0.24, 1.49363}, 1};
                                down[] = {"Level0", {0.2, 1.52563}, 1};
                            };
                            class Level2M80: Level00 {
                                type = "line";
                                lineType = 0;
                                points[] = {{"Level0", {0.224, -1.74815}, 1}, {"Level0", {0.18, -1.74815}, 1}};
                            };
                            class VALM2_1_80 {
                                type = "text";
                                source = "static";
                                text = 80;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, -1.78415}, 1};
                                right[] = {"Level0", {0.24, -1.78415}, 1};
                                down[] = {"Level0", {0.2, -1.75215}, 1};
                            };
                            class Level2P80: Level00 {
                                type = "line";
                                lineType = 2;
                                points[] = {{"Level0", {0.224, 1.74815}, 1}, {"Level0", {0.18, 1.74815}, 1}};
                            };
                            class VALP2_1_80 {
                                type = "text";
                                source = "static";
                                text = -80;
                                align = "center";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"Level0", {0.2, 1.71215}, 1};
                                right[] = {"Level0", {0.24, 1.71215}, 1};
                                down[] = {"Level0", {0.2, 1.74415}, 1};
                            };
                        };
                        class BankDetailed {
                            condition = "1-(bomb+mgun+atmissile+aamissile+rocket+missilelocked + missilelocking+activeSensorsOn)";
                            class Level00 {
                                type = "line";
                                width = 5;
                                points[] = {
                                    {"PlaneOrientation", {-0.144889, 0.0394922}, 1},
                                    {"PlaneOrientation", {-0.164207, 0.0447579}, 1},
                                    {},
                                    {"PlaneOrientation", {-0.129904, 0.0762931}, 1},
                                    {"PlaneOrientation", {-0.164545, 0.0966379}, 1},
                                    {},
                                    {"PlaneOrientation", {-0.106066, 0.107895}, 1},
                                    {"PlaneOrientation", {-0.120208, 0.122281}, 1},
                                    {},
                                    {"PlaneOrientation", {-0.075, 0.132144}, 1},
                                    {"PlaneOrientation", {-0.095, 0.167382}, 1},
                                    {},
                                    {"PlaneOrientation", {0.144889, 0.0394922}, 1},
                                    {"PlaneOrientation", {0.164207, 0.0447578}, 1},
                                    {},
                                    {"PlaneOrientation", {0.129904, 0.0762931}, 1},
                                    {"PlaneOrientation", {0.164545, 0.0966379}, 1},
                                    {},
                                    {"PlaneOrientation", {0.106066, 0.107895}, 1},
                                    {"PlaneOrientation", {0.120208, 0.122281}, 1},
                                    {},
                                    {"PlaneOrientation", {0.075, 0.132144}, 1},
                                    {"PlaneOrientation", {0.095, 0.167382}, 1},
                                    {}
                                };
                            };
                        };
                    };
                    class PlaneOrientationCrosshair {
                        type = "line";
                        width = 3;
                        points[] = {
                            {"HorizonBankInverted", {-0.1375, 0}, 1},
                            {"HorizonBankInverted", {-0.0416667, 0}, 1},
                            {},
                            {"HorizonBankInverted", {-0.0833333, 0}, 1},
                            {"HorizonBankInverted", {-0.0833333, -0.025}, 1},
                            {},
                            {"HorizonBankInverted", {0.0416667, 0}, 1},
                            {"HorizonBankInverted", {0.1375, 0}, 1},
                            {},
                            {"HorizonBankInverted", {0.0833333, 0}, 1},
                            {"HorizonBankInverted", {0.0833333, -0.025}, 1},
                            {},
                            {"HorizonBankInverted", {-0, 0.0333333}, 1},
                            {"HorizonBankInverted", {-0, 0.075}, 1},
                            {},
                            {"PlaneOrientation", {-0.170833, 0}, 1},
                            {"PlaneOrientation", {-0.145833, 0}, 1},
                            {},
                            {"PlaneOrientation", {0.145833, 0}, 1},
                            {"PlaneOrientation", {0.170833, 0}, 1},
                            {}
                        };
                    };
                    class GunCross {
                        condition = "1-mgun*impactDistance*(altitudeAGL>=5)";
                        class Cross {
                            type = "line";
                            width = 3;
                            points[] = {
                                {"PlaneOrientation", {0, -0.03}, 1},
                                {"PlaneOrientation", {0, -0.01}, 1},
                                {},
                                {"PlaneOrientation", {0, 0.03}, 1},
                                {"PlaneOrientation", {0, 0.01}, 1},
                                {},
                                {"PlaneOrientation", {-0.03, 0}, 1},
                                {"PlaneOrientation", {-0.01, 0}, 1},
                                {},
                                {"PlaneOrientation", {0.03, 0}, 1},
                                {"PlaneOrientation", {0.01, 0}, 1},
                                {}
                            };
                        };
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
                    class SpeedNumber0 {
                        type = "text";
                        source = "static";
                        text = 0;
                        align = "left";
                        scale = 1;
                        pos[] = {{0.31, "0.09+0.19"}, 1};
                        right[] = {{0.375, "0.09+0.19"}, 1};
                        down[] = {{0.31, 0.35}, 1};
                    };
                    class SpeedNumber: SpeedNumber0 {
                        source = "speed";
                        sourceScale = 0.36;
                        pos[] = {{0.275, "0.09+0.19"}, 1};
                        right[] = {{0.34, "0.09+0.19"}, 1};
                        down[] = {{0.275, 0.35}, 1};
                    };
                    class AccelerationLine {
                        type = "line";
                        width = 4;
                        points[] = {{{0.22, 0.35}, 1}, {{0.29, 0.35}, 1}};
                    };
                    class Acceleration0Group {
                        condition = "1-abs(gmeterZ)";
                        class Acceleration {
                            type = "line";
                            width = 2;
                            points[] = {
                                {{0.249, 0.362}, 1},
                                {{0.255, 0.35}, 1},
                                {{0.261, 0.362}, 1},
                                {{0.249, 0.362}, 1}
                            };
                        };
                    };
                    class AccelerationPlusGroup {
                        condition = "gmeterZ>=0.5";
                        class Acceleration {
                            type = "line";
                            width = 2;
                            points[] = {
                                {{0.279, 0.362}, 1},
                                {{0.285, 0.35}, 1},
                                {{0.291, 0.362}, 1},
                                {{0.279, 0.362}, 1}
                            };
                        };
                    };
                    class AccelerationMinusGroup {
                        condition = "gmeterZ<=-0.5";
                        class Acceleration {
                            type = "line";
                            width = 2;
                            points[] = {
                                {{0.219, 0.362}, 1},
                                {{0.225, 0.35}, 1},
                                {{0.231, 0.362}, 1},
                                {{0.219, 0.362}, 1}
                            };
                        };
                    };
                    class AltitudeNumber0 {
                        type = "text";
                        source = "static";
                        text = 0;
                        align = "left";
                        scale = 1;
                        pos[] = {{0.82, "0.09+0.19"}, 1};
                        right[] = {{0.885, "0.09+0.19"}, 1};
                        down[] = {{0.82, 0.35}, 1};
                    };
                    class AltitudeNumber: AltitudeNumber0 {
                        source = "altitudeASL";
                        sourceScale = 0.1;
                        sourceLength = 1;
                        pos[] = {{0.785, "0.09+0.19"}, 1};
                        right[] = {{0.85, "0.09+0.19"}, 1};
                        down[] = {{0.785, 0.35}, 1};
                    };
                    class RadarOnGroup {
                        condition = "activeSensorsOn";
                        class RadarText {
                            type = "text";
                            source = "static";
                            text = "РЛ";
                            align = "left";
                            scale = 1;
                            pos[] = {{0.18, 0.45}, 1};
                            right[] = {{0.23, 0.45}, 1};
                            down[] = {{0.18, 0.5}, 1};
                        };
                    };
                    class PylonGroup {
                        condition = "bomb+mgun+atmissile+aamissile+rocket";
                        class Pylon1 {
                            condition = "1-pylonSelected1";
                            class PylonLine {
                                type = "line";
                                width = 6;
                                points[] = {{{0.509, 0.78}, 1}, {{0.541, 0.78}, 1}};
                            };
                        };
                        class Pylon1Selected: Pylon1 {
                            condition = "pylonSelected1";
                            class PylonLine: PylonLine {
                                points[] = {{{0.509, 0.745}, 1}, {{0.541, 0.745}, 1}};
                            };
                        };
                        class Pylon2 {
                            condition = "1-pylonSelected2";
                            class PylonLine {
                                type = "line";
                                width = 6;
                                points[] = {{{0.434, 0.78}, 1}, {{0.466, 0.78}, 1}};
                            };
                        };
                        class Pylon2Selected: Pylon2 {
                            condition = "pylonSelected2";
                            class PylonLine: PylonLine {
                                points[] = {{{0.434, 0.745}, 1}, {{0.466, 0.745}, 1}};
                            };
                        };
                        class Pylon3 {
                            condition = "1-pylonSelected3";
                            class PylonLine {
                                type = "line";
                                width = 6;
                                points[] = {{{0.559, 0.78}, 1}, {{0.591, 0.78}, 1}};
                            };
                        };
                        class Pylon3Selected: Pylon3 {
                            condition = "pylonSelected3";
                            class PylonLine: PylonLine {
                                points[] = {{{0.559, 0.745}, 1}, {{0.591, 0.745}, 1}};
                            };
                        };
                        class Pylon4 {
                            condition = "1-pylonSelected4";
                            class PylonLine {
                                type = "line";
                                width = 6;
                                points[] = {{{0.384, 0.78}, 1}, {{0.416, 0.78}, 1}};
                            };
                        };
                        class Pylon4Selected: Pylon4 {
                            condition = "pylonSelected4";
                            class PylonLine: PylonLine {
                                points[] = {{{0.384, 0.745}, 1}, {{0.416, 0.745}, 1}};
                            };
                        };
                        class Pylon5 {
                            condition = "1-pylonSelected5";
                            class PylonLine {
                                type = "line";
                                width = 6;
                                points[] = {{{0.609, 0.78}, 1}, {{0.641, 0.78}, 1}};
                            };
                        };
                        class Pylon5Selected: Pylon5 {
                            condition = "pylonSelected5";
                            class PylonLine: PylonLine {
                                points[] = {{{0.609, 0.745}, 1}, {{0.641, 0.745}, 1}};
                            };
                        };
                        class Pylon6 {
                            condition = "1-pylonSelected6";
                            class PylonLine {
                                type = "line";
                                width = 6;
                                points[] = {{{0.334, 0.78}, 1}, {{0.366, 0.78}, 1}};
                            };
                        };
                        class Pylon6Selected: Pylon6 {
                            condition = "pylonSelected6";
                            class PylonLine: PylonLine {
                                points[] = {{{0.334, 0.745}, 1}, {{0.366, 0.745}, 1}};
                            };
                        };
                        class PylonName1 {
                            type = "pylonicon";
                            pos[] = {{0.74, 0.73}, 1};
                            pylon = 1;
                            name = "rhs_rus_ammoname";
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
                                    {"ILS_W", {-0.24, -0.0244138}, 1},
                                    {"ILS_W", {-0.24, 0.0244138}, 1},
                                    {},
                                    {"ILS_W", {-0.12, -0.0183103}, 1},
                                    {"ILS_W", {-0.12, 0.0183103}, 1},
                                    {},
                                    {"ILS_W", {0, -0.0244138}, 1},
                                    {"ILS_W", {0, 0.0244138}, 1},
                                    {},
                                    {"ILS_W", {0.12, -0.0183103}, 1},
                                    {"ILS_W", {0.12, 0.0183103}, 1},
                                    {},
                                    {"ILS_W", {0.24, -0.0244138}, 1},
                                    {"ILS_W", {0.24, 0.0244138}, 1},
                                    {},
                                    {"ILS_H", {0, -0.244138}, 1},
                                    {"ILS_H", {0, 0.244138}, 1},
                                    {},
                                    {"ILS_H", {-0.024, -0.244138}, 1},
                                    {"ILS_H", {0.024, -0.244138}, 1},
                                    {},
                                    {"ILS_H", {-0.018, -0.122069}, 1},
                                    {"ILS_H", {0.018, -0.122069}, 1},
                                    {},
                                    {"ILS_H", {-0.024, 0}, 1},
                                    {"ILS_H", {0.024, 0}, 1},
                                    {},
                                    {"ILS_H", {-0.018, 0.122069}, 1},
                                    {"ILS_H", {0.018, 0.122069}, 1},
                                    {},
                                    {"ILS_H", {-0.024, 0.244138}, 1},
                                    {"ILS_H", {0.024, 0.244138}, 1}
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
                    class HeadingArrow {
                        type = "line";
                        width = 3;
                        points[] = {
                            {{0.48, 0.365}, 1},
                            {{0.5, 0.345}, 1},
                            {{0.52, 0.365}, 1},
                            {{0.48, 0.365}, 1}
                        };
                    };
                    class HeadingLine {
                        type = "line";
                        width = 4;
                        points[] = {{{0.35, 0.34}, 1}, {{0.65, 0.34}, 1}};
                    };
                    class HeadingScale {
                        type = "scale";
                        horizontal = 1;
                        source = "heading";
                        sourceScale = 0.1;
                        width = 4;
                        NeverEatSeaWeed = 0;
                        refreshRate = 0.1;
                        top = 0.35;
                        center = 0.5;
                        bottom = 0.65;
                        lineXleft = 0.338;
                        lineYright = 0.328;
                        lineXleftMajor = 0.338;
                        lineYrightMajor = 0.318;
                        majorLineEach = 2;
                        numberEach = 2;
                        step = 0.5;
                        stepSize = 0.0526316;
                        align = "center";
                        scale = 1;
                        pos[] = {0.35, 0.27};
                        right[] = {0.4, 0.27};
                        down[] = {0.35, 0.31};
                    };
                    class MarchGroup {
                        condition = "1-(bomb+mgun+atmissile+aamissile+rocket)";
                        class MarchText {
                            type = "text";
                            source = "static";
                            text = "МРШ";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{0.18, 0.75}, 1};
                            right[] = {{0.23, 0.75}, 1};
                            down[] = {{0.18, 0.8}, 1};
                        };
                        class SpeedNumber0 {
                            type = "text";
                            source = "WPDist";
                            sourceScale = 0.001;
                            sourcePrecision = 1;
                            align = "center";
                            scale = 1;
                            pos[] = {{0.5, 0.75}, 1};
                            right[] = {{0.55, 0.75}, 1};
                            down[] = {{0.5, 0.8}, 1};
                        };
                        class WP {
                            condition = "wpvalid";
                            class shape {
                                type = "line";
                                width = 4;
                                points[] = {
                                    {"WPPoint", {0, -0.0406897}, 1},
                                    {"WPPoint", {0.006944, -0.0400712}, 1},
                                    {"WPPoint", {0.01368, -0.0382361}, 1},
                                    {"WPPoint", {0.02, -0.0352372}, 1},
                                    {"WPPoint", {0.025712, -0.0311683}, 1},
                                    {"WPPoint", {0.03064, -0.0261553}, 1},
                                    {"WPPoint", {0.03464, -0.0203448}, 1},
                                    {"WPPoint", {0.037588, -0.0139159}, 1},
                                    {"WPPoint", {0.039392, -0.00706372}, 1},
                                    {"WPPoint", {0.04, 0}, 1},
                                    {"WPPoint", {0.039392, 0.00706372}, 1},
                                    {"WPPoint", {0.037588, 0.0139159}, 1},
                                    {"WPPoint", {0.03464, 0.0203448}, 1},
                                    {"WPPoint", {0.03064, 0.0261553}, 1},
                                    {"WPPoint", {0.025712, 0.0311683}, 1},
                                    {"WPPoint", {0.02, 0.0352372}, 1},
                                    {"WPPoint", {0.01368, 0.0382361}, 1},
                                    {"WPPoint", {0.006944, 0.0400712}, 1},
                                    {"WPPoint", {0, 0.0406897}, 1},
                                    {"WPPoint", {-0.006944, 0.0400712}, 1},
                                    {"WPPoint", {-0.01368, 0.0382361}, 1},
                                    {"WPPoint", {-0.02, 0.0352372}, 1},
                                    {"WPPoint", {-0.025712, 0.0311683}, 1},
                                    {"WPPoint", {-0.03064, 0.0261553}, 1},
                                    {"WPPoint", {-0.03464, 0.0203448}, 1},
                                    {"WPPoint", {-0.037588, 0.0139159}, 1},
                                    {"WPPoint", {-0.039392, 0.00706372}, 1},
                                    {"WPPoint", {-0.04, 0}, 1},
                                    {"WPPoint", {-0.039392, -0.00706372}, 1},
                                    {"WPPoint", {-0.037588, -0.0139159}, 1},
                                    {"WPPoint", {-0.03464, -0.0203448}, 1},
                                    {"WPPoint", {-0.03064, -0.0261553}, 1},
                                    {"WPPoint", {-0.025712, -0.0311683}, 1},
                                    {"WPPoint", {-0.02, -0.0352372}, 1},
                                    {"WPPoint", {-0.01368, -0.0382361}, 1},
                                    {"WPPoint", {-0.006944, -0.0400712}, 1},
                                    {"WPPoint", {0, -0.0406897}, 1},
                                    {}
                                };
                            };
                        };
                    };
                    class HelmetModeGroup {
                        condition = "user2*(bomb+mgun+atmissile+aamissile+rocket)";
                        class HelmetText {
                            type = "text";
                            source = "static";
                            text = "ШЛМ";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{0.18, 0.75}, 1};
                            right[] = {{0.23, 0.75}, 1};
                            down[] = {{0.18, 0.8}, 1};
                        };
                        class BWBText {
                            type = "text";
                            source = "static";
                            text = "БВБ";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{0.18, 0.79}, 1};
                            right[] = {{0.23, 0.79}, 1};
                            down[] = {{0.18, 0.84}, 1};
                        };
                    };
                    class MGun {
                        condition = "mgun";
                        class AmmoBox {
                            type = "line";
                            width = 3;
                            points[] = {
                                {{0.757, 0.748}, 1},
                                {{0.757, 0.782}, 1},
                                {{0.723, 0.782}, 1},
                                {{0.723, 0.748}, 1},
                                {{0.757, 0.748}, 1},
                                {}
                            };
                        };
                        class Full {
                            condition = "ammo>=113";
                            class AmmoText {
                                type = "text";
                                source = "static";
                                text = "4";
                                scale = 1;
                                sourceScale = 1;
                                align = "center";
                                pos[] = {{0.74, 0.745}, 1};
                                right[] = {{0.785, 0.745}, 1};
                                down[] = {{0.74, 0.79}, 1};
                            };
                        };
                        class AlmostFull {
                            condition = "(ammo>=75)*(ammo<=112)";
                            class AmmoText {
                                type = "text";
                                source = "static";
                                text = "3";
                                scale = 1;
                                sourceScale = 1;
                                align = "center";
                                pos[] = {{0.74, 0.74}, 1};
                                right[] = {{0.785, 0.74}, 1};
                                down[] = {{0.74, 0.785}, 1};
                            };
                        };
                        class Half {
                            condition = "(ammo>=38)*(ammo<=74)";
                            class AmmoText {
                                type = "text";
                                source = "static";
                                text = "2";
                                scale = 1;
                                sourceScale = 1;
                                align = "center";
                                pos[] = {{0.74, 0.74}, 1};
                                right[] = {{0.785, 0.74}, 1};
                                down[] = {{0.74, 0.785}, 1};
                            };
                        };
                        class AlmostEmpty {
                            condition = "(ammo>=1)*(ammo<=37)";
                            class AmmoText {
                                type = "text";
                                source = "static";
                                text = "1";
                                scale = 1;
                                sourceScale = 1;
                                align = "center";
                                pos[] = {{0.74, 0.745}, 1};
                                right[] = {{0.785, 0.745}, 1};
                                down[] = {{0.74, 0.79}, 1};
                            };
                        };
                        class Empty {
                            condition = "ammo<=0";
                            class AmmoText {
                                type = "text";
                                source = "static";
                                text = "0";
                                scale = 1;
                                sourceScale = 1;
                                align = "center";
                                pos[] = {{0.74, 0.745}, 1};
                                right[] = {{0.785, 0.745}, 1};
                                down[] = {{0.74, 0.79}, 1};
                            };
                        };
                        class CrossCondition {
                            condition = "impactDistance*(altitudeAGL>=5)";
                            class Cross {
                                type = "line";
                                width = 3;
                                points[] = {
                                    {"ImpactPointRelative", {0, -0.025431}, 1},
                                    {"ImpactPointRelative", {0, -0.0152586}, 1},
                                    {},
                                    {"ImpactPointRelative", {0, 0.025431}, 1},
                                    {"ImpactPointRelative", {0, 0.0152586}, 1},
                                    {},
                                    {"ImpactPointRelative", {-0.025, 0}, 1},
                                    {"ImpactPointRelative", {-0.015, 0}, 1},
                                    {},
                                    {"ImpactPointRelative", {0.025, 0}, 1},
                                    {"ImpactPointRelative", {0.015, 0}, 1},
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
                                width = 4;
                                points[] = {
                                    {"ImpactPointRelative", {0, -0.0260414}, 1},
                                    {"ImpactPointRelative", {0, -0.0325517}, 1},
                                    {"MissileFlightTimeRot1", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot2", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot3", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot4", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot5", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot6", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot7", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot8", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot9", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot10", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot11", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot12", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot13", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot14", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot15", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot16", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot17", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot18", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot19", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot20", {0, 0.032}, 1, "ImpactPointRelative", 1},
                                    {"MissileFlightTimeRot20", {0, 0.0256}, 1, "ImpactPointRelative", 1}
                                };
                            };
                        };
                    };
                    class BombCrosshairGroup {
                        type = "group";
                        condition = "bomb+rocket*impactDistance";
                        class BombCrosshair {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"ImpactPoint", {0, -0.0406897}, 1},
                                {"ImpactPoint", {0.006944, -0.0400712}, 1},
                                {"ImpactPoint", {0.01368, -0.0382361}, 1},
                                {"ImpactPoint", {0.02, -0.0352372}, 1},
                                {"ImpactPoint", {0.025712, -0.0311683}, 1},
                                {"ImpactPoint", {0.03064, -0.0261553}, 1},
                                {"ImpactPoint", {0.03464, -0.0203448}, 1},
                                {"ImpactPoint", {0.037588, -0.0139159}, 1},
                                {"ImpactPoint", {0.039392, -0.00706372}, 1},
                                {"ImpactPoint", {0.04, 0}, 1},
                                {"ImpactPoint", {0.039392, 0.00706372}, 1},
                                {"ImpactPoint", {0.037588, 0.0139159}, 1},
                                {"ImpactPoint", {0.03464, 0.0203448}, 1},
                                {"ImpactPoint", {0.03064, 0.0261553}, 1},
                                {"ImpactPoint", {0.025712, 0.0311683}, 1},
                                {"ImpactPoint", {0.02, 0.0352372}, 1},
                                {"ImpactPoint", {0.01368, 0.0382361}, 1},
                                {"ImpactPoint", {0.006944, 0.0400712}, 1},
                                {"ImpactPoint", {0, 0.0406897}, 1},
                                {"ImpactPoint", {-0.006944, 0.0400712}, 1},
                                {"ImpactPoint", {-0.01368, 0.0382361}, 1},
                                {"ImpactPoint", {-0.02, 0.0352372}, 1},
                                {"ImpactPoint", {-0.025712, 0.0311683}, 1},
                                {"ImpactPoint", {-0.03064, 0.0261553}, 1},
                                {"ImpactPoint", {-0.03464, 0.0203448}, 1},
                                {"ImpactPoint", {-0.037588, 0.0139159}, 1},
                                {"ImpactPoint", {-0.039392, 0.00706372}, 1},
                                {"ImpactPoint", {-0.04, 0}, 1},
                                {"ImpactPoint", {-0.039392, -0.00706372}, 1},
                                {"ImpactPoint", {-0.037588, -0.0139159}, 1},
                                {"ImpactPoint", {-0.03464, -0.0203448}, 1},
                                {"ImpactPoint", {-0.03064, -0.0261553}, 1},
                                {"ImpactPoint", {-0.025712, -0.0311683}, 1},
                                {"ImpactPoint", {-0.02, -0.0352372}, 1},
                                {"ImpactPoint", {-0.01368, -0.0382361}, 1},
                                {"ImpactPoint", {-0.006944, -0.0400712}, 1},
                                {"ImpactPoint", {0, -0.0406897}, 1},
                                {},
                                {},
                                {"ImpactPoint", {0, 0.005}, 1},
                                {"ImpactPoint", {0.005, -0}, 1},
                                {"ImpactPoint", {0, -0.005}, 1},
                                {"ImpactPoint", {-0.005, -0}, 1},
                                {"ImpactPoint", {0, 0.005}, 1}
                            };
                        };
                    };
                    class AAMissilesGroup {
                        type = "group";
                        condition = "aamissile";
                        class PPSGroup {
                            condition = "1";
                            class GText {
                                type = "text";
                                source = "static";
                                text = "ППС";
                                align = "left";
                                scale = 1;
                                pos[] = {{0.18, 0.39}, 1};
                                right[] = {{0.23, 0.39}, 1};
                                down[] = {{0.18, 0.44}, 1};
                            };
                        };
                        class ZPSGroup: PPSGroup {
                            condition = "0";
                            class GText: GText {
                                text = "ЗПС";
                            };
                        };
                    };
                    class TargetDiamond {
                        class shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Target", 1, "Limit0109", 1, {0, -0.015}, 1},
                                {"Target", 1, "Limit0109", 1, {-0.0075, 0}, 1},
                                {"Target", 1, "Limit0109", 1, {0, 0.0125}, 1},
                                {"Target", 1, "Limit0109", 1, {0.0075, 0}, 1},
                                {"Target", 1, "Limit0109", 1, {0, -0.0125}, 1}
                            };
                        };
                    };
                    class TargetLocked {
                        condition = "TargetHeight>=1";
                        class TargetSquare {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Target", 1, "Limit0109", 1, {0, -0.0508621}, 1},
                                {"Target", 1, "Limit0109", 1, {0.05, 0}, 1},
                                {"Target", 1, "Limit0109", 1, {0, 0.0508621}, 1},
                                {"Target", 1, "Limit0109", 1, {-0.05, 0}, 1},
                                {"Target", 1, "Limit0109", 1, {0, -0.0508621}, 1}
                            };
                        };
                        class TargetSpeed0 {
                            type = "text";
                            source = "static";
                            text = 0;
                            align = "left";
                            scale = 1;
                            pos[] = {{0.31, "0.09+0.15"}, 1};
                            right[] = {{0.35, "0.09+0.15"}, 1};
                            down[] = {{0.31, 0.285}, 1};
                        };
                        class TargetSpeed: SpeedNumber0 {
                            source = "LarTargetSpeed";
                            sourceScale = 0.36;
                            pos[] = {{0.29, "0.09+0.15"}, 1};
                            right[] = {{0.33, "0.09+0.15"}, 1};
                            down[] = {{0.29, 0.285}, 1};
                        };
                        class TargetHeight0 {
                            type = "text";
                            source = "static";
                            text = 0;
                            align = "left";
                            scale = 1;
                            pos[] = {{0.82, "0.09+0.15"}, 1};
                            right[] = {{0.86, "0.09+0.15"}, 1};
                            down[] = {{0.82, 0.285}, 1};
                        };
                        class TargetHeight: AltitudeNumber0 {
                            source = "TargetHeight";
                            sourceScale = 0.1;
                            sourceLength = 1;
                            pos[] = {{0.8, "0.09+0.15"}, 1};
                            right[] = {{0.84, "0.09+0.15"}, 1};
                            down[] = {{0.8, 0.285}, 1};
                        };
                    };
                    class LAR {
                        type = "group";
                        condition = "bomb+mgun+atmissile+aamissile+rocket";
                        class Lines {
                            type = "line";
                            width = 3;
                            points[] = {
                                {{0.24, 0.375}, 1},
                                {{0.26, 0.375}, 1},
                                {{0.26, 0.695}, 1},
                                {{0.24, 0.695}, 1},
                                {},
                                {{0.24, 0.631}, 1},
                                {{0.26, 0.631}, 1},
                                {},
                                {{0.24, 0.567}, 1},
                                {{0.26, 0.567}, 1},
                                {},
                                {{0.24, 0.503}, 1},
                                {{0.26, 0.503}, 1},
                                {},
                                {{0.24, 0.439}, 1},
                                {{0.26, 0.439}, 1},
                                {},
                                {"LarTargetDist", -0.32, {0.272, 0.707}, 1},
                                {"LarTargetDist", -0.32, {0.26, 0.695}, 1},
                                {"LarTargetDist", -0.32, {0.272, 0.683}, 1},
                                {"LarTargetDist", -0.32, {0.272, 0.692}, 1},
                                {"LarTargetDist", -0.32, {0.282, 0.692}, 1},
                                {"LarTargetDist", -0.32, {0.282, 0.698}, 1},
                                {"LarTargetDist", -0.32, {0.272, 0.698}, 1},
                                {"LarTargetDist", -0.32, {0.272, 0.707}, 1}
                            };
                        };
                        class RadarSearch {
                            condition = "activeSensorsOn - missilelocked - missilelocking";
                            class Shape {
                                type = "line";
                                width = 3;
                                points[] = {
                                    {{0.725, 0.375}, 1},
                                    {{0.74, 0.375}, 1},
                                    {{0.74, 0.695}, 1},
                                    {{0.725, 0.695}, 1},
                                    {},
                                    {{0.74, 0.535}, 1},
                                    {{0.725, 0.535}, 1},
                                    {},
                                    {{0.76, 0.519}, 1},
                                    {{0.76, 0.551}, 1},
                                    {},
                                    {{0.755, 0.5222}, 1},
                                    {{0.74, 0.5222}, 1},
                                    {},
                                    {{0.74, 0.5478}, 1},
                                    {{0.755, 0.5478}, 1},
                                    {},
                                    {{0.47, 0.715}, 1},
                                    {{0.53, 0.715}, 1}
                                };
                            };
                            class RadarTopText {
                                type = "text";
                                source = "static";
                                text = "60";
                                scale = 1;
                                sourceScale = 1;
                                align = "center";
                                pos[] = {{"0.96-0.26", 0.35625}, 1};
                                right[] = {{0.735, 0.35625}, 1};
                                down[] = {{"0.96-0.26", 0.39125}, 1};
                            };
                            class RadarElevText {
                                type = "text";
                                source = "static";
                                text = "0";
                                scale = 1;
                                sourceScale = 1;
                                align = "center";
                                pos[] = {{"1.035-0.26", 0.519}, 1};
                                right[] = {{0.81, 0.519}, 1};
                                down[] = {{"1.035-0.26", 0.554}, 1};
                            };
                        };
                        class Poly {
                            type = "polygon";
                            points[] = {{{"LarAmmoMin", -0.32, {0.261, 0.695}, 1}, {"LarAmmoMin", -0.32, {0.261, 0.7}, 1}, {"LarAmmoMin", -0.32, {0.272, 0.7}, 1}, {"LarAmmoMin", -0.32, {0.272, 0.695}, 1}}, {{"LarAmmoMin", -0.32, {0.261, 0.62}, 1}, {"LarAmmoMin", -0.32, {0.261, 0.63}, 1}, {"LarAmmoMin", -0.32, {0.272, 0.63}, 1}, {"LarAmmoMin", -0.32, {0.272, 0.62}, 1}}, {{"LarAmmoMax", -0.32, {0.261, 0.785}, 1}, {"LarAmmoMax", -0.32, {0.261, 0.79}, 1}, {"LarAmmoMax", -0.32, {0.272, 0.79}, 1}, {"LarAmmoMax", -0.32, {0.272, 0.785}, 1}}};
                        };
                        class LARText1 {
                            type = "text";
                            source = "LarTop";
                            sourceScale = "0.001*1.5";
                            scale = 1;
                            pos[] = {{0.235, 0.361}, 1};
                            right[] = {{0.27, 0.361}, 1};
                            down[] = {{0.235, 0.389}, 1};
                            align = "left";
                        };
                        class LARText2: LARText1 {
                            source = "LarTop";
                            sourcePrecision = -1;
                            sourceScale = "0.0008*1.5";
                            pos[] = {{0.235, 0.425}, 1};
                            right[] = {{0.27, 0.425}, 1};
                            down[] = {{0.235, 0.453}, 1};
                        };
                        class LARText3: LARText1 {
                            source = "LarTop";
                            sourcePrecision = -1;
                            sourceScale = "0.0006*1.5";
                            pos[] = {{0.235, 0.489}, 1};
                            right[] = {{0.27, 0.489}, 1};
                            down[] = {{0.235, 0.517}, 1};
                        };
                        class LARText4: LARText1 {
                            source = "LarTop";
                            sourcePrecision = -1;
                            sourceScale = "0.0004*1.5";
                            pos[] = {{0.235, 0.553}, 1};
                            right[] = {{0.27, 0.553}, 1};
                            down[] = {{0.235, 0.581}, 1};
                        };
                        class LARText5: LARText1 {
                            source = "LarTop";
                            sourcePrecision = -1;
                            sourceScale = "0.0002*1.5";
                            pos[] = {{0.235, 0.617}, 1};
                            right[] = {{0.27, 0.617}, 1};
                            down[] = {{0.235, 0.645}, 1};
                        };
                        class LARText6: LARText1 {
                            source = "static";
                            text = 0;
                            sourcePrecision = -1;
                            sourceScale = "0.0002*1.5";
                            pos[] = {{0.235, 0.681}, 1};
                            right[] = {{0.27, 0.681}, 1};
                            down[] = {{0.235, 0.709}, 1};
                        };
                    };
                    class RadarBoxes {
                        type = "radar";
                        pos0[] = {0.5, 0.53};
                        pos10[] = {1.08, 1.12};
                        width = 4;
                        points[] = {
                            {{0, -0.0406897}, 1},
                            {{0.006944, -0.0400712}, 1},
                            {{0.01368, -0.0382361}, 1},
                            {{0.02, -0.0352372}, 1},
                            {{0.025712, -0.0311683}, 1},
                            {{0.03064, -0.0261553}, 1},
                            {{0.03464, -0.0203448}, 1},
                            {{0.037588, -0.0139159}, 1},
                            {{0.039392, -0.00706372}, 1},
                            {{0.04, 0}, 1},
                            {{0.039392, 0.00706372}, 1},
                            {{0.037588, 0.0139159}, 1},
                            {{0.03464, 0.0203448}, 1},
                            {{0.03064, 0.0261553}, 1},
                            {{0.025712, 0.0311683}, 1},
                            {{0.02, 0.0352372}, 1},
                            {{0.01368, 0.0382361}, 1},
                            {{0.006944, 0.0400712}, 1},
                            {{0, 0.0406897}, 1},
                            {{-0.006944, 0.0400712}, 1},
                            {{-0.01368, 0.0382361}, 1},
                            {{-0.02, 0.0352372}, 1},
                            {{-0.025712, 0.0311683}, 1},
                            {{-0.03064, 0.0261553}, 1},
                            {{-0.03464, 0.0203448}, 1},
                            {{-0.037588, 0.0139159}, 1},
                            {{-0.039392, 0.00706372}, 1},
                            {{-0.04, 0}, 1},
                            {{-0.039392, -0.00706372}, 1},
                            {{-0.037588, -0.0139159}, 1},
                            {{-0.03464, -0.0203448}, 1},
                            {{-0.03064, -0.0261553}, 1},
                            {{-0.025712, -0.0311683}, 1},
                            {{-0.02, -0.0352372}, 1},
                            {{-0.01368, -0.0382361}, 1},
                            {{-0.006944, -0.0400712}, 1},
                            {{0, -0.0406897}, 1},
                            {}
                        };
                    };
                };
            };
            class HUD_static {
                topLeft = "HUD_top_left";
                topRight = "HUD_top_right";
                bottomLeft = "HUD_bottom_left";
                enableParallax = 1;
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0, 1, 0, 0.1};
                font = "rhs_digital_font_rus";
                class Bones {};
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 1;
                    condition = "user3*on";
                    class Shape {
                        type = "polygon";
                        texture = "rhsafrf\addons\rhs_c_a2port_air\Su25\rhs_su25_reticle_static_ca.paa";
                        points[] = {{{{0.225, 0.415}, 1}, {{0.785, 0.415}, 1}, {{0.785, 0.915}, 1}, {{0.225, 0.915}, 1}}};
                    };
                };
            };
            class MFD_1 {
                topLeft = "MFD_1_TL";
                topRight = "MFD_1_TR";
                bottomLeft = "MFD_1_BL";
                enableParallax = 0;
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0, 0, 0, 0.1};
                font = "rhs_digital_font_var";
                class material {
                    ambient[] = {1, 1, 1, 1};
                    diffuse[] = {10, 10, 10, 1};
                    emissive[] = {400, 200, 200, 1};
                };
                class Bones {
                    class Pylon1 {
                        type = "fixed";
                        pos[] = {0.682, 0.633577};
                    };
                    class Pylon2: Pylon1 {
                        pos[] = {0.324, 0.633577};
                    };
                    class Pylon3: Pylon1 {
                        pos[] = {0.789, 0.633577};
                    };
                    class Pylon4: Pylon1 {
                        pos[] = {0.217, 0.633577};
                    };
                    class Pylon5: Pylon1 {
                        pos[] = {0.896, 0.633577};
                    };
                    class Pylon6: Pylon1 {
                        pos[] = {0.11, 0.633577};
                    };
                    class Pylon7: Pylon1 {
                        pos[] = {0.503, 0.633577};
                    };
                };
                class Draw {
                    color[] = {1, 1, 1};
                    alpha = 0.22;
                    condition = "on";
                    class Group_TV {
                        condition = "user45<=0";
                    };
                    class Group_NAV {
                        condition = "(user45 >= 1)*(user45<=1)";
                    };
                    class Group_WEAP {
                        condition = "(user45 >= 2)*(user45<=2)+1";
                        class AmmoGunText {
                            type = "text";
                            source = "static";
                            text = "ВПУ";
                            scale = 1;
                            sourceScale = 1;
                            align = "right";
                            pos[] = {{0.04, 0.15}, 1};
                            right[] = {{0.1, 0.15}, 1};
                            down[] = {{0.04, 0.21}, 1};
                        };
                        class AmmoValue {
                            type = "text";
                            source = "ammo";
                            sourceIndex = 1;
                            scale = 1;
                            sourceScale = 1;
                            align = "right";
                            pos[] = {{0.04, 0.22}, 1};
                            right[] = {{0.1, 0.22}, 1};
                            down[] = {{0.04, 0.28}, 1};
                        };
                        class CMGunText {
                            type = "text";
                            source = "static";
                            text = "ЛТЦ";
                            scale = 1;
                            sourceScale = 1;
                            align = "left";
                            pos[] = {{0.95, 0.15}, 1};
                            right[] = {{1.01, 0.15}, 1};
                            down[] = {{0.95, 0.21}, 1};
                        };
                        class CMValue {
                            type = "text";
                            source = "cmAmmo";
                            scale = 1;
                            sourceScale = 1;
                            align = "left";
                            pos[] = {{0.95, 0.22}, 1};
                            right[] = {{1.01, 0.22}, 1};
                            down[] = {{0.95, 0.28}, 1};
                        };
                        class Pylon1_empty {
                            color[] = {1, 0, 0};
                            condition = "pylonEmpty1";
                            class Shape {
                                type = "line";
                                width = 8;
                                points[] = {
                                    {"Pylon1", {-0.02, 0.0226277}, 1},
                                    {"Pylon1", {0.02, -0.0226277}, 1},
                                    {},
                                    {"Pylon1", {-0.02, -0.0226277}, 1},
                                    {"Pylon1", {0.02, 0.0226277}, 1}
                                };
                            };
                        };
                        class Pylon2_empty {
                            color[] = {1, 0, 0};
                            condition = "pylonEmpty2";
                            class Shape {
                                type = "line";
                                width = 8;
                                points[] = {
                                    {"Pylon2", {-0.02, 0.0226277}, 1},
                                    {"Pylon2", {0.02, -0.0226277}, 1},
                                    {},
                                    {"Pylon2", {-0.02, -0.0226277}, 1},
                                    {"Pylon2", {0.02, 0.0226277}, 1}
                                };
                            };
                        };
                        class Pylon3_empty {
                            color[] = {1, 0, 0};
                            condition = "pylonEmpty3";
                            class Shape {
                                type = "line";
                                width = 8;
                                points[] = {
                                    {"Pylon3", {-0.02, 0.0226277}, 1},
                                    {"Pylon3", {0.02, -0.0226277}, 1},
                                    {},
                                    {"Pylon3", {-0.02, -0.0226277}, 1},
                                    {"Pylon3", {0.02, 0.0226277}, 1}
                                };
                            };
                        };
                        class Pylon4_empty {
                            color[] = {1, 0, 0};
                            condition = "pylonEmpty4";
                            class Shape {
                                type = "line";
                                width = 8;
                                points[] = {
                                    {"Pylon4", {-0.02, 0.0226277}, 1},
                                    {"Pylon4", {0.02, -0.0226277}, 1},
                                    {},
                                    {"Pylon4", {-0.02, -0.0226277}, 1},
                                    {"Pylon4", {0.02, 0.0226277}, 1}
                                };
                            };
                        };
                        class Pylon5_empty {
                            color[] = {1, 0, 0};
                            condition = "pylonEmpty5";
                            class Shape {
                                type = "line";
                                width = 8;
                                points[] = {
                                    {"Pylon5", {-0.02, 0.0226277}, 1},
                                    {"Pylon5", {0.02, -0.0226277}, 1},
                                    {},
                                    {"Pylon5", {-0.02, -0.0226277}, 1},
                                    {"Pylon5", {0.02, 0.0226277}, 1}
                                };
                            };
                        };
                        class Pylon6_empty {
                            color[] = {1, 0, 0};
                            condition = "pylonEmpty6";
                            class Shape {
                                type = "line";
                                width = 8;
                                points[] = {
                                    {"Pylon6", {-0.02, 0.0226277}, 1},
                                    {"Pylon6", {0.02, -0.0226277}, 1},
                                    {},
                                    {"Pylon6", {-0.02, -0.0226277}, 1},
                                    {"Pylon6", {0.02, 0.0226277}, 1}
                                };
                            };
                        };
                        class Pylon7_empty {
                            color[] = {1, 0, 0};
                            condition = "pylonEmpty7";
                            class Shape {
                                type = "line";
                                width = 8;
                                points[] = {
                                    {"Pylon7", {-0.02, 0.0226277}, 1},
                                    {"Pylon7", {0.02, -0.0226277}, 1},
                                    {},
                                    {"Pylon7", {-0.02, -0.0226277}, 1},
                                    {"Pylon7", {0.02, 0.0226277}, 1}
                                };
                            };
                        };
                        class PylonName1 {
                            type = "pylonicon";
                            pos[] = {"Pylon1", {0, 0}, 1};
                            pylon = 1;
                            name = "rhs_rus_circle";
                        };
                        class PylonName2: PylonName1 {
                            pos[] = {"Pylon2", {0, 0}, 1};
                            pylon = 2;
                        };
                        class PylonName3: PylonName1 {
                            pos[] = {"Pylon3", {0, 0}, 1};
                            pylon = 3;
                        };
                        class PylonName4: PylonName1 {
                            pos[] = {"Pylon4", {0, 0}, 1};
                            pylon = 4;
                        };
                        class PylonName5: PylonName1 {
                            pos[] = {"Pylon5", {0, 0}, 1};
                            pylon = 5;
                        };
                        class PylonName6: PylonName1 {
                            pos[] = {"Pylon6", {0, 0}, 1};
                            pylon = 6;
                        };
                        class PylonName7: PylonName1 {
                            pos[] = {"Pylon7", {0, 0}, 1};
                            pylon = 7;
                        };
                    };
                };
            };
            class MFD_2 {
                topLeft = "MFD_2_TL";
                topRight = "MFD_2_TR";
                bottomLeft = "MFD_2_BL";
                enableParallax = 0;
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0, 0, 0, 0.1};
                font = "rhs_digital_font_var";
                class Bones {};
                class Draw {
                    color[] = {0, 0, 0};
                    alpha = 1;
                    condition = "on";
                    class RadioFQ_1 {
                        type = "text";
                        source = "static";
                        text = "КСБ 08.125.000.000";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.74, 0.1}, 1};
                        right[] = {{0.785, 0.1}, 1};
                        down[] = {{0.74, 0.145}, 1};
                    };
                    class RadioFQ_2 {
                        type = "text";
                        source = "static";
                        text = "КСД 08.312.522.000";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.74, 0.17}, 1};
                        right[] = {{0.785, 0.17}, 1};
                        down[] = {{0.74, 0.215}, 1};
                    };
                    class RadioFQ_3 {
                        type = "text";
                        source = "static";
                        text = "НВГ 12.541.100.000";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.74, 0.28}, 1};
                        right[] = {{0.785, 0.28}, 1};
                        down[] = {{0.74, 0.325}, 1};
                    };
                    class RadioFQ_4 {
                        type = "text";
                        source = "static";
                        text = "ИРГ 00.101.512.000";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.74, 0.35}, 1};
                        right[] = {{0.785, 0.35}, 1};
                        down[] = {{0.74, 0.395}, 1};
                    };
                    class FuelText {
                        type = "text";
                        source = "static";
                        text = "ТОПЛИВО";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.04, 0.1}, 1};
                        right[] = {{0.085, 0.1}, 1};
                        down[] = {{0.04, 0.145}, 1};
                    };
                    class FuelSource {
                        type = "text";
                        source = "fuel";
                        sourceScale = 4400;
                        sourcePrecision = 0;
                        sourceLength = 3;
                        align = "right";
                        scale = 1;
                        pos[] = {{0.04, "0.1+0.07"}, 1};
                        right[] = {{0.09, "0.1+0.07"}, 1};
                        down[] = {{0.04, 0.22}, 1};
                    };
                    class FuelText2 {
                        type = "text";
                        source = "static";
                        text = "Л";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{"0.04+0.11", 0.17}, 1};
                        right[] = {{0.195, 0.17}, 1};
                        down[] = {{"0.04+0.11", 0.215}, 1};
                    };
                    class Time {
                        type = "text";
                        source = "time";
                        text = "%X";
                        sourceScale = 1;
                        align = "right";
                        scale = 1;
                        pos[] = {{"0.04+0.27", 0.1}, 1};
                        right[] = {{0.355, 0.1}, 1};
                        down[] = {{"0.04+0.27", 0.145}, 1};
                    };
                    class Date: Time {
                        text = "%x";
                        pos[] = {{"0.04+0.27", "0.1+0.07"}, 1};
                        right[] = {{0.355, "0.1+0.07"}, 1};
                        down[] = {{"0.04+0.27", 0.215}, 1};
                    };
                    class NavigationText {
                        type = "text";
                        source = "static";
                        text = "НАВИГАЦИЯ";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.04, 0.62}, 1};
                        right[] = {{0.1, 0.62}, 1};
                        down[] = {{0.04, 0.68}, 1};
                    };
                    class PositionText {
                        type = "text";
                        source = "static";
                        text = "ПОЗИЦИЯ:";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.04, 0.69}, 1};
                        right[] = {{0.09, 0.69}, 1};
                        down[] = {{0.04, 0.74}, 1};
                    };
                    class CordX {
                        type = "text";
                        source = "coordinateX";
                        sourceScale = 0.01;
                        sourceLength = 3;
                        sourceOffset = -0.5;
                        align = "right";
                        scale = 1;
                        pos[] = {{"0.04+0.22", "0.62+0.07"}, 1};
                        right[] = {{0.31, "0.62+0.07"}, 1};
                        down[] = {{"0.04+0.22", 0.74}, 1};
                    };
                    class CordY: CordX {
                        source = "coordinateY";
                        pos[] = {{"0.04+0.22+0.07", "0.62+0.07"}, 1};
                        right[] = {{0.38, "0.62+0.07"}, 1};
                        down[] = {{"0.04+0.22+0.07", 0.74}, 1};
                    };
                    class ATLText {
                        type = "text";
                        source = "static";
                        text = "ВЫСОТА:";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{"0.04+0.03", 0.76}, 1};
                        right[] = {{0.12, 0.76}, 1};
                        down[] = {{"0.04+0.03", 0.81}, 1};
                    };
                    class ATLValue {
                        type = "text";
                        source = "altitudeAGL";
                        sourceScale = 1;
                        sourceLength = 4;
                        sourceOffset = -2.1;
                        align = "right";
                        scale = 1;
                        pos[] = {{"0.04+0.22", "0.62+0.14"}, 1};
                        right[] = {{0.31, "0.62+0.14"}, 1};
                        down[] = {{"0.04+0.22", 0.81}, 1};
                    };
                    class ATLText2 {
                        type = "text";
                        source = "static";
                        text = "м";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{"0.04+0.32", 0.77}, 1};
                        right[] = {{0.41, 0.77}, 1};
                        down[] = {{"0.04+0.32", 0.805}, 1};
                    };
                    class DirectionText {
                        type = "text";
                        source = "static";
                        text = "КУРС:";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{"0.04+0.075", 0.83}, 1};
                        right[] = {{0.165, 0.83}, 1};
                        down[] = {{"0.04+0.075", 0.88}, 1};
                    };
                    class DirectionValue {
                        type = "text";
                        source = "heading";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{"0.04+0.22", 0.83}, 1};
                        right[] = {{0.31, 0.83}, 1};
                        down[] = {{"0.04+0.22", 0.88}, 1};
                    };
                    class Waypoints {
                        condition = "wpvalid";
                        class WPIndexText {
                            type = "text";
                            source = "static";
                            text = "ИНДЕКС ППМ:";
                            scale = 1;
                            sourceScale = 1;
                            align = "left";
                            pos[] = {{"0.84-0.04", 0.69}, 1};
                            right[] = {{0.85, 0.69}, 1};
                            down[] = {{"0.84-0.04", 0.74}, 1};
                        };
                        class WPIndexValue {
                            type = "text";
                            source = "wpindex";
                            scale = 1;
                            sourceScale = 1;
                            align = "right";
                            pos[] = {{"0.87-0.04", 0.69}, 1};
                            right[] = {{0.88, 0.69}, 1};
                            down[] = {{"0.87-0.04", 0.74}, 1};
                        };
                        class WPDistText {
                            type = "text";
                            source = "static";
                            text = "РАССТОЯНИЕ:";
                            scale = 1;
                            sourceScale = 1;
                            align = "left";
                            pos[] = {{"0.84-0.04", 0.76}, 1};
                            right[] = {{0.85, 0.76}, 1};
                            down[] = {{"0.84-0.04", 0.81}, 1};
                        };
                        class WPDistText2 {
                            type = "text";
                            source = "static";
                            text = "км";
                            scale = 1;
                            sourceScale = 1;
                            align = "right";
                            pos[] = {{0.94, 0.77}, 1};
                            right[] = {{0.99, 0.77}, 1};
                            down[] = {{0.94, 0.805}, 1};
                        };
                        class WPDistValue {
                            type = "text";
                            source = "WPDist";
                            sourceScale = 0.001;
                            sourceLength = 1;
                            sourcePrecision = 1;
                            align = "right";
                            scale = 1;
                            pos[] = {{"0.87-0.04", "0.62+0.07*2"}, 1};
                            right[] = {{0.88, "0.62+0.07*2"}, 1};
                            down[] = {{"0.87-0.04", 0.81}, 1};
                        };
                        class Waypoints {
                            condition = "user40";
                            class WPHeadingText {
                                type = "text";
                                source = "static";
                                text = "КУРС ДО ППМ:";
                                scale = 1;
                                sourceScale = 1;
                                align = "left";
                                pos[] = {{0.84, 0.83}, 1};
                                right[] = {{0.89, 0.83}, 1};
                                down[] = {{0.84, 0.88}, 1};
                            };
                            class WPHeadingValue {
                                type = "text";
                                source = "user";
                                sourceIndex = 40;
                                scale = 1;
                                sourceScale = 1;
                                align = "right";
                                pos[] = {{0.87, 0.83}, 1};
                                right[] = {{0.92, 0.83}, 1};
                                down[] = {{0.87, 0.88}, 1};
                            };
                        };
                    };
                    class NoWaypoints {
                        condition = "1- wpvalid";
                        class PrevText {
                            type = "text";
                            source = "static";
                            text = "ВЫБЕРИ МАРШРУТ";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{0.76, 0.73}, 1};
                            right[] = {{0.83, 0.73}, 1};
                            down[] = {{0.76, 0.8}, 1};
                        };
                    };
                    class PrevText {
                        type = "text";
                        source = "static";
                        text = "ПОВОРОТ";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.02, 0.94}, 1};
                        right[] = {{0.07, 0.94}, 1};
                        down[] = {{0.02, 0.99}, 1};
                    };
                    class MinusText {
                        type = "text";
                        source = "static";
                        text = "-";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.69, 0.94}, 1};
                        right[] = {{0.76, 0.94}, 1};
                        down[] = {{0.69, 1.01}, 1};
                    };
                    class PlusText {
                        type = "text";
                        source = "static";
                        text = "+";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.9, 0.94}, 1};
                        right[] = {{0.97, 0.94}, 1};
                        down[] = {{0.9, 1.01}, 1};
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
                    condition = "user2";
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
                    class InvalidLock {
                        condition = "abs(cameraHeadingDiff) > 70 - missileLocked - missileLocking";
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
                };
            };
            class CM_Counter {
                topLeft = "MFD_CM_TL";
                topRight = "MFD_CM_TR";
                bottomLeft = "MFD_CM_BL";
                enableParallax = 0;
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0, 1, 0, 0.1};
                class Bones {};
                class Draw {
                    color[] = {1, 1, 1};
                    alpha = 0.06;
                    class CMcount {
                        type = "text";
                        source = "cmammo";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.5, 0.2}, 1};
                        right[] = {{0.8, 0.2}, 1};
                        down[] = {{0.5, 0.7}, 1};
                    };
                };
            };
            class EKRAN {
                topLeft = "MFD_Ekran_TL";
                topRight = "MFD_Ekran_TR";
                bottomLeft = "MFD_Ekran_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0, 1, 0, 0.1};
                font = "rhs_digital_font_var";
                class Bones {};
                class Draw {
                    color[] = {0.98, 0.63, 0};
                    alpha = 0.66;
                    condition = "gmeter>=9";
                    class CMcount {
                        type = "text";
                        source = "static";
                        text = "Вибрация";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.5, 0.2}, 1};
                        right[] = {{0.7, 0.2}, 1};
                        down[] = {{0.5, 0.4}, 1};
                    };
                    class WarText2 {
                        type = "text";
                        source = "static";
                        text = "двиг.";
                        scale = 1;
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.5, 0.6}, 1};
                        right[] = {{0.7, 0.6}, 1};
                        down[] = {{0.5, 0.8}, 1};
                    };
                };
            };
        };
    };
    class rhs_mig29s_vvs: rhs_mig29s_base {
        author = "$STR_RHS_AUTHOR_FULL";
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_mig29s_vvs.paa";
        scope = 2;
        side = 0;
        crew = "rhs_pilot";
        typicalCargo[] = {"rhs_pilot"};
        faction = "rhs_faction_vvs";
        hiddenselectionstextures[] = {"rhsafrf\addons\rhs_mig29\data\rhs_mig29_01_lgray_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_02_lgray_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_03_lgray_co.paa"};
        textureList[] = {"LightGray", 1};
        rhs_decalParameters[] = {"['Number',[cRHSAIRMIG29NumberPlaces,cRHSAIRMIG29TailTopNumberPlaces],['AviaRed','AviaWhite']]", "['Label', cRHSAIRMIG29StarPlaces, 'Aviation', 2]", "['Label', cRHSAIRMIG29TailPlaces, 'Mig29TailSign', 2]"};
    };
    class rhs_mig29s_vvsc: rhs_mig29s_vvs {
        author = "$STR_RHS_AUTHOR_FULL";
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_mig29s_vvsc.paa";
        scope = 2;
        faction = "rhs_faction_vvs_c";
        textureList[] = {
            "Green_camo",
            1,
            "Green_camo2",
            1,
            "Green_camo3",
            0.2,
            "Green_camo4",
            0.2,
            "Green_camo5",
            0.2,
            "Green_camo6",
            0.2,
            "Green_camo7",
            0.5,
            "Green_camo_kubinka",
            0.2
        };
        rhs_decalParameters[] = {
            "['Number',[cRHSAIRMIG29NumberPlaces,cRHSAIRMIG29TailNumberPlaces, cRHSAIRMIG29TailTopNumberPlaces],[['AviaWhite','AviaRed','AviaBlue','AviaOrange','AviaWhiteShadow'],['AviaWhite','AviaYellow','Empty'],['AviaWhite','Empty']]]",
            "['Label', cRHSAIRMIG29StarPlaces, 'Aviation', 2]",
            "['Label', cRHSAIRMIG29TailPlaces, 'Mig29TailSign', 3]",
            "['Label', cRHSAIRMIG29NosePlaces, 'Mig29NoseArt', 1]"
        };
    };
    class rhs_mig29s_vmf: rhs_mig29s_vvs {
        author = "$STR_RHS_AUTHOR_FULL";
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_mig29s_vmf.paa";
        scope = 2;
        faction = "rhs_faction_vmf";
        textureList[] = {"Standard", 1};
        rhs_decalParameters[] = {
            "['Number',cRHSAIRMIG29NumberPlaces,'AviaBlue']",
            "['Label', cRHSAIRMIG29StarPlaces, 'Aviation', 2]",
            "['Label', cRHSAIRMIG29TailPlaces, 'Mig29TailSign', 1]",
            "['Label', cRHSAIRMIG29NosePlaces, 'Mig29NoseArt', 2]"
        };
    };
    class rhs_mig29sm_vvs: rhs_mig29sm_base {
        author = "$STR_RHS_AUTHOR_FULL";
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_mig29s_vvs.paa";
        scope = 2;
        side = 0;
        crew = "rhs_pilot";
        typicalCargo[] = {"rhs_pilot"};
        faction = "rhs_faction_vvs";
        hiddenselectionstextures[] = {"rhsafrf\addons\rhs_mig29\data\rhs_mig29_01_lgray_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_02_lgray_co.paa", "rhsafrf\addons\rhs_mig29\data\rhs_mig29_03_lgray_co.paa"};
        textureList[] = {"LightGray", 1};
        rhs_decalParameters[] = {"['Number',[cRHSAIRMIG29NumberPlaces,cRHSAIRMIG29TailTopNumberPlaces],['AviaRed','AviaWhite']]", "['Label', cRHSAIRMIG29StarPlaces, 'Aviation', 2]", "['Label', cRHSAIRMIG29TailPlaces, 'Mig29TailSign', 2]"};
    };
    class rhs_mig29sm_vvsc: rhs_mig29sm_vvs {
        author = "$STR_RHS_AUTHOR_FULL";
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_mig29s_vvsc.paa";
        scope = 2;
        faction = "rhs_faction_vvs_c";
        textureList[] = {
            "Green_camo",
            1,
            "Green_camo2",
            1,
            "Green_camo3",
            0.2,
            "Green_camo4",
            0.2,
            "Green_camo5",
            0.2,
            "Green_camo6",
            0.2,
            "Green_camo7",
            0.5,
            "Green_camo_kubinka",
            0.2
        };
        rhs_decalParameters[] = {
            "['Number',[cRHSAIRMIG29NumberPlaces,cRHSAIRMIG29TailNumberPlaces, cRHSAIRMIG29TailTopNumberPlaces],[['AviaWhite','AviaRed','AviaBlue','AviaOrange','AviaWhiteShadow'],['AviaWhite','AviaYellow','Empty'],['AviaWhite','Empty']]]",
            "['Label', cRHSAIRMIG29StarPlaces, 'Aviation', 2]",
            "['Label', cRHSAIRMIG29TailPlaces, 'Mig29TailSign', 3]",
            "['Label', cRHSAIRMIG29NosePlaces, 'Mig29NoseArt', 1]"
        };
    };
    class rhs_mig29sm_vmf: rhs_mig29sm_vvs {
        author = "$STR_RHS_AUTHOR_FULL";
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_mig29s_vmf.paa";
        scope = 2;
        faction = "rhs_faction_vmf";
        textureList[] = {"Standard", 1};
        rhs_decalParameters[] = {
            "['Number',cRHSAIRMIG29NumberPlaces,'AviaBlue']",
            "['Label', cRHSAIRMIG29StarPlaces, 'Aviation', 2]",
            "['Label', cRHSAIRMIG29TailPlaces, 'Mig29TailSign', 1]",
            "['Label', cRHSAIRMIG29NosePlaces, 'Mig29NoseArt', 2]"
        };
    };
    class PlaneWreck;
    class rhs_mig29sWreck: PlaneWreck {
        displayName = "MiG-29S Wreck";
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_mig29sWreck.paa";
        scope = 2;
        model = "\rhsafrf\addons\rhs_mig29\mig29s_Wreck.p3d";
        typicalCargo[] = {};
        irTarget = 0;
        transportAmmo = 0;
        transportRepair = 0;
        transportFuel = 0;
        transportSoldier = 1;
    };
    class rhs_t50_canopy;
    class rhs_mig29s_canopy: rhs_t50_canopy {
        scope = 1;
        displayName = "MiG-29S Canopy";
        model = "\rhsafrf\addons\rhs_mig29\mig29s_canopy";
    };
    class Thing;
    class rhs_cockpitMap_waypoints: Thing {
        scope = 1;
        scopeCurator = 0;
        displayName = "Cockpit Map";
        model = "\rhsafrf\addons\rhs_mig29\rhs_cockpitMap";
        class AnimationSources {
            class wp1 {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class wp2: wp1 {};
            class wp3: wp1 {};
            class wp4: wp1 {};
            class wp5: wp1 {};
            class wp6: wp1 {};
            class wp7: wp1 {};
            class wp8: wp1 {};
            class wp9: wp1 {};
            class wp10: wp1 {};
            class wp1_rot: wp1 {};
            class wp2_rot: wp1 {};
            class wp3_rot: wp1 {};
            class wp4_rot: wp1 {};
            class wp5_rot: wp1 {};
            class wp6_rot: wp1 {};
            class wp7_rot: wp1 {};
            class wp8_rot: wp1 {};
            class wp9_rot: wp1 {};
            class wp10_rot: wp1 {};
        };
    };
};
