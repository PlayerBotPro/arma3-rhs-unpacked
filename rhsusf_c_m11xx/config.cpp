class CfgPatches {
    class rhsusf_c_m11xx {
        units[] = {
            "rhsusf_m1151_usarmy_d",
            "rhsusf_m1151_usarmy_wd",
            "rhsusf_m1165_usarmy_d",
            "rhsusf_m1165_usarmy_wd",
            "rhsusf_m1152_usarmy_d",
            "rhsusf_m1152_usarmy_wd",
            "rhsusf_m1152_rsv_usarmy_d",
            "rhsusf_m1152_rsv_usarmy_wd",
            "rhsusf_m1152_sicps_usarmy_d",
            "rhsusf_m1152_sicps_usarmy_wd",
            "rhsusf_m1151_m2_v1_usarmy_d",
            "rhsusf_m1151_m2_v1_usarmy_wd",
            "rhsusf_m1151_m2_v2_usarmy_d",
            "rhsusf_m1151_m2_v2_usarmy_wd",
            "rhsusf_m1151_m240_v1_usarmy_d",
            "rhsusf_m1151_m240_v1_usarmy_wd",
            "rhsusf_m1151_m240_v2_usarmy_d",
            "rhsusf_m1151_m240_v2_usarmy_wd",
            "rhsusf_m1151_mk19_v1_usarmy_d",
            "rhsusf_m1151_mk19_v1_usarmy_wd",
            "rhsusf_m1151_mk19_v2_usarmy_d",
            "rhsusf_m1151_mk19_v2_usarmy_wd",
            "rhsusf_m1151_m2_lras3_v1_usarmy_d",
            "rhsusf_m1151_m2_lras3_v1_usarmy_wd",
            "rhsusf_m1151_m2crows_usarmy_d",
            "rhsusf_m1151_m2crows_usarmy_wd",
            "rhsusf_m1151_mk19crows_usarmy_d",
            "rhsusf_m1151_mk19crows_usarmy_wd",
            "rhsusf_m1151_usmc_d",
            "rhsusf_m1151_usmc_wd",
            "rhsusf_m1165_usmc_d",
            "rhsusf_m1165_usmc_wd",
            "rhsusf_m1152_usmc_d",
            "rhsusf_m1152_usmc_wd",
            "rhsusf_m1152_rsv_usmc_d",
            "rhsusf_m1152_rsv_usmc_wd",
            "rhsusf_m1151_m2_v3_usmc_d",
            "rhsusf_m1151_m2_v3_usmc_wd",
            "rhsusf_m1151_m240_v3_usmc_d",
            "rhsusf_m1151_m240_v3_usmc_wd",
            "rhsusf_m1151_mk19_v3_usmc_d",
            "rhsusf_m1151_mk19_v3_usmc_wd",
            "rhsusf_m1151_m2crows_usmc_d",
            "rhsusf_m1151_m2crows_usmc_wd",
            "rhsusf_m1151_mk19crows_usmc_d",
            "rhsusf_m1151_mk19crows_usmc_wd",
            "rhsusf_m1165_asv_m240_usaf_d",
            "rhsusf_m1165_asv_m240_usaf_wd",
            "rhsusf_m1165a1_gmv_m2_m240_socom_d",
            "rhsusf_m1165a1_gmv_m134d_m240_socom_d",
            "rhsusf_m1165a1_gmv_mk19_m240_socom_d"
        };
        weapons[] = {};
        requiredVersion = 1.38;
        requiredAddons[] = {"rhsusf_main", "rhsusf_c_troops"};
        name = "M1151/M1152/M1165";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class DefaultEventhandlers;
class RCWSOptics;
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class m11xx_init {
                file = "rhsusf\addons\rhsusf_c_m11xx\scripts\rhs_m11xx_init.sqf";
            };
            class m11xx_handleWeaponVG {
                file = "rhsusf\addons\rhsusf_c_m11xx\scripts\rhs_m11xx_handleWeaponVG.sqf";
            };
            class m1165_init {
                file = "rhsusf\addons\rhsusf_c_m11xx\scripts\rhs_m1165_init.sqf";
            };
            class m1165_turret {
                file = "rhsusf\addons\rhsusf_c_m11xx\scripts\rhs_m1165_turret.sqf";
            };
        };
    };
};
class CfgMovesBasic {
    class DefaultDie;
    class BlendAnims;
    class ManActions {
        RHS_M11XX_CoDriver = "RHS_M11XX_CoDriver";
        RHS_M11XX_CROWS_Gunner = "RHS_M11XX_CROWS_Gunner";
        RHS_M11XX_LRAS_Gunner1_in = "RHS_M11XX_LRAS_Gunner1_in";
        RHS_M11XX_LRAS_Gunner1_out = "RHS_M11XX_LRAS_Gunner1_out";
        RHS_M11XX_LRAS_Gunner2 = "RHS_M11XX_LRAS_Gunner2";
        RHS_M11XX_LRAS_Gunner3 = "RHS_M11XX_LRAS_Gunner3";
        RHS_M11XX_PKM_Gunner = "RHS_M11XX_PKM_Gunner";
        RHS_M11XX_M134_Gunner = "RHS_M11XX_M134_Gunner";
        RHS_GMV_Cargo_lf = "RHS_GMV_Cargo_lf";
        RHS_GMV_Cargo_lb = "RHS_GMV_Cargo_lb";
        RHS_GMV_Cargo_rf = "RHS_GMV_Cargo_rf";
        RHS_GMV_Cargo_rb = "RHS_GMV_Cargo_rb";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class RHS_M11XX_CoDriver: Crew {
            file = "\rhsusf\addons\rhsusf_c_M11XX\anims\rhs_M11XX_CoDriver";
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo", 0.1};
            speed = 10000000000;
        };
        class RHS_M11XX_CROWS_Gunner: Crew {
            file = "\rhsusf\addons\rhsusf_c_M11XX\anims\rhs_M11XX_CROWS_Gunner";
            interpolateTo[] = {"RHS_HMMWV_KIA_Cargo", 0.1};
        };
        class RHS_M11XX_LRAS_Gunner1_in: Crew {
            file = "\rhsusf\addons\rhsusf_c_M11XX\anims\rhs_M11XX_LRAS_Gunner1_in";
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
        class RHS_M11XX_LRAS_Gunner1_out: RHS_M11XX_LRAS_Gunner1_in {
            file = "\rhsusf\addons\rhsusf_c_M11XX\anims\rhs_M11XX_LRAS_Gunner1_out";
        };
        class RHS_M11XX_LRAS_Gunner2: Crew {
            file = "\rhsusf\addons\rhsusf_c_M11XX\anims\rhs_M11XX_LRAS_Gunner2";
            interpolateTo[] = {"RHS_HMMWV_KIA_Gunner", 1};
            speed = 10000000000;
            boundingSphere = 2.5;
        };
        class RHS_M11XX_LRAS_Gunner3: Crew {
            file = "\rhsusf\addons\rhsusf_c_M11XX\anims\rhs_M11XX_LRAS_Gunner3";
            interpolateTo[] = {"RHS_HMMWV_KIA_Gunner", 1};
            speed = 10000000000;
            boundingSphere = 2.5;
        };
        class RHS_M11XX_PKM_Gunner: Crew {
            file = "\rhsusf\addons\rhsusf_c_M11XX\anims\rhs_M11XX_PKM_Gunner";
            interpolateTo[] = {"RHS_HMMWV_KIA_Gunner", 1};
            speed = 10000000000;
            boundingSphere = 2.5;
        };
        class RHS_M11XX_M134_Gunner: Crew {
            file = "\rhsusf\addons\rhsusf_c_M11XX\anims\rhs_M11XX_M134_Gunner";
            interpolateTo[] = {"RHS_HMMWV_KIA_Gunner", 1};
            speed = 10000000000;
            boundingSphere = 2.5;
        };
        class RHS_GMV_Cargo_lf: Crew {
            file = "\rhsusf\addons\rhsusf_c_M11XX\anims\rhs_gmv_cargo_lf";
            interpolateTo[] = {"RHS_HMMWV_KIA_Gunner", 1};
            speed = 10000000000;
            boundingSphere = 2.5;
        };
        class RHS_GMV_Cargo_lb: RHS_GMV_Cargo_lf {
            file = "\rhsusf\addons\rhsusf_c_M11XX\anims\rhs_gmv_cargo_lb";
        };
        class RHS_GMV_Cargo_rf: RHS_GMV_Cargo_lf {
            file = "\rhsusf\addons\rhsusf_c_M11XX\anims\rhs_gmv_cargo_rf";
        };
        class RHS_GMV_Cargo_rb: RHS_GMV_Cargo_lf {
            file = "\rhsusf\addons\rhsusf_c_M11XX\anims\rhs_gmv_cargo_rb";
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
            class HitFuel;
            class HitEngine;
            class HitBody;
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
        };
        class ViewOptics;
        class EventHandlers;
    };
    class MRAP_01_base_F: Car_F {
        class EventHandlers;
        class Components;
    };
    class rhsusf_m1151_base: MRAP_01_base_F {
        dlc = "RHS_USAF";
        category = "Car";
        side = 1;
        insideSoundCoef = 0.4;
        displayName = "$STR_RHS_M1151_NAME";
        unitInfoType = "RHS_RscUnitInfoMATV";
        weapons[] = {"TruckHorn2", "rhsusf_weap_duke"};
        magazines[] = {"rhsusf_mag_duke"};
        model = "\rhsusf\addons\rhsusf_m11xx\rhsusf_m1151";
        picture = "\rhsusf\addons\rhsusf_m11xx\pictures\rhs_m1151_unarmed_pic_ca.paa";
        Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m1025.paa";
        mapSize = 5.5;
        transportMaxBackpacks = 25;
        destrType = "DestructDefault";
        crewExplosionProtection = 1;
        camShakeCoef = 0.3;
        dustFrontLeftPos = "wheel_1_1_bound";
        dustFrontRightPos = "wheel_2_1_bound";
        dustBackLeftPos = "wheel_1_2_bound";
        dustBackRightPos = "wheel_2_2_bound";
        tf_hasLRradio_api = 1;
        selectionBrakeLights = "light_brake";
        selectionBackLights = "light_drive";
        driverAction = "RHS_HMMWV_Driver";
        driverInAction = "RHS_HMMWV_Driver";
        driverLeftHandAnimName = "drivewheel";
        driverRightHandAnimName = "drivewheel";
        cargoAction[] = {"RHS_HMMWV_Cargo", "RHS_HMMWV_Cargo", "RHS_HMMWV_Cargo"};
        cargoProxyIndexes[] = {3, 2};
        getInProxyOrder[] = {3, 2};
        memoryPointsGetInCargo[] = {"pos cargo", "pos cargo2"};
        memoryPointsGetInCargoDir[] = {"pos cargo dir", "pos cargo2 dir"};
        getInAction = "GetInLow";
        getOutAction = "GetOutLow";
        driverDoor = "Door_LF";
        cargoDoors[] = {"Door_LB", "Door_RB"};
        viewDriverInExternal = 1;
        forceHideDriver = 1;
        extCameraPosition[] = {0.5, 2, -10};
        rhs_duke_type = "rhsusf_duke";
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
        defaultUserMFDvalues[] = {1000, 13504, 0};
        class MFD {
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
                    ambient[] = {33, 33, 33, 1};
                    diffuse[] = {31, 31, 31, 1};
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
            class MFD_GPS {
                topLeft = "MFD_GPS_TL";
                topRight = "MFD_GPS_TR";
                bottomLeft = "MFD_GPS_BL";
                borderLeft = 0.01;
                borderRight = 0.01;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0.84, 0.86, 0.84};
                alpha = 1;
                enableParallax = 0;
                font = "rhsusf_digital_font_usa";
                class material {
                    ambient[] = {16, 16, 16, 1};
                    diffuse[] = {10, 10, 10, 1};
                    emissive[] = {2000, 4000, 2000, 1};
                };
                class Bones {};
                class Draw {
                    condition = "on";
                    color[] = {0, 0, 0, 1};
                    alpha = 0.8;
                    class PolygonDraw {
                        color[] = {0.0705882, 0.0862745, 0.0235294};
                        alpha = 1;
                        class Polygon2 {
                            type = "polygon";
                            points[] = {};
                        };
                        class Polygon {
                            type = "polygon";
                            texture = "\rhsusf\addons\rhsusf_matv\data\rhs_dagr_background_ca.paa";
                            points[] = {{{{0, -0.23}, 1}, {{1, -0.23}, 1}, {{1, 1.12}, 1}, {{0, 1.12}, 1}}};
                        };
                    };
                    class GoToWP_Text {
                        type = "text";
                        source = "static";
                        text = "GOTO WP";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.03, 0.85}, 1};
                        right[] = {{0.13, 0.85}, 1};
                        down[] = {{0.03, 0.97}, 1};
                    };
                    class WPList_Text {
                        type = "text";
                        source = "static";
                        text = "WP List";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.38, 0.85}, 1};
                        right[] = {{0.48, 0.85}, 1};
                        down[] = {{0.38, 0.97}, 1};
                    };
                    class Back_Text {
                        type = "text";
                        source = "static";
                        text = "Back";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.74, 0.85}, 1};
                        right[] = {{0.84, 0.85}, 1};
                        down[] = {{0.74, 0.97}, 1};
                    };
                    class Track_Text {
                        type = "text";
                        source = "static";
                        text = "TRACK";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.04, 0.65}, 1};
                        right[] = {{0.11, 0.65}, 1};
                        down[] = {{0.04, 0.74}, 1};
                    };
                    class Mag_Text {
                        type = "text";
                        source = "static";
                        text = "MAG";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.29, 0.65}, 1};
                        right[] = {{0.36, 0.65}, 1};
                        down[] = {{0.29, 0.74}, 1};
                    };
                    class o_Text {
                        type = "text";
                        source = "static";
                        text = "o";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.31, 0.69}, 1};
                        right[] = {{0.38, 0.69}, 1};
                        down[] = {{0.31, 0.78}, 1};
                    };
                    class Track_Value {
                        type = "text";
                        source = "heading";
                        sourceIndex = 2;
                        sourceScale = 1;
                        sourceLength = 1;
                        sourcePrecision = 1;
                        scale = 1;
                        align = "left";
                        refreshRate = 0.3;
                        pos[] = {{0.3, 0.69}, 1};
                        right[] = {{0.43, 0.69}, 1};
                        down[] = {{0.3, 0.86}, 1};
                    };
                    class Time_Value {
                        type = "text";
                        source = "time";
                        text = "%X";
                        sourceScale = 1;
                        sourceLength = 1;
                        sourcePrecision = 1;
                        scale = 1;
                        align = "left";
                        refreshRate = 0.08;
                        pos[] = {{0.7, 0.65}, 1};
                        right[] = {{0.8, 0.65}, 1};
                        down[] = {{0.7, 0.78}, 1};
                    };
                    class TimeText {
                        type = "text";
                        source = "static";
                        text = "Z";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.71, 0.65}, 1};
                        right[] = {{0.81, 0.65}, 1};
                        down[] = {{0.71, 0.78}, 1};
                    };
                    class Date_Day_Value {
                        type = "text";
                        source = "time";
                        text = "%d";
                        sourceScale = 1;
                        sourceLength = 1;
                        sourcePrecision = 1;
                        scale = 1;
                        align = "left";
                        refreshRate = 0.08;
                        pos[] = {{0.5, 0.73}, 1};
                        right[] = {{0.6, 0.73}, 1};
                        down[] = {{0.5, 0.86}, 1};
                    };
                    class Date_Month_Value {
                        type = "text";
                        source = "time";
                        text = "%b";
                        sourceScale = 1;
                        sourceLength = 1;
                        sourcePrecision = 1;
                        scale = 1;
                        align = "left";
                        refreshRate = 0.08;
                        pos[] = {{0.65, 0.73}, 1};
                        right[] = {{0.75, 0.73}, 1};
                        down[] = {{0.65, 0.86}, 1};
                    };
                    class Date_Year_Value {
                        type = "text";
                        source = "time";
                        text = "%y";
                        sourceScale = 1;
                        sourceLength = 1;
                        sourcePrecision = 1;
                        scale = 1;
                        align = "left";
                        refreshRate = 0.08;
                        pos[] = {{0.77, 0.73}, 1};
                        right[] = {{0.87, 0.73}, 1};
                        down[] = {{0.77, 0.86}, 1};
                    };
                    class Date1_Text {
                        type = "text";
                        source = "static";
                        text = "-";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.51, 0.73}, 1};
                        right[] = {{0.61, 0.73}, 1};
                        down[] = {{0.51, 0.86}, 1};
                    };
                    class Date2_Text {
                        type = "text";
                        source = "static";
                        text = "-";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.66, 0.73}, 1};
                        right[] = {{0.76, 0.73}, 1};
                        down[] = {{0.66, 0.86}, 1};
                    };
                    class Elevation_Text {
                        type = "text";
                        source = "static";
                        text = "ELEVATION";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.4, 0.43}, 1};
                        right[] = {{0.47, 0.43}, 1};
                        down[] = {{0.4, 0.52}, 1};
                    };
                    class Elevation2_Text {
                        type = "text";
                        source = "static";
                        text = "MSL";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.71, 0.43}, 1};
                        right[] = {{0.78, 0.43}, 1};
                        down[] = {{0.71, 0.52}, 1};
                    };
                    class Elevation_Value {
                        type = "text";
                        source = "altitudeASL";
                        sourceScale = 1;
                        sourceLength = 5;
                        scale = 1;
                        align = "left";
                        refreshRate = 0.8;
                        pos[] = {{0.73, 0.48}, 1};
                        right[] = {{0.855, 0.48}, 1};
                        down[] = {{0.73, 0.66}, 1};
                    };
                    class Elevation3_Text {
                        type = "text";
                        source = "static";
                        text = "+";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.42, 0.48}, 1};
                        right[] = {{0.545, 0.48}, 1};
                        down[] = {{0.42, 0.66}, 1};
                    };
                    class Elevation4_Text {
                        type = "text";
                        source = "static";
                        text = "m";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.74, 0.5}, 1};
                        right[] = {{0.84, 0.5}, 1};
                        down[] = {{0.74, 0.65}, 1};
                    };
                    class Speed_Text {
                        type = "text";
                        source = "static";
                        text = "SPEED";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.04, 0.43}, 1};
                        right[] = {{0.11, 0.43}, 1};
                        down[] = {{0.04, 0.52}, 1};
                    };
                    class Speed_Value {
                        type = "text";
                        source = "speed";
                        sourceScale = 3.6;
                        sourceLength = 1;
                        scale = 1;
                        align = "left";
                        refreshRate = 0.3;
                        pos[] = {{0.2, 0.48}, 1};
                        right[] = {{0.325, 0.48}, 1};
                        down[] = {{0.2, 0.66}, 1};
                    };
                    class Speed2_Text {
                        type = "text";
                        source = "static";
                        text = "kph";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.21, 0.5}, 1};
                        right[] = {{0.31, 0.5}, 1};
                        down[] = {{0.21, 0.65}, 1};
                    };
                    class MGRS_Text {
                        type = "text";
                        source = "static";
                        text = "MGRS-Arma";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.04, 0.08}, 1};
                        right[] = {{0.13, 0.08}, 1};
                        down[] = {{0.04, 0.2}, 1};
                    };
                    class CordX {
                        type = "text";
                        source = "coordinateX";
                        sourceScale = 0.01;
                        sourceLength = 3;
                        sourceOffset = -0.5;
                        align = "right";
                        scale = 1;
                        pos[] = {{0.09, 0.15}, 1};
                        right[] = {{0.215, 0.15}, 1};
                        down[] = {{0.09, 0.33}, 1};
                    };
                    class CordY: CordX {
                        source = "coordinateY";
                        pos[] = {{0.26, 0.15}, 1};
                        right[] = {{0.385, 0.15}, 1};
                        down[] = {{0.26, 0.33}, 1};
                    };
                    class wp_Text {
                        type = "text";
                        source = "static";
                        text = "WP";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.71, 0.08}, 1};
                        right[] = {{0.8, 0.08}, 1};
                        down[] = {{0.71, 0.2}, 1};
                    };
                    class WP {
                        condition = "wpvalid";
                        class WPIndex {
                            type = "text";
                            source = "wpIndex";
                            sourceScale = 1;
                            sourceLength = 2;
                            align = "left";
                            scale = 1;
                            pos[] = {{0.76, 0.15}, 1};
                            right[] = {{0.885, 0.15}, 1};
                            down[] = {{0.76, 0.33}, 1};
                        };
                        class WPdist {
                            type = "text";
                            source = "wpdist";
                            sourceScale = 0.001;
                            sourcePrecision = 1;
                            align = "left";
                            scale = 1;
                            pos[] = {{0.76, 0.27}, 1};
                            right[] = {{0.885, 0.27}, 1};
                            down[] = {{0.76, 0.45}, 1};
                        };
                    };
                    class PresentPos_Text {
                        type = "text";
                        source = "static";
                        text = "PRESENT POSITION";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.05, 0}, 1};
                        right[] = {{0.12, 0}, 1};
                        down[] = {{0.05, 0.09}, 1};
                    };
                    class STBY_Text {
                        type = "text";
                        source = "static";
                        text = "STBY";
                        scale = 1;
                        sourceScale = 1;
                        align = "left";
                        pos[] = {{0.95, 0.005}, 1};
                        right[] = {{1.02, 0.005}, 1};
                        down[] = {{0.95, 0.085}, 1};
                    };
                    class On_Text {
                        type = "text";
                        source = "static";
                        text = "ON";
                        scale = 1;
                        sourceScale = 1;
                        align = "left";
                        pos[] = {{0.89, 0.09}, 1};
                        right[] = {{0.94, 0.09}, 1};
                        down[] = {{0.89, 0.16}, 1};
                    };
                    class Static1_Text {
                        type = "text";
                        source = "static";
                        text = ">99dsf";
                        scale = 1;
                        sourceScale = 1;
                        align = "left";
                        pos[] = {{0.96, 0.235}, 1};
                        right[] = {{1.02, 0.235}, 1};
                        down[] = {{0.96, 0.325}, 1};
                    };
                    class Static2_Text {
                        type = "text";
                        source = "static";
                        text = "32534";
                        scale = 1;
                        sourceScale = 1;
                        align = "left";
                        pos[] = {{0.96, 0.54}, 1};
                        right[] = {{1.03, 0.54}, 1};
                        down[] = {{0.96, 0.63}, 1};
                    };
                };
            };
        };
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6",
            "BFT_screen"
        };
        class textureSources {
            class rhs_desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa"
                };
                factions[] = {};
                decals[] = {7};
            };
            class rhs_woodland {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa"
                };
                factions[] = {};
                decals[] = {7};
            };
            class rhs_olive {
                displayName = "Olive";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1151_Ext_o_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1152M1165_o_CO.paa"
                };
                factions[] = {};
                decals[] = {7};
            };
        };
        textureList[] = {};
        transportSoldier = 2;
        cargoCompartments[] = {1, 1};
        class CargoTurret;
        class Turrets {
            class CoDriverTurret: CargoTurret {
                showAsCargo = 1;
                lodTurnedIn = 1100;
                lodTurnedOut = 1100;
                gunnerForceOptics = 0;
                gunnerName = "Co-driver";
                proxyIndex = 1;
                isPersonTurret = 0;
                gunnerAction = "RHS_M11XX_CoDriver";
                gunnerinAction = "RHS_M11XX_CoDriver";
                memoryPointsGetInGunner = "pos codriver";
                memoryPointsGetInGunnerDir = "pos codriver dir";
                gunnerDoor = "Door_RF";
                turretInfoType = "RHS_RscMATV_Codriver";
                selectionFireAnim = "";
                class Hitpoints {};
            };
        };
        class Attributes {
            class ObjectTexture {
                control = "ObjectTexture";
                data = "ObjectTexture";
                displayName = "Skin";
                tooltip = "Texture and material set applied on the object.";
            };
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
            class cabinlights_hide: longlights_hide {};
            class light_bo {
                source = "user";
                animPeriod = 0.00001;
                initPhase = 1;
            };
            class light_stop: light_bo {
                initPhase = 0;
            };
            class door_LF {
                source = "door";
                animPeriod = 0.8;
                sound = "RHSUSF_Truck_Door";
                soundPosition = "osa_dvere_lp";
                displayName = "open left front door";
            };
            class door_LB: door_LF {
                soundPosition = "osa_dvere_pp";
                displayName = "open left rear door";
            };
            class door_RF: door_LF {
                soundPosition = "osa_dvere_pp";
                displayName = "open right front door";
            };
            class door_RB: door_LF {
                soundPosition = "osa_dvere_pp";
                displayName = "open right rear door";
            };
            class door_trunk: door_LF {
                source = "user";
                useSource = 1;
                soundPosition = "trunk_action";
                displayName = "open trunk";
            };
            class DUKE_Hide {
                source = "user";
                displayName = "hide DUKE antennas";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                animPeriod = 0.00001;
                initPhase = 1;
                onPhaseChanged = "_this call rhs_fnc_duke_vg;";
            };
            class iff_hide {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide CIP";
                source = "user";
                useSource = 1;
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class dwf_kit_Hide {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide deep water fording kit";
                source = "user";
                animPeriod = 0.00001;
                initPhase = 1;
                forceAnimatePhase = 0;
                forceAnimate[] = {"snorkel_lower", 0};
            };
            class snorkel_lower {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide raised air intake";
                source = "user";
                animPeriod = 0.00001;
                initPhase = 1;
                useSource = 1;
                forceAnimatePhase = 1;
                forceAnimate[] = {"snorkel_lower", 1};
            };
            class m1165_Hide {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                source = "user";
                animPeriod = 0.00001;
                initPhase = 1;
            };
            class m1151_Hide {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                source = "user";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class BFT_Hide {
                source = "user";
                displayName = "hide BFT system";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                useSource = 1;
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class Antennas_Hide {
                source = "user";
                displayName = "hide antennas";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class HitDuke1 {
                source = "Hit";
                hitpoint = "HitDuke1";
            };
            class HitDuke2 {
                source = "Hit";
                hitpoint = "HitDuke1";
            };
            class hide_spare {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide spare wheel";
                source = "user";
                mass = -20;
                animPeriod = 0.00001;
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
            class HitGlass1 {
                source = "Hit";
                hitpoint = "HitGlass1";
                raw = 1;
            };
            class HitGlass2 {
                source = "Hit";
                hitpoint = "HitGlass2";
                raw = 1;
            };
            class HitGlass3 {
                source = "Hit";
                hitpoint = "HitGlass3";
                raw = 1;
            };
            class HitGlass4 {
                source = "Hit";
                hitpoint = "HitGlass4";
                raw = 1;
            };
            class HitGlass5 {
                source = "Hit";
                hitpoint = "HitGlass5";
                raw = 1;
            };
            class HitGlass6 {
                source = "Hit";
                hitpoint = "HitGlass6";
                raw = 1;
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
                statement = "[this,0] call rhsusf_fnc_carLightToggle";
            };
            class cabinlights_toggle: lights_toggle {
                shortcut = "lockTarget";
                displayName = "Toggle cabin lights";
                statement = "[this,1] call rhsusf_fnc_carLightToggle";
            };
            class AdjustMap {
                displayName = "Adjust BFT Map Scale";
                position = "pos driver";
                radius = 20;
                condition = "((this turretUnit [0]) isEqualTo (call rhs_fnc_findPlayer)) && this animationSourcePhase 'bft_hide'<0.5;";
                statement = "createDialog 'RHS_BFT_Map_Scale_UI';sliderSetRange [1900,0.01,1];sliderSetPosition [1900,cameraon animationSourcePhase 'BFT_Map_Scale']";
                onlyforplayer = 1;
            };
            class trunk_open {
                displayName = "Open Trunk";
                position = "trunk_action";
                radius = 2;
                onlyForplayer = 0;
                condition = "this  animationSourcePhase 'm1151_Hide'==0 && this animationSourcePhase 'door_trunk'<0.5";
                statement = "this animateSource ['door_trunk', 1];";
            };
            class trunk_close: trunk_open {
                displayName = "Close Trunk";
                condition = "this animationSourcePhase 'door_trunk'==1";
                statement = "this animateSource ['door_trunk', 0]";
            };
        };
        hullDamageCauseExplosion = 1;
        armor = 100;
        armorStructural = 10;
        crewVulnerable = 1;
        class HitPoints: HitPoints {
            class HitHull: HitBody {
                armor = -300;
                passThrough = 1;
                name = "karoserie";
                visual = "zbytek";
                minimalhit = -45;
                explosionShielding = 0.01;
                radius = 0.22;
            };
            class HitFuel {
                armor = -50;
                material = -1;
                name = "palivo";
                visual = "-";
                explosionShielding = 0.5;
                passThrough = 0;
            };
            class HitEngine {
                armor = -100;
                material = -1;
                name = "motor";
                visual = "zbytek";
                passThrough = 0.2;
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
            class HitDuke1 {
                armor = 0.75;
                material = -1;
                name = "duke1";
                visual = "-";
                passThrough = 0;
                MinimalHit = 0.05;
                explosionShielding = 0.01;
                radius = 0.15;
            };
            class HitDuke2 {
                armor = 0.75;
                material = -1;
                name = "duke2";
                visual = "-";
                passThrough = 0;
                MinimalHit = 0.05;
                explosionShielding = 0.01;
                radius = 0.15;
            };
            class HitGlass1 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass1";
                name = "glass1";
                visual = "glass1";
            };
            class HitGlass2 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass2";
                name = "glass2";
                visual = "glass2";
            };
            class HitGlass3 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass3";
                name = "glass3";
                visual = "glass3";
            };
            class HitGlass4 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass4";
                name = "glass4";
                visual = "glass4";
            };
            class HitGlass5 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass5";
                name = "glass5";
                visual = "glass5";
            };
            class HitGlass6 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass6";
                name = "glass6";
                visual = "glass6";
            };
        };
        class Reflectors {
            class Left {
                color[] = {1900, 1300, 950};
                ambient[] = {5, 5, 5};
                position = "Light_L";
                direction = "Light_L_end";
                hitpoint = "Light_L";
                selection = "Light_L";
                size = 1;
                innerAngle = 100;
                outerAngle = 179;
                coneFadeCoef = 10;
                intensity = 1;
                useFlare = 0;
                dayLight = 0;
                flareSize = 1;
                class Attenuation {
                    start = 1;
                    constant = 0;
                    linear = 0;
                    quadratic = 0.25;
                    hardLimitStart = 30;
                    hardLimitEnd = 60;
                };
            };
            class Right: Left {
                position = "Light_R";
                direction = "Light_R_end";
                hitpoint = "Light_R";
                selection = "Light_R";
            };
            class Right2: Right {
                position = "light_R_flare";
                useFlare = 1;
            };
            class Left2: Left {
                position = "light_L_flare";
                useFlare = 1;
            };
            class Long_Left {
                color[] = {1900, 1300, 950};
                ambient[] = {5, 5, 5};
                position = "Light_L_Long";
                direction = "Light_L_Long_end";
                hitpoint = "Light_L";
                selection = "Light_L";
                size = 1;
                innerAngle = 22;
                outerAngle = 26;
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
                hitpoint = "Light_R";
                selection = "Light_R";
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
        aggregateReflectors[] = {{"Left", "Left2"}, {"Right", "Right2"}};
        armorLights = 0.01;
        class RenderTargets {
            class LeftMirror {
                renderTarget = "rendertarget0";
                class CameraView1 {
                    pointPosition = "m1P";
                    pointDirection = "m1D";
                    renderQuality = 2;
                    renderVisionMode = 4;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_1_TL", "PIP_1_TR", "PIP_1_BL", "PIP_1_BR"};
            };
            class RightMirror {
                renderTarget = "rendertarget1";
                class CameraView1 {
                    pointPosition = "m2P";
                    pointDirection = "m2D";
                    renderQuality = 2;
                    renderVisionMode = 4;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_2_TL", "PIP_2_TR", "PIP_2_BL", "PIP_2_BR"};
            };
        };
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
        maxFordingDepth = -0.35;
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
            class L1 {
                side = "left";
                boneName = "wheel_1_1_damper";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                suspForceAppPointOffset = "wheel_1_1_axis";
                tireForceAppPointOffset = "wheel_1_1_axis";
                suspTravelDirection[] = {-0.125, -1, 0};
                width = 0.24;
                steering = 1;
                mass = 80;
                MOI = 25;
                dampingRate = 0.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 35000;
                maxHandBrakeTorque = 0;
                maxCompression = 0.12;
                maxDroop = 0.12;
                sprungMass = -1;
                springStrength = 58550;
                springDamperRate = 15725;
                longitudinalStiffnessPerUnitGravity = 10000;
                latStiffX = 40;
                latStiffY = 180;
                frictionVsSlipGraph[] = {{0, 2.5}, {0.5, 2.3}, {1, 2}};
            };
            class L2: L1 {
                boneName = "wheel_1_2_damper";
                steering = 0;
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                suspForceAppPointOffset = "wheel_1_2_axis";
                tireForceAppPointOffset = "wheel_1_2_axis";
            };
            class R1: L1 {
                boneName = "wheel_2_1_damper";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                suspForceAppPointOffset = "wheel_2_1_axis";
                tireForceAppPointOffset = "wheel_2_1_axis";
                steering = 1;
                side = "right";
                suspTravelDirection[] = {0.125, -1, 0};
            };
            class R2: R1 {
                boneName = "wheel_2_2_damper";
                steering = 0;
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                suspForceAppPointOffset = "wheel_2_2_axis";
                tireForceAppPointOffset = "wheel_2_2_axis";
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_dam.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_m11xx_destruction.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_m11xx_destruction.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_dam.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_m11xx_destruction.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_dam.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_m11xx_destruction.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_dam.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_m11xx_destruction.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152_SICPS.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152_SICPS_dam.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_m11xx_destruction.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1165_ASV.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1165_ASV_dam.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_m11xx_destruction.rvmat",
                "rhsusf\addons\rhsusf_m1165\data\rhsusf_M1165A1_GMV.rvmat",
                "rhsusf\addons\rhsusf_m1165\data\rhsusf_M1165A1_GMV_dam.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_m11xx_destruction.rvmat",
                "rhsusf\addons\rhsusf_m1165\data\rhsusf_M1165A1_GMV_Ext.rvmat",
                "rhsusf\addons\rhsusf_m1165\data\rhsusf_M1165A1_GMV_Ext_dam.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_m11xx_destruction.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_half_d.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_m11xx_destruction.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_half_d.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_m11xx_destruction.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_GPK.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_GPK_dam.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_m11xx_destruction.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\turrets\ogpk\data\ogpk_base.rvmat",
                "rhsusf\addons\rhsusf_hmmwv\turrets\ogpk\data\ogpk_dam.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_m11xx_destruction.rvmat",
                "rhsusf\addons\rhsusf_rg33l\data\mctags.rvmat",
                "rhsusf\addons\rhsusf_rg33l\data\mctags_dam.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_m11xx_destruction.rvmat",
                "rhsusf\addons\rhsusf_m1165\data\rhsusf_M1165A1_GMV_SAG.rvmat",
                "rhsusf\addons\rhsusf_m1165\data\rhsusf_M1165A1_GMV_SAG_dam.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_m11xx_destruction.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\m153.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\m153_dam.rvmat",
                "rhsusf\addons\rhsusf_m11xx\data\rhsusf_m11xx_destruction.rvmat",
                "rhsusf\addons\rhsusf_matv\data\rhsusf_matv_kamaz_glass.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_int.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class EventHandlers: EventHandlers {
            class BIS_Randomisation {
                init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
            };
            class RHSUSF_EventHandlers {
                init = "_this call rhs_fnc_m11xx_init";
                postInit = "_this call rhs_fnc_reapplyTextures";
                seatSwitched = "if(not(_this select 1 in [driver (_this select 0),gunner (_this select 0)]))then{ (_this select 1) action ['turnIn',_this select 0]}";
                turnIn = "([0] + _this)  call rhsusf_fnc_turretAction;";
                turnOut = "([1] + _this) call rhsusf_fnc_turretAction;";
                engine = "_this call rhs_fnc_engineCheckDamage";
            };
        };
        class TransportBackpacks {
            class _xx_rhsusf_falconii {
                backpack = "rhsusf_falconii";
                count = 1;
            };
        };
        class TransportMagazines {
            class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
                magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
                count = 10;
            };
            class _xx_rhs_mag_m67 {
                magazine = "rhs_mag_m67";
                count = 2;
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
                count = 10;
            };
            class _xx_Toolkit {
                name = "Toolkit";
                count = 1;
            };
        };
        class TransportWeapons {
            class _xx_rhs_weap_m4_carryhandle {
                weapon = "rhs_weap_m4_carryhandle";
                count = 2;
            };
        };
        slingLoadCargoMemoryPoints[] = {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 5;
                canBeTransported = 1;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
            class Carrier {
                cargoBayDimensions[] = {"VTV_cargo_1", "VTV_cargo_2"};
                disableHeightLimit = 0;
                maxLoadMass = 1200;
                cargoAlignment[] = {"center", "front"};
                cargoSpacing[] = {0, 0, 0};
                exits[] = {"VTV_exit"};
                unloadingInterval = 2;
                loadingDistance = 3;
                loadingAngle = 60;
                parachuteClassDefault = "B_Parachute_02_F";
                parachuteHeightLimitDefault = 5;
            };
        };
        class RHS_TowingSystem {
            class Carrier {
                rhs_maxCargoMass = 1500;
                rhs_attachPoint = "";
                rhs_attachPointPos[] = {-0.05, -2.47, -1.04};
            };
        };
    };
    class rhsusf_m1152_base: rhsusf_m1151_base {
        displayName = "$STR_RHS_M1152_NAME";
        weapons[] = {"TruckHorn2"};
        magazines[] = {};
        model = "\rhsusf\addons\rhsusf_m11xx\rhsusf_m1152";
        picture = "\rhsusf\addons\rhsusf_m11xx\pictures\rhs_m1152_unarmed_pic_ca.paa";
        cargoAction[] = {"RHS_HMMWV_Cargo"};
        cargoProxyIndexes[] = {1};
        getInProxyOrder[] = {1};
        memoryPointsGetInCargo[] = {"pos codriver"};
        memoryPointsGetInCargoDir[] = {"pos codriver dir"};
        transportSoldier = 0;
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6",
            "camo11",
            "BFT_screen"
        };
        class textureSources {
            class rhs_desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa"
                };
                decals[] = {8};
                factions[] = {};
            };
            class rhs_woodland {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_w_co.paa"
                };
                decals[] = {8};
                factions[] = {};
            };
            class rhs_olive {
                displayName = "Olive";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1151_Ext_o_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1152M1165_o_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_g_co.paa"
                };
                factions[] = {};
                decals[] = {7};
            };
        };
        class AnimationSources: AnimationSources {
            class DUKE_Hide: DUKE_Hide {
                displayName = "";
            };
            class door_RB: door_RB {
                displayName = "";
            };
            class door_LB: door_LB {
                displayName = "";
            };
            class door_trunk: door_trunk {
                displayName = "";
            };
            class m1151_Hide: m1151_Hide {
                initPhase = 1;
            };
            class m1152_Hide {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                source = "user";
                displayName = "hide rear frame";
                animPeriod = 0.00001;
                initPhase = 1;
            };
            class m1152_tent_Hide {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                source = "user";
                displayName = "hide rear cover";
                animPeriod = 0.00001;
                initPhase = 1;
                forceAnimatePhase = 0;
                forceAnimate[] = {"m1152_Hide", 0};
            };
            class m1152_bench_Hide {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                source = "user";
                animPeriod = 0.00001;
                initPhase = 1;
                forceAnimatePhase = 0;
                forceAnimate[] = {"m1152_Hide", 0};
            };
            class supply_hide {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                source = "user";
                animPeriod = 0.00001;
                initPhase = 1;
            };
        };
        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 5;
                canBeTransported = 1;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
            class Carrier {
                cargoBayDimensions[] = {"VTV_cargo_1", "VTV_cargo_2"};
                disableHeightLimit = 0;
                maxLoadMass = 2300;
                cargoAlignment[] = {"center", "front"};
                cargoSpacing[] = {0, 0, 0};
                exits[] = {"VTV_exit"};
                unloadingInterval = 2;
                loadingDistance = 3;
                loadingAngle = 60;
                parachuteClassDefault = "B_Parachute_02_F";
                parachuteHeightLimitDefault = 5;
            };
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.05, -2.47, -1.02};
            };
        };
    };
    class rhsusf_m1152_sicps_base: rhsusf_m1152_base {
        displayName = "$STR_RHS_M1152_SICPS_NAME";
        model = "\rhsusf\addons\rhsusf_m11xx\rhsusf_m1152_sicps";
        picture = "\rhsusf\addons\rhsusf_m11xx\pictures\rhs_m1152_sicps_pic_ca.paa";
        cargoAction[] = {"RHS_HMMWV_Cargo"};
        cargoCompartments[] = {"Compartment2"};
        cargoProxyIndexes[] = {2};
        getInProxyOrder[] = {2};
        memoryPointsGetInCargo[] = {"pos cargo"};
        memoryPointsGetInCargoDir[] = {"pos cargo dir"};
        transportSoldier = 1;
        cargoDoors[] = {"Door_B"};
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6",
            "camo9",
            "BFT_screen"
        };
        class textureSources {
            class rhs_desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1152_sicps_d_CO.paa"
                };
                decals[] = {8};
                factions[] = {};
            };
            class rhs_woodland {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1152_sicps_wd_CO.paa"
                };
                decals[] = {8};
                factions[] = {};
            };
        };
        class AnimationSources: AnimationSources {
            class m1152_Hide: m1152_Hide {
                displayName = "";
            };
            class m1152_tent_Hide: m1152_tent_Hide {
                displayName = "";
            };
            class hide_spare: hide_spare {
                displayName = "";
            };
            class door_B {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                source = "user";
                displayName = "open rear door";
                animPeriod = 0.8;
                initPhase = 0;
                sound = "RHSUSF_Truck_Door";
                soundPosition = "osa_dvere_lp";
            };
        };
        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 5;
                canBeTransported = 1;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.05, -2.49, -1.71};
            };
        };
    };
    class rhsusf_m1151_usarmy_d: rhsusf_m1151_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_usarmy_d.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        hiddenselectionstextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa"
        };
        textureList[] = {"rhs_desert", 1};
    };
    class rhsusf_m1151_usarmy_wd: rhsusf_m1151_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_usarmy_wd.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa"
        };
        textureList[] = {"rhs_woodland", 1};
    };
    class rhsusf_m1151_usmc_d: rhsusf_m1151_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_usmc_d.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usmc_d";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        maxFordingDepth = 0.1;
        hiddenselectionstextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa"
        };
        class AnimationSources: AnimationSources {
            class dwf_kit_Hide: dwf_kit_Hide {
                initPhase = 0;
            };
            class snorkel_lower: snorkel_lower {
                initPhase = 0;
            };
        };
        textureList[] = {"rhs_desert", 1};
    };
    class rhsusf_m1151_usmc_wd: rhsusf_m1151_usmc_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_usmc_wd.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usmc_wd";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa"
        };
        textureList[] = {"rhs_woodland", 1};
    };
    class rhsusf_m1165_base: rhsusf_m1151_base {
        displayName = "$STR_RHS_M1165_NAME";
        picture = "\rhsusf\addons\rhsusf_m11xx\pictures\rhs_m1165_unarmed_pic_ca.paa";
        weapons[] = {"TruckHorn2"};
        magazines[] = {};
        class AnimationSources: AnimationSources {
            class DUKE_Hide: DUKE_Hide {
                initPhase = 1;
                displayName = "";
            };
            class door_trunk: door_trunk {
                displayName = "";
            };
            class m1165_Hide: m1165_Hide {
                initPhase = 0;
            };
            class m1151_Hide: m1151_Hide {
                initPhase = 1;
            };
        };
        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 5;
                canBeTransported = 1;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
            class Carrier {
                cargoBayDimensions[] = {"VTV_cargo_1", "VTV_cargo_2"};
                disableHeightLimit = 1;
                maxLoadMass = 1700;
                cargoAlignment[] = {"center", "front"};
                cargoSpacing[] = {0, 0, 0};
                exits[] = {"VTV_exit"};
                unloadingInterval = 2;
                loadingDistance = 3;
                loadingAngle = 60;
                parachuteClassDefault = "B_Parachute_02_F";
                parachuteHeightLimitDefault = 5;
            };
        };
    };
    class rhsusf_m1165_usarmy_d: rhsusf_m1165_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1165_usarmy_d.paa";
        forceInGarage = 1;
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa"
        };
        textureList[] = {"rhs_desert", 1};
    };
    class rhsusf_m1165_usarmy_wd: rhsusf_m1165_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1165_usarmy_wd.paa";
        forceInGarage = 0;
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa"
        };
        textureList[] = {"rhs_woodland", 1};
    };
    class rhsusf_m1165_usmc_d: rhsusf_m1165_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1165_usmc_d.paa";
        scope = 2;
        accuracy = 0.5;
        class AnimationSources: AnimationSources {
            class dwf_kit_Hide: dwf_kit_Hide {
                initPhase = 0;
            };
            class snorkel_lower: snorkel_lower {
                initPhase = 0;
            };
        };
        faction = "rhs_faction_usmc_d";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        maxFordingDepth = 0.1;
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa"
        };
        textureList[] = {"rhs_desert", 1};
    };
    class rhsusf_m1165_usmc_wd: rhsusf_m1165_usmc_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1165_usmc_wd.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usmc_wd";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa"
        };
        textureList[] = {"rhs_woodland", 1};
    };
    class rhsusf_m1152_usarmy_d: rhsusf_m1152_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1152_usarmy_d.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        hiddenselectionstextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa"
        };
        textureList[] = {"rhs_desert", 1};
    };
    class rhsusf_m1152_usarmy_wd: rhsusf_m1152_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1152_usarmy_wd.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_w_co.paa"
        };
        textureList[] = {"rhs_woodland", 1};
    };
    class rhsusf_m1152_usmc_d: rhsusf_m1152_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1152_usmc_d.paa";
        scope = 2;
        accuracy = 0.5;
        class AnimationSources: AnimationSources {
            class dwf_kit_Hide: dwf_kit_Hide {
                initPhase = 0;
            };
            class snorkel_lower: snorkel_lower {
                initPhase = 0;
            };
        };
        faction = "rhs_faction_usmc_d";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        maxFordingDepth = 0.1;
        hiddenselectionstextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa"
        };
        textureList[] = {"rhs_desert", 1};
    };
    class rhsusf_m1152_usmc_wd: rhsusf_m1152_usmc_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1152_usmc_wd.paa";
        scope = 2;
        accuracy = 0.5;
        class AnimationSources: AnimationSources {
            class dwf_kit_Hide: dwf_kit_Hide {
                initPhase = 0;
            };
            class snorkel_lower: snorkel_lower {
                initPhase = 0;
            };
        };
        faction = "rhs_faction_usmc_wd";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_w_co.paa"
        };
        textureList[] = {"rhs_woodland", 1};
    };
    class rhsusf_m1152_rsv_usarmy_d: rhsusf_m1152_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1152_rsv_usarmy_d.paa";
        picture = "\rhsusf\addons\rhsusf_m11xx\pictures\rhs_m1152_rsv_pic_ca.paa";
        forceInGarage = 1;
        displayName = "$STR_RHS_M1152_RSV_NAME";
        scope = 2;
        accuracy = 0.5;
        transportAmmo = 250000;
        transportFuel = 250000;
        transportRepair = 5000000;
        supplyRadius = 12;
        class AnimationSources: AnimationSources {
            class supply_hide: supply_hide {
                initPhase = 0;
            };
            class m1152_Hide: m1152_Hide {
                initPhase = 0;
            };
            class m1152_tent_Hide: m1152_tent_Hide {
                initPhase = 0;
            };
        };
        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 5;
                canBeTransported = 1;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
        };
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        hiddenselectionstextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa"
        };
        textureList[] = {"rhs_desert", 1};
    };
    class rhsusf_m1152_rsv_usarmy_wd: rhsusf_m1152_rsv_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1152_rsv_usarmy_wd.paa";
        forceInGarage = 0;
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_w_co.paa"
        };
        textureList[] = {"rhs_woodland", 1};
    };
    class rhsusf_m1152_rsv_usmc_d: rhsusf_m1152_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1152_rsv_usmc_d.paa";
        picture = "\rhsusf\addons\rhsusf_m11xx\pictures\rhs_m1152_rsv_pic_ca.paa";
        forceInGarage = 0;
        displayName = "$STR_RHS_M1152_RSV_NAME";
        scope = 2;
        accuracy = 0.5;
        transportAmmo = 250000;
        transportFuel = 250000;
        transportRepair = 5000000;
        supplyRadius = 12;
        class AnimationSources: AnimationSources {
            class dwf_kit_Hide: dwf_kit_Hide {
                initPhase = 0;
            };
            class snorkel_lower: snorkel_lower {
                initPhase = 0;
            };
            class supply_hide: supply_hide {
                initPhase = 0;
            };
            class m1152_Hide: m1152_Hide {
                initPhase = 0;
            };
            class m1152_tent_Hide: m1152_tent_Hide {
                initPhase = 0;
            };
        };
        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 5;
                canBeTransported = 1;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
        };
        faction = "rhs_faction_usmc_d";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        maxFordingDepth = 0.1;
        hiddenselectionstextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa"
        };
        textureList[] = {"rhs_desert", 1};
    };
    class rhsusf_m1152_rsv_usmc_wd: rhsusf_m1152_rsv_usmc_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1152_rsv_usmc_wd.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usmc_wd";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_w_co.paa"
        };
        textureList[] = {"rhs_woodland", 1};
    };
    class rhsusf_m1152_sicps_usarmy_d: rhsusf_m1152_sicps_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1152_sicps_usarmy_d.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        hiddenselectionstextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1152_sicps_d_CO.paa"
        };
        textureList[] = {"rhs_desert", 1};
    };
    class rhsusf_m1152_sicps_usarmy_wd: rhsusf_m1152_sicps_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1152_sicps_usarmy_wd.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1152_sicps_wd_CO.paa"
        };
        textureList[] = {"rhs_woodland", 1};
    };
    class rhsusf_m1151_GPK_base: rhsusf_m1151_base {
        Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m1025_m2.paa";
        picture = "\rhsusf\addons\rhsusf_m11xx\pictures\rhs_m1151_gpk_pic_ca.paa";
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6",
            "camo7",
            "camo8",
            "BFT_screen"
        };
        class textureSources {
            class rhs_desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_GPK_d_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
                };
                decals[] = {8};
                factions[] = {};
            };
            class rhs_woodland {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_GPK_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
                };
                decals[] = {8};
                factions[] = {};
            };
            class rhs_olive {
                displayName = "Olive";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1151_Ext_o_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1152M1165_o_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_GPK_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
                };
                factions[] = {};
                decals[] = {7};
            };
        };
        class AnimationSources: AnimationSources {
            class GunnerAdjust_source {
                source = "user";
                animPeriod = 1;
                initPhase = 0.25;
            };
            class rhino {
                source = "door";
                animPeriod = 2;
            };
            class hide_rhino {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide rhino";
                source = "user";
                mass = -20;
                animPeriod = 0.00001;
                useSource = 1;
                initPhase = 1;
            };
            class hit_rhino_source {
                source = "hit";
                hitpoint = "Hit_Rhino";
                raw = 1;
            };
        };
        class Hitpoints: HitPoints {
            class Hit_Rhino {
                armor = -50;
                armorComponent = "rhino";
                name = "rhino";
                visual = "-";
                minimalhit = -0.4;
                explosionShielding = 8.5;
                passThrough = 0;
                radius = 0.2;
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Rhino_Destruction_01 {
                        simulation = "particles";
                        type = "rhs_rhino_dst_01";
                        position = "fx_rhino_1";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.1;
                    };
                    class RHS_Rhino_Destruction_02: RHS_Rhino_Destruction_01 {
                        type = "rhs_rhino_dst_02";
                        position = "fx_rhino_2";
                    };
                    class RHS_Rhino_Destruction_03: RHS_Rhino_Destruction_01 {
                        type = "rhs_rhino_dst_03";
                        position = "fx_rhino_3";
                    };
                    class RHS_Rhino_Destruction_01_smoke: RHS_Rhino_Destruction_01 {
                        type = "SmallWreckSmoke";
                        position = "fx_rhino_1";
                    };
                    class RHS_Rhino_Destruction_02_smoke: RHS_Rhino_Destruction_01 {
                        type = "SmallWreckSmoke";
                        position = "fx_rhino_2";
                    };
                    class RHS_Rhino_Destruction_03_smoke: RHS_Rhino_Destruction_01 {
                        type = "SmallWreckSmoke";
                        position = "fx_rhino_3";
                    };
                    class RHS_Rhino_Destruction_01_sparks: RHS_Rhino_Destruction_01 {
                        type = "RHS_FireSparks";
                        position = "fx_rhino_1";
                    };
                    class RHS_Rhino_Destruction_02_sparks: RHS_Rhino_Destruction_01 {
                        type = "RHS_FireSparks";
                        position = "fx_rhino_2";
                    };
                    class RHS_Rhino_Destruction_03_sparks: RHS_Rhino_Destruction_01 {
                        type = "RHS_FireSparks";
                        position = "fx_rhino_3";
                    };
                };
            };
        };
        class UserActions: UserActions {
            class LowerRhino {
                displayName = "Lower Rhino";
                position = "pos_driverpos";
                radius = 2;
                showwindow = 0;
                condition = "((call rhs_fnc_findPlayer) == driver this) && {this animationphase 'hide_rhino' < 0.5} && {this getHitpointDamage 'Hit_Rhino' < 1} && {this doorPhase 'rhino' < 0.1;}";
                statement = "[this,1] call rhs_fnc_rhino_system";
                onlyforplayer = 1;
            };
            class RaiseRhino: LowerRhino {
                displayName = "Raise Rhino";
                condition = "((call rhs_fnc_findPlayer) == driver this) && {this animationphase 'hide_rhino' < 0.5} && {this getHitpointDamage 'Hit_Rhino' < 1} && {this doorPhase 'rhino' > 0.9};";
                statement = "[this,0] call rhs_fnc_rhino_system";
            };
            class AdjustMap: AdjustMap {
                condition = "((this turretUnit [1]) isEqualTo (call rhs_fnc_findPlayer)) && this animationSourcePhase 'bft_hide'<0.5;";
            };
        };
        class Turrets: Turrets {
            class GPK_Turret: NewTurret {
                gunnerLeftHandAnimName = "OtocHlaven_Shake";
                gunnerRightHandAnimName = "OtocHlaven_Shake";
                gunnerLeftLegAnimName = "Gunner_Legs";
                gunnerRightLegAnimName = "Gunner_Legs";
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
                weapons[] = {};
                magazines[] = {};
                minElev = -10;
                maxElev = 40;
                soundServo[] = {"A3\sounds_f\dummysound", 0.000001, 1};
                gunnerAction = "RHS_HMMWV_Gunner03";
                gunnerInAction = "RHS_HMMWV_Gunner03_GPK_in";
                maxhorizontalrotspeed = 0.8;
                maxverticalrotspeed = 0.95;
                lodTurnedIn = 1000;
                lodTurnedOut = 1000;
                lodOpticsOut = 1000;
                canhideGunner = 1;
                inGunnerMayFire = 0;
                outGunnerMayFire = 1;
                viewGunnerInExternal = 1;
                gunnerGetInAction = "GetInLow";
                gunnerGetOutAction = "GetOutLow";
                gunnerDoor = "Door_LB";
                gunnerCompartments = "Compartment1";
                ejectDeadGunner = 0;
                castGunnerShadow = 1;
                stabilizedInAxes = 0;
                startEngine = 0;
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                memoryPointGunnerOptics = "";
                memoryPointGunnerOutOptics = "gunnerview";
                gunnerOpticsModel = "";
                gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                optics = 0;
                disableSoundAttenuation = 1;
                memoryPointsGetInGunner = "pos cargo";
                memoryPointsGetInGunnerDir = "pos cargo dir";
                class ViewOptics: ViewOptics {
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                class ViewGunner: ViewOptics {};
            };
            class CoDriverTurret: CoDriverTurret {};
        };
        class EventHandlers: EventHandlers {
            class RHS_Turret_EH {
                turnIn = "_this call rhsusf_fnc_turret_gunnerAdjust_turnIn";
                hit = "_this call rhsusf_fnc_turret_gunnerAdjust_AI_hit";
                engine = "_this call rhsusf_fnc_turret_gunnerAdjust_AI_engine";
            };
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.05, -3.12, -1.04};
            };
        };
    };
    class rhsusf_M1151_GPK_M2_base: rhsusf_m1151_GPK_base {
        model = "\rhsusf\addons\rhsusf_m11xx\rhsusf_m1151_m2_v1";
        displayName = "$STR_RHS_M1151_M2_V1_NAME";
        class AnimationSources: AnimationSources {
            class DUKE_Hide: DUKE_Hide {};
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
        class Turrets: Turrets {
            class GPK_Turret: GPK_Turret {
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
                gunnerLeftHandAnimName = "OtocHlaven";
                gunnerRightHandAnimName = "OtocHlaven";
                weapons[] = {"RHS_M2"};
                magazines[] = {
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red"
                };
            };
            class CoDriverTurret: CoDriverTurret {};
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.05, -3.12, -1.02};
            };
        };
    };
    class rhsusf_M1151_OGPK_base: rhsusf_m1151_GPK_base {
        picture = "\rhsusf\addons\rhsusf_m11xx\pictures\rhs_m1151_ogpk_pic_ca.paa";
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6",
            "camo8",
            "camo14",
            "camo15",
            "camo19",
            "BFT_screen"
        };
        class textureSources {
            class rhs_desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
                    "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
                    "rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa",
                    "rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_des_co.paa"
                };
                factions[] = {};
                decals[] = {7};
            };
            class rhs_woodland {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
                    "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
                    "rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
                    "rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa"
                };
                factions[] = {};
                decals[] = {7};
            };
            class rhs_olive {
                displayName = "Olive";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1151_Ext_o_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1152M1165_o_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
                    "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
                    "rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
                    "rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa"
                };
                factions[] = {};
                decals[] = {7};
            };
        };
        class Hitpoints: Hitpoints {
            class HitGlass7 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass7";
                name = "glass7";
                visual = "glass7";
            };
            class HitGlass8 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass8";
                name = "glass8";
                visual = "glass8";
            };
            class HitGlass9 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass9";
                name = "glass9";
                visual = "glass9";
            };
            class HitGlass10 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass10";
                name = "glass10";
                visual = "glass10";
            };
            class HitGlass11 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass11";
                name = "glass11";
                visual = "glass11";
            };
            class HitGlass12 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass12";
                name = "glass12";
                visual = "glass12";
            };
            class HitGlass13 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass13";
                name = "glass13";
                visual = "glass13";
            };
            class HitGlass14 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass14";
                name = "glass14";
                visual = "glass14";
            };
            class HitGlass15 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass15";
                name = "glass15";
                visual = "glass15";
            };
        };
        class AnimationSources: AnimationSources {
            class DUKE_Hide: DUKE_Hide {};
            class bumper2_hide {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                source = "user";
                displayName = "hide front protective bumper";
                animPeriod = 0.00001;
                useSource = 1;
                initPhase = 1;
            };
            class hide_ogpkover {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide overhead protection";
                source = "user";
                mass = -20;
                animPeriod = 0.00001;
                initPhase = 1;
            };
            class hide_ogpknet {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide camo net";
                source = "user";
                mass = 0;
                animPeriod = 0.00001;
                initPhase = 1;
            };
            class hide_ogpkbust {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide turret bustle";
                source = "user";
                mass = -20;
                animPeriod = 0.00001;
                initPhase = 1;
            };
            class HitGlass7 {
                source = "Hit";
                hitpoint = "HitGlass7";
                raw = 1;
            };
            class HitGlass8 {
                source = "Hit";
                hitpoint = "HitGlass8";
                raw = 1;
            };
            class HitGlass9 {
                source = "Hit";
                hitpoint = "HitGlass9";
                raw = 1;
            };
            class HitGlass10 {
                source = "Hit";
                hitpoint = "HitGlass10";
                raw = 1;
            };
            class HitGlass11 {
                source = "Hit";
                hitpoint = "HitGlass11";
                raw = 1;
            };
            class HitGlass12 {
                source = "Hit";
                hitpoint = "HitGlass12";
                raw = 1;
            };
            class HitGlass13 {
                source = "Hit";
                hitpoint = "HitGlass13";
                raw = 1;
            };
            class HitGlass14 {
                source = "Hit";
                hitpoint = "HitGlass14";
                raw = 1;
            };
            class HitGlass15 {
                source = "Hit";
                hitpoint = "HitGlass15";
                raw = 1;
            };
        };
        animationList[] = {
            "hide_ogpkover",
            0.5,
            "hide_ogpknet",
            0.5,
            "hide_ogpkbust",
            0.5,
            "DUKE_Hide",
            0.5,
            "bumper2_hide",
            0.75,
            "hide_rhino",
            0.75
        };
        threat[] = {0.9, 0.3, 0.1};
        class Turrets: Turrets {
            class OGPK_Turret: GPK_Turret {
                gunnerInAction = "RHS_HMMWV_Gunner03_in";
            };
            class CoDriverTurret: CoDriverTurret {};
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
            class LeftMirror2 {
                renderTarget = "rendertarget2";
                class CameraView1 {
                    pointPosition = "pp4";
                    pointDirection = "pd4";
                    renderQuality = 2;
                    renderVisionMode = 4;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_4_TL", "PIP_4_TR", "PIP_4_BL", "PIP_4_BR"};
            };
            class RightMirror2 {
                renderTarget = "rendertarget3";
                class CameraView1 {
                    pointPosition = "pp3";
                    pointDirection = "pd3";
                    renderQuality = 2;
                    renderVisionMode = 4;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_3_TL", "PIP_3_TR", "PIP_3_BL", "PIP_3_BR"};
            };
        };
    };
    class rhsusf_M1151_OGPK_M2_base: rhsusf_M1151_OGPK_base {
        model = "\rhsusf\addons\rhsusf_m11xx\rhsusf_m1151_m2_v2";
        displayName = "$STR_RHS_M1151_M2_V2_NAME";
        class AnimationSources: AnimationSources {
            class DUKE_Hide: DUKE_Hide {};
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
        class Turrets: Turrets {
            class OGPK_Turret: OGPK_Turret {
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
                gunnerLeftHandAnimName = "OtocHlaven";
                gunnerRightHandAnimName = "OtocHlaven";
                weapons[] = {"RHS_M2"};
                magazines[] = {
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red"
                };
            };
            class CoDriverTurret: CoDriverTurret {};
        };
    };
    class rhsusf_M1151_OGPK_MK19_base: rhsusf_M1151_OGPK_base {
        model = "\rhsusf\addons\rhsusf_m11xx\rhsusf_m1151_mk19_v2";
        displayName = "$STR_RHS_M1151_MK19_V2_NAME";
        class AnimationSources: AnimationSources {
            class DUKE_Hide: DUKE_Hide {};
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
        class Turrets: Turrets {
            class OGPK_Turret: OGPK_Turret {
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
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M1001",
                    "RHS_48Rnd_40mm_MK19_M1001",
                    "RHS_48Rnd_40mm_MK19_M1001"
                };
            };
            class CoDriverTurret: CoDriverTurret {};
        };
    };
    class rhsusf_M1151_OGPK_M240_base: rhsusf_M1151_OGPK_base {
        model = "\rhsusf\addons\rhsusf_m11xx\rhsusf_m1151_m240_v2";
        displayName = "$STR_RHS_M1151_M240_V2_NAME";
        class AnimationSources: AnimationSources {
            class DUKE_Hide: DUKE_Hide {};
            class ReloadAnim {
                source = "reload";
                weapon = "rhs_weap_m240_m113";
            };
            class ReloadMagazine {
                source = "reloadmagazine";
                weapon = "rhs_weap_m240_m113";
            };
            class Revolving {
                source = "revolving";
                weapon = "rhs_weap_m240_m113";
            };
            class muzzle_rot_MG {
                source = "ammorandom";
                weapon = "rhs_weap_m240_m113";
            };
        };
        class Turrets: Turrets {
            class OGPK_Turret: OGPK_Turret {
                gunnerAction = "RHS_MATV_Gunner_M240";
                gunnerInAction = "RHS_HMMWV_Gunner03_in";
                gunnerLeftHandAnimName = "OtocHlaven";
                gunnerRightHandAnimName = "OtocHlaven";
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
                selectionFireAnim = "zasleh";
                memoryPointGunnerOptics = "gunnerview";
                memoryPointGunnerOutOptics = "gunnerview";
                minElev = -18;
                maxElev = 40;
                weapons[] = {"rhs_weap_m240_m113"};
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
            };
            class CoDriverTurret: CoDriverTurret {};
        };
    };
    class rhsusf_M1165_ASV_OGPK_M240_base: rhsusf_M1151_OGPK_base {
        model = "\rhsusf\addons\rhsusf_m11xx\rhsusf_m1165_asv_m240";
        picture = "\rhsusf\addons\rhsusf_m11xx\pictures\rhs_m1165_asv_ogpk_pic_ca.paa";
        displayName = "$STR_RHS_M1165_ASV_M240_NAME";
        weapons[] = {"TruckHorn2"};
        magazines[] = {};
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6",
            "camo8",
            "camo14",
            "camo15",
            "camo16",
            "asv_decal",
            "camo19",
            "BFT_screen"
        };
        class textureSources {
            class rhs_desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
                    "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
                    "rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1165_ASV_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1165_asv_label_d_ca.paa",
                    "rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_des_co.paa"
                };
                factions[] = {};
                decals[] = {7};
            };
            class rhs_woodland {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
                    "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
                    "rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1165_ASV_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1165_asv_label_wd_ca.paa",
                    "rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa"
                };
                factions[] = {};
                decals[] = {7};
            };
        };
        class AnimationSources: AnimationSources {
            class DUKE_Hide: DUKE_Hide {
                displayName = "";
            };
            class ReloadAnim {
                source = "reload";
                weapon = "rhs_weap_m240_m113";
            };
            class ReloadMagazine {
                source = "reloadmagazine";
                weapon = "rhs_weap_m240_m113";
            };
            class Revolving {
                source = "revolving";
                weapon = "rhs_weap_m240_m113";
            };
            class muzzle_rot_MG {
                source = "ammorandom";
                weapon = "rhs_weap_m240_m113";
            };
            class door_trunk: door_trunk {
                displayName = "";
            };
            class m1165_Hide: m1165_Hide {
                initPhase = 0;
            };
            class m1151_Hide: m1151_Hide {
                initPhase = 1;
            };
        };
        class Turrets: Turrets {
            class OGPK_Turret: OGPK_Turret {
                gunnerAction = "RHS_MATV_Gunner_M240";
                gunnerInAction = "RHS_HMMWV_Gunner03_in";
                gunnerLeftHandAnimName = "OtocHlaven";
                gunnerRightHandAnimName = "OtocHlaven";
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
                selectionFireAnim = "zasleh";
                memoryPointGunnerOptics = "gunnerview";
                memoryPointGunnerOutOptics = "gunnerview";
                minElev = -18;
                maxElev = 40;
                weapons[] = {"rhs_weap_m240_m113"};
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
            };
            class CoDriverTurret: CoDriverTurret {};
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.05, -3.12, -1.02};
            };
        };
    };
    class rhsusf_M1151_MCTAGS_base: rhsusf_m1151_GPK_base {
        picture = "\rhsusf\addons\rhsusf_m11xx\pictures\rhs_m1151_mctags_pic_ca.paa";
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6",
            "camo7",
            "camo8",
            "camo19",
            "BFT_screen"
        };
        class textureSources {
            class rhs_desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
                    "rhsusf\addons\rhsusf_rg33l\data\mctags_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
                    "rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_des_co.paa"
                };
                factions[] = {};
                decals[] = {7};
            };
            class rhs_woodland {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
                    "rhsusf\addons\rhsusf_rg33l\data\mctags_wd_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
                    "rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa"
                };
                factions[] = {};
                decals[] = {7};
            };
            class rhs_olive {
                displayName = "Olive";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1151_Ext_o_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1152M1165_o_CO.paa",
                    "rhsusf\addons\rhsusf_rg33l\data\mctags_wd_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
                    "rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa"
                };
                factions[] = {};
                decals[] = {7};
            };
        };
        class Hitpoints: Hitpoints {
            class HitGlass7 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass7";
                name = "glass7";
                visual = "glass7";
            };
            class HitGlass8 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass8";
                name = "glass8";
                visual = "glass8";
            };
            class HitGlass9 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass9";
                name = "glass9";
                visual = "glass9";
            };
            class HitGlass10 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass10";
                name = "glass10";
                visual = "glass10";
            };
            class HitGlass11 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass11";
                name = "glass11";
                visual = "glass11";
            };
            class HitGlass12 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass12";
                name = "glass12";
                visual = "glass12";
            };
        };
        class AnimationSources: AnimationSources {
            class dwf_kit_Hide: dwf_kit_Hide {
                initPhase = 0;
            };
            class snorkel_lower: snorkel_lower {
                initPhase = 0;
            };
            class DUKE_Hide: DUKE_Hide {};
            class bumper2_hide {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                source = "user";
                displayName = "hide front protective bumper";
                animPeriod = 0.00001;
                useSource = 1;
                initPhase = 1;
            };
            class HitGlass7 {
                source = "Hit";
                hitpoint = "HitGlass7";
                raw = 1;
            };
            class HitGlass8 {
                source = "Hit";
                hitpoint = "HitGlass8";
                raw = 1;
            };
            class HitGlass9 {
                source = "Hit";
                hitpoint = "HitGlass9";
                raw = 1;
            };
            class HitGlass10 {
                source = "Hit";
                hitpoint = "HitGlass10";
                raw = 1;
            };
            class HitGlass11 {
                source = "Hit";
                hitpoint = "HitGlass11";
                raw = 1;
            };
            class HitGlass12 {
                source = "Hit";
                hitpoint = "HitGlass12";
                raw = 1;
            };
        };
        animationList[] = {
            "DUKE_Hide",
            0.5,
            "bumper2_hide",
            0.75,
            "hide_rhino",
            0.75
        };
        threat[] = {0.9, 0.3, 0.1};
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        maxFordingDepth = 0.1;
        class Turrets: Turrets {
            class MCTAGS_Turret: GPK_Turret {
                gunnerAction = "RHS_MCTAGS_Gunner03";
                gunnerInAction = "RHS_MCTAGS_Gunner03_in";
            };
            class CoDriverTurret: CoDriverTurret {};
        };
    };
    class rhsusf_M1151_MCTAGS_M2_base: rhsusf_M1151_MCTAGS_base {
        model = "\rhsusf\addons\rhsusf_m11xx\rhsusf_m1151_m2_v3";
        displayName = "$STR_RHS_M1151_M2_V3_NAME";
        class AnimationSources: AnimationSources {
            class DUKE_Hide: DUKE_Hide {};
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
        class Turrets: Turrets {
            class MCTAGS_Turret: MCTAGS_Turret {
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
                gunnerLeftHandAnimName = "OtocHlaven";
                gunnerRightHandAnimName = "OtocHlaven";
                weapons[] = {"RHS_M2"};
                magazines[] = {
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red"
                };
            };
            class CoDriverTurret: CoDriverTurret {};
        };
    };
    class rhsusf_M1151_MCTAGS_Mk19_base: rhsusf_M1151_MCTAGS_base {
        model = "\rhsusf\addons\rhsusf_m11xx\rhsusf_m1151_mk19_v3";
        displayName = "$STR_RHS_M1151_MK19_V3_NAME";
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
        class Turrets: Turrets {
            class MCTAGS_Turret: MCTAGS_Turret {
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
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M1001",
                    "RHS_48Rnd_40mm_MK19_M1001",
                    "RHS_48Rnd_40mm_MK19_M1001"
                };
            };
            class CoDriverTurret: CoDriverTurret {};
        };
    };
    class rhsusf_M1151_MCTAGS_M240_base: rhsusf_M1151_MCTAGS_base {
        model = "\rhsusf\addons\rhsusf_m11xx\rhsusf_m1151_m240_v3";
        displayName = "$STR_RHS_M1151_M240_V3_NAME";
        class AnimationSources: AnimationSources {
            class DUKE_Hide: DUKE_Hide {};
            class ReloadAnim {
                source = "reload";
                weapon = "rhs_weap_m240_m113";
            };
            class ReloadMagazine {
                source = "reloadmagazine";
                weapon = "rhs_weap_m240_m113";
            };
            class Revolving {
                source = "revolving";
                weapon = "rhs_weap_m240_m113";
            };
            class muzzle_rot_MG {
                source = "ammorandom";
                weapon = "rhs_weap_m240_m113";
            };
        };
        class Turrets: Turrets {
            class MCTAGS_Turret: MCTAGS_Turret {
                gunnerAction = "RHS_MATV_Gunner_M240";
                gunnerInAction = "RHS_HMMWV_Gunner03_in";
                gunnerLeftHandAnimName = "OtocHlaven";
                gunnerRightHandAnimName = "OtocHlaven";
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
                selectionFireAnim = "zasleh";
                memoryPointGunnerOptics = "gunnerview";
                memoryPointGunnerOutOptics = "gunnerview";
                minElev = -18;
                maxElev = 40;
                weapons[] = {"rhs_weap_m240_m113"};
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
            };
            class CoDriverTurret: CoDriverTurret {};
        };
    };
    class rhsusf_M1151_GPK_M240_base: rhsusf_m1151_GPK_base {
        model = "\rhsusf\addons\rhsusf_m11xx\rhsusf_m1151_m240_v1";
        displayName = "$STR_RHS_M1151_M240_V1_NAME";
        class AnimationSources: AnimationSources {
            class DUKE_Hide: DUKE_Hide {};
            class ReloadAnim {
                source = "reload";
                weapon = "rhs_weap_m240_m113";
            };
            class ReloadMagazine {
                source = "reloadmagazine";
                weapon = "rhs_weap_m240_m113";
            };
            class Revolving {
                source = "revolving";
                weapon = "rhs_weap_m240_m113";
            };
            class muzzle_rot_MG {
                source = "ammorandom";
                weapon = "rhs_weap_m240_m113";
            };
        };
        class Turrets: Turrets {
            class GPK_Turret: GPK_Turret {
                gunnerAction = "RHS_MATV_Gunner_M240";
                gunnerInAction = "RHS_HMMWV_Gunner03_in";
                gunnerLeftHandAnimName = "OtocHlaven";
                gunnerRightHandAnimName = "OtocHlaven";
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
                selectionFireAnim = "zasleh";
                memoryPointGunnerOptics = "gunnerview";
                memoryPointGunnerOutOptics = "gunnerview";
                minElev = -18;
                maxElev = 40;
                weapons[] = {"rhs_weap_m240_m113"};
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
            };
            class CoDriverTurret: CoDriverTurret {};
        };
    };
    class rhsusf_M1151_GPK_MK19_base: rhsusf_m1151_GPK_base {
        model = "\rhsusf\addons\rhsusf_m11xx\rhsusf_m1151_mk19_v1";
        displayName = "$STR_RHS_M1151_MK19_V1_NAME";
        class AnimationSources: AnimationSources {
            class DUKE_Hide: DUKE_Hide {};
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
        class Turrets: Turrets {
            class GPK_Turret: GPK_Turret {
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
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M1001",
                    "RHS_48Rnd_40mm_MK19_M1001",
                    "RHS_48Rnd_40mm_MK19_M1001"
                };
            };
            class CoDriverTurret: CoDriverTurret {};
        };
    };
    class rhsusf_M1151_M2_LRAS3_base: rhsusf_M1151_GPK_M2_base {
        model = "\rhsusf\addons\rhsusf_m11xx\rhsusf_m1151_m2_lras3_v1";
        displayName = "$STR_RHS_M1151_M2_LRAS3_V1_NAME";
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6",
            "camo7",
            "camo8",
            "camo10",
            "BFT_screen"
        };
        class AnimationSources: AnimationSources {
            class DUKE_Hide: DUKE_Hide {};
            class mbgd_hide {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide M7 LVOSS";
                source = "user";
                animPeriod = 0.00001;
                initPhase = 1;
                onPhaseChanged = "_this call rhs_fnc_m11xx_handleWeaponVG";
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
            class Gunner_Rotate {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
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
            class smoke_revolving_source {
                source = "revolving";
                weapon = "rhsusf_weap_M7";
            };
        };
        class textureSources {
            class rhs_desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_GPK_d_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_lras3_d_co.paa"
                };
                decals[] = {8};
                factions[] = {};
            };
            class rhs_woodland {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_GPK_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_lras3_co.paa"
                };
                decals[] = {8};
                factions[] = {};
            };
            class rhs_olive {
                displayName = "Olive";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1151_Ext_o_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1152M1165_o_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_GPK_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
                    "rhsusf\addons\rhsusf_stryker\data\rhsusf_lras3_co.paa"
                };
                factions[] = {};
                decals[] = {7};
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
        };
        class Turrets: Turrets {
            class GPK_Turret: GPK_Turret {
                gunnerName = "Gunner";
                gunnerAction = "RHS_M11XX_LRAS_Gunner1_out";
                gunnerInAction = "RHS_M11XX_LRAS_Gunner1_in";
                gunnerForceOptics = 0;
                gunnerOutOpticsShowCursor = 0;
                viewGunnerInExternal = 1;
                LODTurnedOut = 1000;
                LODTurnedin = 1000;
                LODOpticsIn = 0;
                LODOpticsOut = 0;
                animationSourceHatch = "Hatch_Gunner_A";
                castGunnerShadow = 1;
                stabilizedInAxes = 0;
                startEngine = 0;
                usePip = 0;
                weapons[] = {};
                magazines[] = {};
                inGunnerMayFire = 1;
                outGunnerMayFire = 1;
                gunBeg = "";
                gunEnd = "";
                memoryPointGunnerOptics = "";
                memoryPointGunnerOutOptics = "gunnerview";
                memoryPointsGetInGunner = "pos cargo";
                memoryPointsGetInGunnerDir = "pos cargo dir";
                selectionFireAnim = "";
                gunnerOpticsModel = "";
                gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                optics = 0;
                disableSoundAttenuation = 0;
            };
            class Turret_Weapon: GPK_Turret {
                gunnercompartments = "Compartment5";
                soundServo[] = {"", 0.39810717, 1, 30};
                soundServoVertical[] = {"", 0.39810717, 1, 30};
                gunnerName = "Turret (M2)";
                gunnerDoor = "";
                gunnerAction = "RHS_M11XX_LRAS_Gunner2";
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
                gunnerAction = "RHS_M11XX_LRAS_Gunner3";
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
            class CoDriverTurret: CoDriverTurret {};
        };
        class UserActions: UserActions {
            class Use_M2 {
                displayName = "Use M2";
                position = "";
                radius = 4;
                onlyForplayer = 0;
                condition = "this animationSourcePhase 'Hatch_Gunner_A' > 0.5 and (this turretUnit [0]) isEqualTo (call rhs_fnc_findPlayer);";
                statement = "[this,'USE_M2'] call rhs_fnc_stryker_m1127_turret";
            };
            class Use_LRAS: Use_M2 {
                displayName = "Use LRAS3";
                condition = "this animationSourcePhase 'Hatch_Gunner_A' > 0.5 and (this turretUnit [0]) isEqualTo (call rhs_fnc_findPlayer);";
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
            class AdjustMap: AdjustMap {
                condition = "((this turretUnit [3]) isEqualTo (call rhs_fnc_findPlayer)) && this animationSourcePhase 'bft_hide'<0.5;";
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
        class EventHandlers: EventHandlers {
            class RHSUSF_m1127_EventHandlers {
                init = "_this call rhs_fnc_stryker_m1127_init";
                getin = "_this call rhs_fnc_stryker_m1127_turret_getin_eh";
                getout = "_this spawn rhs_fnc_stryker_m1127_turret_getout_eh";
                turnIn = "(_this + [false])  spawn rhs_fnc_stryker_m1127_turret_turnout;";
                turnOut = "(_this + [true]) spawn rhs_fnc_stryker_m1127_turret_turnout;";
            };
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.05, -3.12, -1.04};
            };
        };
    };
    class rhsusf_m1151_CROWS_base: rhsusf_m1151_base {
        picture = "\rhsusf\addons\rhsusf_m11xx\pictures\rhs_m1151_crows_pic_ca.paa";
        Icon = "\A3\soft_f\MRAP_01\Data\UI\map_MRAP_01_hmg_F_CA.paa";
        transportSoldier = 1;
        cargoAction[] = {"RHS_HMMWV_Cargo"};
        cargoProxyIndexes[] = {2};
        getInProxyOrder[] = {2};
        memoryPointsGetInCargo[] = {"pos cargo2"};
        memoryPointsGetInCargoDir[] = {"pos cargo2 dir"};
        cargoDoors[] = {"Door_RB"};
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6",
            "camo13",
            "BFT_screen"
        };
        class textureSources {
            class rhs_desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
                    "rhsusf\addons\rhsusf_caiman\data\m153_co.paa"
                };
                decals[] = {8};
                factions[] = {};
            };
            class rhs_woodland {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
                    "rhsusf\addons\rhsusf_caiman\data\m153_WD_co.paa"
                };
                decals[] = {8};
                factions[] = {};
            };
            class rhs_olive {
                displayName = "Olive";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1151_Ext_o_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1152M1165_o_CO.paa",
                    "rhsusf\addons\rhsusf_caiman\data\m153_WD_co.paa"
                };
                factions[] = {};
                decals[] = {7};
            };
        };
        class AnimationSources: AnimationSources {
            class rhino {
                source = "door";
                animPeriod = 2;
            };
            class hide_rhino {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide rhino";
                source = "user";
                mass = -20;
                animPeriod = 0.00001;
                useSource = 1;
                initPhase = 1;
            };
            class hit_rhino_source {
                source = "hit";
                hitpoint = "Hit_Rhino";
                raw = 1;
            };
        };
        class Hitpoints: HitPoints {
            class Hit_Rhino {
                armor = -50;
                armorComponent = "rhino";
                name = "rhino";
                visual = "-";
                minimalhit = -0.4;
                explosionShielding = 8.5;
                passThrough = 0;
                radius = 0.2;
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Rhino_Destruction_01 {
                        simulation = "particles";
                        type = "rhs_rhino_dst_01";
                        position = "fx_rhino_1";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.1;
                    };
                    class RHS_Rhino_Destruction_02: RHS_Rhino_Destruction_01 {
                        type = "rhs_rhino_dst_02";
                        position = "fx_rhino_2";
                    };
                    class RHS_Rhino_Destruction_03: RHS_Rhino_Destruction_01 {
                        type = "rhs_rhino_dst_03";
                        position = "fx_rhino_3";
                    };
                    class RHS_Rhino_Destruction_01_smoke: RHS_Rhino_Destruction_01 {
                        type = "SmallWreckSmoke";
                        position = "fx_rhino_1";
                    };
                    class RHS_Rhino_Destruction_02_smoke: RHS_Rhino_Destruction_01 {
                        type = "SmallWreckSmoke";
                        position = "fx_rhino_2";
                    };
                    class RHS_Rhino_Destruction_03_smoke: RHS_Rhino_Destruction_01 {
                        type = "SmallWreckSmoke";
                        position = "fx_rhino_3";
                    };
                    class RHS_Rhino_Destruction_01_sparks: RHS_Rhino_Destruction_01 {
                        type = "RHS_FireSparks";
                        position = "fx_rhino_1";
                    };
                    class RHS_Rhino_Destruction_02_sparks: RHS_Rhino_Destruction_01 {
                        type = "RHS_FireSparks";
                        position = "fx_rhino_2";
                    };
                    class RHS_Rhino_Destruction_03_sparks: RHS_Rhino_Destruction_01 {
                        type = "RHS_FireSparks";
                        position = "fx_rhino_3";
                    };
                };
            };
        };
        threat[] = {0.9, 0.3, 0.1};
        class UserActions: UserActions {
            class LowerRhino {
                displayName = "Lower Rhino";
                position = "pos_driverpos";
                radius = 2;
                showwindow = 0;
                condition = "((call rhs_fnc_findPlayer) == driver this) && {this animationphase 'hide_rhino' < 0.5} && {this getHitpointDamage 'Hit_Rhino' < 1} && {this doorPhase 'rhino' < 0.1;}";
                statement = "[this,1] call rhs_fnc_rhino_system";
                onlyforplayer = 1;
            };
            class RaiseRhino: LowerRhino {
                displayName = "Raise Rhino";
                condition = "((call rhs_fnc_findPlayer) == driver this) && {this animationphase 'hide_rhino' < 0.5} && {this getHitpointDamage 'Hit_Rhino' < 1} && {this doorPhase 'rhino' > 0.9};";
                statement = "[this,0] call rhs_fnc_rhino_system";
            };
            class AdjustMap: AdjustMap {
                condition = "((this turretUnit [1]) isEqualTo (call rhs_fnc_findPlayer)) && this animationSourcePhase 'bft_hide'<0.5;";
            };
        };
        class MFD: MFD {
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
                    ambient[] = {33, 33, 33, 1};
                    diffuse[] = {31, 31, 31, 1};
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
            class MFD_GPS {
                topLeft = "MFD_GPS_TL";
                topRight = "MFD_GPS_TR";
                bottomLeft = "MFD_GPS_BL";
                borderLeft = 0.01;
                borderRight = 0.01;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0.84, 0.86, 0.84};
                alpha = 1;
                enableParallax = 0;
                font = "rhsusf_digital_font_usa";
                class material {
                    ambient[] = {16, 16, 16, 1};
                    diffuse[] = {10, 10, 10, 1};
                    emissive[] = {2000, 4000, 2000, 1};
                };
                class Bones {};
                class Draw {
                    condition = "on";
                    color[] = {0, 0, 0, 1};
                    alpha = 0.8;
                    class PolygonDraw {
                        color[] = {0.0705882, 0.0862745, 0.0235294};
                        alpha = 1;
                        class Polygon2 {
                            type = "polygon";
                            points[] = {};
                        };
                        class Polygon {
                            type = "polygon";
                            texture = "\rhsusf\addons\rhsusf_matv\data\rhs_dagr_background_ca.paa";
                            points[] = {{{{0, -0.23}, 1}, {{1, -0.23}, 1}, {{1, 1.12}, 1}, {{0, 1.12}, 1}}};
                        };
                    };
                    class GoToWP_Text {
                        type = "text";
                        source = "static";
                        text = "GOTO WP";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.03, 0.85}, 1};
                        right[] = {{0.13, 0.85}, 1};
                        down[] = {{0.03, 0.97}, 1};
                    };
                    class WPList_Text {
                        type = "text";
                        source = "static";
                        text = "WP List";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.38, 0.85}, 1};
                        right[] = {{0.48, 0.85}, 1};
                        down[] = {{0.38, 0.97}, 1};
                    };
                    class Back_Text {
                        type = "text";
                        source = "static";
                        text = "Back";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.74, 0.85}, 1};
                        right[] = {{0.84, 0.85}, 1};
                        down[] = {{0.74, 0.97}, 1};
                    };
                    class Track_Text {
                        type = "text";
                        source = "static";
                        text = "TRACK";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.04, 0.65}, 1};
                        right[] = {{0.11, 0.65}, 1};
                        down[] = {{0.04, 0.74}, 1};
                    };
                    class Mag_Text {
                        type = "text";
                        source = "static";
                        text = "MAG";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.29, 0.65}, 1};
                        right[] = {{0.36, 0.65}, 1};
                        down[] = {{0.29, 0.74}, 1};
                    };
                    class o_Text {
                        type = "text";
                        source = "static";
                        text = "o";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.31, 0.69}, 1};
                        right[] = {{0.38, 0.69}, 1};
                        down[] = {{0.31, 0.78}, 1};
                    };
                    class Track_Value {
                        type = "text";
                        source = "heading";
                        sourceIndex = 2;
                        sourceScale = 1;
                        sourceLength = 1;
                        sourcePrecision = 1;
                        scale = 1;
                        align = "left";
                        refreshRate = 0.3;
                        pos[] = {{0.3, 0.69}, 1};
                        right[] = {{0.43, 0.69}, 1};
                        down[] = {{0.3, 0.86}, 1};
                    };
                    class Time_Value {
                        type = "text";
                        source = "time";
                        text = "%X";
                        sourceScale = 1;
                        sourceLength = 1;
                        sourcePrecision = 1;
                        scale = 1;
                        align = "left";
                        refreshRate = 0.08;
                        pos[] = {{0.7, 0.65}, 1};
                        right[] = {{0.8, 0.65}, 1};
                        down[] = {{0.7, 0.78}, 1};
                    };
                    class TimeText {
                        type = "text";
                        source = "static";
                        text = "Z";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.71, 0.65}, 1};
                        right[] = {{0.81, 0.65}, 1};
                        down[] = {{0.71, 0.78}, 1};
                    };
                    class Date_Day_Value {
                        type = "text";
                        source = "time";
                        text = "%d";
                        sourceScale = 1;
                        sourceLength = 1;
                        sourcePrecision = 1;
                        scale = 1;
                        align = "left";
                        refreshRate = 0.08;
                        pos[] = {{0.5, 0.73}, 1};
                        right[] = {{0.6, 0.73}, 1};
                        down[] = {{0.5, 0.86}, 1};
                    };
                    class Date_Month_Value {
                        type = "text";
                        source = "time";
                        text = "%b";
                        sourceScale = 1;
                        sourceLength = 1;
                        sourcePrecision = 1;
                        scale = 1;
                        align = "left";
                        refreshRate = 0.08;
                        pos[] = {{0.65, 0.73}, 1};
                        right[] = {{0.75, 0.73}, 1};
                        down[] = {{0.65, 0.86}, 1};
                    };
                    class Date_Year_Value {
                        type = "text";
                        source = "time";
                        text = "%y";
                        sourceScale = 1;
                        sourceLength = 1;
                        sourcePrecision = 1;
                        scale = 1;
                        align = "left";
                        refreshRate = 0.08;
                        pos[] = {{0.77, 0.73}, 1};
                        right[] = {{0.87, 0.73}, 1};
                        down[] = {{0.77, 0.86}, 1};
                    };
                    class Date1_Text {
                        type = "text";
                        source = "static";
                        text = "-";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.51, 0.73}, 1};
                        right[] = {{0.61, 0.73}, 1};
                        down[] = {{0.51, 0.86}, 1};
                    };
                    class Date2_Text {
                        type = "text";
                        source = "static";
                        text = "-";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.66, 0.73}, 1};
                        right[] = {{0.76, 0.73}, 1};
                        down[] = {{0.66, 0.86}, 1};
                    };
                    class Elevation_Text {
                        type = "text";
                        source = "static";
                        text = "ELEVATION";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.4, 0.43}, 1};
                        right[] = {{0.47, 0.43}, 1};
                        down[] = {{0.4, 0.52}, 1};
                    };
                    class Elevation2_Text {
                        type = "text";
                        source = "static";
                        text = "MSL";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.71, 0.43}, 1};
                        right[] = {{0.78, 0.43}, 1};
                        down[] = {{0.71, 0.52}, 1};
                    };
                    class Elevation_Value {
                        type = "text";
                        source = "altitudeASL";
                        sourceScale = 1;
                        sourceLength = 5;
                        scale = 1;
                        align = "left";
                        refreshRate = 0.8;
                        pos[] = {{0.73, 0.48}, 1};
                        right[] = {{0.855, 0.48}, 1};
                        down[] = {{0.73, 0.66}, 1};
                    };
                    class Elevation3_Text {
                        type = "text";
                        source = "static";
                        text = "+";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.42, 0.48}, 1};
                        right[] = {{0.545, 0.48}, 1};
                        down[] = {{0.42, 0.66}, 1};
                    };
                    class Elevation4_Text {
                        type = "text";
                        source = "static";
                        text = "m";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.74, 0.5}, 1};
                        right[] = {{0.84, 0.5}, 1};
                        down[] = {{0.74, 0.65}, 1};
                    };
                    class Speed_Text {
                        type = "text";
                        source = "static";
                        text = "SPEED";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.04, 0.43}, 1};
                        right[] = {{0.11, 0.43}, 1};
                        down[] = {{0.04, 0.52}, 1};
                    };
                    class Speed_Value {
                        type = "text";
                        source = "speed";
                        sourceScale = 3.6;
                        sourceLength = 1;
                        scale = 1;
                        align = "left";
                        refreshRate = 0.3;
                        pos[] = {{0.2, 0.48}, 1};
                        right[] = {{0.325, 0.48}, 1};
                        down[] = {{0.2, 0.66}, 1};
                    };
                    class Speed2_Text {
                        type = "text";
                        source = "static";
                        text = "kph";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.21, 0.5}, 1};
                        right[] = {{0.31, 0.5}, 1};
                        down[] = {{0.21, 0.65}, 1};
                    };
                    class MGRS_Text {
                        type = "text";
                        source = "static";
                        text = "MGRS-Arma";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.04, 0.08}, 1};
                        right[] = {{0.13, 0.08}, 1};
                        down[] = {{0.04, 0.2}, 1};
                    };
                    class CordX {
                        type = "text";
                        source = "coordinateX";
                        sourceScale = 0.01;
                        sourceLength = 3;
                        sourceOffset = -0.5;
                        align = "right";
                        scale = 1;
                        pos[] = {{0.09, 0.15}, 1};
                        right[] = {{0.215, 0.15}, 1};
                        down[] = {{0.09, 0.33}, 1};
                    };
                    class CordY: CordX {
                        source = "coordinateY";
                        pos[] = {{0.26, 0.15}, 1};
                        right[] = {{0.385, 0.15}, 1};
                        down[] = {{0.26, 0.33}, 1};
                    };
                    class wp_Text {
                        type = "text";
                        source = "static";
                        text = "WP";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.71, 0.08}, 1};
                        right[] = {{0.8, 0.08}, 1};
                        down[] = {{0.71, 0.2}, 1};
                    };
                    class WP {
                        condition = "wpvalid";
                        class WPIndex {
                            type = "text";
                            source = "wpIndex";
                            sourceScale = 1;
                            sourceLength = 2;
                            align = "left";
                            scale = 1;
                            pos[] = {{0.76, 0.15}, 1};
                            right[] = {{0.885, 0.15}, 1};
                            down[] = {{0.76, 0.33}, 1};
                        };
                        class WPdist {
                            type = "text";
                            source = "wpdist";
                            sourceScale = 0.001;
                            sourcePrecision = 1;
                            align = "left";
                            scale = 1;
                            pos[] = {{0.76, 0.27}, 1};
                            right[] = {{0.885, 0.27}, 1};
                            down[] = {{0.76, 0.45}, 1};
                        };
                    };
                    class PresentPos_Text {
                        type = "text";
                        source = "static";
                        text = "PRESENT POSITION";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.05, 0}, 1};
                        right[] = {{0.12, 0}, 1};
                        down[] = {{0.05, 0.09}, 1};
                    };
                    class STBY_Text {
                        type = "text";
                        source = "static";
                        text = "STBY";
                        scale = 1;
                        sourceScale = 1;
                        align = "left";
                        pos[] = {{0.95, 0.005}, 1};
                        right[] = {{1.02, 0.005}, 1};
                        down[] = {{0.95, 0.085}, 1};
                    };
                    class On_Text {
                        type = "text";
                        source = "static";
                        text = "ON";
                        scale = 1;
                        sourceScale = 1;
                        align = "left";
                        pos[] = {{0.89, 0.09}, 1};
                        right[] = {{0.94, 0.09}, 1};
                        down[] = {{0.89, 0.16}, 1};
                    };
                    class Static1_Text {
                        type = "text";
                        source = "static";
                        text = ">99dsf";
                        scale = 1;
                        sourceScale = 1;
                        align = "left";
                        pos[] = {{0.96, 0.235}, 1};
                        right[] = {{1.02, 0.235}, 1};
                        down[] = {{0.96, 0.325}, 1};
                    };
                    class Static2_Text {
                        type = "text";
                        source = "static";
                        text = "32534";
                        scale = 1;
                        sourceScale = 1;
                        align = "left";
                        pos[] = {{0.96, 0.54}, 1};
                        right[] = {{1.03, 0.54}, 1};
                        down[] = {{0.96, 0.63}, 1};
                    };
                };
            };
            class MFD_CROWS {
                topLeft = "CROWS_TL";
                topRight = "CROWS_TR";
                bottomLeft = "CROWS_BL";
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
                        source = "static";
                        text = "1.0x";
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
        };
        hideProxyInCombat = 1;
        class Turrets: Turrets {
            class CROWS_Turret: NewTurret {
                body = "mainTurret";
                gun = "mainGun";
                animationSourceBody = "mainTurret";
                animationSourceGun = "mainGun";
                turretInfoType = "RHS_RscM153_CROWS";
                usePip = 1;
                headAimDown = 22;
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
                soundServo[] = {
                    "A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01",
                    0.17782794,
                    1,
                    10
                };
                soundServoVertical[] = {
                    "A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01",
                    0.17782794,
                    1,
                    10
                };
                gunnerForceOptics = 0;
                gunnerOutOpticsShowCursor = 0;
                weapons[] = {};
                magazines[] = {};
                minElev = -20;
                maxElev = 60;
                LODTurnedIn = 1000;
                LODTurnedOut = 1000;
                gunnerAction = "RHS_M11XX_CROWS_Gunner";
                gunnerInAction = "RHS_M11XX_CROWS_Gunner";
                viewGunnerInExternal = 1;
                gunnerGetInAction = "GetInMRAP_01_cargo";
                gunnerGetOutAction = "GetOutMRAP_01";
                gunnerDoor = "Door_LB";
                gunnerCompartments = "Compartment1";
                ejectDeadGunner = 0;
                castGunnerShadow = 1;
                stabilizedInAxes = 3;
                canHideGunner = 1;
                forceHideGunner = 1;
                startEngine = 0;
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                memoryPointGunnerOptics = "PIP0_dir";
                memoryPointGunnerOutOptics = "PIP0_dir";
                gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_CROWS_monitor";
                gunnerOutOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_CROWS_monitor";
                disableSoundAttenuation = 0;
                animationSourceStickX = "gunner_stick_trav";
                animationSourceStickY = "gunner_stick_elev";
                outGunnerMayFire = 1;
                gunnerRightHandAnimName = "gunner_stick";
                memoryPointsGetInGunner = "pos cargo";
                memoryPointsGetInGunnerDir = "pos cargo dir";
                class ViewOptics: RCWSOptics {
                    initAngleX = -15;
                    minAngleX = -45;
                    maxAngleX = 45;
                    minFov = 0.0083333;
                    maxFov = 0.25;
                    initFov = 0.25;
                    visionMode[] = {"Normal"};
                    thermalMode[] = {0, 1};
                };
                class ViewGunner: ViewOptics {
                    initAngleX = -15;
                    minAngleX = -45;
                    maxAngleX = 45;
                    minFov = 0.25;
                    maxFov = 1.25;
                    initFov = 0.75;
                    visionMode[] = {"Normal"};
                    thermalMode[] = {2, 3};
                };
                class OpticsIn {
                    class DaysightWFOV: ViewOptics {
                        opticsDisplayName = "1.0x";
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_CROWS_monitor";
                        visionMode[] = {"Normal"};
                        hitpoint = "Hit_Optic_CROWS_Day";
                        initFov = 0.7;
                        minFov = 0.7;
                        maxFov = 0.7;
                    };
                    class ThermalWFOV: DaysightWFOV {
                        opticsDisplayName = "4.3x";
                        visionMode[] = {"TI"};
                        thermalMode[] = {0, 1};
                        hitpoint = "Hit_Optic_CROWS_TI";
                        initFov = 0.162791;
                        minFov = 0.162791;
                        maxFov = 0.162791;
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
                    class HitTurret {
                        armor = -120;
                        minimalHit = -0.13;
                        explosionShielding = 0.5;
                        name = "";
                        visual = "vis_turret";
                        armorComponent = "Hit_Turret";
                        passThrough = 0;
                    };
                    class HitGun {
                        armor = -120;
                        minimalHit = -0.13;
                        explosionShielding = 0.5;
                        name = "";
                        visual = "vis_gun";
                        armorComponent = "Hit_Gun";
                        passThrough = 0;
                    };
                };
            };
            class CoDriverTurret: CoDriverTurret {};
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
            class Gunner_display {
                renderTarget = "rendertarget2";
                class CameraView1 {
                    pointPosition = "PIP0_pos";
                    pointDirection = "PIP0_dir";
                    renderVisionMode = 2;
                    renderQuality = 2;
                    fov = 0.7;
                    turret[] = {0};
                };
                BBoxes[] = {"PIP_3_TL", "PIP_3_TR", "PIP_3_BL", "PIP_3_BR"};
            };
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.05, -3.12, -1.04};
            };
        };
    };
    class rhsusf_M1151_CROWS_M2_base: rhsusf_m1151_CROWS_base {
        model = "\rhsusf\addons\rhsusf_m11xx\rhsusf_m1151_m2crows";
        displayName = "$STR_RHS_M1151_M2_CROWS_NAME";
        Icon = "\A3\soft_f\MRAP_01\Data\UI\map_MRAP_01_hmg_F_CA.paa";
        class AnimationSources: AnimationSources {
            class ReloadAnim {
                source = "reload";
                weapon = "RHS_M2_CROWS_M153";
            };
            class ReloadMagazine {
                source = "reloadmagazine";
                weapon = "RHS_M2_CROWS_M153";
            };
            class Revolving {
                source = "revolving";
                weapon = "RHS_M2_CROWS_M153";
            };
            class muzzle_rot_MG {
                source = "ammorandom";
                weapon = "RHS_M2_CROWS_M153";
            };
        };
        class Turrets: Turrets {
            class CROWS_Turret: CROWS_Turret {
                weapons[] = {"RHS_M2_CROWS_M153"};
                magazines[] = {
                    "rhs_mag_400rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_400rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_400rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_400rnd_127x99_mag_Tracer_Red"
                };
            };
            class CoDriverTurret: CoDriverTurret {};
        };
    };
    class rhsusf_M1151_CROWS_Mk19_base: rhsusf_m1151_CROWS_base {
        model = "\rhsusf\addons\rhsusf_m11xx\rhsusf_m1151_mk19crows";
        displayName = "$STR_RHS_M1151_MK19_CROWS_NAME";
        Icon = "\A3\soft_f\MRAP_01\Data\UI\map_MRAP_01_hmg_F_CA.paa";
        class AnimationSources: AnimationSources {
            class ReloadAnim {
                source = "reload";
                weapon = "RHS_MK19_CROWS_M153";
            };
            class ReloadMagazine {
                source = "reloadmagazine";
                weapon = "RHS_MK19_CROWS_M153";
            };
            class Revolving {
                source = "revolving";
                weapon = "RHS_MK19_CROWS_M153";
            };
            class muzzle_rot_MG {
                source = "ammorandom";
                weapon = "RHS_MK19_CROWS_M153";
            };
        };
        class Turrets: Turrets {
            class CROWS_Turret: CROWS_Turret {
                weapons[] = {"RHS_MK19_CROWS_M153"};
                magazines[] = {"RHS_96Rnd_40mm_MK19_M430A1", "RHS_96Rnd_40mm_MK19_M430A1", "RHS_96Rnd_40mm_MK19_M430A1"};
            };
            class CoDriverTurret: CoDriverTurret {};
        };
    };
    class rhsusf_m1151_m2_v1_usarmy_d: rhsusf_M1151_GPK_M2_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_m2_v1_usarmy_d.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_GPK_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
        };
        textureList[] = {"rhs_desert", 1};
    };
    class rhsusf_m1151_m2_v1_usarmy_wd: rhsusf_m1151_m2_v1_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_m2_v1_usarmy_wd.paa";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_GPK_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
        };
        textureList[] = {"rhs_woodland", 1};
    };
    class rhsusf_m1151_m2_v2_usarmy_d: rhsusf_M1151_OGPK_M2_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_m2_v2_usarmy_d.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa"
        };
        textureList[] = {"rhs_desert", 1};
    };
    class rhsusf_m1151_m2_v2_usarmy_wd: rhsusf_m1151_m2_v2_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_m2_v2_usarmy_wd.paa";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa"
        };
        textureList[] = {"rhs_woodland", 1};
    };
    class rhsusf_m1151_m2_v3_usmc_d: rhsusf_M1151_MCTAGS_M2_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_m2_v3_usmc_d.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usmc_d";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\mctags_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
        };
        textureList[] = {"rhs_desert", 1};
    };
    class rhsusf_m1151_m2_v3_usmc_wd: rhsusf_m1151_m2_v3_usmc_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_m2_v3_usmc_wd.paa";
        faction = "rhs_faction_usmc_wd";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\mctags_wd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
        };
        textureList[] = {"rhs_woodland", 1};
    };
    class rhsusf_m1151_m240_v1_usarmy_d: rhsusf_M1151_GPK_M240_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_m240_v1_usarmy_d.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_GPK_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
        };
        textureList[] = {"rhs_desert", 1};
    };
    class rhsusf_m1151_m240_v1_usarmy_wd: rhsusf_m1151_m240_v1_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_m240_v1_usarmy_wd.paa";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_GPK_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
        };
        textureList[] = {"rhs_woodland", 1};
    };
    class rhsusf_m1151_m240_v2_usarmy_d: rhsusf_M1151_OGPK_M240_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_m240_v2_usarmy_d.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa",
            "rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_des_co.paa"
        };
        textureList[] = {"rhs_desert", 1};
    };
    class rhsusf_m1151_m240_v2_usarmy_wd: rhsusf_m1151_m240_v2_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_m240_v2_usarmy_wd.paa";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
            "rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa"
        };
        textureList[] = {"rhs_woodland", 1};
    };
    class rhsusf_m1151_m240_v3_usmc_d: rhsusf_M1151_MCTAGS_M240_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_m240_v3_usmc_d.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usmc_d";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\mctags_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_des_co.paa"
        };
        textureList[] = {"rhs_desert", 1};
    };
    class rhsusf_m1151_m240_v3_usmc_wd: rhsusf_m1151_m240_v3_usmc_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_m240_v3_usmc_wd.paa";
        faction = "rhs_faction_usmc_wd";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\mctags_wd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa"
        };
        textureList[] = {"rhs_woodland", 1};
    };
    class rhsusf_m1165_asv_m240_usaf_d: rhsusf_M1165_ASV_OGPK_M240_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1165_asv_m240_usaf_d.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usaf";
        crew = "rhsusf_airforce_security_force_rifleman";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1165_ASV_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1165_asv_label_d_ca.paa",
            "rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_des_co.paa"
        };
        textureList[] = {"rhs_desert", 1};
    };
    class rhsusf_m1165_asv_m240_usaf_wd: rhsusf_m1165_asv_m240_usaf_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1165_asv_m240_usaf_wd.paa";
        scope = 0;
        faction = "rhs_faction_usaf";
        crew = "rhsusf_airforce_security_force_rifleman";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1165_ASV_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1165_asv_label_wd_ca.paa",
            "rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa"
        };
        textureList[] = {"rhs_woodland", 1};
    };
    class rhsusf_m1151_mk19_v1_usarmy_d: rhsusf_M1151_GPK_MK19_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_mk19_v1_usarmy_d.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_GPK_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
        };
        textureList[] = {"rhs_desert", 1};
    };
    class rhsusf_m1151_mk19_v1_usarmy_wd: rhsusf_m1151_mk19_v1_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_mk19_v1_usarmy_wd.paa";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_GPK_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
        };
        textureList[] = {"rhs_woodland", 1};
    };
    class rhsusf_m1151_mk19_v2_usarmy_d: rhsusf_M1151_OGPK_MK19_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_mk19_v2_usarmy_d.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa"
        };
        textureList[] = {"rhs_desert", 1};
    };
    class rhsusf_m1151_mk19_v2_usarmy_wd: rhsusf_m1151_mk19_v2_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_mk19_v2_usarmy_wd.paa";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa"
        };
        textureList[] = {"rhs_woodland", 1};
    };
    class rhsusf_m1151_mk19_v3_usmc_d: rhsusf_M1151_MCTAGS_Mk19_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_mk19_v3_usmc_d.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usmc_d";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\mctags_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
        };
        textureList[] = {"rhs_desert", 1};
    };
    class rhsusf_m1151_mk19_v3_usmc_wd: rhsusf_m1151_mk19_v3_usmc_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_mk19_v3_usmc_wd.paa";
        faction = "rhs_faction_usmc_wd";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\mctags_wd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
        };
        textureList[] = {"rhs_woodland", 1};
    };
    class rhsusf_m1151_m2_lras3_v1_usarmy_d: rhsusf_M1151_M2_LRAS3_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_m2_lras3_v1_usarmy_d.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_GPK_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_lras3_d_co.paa"
        };
        textureList[] = {"rhs_desert", 1};
    };
    class rhsusf_m1151_m2_lras3_v1_usarmy_wd: rhsusf_m1151_m2_lras3_v1_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_m2_lras3_v1_usarmy_wd.paa";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_GPK_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_stryker\data\rhsusf_lras3_co.paa"
        };
        textureList[] = {"rhs_woodland", 1};
    };
    class rhsusf_m1151_m2crows_usarmy_d: rhsusf_M1151_CROWS_M2_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_m2crows_usarmy_d.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\m153_co.paa"
        };
        textureList[] = {"rhs_desert", 1};
    };
    class rhsusf_m1151_m2crows_usarmy_wd: rhsusf_m1151_m2crows_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_m2crows_usarmy_wd.paa";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\m153_WD_co.paa"
        };
        textureList[] = {"rhs_woodland", 1};
    };
    class rhsusf_m1151_m2crows_usmc_d: rhsusf_M1151_CROWS_M2_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_m2crows_usmc_d.paa";
        class AnimationSources: AnimationSources {
            class dwf_kit_Hide: dwf_kit_Hide {
                initPhase = 0;
            };
            class snorkel_lower: snorkel_lower {
                initPhase = 0;
            };
        };
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usmc_d";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        maxFordingDepth = 0.1;
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\m153_co.paa"
        };
        textureList[] = {"rhs_desert", 1};
    };
    class rhsusf_m1151_m2crows_usmc_wd: rhsusf_m1151_m2crows_usmc_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_m2crows_usmc_wd.paa";
        faction = "rhs_faction_usmc_wd";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\m153_WD_co.paa"
        };
        textureList[] = {"rhs_woodland", 1};
    };
    class rhsusf_m1151_mk19crows_usarmy_d: rhsusf_M1151_CROWS_Mk19_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_mk19crows_usarmy_d.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\m153_co.paa"
        };
        textureList[] = {"rhs_desert", 1};
    };
    class rhsusf_m1151_mk19crows_usarmy_wd: rhsusf_m1151_mk19crows_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_mk19crows_usarmy_wd.paa";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\m153_WD_co.paa"
        };
        textureList[] = {"rhs_woodland", 1};
    };
    class rhsusf_m1151_mk19crows_usmc_d: rhsusf_M1151_CROWS_Mk19_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_mk19crows_usmc_d.paa";
        class AnimationSources: AnimationSources {
            class dwf_kit_Hide: dwf_kit_Hide {
                initPhase = 0;
            };
            class snorkel_lower: snorkel_lower {
                initPhase = 0;
            };
        };
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usmc_d";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        maxFordingDepth = 0.1;
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_d_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_d_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\m153_co.paa"
        };
        textureList[] = {"rhs_desert", 1};
    };
    class rhsusf_m1151_mk19crows_usmc_wd: rhsusf_m1151_mk19crows_usmc_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1151_mk19crows_usmc_wd.paa";
        class AnimationSources: AnimationSources {
            class dwf_kit_Hide: dwf_kit_Hide {
                initPhase = 0;
            };
            class snorkel_lower: snorkel_lower {
                initPhase = 0;
            };
        };
        faction = "rhs_faction_usmc_wd";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        class Exhausts {
            class exhaust1 {
                position = "exhaust2_1";
                direction = "exhaust2_2";
                effect = "ExhaustsEffect";
            };
        };
        maxFordingDepth = 0.1;
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Ext_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\m153_WD_co.paa"
        };
        textureList[] = {"rhs_woodland", 1};
    };
    class rhsusf_M1165A1_GMV_SAG2_base: rhsusf_m1151_base {
        Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m1025_m2.paa";
        picture = "\rhsusf\addons\rhsusf_m11xx\pictures\rhs_m1165_gmv_sag2_pic_ca.paa";
        transportSoldier = 2;
        cargoAction[] = {
            "RHS_HMMWV_Cargo",
            "RHS_HMMWV_Cargo",
            "RHS_GMV_Cargo_lf",
            "RHS_GMV_Cargo_rf",
            "RHS_GMV_Cargo_lb",
            "RHS_GMV_Cargo_rb"
        };
        cargoProxyIndexes[] = {3, 2, 4, 5, 6, 7};
        getInProxyOrder[] = {3, 2, 4, 5, 6, 7};
        memoryPointsGetInCargo[] = {"pos cargo", "pos cargo2"};
        memoryPointsGetInCargoDir[] = {"pos cargo dir", "pos cargo2 dir"};
        weapons[] = {"TruckHorn2"};
        magazines[] = {};
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2",
            "camo8",
            "camo17",
            "camo18",
            "camo19",
            "BFT_screen"
        };
        class textureSources {
            class rhs_sofdesert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1165\data\rhsusf_M1165A1_GMV_Ext_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
                    "rhsusf\addons\rhsusf_m1165\data\rhsusf_M1165A1_GMV_CO.paa",
                    "rhsusf\addons\rhsusf_m1165\data\rhsusf_M1165A1_GMV_SAG_CO.paa",
                    "rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_des_co.paa"
                };
                decals[] = {8};
                factions[] = {};
            };
            class rhs_sofwoodland {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1165\data\rhsusf_M1165A1_GMV_Ext_WD_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
                    "rhsusf\addons\rhsusf_m1165\data\rhsusf_M1165A1_GMV_WD_CO.paa",
                    "rhsusf\addons\rhsusf_m1165\data\rhsusf_M1165A1_GMV_SAG_WD_CO.paa",
                    "rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa"
                };
                decals[] = {8};
                factions[] = {};
            };
        };
        class Hitpoints: HitPoints {
            class HitGlass7 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass7";
                name = "glass7";
                visual = "glass7";
            };
            class HitGlass8 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass8";
                name = "glass8";
                visual = "glass8";
            };
            class HitGlass9 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass9";
                name = "glass9";
                visual = "glass9";
            };
        };
        class AnimationSources: AnimationSources {
            class door_trunk: door_trunk {
                displayName = "";
            };
            class DUKE_Hide: DUKE_Hide {
                displayName = "";
            };
            class iff_hide: iff_hide {
                displayName = "";
            };
            class dwf_kit_Hide: dwf_kit_Hide {
                displayName = "";
            };
            class snorkel_lower: snorkel_lower {
                displayName = "";
            };
            class m1165_Hide: m1165_Hide {
                initPhase = 0;
            };
            class m1151_Hide: m1151_Hide {
                initPhase = 1;
            };
            class door_M {
                source = "door";
                animPeriod = 0.8;
                sound = "RHSUSF_Truck_Door";
                soundPosition = "osa_dvere_lp";
                displayName = "open middle door";
            };
            class door_R {
                source = "door";
                animPeriod = 0.8;
                sound = "RHSUSF_Truck_Door";
                soundPosition = "osa_dvere_lp";
                displayName = "open rear door";
            };
            class tools_hide {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide tools";
                source = "user";
                useSource = 1;
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class runningboard_hide {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide running boards";
                source = "user";
                useSource = 1;
                animPeriod = 0.00001;
                initPhase = 0;
                lockCargoAnimationPhase = 1;
                lockCargo[] = {2, 3, 4, 5};
            };
            class ammo_carrier_hide {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide ammo carrier";
                source = "user";
                useSource = 1;
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class sag_ammo_hide {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide turret ammo";
                source = "user";
                useSource = 1;
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class sparewheel_carrier_hide {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide spare wheel carrier";
                source = "user";
                useSource = 1;
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class sagr_hide {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide turret armor";
                source = "user";
                useSource = 1;
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class GunnerAdjust_source {
                source = "user";
                animPeriod = 1;
                initPhase = 0.25;
            };
            class FFV_L_door {
                source = "door";
                animPeriod = 0.8;
            };
            class FFV_R_door: FFV_L_door {};
            class HitGlass7 {
                source = "Hit";
                hitpoint = "HitGlass7";
                raw = 1;
            };
            class HitGlass8 {
                source = "Hit";
                hitpoint = "HitGlass8";
                raw = 1;
            };
            class HitGlass9 {
                source = "Hit";
                hitpoint = "HitGlass9";
                raw = 1;
            };
            class SwingArm_L_ReloadAnim {
                source = "reload";
                weapon = "rhs_weap_m240_gmv_l";
            };
            class SwingArm_L_ReloadMagazine {
                source = "reloadmagazine";
                weapon = "rhs_weap_m240_gmv_l";
            };
            class SwingArm_L_Revolving {
                source = "revolving";
                weapon = "rhs_weap_m240_gmv_l";
            };
            class SwingArm_L_muzzle_rot_MG {
                source = "ammorandom";
                weapon = "rhs_weap_m240_gmv_l";
            };
            class SwingArm_R_ReloadAnim {
                source = "reload";
                weapon = "rhs_weap_m240_gmv_r";
            };
            class SwingArm_R_ReloadMagazine {
                source = "reloadmagazine";
                weapon = "rhs_weap_m240_gmv_r";
            };
            class SwingArm_R_Revolving {
                source = "revolving";
                weapon = "rhs_weap_m240_gmv_r";
            };
            class SwingArm_R_muzzle_rot_MG {
                source = "ammorandom";
                weapon = "rhs_weap_m240_gmv_r";
            };
        };
        class Turrets: Turrets {
            class SAG_Turret: NewTurret {
                gunnerLeftHandAnimName = "OtocHlaven_Shake";
                gunnerRightHandAnimName = "OtocHlaven_Shake";
                gunnerLeftLegAnimName = "Gunner_Legs";
                gunnerRightLegAnimName = "Gunner_Legs";
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
                weapons[] = {};
                magazines[] = {};
                minElev = -10;
                maxElev = 40;
                soundServo[] = {"A3\sounds_f\dummysound", 0.000001, 1};
                gunnerAction = "RHS_HMMWV_Gunner03";
                gunnerInAction = "RHS_HMMWV_Gunner03_in";
                maxhorizontalrotspeed = 0.8;
                maxverticalrotspeed = 0.95;
                lodTurnedIn = 1000;
                lodTurnedOut = 1000;
                lodOpticsOut = 1000;
                canhideGunner = 1;
                inGunnerMayFire = 0;
                outGunnerMayFire = 1;
                viewGunnerInExternal = 1;
                gunnerGetInAction = "GetInLow";
                gunnerGetOutAction = "GetOutLow";
                gunnerDoor = "Door_LB";
                gunnerCompartments = "Compartment1";
                ejectDeadGunner = 0;
                castGunnerShadow = 1;
                stabilizedInAxes = 0;
                startEngine = 0;
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                memoryPointGunnerOptics = "";
                memoryPointGunnerOutOptics = "gunnerview";
                gunnerOpticsModel = "";
                gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                optics = 0;
                disableSoundAttenuation = 1;
                memoryPointsGetInGunner = "pos cargo";
                memoryPointsGetInGunnerDir = "pos cargo dir";
                class ViewOptics: ViewOptics {
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                class ViewGunner: ViewOptics {};
            };
            class SwingArm_L_Turret: NewTurret {
                gunnerName = "Gunner (M240)";
                proxyIndex = 3;
                commanding = -3;
                primaryGunner = 0;
                dontCreateAI = 1;
                gunnerLeftHandAnimName = "swingarm_l_gun";
                gunnerRightHandAnimName = "swingarm_l_gun";
                gunnerLeftLegAnimName = "swingarm_l_Gunner_Legs";
                gunnerRightLegAnimName = "swingarm_l_Gunner_Legs";
                body = "swingarm_l_Turret";
                gun = "swingarm_l_Gun";
                memoryPointGun = "swingarm_l_Usti";
                animationSourceBody = "swingarm_l_Turret";
                animationSourceGun = "swingarm_l_Gun";
                animationSourceStickX = "SwingArm_L_Turret_Inertia";
                animationSourceStickY = "SwingArm_L_Gun_Inertia";
                selectionFireAnim = "zasleh_3";
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
                weapons[] = {"rhs_weap_m240_gmv_l"};
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
                minElev = -10;
                maxElev = 40;
                minTurn = -180;
                maxTurn = 180;
                initTurn = 0;
                maxhorizontalrotspeed = 0.8;
                maxverticalrotspeed = 0.95;
                disableSoundAttenuation = 1;
                soundServo[] = {"A3\sounds_f\dummysound", 0.000001, 1};
                gunnerAction = "RHS_MATV_Gunner_M240";
                lodTurnedOut = 1000;
                lodOpticsOut = 1000;
                outGunnerMayFire = 1;
                viewGunnerInExternal = 1;
                gunnerGetInAction = "GetInLow";
                gunnerGetOutAction = "GetOutLow";
                gunnerDoor = "Door_LB";
                gunnerCompartments = "Compartment1";
                ejectDeadGunner = 0;
                castGunnerShadow = 1;
                stabilizedInAxes = 0;
                startEngine = 0;
                gunBeg = "swingarm_l_usti";
                gunEnd = "swingarm_l_konec";
                memoryPointsGetInGunner = "pos cargo";
                memoryPointsGetInGunnerDir = "pos cargo dir";
                memoryPointGunnerOptics = "swingarm_l_gunnerview";
                memoryPointGunnerOutOptics = "swingarm_l_gunnerview";
                gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                optics = 0;
                gunnerForceOptics = 0;
                gunnerOutOpticsShowCursor = 0;
                class ViewOptics: ViewOptics {
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                class ViewGunner: ViewOptics {};
            };
            class CoDriverTurret: CoDriverTurret {};
            class SwingArm_R_Turret: SwingArm_L_Turret {
                gunnerName = "Rear gunner";
                proxyIndex = 2;
                commanding = -3;
                primaryGunner = 0;
                dontCreateAI = 0;
                gunnerLeftHandAnimName = "swingarm_r_gun";
                gunnerRightHandAnimName = "swingarm_r_gun";
                gunnerLeftLegAnimName = "swingarm_r_Gunner_Legs";
                gunnerRightLegAnimName = "swingarm_r_Gunner_Legs";
                body = "swingarm_r_Turret";
                gun = "swingarm_r_Gun";
                memoryPointGun = "swingarm_r_Usti";
                animationSourceBody = "swingarm_r_Turret";
                animationSourceGun = "swingarm_r_Gun";
                animationSourceStickX = "SwingArm_R_Turret_Inertia";
                animationSourceStickY = "SwingArm_R_Gun_Inertia";
                selectionFireAnim = "zasleh_2";
                weapons[] = {"rhs_weap_m240_gmv_r"};
                turretInfoType = "RHS_RscWeaponZeroing_TurretAdjust";
                minElev = -10;
                maxElev = 40;
                minTurn = -190;
                maxTurn = -60;
                initTurn = -100;
                gunnerAction = "RHS_MATV_Gunner_M240";
                lodTurnedOut = 1000;
                lodOpticsOut = 1000;
                outGunnerMayFire = 1;
                viewGunnerInExternal = 1;
                gunnerGetInAction = "GetInLow";
                gunnerGetOutAction = "GetOutLow";
                gunnerDoor = "Door_R";
                gunnerCompartments = "Compartment1";
                gunBeg = "swingarm_r_usti";
                gunEnd = "swingarm_r_konec";
                memoryPointsGetInGunner = "pos swingarm_r";
                memoryPointsGetInGunnerDir = "pos swingarm_r dir";
                memoryPointGunnerOptics = "swingarm_r_gunnerview";
                memoryPointGunnerOutOptics = "swingarm_r_gunnerview";
            };
            class CargoTurret_01: CargoTurret {
                showAsCargo = 1;
                lodTurnedIn = 0;
                lodTurnedOut = 0;
                gunnerForceOptics = 0;
                gunnerName = "Running Board (Front Left)";
                proxyIndex = 4;
                isPersonTurret = 2;
                gunnerReversedGetOut = 0;
                gunnerAction = "RHS_GMV_Cargo_lf";
                gunnerinAction = "RHS_GMV_Cargo_lf";
                gunnerCompartments = "Compartment2";
                memoryPointsGetInGunner = "pos cargo_lf";
                memoryPointsGetInGunnerDir = "pos cargo_lf dir";
                ejectDeadCargo = 1;
                selectionFireAnim = "";
                class Hitpoints {};
                maxElev = 0;
                minElev = 0;
                maxTurn = 0;
                minTurn = 0;
            };
            class CargoTurret_02: CargoTurret_01 {
                gunnerName = "Running Board (Front Right)";
                proxyIndex = 5;
                gunnerAction = "RHS_GMV_Cargo_rf";
                gunnerInAction = "RHS_GMV_Cargo_rf";
                gunnerCompartments = "Compartment3";
                memoryPointsGetInGunner = "pos cargo_rf";
                memoryPointsGetInGunnerDir = "pos cargo_rf dir";
            };
            class CargoTurret_03: CargoTurret_01 {
                gunnerName = "Running Board (Rear Left)";
                proxyIndex = 6;
                gunnerAction = "RHS_GMV_Cargo_lb";
                gunnerInAction = "RHS_GMV_Cargo_lb";
                memoryPointsGetInGunner = "pos cargo_lb";
                memoryPointsGetInGunnerDir = "pos cargo_lb dir";
            };
            class CargoTurret_04: CargoTurret_02 {
                gunnerName = "Running Board (Rear Right)";
                proxyIndex = 7;
                gunnerAction = "RHS_GMV_Cargo_rb";
                gunnerInAction = "RHS_GMV_Cargo_rb";
                memoryPointsGetInGunner = "pos cargo_rb";
                memoryPointsGetInGunnerDir = "pos cargo_rb dir";
            };
        };
        class UserActions: UserActions {
            class SwitchTurret {
                position = "";
                radius = 4;
                onlyForplayer = 0;
                condition = "(this turretUnit [0]) isEqualTo (call rhs_fnc_findPlayer) OR (this turretUnit [2]) isEqualTo (call rhs_fnc_findPlayer);";
                displayName = "Switch turret";
                shortcut = "curatorMoveCamTo";
                statement = "[this,'SWITCH_WEAPON'] call rhs_fnc_m1165_turret";
                showwindow = 0;
            };
            class AdjustMap: AdjustMap {
                condition = "((this turretUnit [1]) isEqualTo (call rhs_fnc_findPlayer)) && this animationSourcePhase 'bft_hide'<0.5;";
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_Turret_EH {
                turnIn = "_this call rhsusf_fnc_turret_gunnerAdjust_turnIn";
                hit = "_this call rhsusf_fnc_turret_gunnerAdjust_AI_hit";
                engine = "_this call rhsusf_fnc_turret_gunnerAdjust_AI_engine";
            };
            class RHS_M1165_EH {
                init = "_this call rhs_fnc_m1165_init";
            };
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.05, -3.12, -1.04};
            };
        };
    };
    class rhsusf_M1165A1_GMV_SAG2_M2_M240_base: rhsusf_M1165A1_GMV_SAG2_base {
        model = "\rhsusf\addons\rhsusf_m1165\rhsusf_m1165a1_gmv_m2_m240";
        displayName = "$STR_RHS_M1165A1_GMV_M2_M240_NAME";
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
        class Turrets: Turrets {
            class SAG_Turret: SAG_Turret {
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
                gunnerLeftHandAnimName = "OtocHlaven";
                gunnerRightHandAnimName = "OtocHlaven";
                weapons[] = {"RHS_M2"};
                magazines[] = {
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red"
                };
            };
            class CoDriverTurret: CoDriverTurret {};
            class SwingArm_L_Turret: SwingArm_L_Turret {};
            class SwingArm_R_Turret: SwingArm_R_Turret {};
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.05, -3.12, -1.02};
            };
        };
    };
    class rhsusf_M1165A1_GMV_SAG2_M134D_M240_base: rhsusf_M1165A1_GMV_SAG2_base {
        model = "\rhsusf\addons\rhsusf_m1165\rhsusf_m1165a1_gmv_m134d_m240";
        displayName = "$STR_RHS_M1165A1_GMV_M134_M240_NAME";
        class AnimationSources: AnimationSources {
            class ReloadAnim {
                source = "reload";
                weapon = "rhs_weap_m134_mounted";
            };
            class Revolving {
                source = "revolving";
                weapon = "rhs_weap_m134_mounted";
            };
            class muzzle_rot_MG {
                source = "ammorandom";
                weapon = "rhs_weap_m134_mounted";
            };
            class Hide_Scopes {
                source = "user";
                initPhase = 0;
                useSource = 1;
                animPeriod = 0.1;
                displayName = "Hide DCL-120 sights";
            };
            class Gatling_1 {
                source = "revolving";
                weapon = "rhs_weap_m134_mounted";
            };
        };
        class Turrets: Turrets {
            class SAG_Turret: SAG_Turret {
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
                gunnerLeftHandAnimName = "OtocHlaven";
                gunnerRightHandAnimName = "OtocHlaven";
                gunnerAction = "RHS_M11XX_M134_Gunner";
                weapons[] = {"rhs_weap_m134_mounted"};
                magazines[] = {"rhs_mag_762x51_m80a1_4000", "rhs_mag_762x51_m80a1_4000"};
            };
            class CoDriverTurret: CoDriverTurret {};
            class SwingArm_L_Turret: SwingArm_L_Turret {};
            class SwingArm_R_Turret: SwingArm_R_Turret {};
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.05, -3.12, -1.02};
            };
        };
    };
    class rhsusf_M1165A1_GMV_SAG2_Mk19_M240_base: rhsusf_M1165A1_GMV_SAG2_base {
        model = "\rhsusf\addons\rhsusf_m1165\rhsusf_m1165a1_gmv_mk19_m240";
        displayName = "$STR_RHS_M1165A1_GMV_MK19_M240_NAME";
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
        class Turrets: Turrets {
            class SAG_Turret: SAG_Turret {
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
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M1001",
                    "RHS_48Rnd_40mm_MK19_M1001",
                    "RHS_48Rnd_40mm_MK19_M1001"
                };
            };
            class CoDriverTurret: CoDriverTurret {};
            class SwingArm_L_Turret: SwingArm_L_Turret {};
            class SwingArm_R_Turret: SwingArm_R_Turret {};
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.05, -3.12, -1.02};
            };
        };
    };
    class rhsusf_m1165a1_gmv_m2_m240_socom_d: rhsusf_M1165A1_GMV_SAG2_M2_M240_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1165a1_gmv_m2_m240_socom_d.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_socom";
        crew = "rhsusf_infantry_socom_armysf_rifleman";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m1165\data\rhsusf_M1165A1_GMV_Ext_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_m1165\data\rhsusf_M1165A1_GMV_CO.paa",
            "rhsusf\addons\rhsusf_m1165\data\rhsusf_M1165A1_GMV_SAG_CO.paa",
            "rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_des_co.paa"
        };
        textureList[] = {"rhs_sofdesert", 1};
    };
    class rhsusf_m1165a1_gmv_m134d_m240_socom_d: rhsusf_M1165A1_GMV_SAG2_M134D_M240_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1165a1_gmv_m134d_m240_socom_d.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_socom";
        crew = "rhsusf_infantry_socom_armysf_rifleman";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m1165\data\rhsusf_M1165A1_GMV_Ext_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_m1165\data\rhsusf_M1165A1_GMV_CO.paa",
            "rhsusf\addons\rhsusf_m1165\data\rhsusf_M1165A1_GMV_SAG_CO.paa"
        };
        textureList[] = {"rhs_sofdesert", 1};
    };
    class rhsusf_m1165a1_gmv_mk19_m240_socom_d: rhsusf_M1165A1_GMV_SAG2_Mk19_M240_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1165a1_gmv_mk19_m240_socom_d.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_socom";
        crew = "rhsusf_infantry_socom_armysf_rifleman";
        vehicleClass = "rhs_vehclass_car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m1165\data\rhsusf_M1165A1_GMV_Ext_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_d_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_m1165\data\rhsusf_M1165A1_GMV_CO.paa",
            "rhsusf\addons\rhsusf_m1165\data\rhsusf_M1165A1_GMV_SAG_CO.paa",
            "rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_des_co.paa"
        };
        textureList[] = {"rhs_sofdesert", 1};
    };
    class rhsusf_m1152_tcv_base: rhsusf_m1152_base {
        displayName = "$STR_RHS_M1152_TCV_NAME";
        cargoAction[] = {
            "Truck_Cargo02",
            "Truck_Cargo02",
            "Truck_Cargo04",
            "Truck_Cargo01"
        };
        cargoProxyIndexes[] = {2, 3, 4, 5};
        cargoCompartments[] = {"Compartment2"};
        getInProxyOrder[] = {1, 2, 3, 4, 5, 6, 7};
        memoryPointsGetInCargo[] = {"pos cargo"};
        memoryPointsGetInCargoDir[] = {"pos cargo dir"};
        transportSoldier = 4;
        class Turrets: Turrets {
            class CoDriverTurret: CoDriverTurret {};
            class CargoTurret_01: CargoTurret {
                gunnerAction = "passenger_inside_2";
                gunnerGetInAction = "GetInOffroadBack";
                gunnerGetOutAction = "GetOutHelicopterCargo";
                memoryPointsGetInGunner = "pos cargo LR";
                memoryPointsGetInGunnerDir = "pos cargo LR dir";
                gunnerName = "Passenger (Left Seat)";
                gunnerCompartments = "Compartment2";
                proxyIndex = 6;
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
                proxyIndex = 7;
                maxTurn = 105;
                minTurn = 20;
                minElev = -45;
            };
        };
        class AnimationSources: AnimationSources {
            class hide_spare: hide_spare {
                initPhase = 1;
            };
            class m1152_Hide: m1152_Hide {
                initPhase = 0;
                displayName = "";
            };
            class m1152_bench_Hide: m1152_bench_Hide {
                initPhase = 0;
            };
        };
        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 5;
                canBeTransported = 1;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
        };
    };
    class rhsusf_M1151_GPK_PKM_base: rhsusf_m1151_GPK_base {
        model = "\rhsusf\addons\rhsusf_m11xx\rhssaf_m1151_pkm_saf";
        displayName = "$STR_RHS_M1151_PKM_V1_NAME";
        weapons[] = {"TruckHorn2"};
        magazines[] = {};
        class MFD {};
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
                statement = "[this,0] call rhsusf_fnc_carLightToggle";
            };
            class cabinlights_toggle: lights_toggle {
                shortcut = "lockTarget";
                displayName = "Toggle cabin lights";
                statement = "[this,1] call rhsusf_fnc_carLightToggle";
            };
            class trunk_open {
                displayName = "Open Trunk";
                position = "trunk_action";
                radius = 2;
                onlyForplayer = 0;
                condition = "this  animationSourcePhase 'm1151_Hide'==0 && this animationSourcePhase 'door_trunk'<0.5";
                statement = "this animateSource ['door_trunk', 1];";
            };
            class trunk_close: trunk_open {
                displayName = "Close Trunk";
                condition = "this animationSourcePhase 'door_trunk'==1";
                statement = "this animateSource ['door_trunk', 0]";
            };
        };
        class AnimationSources: AnimationSources {
            class hide_rhino: hide_rhino {
                displayName = "";
            };
            class iff_hide: iff_hide {
                displayName = "";
            };
            class DUKE_Hide: DUKE_Hide {
                displayName = "";
            };
            class BFT_Hide: BFT_Hide {
                displayName = "";
            };
            class ReloadAnim {
                source = "reload";
                weapon = "rhs_weap_pkm_tigr";
            };
            class ReloadMagazine {
                source = "reloadmagazine";
                weapon = "rhs_weap_pkm_tigr";
            };
            class Revolving {
                source = "revolving";
                weapon = "rhs_weap_pkm_tigr";
            };
            class muzzle_rot_MG {
                source = "ammorandom";
                weapon = "rhs_weap_pkm_tigr";
            };
        };
        class Turrets: Turrets {
            class GPK_Turret: GPK_Turret {
                discreteDistance[] = {
                    420,
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
                discreteDistanceInitIndex = 0;
                gunnerAction = "RHS_M11XX_PKM_Gunner";
                gunnerInAction = "RHS_HMMWV_Gunner03_in";
                gunnerLeftHandAnimName = "weapon_pkm";
                gunnerRightHandAnimName = "weapon_pkm";
                selectionFireAnim = "zasleh";
                weapons[] = {"rhs_weap_pkm_tigr"};
                magazines[] = {
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100"
                };
            };
            class CoDriverTurret: CoDriverTurret {};
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.05, -2.47, -0.95};
            };
        };
    };
    class StaticWeapon: LandVehicle {
        class Turrets;
        class ViewOptics;
        class EventHandlers;
    };
    class rhs_rhino_trigger: StaticWeapon {
        scope = 1;
        model = "\rhsusf\addons\rhsusf_matv\rhs_rhino_trigger";
        armor = 15;
        side = 3;
        crew = "C_UAV_AI_F";
        class Turrets {};
        class Hitpoints {};
    };
};
