class CfgPatches {
    class rhs_c_bmk_t {
        units[] = {"rhs_bkm_t", "rhs_bmk_t"};
        weapons[] = {};
        requiredVersion = 1.96;
        requiredAddons[] = {"rhs_main"};
    };
    class rhs_c_bkm_t: rhs_c_bmk_t {};
};
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        RHS_BMKT_Driver_in = "RHS_BMKT_Driver_in";
        RHS_BMKT_Driver_out = "RHS_BMKT_Driver_out";
        RHS_BMKT_Cargo_in = "RHS_BMKT_Cargo_in";
        RHS_BMKT_Cargo_out = "RHS_BMKT_Cargo_turnout";
    };
    class Actions {
        class CargoActions;
        class rhs_BMKT_cargo_in_actions: CargoActions {
            RHS_BMKT_Cargo_out = "RHS_BMKT_Cargo_turnout";
        };
        class rhs_BMKT_Driver_in_actions: CargoActions {
            RHS_BMKT_Driver_out = "RHS_BMKT_Driver_turnout";
        };
        class rhs_BMKT_Driver_out_actions: CargoActions {
            RHS_BMKT_Driver_in = "RHS_BMKT_Driver_turnin";
        };
        class RifleStandActions;
        class FFV_BaseActions: RifleStandActions {
            RHS_BMKT_Cargo_in = "RHS_BMKT_Cargo_turnin";
        };
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class PreciseCrew;
        class RHS_CrewIn_Base: Crew {};
        class RHS_BMKT_Driver_in_Dead: DefaultDie {
            actions = "DeadActions";
            file = "rhsafrf\addons\rhs_c_bmk_t\anims\rhs_BMKT_driver_in_kia.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_BMKT_Driver_in: RHS_CrewIn_Base {
            actions = "CargoActions";
            file = "rhsafrf\addons\rhs_c_bmk_t\anims\rhs_BMKT_Driver_in.rtm";
            interpolateTo[] = {"RHS_BMKT_Driver_in_Dead", 1};
            interpolateFrom[] = {};
            looped = 1;
        };
        class RHS_BMKT_Driver_out: RHS_BMKT_Driver_in {
            actions = "CargoActions";
            file = "rhsafrf\addons\rhs_c_bmk_t\anims\RHS_BMKT_Driver_out.rtm";
            looped = 1;
            minplaytime = 0.4;
            InterpolateTo[] = {"RHS_BMKT_Driver_in_Dead", 1};
            ConnectTo[] = {};
        };
        class RHS_BMKT_Driver_turnout: Crew {
            speed = 1.1;
            looped = 0;
            minplaytime = 0.4;
            variantsAI[] = {"RHS_BMKT_Driver_out", 1};
            variantsPlayer[] = {"RHS_BMKT_Driver_out", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            interpolationspeed = 0.6;
        };
        class RHS_BMKT_Driver_turnin: RHS_BMKT_Driver_turnout {
            InterpolateFrom[] = {"RHS_BMKT_Driver_in", 1.1};
            InterpolateTo[] = {"RHS_BMKT_Driver_in", 1.1};
            variantsAI[] = {"RHS_BMKT_Driver_in", 1};
            variantsPlayer[] = {"RHS_BMKT_Driver_in", 1};
            speed = 1.1;
        };
        class RHS_BMKT_Cargo_in_Dead: DefaultDie {
            actions = "DeadActions";
            file = "rhsafrf\addons\rhs_c_bmk_t\anims\RHS_BMKT_Cargo_in_kia.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_BMKT_Cargo_in: RHS_CrewIn_Base {
            file = "rhsafrf\addons\rhs_c_bmk_t\anims\RHS_BMKT_Cargo_in.rtm";
            interpolateTo[] = {
                "RHS_BMKT_Cargo_in_Dead",
                1,
                "RHS_BMKT_Cargo_turnout",
                0.1
            };
            interpolateFrom[] = {"RHS_BMKT_Cargo_turnin", 0.1};
        };
        class RHS_BMKT_Cargo_turnout: Crew {
            file = "rhsafrf\addons\rhs_c_bmk_t\anims\RHS_BMKT_Cargo_turnout.rtm";
            speed = 0.91;
            looped = 0;
            minplaytime = 0.4;
            InterpolateTo[] = {"vehicle_turnout_2_Idle", 1.1};
            ConnectTo[] = {"vehicle_turnout_2_Idle", 1};
            boundingSphere = 3;
            interpolationspeed = 3.2;
        };
        class RHS_BMKT_Cargo_turnin: RHS_BMKT_Cargo_turnout {
            file = "rhsafrf\addons\rhs_c_bmk_t\anims\RHS_BMKT_Cargo_turnin.rtm";
            interpolateFrom[] = {"vehicle_turnout_2_Idle", 1};
            connectTo[] = {"RHS_BMKT_Cargo_in", 1};
            interpolateTo[] = {"RHS_BMKT_Cargo_in_Dead", 1};
            variantsAI[] = {"RHS_BMKT_Cargo_in", 1};
            variantsPlayer[] = {"RHS_BMKT_Cargo_in", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            interpolationspeed = 2;
            speed = 0.74;
        };
    };
};
class CfgVehicles {
    class Ship_F;
    class rhs_bmk_t_base: Ship_F {
        displayName = "BMK Tug";
        model = "rhsafrf\addons\rhs_bmk_t\bmk_t.p3d";
        picture = "\rhsafrf\addons\rhs_c_bmk_t\data\rhs_bmk_t_ca.paa";
        vehicleClass = "rhs_vehclass_boat";
        editorSubCategory = "rhs_EdSubcat_boat";
        driverDoor = "Hatch_L_Door";
        driverAction = "RHS_BMKT_Driver_out";
        driverInAction = "RHS_BMKT_Driver_in";
        driverLeftHandAnimName = "handle_l_hand";
        driverRightHandAnimName = "handle_r_hand";
        getInAction = "GetInLow";
        getOutAction = "GetOutLow";
        cargoDoors[] = {"Hatch_R_Door"};
        cargoGetInAction[] = {"GetInLow"};
        cargoGetOutAction[] = {"GetOutLow"};
        memoryPointsGetInDriver = "pos driver";
        memoryPointsGetInDriverDir = "pos driver dir";
        memoryPointsGetInCargo[] = {};
        memoryPointsGetInCargoDir[] = {};
        LODDriverTurnedOut = 0;
        LODDriverTurnedIn = 1100;
        simulation = "shipX";
        maxSpeed = 17;
        normalSpeedForwardCoef = 0.5;
        slowSpeedForwardCoef = 0.3;
        enginePower = 565.5;
        peakTorque = 379;
        maxOmega = 251.327;
        redRpm = 2400;
        thrustDelay = 1.5;
        engineMOI = 1.5;
        class complexGearbox {
            GearboxRatios[] = {"R1", -2, "N", 0, "D1", 6.6};
            TransmissionRatios[] = {"High", 1};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        waterResistance = 0.5;
        waterDamageEngine = 0.9;
        waterAngularDampingCoef = 1;
        waterLinearDampingCoefY = 2;
        waterLinearDampingCoefX = 2;
        waterPPInVehicle = 0;
        waterResistanceCoef = 0.1;
        engineShiftY = 0.3;
        engineShiftZ = -3;
        rudderForceCoef = 3.5;
        rudderForceCoefAtMaxSpeed = 0.3;
        hideProxyInCombat = 1;
        viewDriverInExternal = 1;
        class CargoTurret;
        getInProxyOrder[] = {1};
        class Turrets {
            class CargoTurret_01: CargoTurret {
                gunnerInAction = "RHS_BMKT_Cargo_in";
                gunnerAction = "RHS_BMKT_Cargo_out";
                gunnerName = "Passenger";
                gunnerCompartments = "Compartment1";
                gunnerUsesPilotView = 0;
                gunnerForceOptics = 0;
                isPersonTurret = 1;
                personTurretAction = "vehicle_turnout_2";
                memoryPointsGetInGunner = "pos_cargo_FR";
                memoryPointsGetInGunnerDir = "pos_cargo_FR_dir";
                animationSourceHatch = "hatch_r";
                LODTurnedIn = 1200;
                LODTurnedOut = 1;
                proxyIndex = 1;
                maxElev = 45;
                minElev = -35;
                maxTurn = 10;
                minTurn = -105;
                class dynamicViewLimits {};
                class Hitpoints {};
            };
        };
        class AnimationSources {
            class Hatch_L_Door {
                source = "door";
                animPeriod = 0.8;
                mass = 1;
                sound = "RHS_Ural_Door";
                soundPosition = "hatch_l_sfx";
                displayName = "Open Left Hatch";
            };
            class Hatch_R_Door: Hatch_L_Door {
                soundPosition = "hatch_r_sfx";
                displayName = "Open Right Hatch";
            };
            class HitGlass1 {
                source = "Hit";
                hitpoint = "HitGlass1";
                raw = 1;
            };
            class HitGlass2 {
                source = "Hit";
                hitpoint = "HitGlass2";
                raw = 1;
            };
            class HitGlass3 {
                source = "Hit";
                hitpoint = "HitGlass3";
                raw = 1;
            };
            class HitGlass4 {
                source = "Hit";
                hitpoint = "HitGlass4";
                raw = 1;
            };
            class HitGlass5 {
                source = "Hit";
                hitpoint = "HitGlass5";
                raw = 1;
            };
        };
        class HitPoints {
            class HitFuel {
                name = "Hit_Fuel_L";
                armorComponent = "Hit_Fuel_L";
                visual = "-";
                armor = -100;
                passThrough = 1;
                minimalHit = -0.1;
                explosionShielding = 1.5;
                radius = 0.15;
            };
            class HitFuel2: HitFuel {
                name = "Hit_Fuel_R";
                armorComponent = "Hit_Fuel_R";
            };
            class HitEngine {
                name = "Hit_Engine";
                armorComponent = "Hit_Engine";
                armor = 0.5;
                passThrough = 1;
                minimalHit = 0.01;
                explosionShielding = 0.5;
                radius = 0.12;
                visual = "zbytek";
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
            class HitGlass1 {
                name = "glass1";
                visual = "glass1";
                armorComponent = "glass1";
                armor = -5;
                passThrough = 0;
                explosionShielding = 3;
                radius = 0.33;
            };
            class HitGlass2 {
                name = "glass2";
                visual = "glass2";
                armorComponent = "glass2";
                armor = -5;
                passThrough = 0;
                explosionShielding = 3;
                radius = 0.33;
            };
            class HitGlass3 {
                name = "glass3";
                visual = "glass3";
                armorComponent = "glass3";
                armor = -5;
                passThrough = 0;
                explosionShielding = 3;
                radius = 0.33;
            };
            class HitGlass4 {
                name = "glass4";
                visual = "glass4";
                armorComponent = "glass4";
                armor = -5;
                passThrough = 0;
                explosionShielding = 3;
                radius = 0.33;
            };
            class HitGlass5 {
                name = "glass5";
                visual = "glass5";
                armorComponent = "glass5";
                armor = -5;
                passThrough = 0;
                explosionShielding = 3;
                radius = 0.33;
            };
        };
        class Reflectors {
            class Light_Center {
                color[] = {1900, 1300, 950};
                ambient[] = {5, 5, 5};
                position = "Light_Center_pos";
                direction = "Light_Center_dir";
                hitpoint = "Light_Center";
                selection = "Light_Center";
                size = 1;
                innerAngle = 8;
                outerAngle = 15;
                coneFadeCoef = 1;
                intensity = 45;
                useFlare = 1;
                dayLight = 1;
                flareSize = 0.85;
                class Attenuation {
                    start = 1;
                    constant = 0;
                    linear = 0;
                    quadratic = 0.02;
                    hardLimitStart = 630;
                    hardLimitEnd = 660;
                };
            };
            class Light_Center_Flare {
                color[] = {7, 6, 6.5};
                ambient[] = {22, 22, 22};
                position = "Light_Center_pos";
                direction = "Light_Center_dir";
                hitpoint = "Light_Center";
                selection = "Light_Center";
                size = 1;
                innerAngle = 30;
                outerAngle = 215;
                coneFadeCoef = 10;
                intensity = 100;
                useFlare = 1;
                dayLight = 0;
                flareSize = 1.85;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 0;
                    quadratic = 10;
                    hardLimitStart = 0;
                    hardLimitEnd = 0.9;
                };
            };
        };
        aggregateReflectors[] = {{"Light_Center", "Light_Center_Flare"}};
        slingLoadCargoMemoryPoints[] = {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 5;
                canBeTransported = 1;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
        };
        attenuationEffectType = "OpenCarAttenuation";
        insideSoundCoef = 0;
        soundEngineOnInt[] = {"a3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-ext-start-02", 0.56234133, 1};
        soundEngineOnExt[] = {
            "a3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-ext-start-02",
            0.56234133,
            1,
            200
        };
        soundEngineOffInt[] = {"a3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-ext-stop-02", 0.56234133, 1};
        soundEngineOffExt[] = {
            "a3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-ext-stop-02",
            0.56234133,
            1,
            200
        };
        buildCrash0[] = {
            "A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_building_01",
            1.7782794,
            1,
            200
        };
        buildCrash1[] = {
            "A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_building_02",
            1.7782794,
            1,
            200
        };
        buildCrash2[] = {
            "A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_building_03",
            1.7782794,
            1,
            200
        };
        soundBuildingCrash[] = {
            "buildCrash0",
            0.33,
            "buildCrash1",
            0.33,
            "buildCrash2",
            0.34
        };
        WoodCrash0[] = {
            "A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_wood_01",
            1.7782794,
            1,
            200
        };
        WoodCrash1[] = {
            "A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_wood_02",
            1.7782794,
            1,
            200
        };
        WoodCrash2[] = {
            "A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_wood_03",
            1.7782794,
            1,
            200
        };
        soundWoodCrash[] = {
            "woodCrash0",
            0.33,
            "woodCrash1",
            0.33,
            "woodCrash2",
            0.34
        };
        ArmorCrash0[] = {
            "A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_armor_01",
            3.1622777,
            1,
            200
        };
        ArmorCrash1[] = {
            "A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_armor_02",
            3.1622777,
            1,
            200
        };
        ArmorCrash2[] = {
            "A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_armor_03",
            3.1622777,
            1,
            200
        };
        soundArmorCrash[] = {
            "ArmorCrash0",
            0.33,
            "ArmorCrash1",
            0.33,
            "ArmorCrash2",
            0.34
        };
        soundGeneralCollision1[] = {
            "A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_armor_01",
            1.7782794,
            1,
            100
        };
        soundGeneralCollision2[] = {
            "A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_armor_02",
            1.7782794,
            1,
            100
        };
        soundGeneralCollision3[] = {
            "A3\sounds_f\Vehicles\boat\noises\Metal_boat_crash_armor_03",
            1.7782794,
            1,
            100
        };
        soundCrashes[] = {
            "soundGeneralCollision1",
            0.33,
            "soundGeneralCollision2",
            0.33,
            "soundGeneralCollision3",
            0.34
        };
        class Sounds {
            class IdleOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-idle-2",
                    0.5011872,
                    1,
                    300
                };
                frequency = "0.95	+	((rpm/	1200) factor[(100/	1200),(300/	1200)])*0.15";
                volume = "engineOn*(((rpm/	1200) factor[(0/	1200),(30/	1200)])	*	((rpm/	1200) factor[(500/	1200),(300/	1200)]))";
            };
            class Engine {
                sound[] = {
                    "A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-low-2",
                    0.63095737,
                    1,
                    450
                };
                frequency = "0.95	+	((rpm/	1200) factor[(300/	1200),(600/	1200)])*0.2";
                volume = "engineOn*(((rpm/	1200) factor[(150/	1200),(250/	1200)])	*	((rpm/	1200) factor[(600/	1200),(400/	1200)]))";
            };
            class EngineMidOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-mid-2",
                    0.7943282,
                    1,
                    500
                };
                frequency = "0.95	+		((rpm/	1200) factor[(600/	1200),(900/	1200)])*0.2";
                volume = "engineOn*(((rpm/	1200) factor[(350/	1200),(500/	1200)])	*	((rpm/	1200) factor[(1000/	1200),(700/	1200)]))";
            };
            class EngineMaxOut {
                sound[] = {
                    "A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-high-2",
                    1,
                    1,
                    600
                };
                frequency = "0.95	+	((rpm/	1200) factor[(700/	1200),(1000/	1200)])*0.2";
                volume = "engineOn*((rpm/	1200) factor[(800/	1200),(1200/	1200)])";
            };
            class WaternoiseOutW0 {
                sound[] = {
                    "A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",
                    0.70794576,
                    1,
                    150
                };
                frequency = "1";
                volume = "(speed factor[4, 1]) * water";
            };
            class WaternoiseOutW1 {
                sound[] = {
                    "A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",
                    0.7943282,
                    1,
                    250
                };
                frequency = "1";
                volume = "((speed factor[2, 6]) min (speed factor[6, 4]))";
            };
            class WaternoiseOutW2 {
                sound[] = {
                    "A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",
                    1,
                    1,
                    350
                };
                frequency = "1";
                volume = "(speed factor[3, 9])";
            };
            class WaternoiseOutW3 {
                sound[] = {
                    "A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",
                    0.70794576,
                    1,
                    150
                };
                frequency = "1";
                volume = "(speed factor[-4, -1]) * water";
            };
            class WaternoiseOutW4 {
                sound[] = {
                    "A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",
                    0.7943282,
                    0.9,
                    250
                };
                frequency = "1";
                volume = "((speed factor[-2, -6]) min (speed factor[-6, -4]))";
            };
            class WaternoiseOutW5 {
                sound[] = {
                    "A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",
                    1,
                    0.9,
                    350
                };
                frequency = "1";
                volume = "(speed factor[-3, -9])";
            };
            class scrubLandExt {
                sound[] = {
                    "A3\Sounds_F\vehicles\boat\noises\boat_land_on_shallow",
                    1.7782794,
                    0.9,
                    100
                };
                frequency = 1;
                volume = "(scrubLand factor[0.01, 0.20])";
            };
            class RainExt {
                sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", 1, 1, 100};
                frequency = 1;
                volume = "camPos * (rain - rotorSpeed/2) * 2";
            };
            class RainInt {
                sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", 1, 1, 100};
                frequency = 1;
                volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_bmk_t\data\bmk_t.rvmat",
                "rhsafrf\addons\rhs_bmk_t\data\bmk_t_dam.rvmat",
                "rhsafrf\addons\rhs_bmk_t\data\bmk_t_destr.rvmat",
                "rhsafrf\addons\rhs_bmk_t\data\bmk_t_win.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "rhsafrf\addons\rhs_bmk_t\data\bmk_t_win_int.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat"
            };
        };
    };
    class rhs_bmk_t: rhs_bmk_t_base {
        author = "$STR_RHS_AUTHOR_FULL";
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmk_t.paa";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_engineer";
    };
    class rhs_bkm_t: rhs_bmk_t {
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 1;
        scopeCurator = 1;
    };
};
