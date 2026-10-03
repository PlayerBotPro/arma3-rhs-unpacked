class CfgPatches {
    class rhsusf_c_fmtv {
        units[] = {
            "rhsusf_M1078A1P2_B_M2_WD_fmtv_usarmy",
            "rhsusf_M1078A1P2_B_WD_fmtv_usarmy",
            "rhsusf_M1078A1P2_WD_fmtv_usarmy",
            "rhsusf_M1078A1P2_B_WD_CP_fmtv_usarmy",
            "rhsusf_M1078A1P2_B_M2_WD_open_fmtv_usarmy",
            "rhsusf_M1078A1P2_B_WD_open_fmtv_usarmy",
            "rhsusf_M1078A1P2_WD_open_fmtv_usarmy",
            "rhsusf_M1078A1P2_B_M2_WD_flatbed_fmtv_usarmy",
            "rhsusf_M1078A1P2_B_WD_flatbed_fmtv_usarmy",
            "rhsusf_M1078A1P2_WD_flatbed_fmtv_usarmy",
            "rhsusf_M1083A1P2_B_WD_fmtv_usarmy",
            "rhsusf_M1083A1P2_B_M2_WD_fmtv_usarmy",
            "rhsusf_M1083A1P2_WD_fmtv_usarmy",
            "rhsusf_M1083A1P2_B_WD_open_fmtv_usarmy",
            "rhsusf_M1083A1P2_B_M2_WD_open_fmtv_usarmy",
            "rhsusf_M1083A1P2_WD_open_fmtv_usarmy",
            "rhsusf_M1083A1P2_B_WD_flatbed_fmtv_usarmy",
            "rhsusf_M1083A1P2_B_M2_WD_flatbed_fmtv_usarmy",
            "rhsusf_M1083A1P2_WD_open_flatbed_usarmy",
            "rhsusf_M1084A1P2_WD_fmtv_usarmy",
            "rhsusf_M1084A1P2_B_WD_fmtv_usarmy",
            "rhsusf_M1084A1P2_B_M2_WD_fmtv_usarmy",
            "rhsusf_M1085A1P2_B_WD_Medical_fmtv_usarmy",
            "rhsusf_M1078A1P2_B_M2_D_fmtv_usarmy",
            "rhsusf_M1078A1P2_B_D_fmtv_usarmy",
            "rhsusf_M1078A1P2_D_fmtv_usarmy",
            "rhsusf_M1078A1P2_B_D_CP_fmtv_usarmy",
            "rhsusf_M1078A1P2_B_M2_D_open_fmtv_usarmy",
            "rhsusf_M1078A1P2_B_D_open_fmtv_usarmy",
            "rhsusf_M1078A1P2_D_open_fmtv_usarmy",
            "rhsusf_M1078A1P2_B_M2_D_flatbed_fmtv_usarmy",
            "rhsusf_M1078A1P2_B_D_flatbed_fmtv_usarmy",
            "rhsusf_M1078A1P2_D_flatbed_fmtv_usarmy",
            "rhsusf_M1083A1P2_B_D_fmtv_usarmy",
            "rhsusf_M1083A1P2_B_M2_D_fmtv_usarmy",
            "rhsusf_M1083A1P2_D_fmtv_usarmy",
            "rhsusf_M1083A1P2_B_D_open_fmtv_usarmy",
            "rhsusf_M1083A1P2_B_M2_D_open_fmtv_usarmy",
            "rhsusf_M1083A1P2_D_open_fmtv_usarmy",
            "rhsusf_M1083A1P2_B_D_flatbed_fmtv_usarmy",
            "rhsusf_M1083A1P2_B_M2_D_flatbed_fmtv_usarmy",
            "rhsusf_M1083A1P2_D_open_flatbed_usarmy",
            "rhsusf_M1084A1P2_D_fmtv_usarmy",
            "rhsusf_M1084A1P2_B_D_fmtv_usarmy",
            "rhsusf_M1084A1P2_B_M2_D_fmtv_usarmy",
            "rhsusf_M1085A1P2_B_D_Medical_fmtv_usarmy",
            "rhsusf_M1078A1R_SOV_M2_D_fmtv_socom",
            "rhsusf_M1084A1R_SOV_M2_D_fmtv_socom",
            "rhsusf_M1078A1R_SOV_M2_WD_fmtv_socom",
            "rhsusf_M1084A1R_SOV_M2_WD_fmtv_socom"
        };
        weapons[] = {};
        requiredVersion = 1.38;
        requiredAddons[] = {"rhsusf_main", "rhsusf_c_troops"};
        name = "FMTV Trucks";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class DefaultEventhandlers;
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        RHS_FMTV_Driver = "RHS_FMTV_Driver";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class RHS_FMTV_Driver: Crew {
            file = "\rhsusf\addons\rhsusf_c_FMTV\anims\FMTV_Driver";
            interpolateTo[] = {"RHS_FMTV_KIA_Driver", 1};
        };
        class RHS_FMTV_KIA_Driver: DefaultDie {
            actions = "DeadActions";
            file = "\rhsusf\addons\rhsusf_C_FMTV\anims\FMTV_KIA_Driver";
            speed = 10000000000;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class fmtv_functions {
            class fmtv_Deploy {
                file = "\rhsusf\addons\rhsusf_c_fmtv\scripts\rhs_fmtv_Deploy.sqf";
                description = "FMTV shelter deploy script";
            };
        };
    };
};
class CfgVehicles {
    class LandVehicle;
    class Car: LandVehicle {
        class NewTurret;
    };
    class Car_F: Car {
        class AnimationSources;
        class HitPoints;
        class EventHandlers;
    };
    class Truck_F: Car_F {
        class ViewPilot;
        class ViewOptics;
        class HitPoints: HitPoints {
            class HitLFWheel;
            class HitLBWheel;
            class HitLMWheel;
            class HitLF2Wheel;
            class HitRFWheel;
            class HitRBWheel;
            class HitRMWheel;
            class HitRF2Wheel;
            class HitBody;
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
            class HitGlass5;
            class HitGlass6;
        };
        class AnimationSources;
    };
    class Truck_01_base_F: Truck_F {
        class AnimationSources: AnimationSources {
            class HitGlass1;
        };
    };
    class rhsusf_fmtv_base: Truck_01_base_F {
        dlc = "RHS_USAF";
        category = "Car";
        side = 1;
        editorSubcategory = "rhs_EdSubcat_truck";
        vehicleClass = "rhs_vehclass_truck";
        insideSoundCoef = 0.4;
        displayName = "FMTV";
        selectionBrakeLights = "light_brake";
        selectionBackLights = "light_drive";
        model = "\rhsusf\addons\rhsusf_fmtv\M1078A1P2_B";
        picture = "\rhsusf\addons\rhsusf_main\data\WIP_ca.paa";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1078.paa";
        mapSize = 8.02;
        headAimDown = 5;
        driverLeftHandAnimName = "drivewheel";
        driverRightHandAnimName = "drivewheel";
        driverRightLegAnimName = "pedal_r";
        showNVGGunner = 1;
        supplyRadius = 4.5;
        tf_hasLRradio_api = 0;
        extCameraPosition[] = {0.5, 2, -8};
        camShakeCoef = 0.4;
        driverAction = "RHS_FMTV_Driver";
        driverInAction = "RHS_FMTV_Driver";
        memoryPointsGetInCargo[] = {"pos codriver", "pos codriver", "pos cargo"};
        memoryPointsGetInCargoDir[] = {"pos codriver dir", "pos codriver dir", "pos cargo dir"};
        driverDoor = "Door_LF";
        cargoDoors[] = {"Door_RF", "Door_RF", ""};
        cargoCompartments[] = {1, 1, 2};
        viewDriverInExternal = 1;
        forceHideDriver = 1;
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
            "camo9",
            "camo10",
            "camo11",
            "camo12",
            "camo13",
            "camo14",
            "camo15",
            "camo16",
            "camo17",
            "camo18",
            "camo19"
        };
        class textureSources {
            class rhs_desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
                    "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa",
                    "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
                };
                factions[] = {};
            };
            class rhs_woodland {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
                    "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_wd_co.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_w_co.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
                    "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa",
                    "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
                };
                factions[] = {};
            };
        };
        textureList[] = {};
        class AnimationSources: AnimationSources {
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
            class light_svc: light_bo {
                initPhase = 1;
            };
            class Door_LF {
                source = "door";
                animPeriod = 0.8;
                sound = "RHSUSF_Truck_Door";
                soundPosition = "DoorL_axis";
            };
            class Door_RF: Door_LF {
                soundPosition = "DoorR_axis";
            };
            class hide_cover {
                source = "user";
                mass = -20;
                displayName = "hide cover";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class hide_spare: hide_cover {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide spare wheel";
            };
            class hide_scaffold: hide_cover {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide scaffold";
                forceAnimatePhase = 1;
                forceAnimate[] = {"hide_cover", 1};
            };
            class hide_bench {
                source = "user";
                displayName = "hide bench";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                lockCargoAnimationPhase = 1;
                lockCargo[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
                mass = -5;
                animPeriod = 0.00001;
                initPhase = 0;
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
            class light_svc_on {
                displayName = "Svc Drive on";
                position = "pos_driverpos";
                radius = 2;
                onlyForplayer = 0;
                condition = "(player == driver this) && this animationPhase 'light_svc'==1;";
                statement = "this animate ['light_svc', 0]";
            };
            class light_svc_off: light_svc_on {
                displayName = "Svc Drive off";
                condition = "(player == driver this) && this animationPhase 'light_svc'<0.5;";
                statement = "this animate ['light_svc', 1]";
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
        };
        class HitPoints: HitPoints {
            class HitFuel {
                armor = 0.5;
                material = -1;
                name = "palivo";
                visual = "-";
                passThrough = 0.2;
            };
            class HitEngine {
                armor = 0.5;
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
            class HitBody: HitBody {
                name = "";
                visual = "zbytek";
                passThrough = 1;
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
                useFlare = 1;
                position = "light_R_flare";
            };
            class Left2: Left {
                useFlare = 1;
                position = "light_L_flare";
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
            class cabin1 {
                color[] = {800, 900, 650};
                ambient[] = {5, 0, 0};
                intensity = 4;
                size = 1;
                innerAngle = 90;
                outerAngle = 165;
                coneFadeCoef = 1;
                position = "cabin_light1";
                direction = "cabin_light1_dir";
                hitpoint = "cabin_light1";
                selection = "cabin_light1";
                useFlare = 1;
                flareSize = 1;
                flareMaxDistance = 5;
                dayLight = 0;
                blinking = 0;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 70;
                    hardLimitStart = 2;
                    hardLimitEnd = 2.5;
                };
            };
        };
        aggregateReflectors[] = {{"Left", "Left2"}, {"Right", "Right2"}};
        armorLights = 0.01;
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
        normalSpeedForwardCoef = 0.9;
        turnCoef = 3;
        terrainCoef = 2;
        simulation = "carx";
        precision = 9;
        brakeDistance = 3;
        acceleration = 15;
        fireResistance = 5;
        maxSpeed = 98;
        fuelCapacity = 24;
        wheelCircumference = 3.705;
        brakeIdleSpeed = 2;
        canFloat = 0;
        maxFordingDepth = 0.6;
        waterResistance = 0.5;
        waterDamageEngine = 0.9;
        waterLeakiness = 9.5;
        waterSpeedFactor = 0.8;
        switchTime = 0.65;
        latency = 1.5;
        changeGearType = "rpmratio";
        changeGearOmegaRatios[] = {
            1.22917,
            0.416667,
            0.291667,
            0.208333,
            0.979167,
            0.25,
            0.916667,
            0.416667,
            0.916667,
            0.583333,
            0.916667,
            0.625,
            0.895833,
            0.625,
            0.916667,
            0.708333,
            1,
            0.75
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -6.03,
                "N",
                0,
                "D1",
                6.93,
                "D2",
                4.19,
                "D3",
                2.24,
                "D4",
                1.69,
                "D5",
                1.2,
                "D6",
                0.9,
                "D7",
                0.78
            };
            TransmissionRatios[] = {"High", 6.8};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        dampersBumpCoef = 6;
        differentialType = "all_limited";
        frontRearSplit = 0.3;
        frontBias = 1.3;
        rearBias = 1.3;
        centreBias = 1.3;
        clutchStrength = 35;
        dampingRateFullThrottle = 0.08;
        dampingRateZeroThrottleClutchEngaged = 2;
        dampingRateZeroThrottleClutchDisengaged = 0.35;
        torqueCurve[] = {
            {0.270833, 0.625997},
            {0.5, 0.805423},
            {0.6, 1},
            {0.666667, 0.988836},
            {0.75, 0.944976},
            {0.833333, 0.893142},
            {0.916667, 0.848485},
            {1.09417, 0}
        };
        engineMOI = 3;
        enginePower = 268;
        peakTorque = 1350;
        minOmega = 50;
        maxOmega = 251.33;
        idleRPM = 650;
        redRPM = 2400;
        engineLosses = 12;
        transmissionLosses = 5;
        thrustDelay = 0.5;
        engineBrakeCoef = 0.8;
        antiRollbarForceCoef = 20;
        antiRollbarForceLimit = 35;
        antiRollbarSpeedMin = 10;
        antiRollbarSpeedMax = 60;
        accelAidForceSpd = 2.23;
        accelAidForceCoef = 3;
        accelAidForceYOffset = -1.3;
        class Wheels {
            class L1 {
                side = "left";
                boneName = "wheel_1_1_damper";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                suspForceAppPointOffset = "wheel_1_1_axis";
                tireForceAppPointOffset = "wheel_1_1_axis";
                suspTravelDirection[] = {-0.125, -1, 0};
                width = 0.34;
                steering = 1;
                mass = 60;
                MOI = 45;
                dampingRate = 0.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 25000;
                maxHandBrakeTorque = 0;
                maxCompression = 0.12;
                maxDroop = 0.12;
                sprungMass = -1;
                springStrength = 64931;
                springDamperRate = 20778;
                longitudinalStiffnessPerUnitGravity = 10000;
                latStiffX = 25;
                latStiffY = 180;
                frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1, 1}};
            };
            class L2: L1 {
                boneName = "wheel_1_2_damper";
                steering = 0;
                maxHandBrakeTorque = 36000;
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
                suspTravelDirection[] = {0.125, -1, 0};
                steering = 1;
                side = "right";
            };
            class R2: R1 {
                boneName = "wheel_2_2_damper";
                steering = 0;
                maxHandBrakeTorque = 36000;
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                suspForceAppPointOffset = "wheel_2_2_axis";
                tireForceAppPointOffset = "wheel_2_2_axis";
            };
        };
        class Exhausts {
            class Exhaust1 {
                position = "vyfuk start";
                direction = "vyfuk konec";
                effect = "ExhaustEffectHEMTT";
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "a3\data_f\glass_veh.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_int.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "rhsusf\addons\rhsusf_rg33\data\kamaz_glass_in.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_dam.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\fmtv_destruction.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_dam.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\fmtv_destruction.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_dam.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\fmtv_destruction.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_dam.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\fmtv_destruction.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_Int.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_Int_dam.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\fmtv_destruction.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_dam.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\fmtv_destruction.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_dam.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\fmtv_destruction.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_dam.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\fmtv_destruction.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_dam.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\fmtv_destruction.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_dam.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\fmtv_destruction.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_dam.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\fmtv_destruction.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_Wheel_dam.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_Wheel_dam.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_dam.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_dam.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_dam.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_dam.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_sovcab.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_sovcab_dam.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\fmtv_destruction.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_sovkit.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_sovkit_dam.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\fmtv_destruction.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_sovrear.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\FMTV_sovrear_dam.rvmat",
                "rhsusf\addons\rhsusf_fmtv\data\fmtv_destruction.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        transportSoldier = 12;
        cargoProxyIndexes[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 13, 14};
        getInProxyOrder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
        class CargoTurret;
        class Turrets {
            class CargoTurret_01: CargoTurret {
                gunnerAction = "passenger_inside_2";
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
                selectionFireAnim = "";
                commanding = -2;
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
        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
            class RHSUSF_EventHandlers {
                engine = "_this call rhs_fnc_engineCheckDamage";
                postInit = "_this call rhs_fnc_reapplyTextures";
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
                count = 4;
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
    };
    class rhsusf_M1078A1P2_fmtv_usarmy: rhsusf_fmtv_base {
        slingLoadCargoMemoryPoints[] = {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        displayName = "$STR_M1078A1P2_Name";
        picture = "\rhsusf\addons\rhsusf_fmtv\Pictures\rhs_M1078A1P2_pic_ca.paa";
        model = "\rhsusf\addons\rhsusf_fmtv\M1078A1P2";
        accuracy = 0.5;
        class RHS_TowingSystem {
            class Carrier {
                rhs_maxCargoMass = 5443;
                rhs_attachPoint = "";
                rhs_attachPointPos[] = {-0.03, -2.75, -1.14};
            };
        };
    };
    class rhsusf_M1078A1P2_open_fmtv_usarmy: rhsusf_M1078A1P2_fmtv_usarmy {
        displayName = "$STR_M1078A1P2Open_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1078_open.paa";
        class AnimationSources: AnimationSources {
            class hide_cover: hide_cover {
                initPhase = 1;
            };
            class hide_scaffold: hide_scaffold {
                initPhase = 1;
            };
        };
    };
    class rhsusf_M1078A1P2_flatbed_fmtv_usarmy: rhsusf_M1078A1P2_fmtv_usarmy {
        displayName = "$STR_M1078A1P2Flat_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1078_open.paa";
        cargoProxyIndexes[] = {1, 2};
        getInProxyOrder[] = {1, 2};
        cargoCompartments[] = {1};
        transportSoldier = 2;
        class Turrets: Turrets {};
        class AnimationSources: AnimationSources {
            class hide_cover: hide_cover {
                initPhase = 1;
            };
            class hide_scaffold: hide_scaffold {
                initPhase = 1;
            };
            class hide_bench: hide_bench {
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
                maxLoadMass = 2267;
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
    class rhsusf_M1078A1P2_B_fmtv_usarmy: rhsusf_M1078A1P2_fmtv_usarmy {
        displayName = "$STR_M1078A1P2B_Name";
        picture = "\rhsusf\addons\rhsusf_fmtv\Pictures\rhs_M1078A1P2_B_pic_ca.paa";
        model = "\rhsusf\addons\rhsusf_fmtv\M1078A1P2_B";
        accuracy = 0.5;
        slingLoadCargoMemoryPoints[] = {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
    };
    class rhsusf_M1078A1P2_B_open_fmtv_usarmy: rhsusf_M1078A1P2_B_fmtv_usarmy {
        displayName = "$STR_M1078A1P2BOpen_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1078_open.paa";
        class AnimationSources: AnimationSources {
            class hide_cover: hide_cover {
                initPhase = 1;
            };
            class hide_scaffold: hide_scaffold {
                initPhase = 1;
            };
        };
    };
    class rhsusf_M1078A1P2_B_flatbed_fmtv_usarmy: rhsusf_M1078A1P2_B_fmtv_usarmy {
        displayName = "$STR_M1078A1P2BFlat_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1078_open.paa";
        cargoProxyIndexes[] = {1, 2};
        getInProxyOrder[] = {1, 2};
        cargoCompartments[] = {1, 2};
        transportSoldier = 2;
        class Turrets: Turrets {};
        class AnimationSources: AnimationSources {
            class hide_cover: hide_cover {
                initPhase = 1;
            };
            class hide_scaffold: hide_scaffold {
                initPhase = 1;
            };
            class hide_bench: hide_bench {
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
                maxLoadMass = 2267;
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
    class rhsusf_M1078A1P2_B_M2_fmtv_usarmy: rhsusf_M1078A1P2_B_fmtv_usarmy {
        displayName = "$STR_M1078A1P2B_M2_Name";
        picture = "\rhsusf\addons\rhsusf_fmtv\Pictures\rhs_M1078A1P2_B_GPK_pic_ca.paa";
        model = "\rhsusf\addons\rhsusf_fmtv\M1078A1P2_B_M2";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1078_m2.paa";
        mapSize = 10.02;
        transportSoldier = 11;
        memoryPointsGetInCargo[] = {"pos codriver", "pos cargo"};
        memoryPointsGetInCargoDir[] = {"pos codriver dir", "pos cargo dir"};
        unitInfoType = "RscUnitInfo";
        cargoDoors[] = {"Door_RF", ""};
        cargoProxyIndexes[] = {1, 3, 4, 5, 6, 7, 8, 9, 10, 13, 14};
        getInProxyOrder[] = {1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
        cargoCompartments[] = {1, 2};
        maxFordingDepth = 0;
        accuracy = 0.5;
        class AnimationSources: AnimationSources {
            class GunnerAdjust_source {
                source = "user";
                animPeriod = 1;
                initPhase = 0.25;
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
            class HitGlass10: HitGlass1 {
                hitpoint = "HitGlass10";
            };
            class HitGlass11: HitGlass1 {
                hitpoint = "HitGlass11";
            };
            class HitGlass12: HitGlass1 {
                hitpoint = "HitGlass12";
            };
            class HitGlass13: HitGlass1 {
                hitpoint = "HitGlass13";
            };
            class HitGlass14: HitGlass1 {
                hitpoint = "HitGlass14";
            };
            class HitGlass15: HitGlass1 {
                hitpoint = "HitGlass15";
            };
            class HitGlass16: HitGlass1 {
                hitpoint = "HitGlass16";
            };
            class HitGlass17: HitGlass1 {
                hitpoint = "HitGlass17";
            };
            class HitGlass20: HitGlass1 {
                hitpoint = "HitGlass20";
            };
            class HitGlass21: HitGlass1 {
                hitpoint = "HitGlass21";
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
        };
        animationList[] = {
            "hide_ogpkover",
            0.5,
            "hide_ogpknet",
            0.5,
            "hide_ogpkbust",
            0.5
        };
        class HitPoints: HitPoints {
            class HitGlass10: HitGlass1 {
                name = "glass10";
                visual = "glass10";
            };
            class HitGlass11: HitGlass1 {
                name = "glass11";
                visual = "glass11";
            };
            class HitGlass12: HitGlass1 {
                name = "glass12";
                visual = "glass12";
            };
            class HitGlass13: HitGlass1 {
                name = "glass13";
                visual = "glass13";
            };
            class HitGlass14: HitGlass1 {
                name = "glass14";
                visual = "glass14";
            };
            class HitGlass15: HitGlass1 {
                name = "glass15";
                visual = "glass15";
            };
            class HitGlass16: HitGlass1 {
                name = "glass16";
                visual = "glass16";
            };
            class HitGlass17: HitGlass1 {
                name = "glass17";
                visual = "glass17";
            };
            class HitGlass20: HitGlass1 {
                name = "glass20";
                visual = "glass20";
            };
            class HitGlass21: HitGlass1 {
                name = "glass21";
                visual = "glass21";
            };
        };
        threat[] = {0.9, 0.3, 0.1};
        class Turrets: Turrets {
            class M2_Turret: NewTurret {
                gunnerLeftHandAnimName = "OtocHlaven_Shake";
                gunnerRightHandAnimName = "OtocHlaven_Shake";
                gunnerLeftLegAnimName = "gunner_legs";
                gunnerRightLegAnimName = "gunner_legs";
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
                weapons[] = {"RHS_M2"};
                magazines[] = {
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red"
                };
                minElev = -10;
                maxElev = 40;
                soundServo[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
                soundServoVertical[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
                soundAttenuationTurret = "HeliAttenuationGunner";
                disableSoundAttenuation = 0;
                gunnerAction = "RHS_HMMWV_Gunner03";
                gunnerInAction = "RHS_HMMWV_Gunner03_in";
                lodTurnedIn = 0;
                lodTurnedOut = 1000;
                lodOpticsOut = 1000;
                canhideGunner = 1;
                inGunnerMayFire = 0;
                outGunnerMayFire = 1;
                viewGunnerInExternal = 1;
                gunnerGetInAction = "GetInMRAP_01_cargo";
                gunnerGetOutAction = "GetOutMRAP_01";
                gunnerDoor = "Door_RF";
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
                memoryPointsGetInGunner = "pos codriver";
                memoryPointsGetInGunnerDir = "pos codriver dir";
                class ViewOptics: ViewOptics {
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                class ViewGunner: ViewOptics {};
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
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
            class RightMirror2 {
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
                rhs_attachPointPos[] = {-0.03, -2.77, -1.76};
            };
        };
    };
    class rhsusf_M1078A1P2_B_M2_open_fmtv_usarmy: rhsusf_M1078A1P2_B_M2_fmtv_usarmy {
        displayName = "$STR_M1078A1P2BOPEN_M2_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1078_open.paa";
        class AnimationSources: AnimationSources {
            class hide_cover: hide_cover {
                initPhase = 1;
            };
            class hide_scaffold: hide_scaffold {
                initPhase = 1;
            };
        };
    };
    class rhsusf_M1078A1P2_B_M2_flatbed_fmtv_usarmy: rhsusf_M1078A1P2_B_M2_fmtv_usarmy {
        displayName = "$STR_M1078A1P2BFlat_M2_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1078_open.paa";
        cargoProxyIndexes[] = {1};
        getInProxyOrder[] = {1};
        cargoCompartments[] = {1};
        transportSoldier = 1;
        class Turrets: Turrets {
            class M2_Turret: M2_Turret {};
        };
        class AnimationSources: AnimationSources {
            class hide_cover: hide_cover {
                initPhase = 1;
            };
            class hide_scaffold: hide_scaffold {
                initPhase = 1;
            };
            class hide_bench: hide_bench {
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
                maxLoadMass = 2267;
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
    class rhsusf_M1083A1P2_fmtv_usarmy: rhsusf_M1078A1P2_fmtv_usarmy {
        displayName = "$STR_M1083A1P2_Name";
        picture = "\rhsusf\addons\rhsusf_fmtv\Pictures\rhs_M1083A1P2_pic_ca.paa";
        model = "\rhsusf\addons\rhsusf_fmtv\M1083A1P2";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1083.paa";
        mapSize = 9.62;
        accuracy = 0.5;
        transportSoldier = 14;
        extCameraPosition[] = {0.5, 2, -9};
        class Wheels: Wheels {
            class L1: L1 {
                mass = 60;
                MOI = 12;
                maxBrakeTorque = 25000;
                maxHandBrakeTorque = 0;
                springStrength = 47004;
                springDamperRate = 15041;
            };
            class L2: L1 {
                boneName = "wheel_1_2_damper";
                steering = 0;
                maxHandBrakeTorque = 36000;
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                suspForceAppPointOffset = "wheel_1_2_axis";
                tireForceAppPointOffset = "wheel_1_2_axis";
            };
            class L3: L1 {
                boneName = "wheel_1_3_damper";
                steering = 0;
                maxHandBrakeTorque = 36000;
                center = "wheel_1_3_axis";
                boundary = "wheel_1_3_bound";
                suspForceAppPointOffset = "wheel_1_3_axis";
                tireForceAppPointOffset = "wheel_1_3_axis";
            };
            class R1: L1 {
                boneName = "wheel_2_1_damper";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                suspForceAppPointOffset = "wheel_2_1_axis";
                tireForceAppPointOffset = "wheel_2_1_axis";
                suspTravelDirection[] = {0.125, -1, 0};
                steering = 1;
                side = "right";
            };
            class R2: R1 {
                boneName = "wheel_2_2_damper";
                steering = 0;
                maxHandBrakeTorque = 36000;
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                suspForceAppPointOffset = "wheel_2_2_axis";
                tireForceAppPointOffset = "wheel_2_2_axis";
            };
            class R3: R1 {
                boneName = "wheel_2_3_damper";
                steering = 0;
                maxHandBrakeTorque = 36000;
                center = "wheel_2_3_axis";
                boundary = "wheel_2_3_bound";
                suspForceAppPointOffset = "wheel_2_3_axis";
                tireForceAppPointOffset = "wheel_2_3_axis";
            };
        };
        class RHS_TowingSystem {
            class Carrier {
                rhs_maxCargoMass = 9596;
                rhs_attachPoint = "";
                rhs_attachPointPos[] = {-0, -3.3, -1.14};
            };
        };
    };
    class rhsusf_M1083A1P2_B_fmtv_usarmy: rhsusf_M1083A1P2_fmtv_usarmy {
        displayName = "$STR_M1083A1P2B_Name";
        picture = "\rhsusf\addons\rhsusf_fmtv\Pictures\rhs_M1083A1P2_B_pic_ca.paa";
        model = "\rhsusf\addons\rhsusf_fmtv\M1083A1P2_B";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1083.paa";
        mapSize = 9.62;
        accuracy = 0.5;
        transportSoldier = 14;
        class Wheels: Wheels {
            class L1: L1 {
                mass = 60;
                MOI = 12;
                maxBrakeTorque = 25000;
                maxHandBrakeTorque = 0;
                springStrength = 47004;
                springDamperRate = 15041;
            };
            class L2: L1 {
                boneName = "wheel_1_2_damper";
                steering = 0;
                maxHandBrakeTorque = 36000;
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                suspForceAppPointOffset = "wheel_1_2_axis";
                tireForceAppPointOffset = "wheel_1_2_axis";
            };
            class L3: L1 {
                boneName = "wheel_1_3_damper";
                steering = 0;
                maxHandBrakeTorque = 36000;
                center = "wheel_1_3_axis";
                boundary = "wheel_1_3_bound";
                suspForceAppPointOffset = "wheel_1_3_axis";
                tireForceAppPointOffset = "wheel_1_3_axis";
            };
            class R1: L1 {
                boneName = "wheel_2_1_damper";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                suspForceAppPointOffset = "wheel_2_1_axis";
                tireForceAppPointOffset = "wheel_2_1_axis";
                suspTravelDirection[] = {0.125, -1, 0};
                steering = 1;
                side = "right";
            };
            class R2: R1 {
                boneName = "wheel_2_2_damper";
                steering = 0;
                maxHandBrakeTorque = 36000;
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                suspForceAppPointOffset = "wheel_2_2_axis";
                tireForceAppPointOffset = "wheel_2_2_axis";
            };
            class R3: R1 {
                boneName = "wheel_2_3_damper";
                steering = 0;
                maxHandBrakeTorque = 36000;
                center = "wheel_2_3_axis";
                boundary = "wheel_2_3_bound";
                suspForceAppPointOffset = "wheel_2_3_axis";
                tireForceAppPointOffset = "wheel_2_3_axis";
            };
        };
    };
    class rhsusf_M1083A1P2_B_M2_fmtv_usarmy: rhsusf_M1083A1P2_B_fmtv_usarmy {
        displayName = "$STR_M1083A1P2B_M2_Name";
        picture = "\rhsusf\addons\rhsusf_fmtv\Pictures\rhs_M1083A1P2_B_GPK_pic_ca.paa";
        model = "\rhsusf\addons\rhsusf_fmtv\M1083A1P2_B_M2";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1083_m2.paa";
        mapSize = 10.02;
        memoryPointsGetInCargo[] = {"pos codriver", "pos cargo"};
        memoryPointsGetInCargoDir[] = {"pos codriver dir", "pos cargo dir"};
        unitInfoType = "RscUnitInfo";
        cargoDoors[] = {"Door_RF", ""};
        cargoProxyIndexes[] = {1, 3, 4, 5, 6, 7, 8, 9, 10, 13, 14, 15};
        getInProxyOrder[] = {1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
        cargoCompartments[] = {1, 2};
        transportSoldier = 13;
        maxFordingDepth = 0;
        accuracy = 0.5;
        class AnimationSources: AnimationSources {
            class GunnerAdjust_source {
                source = "user";
                animPeriod = 1;
                initPhase = 0.25;
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
            class HitGlass10: HitGlass1 {
                hitpoint = "HitGlass10";
            };
            class HitGlass11: HitGlass1 {
                hitpoint = "HitGlass11";
            };
            class HitGlass12: HitGlass1 {
                hitpoint = "HitGlass12";
            };
            class HitGlass13: HitGlass1 {
                hitpoint = "HitGlass13";
            };
            class HitGlass14: HitGlass1 {
                hitpoint = "HitGlass14";
            };
            class HitGlass15: HitGlass1 {
                hitpoint = "HitGlass15";
            };
            class HitGlass16: HitGlass1 {
                hitpoint = "HitGlass16";
            };
            class HitGlass17: HitGlass1 {
                hitpoint = "HitGlass17";
            };
            class HitGlass20: HitGlass1 {
                hitpoint = "HitGlass20";
            };
            class HitGlass21: HitGlass1 {
                hitpoint = "HitGlass21";
            };
        };
        animationList[] = {
            "hide_ogpkover",
            0.5,
            "hide_ogpknet",
            0.5,
            "hide_ogpkbust",
            0.5
        };
        class HitPoints: HitPoints {
            class HitGlass10: HitGlass1 {
                name = "glass10";
                visual = "glass10";
            };
            class HitGlass11: HitGlass1 {
                name = "glass11";
                visual = "glass11";
            };
            class HitGlass12: HitGlass1 {
                name = "glass12";
                visual = "glass12";
            };
            class HitGlass13: HitGlass1 {
                name = "glass13";
                visual = "glass13";
            };
            class HitGlass14: HitGlass1 {
                name = "glass14";
                visual = "glass14";
            };
            class HitGlass15: HitGlass1 {
                name = "glass15";
                visual = "glass15";
            };
            class HitGlass16: HitGlass1 {
                name = "glass16";
                visual = "glass16";
            };
            class HitGlass17: HitGlass1 {
                name = "glass17";
                visual = "glass17";
            };
            class HitGlass20: HitGlass1 {
                name = "glass20";
                visual = "glass20";
            };
            class HitGlass21: HitGlass1 {
                name = "glass21";
                visual = "glass21";
            };
        };
        threat[] = {0.9, 0.3, 0.1};
        class Turrets: Turrets {
            class M2_Turret: NewTurret {
                gunnerLeftHandAnimName = "OtocHlaven_Shake";
                gunnerRightHandAnimName = "OtocHlaven_Shake";
                gunnerLeftLegAnimName = "gunner_legs";
                gunnerRightLegAnimName = "gunner_legs";
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
                weapons[] = {"RHS_M2"};
                magazines[] = {
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red"
                };
                minElev = -10;
                maxElev = 40;
                soundServo[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
                soundServoVertical[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
                soundAttenuationTurret = "HeliAttenuationGunner";
                disableSoundAttenuation = 0;
                gunnerAction = "RHS_HMMWV_Gunner03";
                gunnerInAction = "RHS_HMMWV_Gunner03_in";
                lodTurnedIn = 0;
                lodTurnedOut = 1000;
                lodOpticsOut = 1000;
                canhideGunner = 1;
                inGunnerMayFire = 0;
                outGunnerMayFire = 1;
                viewGunnerInExternal = 1;
                gunnerGetInAction = "GetInMRAP_01_cargo";
                gunnerGetOutAction = "GetOutMRAP_01";
                gunnerDoor = "Door_RF";
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
                memoryPointsGetInGunner = "pos codriver";
                memoryPointsGetInGunnerDir = "pos codriver dir";
                class ViewOptics: ViewOptics {
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                class ViewGunner: ViewOptics {};
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
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
            class RightMirror2 {
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
                rhs_attachPointPos[] = {-0.01, -3.32, -1.76};
            };
        };
    };
    class rhsusf_M1083A1P2_open_fmtv_usarmy: rhsusf_M1083A1P2_fmtv_usarmy {
        displayName = "$STR_M1083A1P2Open_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1083_open.paa";
        class AnimationSources: AnimationSources {
            class hide_cover: hide_cover {
                initPhase = 1;
            };
            class hide_scaffold: hide_scaffold {
                initPhase = 1;
            };
        };
    };
    class rhsusf_M1083A1P2_flatbed_fmtv_usarmy: rhsusf_M1083A1P2_fmtv_usarmy {
        displayName = "$STR_M1083A1P2Flat_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1083_open.paa";
        cargoProxyIndexes[] = {1, 2};
        getInProxyOrder[] = {1, 2};
        cargoCompartments[] = {1};
        transportSoldier = 2;
        class Turrets: Turrets {};
        class AnimationSources: AnimationSources {
            class hide_cover: hide_cover {
                initPhase = 1;
            };
            class hide_scaffold: hide_scaffold {
                initPhase = 1;
            };
            class hide_bench: hide_bench {
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
                maxLoadMass = 4535;
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
    class rhsusf_M1083A1P2_B_open_fmtv_usarmy: rhsusf_M1083A1P2_B_fmtv_usarmy {
        displayName = "$STR_M1083A1P2BOpen_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1083_open.paa";
        class AnimationSources: AnimationSources {
            class hide_cover: hide_cover {
                initPhase = 1;
            };
            class hide_scaffold: hide_scaffold {
                initPhase = 1;
            };
        };
    };
    class rhsusf_M1083A1P2_B_flatbed_fmtv_usarmy: rhsusf_M1083A1P2_B_fmtv_usarmy {
        displayName = "$STR_M1083A1P2BFlat_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1083_open.paa";
        cargoProxyIndexes[] = {1, 2};
        getInProxyOrder[] = {1, 2};
        cargoCompartments[] = {1};
        transportSoldier = 2;
        class Turrets: Turrets {};
        class AnimationSources: AnimationSources {
            class hide_cover: hide_cover {
                initPhase = 1;
            };
            class hide_scaffold: hide_scaffold {
                initPhase = 1;
            };
            class hide_bench: hide_bench {
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
                maxLoadMass = 4535;
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
    class rhsusf_M1083A1P2_B_M2_open_fmtv_usarmy: rhsusf_M1083A1P2_B_M2_fmtv_usarmy {
        displayName = "$STR_M1083A1P2BOpen_M2_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1083_open_m2.paa";
        class AnimationSources: AnimationSources {
            class hide_cover: hide_cover {
                initPhase = 1;
            };
            class hide_scaffold: hide_scaffold {
                initPhase = 1;
            };
        };
    };
    class rhsusf_M1083A1P2_B_M2_flatbed_fmtv_usarmy: rhsusf_M1083A1P2_B_M2_fmtv_usarmy {
        displayName = "$STR_M1083A1P2BFlat_M2_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1083_open_m2.paa";
        cargoProxyIndexes[] = {1};
        getInProxyOrder[] = {1};
        cargoCompartments[] = {1};
        transportSoldier = 1;
        class Turrets: Turrets {
            class M2_Turret: M2_Turret {};
        };
        class AnimationSources: AnimationSources {
            class hide_cover: hide_cover {
                initPhase = 1;
            };
            class hide_scaffold: hide_scaffold {
                initPhase = 1;
            };
            class hide_bench: hide_bench {
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
                maxLoadMass = 4535;
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
    class rhsusf_M1084A1P2_fmtv_usarmy: rhsusf_M1083A1P2_fmtv_usarmy {
        displayName = "$STR_M1084A1P2_Name";
        picture = "\rhsusf\addons\rhsusf_fmtv\Pictures\rhs_M1084A1P2_pic_ca.paa";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1083_open.paa";
        model = "\rhsusf\addons\rhsusf_fmtv\M1084A1P2";
        cargoProxyIndexes[] = {1, 2};
        getInProxyOrder[] = {1, 2};
        cargoCompartments[] = {1, 2};
        transportSoldier = 2;
        maxFordingDepth = 0.7;
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
                maxLoadMass = 4536;
                cargoAlignment[] = {"center", "front"};
                cargoSpacing[] = {0, 0, 0};
                exits[] = {"VTV_exit"};
                unloadingInterval = 2;
                loadingDistance = 4.3;
                loadingAngle = 180;
                parachuteClassDefault = "B_Parachute_02_F";
                parachuteHeightLimitDefault = 5;
            };
        };
        class Turrets: Turrets {};
        class AnimationSources: AnimationSources {
            class hide_cover: hide_cover {
                displayName = "";
            };
            class hide_spare: hide_cover {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide spare wheel";
            };
            class hide_scaffold: hide_scaffold {
                displayName = "";
            };
            class hide_bench: hide_bench {
                displayName = "";
            };
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.04, -3.77, -1.06};
            };
        };
    };
    class rhsusf_M1084A1P2_B_fmtv_usarmy: rhsusf_M1084A1P2_fmtv_usarmy {
        displayName = "$STR_M1084A1P2B_Name";
        picture = "\rhsusf\addons\rhsusf_fmtv\Pictures\rhs_M1084A1P2_B_pic_ca.paa";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1083_open.paa";
        model = "\rhsusf\addons\rhsusf_fmtv\M1084A1P2_B";
    };
    class rhsusf_M1084A1P2_B_M2_fmtv_usarmy: rhsusf_M1083A1P2_B_M2_fmtv_usarmy {
        displayName = "$STR_M1084A1P2B_M2_Name";
        picture = "\rhsusf\addons\rhsusf_fmtv\Pictures\rhs_M1084A1P2_B_GPK_pic_ca.paa";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1083_m2.paa";
        model = "\rhsusf\addons\rhsusf_fmtv\M1084A1P2_B_M2";
        cargoProxyIndexes[] = {1};
        getInProxyOrder[] = {1};
        cargoCompartments[] = {1, 2};
        transportSoldier = 1;
        maxFordingDepth = 0;
        class Turrets: Turrets {
            class M2_Turret: M2_Turret {};
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
                maxLoadMass = 4536;
                cargoAlignment[] = {"center", "front"};
                cargoSpacing[] = {0, 0, 0};
                exits[] = {"VTV_exit"};
                unloadingInterval = 2;
                loadingDistance = 4.3;
                loadingAngle = 180;
                parachuteClassDefault = "B_Parachute_02_F";
                parachuteHeightLimitDefault = 5;
            };
        };
        class AnimationSources: AnimationSources {
            class hide_cover: hide_cover {
                displayName = "";
            };
            class hide_spare: hide_cover {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide spare wheel";
            };
            class hide_scaffold: hide_scaffold {
                displayName = "";
            };
            class hide_bench: hide_bench {
                displayName = "";
            };
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.04, -3.8, -1.75};
            };
        };
    };
    class rhsusf_M1078A1P2_B_CP_fmtv_usarmy: rhsusf_M1078A1P2_B_fmtv_usarmy {
        displayName = "$STR_M1078A1P2BCP_Name";
        picture = "\rhsusf\addons\rhsusf_fmtv\Pictures\rhs_M1078A1P2_B_CP_pic_ca.paa";
        model = "\rhsusf\addons\rhsusf_fmtv\M1078A1P2_B_CP";
        accuracy = 0.5;
        slingLoadCargoMemoryPoints[] = {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        cargoProxyIndexes[] = {1, 2, 3};
        getInProxyOrder[] = {1, 2, 3};
        cargoCompartments[] = {1, 2};
        transportSoldier = 3;
        class AnimationSources: AnimationSources {
            class hide_cover: hide_cover {
                displayName = "";
            };
            class hide_scaffold: hide_scaffold {
                displayName = "";
            };
            class hide_bench: hide_bench {
                displayName = "";
            };
            class hide_steps {
                source = "user";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class DoorB {
                source = "user";
                animPeriod = 3;
                sound = "RHSUSF_Truck_Door";
                soundPosition = "osa_dvere_lp";
            };
        };
        class Attributes {
            class rhs_hide_steps {
                control = "CheckboxNumber";
                defaultValue = "0";
                displayName = "Lower Stairs";
                property = "rhs_hide_steps";
                expression = "[_this,'hide_steps',1] spawn rhs_fnc_fmtv_Deploy";
            };
        };
        class UserActions: UserActions {
            class open_steps {
                shortcut = "";
                displayName = "Lower Stairs";
                condition = "(player == driver this) && (this animationSourcePhase 'hide_steps' < 0.5) && (speed this < 1)";
                position = "";
                radius = 12;
                priority = 1.5;
                showWindow = 0;
                onlyForplayer = 1;
                statement = "[this,'hide_steps',1] spawn rhs_fnc_fmtv_Deploy";
            };
            class close_steps: open_steps {
                displayName = "Remove Stairs";
                condition = "(player == driver this) && (this animationSourcePhase 'hide_steps' > 0.5)";
                statement = "[this,'hide_steps',0] spawn rhs_fnc_fmtv_Deploy";
            };
            class OpenCargoDoor {
                displayName = "Open Rear Door";
                position = "pos cargo";
                radius = 4.5;
                showwindow = 0;
                condition = "this animationSourcePhase 'DoorB' == 0";
                statement = "this animateSource ['DoorB', 1];this setVariable ['ramp_handler',1,true]";
                onlyforplayer = 1;
            };
            class CloseCargoDoor: OpenCargoDoor {
                displayName = "Close Rear Door";
                condition = "this animationSourcePhase 'DoorB' > 0";
                statement = "this animateSource ['DoorB', 0];this setVariable ['ramp_handler',0,true]";
            };
        };
        class Turrets: Turrets {};
        class RHS_TowingSystem {};
    };
    class rhsusf_M1085A1P2_B_Medical_fmtv_usarmy: rhsusf_M1083A1P2_B_fmtv_usarmy {
        displayName = "$STR_M1085A1P2B_MHQ_Name";
        picture = "\rhsusf\addons\rhsusf_fmtv\Pictures\rhs_M1085A1P2_B_CBPS_pic_ca.paa";
        model = "\rhsusf\addons\rhsusf_fmtv\M1085A1P2_B_MASH";
        accuracy = 0.5;
        slingLoadCargoMemoryPoints[] = {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        cargoProxyIndexes[] = {1, 2};
        getInProxyOrder[] = {1, 2};
        cargoCompartments[] = {1};
        transportSoldier = 2;
        class Wheels: Wheels {
            class L1: L1 {
                springStrength = 56624;
                springDamperRate = 18119;
            };
            class L2: L1 {
                boneName = "wheel_1_2_damper";
                steering = 0;
                maxHandBrakeTorque = 36000;
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                suspForceAppPointOffset = "wheel_1_2_axis";
                tireForceAppPointOffset = "wheel_1_2_axis";
            };
            class L3: L1 {
                boneName = "wheel_1_3_damper";
                steering = 0;
                maxHandBrakeTorque = 36000;
                center = "wheel_1_3_axis";
                boundary = "wheel_1_3_bound";
                suspForceAppPointOffset = "wheel_1_3_axis";
                tireForceAppPointOffset = "wheel_1_3_axis";
            };
            class R1: L1 {
                boneName = "wheel_2_1_damper";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                suspForceAppPointOffset = "wheel_2_1_axis";
                tireForceAppPointOffset = "wheel_2_1_axis";
                suspTravelDirection[] = {0.125, -1, 0};
                steering = 1;
                side = "right";
            };
            class R2: R1 {
                boneName = "wheel_2_2_damper";
                steering = 0;
                maxHandBrakeTorque = 36000;
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                suspForceAppPointOffset = "wheel_2_2_axis";
                tireForceAppPointOffset = "wheel_2_2_axis";
            };
            class R3: R1 {
                boneName = "wheel_2_3_damper";
                steering = 0;
                maxHandBrakeTorque = 36000;
                center = "wheel_2_3_axis";
                boundary = "wheel_2_3_bound";
                suspForceAppPointOffset = "wheel_2_3_axis";
                tireForceAppPointOffset = "wheel_2_3_axis";
            };
        };
        class AnimationSources: AnimationSources {
            class deploy_tent {
                source = "user";
                animPeriod = 5;
                initPhase = 0;
            };
            class deploy_platform {
                source = "user";
                animPeriod = 3;
                sound = "RHSUSF_Truck_Door";
                soundPosition = "osa_dvere_lp";
            };
            class hide_cover: hide_cover {
                displayName = "";
            };
            class hide_spare: hide_cover {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide spare wheel";
            };
            class hide_scaffold: hide_scaffold {
                displayName = "";
            };
            class hide_bench: hide_bench {
                displayName = "";
            };
        };
        class Attributes {
            class rhs_deploy_cbps {
                control = "CheckboxNumber";
                defaultValue = "0";
                displayName = "Deploy CBPS";
                property = "rhs_deploy_cbps";
                expression = "[_this,'deploy_platform',1,true] spawn rhs_fnc_fmtv_Deploy; _this animateSource ['deploy_tent',1,true]";
            };
        };
        class UserActions: UserActions {
            class DeployDeck {
                displayName = "Deploy Deck";
                position = "pos driver";
                radius = 15;
                showwindow = 0;
                condition = "this animationSourcePhase 'deploy_platform' == 0 and (speed this < 1) and {(call rhsusf_fnc_findPlayer) in this};";
                statement = "[this,'deploy_platform',1] spawn rhs_fnc_fmtv_Deploy";
                onlyforplayer = 1;
            };
            class UnDeployDeck: DeployDeck {
                displayName = "Remove Deck";
                condition = "(this animationSourcePhase 'deploy_platform' > 0) and (this animationSourcePhase 'deploy_tent' < 0.5) and {(call rhsusf_fnc_findPlayer) in this};";
                statement = "[this,'deploy_platform',0] spawn rhs_fnc_fmtv_Deploy";
            };
            class open_tent {
                shortcut = "";
                displayName = "Deploy CBPS";
                condition = "(this animationSourcePhase 'deploy_platform' > 0) && (this animationSourcePhase 'deploy_tent' < 0.5)";
                position = "";
                radius = 12;
                priority = 1.5;
                showWindow = 0;
                onlyForplayer = 1;
                statement = "this animateSource ['deploy_tent',1]";
            };
            class close_tent: open_tent {
                displayName = "Remove CBPS";
                condition = "this animationSourcePhase 'deploy_tent' > 0.5";
                statement = "this animateSource ['deploy_tent',0]";
            };
        };
        class Turrets: Turrets {};
        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 5;
                canBeTransported = 1;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
        };
        class RHS_TowingSystem {};
    };
    class rhsusf_M1078A1P2_B_M2_WD_fmtv_usarmy: rhsusf_M1078A1P2_B_M2_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1078A1P2_B_M2_WD_fmtv_usarmy.paa";
        displayName = "$STR_M1078A1P2B_M2_Name";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1078A1P2_B_WD_fmtv_usarmy: rhsusf_M1078A1P2_B_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1078A1P2_B_WD_fmtv_usarmy.paa";
        displayName = "$STR_M1078A1P2B_Name";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1078A1P2_WD_fmtv_usarmy: rhsusf_M1078A1P2_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1078A1P2_WD_fmtv_usarmy.paa";
        displayName = "$STR_M1078A1P2_Name";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1078A1P2_B_WD_CP_fmtv_usarmy: rhsusf_M1078A1P2_B_CP_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1078A1P2_B_WD_CP_fmtv_usarmy.paa";
        displayName = "$STR_M1078A1P2BCP_Name";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1078A1P2_B_M2_WD_open_fmtv_usarmy: rhsusf_M1078A1P2_B_M2_open_fmtv_usarmy {
        scope = 1;
        displayName = "$STR_M1078A1P2BOPEN_M2_Name";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1078A1P2_B_WD_open_fmtv_usarmy: rhsusf_M1078A1P2_B_open_fmtv_usarmy {
        scope = 1;
        displayName = "$STR_M1078A1P2BOpen_Name";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1078A1P2_WD_open_fmtv_usarmy: rhsusf_M1078A1P2_open_fmtv_usarmy {
        scope = 1;
        displayName = "$STR_M1078A1P2Open_Name";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1078A1P2_B_M2_WD_flatbed_fmtv_usarmy: rhsusf_M1078A1P2_B_M2_flatbed_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1078A1P2_B_M2_WD_flatbed_fmtv_usarmy.paa";
        displayName = "$STR_M1078A1P2BFlat_M2_Name";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1078A1P2_B_WD_flatbed_fmtv_usarmy: rhsusf_M1078A1P2_B_flatbed_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1078A1P2_B_WD_flatbed_fmtv_usarmy.paa";
        displayName = "$STR_M1078A1P2BFlat_Name";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1078A1P2_WD_flatbed_fmtv_usarmy: rhsusf_M1078A1P2_flatbed_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1078A1P2_WD_flatbed_fmtv_usarmy.paa";
        displayName = "$STR_M1078A1P2Flat_Name";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1083A1P2_B_WD_fmtv_usarmy: rhsusf_M1083A1P2_B_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1083A1P2_B_WD_fmtv_usarmy.paa";
        displayName = "$STR_M1083A1P2B_Name";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1083A1P2_B_M2_WD_fmtv_usarmy: rhsusf_M1083A1P2_B_M2_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1083A1P2_B_M2_WD_fmtv_usarmy.paa";
        displayName = "$STR_M1083A1P2B_M2_Name";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1083A1P2_WD_fmtv_usarmy: rhsusf_M1083A1P2_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1083A1P2_WD_fmtv_usarmy.paa";
        displayName = "$STR_M1083A1P2_Name";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1083A1P2_B_WD_open_fmtv_usarmy: rhsusf_M1083A1P2_B_open_fmtv_usarmy {
        scope = 1;
        displayName = "$STR_M1083A1P2BOpen_Name";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1083A1P2_B_M2_WD_open_fmtv_usarmy: rhsusf_M1083A1P2_B_M2_open_fmtv_usarmy {
        scope = 1;
        displayName = "$STR_M1083A1P2BOpen_M2_Name";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1083A1P2_WD_open_fmtv_usarmy: rhsusf_M1083A1P2_open_fmtv_usarmy {
        scope = 1;
        displayName = "$STR_M1083A1P2Open_Name";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1083A1P2_B_WD_flatbed_fmtv_usarmy: rhsusf_M1083A1P2_B_flatbed_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1083A1P2_B_WD_flatbed_fmtv_usarmy.paa";
        displayName = "$STR_M1083A1P2BFlat_Name";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1083A1P2_B_M2_WD_flatbed_fmtv_usarmy: rhsusf_M1083A1P2_B_M2_flatbed_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1083A1P2_B_M2_WD_flatbed_fmtv_usarmy.paa";
        displayName = "$STR_M1083A1P2BFlat_M2_Name";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1083A1P2_WD_flatbed_fmtv_usarmy: rhsusf_M1083A1P2_flatbed_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1083A1P2_WD_flatbed_fmtv_usarmy.paa";
        displayName = "$STR_M1083A1P2Flat_Name";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1084A1P2_WD_fmtv_usarmy: rhsusf_M1084A1P2_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1084A1P2_WD_fmtv_usarmy.paa";
        displayName = "$STR_M1084A1P2_Name";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1084A1P2_B_M2_WD_fmtv_usarmy: rhsusf_M1084A1P2_B_M2_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1084A1P2_B_M2_WD_fmtv_usarmy.paa";
        displayName = "$STR_M1084A1P2B_M2_Name";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1084A1P2_B_WD_fmtv_usarmy: rhsusf_M1084A1P2_B_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1084A1P2_B_WD_fmtv_usarmy.paa";
        displayName = "$STR_M1084A1P2B_Name";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1085A1P2_B_WD_Medical_fmtv_usarmy: rhsusf_M1085A1P2_B_Medical_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1085A1P2_B_WD_Medical_fmtv_usarmy.paa";
        displayName = "$STR_M1085A1P2B_MHQ_Name";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1078A1P2_B_M2_D_fmtv_usarmy: rhsusf_M1078A1P2_B_M2_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1078A1P2_B_M2_D_fmtv_usarmy.paa";
        displayName = "$STR_M1078A1P2B_M2_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1078_m2.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1078A1P2_B_D_fmtv_usarmy: rhsusf_M1078A1P2_B_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1078A1P2_B_D_fmtv_usarmy.paa";
        displayName = "$STR_M1078A1P2B_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1078.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1078A1P2_D_fmtv_usarmy: rhsusf_M1078A1P2_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1078A1P2_D_fmtv_usarmy.paa";
        displayName = "$STR_M1078A1P2_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1078.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1078A1P2_B_D_CP_fmtv_usarmy: rhsusf_M1078A1P2_B_CP_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1078A1P2_B_D_CP_fmtv_usarmy.paa";
        displayName = "$STR_M1078A1P2BCP_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1078.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1078A1P2_B_M2_D_open_fmtv_usarmy: rhsusf_M1078A1P2_B_M2_open_fmtv_usarmy {
        scope = 1;
        displayName = "$STR_M1078A1P2BOPEN_M2_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1078.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1078A1P2_B_D_open_fmtv_usarmy: rhsusf_M1078A1P2_B_open_fmtv_usarmy {
        scope = 1;
        displayName = "$STR_M1078A1P2BOpen_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1078.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1078A1P2_D_open_fmtv_usarmy: rhsusf_M1078A1P2_open_fmtv_usarmy {
        scope = 1;
        displayName = "$STR_M1078A1P2Open_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1078.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1078A1P2_B_M2_D_flatbed_fmtv_usarmy: rhsusf_M1078A1P2_B_M2_flatbed_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1078A1P2_B_M2_D_flatbed_fmtv_usarmy.paa";
        displayName = "$STR_M1078A1P2BFlat_M2_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1078.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1078A1P2_B_D_flatbed_fmtv_usarmy: rhsusf_M1078A1P2_B_flatbed_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1078A1P2_B_D_flatbed_fmtv_usarmy.paa";
        displayName = "$STR_M1078A1P2BFlat_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1078.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1078A1P2_D_flatbed_fmtv_usarmy: rhsusf_M1078A1P2_flatbed_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1078A1P2_D_flatbed_fmtv_usarmy.paa";
        displayName = "$STR_M1078A1P2Flat_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1078.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1083A1P2_B_D_fmtv_usarmy: rhsusf_M1083A1P2_B_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1083A1P2_B_D_fmtv_usarmy.paa";
        displayName = "$STR_M1083A1P2B_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1083.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1083A1P2_B_M2_D_fmtv_usarmy: rhsusf_M1083A1P2_B_M2_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1083A1P2_B_M2_D_fmtv_usarmy.paa";
        displayName = "$STR_M1083A1P2B_M2_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1083_m2.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1083A1P2_D_fmtv_usarmy: rhsusf_M1083A1P2_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1083A1P2_D_fmtv_usarmy.paa";
        displayName = "$STR_M1083A1P2_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1083.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1083A1P2_B_D_open_fmtv_usarmy: rhsusf_M1083A1P2_B_open_fmtv_usarmy {
        scope = 1;
        displayName = "$STR_M1083A1P2BOpen_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1083_open.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1083A1P2_B_M2_D_open_fmtv_usarmy: rhsusf_M1083A1P2_B_M2_open_fmtv_usarmy {
        scope = 1;
        displayName = "$STR_M1083A1P2BOpen_M2_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1083_m2.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1083A1P2_D_open_fmtv_usarmy: rhsusf_M1083A1P2_open_fmtv_usarmy {
        scope = 1;
        displayName = "$STR_M1083A1P2Open_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1083.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1083A1P2_B_D_flatbed_fmtv_usarmy: rhsusf_M1083A1P2_B_flatbed_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1083A1P2_B_D_flatbed_fmtv_usarmy.paa";
        displayName = "$STR_M1083A1P2BFlat_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1083_open.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1083A1P2_B_M2_D_flatbed_fmtv_usarmy: rhsusf_M1083A1P2_B_M2_flatbed_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1083A1P2_B_M2_D_flatbed_fmtv_usarmy.paa";
        displayName = "$STR_M1083A1P2BFlat_M2_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1083_m2.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1083A1P2_D_flatbed_fmtv_usarmy: rhsusf_M1083A1P2_flatbed_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1083A1P2_D_flatbed_fmtv_usarmy.paa";
        displayName = "$STR_M1083A1P2Flat_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1083.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1084A1P2_D_fmtv_usarmy: rhsusf_M1084A1P2_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1084A1P2_D_fmtv_usarmy.paa";
        displayName = "$STR_M1084A1P2_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1083_open.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1084A1P2_B_M2_D_fmtv_usarmy: rhsusf_M1084A1P2_B_M2_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1084A1P2_B_M2_D_fmtv_usarmy.paa";
        displayName = "$STR_M1084A1P2B_M2_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1083_open.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1084A1P2_B_D_fmtv_usarmy: rhsusf_M1084A1P2_B_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1084A1P2_B_D_fmtv_usarmy.paa";
        displayName = "$STR_M1084A1P2B_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1083_open.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1085A1P2_B_D_Medical_fmtv_usarmy: rhsusf_M1085A1P2_B_Medical_fmtv_usarmy {
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1085A1P2_B_D_Medical_fmtv_usarmy.paa";
        displayName = "$STR_M1085A1P2B_MHQ_Name";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1083.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1078A1R_SOV_M2_D_fmtv_socom: rhsusf_M1078A1P2_B_M2_fmtv_usarmy {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1078A1R_SOV_M2_D_fmtv_socom.paa";
        scope = 2;
        displayName = "$STR_M1078A1R_SOV_M2_Name";
        picture = "\rhsusf\addons\rhsusf_fmtv\Pictures\rhs_M1078A1R_SOV_pic_ca.paa";
        model = "\rhsusf\addons\rhsusf_fmtv\M1078A1R_SOV_M2";
        accuracy = 0.5;
        slingLoadCargoMemoryPoints[] = {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        cargoProxyIndexes[] = {2, 3};
        getInProxyOrder[] = {2, 3};
        cargoCompartments[] = {1, 1};
        memoryPointsGetInCargo[] = {"pos cargo L", "pos cargo"};
        memoryPointsGetInCargoDir[] = {"pos cargo L dir", "pos cargo dir"};
        transportSoldier = 2;
        transportAmmo = 150000;
        transportFuel = 150000;
        transportRepair = 100000000;
        supplyRadius = 12;
        faction = "rhs_faction_socom";
        crew = "rhsusf_infantry_socom_armysf_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
        attenuationEffectType = "OpenCarAttenuation";
        class RenderTargets {};
        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret {
                weapons[] = {"rhsusf_weap_DummyLauncher"};
                gunnerAction = "passenger_inside_8";
                gunnerName = "Passenger (Front)";
                gunnerGetInAction = "GetInMRAP_01_cargo";
                gunnerGetOutAction = "GetOutMRAP_01";
                memoryPointsGetInGunner = "pos codriver";
                memoryPointsGetInGunnerDir = "pos codriver dir";
                memoryPointGunnerOptics = "";
                gunnerDoor = "Door_RF";
                proxyIndex = 1;
                maxTurn = 75;
                minTurn = -75;
                maxElev = 45;
                minElev = -16;
                class dynamicViewLimits {};
                selectionFireAnim = "";
                class Hitpoints {};
            };
            class M2_Turret: NewTurret {
                gunnerLeftHandAnimName = "OtocHlaven_Shake";
                gunnerRightHandAnimName = "OtocHlaven_Shake";
                gunnerLeftLegAnimName = "gunner_legs";
                gunnerRightLegAnimName = "gunner_legs";
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
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red"
                };
                minElev = -10;
                maxElev = 40;
                soundServo[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
                soundServoVertical[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
                soundAttenuationTurret = "HeliAttenuationGunner";
                disableSoundAttenuation = 1;
                gunnerAction = "RHS_HMMWV_Gunner03";
                gunnerInAction = "RHS_HMMWV_Gunner03_in";
                lodTurnedIn = 0;
                lodTurnedOut = 1000;
                lodOpticsOut = 1000;
                canhideGunner = 0;
                inGunnerMayFire = 0;
                outGunnerMayFire = 1;
                viewGunnerInExternal = 1;
                gunnerGetInAction = "GetInMRAP_01_cargo";
                gunnerGetOutAction = "GetOutMRAP_01";
                gunnerDoor = "Door_RF";
                gunnerCompartments = "Compartment1";
                ejectDeadGunner = 0;
                castGunnerShadow = 1;
                stabilizedInAxes = 0;
                startEngine = 0;
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                memoryPointGunnerOptics = "gunnerview";
                memoryPointGunnerOutOptics = "gunnerview";
                gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                optics = 0;
                memoryPointsGetInGunner = "pos gunner";
                memoryPointsGetInGunnerDir = "pos gunner dir";
                class ViewOptics: ViewOptics {
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                class ViewGunner: ViewOptics {};
            };
        };
        class Reflectors: Reflectors {
            class Left: Left {};
            class Right: Right {};
            class Right2: Right2 {};
            class Left2: Left2 {};
            class Long_Left: Long_Left {};
            class Long_Right: Long_Right {};
            class Long_Right2: Long_Right2 {};
            class Long_Left2: Long_Left2 {};
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
        };
        class AnimationSources: AnimationSources {
            class hide_cover: hide_cover {
                displayName = "";
            };
            class hide_spare: hide_cover {
                displayName = "hide spare wheel";
            };
            class hide_scaffold: hide_scaffold {
                displayName = "";
            };
            class hide_bench: hide_bench {
                displayName = "";
            };
            class hide_ogpkover: hide_ogpkover {
                displayName = "";
            };
            class hide_ogpknet: hide_ogpknet {
                displayName = "";
            };
            class hide_ogpkbust: hide_ogpkbust {
                displayName = "";
            };
        };
        animationList[] = {};
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {0.02, -3.14, -1.6};
            };
        };
    };
    class rhsusf_M1084A1R_SOV_M2_D_fmtv_socom: rhsusf_M1084A1P2_B_M2_fmtv_usarmy {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1084A1R_SOV_M2_D_fmtv_socom.paa";
        scope = 2;
        displayName = "$STR_M1084A1R_SOV_M2_Name";
        picture = "\rhsusf\addons\rhsusf_fmtv\Pictures\rhs_M1084A1R_SOV_pic_ca.paa";
        model = "\rhsusf\addons\rhsusf_fmtv\M1084A1R_SOV_M2";
        accuracy = 0.5;
        slingLoadCargoMemoryPoints[] = {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        cargoProxyIndexes[] = {};
        getInProxyOrder[] = {};
        cargoCompartments[] = {};
        transportSoldier = 0;
        class RenderTargets {};
        faction = "rhs_faction_socom";
        crew = "rhsusf_infantry_socom_armysf_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
        weapons[] = {"TruckHorn2", "rhsusf_weap_M257_8"};
        magazines[] = {"rhsusf_mag_L8A3_8"};
        rhs_hasSmokeCap = 1;
        attenuationEffectType = "OpenCarAttenuation";
        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret {
                weapons[] = {"rhsusf_weap_DummyLauncher"};
                gunnerAction = "passenger_inside_8";
                gunnerName = "Passenger (Front)";
                gunnerGetInAction = "GetInMRAP_01_cargo";
                gunnerGetOutAction = "GetOutMRAP_01";
                memoryPointsGetInGunner = "pos codriver";
                memoryPointsGetInGunnerDir = "pos codriver dir";
                memoryPointGunnerOptics = "";
                gunnerDoor = "Door_RF";
                proxyIndex = 1;
                maxTurn = 75;
                minTurn = -75;
                maxElev = 45;
                minElev = -16;
                class dynamicViewLimits {};
                selectionFireAnim = "";
                class Hitpoints {};
                class TurnOut {
                    limitsArrayTop[] = {
                        {44.9999, -74.8644},
                        {44.8298, -6.648},
                        {18.1826, 3.9661},
                        {9.1268, 66.4426},
                        {9.1199, 75}
                    };
                    limitsArrayBottom[] = {{-15.9149, -74.8644}, {-16, 75}};
                };
                class TurnIn: TurnOut {};
            };
            class M2_Turret: NewTurret {
                gunnerLeftHandAnimName = "OtocHlaven_Shake";
                gunnerRightHandAnimName = "OtocHlaven_Shake";
                gunnerLeftLegAnimName = "gunner_legs";
                gunnerRightLegAnimName = "gunner_legs";
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
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red"
                };
                minElev = -10;
                maxElev = 40;
                soundServo[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
                soundServoVertical[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
                soundAttenuationTurret = "HeliAttenuationGunner";
                disableSoundAttenuation = 1;
                gunnerAction = "RHS_HMMWV_Gunner03";
                gunnerInAction = "RHS_HMMWV_Gunner03_in";
                lodTurnedIn = 0;
                lodTurnedOut = 1000;
                lodOpticsOut = 1000;
                canhideGunner = 0;
                inGunnerMayFire = 0;
                outGunnerMayFire = 1;
                viewGunnerInExternal = 1;
                gunnerGetInAction = "GetInMRAP_01_cargo";
                gunnerGetOutAction = "GetOutMRAP_01";
                gunnerCompartments = "Compartment1";
                ejectDeadGunner = 0;
                castGunnerShadow = 1;
                stabilizedInAxes = 0;
                startEngine = 0;
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                memoryPointGunnerOptics = "gunnerview";
                memoryPointGunnerOutOptics = "gunnerview";
                gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                optics = 0;
                memoryPointsGetInGunner = "pos codriver";
                memoryPointsGetInGunnerDir = "pos codriver dir";
                class ViewOptics: ViewOptics {
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                class ViewGunner: ViewOptics {};
            };
        };
        class Reflectors: Reflectors {
            class Left: Left {};
            class Right: Right {};
            class Right2: Right2 {};
            class Left2: Left2 {};
            class Long_Left: Long_Left {};
            class Long_Right: Long_Right {};
            class Long_Right2: Long_Right2 {};
            class Long_Left2: Long_Left2 {};
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
        };
        class AnimationSources: AnimationSources {
            class smoke_revolving_source {
                source = "revolving";
                weapon = "rhsusf_weap_M257_8";
            };
            class hide_cover: hide_cover {
                displayName = "";
            };
            class hide_spare: hide_cover {
                displayName = "hide spare wheel";
            };
            class hide_scaffold: hide_scaffold {
                displayName = "";
            };
            class hide_bench: hide_bench {
                displayName = "";
            };
            class hide_ogpkover: hide_ogpkover {
                displayName = "";
            };
            class hide_ogpknet: hide_ogpknet {
                displayName = "";
            };
            class hide_ogpkbust: hide_ogpkbust {
                displayName = "";
            };
        };
        animationList[] = {};
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.05, -3.81, -1.78};
            };
        };
    };
    class rhsusf_M1084A1R_SOV_M2_WD_fmtv_socom: rhsusf_M1084A1R_SOV_M2_D_fmtv_socom {
        scope = 1;
        scopeCurator = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1084A1R_SOV_M2_WD_fmtv_socom.paa";
        displayName = "$STR_M1084A1R_SOV_M2_Name";
        faction = "rhs_faction_socom";
        crew = "rhsusf_infantry_socom_armysf_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1078A1R_SOV_M2_WD_fmtv_socom: rhsusf_M1078A1R_SOV_M2_D_fmtv_socom {
        scope = 1;
        scopeCurator = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1078A1R_SOV_M2_WD_fmtv_socom.paa";
        displayName = "$STR_M1078A1R_SOV_M2_Name";
        faction = "rhs_faction_socom";
        crew = "rhsusf_infantry_socom_armysf_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
            "rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
            "rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1083A1P2_B_M2_wd_MHQ_fmtv_usarmy: rhsusf_M1078A1P2_B_WD_CP_fmtv_usarmy {
        scope = 1;
    };
    class rhsusf_M1083A1P2_B_M2_wd_Medical_fmtv_usarmy: rhsusf_M1085A1P2_B_WD_Medical_fmtv_usarmy {
        scope = 1;
    };
    class rhsusf_M1083A1P2_B_M2_d_MHQ_fmtv_usarmy: rhsusf_M1078A1P2_B_D_CP_fmtv_usarmy {
        scope = 1;
    };
    class rhsusf_M1083A1P2_B_M2_d_Medical_fmtv_usarmy: rhsusf_M1085A1P2_B_D_Medical_fmtv_usarmy {
        scope = 1;
    };
};
