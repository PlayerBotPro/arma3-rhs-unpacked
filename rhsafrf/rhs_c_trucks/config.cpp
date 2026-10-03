class CfgPatches {
    class rhs_c_trucks {
        units[] = {
            "rhs_gaz66_vmf",
            "rhs_gaz66_vdv",
            "rhs_gaz66_vv",
            "rhs_gaz66_msv",
            "rhs_gaz66o_vmf",
            "rhs_gaz66o_vv",
            "rhs_gaz66o_vdv",
            "rhs_gaz66o_msv",
            "rhs_gaz66_flat_vmf",
            "rhs_gaz66_flat_vdv",
            "rhs_gaz66_flat_vv",
            "rhs_gaz66_flat_msv",
            "rhs_gaz66o_flat_vmf",
            "rhs_gaz66o_flat_vv",
            "rhs_gaz66o_flat_vdv",
            "rhs_gaz66o_flat_msv",
            "rhs_gaz66_ap2_vmf",
            "rhs_gaz66_repair_vmf",
            "rhs_gaz66_r142_vmf",
            "rhs_gaz66_ammo_vmf",
            "rhs_gaz66_ap2_vdv",
            "rhs_gaz66_repair_vdv",
            "rhs_gaz66_r142_vdv",
            "rhs_gaz66_ammo_vdv",
            "rhs_gaz66_ap2_vv",
            "rhs_gaz66_repair_vv",
            "rhs_gaz66_r142_vv",
            "rhs_gaz66_ammo_vv",
            "rhs_gaz66_ap2_msv",
            "rhs_gaz66_repair_msv",
            "rhs_gaz66_r142_msv",
            "rhs_gaz66_ammo_msv",
            "rhs_gaz66_zu23_vmf",
            "rhs_gaz66_zu23_vv",
            "rhs_gaz66_zu23_vdv",
            "rhs_gaz66_zu23_msv"
        };
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {
            "rhs_main",
            "rhs_decals",
            "rhs_c_troops",
            "rhs_weapons",
            "A3_Soft_F",
            "A3_CargoPoses_F"
        };
        name = "GAZ-66";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class gaz66_functions {
            class gaz66_init {
                file = "\rhsafrf\addons\rhs_c_trucks\scripts\rhs_trucks_init.sqf";
                description = "Init for gaz-66 trucks";
            };
            class gaz66_radioDeploy {
                file = "\rhsafrf\addons\rhs_c_trucks\scripts\rhs_gaz66_radioDeploy.sqf";
                description = "Gaz-66 radio equipment deploy script";
            };
        };
    };
};
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        rhs_gaz66_driver = "rhs_gaz66_driver";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class KIA_rhs_gaz66_driver: DefaultDie {
            actions = "DeadActions";
            file = "\rhsafrf\addons\rhs_gaz66\Data\Anim\KIA_GAZ66_driver.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            connectTo[] = {"Unconscious", 0.1};
            soundEnabled = 0;
        };
        class rhs_gaz66_driver: Crew {
            file = "\rhsafrf\addons\rhs_gaz66\Data\Anim\GAZ66_driver.rtm";
            interpolateTo[] = {"KIA_rhs_gaz66_driver", 1};
        };
        class KIA_GAZ66_Cargo01: DefaultDie {
            actions = "DeadActions";
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\KIA_UAZ_Cargo01.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            connectTo[] = {"Unconscious", 0.1};
            soundEnabled = 0;
        };
        class GAZ66_Cargo01: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_Cargo01_V0.rtm";
            interpolateTo[] = {"KIA_RHS_UAZ_Cargo01", 0.1};
            connectTo[] = {
                "RHS_UAZ_Cargo01",
                0.1,
                "RHS_UAZ_Cargo01_V1",
                0.1,
                "RHS_UAZ_Cargo01_V2",
                0.1,
                "RHS_UAZ_Cargo01_V3",
                0.1
            };
            equivalentTo = "RHS_UAZ_Cargo01";
            variantsAI[] = {
                "RHS_UAZ_Cargo01",
                0.6,
                "RHS_UAZ_Cargo01_V1",
                0.1,
                "RHS_UAZ_Cargo01_V2",
                0.15,
                "RHS_UAZ_Cargo01_V3",
                0.07
            };
            variantAfter[] = {5, 10, 20};
            speed = 0.3;
        };
        class GAZ66_Cargo01_V1: GAZ66_Cargo01 {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_Cargo01_V1.rtm";
            interpolateTo[] = {"KIA_RHS_UAZ_Cargo01", 0.1};
            connectTo[] = {"RHS_UAZ_Cargo01", 0.1};
            variantAfter[] = {4, 4, 4};
            speed = 0.246;
        };
        class GAZ66_Cargo01_V2: GAZ66_Cargo01 {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_Cargo01_V2.rtm";
            interpolateTo[] = {"KIA_RHS_UAZ_Cargo01", 0.1};
            connectTo[] = {"RHS_UAZ_Cargo01", 0.1};
            variantAfter[] = {2.5, 2.5, 2.5};
            speed = 0.39;
        };
        class GAZ66_Cargo01_V3: GAZ66_Cargo01 {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_Cargo01_V3.rtm";
            interpolateTo[] = {"KIA_RHS_UAZ_Cargo01", 0.1};
            connectTo[] = {"RHS_UAZ_Cargo01", 0.1};
            variantAfter[] = {5, 5, 5};
            speed = 0.197;
        };
    };
};
class CfgSounds {
    class RHS_GAZ66_wipers {
        name = "RHS GAZ66 wipers sound";
        sound[] = {
            "\rhsafrf\addons\rhs_gaz66\data\sounds\wipers.wss",
            56.234135,
            0.6,
            10
        };
        titles[] = {0, ""};
    };
};
class DefaultEventHandlers;
class CfgVehicles {
    class LandVehicle;
    class Car: LandVehicle {
        class HitPoints;
        class NewTurret;
    };
    class Car_F: Car {
        class Turrets {
            class MainTurret: NewTurret {
                class ViewOptics;
            };
        };
        class HitPoints {
            class HitLFWheel;
            class HitLF2Wheel;
            class HitRFWheel;
            class HitRF2Wheel;
            class HitBody;
            class HitFuel;
            class HitEngine;
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
        };
        class EventHandlers;
        class ViewPilot;
    };
    class Truck_F: Car_F {
        class AnimationSources;
    };
    class rhs_truck: Truck_F {
        dlc = "RHS_AFRF";
        category = "Car";
        insideSoundCoef = 0.2;
        scope = 0;
        vehicleClass = "rhs_vehclass_truck";
        editorSubcategory = "rhs_EdSubcat_truck";
        model = "\rhsafrf\addons\rhs_gaz66\rhs_gaz66.p3d";
        picture = "\rhsafrf\addons\rhs_gaz66\data\ico\rhs_gaz66_pic_ca.paa";
        icon = "\rhsafrf\addons\rhs_gaz66\data\ico\icomap_GAZ66_CA.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_GAZ66";
        side = 0;
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_driver";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Army', [3,1]]"};
        typicalCargo[] = {"rhs_msv_driver"};
        nameSound = "truck";
        accuracy = 0.25;
        weapons[] = {"TruckHorn"};
        steerAheadPlan = 0.26;
        armor = 50;
        damageResistance = 0.00845;
        armorWheels = 0.12;
        driverAction = "rhs_gaz66_driver";
        driverInAction = "rhs_gaz66_driver";
        tf_hasLRradio_api = 0;
        getInAction = "GetInLow";
        getOutAction = "GetOutLow";
        cargoGetInAction[] = {"GetInLow", "GetInMRAP_01_cargo"};
        cargoGetOutAction[] = {"GetOutLow", "GetOutHelicopterCargo"};
        memoryPointSupply = "pos codriver dir";
        normalSpeedForwardCoef = 0.75;
        slowSpeedForwardCoef = 0.45;
        terrainCoef = 2;
        simulation = "carx";
        dampersBumpCoef = 2;
        precision = 10;
        brakeDistance = 3;
        acceleration = 15;
        fireResistance = 5;
        maxSpeed = 90;
        fuelCapacity = 40;
        RHS_fuelCapacity = 210;
        wheelCircumference = 3.3;
        brakeIdleSpeed = 1;
        maxFordingDepth = 0;
        waterResistance = 1;
        waterResistanceCoef = 0.15;
        waterSpeedFactor = 0.2;
        waterLeakiness = 10;
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -7.9,
                "N",
                0,
                "D1",
                6.48,
                "D2",
                3.09,
                "D3",
                1.6,
                "D4",
                0.8
            };
            TransmissionRatios[] = {"High", 6.79};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        changeGearMinEffectivity[] = {0.95, 0.15, 0.95, 0.95, 0.95, 0.95};
        switchTime = 0.83;
        latency = 1.5;
        differentialType = "all_limited";
        frontRearSplit = 0.5;
        frontBias = 1.3;
        rearBias = 1.3;
        centreBias = 1;
        clutchStrength = 40;
        transmissionLosses = 8;
        dampingRateFullThrottle = 0.05;
        dampingRateZeroThrottleClutchEngaged = 1.35;
        dampingRateZeroThrottleClutchDisengaged = 0.35;
        torqueCurve[] = {
            {0, 0},
            {0.3125, 0.897887},
            {0.375, 0.940141},
            {0.5, 0.961268},
            {0.625, 1},
            {0.78125, 1},
            {0.875, 0.961268},
            {1, 0.464789}
        };
        enginePower = 89;
        engineMOI = 0.95;
        peakTorque = 568;
        maxOmega = 335.1;
        minOmega = 50;
        idleRPM = 500;
        redRPM = 3200;
        engineLosses = 10;
        thrustDelay = 1.5;
        accelAidForceYOffset = -0.15;
        antiRollbarForceCoef = 0.2;
        antiRollbarForceLimit = 0.5;
        antiRollbarSpeedMin = 30;
        antiRollbarSpeedMax = 65;
        class Wheels {
            class LF {
                steering = 1;
                width = 0.32;
                side = "left";
                boneName = "wheel_1_1_damper";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                suspForceAppPointOffset = "wheel_1_1_axis";
                tireForceAppPointOffset = "wheel_1_1_axis";
                suspTravelDirection[] = {-0.125, -1, 0};
                mass = 80;
                MOI = 28;
                dampingRate = 6.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 8500;
                maxHandBrakeTorque = 0;
                maxCompression = 0.3;
                maxDroop = 0.25;
                sprungMass = -1;
                springStrength = 61938;
                springDamperRate = 10342;
                longitudinalStiffnessPerUnitGravity = 2986;
                latStiffX = 25;
                latStiffY = 30;
                frictionVsSlipGraph[] = {{0, 1.2}, {0.5, 1.13}, {1, 1}};
            };
            class LR: LF {
                boneName = "wheel_1_2_damper";
                steering = 0;
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                suspForceAppPointOffset = "wheel_1_2_axis";
                tireForceAppPointOffset = "wheel_1_2_axis";
                maxHandBrakeTorque = 20000;
                latStiffX = 5;
            };
            class RF: LF {
                boneName = "wheel_2_1_damper";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                suspForceAppPointOffset = "wheel_2_1_axis";
                tireForceAppPointOffset = "wheel_2_1_axis";
                steering = 1;
                side = "right";
                suspTravelDirection[] = {0.125, -1, 0};
            };
            class RR: RF {
                boneName = "wheel_2_2_damper";
                steering = 0;
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                suspForceAppPointOffset = "wheel_2_2_axis";
                tireForceAppPointOffset = "wheel_2_2_axis";
                maxHandBrakeTorque = 20000;
                latStiffX = 5;
            };
        };
        soundAttenuationCargo[] = {1, 0.4};
        attenuationEffectType = "CarAttenuation";
        soundGetIn[] = {"A3\Sounds_F\vehicles\soft\Truck_02\getin", 0.56234133, 1};
        soundGetOut[] = {
            "A3\Sounds_F\vehicles\soft\Truck_02\getout",
            0.56234133,
            1,
            20
        };
        soundDammage[] = {"", 0.56234133, 1};
        soundEngineOnInt[] = {
            "\rhsafrf\addons\rhs_gaz66\data\sounds\Zil_Gaz66_Int_start.wss",
            0.70794576,
            1,
            300
        };
        soundEngineOnExt[] = {
            "\rhsafrf\addons\rhs_gaz66\data\sounds\zil_gaz66_start.wss",
            0.70794576,
            1,
            300
        };
        soundEngineOffInt[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_stop", 0.70794576, 1};
        soundEngineOffExt[] = {
            "A3\Sounds_F\vehicles\soft\Truck_02\ext_stop",
            0.70794576,
            1,
            200
        };
        buildCrash0[] = {
            "A3\sounds_f\Vehicles\soft\noises\crash_building_01",
            1,
            1,
            200
        };
        buildCrash1[] = {
            "A3\sounds_f\Vehicles\soft\noises\crash_building_02",
            1,
            1,
            200
        };
        buildCrash2[] = {
            "A3\sounds_f\Vehicles\soft\noises\crash_building_03",
            1,
            1,
            200
        };
        buildCrash3[] = {
            "A3\sounds_f\Vehicles\soft\noises\crash_building_04",
            1,
            1,
            200
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
            "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",
            1,
            1,
            200
        };
        WoodCrash1[] = {
            "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",
            1,
            1,
            200
        };
        WoodCrash2[] = {
            "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",
            1,
            1,
            200
        };
        WoodCrash3[] = {
            "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",
            1,
            1,
            200
        };
        WoodCrash4[] = {
            "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",
            1,
            1,
            200
        };
        WoodCrash5[] = {
            "A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",
            1,
            1,
            200
        };
        soundWoodCrash[] = {
            "woodCrash0",
            0.166,
            "woodCrash1",
            0.166,
            "woodCrash2",
            0.166,
            "woodCrash3",
            0.166,
            "woodCrash4",
            0.166,
            "woodCrash5",
            0.166
        };
        ArmorCrash0[] = {
            "A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",
            1,
            1,
            200
        };
        ArmorCrash1[] = {
            "A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",
            1,
            1,
            200
        };
        ArmorCrash2[] = {
            "A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",
            1,
            1,
            200
        };
        ArmorCrash3[] = {
            "A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",
            1,
            1,
            200
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
        class Sounds {
            class Idle_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_gaz66\data\sounds\zil_gaz66_idle.wss",
                    0.56234133,
                    1,
                    200
                };
                frequency = "0.95	+	((rpm/	3200) factor[(100/	3200),(800/	3200)])*0.15";
                volume = "engineOn*camPos*(((rpm/	3200) factor[(10/	3200),(50/	3200)])	*	((rpm/	3200) factor[(800/	3200),(600/	3200)]))*2.0";
            };
            class Engine {
                sound[] = {
                    "\rhsafrf\addons\rhs_gaz66\data\sounds\zil_gaz66_driving.wss",
                    0.63095737,
                    1,
                    200
                };
                frequency = "0.85	+	((rpm/	3200) factor[(610/	3200),(3200/	3200)])*0.95";
                volume = "engineOn*camPos*(((rpm/	3200) factor[(620/	3200),(820/	3200)])	*	((rpm/	3200) factor[(3200/	3200),(3200/	3200)]))*2.0";
            };
            class EngineThrust {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_01",
                    0.63095737,
                    1,
                    200
                };
                frequency = "0.85	+	((rpm/	3200) factor[(610/	3200),(6400/	3200)])*0.75";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.3,1])))*(((rpm/	3200) factor[(620/	3200),(820/	3200)])	*	((rpm/	3200) factor[(3200/	3200),(3200/	3200)]))*1.5";
            };
            class Idle_int {
                sound[] = {
                    "\rhsafrf\addons\rhs_gaz66\data\sounds\Zil_GAz66__Int_Idle.wss",
                    0.56234133,
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	3200) factor[(500/	3200),(800/	3200)])*0.25";
                volume = "engineOn*(1-camPos)*(((rpm/	3200) factor[(10/	3200),(50/	3200)])	*	((rpm/	3200) factor[(800/	3200),(600/	3200)]))*2";
            };
            class Engine_int {
                sound[] = {
                    "\rhsafrf\addons\rhs_gaz66\data\sounds\Zil_Gaz66_Int_Driving.wss",
                    0.56234133,
                    1,
                    200
                };
                frequency = "0.85	+	((rpm/	3200) factor[(610/	3200),(6400/	3200)])*0.95";
                volume = "engineOn*(1-camPos)*(((rpm/    3200) factor[(400/    3200),(600/    3200)])    *    ((rpm/    3200) factor[(3200/    3200),(3200/    3200)]))*2.0";
            };
            class EngineThrust_int {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_01",
                    0.63095737,
                    1,
                    200
                };
                frequency = "0.85	+	((rpm/	3200) factor[(610/	3200),(3200/	3200)])*0.75";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.3,1])))*(((rpm/	3200) factor[(620/	3200),(820/	3200)])	*	((rpm/	3200) factor[(3200/	3200),(3200/	3200)]))*2";
            };
            class Movement {
                sound = "soundEnviron";
                frequency = "1";
                volume = "0";
            };
            class TiresRockOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
                    1,
                    1,
                    60
                };
                frequency = "1";
                volume = "camPos*rock*(speed factor[2, 20])";
            };
            class TiresSandOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
                    1,
                    1,
                    60
                };
                frequency = "1";
                volume = "camPos*sand*(speed factor[2, 20])";
            };
            class TiresGrassOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
                    1,
                    1,
                    60
                };
                frequency = "1";
                volume = "camPos*grass*(speed factor[2, 20])";
            };
            class TiresMudOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
                    1,
                    1,
                    60
                };
                frequency = "1";
                volume = "camPos*mud*(speed factor[2, 20])";
            };
            class TiresGravelOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
                    1,
                    1,
                    60
                };
                frequency = "1";
                volume = "camPos*gravel*(speed factor[2, 20])";
            };
            class TiresAsphaltOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
                    1,
                    1,
                    60
                };
                frequency = "1";
                volume = "camPos*asphalt*(speed factor[2, 20])";
            };
            class NoiseOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
                    1,
                    1,
                    90
                };
                frequency = "1";
                volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
            };
            class TiresRockIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1", 0.70794576, 1};
                frequency = "1";
                volume = "(1-camPos)*rock*(speed factor[2, 20])";
            };
            class TiresSandIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2", 0.70794576, 1};
                frequency = "1";
                volume = "(1-camPos)*sand*(speed factor[2, 20])";
            };
            class TiresGrassIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2", 0.70794576, 1};
                frequency = "1";
                volume = "(1-camPos)*grass*(speed factor[2, 20])";
            };
            class TiresMudIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2", 0.70794576, 1};
                frequency = "1";
                volume = "(1-camPos)*mud*(speed factor[2, 20])";
            };
            class TiresGravelIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1", 0.70794576, 1};
                frequency = "1";
                volume = "(1-camPos)*gravel*(speed factor[2, 20])";
            };
            class TiresAsphaltIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2", 0.70794576, 1};
                frequency = "1";
                volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
            };
            class NoiseIn {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", 0.70794576, 1};
                frequency = "1";
                volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
            };
            class breaking_ext_road {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
                    0.70794576,
                    1,
                    80
                };
                frequency = 1;
                volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
            };
            class acceleration_ext_road {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
                    0.70794576,
                    1,
                    80
                };
                frequency = 1;
                volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
            };
            class turn_left_ext_road {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
                    0.70794576,
                    1,
                    80
                };
                frequency = 1;
                volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_ext_road {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
                    0.70794576,
                    1,
                    80
                };
                frequency = 1;
                volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
            class breaking_ext_dirt {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",
                    0.70794576,
                    1,
                    60
                };
                frequency = 1;
                volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
            };
            class acceleration_ext_dirt {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_ext_1",
                    0.70794576,
                    1,
                    60
                };
                frequency = 1;
                volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
            };
            class turn_left_ext_dirt {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
                    0.70794576,
                    1,
                    60
                };
                frequency = 1;
                volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_ext_dirt {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
                    0.70794576,
                    1,
                    60
                };
                frequency = 1;
                volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
            class breaking_int_road {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", 0.63095737, 1};
                frequency = 1;
                volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
            };
            class acceleration_int_road {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.63095737, 1};
                frequency = 1;
                volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
            };
            class turn_left_int_road {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.63095737, 1};
                frequency = 1;
                volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_int_road {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.63095737, 1};
                frequency = 1;
                volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
            class breaking_int_dirt {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int", 0.63095737, 1};
                frequency = 1;
                volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
            };
            class acceleration_int_dirt {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_int_1", 0.63095737, 1};
                frequency = 1;
                volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
            };
            class turn_left_int_dirt {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", 0.63095737, 1};
                frequency = 1;
                volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
            };
            class turn_right_int_dirt {
                sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", 0.63095737, 1};
                frequency = 1;
                volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
            };
            class RainIn {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\rain.wss", 1.4125376, 1};
                frequency = 1;
                volume = "rain*(1-camPos)";
            };
            class RainExt {
                sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\rain.wss", 1.4125376, 1};
                frequency = 1;
                volume = "rain*camPos";
            };
        };
        cargoAction[] = {
            "rhs_passenger_apc_narrow_generic01",
            "rhs_passenger_apc_narrow_generic03still",
            "rhs_passenger_apc_narrow_generic03",
            "passenger_generic01_leanright",
            "rhs_passenger_apc_generic01",
            "rhs_passenger_apc_generic01",
            "rhs_passenger_apc_generic03",
            "rhs_passenger_apc_narrow_generic01",
            "passenger_generic01_leanleft",
            "rhs_passenger_apc_generic03",
            "rhs_passenger_apc_narrow_generic02",
            "rhs_passenger_apc_generic02",
            "rhs_passenger_apc_generic01",
            "passenger_generic01_foldhands",
            "rhs_passenger_apc_generic04",
            "passenger_generic01_leanleft"
        };
        cargoIsCoDriver[] = {1, 1, 0};
        initCargoAngleY = 180;
        driverCompartments = 1;
        cargoCompartments[] = {1, 2};
        viewCargoShadow = 1;
        viewCargoShadowDiff = 0.05;
        fuelExplosionPower = 0.1;
        wheelDamageRadiusCoef = 0.9;
        wheelDestroyRadiusCoef = 0.4;
        crewCrashProtection = 0.25;
        driverLeftHandAnimName = "drivewheel";
        driverRightHandAnimName = "drivewheel";
        memoryPointsGetInDriver = "pos driver";
        memoryPointsGetInDriverDir = "pos driver dir";
        memoryPointsGetInCoDriver = "pos codriver";
        memoryPointsGetInCoDriverDir = "pos codriver dir";
        memoryPointsGetInCargo[] = {"pos codriver", "pos cargo"};
        memoryPointsGetInCargoDir[] = {"pos codriver dir", "pos cargo dir"};
        driverDoor = "Door_LF";
        cargoDoors[] = {"Door_RF", ""};
        slingLoadCargoMemoryPoints[] = {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        slingLoadCargoMemoryPointsDir[] = {
            "SlingLoadCargo1_dir",
            "SlingLoadCargo2_dir",
            "SlingLoadCargo3_dir",
            "SlingLoadCargo4_dir"
        };
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "n1",
            "n2",
            "n3",
            "n4",
            "i1",
            "i2",
            "i3",
            "i4"
        };
        hiddenSelectionsTextures[] = {
            "\rhsafrf\addons\rhs_gaz66\data\gaz66_co.paa",
            "\rhsafrf\addons\rhs_gaz66\data\tent_co.paa",
            "\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa",
            "\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa",
            "\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa",
            "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
        };
        class textureSources {
            class standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "\rhsafrf\addons\rhs_gaz66\data\gaz66_co.paa",
                    "\rhsafrf\addons\rhs_gaz66\data\tent_co.paa",
                    "\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa",
                    "\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa",
                    "\rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa"
                };
            };
            class camo: standard {
                displayName = "3-Color Camo";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_gaz66\data\gaz66ru_co.paa", "\rhsafrf\addons\rhs_gaz66\data\tentru_co.paa"};
            };
            class cdf: standard {
                displayName = "CDF";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_gaz66\data\gaz66_cdf_co.paa", "\rhsafrf\addons\rhs_gaz66\data\tent_cdf_co.paa"};
            };
            class chdkz: standard {
                displayName = "ChDKZ";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_gaz66\data\gaz66_chdk_co.paa", "\rhsafrf\addons\rhs_gaz66\data\tent_chdk_co.paa"};
            };
            class rhs_sand: standard {
                displayName = "Sand";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "\rhsafrf\addons\rhs_gaz66_camo\data\gaz66_sand_co.paa",
                    "\rhsafrf\addons\rhs_gaz66\data\tent_co.paa",
                    "\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_kung_sand_co.paa",
                    "\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_ap2kung_sand_co.paa",
                    "\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_repkung_sand_co.paa"
                };
            };
        };
        textureList[] = {};
        class AnimationSources: AnimationSources {
            class Door_LF {
                source = "door";
                animPeriod = 0.8;
                sound = "RHS_Ural_Door";
                soundPosition = "DoorL_axis";
            };
            class Door_RF: Door_LF {
                soundPosition = "DoorR_axis";
            };
            class HitSpare {
                source = "Hit";
                hitpoint = "HitSpare";
                raw = 1;
            };
            class UseSpare: HitSpare {
                hitpoint = "UseSpare";
            };
            class wiper {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class wipers {
                source = "door";
                animPeriod = 1;
                initPhase = 0;
                sound = "RHS_Wipers";
                soundPosition = "wiper_axis";
            };
            class cover_hide {
                mass = 1;
                source = "user";
                displayName = "hide cover";
                animPeriod = 0.1;
                initPhase = 0;
            };
            class spare_hide: cover_hide {
                displayName = "hide spare wheel";
            };
            class bench_hide: cover_hide {
                displayName = "hide cargo bench";
            };
            class rear_numplate_hide: cover_hide {
                displayName = "hide rear registration numbers";
                initPhase = 1;
            };
            class light_hide: spare_hide {
                displayName = "hide light covers";
                onPhaseChanged = "(_this select 0) animateSource ['light_hide',(_this select 1),true];";
            };
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
            class searchlight_hide: longlights_hide {};
            class cabinlights_hide: longlights_hide {};
            class searchlight_rot {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class turnout1 {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class turnout2: turnout1 {};
        };
        class HitPoints: HitPoints {
            class HitBody: HitBody {
                name = "karoserie";
                armor = 1;
            };
            class HitFuel: HitFuel {
                name = "palivo";
                armor = 0.3;
                material = -1;
            };
            class HitLFWheel: HitLFWheel {
                radius = 0.25;
                visual = "wheel_1_1_damage";
                armorComponent = "wheel_1_1_hide";
                armor = -200;
                minimalHit = -0.01;
                explosionShielding = 4;
                passThrough = 0;
            };
            class HitLF2Wheel: HitLF2Wheel {
                radius = 0.25;
                visual = "wheel_1_2_damage";
                armorComponent = "wheel_1_2_hide";
                armor = -200;
                minimalHit = -0.01;
                explosionShielding = 4;
                passThrough = 0;
            };
            class HitRFWheel: HitRFWheel {
                radius = 0.25;
                visual = "wheel_2_1_damage";
                armorComponent = "wheel_2_1_hide";
                armor = -200;
                minimalHit = -0.01;
                explosionShielding = 4;
                passThrough = 0;
            };
            class HitRF2Wheel: HitRF2Wheel {
                radius = 0.25;
                visual = "wheel_2_2_damage";
                armorComponent = "wheel_2_2_hide";
                armor = -200;
                minimalHit = -0.01;
                explosionShielding = 4;
                passThrough = 0;
            };
            class HitSpare: HitRF2Wheel {
                name = "spare1";
            };
            class UseSpare: HitSpare {
                name = "";
                visual = "-";
                armor = 1;
            };
            class HitEngine: HitEngine {
                name = "motor";
                armor = 0.4;
                passThrough = 0.2;
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Engine_Smoke {
                        simulation = "particles";
                        type = "SmallWreckSmoke";
                        position = "engine_smoke";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 60;
                    };
                    class RHS_Engine_Smoke_small1: RHS_Engine_Smoke {
                        type = "WeaponWreckSmoke";
                        position = "engine_smoke2";
                    };
                    class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1 {
                        position = "engine_smoke3";
                    };
                    class RHS_Engine_Sounds: RHS_Engine_Smoke {
                        simulation = "sound";
                        type = "SmokeWreck1";
                    };
                };
            };
        };
        class ViewPilot: ViewPilot {
            initFov = 0.7;
            minFov = 0.25;
            maxFov = 1.4;
            initAngleX = -15;
            minAngleX = -65;
            maxAngleX = 85;
            initAngleY = 0;
            minAngleY = -150;
            maxAngleY = 150;
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_gaz66\data\gaz66.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\gaz66_dam.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\gaz66_des.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\gaz66_chassis.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\gaz66_dam.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\gaz66_des.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\tent.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\tent.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\tent_des.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_damage.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_damage.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_in.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_in_damage.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_in_damage.rvmat",
                "a3\data_f\default.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\default_destruct.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\default_destruct.rvmat"
            };
        };
        class Reflectors {
            class LSvetla {
                color[] = {800, 900, 650};
                ambient[] = {2, 2, 2};
                position = "L svetlo";
                direction = "konec L svetla";
                hitpoint = "L svetlo";
                selection = "L svetlo";
                size = 1;
                innerAngle = 30;
                outerAngle = 100;
                coneFadeCoef = 10;
                intensity = 1.5;
                useFlare = 1;
                dayLight = 0;
                flareSize = 0.85;
                class Attenuation {
                    start = 1;
                    constant = 0;
                    linear = 0;
                    quadratic = 0.25;
                    hardLimitStart = 30;
                    hardLimitEnd = 60;
                };
            };
            class RSvetla: LSvetla {
                position = "P svetlo";
                direction = "konec P svetla";
                hitpoint = "P svetlo";
                selection = "P svetlo";
            };
            class Right2: RSvetla {
                position = "Light_R_Flare";
                direction = "Light_R_Flare_end";
                useFlare = 1;
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
            class Left2: LSvetla {
                position = "Light_L_Flare";
                direction = "Light_L_Flare_end";
                useFlare = 1;
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
            class Searchlight: LSvetla {
                position = "Searchlight_pos";
                direction = "Searchlight_dir";
                hitpoint = "Searchlight";
                selection = "Searchlight";
                useFlare = 1;
                innerAngle = 35;
                outerAngle = 179;
            };
            class Long_Left {
                color[] = {800, 900, 650};
                ambient[] = {5, 5, 5};
                position = "Light_L_Long";
                direction = "Light_L_Long_end";
                hitpoint = "L svetlo";
                selection = "L svetlo";
                size = 1;
                innerAngle = 22;
                outerAngle = 29;
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
                hitpoint = "P svetlo";
                selection = "P svetlo";
            };
            class Long_Right2: Long_Right {
                useFlare = 1;
                position = "light_R_Long_flare";
                innerAngle = 50;
                outerAngle = 139;
                coneFadeCoef = 51;
                flareSize = 1;
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
                outerAngle = 139;
                coneFadeCoef = 51;
                flareSize = 1;
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
                    quadratic = 50;
                    hardLimitStart = 1.5;
                    hardLimitEnd = 2;
                };
            };
        };
        aggregateReflectors[] = {{}};
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
        class Exhausts {
            class Exhaust1 {
                position = "vyfuk start";
                direction = "vyfuk konec";
                effect = "ExhaustEffectHTruck";
            };
        };
        class UserActions {
            class wiperson {
                displayName = "$STR_RHS_WIPERSON";
                position = "";
                radius = 12;
                showWindow = 0;
                onlyForplayer = 1;
                condition = "Alive(this) AND (player == driver this) AND isengineon (this) AND this animationPhase 'wipers' < 0.5";
                statement = "[this,0] spawn rhs_fnc_wipers";
            };
            class wipersoff: wiperson {
                displayName = "$STR_RHS_WIPERSOFF";
                condition = "Alive(this) AND (player == driver this) AND this animationPhase 'wipers' > 0.5";
                statement = "[this,1] spawn rhs_fnc_wipers";
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
                statement = "[this,0] call rhs_fnc_carLightToggle";
            };
            class cabinlights_toggle: lights_toggle {
                shortcut = "lockTarget";
                displayName = "Toggle cabin lights";
                statement = "[this,1] call rhs_fnc_carLightToggle";
            };
            class searchlight_toggle: lights_toggle {
                shortcut = "";
                displayName = "Toggle searchlight";
                statement = "[this,3] call rhs_fnc_carLightToggle";
            };
            class searchlight_adjust: lights_toggle {
                shortcut = "";
                displayName = "Adjust searchlight";
                condition = "((call rhs_fnc_findPlayer) == driver this) AND (isLightOn this) AND (this animationPhase 'searchlight_hide' == 0)";
                statement = "[this] spawn rhs_fnc_adjustSearchlight";
            };
        };
        class Attributes {
            class ObjectTexture {
                control = "ObjectTexture";
                data = "ObjectTexture";
                displayName = "Skin";
                tooltip = "Texture and material set applied on the object.";
            };
            class rhs_decalNumber_type {
                displayName = "Define font type of plate number";
                tooltip = "Define kind of font that will be drawn on vehicle.";
                property = "rhs_decalNumber_type";
                control = "Combo";
                expression = "_this setVariable ['%s', _value];[_this,[['Number', cTrucksGaz4NumberPlaces, _value]]] call rhs_fnc_decalsInit";
                defaultValue = 0;
                typeName = "STRING";
                class values {
                    class Default {
                        name = "Default";
                        value = "Default";
                        defaultValue = "Default";
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
                    class LicensePlate {
                        name = "License Plate";
                        value = "LicensePlate";
                    };
                };
            };
            class rhs_decalNumber {
                collapsed = 1;
                displayName = "Set plate number";
                tooltip = "Set plate number. 4 numbers are required. If 0, random number will be generated";
                property = "rhs_decalNumber";
                control = "Edit";
                validate = "Number";
                typeName = "Number";
                defaultValue = "-1";
                expression = "if( _value >= 0)then{[_this,[['Number', cTrucksGaz4NumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value]]] call rhs_fnc_decalsInit};";
            };
            class rhs_decalArmy_type {
                displayName = "Define large door roundel type";
                tooltip = "Decal type";
                property = "rhs_decalArmy_type";
                control = "Combo";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = "0";
                typeName = "STRING";
                class values {
                    class Army {
                        name = "Army";
                        value = "Army";
                        defaultValue = "Army";
                    };
                    class Honor {
                        name = "Honor";
                        value = "Honor";
                    };
                    class HonorGDR {
                        name = "Honor GDR";
                        value = "HonorGDR";
                    };
                    class Platoon {
                        name = "Platoon";
                        value = "Platoon";
                    };
                    class PlatoonGDR {
                        name = "Platoon GDR";
                        value = "PlatoonGDR";
                    };
                    class PlatoonVDV {
                        name = "Platoon VDV";
                        value = "PlatoonVDV";
                    };
                };
            };
            class rhs_decalArmy {
                displayName = "Set large door roundel symbol";
                tooltip = "Set large door roundel located on both sides. Usually used for army symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalArmy";
                control = "Edit";
                validate = "none";
                defaultValue = "-1";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cTrucksGazRightArmyPlaces,  _this getVariable ['rhs_decalArmy_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_decalPlatoon_type: rhs_decalArmy_type {
                displayName = "Define small door roundel type";
                property = "rhs_decalPlatoon_type";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = "0";
            };
            class rhs_decalPlatoon: rhs_decalArmy {
                displayName = "Set small door roundel symbol";
                tooltip = "Define small door roundel located on both sides. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalPlatoon";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cTrucksGazRightPlatoonPlaces,  _this getVariable ['rhs_decalPlatoon_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_hideLightCover {
                displayName = "Hide light covers";
                property = "rhs_hideLightCover";
                control = "CheckboxNumber";
                expression = "_this animate ['light_hide',_value,true]";
                defaultValue = "0";
            };
            class rhs_hidespare: rhs_hideLightCover {
                displayName = "Remove spare wheel";
                property = "rhs_hidespare";
                expression = "_this animate ['spare_hide',_value,true]";
            };
        };
        transportSoldier = 11;
        cargoProxyIndexes[] = {1, 2, 3, 4, 5, 6, 7, 8, 10, 11};
        getInProxyOrder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
        class CargoTurret;
        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret {
                gunnerAction = "passenger_inside_2";
                gunnerGetInAction = "GetInMRAP_01_cargo";
                gunnerGetOutAction = "GetOutHelicopterCargo";
                memoryPointsGetInGunner = "pos cargo LR";
                memoryPointsGetInGunnerDir = "pos cargo LR dir";
                gunnerName = "Passenger (Left Seat)";
                gunnerCompartments = "Compartment2";
                proxyIndex = 13;
                maxElev = 15;
                minElev = -15;
                maxTurn = -40;
                minTurn = -115;
                isPersonTurret = 1;
                class Hitpoints {};
            };
            class CargoTurret_02: CargoTurret_01 {
                gunnerName = "Passenger (Right Seat)";
                memoryPointsGetInGunner = "pos cargo RR";
                memoryPointsGetInGunnerDir = "pos cargo RR dir";
                proxyIndex = 9;
                maxTurn = 95;
                minTurn = 20;
                minElev = -45;
            };
        };
        class RHS_TowingSystem {
            class Carrier {
                rhs_maxCargoMass = 1000;
                rhs_attachPoint = "";
                rhs_attachPointPos[] = {0, -2.35, -0.7};
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this call rhs_fnc_gaz66_init";
                postInit = "_this call rhs_fnc_reapplyTextures";
                dammaged = "_this call rhs_fnc_wheelDamaged";
                engine = "_this call rhs_fnc_engineCheckDamage;";
            };
        };
    };
    class rhs_gaz66_vmf: rhs_truck {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_vmf.paa";
        mapSize = 5.66;
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66_vdv: rhs_gaz66_vmf {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_vdv.paa";
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_driver";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Army', 2]", "['Label', cTrucksGazRightPlatoonPlaces, 'Platoon',11]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66_vv: rhs_gaz66_vmf {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_vv.paa";
        faction = "rhs_faction_vv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Army', [6,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66_msv: rhs_gaz66_vmf {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_msv.paa";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_driver";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Platoon', 12]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66_flat_vmf: rhs_gaz66_vmf {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_flat_vmf.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_GAZ66FLAT";
        transportSoldier = 1;
        cargoProxyIndexes[] = {1};
        class AnimationSources: AnimationSources {
            class bench_hide: bench_hide {
                initPhase = 1;
            };
        };
        class Turrets {};
        class VehicleTransport {
            class Cargo {
                parachuteClass = "O_Parachute_02_F";
                parachuteHeightLimit = 5;
                canBeTransported = 1;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
            class Carrier {
                cargoBayDimensions[] = {"VVT_cargo_1", "VVT_cargo_2"};
                disableHeightLimit = 0;
                maxLoadMass = 25000;
                cargoAlignment[] = {"center", "front"};
                cargoSpacing[] = {0, 0, 0};
                exits[] = {"VVT_exit"};
                unloadingInterval = 2;
                loadingDistance = 5;
                loadingAngle = 60;
                parachuteClassDefault = "O_Parachute_02_F";
                parachuteHeightLimitDefault = 5;
            };
        };
    };
    class rhs_gaz66_flat_vdv: rhs_gaz66_flat_vmf {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_flat_vdv.paa";
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_driver";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Army', 2]", "['Label', cTrucksGazRightPlatoonPlaces, 'Platoon',11]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66_flat_vv: rhs_gaz66_flat_vmf {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_flat_vv.paa";
        faction = "rhs_faction_vv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Army', [6,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66_flat_msv: rhs_gaz66_flat_vmf {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_flat_msv.paa";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_driver";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Platoon', 12]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66o_vmf: rhs_gaz66_vmf {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66o_vmf.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_GAZ66OPEN";
        soundAttenuationCargo[] = {1, 0};
        class AnimationSources: AnimationSources {
            class cover_hide: cover_hide {
                initPhase = 1;
            };
        };
        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_02 {
                gunnerInAction = "RHS_Ural_Turnout01";
                gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
                animationSourceHatch = "turnout1";
                gunnerGetInAction = "GetInHemttBack";
                gunnerGetOutAction = "GetOutHighZamak";
                memoryPointsGetInGunner = "pos cargo RR";
                memoryPointsGetInGunnerDir = "pos cargo RR dir";
                gunnerName = "Passenger (Right Front Seat)";
                gunnerCompartments = "Compartment2";
                proxyIndex = 23;
                maxElev = 45;
                minElev = -25;
                maxTurn = 60;
                minTurn = -85;
                isPersonTurret = 2;
                canHideGunner = 1;
                allowLauncherOut = 1;
                class TurnIn {
                    limitsArrayTop[] = {{45, -85}, "", {35, -17}, {15, -7}};
                    limitsArrayBottom[] = {
                        {20, -85},
                        {17, -45},
                        {12, -27},
                        {-1.2, -25},
                        {-1.5, -7}
                    };
                };
                class TurnOut {
                    limitsArrayTop[] = {{35, -85}, {35, 60}};
                    limitsArrayBottom[] = {
                        {-25, -65},
                        {-25, -49},
                        {-45, -36},
                        {-4, -28},
                        {-1, -7},
                        {-1, 40},
                        {-6, 51},
                        {-25, 52},
                        {-25, 76}
                    };
                    turnOffset = -90;
                };
            };
            class CargoTurret_04: CargoTurret_03 {
                gunnerName = "Passenger (Left Front Seat)";
                animationSourceHatch = "turnout2";
                memoryPointsGetInGunner = "pos cargo LR";
                memoryPointsGetInGunnerDir = "pos cargo LR dir";
                proxyIndex = 24;
                maxTurn = 25;
                minTurn = -60;
                class TurnIn {
                    limitsArrayTop[] = {{25, 15}, {55, 94}};
                    limitsArrayBottom[] = {{0, 15}, {0, 33}, {12, 35}, {16, 55}, {19, 94}};
                };
                class TurnOut {
                    limitsArrayTop[] = {{35, -60}, {35, 95}};
                    limitsArrayBottom[] = {
                        {-19, -60},
                        {-22, -57},
                        {-22, -47},
                        {-1, -42},
                        {-1, -28},
                        {-1, -10},
                        {-1, 20},
                        {-7, 35},
                        {-45, 36},
                        {-15, 95}
                    };
                    turnOffset = -90;
                };
            };
        };
        transportSoldier = 9;
        cargoProxyIndexes[] = {1, 2, 3, 4, 5, 6, 7, 8, 10};
        getInProxyOrder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 13, 23, 24};
    };
    class rhs_gaz66o_vdv: rhs_gaz66o_vmf {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66o_vdv.paa";
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_driver";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Army', 2]", "['Label', cTrucksGazRightPlatoonPlaces, 'Platoon',11]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66o_vv: rhs_gaz66o_vmf {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66o_vv.paa";
        faction = "rhs_faction_vv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Army', [6,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66o_msv: rhs_gaz66o_vmf {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66o_msv.paa";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_driver";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Platoon', 12]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66o_flat_vmf: rhs_gaz66o_vmf {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66o_flat_vmf.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "GAZ-66 (Open/Flatbed)";
        transportSoldier = 1;
        cargoProxyIndexes[] = {1};
        class AnimationSources: AnimationSources {
            class bench_hide: bench_hide {
                initPhase = 1;
            };
        };
        class Turrets {};
        class VehicleTransport {
            class Cargo {
                parachuteClass = "O_Parachute_02_F";
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
                parachuteClassDefault = "O_Parachute_02_F";
                parachuteHeightLimitDefault = 5;
            };
        };
    };
    class rhs_gaz66o_flat_vdv: rhs_gaz66o_flat_vmf {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66o_flat_vdv.paa";
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_driver";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Army', 2]", "['Label', cTrucksGazRightPlatoonPlaces, 'Platoon',11]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66o_flat_vv: rhs_gaz66o_flat_vmf {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66o_flat_vv.paa";
        faction = "rhs_faction_vv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Army', [6,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66o_flat_msv: rhs_gaz66o_flat_vmf {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66o_flat_msv.paa";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_driver";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Platoon', 12]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66_r142_base: rhs_gaz66_vmf {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_r142_base.paa";
        scope = 0;
        model = "\rhsafrf\addons\rhs_gaz66\rhs_gaz66_r142.p3d";
        displayName = "$STR_RHS_GAZ66R";
        icon = "\rhsafrf\addons\rhs_gaz66\data\ico\icomap_GAZ66_radio_CA.paa";
        picture = "\rhsafrf\addons\rhs_gaz66\data\ico\rhs_gaz66_r142_pic_ca.paa";
        transportSoldier = 1;
        maxFordingDepth = 1.2;
        tf_range = 10000;
        tf_hasLRradio_api = 1;
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\rhs_dam_gaz66_kung.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\rhs_destr_gaz66_kung.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\gaz66.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\gaz66_dam.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\gaz66_des.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\tent.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\tent.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\tent_des.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_damage.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_damage.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_in.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_in_damage.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_in_damage.rvmat",
                "a3\data_f\default.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\default_destruct.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\default_destruct.rvmat"
            };
        };
        class Turrets {};
        class AnimationSources: AnimationSources {
            class mast_source {
                source = "door";
                animPeriod = 5;
                initPhase = 0;
            };
            class mast_handler {
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                mass = 1;
                displayName = "deploy mast";
                onPhaseChanged = "_this call rhs_fnc_gaz66_radioDeploy";
            };
        };
        class UserActions: UserActions {
            class deployMast {
                displayName = "Deploy Mast";
                position = "";
                radius = 12;
                showWindow = 0;
                onlyForplayer = 1;
                condition = "(player == driver this) AND this doorPhase 'mast_source' < 0.01 and (speed this < 1)";
                statement = "[this,1] call rhs_fnc_gaz66_radioDeploy";
            };
            class foldMast: deployMast {
                displayName = "Fold Mast";
                condition = "(player == driver this) AND this doorPhase 'mast_source' > 0.99";
                statement = "[this,0] call rhs_fnc_gaz66_radioDeploy";
            };
        };
        class Attributes: Attributes {
            class rhs_radioDeploy {
                displayName = "Deploy Mast";
                tooltip = "Deploys R-142N radio mast";
                property = "rhs_radioDeploy";
                control = "CheckboxNumber";
                expression = "[_this,_value,true] call rhs_fnc_gaz66_radioDeploy";
                defaultValue = "0";
            };
            class ObjectTexture: ObjectTexture {};
            class rhs_decalNumber_type: rhs_decalNumber_type {};
            class rhs_decalNumber: rhs_decalNumber {};
            class rhs_decalArmy_type: rhs_decalArmy_type {};
            class rhs_decalArmy: rhs_decalArmy {};
            class rhs_decalPlatoon_type: rhs_decalPlatoon_type {};
            class rhs_decalPlatoon: rhs_decalPlatoon {};
            class rhs_hideLightCover: rhs_hideLightCover {};
            class rhs_hidespare: rhs_hidespare {};
        };
    };
    class rhs_gaz66_r142_vmf: rhs_gaz66_r142_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_r142_vmf.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66_r142_vdv: rhs_gaz66_r142_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_r142_vdv.paa";
        scope = 2;
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_driver";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Army', 2]", "['Label', cTrucksGazRightPlatoonPlaces, 'Platoon',11]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66_r142_msv: rhs_gaz66_r142_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_r142_msv.paa";
        scope = 2;
        faction = "rhs_faction_msv";
        crew = "rhs_msv_driver";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Platoon', 12]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66_r142_vv: rhs_gaz66_r142_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_r142_vv.paa";
        scope = 2;
        faction = "rhs_faction_vv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Army', [6,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66_repair_base: rhs_gaz66_vmf {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_repair_base.paa";
        scope = 0;
        model = "\rhsafrf\addons\rhs_gaz66\rhs_gaz66_repair.p3d";
        icon = "\rhsafrf\addons\rhs_gaz66\data\ico\icomap_GAZ66_repair_CA.paa";
        picture = "\rhsafrf\addons\rhs_gaz66\data\ico\rhs_gaz66_repair_pic_ca.paa";
        memoryPointSupply = "doplnovani";
        displayName = "$STR_RHS_GAZ66REP";
        transportSoldier = 1;
        transportRepair = 2000000000;
        supplyRadius = 6.8;
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\rhs_dam_gaz66_repkung.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\rhs_destr_gaz66_repkung.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\gaz66.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\gaz66_dam.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\gaz66_des.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\tent.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\tent.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\tent_des.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_damage.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_damage.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_in.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_in_damage.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_in_damage.rvmat",
                "a3\data_f\default.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\default_destruct.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\default_destruct.rvmat"
            };
        };
        class Turrets {};
    };
    class rhs_gaz66_repair_vmf: rhs_gaz66_repair_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_repair_vmf.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66_repair_vdv: rhs_gaz66_repair_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_repair_vdv.paa";
        scope = 2;
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_driver";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Army', 2]", "['Label', cTrucksGazRightPlatoonPlaces, 'Platoon',11]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66_repair_vv: rhs_gaz66_repair_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_repair_vv.paa";
        scope = 2;
        faction = "rhs_faction_vv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Army', [6,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66_repair_msv: rhs_gaz66_repair_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_repair_msv.paa";
        scope = 2;
        faction = "rhs_faction_msv";
        crew = "rhs_msv_driver";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Platoon', 12]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66_ap2_base: rhs_gaz66_vmf {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_ap2_base.paa";
        scope = 0;
        model = "\rhsafrf\addons\rhs_gaz66\rhs_gaz66_ap2.p3d";
        displayName = "$STR_RHS_GAZ66AP2";
        icon = "\rhsafrf\addons\rhs_gaz66\data\ico\icomap_GAZ66_med_CA.paa";
        picture = "\rhsafrf\addons\rhs_gaz66\data\ico\rhs_gaz66_ap_pic_ca.paa";
        transportSoldier = 1;
        attendant = 1;
        memoryPointSupply = "doplnovani";
        supplyRadius = 4.5;
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 20;
            };
            class _xx_Medikit {
                name = "Medikit";
                count = 1;
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\rhs_dam_gaz66_ap2kung.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\rhs_destr_gaz66_ap2kung.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\windows.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_damage.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_damage.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\gaz66.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\gaz66_dam.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\gaz66_des.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\tent.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\tent.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\tent_des.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_damage.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_damage.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_in.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_in_damage.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_in_damage.rvmat",
                "a3\data_f\default.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\default_destruct.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\default_destruct.rvmat"
            };
        };
        class Turrets {};
    };
    class rhs_gaz66_ap2_vmf: rhs_gaz66_ap2_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_ap2_vmf.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66_ap2_vdv: rhs_gaz66_ap2_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_ap2_vdv.paa";
        scope = 2;
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_driver";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Army', 2]", "['Label', cTrucksGazRightPlatoonPlaces, 'Platoon',11]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66_ap2_vv: rhs_gaz66_ap2_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_ap2_vv.paa";
        scope = 2;
        faction = "rhs_faction_vv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Army', [6,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66_ap2_msv: rhs_gaz66_ap2_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_ap2_msv.paa";
        scope = 2;
        faction = "rhs_faction_msv";
        crew = "rhs_msv_driver";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Platoon', 12]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66_ammo_base: rhs_gaz66_vmf {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_ammo_base.paa";
        scope = 0;
        displayName = "$STR_RHS_GAZ66AMMO";
        transportAmmo = 30000;
        supplyRadius = 9.5;
        model = "\rhsafrf\addons\rhs_gaz66\rhs_gaz66_ammo.p3d";
        memoryPointSupply = "doplnovani";
        icon = "\rhsafrf\addons\rhs_gaz66\data\ico\icomap_GAZ66_ammo_CA.paa";
        transportSoldier = 1;
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_gaz66\data\gaz66.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\gaz66_dam.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\gaz66_des.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\tent.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\tent.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\tent_des.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_damage.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_damage.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_in.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_in_damage.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_in_damage.rvmat",
                "a3\data_f\default.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\default_destruct.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\default_destruct.rvmat"
            };
        };
        class Turrets {};
        class TransportMagazines {
            class _xx_RHS_30Rnd_545x39_AK_GREEN {
                magazine = "rhs_30Rnd_545x39_AK_green";
                count = 20;
            };
            class _xx_RHS_30Rnd_545x39_7n10_AK {
                magazine = "rhs_30Rnd_545x39_7n10_AK";
                count = 20;
            };
            class _xx_RHS_30Rnd_545x39_7n22_AK {
                magazine = "rhs_30Rnd_545x39_7n22_AK";
                count = 20;
            };
            class _xx_rhs_100Rnd_762x54mmR {
                magazine = "rhs_100Rnd_762x54mmR";
                count = 20;
            };
            class _xx_rhs_100Rnd_762x54mmR_green {
                magazine = "rhs_100Rnd_762x54mmR_green";
                count = 20;
            };
            class _xx_RHS_VOG25 {
                magazine = "rhs_VOG25";
                count = 100;
            };
            class _xx_RHS_VOG25P {
                magazine = "rhs_VOG25P";
                count = 100;
            };
            class _xx_RHS_rhs_mag_9x19_17 {
                magazine = "rhs_mag_9x19_17";
                count = 100;
            };
            class _xx_RHS_rhs_10Rnd_762x54mmR_7N1 {
                magazine = "rhs_10Rnd_762x54mmR_7N1";
                count = 100;
            };
        };
    };
    class rhs_gaz66_ammo_vmf: rhs_gaz66_ammo_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_ammo_vmf.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66_ammo_vdv: rhs_gaz66_ammo_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_ammo_vdv.paa";
        scope = 2;
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_driver";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Army', 2]", "['Label', cTrucksGazRightPlatoonPlaces, 'Platoon',11]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66_ammo_vv: rhs_gaz66_ammo_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_ammo_vv.paa";
        scope = 2;
        faction = "rhs_faction_vv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Army', [6,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66_ammo_msv: rhs_gaz66_ammo_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_ammo_msv.paa";
        scope = 2;
        faction = "rhs_faction_msv";
        crew = "rhs_msv_driver";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Platoon', 12]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_gaz66_zu23_base: rhs_gaz66_vmf {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_zu23_base.paa";
        scope = 0;
        displayName = "$STR_RHS_GAZ66_ZU23";
        model = "\rhsafrf\addons\rhs_gaz66\rhs_gaz66_zu23.p3d";
        icon = "\rhsafrf\addons\rhs_gaz66\data\ico\icomap_GAZ66_ammo_CA.paa";
        picture = "\rhsafrf\addons\rhs_gaz66\data\ico\rhs_gaz66_zu23_pic_ca.paa";
        transportSoldier = 1;
        forceHideDriver = 1;
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_gaz66\data\gaz66.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\gaz66_dam.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\gaz66_des.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\tent.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\tent.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\tent_des.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base_damage.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base_destruct.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_wheel.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_wheel_damage.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base_destruct.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_damage.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_damage.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_in.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_in_damage.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\glass_in_damage.rvmat",
                "a3\data_f\default.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\default_destruct.rvmat",
                "rhsafrf\addons\rhs_gaz66\data\default_destruct.rvmat"
            };
        };
        unitInfoType = "RscUnitInfo";
        threat[] = {0.6, 0.1, 0.6};
        hideProxyInCombat = 1;
        viewDriverInExternal = 1;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                body = "mainTurret";
                gun = "mainGun";
                minTurn = -180;
                maxTurn = 180;
                initTurn = 0;
                minElev = -10;
                maxElev = 85;
                initElev = 18;
                maxHorizontalRotSpeed = 0.55;
                maxVerticalRotSpeed = 0.35;
                weapons[] = {"rhs_weap_2A14"};
                magazines[] = {
                    "rhs_mag_AZP23_100_veh",
                    "rhs_mag_AZP23_100_veh",
                    "rhs_mag_AZP23_100_veh",
                    "rhs_mag_AZP23_100_veh",
                    "rhs_mag_AZP23_100_veh",
                    "rhs_mag_AZP23_100_veh",
                    "rhs_mag_AZP23_100_veh",
                    "rhs_mag_AZP23_100_veh",
                    "rhs_mag_AZP23_100_veh",
                    "rhs_mag_AZP23_100_veh",
                    "rhs_mag_AZP23_100_veh"
                };
                gunnerAction = "RHS_Zu23_Gunner";
                gunnerInAction = "RHS_Zu23_Gunner";
                gunnerGetInAction = "GetInOffroadBack";
                gunnerGetOutAction = "GetOutHighZamak";
                gunnerLeftHandAnimName = "handle_elev_hand";
                gunnerRightHandAnimName = "handle_trav_hand";
                gunnerLeftLegAnimName = "otocVez";
                gunnerRightLegAnimName = "otocVez";
                animationSourceStickX = "MainTurret_Inertia";
                animationSourceStickY = "MainGun_Inertia";
                ViewGunnerInExternal = 1;
                selectionFireAnim = "zasleh";
                gunnerCompartments = "Compartment2";
                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_t3_scope";
                soundServo[] = {
                    "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\btr80\btr_turret",
                    2.4,
                    1,
                    30
                };
                soundServoVertical[] = {
                    "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\btr80\btr_turret_elev",
                    3,
                    1,
                    30
                };
                gunnerOpticsEffect[] = {"OpticsCHAbera1", "OpticsBlur2"};
                forceHideGunner = 1;
                outGunnerMayFire = 1;
                inGunnerMayFire = 1;
                gunnerForceOptics = 0;
                allowTabLock = 0;
                canUseScanner = 0;
                startEngine = 0;
                stabilizedInAxes = 0;
                memoryPointGun[] = {"muzzle_1", "muzzle_2"};
                lodTurnedIn = 0;
                lodTurnedOut = 0;
                turretInfoType = "RHS_RscWeaponZU23_T3_Optic";
                class ViewGunner {
                    initAngleX = 0;
                    initAngleY = -9;
                    minAngleX = -30;
                    maxAngleX = 30;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
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
                class OpticsIn {
                    class Collimator: ViewOptics {
                        opticsDisplayName = "COLLIMATOR";
                        initFov = 0.636364;
                        minFov = 0.636364;
                        maxFov = 0.636364;
                        gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                    };
                    class CollimatorZoom: Collimator {
                        initFov = 0.35;
                        minFov = 0.35;
                        maxFov = 0.35;
                    };
                    class T3_Optic {
                        opticsDisplayName = "T3";
                        camPos = "commanderview";
                        camDir = "view_t3_dir";
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.2;
                        minFov = 0.2;
                        maxFov = 0.2;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_t3_scope.p3d";
                    };
                };
                class TurnIn {
                    limitsArrayTop[] = {{85, -180}, {85, 180}};
                    limitsArrayBottom[] = {
                        {-10, -180},
                        {-8, -28.6867},
                        {14.3683, -26.6867},
                        {18, 0},
                        {14.7173, 26.6372},
                        {-8, 27.6867},
                        "",
                        {-10, 134},
                        {-6, 134.5},
                        {-6, 178},
                        {-10, 180}
                    };
                };
                disableSoundAttenuation = 1;
                class HitPoints {
                    class HitTurret {
                        armor = -100;
                        material = -1;
                        name = "Hit_Turret";
                        armorComponent = "Hit_Turret";
                        visual = "vez";
                        passThrough = 0;
                        minimalHit = -0.2;
                        explosionShielding = 0.1;
                        radius = 0.1;
                    };
                    class HitGun {
                        armor = -100;
                        material = -1;
                        name = "Hit_Gun";
                        armorComponent = "Hit_Gun";
                        visual = "-";
                        passThrough = 0;
                        minimalHit = -0.2;
                        explosionShielding = 0.1;
                        radius = 0.1;
                    };
                    class Hit_Optic_Collimator {
                        armor = -40;
                        explosionShielding = 0;
                        name = "";
                        visual = "vis_optic_TPN4";
                        armorComponent = "Hit_Optic_ESSA";
                        passThrough = 0;
                    };
                    class Hit_Optic_T3 {
                        armor = -40;
                        explosionShielding = 0;
                        name = "";
                        visual = "vis_optic_TPN4";
                        armorComponent = "Hit_Optic_ESSA";
                        passThrough = 0;
                    };
                };
            };
            class CargoTurret_01: CargoTurret {
                gunnerAction = "vehicle_coshooter_1";
                gunnerInAction = "vehicle_coshooter_1";
                gunnerGetInAction = "GetInHemttBack";
                gunnerGetOutAction = "GetOutHighZamak";
                memoryPointsGetInGunner = "pos cargo";
                memoryPointsGetInGunnerDir = "pos cargo dir";
                gunnerName = "Loader";
                primaryObserver = 0;
                dontCreateAI = 0;
                commanding = 4;
                gunnerCompartments = "Compartment2";
                proxyIndex = 3;
                maxElev = 45;
                minElev = -15;
                maxTurn = 84;
                minTurn = -65;
                gunnerUsesPilotView = 1;
                memorypointgunneroptics = "";
                selectionFireAnim = "";
                isPersonTurret = 1;
                forceHideGunner = 1;
                playerPosition = 2;
                soundAttenuationTurret = "HeliAttenuationRamp";
                disableSoundAttenuation = 0;
                class Hitpoints {};
            };
            class CargoTurret_02: CargoTurret_01 {
                playerPosition = 1;
                commanding = 2;
                primaryObserver = 0;
                gunnerName = "Passenger (front)";
                proxyIndex = 4;
                isPersonTurret = 2;
                gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
                gunnerInAction = "vehicle_passenger_stand_1_passenger_flatground_4";
                animationSourceHatch = "gunner_rf_turn";
                allowLauncherOut = 1;
                canHideGunner = 1;
                dontCreateAI = 1;
                forceHideGunner = 0;
                memoryPointsGetInGunner = "pos cargo LR";
                memoryPointsGetInGunnerDir = "pos cargo LR dir";
                minElev = -45;
                class TurnIn {
                    limitsArrayTop[] = {{45, -65}, {45, 84}};
                    limitsArrayBottom[] = {
                        {-37, -65},
                        {-37, -45.6867},
                        {-28, -35.6867},
                        {-19, -22.6867},
                        {-15, -12.6867},
                        {-11, -8.6867},
                        {-5, 2.6867},
                        {-3, 14},
                        {-4, 44},
                        {-4, 64},
                        {-7, 74}
                    };
                };
                class TurnOut {
                    limitsArrayTop[] = {{45, -180}, {45, 180}};
                    limitsArrayBottom[] = {
                        {-25, -65},
                        {-4, -50.6867},
                        {-4, -22.6867},
                        {-2, 6.6867},
                        {-12, 28},
                        {-45, 34},
                        {-45, 84}
                    };
                    turnOffset = -180;
                };
            };
        };
        class AnimationSources: AnimationSources {
            class muzzle_source {
                source = "reload";
                weapon = "rhs_weap_2A14";
            };
            class fire_anim: muzzle_source {
                source = "revolving";
            };
            class muzzleHMG_ROT: muzzle_source {
                source = "ammorandom";
            };
            class Elevation {
                source = "user";
                animPeriod = 0.1;
                initPhase = 5;
            };
        };
    };
    class rhs_gaz66_zu23_vmf: rhs_gaz66_zu23_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_zu23_vmf.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerType = "rhs_vmf_flora_rifleman";
            };
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = "rhs_vmf_flora_sergeant";
            };
            class CargoTurret_02: CargoTurret_02 {};
        };
    };
    class rhs_gaz66_zu23_vdv: rhs_gaz66_zu23_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_zu23_vdv.paa";
        scope = 2;
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_driver";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Army', 2]", "['Label', cTrucksGazRightPlatoonPlaces, 'Platoon',11]"};
        author = "$STR_RHS_AUTHOR_FULL";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerType = "rhs_vdv_rifleman";
            };
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = "rhs_vdv_sergeant";
            };
            class CargoTurret_02: CargoTurret_02 {};
        };
    };
    class rhs_gaz66_zu23_vv: rhs_gaz66_zu23_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_zu23_vv.paa";
        scope = 2;
        faction = "rhs_faction_vv";
        crew = "rhs_msv_crew";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Army', [6,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerType = "rhs_mvd_izlom_rifleman";
            };
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = "rhs_mvd_izlom_sergeant";
            };
            class CargoTurret_02: CargoTurret_02 {};
        };
    };
    class rhs_gaz66_zu23_msv: rhs_gaz66_zu23_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_gaz66_zu23_msv.paa";
        scope = 2;
        faction = "rhs_faction_msv";
        crew = "rhs_msv_driver";
        rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Default']", "['Label', cTrucksGazRightArmyPlaces, 'Platoon', 12]"};
        author = "$STR_RHS_AUTHOR_FULL";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerType = "rhs_msv_rifleman";
            };
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = "rhs_msv_sergeant";
            };
            class CargoTurret_02: CargoTurret_02 {};
        };
    };
};
