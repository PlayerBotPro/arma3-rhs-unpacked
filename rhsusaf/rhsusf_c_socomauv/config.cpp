class CfgPatches {
    class rhsusf_c_M1239 {
        units[] = {
            "rhsusf_M1239_socom_d",
            "rhsusf_M1239_socom_wd",
            "rhsusf_M1239_M2_socom_wd",
            "rhsusf_M1239_M2_socom_d",
            "rhsusf_M1239_M2_Deploy_socom_d",
            "rhsusf_M1239_M2_Deploy_socom_wd",
            "rhsusf_M1239_Mk19_socom_wd",
            "rhsusf_M1239_Mk19_socom_d",
            "rhsusf_M1239_Mk19_Deploy_socom_d",
            "rhsusf_M1239_Mk19_Deploy_socom_wd"
        };
        weapons[] = {};
        requiredVersion = 1.38;
        requiredAddons[] = {"rhsusf_main", "rhsusf_c_troops"};
        name = "SOCOM AUV MRAP";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class DefaultEventhandlers;
class RCWSOptics;
class RscPicture;
class RscInGameUI {
    class RscUnitInfo;
    class RscWeaponZeroing: RscUnitInfo {
        class WeaponInfoControlsGroupLeft;
    };
};
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        RHS_AUV_Driver = "RHS_AUV_Driver";
        RHS_AUV_CoDriver = "RHS_AUV_CoDriver";
        RHS_AUV_CROWSgunner = "RHS_AUV_CROWSgunner";
        RHS_AUV_FFVpos = "RHS_AUV_FFVpos";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class RHS_AUV_Driver: Crew {
            file = "\rhsusf\addons\rhsusf_c_socomauv\anims\rhs_auv_dvr";
            interpolateTo[] = {"RHS_AUV_KIA_Driver", 1};
        };
        class RHS_AUV_KIA_Driver: DefaultDie {
            actions = "DeadActions";
            file = "\rhsusf\addons\rhsusf_c_socomauv\anims\rhs_auv_dvr_KIA";
            speed = 10000000000;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_AUV_CoDriver: Crew {
            file = "\rhsusf\addons\rhsusf_c_socomauv\anims\rhs_auv_codvr";
            interpolateTo[] = {"RHS_AUV_KIA_CoDriver", 1};
        };
        class RHS_AUV_KIA_CoDriver: DefaultDie {
            actions = "DeadActions";
            file = "\rhsusf\addons\rhsusf_c_socomauv\anims\rhs_auv_codvr_KIA";
            speed = 10000000000;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_AUV_CROWSgunner: Crew {
            file = "\rhsusf\addons\rhsusf_c_socomauv\anims\rhs_AUV_CROWSgunner";
            interpolateTo[] = {"RHS_AUV_KIA_CROWSgunner", 1};
        };
        class RHS_AUV_KIA_CROWSgunner: DefaultDie {
            actions = "DeadActions";
            file = "\rhsusf\addons\rhsusf_C_socomauv\anims\rhs_AUV_KIA_CROWSgunner";
            speed = 10000000000;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_AUV_FFVpos: Crew {
            file = "\rhsusf\addons\rhsusf_c_socomauv\anims\rhs_AUV_ffvpos";
            interpolateTo[] = {"RHS_AUV_KIA_FFVpos", 1};
        };
        class RHS_AUV_KIA_FFVpos: DefaultDie {
            actions = "DeadActions";
            file = "\rhsusf\addons\rhsusf_C_socomauv\anims\rhs_AUV_KIA_ffvpos";
            speed = 10000000000;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {"Unconscious", 0.1};
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
        class EventHandlers;
        class ViewOptics;
    };
    class MRAP_01_base_F: Car_F {
        class EventHandlers;
        class AnimationSources: AnimationSources {
            class HitGlass1;
        };
    };
    class rhsusf_M1239_base: MRAP_01_base_F {
        dlc = "RHS_USAF";
        category = "Car";
        side = 1;
        editorSubcategory = "rhs_EdSubcat_mrap";
        vehicleClass = "rhs_vehclass_MRAP";
        insideSoundCoef = 0.4;
        displayName = "SOCOM AUV";
        unitInfoType = "RscUnitInfo";
        weapons[] = {"TruckHorn2", "rhsusf_weap_duke"};
        magazines[] = {"rhsusf_mag_duke"};
        model = "\rhsusf\addons\rhsusf_SOCOMAUV\M1239";
        picture = "\rhsusf\addons\rhsusf_SOCOMAUV\pictures\rhs_rg33auv_unarmed_pic_ca.paa";
        Icon = "\a3\soft_f_beta\Truck_01\Data\UI\map_truck_01_CA.paa";
        mapSize = 12.02;
        transportSoldier = 2;
        destrType = "DestructDefault";
        crewExplosionProtection = 1;
        camShakeCoef = 0.3;
        dustFrontLeftPos = "wheel_1_1_bound";
        dustFrontRightPos = "wheel_2_1_bound";
        dustBackLeftPos = "wheel_1_3_bound";
        dustBackRightPos = "wheel_2_3_bound";
        tf_hasLRradio_api = 1;
        selectionBrakeLights = "light_brake";
        selectionBackLights = "light_drive";
        driverAction = "RHS_AUV_Driver";
        driverInAction = "RHS_AUV_Driver";
        driverLeftHandAnimName = "drivewheel";
        driverRightHandAnimName = "drivewheel";
        cargoAction[] = {"RHS_AUV_CoDriver"};
        cargoProxyIndexes[] = {1, 2};
        getInProxyOrder[] = {1, 2, 3};
        memoryPointsGetInCargo[] = {"pos codriver", "pos cargo"};
        memoryPointsGetInCargoDir[] = {"pos codriver dir", "pos cargo dir"};
        getInAction = "GetInMRAP_01";
        getOutAction = "GetOutMRAP_01";
        driverDoor = "DoorL";
        cargoDoors[] = {"DoorR", "DoorL2"};
        viewDriverInExternal = 1;
        forceHideDriver = 1;
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6"
        };
        class CargoTurret;
        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret {
                weapons[] = {"rhsusf_weap_DummyLauncher"};
                gunnerAction = "vehicle_passenger_stand_2";
                gunnerInAction = "RHS_AUV_FFVpos";
                animationSourceHatch = "hatch1";
                enabledByAnimationSource = "hatch1_door";
                isPersonTurret = 2;
                gunnerGetInAction = "GetInMantis";
                gunnerGetOutAction = "GetOutMantis";
                memoryPointsGetInGunner = "pos cargoFFV1";
                memoryPointsGetInGunnerDir = "pos cargoFFV1 dir";
                rhs_hatch_control = 1;
                gunnerName = "Passenger (FFV)";
                gunnerCompartments = "Compartment1";
                gunnerDoor = "DoorL2";
                memoryPointGunnerOptics = "";
                selectionFireAnim = "";
                canHideGunner = 1;
                commanding = -2;
                LODTurnedIn = 1200;
                LODTurnedOut = 0;
                proxyIndex = 3;
                maxElev = 45;
                minElev = -35;
                maxTurn = 61;
                minTurn = -65;
                class TurnIn {
                    limitsArrayTop[] = {{0, 0}, {0, 0}};
                    limitsArrayBottom[] = {{0, 0}, {0, 0}};
                };
                class TurnOut {
                    limitsArrayTop[] = {{45, -90.1745}, {44.9894, 80.629}};
                    limitsArrayBottom[] = {
                        {5.464, -89.894},
                        {-9.4602, -71.7306},
                        {-7.5523, -40.9866},
                        {-16.3809, -30.7844},
                        {-7.1172, -30.2764},
                        {-13.0122, -5.9314},
                        {-12.7133, 26.3332},
                        {-23.1407, 58.6419},
                        {-8.5688, 77.4948},
                        {-7.292, 80.6933}
                    };
                };
                class Hitpoints {};
            };
        };
        class DriverOpticsIn {
            class DVE_Wide: ViewOptics {
                camPos = "dve_view_pos";
                opticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_DVE_4x3";
                visionMode[] = {"TI"};
                thermalMode[] = {0, 1};
                initFov = 0.6;
                minFov = 0.6;
                maxFov = 0.6;
                hitpoint = "Hit_Optic_DVEA";
            };
            class DVS_Rear: DVE_Wide {
                camPos = "dve_view_rear_pos";
                camDir = "dve_view_rear_dir";
                initFov = 0.875;
                minFov = 0.875;
                maxFov = 0.875;
                hitpoint = "Hit_Optic_Driver_Rear";
            };
        };
        class textureSources {
            class rhs_desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Main_CO.paa",
                    "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Wheels_CO.paa",
                    "rhsusf\addons\rhsusf_SOCOMAUV\Decals\AUV_SOCOM_Decal_CA.paa",
                    "rhsusf\addons\rhsusf_caiman\data\m153_co.paa",
                    "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
                };
                factions[] = {};
            };
            class rhs_woodland {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Main_WD_CO.paa",
                    "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Wheels_WD_CO.paa",
                    "rhsusf\addons\rhsusf_SOCOMAUV\Decals\AUV_SOCOM_Decal_CA.paa",
                    "rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa",
                    "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
                };
                factions[] = {};
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
            class DoorL2 {
                control = "CheckboxNumber";
                defaultValue = "0";
                displayName = "Open left rear door";
                property = "Door_L2";
                expression = "_this animateDoor ['%s',_value,true]";
            };
            class DoorL: DoorL2 {
                displayName = "Open left door";
                property = "Door_L";
            };
            class DoorR: DoorL2 {
                displayName = "Open right door";
                property = "Door_R";
            };
        };
        cargoCompartments[] = {1, 1};
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
            class DoorL {
                source = "door";
                animPeriod = 0.8;
                sound = "RHSUSF_Truck_Door";
                soundPosition = "osa_dvere_lp";
            };
            class DoorR: DoorL {
                soundPosition = "osa_dvere_pp";
            };
            class DoorL2: DoorL {
                animPeriod = 1.8;
                soundPosition = "osa_dvere_pp";
            };
            class hatch1_door: DoorL {
                soundPosition = "osa_dvere_pp";
                initPhase = 0;
            };
            class DUKE_Hide {
                source = "user";
                mass = -20;
                displayName = "hide DUKE antenna";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                animPeriod = 0.00001;
                initPhase = 0;
                onPhaseChanged = "_this call rhs_fnc_duke_vg;";
            };
            class HitDuke1 {
                source = "Hit";
                hitpoint = "HitDuke1";
            };
            class HitGlass7: HitGlass1 {
                hitpoint = "HitGlass7";
            };
            class hide_spare {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide spare wheel";
                source = "user";
                mass = -20;
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class hide_ammoboxes {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide ammo boxes";
                source = "user";
                animPeriod = 0.00001;
                minValue = 0;
                maxValue = 1;
                hideValue = 0.5;
                initPhase = 1;
            };
            class hide_srchlight_cvr {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide IR light dome";
                source = "user";
                mass = 0;
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class dve_fold {
                source = "user";
                animPeriod = 1.5;
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
            class toggle_dve: light_bo_off {
                displayName = "Toggle DVE monitor";
                position = "zamerny";
                radius = 12;
                showwindow = 0;
                condition = "((driver this) isEqualTo (call rhs_fnc_findPlayer))";
                statement = "this animateSource ['dve_fold',abs((this AnimationSourcePhase 'dve_fold') - 1)]";
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
        };
        hullDamageCauseExplosion = 1;
        armorStructural = 8;
        class HitPoints: HitPoints {
            class HitHull: HitBody {
                armor = 0.75;
                passThrough = 1;
                name = "karoserie";
                visual = "zbytek";
                minimalhit = 0.05;
                explosionShielding = 0.01;
                radius = 0.22;
            };
            class HitFuel {
                armor = 1.5;
                material = -1;
                name = "palivo";
                visual = "-";
                explosionShielding = 0.5;
                passThrough = 0.2;
            };
            class HitEngine {
                armor = 0.9;
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
            class HitDuke2: HitDuke1 {};
            class HitGlass7: HitGlass1 {
                name = "glass7";
                visual = "glass7";
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
            class cabin1 {
                color[] = {800, 900, 650};
                ambient[] = {5, 5, 5};
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
            class cabin2: cabin1 {
                position = "cabin_light2";
                direction = "cabin_light2_dir";
                hitpoint = "cabin_light2";
                selection = "cabin_light2";
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
            class DVE_Monitor {
                renderTarget = "rendertarget_dve";
                class CameraView1 {
                    pointPosition = "dve_view_pos";
                    pointDirection = "dve_view_dir";
                    renderQuality = 2;
                    renderVisionMode = 2;
                    fov = 0.6;
                };
                BBoxes[] = {
                    "PIP_DVE_TL",
                    "PIP_DVE_TR",
                    "PIP_DVE_BL",
                    "PIP_DVE_BR"
                };
            };
        };
        normalSpeedForwardCoef = 0.9;
        turnCoef = 3.5;
        terrainCoef = 0.5;
        simulation = "carx";
        precision = 9;
        brakeDistance = 3;
        acceleration = 15;
        fireResistance = 5;
        maxSpeed = 105;
        fuelCapacity = 20;
        wheelCircumference = 2.95;
        brakeIdleSpeed = 2;
        maxFordingDepth = -1.4;
        waterSpeedFactor = 0.3;
        waterResistance = 10;
        waterResistanceCoef = 0.2;
        waterLeakiness = 250;
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
                0.55
            };
            TransmissionRatios[] = {"High", 8.2};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        changeGearMinEffectivity[] = {0.95, 0, 0.99, 0.99, 0.99, 0.99, 0.99, 0.99};
        switchTime = 0.31;
        latency = 1.3;
        transmissionLosses = 18;
        dampersBumpCoef = 6;
        differentialType = "all_limited";
        frontRearSplit = 0.5;
        frontBias = 1.3;
        rearBias = 1.3;
        centreBias = 1.3;
        clutchStrength = 85;
        dampingRateFullThrottle = 0.078;
        dampingRateZeroThrottleClutchEngaged = 1.35;
        dampingRateZeroThrottleClutchDisengaged = 0.35;
        torqueCurve[] = {
            {0.318182, 0.457898},
            {0.454545, 0.786724},
            {0.590909, 1},
            {0.636364, 1},
            {0.727273, 0.990781},
            {0.909091, 0.974186},
            {0.954545, 0.940381},
            {1.05273, 0}
        };
        enginePower = 336;
        peakTorque = 2277.8;
        minOmega = 65;
        maxOmega = 230.38;
        idleRPM = 700;
        redRPM = 2200;
        engineLosses = 12;
        thrustDelay = 1;
        engineBrakeCoef = 0.8;
        antiRollbarForceCoef = 1.5;
        antiRollbarForceLimit = 2.5;
        antiRollbarSpeedMin = 10;
        antiRollbarSpeedMax = 65;
        accelAidForceSpd = 2.23;
        accelAidForceCoef = 4;
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
                width = 0.37;
                steering = 1;
                mass = 80;
                MOI = 25;
                dampingRate = 0.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 35000;
                maxHandBrakeTorque = 0;
                maxCompression = 0.15;
                maxDroop = 0.15;
                sprungMass = -1;
                springStrength = 305000;
                springDamperRate = 45725;
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
            class L3: L1 {
                boneName = "wheel_1_3_damper";
                steering = 0;
                center = "wheel_1_3_axis";
                boundary = "wheel_1_3_bound";
                suspForceAppPointOffset = "wheel_1_3_axis";
                tireForceAppPointOffset = "wheel_1_3_axis";
                maxHandBrakeTorque = 300000;
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
            class R3: R1 {
                boneName = "wheel_2_3_damper";
                steering = 0;
                center = "wheel_2_3_axis";
                boundary = "wheel_2_3_bound";
                suspForceAppPointOffset = "wheel_2_3_axis";
                tireForceAppPointOffset = "wheel_2_3_axis";
                maxHandBrakeTorque = 300000;
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Main.rvmat",
                "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Main_dam.rvmat",
                "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_destruction.rvmat",
                "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_int.rvmat",
                "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_int.rvmat",
                "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_int_dam.rvmat",
                "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Wheels.rvmat",
                "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Wheels_dam.rvmat",
                "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_destruction.rvmat",
                "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Accessory.rvmat",
                "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Accessory_dam.rvmat",
                "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_destruction.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\crows.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\crows.rvmat",
                "rhsusf\addons\rhsusf_rg33l\data\RG33_destruction.rvmat",
                "rhsusf\addons\rhsusf_rg33\data\glass.rvmat",
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
            class RHSUSF_EventHandlers {
                seatSwitched = "if(not(_this select 1 in [driver (_this select 0),gunner (_this select 0)]))then{ (_this select 1) action ['turnIn',_this select 0]}";
                postInit = "_this call rhs_fnc_reapplyTextures";
                turnIn = "([0] + _this)  call rhsusf_fnc_turretAction;";
                turnOut = "([1] + _this) call rhsusf_fnc_turretAction;";
                engine = "_this call rhs_fnc_engineCheckDamage";
            };
        };
        transportMaxBackpacks = 25;
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
            class _xx_Medikit {
                name = "Medikit";
                count = 1;
            };
        };
        class TransportWeapons {
            class _xx_rhs_weap_m4_carryhandle {
                weapon = "rhs_weap_m4_carryhandle";
                count = 4;
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
        class RHS_TowingSystem {
            class Carrier {
                rhs_maxCargoMass = 16329;
                rhs_attachPoint = "";
                rhs_attachPointPos[] = {-0.03, -4.23, -1.73};
            };
        };
    };
    class rhsusf_M1239_CROWS_base: rhsusf_M1239_base {
        model = "\rhsusf\addons\rhsusf_SOCOMAUV\M1239_M2";
        displayName = "SOCOM AUV (CROWS)";
        picture = "\rhsusf\addons\rhsusf_SOCOMAUV\pictures\rhs_rg33auv_armed_pic_ca.paa";
        cargoProxyIndexes[] = {1, 2};
        getInProxyOrder[] = {1, 2};
        threat[] = {0.9, 0.3, 0.1};
        showNVGGunner = 1;
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
        class MFD {
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
                weapons[] = {"RHS_M2_CROWS_M153"};
                magazines[] = {
                    "rhs_mag_400rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_400rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_400rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_400rnd_127x99_mag_Tracer_Red"
                };
                minElev = -20;
                maxElev = 60;
                gunnerAction = "RHS_AUV_CROWSgunner";
                viewGunnerInExternal = 1;
                gunnerGetInAction = "GetInMRAP_01_cargo";
                gunnerGetOutAction = "GetOutMRAP_01";
                gunnerDoor = "DoorL2";
                gunnerCompartments = "Compartment1";
                ejectDeadGunner = 0;
                castGunnerShadow = 1;
                stabilizedInAxes = 3;
                startEngine = 0;
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                memoryPointGunnerOptics = "PIP0_dir";
                gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_CROWS_monitor";
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
            class DVE_Monitor: DVE_Monitor {
                renderTarget = "rendertarget_dve";
                class CameraView1: CameraView1 {};
                BBoxes[] = {
                    "PIP_DVE_TL",
                    "PIP_DVE_TR",
                    "PIP_DVE_BL",
                    "PIP_DVE_BR"
                };
            };
        };
    };
    class rhsusf_M1239_CROWSMK19_base: rhsusf_M1239_CROWS_base {
        model = "\rhsusf\addons\rhsusf_SOCOMAUV\M1239_MK19";
        displayName = "SOCOM AUV (CROWS)";
        class AnimationSources: AnimationSources {
            class belt_rotation {
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
        };
        class Turrets: Turrets {
            class CROWS_Turret: CROWS_Turret {
                weapons[] = {"RHS_MK19_CROWS_M153"};
                magazines[] = {
                    "RHS_96Rnd_40mm_MK19_M430A1",
                    "RHS_96Rnd_40mm_MK19_M430A1",
                    "RHS_96Rnd_40mm_MK19_M430A1",
                    "RHS_96Rnd_40mm_MK19_M430A1",
                    "RHS_96Rnd_40mm_MK19_M1001"
                };
            };
        };
    };
    class rhsusf_M1239_Deploy_base: rhsusf_M1239_CROWS_base {
        model = "\rhsusf\addons\rhsusf_SOCOMAUV\M1239_M2_Deploy";
        displayName = "SOCOM AUV (Deployed)";
        picture = "\rhsusf\addons\rhsusf_SOCOMAUV\pictures\rhs_rg33auv_deploy_pic_ca.paa";
        transportAmmo = 450000;
        transportFuel = 450000;
        transportRepair = 100000000;
        supplyRadius = 12;
        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 5;
                canBeTransported = 1;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
        };
    };
    class rhsusf_M1239_DeployMK19_base: rhsusf_M1239_CROWSMK19_base {
        model = "\rhsusf\addons\rhsusf_SOCOMAUV\M1239_MK19_Deploy";
        displayName = "SOCOM AUV (Deployed)";
        picture = "\rhsusf\addons\rhsusf_SOCOMAUV\pictures\rhs_rg33auv_deploy_pic_ca.paa";
        transportAmmo = 450000;
        transportFuel = 450000;
        transportRepair = 100000000;
        supplyRadius = 12;
        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 5;
                canBeTransported = 1;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
        };
    };
    class rhsusf_M1239_socom_d: rhsusf_M1239_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1239_socom_d.paa";
        displayName = "$STR_RHS_M1239_NAME";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_socom";
        crew = "rhsusf_infantry_socom_armysf_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Main_CO.paa",
            "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Wheels_CO.paa",
            "rhsusf\addons\rhsusf_SOCOMAUV\Decals\AUV_SOCOM_Decal_CA.paa",
            "rhsusf\addons\rhsusf_caiman\data\m153_co.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1239_socom_wd: rhsusf_M1239_socom_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1239_socom_wd.paa";
        scope = 1;
        accuracy = 0.5;
        faction = "rhs_faction_socom";
        crew = "rhsusf_infantry_socom_armysf_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Main_WD_CO.paa",
            "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Wheels_WD_CO.paa",
            "rhsusf\addons\rhsusf_SOCOMAUV\Decals\AUV_SOCOM_Decal_CA.paa",
            "rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1239_M2_socom_d: rhsusf_M1239_CROWS_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1239_M2_socom_d.paa";
        displayName = "$STR_RHS_M1239_M153_M2_NAME";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_socom";
        crew = "rhsusf_infantry_socom_armysf_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Main_CO.paa",
            "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Wheels_CO.paa",
            "rhsusf\addons\rhsusf_SOCOMAUV\Decals\AUV_SOCOM_Decal_CA.paa",
            "rhsusf\addons\rhsusf_caiman\data\m153_co.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1239_M2_socom_wd: rhsusf_M1239_M2_socom_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1239_M2_socom_wd.paa";
        scope = 1;
        accuracy = 0.5;
        faction = "rhs_faction_socom";
        crew = "rhsusf_infantry_socom_armysf_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Main_WD_CO.paa",
            "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Wheels_WD_CO.paa",
            "rhsusf\addons\rhsusf_SOCOMAUV\Decals\AUV_SOCOM_Decal_CA.paa",
            "rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1239_MK19_socom_d: rhsusf_M1239_CROWSMK19_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1239_MK19_socom_d.paa";
        displayName = "$STR_RHS_M1239_M153_MK19_NAME";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_socom";
        crew = "rhsusf_infantry_socom_armysf_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Main_CO.paa",
            "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Wheels_CO.paa",
            "rhsusf\addons\rhsusf_SOCOMAUV\Decals\AUV_SOCOM_Decal_CA.paa",
            "rhsusf\addons\rhsusf_caiman\data\m153_co.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1239_MK19_socom_wd: rhsusf_M1239_MK19_socom_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1239_MK19_socom_wd.paa";
        scope = 1;
        accuracy = 0.5;
        faction = "rhs_faction_socom";
        crew = "rhsusf_infantry_socom_armysf_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Main_WD_CO.paa",
            "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Wheels_WD_CO.paa",
            "rhsusf\addons\rhsusf_SOCOMAUV\Decals\AUV_SOCOM_Decal_CA.paa",
            "rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1239_M2_Deploy_socom_d: rhsusf_M1239_Deploy_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1239_M2_Deploy_socom_d.paa";
        displayName = "$STR_RHS_M1239_M153_M2_DEPLOY_NAME";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_socom";
        crew = "rhsusf_infantry_socom_armysf_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Main_CO.paa",
            "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Wheels_CO.paa",
            "rhsusf\addons\rhsusf_SOCOMAUV\Decals\AUV_SOCOM_Decal_CA.paa",
            "rhsusf\addons\rhsusf_caiman\data\m153_co.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1239_M2_Deploy_socom_wd: rhsusf_M1239_M2_Deploy_socom_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1239_M2_Deploy_socom_wd.paa";
        scope = 1;
        accuracy = 0.5;
        faction = "rhs_faction_socom";
        crew = "rhsusf_infantry_socom_armysf_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Main_WD_CO.paa",
            "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Wheels_WD_CO.paa",
            "rhsusf\addons\rhsusf_SOCOMAUV\Decals\AUV_SOCOM_Decal_CA.paa",
            "rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1239_MK19_Deploy_socom_d: rhsusf_M1239_DeployMK19_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1239_MK19_Deploy_socom_d.paa";
        displayName = "$STR_RHS_M1239_M153_MK19_DEPLOY_NAME";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_socom";
        crew = "rhsusf_infantry_socom_armysf_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Main_CO.paa",
            "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Wheels_CO.paa",
            "rhsusf\addons\rhsusf_SOCOMAUV\Decals\AUV_SOCOM_Decal_CA.paa",
            "rhsusf\addons\rhsusf_caiman\data\m153_co.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M1239_MK19_Deploy_socom_wd: rhsusf_M1239_MK19_Deploy_socom_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1239_MK19_Deploy_socom_wd.paa";
        scope = 1;
        accuracy = 0.5;
        faction = "rhs_faction_socom";
        crew = "rhsusf_infantry_socom_armysf_rifleman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Main_WD_CO.paa",
            "rhsusf\addons\rhsusf_SOCOMAUV\data\M1239_Wheels_WD_CO.paa",
            "rhsusf\addons\rhsusf_SOCOMAUV\Decals\AUV_SOCOM_Decal_CA.paa",
            "rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
};
