class DefaultEventhandlers;
class CfgPatches {
    class rhsusf_c_m1117 {
        units[] = {
            "rhsusf_M1117_D",
            "rhsusf_M1117_W",
            "rhsusf_M1117_O",
            "rhsusf_duke_d",
            "rhsusf_duke_wd",
            "rhsusf_duke_m1a2_d",
            "rhsusf_duke_m1a2_wd"
        };
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {"rhsusf_main", "rhsusf_c_troops", "rhsusf_c_heavyweapons"};
        name = "M1117 Car";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class RCWSOptics;
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class m1117_turnOut {
                file = "\rhsusf\addons\rhsusf_c_m1117\script\rhs_m1117_turnOut.sqf";
                description = "M1117 hatch handler";
            };
            class m1117_hatch {
                file = "\rhsusf\addons\rhsusf_c_m1117\script\rhs_hatch.sqf";
                description = "M1117 hatch handler";
            };
            class duke_jammer {
                file = "\rhsusf\addons\rhsusf_c_m1117\script\rhs_duke.sqf";
                description = "DUKE jamming simulation";
            };
            class duke_destruction {
                file = "\rhsusf\addons\rhsusf_c_m1117\script\rhs_duke_destruction.sqf";
                description = "DUKE antenna destruction";
            };
            class duke_vg {
                file = "\rhsusf\addons\rhsusf_c_m1117\script\rhs_duke_vg.sqf";
                description = "DUKE Virtual Garage action";
            };
        };
    };
    class RHSUSF {
        tag = "RHSUSF";
        class functions {
            class fuelLeak {
                file = "\rhsusf\addons\rhsusf_c_m1117\script\fuelLeak.sqf";
                description = "Fuel leak script";
            };
        };
    };
};
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        rhs_M1117_Driver = "rhs_M1117_Driver";
        rhs_M1117_Gunner = "rhs_M1117_Gunner";
        rhs_M1117_Commander = "rhs_M1117_Commander";
        rhs_M1117_Driver_out = "rhs_M1117_Driver_out";
        rhs_M1117_Gunner_out = "rhs_M1117_Gunner_out";
        rhs_M1117_Commander_out = "rhs_M1117_Commander_out";
        rhs_M1117_passenger = "rhs_M1117_passenger";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class KIA_rhs_M1117_Driver: DefaultDie {
            actions = "DeadActions";
            file = "rhsusf\addons\rhsusf_m1117\data\anim\kia_M1117_driver.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class rhs_M1117_Driver: Crew {
            file = "rhsusf\addons\rhsusf_m1117\data\Anim\M1117_driver.rtm";
            interpolateTo[] = {"KIA_rhs_M1117_Driver", 1};
        };
        class rhs_M1117_Driver_out: Crew {
            file = "rhsusf\addons\rhsusf_m1117\data\Anim\M1117_driver_out.rtm";
            interpolateTo[] = {"KIA_rhs_M1117_Driver", 1};
        };
        class KIA_rhs_M1117_Gunner: DefaultDie {
            actions = "DeadActions";
            file = "rhsusf\addons\rhsusf_m1117\data\anim\kia_M1117_Gunner.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class rhs_M1117_Gunner: Crew {
            file = "rhsusf\addons\rhsusf_m1117\data\Anim\M1117_Gunner.rtm";
            interpolateTo[] = {"KIA_rhs_M1117_Gunner", 1};
        };
        class rhs_M1117_Gunner_out: Crew {
            file = "rhsusf\addons\rhsusf_m1117\data\Anim\M1117_gunner_out.rtm";
            interpolateTo[] = {"KIA_rhs_M1117_Gunner", 1};
        };
        class KIA_rhs_M1117_commander: DefaultDie {
            actions = "DeadActions";
            file = "rhsusf\addons\rhsusf_m1117\data\anim\kia_M1117_commander.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class rhs_M1117_commander: Crew {
            file = "rhsusf\addons\rhsusf_m1117\data\Anim\M1117_commander.rtm";
            interpolateTo[] = {"KIA_rhs_M1117_commander", 1};
        };
        class rhs_M1117_commander_out: Crew {
            file = "rhsusf\addons\rhsusf_m1117\data\Anim\M1117_commander_out.rtm";
            interpolateTo[] = {"KIA_rhs_M1117_commander", 1};
        };
        class rhs_M1117_passenger: Crew {
            file = "rhsusf\addons\rhsusf_m1117\data\Anim\M1117_passenger.rtm";
            interpolateTo[] = {"KIA_rhs_M1117_passenger", 1};
        };
        class KIA_rhs_M1117_passenger: DefaultDie {
            actions = "DeadActions";
            file = "rhsusf\addons\rhsusf_m1117\data\anim\kia_M1117_passenger.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
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
        class Turrets {
            class MainTurret: NewTurret {
                class ViewGunner;
                class ViewOptics;
            };
        };
        class HitPoints {
            class HitLFWheel;
            class HitLF2Wheel;
            class HitLBWheel;
            class HitRFWheel;
            class HitRF2Wheel;
            class HitRBWheel;
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
            class HitGlass5;
            class HitGlass6;
        };
        class ViewPilot;
        class ViewOptics;
        class AnimationSources;
    };
    class Wheeled_APC_F: Car_F {
        class EventHandlers;
        class CommanderOptics;
    };
    class rhsusf_M1117_base: Wheeled_APC_F {
        scope = 0;
        rhs_duke_type = "rhsusf_duke";
        vehicleClass = "rhs_vehclass_MRAP";
        editorSubcategory = "rhs_EdSubcat_mrap";
        dlc = "RHS_USAF";
        category = "Car";
        class SpeechVariants {
            class Default {
                speechSingular[] = {"veh_vehicle_MRAP_s"};
                speechPlural[] = {"veh_vehicle_MRAP_p"};
            };
        };
        textSingular = "$STR_A3_nameSound_veh_vehicle_MRAP_s";
        textPlural = "$STR_A3_nameSound_veh_vehicle_MRAP_p";
        nameSound = "veh_vehicle_MRAP_s";
        displayName = "M1117 ASV";
        model = "rhsusf\addons\rhsusf_m1117\blx_M1117";
        picture = "rhsusf\addons\rhsusf_m1117\data\UI\picture_m1117_ca.paa";
        Icon = "rhsusf\addons\rhsusf_m1117\data\UI\icon_m1117_ca.paa";
        mapSize = 6;
        unitInfoType = "RHS_RscUnitInfoM1117";
        radarType = 8;
        driverCanSee = "2+4+16";
        gunnerCanSee = "2+4+16";
        commanderCanSee = "2+4+16";
        enableManualFire = 0;
        transportSoldier = 4;
        cargoProxyIndexes[] = {1};
        cost = 600000;
        threat[] = {1, 0.8, 0.3};
        incomingMissileDetectionSystem = 0;
        normalSpeedForwardCoef = 0.7;
        slownSpeedForwardCoef = 0.55;
        turnCoef = 3;
        terrainCoef = 2;
        simulation = "carx";
        dampersBumpCoef = 0;
        maxSpeed = 100;
        fuelCapacity = 35;
        wheelCircumference = 3.656706;
        brakeIdleSpeed = 2;
        canFloat = 0;
        maxFordingDepth = 0;
        waterSpeedFactor = 0.1;
        waterResistance = 1;
        waterResistanceCoef = 0.3;
        waterLeakiness = 20;
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
                0.6
            };
            TransmissionRatios[] = {"High", 6.9};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        changeGearMinEffectivity[] = {0.95, 0, 0.95, 0.95, 0.95, 0.9, 0.9, 0.45};
        switchTime = 0.5;
        latency = 1;
        differentialType = "all_limited";
        frontRearSplit = 0.5;
        frontBias = 1.3;
        rearBias = 1.3;
        centreBias = 1.3;
        clutchStrength = 55;
        dampingRateFullThrottle = 0.15;
        dampingRateZeroThrottleClutchEngaged = 0.8;
        dampingRateZeroThrottleClutchDisengaged = 0.35;
        torqueCurve[] = {
            {0.454545, 0.63348},
            {0.5, 0.856388},
            {0.590909, 0.987665},
            {0.681818, 1},
            {0.772727, 0.959471},
            {0.863636, 0.864317},
            {0.954545, 0.781498},
            {1.05409, 0}
        };
        engineMOI = 5;
        enginePower = 194;
        peakTorque = 1135;
        minOmega = 66;
        maxOmega = 230.38;
        idleRPM = 1000;
        redRPM = 2200;
        thrustDelay = 0.8;
        engineLosses = 15;
        engineBrakeCoef = 0.8;
        antiRollbarForceCoef = 0.5;
        antiRollbarForceLimit = 0.5;
        antiRollbarSpeedMin = 10;
        antiRollbarSpeedMax = 50;
        accelAidForceSpd = 2.23;
        accelAidForceCoef = 3;
        accelAidForceYOffset = -1.3;
        class Wheels {
            class LF {
                side = "left";
                boneName = "wheel_1_1";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                suspForceAppPointOffset = "wheel_1_1_axis";
                tireForceAppPointOffset = "wheel_1_1_axis";
                suspTravelDirection[] = {-0.125, -1, 0};
                steering = 1;
                width = 0.35;
                mass = 80;
                MOI = 14.4;
                dampingRate = 1;
                dampingRateInAir = 1;
                dampingRateDamaged = 1.5;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 26000;
                maxHandBrakeTorque = 0;
                maxCompression = 0.2;
                maxDroop = 0.2;
                sprungMass = -1;
                springStrength = 178578;
                springDamperRate = 17000;
                longitudinalStiffnessPerUnitGravity = 13000;
                latStiffX = 35;
                latStiffY = 180;
                frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1, 1}};
            };
            class LR: LF {
                boneName = "wheel_1_2";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                suspForceAppPointOffset = "wheel_1_2_axis";
                tireForceAppPointOffset = "wheel_1_2_axis";
                maxHandBrakeTorque = 40000;
                steering = 0;
            };
            class RF: LF {
                side = "right";
                boneName = "wheel_2_1";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                suspForceAppPointOffset = "wheel_2_1_axis";
                tireForceAppPointOffset = "wheel_2_1_axis";
                suspTravelDirection[] = {0.125, -1, 0};
                steering = 1;
            };
            class RR: RF {
                boneName = "wheel_2_2";
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                suspForceAppPointOffset = "wheel_2_2_axis";
                tireForceAppPointOffset = "wheel_2_2_axis";
                maxHandBrakeTorque = 40000;
                steering = 0;
            };
        };
        tf_RadioType_api = "tf_rt1523g";
        tf_hasLRradio_api = 1;
        tf_isolatedAmount_api = 0.2;
        rhs_hasSmokeCap = 1;
        htMin = 60;
        htMax = 600;
        afMax = 200;
        mfMax = 100;
        mFact = 1;
        tBody = 150;
        damperSize = 0.1;
        damperForce = 0.1;
        damperDamping = 0.1;
        steerAheadSimul = 0.55;
        steerAheadPlan = 0.2;
        predictTurnSimul = 4.4;
        predictTurnPlan = 0.5;
        precision = 15;
        crewVulnerable = 1;
        crewCrashProtection = 0.15;
        class Library {
            libTextDesc = "M1117_Guardian ASV";
        };
        armor = 150;
        armorStructural = 8;
        weapons[] = {"TruckHorn"};
        magazines[] = {};
        damageResistance = 0.03099;
        destrType = "DestructWreck";
        selectionDamage = "zbytek";
        enableGPS = 1;
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_m1117\data\m1117_tex1.rvmat",
                "rhsusf\addons\rhsusf_m1117\data\m1117_tex1_damage.rvmat",
                "rhsusf\addons\rhsusf_m1117\data\m1117_tex1_damage.rvmat",
                "rhsusf\addons\rhsusf_m1117\data\m1117_armour.rvmat",
                "rhsusf\addons\rhsusf_m1117\data\m1117_armour_damage.rvmat",
                "rhsusf\addons\rhsusf_m1117\data\m1117_armour_damage.rvmat",
                "rhsusf\addons\rhsusf_m1117\data\m1117_turret.rvmat",
                "rhsusf\addons\rhsusf_m1117\data\m1117_turret_damage.rvmat",
                "rhsusf\addons\rhsusf_m1117\data\m1117_turret_damage.rvmat",
                "rhsusf\addons\rhsusf_m1117\data\m1117_wheel.rvmat",
                "rhsusf\addons\rhsusf_m1117\data\m1117_wheel_damage.rvmat",
                "rhsusf\addons\rhsusf_m1117\data\m1117_wheel_damage.rvmat",
                "rhsusf\addons\rhsusf_m1117\data\periscope_int_damage.rvmat",
                "rhsusf\addons\rhsusf_m1117\data\periscope_int_destroyed.rvmat",
                "rhsusf\addons\rhsusf_m1117\data\periscope_int_destroyed.rvmat",
                "rhsusf\addons\rhsusf_m1117\data\glassz.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_int.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat"
            };
        };
        forceHideDriver = 0;
        hideProxyInCombat = 0;
        driverCompartments = "Compartment1";
        cargoCompartments[] = {"Compartment1"};
        driverAction = "rhs_M1117_Driver";
        driverInAction = "rhs_M1117_Driver";
        cargoAction[] = {
            "rhs_M1117_passenger",
            "passenger_flatground_generic01",
            "passenger_low01",
            "passenger_flatground_crosslegs"
        };
        getInAction = "GetInAMV_cargo";
        getOutAction = "GetOutLow";
        cargoGetInAction[] = {"GetInAMV_cargo"};
        cargoGetOutAction[] = {"GetOutLow"};
        driverDoor = "door_l";
        cargoDoors[] = {"door_r", "door_b", "door_l", "door_r"};
        memoryPointsGetInCargo[] = {
            "pos gunner",
            "pos cargo b",
            "pos cargo",
            "pos gunner"
        };
        memoryPointsGetInCargoDir[] = {
            "pos gunner dir",
            "pos cargo b dir",
            "pos cargo dir",
            "pos gunner dir"
        };
        hideWeaponsDriver = 1;
        hideWeaponsGunner = 1;
        hideWeaponsCargo = 1;
        extCameraPosition[] = {0, 2, -9};
        driverForceOptics = 0;
        castDriverShadow = 0;
        viewDriverShadow = 1;
        viewCargoShadow = 1;
        viewGunnerShadow = 1;
        driveropticsmodel = "rhsusf\addons\rhsusf_m1117\optics\driver_optic";
        memoryPointDriverOptics = "driverview";
        slingLoadCargoMemoryPoints[] = {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        class ViewPilot: ViewPilot {
            initAngleX = -4.5;
            initAngleY = 0;
            initFov = 0.9;
            minFov = 0.25;
            maxFov = 1.25;
            minAngleX = -65;
            maxAngleX = 85;
            minAngleY = -150;
            maxAngleY = 150;
            minMoveX = -0.075;
            maxMoveX = 0.075;
            minMoveY = -0.075;
            maxMoveY = 0.075;
            minMoveZ = -0.075;
            maxMoveZ = 0.1;
        };
        class ViewOptics: ViewOptics {
            initFov = 0.8;
            minFov = 0.8;
            maxFov = 0.8;
            initAngleX = 0;
            minAngleX = -45;
            maxAngleX = 30;
            initAngleY = 0;
            minAngleY = -90;
            maxAngleY = 90;
            visionMode[] = {"Normal"};
            thermalMode[] = {0, 1};
        };
        class CargoTurret;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerType = "rhsusf_army_ucp_grenadier";
                proxyType = "CPGunner";
                proxyIndex = 1;
                commanding = -1;
                primaryGunner = 1;
                primaryObserver = 0;
                gunnerName = "Gunner";
                gunnerCompartments = "Compartment1";
                gunnerDoor = "door_r";
                hasGunner = 1;
                gunnerGetInAction = "GetInAMV_cargo";
                gunnerGetOutAction = "GetOutLow";
                memoryPointsGetInGunner = "pos gunner";
                memoryPointsGetInGunnerDir = "pos gunner dir";
                weapons[] = {"RHS_M2_M1117", "RHS_MK19", "rhsusf_weap_M257_8"};
                magazines[] = {
                    "rhs_mag_200rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_200rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_200rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_200rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_200rnd_127x99_mag_Tracer_Red",
                    "RHS_96Rnd_40mm_MK19_M430A1",
                    "RHS_96Rnd_40mm_MK19_M430A1",
                    "RHS_96Rnd_40mm_MK19_M430A1",
                    "RHS_96Rnd_40mm_MK19_M430A1",
                    "RHS_96Rnd_40mm_MK19_M430A1",
                    "RHS_96Rnd_40mm_MK19_M430A1",
                    "RHS_96Rnd_40mm_MK19_M1001",
                    "rhsusf_mag_L8A3_8"
                };
                soundServo[] = {"A3\sounds_f\dummysound", "db-35", 1, 15};
                minElev = -5;
                maxElev = 60;
                initElev = 0;
                minTurn = -360;
                maxTurn = 360;
                initTurn = 0;
                gunnerAction = "rhs_M1117_Gunner";
                gunnerInAction = "rhs_M1117_Gunner";
                canHideGunner = 0;
                forceHideGunner = 0;
                gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
                gunnerOutOpticsModel = "";
                memoryPointGunnerOptics = "gunnerview";
                memoryPointGunnerOutOptics = "gunnerview";
                discreteDistance[] = {};
                discreteDistanceInitIndex = 0;
                turretInfoType = "RscWeaponZeroing";
                canUseScanners = 0;
                allowTabLock = 0;
                memoryPointGun = "kulas";
                selectionFireAnim = "zasleh";
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                body = "MainTurret";
                gun = "MainGun";
                animationSourceBody = "MainTurret";
                animationSourceGun = "MainGun";
                gunnerForceOptics = 0;
                outGunnerMayFire = 1;
                inGunnerMayFire = 1;
                gunnerFireAlsoInInternalCamera = 1;
                viewGunnerInExternal = 1;
                startEngine = 0;
                stabilizedInAxes = 3;
                class ViewOptics: RCWSOptics {
                    visionMode[] = {"Normal", "TI"};
                    thermalMode[] = {2, 3};
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = "+30";
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = "+100";
                    initFov = 0.4;
                    minFov = 0.2;
                    maxFov = 0.4;
                };
                class OpticsIn {
                    class Periscope: ViewOptics {
                        initFov = 0.466667;
                        minFov = 0.466667;
                        maxFov = 0.466667;
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhs_periscope_BISType";
                        visionMode[] = {"Normal"};
                    };
                    class Wide: Periscope {
                        initFov = 0.233333;
                        minFov = 0.233333;
                        maxFov = 0.233333;
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1117\optics\rhs_m36_wide";
                        visionMode[] = {"Normal", "TI"};
                    };
                    class Narrow: Wide {
                        initFov = 0.1;
                        minFov = 0.1;
                        maxFov = 0.1;
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1117\optics\rhs_m36_narrow";
                    };
                };
                class HitPoints: HitPoints {
                    class HitTurret {
                        armor = 1.5;
                        material = -1;
                        name = "vez";
                        visual = "otocvez";
                        passThrough = 0;
                        explosionShielding = 0.5;
                        radius = 0.15;
                    };
                    class HitGun {
                        armor = 1.3;
                        material = -1;
                        name = "zbran";
                        visual = "-";
                        passThrough = 0;
                        explosionShielding = 0.5;
                        radius = 0.15;
                    };
                };
                class ViewGunner {
                    initAngleX = 5;
                    minAngleX = -60;
                    maxAngleX = "+85";
                    initAngleY = 0;
                    minAngleY = -150;
                    maxAngleY = "+150";
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 0.7;
                };
                class Reflectors {
                    class gunlight {
                        color[] = {1900, 1300, 950};
                        ambient[] = {5, 5, 5};
                        position = "t svetlo";
                        direction = "konec t svetla";
                        hitpoint = "t svetlo";
                        selection = "t svetlo";
                        size = 0.1;
                        innerAngle = 10;
                        outerAngle = 12;
                        coneFadeCoef = 10;
                        intensity = 1;
                        useFlare = 1;
                        dayLight = 1;
                        flareSize = 0.25;
                        class Attenuation {
                            start = 1;
                            constant = 0;
                            linear = 0;
                            quadratic = 0.25;
                            hardLimitStart = 50;
                            hardLimitEnd = 150;
                        };
                    };
                    class gunlight_flare: gunlight {
                        innerAngle = 10;
                        outerAngle = 160;
                        coneFadeCoef = 10;
                        intensity = 1;
                        flareSize = 1.25;
                        class Attenuation {
                            start = 1;
                            constant = 0;
                            linear = 0;
                            quadratic = 0.25;
                            hardLimitStart = 0.5;
                            hardLimitEnd = 0.15;
                        };
                    };
                };
                armorLights = 0.1;
                class Turrets {
                    class commanderOptics: CommanderOptics {
                        body = "obsTurret";
                        gun = "";
                        animationSourceBody = "obsTurret";
                        animationSourceGun = "";
                        animationSourceHatch = "";
                        animationSourceCamElev = "";
                        gunBeg = "";
                        gunEnd = "";
                        gunnerOpticsModel = "";
                        gunnerOutOpticsModel = "";
                        gunnerDoor = "door_r";
                        commanding = 2;
                        weapons[] = {"rhsusf_weap_duke"};
                        magazines[] = {"rhsusf_mag_duke"};
                        soundServo[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
                        minElev = -4;
                        maxElev = 20;
                        initElev = 0;
                        minTurn = -10;
                        maxTurn = 10;
                        initTurn = 0;
                        maxHorizontalRotSpeed = 0.5;
                        maxVerticalRotSpeed = 0.5;
                        stabilizedInAxes = 0;
                        gunnerGetInAction = "GetInAMV_cargo";
                        gunnerGetOutAction = "GetOutLow";
                        gunnerCompartments = "Compartment1";
                        LODTurnedIn = 1100;
                        LODTurnedOut = 1100;
                        startEngine = 0;
                        armorLights = 0.4;
                        canEject = 1;
                        preciseGetInOut = 0;
                        turretFollowFreeLook = 0;
                        allowTabLock = 0;
                        showAllTargets = 0;
                        disableSoundAttenuation = 0;
                        gunnerInAction = "rhs_M1117_Commander";
                        gunnerAction = "rhs_M1117_Commander";
                        gunnerForceOptics = 0;
                        memoryPointGunnerOptics = "gunnerview";
                        memoryPointGunnerOutOptics = "gunnerview";
                        memoryPointsGetInGunner = "pos commander";
                        memoryPointsGetInGunnerDir = "pos commander dir";
                        memoryPointGun = "";
                        selectionFireAnim = "";
                        turretInfoType = "RHS_RscM1117_Commander";
                        class ViewOptics: RCWSOptics {
                            visionMode[] = {"Normal", "TI"};
                            thermalMode[] = {2, 3};
                            initAngleX = 0;
                            minAngleX = -30;
                            maxAngleX = "+30";
                            initAngleY = 0;
                            minAngleY = -100;
                            maxAngleY = "+100";
                            initFov = 0.4;
                            minFov = 0.2;
                            maxFov = 0.4;
                        };
                        class HitPoints {};
                        class OpticsIn {
                            class Wide: ViewOptics {
                                initFov = 0.233333;
                                minFov = 0.233333;
                                maxFov = 0.233333;
                                gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1117\optics\rhs_m36_wide_com";
                            };
                            class Narrow: Wide {
                                initFov = 0.1;
                                minFov = 0.1;
                                maxFov = 0.1;
                                gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1117\optics\rhs_m36_narrow_com";
                            };
                        };
                    };
                };
            };
            class MainTurret_Out: CargoTurret {
                gunnerCompartments = "Compartment3";
                gunnerName = "Gunner";
                proxyType = "CPGunner";
                LODTurnedIn = 0;
                LODTurnedOut = 0;
                proxyIndex = 2;
                gunnerAction = "vehicle_turnout_2";
                gunnerInAction = "vehicle_turnout_2";
                personTurretAction = "vehicle_turnout_2";
            };
            class MainTurret2_Out: MainTurret_Out {
                gunnerName = "Commander";
                proxyIndex = 3;
                gunnerAction = "vehicle_turnout_1";
                gunnerInAction = "vehicle_turnout_1";
                personTurretAction = "vehicle_turnout_1";
            };
        };
        class Attributes {
            class ObjectTexture {
                control = "ObjectTexture";
                data = "ObjectTexture";
                displayName = "Skin";
                tooltip = "Texture and material set applied on the object.";
            };
            class rhs_hideDUKE {
                displayName = "hide DUKE antennas";
                property = "rhs_hideDUKE";
                expression = "_this animate ['DUKE_Hide',_value,true]";
                control = "CheckboxNumber";
                defaultValue = "0";
            };
            class door_l {
                displayName = "Open left door";
                property = "door_l";
                control = "CheckboxNumber";
                defaultValue = "0";
                expression = "_this animateDoor ['%s',_value,true]";
            };
            class door_r: door_l {
                displayName = "Open right door";
                property = "door_r";
            };
            class door_b: door_l {
                displayName = "Open back doors";
                property = "door_b";
            };
            class hatch_commander: door_l {
                displayName = "Open commander hatch";
                property = "hatch_commander";
            };
            class hatch_driver: door_l {
                displayName = "Open driver hatch";
                property = "hatch_driver";
            };
            class hatch_gunner: door_l {
                displayName = "Open gunner hatch";
                property = "hatch_gunner";
            };
        };
        class AnimationSources: AnimationSources {
            class smoke_revolving_source {
                source = "revolving";
                weapon = "rhsusf_weap_M257_8";
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
            class cabinlights_hide: longlights_hide {};
            class door_l {
                source = "door";
                animperiod = 1;
                initPhase = 0;
            };
            class door_r: door_l {};
            class door_b: door_l {};
            class zoom_handler: door_l {};
            class DUKE_Hide {
                source = "user";
                mass = -20;
                displayName = "hide DUKE antennas";
                animPeriod = 0.00001;
                initPhase = 0;
                onPhaseChanged = "_this + ([[0,0]]) call rhs_fnc_duke_vg;";
            };
            class ReloadAnim {
                source = "reload";
                weapon = "RHS_M2_M1117";
            };
            class muzzle_flash_gl {
                source = "reload";
                weapon = "RHS_MK19";
            };
            class muzzle_rot_MG {
                source = "ammorandom";
                weapon = "RHS_M2_M1117";
            };
            class muzzle_rot_GL {
                source = "ammorandom";
                weapon = "RHS_MK19";
            };
            class Revolving {
                source = "revolving";
                weapon = "RHS_M2_M1117";
            };
            class hatch_commander {
                source = "door";
                animperiod = 1;
                initPhase = 0;
            };
            class hatch_driver: hatch_commander {};
            class hatch_gunner: hatch_commander {};
            class HitLFWheel {
                source = "Hit";
                hitpoint = "HitLFWheel";
                raw = 1;
            };
            class HitRFWheel: HitLFWheel {
                hitpoint = "HitRFWheel";
            };
            class HitLBWheel: HitLFWheel {
                hitpoint = "HitLF2Wheel";
            };
            class HitRBWheel: HitLFWheel {
                hitpoint = "HitRF2Wheel";
            };
            class HitGlass1 {
                source = "Hit";
                hitpoint = "HitGlass1";
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
            class HitPeriscope1 {
                source = "Hit";
                hitpoint = "HitPeriscope1";
            };
            class HitPeriscope2: HitPeriscope1 {
                hitpoint = "HitPeriscope2";
            };
            class HitPeriscope3: HitPeriscope1 {
                hitpoint = "HitPeriscope3";
            };
            class HitPeriscope4: HitPeriscope1 {
                hitpoint = "HitPeriscope4";
            };
            class HitPeriscope5: HitPeriscope1 {
                hitpoint = "HitPeriscope5";
            };
            class HitPeriscope6: HitPeriscope1 {
                hitpoint = "HitPeriscope6";
            };
            class HitPeriscope7: HitPeriscope1 {
                hitpoint = "HitPeriscope7";
            };
            class HitMainSight: HitPeriscope1 {
                hitpoint = "HitMainSight";
            };
            class HitHull {
                source = "Hit";
                hitpoint = "HitHull";
            };
            class HitDuke1 {
                source = "Hit";
                hitpoint = "HitDuke1";
            };
            class HitDuke2: HitDuke1 {
                hitpoint = "HitDuke2";
            };
        };
        class HitPoints: HitPoints {
            class HitLFWheel: HitLFWheel {
                radius = 0.3;
                visual = "wheel_1_1_damage";
                armorComponent = "wheel_1_1_damper";
                armor = -250;
                minimalHit = -0.025;
                explosionShielding = 1;
                passThrough = 0;
            };
            class HitLF2Wheel: HitLF2Wheel {
                radius = 0.3;
                visual = "wheel_1_2_damage";
                armorComponent = "wheel_1_2_damper";
                armor = -250;
                minimalHit = -0.025;
                explosionShielding = 1;
                passThrough = 0;
            };
            class HitRFWheel: HitRFWheel {
                radius = 0.3;
                visual = "wheel_2_1_damage";
                armorComponent = "wheel_2_1_damper";
                armor = -250;
                minimalHit = -0.025;
                explosionShielding = 1;
                passThrough = 0;
            };
            class HitRF2Wheel: HitRF2Wheel {
                radius = 0.3;
                visual = "wheel_2_2_damage";
                armorComponent = "wheel_2_2_damper";
                armor = -250;
                minimalHit = -0.025;
                explosionShielding = 1;
                passThrough = 0;
            };
            class HitBody {
                armor = 0.8;
                material = -1;
                name = "karoserie";
                visual = "zbytek";
                passThrough = 0;
                minimalHit = 0.15;
                explosionShielding = 0.8;
                radius = 0.05;
            };
            class HitFuel {
                armor = 4;
                material = -1;
                name = "palivo";
                visual = "";
                passThrough = 0;
                MinimalHit = 0.05;
                explosionShielding = 0.01;
                radius = 0.09;
            };
            class HitHull {
                armor = -350;
                passThrough = 8;
                name = "karoserie";
                visual = "zbytek";
                minimalhit = -0.25;
                explosionShielding = 0.01;
                radius = 0.22;
            };
            class HitDuke1 {
                armor = 1;
                material = -1;
                name = "duke1";
                visual = "";
                passThrough = 0;
                MinimalHit = 0.15;
                explosionShielding = 0.01;
                radius = 0.15;
            };
            class HitDuke2: HitDuke1 {
                name = "duke2";
                visual = "";
            };
            class HitEngine {
                armor = 1.8;
                material = -1;
                name = "engine";
                visual = "zbytek";
                passThrough = 0;
                MinimalHit = 0.01;
                explosionShielding = 0.01;
                radius = 0.15;
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
                    class RHS_Engine_Smoke_small3: RHS_Engine_Smoke_small1 {
                        position = "engine_smoke4";
                    };
                };
            };
            class HitGlass1: HitGlass1 {
                armor = 2.4;
                explosionShielding = 1;
                radius = 0.25;
            };
            class HitGlass2: HitGlass2 {
                armor = 2.4;
                explosionShielding = 1;
                radius = 0.25;
            };
            class HitGlass3: HitGlass3 {
                armor = 2.4;
                explosionShielding = 1;
                radius = 0.25;
            };
            class HitGlass4: HitGlass4 {
                armor = 2.4;
                explosionShielding = 1;
                radius = 0.25;
            };
            class HitGlass5: HitGlass5 {
                armor = 2.4;
                explosionShielding = 1;
                radius = 0.15;
            };
            class HitGlass6: HitGlass6 {
                armor = 2.4;
                explosionShielding = 1;
                radius = 0.15;
            };
            class HitPeriscope1: HitGlass1 {
                armor = 0.8;
                name = "periscope1";
                visual = "periscope1";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope2: HitGlass1 {
                armor = 0.8;
                name = "periscope2";
                visual = "periscope2";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope3: HitGlass1 {
                armor = 0.8;
                name = "periscope3";
                visual = "periscope3";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope4: HitGlass1 {
                armor = 0.8;
                name = "periscope4";
                visual = "periscope4";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope5: HitGlass1 {
                armor = 0.8;
                name = "periscope5";
                visual = "periscope5";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope6: HitGlass1 {
                armor = 0.8;
                name = "periscope6";
                visual = "periscope6";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitPeriscope7: HitGlass1 {
                armor = 0.8;
                name = "periscope7";
                visual = "periscope7";
                explosionShielding = 0.5;
                radius = 0.05;
            };
            class HitMainSight: HitGlass6 {
                armor = 1.2;
                explosionShielding = 0.3;
                name = "mainSight";
                visual = "mainSight";
                radius = 0.05;
            };
        };
        class UserActions {
            class hatch_gunner {
                OnlyForPlayer = 1;
                position = "";
                radius = 20;
                showWindow = 0;
                default = 1;
                displayname = "Turn Out";
                shortcut = "turnOut";
                condition = "(player == gunner this)";
                statement = "[this,'hatch_gunner',[[0],[1]],0] spawn rhs_fnc_m1117_turnOut";
            };
            class hatch_gunner_in: hatch_gunner {
                displayname = "Turn In";
                shortcut = "turnIn";
                condition = "this turretUnit [1] isEqualTo (call rhsusf_fnc_findPlayer)";
                statement = "[this,'hatch_gunner',[[0],[1]],1] spawn rhs_fnc_m1117_turnOut";
            };
            class hatch_commander: hatch_gunner {
                condition = "(player == commander this)";
                statement = "[this,'hatch_commander',[[0,0],[2]],0] spawn rhs_fnc_m1117_turnOut";
            };
            class hatch_commander_in: hatch_gunner_in {
                condition = "this turretUnit [2] isEqualTo (call rhsusf_fnc_findPlayer)";
                statement = "[this,'hatch_commander',[[0,0],[2]],1] spawn rhs_fnc_m1117_turnOut";
            };
            class hatch_driver: hatch_gunner {
                displayname = "Open/Close roof hatch";
                condition = "(player == driver this)";
                shortcut = "turnOut";
                statement = "this animateDoor ['hatch_driver',abs((this doorPhase 'hatch_driver')-1)]";
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
        class TransportBackpacks {
            class _xx_rhsusf_falconii {
                backpack = "rhsusf_falconii";
                count = 2;
            };
        };
        class TransportMagazines {
            class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
                count = 12;
                magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
            };
            class _xx_rhsusf_100Rnd_556x45_soft_pouch {
                count = 8;
                magazine = "rhsusf_100Rnd_556x45_soft_pouch";
            };
            class _xx_rhsusf_8Rnd_00Buck {
                count = 8;
                magazine = "rhsusf_8Rnd_00Buck";
            };
            class _xx_rhs_mag_M433_HEDP {
                count = 12;
                magazine = "rhs_mag_M433_HEDP";
            };
            class _xx_rhs_mag_M662_red {
                count = 4;
                magazine = "rhs_mag_M662_red";
            };
            class _xx_rhs_mag_m67 {
                count = 8;
                magazine = "rhs_mag_m67";
            };
            class _xx_rhs_mag_m18_green {
                count = 4;
                magazine = "rhs_mag_m18_green";
            };
            class _xx_rhs_mag_m18_red {
                count = 4;
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
                count = 6;
            };
            class _xx_Medikit {
                name = "Medikit";
                count = 1;
            };
            class _xx_binoculars {
                count = 1;
                name = "Binocular";
            };
        };
        class TransportWeapons {
            class _xx_weap {
                count = 1;
                weapon = "rhs_weap_m4_carryhandle";
            };
            class _xx_rhs_weap_M590_8RD {
                count = 1;
                weapon = "rhs_weap_M590_8RD";
            };
            class _xx_rhs_weap_M136_hedp {
                count = 2;
                weapon = "rhs_weap_M136_hedp";
            };
        };
        transportMaxBackpacks = 2;
        transportMaxMagazines = 90;
        wheelDamageThreshold = 0.7;
        wheelDestroyThreshold = 0.99;
        wheelDamageRadiusCoef = 0.95;
        wheelDestroyRadiusCoef = 0.45;
        smokeLauncherGrenadeCount = 4;
        smokeLauncherVelocity = 14;
        smokeLauncherOnTurret = 1;
        smokeLauncherAngle = 160;
        attenuationEffectType = "CarAttenuation";
        soundGetIn[] = {"A3\Sounds_F\vehicles\soft\MRAP_03\getin", 0.56234133, 1};
        soundGetOut[] = {
            "A3\Sounds_F\vehicles\soft\MRAP_03\getout",
            0.56234133,
            1,
            40
        };
        soundDammage[] = {"", 1, 1};
        soundEngineOnInt[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_start", 0.70794576, 1};
        soundEngineOnExt[] = {
            "A3\Sounds_F\vehicles\soft\Truck_02\ext_start",
            0.70794576,
            1,
            200
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
                    "A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_00",
                    0.56234133,
                    1,
                    200
                };
                frequency = "0.95	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
                volume = "engineOn*camPos*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
            };
            class Engine {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_01",
                    0.63095737,
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
                volume = "engineOn*camPos*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
            };
            class Engine1_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_02",
                    0.70794576,
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
                volume = "engineOn*camPos*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
            };
            class Engine2_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_03",
                    0.7943282,
                    1,
                    250
                };
                frequency = "0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
                volume = "engineOn*camPos*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
            };
            class Engine3_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_04",
                    1.1220185,
                    1,
                    300
                };
                frequency = "0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
                volume = "engineOn*camPos*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
            };
            class Engine4_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_05",
                    1.4125376,
                    1,
                    350
                };
                frequency = "0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
                volume = "engineOn*camPos*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
            };
            class Engine5_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_06",
                    1.7782794,
                    1,
                    400
                };
                frequency = "0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
                volume = "engineOn*camPos*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
            };
            class IdleThrust {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_00",
                    1,
                    1,
                    250
                };
                frequency = "0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
            };
            class EngineThrust {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_01",
                    1.2589254,
                    1,
                    300
                };
                frequency = "0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
            };
            class Engine1_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_02",
                    1.4125376,
                    1,
                    350
                };
                frequency = "0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
            };
            class Engine2_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_03",
                    1.5848932,
                    1,
                    400
                };
                frequency = "0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
            };
            class Engine3_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_04",
                    1.9952624,
                    1,
                    450
                };
                frequency = "0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
            };
            class Engine4_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_05",
                    1.9952624,
                    1,
                    450
                };
                frequency = "0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
            };
            class Engine5_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_06",
                    2.2387211,
                    1,
                    500
                };
                frequency = "0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
            };
            class Idle_int {
                sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_00", 0.39810717, 1};
                frequency = "0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
                volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
            };
            class Engine_int {
                sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_01", 0.4466836, 1};
                frequency = "0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
            };
            class Engine1_int {
                sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_02", 0.5011872, 1};
                frequency = "0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
            };
            class Engine2_int {
                sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_03", 0.5011872, 1};
                frequency = "0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
            };
            class Engine3_int {
                sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_04", 0.56234133, 1};
                frequency = "0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
                volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
            };
            class Engine4_int {
                sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_05", 0.56234133, 1};
                frequency = "0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
                volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
            };
            class Engine5_int {
                sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_06", 0.63095737, 1};
                frequency = "0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
                volume = "engineOn*(1-camPos)*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
            };
            class IdleThrust_int {
                sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_00", 0.5011872, 1};
                frequency = "0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
            };
            class EngineThrust_int {
                sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_01", 0.56234133, 1};
                frequency = "0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
            };
            class Engine1_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_02", 0.63095737, 1};
                frequency = "0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
            };
            class Engine2_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_03", 0.63095737, 1};
                frequency = "0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
            };
            class Engine3_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_04", 0.70794576, 1};
                frequency = "0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
            };
            class Engine4_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_05", 0.7943282, 1};
                frequency = "0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
            };
            class Engine5_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_06", 1, 1};
                frequency = "0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
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
        };
        class RenderTargets {
            class mirrorL {
                renderTarget = "rendertarget0";
                class CameraView1 {
                    pointPosition = "PIP0_pos";
                    pointDirection = "PIP0_dir";
                    renderVisionMode = 4;
                    renderQuality = 2;
                    fov = 0.35;
                };
                BBoxes[] = {"PIP_1_TL", "PIP_1_TR", "PIP_1_BL", "PIP_1_BR"};
            };
            class mirrorR {
                renderTarget = "rendertarget1";
                class CameraView1 {
                    pointPosition = "PIP1_pos";
                    pointDirection = "PIP1_dir";
                    renderVisionMode = 4;
                    renderQuality = 2;
                    fov = 0.35;
                };
                BBoxes[] = {"PIP_2_TL", "PIP_2_TR", "PIP_2_BL", "PIP_2_BR"};
            };
        };
        class Reflectors {
            class Left {
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
            class Right: Left {
                position = "P svetlo";
                direction = "konec P svetla";
                hitpoint = "P svetlo";
                selection = "P svetlo";
            };
            class Right2: Right {
                useFlare = 1;
                position = "P svetlo";
            };
            class Left2: Left {
                useFlare = 1;
                position = "L svetlo";
            };
            class Long_Left {
                color[] = {1900, 1300, 950};
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
            class interior_light_1 {
                color[] = {800, 900, 650};
                ambient[] = {5, 0, 0};
                intensity = 4;
                size = 1;
                innerAngle = 90;
                outerAngle = 165;
                coneFadeCoef = 1;
                position = "interior_light_1";
                direction = "interior_light_1_dir";
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
                    hardLimitStart = 1;
                    hardLimitEnd = 1.5;
                };
            };
            class interior_light_2: interior_light_1 {
                position = "interior_light_2";
                direction = "interior_light_2_dir";
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 70;
                    hardLimitStart = 1;
                    hardLimitEnd = 1.5;
                };
            };
        };
        aggregateReflectors[] = {{"Left", "Left2"}, {"Right", "Right2"}};
        class Exhausts {
            class Exhaust {
                position = "exhaust_pos";
                direction = "exhaust_dir";
                effect = "ExhaustEffectMRAP_03";
            };
        };
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        class textureSources {
            class standard {
                displayName = "Woodland";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1117\data\m1117_tex1_green_co.paa",
                    "rhsusf\addons\rhsusf_m1117\data\m1117_armour_green_co.paa",
                    "rhsusf\addons\rhsusf_m1117\data\m1117_turret_green_co.paa",
                    "rhsusf\addons\rhsusf_m1117\data\m1117_wheel_green_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd", "rhs_faction_usarmy_d"};
            };
            class desert: standard {
                displayName = "Desert";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1117\data\m1117_tex1_co.paa",
                    "rhsusf\addons\rhsusf_m1117\data\m1117_armour_co.paa",
                    "rhsusf\addons\rhsusf_m1117\data\m1117_turret_co.paa",
                    "rhsusf\addons\rhsusf_m1117\data\m1117_wheel_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_d_co.paa"
                };
            };
            class olive: standard {
                displayName = "OD";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1117\data\M1117_tex1_OD_co.paa",
                    "rhsusf\addons\rhsusf_m1117\data\M1117_armour_od_co.paa",
                    "rhsusf\addons\rhsusf_m1117\data\M1117_turret_od_co.paa",
                    "rhsusf\addons\rhsusf_m1117\data\m1117_wheel_green_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
                };
            };
            class un: standard {
                displayName = "UN";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1117\data\m1117_tex1_un_co.paa",
                    "rhsusf\addons\rhsusf_m1117\data\m1117_armour_un_co.paa",
                    "rhsusf\addons\rhsusf_m1117\data\m1117_turret_un_co.paa",
                    "rhsusf\addons\rhsusf_m1117\data\m1117_wheel_un_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_d_co.paa"
                };
            };
        };
        textureList[] = {};
        class PlayerSteeringCoefficients {
            turnIncreaseConst = 0.1;
            turnIncreaseLinear = 1;
            turnIncreaseTime = 1;
            turnDecreaseConst = 5;
            turnDecreaseLinear = 3;
            turnDecreaseTime = 0;
            maxTurnHundred = 0.7;
        };
        class EventHandlers: EventHandlers {
            class rhs_m1117_EH {
                init = "(_this select 0) lockTurret [[1],true];(_this select 0) lockTurret [[2],true]";
                postInit = "_this call rhs_fnc_reapplyTextures";
                handleDamage = "_this call rhs_fnc_duke_destruction";
                engine = "_this call rhs_fnc_engineCheckDamage";
                getOut = "_this call rhs_fnc_m1117_hatch";
            };
        };
        class RHS_TowingSystem {
            class Carrier {
                rhs_maxCargoMass = 1932;
                rhs_attachPoint = "";
                rhs_attachPointPos[] = {0.02, -2.69, -1.12};
            };
        };
    };
    class rhsusf_M1117_D: rhsusf_M1117_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1117_D.paa";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_rifleman_m4";
        author = "Cleggy";
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6"
        };
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m1117\data\m1117_tex1_co.paa",
            "rhsusf\addons\rhsusf_m1117\data\m1117_armour_co.paa",
            "rhsusf\addons\rhsusf_m1117\data\m1117_turret_co.paa",
            "rhsusf\addons\rhsusf_m1117\data\m1117_wheel_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
            "rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_d_co.paa"
        };
    };
    class rhsusf_M1117_W: rhsusf_M1117_D {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1117_W.paa";
        author = "Cleggy";
        dlc = "RHS_USAF";
        category = "Car";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_rifleman_m4";
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m1117\data\m1117_tex1_green_co.paa",
            "rhsusf\addons\rhsusf_m1117\data\m1117_armour_green_co.paa",
            "rhsusf\addons\rhsusf_m1117\data\m1117_turret_green_co.paa",
            "rhsusf\addons\rhsusf_m1117\data\m1117_wheel_green_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
            "rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
        };
    };
    class rhsusf_M1117_O: rhsusf_M1117_W {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1117_O.paa";
        author = "Cleggy";
        dlc = "RHS_USAF";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_rifleman_m4";
        displayName = "M1117 ASV (OD)";
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m1117\data\M1117_tex1_OD_co.paa",
            "rhsusf\addons\rhsusf_m1117\data\M1117_armour_od_co.paa",
            "rhsusf\addons\rhsusf_m1117\data\M1117_turret_od_co.paa",
            "rhsusf\addons\rhsusf_m1117\data\m1117_wheel_green_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
            "rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
        };
    };
    class ThingX;
    class rhsusf_duke_d: ThingX {
        scope = 2;
        displayName = "Broken DUKE antenna";
        editorCategory = "EdCat_Things";
        editorSubcategory = "EdSubcat_Military";
        vehicleClass = "Small_items";
        model = "\rhsusf\addons\rhsusf_m1117\rhs_duke.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_d_co.paa"};
    };
    class rhsusf_duke_wd: rhsusf_duke_d {
        displayName = "Broken DUKE antenna (wd)";
        hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"};
    };
    class rhsusf_duke_m1a2_d: rhsusf_duke_d {
        displayName = "Broken DUKE antenna (long/d)";
        model = "\rhsusf\addons\rhsusf_m1117\rhs_duke_m1a2.p3d";
    };
    class rhsusf_duke_m1a2_wd: rhsusf_duke_m1a2_d {
        displayName = "Broken DUKE antenna (long/wd)";
        hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"};
    };
};
