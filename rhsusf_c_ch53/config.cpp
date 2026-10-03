class CfgPatches {
    class rhsusf_c_ch53 {
        weapons[] = {};
        requiredVersion = "REQUIRED_VERSION";
        requiredAddons[] = {"rhsusf_main", "RHS_US_A2_AirImport"};
        units[] = {
            "rhsusf_CH53E_USMC",
            "rhsusf_CH53E_USMC_D",
            "rhsusf_CH53E_USMC_GAU21",
            "rhsusf_CH53E_USMC_GAU21_D",
            "rhsusf_CH53e_USMC_cargo",
            "rhsusf_CH53e_USMC_D_cargo"
        };
        name = "CH-53 Helicopter";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class RHS_Effects_Helicopter_Hull_Destruction;
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        RHS_Ch53_Pilot = "RHS_Ch53_Pilot";
        RHS_Ch53_Gunner_Ramp = "RHS_Ch53_Gunner_Ramp";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class RHS_Ch53_Pilot: Crew {
            file = "rhsusf\addons\rhsusf_c_ch53\anims\rhs_CH53_Pilot.rtm";
            interpolateTo[] = {"RHS_KIA_UH60M_Pilot", 1};
        };
        class RHS_Ch53_Gunner_Ramp: Crew {
            file = "rhsusf\addons\rhsusf_c_ch53\anims\rhs_CH53_Gunner_Ramp.rtm";
            interpolateTo[] = {"KIA_RHS_Ch53_Gunner_Ramp", 1};
        };
        class KIA_RHS_Ch53_Gunner_Ramp: DefaultDie {
            actions = "DeadActions";
            file = "rhsusf\addons\rhsusf_c_ch53\anims\kia_rhs_CH53_Gunner_Ramp.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 2};
        };
    };
};
class CfgFunctions {
    class RHSUSF {
        tag = "RHSUSF";
        class functions {
            class CH53_init {
                file = "\rhsusf\addons\rhsusf_c_ch53\scripts\rhs_ch53_init.sqf";
                description = "CH-53 Init";
            };
            class CH53_Fold {
                file = "\rhsusf\addons\rhsusf_c_ch53\scripts\ch53_fold.sqf";
                description = "CH-53 folding rotors handler";
            };
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
class DefaultVehicleSystemsDisplayManagerLeft {
    class components;
};
class DefaultVehicleSystemsDisplayManagerRight {
    class components;
};
class CfgAnimationSourceSounds {
    class CH53_Rampsound {
        class DoorMovement {
            loop = 0;
            terminate = 1;
            trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
            sound0[] = {
                "rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_ramp",
                1,
                1,
                60
            };
            sound[] = {"sound0", 1};
        };
        class DoorMovementDone1 {
            loop = 0;
            terminate = 0;
            trigger = "direction * (phase factor[0.9,0.99])";
            sound0[] = {
                "A3\Sounds_F\structures\doors\ServoDoors\ServoDoorsSlam",
                1,
                1,
                60
            };
            sound[] = {"sound0", 1};
        };
        class DoorMovementDone2 {
            loop = 0;
            terminate = 0;
            trigger = "(1 - direction) * (phase factor[0.1,0.05])";
            sound0[] = {
                "A3\Sounds_F\structures\doors\ServoDoors\ServoDoorsSlam",
                1,
                1,
                60
            };
            sound[] = {"sound0", 1};
        };
        class SlamTheDoor {
            loop = 0;
            terminate = 0;
            trigger = "(1 - direction) * (phase factor[0.02,0.01])";
            sound0[] = {
                "A3\Sounds_F\structures\doors\ServoDoors\ServoDoorsSlam",
                1,
                1,
                60
            };
            sound[] = {"sound0", 1};
        };
    };
};
class CfgVehicles {
    class Air;
    class Helicopter: Air {
        class HitPoints;
    };
    class Helicopter_Base_F: Helicopter {
        class Turrets;
        class HitPoints: HitPoints {
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
            class HitGlass5;
            class HitGlass6;
            class HitHull;
            class HitEngine;
            class HitAvionics;
            class HitVRotor;
            class HitHRotor;
            class HitFuel;
        };
        class Eventhandlers;
        class Components;
    };
    class Helicopter_Base_H: Helicopter_Base_F {
        class RotorLibHelicopterProperties;
        class ViewOptics;
        class Turrets: Turrets {
            class MainTurret;
        };
        class AnimationSources;
        class Components;
    };
    class rhsusf_CH53E_USMC: Helicopter_Base_H {
        rhs_decalParameters[] = {"['Number', cCH53NumberPlaces, _typeNum,_randomNum]"};
        rhs_paraRamp = "ramp";
        rhs_paraOff = -15;
        rhs_rampAnim = "ramp_bottom";
        rhs_gearAnim = "Gear_Nose_1";
        rhs_paraScript = "rhs_fnc_vehPara";
        rhs_hasNoRadar = 1;
        scope = 2;
        model = "\rhsusf\addons\rhsusf_ch53\rhsusf_ch53_e.p3d";
        displayName = "CH-53E";
        expansion = 3;
        dlc = "RHS_USAF";
        mapSize = 40;
        Icon = "\rhsusf\addons\rhsusf_ch53\data\ui\ch53_icon_ca.paa";
        Picture = "\rhsusf\addons\rhsusf_ch53\data\ui\ch53_picture_ca.paa";
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_CH53E_USMC.paa";
        irTarget = 1;
        irTargetSize = 1.2;
        visualTarget = 1;
        visualTargetSize = 1.3;
        radarTarget = 1;
        radarTargetSize = 1.12;
        radarType = 4;
        LockDetectionSystem = "8";
        incomingMissileDetectionSystem = "2 + 8 + 16";
        LESH_canBeTowed = 1;
        LESH_towFromFront = 1;
        LESH_AxisOffsetTarget[] = {0, 9.8, 0.9};
        LESH_WheelOffset[] = {0, -3.6};
        side = 1;
        faction = "rhs_faction_usmc_wd";
        vehicleClass = "rhs_vehclass_helicopter";
        crew = "rhsusf_usmc_marpat_wd_helipilot";
        typicalCargo[] = {"rhsusf_usmc_marpat_wd_helicrew"};
        author = "Rocket, RHS";
        destrType = "DestructWreck";
        availableForSupportTypes[] = {"Drop", "Transport"};
        transportSoldier = 24;
        maxSpeed = 315;
        accuracy = 0.5;
        usePreciseGetInAction = 0;
        memoryPointsGetInDriverPrecise = "pos driver";
        memoryPointsGetInCargoPrecise[] = {"pos cargo"};
        preciseGetInOut = 0;
        cargoPreciseGetInOut[] = {0};
        GetInAction = "GetInLow";
        getOutAction = "GetOutLow";
        cargoGetInAction[] = {"GetInLow"};
        cargoGetOutAction[] = {"GetOutLow"};
        driverDoor = "";
        cargoDoors[] = {};
        castCargoShadow = 1;
        driverAction = "RHS_CH53_Pilot";
        cargoAction[] = {"ChopperHeavy_LP_Static_H"};
        maximumLoad = 14500;
        cargoCanEject = 1;
        driverCanEject = 0;
        hideWeaponsCargo = 1;
        cost = 10000000;
        fuelCapacity = 2500;
        fuelConsumptionRate = 0.138;
        extCameraPosition[] = {0, 5, -30};
        threat[] = {0.3, 0.2, 0.3};
        maxFordingDepth = 1.65;
        waterLeakiness = 0.2;
        liftForceCoef = 1.5;
        bodyFrictionCoef = 1;
        cyclicAsideForceCoef = 0.5;
        cyclicForwardForceCoef = 0.3;
        backRotorForceCoef = 0.3;
        mainBladeRadius = 6;
        tailBladeRadius = 1;
        tailBladeCenter = "mala osa";
        mainBladeCenter = "velka osa";
        maxOmega = 2000;
        class Wheels {
            disableWheelsWhenDestroyed = 1;
            class Wheel_1 {
                steering = 1;
                side = "left";
                boneName = "damper_nose_piston";
                suspForceAppPointOffset = "wheel_nose_axis";
                tireForceAppPointOffset = "wheel_nose_axis";
                center = "wheel_nose_axis";
                boundary = "wheel_nose_bound";
                suspTravelDirection[] = {0, -1, 0};
                width = 0.637;
                mass = 15;
                MOI = 0.768;
                dampingRate = 0.25;
                dampingRateDamaged = 2;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 2000;
                maxHandBrakeTorque = 0;
                maxCompression = 1.05;
                maxDroop = 0.05;
                sprungMass = 3000;
                springStrength = 12000;
                springDamperRate = 1280;
                longitudinalStiffnessPerUnitGravity = 5000;
                latStiffX = 2.5;
                latStiffY = 18;
                frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1, 1}};
            };
            class Wheel_2: Wheel_1 {
                steering = 0;
                side = "left";
                boneName = "damper_left_piston";
                suspForceAppPointOffset = "wheel_left_axis";
                tireForceAppPointOffset = "wheel_left_axis";
                center = "wheel_left_axis";
                boundary = "wheel_left_bound";
                maxCompression = 1.05;
                maxDroop = 0.05;
            };
            class Wheel_3: Wheel_2 {
                side = "right";
                boneName = "damper_right_piston";
                suspForceAppPointOffset = "wheel_right_axis";
                tireForceAppPointOffset = "wheel_right_axis";
                center = "wheel_right_axis";
                boundary = "wheel_right_bound";
            };
        };
        gearRetracting = 1;
        driveOnComponent[] = {"wheels"};
        gearUpTime = 3;
        gearDownTime = 3;
        hiddenSelections[] = {"camo", "camo1", "n1", "n2"};
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_ch53\data\ch53_1_co.paa",
            "rhsusf\addons\rhsusf_ch53\data\ch53_acc_co.paa",
            "rhsusf\addons\rhsusf_decals\Data\Numbers\USMCBlackShadow\5_ca.paa",
            "rhsusf\addons\rhsusf_decals\Data\Numbers\USMCBlackShadow\5_ca.paa"
        };
        class textureSources {
            class standard {
                displayName = "Standard";
                textures[] = {"rhsusf\addons\rhsusf_ch53\data\ch53_1_co.paa", "rhsusf\addons\rhsusf_ch53\data\ch53_acc_co.paa"};
                factions[] = {"rhs_faction_usmc_wd", "rhs_faction_usmc_d"};
            };
        };
        textureList[] = {};
        selectionHRotorStill = "velka vrtule staticka";
        selectionHRotorMove = "velka vrtule blur";
        selectionVRotorStill = "mala vrtule staticka";
        selectionVRotorMove = "mala vrtule blur";
        insideSoundCoef = 0.2;
        attenuationEffectType = "HeliAttenuation";
        emptySound[] = {"", 0, 1};
        soundGeneralCollision1[] = {
            "A3\Sounds_F\vehicles\crashes\Helis\Heli_coll_default_int_1",
            1,
            1,
            100
        };
        soundGeneralCollision2[] = {
            "A3\Sounds_F\vehicles\crashes\Helis\Heli_coll_default_int_2",
            1,
            1,
            100
        };
        soundGeneralCollision3[] = {
            "A3\Sounds_F\vehicles\crashes\Helis\Heli_coll_default_int_3",
            1,
            1,
            100
        };
        soundCrashes[] = {
            "soundGeneralCollision1",
            0.33,
            "soundGeneralCollision2",
            0.33,
            "soundGeneralCollision3",
            0.33
        };
        soundLandCrashes[] = {"emptySound", 0};
        soundBuildingCrash[] = {
            "soundGeneralCollision1",
            1,
            "soundGeneralCollision2",
            1,
            "soundGeneralCollision3",
            1
        };
        soundArmorCrash[] = {
            "soundGeneralCollision1",
            1,
            "soundGeneralCollision2",
            1,
            "soundGeneralCollision3",
            1
        };
        soundWoodCrash[] = {
            "soundGeneralCollision1",
            1,
            "soundGeneralCollision2",
            1,
            "soundGeneralCollision3",
            1
        };
        soundBushCollision1[] = {
            "A3\Sounds_F\vehicles\crashes\Helis\Heli_coll_bush_int_1",
            1,
            1,
            100
        };
        soundBushCollision2[] = {
            "A3\Sounds_F\vehicles\crashes\Helis\Heli_coll_bush_int_2",
            1,
            1,
            100
        };
        soundBushCollision3[] = {
            "A3\Sounds_F\vehicles\crashes\Helis\Heli_coll_bush_int_3",
            1,
            1,
            100
        };
        soundBushCrash[] = {
            "soundBushCollision1",
            0.33,
            "soundBushCollision2",
            0.33,
            "soundBushCollision3",
            0.33
        };
        soundWaterCollision1[] = {
            "A3\Sounds_F\vehicles\crashes\Helis\Heli_coll_water_ext_1",
            1,
            1,
            100
        };
        soundWaterCollision2[] = {
            "A3\Sounds_F\vehicles\crashes\Helis\Heli_coll_water_ext_2",
            1,
            1,
            100
        };
        soundWaterCrashes[] = {
            "soundWaterCollision1",
            0.5,
            "soundWaterCollision2",
            0.5
        };
        soundGetIn[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_02\open", 1, 1};
        soundGetOut[] = {
            "A3\Sounds_F\vehicles\air\Heli_Transport_02\close",
            1,
            1,
            50
        };
        soundDammage[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\dws_warning_beeps",
            10,
            1,
            20
        };
        soundEngineOnInt[] = {"rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_01_int_start", 2, 1};
        soundEngineOnExt[] = {
            "rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_01_ext_start",
            2,
            1,
            800
        };
        soundEngineOffInt[] = {"rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_01_int_stop", 2, 1};
        soundEngineOffExt[] = {
            "rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_01_ext_stop",
            2,
            1,
            800
        };
        soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1", 1, 1};
        soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 1, 1.5};
        occludeSoundsWhenIn = 0.56234133;
        obstructSoundsWhenIn = 0.31622776;
        rotorDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\Heli_damage_rotor_int_1", 1, 1};
        rotorDamageOut[] = {
            "A3\Sounds_F\vehicles\air\noises\Heli_damage_rotor_ext_1",
            2.5118864,
            1,
            300
        };
        rotorDamage[] = {"rotorDamageInt", "rotorDamageOut"};
        tailDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\Heli_damage_tail", 1, 1};
        tailDamageOut[] = {
            "A3\Sounds_F\vehicles\air\noises\Heli_damage_tail",
            1,
            1,
            300
        };
        tailDamage[] = {"tailDamageInt", "tailDamageOut"};
        landingSoundInt0[] = {
            "A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int1",
            1,
            1,
            100
        };
        landingSoundInt1[] = {
            "A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int2",
            1,
            1,
            100
        };
        landingSoundInt[] = {"landingSoundInt0", 0.5, "landingSoundInt1", 0.5};
        landingSoundOut0[] = {
            "A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",
            1.7782794,
            1,
            100
        };
        landingSoundOut1[] = {
            "A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",
            1.7782794,
            1,
            100
        };
        landingSoundOut[] = {"landingSoundOut0", 0.5, "landingSoundOut1", 0.5};
        slingCargoAttach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT", 1, 1};
        slingCargoAttach1[] = {
            "A3\Sounds_F\vehicles\air\noises\SL_1hookLock",
            1,
            1,
            80
        };
        slingCargoAttach[] = {"slingCargoAttach0", "slingCargoAttach1"};
        slingCargoDetach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT", 1, 1};
        slingCargoDetach1[] = {
            "A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",
            1,
            1,
            80
        };
        slingCargoDetach[] = {"slingCargoDetach0", "slingCargoDetach1"};
        slingCargoDetachAir0[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int", 1, 1};
        slingCargoDetachAir1[] = {
            "A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",
            1,
            1,
            80
        };
        slingCargoDetachAir[] = {"slingCargoDetach0", "slingCargoDetach1"};
        slingCargoRopeBreak0[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int", 1, 1};
        slingCargoRopeBreak1[] = {
            "A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",
            1,
            1,
            80
        };
        slingCargoRopeBreak[] = {"slingCargoDetach0", "slingCargoDetach1"};
        gearUpExt[] = {
            "rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_01_gear",
            1,
            1,
            1000
        };
        gearUpInt[] = {
            "rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_01_gear",
            1,
            1,
            100
        };
        gearUp[] = {"gearUpInt", "gearUpExt"};
        gearDownInt[] = {
            "rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_01_gear",
            1,
            1,
            100
        };
        gearDownExt[] = {
            "rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_01_gear",
            1,
            1,
            1000
        };
        gearDown[] = {"gearDownInt", "gearDownExt"};
        class Sounds {
            class EngineExt {
                sound[] = {"A3\Sounds_F\dummysound", 1.4125376, 1, 800};
                frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
                volume = "camPos*((rotorSpeed-0.72)*4)";
            };
            class RotorExt {
                sound[] = {
                    "rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_01_ext_rotor",
                    1,
                    1,
                    3500
                };
                frequency = "rotorSpeed / (1-rotorThrust/5)*0.8";
                volume = "camPos*((rotorSpeed-0.72)*6)";
                cone[] = {1.6, 3.14, 1.6, 0.95};
            };
            class RotorNoiseExt {
                sound[] = {"A3\Sounds_F\dummysound", 1, 1, 400};
                frequency = 1;
                volume = "camPos * (rotorThrust factor [0.7, 0.9])";
                cone[] = {0.7, 1.3, 1, 0};
            };
            class EngineInt {
                sound[] = {"rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_01_int_engine", 1, 1};
                frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
                volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
            };
            class RotorInt {
                sound[] = {"A3\Sounds_F\dummysound", 0.5011872, 1};
                frequency = "rotorSpeed * (1-rotorThrust/5) * 1.2";
                volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)*0.9";
            };
            class TransmissionDamageExt_phase1 {
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\Heli_damage_transmission_ext_1",
                    1,
                    1,
                    150
                };
                frequency = "0.66 + rotorSpeed / 3";
                volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
            };
            class TransmissionDamageExt_phase2 {
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\Heli_damage_transmission_ext_2",
                    1,
                    1,
                    150
                };
                frequency = "0.66 + rotorSpeed / 3";
                volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
            };
            class TransmissionDamageInt_phase1 {
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\Heli_damage_transmission_int_1",
                    1,
                    1,
                    150
                };
                frequency = "0.66 + rotorSpeed / 3";
                volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
            };
            class TransmissionDamageInt_phase2 {
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\Heli_damage_transmission_int_2",
                    1,
                    1,
                    150
                };
                frequency = "0.66 + rotorSpeed / 3";
                volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
            };
            class damageAlarmInt {
                sound[] = {"A3\Sounds_F\vehicles\air\noises\Heli_alarm_bluefor", 0.31622776, 1};
                frequency = 1;
                volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
            };
            class damageAlarmExt {
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\Heli_alarm_bluefor",
                    0.2238721,
                    1,
                    20
                };
                frequency = 1;
                volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
            };
            class rotorLowAlarmInt {
                sound[] = {"A3\Sounds_F\vehicles\air\noises\Heli_alarm_rotor_low", 0.31622776, 1};
                frequency = 1;
                volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
            };
            class rotorLowAlarmExt {
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\Heli_alarm_rotor_low",
                    0.2238721,
                    1,
                    20
                };
                frequency = 1;
                volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
            };
            class scrubLandInt {
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\wheelsInt",
                    1,
                    1,
                    100
                };
                frequency = 1;
                volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
            };
            class scrubLandExt {
                sound[] = {"A3\Sounds_F\dummysound", 1, 1, 100};
                frequency = 1;
                volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
            };
            class scrubBuildingInt {
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\wheelsInt",
                    1,
                    1,
                    100
                };
                frequency = 1;
                volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
            };
            class scrubBuildingExt {
                sound[] = {"A3\Sounds_F\dummysound", 1, 1, 100};
                frequency = 1;
                volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
            };
            class scrubTreeInt {
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
                    1,
                    1,
                    100
                };
                frequency = 1;
                volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
            };
            class scrubTreeExt {
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
                    1,
                    1,
                    100
                };
                frequency = 1;
                volume = "camPos * ((scrubTree) factor [0, 0.01])";
            };
            class RainExt {
                sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", 1, 1, 100};
                frequency = 1;
                volume = "camPos * (rain - rotorSpeed/2) * 2";
            };
            class RainInt {
                sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int", 1, 1, 100};
                frequency = 1;
                volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
            };
            class SlingLoadDownExt {
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
                    1,
                    1,
                    500
                };
                frequency = 1;
                volume = "camPos*(slingLoadActive factor [0,-1])";
            };
            class SlingLoadUpExt {
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
                    1,
                    1,
                    500
                };
                frequency = 1;
                volume = "camPos*(slingLoadActive factor [0,1])";
            };
            class SlingLoadDownInt {
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
                    1,
                    1,
                    500
                };
                frequency = 1;
                volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
            };
            class SlingLoadUpInt {
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
                    1,
                    1,
                    500
                };
                frequency = 1;
                volume = "(1-camPos)*(slingLoadActive factor [0,1])";
            };
            class WindInt {
                sound[] = {"A3\Sounds_F\dummysound", 0.70794576, 1, 50};
                frequency = 1;
                volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
            };
            class GStress {
                sound[] = {
                    "A3\Sounds_F\vehicles\noises\vehicle_stress2d",
                    1.1220185,
                    1,
                    50
                };
                frequency = 1;
                volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
            };
            class SpeedStress {
                sound[] = {
                    "A3\Sounds_F\vehicles\noises\vehicle_stress3",
                    1,
                    1,
                    50
                };
                frequency = 1;
                volume = "(1-camPos)*(speed factor[40,80])";
            };
        };
        class SoundsExt {
            class SoundEvents {};
            class Sounds {
                class EngineExt {
                    sound[] = {"A3\Sounds_F\dummysound", 1.4125376, 1, 800};
                    frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
                    volume = "camPos*((rotorSpeed-0.72)*4)";
                };
                class RotorExt {
                    sound[] = {
                        "rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_01_ext_rotor",
                        1,
                        1,
                        3500
                    };
                    frequency = "rotorSpeed / (1-rotorThrust/5)*0.8";
                    volume = "camPos*((rotorSpeed-0.72)*6)";
                    cone[] = {1.6, 3.14, 1.6, 0.95};
                };
                class RotorNoiseExt {
                    sound[] = {"A3\Sounds_F\dummysound", 1, 1, 400};
                    frequency = 1;
                    volume = "camPos * (rotorThrust factor [0.7, 0.9])";
                    cone[] = {0.7, 1.3, 1, 0};
                };
                class EngineInt {
                    sound[] = {"rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_01_int_engine", 1, 1};
                    frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
                    volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
                };
                class RotorInt {
                    sound[] = {"A3\Sounds_F\dummysound", 0.5011872, 1};
                    frequency = "rotorSpeed * (1-rotorThrust/5) * 1.2";
                    volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)*0.9";
                };
                class TransmissionDamageExt_phase1 {
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\Heli_damage_transmission_ext_1",
                        1,
                        1,
                        150
                    };
                    frequency = "0.66 + rotorSpeed / 3";
                    volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
                };
                class TransmissionDamageExt_phase2 {
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\Heli_damage_transmission_ext_2",
                        1,
                        1,
                        150
                    };
                    frequency = "0.66 + rotorSpeed / 3";
                    volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
                };
                class TransmissionDamageInt_phase1 {
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\Heli_damage_transmission_int_1",
                        1,
                        1,
                        150
                    };
                    frequency = "0.66 + rotorSpeed / 3";
                    volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
                };
                class TransmissionDamageInt_phase2 {
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\Heli_damage_transmission_int_2",
                        1,
                        1,
                        150
                    };
                    frequency = "0.66 + rotorSpeed / 3";
                    volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
                };
                class damageAlarmInt {
                    sound[] = {"A3\Sounds_F\vehicles\air\noises\Heli_alarm_bluefor", 0.31622776, 1};
                    frequency = 1;
                    volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
                };
                class damageAlarmExt {
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\Heli_alarm_bluefor",
                        0.2238721,
                        1,
                        20
                    };
                    frequency = 1;
                    volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
                };
                class rotorLowAlarmInt {
                    sound[] = {"A3\Sounds_F\vehicles\air\noises\Heli_alarm_rotor_low", 0.31622776, 1};
                    frequency = 1;
                    volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
                };
                class rotorLowAlarmExt {
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\Heli_alarm_rotor_low",
                        0.2238721,
                        1,
                        20
                    };
                    frequency = 1;
                    volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
                };
                class scrubLandInt {
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\wheelsInt",
                        1,
                        1,
                        100
                    };
                    frequency = 1;
                    volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
                };
                class scrubLandExt {
                    sound[] = {"A3\Sounds_F\dummysound", 1, 1, 100};
                    frequency = 1;
                    volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
                };
                class scrubBuildingInt {
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\wheelsInt",
                        1,
                        1,
                        100
                    };
                    frequency = 1;
                    volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
                };
                class scrubBuildingExt {
                    sound[] = {"A3\Sounds_F\dummysound", 1, 1, 100};
                    frequency = 1;
                    volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
                };
                class scrubTreeInt {
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
                        1,
                        1,
                        100
                    };
                    frequency = 1;
                    volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
                };
                class scrubTreeExt {
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
                        1,
                        1,
                        100
                    };
                    frequency = 1;
                    volume = "camPos * ((scrubTree) factor [0, 0.01])";
                };
                class RainExt {
                    sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", 1, 1, 100};
                    frequency = 1;
                    volume = "camPos * (rain - rotorSpeed/2) * 2";
                };
                class RainInt {
                    sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int", 1, 1, 100};
                    frequency = 1;
                    volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
                };
                class SlingLoadDownExt {
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
                        1,
                        1,
                        500
                    };
                    frequency = 1;
                    volume = "camPos*(slingLoadActive factor [0,-1])";
                };
                class SlingLoadUpExt {
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
                        1,
                        1,
                        500
                    };
                    frequency = 1;
                    volume = "camPos*(slingLoadActive factor [0,1])";
                };
                class SlingLoadDownInt {
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
                        1,
                        1,
                        500
                    };
                    frequency = 1;
                    volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
                };
                class SlingLoadUpInt {
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
                        1,
                        1,
                        500
                    };
                    frequency = 1;
                    volume = "(1-camPos)*(slingLoadActive factor [0,1])";
                };
                class WindInt {
                    sound[] = {"A3\Sounds_F\dummysound", 0.70794576, 1, 50};
                    frequency = 1;
                    volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
                };
                class GStress {
                    sound[] = {
                        "A3\Sounds_F\vehicles\noises\vehicle_stress2d",
                        1.1220185,
                        1,
                        50
                    };
                    frequency = 1;
                    volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
                };
                class SpeedStress {
                    sound[] = {
                        "A3\Sounds_F\vehicles\noises\vehicle_stress3",
                        1,
                        1,
                        50
                    };
                    frequency = 1;
                    volume = "(1-camPos)*(speed factor[40,80])";
                };
            };
        };
        armor = 40;
        armorStructural = 20;
        hullDamageCauseExplosion = 1;
        hullExplosionDelay[] = {10, 20};
        damageResistance = 0.001;
        class HitPoints: HitPoints {
            class HitHull {
                simulation = "RHS_Hull_Helicopter";
                armor = -100;
                minimalHit = -0.2;
                explosionShielding = 2;
                radius = 0.4;
                armorComponent = "Hit_Hull";
                name = "NEtrup";
                visual = "zbytek";
                passThrough = 1;
                class DestructionEffects: RHS_Effects_Helicopter_Hull_Destruction {};
            };
            class HitEngine1 {
                armor = -80;
                radius = 0.18;
                explosionShielding = 0.7;
                minimalHit = -0.05;
                passThrough = 0.4;
                visual = "";
                name = "engine_1_hit";
                armorComponent = "Hit_Engine_1";
            };
            class HitEngine2: HitEngine1 {
                name = "engine_2_hit";
                armorComponent = "Hit_Engine_2";
            };
            class HitEngine: HitEngine2 {
                armor = -200;
                armorComponent = "";
                name = "engine_hit";
                depends = "0.5 * (HitEngine1 + HitEngine2)";
            };
            class HitFuel {
                armor = -70;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = -0.1;
                radius = 0.4;
                armorComponent = "hit_fuel_1";
                name = "hit_fuel_1";
                visual = "palivo";
            };
            class HitFuel2 {
                armor = -70;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = -0.1;
                radius = 0.4;
                armorComponent = "hit_fuel_2";
                name = "hit_fuel_2";
                visual = "palivo";
            };
            class HitAvionics: HitAvionics {
                armor = 0.15;
                minimalHit = -0.1;
                name = "elektronika";
                visual = "elektronika";
                passThrough = 1;
            };
            class HitTail {
                armor = -80;
                explosionShielding = 3;
                passThrough = 0.5;
                minimalHit = -0.2;
                radius = 0.3;
                armorComponent = "Hit_Tail";
                name = "tail_rotor_hit";
                visual = "Vis_Tail";
                simulation = "RHS_Hull_Helicopter";
            };
            class HitVRotor: HitVRotor {
                armor = -80;
                minimalHit = -0.1;
                name = "mala vrtule";
                visual = "mala vrtule staticka";
                passThrough = 0;
                armorComponent = "Hit_Rotor_Rear";
                depends = "HitTail";
            };
            class HitHRotor: HitHRotor {
                armor = -80;
                minimalHit = -0.1;
                name = "velka vrtule";
                visual = "velka vrtule staticka";
                passThrough = 0;
                armorComponent = "Hit_Rotor_Main";
            };
            class HitGlass1 {
                name = "glass1";
                visual = "glass1";
                radius = 0.37;
                armor = -5;
                explosionShielding = 2;
                minimalHit = -0.025;
                passThrough = 0;
                armorComponent = "glass1";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class BrokenGlass1 {
                        simulation = "particles";
                        type = "BrokenGlass1NS";
                        position = "GlassEffects1";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2 {
                        simulation = "particles";
                        type = "BrokenGlass2NS";
                        position = "GlassEffects1";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3 {
                        simulation = "particles";
                        type = "BrokenGlass3NS";
                        position = "GlassEffects1";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4 {
                        simulation = "particles";
                        type = "BrokenGlass4NS";
                        position = "GlassEffects1";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5 {
                        simulation = "particles";
                        type = "BrokenGlass5NS";
                        position = "GlassEffects1";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass1S {
                        simulation = "particles";
                        type = "BrokenGlass1SS";
                        position = "GlassEffects1";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2S {
                        simulation = "particles";
                        type = "BrokenGlass2SS";
                        position = "GlassEffects1";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3S {
                        simulation = "particles";
                        type = "BrokenGlass3SS";
                        position = "GlassEffects1";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4S {
                        simulation = "particles";
                        type = "BrokenGlass4SS";
                        position = "GlassEffects1";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5S {
                        simulation = "particles";
                        type = "BrokenGlass5SS";
                        position = "GlassEffects1";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                };
            };
            class HitGlass2 {
                name = "glass2";
                visual = "glass2";
                radius = 0.37;
                armor = -5;
                explosionShielding = 1.5;
                minimalHit = -0.025;
                passThrough = 0;
                armorComponent = "glass2";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class BrokenGlass1 {
                        simulation = "particles";
                        type = "BrokenGlass1NS";
                        position = "GlassEffects2";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2 {
                        simulation = "particles";
                        type = "BrokenGlass2NS";
                        position = "GlassEffects2";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3 {
                        simulation = "particles";
                        type = "BrokenGlass3NS";
                        position = "GlassEffects2";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4 {
                        simulation = "particles";
                        type = "BrokenGlass4NS";
                        position = "GlassEffects2";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5 {
                        simulation = "particles";
                        type = "BrokenGlass5NS";
                        position = "GlassEffects2";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass1S {
                        simulation = "particles";
                        type = "BrokenGlass1SS";
                        position = "GlassEffects2";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2S {
                        simulation = "particles";
                        type = "BrokenGlass2SS";
                        position = "GlassEffects2";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3S {
                        simulation = "particles";
                        type = "BrokenGlass3SS";
                        position = "GlassEffects2";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4S {
                        simulation = "particles";
                        type = "BrokenGlass4SS";
                        position = "GlassEffects2";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5S {
                        simulation = "particles";
                        type = "BrokenGlass5SS";
                        position = "GlassEffects2";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                };
            };
            class HitGlass3 {
                name = "glass3";
                visual = "glass3";
                radius = 0.25;
                armor = -5;
                explosionShielding = 1.5;
                minimalHit = -0.025;
                passThrough = 0;
                armorComponent = "glass3";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class BrokenGlass1 {
                        simulation = "particles";
                        type = "BrokenGlass1NS";
                        position = "GlassEffects3";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2 {
                        simulation = "particles";
                        type = "BrokenGlass2NS";
                        position = "GlassEffects3";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3 {
                        simulation = "particles";
                        type = "BrokenGlass3NS";
                        position = "GlassEffects3";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4 {
                        simulation = "particles";
                        type = "BrokenGlass4NS";
                        position = "GlassEffects3";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5 {
                        simulation = "particles";
                        type = "BrokenGlass5NS";
                        position = "GlassEffects3";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass1S {
                        simulation = "particles";
                        type = "BrokenGlass1SS";
                        position = "GlassEffects3";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2S {
                        simulation = "particles";
                        type = "BrokenGlass2SS";
                        position = "GlassEffects3";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3S {
                        simulation = "particles";
                        type = "BrokenGlass3SS";
                        position = "GlassEffects3";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4S {
                        simulation = "particles";
                        type = "BrokenGlass4SS";
                        position = "GlassEffects3";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5S {
                        simulation = "particles";
                        type = "BrokenGlass5SS";
                        position = "GlassEffects3";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                };
            };
            class HitGlass4 {
                name = "glass4";
                visual = "glass4";
                radius = 0.25;
                armor = -5;
                explosionShielding = 1.5;
                minimalHit = -0.025;
                passThrough = 0;
                armorComponent = "glass4";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class BrokenGlass1 {
                        simulation = "particles";
                        type = "BrokenGlass1NS";
                        position = "GlassEffects4";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2 {
                        simulation = "particles";
                        type = "BrokenGlass2NS";
                        position = "GlassEffects4";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3 {
                        simulation = "particles";
                        type = "BrokenGlass3NS";
                        position = "GlassEffects4";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4 {
                        simulation = "particles";
                        type = "BrokenGlass4NS";
                        position = "GlassEffects4";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5 {
                        simulation = "particles";
                        type = "BrokenGlass5NS";
                        position = "GlassEffects4";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass1S {
                        simulation = "particles";
                        type = "BrokenGlass1SS";
                        position = "GlassEffects4";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2S {
                        simulation = "particles";
                        type = "BrokenGlass2SS";
                        position = "GlassEffects4";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3S {
                        simulation = "particles";
                        type = "BrokenGlass3SS";
                        position = "GlassEffects4";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4S {
                        simulation = "particles";
                        type = "BrokenGlass4SS";
                        position = "GlassEffects4";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5S {
                        simulation = "particles";
                        type = "BrokenGlass5SS";
                        position = "GlassEffects4";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                };
            };
            class HitGlass5 {
                name = "glass5";
                visual = "glass5";
                radius = 0.34;
                armor = -5;
                explosionShielding = 2;
                minimalHit = -0.025;
                passThrough = 0;
                armorComponent = "glass5";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class BrokenGlass1 {
                        simulation = "particles";
                        type = "BrokenGlass1NS";
                        position = "GlassEffects5";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2 {
                        simulation = "particles";
                        type = "BrokenGlass2NS";
                        position = "GlassEffects5";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3 {
                        simulation = "particles";
                        type = "BrokenGlass3NS";
                        position = "GlassEffects5";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4 {
                        simulation = "particles";
                        type = "BrokenGlass4NS";
                        position = "GlassEffects5";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5 {
                        simulation = "particles";
                        type = "BrokenGlass5NS";
                        position = "GlassEffects5";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass1S {
                        simulation = "particles";
                        type = "BrokenGlass1SS";
                        position = "GlassEffects5";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2S {
                        simulation = "particles";
                        type = "BrokenGlass2SS";
                        position = "GlassEffects5";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3S {
                        simulation = "particles";
                        type = "BrokenGlass3SS";
                        position = "GlassEffects5";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4S {
                        simulation = "particles";
                        type = "BrokenGlass4SS";
                        position = "GlassEffects5";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5S {
                        simulation = "particles";
                        type = "BrokenGlass5SS";
                        position = "GlassEffects5";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                };
            };
            class HitGlass6 {
                name = "glass6";
                visual = "glass6";
                radius = 0.34;
                armor = -5;
                explosionShielding = 1.5;
                minimalHit = -0.025;
                passThrough = 0;
                armorComponent = "glass6";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class BrokenGlass1 {
                        simulation = "particles";
                        type = "BrokenGlass1NS";
                        position = "GlassEffects6";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2 {
                        simulation = "particles";
                        type = "BrokenGlass2NS";
                        position = "GlassEffects6";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3 {
                        simulation = "particles";
                        type = "BrokenGlass3NS";
                        position = "GlassEffects6";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4 {
                        simulation = "particles";
                        type = "BrokenGlass4NS";
                        position = "GlassEffects6";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5 {
                        simulation = "particles";
                        type = "BrokenGlass5NS";
                        position = "GlassEffects6";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass1S {
                        simulation = "particles";
                        type = "BrokenGlass1SS";
                        position = "GlassEffects6";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2S {
                        simulation = "particles";
                        type = "BrokenGlass2SS";
                        position = "GlassEffects6";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3S {
                        simulation = "particles";
                        type = "BrokenGlass3SS";
                        position = "GlassEffects6";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4S {
                        simulation = "particles";
                        type = "BrokenGlass4SS";
                        position = "GlassEffects6";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5S {
                        simulation = "particles";
                        type = "BrokenGlass5SS";
                        position = "GlassEffects6";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                };
            };
            class HitGlass7 {
                name = "glass7";
                visual = "glass7";
                radius = 0.34;
                armor = -5;
                explosionShielding = 1.5;
                minimalHit = -0.025;
                passThrough = 0;
                armorComponent = "glass7";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class BrokenGlass1 {
                        simulation = "particles";
                        type = "BrokenGlass1NS";
                        position = "GlassEffects7";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2 {
                        simulation = "particles";
                        type = "BrokenGlass2NS";
                        position = "GlassEffects7";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3 {
                        simulation = "particles";
                        type = "BrokenGlass3NS";
                        position = "GlassEffects7";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4 {
                        simulation = "particles";
                        type = "BrokenGlass4NS";
                        position = "GlassEffects7";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5 {
                        simulation = "particles";
                        type = "BrokenGlass5NS";
                        position = "GlassEffects7";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass1S {
                        simulation = "particles";
                        type = "BrokenGlass1SS";
                        position = "GlassEffects7";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2S {
                        simulation = "particles";
                        type = "BrokenGlass2SS";
                        position = "GlassEffects7";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3S {
                        simulation = "particles";
                        type = "BrokenGlass3SS";
                        position = "GlassEffects7";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4S {
                        simulation = "particles";
                        type = "BrokenGlass4SS";
                        position = "GlassEffects7";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5S {
                        simulation = "particles";
                        type = "BrokenGlass5SS";
                        position = "GlassEffects7";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                };
            };
            class HitGlass8 {
                name = "glass8";
                visual = "glass8";
                radius = 0.34;
                armor = -5;
                explosionShielding = 1.5;
                minimalHit = -0.025;
                passThrough = 0;
                armorComponent = "glass8";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class BrokenGlass1 {
                        simulation = "particles";
                        type = "BrokenGlass1NS";
                        position = "GlassEffects8";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2 {
                        simulation = "particles";
                        type = "BrokenGlass2NS";
                        position = "GlassEffects8";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3 {
                        simulation = "particles";
                        type = "BrokenGlass3NS";
                        position = "GlassEffects8";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4 {
                        simulation = "particles";
                        type = "BrokenGlass4NS";
                        position = "GlassEffects8";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5 {
                        simulation = "particles";
                        type = "BrokenGlass5NS";
                        position = "GlassEffects8";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass1S {
                        simulation = "particles";
                        type = "BrokenGlass1SS";
                        position = "GlassEffects8";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2S {
                        simulation = "particles";
                        type = "BrokenGlass2SS";
                        position = "GlassEffects8";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3S {
                        simulation = "particles";
                        type = "BrokenGlass3SS";
                        position = "GlassEffects8";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4S {
                        simulation = "particles";
                        type = "BrokenGlass4SS";
                        position = "GlassEffects8";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5S {
                        simulation = "particles";
                        type = "BrokenGlass5SS";
                        position = "GlassEffects8";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                };
            };
            class HitGlass9 {
                name = "glass9";
                visual = "glass9";
                radius = 0.24;
                armor = -5;
                explosionShielding = 1;
                minimalHit = -0.025;
                passThrough = 0;
                armorComponent = "glass9";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class BrokenGlass1 {
                        simulation = "particles";
                        type = "BrokenGlass1NS";
                        position = "GlassEffects9";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2 {
                        simulation = "particles";
                        type = "BrokenGlass2NS";
                        position = "GlassEffects9";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3 {
                        simulation = "particles";
                        type = "BrokenGlass3NS";
                        position = "GlassEffects9";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4 {
                        simulation = "particles";
                        type = "BrokenGlass4NS";
                        position = "GlassEffects9";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5 {
                        simulation = "particles";
                        type = "BrokenGlass5NS";
                        position = "GlassEffects9";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass1S {
                        simulation = "particles";
                        type = "BrokenGlass1SS";
                        position = "GlassEffects9";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2S {
                        simulation = "particles";
                        type = "BrokenGlass2SS";
                        position = "GlassEffects9";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3S {
                        simulation = "particles";
                        type = "BrokenGlass3SS";
                        position = "GlassEffects9";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4S {
                        simulation = "particles";
                        type = "BrokenGlass4SS";
                        position = "GlassEffects9";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5S {
                        simulation = "particles";
                        type = "BrokenGlass5SS";
                        position = "GlassEffects9";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                };
            };
            class HitGlass10 {
                name = "glass10";
                visual = "glass10";
                radius = 0.24;
                armor = -5;
                explosionShielding = 1;
                minimalHit = -0.025;
                passThrough = 0;
                armorComponent = "glass10";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class BrokenGlass1 {
                        simulation = "particles";
                        type = "BrokenGlass1NS";
                        position = "GlassEffects10";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2 {
                        simulation = "particles";
                        type = "BrokenGlass2NS";
                        position = "GlassEffects10";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3 {
                        simulation = "particles";
                        type = "BrokenGlass3NS";
                        position = "GlassEffects10";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4 {
                        simulation = "particles";
                        type = "BrokenGlass4NS";
                        position = "GlassEffects10";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5 {
                        simulation = "particles";
                        type = "BrokenGlass5NS";
                        position = "GlassEffects10";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass1S {
                        simulation = "particles";
                        type = "BrokenGlass1SS";
                        position = "GlassEffects10";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2S {
                        simulation = "particles";
                        type = "BrokenGlass2SS";
                        position = "GlassEffects10";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3S {
                        simulation = "particles";
                        type = "BrokenGlass3SS";
                        position = "GlassEffects10";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4S {
                        simulation = "particles";
                        type = "BrokenGlass4SS";
                        position = "GlassEffects10";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5S {
                        simulation = "particles";
                        type = "BrokenGlass5SS";
                        position = "GlassEffects10";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                };
            };
            class HitGlass11 {
                name = "glass11";
                visual = "glass11";
                radius = 0.24;
                armor = -5;
                explosionShielding = 1;
                minimalHit = -0.025;
                passThrough = 0;
                armorComponent = "glass11";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class BrokenGlass1 {
                        simulation = "particles";
                        type = "BrokenGlass1NS";
                        position = "GlassEffects11";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2 {
                        simulation = "particles";
                        type = "BrokenGlass2NS";
                        position = "GlassEffects11";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3 {
                        simulation = "particles";
                        type = "BrokenGlass3NS";
                        position = "GlassEffects11";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4 {
                        simulation = "particles";
                        type = "BrokenGlass4NS";
                        position = "GlassEffects11";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5 {
                        simulation = "particles";
                        type = "BrokenGlass5NS";
                        position = "GlassEffects11";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass1S {
                        simulation = "particles";
                        type = "BrokenGlass1SS";
                        position = "GlassEffects11";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2S {
                        simulation = "particles";
                        type = "BrokenGlass2SS";
                        position = "GlassEffects11";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3S {
                        simulation = "particles";
                        type = "BrokenGlass3SS";
                        position = "GlassEffects11";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4S {
                        simulation = "particles";
                        type = "BrokenGlass4SS";
                        position = "GlassEffects11";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5S {
                        simulation = "particles";
                        type = "BrokenGlass5SS";
                        position = "GlassEffects11";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                };
            };
            class HitGlass12 {
                name = "glass12";
                visual = "glass12";
                radius = 0.24;
                armor = -5;
                explosionShielding = 1;
                minimalHit = -0.025;
                passThrough = 0;
                armorComponent = "glass12";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class BrokenGlass1 {
                        simulation = "particles";
                        type = "BrokenGlass1NS";
                        position = "GlassEffects12";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2 {
                        simulation = "particles";
                        type = "BrokenGlass2NS";
                        position = "GlassEffects12";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3 {
                        simulation = "particles";
                        type = "BrokenGlass3NS";
                        position = "GlassEffects12";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4 {
                        simulation = "particles";
                        type = "BrokenGlass4NS";
                        position = "GlassEffects12";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5 {
                        simulation = "particles";
                        type = "BrokenGlass5NS";
                        position = "GlassEffects12";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass1S {
                        simulation = "particles";
                        type = "BrokenGlass1SS";
                        position = "GlassEffects12";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2S {
                        simulation = "particles";
                        type = "BrokenGlass2SS";
                        position = "GlassEffects12";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3S {
                        simulation = "particles";
                        type = "BrokenGlass3SS";
                        position = "GlassEffects12";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4S {
                        simulation = "particles";
                        type = "BrokenGlass4SS";
                        position = "GlassEffects12";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5S {
                        simulation = "particles";
                        type = "BrokenGlass5SS";
                        position = "GlassEffects12";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                };
            };
            class HitGlass13 {
                name = "glass13";
                visual = "glass13";
                radius = 0.24;
                armor = -5;
                explosionShielding = 1;
                minimalHit = -0.025;
                passThrough = 0;
                armorComponent = "glass13";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class BrokenGlass1 {
                        simulation = "particles";
                        type = "BrokenGlass1NS";
                        position = "GlassEffects13";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2 {
                        simulation = "particles";
                        type = "BrokenGlass2NS";
                        position = "GlassEffects13";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3 {
                        simulation = "particles";
                        type = "BrokenGlass3NS";
                        position = "GlassEffects13";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4 {
                        simulation = "particles";
                        type = "BrokenGlass4NS";
                        position = "GlassEffects13";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5 {
                        simulation = "particles";
                        type = "BrokenGlass5NS";
                        position = "GlassEffects13";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass1S {
                        simulation = "particles";
                        type = "BrokenGlass1SS";
                        position = "GlassEffects13";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2S {
                        simulation = "particles";
                        type = "BrokenGlass2SS";
                        position = "GlassEffects13";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3S {
                        simulation = "particles";
                        type = "BrokenGlass3SS";
                        position = "GlassEffects13";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4S {
                        simulation = "particles";
                        type = "BrokenGlass4SS";
                        position = "GlassEffects13";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5S {
                        simulation = "particles";
                        type = "BrokenGlass5SS";
                        position = "GlassEffects13";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                };
            };
            class HitGlass14 {
                name = "glass14";
                visual = "glass14";
                radius = 0.24;
                armor = -5;
                explosionShielding = 1;
                minimalHit = -0.025;
                passThrough = 0;
                armorComponent = "glass14";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class BrokenGlass1 {
                        simulation = "particles";
                        type = "BrokenGlass1NS";
                        position = "GlassEffects14";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2 {
                        simulation = "particles";
                        type = "BrokenGlass2NS";
                        position = "GlassEffects14";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3 {
                        simulation = "particles";
                        type = "BrokenGlass3NS";
                        position = "GlassEffects14";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4 {
                        simulation = "particles";
                        type = "BrokenGlass4NS";
                        position = "GlassEffects14";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5 {
                        simulation = "particles";
                        type = "BrokenGlass5NS";
                        position = "GlassEffects14";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass1S {
                        simulation = "particles";
                        type = "BrokenGlass1SS";
                        position = "GlassEffects14";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2S {
                        simulation = "particles";
                        type = "BrokenGlass2SS";
                        position = "GlassEffects14";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3S {
                        simulation = "particles";
                        type = "BrokenGlass3SS";
                        position = "GlassEffects14";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4S {
                        simulation = "particles";
                        type = "BrokenGlass4SS";
                        position = "GlassEffects14";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5S {
                        simulation = "particles";
                        type = "BrokenGlass5SS";
                        position = "GlassEffects14";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                };
            };
            class HitGlass15 {
                name = "glass15";
                visual = "glass15";
                radius = 0.24;
                armor = -5;
                explosionShielding = 1;
                minimalHit = -0.025;
                passThrough = 0;
                armorComponent = "glass15";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class BrokenGlass1 {
                        simulation = "particles";
                        type = "BrokenGlass1NS";
                        position = "GlassEffects15";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2 {
                        simulation = "particles";
                        type = "BrokenGlass2NS";
                        position = "GlassEffects15";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3 {
                        simulation = "particles";
                        type = "BrokenGlass3NS";
                        position = "GlassEffects15";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4 {
                        simulation = "particles";
                        type = "BrokenGlass4NS";
                        position = "GlassEffects15";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5 {
                        simulation = "particles";
                        type = "BrokenGlass5NS";
                        position = "GlassEffects15";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass1S {
                        simulation = "particles";
                        type = "BrokenGlass1SS";
                        position = "GlassEffects15";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2S {
                        simulation = "particles";
                        type = "BrokenGlass2SS";
                        position = "GlassEffects15";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3S {
                        simulation = "particles";
                        type = "BrokenGlass3SS";
                        position = "GlassEffects15";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4S {
                        simulation = "particles";
                        type = "BrokenGlass4SS";
                        position = "GlassEffects15";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5S {
                        simulation = "particles";
                        type = "BrokenGlass5SS";
                        position = "GlassEffects15";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                };
            };
            class HitGlass16 {
                name = "glass16";
                visual = "glass16";
                radius = 0.24;
                armor = -5;
                explosionShielding = 1;
                minimalHit = -0.025;
                passThrough = 0;
                armorComponent = "glass16";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class BrokenGlass1 {
                        simulation = "particles";
                        type = "BrokenGlass1NS";
                        position = "GlassEffects16";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2 {
                        simulation = "particles";
                        type = "BrokenGlass2NS";
                        position = "GlassEffects16";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3 {
                        simulation = "particles";
                        type = "BrokenGlass3NS";
                        position = "GlassEffects16";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4 {
                        simulation = "particles";
                        type = "BrokenGlass4NS";
                        position = "GlassEffects16";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5 {
                        simulation = "particles";
                        type = "BrokenGlass5NS";
                        position = "GlassEffects16";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass1S {
                        simulation = "particles";
                        type = "BrokenGlass1SS";
                        position = "GlassEffects16";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2S {
                        simulation = "particles";
                        type = "BrokenGlass2SS";
                        position = "GlassEffects16";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3S {
                        simulation = "particles";
                        type = "BrokenGlass3SS";
                        position = "GlassEffects16";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4S {
                        simulation = "particles";
                        type = "BrokenGlass4SS";
                        position = "GlassEffects16";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5S {
                        simulation = "particles";
                        type = "BrokenGlass5SS";
                        position = "GlassEffects16";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                };
            };
            class HitGlass17 {
                name = "glass17";
                visual = "glass17";
                radius = 0.24;
                armor = -5;
                explosionShielding = 1;
                minimalHit = -0.025;
                passThrough = 0;
                armorComponent = "glass17";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class BrokenGlass1 {
                        simulation = "particles";
                        type = "BrokenGlass1NS";
                        position = "GlassEffects17";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2 {
                        simulation = "particles";
                        type = "BrokenGlass2NS";
                        position = "GlassEffects17";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3 {
                        simulation = "particles";
                        type = "BrokenGlass3NS";
                        position = "GlassEffects17";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4 {
                        simulation = "particles";
                        type = "BrokenGlass4NS";
                        position = "GlassEffects17";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5 {
                        simulation = "particles";
                        type = "BrokenGlass5NS";
                        position = "GlassEffects17";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass1S {
                        simulation = "particles";
                        type = "BrokenGlass1SS";
                        position = "GlassEffects17";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2S {
                        simulation = "particles";
                        type = "BrokenGlass2SS";
                        position = "GlassEffects17";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3S {
                        simulation = "particles";
                        type = "BrokenGlass3SS";
                        position = "GlassEffects17";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4S {
                        simulation = "particles";
                        type = "BrokenGlass4SS";
                        position = "GlassEffects17";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5S {
                        simulation = "particles";
                        type = "BrokenGlass5SS";
                        position = "GlassEffects17";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                };
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_ch53\data\ch53_1.rvmat",
                "rhsusf\addons\rhsusf_ch53\data\ch53_1_damage.rvmat",
                "rhsusf\addons\rhsusf_ch53\data\ch53_1_destruct.rvmat",
                "rhsusf\addons\rhsusf_ch53\data\ch53_2.rvmat",
                "rhsusf\addons\rhsusf_ch53\data\ch53_2_damage.rvmat",
                "rhsusf\addons\rhsusf_ch53\data\ch53_2_destruct.rvmat",
                "rhsusf\addons\rhsusf_ch53\data\glass.rvmat",
                "rhsusf\addons\rhsusf_ch53\data\glass_damage.rvmat",
                "rhsusf\addons\rhsusf_ch53\data\glass_damage.rvmat",
                "rhsusf\addons\rhsusf_ch53\data\glassint.rvmat",
                "rhsusf\addons\rhsusf_ch53\data\glassint_damage.rvmat",
                "rhsusf\addons\rhsusf_ch53\data\glassint_damage.rvmat"
            };
        };
        class MFD {
            class rhsusf_CH53_HUD_1 {
                topLeft = "HUD_top_left";
                topRight = "HUD_top_right";
                bottomLeft = "HUD_bottom_left";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0.15, 1, 0.15, 1};
                enableParallax = 0;
                class Bones {
                    class Velocity {
                        type = "vector";
                        source = "velocity";
                        pos0[] = {0.5, 0.5};
                        pos10[] = {0.65, 0.65};
                    };
                    class Velocity_slip {
                        type = "vector";
                        source = "velocity";
                        pos0[] = {0.5, 0.845};
                        pos10[] = {0.53, 0.845};
                    };
                    class VspeedBone {
                        type = "linear";
                        source = "vspeed";
                        sourceScale = 1;
                        min = -10;
                        max = 10;
                        minPos[] = {0.93, 0.2};
                        maxPos[] = {0.93, 0.8};
                    };
                    class RadarAltitudeBone {
                        type = "linear";
                        source = "altitudeAGL";
                        sourceScale = 1;
                        min = 0;
                        max = 60;
                        minPos[] = {0.965, 0.2};
                        maxPos[] = {0.965, 0.8};
                    };
                    class HorizonBankRot {
                        type = "rotational";
                        source = "horizonBank";
                        center[] = {0.5, 0.5};
                        min = -3.1416;
                        max = 3.1416;
                        minAngle = -180;
                        maxAngle = 180;
                        aspectRatio = 1;
                    };
                    class ForwardVec {
                        type = "vector";
                        source = "forward";
                        pos0[] = {0, 0};
                        pos10[] = {0.25, 0.25};
                    };
                    class Level0 {
                        type = "horizon";
                        pos0[] = {0.5, 0.5};
                        pos10[] = {0.78, 0.78};
                        angle = 0;
                    };
                    class LevelP5: Level0 {
                        angle = 5;
                    };
                    class LevelM5: Level0 {
                        angle = -5;
                    };
                    class LevelP10: Level0 {
                        angle = 10;
                    };
                    class LevelM10: Level0 {
                        angle = -10;
                    };
                    class LevelP15: Level0 {
                        angle = 15;
                    };
                    class LevelM15: Level0 {
                        angle = -15;
                    };
                    class LevelP20: Level0 {
                        angle = 20;
                    };
                    class LevelM20: Level0 {
                        angle = -20;
                    };
                    class LevelP25: Level0 {
                        angle = 25;
                    };
                    class LevelM25: Level0 {
                        angle = -25;
                    };
                    class LevelP30: Level0 {
                        angle = 30;
                    };
                    class LevelM30: Level0 {
                        angle = -30;
                    };
                    class LevelP35: Level0 {
                        angle = 35;
                    };
                    class LevelM35: Level0 {
                        angle = -35;
                    };
                    class LevelP40: Level0 {
                        angle = 40;
                    };
                    class LevelM40: Level0 {
                        angle = -40;
                    };
                    class LevelP45: Level0 {
                        angle = 45;
                    };
                    class LevelM45: Level0 {
                        angle = -45;
                    };
                    class LevelP50: Level0 {
                        angle = 50;
                    };
                    class LevelM50: Level0 {
                        angle = -50;
                    };
                    class LevelP55: Level0 {
                        angle = 55;
                    };
                    class LevelM55: Level0 {
                        angle = -55;
                    };
                    class LevelP60: Level0 {
                        angle = 60;
                    };
                    class LevelM60: Level0 {
                        angle = -60;
                    };
                    class LevelP65: Level0 {
                        angle = 65;
                    };
                    class LevelM65: Level0 {
                        angle = -65;
                    };
                    class LevelP70: Level0 {
                        angle = 70;
                    };
                    class LevelM70: Level0 {
                        angle = -70;
                    };
                    class LevelP75: Level0 {
                        angle = 75;
                    };
                    class LevelM75: Level0 {
                        angle = -75;
                    };
                    class LevelP80: Level0 {
                        angle = 80;
                    };
                    class LevelM80: Level0 {
                        angle = -80;
                    };
                    class LevelP85: Level0 {
                        angle = 85;
                    };
                    class LevelM85: Level0 {
                        angle = -85;
                    };
                    class LevelP90: Level0 {
                        angle = 90;
                    };
                    class LevelM90: Level0 {
                        angle = -90;
                    };
                };
                class Draw {
                    color[] = {0.18, 1, 0.18};
                    alpha = 1;
                    condition = "on";
                    class Horizont {
                        clipTL[] = {0.15, 0.15};
                        clipBR[] = {0.85, 0.85};
                        class Dimmed {
                            class Level0 {
                                type = "line";
                                points[] = {
                                    {"Level0", {-0.42, 0}, 1},
                                    {"Level0", {-0.08, 0}, 1},
                                    {},
                                    {"Level0", {0.42, 0}, 1},
                                    {"Level0", {0.08, 0}, 1},
                                    {}
                                };
                            };
                            class LevelM10: Level0 {
                                type = "line";
                                width = 3;
                                points[] = {
                                    {"LevelM10", {-0.2, -0.03}, 1},
                                    {"LevelM10", {-0.2, 0}, 1},
                                    {"LevelM10", {-0.15, 0}, 1},
                                    {},
                                    {"LevelM10", {-0.1, 0}, 1},
                                    {"LevelM10", {-0.05, 0}, 1},
                                    {},
                                    {"LevelM10", {0.05, 0}, 1},
                                    {"LevelM10", {0.1, 0}, 1},
                                    {},
                                    {"LevelM10", {0.15, 0}, 1},
                                    {"LevelM10", {0.2, 0}, 1},
                                    {"LevelM10", {0.2, -0.03}, 1}
                                };
                            };
                            class VALM_1_10 {
                                type = "text";
                                source = "static";
                                text = -10;
                                align = "left";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelM10", {-0.21, -0.05}, 1};
                                right[] = {"LevelM10", {-0.16, -0.05}, 1};
                                down[] = {"LevelM10", {-0.21, 0}, 1};
                            };
                            class VALM_2_10: VALM_1_10 {
                                align = "right";
                                pos[] = {"LevelM10", {0.21, -0.05}, 1};
                                right[] = {"LevelM10", {0.26, -0.05}, 1};
                                down[] = {"LevelM10", {0.21, 0}, 1};
                            };
                            class LevelP10: Level0 {
                                type = "line";
                                width = 3;
                                points[] = {
                                    {"LevelP10", {-0.2, 0.03}, 1},
                                    {"LevelP10", {-0.2, 0}, 1},
                                    {"LevelP10", {-0.05, 0}, 1},
                                    {},
                                    {"LevelP10", {0.05, 0}, 1},
                                    {"LevelP10", {0.2, 0}, 1},
                                    {"LevelP10", {0.2, 0.03}, 1}
                                };
                            };
                            class VALP_1_10 {
                                type = "text";
                                source = "static";
                                text = "10";
                                align = "left";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelP10", {-0.21, 0}, 1};
                                right[] = {"LevelP10", {-0.16, 0}, 1};
                                down[] = {"LevelP10", {-0.21, 0.05}, 1};
                            };
                            class VALP_2_10: VALP_1_10 {
                                align = "right";
                                pos[] = {"LevelP10", {0.21, 0}, 1};
                                right[] = {"LevelP10", {0.26, 0}, 1};
                                down[] = {"LevelP10", {0.21, 0.05}, 1};
                            };
                            class LevelM20: Level0 {
                                type = "line";
                                width = 3;
                                points[] = {
                                    {"LevelM20", {-0.2, -0.03}, 1},
                                    {"LevelM20", {-0.2, 0}, 1},
                                    {"LevelM20", {-0.15, 0}, 1},
                                    {},
                                    {"LevelM20", {-0.1, 0}, 1},
                                    {"LevelM20", {-0.05, 0}, 1},
                                    {},
                                    {"LevelM20", {0.05, 0}, 1},
                                    {"LevelM20", {0.1, 0}, 1},
                                    {},
                                    {"LevelM20", {0.15, 0}, 1},
                                    {"LevelM20", {0.2, 0}, 1},
                                    {"LevelM20", {0.2, -0.03}, 1}
                                };
                            };
                            class VALM_1_20 {
                                type = "text";
                                source = "static";
                                text = -20;
                                align = "left";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelM20", {-0.21, -0.05}, 1};
                                right[] = {"LevelM20", {-0.16, -0.05}, 1};
                                down[] = {"LevelM20", {-0.21, 0}, 1};
                            };
                            class VALM_2_20: VALM_1_20 {
                                align = "right";
                                pos[] = {"LevelM20", {0.21, -0.05}, 1};
                                right[] = {"LevelM20", {0.26, -0.05}, 1};
                                down[] = {"LevelM20", {0.21, 0}, 1};
                            };
                            class LevelP20: Level0 {
                                type = "line";
                                width = 3;
                                points[] = {
                                    {"LevelP20", {-0.2, 0.03}, 1},
                                    {"LevelP20", {-0.2, 0}, 1},
                                    {"LevelP20", {-0.05, 0}, 1},
                                    {},
                                    {"LevelP20", {0.05, 0}, 1},
                                    {"LevelP20", {0.2, 0}, 1},
                                    {"LevelP20", {0.2, 0.03}, 1}
                                };
                            };
                            class VALP_1_20 {
                                type = "text";
                                source = "static";
                                text = "20";
                                align = "left";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelP20", {-0.21, 0}, 1};
                                right[] = {"LevelP20", {-0.16, 0}, 1};
                                down[] = {"LevelP20", {-0.21, 0.05}, 1};
                            };
                            class VALP_2_20: VALP_1_20 {
                                align = "right";
                                pos[] = {"LevelP20", {0.21, 0}, 1};
                                right[] = {"LevelP20", {0.26, 0}, 1};
                                down[] = {"LevelP20", {0.21, 0.05}, 1};
                            };
                            class LevelM30: Level0 {
                                type = "line";
                                width = 3;
                                points[] = {
                                    {"LevelM30", {-0.2, -0.03}, 1},
                                    {"LevelM30", {-0.2, 0}, 1},
                                    {"LevelM30", {-0.15, 0}, 1},
                                    {},
                                    {"LevelM30", {-0.1, 0}, 1},
                                    {"LevelM30", {-0.05, 0}, 1},
                                    {},
                                    {"LevelM30", {0.05, 0}, 1},
                                    {"LevelM30", {0.1, 0}, 1},
                                    {},
                                    {"LevelM30", {0.15, 0}, 1},
                                    {"LevelM30", {0.2, 0}, 1},
                                    {"LevelM30", {0.2, -0.03}, 1}
                                };
                            };
                            class VALM_1_30 {
                                type = "text";
                                source = "static";
                                text = -30;
                                align = "left";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelM30", {-0.21, -0.05}, 1};
                                right[] = {"LevelM30", {-0.16, -0.05}, 1};
                                down[] = {"LevelM30", {-0.21, 0}, 1};
                            };
                            class VALM_2_30: VALM_1_30 {
                                align = "right";
                                pos[] = {"LevelM30", {0.21, -0.05}, 1};
                                right[] = {"LevelM30", {0.26, -0.05}, 1};
                                down[] = {"LevelM30", {0.21, 0}, 1};
                            };
                            class LevelP30: Level0 {
                                type = "line";
                                width = 3;
                                points[] = {
                                    {"LevelP30", {-0.2, 0.03}, 1},
                                    {"LevelP30", {-0.2, 0}, 1},
                                    {"LevelP30", {-0.05, 0}, 1},
                                    {},
                                    {"LevelP30", {0.05, 0}, 1},
                                    {"LevelP30", {0.2, 0}, 1},
                                    {"LevelP30", {0.2, 0.03}, 1}
                                };
                            };
                            class VALP_1_30 {
                                type = "text";
                                source = "static";
                                text = "30";
                                align = "left";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelP30", {-0.21, 0}, 1};
                                right[] = {"LevelP30", {-0.16, 0}, 1};
                                down[] = {"LevelP30", {-0.21, 0.05}, 1};
                            };
                            class VALP_2_30: VALP_1_30 {
                                align = "right";
                                pos[] = {"LevelP30", {0.21, 0}, 1};
                                right[] = {"LevelP30", {0.26, 0}, 1};
                                down[] = {"LevelP30", {0.21, 0.05}, 1};
                            };
                            class LevelM40: Level0 {
                                type = "line";
                                width = 3;
                                points[] = {
                                    {"LevelM40", {-0.2, -0.03}, 1},
                                    {"LevelM40", {-0.2, 0}, 1},
                                    {"LevelM40", {-0.15, 0}, 1},
                                    {},
                                    {"LevelM40", {-0.1, 0}, 1},
                                    {"LevelM40", {-0.05, 0}, 1},
                                    {},
                                    {"LevelM40", {0.05, 0}, 1},
                                    {"LevelM40", {0.1, 0}, 1},
                                    {},
                                    {"LevelM40", {0.15, 0}, 1},
                                    {"LevelM40", {0.2, 0}, 1},
                                    {"LevelM40", {0.2, -0.03}, 1}
                                };
                            };
                            class VALM_1_40 {
                                type = "text";
                                source = "static";
                                text = -40;
                                align = "left";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelM40", {-0.21, -0.05}, 1};
                                right[] = {"LevelM40", {-0.16, -0.05}, 1};
                                down[] = {"LevelM40", {-0.21, 0}, 1};
                            };
                            class VALM_2_40: VALM_1_40 {
                                align = "right";
                                pos[] = {"LevelM40", {0.21, -0.05}, 1};
                                right[] = {"LevelM40", {0.26, -0.05}, 1};
                                down[] = {"LevelM40", {0.21, 0}, 1};
                            };
                            class LevelP40: Level0 {
                                type = "line";
                                width = 3;
                                points[] = {
                                    {"LevelP40", {-0.2, 0.03}, 1},
                                    {"LevelP40", {-0.2, 0}, 1},
                                    {"LevelP40", {-0.05, 0}, 1},
                                    {},
                                    {"LevelP40", {0.05, 0}, 1},
                                    {"LevelP40", {0.2, 0}, 1},
                                    {"LevelP40", {0.2, 0.03}, 1}
                                };
                            };
                            class VALP_1_40 {
                                type = "text";
                                source = "static";
                                text = "40";
                                align = "left";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelP40", {-0.21, 0}, 1};
                                right[] = {"LevelP40", {-0.16, 0}, 1};
                                down[] = {"LevelP40", {-0.21, 0.05}, 1};
                            };
                            class VALP_2_40: VALP_1_40 {
                                align = "right";
                                pos[] = {"LevelP40", {0.21, 0}, 1};
                                right[] = {"LevelP40", {0.26, 0}, 1};
                                down[] = {"LevelP40", {0.21, 0.05}, 1};
                            };
                            class LevelM50: Level0 {
                                type = "line";
                                width = 3;
                                points[] = {
                                    {"LevelM50", {-0.2, -0.03}, 1},
                                    {"LevelM50", {-0.2, 0}, 1},
                                    {"LevelM50", {-0.15, 0}, 1},
                                    {},
                                    {"LevelM50", {-0.1, 0}, 1},
                                    {"LevelM50", {-0.05, 0}, 1},
                                    {},
                                    {"LevelM50", {0.05, 0}, 1},
                                    {"LevelM50", {0.1, 0}, 1},
                                    {},
                                    {"LevelM50", {0.15, 0}, 1},
                                    {"LevelM50", {0.2, 0}, 1},
                                    {"LevelM50", {0.2, -0.03}, 1}
                                };
                            };
                            class VALM_1_50 {
                                type = "text";
                                source = "static";
                                text = -50;
                                align = "left";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelM50", {-0.21, -0.05}, 1};
                                right[] = {"LevelM50", {-0.16, -0.05}, 1};
                                down[] = {"LevelM50", {-0.21, 0}, 1};
                            };
                            class VALM_2_50: VALM_1_50 {
                                align = "right";
                                pos[] = {"LevelM50", {0.21, -0.05}, 1};
                                right[] = {"LevelM50", {0.26, -0.05}, 1};
                                down[] = {"LevelM50", {0.21, 0}, 1};
                            };
                            class LevelP50: Level0 {
                                type = "line";
                                width = 3;
                                points[] = {
                                    {"LevelP50", {-0.2, 0.03}, 1},
                                    {"LevelP50", {-0.2, 0}, 1},
                                    {"LevelP50", {-0.05, 0}, 1},
                                    {},
                                    {"LevelP50", {0.05, 0}, 1},
                                    {"LevelP50", {0.2, 0}, 1},
                                    {"LevelP50", {0.2, 0.03}, 1}
                                };
                            };
                            class VALP_1_50 {
                                type = "text";
                                source = "static";
                                text = "50";
                                align = "left";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelP50", {-0.21, 0}, 1};
                                right[] = {"LevelP50", {-0.16, 0}, 1};
                                down[] = {"LevelP50", {-0.21, 0.05}, 1};
                            };
                            class VALP_2_50: VALP_1_50 {
                                align = "right";
                                pos[] = {"LevelP50", {0.21, 0}, 1};
                                right[] = {"LevelP50", {0.26, 0}, 1};
                                down[] = {"LevelP50", {0.21, 0.05}, 1};
                            };
                        };
                    };
                    class StaticBank {
                        type = "line";
                        width = 3;
                        points[] = {
                            {{0.4782, 0.251}, 1},
                            {{0.4773, 0.241}, 1},
                            {},
                            {{0.4566, 0.2538}, 1},
                            {{0.4549, 0.2439}, 1},
                            {},
                            {{0.4353, 0.2585}, 1},
                            {{0.4301, 0.2392}, 1},
                            {},
                            {{0.4145, 0.2651}, 1},
                            {{0.4111, 0.2557}, 1},
                            {},
                            {{0.3943, 0.2734}, 1},
                            {{0.3901, 0.2644}, 1},
                            {},
                            {{0.375, 0.2835}, 1},
                            {{0.365, 0.2662}, 1},
                            {},
                            {{0.3232, 0.3232}, 1},
                            {{0.3091, 0.3091}, 1},
                            {},
                            {{0.2835, 0.375}, 1},
                            {{0.2662, 0.365}, 1},
                            {},
                            {{"0.5 + (0.5- 0.4782)", 0.251}, 1},
                            {{"0.5 + (0.5- 0.4773)", 0.241}, 1},
                            {},
                            {{"0.5 + (0.5- 0.4566)", 0.2538}, 1},
                            {{"0.5 + (0.5- 0.4549)", 0.2439}, 1},
                            {},
                            {{"0.5 + (0.5- 0.4353)", 0.2585}, 1},
                            {{"0.5 + (0.5- 0.4301)", 0.2392}, 1},
                            {},
                            {{"0.5 + (0.5- 0.4145)", 0.2651}, 1},
                            {{"0.5 + (0.5- 0.4111)", 0.2557}, 1},
                            {},
                            {{"0.5 + (0.5- 0.3943)", 0.2734}, 1},
                            {{"0.5 + (0.5- 0.3901)", 0.2644}, 1},
                            {},
                            {{"0.5 + (0.5- 0.3750)", 0.2835}, 1},
                            {{"0.5 + (0.5- 0.3650)", 0.2662}, 1},
                            {},
                            {{"0.5 + (0.5- 0.3232)", 0.3232}, 1},
                            {{"0.5 + (0.5- 0.3091)", 0.3091}, 1},
                            {},
                            {{"0.5 + (0.5- 0.2835)", 0.375}, 1},
                            {{"0.5 + (0.5- 0.2662)", 0.365}, 1},
                            {},
                            {{0.5, "0.5 - 0.25"}, 1},
                            {{0.5, "0.5 - 0.28"}, 1}
                        };
                    };
                    class HorizonBankRot {
                        type = "line";
                        width = 3;
                        points[] = {
                            {"HorizonBankRot", {0, 0.25}, 1},
                            {"HorizonBankRot", {-0.01, 0.23}, 1},
                            {"HorizonBankRot", {0.01, 0.23}, 1},
                            {"HorizonBankRot", {0, 0.25}, 1}
                        };
                    };
                    class Waterline {
                        type = "line";
                        width = 7;
                        points[] = {
                            {{0.45, 0.5}, 1},
                            {{0.48, 0.5}, 1},
                            {{0.49, 0.525}, 1},
                            {{0.5, 0.5}, 1},
                            {{0.51, 0.525}, 1},
                            {{0.52, 0.5}, 1},
                            {{0.55, 0.5}, 1}
                        };
                    };
                    class Slip_ball_group {
                        class Slip_bars {
                            type = "line";
                            width = 4;
                            points[] = {
                                {{"0.5-0.018", "0.9-0.04"}, 1},
                                {{"0.5-0.018", "0.9-0.075"}, 1},
                                {},
                                {{"0.5+0.018", "0.9-0.04"}, 1},
                                {{"0.5+0.018", "0.9-0.075"}, 1},
                                {},
                                {{"0.5+0.2", "0.9-0.04"}, 1},
                                {{"0.5-0.2", "0.9-0.04"}, 1}
                            };
                        };
                        class Slip_ball {
                            type = "line";
                            width = 6;
                            points[] = {
                                {"Velocity_slip", 1, {"0 * 0.75", "-0.02 * 0.75"}, 1},
                                {"Velocity_slip", 1, {"0.0099999998 * 0.75", "-0.01732 * 0.75"}, 1},
                                {"Velocity_slip", 1, {"0.01732 * 0.75", "-0.0099999998 * 0.75"}, 1},
                                {"Velocity_slip", 1, {"0.02 * 0.75", "0 * 0.75"}, 1},
                                {"Velocity_slip", 1, {"0.01732 * 0.75", "0.0099999998 * 0.75"}, 1},
                                {"Velocity_slip", 1, {"0.0099999998 * 0.75", "0.01732 * 0.75"}, 1},
                                {"Velocity_slip", 1, {"0 * 0.75", "0.02 * 0.75"}, 1},
                                {"Velocity_slip", 1, {"-0.0099999998 * 0.75", "0.01732 * 0.75"}, 1},
                                {"Velocity_slip", 1, {"-0.01732 * 0.75", "0.0099999998 * 0.75"}, 1},
                                {"Velocity_slip", 1, {"-0.02 * 0.75", "0 * 0.75"}, 1},
                                {"Velocity_slip", 1, {"-0.01732 * 0.75", "-0.0099999998 * 0.75"}, 1},
                                {"Velocity_slip", 1, {"-0.0099999998 * 0.75", "-0.01732 * 0.75"}, 1},
                                {"Velocity_slip", 1, {"0 * 0.75", "-0.02 * 0.75"}, 1},
                                {},
                                {"Velocity_slip", 1, {"0 * 0.6", "-0.02 * 0.6"}, 1},
                                {"Velocity_slip", 1, {"0.0099999998 * 0.6", "-0.01732 * 0.6"}, 1},
                                {"Velocity_slip", 1, {"0.01732 * 0.6", "-0.0099999998 * 0.6"}, 1},
                                {"Velocity_slip", 1, {"0.02 * 0.6", "0 * 0.6"}, 1},
                                {"Velocity_slip", 1, {"0.01732 * 0.6", "0.0099999998 * 0.6"}, 1},
                                {"Velocity_slip", 1, {"0.0099999998 * 0.6", "0.01732 * 0.6"}, 1},
                                {"Velocity_slip", 1, {"0 * 0.6", "0.02 * 0.6"}, 1},
                                {"Velocity_slip", 1, {"-0.0099999998 * 0.6", "0.01732 * 0.6"}, 1},
                                {"Velocity_slip", 1, {"-0.01732 * 0.6", "0.0099999998 * 0.6"}, 1},
                                {"Velocity_slip", 1, {"-0.02 * 0.6", "0 * 0.6"}, 1},
                                {"Velocity_slip", 1, {"-0.01732 * 0.6", "-0.0099999998 * 0.6"}, 1},
                                {"Velocity_slip", 1, {"-0.0099999998 * 0.6", "-0.01732 * 0.6"}, 1},
                                {"Velocity_slip", 1, {"0 * 0.6", "-0.02 * 0.6"}, 1},
                                {},
                                {"Velocity_slip", 1, {"0 * 0.5", "-0.02 * 0.5"}, 1},
                                {"Velocity_slip", 1, {"0.0099999998 * 0.5", "-0.01732 * 0.5"}, 1},
                                {"Velocity_slip", 1, {"0.01732 * 0.5", "-0.0099999998 * 0.5"}, 1},
                                {"Velocity_slip", 1, {"0.02 * 0.5", "0 * 0.5"}, 1},
                                {"Velocity_slip", 1, {"0.01732 * 0.5", "0.0099999998 * 0.5"}, 1},
                                {"Velocity_slip", 1, {"0.0099999998 * 0.5", "0.01732 * 0.5"}, 1},
                                {"Velocity_slip", 1, {"0 * 0.5", "0.02 * 0.5"}, 1},
                                {"Velocity_slip", 1, {"-0.0099999998 * 0.5", "0.01732 * 0.5"}, 1},
                                {"Velocity_slip", 1, {"-0.01732 * 0.5", "0.0099999998 * 0.5"}, 1},
                                {"Velocity_slip", 1, {"-0.02 * 0.5", "0 * 0.5"}, 1},
                                {"Velocity_slip", 1, {"-0.01732 * 0.5", "-0.0099999998 * 0.5"}, 1},
                                {"Velocity_slip", 1, {"-0.0099999998 * 0.5", "-0.01732 * 0.5"}, 1},
                                {"Velocity_slip", 1, {"0 * 0.5", "-0.02 * 0.5"}, 1},
                                {},
                                {"Velocity_slip", 1, {"0 * 0.4", "-0.02 * 0.4"}, 1},
                                {"Velocity_slip", 1, {"0.0099999998 * 0.4", "-0.01732 * 0.4"}, 1},
                                {"Velocity_slip", 1, {"0.01732 * 0.4", "-0.0099999998 * 0.4"}, 1},
                                {"Velocity_slip", 1, {"0.02 * 0.4", "0 * 0.4"}, 1},
                                {"Velocity_slip", 1, {"0.01732 * 0.4", "0.0099999998 * 0.4"}, 1},
                                {"Velocity_slip", 1, {"0.0099999998 * 0.4", "0.01732 * 0.4"}, 1},
                                {"Velocity_slip", 1, {"0 * 0.4", "0.02 * 0.4"}, 1},
                                {"Velocity_slip", 1, {"-0.0099999998 * 0.4", "0.01732 * 0.4"}, 1},
                                {"Velocity_slip", 1, {"-0.01732 * 0.4", "0.0099999998 * 0.4"}, 1},
                                {"Velocity_slip", 1, {"-0.02 * 0.4", "0 * 0.4"}, 1},
                                {"Velocity_slip", 1, {"-0.01732 * 0.4", "-0.0099999998 * 0.4"}, 1},
                                {"Velocity_slip", 1, {"-0.0099999998 * 0.4", "-0.01732 * 0.4"}, 1},
                                {"Velocity_slip", 1, {"0 * 0.4", "-0.02 * 0.4"}, 1},
                                {},
                                {"Velocity_slip", 1, {"0 * 0.30", "-0.02 * 0.30"}, 1},
                                {"Velocity_slip", 1, {"0.0099999998 * 0.30", "-0.01732 * 0.30"}, 1},
                                {"Velocity_slip", 1, {"0.01732 * 0.30", "-0.0099999998 * 0.30"}, 1},
                                {"Velocity_slip", 1, {"0.02 * 0.30", "0 * 0.30"}, 1},
                                {"Velocity_slip", 1, {"0.01732 * 0.30", "0.0099999998 * 0.30"}, 1},
                                {"Velocity_slip", 1, {"0.0099999998 * 0.30", "0.01732 * 0.30"}, 1},
                                {"Velocity_slip", 1, {"0 * 0.30", "0.02 * 0.30"}, 1},
                                {"Velocity_slip", 1, {"-0.0099999998 * 0.30", "0.01732 * 0.30"}, 1},
                                {"Velocity_slip", 1, {"-0.01732 * 0.30", "0.0099999998 * 0.30"}, 1},
                                {"Velocity_slip", 1, {"-0.02 * 0.30", "0 * 0.30"}, 1},
                                {"Velocity_slip", 1, {"-0.01732 * 0.30", "-0.0099999998 * 0.30"}, 1},
                                {"Velocity_slip", 1, {"-0.0099999998 * 0.30", "-0.01732 * 0.30"}, 1},
                                {"Velocity_slip", 1, {"0 * 0.30", "-0.02 * 0.30"}, 1},
                                {},
                                {"Velocity_slip", 1, {"0 * 0.20", "-0.02 * 0.20"}, 1},
                                {"Velocity_slip", 1, {"0.0099999998 * 0.20", "-0.01732 * 0.20"}, 1},
                                {"Velocity_slip", 1, {"0.01732 * 0.20", "-0.0099999998 * 0.20"}, 1},
                                {"Velocity_slip", 1, {"0.02 * 0.20", "0 * 0.20"}, 1},
                                {"Velocity_slip", 1, {"0.01732 * 0.20", "0.0099999998 * 0.20"}, 1},
                                {"Velocity_slip", 1, {"0.0099999998 * 0.20", "0.01732 * 0.20"}, 1},
                                {"Velocity_slip", 1, {"0 * 0.20", "0.02 * 0.20"}, 1},
                                {"Velocity_slip", 1, {"-0.0099999998 * 0.20", "0.01732 * 0.20"}, 1},
                                {"Velocity_slip", 1, {"-0.01732 * 0.20", "0.0099999998 * 0.20"}, 1},
                                {"Velocity_slip", 1, {"-0.02 * 0.20", "0 * 0.20"}, 1},
                                {"Velocity_slip", 1, {"-0.01732 * 0.20", "-0.0099999998 * 0.20"}, 1},
                                {"Velocity_slip", 1, {"-0.0099999998 * 0.20", "-0.01732 * 0.20"}, 1},
                                {"Velocity_slip", 1, {"0 * 0.20", "-0.02 * 0.20"}, 1},
                                {},
                                {"Velocity_slip", 1, {"0 * 0.1", "-0.02 * 0.1"}, 1},
                                {"Velocity_slip", 1, {"0.0099999998 * 0.1", "-0.01732 * 0.1"}, 1},
                                {"Velocity_slip", 1, {"0.01732 * 0.1", "-0.0099999998 * 0.1"}, 1},
                                {"Velocity_slip", 1, {"0.02 * 0.1", "0 * 0.1"}, 1},
                                {"Velocity_slip", 1, {"0.01732 * 0.1", "0.0099999998 * 0.1"}, 1},
                                {"Velocity_slip", 1, {"0.0099999998 * 0.1", "0.01732 * 0.1"}, 1},
                                {"Velocity_slip", 1, {"0 * 0.1", "0.02 * 0.1"}, 1},
                                {"Velocity_slip", 1, {"-0.0099999998 * 0.1", "0.01732 * 0.1"}, 1},
                                {"Velocity_slip", 1, {"-0.01732 * 0.1", "0.0099999998 * 0.1"}, 1},
                                {"Velocity_slip", 1, {"-0.02 * 0.1", "0 * 0.1"}, 1},
                                {"Velocity_slip", 1, {"-0.01732 * 0.1", "-0.0099999998 * 0.1"}, 1},
                                {"Velocity_slip", 1, {"-0.0099999998 * 0.1", "-0.01732 * 0.1"}, 1},
                                {"Velocity_slip", 1, {"0 * 0.1", "-0.02 * 0.1"}, 1}
                            };
                        };
                    };
                    class LightsGroup {
                        type = "group";
                        condition = "lights";
                        class LightsText {
                            type = "text";
                            source = "static";
                            text = "LIGHTS";
                            align = "right";
                            scale = 1;
                            pos[] = {{0.03, "0.53 + 0.055"}, 1};
                            right[] = {{0.07, "0.53 + 0.055"}, 1};
                            down[] = {{0.03, "0.53 + 0.095"}, 1};
                        };
                    };
                    class CollisionLightsGroup {
                        type = "group";
                        condition = "collisionlights";
                        class CollisionLightsText {
                            type = "text";
                            source = "static";
                            text = "A-COL";
                            align = "right";
                            scale = 1;
                            pos[] = {{0.03, "0.53 + 0.105"}, 1};
                            right[] = {{0.07, "0.53 + 0.105"}, 1};
                            down[] = {{0.03, "0.53 + 0.145"}, 1};
                        };
                    };
                    class GearGroup {
                        type = "group";
                        condition = "ils";
                        class GearText {
                            type = "text";
                            source = "static";
                            text = "GEAR";
                            align = "right";
                            scale = 1;
                            pos[] = {{0.03, "0.53 + 0.155"}, 1};
                            right[] = {{0.07, "0.53 + 0.155"}, 1};
                            down[] = {{0.03, "0.53 + 0.195"}, 1};
                        };
                    };
                    class SpeedNumber {
                        type = "text";
                        align = "right";
                        scale = 1;
                        source = "speed";
                        sourceScale = 3.6;
                        pos[] = {{0.03, 0.475}, 1};
                        right[] = {{0.08, 0.475}, 1};
                        down[] = {{0.03, 0.525}, 1};
                    };
                    class TorqueNumber {
                        condition = "simulRTD";
                        class Torque_number {
                            type = "text";
                            align = "left";
                            scale = 1;
                            source = "rtdRotorTorque";
                            sourceScale = 488;
                            pos[] = {{0.065, 0.175}, 1};
                            right[] = {{0.115, 0.175}, 1};
                            down[] = {{0.065, 0.225}, 1};
                        };
                        class Torquetext {
                            type = "text";
                            source = "static";
                            text = "%";
                            align = "right";
                            scale = 1;
                            pos[] = {{0.07, 0.175}, 1};
                            right[] = {{0.12, 0.175}, 1};
                            down[] = {{0.07, 0.225}, 1};
                        };
                    };
                    class AltNumber: SpeedNumber {
                        align = "right";
                        source = "altitudeAGL";
                        sourceScale = 1;
                        pos[] = {{0.83, 0.475}, 1};
                        right[] = {{0.88, 0.475}, 1};
                        down[] = {{0.83, 0.525}, 1};
                    };
                    class ASLNumber {
                        type = "text";
                        source = "altitudeASL";
                        sourceScale = 1;
                        align = "right";
                        scale = 1;
                        pos[] = {{0.835, 0.18}, 1};
                        right[] = {{0.875, 0.18}, 1};
                        down[] = {{0.835, 0.22}, 1};
                    };
                    class VspeedScalePosta {
                        type = "line";
                        width = 5;
                        points[] = {
                            {{0.98, 0.2}, 1},
                            {{1, 0.2}, 1},
                            {},
                            {{0.93, 0.2}, 1},
                            {{0.95, 0.2}, 1},
                            {},
                            {{0.98, 0.35}, 1},
                            {{1, 0.35}, 1},
                            {},
                            {{0.93, 0.35}, 1},
                            {{0.95, 0.35}, 1},
                            {},
                            {{0.94, 0.38}, 1},
                            {{0.95, 0.38}, 1},
                            {},
                            {{0.94, 0.41}, 1},
                            {{0.95, 0.41}, 1},
                            {},
                            {{0.94, 0.44}, 1},
                            {{0.95, 0.44}, 1},
                            {},
                            {{0.94, 0.47}, 1},
                            {{0.95, 0.47}, 1},
                            {},
                            {{0.98, 0.5}, 1},
                            {{1, 0.5}, 1},
                            {},
                            {{0.93, 0.5}, 1},
                            {{0.95, 0.5}, 1},
                            {},
                            {{0.94, 0.53}, 1},
                            {{0.95, 0.53}, 1},
                            {},
                            {{0.94, 0.56}, 1},
                            {{0.95, 0.56}, 1},
                            {},
                            {{0.94, 0.59}, 1},
                            {{0.95, 0.59}, 1},
                            {},
                            {{0.94, 0.62}, 1},
                            {{0.95, 0.62}, 1},
                            {},
                            {{0.98, 0.65}, 1},
                            {{1, 0.65}, 1},
                            {},
                            {{0.93, 0.65}, 1},
                            {{0.95, 0.65}, 1},
                            {},
                            {{0.99, 0.68}, 1},
                            {{0.98, 0.68}, 1},
                            {},
                            {{0.99, 0.71}, 1},
                            {{0.98, 0.71}, 1},
                            {},
                            {{0.99, 0.74}, 1},
                            {{0.98, 0.74}, 1},
                            {},
                            {{0.99, 0.77}, 1},
                            {{0.98, 0.77}, 1},
                            {},
                            {{0.98, 0.8}, 1},
                            {{1, 0.8}, 1},
                            {},
                            {{0.93, 0.8}, 1},
                            {{0.95, 0.8}, 1},
                            {}
                        };
                    };
                    class RadarAltitudeBand {
                        clipTL[] = {0, 0.2};
                        clipBR[] = {1, 0.8};
                        class radarbanda {
                            type = "line";
                            width = 17;
                            points[] = {{"RadarAltitudeBone", {0, 0}, 1}, {"RadarAltitudeBone", {0, 0.6}, 1}};
                        };
                    };
                    class VspeedBand {
                        type = "line";
                        width = 3;
                        points[] = {
                            {"VspeedBone", {-0.01, 0}, 1},
                            {"VspeedBone", {-0.025, -0.015}, 1},
                            {"VspeedBone", {-0.025, 0.015}, 1},
                            {"VspeedBone", {-0.01, 0}, 1},
                            {}
                        };
                    };
                    class HeadingNumber: SpeedNumber {
                        source = "heading";
                        sourceScale = 1;
                        align = "center";
                        pos[] = {{0.5, 0.045}, 1};
                        right[] = {{0.56, 0.045}, 1};
                        down[] = {{0.5, "0.045 + 0.06"}, 1};
                    };
                    class Center_box {
                        type = "line";
                        width = 1.5;
                        points[] = {
                            {{0.45, "0.02 + 0.085 - 0.06"}, 1},
                            {{"0.45 + 0.10", "0.02 + 0.085 - 0.06"}, 1},
                            {{"0.45 + 0.10", "0.02 + 0.085"}, 1},
                            {{0.45, "0.02 + 0.085"}, 1},
                            {{0.45, "0.02 + 0.085 - 0.06"}, 1}
                        };
                    };
                    class HeadingArrow {
                        type = "line";
                        width = 7;
                        points[] = {{{"0.5", "0.128 + 0.03"}, 1}, {{0.5, 0.128}, 1}};
                    };
                    class HeadingScale_LEFT {
                        clipTL[] = {0, 0};
                        clipBR[] = {0.45, 1};
                        class Heading_group {
                            type = "scale";
                            horizontal = 1;
                            source = "heading";
                            sourceScale = 1;
                            width = 5;
                            top = 0.12;
                            center = 0.5;
                            bottom = 0.88;
                            lineXleft = "0.03 + 0.085";
                            lineYright = "0.02 + 0.085";
                            lineXleftMajor = "0.04 + 0.085";
                            lineYrightMajor = "0.02 + 0.085";
                            majorLineEach = 3;
                            numberEach = 3;
                            step = 10;
                            stepSize = "0.05";
                            align = "center";
                            scale = 1;
                            pos[] = {0.12, "0.0 + 0.065"};
                            right[] = {0.16, "0.0 + 0.065"};
                            down[] = {0.12, "0.04 + 0.065"};
                        };
                    };
                    class HeadingScale_RIGHT {
                        clipTL[] = {0.55, 0};
                        clipBR[] = {1, 1};
                        class Heading_group {
                            type = "scale";
                            horizontal = 1;
                            source = "heading";
                            sourceScale = 1;
                            width = 5;
                            top = 0.12;
                            center = 0.5;
                            bottom = 0.88;
                            lineXleft = "0.03 + 0.085";
                            lineYright = "0.02 + 0.085";
                            lineXleftMajor = "0.04 + 0.085";
                            lineYrightMajor = "0.02 + 0.085";
                            majorLineEach = 3;
                            numberEach = 3;
                            step = 10;
                            stepSize = "0.05";
                            align = "center";
                            scale = 1;
                            pos[] = {0.12, "0.0 + 0.065"};
                            right[] = {0.16, "0.0 + 0.065"};
                            down[] = {0.12, "0.04 + 0.065"};
                        };
                    };
                    class HeadingScale_BOTTOM {
                        clipTL[] = {0.45, "0.02 + 0.085"};
                        clipBR[] = {"0.45 + 0.10", 1};
                        class Heading_group {
                            type = "scale";
                            horizontal = 1;
                            source = "heading";
                            sourceScale = 1;
                            width = 5;
                            top = 0.12;
                            center = 0.5;
                            bottom = 0.88;
                            lineXleft = "0.03 + 0.085";
                            lineYright = "0.02 + 0.085";
                            lineXleftMajor = "0.04 + 0.085";
                            lineYrightMajor = "0.02 + 0.085";
                            majorLineEach = 3;
                            numberEach = 3;
                            step = 10;
                            stepSize = "0.05";
                            align = "center";
                            scale = 1;
                            pos[] = {0.12, "0.0 + 0.065"};
                            right[] = {0.16, "0.0 + 0.065"};
                            down[] = {0.12, "0.04 + 0.065"};
                        };
                    };
                    class Fuel_Text {
                        type = "text";
                        source = "static";
                        text = "Fuel";
                        align = "right";
                        scale = 1;
                        pos[] = {{0.85, 0.86}, 1};
                        right[] = {{0.89, 0.86}, 1};
                        down[] = {{0.85, 0.9}, 1};
                    };
                    class Fuel_Number {
                        type = "text";
                        source = "fuel";
                        sourceScale = 100;
                        align = "right";
                        scale = 1;
                        pos[] = {{0.92, 0.86}, 1};
                        right[] = {{0.96, 0.86}, 1};
                        down[] = {{0.92, 0.9}, 1};
                    };
                };
                helmetMountedDisplay = 1;
                helmetPosition[] = {-0.04, 0.04, 0.1};
                helmetRight[] = {0.08, 0, 0};
                helmetDown[] = {0, -0.08, 0};
            };
            class rhsusf_CH53_HUD_2 {
                topLeft = "HUD_top_left";
                topRight = "HUD_top_right";
                bottomLeft = "HUD_bottom_left";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0.15, 1, 0.15, 1};
                enableParallax = 0;
                class Bones {
                    class Velocity {
                        type = "vector";
                        source = "velocity";
                        pos0[] = {0.5, 0.5};
                        pos10[] = {0.75, 0.75};
                    };
                    class ForwardVec1 {
                        type = "vector";
                        source = "forward";
                        pos0[] = {0, 0};
                        pos10[] = {0.25, 0.25};
                    };
                    class ForwardVec {
                        type = "vector";
                        source = "forward";
                        pos0[] = {0, 0};
                        pos10[] = {0.253, 0.253};
                    };
                };
                class Draw {
                    color[] = {0.18, 1, 0.18};
                    alpha = 1;
                    condition = "on";
                    class PlaneMovementCrosshair {
                        type = "line";
                        width = 7;
                        points[] = {
                            {"ForwardVec1", 1, "Velocity", 1, {0, -0.02}, 1},
                            {"ForwardVec1", 1, "Velocity", 1, {0.01, -0.01732}, 1},
                            {"ForwardVec1", 1, "Velocity", 1, {0.01732, -0.01}, 1},
                            {"ForwardVec1", 1, "Velocity", 1, {0.02, 0}, 1},
                            {"ForwardVec1", 1, "Velocity", 1, {0.01732, 0.01}, 1},
                            {"ForwardVec1", 1, "Velocity", 1, {0.01, 0.01732}, 1},
                            {"ForwardVec1", 1, "Velocity", 1, {0, 0.02}, 1},
                            {"ForwardVec1", 1, "Velocity", 1, {-0.01, 0.01732}, 1},
                            {"ForwardVec1", 1, "Velocity", 1, {-0.01732, 0.01}, 1},
                            {"ForwardVec1", 1, "Velocity", 1, {-0.02, 0}, 1},
                            {"ForwardVec1", 1, "Velocity", 1, {-0.01732, -0.01}, 1},
                            {"ForwardVec1", 1, "Velocity", 1, {-0.01, -0.01732}, 1},
                            {"ForwardVec1", 1, "Velocity", 1, {0, -0.02}, 1},
                            {},
                            {"ForwardVec1", 1, "Velocity", 1, {0.04, 0}, 1},
                            {"ForwardVec1", 1, "Velocity", 1, {0.02, 0}, 1},
                            {},
                            {"ForwardVec1", 1, "Velocity", 1, {-0.04, 0}, 1},
                            {"ForwardVec1", 1, "Velocity", 1, {-0.02, 0}, 1},
                            {},
                            {"ForwardVec1", 1, "Velocity", 1, {0, -0.04}, 1},
                            {"ForwardVec1", 1, "Velocity", 1, {0, -0.02}, 1}
                        };
                    };
                    class AC_Centerline {
                        type = "group";
                        condition = "on";
                        class AC_Cross {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"ForwardVec", 1, {" -0.006 + 0.5", "0 + 0.5"}, 1},
                                {"ForwardVec", 1, {" 0.006 + 0.5", "0 + 0.5"}, 1},
                                {},
                                {"ForwardVec", 1, {" -0.0 + 0.5", "0.006 + 0.5"}, 1},
                                {"ForwardVec", 1, {" 0.0 + 0.5", "-0.006 + 0.5"}, 1}
                            };
                        };
                    };
                };
                helmetMountedDisplay = 1;
                helmetPosition[] = {-0.035, 0.035, 0.1};
                helmetRight[] = {0.07, 0, 0};
                helmetDown[] = {0, -0.07, 0};
            };
        };
        class Reflectors {
            class Left {
                color[] = {7000, 7500, 10000, 1};
                ambient[] = {100, 100, 100, 0};
                intensity = 50;
                size = 1;
                innerAngle = 5;
                outerAngle = 75;
                coneFadeCoef = 10;
                position = "LandLeft";
                direction = "LandLeftDir";
                hitpoint = "LandLeft";
                selection = "LandLeft";
                useFlare = 1;
                flareSize = 8;
                flareMaxDistance = 300;
                dayLight = 0;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 0;
                    hardLimitStart = 200;
                    hardLimitEnd = 250;
                };
            };
            class Right: Left {
                position = "LandRight";
                direction = "LandRightDir";
                hitpoint = "LandRight";
                selection = "LandRight";
            };
        };
        class Exhausts {
            class Exhaust1 {
                position = "exhaust_1_pos";
                direction = "exhaust_1_dir";
                effect = "ExhaustsEffectHeliBig";
            };
            class Exhaust2 {
                position = "exhaust_2_pos";
                direction = "exhaust_2_dir";
                effect = "ExhaustsEffectHeliBig";
            };
            class Exhaust3 {
                position = "exhaust_3_pos";
                direction = "exhaust_3_dir";
                effect = "ExhaustsEffectHeliBig";
            };
        };
        simulation = "helicopterrtd";
        class RotorLibHelicopterProperties: RotorLibHelicopterProperties {
            RTDconfig = "rhsusf\addons\rhsusf_c_ch53\RTD_CH53E2.xml";
            autoHoverCorrection[] = {4.7, 3.8, 0};
            defaultCollective = 0.665;
            retreatBladeStallWarningSpeed = 87.4556;
            maxTorque = 4900;
            stressDamagePerSec = 0.00333333;
            maxHorizontalStabilizerLeftStress = 10000;
            maxHorizontalStabilizerRightStress = 10000;
            maxVerticalStabilizerStress = 10000;
            horizontalWingsAngleCollMin = 0;
            horizontalWingsAngleCollMax = 0;
            maxMainRotorStress = 570000;
            maxTailRotorStress = 120000;
        };
        class Eventhandlers: Eventhandlers {
            class RHSUSF_EventHandlers {
                init = "_this call rhsusf_fnc_ch53_init";
                postInit = "_this call rhs_fnc_reapplyTextures";
            };
        };
        class AnimationSources {
            class cargolights_hide {
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
            };
            class cabinlights_hide: cargolights_hide {};
            class mainRotor_folded {
                source = "door";
                animPeriod = 10;
                initPhase = 0;
            };
            class Ramp {
                source = "user";
                animPeriod = 4;
                initPhase = 0;
                sound = "CH53_Rampsound";
            };
            class hmg_hide {
                source = "user";
                animPeriod = 0;
                initPhase = 1;
            };
            class hide_winch {
                source = "user";
                displayname = "hide winch";
                animPeriod = 0;
                initPhase = 0;
            };
            class hide_ANAAQ24 {
                source = "user";
                displayname = "hide DIRCM";
                animPeriod = 0;
                initPhase = 0;
            };
            class mainRotor_folded_handler: Ramp {
                animPeriod = 0.00001;
                initPhase = 0;
                mass = 1;
                displayName = "fold rotors";
                onPhaseChanged = "_this call rhsusf_fnc_ch53_fold";
            };
            class hide_cargo {
                source = "user";
                mass = -20;
                displayName = "hide cargo benches";
                animPeriod = 0.00001;
                initPhase = 0;
                onPhaseChanged = "(_this select 0) lockCargo ((_this select 1)==1)";
            };
            class HitGlass1 {
                source = "Hit";
                hitpoint = "HitGlass1";
                raw = 1;
            };
            class HitGlass2: HitGlass1 {
                hitpoint = "HitGlass2";
            };
            class HitGlass3: HitGlass1 {
                hitpoint = "HitGlass3";
            };
            class HitGlass4: HitGlass1 {
                hitpoint = "HitGlass4";
            };
            class HitGlass5: HitGlass1 {
                hitpoint = "HitGlass5";
            };
            class HitGlass6: HitGlass1 {
                hitpoint = "HitGlass6";
            };
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
            class muzzle_rot_hmg_1 {
                source = "user";
                animPeriod = 0;
                initPhase = 0;
            };
            class reload_hmg_1 {
                source = "user";
                animPeriod = 0;
                initPhase = 0;
            };
            class mainturret {
                source = "user";
                animPeriod = 0;
                initPhase = 0;
            };
            class maingun {
                source = "user";
                animPeriod = 0;
                initPhase = 0;
            };
            class ramp_hmg {
                source = "user";
                animPeriod = 0;
                initPhase = 0;
            };
        };
        weapons[] = {"rhsusf_weap_ANAAQ24"};
        magazines[] = {
            "rhsusf_mag_DIRCM",
            "rhsusf_mag_DIRCM",
            "rhsusf_mag_DIRCM",
            "rhsusf_mag_DIRCM",
            "rhsusf_mag_DIRCM",
            "rhsusf_mag_DIRCM",
            "rhsusf_mag_DIRCM",
            "rhsusf_mag_DIRCM",
            "rhsusf_mag_DIRCM",
            "rhsusf_mag_DIRCM"
        };
        numberPhysicalWheels = 3;
        unitInfoType = "RHSUSF_RscUnitInfoAir";
        unitInfoTypeRTD = "RscUnitInfoAirRTDFullDigital";
        class UserActions {
            class Pack {
                displayName = "Pack";
                displayNameDefault = "Pack";
                position = "PackAction";
                radius = 10;
                onlyForPlayer = 1;
                condition = "(!isEngineOn this) AND {(this doorPhase 'mainRotor_folded' isEqualTo 0) AND ((driver this) isEqualTo (call rhs_fnc_findPlayer)) AND (speed this == 0)}";
                statement = "[this,1] call rhsusf_fnc_ch53_fold";
            };
            class unPack {
                displayName = "UnPack";
                displayNameDefault = "Unpack";
                position = "PackAction";
                radius = 10;
                onlyForPlayer = 1;
                condition = "(this doorPhase 'mainRotor_folded' isEqualTo 1) AND ((driver this) isEqualTo (call rhs_fnc_findPlayer))";
                statement = "[this,0] call rhsusf_fnc_ch53_fold";
            };
            class RampOpen {
                displayName = "Open Ramp";
                position = "ramp action";
                showWindow = 0;
                radius = 5;
                condition = "this animationPhase 'ramp_bottom' <= 0.56 && ((driver this) isEqualTo (call rhs_fnc_findPlayer));";
                statement = "this animate ['ramp_bottom',1];this animate ['ramp_top',1];[this] call rhs_fnc_cargoDetach";
                onlyforplayer = 0;
                shortcut = "user12";
            };
            class RampLevel: RampOpen {
                displayName = "Level Ramp";
                condition = "this animationPhase 'ramp_bottom' != 0.56 && ((driver this) isEqualTo (call rhs_fnc_findPlayer));";
                statement = "this animate ['ramp_bottom',0.56];this animate ['ramp_top',1];";
                shortcut = "user13";
            };
            class RampClose: RampOpen {
                displayName = "Close Ramp";
                condition = "this animationPhase 'ramp_bottom' >= 0.56 && ((driver this) isEqualTo (call rhs_fnc_findPlayer));";
                statement = "this animate ['ramp_bottom',0];this animate ['ramp_top',0];[this] call rhs_fnc_cargoAttach";
            };
            class VehicleParadrop: RampOpen {
                displayName = "Paradrop cargo";
                condition = "(count (attachedObjects this) > 0) AND ('man' countType (attachedObjects this) == 0) AND Alive(this)";
                statement = "[this] spawn rhs_fnc_vehPara";
                shortcut = "";
            };
            class ToggleLight {
                displayName = "Toggle interior light";
                position = "pos driver";
                radius = 15;
                showwindow = 0;
                condition = "player in this;";
                statement = "[this,'cargolights_hide'] call rhs_fnc_toggleIntLight";
                onlyforplayer = 1;
            };
        };
        class Components: Components {
            class TransportPylonsComponent {
                UIPicture = "\rhsusf\addons\rhsusf_ch53\data\loadouts\RHS_CH53_EDEN_CA.paa";
                class pylons {
                    class cmDispenser {
                        hardpoints[] = {"RHSUSF_cm_ANALE39", "RHSUSF_cm_ANALE39_x2"};
                        priority = 1;
                        attachment = "rhsusf_ANALE39_CMFlare_Chaff_Magazine_x2";
                        maxweight = 800;
                        UIposition[] = {0.33, 0};
                    };
                };
            };
            class SensorsManagerComponent {
                class Components {
                    class IRSensorComponent: SensorTemplateIR {
                        class AirTarget {
                            minRange = 500;
                            maxRange = 7000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 500;
                            maxRange = 7000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        animDirection = "ObsGun";
                        angleRangeHorizontal = 98;
                        angleRangeVertical = 72;
                        typeRecognitionDistance = -1;
                        minSpeedThreshold = 0;
                        maxSpeedThreshold = 0;
                        maxFogSeeThrough = 0.95;
                        minTrackableSpeed = 0;
                        maxTrackableSpeed = 695;
                    };
                    class VisualSensorComponent: SensorTemplateVisual {
                        class AirTarget {
                            minRange = 500;
                            maxRange = 4000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 500;
                            maxRange = 4000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        maxTrackableSpeed = 70;
                        animDirection = "ObsGun";
                        angleRangeHorizontal = 98;
                        angleRangeVertical = 72;
                    };
                    class LaserSensorComponent: SensorTemplateLaser {};
                    class PassiveRadarSensorComponent: SensorTemplatePassiveRadar {};
                };
            };
            class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                class Components: components {
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
                    class SlingLoadDisplay {
                        componentType = "SlingLoadDisplayComponent";
                        resource = "RscCustomInfoSlingLoad";
                    };
                    class SensorDisplay {
                        componentType = "SensorsDisplayComponent";
                        resource = "RscCustomInfoSensors";
                        range[] = {3000, 8000, 16000, 35000};
                    };
                };
            };
            class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                defaultDisplay = "SensorDisplay";
                class Components: components {
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
                    class SlingLoadDisplay {
                        componentType = "SlingLoadDisplayComponent";
                        resource = "RscCustomInfoSlingLoad";
                    };
                    class SensorDisplay {
                        componentType = "SensorsDisplayComponent";
                        resource = "RscCustomInfoSensors";
                        range[] = {3000, 8000, 16000, 35000};
                    };
                };
            };
            class TransportCountermeasuresComponent {};
        };
        class CargoTurret;
        class Turrets: Turrets {
            class CopilotTurret: MainTurret {
                gunnerAction = "RHS_CH53_Pilot";
                gunnerInAction = "RHS_CH53_Pilot";
                memoryPointsGetInGunner = "pos codriver";
                memoryPointsGetInGunnerDir = "pos codriver dir";
                gunnerGetInAction = "GetInLow";
                gunnerGetOutAction = "GetOutLow";
                GunnerDoor = "";
                LODTurnedIn = 1000;
                LODTurnedOut = 1000;
                body = "ObsTurret";
                gun = "ObsGun";
                animationSourceBody = "ObsTurret";
                animationSourceGun = "ObsGun";
                gunBeg = "flir_end";
                gunEnd = "flir_begin";
                memoryPointGun = "flir_end";
                memoryPointGunnerOptics = "commanderview";
                stabilizedInAxes = 3;
                minElev = -90;
                maxElev = 38.2;
                initElev = 0;
                minTurn = -70;
                maxTurn = 70;
                initTurn = 0;
                gunnerName = "$STR_A3_COPILOT";
                isCopilot = 1;
                turretInfoType = "RHS_RscUH1Y_Observer";
                soundServo[] = {"", 0.01, 1, 30};
                weapons[] = {"rhs_weap_laserDesignator_AI"};
                magazines[] = {"rhs_LaserMag_ai"};
                inGunnerMayFire = 1;
                precisegetinout = 0;
                gunnerOpticsEffect[] = {};
                gunnerOpticsModel = "";
                gunnerLeftHandAnimName = "lever_copilot";
                gunnerRightHandAnimName = "stick_copilot";
                gunnerLeftLegAnimName = "pedalL";
                gunnerRightLegAnimName = "pedalR";
                usePiP = 1;
                CanEject = 1;
                primaryGunner = 1;
                proxyIndex = 1;
                commanding = -1;
                gunnerOpticsShowCursor = 1;
                showgunneroptics = 1;
                gunnerForceOptics = 0;
                gunnerOpticsColor[] = {0.227, 0.769, 0.24, 1};
                gunnerForceOutOptics = 0;
                gunnerUsesPilotView = 0;
                hasGunner = 1;
                hideWeaponsGunner = 1;
                lockWhenDriverOut = 0;
                enableManualFire = 1;
                maxHorizontalRotSpeed = 3.2;
                maxVerticalRotSpeed = 3.2;
                outGunnerMayFire = 1;
                showHMD = 0;
                class OpticsIn {
                    class WideNGS {
                        opticsDisplayName = "W";
                        initAngleX = 0;
                        minAngleX = -80;
                        maxAngleX = 20;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 1;
                        minFov = 1;
                        maxFov = 1;
                        visionMode[] = {"Normal", "Ti"};
                        thermalMode[] = {0, 1};
                        gunnerOpticsColor[] = {1, 0, 0, 0};
                        gunnerOpticsModel = "a3\weapons_f\Reticle\Optics_Gunner_AAA_01_w_F.p3d";
                        directionStabilized = 0;
                    };
                    class Wide {
                        opticsDisplayName = "W";
                        initAngleX = 0;
                        minAngleX = -80;
                        maxAngleX = 20;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.466;
                        minFov = 0.466;
                        maxFov = 0.466;
                        visionMode[] = {"Normal", "Ti"};
                        thermalMode[] = {0, 1};
                        gunnerOpticsColor[] = {1, 0, 0, 0};
                        gunnerOpticsModel = "a3\weapons_f\Reticle\Optics_Gunner_AAA_01_m_F.p3d";
                        directionStabilized = 1;
                        stabilizedInAxes = 3;
                    };
                    class WideL: Wide {
                        opticsDisplayName = "WL";
                        initFov = 0.2;
                        minFov = 0.2;
                        maxFov = 0.2;
                    };
                    class Medium: Wide {
                        opticsDisplayName = "M";
                        initFov = 0.1;
                        minFov = 0.1;
                        maxFov = 0.1;
                    };
                    class Narrow: Wide {
                        opticsDisplayName = "N";
                        initFov = 0.02;
                        minFov = 0.02;
                        maxFov = 0.02;
                    };
                    class Narrower: Wide {
                        opticsDisplayName = "N";
                        initFov = 0.01;
                        minFov = 0.01;
                        maxFov = 0.01;
                    };
                };
                class OpticsOut {
                    class Monocular {
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 1.1;
                        minFov = 0.133;
                        maxFov = 1.1;
                        visionMode[] = {"Normal", "NVG"};
                        gunnerOpticsModel = "";
                        gunnerOpticsEffect[] = {};
                    };
                };
                class Reflectors {
                    class cabin {
                        color[] = {830, 100, 100};
                        ambient[] = {5, 0, 0};
                        intensity = 9;
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
                        dayLight = 1;
                        blinking = 0;
                        class Attenuation {
                            start = 0;
                            constant = 0;
                            linear = 1;
                            quadratic = 50;
                            hardLimitStart = 2;
                            hardLimitEnd = 2.5;
                        };
                    };
                    class cargo_light_1: cabin {
                        color[] = {830, 100, 100};
                        position = "cargo_light_1";
                        direction = "cargo_light_1_dir";
                        hitpoint = "cargo_light_1";
                        selection = "cargo_light_1";
                        intensity = 21;
                        useFlare = 0;
                        coneFadeCoef = 0.1;
                        class Attenuation {
                            start = 0;
                            constant = 0;
                            linear = 1;
                            quadratic = 70;
                            hardLimitStart = 2;
                            hardLimitEnd = 3;
                        };
                    };
                    class cargo_light_2: cargo_light_1 {
                        position = "cargo_light_2";
                        direction = "cargo_light_2_dir";
                        hitpoint = "cargo_light_2";
                        selection = "cargo_light_2";
                    };
                    class cargo_light_3: cargo_light_1 {
                        position = "cargo_light_3";
                        direction = "cargo_light_3_dir";
                        hitpoint = "cargo_light_3";
                        selection = "cargo_light_3";
                    };
                };
                class Components {
                    class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
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
                            class SensorDisplay {
                                componentType = "SensorsDisplayComponent";
                                range[] = {4000, 8000, 16000, 25000};
                                resource = "RscCustomInfoSensors";
                            };
                            class VehicleGunnerDisplay {
                                componentType = "TransportFeedDisplayComponent";
                                source = "PrimaryGunner";
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
                            class CrewDisplay {
                                componentType = "CrewDisplayComponent";
                                resource = "RscCustomInfoCrew";
                            };
                            class SensorDisplay {
                                componentType = "SensorsDisplayComponent";
                                range[] = {4000, 8000, 16000, 25000};
                                resource = "RscCustomInfoSensors";
                            };
                            class VehicleGunnerDisplay {
                                componentType = "TransportFeedDisplayComponent";
                                source = "PrimaryGunner";
                            };
                        };
                    };
                };
                startEngine = 0;
                gunnerHasFlares = 0;
            };
        };
        cargoCompartments[] = {"Compartment2"};
        class pilotCamera {
            class OpticsIn {
                class Wide {
                    opticsDisplayName = "W";
                    initAngleX = 0;
                    minAngleX = 0;
                    maxAngleX = 0;
                    initAngleY = 0;
                    minAngleY = 0;
                    maxAngleY = 0;
                    initFov = 0.5;
                    minFov = 0.5;
                    maxFov = 0.5;
                    directionStabilized = 1;
                    visionMode[] = {"Normal", "NVG"};
                    thermalMode[] = {0, 1};
                    gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
                };
                showMiniMapInOptics = 0;
                showUAVViewpInOptics = 0;
                showSlingLoadManagerInOptics = 1;
            };
            minTurn = 0;
            maxTurn = 0;
            initTurn = 0;
            minElev = 80;
            maxElev = 80;
            initElev = 80;
            maxXRotSpeed = 0.5;
            maxYRotSpeed = 0.5;
            pilotOpticsShowCursor = 1;
            controllable = 0;
        };
        memoryPointDriverOptics = "slingCamera";
        slingLoadMaxCargoMass = 14000;
        class MarkerLights {
            class PositionRed {
                color[] = {0.8, 0, 0};
                ambient[] = {0.08, 0, 0};
                intensity = 75;
                name = "PositionLight_red_1_pos";
                drawLight = 1;
                drawLightSize = 0.15;
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
                name = "PositionLight_green_1_pos";
            };
            class PositionWhite: PositionRed {
                color[] = {1, 1, 1};
                ambient[] = {0.1, 0.1, 0.1};
                name = "PositionLight_white_1_pos";
                drawLightSize = 0.2;
            };
            class CollisionRed: PositionRed {
                color[] = {0.9, 0.15, 0.1};
                ambient[] = {0.09, 0.015, 0.01};
                name = "CollisionLight_red_1_pos";
                blinking = 1;
                blinkingPattern[] = {0.2, 1.3};
                blinkingPatternGuarantee = 0;
                drawLightSize = 0.25;
                drawLightCenterSize = 0.08;
            };
            class CollisionWhite: PositionRed {
                color[] = {1, 1, 1};
                ambient[] = {0.1, 0.1, 0.1};
                name = "CollisionLight_white_1_pos";
                blinking = 1;
                blinkingPattern[] = {0.1, 0.9};
                blinkingPatternGuarantee = 0;
                drawLightSize = 0.2;
                drawLightCenterSize = 0.04;
            };
            class InteriorBlue {
                name = "light_interior_blue";
                color[] = {0.07, 0.99, 0.89};
                ambient[] = {0.007, 0.099, 0.089};
                intensity = 75;
                blinking = 0;
                drawLightSize = 0.25;
                drawLightCenterSize = 0.08;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 25;
                    quadratic = 50;
                    hardLimitStart = 2.25;
                    hardLimitEnd = 3;
                };
            };
        };
        ace_cargo_hasCargo = 1;
        ace_cargo_space = 16;
        class Attributes {
            class ObjectTexture {
                control = "ObjectTexture";
                data = "ObjectTexture";
                displayName = "Skin";
                tooltip = "Texture and material set applied on the object.";
            };
            class rhs_decalNumber_type {
                displayName = "Define font type of side number";
                tooltip = "Define kind of font that will be drawn on vehicle";
                property = "rhs_decalNumber_type";
                control = "Combo";
                expression = "_this setVariable ['%s', _value];[_this,[['Number', cCH53NumberPlaces, _value]]] call rhsusf_fnc_decalsInit";
                defaultValue = 0;
                typeName = "STRING";
                class values {
                    class USMCGrey {
                        name = "USMC (Grey)";
                        value = "USMCGrey";
                        defaultValue = "USMCGrey";
                    };
                    class USMCBlackShadow {
                        name = "USMC (Black Shadow)";
                        value = "USMCBlackShadow";
                    };
                };
            };
            class rhs_decalNumber {
                displayName = "Set side number";
                tooltip = "Set side number. 2 numbers are required. If 0, random number will be generated";
                property = "rhs_decalNumber";
                control = "Edit";
                validate = "Number";
                typeName = "Number";
                defaultValue = "-1";
                expression = "if( _value >= 0)then{[_this, [['Number', cCH53NumberPlaces, _this getVariable ['rhs_decalNumber_type','USMCGrey'], _value] ] ] call rhsusf_fnc_decalsInit};";
            };
            class rhs_openRamp {
                displayName = "Open rear ramp";
                property = "rhs_openRamp";
                control = "slider";
                expression = "_this animate ['ramp_bottom',_value];_this animate ['ramp_top',_value];";
                defaultValue = "0";
            };
            class FoldHeli {
                control = "CheckboxNumber";
                defaultValue = "0";
                displayName = "Fold helicopter rotors";
                property = "FoldHeli";
                expression = "[_this,_value,true] call rhsusf_fnc_ch53_fold";
            };
            class hide_cargo: rhs_openRamp {
                displayName = "Hide cargo benches";
                property = "hide_cargo";
                control = "CheckboxNumber";
                expression = "_this animate ['%s',_value,true];_this lockCargo (_value == 1)";
            };
            class rhs_attachCargo: FoldHeli {
                displayName = "Attach cargo";
                tooltip = "Attaching cargo (using attachTo command) just like when you use ramp action";
                property = "rhs_attachCargo";
                expression = "if(_value == 1)then{[_this] spawn rhs_fnc_cargoAttach}else{{if(not(_x isKindOf 'Man'))then{detach _x}}foreach attachedObjects _this};";
            };
        };
        class VehicleTransport {
            class Carrier {
                cargoBayDimensions[] = {"VTV_limit_1", "VTV_limit_2"};
                disableHeightLimit = 1;
                maxLoadMass = 9000;
                cargoAlignment[] = {"front", "center"};
                cargoSpacing[] = {0.075, 0.075, 0.075};
                exits[] = {"VTV_exit_1"};
                unloadingInterval = 2;
                loadingDistance = 15;
                loadingAngle = 60;
                parachuteClassDefault = "B_Parachute_02_F";
                parachuteHeightLimitDefault = 25;
            };
        };
    };
    class rhsusf_CH53E_USMC_GAU21: rhsusf_CH53E_USMC {
        displayName = "CH-53E (GAU-21)";
        class Turrets: Turrets {
            class CopilotTurret: CopilotTurret {};
            class GAU21: MainTurret {
                gunnerType = "rhsusf_usmc_marpat_wd_helicrew";
                usePiP = 0;
                isCopilot = 0;
                showAsCargo = 1;
                proxyIndex = 2;
                animationSourceBody = "mainTurret";
                animationSourceGun = "mainGun";
                body = "mainTurret";
                gun = "mainGun";
                minElev = -60;
                maxElev = 7;
                initElev = 0;
                minTurn = 90;
                maxTurn = 270;
                initTurn = 180;
                lodturnedout = 1200;
                lodturnedin = 1200;
                lodopticsout = 1200;
                lodopticsin = 1200;
                soundServo[] = {"", 0.01, 1};
                gunnerLeftHandAnimName = "OtocHlaven_1";
                gunnerRightHandAnimName = "OtocHlaven_1";
                gunnerLeftLegAnimName = "gunner_1_leg_left";
                gunnerRightLegAnimName = "gunner_1_legs";
                gunnerAction = "RHS_Ch53_Gunner_Ramp";
                gunnerInAction = "RHS_Ch53_Gunner_Ramp";
                animationSourceHatch = "";
                stabilizedInAxes = "StabilizedInAxesNone";
                gunBeg = "muzzle_1";
                gunEnd = "chamber_1";
                selectionFireAnim = "zasleh_1";
                weapons[] = {"rhs_weap_gau21_1"};
                magazines[] = {"rhs_mag_300rnd_127x99_mag_Tracer_Red", "rhs_mag_300rnd_127x99_mag_Tracer_Red", "rhs_mag_300rnd_127x99_mag_Tracer_Red"};
                gunnerName = "Ramp GAU-21";
                gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                gunnerOutOpticsShowCursor = 1;
                gunnerOpticsShowCursor = 1;
                memoryPointsGetInGunner = "pos cargo";
                memoryPointsGetInGunnerDir = "pos cargo dir";
                gunnerGetInAction = "GetInLow";
                gunnerGetOutAction = "GetOutLow";
                preciseGetInOut = 0;
                turretInfoType = "RscWeaponZeroing";
                commanding = -2;
                playerPosition = 1;
                primaryGunner = 0;
                class ViewOptics {
                    initanglex = 0;
                    initangley = 0;
                    initfov = 0.7;
                    maxanglex = 75;
                    maxangley = 100;
                    maxfov = 1.1;
                    minanglex = -75;
                    minangley = -100;
                    minfov = 0.25;
                };
                class ViewGunner: ViewOptics {
                    initanglex = 0;
                    initangley = 0;
                    initfov = 0.7;
                    maxanglex = 75;
                    maxangley = 100;
                    maxfov = 1.1;
                    minanglex = -75;
                    minangley = -100;
                    minfov = 0.25;
                    visionMode[] = {};
                };
                class OpticsIn {
                    class ViewOptics: ViewGunner {
                        gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                        gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                    };
                };
                gunnerCompartments = "Compartment2";
                memoryPointGun = "muzzle_1";
                memoryPointGunnerOptics = "gunnerview_1";
                soundAttenuationTurret = "HeliAttenuationGunner";
                class Reflectors {};
                class Components {
                    class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                        class Components {
                            class EmptyDisplay {
                                componentType = "EmptyDisplayComponent";
                            };
                            class CrewDisplay {
                                componentType = "CrewDisplayComponent";
                                resource = "RscCustomInfoCrew";
                            };
                        };
                    };
                    class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                        defaultDisplay = "SensorDisplay";
                        class Components {
                            class EmptyDisplay {
                                componentType = "EmptyDisplayComponent";
                            };
                            class CrewDisplay {
                                componentType = "CrewDisplayComponent";
                                resource = "RscCustomInfoCrew";
                            };
                        };
                    };
                };
                class Hitpoints {};
            };
        };
        class AnimationSources: AnimationSources {
            class hmg_hide: hmg_hide {
                initPhase = 0;
            };
            class Ramp: Ramp {
                initPhase = 0.56;
            };
            class Ramp_hmg: Ramp {
                initPhase = 1;
            };
            class muzzle_rot_hmg_1 {
                weapon = "rhs_weap_gau21_1";
                source = "ammorandom";
            };
            class reload_hmg_1: muzzle_rot_hmg_1 {
                source = "reload";
            };
        };
        class UVAnimations {
            class hmg_ammo_1 {
                type = "translation";
                source = "reload_hmg_1";
                sourceAddress = "loop";
                section = "hmg_ammo_1";
                minValue = 0;
                maxValue = 1;
                offset0[] = {0, 0};
                offset1[] = {0.038, 0};
            };
        };
        class UserActions: UserActions {
            class RampClose: RampClose {
                condition = 0;
            };
            class VehicleParadrop: VehicleParadrop {
                condition = 0;
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
                displayName = "Define font type of side number";
                tooltip = "Define kind of font that will be drawn on vehicle";
                property = "rhs_decalNumber_type";
                control = "Combo";
                expression = "_this setVariable ['%s', _value];[_this,[['Number', cCH53NumberPlaces, _value]]] call rhsusf_fnc_decalsInit";
                defaultValue = 0;
                typeName = "STRING";
                class values {
                    class USMCGrey {
                        name = "USMC (Grey)";
                        value = "USMCGrey";
                        defaultValue = "USMCGrey";
                    };
                    class USMCBlackShadow {
                        name = "USMC (Black Shadow)";
                        value = "USMCBlackShadow";
                    };
                };
            };
            class rhs_decalNumber {
                displayName = "Set side number";
                tooltip = "Set side number. 2 numbers are required. If 0, random number will be generated";
                property = "rhs_decalNumber";
                control = "Edit";
                validate = "Number";
                typeName = "Number";
                defaultValue = "-1";
                expression = "if( _value >= 0)then{[_this, [['Number', cCH53NumberPlaces, _this getVariable ['rhs_decalNumber_type','USMCGrey'], _value] ] ] call rhsusf_fnc_decalsInit};";
            };
            class rhs_openRamp {
                displayName = "Open rear ramp";
                property = "rhs_openRamp";
                control = "slider";
                expression = "_this animate ['ramp_bottom',_value];";
                defaultValue = "0";
            };
            class FoldHeli {
                control = "CheckboxNumber";
                defaultValue = "0";
                displayName = "Fold helicopter rotors";
                property = "FoldHeli";
                expression = "[_this,_value,true] call rhsusf_fnc_ch53_fold";
            };
        };
    };
    class rhsusf_CH53E_USMC_D: rhsusf_CH53E_USMC {
        faction = "rhs_faction_usmc_d";
        vehicleClass = "rhs_vehclass_helicopter";
        crew = "rhsusf_usmc_marpat_d_helipilot";
        typicalCargo[] = {"rhsusf_usmc_marpat_d_helicrew"};
        author = "Rocket, RHS";
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_CH53E_USMC_D.paa";
    };
    class rhsusf_CH53E_USMC_GAU21_D: rhsusf_CH53E_USMC_GAU21 {
        faction = "rhs_faction_usmc_d";
        vehicleClass = "rhs_vehclass_helicopter";
        crew = "rhsusf_usmc_marpat_d_helipilot";
        typicalCargo[] = {"rhsusf_usmc_marpat_d_helicrew"};
        author = "Rocket, RHS";
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_CH53E_USMC_D.paa";
        class Turrets: Turrets {
            class CopilotTurret: CopilotTurret {};
            class GAU21: GAU21 {
                gunnerType = "rhsusf_usmc_marpat_d_helicrew";
            };
        };
    };
    class rhsusf_CH53e_USMC_cargo: rhsusf_CH53E_USMC {
        displayName = "CH-53E (Cargo)";
        class AnimationSources: AnimationSources {
            class hide_cargo: hide_cargo {
                displayName = "";
                initPhase = 1;
            };
        };
        class Turrets: Turrets {
            class CopilotTurret: CopilotTurret {};
        };
        transportSoldier = 0;
        class VehicleTransport: VehicleTransport {
            class Carrier: Carrier {
                cargoBayDimensions[] = {"VTV_limit_1_big", "VTV_limit_2_big"};
            };
        };
    };
    class rhsusf_CH53e_USMC_D_cargo: rhsusf_CH53E_USMC_D {
        displayName = "CH-53E (Cargo)";
        class AnimationSources: AnimationSources {
            class hide_cargo: hide_cargo {
                displayName = "";
                initPhase = 1;
            };
        };
        class Turrets: Turrets {
            class CopilotTurret: CopilotTurret {};
        };
        transportSoldier = 0;
        class VehicleTransport: VehicleTransport {
            class Carrier: Carrier {
                cargoBayDimensions[] = {"VTV_limit_1_big", "VTV_limit_2_big"};
            };
        };
    };
};
class CfgSounds {
    class ch53_rampdown {
        name = "rhsusf_ch53_rampdown";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_ramp",
            1,
            1,
            15
        };
        titles[] = {};
    };
    class ch53_rampup {
        name = "rhsusf_ch53_rampup";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_ramp",
            1,
            1,
            15
        };
        titles[] = {};
    };
    class ch53_gear {
        name = "rhsusf_ch53_gear";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\sounds\Heli_CH53_01_gear",
            1,
            1,
            15
        };
        titles[] = {};
    };
    class rhsusf_dws_critical_hydraulicsfailure {
        name = "rhsusf_dws_critical_hydraulicsfailure";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\dws_critical_hydraulicsfailure",
            1,
            1,
            15
        };
        titles[] = {};
    };
    class rhsusf_dws_critical_pullup {
        name = "rhsusf_dws_critical_pullup";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\dws_critical_pullup",
            1,
            1,
            15
        };
        titles[] = {};
    };
    class rhsusf_dws_critical_enginefailure {
        name = "rhsusf_dws_critical_enginefailure";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\dws_critical_enginefailure",
            1,
            1,
            15
        };
        titles[] = {};
    };
    class rhsusf_dws_warning_engineout {
        name = "rhsusf_dws_warning_engineout";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\dws_warning_engineout",
            1,
            1,
            15
        };
        titles[] = {};
    };
    class rhsusf_dws_warning_damagecritical {
        name = "rhsusf_dws_warning_damagecritical";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\dws_warning_damagecritical",
            1,
            1,
            15
        };
        titles[] = {};
    };
    class rhsusf_dws_warning_fuelpressure {
        name = "rhsusf_dws_warning_fuelpressure";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\dws_warning_fuelpressure",
            1,
            1,
            15
        };
        titles[] = {};
    };
    class rhsusf_dws_warning_fuelcritical {
        name = "rhsusf_dws_warning_fuelcritical";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\dws_warning_fuelcritical",
            1,
            1,
            15
        };
        titles[] = {};
    };
    class rhsusf_dws_warning_sinkrate {
        name = "rhsusf_dws_warning_sinkrate";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\dws_warning_sinkrate",
            1,
            1,
            15
        };
        titles[] = {};
    };
    class rhsusf_dws_critical_incomingmissile {
        name = "rhsusf_dws_critical_incomingmissile";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\dws_critical_incomingmissile",
            1,
            1,
            15
        };
        titles[] = {};
    };
    class rhsusf_dws_caution_rampopen {
        name = "rhsusf_dws_caution_rampopen";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\dws_caution_rampopen",
            1,
            1,
            15
        };
        titles[] = {};
    };
    class rhsusf_dws_caution_fuelow {
        name = "rhsusf_dws_caution_fuelow";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\dws_caution_fuelow",
            1,
            1,
            15
        };
        titles[] = {};
    };
    class rhsusf_dws_caution_overspeed {
        name = "rhsusf_dws_caution_overspeed";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\dws_caution_overspeed",
            1,
            1,
            15
        };
        titles[] = {};
    };
    class rhsusf_dws_info_geardown {
        name = "rhsusf_dws_info_geardown";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\dws_info_geardown",
            1,
            1,
            15
        };
        titles[] = {};
    };
    class rhsusf_dws_info_gearup {
        name = "rhsusf_dws_info_gearup";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\dws_info_gearup",
            1,
            1,
            15
        };
        titles[] = {};
    };
    class rhsusf_dws_info_stropsdeployed {
        name = "rhsusf_dws_info_stropsdeployed";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\dws_info_stropsdeployed",
            1,
            1,
            15
        };
        titles[] = {};
    };
    class rhsusf_dws_info_stropsretracted {
        name = "rhsusf_dws_info_stropsretracted";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\dws_info_stropsretracted",
            1,
            1,
            15
        };
        titles[] = {};
    };
    class rhsusf_dws_info_cargoattached {
        name = "rhsusf_dws_info_cargoattached";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\dws_info_cargoattached",
            1,
            1,
            15
        };
        titles[] = {};
    };
    class rhsusf_dws_info_cargodetached {
        name = "rhsusf_dws_info_cargodetached";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\dws_info_cargodetached",
            1,
            1,
            15
        };
        titles[] = {};
    };
    class rhsusf_dummysound {
        name = "rhsusf_dummysound";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\dummysound",
            1,
            1,
            15
        };
        titles[] = {};
    };
    class rhsusf_debugbeep {
        name = "rhsusf_debugbeep";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\debugsound",
            1,
            1,
            15
        };
        titles[] = {};
    };
    class rhsusf_debugsin {
        name = "rhsusf_debugsin";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\debugsoundst",
            1,
            1,
            15
        };
        titles[] = {};
    };
    class Missile3OClockH {
        name = "Missile3OClockH";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\critical_missile03.wss",
            2,
            1,
            15
        };
        titles[] = {};
    };
    class Missile6OClockH {
        name = "Missile6OClockH";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\critical_missile06.wss",
            2,
            1,
            15
        };
        titles[] = {};
    };
    class Missile9OClockH {
        name = "Missile9OClockH";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\critical_missile09.wss",
            2,
            1,
            15
        };
        titles[] = {};
    };
    class Missile12OClockH {
        name = "Missile12OClockH";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\critical_missile12.wss",
            2,
            1,
            15
        };
        titles[] = {};
    };
    class Missile3OClockL {
        name = "Missile3OClockL";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\critical_missile03.wss",
            2,
            1,
            15
        };
        titles[] = {};
    };
    class Missile6OClockL {
        name = "Missile6OClockL";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\critical_missile06.wss",
            2,
            1,
            15
        };
        titles[] = {};
    };
    class Missile9OClockL {
        name = "Missile9OClockL";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\critical_missile09.wss",
            2,
            1,
            15
        };
        titles[] = {};
    };
    class Missile12OClockL {
        name = "Missile12OClockL";
        sound[] = {
            "\rhsusf\addons\rhsusf_ch53\data\betty\critical_missile12.wss",
            2,
            1,
            15
        };
        titles[] = {};
    };
};
