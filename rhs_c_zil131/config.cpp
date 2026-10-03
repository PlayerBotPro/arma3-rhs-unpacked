class DefaultEventhandlers;
class CfgPatches {
    class rhs_c_zil131 {
        units[] = {
            "rhs_zil131_msv",
            "rhs_zil131_vdv",
            "rhs_zil131_vmf",
            "rhs_zil131_vv",
            "rhs_zil131_open_msv",
            "rhs_zil131_open_vdv",
            "rhs_zil131_open_vmf",
            "rhs_zil131_open_vv",
            "rhs_zil131_flatbed_msv",
            "rhs_zil131_flatbed_vdv",
            "rhs_zil131_flatbed_vmf",
            "rhs_zil131_flatbed_vv",
            "rhs_zil131_flatbed_cover_msv",
            "rhs_zil131_flatbed_cover_vdv",
            "rhs_zil131_flatbed_cover_vmf",
            "rhs_zil131_flatbed_cover_vv"
        };
        weapons[] = {};
        requiredVersion = 1.6;
        requiredAddons[] = {"rhs_main", "rhs_c_troops"};
        name = "ZiL-131 Truck";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        RHS_Zil131_Driver = "RHS_Zil131_Driver";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class KIA_RHS_Zil131_Driver: DefaultDie {
            actions = "DeadActions";
            file = "\rhsafrf\addons\rhs_c_zil131\anims\KIA_rhs_zil131_driver.rtm";
            speed = 1;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_Zil131_Driver: Crew {
            file = "\rhsafrf\addons\rhs_c_zil131\anims\rhs_zil131_driver.rtm";
            speed = 0.049917;
            interpolateTo[] = {"KIA_RHS_Zil131_Driver", 1};
        };
    };
};
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
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
            class HitGlass5;
            class HitGlass6;
        };
        class EventHandlers;
        class AnimationSources;
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
        };
        class AnimationSources;
    };
    class rhs_zil131_base: Truck_F {
        dlc = "RHS_AFRF";
        scope = 1;
        displayName = "ZiL-131";
        icon = "\rhsafrf\addons\rhs_a2port_car\data\mapico\icomap_ural_ca.paa";
        picture = "rhsafrf\addons\rhs_zil131\data\ui\rhs_zil131_pic.paa";
        model = "rhsafrf\addons\rhs_zil131\rhs_zil131";
        normalSpeedForwardCoef = 0.75;
        slowSpeedForwardCoef = 0.45;
        terrainCoef = 1.2;
        turnCoef = 4;
        simulation = "carx";
        dampersBumpCoef = 6;
        precision = 10;
        brakeDistance = 3;
        acceleration = 15;
        fireResistance = 5;
        maxSpeed = 83;
        fuelCapacity = 30;
        RHS_fuelCapacity = 350;
        wheelCircumference = 3.776;
        brakeIdleSpeed = 2;
        canFloat = 0;
        waterLeakiness = 2.5;
        waterSpeedFactor = 0.8;
        maxFordingDepth = 0.03;
        waterResistance = 0.5;
        waterDamageEngine = 0.9;
        waterAngularDampingCoef = 10;
        waterLinearDampingCoefY = 2;
        waterLinearDampingCoefX = 2;
        waterPPInVehicle = 0;
        waterResistanceCoef = 0.225;
        engineShiftY = 0.3;
        engineShiftZ = -3;
        rudderForceCoef = 1.5;
        rudderForceCoefAtMaxSpeed = 0.3;
        accelAidForceYOffset = -1.4;
        switchTime = 0.45;
        latency = 1;
        changeGearType = "rpmratio";
        changeGearOmegaRatios[] = {
            1,
            0.3125,
            0.21875,
            0.15625,
            0.953125,
            0.1875,
            0.96875,
            0.546875,
            0.9375,
            0.5625,
            0.96875,
            0.59375,
            1,
            0.65625
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -7.09,
                "N",
                0,
                "D1",
                7.15,
                "D2",
                4.1,
                "D3",
                2.29,
                "D4",
                1.47,
                "D5",
                1
            };
            TransmissionRatios[] = {"High", 7.35};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
            transmissionDelay = 1;
        };
        differentialType = "all_limited";
        frontRearSplit = 0.5;
        frontBias = 1.8;
        rearBias = 1.3;
        centreBias = 1.3;
        clutchStrength = 75;
        dampingRateFullThrottle = 0.08;
        dampingRateZeroThrottleClutchEngaged = 2;
        dampingRateZeroThrottleClutchDisengaged = 0.35;
        torqueCurve[] = {
            {0.363636, 0.873684},
            {0.454545, 0.994737},
            {0.545455, 1},
            {0.636364, 1},
            {0.727273, 0.984211},
            {0.818182, 0.968421},
            {0.909091, 0.926316},
            {1.09864, 0}
        };
        engineMOI = 2;
        enginePower = 110;
        peakTorque = 492;
        minOmega = 75;
        maxOmega = 335.103;
        idleRPM = 800;
        redRPM = 3200;
        thrustDelay = 0.5;
        engineLosses = 35;
        engineBrakeCoef = 0.25;
        antiRollbarForceCoef = 12;
        antiRollbarForceLimit = 8;
        antiRollbarSpeedMin = 10;
        antiRollbarSpeedMax = 50;
        class Wheels {
            class L1 {
                side = "left";
                boneName = "wheel_1_1_damper";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                suspForceAppPointOffset = "wheel_1_1_axis";
                tireForceAppPointOffset = "wheel_1_1_axis";
                suspTravelDirection[] = {-0.125, -1, 0};
                width = 0.35;
                steering = 1;
                mass = 80;
                MOI = 12.2766;
                dampingRate = 0.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 15000;
                maxHandBrakeTorque = 0;
                maxCompression = 0.2;
                maxDroop = 0.2;
                sprungMass = -1;
                springStrength = 114000;
                springDamperRate = 9000;
                longitudinalStiffnessPerUnitGravity = 10000;
                latStiffX = 2.5;
                latStiffY = 18;
                frictionVsSlipGraph[] = {{0, 0.8}, {0.16, 1.3}, {0.9, 0.9}};
            };
            class L2: L1 {
                boneName = "wheel_1_2_damper";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                suspForceAppPointOffset = "wheel_1_2_axis";
                tireForceAppPointOffset = "wheel_1_2_axis";
                steering = 0;
                springStrength = 64000;
                springDamperRate = 9000;
            };
            class L3: L2 {
                boneName = "wheel_1_3_damper";
                center = "wheel_1_3_axis";
                boundary = "wheel_1_3_bound";
                suspForceAppPointOffset = "wheel_1_3_axis";
                tireForceAppPointOffset = "wheel_1_3_axis";
                steering = 0;
                maxHandBrakeTorque = 300000;
            };
            class R1: L1 {
                boneName = "wheel_2_1_damper";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                suspForceAppPointOffset = "wheel_2_1_axis";
                tireForceAppPointOffset = "wheel_2_1_axis";
                side = "right";
                suspTravelDirection[] = {0.125, -1, 0};
                steering = 1;
            };
            class R2: L2 {
                boneName = "wheel_2_2_damper";
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                suspForceAppPointOffset = "wheel_2_2_axis";
                tireForceAppPointOffset = "wheel_2_2_axis";
                side = "right";
                suspTravelDirection[] = {0.125, -1, 0};
                steering = 0;
                maxHandBrakeTorque = 0;
            };
            class R3: R2 {
                boneName = "wheel_2_3_damper";
                center = "wheel_2_3_axis";
                boundary = "wheel_2_3_bound";
                suspForceAppPointOffset = "wheel_2_3_axis";
                tireForceAppPointOffset = "wheel_2_3_axis";
                steering = 0;
                maxHandBrakeTorque = 300000;
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
        rhs_decalParameters[] = {"['Number', [5,6,7,8], 'Default']"};
        tf_hasLRradio_api = 0;
        category = "Car";
        vehicleClass = "rhs_vehclass_truck";
        editorSubcategory = "rhs_EdSubcat_truck";
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
            "\rhsafrf\addons\rhs_zil131\data\rhs_zil131_cargo_co.paa",
            "\rhsafrf\addons\rhs_zil131\data\rhs_zil131_cabin_co.paa",
            "\rhsafrf\addons\rhs_zil131\data\rhs_zil131_interior_co.paa",
            "\rhsafrf\addons\rhs_zil131\data\rhs_zil131_wheels_co.paa",
            "\rhsafrf\addons\rhs_zil131\data\rhs_zil131_base_co.paa"
        };
        viewCargoShadow = 1;
        viewDriverShadow = 1;
        viewGunnerShadow = 1;
        viewCargoShadowDiff = 0.95;
        viewDriverShadowDiff = 0.95;
        viewGunnerShadowDiff = 0.95;
        hideProxyInCombat = 1;
        canHideDriver = 0;
        viewDriverInExternal = 1;
        driverAction = "rhs_zil131_driver";
        driverInAction = "rhs_zil131_driver";
        driverLeftLegAnimName = "pedal_L";
        driverRightLegAnimName = "pedal_R";
        driverRightHandAnimName = "shift";
        driverDoor = "Door_LF";
        cargoDoors[] = {"Door_RF", "Door_RF", ""};
        transportSoldier = 8;
        cargoProxyIndexes[] = {1, 2, 3, 4, 5, 6, 7, 8};
        getInProxyOrder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
        cargoAction[] = {
            "passenger_apc_narrow_generic03still_ns",
            "passenger_apc_narrow_generic03",
            "passenger_generic01_leanright",
            "passenger_apc_generic01",
            "passenger_apc_generic01",
            "passenger_apc_generic03",
            "passenger_apc_narrow_generic01",
            "passenger_generic01_leanleft",
            "passenger_apc_generic03",
            "passenger_apc_narrow_generic02",
            "passenger_apc_generic02",
            "passenger_apc_generic01",
            "passenger_generic01_foldhands",
            "passenger_apc_generic04",
            "passenger_generic01_leanleft"
        };
        getInAction = "GetInMRAP_01";
        getOutAction = "GetOutLow";
        cargoIsCoDriver[] = {1, 1, 0};
        cargoGetInAction[] = {"GetInMRAP_01", "GetInMRAP_01", "GetInHemttBack"};
        cargoGetOutAction[] = {"GetOutLow", "GetOutLow", "GetOutHighZamak"};
        cargoCompartments[] = {"Compartment1", "Compartment1", "Compartment2"};
        class Exhausts {
            class Exhaust1 {
                position = "Exhaust_pos";
                direction = "Exhaust_dir";
                effect = "ExhaustEffectHTruck";
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_zil131\data\rhs_zil131_wheels.rvmat",
                "rhsafrf\addons\rhs_zil131\data\rhs_zil131_wheels_damage.rvmat",
                "rhsafrf\addons\rhs_zil131\data\rhs_zil131_destruct.rvmat",
                "rhsafrf\addons\rhs_zil131\data\rhs_zil131_base.rvmat",
                "rhsafrf\addons\rhs_zil131\data\rhs_zil131_base_damage.rvmat",
                "rhsafrf\addons\rhs_zil131\data\rhs_zil131_destruct.rvmat",
                "rhsafrf\addons\rhs_zil131\data\rhs_zil131_cabin.rvmat",
                "rhsafrf\addons\rhs_zil131\data\rhs_zil131_cabin_damage.rvmat",
                "rhsafrf\addons\rhs_zil131\data\rhs_zil131_destruct.rvmat",
                "rhsafrf\addons\rhs_zil131\data\rhs_zil131_cargo.rvmat",
                "rhsafrf\addons\rhs_zil131\data\rhs_zil131_cargo_damage.rvmat",
                "rhsafrf\addons\rhs_zil131\data\rhs_zil131_destruct.rvmat",
                "rhsafrf\addons\rhs_zil131\data\rhs_zil131_glass.rvmat",
                "rhsafrf\addons\rhs_zil131\data\rhs_zil131_glass_damage.rvmat",
                "rhsafrf\addons\rhs_zil131\data\rhs_zil131_glass_damage.rvmat",
                "rhsafrf\addons\rhs_zil131\data\rhs_zil131_interior.rvmat",
                "rhsafrf\addons\rhs_zil131\data\rhs_zil131_interior_damage.rvmat",
                "rhsafrf\addons\rhs_zil131\data\rhs_zil131_destruct.rvmat",
                "rhsafrf\addons\rhs_zil131\data\rhs_zil131_interior_detail.rvmat",
                "rhsafrf\addons\rhs_zil131\data\rhs_zil131_interior_detail_damage.rvmat",
                "rhsafrf\addons\rhs_zil131\data\rhs_zil131_destruct.rvmat"
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
                intensity = 0.8;
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
                hitpoint = "Light_R";
                selection = "Light_R";
            };
            class Long_Right2: Long_Right {
                useFlare = 1;
                position = "light_R_Long_flare";
                innerAngle = 50;
                outerAngle = 179;
                coneFadeCoef = 51;
                intensity = 5;
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
                innerAngle = 100;
                outerAngle = 179;
                coneFadeCoef = 11;
                intensity = 5;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 50;
                    hardLimitStart = 0;
                    hardLimitEnd = 3;
                };
            };
            class Searchlight: Left {
                position = "Searchlight_pos";
                direction = "Searchlight_dir";
                hitpoint = "Searchlight";
                selection = "Searchlight";
                useFlare = 1;
                innerAngle = 35;
                outerAngle = 179;
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
        aggregateReflectors[] = {{"Left", "Right", "Left2", "Right2"}, {"Long_Left2", "Long_Right2"}};
        armorLights = 0.01;
        class AnimationSources: AnimationSources {
            class Door_LF {
                source = "door";
                animPeriod = 0.8;
                sound = "RHS_Ural_Door";
                soundPosition = "DoorL_axis";
                mass = 1;
                displayName = "open left door";
            };
            class Door_RF: Door_LF {
                displayName = "open right door";
                soundPosition = "DoorR_axis";
            };
            class gearbox: Door_LF {
                sound = "RHS_gearbox";
                soundPosition = "gear_axis";
                displayName = "";
            };
            class HitSpare {
                source = "Hit";
                hitpoint = "HitSpare";
                raw = 1;
            };
            class UseSpare: HitSpare {
                hitpoint = "UseSpare";
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
            class spare_hide {
                mass = 1;
                source = "user";
                displayName = "hide spare wheel";
                animPeriod = 0.1;
                initPhase = 0;
            };
            class rearnum_hide: spare_hide {
                displayName = "hide tailgate markings";
                onPhaseChanged = "(_this select 0) animateSource ['rearnum_hide',(_this select 1),true];";
            };
            class bench_hide: spare_hide {
                displayName = "hide cargo bench";
                onPhaseChanged = "(_this select 0) animateSource ['bench_hide',(_this select 1),true];";
            };
            class cover_hide: spare_hide {
                displayName = "hide cover";
                source = "door";
                onPhaseChanged = "(_this select 0) animateDoor ['cover_hide',(_this select 1),true];";
            };
        };
        class HitPoints: HitPoints {
            class HitFuel_L {
                armor = -30;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = -0.2;
                radius = 0.13;
                armorComponent = "Hit_Fuel_L";
                name = "Hit_Fuel_L";
                visual = "-";
            };
            class HitFuel_R {
                armor = -30;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = -0.2;
                radius = 0.13;
                armorComponent = "Hit_Fuel_R";
                name = "Hit_Fuel_R";
                visual = "-";
            };
            class HitFuel {
                armor = -999;
                explosionShielding = 0;
                passThrough = 0;
                minimalHit = 1;
                radius = 0;
                name = "Hit_Fuel_L";
                visual = "-";
                depends = "(HitFuel_L+HitFuel_R)*0.5";
            };
            class HitEngine {
                name = "hit_engine";
                visual = "zbytek";
                armor = -30;
                passThrough = 1;
                minimalHit = -0.1;
                explosionShielding = 0.5;
                radius = 0.12;
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
                    class RHS_Engine_Smoke_small3: RHS_Engine_Smoke {
                        position = "engine_smoke4";
                    };
                };
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
            class HitLMWheel: HitLMWheel {
                radius = 0.25;
                visual = "wheel_1_3_damage";
                armorComponent = "wheel_1_3_hide";
                armor = -200;
                minimalHit = -0.01;
                explosionShielding = 4;
                passThrough = 0;
            };
            class HitLBWheel: HitLBWheel {
                radius = 0.25;
                visual = "wheel_1_4_damage";
                armorComponent = "wheel_1_4_hide";
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
            class HitRMWheel: HitRMWheel {
                radius = 0.25;
                visual = "wheel_2_3_damage";
                armorComponent = "wheel_2_3_hide";
                armor = -200;
                minimalHit = -0.01;
                explosionShielding = 4;
                passThrough = 0;
            };
            class HitRBWheel: HitRBWheel {
                radius = 0.25;
                visual = "wheel_2_4_damage";
                armorComponent = "wheel_2_4_hide";
                armor = -200;
                minimalHit = -0.01;
                explosionShielding = 4;
                passThrough = 0;
            };
            class HitGlass1 {
                armor = -2;
                explosionShielding = 1.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.2;
                armorComponent = "glass1";
                name = "glass1";
                visual = "glass1";
            };
            class HitGlass2 {
                armor = -2;
                explosionShielding = 1.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.2;
                armorComponent = "glass2";
                name = "glass2";
                visual = "glass2";
            };
            class HitGlass3 {
                armor = -2;
                explosionShielding = 1.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.2;
                armorComponent = "glass3";
                name = "glass3";
                visual = "glass3";
            };
            class HitGlass4 {
                armor = -2;
                explosionShielding = 1.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.2;
                armorComponent = "glass4";
                name = "glass4";
                visual = "glass4";
            };
            class HitGlass5 {
                armor = -2;
                explosionShielding = 1.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.2;
                armorComponent = "glass5";
                name = "glass5";
                visual = "glass5";
            };
            class HitSpare: HitRF2Wheel {
                name = "spare1";
            };
            class UseSpare: HitSpare {
                name = "";
                visual = "-";
                armor = 1;
            };
        };
        class textureSources {
            class standard {
                displayName = "Standard";
                textures[] = {
                    "\rhsafrf\addons\rhs_zil131\data\rhs_zil131_cargo_co.paa",
                    "\rhsafrf\addons\rhs_zil131\data\rhs_zil131_cabin_co.paa",
                    "\rhsafrf\addons\rhs_zil131\data\rhs_zil131_interior_co.paa",
                    "\rhsafrf\addons\rhs_zil131\data\rhs_zil131_wheels_co.paa",
                    "\rhsafrf\addons\rhs_zil131\data\rhs_zil131_base_co.paa"
                };
                factions[] = {
                    "rhs_faction_vmf",
                    "rhs_faction_vdv",
                    "rhs_faction_vdv",
                    "rhs_faction_vv"
                };
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
                displayName = "Define font type of plate number";
                tooltip = "Define kind of font that will be drawn on vehicle.";
                property = "rhs_decalNumber_type";
                control = "Combo";
                expression = "_this setVariable ['%s', _value];[_this,[['Number', [5,6,7,8], _value]]] call rhs_fnc_decalsInit";
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
                expression = "if(_value >= 0)then{[_this,[['Number', [5,6,7,8], _this getVariable ['rhs_decalNumber_type','Default'], _value]]] call rhs_fnc_decalsInit};";
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
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', [9,10],  _this getVariable ['rhs_decalArmy_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
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
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', [11,12],  _this getVariable ['rhs_decalPlatoon_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_hidespare {
                displayName = "Remove spare wheel";
                property = "rhs_hidespare";
                control = "CheckboxNumber";
                expression = "_this animate ['spare_hide',_value,true]";
                defaultValue = "0";
            };
            class rhs_hidebench: rhs_hidespare {
                displayName = "Remove cargo bench";
                property = "rhs_hidebench";
                expression = "_this animateSource ['bench_hide',_value,true];";
            };
            class Door_LF: rhs_hidespare {
                displayName = "Open front left door";
                property = "Door_LF";
                expression = "_this animateDoor ['%s',_value,true]";
            };
            class Door_RF: Door_LF {
                displayName = "Open front right door";
                property = "Door_RF";
            };
            class back_door: Door_LF {
                displayName = "Open back door";
                property = "back_door";
            };
        };
        class UserActions {
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
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this call rhs_fnc_decalsReadParams;(_this select 0) animateDoor ['cover_end_hide',1,true]";
                postInit = "_this call rhs_fnc_reapplyTextures";
                dammaged = " _this call rhs_fnc_wheelDamaged";
                engine = "_this call rhs_fnc_engineCheckDamage;";
            };
            class BIS_Randomisation {
                init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;}";
            };
        };
        class CargoTurret;
        class Turrets {
            class CargoTurret_01: CargoTurret {
                gunnerName = "Passenger (Left Rear Seat)";
                gunnerAction = "passenger_inside_2";
                gunnerInAction = "passenger_inside_2";
                gunnerGetInAction = "GetInHemttBack";
                gunnerGetOutAction = "GetOutHighZamak";
                gunnerCompartments = "Compartment2";
                gunnerForceOptics = 0;
                canHideGunner = 0;
                proxyIndex = 10;
                memoryPointsGetInGunner = "pos cargo LR";
                memoryPointsGetInGunnerDir = "pos cargo LR dir";
                class TurnIn {
                    limitsArrayTop[] = {
                        {-5.9651, -65.8681},
                        {17.3442, -42.6425},
                        {19.0929, -7.8701},
                        {-2.3451, 2.5708}
                    };
                    limitsArrayBottom[] = {{-44.4687, -70.9972}, {-23.5626, 5.0429}};
                };
                commanding = -2;
                class Hitpoints {};
            };
            class CargoTurret_02: CargoTurret_01 {
                gunnerName = "Passenger (Right Rear Seat)";
                gunnerAction = "passenger_inside_2";
                gunnerInAction = "passenger_inside_2";
                memoryPointsGetInGunner = "pos cargo RR";
                memoryPointsGetInGunnerDir = "pos cargo RR dir";
                proxyIndex = 9;
                class TurnIn {
                    limitsArrayTop[] = {
                        {-9.815, -4.5301},
                        {-1.5719, -1.2185},
                        {17.505, 16.3857},
                        {19.004, 46.8344},
                        {-14.3588, 76.1193},
                        {-21.8244, 80}
                    };
                    limitsArrayBottom[] = {{-22.8074, -7.2107}, {-44.7521, 10.6169}, {-44.8467, 80}};
                };
                gunnerGetInAction = "GetInHemttBack";
                gunnerGetOutAction = "GetOutHighZamak";
                enabledByAnimationSource = "cover_end_hide";
                commanding = -2;
            };
            class CargoTurret_03: CargoTurret_02 {
                gunnerCompartments = "Compartment2";
                gunnerInAction = "RHS_Ural_Turnout01";
                gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
                animationSourceHatch = "turnout1";
                enabledByAnimationSource = "cover_hide";
                gunnerName = "Passenger (Right Front Seat)";
                memoryPointsGetInGunner = "pos cargo RF";
                memoryPointsGetInGunnerDir = "pos cargo RF dir";
                proxyIndex = 11;
                maxElev = 45;
                minElev = -45;
                maxTurn = 60;
                minTurn = -85;
                isPersonTurret = 2;
                canHideGunner = 1;
                allowLauncherOut = 1;
                class TurnIn {
                    limitsArrayTop[] = {{45, -85}, "", {35, -17}, {15, -15}};
                    limitsArrayBottom[] = {{10.85, -85}, {6, -31}, {-22, -25}, {-13.5, -15}};
                };
                class TurnOut {
                    limitsArrayTop[] = {{35, -85}, {35, 80}};
                    limitsArrayBottom[] = {
                        {-25, -65},
                        {-25, -49},
                        {-3, -46},
                        {-2, -41},
                        {-0.4, 11},
                        {-1.6, 52},
                        {-4.5, 55},
                        {-45, 60},
                        {-42, 74},
                        {-29, 78},
                        {-15, 80}
                    };
                    turnOffset = -90;
                };
            };
            class CargoTurret_04: CargoTurret_03 {
                gunnerName = "Passenger (Left Front Seat)";
                memoryPointsGetInGunner = "pos cargo LF";
                memoryPointsGetInGunnerDir = "pos cargo LF dir";
                animationSourceHatch = "turnout2";
                proxyIndex = 12;
                maxTurn = 25;
                minTurn = -60;
                class TurnIn {
                    limitsArrayTop[] = {{25, 20}, {55, 94}};
                    limitsArrayBottom[] = {
                        {-14, 20},
                        {-10, 23},
                        {-14, 28},
                        {4.21, 30},
                        {9.27, 81},
                        {7, 94}
                    };
                };
                class TurnOut {
                    limitsArrayTop[] = {{35, -60}, {35, 95}};
                    limitsArrayBottom[] = {
                        {-28, -66},
                        {-21, -55},
                        {-0.4, -54},
                        {-0.32, -37},
                        {-0.2, -1},
                        {-2, 40},
                        {-4, 43},
                        {-14, 47},
                        {-42, 54},
                        {-45, 61},
                        {-15, 95}
                    };
                    turnOffset = -90;
                };
            };
        };
        class RenderTargets {
            class mirrorL {
                renderTarget = "rendertarget0";
                class mirror {
                    pointPosition = "Mirror_L_pos";
                    pointDirection = "Mirror_L_dir";
                    renderVisionMode = 4;
                    renderQuality = 2;
                    fov = 0.5;
                };
                BBoxes[] = {"PIP_0_TL", "PIP_0_TR", "PIP_0_BL", "PIP_0_BR"};
            };
            class mirrorR {
                renderTarget = "rendertarget1";
                class mirror {
                    pointPosition = "Mirror_R_pos";
                    pointDirection = "Mirror_R_dir";
                    renderVisionMode = 4;
                    renderQuality = 2;
                    fov = 0.5;
                };
                BBoxes[] = {"PIP_1_TL", "PIP_1_TR", "PIP_1_BL", "PIP_1_BR"};
            };
        };
        class RHS_TowingSystem {
            class Carrier {
                rhs_maxCargoMass = 2000;
                rhs_attachPoint = "";
                rhs_attachPointPos[] = {0, -2.7, -0.85};
            };
        };
    };
    class rhs_zil131_msv: rhs_zil131_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_zil131_msv.paa";
        faction = "rhs_faction_msv";
        side = 0;
        crew = "rhs_msv_driver";
        rhs_decalParameters[] = {"['Number', [5,6,7,8], 'Default']", "['Label', [9,10], 'Platoon', 12]"};
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_zil131_vdv: rhs_zil131_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_zil131_vdv.paa";
        faction = "rhs_faction_vdv";
        side = 0;
        crew = "rhs_vdv_driver";
        rhs_decalParameters[] = {"['Number', [5,6,7,8], 'Default']", "['Label', [9,10], 'Army', 2]", "['Label', [11,12], 'Platoon',11]"};
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_zil131_vmf: rhs_zil131_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_zil131_vmf.paa";
        faction = "rhs_faction_vmf";
        side = 0;
        crew = "rhs_vmf_flora_driver";
        rhs_decalParameters[] = {"['Number', [5,6,7,8], 'Default']", "['Label', [9,10], 'Army', [3,1]]"};
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_zil131_vv: rhs_zil131_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_zil131_vv.paa";
        faction = "rhs_faction_vv";
        side = 0;
        crew = "rhs_msv_driver";
        rhs_decalParameters[] = {"['Number', [5,6,7,8], 'Default']", "['Label', [9,10], 'Army', [6,1]]"};
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_zil131_open_base: rhs_zil131_base {
        scope = 1;
        displayName = "ZiL-131 (Open)";
        animationList[] = {"cover_hide", 1};
        class UserActions {
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
    };
    class rhs_zil131_open_msv: rhs_zil131_open_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_zil131_open_msv.paa";
        faction = "rhs_faction_msv";
        side = 0;
        crew = "rhs_msv_driver";
        rhs_decalParameters[] = {"['Number', [5,6,7,8], 'Default']", "['Label', [9,10], 'Platoon', 12]"};
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_zil131_open_vdv: rhs_zil131_open_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_zil131_open_vdv.paa";
        faction = "rhs_faction_vdv";
        side = 0;
        crew = "rhs_vdv_driver";
        rhs_decalParameters[] = {"['Number', [5,6,7,8], 'Default']", "['Label', [9,10], 'Army', 2]", "['Label', [11,12], 'Platoon',11]"};
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_zil131_open_vmf: rhs_zil131_open_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_zil131_open_vmf.paa";
        faction = "rhs_faction_vmf";
        side = 0;
        crew = "rhs_vmf_flora_driver";
        rhs_decalParameters[] = {"['Number', [5,6,7,8], 'Default']", "['Label', [9,10], 'Army', [3,1]]"};
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_zil131_open_vv: rhs_zil131_open_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_zil131_open_vv.paa";
        faction = "rhs_faction_vv";
        side = 0;
        crew = "rhs_msv_driver";
        rhs_decalParameters[] = {"['Number', [5,6,7,8], 'Default']", "['Label', [9,10], 'Army', [6,1]]"};
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_zil131_flatbed_base: rhs_zil131_open_base {
        displayName = "ZiL-131 (Open/Flatbed)";
        transportSoldier = 1;
        cargoProxyIndexes[] = {2};
        getInProxyOrder[] = {1, 2};
        class Turrets {};
        animationList[] = {"cover_hide", 1, "bench_hide", 1};
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
    class rhs_zil131_flatbed_msv: rhs_zil131_flatbed_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_zil131_flatbed_msv.paa";
        faction = "rhs_faction_msv";
        side = 0;
        crew = "rhs_msv_driver";
        rhs_decalParameters[] = {"['Number', [5,6,7,8], 'Default']", "['Label', [9,10], 'Platoon', 12]"};
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_zil131_flatbed_vdv: rhs_zil131_flatbed_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_zil131_flatbed_vdv.paa";
        faction = "rhs_faction_vdv";
        side = 0;
        crew = "rhs_vdv_driver";
        rhs_decalParameters[] = {"['Number', [5,6,7,8], 'Default']", "['Label', [9,10], 'Army', 2]", "['Label', [11,12], 'Platoon',11]"};
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_zil131_flatbed_vmf: rhs_zil131_flatbed_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_zil131_flatbed_vmf.paa";
        faction = "rhs_faction_vmf";
        side = 0;
        crew = "rhs_vmf_flora_driver";
        rhs_decalParameters[] = {"['Number', [5,6,7,8], 'Default']", "['Label', [9,10], 'Army', [3,1]]"};
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_zil131_flatbed_vv: rhs_zil131_flatbed_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_zil131_flatbed_vv.paa";
        faction = "rhs_faction_vv";
        side = 0;
        crew = "rhs_msv_driver";
        rhs_decalParameters[] = {"['Number', [5,6,7,8], 'Default']", "['Label', [9,10], 'Army', [6,1]]"};
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_zil131_flatbed_cover_base: rhs_zil131_flatbed_base {
        displayName = "ZiL-131 (Flatbed)";
        animationList[] = {"bench_hide", 1};
        class VehicleTransport: VehicleTransport {
            class Cargo: Cargo {};
            class Carrier: Carrier {
                disableHeightLimit = 0;
            };
        };
    };
    class rhs_zil131_flatbed_cover_msv: rhs_zil131_flatbed_cover_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_zil131_flatbed_cover_msv.paa";
        faction = "rhs_faction_msv";
        side = 0;
        crew = "rhs_msv_driver";
        rhs_decalParameters[] = {"['Number', [5,6,7,8], 'Default']", "['Label', [9,10], 'Platoon', 12]"};
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_zil131_flatbed_cover_vdv: rhs_zil131_flatbed_cover_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_zil131_flatbed_cover_vdv.paa";
        faction = "rhs_faction_vdv";
        side = 0;
        crew = "rhs_vdv_driver";
        rhs_decalParameters[] = {"['Number', [5,6,7,8], 'Default']", "['Label', [9,10], 'Army', 2]", "['Label', [11,12], 'Platoon',11]"};
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_zil131_flatbed_cover_vmf: rhs_zil131_flatbed_cover_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_zil131_flatbed_cover_vmf.paa";
        faction = "rhs_faction_vmf";
        side = 0;
        crew = "rhs_vmf_flora_driver";
        rhs_decalParameters[] = {"['Number', [5,6,7,8], 'Default']", "['Label', [9,10], 'Army', [3,1]]"};
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_zil131_flatbed_cover_vv: rhs_zil131_flatbed_cover_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_zil131_flatbed_cover_vv.paa";
        faction = "rhs_faction_vv";
        side = 0;
        crew = "rhs_msv_driver";
        rhs_decalParameters[] = {"['Number', [5,6,7,8], 'Default']", "['Label', [9,10], 'Army', [6,1]]"};
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
};
