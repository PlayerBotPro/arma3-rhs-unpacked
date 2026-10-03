class CfgPatches {
    class rhsusf_c_HEMTT_A4 {
        units[] = {
            "rhsusf_M977A4_usarmy_wd",
            "rhsusf_M977A4_BKIT_usarmy_wd",
            "rhsusf_M977A4_BKIT_M2_usarmy_wd",
            "rhsusf_M977A4_REPAIR_usarmy_wd",
            "rhsusf_M977A4_REPAIR_BKIT_usarmy_wd",
            "rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd",
            "rhsusf_M977A4_AMMO_usarmy_wd",
            "rhsusf_M977A4_AMMO_BKIT_usarmy_wd",
            "rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd",
            "rhsusf_M978A4_usarmy_wd",
            "rhsusf_M978A4_BKIT_usarmy_wd",
            "rhsusf_M977A4_usarmy_d",
            "rhsusf_M977A4_BKIT_usarmy_d",
            "rhsusf_M977A4_BKIT_M2_usarmy_d",
            "rhsusf_M977A4_REPAIR_usarmy_d",
            "rhsusf_M977A4_REPAIR_BKIT_usarmy_d",
            "rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_d",
            "rhsusf_M977A4_AMMO_usarmy_d",
            "rhsusf_M977A4_AMMO_BKIT_usarmy_d",
            "rhsusf_M977A4_AMMO_BKIT_M2_usarmy_d",
            "rhsusf_M978A4_usarmy_d",
            "rhsusf_M978A4_BKIT_usarmy_d"
        };
        weapons[] = {};
        requiredVersion = 1.38;
        requiredAddons[] = {"rhsusf_main", "rhsusf_c_troops"};
        name = "HEMMTT A4 Trucks";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class DefaultEventhandlers;
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        RHS_HEMTT_Driver = "RHS_HEMTT_Driver";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class RHS_HEMTT_Driver: Crew {
            file = "\rhsusf\addons\rhsusf_c_HEMTT_a4\anims\HEMTT_Driver";
            interpolateTo[] = {"RHS_HEMTT_KIA_Driver", 1};
            speed = 10000000000;
        };
        class RHS_HEMTT_KIA_Driver: DefaultDie {
            actions = "DeadActions";
            file = "\rhsusf\addons\rhsusf_C_HEMTT_a4\anims\HEMTT_KIA_Driver";
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
        class ViewOptics;
    };
    class Car_F: Car {
        class AnimationSources;
        class HitPoints;
        class EventHandlers;
    };
    class Truck_F: Car_F {
        class ViewPilot;
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
    class rhsusf_HEMTT_A4_base: Truck_01_base_F {
        dlc = "RHS_USAF";
        category = "Car";
        side = 1;
        editorSubcategory = "rhs_EdSubcat_truck";
        vehicleClass = "rhs_vehclass_truck";
        insideSoundCoef = 0.4;
        displayName = "M977A4";
        model = "\rhsusf\addons\rhsusf_HEMTT_A4\M977A4_wd";
        Icon = "\a3\soft_f_beta\Truck_01\Data\UI\map_truck_01_CA.paa";
        mapSize = 12.02;
        transportSoldier = 1;
        destrType = "DestructDefault";
        camShakeCoef = 0.4;
        tf_hasLRradio_api = 1;
        selectionBrakeLights = "light_brake";
        selectionBackLights = "light_drive";
        driverAction = "RHS_HEMTT_Driver";
        driverInAction = "RHS_HEMTT_Driver";
        memoryPointsGetInCargo[] = {"pos codriver"};
        memoryPointsGetInCargoDir[] = {"pos codriver dir"};
        driverDoor = "DoorL";
        cargoDoors[] = {"DoorR"};
        viewDriverInExternal = 1;
        forceHideDriver = 1;
        cargoCompartments[] = {1};
        class Turrets {};
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
            class hide_spare {
                source = "user";
                mass = -20;
                displayName = "hide spare wheel";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class FlagPole_pos {
                source = "user";
                mass = 0;
                displayName = "mount flags on rear";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                animPeriod = 0.00001;
                initPhase = 0;
            };
        };
        class Exhausts {
            class Exhaust1 {
                position = "vyfuk start";
                direction = "vyfuk konec";
                effect = "ExhaustEffectHTruck";
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
            class cabin {
                color[] = {800, 900, 650};
                ambient[] = {5, 0, 0};
                intensity = 4;
                size = 1;
                innerAngle = 90;
                outerAngle = 165;
                coneFadeCoef = 1;
                position = "cabin_light";
                direction = "cabin_light_dir";
                hitpoint = "cabin_light";
                selection = "cabin_light";
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
        turnCoef = 3.5;
        terrainCoef = 1.7;
        simulation = "carx";
        precision = 9;
        brakeDistance = 3;
        acceleration = 15;
        fireResistance = 5;
        maxSpeed = 98;
        fuelCapacity = 24;
        wheelCircumference = 2.95;
        brakeIdleSpeed = 2;
        maxFordingDepth = 0.7;
        waterSpeedFactor = 0.3;
        waterResistance = 1;
        waterResistanceCoef = 0.2;
        waterLeakiness = 250;
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -10.094,
                "N",
                0,
                "D1",
                5.562,
                "D2",
                3.456,
                "D3",
                2.623,
                "D4",
                1.678,
                "D5",
                1.078
            };
            TransmissionRatios[] = {"High", 4.2};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        switchTime = 0.51;
        latency = 1.3;
        transmissionLosses = 18;
        dampersBumpCoef = 6;
        differentialType = "all_limited";
        frontRearSplit = 0.5;
        frontBias = 1.3;
        rearBias = 1.3;
        centreBias = 1.3;
        clutchStrength = 55;
        dampingRateFullThrottle = 0.08;
        dampingRateZeroThrottleClutchEngaged = 2;
        dampingRateZeroThrottleClutchDisengaged = 0.35;
        torqueCurve[] = {
            {0.262, 0.65},
            {0.381, 0.79},
            {0.476, 0.89},
            {0.571, 0.99},
            {0.667, 1},
            {0.762, 0.99},
            {0.857, 0.95},
            {1, 0.86}
        };
        enginePower = 324;
        peakTorque = 2020.8;
        minOmega = 55;
        maxOmega = 219.91;
        idleRPM = 550;
        redRPM = 2100;
        engineLosses = 34;
        thrustDelay = 0.8;
        engineBrakeCoef = 0.8;
        antiRollbarForceCoef = 1.5;
        antiRollbarForceLimit = 4;
        antiRollbarSpeedMin = 0;
        antiRollbarSpeedMax = 20;
        accelAidForceSpd = 1.8;
        accelAidForceCoef = 2;
        accelAidForceYOffset = -1;
        class Wheels {
            class L1 {
                side = "left";
                boneName = "wheel_1_1_damper";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                suspForceAppPointOffset = "wheel_1_1_axis";
                tireForceAppPointOffset = "wheel_1_1_axis";
                suspTravelDirection[] = {-0.125, -1, 0};
                steering = 1;
                width = 0.33;
                mass = 80;
                MOI = 10;
                dampingRate = 0.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 10000;
                maxHandBrakeTorque = 0;
                maxCompression = 0.15;
                maxDroop = 0.15;
                sprungMass = -1;
                springStrength = 42289;
                springDamperRate = 7444;
                longitudinalStiffnessPerUnitGravity = 10000;
                latStiffX = 25;
                latStiffY = 180;
                frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1, 1}};
            };
            class L2: L1 {
                boneName = "wheel_1_2_damper";
                steering = 1;
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
            class L4: L1 {
                boneName = "wheel_1_4_damper";
                steering = 0;
                center = "wheel_1_4_axis";
                boundary = "wheel_1_4_bound";
                suspForceAppPointOffset = "wheel_1_4_axis";
                tireForceAppPointOffset = "wheel_1_4_axis";
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
                steering = 1;
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
            class R4: R1 {
                boneName = "wheel_2_4_damper";
                steering = 0;
                center = "wheel_2_4_axis";
                boundary = "wheel_2_4_bound";
                suspForceAppPointOffset = "wheel_2_4_axis";
                tireForceAppPointOffset = "wheel_2_4_axis";
                maxHandBrakeTorque = 300000;
            };
        };
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\CAB_dam.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\hemtt_destruction.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\A4_BKIT.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\A4_BKIT_dam.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\hemtt_destruction.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\A4_Chassis.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\A4_Chassis_dam.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\hemtt_destruction.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\A4_EngineArea.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\A4_EngineArea_dam.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\hemtt_destruction.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\A4_M977.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\A4_M977_dam.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\hemtt_destruction.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\BKIT.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_dam.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\hemtt_destruction.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\CARGO.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_dam.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\hemtt_destruction.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_NOHQ.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_NOHQ_dam.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\hemtt_destruction.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\FUEL.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\FUEL_dam.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\hemtt_destruction.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\M977_Wheels.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\M977_Wheels_dam.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\hemtt_destruction.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\INT.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\INT.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\hemtt_destruction.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\REPAIR.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\REPAIR_dam.rvmat",
                "rhsusf\addons\rhsusf_hemtt_a4\data\hemtt_destruction.rvmat",
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
                count = 10;
                magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
            };
            class _xx_rhs_mag_m67 {
                count = 2;
                magazine = "rhs_mag_m67";
            };
            class _xx_rhs_mag_m18_green {
                count = 2;
                magazine = "rhs_mag_m18_green";
            };
            class _xx_rhs_rhs_mag_m18_red {
                count = 2;
                magazine = "rhs_mag_m18_red";
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
        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 5;
                canBeTransported = 1;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
            class Carrier {
                cargoBayDimensions[] = {"VVT_cargo_1", "VVT_cargo_2"};
                disableHeightLimit = 1;
                maxLoadMass = 25000;
                cargoAlignment[] = {"center", "front"};
                cargoSpacing[] = {0, 0, 0};
                exits[] = {"VVT_exit"};
                unloadingInterval = 2;
                loadingDistance = 5;
                loadingAngle = 60;
                parachuteClassDefault = "B_Parachute_02_F";
                parachuteHeightLimitDefault = 5;
            };
        };
    };
    class rhsusf_M977A4_usarmy_wd: rhsusf_HEMTT_A4_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M977A4_usarmy_wd.paa";
        picture = "\rhsusf\addons\rhsusf_c_hemtt_a4\data\icon_rhsusf_M977A4_usarmy_ca.paa";
        displayName = "$STR_RHS_HEMTTA4_977A4_NAME";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        hiddenSelections[] = {"Camo", "Camo2", "Camo5"};
        HiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa", "rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_CO.paa", "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa"};
        class textureSources {
            class rhs_woodland {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa", "rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_CO.paa", "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa"};
                factions[] = {};
            };
            class rhs_desert: rhs_woodland {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO_Des.paa", "rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_DES_CO.paa", "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_DES_CO.paa"};
            };
        };
        textureList[] = {};
    };
    class rhsusf_M977A4_BKIT_usarmy_wd: rhsusf_M977A4_usarmy_wd {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M977A4_BKIT_usarmy_wd.paa";
        picture = "\rhsusf\addons\rhsusf_c_hemtt_a4\data\icon_rhsusf_M977A4_BKIT_usarmy_ca.paa";
        displayName = "$STR_RHS_HEMTTA4_977A4_BKIT_NAME";
        model = "\rhsusf\addons\rhsusf_hemtt_a4\M977A4_WD_APK";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        hiddenSelections[] = {"Camo", "Camo1", "Camo2", "Camo5"};
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_CO.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_CO.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa"
        };
        class textureSources: textureSources {
            class rhs_woodland: rhs_woodland {
                textures[] = {
                    "rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa",
                    "rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_CO.paa",
                    "rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_CO.paa",
                    "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa"
                };
            };
            class rhs_desert: rhs_desert {
                textures[] = {
                    "rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO_Des.paa",
                    "rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_DES_CO.paa",
                    "rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_DES_CO.paa",
                    "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_DES_CO.paa"
                };
            };
        };
    };
    class rhsusf_M977A4_BKIT_M2_usarmy_wd: rhsusf_M977A4_usarmy_wd {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M977A4_BKIT_M2_usarmy_wd.paa";
        picture = "\rhsusf\addons\rhsusf_c_hemtt_a4\data\icon_rhsusf_M977A4_BKIT_M2_usarmy_ca.paa";
        displayName = "$STR_RHS_HEMTTA4_977A4_BKIT_M2_NAME";
        model = "\rhsusf\addons\rhsusf_hemtt_a4\M977A4_WD_APK_M2";
        accuracy = 0.5;
        unitInfoType = "RscUnitInfo";
        maxFordingDepth = 0;
        hiddenSelections[] = {
            "Camo",
            "Camo1",
            "Camo2",
            "Camo4",
            "Camo5",
            "pintle",
            "Camo6"
        };
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_CO.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
        class textureSources: textureSources {
            class rhs_woodland: rhs_woodland {
                textures[] = {
                    "rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa",
                    "rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_CO.paa",
                    "rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_CO.paa",
                    "rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
                    "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
                    "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
                };
            };
            class rhs_desert: rhs_desert {
                textures[] = {
                    "rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO_Des.paa",
                    "rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_DES_CO.paa",
                    "rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_DES_CO.paa",
                    "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
                    "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_DES_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
                    "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
                };
            };
        };
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
        showNVGGunner = 1;
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
                gunnerDoor = "DoorR";
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
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
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
        class EventHandlers: EventHandlers {
            class RHS_Turret_EH {
                turnIn = "_this call rhsusf_fnc_turret_gunnerAdjust_turnIn";
                hit = "_this call rhsusf_fnc_turret_gunnerAdjust_AI_hit";
                engine = "_this call rhsusf_fnc_turret_gunnerAdjust_AI_engine";
            };
        };
    };
    class rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd: rhsusf_M977A4_BKIT_M2_usarmy_wd {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd.paa";
        picture = "\rhsusf\addons\rhsusf_c_hemtt_a4\data\icon_rhsusf_M977A4_AMMO_BKIT_M2_usarmy_ca.paa";
        displayName = "$STR_RHS_HEMTTA4_AMMO_BKIT_M2_977A4_NAME";
        model = "\rhsusf\addons\rhsusf_hemtt_a4\M977A4_AMMO_WD_APK_M2";
        transportAmmo = 300000;
        supplyRadius = 10;
        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 5;
                canBeTransported = 1;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
        };
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
    };
    class rhsusf_M977A4_AMMO_usarmy_wd: rhsusf_M977A4_usarmy_wd {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M977A4_AMMO_usarmy_wd.paa";
        picture = "\rhsusf\addons\rhsusf_c_hemtt_a4\data\icon_rhsusf_M977A4_AMMO_usarmy_ca.paa";
        displayName = "$STR_RHS_HEMTTA4_AMMO_977A4_NAME";
        model = "\rhsusf\addons\rhsusf_hemtt_a4\M977A4_AMMO_WD";
        transportAmmo = 300000;
        supplyRadius = 10;
        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 5;
                canBeTransported = 1;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
        };
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
    };
    class rhsusf_M977A4_AMMO_BKIT_usarmy_wd: rhsusf_M977A4_BKIT_usarmy_wd {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M977A4_AMMO_BKIT_usarmy_wd.paa";
        picture = "\rhsusf\addons\rhsusf_c_hemtt_a4\data\icon_rhsusf_M977A4_AMMO_BKIT_usarmy_ca.paa";
        displayName = "$STR_RHS_HEMTTA4_AMMO_BKIT_977A4_NAME";
        model = "\rhsusf\addons\rhsusf_hemtt_a4\M977A4_AMMO_WD_APK";
        transportAmmo = 300000;
        supplyRadius = 10;
        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 5;
                canBeTransported = 1;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
        };
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
    };
    class rhsusf_M977A4_REPAIR_usarmy_wd: rhsusf_M977A4_usarmy_wd {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M977A4_REPAIR_usarmy_wd.paa";
        picture = "\rhsusf\addons\rhsusf_c_hemtt_a4\data\icon_rhsusf_M977A4_REPAIR_usarmy_ca.paa";
        displayName = "$STR_RHS_HEMTTA4_REPAIR_977A4_NAME";
        model = "\rhsusf\addons\rhsusf_hemtt_a4\M977A4_REPAIR_WD";
        memoryPointSupply = "doplnovani";
        transportRepair = 200000000;
        supplyRadius = 12;
        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 5;
                canBeTransported = 1;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
        };
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
    };
    class rhsusf_M977A4_REPAIR_BKIT_usarmy_wd: rhsusf_M977A4_BKIT_usarmy_wd {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M977A4_REPAIR_BKIT_usarmy_wd.paa";
        picture = "\rhsusf\addons\rhsusf_c_hemtt_a4\data\icon_rhsusf_M977A4_REPAIR_BKIT_usarmy_ca.paa";
        displayName = "$STR_RHS_HEMTTA4_REPAIR_BKIT_977A4_NAME";
        model = "\rhsusf\addons\rhsusf_hemtt_a4\M977A4_REPAIR_WD_APK";
        memoryPointSupply = "doplnovani";
        transportRepair = 200000000;
        supplyRadius = 12;
        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 5;
                canBeTransported = 1;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
        };
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
    };
    class rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd: rhsusf_M977A4_BKIT_M2_usarmy_wd {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd.paa";
        picture = "\rhsusf\addons\rhsusf_c_hemtt_a4\data\icon_rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_ca.paa";
        displayName = "$STR_RHS_HEMTTA4_REPAIR_BKIT_M2_977A4_NAME";
        model = "\rhsusf\addons\rhsusf_hemtt_a4\M977A4_REPAIR_WD_APK_M2";
        memoryPointSupply = "doplnovani";
        transportRepair = 200000000;
        supplyRadius = 12;
        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 5;
                canBeTransported = 1;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
        };
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
    };
    class rhsusf_M978A4_usarmy_wd: rhsusf_M977A4_usarmy_wd {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M978A4_usarmy_wd.paa";
        picture = "\rhsusf\addons\rhsusf_c_hemtt_a4\data\icon_rhsusf_M978A4_usarmy_ca.paa";
        displayName = "$STR_RHS_HEMTTA4_978A4_NAME";
        model = "\rhsusf\addons\rhsusf_hemtt_a4\M978A4_WD.p3d";
        transportFuel = 300000;
        supplyRadius = 10;
        fuelExplosionPower = 10;
        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 5;
                canBeTransported = 1;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
        };
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        hiddenSelections[] = {"Camo", "Camo3", "Camo5"};
        HiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa", "rhsusf\addons\rhsusf_hemtt_a4\data\FUEL_CO.paa", "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa"};
        class textureSources: textureSources {
            class rhs_woodland: rhs_woodland {
                textures[] = {"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa", "rhsusf\addons\rhsusf_hemtt_a4\data\FUEL_CO.paa", "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa"};
            };
            class rhs_desert: rhs_desert {
                textures[] = {"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO_Des.paa", "rhsusf\addons\rhsusf_hemtt_a4\data\FUEL_DES_CO.paa", "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_DES_CO.paa"};
            };
        };
    };
    class rhsusf_M978A4_BKIT_usarmy_wd: rhsusf_M977A4_usarmy_wd {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M978A4_BKIT_usarmy_wd.paa";
        picture = "\rhsusf\addons\rhsusf_c_hemtt_a4\data\icon_rhsusf_M978A4_BKIT_usarmy_ca.paa";
        displayName = "$STR_RHS_HEMTTA4_BKIT_978A4_NAME";
        model = "\rhsusf\addons\rhsusf_hemtt_a4\M978A4_WD_APK.p3d";
        transportFuel = 300000;
        supplyRadius = 10;
        fuelExplosionPower = 10;
        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 5;
                canBeTransported = 1;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
        };
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        hiddenSelections[] = {"Camo", "Camo1", "Camo3", "Camo5"};
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_CO.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\FUEL_CO.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa"
        };
        class textureSources: textureSources {
            class rhs_woodland: rhs_woodland {
                textures[] = {
                    "rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa",
                    "rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_CO.paa",
                    "rhsusf\addons\rhsusf_hemtt_a4\data\FUEL_CO.paa",
                    "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa"
                };
            };
            class rhs_desert: rhs_desert {
                textures[] = {
                    "rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO_Des.paa",
                    "rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_DES_CO.paa",
                    "rhsusf\addons\rhsusf_hemtt_a4\data\FUEL_DES_CO.paa",
                    "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_DES_CO.paa"
                };
            };
        };
    };
    class rhsusf_M977A4_usarmy_d: rhsusf_M977A4_usarmy_wd {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M977A4_usarmy_d.paa";
        picture = "\rhsusf\addons\rhsusf_c_hemtt_a4\data\icon_rhsusf_M977A4_usarmy_ca.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO_Des.paa", "rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_des_CO.paa", "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_des_CO.paa"};
    };
    class rhsusf_M977A4_BKIT_usarmy_d: rhsusf_M977A4_BKIT_usarmy_wd {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M977A4_BKIT_usarmy_d.paa";
        picture = "\rhsusf\addons\rhsusf_c_hemtt_a4\data\icon_rhsusf_M977A4_BKIT_usarmy_ca.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO_Des.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_Des_CO.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_des_CO.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_des_CO.paa"
        };
    };
    class rhsusf_M977A4_BKIT_M2_usarmy_d: rhsusf_M977A4_BKIT_M2_usarmy_wd {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M977A4_BKIT_M2_usarmy_d.paa";
        picture = "\rhsusf\addons\rhsusf_c_hemtt_a4\data\icon_rhsusf_M977A4_BKIT_M2_usarmy_ca.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO_Des.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_Des_CO.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_des_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_des_CO.paa"
        };
    };
    class rhsusf_M977A4_REPAIR_usarmy_d: rhsusf_M977A4_REPAIR_usarmy_wd {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M977A4_REPAIR_usarmy_d.paa";
        picture = "\rhsusf\addons\rhsusf_c_hemtt_a4\data\icon_rhsusf_M977A4_REPAIR_usarmy_ca.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO_Des.paa", "rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_des_CO.paa", "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_des_CO.paa"};
    };
    class rhsusf_M977A4_REPAIR_BKIT_usarmy_d: rhsusf_M977A4_REPAIR_BKIT_usarmy_wd {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M977A4_REPAIR_BKIT_usarmy_d.paa";
        picture = "\rhsusf\addons\rhsusf_c_hemtt_a4\data\icon_rhsusf_M977A4_REPAIR_BKIT_usarmy_ca.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO_Des.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_Des_CO.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_des_CO.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_des_CO.paa"
        };
    };
    class rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_d: rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_d.paa";
        picture = "\rhsusf\addons\rhsusf_c_hemtt_a4\data\icon_rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_ca.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO_Des.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_Des_CO.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_des_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_des_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M977A4_AMMO_usarmy_d: rhsusf_M977A4_AMMO_usarmy_wd {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M977A4_AMMO_usarmy_d.paa";
        picture = "\rhsusf\addons\rhsusf_c_hemtt_a4\data\icon_rhsusf_M977A4_AMMO_usarmy_ca.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO_Des.paa", "rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_des_CO.paa", "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_des_CO.paa"};
    };
    class rhsusf_M977A4_AMMO_BKIT_usarmy_d: rhsusf_M977A4_AMMO_BKIT_usarmy_wd {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M977A4_AMMO_BKIT_usarmy_d.paa";
        picture = "\rhsusf\addons\rhsusf_c_hemtt_a4\data\icon_rhsusf_M977A4_AMMO_BKIT_usarmy_ca.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO_Des.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_Des_CO.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_des_CO.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_des_CO.paa"
        };
    };
    class rhsusf_M977A4_AMMO_BKIT_M2_usarmy_d: rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M977A4_AMMO_BKIT_M2_usarmy_d.paa";
        picture = "\rhsusf\addons\rhsusf_c_hemtt_a4\data\icon_rhsusf_M977A4_AMMO_BKIT_M2_usarmy_ca.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO_Des.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_Des_CO.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_des_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_des_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_M978A4_usarmy_d: rhsusf_M978A4_usarmy_wd {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M978A4_usarmy_d.paa";
        picture = "\rhsusf\addons\rhsusf_c_hemtt_a4\data\icon_rhsusf_M978A4_usarmy_ca.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO_Des.paa", "rhsusf\addons\rhsusf_hemtt_a4\data\FUEL_des_CO.paa", "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_des_CO.paa"};
    };
    class rhsusf_M978A4_BKIT_usarmy_d: rhsusf_M978A4_BKIT_usarmy_wd {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M978A4_BKIT_usarmy_d.paa";
        picture = "\rhsusf\addons\rhsusf_c_hemtt_a4\data\icon_rhsusf_M978A4_BKIT_usarmy_ca.paa";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO_Des.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_Des_CO.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\FUEL_des_CO.paa",
            "rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_des_CO.paa"
        };
    };
};
