class CfgPatches {
    class rhsusf_c_himars {
        units[] = {"rhsusf_M142_usarmy_WD", "rhsusf_M142_usarmy_D", "rhsusf_M142_usmc_WD"};
        weapons[] = {};
        requiredVersion = 1.38;
        requiredAddons[] = {"rhsusf_main", "rhsusf_c_troops"};
        name = "M142 HIMARS";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class DefaultEventhandlers;
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        RHS_HIMARS_Driver = "RHS_HIMARS_Driver";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class RHS_HIMARS_Driver: Crew {
            file = "\rhsusf\addons\rhsusf_c_HIMARS\anims\HIMARS_Driver";
            interpolateTo[] = {"RHS_FMTV_KIA_Driver", 1};
        };
        class RHS_HIMARS_KIA_Driver: DefaultDie {
            actions = "DeadActions";
            file = "\rhsusf\addons\rhsusf_C_HIMARS\anims\HIMARS_KIA_Driver";
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
        class Components;
    };
    class rhsusf_himars_base: Truck_01_base_F {
        dlc = "RHS_USAF";
        side = 1;
        category = "Car";
        editorSubcategory = "rhs_EdSubcat_artillery";
        vehicleClass = "rhs_vehclass_artillery";
        unitInfoType = "RscUnitInfoArtillery";
        displayName = "M142 HIMARS";
        selectionBrakeLights = "light_brake";
        selectionBackLights = "light_drive";
        model = "\rhsusf\addons\rhsusf_himars\M142";
        picture = "\rhsusf\addons\rhsusf_himars\Pictures\rhs_M142_pic_ca.paa";
        Icon = "\rhsusf\addons\rhsusf_c_fmtv\data\ico\ico_m1078.paa";
        mapSize = 8.02;
        headAimDown = 5;
        driverAction = "RHS_HIMARS_Driver";
        driverInAction = "RHS_HIMARS_Driver";
        driverLeftHandAnimName = "drivewheel";
        driverRightHandAnimName = "drivewheel";
        driverRightLegAnimName = "pedal_r";
        transportSoldier = 0;
        memoryPointsGetInCargo[] = {"pos codriver"};
        memoryPointsGetInCargoDir[] = {"pos codriver dir"};
        driverDoor = "Door_LF";
        cargoDoors[] = {"Door_RF", ""};
        cargoCompartments[] = {1};
        showNVGGunner = 1;
        supplyRadius = 4.5;
        tf_hasLRradio_api = 1;
        extCameraPosition[] = {0.5, 2, -8};
        insideSoundCoef = 0.4;
        destrType = "DestructDefault";
        slingLoadCargoMemoryPoints[] = {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        availableforsupporttypes[] = {"Artillery"};
        artilleryscanner = 1;
        hideProxyInCombat = 1;
        canHideDriver = 0;
        forceHideDriver = 1;
        viewDriverInExternal = 1;
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
        class CargoTurret;
        class Turrets {
            class MainTurret: NewTurret {
                commanding = 1;
                body = "mainTurret";
                gun = "mainGun";
                minElev = 0;
                maxElev = 65;
                initElev = 0;
                stabilizedInAxes = 0;
                weapons[] = {};
                magazines[] = {};
                gunnerAction = "passenger_apc_narrow_generic03still";
                gunnerInAction = "passenger_apc_narrow_generic03still";
                gunnerOpticsModel = "";
                gunnergetInAction = "GetInHigh";
                gunnergetOutAction = "GetOutHigh";
                gunnerDoor = "DoorR";
                memoryPointsGetInGunner = "pos codriver";
                memoryPointsGetInGunnerDir = "pos codriver dir";
                usePiP = 1;
                inGunnerMayFire = 1;
                outGunnerMayFire = 1;
                gunnerForceOptics = 0;
                gunnerOutForceOptics = 0;
                viewGunnerInExternal = 1;
                class ViewOptics {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.093;
                    minFov = 0.093;
                    maxFov = 0.093;
                };
                lockWhenVehicleSpeed = 1;
                elevationMode = 3;
                forceHideGunner = 1;
                class Turrets {};
                class Hitpoints {
                    class HitLauncher {
                        isGun = 1;
                        armor = -80;
                        explosionShielding = 0.25;
                        passThrough = 0.2;
                        minimalHit = 0.01;
                        radius = 0.07;
                        name = "Hit_Launcher";
                        armorComponent = "Hit_Launcher";
                        visual = "Vis_Launcher";
                    };
                    class HitTurret {
                        isTurret = 1;
                        armor = -80;
                        explosionShielding = 0.25;
                        passThrough = 0.2;
                        minimalHit = 0.01;
                        radius = 0.07;
                        name = "Hit_Turret";
                        armorComponent = "Hit_Turret";
                        visual = "Vis_Turret";
                    };
                };
            };
            class CargoTurret_01: CargoTurret {
                weapons[] = {"rhsusf_weap_DummyLauncher"};
                gunnerAction = "vehicle_turnout_1";
                gunnerInAction = "passenger_apc_narrow_generic03still";
                animationSourceHatch = "hatch";
                enabledByAnimationSource = "hatch_door";
                isPersonTurret = 1;
                gunnerGetInAction = "GetInMantis";
                gunnerGetOutAction = "GetOutMantis";
                memoryPointsGetInGunner = "pos codriver";
                memoryPointsGetInGunnerDir = "pos codriver dir";
                rhs_hatch_control = 1;
                gunnerName = "Commander";
                gunnerCompartments = "Compartment1";
                gunnerDoor = "DoorR";
                memoryPointGunnerOptics = "";
                gunnerForceOptics = 0;
                selectionFireAnim = "";
                canHideGunner = 1;
                commanding = 2;
                LODTurnedIn = 1200;
                LODTurnedOut = 0;
                proxyIndex = 1;
                maxElev = 45;
                minElev = -35;
                maxTurn = 61;
                minTurn = -65;
                class TurnIn {
                    limitsArrayTop[] = {{0, 0}, {0, 0}};
                    limitsArrayBottom[] = {{0, 0}, {0, 0}};
                };
                class TurnOut {
                    limitsArrayTop[] = {{45, -160}, {45, 160}};
                    limitsArrayBottom[] = {
                        {-13.0935, -131.7034},
                        {-8.5738, -116.1285},
                        {-7.4638, -115.6226},
                        {-7.234, -114.7983},
                        {-4.9984, -114.6421},
                        {-5.0046, -111.7557},
                        {-8.0144, -109.7468},
                        {-6.4078, -82.353},
                        {-8.6081, -77.4222},
                        {-8.044, -72.854},
                        {-12.8238, -71.9509},
                        {-34.0392, 64.6688},
                        {-13.6844, 78.5021},
                        {-13.5075, 86.2302},
                        {-7.8451, 87.7567},
                        {-8.1937, 115.4737},
                        {-9.7993, 118.8243},
                        {-15.226, 120.0665},
                        {-13.9668, 123.0723},
                        {-11.6947, 124.4118},
                        {-11.0435, 131.5186},
                        {-13.0902, 145.9448}
                    };
                };
                class Hitpoints {};
            };
        };
        hiddenSelections[] = {"camo", "camo1", "camo2", "camo3", "camo4"};
        class textureSources {
            class rhs_desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_HIMARS\data\M142_Cab_D_CO.paa",
                    "rhsusf\addons\rhsusf_HIMARS\data\M142_Rear_D_CO.paa",
                    "rhsusf\addons\rhsusf_HIMARS\data\M142_Chassis_D_co.paa",
                    "rhsusf\addons\rhsusf_HIMARS\data\M142_Wheel_CO.paa",
                    "rhsusf\addons\rhsusf_HIMARS\data\M142_Int_CO.paa"
                };
                factions[] = {};
            };
            class rhs_woodland {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_HIMARS\data\M142_Cab_CO.paa",
                    "rhsusf\addons\rhsusf_HIMARS\data\M142_Rear_CO.paa",
                    "rhsusf\addons\rhsusf_HIMARS\data\M142_Chassis_co.paa",
                    "rhsusf\addons\rhsusf_HIMARS\data\M142_Wheel_CO.paa",
                    "rhsusf\addons\rhsusf_HIMARS\data\M142_Int_CO.paa"
                };
                factions[] = {};
            };
            class rhs_usmc_woodland {
                displayName = "USMC Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_HIMARS\data\M142_CAB_MC_CO.paa",
                    "rhsusf\addons\rhsusf_HIMARS\data\M142_Rear_MC_CO.paa",
                    "rhsusf\addons\rhsusf_HIMARS\data\M142_Chassis_MC_CO.paa",
                    "rhsusf\addons\rhsusf_HIMARS\data\M142_Wheel_CO.paa",
                    "rhsusf\addons\rhsusf_HIMARS\data\M142_Int_CO.paa"
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
            class hatch_door: Door_LF {
                soundPosition = "osa_dvere_pp";
                initPhase = 0;
            };
            class Missiles_revolving {
                source = "revolving";
                weapon = "rhs_weap_mlrs";
            };
            class Missiles_revolving2: Missiles_revolving {
                weapon = "rhs_weap_mlrs_guided";
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
                visual = "";
                passThrough = 0.2;
            };
            class HitEngine {
                armor = 0.5;
                material = -1;
                name = "motor";
                visual = "";
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
                suspTravelDirection[] = {0, -1, 0};
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
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat",
                "rhsusf\addons\rhsusf_himars\data\M142_Cab.rvmat",
                "rhsusf\addons\rhsusf_himars\data\M142_Cab_dam.rvmat",
                "rhsusf\addons\rhsusf_himars\data\M142_destruction.rvmat",
                "rhsusf\addons\rhsusf_himars\data\M142_Chassis.rvmat",
                "rhsusf\addons\rhsusf_himars\data\M142_Chassis_dam.rvmat",
                "rhsusf\addons\rhsusf_himars\data\M142_destruction.rvmat",
                "rhsusf\addons\rhsusf_himars\data\M142_Rear.rvmat",
                "rhsusf\addons\rhsusf_himars\data\M142_Rear_dam.rvmat",
                "rhsusf\addons\rhsusf_himars\data\M142_destruction.rvmat",
                "rhsusf\addons\rhsusf_himars\data\M142_Int.rvmat",
                "rhsusf\addons\rhsusf_himars\data\M142_Int_dam.rvmat",
                "rhsusf\addons\rhsusf_himars\data\M142_destruction.rvmat",
                "rhsusf\addons\rhsusf_himars\data\M142_Int.rvmat",
                "rhsusf\addons\rhsusf_himars\data\M142_Int_dam.rvmat",
                "rhsusf\addons\rhsusf_himars\data\M142_destruction.rvmat",
                "rhsusf\addons\rhsusf_himars\data\M142_Wheel.rvmat",
                "rhsusf\addons\rhsusf_himars\data\M142_Wheel_dam.rvmat",
                "rhsusf\addons\rhsusf_himars\data\M142_destruction.rvmat"
            };
        };
        class EventHandlers: EventHandlers {
            class RHSUSF_EventHandlers {
                engine = "_this call rhs_fnc_engineCheckDamage";
                postInit = "_this call rhs_fnc_reapplyTextures";
            };
        };
        class Components: Components {
            class TransportPylonsComponent {
                UIPicture = "\rhsusf\addons\rhsusf_himars\Pictures\RHS_M142_EDEN_CA.paa";
                class pylons {
                    class pylon1 {
                        hardpoints[] = {"RHS_HP_MLRS", "RHS_HP_GMLRS", "RHS_HP_ATACMS"};
                        priority = 1;
                        maxweight = 2000;
                        UIposition[] = {0.45, 0.275};
                        bay = -1;
                        attachment = "rhs_mag_m26a1_6";
                        turret[] = {0};
                        hitpoint = "HitLauncher";
                    };
                };
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
                count = 10;
                magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
            };
            class _xx_rhs_mag_m67 {
                count = 2;
                magazine = "rhs_mag_m67";
            };
            class _xx_rhs_mag_an_m8hc {
                count = 4;
                magazine = "rhs_mag_an_m8hc";
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
            class _xx_weap {
                count = 2;
                weapon = "rhs_weap_m4_carryhandle";
            };
        };
    };
    class rhsusf_himars_atacms_base: rhsusf_himars_base {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"rhs_weap_atacms"};
                magazines[] = {"rhs_mag_mgm140a_1"};
            };
            class CargoTurret_01: CargoTurret_01 {};
        };
        class AnimationSources: AnimationSources {
            class Missiles_revolving: Missiles_revolving {
                weapon = "rhs_weap_atacms";
            };
            class Missiles_revolving2: Missiles_revolving {
                weapon = "rhs_weap_atacms_guided";
            };
        };
    };
    class rhsusf_M142_usarmy_WD: rhsusf_himars_base {
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_combatcrewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_HIMARS\data\M142_Cab_CO.paa",
            "rhsusf\addons\rhsusf_HIMARS\data\M142_Rear_CO.paa",
            "rhsusf\addons\rhsusf_HIMARS\data\M142_Chassis_co.paa",
            "rhsusf\addons\rhsusf_HIMARS\data\M142_Wheel_CO.paa",
            "rhsusf\addons\rhsusf_HIMARS\data\M142_Int_CO.paa"
        };
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M142_usarmy_WD.paa";
        accuracy = 0.5;
    };
    class rhsusf_M142_usarmy_D: rhsusf_himars_base {
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_combatcrewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_HIMARS\data\M142_Cab_D_CO.paa",
            "rhsusf\addons\rhsusf_HIMARS\data\M142_Rear_D_CO.paa",
            "rhsusf\addons\rhsusf_HIMARS\data\M142_Chassis_D_co.paa",
            "rhsusf\addons\rhsusf_HIMARS\data\M142_Wheel_CO.paa",
            "rhsusf\addons\rhsusf_HIMARS\data\M142_Int_CO.paa"
        };
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M142_usarmy_D.paa";
        accuracy = 0.5;
    };
    class rhsusf_M142_usmc_WD: rhsusf_himars_base {
        faction = "rhs_faction_usmc_wd";
        crew = "rhsusf_usmc_marpat_wd_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_HIMARS\data\M142_Cab_MC_CO.paa",
            "rhsusf\addons\rhsusf_HIMARS\data\M142_Rear_MC_CO.paa",
            "rhsusf\addons\rhsusf_HIMARS\data\M142_Chassis_MC_co.paa",
            "rhsusf\addons\rhsusf_HIMARS\data\M142_Wheel_CO.paa",
            "rhsusf\addons\rhsusf_HIMARS\data\M142_Int_CO.paa"
        };
        scope = 2;
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M142_usmc_WD.paa";
        accuracy = 0.5;
    };
};
