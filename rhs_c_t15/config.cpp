class CfgPatches {
    class rhs_c_t15 {
        units[] = {"rhs_t15_tv"};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {
            "rhs_main",
            "rhs_c_heavyweapons",
            "rhs_decals",
            "rhs_optics",
            "rhs_c_troops",
            "rhs_aps"
        };
        name = "T-15 Armata Series IFV";
        author = "RHS";
        url = "http://www.rhsmods.org/";
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class t15_init {
                file = "rhsafrf\addons\rhs_c_t15\scripts\rhs_fnc_t15_init.sqf";
            };
            class t15_deleted {
                file = "rhsafrf\addons\rhs_c_t15\scripts\rhs_fnc_t15_deleted.sqf";
            };
            class t15_destroyed {
                file = "rhsafrf\addons\rhs_c_t15\scripts\rhs_fnc_t15_destroyed.sqf";
            };
        };
    };
};
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_02: Optics_Armored {
    class Wide;
    class Medium;
    class Narrow;
};
class Optics_Gunner_MBT_02: Optics_Armored {
    class Wide;
    class Medium;
    class Narrow;
};
class CfgVehicles {
    class LandVehicle;
    class Tank: LandVehicle {
        class NewTurret;
        class Sounds;
        class HitPoints;
    };
    class Tank_F: Tank {
        class Turrets {
            class MainTurret: NewTurret {
                class Turrets {
                    class CommanderOptics;
                };
            };
        };
        class AnimationSources;
        class ViewPilot;
        class ViewOptics;
        class ViewCargo;
        class HeadLimits;
        class HitPoints: HitPoints {
            class HitHull;
            class HitEngine;
            class HitLTrack;
            class HitRTrack;
        };
        class Sounds: Sounds {
            class Engine;
            class Movement;
        };
        class EventHandlers;
        class Components;
    };
    class rhs_t15_base: Tank_F {
        mapSize = 11.62;
        displayName = "T-15";
        dlc = "RHS_AFRF";
        rhs_decalParameters[] = {"['Number',cRHSt15NumberPlaces,'Default']"};
        vehicleClass = "rhs_vehclass_ifv";
        editorSubcategory = "rhs_EdSubcat_ifv";
        model = "\rhsafrf\addons\rhs_t15\rhs_t15";
        tf_range_api = 45000;
        typicalCargo[] = {};
        picture = "\rhsafrf\addons\rhs_t15\icon\rhs_t15_ca.paa";
        Icon = "\rhsafrf\addons\rhs_t72\data\icomap_t72_CA.paa";
        driverCanSee = "2+4+8";
        gunnerCanSee = "2+4+8";
        commanderCanSee = "2+4+8";
        enableGPS = 1;
        transportSoldier = 8;
        cargoGetInAction[] = {"GetInAMV_cargo"};
        cargoGetOutAction[] = {"GetOutLow"};
        cargoAction[] = {
            "passenger_apc_narrow_generic02",
            "passenger_apc_narrow_generic03",
            "passenger_apc_generic02",
            "passenger_apc_generic04",
            "passenger_apc_narrow_generic01",
            "passenger_generic01_foldhands",
            "passenger_generic01_leanleft",
            "passenger_generic01_leanright"
        };
        driverForceOptics = 1;
        driverAction = "Driver_MBT_04_out";
        driverInAction = "Driver_MBT_04_in";
        getInAction = "GetInLow";
        getOutAction = "GetOutLow";
        viewdriverinExternal = 1;
        LODDriverTurnedIn = 0;
        LODDriverTurnedOut = 0;
        LODDriverOpticsIn = 0;
        weaponsGroup1 = 128;
        class Components: Components {
            class TransportPylonsComponent {
                UIPicture = "\rhsafrf\addons\rhs_a2port_car\data\loadouts\RHS_BM21_EDEN_CA.paa";
                class pylons {
                    class pylon1 {
                        hardpoints[] = {"RHS_HP_T15"};
                        priority = 1;
                        maxweight = 200;
                        UIposition[] = {0.12, 0.1};
                        bay = -1;
                        attachment = "rhs_mag_9m133m2_pylon";
                        turret[] = {0};
                        hitpoint = "HitTurret";
                    };
                    class pylon2: pylon1 {
                        priority = 2;
                        UIposition[] = {0.12, 0.14};
                    };
                    class pylon3: pylon1 {
                        priority = 3;
                        UIposition[] = {0.12, 0.18};
                    };
                    class pylon4: pylon1 {
                        priority = 4;
                        UIposition[] = {0.12, 0.22};
                    };
                };
                class Bays {
                    class MainBay {
                        bayOpenTime = 5.5;
                        openBayWhenWeaponSelected = 0.5;
                        autoCloseWhenEmptyDelay = 1;
                    };
                };
                class Presets {};
            };
        };
        extCameraPosition[] = {0, 2.25, -7};
        maxFordingDepth = 0;
        waterResistance = 0;
        waterDamageEngine = 0.2;
        hiddenSelections[] = {"camo1", "camo2", "camo3", "n1", "n2", "n3"};
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_t15\data\rhs_t15_green_hull_co.paa", "rhsafrf\addons\rhs_t15\data\rhs_t15_green_turret_co.paa", "rhsafrf\addons\rhs_t15\data\rhs_t15_green_armor_co.paa"};
        class ViewOptics: ViewOptics {
            visionMode[] = {"Normal", "NVG"};
        };
        class Exhausts {
            class Exhaust1 {
                position = "exhaust";
                direction = "exhaust_dir";
                effect = "ExhaustEffectTankBack";
            };
            class Exhaust2 {
                position = "exhaust2";
                direction = "exhaust2_dir";
                effect = "ExhaustEffectTankBack";
            };
        };
        class Reflectors {
            class Left {
                color[] = {0.8, 0.8, 1, 1};
                ambient[] = {0.07, 0.07, 0.07, 1};
                position = "light_l";
                direction = "light_l_end";
                hitpoint = "light_l";
                selection = "light_l";
                size = 2;
                brightness = 1;
                intensity = 15000;
                innerAngle = 40;
                outerAngle = 120;
                coneFadeCoef = 25;
                useFlare = 0;
                class Attenuation {
                    start = 1;
                    constant = 0;
                    linear = 0;
                    quadratic = 0.15;
                    hardLimitStart = 30;
                    hardLimitEnd = 60;
                };
            };
            class Left_flare: Left {
                innerAngle = 10;
                outerAngle = 170;
                useFlare = 1;
                intensity = 111;
            };
            class Right: Left {
                position = "light_r";
                direction = "light_r_end";
                hitpoint = "light_r";
                selection = "light_r";
            };
            class Right_flare: Right {
                innerAngle = 10;
                outerAngle = 170;
                useFlare = 1;
                intensity = 111;
            };
        };
        aggregateReflectors[] = {{"Left", "Left_flare"}, {"Right", "Right_flare"}};
        cost = 1500000;
        receiveRemoteTargets = 1;
        reportRemoteTargets = 1;
        reportOwnPosition = 1;
        attenuationEffectType = "TankAttenuation";
        soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out", 0.562341, 1};
        soundGetOut[] = {
            "A3\sounds_f\vehicles\armor\noises\get_in_out",
            0.562341,
            1,
            20
        };
        soundDammage[] = {"", 0.562341, 1};
        soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_start", 0.707946, 1};
        soundEngineOnExt[] = {
            "A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_start",
            0.630957,
            1,
            200
        };
        soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_stop", 0.707946, 1};
        soundEngineOffExt[] = {
            "A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_stop",
            0.630957,
            1,
            200
        };
        buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
        buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1, 1, 200};
        buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1, 1, 200};
        buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1, 1, 200};
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
        WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
        WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1, 1, 200};
        WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1, 1, 200};
        WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1, 1, 200};
        WoodCrash4[] = {"A3\sounds_f\Vehicles\crashes\crash_01", 1, 1, 200};
        WoodCrash5[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
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
        ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
        ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1, 1, 200};
        ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1, 1, 200};
        ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1, 1, 200};
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
            soundSetsExt[] = {
                "MBT_04_Engine_RPM0_EXT_SoundSet",
                "MBT_04_Engine_RPM1_EXT_SoundSet",
                "MBT_04_Engine_RPM2_EXT_SoundSet",
                "MBT_04_Engine_RPM3_EXT_SoundSet",
                "MBT_04_Engine_RPM4_EXT_SoundSet",
                "MBT_04_Engine_EXT_Burst_SoundSet",
                "MBT_04_Tracks_01_EXT_SoundSet",
                "MBT_04_Tracks_02_EXT_SoundSet",
                "MBT_04_Tracks_03_EXT_SoundSet",
                "MBT_04_Tracks_04_EXT_SoundSet",
                "MBT_04_Tracks_05_EXT_SoundSet",
                "MBT_04_Tracks_06_EXT_SoundSet",
                "MBT_04_Rain_EXT_SoundSet",
                "MBT_04_Tracks_Brake_Hard_EXT_SoundSet",
                "MBT_04_Tracks_Brake_Soft_EXT_SoundSet",
                "MBT_04_Tracks_Turn_Hard_EXT_SoundSet",
                "MBT_04_Tracks_Turn_Soft_EXT_SoundSet",
                "MBT_04_Drive_Water_EXT_SoundSet",
                "",
                "Tracks_Movement_Dirt_Ext_01_SoundSet",
                "Tracks_Surface_Soft_Ext_SoundSet",
                "Tracks_Surface_Hard_Ext_SoundSet",
                "Tracks_Surface_Sand_Ext_SoundSet",
                "Tracks_Surface_Squeaks_Soft_Ext_SoundSet",
                "Tracks_Surface_Squeaks_Hard_Ext_SoundSet"
            };
            soundSetsInt[] = {
                "MBT_04_Engine_RPM0_INT_SoundSet",
                "MBT_04_Engine_RPM1_INT_SoundSet",
                "MBT_04_Engine_RPM2_INT_SoundSet",
                "MBT_04_Engine_RPM3_INT_SoundSet",
                "MBT_04_Engine_RPM4_INT_SoundSet",
                "MBT_04_Engine_INT_Burst_SoundSet",
                "MBT_04_Tracks_01_INT_SoundSet",
                "MBT_04_Tracks_02_INT_SoundSet",
                "MBT_04_Tracks_03_INT_SoundSet",
                "MBT_04_Tracks_04_INT_SoundSet",
                "MBT_04_Tracks_05_INT_SoundSet",
                "MBT_04_Tracks_06_INT_SoundSet",
                "MBT_04_Interior_Tone_Engine_Off_SoundSet",
                "MBT_04_Interior_Tone_Engine_On_SoundSet",
                "MBT_04_Rattling_INT_SoundSet",
                "MBT_04_Rain_INT_SoundSet",
                "MBT_04_Tracks_Brake_Hard_INT_SoundSet",
                "MBT_04_Tracks_Brake_Soft_INT_SoundSet",
                "MBT_04_Tracks_Turn_Hard_INT_SoundSet",
                "MBT_04_Tracks_Turn_Soft_INT_SoundSet",
                "MBT_04_Drive_Water_INT_SoundSet",
                "",
                "Tracks_Movement_Dirt_Int_01_SoundSet",
                "Tracks_Surface_Soft_Int_SoundSet",
                "Tracks_Surface_Hard_Int_SoundSet",
                "Tracks_Surface_Sand_Int_SoundSet",
                "Tracks_Surface_Squeaks_Soft_Int_SoundSet",
                "Tracks_Surface_Squeaks_Hard_Int_SoundSet",
                "Tanks_Material_Strain_Int_SoundSet"
            };
        };
        simulation = "tankX";
        brakeIdleSpeed = 0.1;
        maxSpeed = 70;
        normalSpeedForwardCoef = 0.75;
        slowSpeedForwardCoef = 0.25;
        waterResistanceCoef = 0.25;
        enginePower = 1120;
        maxOmega = 251.327;
        minOmega = 104.72;
        redRpm = 2400;
        idleRpm = 1000;
        peakTorque = 5500;
        torqueCurve[] = {
            {0.416667, 0.763636},
            {0.5, 0.890909},
            {0.583333, 0.918182},
            {0.666667, 0.981818},
            {0.75, 1},
            {0.833333, 0.963636},
            {0.916667, 0.863636},
            {1, 0.654545}
        };
        thrustDelay = 0.5;
        engineMOI = 20;
        dampingRateFullThrottle = 2.5;
        dampingRateZeroThrottleClutchEngaged = 8;
        dampingRateZeroThrottleClutchDisengaged = 2;
        clutchStrength = 60;
        latency = 0.5;
        switchTime = 0;
        changeGearType = "rpmratio";
        changeGearOmegaRatios[] = {
            1,
            0.583333,
            0.416667,
            0.416667,
            0.958333,
            0.416667,
            0.9375,
            0.729167,
            0.916667,
            0.708333,
            0.916667,
            0.708333,
            0.916667,
            0.708333,
            0.916667,
            0.666667,
            1,
            0.625
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -4.5,
                "N",
                0,
                "D1",
                7.8,
                "D2",
                5.6,
                "D3",
                4,
                "D4",
                2.9,
                "D5",
                2.1,
                "D6",
                1.5,
                "D7",
                1.1
            };
            transmissionRatios[] = {"High", 5.5};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        tankTurnForce = 1500000;
        tankTurnForceAngMinSpd = 0.785398;
        tankTurnForceAngSpd = 0.837758;
        accelAidForceCoef = 2.5;
        accelAidForceYOffset = -2;
        accelAidForceSpd = 1.4;
        class Wheels {
            class L2 {
                side = "left";
                suspTravelDirection[] = {-0.125, -1, 0};
                boneName = "wheel_podkoloL1";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                steering = 0;
                width = 0.5;
                mass = 160;
                MOI = 12.8;
                dampingRate = 960;
                dampingRateInAir = 960;
                dampingRateDestroyed = 3000;
                maxDroop = 0.18;
                maxCompression = 0.18;
                sprungMass = 6000;
                springStrength = 600000;
                springDamperRate = 45000;
                maxBrakeTorque = 45000;
                latStiffX = 1.5;
                latStiffY = 60;
                longitudinalStiffnessPerUnitGravity = 13000;
                frictionVsSlipGraph[] = {{0, 0.55}, {0.1, 1.55}, {0.6, 0.9}};
            };
            class L3: L2 {
                boneName = "wheel_podkolol2";
                center = "wheel_1_3_axis";
                boundary = "wheel_1_3_bound";
            };
            class L4: L2 {
                boneName = "wheel_podkolol3";
                center = "wheel_1_4_axis";
                boundary = "wheel_1_4_bound";
            };
            class L5: L4 {
                boneName = "wheel_podkolol4";
                center = "wheel_1_5_axis";
                boundary = "wheel_1_5_bound";
            };
            class L6: L4 {
                boneName = "wheel_podkolol5";
                center = "wheel_1_6_axis";
                boundary = "wheel_1_6_bound";
            };
            class L7: L2 {
                boneName = "wheel_podkolol6";
                center = "wheel_1_7_axis";
                boundary = "wheel_1_7_bound";
            };
            class L8: L2 {
                boneName = "wheel_podkolol7";
                center = "wheel_1_8_axis";
                boundary = "wheel_1_8_bound";
            };
            class L9: L2 {
                boneName = "wheel_podkolol9";
                center = "wheel_1_9_axis";
                boundary = "wheel_1_9_bound";
                maxDroop = 0.01;
                maxCompression = 0.01;
            };
            class L1: L2 {
                boneName = "";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                maxDroop = 0.01;
                maxCompression = 0.01;
            };
            class R2: L2 {
                side = "right";
                suspTravelDirection[] = {0.125, -1, 0};
                boneName = "wheel_podkolop1";
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
            };
            class R3: R2 {
                boneName = "wheel_podkolop2";
                center = "wheel_2_3_axis";
                boundary = "wheel_2_3_bound";
            };
            class R4: R2 {
                boneName = "wheel_podkolop3";
                center = "wheel_2_4_axis";
                boundary = "wheel_2_4_bound";
            };
            class R5: R2 {
                boneName = "wheel_podkolop4";
                center = "wheel_2_5_axis";
                boundary = "wheel_2_5_bound";
            };
            class R6: R2 {
                boneName = "wheel_podkolop5";
                center = "wheel_2_6_axis";
                boundary = "wheel_2_6_bound";
            };
            class R7: R2 {
                boneName = "wheel_podkolop6";
                center = "wheel_2_7_axis";
                boundary = "wheel_2_7_bound";
            };
            class R8: R2 {
                boneName = "wheel_podkolop7";
                center = "wheel_2_8_axis";
                boundary = "wheel_2_8_bound";
            };
            class R9: R2 {
                boneName = "wheel_podkolop9";
                center = "wheel_2_9_axis";
                boundary = "wheel_2_9_bound";
                maxDroop = 0.01;
                maxCompression = 0.01;
            };
            class R1: R2 {
                boneName = "";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                maxDroop = 0.01;
                maxCompression = 0.01;
            };
        };
        armor = 500;
        armorStructural = 200;
        damageResistance = 0.00389;
        epeImpulseDamageCoef = 18;
        crewVulnerable = 0;
        class HitPoints: HitPoints {
            class HitFuelTank_Left {
                armor = -80;
                material = -1;
                name = "Hit_Fuel_L";
                armorComponent = "Hit_Fuel_L";
                visual = "-";
                passThrough = 0;
                minimalHit = 0.3;
                explosionShielding = 0;
                radius = 0.1;
            };
            class HitFuelTank_Right: HitFuelTank_Left {
                name = "Hit_Fuel_R";
                armorComponent = "Hit_Fuel_R";
            };
            class HitFuel {
                armor = 999;
                name = "Hit_Fuel";
                armorComponent = "Hit_Fuel";
                visual = "-";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.01;
                depends = "(HitFuelTank_Left+HitFuelTank_Right)*0.5";
            };
            class HitHull: HitHull {
                armor = -100;
                material = -1;
                visual = "hull_hit";
                name = "Hit_Ammo";
                armorComponent = "Hit_Ammo";
                passThrough = 0;
                minimalHit = -0.16;
                explosionShielding = 0.01;
                radius = 0.25;
            };
            class HitEngine: HitEngine {
                armor = -150;
                material = -1;
                name = "Hit_Engine";
                armorComponent = "Hit_Engine";
                visual = "zbytek";
                passThrough = 0;
                minimalHit = 0.14;
                explosionShielding = 0.009;
                radius = 0.18;
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Engine_Smoke {
                        simulation = "particles";
                        type = "SmallWreckSmoke";
                        position = "engine_smoke1";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 60;
                        enabled = "engineDamage";
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
            class HitLTrack: HitLTrack {
                armor = -150;
                armorComponent = "Hit_Track_L";
                name = "Hit_Track_L";
                passThrough = 0;
                material = -1;
                minimalHit = -0.25;
                explosionShielding = 0.5;
                radius = 0.3;
            };
            class HitRTrack: HitRTrack {
                armor = -150;
                armorComponent = "Hit_Track_R";
                name = "Hit_Track_R";
                material = -1;
                passThrough = 0;
                minimalHit = -0.25;
                explosionShielding = 0.5;
                radius = 0.3;
            };
            class Hit_Optic_Driver {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_driver";
                armorComponent = "Hit_Optic_Driver";
                passThrough = 0;
            };
            class era_1_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e1";
                armorComponent = "e1";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e1";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e1";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e1";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e1";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_2_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e2";
                armorComponent = "e2";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e2";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e2";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e2";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e2";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_3_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e3";
                armorComponent = "e3";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e3";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e3";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e3";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e3";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_4_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e4";
                armorComponent = "e4";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e4";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e4";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e4";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e4";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_5_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e5";
                armorComponent = "e5";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e5";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e5";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e5";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e5";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_6_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e6";
                armorComponent = "e6";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e6";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e6";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e6";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e6";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_7_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e7";
                armorComponent = "e7";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e7";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e7";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e7";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e7";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_8_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e8";
                armorComponent = "e8";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e8";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e8";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e8";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e8";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_9_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e9";
                armorComponent = "e9";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e9";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e9";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e9";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e9";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_10_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e10";
                armorComponent = "e10";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e10";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e10";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e10";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e10";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_11_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e11";
                armorComponent = "e11";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e11";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e11";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e11";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e11";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_12_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e12";
                armorComponent = "e12";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e12";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e12";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e12";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e12";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_13_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e13";
                armorComponent = "e13";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e13";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e13";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e13";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e13";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_14_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e14";
                armorComponent = "e14";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e14";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e14";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e14";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e14";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_15_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e15";
                armorComponent = "e15";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e15";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e15";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e15";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e15";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_16_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e16";
                armorComponent = "e16";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e16";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e16";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e16";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e16";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_17_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e17";
                armorComponent = "e17";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e17";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e17";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e17";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e17";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_18_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e18";
                armorComponent = "e18";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e18";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e18";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e18";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e18";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_19_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e19";
                armorComponent = "e19";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e19";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e19";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e19";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e19";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_20_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e20";
                armorComponent = "e20";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e20";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e20";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e20";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e20";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_21_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e21";
                armorComponent = "e21";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e21";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e21";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e21";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e21";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_22_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e22";
                armorComponent = "e22";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e22";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e22";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e22";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e22";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_23_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e23";
                armorComponent = "e23";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e23";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e23";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e23";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e23";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_24_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e24";
                armorComponent = "e24";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e24";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e24";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e24";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e24";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_25_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e25";
                armorComponent = "e25";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e25";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e25";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e25";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e25";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_26_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e26";
                armorComponent = "e26";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e26";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e26";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e26";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e26";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_27_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e27";
                armorComponent = "e27";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e27";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e27";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e27";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e27";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_28_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e28";
                armorComponent = "e28";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e28";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e28";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e28";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e28";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_29_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e29";
                armorComponent = "e29";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e29";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e29";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e29";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e29";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_30_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e30";
                armorComponent = "e30";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e30";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e30";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e30";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e30";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_31_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e31";
                armorComponent = "e31";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e31";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e31";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e31";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e31";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_32_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e32";
                armorComponent = "e32";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e32";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e32";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e32";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e32";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_33_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e33";
                armorComponent = "e33";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e33";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e33";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e33";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e33";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_34_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e34";
                armorComponent = "e34";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e34";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e34";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e34";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e34";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_35_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e35";
                armorComponent = "e35";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e35";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e35";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e35";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e35";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_36_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e36";
                armorComponent = "e36";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e36";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e36";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e36";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e36";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_37_hitpoint {
                simulation = "RHS_ERA_MALACHIT";
                armor = -150;
                material = -1;
                name = "e37";
                armorComponent = "e37";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.01;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e37";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e37";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e37";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e37";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class SLAT_38_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e38";
                armorComponent = "e38";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_39_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e39";
                armorComponent = "e39";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_40_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e40";
                armorComponent = "e40";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_41_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e41";
                armorComponent = "e41";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        body = "obsTurret";
                        gun = "obsGun";
                        animationSourceBody = "obsTurret";
                        animationSourceGun = "obsGun";
                        memoryPointGunnerOutOptics = "commanderview";
                        memoryPointGunnerOptics = "commanderview";
                        memoryPointGun = "usti hlavne2";
                        gunBeg = "Usti hlavne2";
                        gunEnd = "Konec hlavne2";
                        minElev = -15;
                        maxElev = 50;
                        initElev = 0;
                        minTurn = -360;
                        maxTurn = 360;
                        initTurn = 0;
                        stabilizedInAxes = 3;
                        maxHorizontalRotSpeed = 1.9;
                        maxVerticalRotSpeed = 1.9;
                        weapons[] = {
                            "rhs_weap_afganit_1",
                            "rhs_weap_afganit_2",
                            "rhs_weap_afganit_3",
                            "rhs_weap_afganit_4",
                            "rhs_weap_afganit_5",
                            "rhs_weap_afganit_6",
                            "rhs_weap_afganit_7",
                            "rhs_weap_afganit_8",
                            "rhs_weap_afganit_9",
                            "rhs_weap_afganit_10"
                        };
                        magazines[] = {
                            "rhs_mag_aps_afganit",
                            "rhs_mag_aps_afganit",
                            "rhs_mag_aps_afganit",
                            "rhs_mag_aps_afganit",
                            "rhs_mag_aps_afganit",
                            "rhs_mag_aps_afganit",
                            "rhs_mag_aps_afganit",
                            "rhs_mag_aps_afganit",
                            "rhs_mag_aps_afganit",
                            "rhs_mag_aps_afganit"
                        };
                        soundServo[] = {
                            "A3\Sounds_F\vehicles\armor\noises\servo_best",
                            0.01,
                            1,
                            50
                        };
                        outGunnerMayFire = 0;
                        inGunnerMayFire = 1;
                        gunnerAction = "Commander_MBT_04_out";
                        gunnerInAction = "Commander_MBT_04_in";
                        gunnerGetInAction = "GetInAMV_cargo";
                        gunnerGetOutAction = "GetOutLow";
                        isPersonTurret = 0;
                        personTurretAction = "vehicle_turnout_2";
                        minOutElev = -10;
                        maxOutElev = 25;
                        initOutElev = 0;
                        minOutTurn = -90;
                        maxOutTurn = 40;
                        initOutTurn = 0;
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
                        gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
                        gunnerOutOpticsModel = "";
                        gunnerOpticsEffect[] = {};
                        class ViewOptics: ViewOptics {
                            initAngleX = 0;
                            minAngleX = -30;
                            maxAngleX = 30;
                            initAngleY = 0;
                            minAngleY = -100;
                            maxAngleY = 100;
                            initFov = 0.155;
                            minFov = 0.034;
                            maxFov = 0.155;
                            visionMode[] = {"Normal", "TI"};
                            thermalMode[] = {4, 5};
                        };
                        class OpticsIn: Optics_Commander_02 {
                            class Wide: Wide {};
                            class Medium: Medium {};
                            class Narrow: Narrow {};
                        };
                        turretInfoType = "RscOptics_MBT_02_commander";
                        startEngine = 0;
                        gunnerHasFlares = 1;
                        viewGunnerInExternal = 1;
                        class HitPoints {
                            class HitTurretCom {
                                isTurret = 1;
                                armor = 0.1;
                                material = -1;
                                name = "Hit_Commander_Gun";
                                visual = "commander_turret_hit";
                                passThrough = 0;
                                minimalHit = 0.1;
                                explosionShielding = 1;
                                radius = 0.2;
                            };
                            class HitGunCom {
                                isGun = 1;
                                armor = 0.1;
                                material = -1;
                                name = "Hit_Commander_Turret";
                                visual = "commander_gun_hit";
                                passThrough = 0;
                                minimalHit = 0.1;
                                explosionShielding = 1;
                                radius = 0.2;
                            };
                        };
                        selectionFireAnim = "zasleh2";
                    };
                };
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                missileBeg = "usti hlavne";
                missileEnd = "konec hlavne";
                memoryPointGun = "usti hlavne3";
                selectionFireAnim = "zasleh_1";
                gunnerAction = "Gunner_MBT_04_in";
                gunnerInAction = "Gunner_MBT_04_in";
                soundServo[] = {
                    "A3\Sounds_F\vehicles\armor\noises\servo_best",
                    0.01,
                    1,
                    50
                };
                weapons[] = {"rhs_weap_2a42", "rhs_weap_pkt", "rhs_weap_fcs"};
                magazines[] = {
                    "rhs_mag_3uof8_340",
                    "rhs_mag_3ubr11_160",
                    "rhs_mag_762x54mm_2000",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
                forceHideGunner = 1;
                discreteDistance[] = {};
                discreteDistanceInitIndex = 0;
                memoryPointGunnerOptics = "gunnerview";
                minElev = -8;
                maxElev = 74;
                initElev = 10;
                maxHorizontalRotSpeed = 1.9;
                maxVerticalRotSpeed = 1.9;
                gunnerOutOpticsModel = "";
                gunnerOutOpticsEffect[] = {};
                gunnerOpticsEffect[] = {};
                gunnerForceOptics = 1;
                inGunnerMayFire = 1;
                viewGunnerInExternal = 1;
                lockWhenDriverOut = 1;
                class OpticsIn {
                    class Wide: ViewOptics {
                        opticsDisplayName = "DAY3";
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.233333;
                        minFov = 0.233333;
                        maxFov = 0.233333;
                        visionMode[] = {"Normal", "Ti"};
                        thermalMode[] = {0, 1};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_thermalscreen_empty.p3d";
                    };
                    class Medium: Wide {
                        opticsDisplayName = "DAY12";
                        initFov = 0.0583333;
                        minFov = 0.0583333;
                        maxFov = 0.0583333;
                    };
                    class Narrow: Medium {
                        opticsDisplayName = "DAY24";
                        initFov = 0.0291667;
                        minFov = 0.0291667;
                        maxFov = 0.0291667;
                    };
                    class Autotrack: Narrow {
                        opticsDisplayName = "AUTOTRACK";
                        directionStabilized = 1;
                    };
                };
                turretInfoType = "RHS_RscWeaponESSA_FCS";
                class HitPoints {
                    class HitTurret {
                        armor = -200;
                        material = -1;
                        name = "Hit_Turret";
                        armorComponent = "Hit_Turret";
                        visual = "main_turret_hit";
                        passThrough = 0;
                        minimalHit = 0.02;
                        explosionShielding = 0.3;
                        radius = 0.3;
                    };
                    class HitGun {
                        armor = -200;
                        material = -1;
                        name = "Hit_Gun";
                        armorComponent = "Hit_Gun";
                        visual = "main_gun_hit";
                        passThrough = 0;
                        minimalHit = 0.02;
                        explosionShielding = 0.3;
                        radius = 0.15;
                    };
                };
            };
        };
        class Attributes {
            class rhs_decalNumber_type {
                displayName = "Define font type of plate number";
                tooltip = "Define kind of font that will be drawn on vehicle.";
                property = "rhs_decalNumber_type";
                control = "Combo";
                expression = "_this setVariable ['%s', _value];[_this,[['Number', cRHSt15NumberPlaces, _value]]] call rhs_fnc_decalsInit";
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
                displayName = "Set side number";
                tooltip = "Set side number. 4 numbers are required. Type 0 to hide numbers complety & leave at -1 to get random number";
                property = "rhs_decalNumber";
                control = "Edit";
                validate = "Number";
                typeName = "Number";
                defaultValue = "-1";
                expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSt15NumberPlaces}else{[_this, [['Number', cRHSt15NumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
            };
        };
        class UserActions {
            class light_cateyes_off {
                displayName = "Cat Eyes Off";
                position = "pos_driverpos";
                priority = 0.5;
                showWindow = 0;
                radius = 5;
                onlyForplayer = 0;
                condition = "(call rhs_fnc_findPlayer isEqualTo driver this) && {this animationPhase 'light_cateyes'<0.5};";
                statement = "this animate ['light_cateyes', 1];this animate ['light_cateyes_turret', 1];";
            };
            class light_cateyes_on: light_cateyes_off {
                displayName = "Cat Eyes On";
                condition = "(call rhs_fnc_findPlayer isEqualTo driver this) && this animationPhase 'light_cateyes'==1;";
                statement = "this animate ['light_cateyes', 0];this animate ['light_cateyes_turret', 0];";
            };
        };
        class AnimationSources: AnimationSources {
            class APS_Turn {
                source = "user";
                animperiod = 1;
                initPhase = 0;
            };
            class smoketurretL_rot {
                source = "user";
                animperiod = 1;
                initPhase = 0;
            };
            class smoketurretR_rot {
                source = "user";
                animperiod = 1;
                initPhase = 0;
            };
            class elev {
                source = "user";
                animperiod = 0.0016;
            };
            class elev_bank {
                source = "user";
                animperiod = 0.0016;
            };
            class lead {
                source = "user";
                animperiod = 0.001;
            };
            class offset {
                source = "user";
                animperiod = 0.0002;
            };
            class recoil_source_2a42 {
                source = "reload";
                weapon = "rhs_weap_2a42";
            };
            class muzzle_hide_hmg: recoil_source_2a42 {};
            class muzzle_rot_hmg: recoil_source_2a42 {
                source = "ammorandom";
            };
            class muzzleMG {
                source = "ammorandom";
                weapon = "rhs_weap_pkt";
            };
            class hide_apcapL1_source: muzzle_hide_hmg {
                weapon = "rhs_weap_afganit_1";
                source = "ammo";
            };
            class hide_apcapL2_source: muzzle_hide_hmg {
                weapon = "rhs_weap_afganit_2";
                source = "ammo";
            };
            class hide_apcapL3_source: muzzle_hide_hmg {
                weapon = "rhs_weap_afganit_3";
                source = "ammo";
            };
            class hide_apcapL4_source: muzzle_hide_hmg {
                weapon = "rhs_weap_afganit_4";
                source = "ammo";
            };
            class hide_apcapL5_source: muzzle_hide_hmg {
                weapon = "rhs_weap_afganit_5";
                source = "ammo";
            };
            class hide_apcapR1_source: muzzle_hide_hmg {
                weapon = "rhs_weap_afganit_6";
                source = "ammo";
            };
            class hide_apcapR2_source: muzzle_hide_hmg {
                weapon = "rhs_weap_afganit_7";
                source = "ammo";
            };
            class hide_apcapR3_source: muzzle_hide_hmg {
                weapon = "rhs_weap_afganit_8";
                source = "ammo";
            };
            class hide_apcapR4_source: muzzle_hide_hmg {
                weapon = "rhs_weap_afganit_9";
                source = "ammo";
            };
            class hide_apcapR5_source: muzzle_hide_hmg {
                weapon = "rhs_weap_afganit_10";
                source = "ammo";
            };
            class Hide_Skirts {
                displayName = "Hide Skirts";
                source = "user";
                animPeriod = 0.01;
                initPhase = 0;
            };
            class Hide_Turret_Armor: Hide_Skirts {
                displayName = "Hide Turret armor";
            };
            class Hide_Slat: Hide_Skirts {
                displayName = "Hide Slat";
            };
            class light_cateyes {
                source = "user";
                animPeriod = 0.00001;
                initPhase = 1;
            };
            class light_cateyes_turret {
                source = "user";
                animPeriod = 0.00001;
                initPhase = 1;
            };
            class era_1_source {
                source = "Hit";
                hitpoint = "era_1_hitpoint";
            };
            class era_2_source {
                source = "Hit";
                hitpoint = "era_2_hitpoint";
            };
            class era_3_source {
                source = "Hit";
                hitpoint = "era_3_hitpoint";
            };
            class era_4_source {
                source = "Hit";
                hitpoint = "era_4_hitpoint";
            };
            class era_5_source {
                source = "Hit";
                hitpoint = "era_5_hitpoint";
            };
            class era_6_source {
                source = "Hit";
                hitpoint = "era_6_hitpoint";
            };
            class era_7_source {
                source = "Hit";
                hitpoint = "era_7_hitpoint";
            };
            class era_8_source {
                source = "Hit";
                hitpoint = "era_8_hitpoint";
            };
            class era_9_source {
                source = "Hit";
                hitpoint = "era_9_hitpoint";
            };
            class era_10_source {
                source = "Hit";
                hitpoint = "era_10_hitpoint";
            };
            class era_11_source {
                source = "Hit";
                hitpoint = "era_11_hitpoint";
            };
            class era_12_source {
                source = "Hit";
                hitpoint = "era_12_hitpoint";
            };
            class era_13_source {
                source = "Hit";
                hitpoint = "era_13_hitpoint";
            };
            class era_14_source {
                source = "Hit";
                hitpoint = "era_14_hitpoint";
            };
            class era_15_source {
                source = "Hit";
                hitpoint = "era_15_hitpoint";
            };
            class era_16_source {
                source = "Hit";
                hitpoint = "era_16_hitpoint";
            };
            class era_17_source {
                source = "Hit";
                hitpoint = "era_17_hitpoint";
            };
            class era_18_source {
                source = "Hit";
                hitpoint = "era_18_hitpoint";
            };
            class era_19_source {
                source = "Hit";
                hitpoint = "era_19_hitpoint";
            };
            class era_20_source {
                source = "Hit";
                hitpoint = "era_20_hitpoint";
            };
            class era_21_source {
                source = "Hit";
                hitpoint = "era_21_hitpoint";
            };
            class era_22_source {
                source = "Hit";
                hitpoint = "era_22_hitpoint";
            };
            class era_23_source {
                source = "Hit";
                hitpoint = "era_23_hitpoint";
            };
            class era_24_source {
                source = "Hit";
                hitpoint = "era_24_hitpoint";
            };
            class era_25_source {
                source = "Hit";
                hitpoint = "era_25_hitpoint";
            };
            class era_26_source {
                source = "Hit";
                hitpoint = "era_26_hitpoint";
            };
            class era_27_source {
                source = "Hit";
                hitpoint = "era_27_hitpoint";
            };
            class era_28_source {
                source = "Hit";
                hitpoint = "era_28_hitpoint";
            };
            class era_29_source {
                source = "Hit";
                hitpoint = "era_29_hitpoint";
            };
            class era_30_source {
                source = "Hit";
                hitpoint = "era_30_hitpoint";
            };
            class era_31_source {
                source = "Hit";
                hitpoint = "era_31_hitpoint";
            };
            class era_32_source {
                source = "Hit";
                hitpoint = "era_32_hitpoint";
            };
            class era_33_source {
                source = "Hit";
                hitpoint = "era_33_hitpoint";
            };
            class era_34_source {
                source = "Hit";
                hitpoint = "era_34_hitpoint";
            };
            class era_35_source {
                source = "Hit";
                hitpoint = "era_35_hitpoint";
            };
            class era_36_source {
                source = "Hit";
                hitpoint = "era_36_hitpoint";
            };
            class era_37_source {
                source = "Hit";
                hitpoint = "era_37_hitpoint";
            };
            class ERA_38_source {
                source = "Hit";
                hitpoint = "SLAT_38_hitpoint";
            };
            class ERA_39_source {
                source = "Hit";
                hitpoint = "SLAT_39_hitpoint";
            };
            class ERA_40_source {
                source = "Hit";
                hitpoint = "SLAT_40_hitpoint";
            };
            class ERA_41_source {
                source = "Hit";
                hitpoint = "SLAT_41_hitpoint";
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_t15\data\rhs_t15_hull.rvmat",
                "rhsafrf\addons\rhs_t15\data\rhs_t15_hull_dam.rvmat",
                "rhsafrf\addons\rhs_t15\data\rhs_t15_hull_des.rvmat",
                "rhsafrf\addons\rhs_t15\data\rhs_t15_turret.rvmat",
                "rhsafrf\addons\rhs_t15\data\rhs_t15_turret_dam.rvmat",
                "rhsafrf\addons\rhs_t15\data\rhs_t15_turret_des.rvmat",
                "rhsafrf\addons\rhs_t15\data\rhs_t15_armor.rvmat",
                "rhsafrf\addons\rhs_t15\data\rhs_t15_armor_dam.rvmat",
                "rhsafrf\addons\rhs_t15\data\rhs_t15_armor_des.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this call rhs_fnc_t15_init";
                postInit = "_this call rhs_fnc_reapplyTextures";
                deleted = "_this call rhs_fnc_t15_deleted";
                killed = "_this call rhs_fnc_t15_destroyed";
                engine = "_this call rhs_fnc_engineCheckDamage";
            };
        };
    };
    class rhs_t15_tv: rhs_t15_base {
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t15_tv.paa";
        crew = "rhs_msv_emr_combatcrew";
        faction = "rhs_faction_tv";
        side = 0;
    };
};
