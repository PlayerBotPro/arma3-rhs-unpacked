class CfgPatches {
    class rhs_c_rva {
        units[] = {"rhs_9k79", "rhs_9k79_K", "rhs_9k79_b"};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"rhs_main", "rhs_decals", "rhs_c_troops"};
        name = "Tochka-U Launcher";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        BAZ_Driver = "BAZ_Driver";
        BAZ_oper = "BAZ_oper";
        BAZ_cargo = "BAZ_cargo";
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class ss21_dialog_control {
                file = "\rhsafrf\addons\rhs_c_rva\scripts\dialog_control.sqf";
                description = "";
            };
            class ss21_AI_launch {
                file = "\rhsafrf\addons\rhs_c_rva\scripts\AI_launch.sqf";
                description = "";
            };
            class ss21_AI_prepare {
                file = "\rhsafrf\addons\rhs_c_rva\scripts\AI_prepare.sqf";
                description = "Prepare tochka for launch";
            };
            class ss21_AI_waitForTarget {
                file = "\rhsafrf\addons\rhs_c_rva\scripts\AI_waitForTarget.sqf";
                description = "";
            };
            class ss21_missile_control {
                file = "\rhsafrf\addons\rhs_c_rva\scripts\missile_control.sqf";
                description = "";
            };
            class ss21_missile_warhead {
                file = "\rhsafrf\addons\rhs_c_rva\scripts\missile_warhead.sqf";
                description = "";
            };
            class ss21_effects {
                file = "\rhsafrf\addons\rhs_c_rva\scripts\effects_ss21.sqf";
                description = "";
            };
            class ss21_anim {
                file = "\rhsafrf\addons\rhs_c_rva\scripts\anim_ss21.sqf";
                description = "";
            };
            class ss21_deploy {
                file = "\rhsafrf\addons\rhs_c_rva\scripts\deploy.sqf";
                description = "";
            };
            class ss21_nuke {
                file = "\rhsafrf\addons\rhs_c_rva\scripts\nuke\nuke.sqf";
                description = "";
            };
            class ss21_nuke_fx_light {
                file = "\rhsafrf\addons\rhs_c_rva\scripts\nuke\fnc_light_effects.sqf";
                description = "";
            };
            class ss21_nuke_fx_smoke {
                file = "\rhsafrf\addons\rhs_c_rva\scripts\nuke\fnc_smoke.sqf";
                description = "";
            };
            class ss21_nuke_fx_shockwave {
                file = "\rhsafrf\addons\rhs_c_rva\scripts\nuke\fnc_shockwave.sqf";
                description = "";
            };
            class ss21_nuke_fx_postprocessing {
                file = "\rhsafrf\addons\rhs_c_rva\scripts\nuke\fnc_postprocessing.sqf";
                description = "";
            };
            class ss21_nuke_fx_damage {
                file = "\rhsafrf\addons\rhs_c_rva\scripts\nuke\fnc_damage.sqf";
                description = "";
            };
        };
    };
};
class cfgWaypoints {
    class RHS {
        displayName = "RHS Special Waypoints";
        class wpTochkaDeploy {
            displayName = "Tochka-U - Deploy";
            tooltip = "Deploys Tochka-U to ready to fire state";
            file = "\rhsafrf\addons\rhs_c_rva\scripts\WP_TochkaDeploy.sqf";
            icon = "\a3\3DEN\Data\CfgWaypoints\TransportUnload_ca.paa";
        };
        class wpTochkaFire: wpTochkaDeploy {
            displayName = "Tochka-U - Fire";
            tooltip = "Tochka-U will fire missile at waypoint position";
            file = "\rhsafrf\addons\rhs_c_rva\scripts\WP_TochkaFire.sqf";
            icon = "\a3\3DEN\Data\CfgWaypoints\Destroy_ca.paa";
        };
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class KIA_BAZ_Driver: DefaultDie {
            actions = "DeadActions";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            file = "\rhsafrf\addons\rhs_ss21\anim\KIA_BAZ_Driver";
            connectTo[] = {"Unconscious", 0.1};
        };
        class BAZ_Driver: Crew {
            file = "\rhsafrf\addons\rhs_ss21\anim\BAZ_Driver.rtm";
            interpolateTo[] = {"KIA_BAZ_Driver", 1};
        };
        class KIA_BAZ_cargo: DefaultDie {
            actions = "DeadActions";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            file = "\rhsafrf\addons\rhs_ss21\anim\KIA_BAZ_cargo.rtm";
            connectTo[] = {"Unconscious", 0.1};
        };
        class BAZ_cargo: Crew {
            file = "\rhsafrf\addons\rhs_ss21\anim\BAZ_cargo.rtm";
            interpolateTo[] = {"KIA_BAZ_cargo", 1};
        };
        class KIA_BAZ_oper: DefaultDie {
            actions = "DeadActions";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            file = "\rhsafrf\addons\rhs_ss21\anim\KIA_BAZ_oper.rtm";
            connectTo[] = {"Unconscious", 0.1};
        };
        class BAZ_oper: Crew {
            file = "\rhsafrf\addons\rhs_ss21\anim\BAZ_oper.rtm";
            interpolateTo[] = {"KIA_BAZ_oper", 1};
        };
    };
};
class DefaultEventhandlers;
class CfgAmmo {
    class rhs_ammo_kh29_base;
    class rhs_ammo_m21OF_HE;
    class RHS_9M79_1_F: rhs_ammo_kh29_base {
        hit = 1500;
        indirectHit = 1000;
        indirectHitRange = 50;
        airFriction = 0;
        sideAirFriction = 0.08;
        model = "\rhsafrf\addons\rhs_ss21\ss21.p3d";
        initTime = 0;
        timeToLive = 300;
        cost = 400;
        maxSpeed = 700;
        thrustTime = 25;
        thrust = 80;
        fuseDistance = 5;
        CraterEffects = "RHS_HeavyBombCrater";
        explosionEffects = "RHS_HeavyBombExplosion";
        effectsMissile = "missile5";
        whistleOnFire = 2;
        whistleDist = 60;
        soundFly[] = {
            "A3\Sounds_F\weapons\Rockets\rocket_fly_2",
            2.5,
            1.5,
            10800
        };
        RHS_WarheadType = "REPLACE";
        RHS_FuseRange = 25;
        SoundSetExplosion[] = {"BombsHeavy_Exp_SoundSet", "BombsHeavy_Tail_SoundSet", "Explosion_Debris_SoundSet"};
    };
    class RHS_9N123F: RHS_9M79_1_F {
        model = "\rhsafrf\addons\rhs_ss21\ss21.p3d";
        timeToLive = 0.01;
        thrustTime = 0;
    };
    class RHS_9M79B: RHS_9M79_1_F {
        RHS_Yield = 10000;
        RHS_WarheadType = "NUKE";
        RHS_FuseRange = 100;
    };
    class RHS_9M79_1_K: RHS_9M79_1_F {
        RHS_WarheadType = "CLUSTER";
        RHS_FuseRange = 300;
    };
    class RHS_9N123K: RHS_9N123F {
        hit = 140;
        indirectHit = 40;
    };
    class RHS_9N24: rhs_ammo_m21OF_HE {
        hit = 280;
        indirectHit = 52;
        indirectHitRange = 22;
        model = "\rhsafrf\addons\rhs_ss21\ammo\9n24.p3d";
        timeToLive = 60;
    };
};
class cfgWeapons {
    class RocketPods;
    class RHS_9M79_1Launcher: RocketPods {
        scope = 2;
        displayName = "$STR_RHS_ss21_9M79_1Launcher";
        type = 65536;
        modelOptics = "";
        magazines[] = {"1_Rnd_RHS_9M79_1_F", "1_Rnd_RHS_9M79_1_K", "1_Rnd_RHS_9M79B"};
        sounds[] = {"StandardSound"};
        class StandardSound {
            weaponSoundEffect = "DefaultRifle";
            begin1[] = {
                "\rhsafrf\addons\rhs_ss21\sound\launchA",
                3.4125376,
                1,
                1200
            };
            soundBegin[] = {"begin1", 1};
        };
        sound[] = {
            "\rhsafrf\addons\rhs_ss21\sound\launchA",
            10,
            1,
            1100
        };
        recoil = "launcherBase";
        soundContinuous = 0;
        soundBurst = 0;
        reloadTime = 14;
        aiRateOfFire = 10;
        aiRateOfFireDistance = 450;
        minRange = 1950;
        midRange = 3000;
        maxRange = 15600;
        cursor = "Rocket";
        cursorSize = 1;
        initSpeed = 50;
    };
    class RHS_ss21_dummy_launcher: RHS_9M79_1Launcher {
        magazines[] = {};
    };
};
class CfgMagazines {
    class rhs_mag_40Rnd_122mm_rockets;
    class 1_Rnd_RHS_9M79_1_F: rhs_mag_40Rnd_122mm_rockets {
        scope = 2;
        displayName = "$STR_RHS_ss21_1_Rnd_RHS_9M79_1_F";
        ammo = "RHS_9M79_1_F";
        count = 1;
        initSpeed = 44;
        maxLeadSpeed = 200;
    };
    class 1_Rnd_RHS_9M79_1_K: 1_Rnd_RHS_9M79_1_F {
        displayName = "$STR_RHS_ss21_1_Rnd_RHS_9M79_1_K";
        ammo = "RHS_9M79_1_K";
        count = 1;
    };
    class 1_Rnd_RHS_9M79B: 1_Rnd_RHS_9M79_1_F {
        displayName = "$STR_RHS_ss21_1_Rnd_RHS_9M79B";
        ammo = "RHS_9M79B";
        count = 1;
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
    class OTR21_Base: Truck_F {
        dlc = "RHS_AFRF";
        rhs_decalParameters[] = {"['Number', SS21NumberPlaces, 'Default']"};
        category = "Car";
        normalSpeedForwardCoef = 0.6;
        slowSpeedForwardCoef = 0.45;
        turnCoef = 3.5;
        terrainCoef = 1.5;
        simulation = "carx";
        dampersBumpCoef = 6;
        precision = 10;
        brakeDistance = 3;
        acceleration = 15;
        fireResistance = 5;
        maxSpeed = 60;
        fuelCapacity = 20;
        RHS_fuelCapacity = 300;
        wheelCircumference = 3.769;
        brakeIdleSpeed = 0;
        canFloat = 1;
        waterLeakiness = 250;
        waterSpeedFactor = 0.133;
        maxFordingDepth = 0.4;
        waterResistance = 1;
        waterDamageEngine = 0.9;
        waterAngularDampingCoef = 10;
        waterLinearDampingCoefY = 2;
        waterLinearDampingCoefX = 2;
        waterPPInVehicle = 0;
        waterResistanceCoef = 0.4;
        engineShiftY = 0.3;
        engineShiftZ = -3;
        rudderForceCoef = 1.5;
        rudderForceCoefAtMaxSpeed = 0.3;
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -5.3,
                "N",
                0,
                "D1",
                5.62,
                "D2",
                2.89,
                "D3",
                1.64,
                "D4",
                1,
                "D5",
                0.724
            };
            TransmissionRatios[] = {"High", 10.62};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        changeGearMinEffectivity[] = {0.95, 0, 0.95, 0.95, 0.95, 0.85, 0.85};
        switchTime = 0.81;
        latency = 1.5;
        differentialType = "all_limited";
        frontRearSplit = 0.5;
        frontBias = 3.3;
        rearBias = 3.6;
        centreBias = 1;
        clutchStrength = 175;
        transmissionLosses = 12;
        dampingRateFullThrottle = 0.08;
        dampingRateZeroThrottleClutchEngaged = 1.35;
        dampingRateZeroThrottleClutchDisengaged = 0.35;
        torqueCurve[] = {
            {0.245614, 0},
            {0.421053, 0.953109},
            {0.526316, 1},
            {0.561404, 1},
            {0.631579, 0.953109},
            {0.77193, 0.897044},
            {0.912281, 0.826707},
            {1.08807, 0}
        };
        maxOmega = 298.45;
        minOmega = 60;
        enginePower = 280;
        peakTorque = 1226.25;
        idleRPM = 700;
        redRPM = 2850;
        engineLosses = 14;
        thrustDelay = 2.4;
        engineBrakeCoef = 0.3;
        antiRollbarForceCoef = 25;
        antiRollbarForceLimit = 45.5;
        antiRollbarSpeedMin = 30;
        antiRollbarSpeedMax = 60;
        class Wheels {
            class LF {
                side = "left";
                boneName = "wheel_1_1_damper";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                suspForceAppPointOffset = "wheel_1_1_axis";
                tireForceAppPointOffset = "wheel_1_1_axis";
                suspTravelDirection[] = {-0.125, -1, 0};
                steering = 1;
                width = 0.4;
                mass = 90;
                MOI = 14;
                dampingRate = 0.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 12500;
                maxHandBrakeTorque = 0;
                maxCompression = 0.25;
                MaxDroop = 0.25;
                sprungMass = 3000;
                springStrength = 111813;
                springDamperRate = 15872;
                longitudinalStiffnessPerUnitGravity = 54582;
                latStiffX = 3.5;
                latStiffY = 18;
                frictionVsSlipGraph[] = {{0, 1.2}, {0.5, 1.13}, {1, 1}};
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
            class LR2: LR {
                boneName = "wheel_1_3_damper";
                center = "wheel_1_3_axis";
                boundary = "wheel_1_3_bound";
                suspForceAppPointOffset = "wheel_1_3_axis";
                tireForceAppPointOffset = "wheel_1_3_axis";
            };
            class RF: LF {
                boneName = "wheel_2_1_damper";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                suspForceAppPointOffset = "wheel_2_1_axis";
                tireForceAppPointOffset = "wheel_2_1_axis";
                side = "right";
                suspTravelDirection[] = {-0.125, -1, 0};
                steering = 1;
            };
            class RR: RF {
                boneName = "wheel_2_2_damper";
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                suspForceAppPointOffset = "wheel_2_2_axis";
                tireForceAppPointOffset = "wheel_2_2_axis";
                maxHandBrakeTorque = 20000;
            };
            class RR2: RR {
                boneName = "wheel_2_3_damper";
                center = "wheel_2_3_axis";
                boundary = "wheel_2_3_bound";
                suspForceAppPointOffset = "wheel_2_3_axis";
                tireForceAppPointOffset = "wheel_2_3_axis";
                steering = 0;
            };
        };
        htMin = 60;
        htMax = 1800;
        afMax = 200;
        mfMax = 100;
        mFact = 0;
        tBody = 0;
        displayName = "$STR_RHS_ss21";
        vehicleClass = "rhs_vehclass_artillery";
        editorSubcategory = "rhs_EdSubcat_artillery";
        model = "\rhsafrf\addons\rhs_ss21\SS21Veh.p3d";
        hiddenselections[] = {"camo1", "camo2", "camo3", "num1", "num2", "num3"};
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_ss21\data\veh\tochka_body_co.paa", "rhsafrf\addons\rhs_ss21\data\veh\tochka_misc_co.paa", "rhsafrf\addons\rhs_ss21\data\veh\tochka_bottom_co.paa"};
        class textureSources {
            class standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_ss21\data\veh\tochka_body_co.paa", "rhsafrf\addons\rhs_ss21\data\veh\tochka_misc_co.paa", "rhsafrf\addons\rhs_ss21\data\veh\tochka_bottom_co.paa"};
                factions[] = {"rhs_faction_rva"};
            };
            class camo: standard {
                displayName = "Camo";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_ss21_camo\data\tochka_body_co.paa", "rhsafrf\addons\rhs_ss21_camo\data\tochka_misc_co.paa", "rhsafrf\addons\rhs_ss21_camo\data\tochka_bottom_co.paa"};
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
                expression = "_this setVariable ['%s', _value];[_this,[['Number', SS21NumberPlaces, _value]]] call rhs_fnc_decalsInit";
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
                tooltip = "Set side number. 3 numbers are required. Type 0 to hide numbers complety & leave at -1 to get random number";
                property = "rhs_decalNumber";
                control = "Edit";
                validate = "Number";
                typeName = "Number";
                defaultValue = "-1";
                expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach SS21NumberPlaces}else{[_this, [['Number', SS21NumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
            };
            class rhs_deploy {
                displayName = "Deploy Tochka";
                tooltip = "Deploys Tochka in ready to launch state. In order to fire Tochka use following command Tochka doTarget enemyTarget (may be laser target or vehicle).";
                property = "rhs_deploy";
                control = "Checkbox";
                expression = "if(_value)then{[_this,_value] call rhs_fnc_ss21_deploy}";
                defaultValue = 0;
            };
        };
        picture = "\rhsafrf\addons\rhs_ss21\ico\rhs_tochkau_pic_ca.paa";
        Icon = "\rhsafrf\addons\rhs_ss21\ico\tochka_mapicon_ca.paa";
        driverLeftHandAnimName = "rul";
        attenuationEffectType = "RHS_CarAttenuation";
        enableManualFire = 0;
        mapSize = 10;
        side = 0;
        threat[] = {0.5, 0.5, 0.1};
        faction = "rhs_faction_rva";
        crew = "rhs_rva_crew";
        accuracy = 0.3;
        transportSoldier = 1;
        artilleryScanner = 0;
        hideProxyInCombat = 0;
        transportAmmo = 0;
        transportRepair = 0;
        weapons[] = {"TruckHorn"};
        magazines[] = {};
        cost = 50000;
        armor = 32;
        damageResistance = 0.00243;
        armorWheels = 0.12;
        initCargoAngleY = 185;
        viewDriverShadow = 1;
        viewGunnerShadow = 1;
        viewCargoShadow = 1;
        typicalCargo[] = {};
        hasGunner = 1;
        hasCommander = 0;
        driverAction = "BAZ_Driver";
        cargoAction[] = {"BAZ_cargo"};
        cargoIsCoDriver[] = {1, 1, 0};
        memoryPointsGetInDriver = "pos driver";
        memoryPointsGetInDriverDir = "pos driver dir";
        memoryPointsGetInCargo = "pos cargo";
        memoryPointsGetInCargoDir = "pos cargo dir";
        memoryPointsGetInGunner = "pos gunner";
        memoryPointsGetInGunnerDir = "pos gunner dir";
        class TransportMagazines {
            class _xx_30Rnd_545x39_AK {
                magazine = "rhs_30Rnd_545x39_7N10_AK";
                count = "30*1";
            };
        };
        class Exhausts {
            class Exhaust {
                position = "vyfuk start";
                direction = "vyfuk konec";
                effect = "ExhaustsEffectBig";
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_ss21\data\veh\tochka_body.rvmat",
                "rhsafrf\addons\rhs_ss21\data\veh\tochka_body_damage.rvmat",
                "rhsafrf\addons\rhs_ss21\data\veh\tochka_body_destruct.rvmat",
                "rhsafrf\addons\rhs_ss21\data\veh\tochka_glass.rvmat",
                "rhsafrf\addons\rhs_ss21\data\veh\tochka_glass_damage.rvmat",
                "rhsafrf\addons\rhs_ss21\data\veh\tochka_glass_damage.rvmat",
                "rhsafrf\addons\rhs_ss21\data\veh\tochka_glass_in.rvmat",
                "rhsafrf\addons\rhs_ss21\data\veh\tochka_glass_in_damage.rvmat",
                "rhsafrf\addons\rhs_ss21\data\veh\tochka_glass_in_damage.rvmat",
                "rhsafrf\addons\rhs_ss21\data\veh\tochka_misc.rvmat",
                "rhsafrf\addons\rhs_ss21\data\veh\tochka_misc_damage.rvmat",
                "rhsafrf\addons\rhs_ss21\data\veh\tochka_misc_destruct.rvmat",
                "rhsafrf\addons\rhs_ss21\data\veh\tochka_bottom.rvmat",
                "rhsafrf\addons\rhs_ss21\data\veh\tochka_bottom_damage.rvmat",
                "rhsafrf\addons\rhs_ss21\data\veh\tochka_bottom_destruct.rvmat",
                "rhsafrf\addons\rhs_ss21\data\veh\interior\seat.rvmat",
                "rhsafrf\addons\rhs_ss21\data\veh\interior\seat.rvmat",
                "rhsafrf\addons\rhs_ss21\data\veh\tochka_bottom_destruct.rvmat",
                "rhsafrf\addons\rhs_ss21\data\veh\interior\in1.rvmat",
                "rhsafrf\addons\rhs_ss21\data\veh\interior\in1.rvmat",
                "rhsafrf\addons\rhs_ss21\data\veh\tochka_bottom_destruct.rvmat"
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                commanding = 0;
                gun = "RHS_SS21_missile_rise";
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                usePiP = 1;
                minElev = 74;
                maxElev = 78;
                initElev = 75;
                minTurn = -0.01;
                maxTurn = 0.01;
                weapons[] = {"RHS_ss21_dummy_launcher"};
                weaponsOnUnDeploy[] = {"RHS_ss21_dummy_launcher"};
                weaponsOnDeploy[] = {"RHS_9M79_1Launcher"};
                magazines[] = {"1_Rnd_RHS_9M79_1_F"};
                gunnerInAction = "BAZ_oper";
                gunnerAction = "BAZ_oper";
                soundServo[] = {"", 0, 1};
                gunnerOpticsModel = "";
                gunnergetInAction = "GetInHigh";
                stabilizedInAxes = 0;
                gunnerType = "rhs_rva_crew_officer";
                forceHideGunner = 1;
                forceHideCommander = 1;
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
                class ViewCargo {
                    initAngleX = 5;
                    minAngleX = -75;
                    maxAngleX = 85;
                    initAngleY = 0;
                    minAngleY = -150;
                    maxAngleY = 150;
                    initFov = 0.7;
                    minFov = 0.42;
                    maxFov = 0.85;
                    minMoveX = 0;
                    maxMoveX = 0;
                    minMoveY = 0;
                    maxMoveY = 0;
                    minMoveZ = 0;
                    maxMoveZ = 0;
                };
                class ViewGunner: ViewCargo {};
            };
        };
        class ViewPilot: ViewPilot {
            initAngleX = -2;
            minAngleX = -65;
            maxAngleX = 85;
            initAngleY = 0;
            minAngleY = -150;
            maxAngleY = 150;
        };
        class AnimationSources: AnimationSources {
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
            class HitLFWheel {
                source = "Hit";
                hitpoint = "HitLFWheel";
                raw = 1;
            };
            class HitRFWheel: HitLFWheel {
                hitpoint = "HitRFWheel";
            };
            class HitLBWheel: HitLFWheel {
                hitpoint = "HitLBWheel";
            };
            class HitRBWheel: HitLFWheel {
                hitpoint = "HitRBWheel";
            };
            class HitLMWheel: HitLFWheel {
                hitpoint = "HitLMWheel";
            };
            class HitRMWheel: HitLFWheel {
                hitpoint = "HitRMWheel";
            };
            class WipersSW {
                source = "user";
                animPeriod = 0.1;
                initPhase = 0;
            };
            class WindshieldWipers {
                source = "user";
                animPeriod = 0.5;
                initPhase = 0;
            };
            class MissileRise {
                source = "door";
                animPeriod = 15;
                initPhase = 0;
            };
            class MissileHide {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class StablePos: MissileRise {
                animPeriod = 3;
            };
            class MissileBayL: MissileRise {
                animPeriod = 9;
            };
            class MissileBayR: MissileRise {
                animPeriod = 9;
            };
            class MissileEnviro: MissileRise {
                animPeriod = 3;
            };
            class RHS_Rocket_Handler {
                source = "user";
                animPeriod = 0.01;
                displayName = "deploy launcher";
                mass = 1;
                onPhaseChanged = "_this spawn rhs_fnc_ss21_AI_prepare";
                initPhase = 0;
            };
        };
        class HitPoints: HitPoints {
            class HitGlass1 {
                armor = 0.1;
                material = -1;
                name = "glass5";
                visual = "glass5";
                passThrough = 0;
            };
            class HitGlass2 {
                armor = 0.1;
                material = -1;
                passThrough = 0;
                name = "glass2";
                visual = "glass2";
            };
            class HitGlass3 {
                armor = 0.1;
                material = -1;
                passThrough = 0;
                name = "glass3";
                visual = "glass3";
            };
            class HitGlass4 {
                armor = 0.1;
                material = -1;
                passThrough = 0;
                name = "glass4";
                visual = "glass4";
            };
            class HitGlass5 {
                armor = 0.1;
                material = -1;
                passThrough = 0;
                name = "glass5";
                visual = "glass5";
            };
            class HitLFWheel: HitLFWheel {
                armor = 0.5;
                passThrough = 0.3;
                name = "wheel_1_1";
            };
            class HitLMWheel: HitLMWheel {
                armor = 0.5;
                passThrough = 0.3;
                name = "wheel_1_2";
            };
            class HitLBWheel: HitLBWheel {
                armor = 0.5;
                passThrough = 0.3;
                name = "wheel_1_3";
            };
            class HitRFWheel: HitRFWheel {
                armor = 0.5;
                passThrough = 0.3;
                name = "wheel_2_1";
            };
            class HitRMWheel: HitRMWheel {
                armor = 0.5;
                passThrough = 0.3;
                name = "wheel_2_2";
            };
            class HitRBWheel: HitRBWheel {
                armor = 0.5;
                passThrough = 0.3;
                name = "wheel_2_3";
            };
            class HitBody {
                armor = 1;
                material = -1;
                name = "ammo";
                visual = "karoserie";
                passThrough = 1;
            };
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
                visual = "-";
                passThrough = 0.2;
            };
        };
        class UserActions {
            class WiperOn {
                displayName = "$STR_RHS_ss21_Wiper_On";
                position = "zamerny";
                radius = 0.01;
                onlyForplayer = 0;
                condition = "(alive this)&&((call rhs_fnc_findPlayer) == driver this)&&!(this getVariable 'wiper_on')";
                statement = "[3,1,this] spawn (RHS_ss21_logic getVariable 'anim_ss21');";
            };
            class WiperOff {
                displayName = "$STR_RHS_ss21_Wiper_Off";
                position = "zamerny";
                radius = 0.01;
                onlyForplayer = 0;
                condition = "(alive this)&&((call rhs_fnc_findPlayer) == driver this)&&(this getVariable 'wiper_on')";
                statement = "[3,0,this] call (RHS_ss21_logic getVariable 'anim_ss21');";
            };
            class ControlPanel {
                displayName = "$STR_RHS_ss21_control_panel";
                position = "zamerny";
                radius = 0.01;
                onlyForplayer = 0;
                condition = "(alive this)&&((call rhs_fnc_findPlayer)==(gunner this))";
                statement = "createDialog 'ss21_main_dialog'";
            };
        };
        class Reflectors {
            class LeftLight {
                color[] = {1900, 1300, 950};
                ambient[] = {5, 5, 5};
                position = "L svetlo";
                direction = "konec L svetla";
                hitpoint = "L svetlo";
                selection = "L svetlo";
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
            class RightLight: LeftLight {
                position = "P svetlo";
                direction = "konec P svetla";
                hitpoint = "P svetlo";
                selection = "P svetlo";
            };
        };
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
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "[_this select 0] execVM 'rhsafrf\addons\rhs_c_rva\scripts\init.sqf';(_this select 0) addeventhandler ['HandleDamage',{[_this,0.5,0.025,0.8,0.2] spawn rhs_fnc_activeTirePressure; _this select 2;}];";
                postInit = "_this call rhs_fnc_reapplyTextures";
            };
        };
        unitInfoType = "UnitInfoShip";
        class Library {
            libTextDesc = "$STR_RHS_ss21_lib";
        };
    };
    class rhs_9k79: OTR21_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_9k79.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
    };
    class rhs_9k79_K: rhs_9k79 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_9k79_K.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_ss21K";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {"1_Rnd_RHS_9M79_1_K"};
            };
        };
    };
    class rhs_9k79_B: rhs_9k79 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_9k79_B.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "$STR_RHS_ss21B";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {"1_Rnd_RHS_9M79B"};
            };
        };
    };
};
class CfgSounds {
    class RHS_SS21prepS {
        name = "RHS_SS21prepS";
        sound[] = {"\rhsafrf\addons\rhs_ss21\sound\prepS", 0.1, 1};
        titles[] = {};
    };
    class RHS_SS21wipers {
        name = "RHS_SS21wipers";
        sound[] = {"\rhsafrf\addons\rhs_ss21\sound\wipers.wss", 0.1, 1};
        titles[] = {};
    };
    class RHS_tochkaLoop {
        name = "RHS_tochkaLoop";
        sound[] = {"\rhsafrf\addons\rhs_ss21\sound\tochkaLoop.wss", 0.1, 1};
        titles[] = {};
    };
    class RHS_tochkaStart {
        name = "RHS_tochkaStart";
        sound[] = {"\rhsafrf\addons\rhs_ss21\sound\tochkaStart.wss", 0.1, 1};
        titles[] = {};
    };
    class nuclear_boom {
        name = "nuclear_boom";
        sound[] = {"\rhsafrf\addons\rhs_c_rva\scripts\nuke\boom.ogg", 15.848932, 1};
        titles[] = {};
    };
    class nuclear_geiger {
        name = "nuclear_geiger";
        sound[] = {"\rhsafrf\addons\rhs_c_rva\scripts\nuke\geiger.ogg", 1, 1};
        titles[] = {};
    };
};
class RscMapControl;
class RscShortcutButton;
class RscButton;
class RscPicture;
class RscText;
class RscListBox;
class RscEdit;
class ss21_main_dialog {
    idd = 61461;
    name = "ss21_main_dialog";
    movingEnable = 0;
    onLoad = "[0] spawn rhs_fnc_ss21_dialog_control";
    onUnload = "[1] call rhs_fnc_ss21_dialog_control";
    controlsBackground[] = {"ss21_backgroundCover", "ss21_background"};
    objects[] = {};
    controls[] = {
        "ss21_map",
        "ss21_label",
        "ss21_status",
        "ss21_coord_control_group",
        "ss21_btn_control_group"
    };
    class RHS_ss21_control_group {
        idc = -1;
        type = 15;
        style = 0;
        class VScrollbar {
            color[] = {1, 1, 1, 1};
            width = 0.021;
            autoScrollSpeed = -1;
            autoScrollDelay = 5;
            autoScrollRewind = 0;
        };
        class HScrollbar {
            color[] = {1, 1, 1, 1};
            height = 0.028;
        };
        class ScrollBar {
            color[] = {1, 1, 1, 0.6};
            colorActive[] = {1, 1, 1, 1};
            colorDisabled[] = {1, 1, 1, 0.3};
            arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
            arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
            border = "#(argb,8,8,3)color(0,0,0,0.1)";
            thumb = "#(argb,8,8,3)color(1,1,1,1)";
        };
        x = 0;
        w = 1;
        y = 0;
        h = 1;
    };
    class RHS_ss21_text: RscText {
        idc = -1;
        type = 0;
        style = 0;
        x = 0;
        w = 0.3;
        y = 0;
        h = 0.04;
        sizeEx = 0.03921;
        colorBackground[] = {0.5, 0.5, 0.5, 0};
        colorText[] = {0.85, 0.85, 0.85, 1};
        font = "PuristaMedium";
        text = "";
    };
    class RHS_ss21_text_border: RscPicture {
        idc = -1;
        type = 0;
        style = 0;
        x = 0;
        w = 0.3;
        y = 0;
        h = 0.035;
        sizeEx = 0.03921;
        colorBackground[] = {0, 0, 0, 0.2};
        colorText[] = {0.85, 0.85, 0.85, 1};
        font = "PuristaMedium";
        text = "";
    };
    class RHS_ss21_edit: RscEdit {
        type = 2;
        style = "0x00+16";
        idc = -1;
        font = "PuristaMedium";
        sizeEx = 0.026;
        htmlControl = 1;
        lineSpacing = 0.004;
        x = 0;
        w = 0.3;
        y = 0;
        h = 0.06;
        colorText[] = {0.85, 0.85, 0.85, 1};
        colorSelection[] = {1, 1, 1, 1};
        text = "";
    };
    class RHS_ss21_image: RscPicture {
        idc = -1;
        type = 0;
        style = "48+0x800";
        x = 0.25;
        w = 0.1;
        y = 0.1;
        h = 0.1;
        colorText[] = {1, 1, 1, 1};
        colorBackground[] = {0, 0, 0, 0};
        text = "";
        font = "PuristaMedium";
        sizeEx = 0.032;
    };
    class RHS_ss21_btn: RscShortcutButton {
        idc = -1;
        type = 16;
        style = 0;
        text = "btn";
        action = "";
        x = 0;
        y = 0;
        w = 0.23;
        h = 0.1;
        size = 0.03921;
        sizeEx = 0.03921;
        color[] = {0.543, 0.5742, 0.4102, 1};
        color2[] = {0.95, 0.95, 0.95, 1};
        colorBackground[] = {1, 1, 1, 1};
        colorbackground2[] = {1, 1, 1, 0.4};
        colorDisabled[] = {1, 1, 1, 0.25};
        periodFocus = 1.2;
        periodOver = 0.8;
        class HitZone {
            left = 0.004;
            top = 0.029;
            right = 0.004;
            bottom = 0.029;
        };
        class ShortcutPos {
            left = 0.0145;
            top = 0.026;
            w = 0.0392157;
            h = 0.0522876;
        };
        class TextPos {
            left = 0.025;
            top = 0.03;
            right = 0.005;
            bottom = 0.005;
        };
        textureNoShortcut = "";
        animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";
        animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";
        animTextureOver = "#(argb,8,8,3)color(1,1,1,0.0)";
        animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";
        animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";
        animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";
        period = 0.4;
        font = "PuristaMedium";
        soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter", 0.09, 1};
        soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush", 0.09, 1};
        soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick", 0.09, 1};
        soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape", 0.09, 1};
        class Attributes {
            font = "PuristaMedium";
            color = "#E5E5E5";
            align = "left";
            shadow = "true";
        };
        class AttributesImage {
            font = "PuristaMedium";
            color = "#E5E5E5";
            align = "left";
            shadow = "true";
        };
    };
    class RHS_ss21_list: RscListBox {
        type = 5;
        style = 16;
        idc = -1;
        text = "";
        w = 0.275;
        h = 0.04;
        colorSelect[] = {1, 1, 1, 1};
        colorText[] = {1, 1, 1, 1};
        colorBackground[] = {0.8, 0.8, 0.8, 1};
        colorSelectBackground[] = {0.4, 0.43, 0.28, 0.5};
        colorScrollbar[] = {0.2, 0.2, 0.2, 1};
        arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
        arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
        wholeHeight = 0.45;
        rowHeight = 0.04;
        color[] = {0.7, 0.7, 0.7, 1};
        colorActive[] = {0, 0, 0, 1};
        colorDisabled[] = {0, 0, 0, 0.3};
        font = "PuristaMedium";
        sizeEx = 0.023;
        soundSelect[] = {"", 0.1, 1};
        soundExpand[] = {"", 0.1, 1};
        soundCollapse[] = {"", 0.1, 1};
        maxHistoryDelay = 1;
        autoScrollSpeed = -1;
        autoScrollDelay = 5;
        autoScrollRewind = 0;
        class ScrollBar {
            color[] = {1, 1, 1, 1};
            colorActive[] = {1, 1, 1, 1};
            colorDisabled[] = {1, 1, 1, 1};
            thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
            arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
            arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
            border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
        };
    };
    class RHS_ss21_map: RscMapControl {
        idc = -1;
        type = 101;
        style = 48;
        x = 0;
        y = 0;
        w = 1;
        h = 1;
        colorBackground[] = {1, 1, 1, 1};
        colorOutside[] = {0, 0, 0, 1};
        colorSea[] = {0.4, 0.6, 0.8, 0.5};
        colorForest[] = {0.6, 0.8, 0.4, 0.5};
        colorForestBorder[] = {0.6, 0.8, 0.4, 1};
        colorRocks[] = {0, 0, 0, 0.3};
        colorRocksBorder[] = {0, 0, 0, 1};
        colorLevels[] = {0.3, 0.2, 0.1, 0.5};
        colorMainCountlines[] = {0.6, 0.4, 0.2, 0.5};
        colorCountlines[] = {0.6, 0.4, 0.2, 0.3};
        colorMainCountlinesWater[] = {0.5, 0.6, 0.7, 0.6};
        colorCountlinesWater[] = {0.5, 0.6, 0.7, 0.3};
        colorPowerLines[] = {0.1, 0.1, 0.1, 1};
        colorRailWay[] = {0.8, 0.2, 0, 1};
        colorNames[] = {1.1, 0.1, 1.1, 0.9};
        colorInactive[] = {1, 1, 0, 0.5};
        colorTracks[] = {0.8, 0.8, 0.7, 0.2};
        colorTracksFill[] = {0.8, 0.7, 0.7, 1};
        colorRoads[] = {0.7, 0.7, 0.7, 1};
        colorRoadsFill[] = {1, 1, 1, 1};
        colorMainRoads[] = {0.9, 0.5, 0.3, 1};
        colorMainRoadsFill[] = {1, 0.6, 0.4, 1};
        colorGrid[] = {0.1, 0.1, 0.1, 0.6};
        colorGridMap[] = {0.1, 0.1, 0.1, 0.6};
        font = "PuristaMedium";
        sizeEx = 0.04;
        stickX[] = {0.2, {"Gamma", 1, 1.5}};
        stickY[] = {0.2, {"Gamma", 1, 1.5}};
        ptsPerSquareSea = 6;
        ptsPerSquareTxt = 8;
        ptsPerSquareCLn = 8;
        ptsPerSquareExp = 8;
        ptsPerSquareCost = 8;
        ptsPerSquareFor = "4.0f";
        ptsPerSquareForEdge = "10.0f";
        ptsPerSquareRoad = 2;
        ptsPerSquareObj = 10;
        fontLabel = "PuristaMedium";
        sizeExLabel = 0.034;
        fontGrid = "PuristaMedium";
        sizeExGrid = 0.034;
        fontUnits = "PuristaMedium";
        sizeExUnits = 0.034;
        fontNames = "PuristaMedium";
        sizeExNames = 0.056;
        fontInfo = "PuristaMedium";
        sizeExInfo = 0.034;
        fontLevel = "PuristaMedium";
        sizeExLevel = 0.034;
        text = "#(argb,8,8,3)color(1,1,1,1)";
        maxSatelliteAlpha = 0;
        alphaFadeStartScale = 1;
        alphaFadeEndScale = 1.1;
        showCountourInterval = 2;
        scaleDefault = 0.1;
        onMouseButtonClick = "";
        onMouseButtonDblClick = "";
        class Legend {
            colorBackground[] = {1, 1, 1, 0.5};
            color[] = {0, 0, 0, 1};
            x = "SafeZoneX + 					(			((safezoneW / safezoneH) min 1.2) / 40)";
            y = "SafeZoneY + safezoneH - 4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            w = "10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
            h = "3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            font = "PuristaMedium";
            sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
        };
        class ActiveMarker {
            color[] = {0.3, 0.1, 0.9, 1};
            size = 50;
        };
        class Command {
            color[] = {1, 1, 1, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
            size = 18;
            importance = 1;
            coefMin = 1;
            coefMax = 1;
        };
        class Task {
            colorCreated[] = {1, 1, 1, 1};
            colorCanceled[] = {0.7, 0.7, 0.7, 1};
            colorDone[] = {0.7, 1, 0.3, 1};
            colorFailed[] = {1, 0.3, 0.2, 1};
            color[] = {
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
                "(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
            };
            icon = "\A3\ui_f\data\map\mapcontrol\taskIcon_CA.paa";
            iconCreated = "\A3\ui_f\data\map\mapcontrol\taskIconCreated_CA.paa";
            iconCanceled = "\A3\ui_f\data\map\mapcontrol\taskIconCanceled_CA.paa";
            iconDone = "\A3\ui_f\data\map\mapcontrol\taskIconDone_CA.paa";
            iconFailed = "\A3\ui_f\data\map\mapcontrol\taskIconFailed_CA.paa";
            size = 27;
            importance = 1;
            coefMin = 1;
            coefMax = 1;
        };
        class CustomMark {
            color[] = {0, 0, 0, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\custommark_ca.paa";
            size = 24;
            importance = 1;
            coefMin = 1;
            coefMax = 1;
        };
        class Tree {
            color[] = {0.45, 0.64, 0.33, 0.4};
            icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
            size = 12;
            importance = "0.9 * 16 * 0.05";
            coefMin = 0.25;
            coefMax = 4;
        };
        class SmallTree {
            color[] = {0.45, 0.64, 0.33, 0.4};
            icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
            size = 12;
            importance = "0.6 * 12 * 0.05";
            coefMin = 0.25;
            coefMax = 4;
        };
        class Bush {
            color[] = {0.45, 0.64, 0.33, 0.4};
            icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
            size = "14/2";
            importance = "0.2 * 14 * 0.05 * 0.05";
            coefMin = 0.25;
            coefMax = 4;
        };
        class Church {
            color[] = {1, 1, 1, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\church_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
        };
        class Chapel {
            color[] = {0, 0, 0, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
        };
        class Cross {
            color[] = {0, 0, 0, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
        };
        class Rock {
            color[] = {0.1, 0.1, 0.1, 0.8};
            icon = "\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
            size = 12;
            importance = "0.5 * 12 * 0.05";
            coefMin = 0.25;
            coefMax = 4;
        };
        class Bunker {
            color[] = {0, 0, 0, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
            size = 14;
            importance = "1.5 * 14 * 0.05";
            coefMin = 0.25;
            coefMax = 4;
        };
        class Fortress {
            color[] = {0, 0, 0, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
            size = 16;
            importance = "2 * 16 * 0.05";
            coefMin = 0.25;
            coefMax = 4;
        };
        class Fountain {
            color[] = {0, 0, 0, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\fountain_ca.paa";
            size = 11;
            importance = "1 * 12 * 0.05";
            coefMin = 0.25;
            coefMax = 4;
        };
        class ViewTower {
            color[] = {0, 0, 0, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";
            size = 16;
            importance = "2.5 * 16 * 0.05";
            coefMin = 0.5;
            coefMax = 4;
        };
        class Lighthouse {
            color[] = {1, 1, 1, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\lighthouse_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
        };
        class Quay {
            color[] = {1, 1, 1, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\quay_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
        };
        class Fuelstation {
            color[] = {1, 1, 1, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
        };
        class Hospital {
            color[] = {1, 1, 1, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\hospital_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
        };
        class BusStop {
            color[] = {1, 1, 1, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\busstop_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
        };
        class Transmitter {
            color[] = {1, 1, 1, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
        };
        class Stack {
            color[] = {0, 0, 0, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\stack_ca.paa";
            size = 20;
            importance = "2 * 16 * 0.05";
            coefMin = 0.9;
            coefMax = 4;
        };
        class Ruin {
            color[] = {0, 0, 0, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\ruin_ca.paa";
            size = 16;
            importance = "1.2 * 16 * 0.05";
            coefMin = 1;
            coefMax = 4;
        };
        class Tourism {
            color[] = {0, 0, 0, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";
            size = 16;
            importance = "1 * 16 * 0.05";
            coefMin = 0.7;
            coefMax = 4;
        };
        class Watertower {
            color[] = {1, 1, 1, 1};
            icon = "\A3\ui_f\data\map\mapcontrol\watertower_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
        };
        class Waypoint {
            color[] = {0, 0, 0, 1};
            size = 24;
            importance = 1;
            coefMin = 1;
            coefMax = 1;
            icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
        };
        class WaypointCompleted {
            color[] = {0, 0, 0, 1};
            size = 24;
            importance = 1;
            coefMin = 1;
            coefMax = 1;
            icon = "\A3\ui_f\data\map\mapcontrol\waypointCompleted_ca.paa";
        };
        class power {
            icon = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
            color[] = {1, 1, 1, 1};
        };
        class powersolar {
            icon = "\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
            color[] = {1, 1, 1, 1};
        };
        class powerwave {
            icon = "\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
            color[] = {1, 1, 1, 1};
        };
        class powerwind {
            icon = "\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
            color[] = {1, 1, 1, 1};
        };
        class Shipwreck {
            icon = "\A3\ui_f\data\map\mapcontrol\Shipwreck_CA.paa";
            size = 24;
            importance = 1;
            coefMin = 0.85;
            coefMax = 1;
            color[] = {0, 0, 0, 1};
        };
    };
    class ss21_backgroundCover: RHS_ss21_text {
        h = "SafeZoneH";
        w = "SafeZoneW";
        x = "SafeZoneX";
        y = "SafeZoneY";
        colorBackground[] = {0, 0, 0, 1};
        text = "";
    };
    class ss21_background {
        idc = -1;
        type = 0;
        style = 48;
        x = "0.1-0.03";
        w = "0.3*3 + 0.03*4";
        y = 0;
        h = "1+0.01*2+0.043*4";
        colorText[] = {1, 1, 1, 1};
        colorBackground[] = {0, 0, 0, 0};
        text = "#(argb,8,8,3)color(0,0,0,1)";
        font = "PuristaMedium";
        sizeEx = 0.032;
    };
    class ss21_label: RHS_ss21_text {
        style = 2;
        x = 0.1;
        w = "0.9 - 0.01";
        y = 0.05;
        h = 0.05;
        sizeEx = 0.05;
        text = "$STR_RHS_ss21_label";
    };
    class ss21_map: RHS_ss21_map {
        idc = "(61461 + 1)";
        x = 0.1;
        w = "0.3*2 - 0.01";
        y = "0.1 + 0.2";
        h = "1 - (0.1 + 0.2*2) + 0.04";
    };
    class ss21_status: RHS_ss21_text_border {
        idc = "(61461 + 2)";
        x = 0.1;
        w = "0.9 - 0.01";
        y = "1-0.1- 0.02";
        text = "--";
    };
    class ss21_coord_control_group: RHS_ss21_control_group {
        x = 0.1;
        w = 1;
        y = "0.1+0.025";
        h = "0.04*5";
        class Controls {
            class ss21_coord_desc: RHS_ss21_text {
                style = 1;
                x = 0;
                w = "0.17 - 0.01";
                y = 0;
                text = "$STR_RHS_ss21_coord_desc";
            };
            class ss21_latitude_desc: RHS_ss21_text {
                style = 1;
                x = 0;
                w = "0.17 - 0.01";
                y = 0.04;
                text = "$STR_RHS_ss21_latitude_desc";
            };
            class ss21_longitude_desc: RHS_ss21_text {
                style = 1;
                x = 0;
                w = "0.17 - 0.01";
                y = "0.04*2";
                text = "$STR_RHS_ss21_longitude_desc";
            };
            class ss21_elevation_desc: RHS_ss21_text {
                style = 1;
                x = 0;
                w = "0.17 - 0.01";
                y = "0.04*3";
                h = 0.04;
                text = "$STR_RHS_ss21_elevation_desc";
            };
            class ss21_target_desc: RHS_ss21_text {
                x = 0.17;
                w = "0.17 - 0.01";
                y = 0;
                text = "$STR_RHS_ss21_target_desc";
            };
            class ss21_target_x: RHS_ss21_text_border {
                idc = "(61461 + 3)";
                x = 0.17;
                w = "0.17 - 0.01";
                y = "0.04*1";
                text = "--";
            };
            class ss21_target_y: RHS_ss21_text_border {
                idc = "(61461 + 4)";
                x = 0.17;
                w = "0.17 - 0.01";
                y = "0.04*2";
                text = "--";
            };
            class ss21_target_z: RHS_ss21_text_border {
                idc = "(61461 + 5)";
                x = 0.17;
                w = "0.17 - 0.01";
                y = "0.04*3";
                text = "--";
            };
            class ss21_tochka_desc: RHS_ss21_text {
                x = "0.17*2";
                w = "0.17 - 0.01";
                y = 0;
                text = "$STR_RHS_ss21_tochka_desc";
            };
            class ss21_tochka_x: RHS_ss21_text_border {
                idc = "(61461 + 6)";
                x = "0.17*2";
                w = "0.17 - 0.01";
                y = "0.04*1";
                text = "--";
            };
            class ss21_tochka_y: RHS_ss21_text_border {
                idc = "(61461 + 7)";
                x = "0.17*2";
                w = "0.17 - 0.01";
                y = "0.04*2";
                text = "--";
            };
            class ss21_tochka_z: RHS_ss21_text_border {
                idc = "(61461 + 8)";
                x = "0.17*2";
                w = "0.17 - 0.01";
                y = "0.04*3";
                text = "--";
            };
            class ss21_rel_desc: RHS_ss21_text {
                style = 2;
                x = "0.17*4.3 - 0.03";
                w = "0.17 - 0.01 + 0.03";
                y = 0;
                text = "$STR_RHS_ss21_rel_desc";
            };
            class ss21_dir_desc: RHS_ss21_text {
                style = 1;
                x = "0.17*3.3";
                w = "0.17 - 0.01";
                y = 0.04;
                text = "$STR_RHS_ss21_dir_desc";
            };
            class ss21_dist_desc: RHS_ss21_text {
                style = 1;
                x = "0.17*3.3";
                w = "0.17 - 0.01";
                y = "0.04*2";
                text = "$STR_RHS_ss21_dist_desc";
            };
            class ss21_elevation_rel_desc: RHS_ss21_text {
                style = 1;
                x = "0.17*3.3";
                w = "0.17 - 0.01";
                y = "0.04*3";
                text = "$STR_RHS_ss21_elevation_desc";
            };
            class ss21_rel_dir: RHS_ss21_text_border {
                idc = "(61461 + 9)";
                x = "0.17*4.3";
                w = "0.17 - 0.01";
                y = "0.04*1";
                text = "--";
            };
            class ss21_rel_dist: RHS_ss21_text_border {
                idc = "(61461 + 10)";
                x = "0.17*4.3";
                w = "0.17 - 0.01";
                y = "0.04*2";
                text = "--";
            };
            class ss21_rel_elev: RHS_ss21_text_border {
                idc = "(61461 + 11)";
                x = "0.17*4.3";
                w = "0.17 - 0.01";
                y = "0.04*3";
                text = "--";
            };
        };
    };
    class ss21_btn_control_group: RHS_ss21_control_group {
        x = "0.1 + 0.3*2";
        w = 0.3;
        y = "0.1 + 0.2 - 0.05";
        h = 1;
        class Controls {
            class ss21_stable_desc: RHS_ss21_text {
                style = 2;
                x = 0;
                w = 0.3;
                y = "0.043*1 + 0.032";
                text = "$STR_RHS_ss21_stable_desc";
            };
            class ss21_stable_up_btn: RHS_ss21_btn {
                idc = "(61461 + 12)";
                x = 0;
                w = "0.3/2";
                y = "0.043*2";
                text = "$STR_RHS_ss21_stable_up_btn";
                action = "[2] spawn rhs_fnc_ss21_dialog_control";
            };
            class ss21_stable_down_btn: RHS_ss21_btn {
                idc = "(61461 + 13)";
                x = "0.3/2";
                w = "0.3/2";
                y = "0.043*2";
                text = "$STR_RHS_ss21_stable_down_btn";
                action = "[3] spawn rhs_fnc_ss21_dialog_control";
            };
            class ss21_bay_desc: RHS_ss21_text {
                style = 2;
                x = 0;
                w = 0.3;
                y = "0.043*3 + 0.032";
                text = "$STR_RHS_ss21_bay_desc";
            };
            class ss21_bay_close_btn: RHS_ss21_btn {
                idc = "(61461 + 15)";
                x = 0;
                w = "0.3/2";
                y = "0.043*4";
                text = "$STR_RHS_ss21_bay_close_btn";
                action = "[4] spawn rhs_fnc_ss21_dialog_control";
            };
            class ss21_bay_open_btn: RHS_ss21_btn {
                idc = "(61461 + 14)";
                x = "0.3/2";
                w = "0.3/2";
                y = "0.043*4";
                text = "$STR_RHS_ss21_bay_open_btn";
                action = "[5] spawn rhs_fnc_ss21_dialog_control";
            };
            class ss21_pylon_desc: RHS_ss21_text {
                style = 2;
                x = 0;
                w = 0.3;
                y = "0.043*5 + 0.032";
                text = "$STR_RHS_ss21_pylon_desc";
            };
            class ss21_pylon_down_btn: RHS_ss21_btn {
                idc = "(61461 + 16)";
                x = 0;
                w = "0.3/2";
                y = "0.043*6";
                text = "$STR_RHS_ss21_pylon_down_btn";
                action = "[6] spawn rhs_fnc_ss21_dialog_control";
            };
            class ss21_pylon_up_btn: RHS_ss21_btn {
                idc = "(61461 + 17)";
                x = "0.3/2";
                w = "0.3/2";
                y = "0.043*6";
                text = "$STR_RHS_ss21_pylon_up_btn";
                action = "[7] spawn rhs_fnc_ss21_dialog_control";
            };
            class ss21_designate_target_btn: RHS_ss21_btn {
                x = 0;
                w = 0.3;
                y = 0.35;
                text = "$STR_RHS_ss21_designate_target_btn";
                action = "[10] call rhs_fnc_ss21_dialog_control";
            };
            class ss21_firing_position_btn: RHS_ss21_btn {
                idc = "(61461 + 18)";
                x = 0;
                w = 0.3;
                y = "0.35+0.043*1";
                text = "$STR_RHS_ss21_firing_position_btn";
                action = "[8] spawn rhs_fnc_ss21_dialog_control";
            };
            class ss21_launch_btn: RHS_ss21_btn {
                idc = "(61461 + 19)";
                x = 0;
                w = 0.3;
                y = "0.35+0.043*2";
                text = "$STR_RHS_ss21_launch_btn";
                action = "[12] spawn rhs_fnc_ss21_dialog_control";
            };
            class ss21_running_position_btn: RHS_ss21_btn {
                idc = "(61461 + 20)";
                x = 0;
                w = 0.3;
                y = "0.35+0.043*3";
                text = "$STR_RHS_ss21_running_position_btn";
                action = "[9] spawn rhs_fnc_ss21_dialog_control";
            };
            class ss21_close_btn: RHS_ss21_btn {
                x = 0;
                w = 0.3;
                y = "0.35+0.043*4";
                text = "$STR_RHS_ss21_close_btn";
                action = "closeDialog 0";
            };
        };
    };
};
