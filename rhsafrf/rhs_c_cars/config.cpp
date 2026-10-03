class CfgPatches {
    class rhs_c_cars {
        units[] = {
            "rhs_tigr_vdv",
            "rhs_tigr_vmf",
            "rhs_tigr_msv",
            "rhs_tigr_vv",
            "rhs_tigr_3camo_vdv",
            "rhs_tigr_3camo_vmf",
            "rhs_tigr_3camo_msv",
            "rhs_tigr_3camo_vv",
            "rhs_tigr_ffv_vdv",
            "rhs_tigr_ffv_vmf",
            "rhs_tigr_ffv_msv",
            "rhs_tigr_ffv_vv",
            "rhs_tigr_ffv_3camo_vdv",
            "rhs_tigr_ffv_3camo_vmf",
            "rhs_tigr_ffv_3camo_msv",
            "rhs_tigr_ffv_3camo_vv",
            "rhs_tigr_sts_msv",
            "rhs_tigr_sts_vdv",
            "rhs_tigr_sts_vv",
            "rhs_tigr_sts_vmf",
            "rhs_tigr_sts_3camo_vdv",
            "rhs_tigr_sts_3camo_vmf",
            "rhs_tigr_sts_3camo_msv",
            "rhs_tigr_sts_3camo_vv",
            "rhs_tigr_m_vdv",
            "rhs_tigr_m_vmf",
            "rhs_tigr_m_msv",
            "rhs_tigr_m_vv",
            "rhs_tigr_m_3camo_vdv",
            "rhs_tigr_m_3camo_vmf",
            "rhs_tigr_m_3camo_msv",
            "rhs_tigr_m_3camo_vv"
        };
        weapons[] = {};
        requiredAddons[] = {"rhs_main", "rhs_c_troops"};
        requiredVersion = 1.32;
        name = "Tigr vehicles";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        rhs_tigr_driver = "rhs_tigr_driver";
        rhs_tigr_gunner_pkm = "rhs_tigr_gunner_pkm";
        rhs_tigr_gunner_ags = "rhs_tigr_gunner_ags";
        RHS_Tigr_CargoIn01 = "RHS_Tigr_CargoIn01";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class rhs_tigr_driver: Crew {
            file = "\rhsafrf\addons\rhs_c_cars\anims\tigr_driver.rtm";
            interpolateTo[] = {"KIA_rhs_gaz66_driver", 1};
        };
        class rhs_tigr_gunner_pkm: Crew {
            file = "\rhsafrf\addons\rhs_tigr\data\anims\Tigr_gunner_pkm.rtm";
            interpolateTo[] = {"KIA_rhs_gaz66_driver", 1};
        };
        class rhs_tigr_gunner_ags: Crew {
            file = "\rhsafrf\addons\rhs_tigr\data\anims\Tigr_gunner_ags.rtm";
            interpolateTo[] = {"KIA_rhs_gaz66_driver", 1};
        };
        class KIA_RHS_Tigr_CargoIn01: DefaultDie {
            actions = "DeadActions";
            file = "\rhsafrf\addons\rhs_tigr\data\anims\KIA_Tigr_cargoIn01.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            connectTo[] = {"Unconscious", 0.1};
            soundEnabled = 0;
        };
        class RHS_Tigr_CargoIn01: Crew {
            canPullTrigger = 0;
            file = "\rhsafrf\addons\rhs_tigr\data\anims\Tigr_cargoIn01_V0.rtm";
            interpolateTo[] = {"KIA_RHS_Tigr_CargoIn01", 0.1};
            speed = 0.3;
        };
        class RHS_Tigr_CargoIn01_V1: RHS_Tigr_CargoIn01 {
            file = "\rhsafrf\addons\rhs_tigr\data\anims\Tigr_cargoIn01_V1.rtm";
            interpolateTo[] = {"KIA_RHS_Tigr_CargoIn01", 0.1};
            connectTo[] = {"RHS_Tigr_CargoIn01", 0.1};
            variantAfter[] = {4, 4, 4};
            speed = 0.246;
        };
        class RHS_Tigr_CargoIn01_V2: RHS_Tigr_CargoIn01 {
            file = "\rhsafrf\addons\rhs_tigr\data\anims\Tigr_cargoIn01_V2.rtm";
            interpolateTo[] = {"KIA_RHS_Tigr_CargoIn01", 0.1};
            connectTo[] = {"RHS_Tigr_CargoIn01", 0.1};
            variantAfter[] = {2.5, 2.5, 2.5};
            speed = 0.39;
        };
        class RHS_Tigr_CargoIn01_V3: RHS_Tigr_CargoIn01 {
            file = "\rhsafrf\addons\rhs_tigr\data\anims\Tigr_cargoIn01_V3.rtm";
            interpolateTo[] = {"KIA_RHS_Tigr_CargoIn01", 0.1};
            connectTo[] = {"RHS_Tigr_CargoIn01", 0.1};
            variantAfter[] = {5, 5, 5};
            speed = 0.197;
        };
        class KIA_RHS_Tigr_Cargo02: DefaultDie {
            actions = "DeadActions";
            file = "\rhsafrf\addons\rhs_tigr\data\anims\Tigr_cargoIn01_V0.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            connectTo[] = {"Unconscious", 0.1};
            soundEnabled = 0;
        };
        class RHS_Tigr_Cargo02: Crew {
            file = "\rhsafrf\addons\rhs_tigr\data\anims\Tigr_cargoIn01_V0.rtm";
            interpolateTo[] = {"KIA_RHS_Tigr_Cargo02", 0.1};
        };
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class tigr_init {
                file = "\rhsafrf\addons\rhs_c_cars\scripts\rhs_decal_init.sqf";
                description = "Tigr decal init";
            };
            class tigr_hatch_handler {
                file = "\rhsafrf\addons\rhs_c_cars\scripts\rhs_hatchHandler.sqf";
                description = "Tigr hatch handler";
            };
            class tigr_sts_turret {
                file = "\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigr_sts_turret.sqf";
                description = "Tigr STS weapon handler";
            };
            class tigr_sts_turret_seat_eh {
                file = "\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigr_sts_turret_seat_eh.sqf";
                description = "Tigr STS weapon event handler";
            };
            class tigr_sts_turret_getin_eh {
                file = "\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigr_sts_turret_getin_eh.sqf";
                description = "Tigr STS weapon event handler";
            };
            class tigr_sts_turret_getout_eh {
                file = "\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigr_sts_turret_getout_eh.sqf";
                description = "Tigr STS weapon event handler";
            };
            class tigr_sts_turret_ui {
                file = "\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigr_sts_turret_ui.sqf";
                description = "Tigr STS weapon handler";
            };
            class tigr_sts_reloaded_eh {
                file = "\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigr_sts_reloaded_eh.sqf";
                description = "Tigr STS reloaded event handler";
            };
            class tigr_sts_inventory_eh {
                file = "\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigr_sts_inventory_eh.sqf";
                description = "Tigr STS inventory event handler for RPG-26 animations";
            };
            class tigrm_gunner {
                file = "\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigrm_gunner.sqf";
                description = "Tigr STS weapon event handler";
            };
            class tigrm_turret_seat_eh {
                file = "\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigrm_turret_seat_eh.sqf";
                description = "Tigr STS weapon event handler";
            };
            class tigrm_turret_getin_eh {
                file = "\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigrm_turret_getin_eh.sqf";
                description = "Tigr STS weapon event handler";
            };
        };
    };
};
class CfgSounds {
    class RHS_Gear {
        name = "Changing gear sound";
        sound[] = {
            "\rhsafrf\addons\rhs_a2port_car\sounds\Gear_Change.wss",
            1584.8933,
            1,
            2.4
        };
        titles[] = {};
    };
    class rhs_rain {
        name = "Rain droplets sound inside car";
        sound[] = {
            "rhsafrf\addons\rhs_a2port_car\sounds\rain.wss",
            5011.873,
            1,
            2.8
        };
        titles[] = {0, ""};
    };
};
class RscPicture;
class RscInGameUI {
    class RscUnitInfo;
    class RscWeaponZeroing: RscUnitInfo {
        class WeaponInfoControlsGroupLeft;
    };
    class rhs_tigr_sts_turret: RscUnitInfo {
        idd = 300;
        controls[] = {"CA_Zeroing", "RHS_tigr_handler"};
        class RHS_tigr_handler: RscPicture {
            idc = 69999;
        };
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhs_fnc_tigr_sts_turret_ui";
    };
    class rhs_tigrm_gunner: RscWeaponZeroing {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0,'tigrm'] call RHS_fnc_tigrm_gunner";
    };
};
class CfgVehicles {
    class LandVehicle;
    class Car: LandVehicle {
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
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
            class HitGlass5;
        };
        class EventHandlers;
        class AnimationSources;
    };
    class MRAP_02_base_F: Car_F {
        class HitPoints: HitPoints {
            class HitLFWheel;
            class HitLF2Wheel;
            class HitRFWheel;
            class HitRF2Wheel;
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
            class HitGlass5;
            class HitBody;
            class HitFuel;
            class HitEngine;
        };
        class EventHandlers;
    };
    class rhs_tigr_base: MRAP_02_base_F {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_base.paa";
        dlc = "RHS_AFRF";
        category = "Car";
        scope = 0;
        insideSoundCoef = 0.4;
        slingLoadCargoMemoryPoints[] = {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        canfloat = 0;
        cargoaction[] = {
            "RHS_UAZ_Cargo01",
            "RHS_UAZ_Cargo01",
            "RHS_UAZ_Cargo01",
            "RHS_UAZ_Cargo01",
            "RHS_UAZ_Cargo01",
            "RHS_UAZ_Cargo02"
        };
        cargoIsCoDriver[] = {0, 0};
        castDriverShadow = 1;
        class Library {
            libTextDesc = "You can write something in here.";
        };
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_driver_armored";
        rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']", "['Label', cDecalsTigrRightArmyPlaces, 'Army', 2]", "['Label', cDecalsTigrRightPlatoonPlaces, 'Platoon',11]"};
        tf_hasLRradio_api = 0;
        driverRightLegAnimName = "pedalR";
        driverLeftLegAnimName = "pedalL";
        normalSpeedForwardCoef = 0.6;
        slowSpeedForwardCoef = 0.45;
        turnCoef = 3;
        terrainCoef = 1.5;
        waterSpeedFactor = 0.4;
        simulation = "carx";
        dampersBumpCoef = 4;
        precision = 9;
        brakeDistance = 3;
        acceleration = 15;
        fireResistance = 5;
        maxSpeed = 140;
        fuelCapacity = 17.5;
        RHS_fuelCapacity = 140;
        wheelCircumference = 2.45;
        brakeIdleSpeed = 2;
        maxFordingDepth = 0;
        waterResistance = 1;
        waterLeakiness = 10;
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -4.476,
                "N",
                0,
                "D1",
                3.1,
                "D2",
                1.81,
                "D3",
                1.41,
                "D4",
                1,
                "D5",
                0.71
            };
            TransmissionRatios[] = {"High", 5};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        changeGearMinEffectivity[] = {0.95, 0, 0.9, 0.9, 0.9, 0.9, 0.9};
        switchTime = 0.28;
        latency = 1;
        differentialType = "all_limited";
        frontRearSplit = 0.5;
        frontBias = 1.5;
        rearBias = 1.5;
        centreBias = 1.3;
        clutchStrength = 35;
        transmissionLosses = 9;
        dampingRateFullThrottle = 0.08;
        dampingRateZeroThrottleClutchEngaged = 1.35;
        dampingRateZeroThrottleClutchDisengaged = 0.35;
        torqueCurve[] = {
            {0.3, 0.34918},
            {0.4, 0.695082},
            {0.48, 0.97377},
            {0.6, 1},
            {0.72, 1},
            {0.8, 0.965574},
            {0.88, 0.911475},
            {1.1244, 0}
        };
        enginePower = 134;
        peakTorque = 915;
        maxOmega = 261.8;
        minOmega = 55;
        idleRPM = 750;
        redRPM = 2500;
        engineLosses = 11;
        thrustDelay = 0.8;
        engineBrakeCoef = 0.3;
        antiRollbarForceCoef = 3.5;
        antiRollbarForceLimit = 4.5;
        antiRollbarSpeedMin = 40;
        antiRollbarSpeedMax = 120;
        class Wheels {
            class LF {
                boneName = "wheel_1_1_damper";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                suspForceAppPointOffset = "wheel_1_1_axis";
                tireForceAppPointOffset = "wheel_1_1_axis";
                side = "left";
                suspTravelDirection[] = {-0.125, -1, 0};
                width = 0.32;
                steering = 1;
                mass = 60;
                MOI = 10;
                dampingRate = 3.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 12000;
                maxHandBrakeTorque = 0;
                maxCompression = 0.13;
                maxDroop = 0.11;
                sprungMass = -1;
                springStrength = 135000;
                springDamperRate = 12471;
                longitudinalStiffnessPerUnitGravity = 4800;
                latStiffX = 2.5;
                latStiffY = 18;
                frictionVsSlipGraph[] = {{0.17, 0.95}, {0.4, 0.85}, {1, 0.75}};
            };
            class LR: LF {
                boneName = "wheel_1_2_damper";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                suspForceAppPointOffset = "wheel_1_2_axis";
                tireForceAppPointOffset = "wheel_1_2_axis";
                steering = 0;
                maxHandBrakeTorque = 20000;
            };
            class RF: LF {
                boneName = "wheel_2_1_damper";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                suspForceAppPointOffset = "wheel_2_1_axis";
                tireForceAppPointOffset = "wheel_2_1_axis";
                side = "right";
                suspTravelDirection[] = {0.125, -1, 0};
                steering = 1;
            };
            class RR: RF {
                boneName = "wheel_2_2_damper";
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                suspForceAppPointOffset = "wheel_2_2_axis";
                tireForceAppPointOffset = "wheel_2_2_axis";
                steering = 0;
                maxHandBrakeTorque = 20000;
            };
        };
        class Sounds {
            class Idle_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\Tigr\rhs_tigr_idle_ext",
                    0.6981072,
                    1,
                    250
                };
                frequency = "0.75	+	((rpm/	2700) factor[(610/	2700),(2700/	2700)])*0.95";
                volume = "engineOn*camPos*(((rpm/	2700) factor[(10/	2700),(50/	2700)])	*	((rpm/	2700) factor[(800/	2700),(600/	2700)]))*1.0";
            };
            class Engine {
                sound[] = {
                    "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\Tigr\rhs_tigr_idle_ext",
                    0.4466836,
                    1,
                    350
                };
                frequency = "0.75	+	((rpm/	2700) factor[(610/	2700),(2700/	2700)])*0.95";
                volume = "engineOn*camPos*(((rpm/	2700) factor[(620/	2700),(820/	2700)])	*	((rpm/	2700) factor[(2700/	2700),(2700/	2700)]))*1.0";
            };
            class EngineThrust {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low1",
                    0.5,
                    1,
                    250
                };
                frequency = "0.65	+	((rpm/	2700) factor[(610/	2700),(6400/	2700)])*0.75";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.4,1])))*(((rpm/	2700) factor[(620/	2700),(820/	2700)])	*	((rpm/	2700) factor[(2700/	2700),(2700/	2700)]))*1.0";
            };
            class GearboxWhine_Ext {
                sound[] = {
                    "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\Tigr\rhs_axle_whine_ext",
                    0.35,
                    1,
                    250
                };
                frequency = "0.85	+	((rpm/	2700) factor[(610/	2700),(2700/	2700)])*0.95";
                volume = "engineOn*camPos*(((rpm/	2700) factor[(700/	2700),(850/	2700)])	*	((rpm/	2700) factor[(2700/	2700),(2700/	2700)]))*1.0";
            };
            class Turbo_Ext {
                sound[] = {
                    "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\Tigr\turbo_ext",
                    0.2,
                    1,
                    50
                };
                frequency = "0.85	+	((rpm/	2700) factor[(610/	2700),(2700/	2700)])*0.95";
                volume = "engineOn*camPos*(((rpm/ 2700) factor[(620/  2700),(820/ 2700)]) * ((rpm/  2700) factor[(2700/ 2700),(2700/  2700)]))*2.0";
            };
            class Idle_int {
                sound[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\Tigr\rhs_tigr_idle_int", 0.6, 1};
                frequency = "0.75 + ((rpm/  2700) factor[(610/  2700),(2700/  2700)])*0.95";
                volume = "engineOn*(1-camPos)*(((rpm/ 2700) factor[(10/ 2700),(50/  2700)]) * ((rpm/  2700) factor[(800/  2700),(600/ 2700)]))*1.0";
            };
            class Engine_int {
                sound[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\Tigr\rhs_tigr_idle_int", 0.6, 1};
                frequency = "0.75 + ((rpm/  2700) factor[(610/  2700),(2700/  2700)])*0.95";
                volume = "engineOn*(1-camPos)*(((rpm/ 2700) factor[(620/  2700),(820/ 2700)]) * ((rpm/  2700) factor[(2700/ 2700),(2700/  2700)]))*1.0";
            };
            class EngineThrust_int {
                sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low1", 0.4, 1};
                frequency = "0.85	+	((rpm/	2700) factor[(610/	2700),(2700/	2700)])*0.75";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.4,1])))*(((rpm/  2700) factor[(620/  2700),(820/ 2700)]) * ((rpm/  2700) factor[(2700/ 2700),(2700/  2700)]))*1.0";
            };
            class GearboxWhine_Int {
                sound[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\Tigr\rhs_axle_whine_int", 0.2, 1};
                frequency = "0.85 + ((rpm/  2700) factor[(610/  2700),(2700/  2700)])*0.95";
                volume = "engineOn*(1-camPos)*(((rpm/ 2700) factor[(700/  2700),(850/ 2700)]) * ((rpm/  2700) factor[(2700/ 2700),(2700/  2700)]))*1.0";
            };
            class Turbo_Int {
                sound[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\Tigr\turbo_ext", 0.15, 1};
                frequency = "0.85 + ((rpm/  2700) factor[(610/  2700),(2700/  2700)])*0.75";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/  2700) factor[(620/  2700),(820/ 2700)]) * ((rpm/  2700) factor[(2700/ 2700),(2700/  2700)]))*1.0";
            };
        };
        armor = 60;
        armorGlass = 0.9;
        armorWheels = 4.9;
        minTotalDamageThreshold = 0.2;
        damageResistance = 0.00562;
        secondaryExplosion = -1;
        fuelExplosionPower = 0.1;
        class TransportMagazines {
            class _xx_rhs_30Rnd_545x39_7N10_AK {
                magazine = "rhs_30Rnd_545x39_7N10_AK";
                count = 4;
            };
            class _xx_rhs_100Rnd_762x54mmR {
                magazine = "rhs_100Rnd_762x54mmR";
                count = 8;
            };
            class _xx_rhs_mag_rdg2_white {
                magazine = "rhs_mag_rdg2_white";
                count = 2;
            };
            class _xx_rhs_mag_rgd5 {
                magazine = "rhs_mag_rgd5";
                count = 6;
            };
            class _xx_rhs_rpg26_mag {
                magazine = "rhs_rpg26_mag";
                count = 4;
            };
        };
        class TransportWeapons {
            class _xx_rhs_weap_rpg26 {
                weapon = "rhs_weap_rpg26";
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
            class _xx_Toolkit {
                name = "Toolkit";
                count = 1;
            };
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
            "rhsafrf\addons\rhs_tigr\data\rhs_tigr_co.paa",
            "rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_01_co.paa",
            "rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa",
            "rhsafrf\addons\rhs_tigr\sts_proxies\data\tigr_ext_ads_co.paa",
            "rhsafrf\addons\rhs_tigr\m_proxies\data\tigr_m_adds_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        class textureSources {
            class standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "rhsafrf\addons\rhs_tigr\data\rhs_tigr_co.paa",
                    "rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_01_co.paa",
                    "rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa",
                    "rhsafrf\addons\rhs_tigr\sts_proxies\data\tigr_ext_ads_co.paa",
                    "rhsafrf\addons\rhs_tigr\m_proxies\data\tigr_m_adds_co.paa"
                };
                factions[] = {
                    "rhs_faction_vmf",
                    "rhs_faction_vdv",
                    "rhs_faction_vdv",
                    "rhs_faction_vv"
                };
            };
            class Camo: standard {
                displayName = "Camo";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "rhsafrf\addons\rhs_tigr\data\rhs_tigr_co_camo.paa",
                    "rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_01_co.paa",
                    "rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa",
                    "rhsafrf\addons\rhs_tigr\sts_proxies\data\tigr_ext_ads_co.paa",
                    "rhsafrf\addons\rhs_tigr\m_proxies\data\tigr_m_adds_co.paa"
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
                expression = "_this setVariable ['%s', _value];[_this,[['Number', cDecalsTigr4NumberPlaces, _value]]] call rhs_fnc_decalsInit";
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
                expression = "if( _value >= 0)then{[_this,[['Number', cDecalsTigr4NumberPlaces, _this getVariable ['rhs_decalNumber_type','LicensePlate'], _value]]] call rhs_fnc_decalsInit};";
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
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cDecalsTigrRightArmyPlaces,  _this getVariable ['rhs_decalArmy_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
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
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cDecalsTigrRightPlatoonPlaces,  _this getVariable ['rhs_decalPlatoon_type','Army'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_hidespare {
                displayName = "Remove spare wheel";
                property = "rhs_hidespare";
                control = "CheckboxNumber";
                expression = "_this animate ['spare_hide',_value,true]";
                defaultValue = "0";
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
            class Door_Rear: Door_LF {
                displayName = "Open rear doors";
                property = "Door_Rear";
            };
        };
        destrType = "DestructDefault";
        displayName = "$STR_RHS_GAZ233011";
        driverAction = "rhs_tigr_driver";
        driverInAction = "rhs_tigr_driver";
        hideProxyInCombat = 1;
        viewDriverInExternal = 1;
        driverIsCommander = 1;
        enableGPS = 0;
        getInAction = "GetInLow";
        getOutAction = "GetOutLow";
        Icon = "\rhsafrf\addons\rhs_tigr\data\map_ico\RHS_icomap_Tigr_ca.paa";
        magazines[] = {};
        mapSize = 6;
        model = "\rhsafrf\addons\rhs_tigr\RHS_Tigr";
        picture = "\rhsafrf\addons\rhs_tigr\data\ico\RHS_Tigr_ca.paa";
        selectionBackLights = "zadni svetlo";
        selectionBrakeLights = "brzdove svetlo";
        selectionDashboard = "light";
        side = 0;
        attenuationEffectType = "RHS_CarAttenuation";
        TextPlural = "Tigrs";
        TextSingular = "Tigr";
        vehicleClass = "rhs_vehclass_car";
        editorSubcategory = "rhs_EdSubcat_car";
        weapons[] = {"TruckHorn"};
        memoryPointsGetInDriver = "pos driver";
        memoryPointsGetInDriverDir = "pos driver dir";
        memoryPointsGetInCargo[] = {"pos codriver", "pos cargo"};
        memoryPointsGetInCargoDir[] = {"pos codriver dir", "pos cargo dir"};
        driverDoor = "Door_LF";
        cargoDoors[] = {"Door_RF", "Door_Rear"};
        soundGear[] = {"", 0.0000562341, 1};
        class RenderTargets {
            class LeftMirror {
                renderTarget = "rendertarget0";
                class CameraView1 {
                    pointPosition = "pp1";
                    pointDirection = "pd1";
                    renderQuality = 2;
                    renderVisionMode = 4;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_1_TL", "PIP_1_TR", "PIP_1_BL", "PIP_1_BR"};
            };
            class RightMirror {
                renderTarget = "rendertarget1";
                class CameraView1 {
                    pointPosition = "pp2";
                    pointDirection = "pd2";
                    renderQuality = 2;
                    renderVisionMode = 4;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_2_TL", "PIP_2_TR", "PIP_2_BL", "PIP_2_BR"};
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_tigr\data\glass.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "rhsafrf\addons\rhs_btr70\data\kamaz_glass_in.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "rhsafrf\addons\rhs_tigr\data\rhs_tigr.rvmat",
                "rhsafrf\addons\rhs_tigr\data\rhs_dam_tigr.rvmat",
                "rhsafrf\addons\rhs_tigr\data\rhs_destr_tigr.rvmat",
                "rhsafrf\addons\rhs_tigr\data\rhs_tigr_int01.rvmat",
                "rhsafrf\addons\rhs_tigr\data\rhs_dam_tigr_int01.rvmat",
                "rhsafrf\addons\rhs_tigr\data\rhs_destr_tigr.rvmat",
                "rhsafrf\addons\rhs_tigr\data\rhs_tigr_int02.rvmat",
                "rhsafrf\addons\rhs_tigr\data\rhs_dam_tigr_int02.rvmat",
                "rhsafrf\addons\rhs_tigr\data\rhs_destr_tigr.rvmat",
                "rhsafrf\addons\rhs_tigr\sts_proxies\data\rhs_tigr_ext_ads.rvmat",
                "rhsafrf\addons\rhs_tigr\sts_proxies\data\rhs_dam_tigr_ext_ads.rvmat",
                "rhsafrf\addons\rhs_tigr\data\rhs_destr_tigr.rvmat",
                "rhsafrf\addons\rhs_tigr\m_proxies\data\rhs_tigrM_ext_ads.rvmat",
                "rhsafrf\addons\rhs_tigr\m_proxies\data\rhs_dam_tigrM_ext_ads.rvmat",
                "rhsafrf\addons\rhs_tigr\data\rhs_destr_tigr.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class HitPoints: HitPoints {
            class HitLFWheel: HitLFWheel {
                armor = 3.1;
            };
            class HitLF2Wheel: HitLF2Wheel {
                armor = 3.1;
            };
            class HitRFWheel: HitRFWheel {
                armor = 3.1;
            };
            class HitRF2Wheel: HitRF2Wheel {
                armor = 3.1;
            };
            class HitSpare: HitRF2Wheel {
                name = "spare1";
            };
            class UseSpare: HitSpare {
                name = "";
                visual = "-";
                armor = 1;
            };
            class HitHull {
                armor = -200;
                name = "karoserie";
                visual = "zbytek";
                passThrough = 0.2;
                minimalHit = -0.2;
                explosionShielding = 0.2;
                radius = 0.25;
            };
            class HitBody: HitBody {
                minimalHit = 0.1;
            };
            class HitFuel: HitFuel {
                armor = 0.5;
                name = "palivo";
                visual = "-";
            };
            class HitEngine: HitEngine {
                minimalHit = 0.02;
                armor = 3.9;
                name = "motor";
                visual = "zbytek";
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
            class HitGlass1: HitGlass1 {
                armor = 8.1;
            };
            class HitGlass2: HitGlass1 {
                name = "glass2";
                visual = "glass2";
            };
            class HitGlass3: HitGlass1 {
                name = "glass3";
                visual = "glass3";
            };
            class HitGlass4: HitGlass1 {
                name = "glass4";
                visual = "glass4";
            };
            class HitGlass5: HitGlass1 {
                name = "glass5";
                visual = "glass5";
            };
            class HitGlass6: HitGlass1 {
                name = "glass6";
                visual = "glass6";
            };
            class HitGlass7: HitGlass1 {
                name = "glass7";
                visual = "glass7";
            };
            class HitGlass8: HitGlass1 {
                name = "glass8";
                visual = "glass8";
            };
            class HitGlass9: HitGlass1 {
                name = "glass9";
                visual = "glass9";
            };
            class HitGlass10: HitGlass1 {
                name = "glass10";
                visual = "glass10";
            };
        };
        class AnimationSources: AnimationSources {
            class HitSpare {
                source = "Hit";
                hitpoint = "HitSpare";
                raw = 1;
            };
            class UseSpare: HitSpare {
                hitpoint = "UseSpare";
            };
            class hatch_front_door {
                mass = 1;
                source = "door";
                animPeriod = 1;
                initPhase = 0;
            };
            class hatch_back_door: hatch_front_door {};
            class spare_hide: hatch_front_door {
                animPeriod = 0.00000001;
                source = "user";
                displayName = "hide spare wheel";
            };
            class Door_LF {
                source = "door";
                animPeriod = 0.8;
                sound = "RHS_UAZ_Door";
                soundPosition = "door_1_1_axis";
            };
            class Door_RF: Door_LF {
                soundPosition = "door_1_2_axis";
            };
            class Door_Rear: Door_LF {
                soundPosition = "door_2_1_axis";
            };
            class HitGlass1;
            class HitGlass7: HitGlass1 {
                hitpoint = "HitGlass7";
            };
            class HitGlass8: HitGlass1 {
                hitpoint = "HitGlass8";
            };
            class HitGlass9: HitGlass1 {
                hitpoint = "HitGlass9";
            };
            class HitGlass10: HitGlass1 {
                hitpoint = "HitGlass10";
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
        };
        canHideDriver = 0;
        class CargoTurret;
        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret {
                gunnerAction = "vehicle_turnout_1";
                gunnerInAction = "RHS_Tigr_CargoIn01";
                animationSourceHatch = "Hatch_Front";
                isPersonTurret = 2;
                enabledByAnimationSource = "hatch_front_door";
                gunnerGetInAction = "GetInMantis";
                gunnerGetOutAction = "GetOutMantis";
                commanding = -2;
                rhs_hatch_control = 1;
                memoryPointsGetInGunner = "pos cargo";
                memoryPointsGetInGunnerDir = "pos cargo dir";
                gunnerName = "Passenger (Front Hatch)";
                gunnerCompartments = "Compartment1";
                gunnerDoor = "Door_Rear";
                memoryPointGunnerOptics = "";
                gunnerForceOptics = 0;
                canHideGunner = 1;
                LODTurnedIn = 1000;
                LODTurnedOut = 0;
                proxyIndex = 9;
                maxElev = 45;
                minElev = -35;
                maxTurn = 61;
                minTurn = -65;
                inGunnerMayFire = 0;
                class TurnIn {
                    limitsArrayTop[] = {{0, 0}, {0, 0}};
                    limitsArrayBottom[] = {{0, 0}, {0, 0}};
                };
                class TurnOut {
                    limitsArrayTop[] = {{65, -179.9}, {65, 179.9}};
                    limitsArrayBottom[] = {{-45, -179.9}, {-45, 179.9}};
                };
            };
            class CargoTurret_02: CargoTurret_01 {
                proxyIndex = 7;
                isPersonTurret = 2;
                animationSourceHatch = "Hatch_Back";
                enabledByAnimationSource = "hatch_back_door";
                gunnerName = "Passenger (Rear Hatch)";
                memoryPointsGetInGunner = "pos hatch rear";
                memoryPointsGetInGunnerDir = "pos hatch rear dir";
            };
        };
        transportSoldier = 6;
        cargoProxyIndexes[] = {1, 3, 4, 5, 6, 8};
        getInProxyOrder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        driverCompartments = "Compartment1";
        cargoCompartments[] = {"Compartment1"};
        class Reflectors {
            class LSvetla {
                color[] = {800, 900, 650};
                ambient[] = {2, 2, 2};
                position = "L svetlo";
                direction = "konec L svetla";
                hitpoint = "L svetlo";
                selection = "L svetlo";
                size = 1;
                innerAngle = 50;
                outerAngle = 140;
                coneFadeCoef = 10;
                intensity = 2.5;
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
            class CSvetla: LSvetla {
                position = "C svetlo";
                direction = "konec C svetla";
                hitpoint = "C svetlo";
                selection = "C svetlo";
                innerAngle = 35;
                outerAngle = 179;
                intensity = 0.85;
            };
            class Searchlight: CSvetla {
                position = "Searchlight_pos";
                direction = "Searchlight_dir";
                hitpoint = "Searchlight";
                selection = "Searchlight";
            };
            class Right2: RSvetla {
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
                color[] = {40, 350, 960};
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
                useFlare = 0;
                flareSize = 1;
                flareMaxDistance = 5;
                dayLight = 1;
                blinking = 0;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 50;
                    hardLimitStart = 1;
                    hardLimitEnd = 1.5;
                };
            };
            class cargo_light_1: cabin {
                color[] = {40, 350, 960};
                position = "cargo_light_1";
                direction = "cargo_light_1_dir";
                hitpoint = "cargo_light_1";
                selection = "cargo_light_1";
                intensity = 3;
                useFlare = 0;
                coneFadeCoef = 0.1;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 70;
                    hardLimitStart = 0.5;
                    hardLimitEnd = 1.5;
                };
            };
            class reverse_light_1: LSvetla {
                intensity = 0.1;
                useFlare = 1;
                innerAngle = 50;
                outerAngle = 179;
                position = "reverse_light_1_pos";
                direction = "reverse_light_1_dir";
                hitpoint = "reverse_light_hit";
                selection = "reverse_light";
            };
            class reverse_light_2: reverse_light_1 {
                position = "reverse_light_2_pos";
                direction = "reverse_light_2_dir";
            };
        };
        aggregateReflectors[] = {
            {"LSvetla", "RSvetla"},
            {"Left2", "Right2"},
            {"CSvetla"},
            {"Long_Left2", "Long_Right2"},
            {"reverse_light_1", "reverse_light_2"}
        };
        armorLights = 0.1;
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
                displayName = "Toggle rear searchlight";
                statement = "[this,3] call rhs_fnc_carLightToggle";
            };
        };
        class RHS_TowingSystem {
            class Carrier {
                rhs_maxCargoMass = 1500;
                rhs_attachPoint = "";
                rhs_attachPointPos[] = {0, -2.45, -1.25};
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this call rhs_fnc_tigr_init;";
                postInit = "_this call rhs_fnc_reapplyTextures";
                turnIn = "([0] + _this)  call rhs_fnc_turretAction;";
                turnOut = "([1] + _this) call rhs_fnc_turretAction;";
                engine = "_this call rhs_fnc_engineCheckDamage;";
                dammaged = "_this call rhs_fnc_wheelDamaged";
            };
            class RHS_TigrHandler {
                seatSwitched = "if(_this select 1 != driver (_this select 0))then{(_this select 1) action ['turnIn',_this select 0]}";
                getIn = "if((_this select 3) in [[0],[1]])then{(_this select 2) action ['turnIn',_this select 0]};";
            };
        };
    };
    class rhs_tigr_vdv: rhs_tigr_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_vdv.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_tigr_vmf: rhs_tigr_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_vmf.paa";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_driver_armored";
        rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']", "['Label', cDecalsTigrRightArmyPlaces, 'Army', [3,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_tigr_msv: rhs_tigr_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_msv.paa";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_driver_armored";
        rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']", "['Label', cDecalsTigrRightArmyPlaces, 'Platoon', 12]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_tigr_vv: rhs_tigr_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_vv.paa";
        faction = "rhs_faction_vv";
        crew = "rhs_msv_driver_armored";
        rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']", "['Label', cDecalsTigrRightArmyPlaces, 'Army', [6,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_tigr_3camo_vdv: rhs_tigr_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_3camo_vdv.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_GAZ233011_3CAMO";
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_tigr\data\rhs_tigr_co_camo.paa",
            "rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_01_co.paa",
            "rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        textureList[] = {};
    };
    class rhs_tigr_3camo_vmf: rhs_tigr_3camo_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_3camo_vmf.paa";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_driver_armored";
        rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']", "['Label', cDecalsTigrRightArmyPlaces, 'Army', [3,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_tigr_3camo_msv: rhs_tigr_3camo_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_3camo_msv.paa";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_driver_armored";
        rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']", "['Label', cDecalsTigrRightArmyPlaces, 'Platoon', 12]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_tigr_3camo_vv: rhs_tigr_3camo_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_3camo_vv.paa";
        faction = "rhs_faction_vv";
        crew = "rhs_msv_driver_armored";
        rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']", "['Label', cDecalsTigrRightArmyPlaces, 'Army', [6,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_tigr_ffv_vdv: rhs_tigr_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_ffv_vdv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_GAZ233011_HATCH";
        scope = 1;
        scopeCurator = 0;
        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret_01 {
                isPersonTurret = 1;
            };
            class CargoTurret_02: CargoTurret_02 {
                isPersonTurret = 1;
            };
        };
    };
    class rhs_tigr_ffv_vmf: rhs_tigr_ffv_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_ffv_vmf.paa";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_driver_armored";
        rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']", "['Label', cDecalsTigrRightArmyPlaces, 'Army', [3,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 1;
    };
    class rhs_tigr_ffv_msv: rhs_tigr_ffv_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_ffv_msv.paa";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_driver_armored";
        rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']", "['Label', cDecalsTigrRightArmyPlaces, 'Platoon', 12]"};
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 1;
    };
    class rhs_tigr_ffv_vv: rhs_tigr_ffv_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_ffv_vv.paa";
        faction = "rhs_faction_vv";
        crew = "rhs_msv_driver_armored";
        rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']", "['Label', cDecalsTigrRightArmyPlaces, 'Army', [6,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 1;
    };
    class rhs_tigr_ffv_3camo_vdv: rhs_tigr_ffv_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_ffv_3camo_vdv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_GAZ233011_HATCH_3CAMO";
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_tigr\data\rhs_tigr_co_camo.paa",
            "rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_01_co.paa",
            "rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
    };
    class rhs_tigr_ffv_3camo_vmf: rhs_tigr_ffv_3camo_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_ffv_3camo_vmf.paa";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_driver_armored";
        rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']", "['Label', cDecalsTigrRightArmyPlaces, 'Army', [3,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_tigr_ffv_3camo_msv: rhs_tigr_ffv_3camo_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_ffv_3camo_msv.paa";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_driver_armored";
        rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']", "['Label', cDecalsTigrRightArmyPlaces, 'Platoon', 12]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_tigr_ffv_3camo_vv: rhs_tigr_ffv_3camo_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_ffv_3camo_vv.paa";
        faction = "rhs_faction_vv";
        crew = "rhs_msv_driver_armored";
        rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']", "['Label', cDecalsTigrRightArmyPlaces, 'Army', [6,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_tigr_sts_vdv: rhs_tigr_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_sts_vdv.paa";
        scope = 2;
        scopeCurator = 2;
        model = "\rhsafrf\addons\rhs_tigr\RHS_Tigr_sts";
        picture = "\rhsafrf\addons\rhs_tigr\data\ico\rhs_tigr_sts_ca.paa";
        dlc = "RHS_AFRF";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_GAZ233014";
        tf_hasLRradio_api = 1;
        crewVulnerable = 1;
        hideProxyInCombat = 0;
        transportSoldier = 5;
        cargoProxyIndexes[] = {1, 2, 3, 4, 5};
        getInProxyOrder[] = {1, 2, 3, 4, 5};
        magazines[] = {"rhs_proxy_ags30_12_mag", "rhs_proxy_pkm_18_mag"};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerType = "rhs_vdv_grenadier";
                memoryPointGun = "weapon_pkm_end";
                gunBeg = "weapon_pkm_end";
                gunEnd = "weapon_pkm_start";
                body = "mainTurret";
                gun = "weapon_pkm";
                animationSourceGun = "weapon_pkm";
                animationSourceStickX = "weapon_pkm_Turret_Inertia";
                animationSourceStickY = "weapon_pkm_Gun_Inertia";
                gunnerLeftHandAnimName = "weapon_pkm";
                gunnerRightHandAnimName = "weapon_pkm";
                gunnerLeftLegAnimName = "weapon_pkm_leg_left";
                gunnerRightLegAnimName = "weapon_pkm_leg_right";
                memoryPointsGetInGunner = "pos gunner";
                memoryPointsGetInGunnerDir = "pos gunner dir";
                gunnerDoor = "Door_Rear";
                usePip = 0;
                outGunnerMayFire = 1;
                forceHideGunner = 0;
                castGunnerShadow = 1;
                viewGunnerInExternal = 1;
                gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                gunnerForceOptics = 0;
                turretInfoType = "rhs_tigr_sts_turret";
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
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "RHS_mag_VOG30_30"
                };
                gunnerAction = "rhs_tigr_gunner_pkm";
                gunnerInAction = "rhs_tigr_gunner_pkm";
                memoryPointGunnerOptics = "gunnerview_pkm";
                selectionFireAnim = "muzzleFlash1";
                ejectDeadGunner = 1;
                soundAttenuationTurret = "HeliAttenuationGunner";
                disableSoundAttenuation = 1;
                minElev = -25;
                maxElev = 60;
                maxhorizontalrotspeed = 0.8;
                maxverticalrotspeed = 0.95;
                stabilizedInAxes = 0;
                class ViewGunner {
                    initAngleX = 5;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1;
                };
                class OpticsIn {
                    class Sight: ViewOptics {
                        gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                        initFov = 0.7;
                        minFov = 0.35;
                        maxFov = 0.7;
                    };
                };
                class Hitpoints {
                    class Hit_PKM_Turret {
                        armor = -100;
                        minimalHit = -0.13;
                        explosionShielding = 0.5;
                        radius = 0.1;
                        name = "Hit_PKM_Turret";
                        visual = "-";
                        armorComponent = "Hit_PKM_Turret";
                        passThrough = 0;
                        isTurret = 1;
                    };
                    class Hit_PKM_Gun {
                        armor = -100;
                        minimalHit = -0.13;
                        explosionShielding = 0.5;
                        radius = 0.1;
                        name = "Hit_PKM_Gun";
                        visual = "-";
                        armorComponent = "Hit_PKM_Gun";
                        passThrough = 0;
                        isGun = 1;
                    };
                };
            };
            class AGS_Turret: MainTurret {
                memoryPointGun = "weapon_ags_end";
                gunBeg = "weapon_ags_end";
                gunEnd = "weapon_ags_start";
                body = "turret_ags";
                gun = "weapon_ags";
                animationSourceBody = "turret_ags";
                animationSourceGun = "weapon_ags";
                selectionFireAnim = "muzzleFlash2";
                dontCreateAi = 1;
                cantCreateAI = 1;
                proxyIndex = 2;
                LODTurnedIn = 1000;
                LODTurnedOut = 1000;
                gunnerLeftHandAnimName = "weapon_ags";
                gunnerRightHandAnimName = "weapon_ags";
                gunnerLeftLegAnimName = "weapon_ags_leg_left";
                gunnerRightLegAnimName = "weapon_ags_leg_right";
                memoryPointsGetInGunner = "pos gunner";
                memoryPointsGetInGunnerDir = "pos gunner dir";
                initTurn = -30;
                weapons[] = {"RHS_weap_AGS30_tigr"};
                magazines[] = {
                    "RHS_mag_VOG30_30",
                    "RHS_mag_VOG30_30",
                    "RHS_mag_VOG30_30",
                    "RHS_mag_VOG30_30",
                    "RHS_mag_VOG30_30",
                    "RHS_mag_VOG30_30",
                    "RHS_mag_VOG30_30",
                    "RHS_mag_VOG30_30",
                    "RHS_mag_VOG30_30",
                    "RHS_mag_VOG30_30",
                    "RHS_mag_VOG30_30",
                    "RHS_mag_VOG30_30",
                    "rhs_mag_762x54mm_100"
                };
                gunnerAction = "rhs_tigr_gunner_ags";
                gunnerInAction = "rhs_tigr_gunner_ags";
                memoryPointGunnerOptics = "gunnerview_ags";
                discreteDistance[] = {};
                discreteDistanceInitIndex = 0;
                class OpticsIn {
                    class Sight: ViewOptics {
                        hitpoint = "Hit_AGS_Optic";
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_heavyweapons\data\optika_AGS30";
                        initFov = 0.25;
                        minFov = 0.25;
                        maxFov = 0.25;
                    };
                };
                class Hitpoints {
                    class Hit_AGS_Turret {
                        armor = -100;
                        minimalHit = -0.13;
                        explosionShielding = 0.5;
                        radius = 0.1;
                        name = "Hit_AGS_Turret";
                        visual = "-";
                        armorComponent = "Hit_AGS_Turret";
                        passThrough = 0;
                        isTurret = 1;
                    };
                    class Hit_AGS_Gun {
                        armor = -100;
                        minimalHit = -0.13;
                        explosionShielding = 0.5;
                        radius = 0.1;
                        name = "Hit_AGS_Gun";
                        visual = "-";
                        armorComponent = "Hit_AGS_Gun";
                        passThrough = 0;
                        isGun = 1;
                    };
                    class Hit_AGS_Optic {
                        armor = -30;
                        minimalHit = -0.13;
                        explosionShielding = 0.5;
                        radius = 0.1;
                        name = "Hit_AGS_Optic";
                        visual = "-";
                        armorComponent = "Hit_AGS_Optic";
                        passThrough = 0;
                    };
                };
            };
        };
        class AnimationSources: AnimationSources {
            class weapon_pkm_reload {
                source = "reload";
                weapon = "rhs_weap_pkm_tigr";
            };
            class weapon_pkm_ReloadMagazine: weapon_pkm_reload {
                source = "reloadmagazine";
            };
            class weapon_pkm_ammoRandom: weapon_pkm_reload {
                source = "ammorandom";
            };
            class Revolving: weapon_pkm_reload {
                source = "revolving";
            };
            class weapon_ags_reload {
                source = "reload";
                weapon = "RHS_weap_AGS30_tigr";
            };
            class weapon_ags_ReloadMagazine: weapon_ags_reload {
                source = "reloadmagazine";
            };
            class weapon_ags_ammoRandom: weapon_ags_reload {
                source = "ammorandom";
            };
            class rpg26_hide_1 {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class rpg26_hide_2: rpg26_hide_1 {};
            class rpg26_hide_3: rpg26_hide_1 {};
            class rpg26_hide_4: rpg26_hide_1 {};
            class turret_correct: rpg26_hide_1 {
                animPeriod = 1.8;
            };
            class hatch_gunner: rpg26_hide_1 {};
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                init = "_this call rhs_fnc_tigr_init; (_this select 0) lockTurret [[1],true]; _this call rhs_fnc_tigr_sts_inventory_eh;";
                getIn = "_this call rhs_fnc_tigr_sts_turret_getin_eh";
                getOut = "_this spawn rhs_fnc_tigr_sts_turret_getout_eh";
                seatSwitched = "_this call rhs_fnc_tigr_sts_turret_seat_eh";
                containerClosed = "_this call rhs_fnc_tigr_sts_inventory_eh;";
                reloaded = "_this call rhs_fnc_tigr_sts_reloaded_eh";
            };
            class RHS_TigrHandler {};
        };
    };
    class rhs_tigr_sts_vmf: rhs_tigr_sts_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_sts_vmf.paa";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_driver_armored";
        rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']", "['Label', cDecalsTigrRightArmyPlaces, 'Army', [3,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerType = "rhs_vmf_flora_grenadier";
            };
            class AGS_Turret: AGS_Turret {
                gunnerType = "rhs_vmf_flora_grenadier";
            };
        };
    };
    class rhs_tigr_sts_msv: rhs_tigr_sts_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_sts_msv.paa";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_driver_armored";
        rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']", "['Label', cDecalsTigrRightArmyPlaces, 'Platoon', 12]"};
        author = "$STR_RHS_AUTHOR_FULL";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerType = "rhs_msv_grenadier";
            };
            class AGS_Turret: AGS_Turret {
                gunnerType = "rhs_msv_grenadier";
            };
        };
    };
    class rhs_tigr_sts_vv: rhs_tigr_sts_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_sts_vv.paa";
        faction = "rhs_faction_vv";
        crew = "rhs_msv_driver_armored";
        rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']", "['Label', cDecalsTigrRightArmyPlaces, 'Army', [6,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerType = "rhs_msv_grenadier";
            };
            class AGS_Turret: AGS_Turret {
                gunnerType = "rhs_msv_grenadier";
            };
        };
    };
    class rhs_tigr_sts_3camo_vdv: rhs_tigr_sts_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_sts_3camo_vdv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_GAZ233014_3CAMO";
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_tigr\data\rhs_tigr_co_camo.paa",
            "rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_01_co.paa",
            "rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa",
            "rhsafrf\addons\rhs_tigr\sts_proxies\data\tigr_ext_ads_co.paa",
            "rhsafrf\addons\rhs_tigr\m_proxies\data\tigr_m_adds_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
    };
    class rhs_tigr_sts_3camo_vmf: rhs_tigr_sts_3camo_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_sts_3camo_vmf.paa";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_driver_armored";
        rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']", "['Label', cDecalsTigrRightArmyPlaces, 'Army', [3,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerType = "rhs_vmf_flora_grenadier";
            };
            class AGS_Turret: AGS_Turret {
                gunnerType = "rhs_vmf_flora_grenadier";
            };
        };
    };
    class rhs_tigr_sts_3camo_msv: rhs_tigr_sts_3camo_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_sts_3camo_msv.paa";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_driver_armored";
        rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']", "['Label', cDecalsTigrRightArmyPlaces, 'Platoon', 12]"};
        author = "$STR_RHS_AUTHOR_FULL";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerType = "rhs_msv_grenadier";
            };
            class AGS_Turret: AGS_Turret {
                gunnerType = "rhs_msv_grenadier";
            };
        };
    };
    class rhs_tigr_sts_3camo_vv: rhs_tigr_sts_3camo_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_sts_3camo_vv.paa";
        faction = "rhs_faction_vv";
        crew = "rhs_msv_driver_armored";
        rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']", "['Label', cDecalsTigrRightArmyPlaces, 'Army', [6,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerType = "rhs_msv_grenadier";
            };
            class AGS_Turret: AGS_Turret {
                gunnerType = "rhs_msv_grenadier";
            };
        };
    };
    class rhs_tigr_m_vdv: rhs_tigr_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_m_vdv.paa";
        scope = 2;
        scopeCurator = 2;
        model = "\rhsafrf\addons\rhs_tigr\RHS_TigrM";
        Icon = "\rhsafrf\addons\rhs_tigr\data\map_ico\RHS_icomap_TigrM_ca.paa";
        picture = "\rhsafrf\addons\rhs_tigr\data\ico\rhs_tigr_m_ca.paa";
        dlc = "RHS_AFRF";
        author = "$STR_RHS_AUTHOR_FULL";
        normalSpeedForwardCoef = 0.9;
        turnCoef = 3;
        terrainCoef = 0.5;
        waterSpeedFactor = 0.4;
        simulation = "carx";
        dampersBumpCoef = 3;
        precision = 9;
        brakeDistance = 3;
        acceleration = 15;
        fireResistance = 5;
        maxSpeed = 125;
        fuelCapacity = 32.5;
        RHS_fuelCapacity = 240;
        wheelCircumference = 2.45;
        brakeIdleSpeed = 1;
        maxFordingDepth = 0;
        waterResistance = 1;
        waterLeakiness = 10;
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -4.935,
                "N",
                0,
                "D1",
                5.714,
                "D2",
                3.083,
                "D3",
                1.939,
                "D4",
                1.228,
                "D5",
                1
            };
            TransmissionRatios[] = {"High", 3.835};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        changeGearMinEffectivity[] = {0.95, 0, 0.95, 0.95, 0.95, 0.95, 0.95};
        switchTime = 0.51;
        latency = 1;
        differentialType = "all_limited";
        frontRearSplit = 0.5;
        frontBias = 1.5;
        rearBias = 1.5;
        centreBias = 1.3;
        clutchStrength = 65;
        transmissionLosses = 9;
        dampingRateFullThrottle = 0.08;
        dampingRateZeroThrottleClutchEngaged = 1.35;
        dampingRateZeroThrottleClutchDisengaged = 0.35;
        torqueCurve[] = {
            {0.259259, 0.326531},
            {0.37037, 0.653061},
            {0.444444, 0.929252},
            {0.518519, 1},
            {0.62963, 1},
            {0.740741, 0.963265},
            {0.851852, 0.884354},
            {1.18519, 0}
        };
        enginePower = 160;
        peakTorque = 1470;
        maxOmega = 282.74;
        minOmega = 65;
        idleRPM = 700;
        redRPM = 2700;
        engineLosses = 11;
        thrustDelay = 0.8;
        engineBrakeCoef = 0.3;
        antiRollbarForceCoef = 3.5;
        antiRollbarForceLimit = 4.5;
        antiRollbarSpeedMin = 40;
        antiRollbarSpeedMax = 120;
        class Wheels {
            class LF {
                boneName = "wheel_1_1_damper";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                suspForceAppPointOffset = "wheel_1_1_axis";
                tireForceAppPointOffset = "wheel_1_1_axis";
                side = "left";
                suspTravelDirection[] = {-0.125, -1, 0};
                steering = 1;
                width = 0.32;
                mass = 60;
                MOI = 10;
                dampingRate = 3.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 12000;
                maxHandBrakeTorque = 0;
                maxCompression = 0.13;
                maxDroop = 0.11;
                sprungMass = -1;
                springStrength = 135000;
                springDamperRate = 12471;
                longitudinalStiffnessPerUnitGravity = 4800;
                latStiffX = 2.5;
                latStiffY = 18;
                frictionVsSlipGraph[] = {{0.17, 0.95}, {0.4, 0.85}, {1, 0.75}};
            };
            class LR: LF {
                boneName = "wheel_1_2_damper";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                suspForceAppPointOffset = "wheel_1_2_axis";
                tireForceAppPointOffset = "wheel_1_2_axis";
                steering = 0;
                maxBrakeTorque = 15000;
                maxHandBrakeTorque = 20000;
            };
            class RF: LF {
                boneName = "wheel_2_1_damper";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                suspForceAppPointOffset = "wheel_2_1_axis";
                tireForceAppPointOffset = "wheel_2_1_axis";
                side = "right";
                suspTravelDirection[] = {0.125, -1, 0};
                steering = 1;
            };
            class RR: RF {
                boneName = "wheel_2_2_damper";
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                suspForceAppPointOffset = "wheel_2_2_axis";
                tireForceAppPointOffset = "wheel_2_2_axis";
                steering = 0;
                maxBrakeTorque = 15000;
                maxHandBrakeTorque = 20000;
            };
        };
        displayName = "$STR_RHS_GAZ233114";
        weapons[] = {"TruckHorn", "rhs_weap_902b"};
        magazines[] = {"rhs_mag_3d17_4"};
        tf_hasLRradio_api = 1;
        hideProxyInCombat = 0;
        enableManualFire = 0;
        forceHideDriver = 1;
        transportSoldier = 7;
        cargoProxyIndexes[] = {1, 2, 3, 4, 5, 6, 7};
        getInProxyOrder[] = {8, 1, 2, 3, 4, 5, 6, 7};
        class AnimationSources: AnimationSources {
            class smokecap_revolving_source {
                source = "revolving";
                weapon = "rhs_weap_902b";
            };
            class hatch_gunner_h {
                source = "door";
                animPeriod = 0.8;
                initPhase = 1;
            };
        };
        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret {
                gunnerType = "rhs_vdv_machinegunner";
                dontCreateAi = 0;
                primaryGunner = 1;
                gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
                gunnerInAction = "vehicle_passenger_stand_1_passenger_flatground_4";
                animationSourceHatch = "Hatch_Gunner";
                enabledByAnimationSource = "hatch_gunner_h";
                isPersonTurret = 1;
                allowLauncherOut = 1;
                gunnerGetInAction = "GetInMantis";
                gunnerGetOutAction = "GetOutMantis";
                rhs_hatch_control = 1;
                memoryPointsGetInGunner = "pos cargo";
                memoryPointsGetInGunnerDir = "pos cargo dir";
                gunnerName = "Gunner";
                gunnerCompartments = "Compartment1";
                gunnerDoor = "Door_Rear";
                memoryPointGunnerOptics = "";
                gunnerForceOptics = 0;
                canHideGunner = 1;
                LODTurnedIn = 1000;
                LODTurnedOut = 0;
                proxyIndex = 8;
                maxElev = 45;
                minElev = -35;
                maxTurn = 75;
                minTurn = -75;
                inGunnerMayFire = 1;
                class TurnIn {
                    limitsArrayTop[] = {{0, 0}, {0, 0}};
                    limitsArrayBottom[] = {{0, 0}, {0, 0}};
                };
                class TurnOut {
                    limitsArrayTop[] = {{65, -179.9}, {65, 179.9}};
                    limitsArrayBottom[] = {{-45, -179.9}, {-45, 179.9}};
                };
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                init = "_this call rhs_fnc_tigr_init;(_this select 0) animateDoor ['hatch_gunner_h',1]";
                getIn = "_this call rhs_fnc_tigrm_turret_getin_eh";
                seatSwitched = "_this call rhs_fnc_tigrm_turret_seat_eh";
            };
            class RHS_TigrHandler {};
        };
    };
    class rhs_tigr_m_vmf: rhs_tigr_m_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_m_vmf.paa";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_driver_armored";
        rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']", "['Label', cDecalsTigrRightArmyPlaces, 'Army', [3,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = "rhs_vmf_flora_machinegunner";
            };
        };
    };
    class rhs_tigr_m_msv: rhs_tigr_m_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_m_msv.paa";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_driver_armored";
        rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']", "['Label', cDecalsTigrRightArmyPlaces, 'Platoon', 12]"};
        author = "$STR_RHS_AUTHOR_FULL";
        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = "rhs_msv_machinegunner";
            };
        };
    };
    class rhs_tigr_m_vv: rhs_tigr_m_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_m_vv.paa";
        faction = "rhs_faction_vv";
        crew = "rhs_msv_driver_armored";
        rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']", "['Label', cDecalsTigrRightArmyPlaces, 'Army', [6,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = "rhs_msv_machinegunner";
            };
        };
    };
    class rhs_tigr_m_3camo_vdv: rhs_tigr_m_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_m_3camo_vdv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_GAZ233114_3CAMO";
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_tigr\data\rhs_tigr_co_camo.paa",
            "rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_01_co.paa",
            "rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa",
            "rhsafrf\addons\rhs_tigr\sts_proxies\data\tigr_ext_ads_co.paa",
            "rhsafrf\addons\rhs_tigr\m_proxies\data\tigr_m_adds_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
    };
    class rhs_tigr_m_3camo_vmf: rhs_tigr_m_3camo_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_m_3camo_vmf.paa";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_driver_armored";
        rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']", "['Label', cDecalsTigrRightArmyPlaces, 'Army', [3,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = "rhs_vmf_flora_machinegunner";
            };
        };
    };
    class rhs_tigr_m_3camo_msv: rhs_tigr_m_3camo_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_m_3camo_msv.paa";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_driver_armored";
        rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']", "['Label', cDecalsTigrRightArmyPlaces, 'Platoon', 12]"};
        author = "$STR_RHS_AUTHOR_FULL";
        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = "rhs_msv_machinegunner";
            };
        };
    };
    class rhs_tigr_m_3camo_vv: rhs_tigr_m_3camo_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_m_3camo_vv.paa";
        faction = "rhs_faction_vv";
        crew = "rhs_msv_driver_armored";
        rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']", "['Label', cDecalsTigrRightArmyPlaces, 'Army', [6,1]]"};
        author = "$STR_RHS_AUTHOR_FULL";
        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = "rhs_msv_machinegunner";
            };
        };
    };
};
