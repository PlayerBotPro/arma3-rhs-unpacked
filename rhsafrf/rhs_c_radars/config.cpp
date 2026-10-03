class CfgPatches {
    class rhs_c_radars {
        units[] = {
            "rhs_p37",
            "rhs_prv13",
            "Land_rhs_p37",
            "Land_rhs_prv13",
            "rhs_p37_turret_vpvo",
            "rhs_prv13_turret_vpvo",
            "rhs_2P3_1",
            "rhs_2P3_2",
            "rhs_v2",
            "rhs_v3"
        };
        weapons[] = {};
        requiredVersion = 1.5;
        requiredAddons[] = {"rhs_main"};
        name = "Radars";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
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
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft {
    class components;
};
class DefaultVehicleSystemsDisplayManagerRight {
    class components;
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class radar_engineSound {
                file = "\rhsafrf\addons\rhs_c_radars\scripts\rhs_radar_engineSound.sqf";
            };
            class radar_enginesSoundSource {
                file = "\rhsafrf\addons\rhs_c_radars\scripts\rhs_radar_engineSoundSource.sqf";
            };
        };
    };
};
class CfgSFX {
    class rhs_radar_engines01 {
        name = "$STR_RHS_RADAR_SOUND1";
        sounds[] = {"engine"};
        engine[] = {
            "\rhsafrf\addons\rhs_c_radars\Sounds\Engines01.wav",
            2.818383,
            1,
            450,
            1,
            0,
            0,
            0
        };
        empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
    };
    class rhs_radar_engines02 {
        name = "$STR_RHS_RADAR_SOUND2";
        sounds[] = {"engine"};
        engine[] = {
            "\rhsafrf\addons\rhs_c_radars\Sounds\Engines02.wav",
            2.818383,
            1,
            450,
            1,
            0,
            0,
            0
        };
        empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
    };
};
class CfgVehicles {
    class ThingX;
    class House;
    class House_F: House {
        class DestructionEffects;
        class EventHandlers;
    };
    class rhs_p37: House_F {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_p37.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        dlc = "RHS_AFRF";
        scope = 2;
        scopeCurator = 2;
        faction = "rhs_faction_vpvo";
        vehicleClass = "rhs_vehclass_radar";
        editorSubcategory = "rhs_EdSubcat_radar";
        displayName = "$STR_RHS_P37";
        model = "\rhsafrf\addons\rhs_radars\rhs_p37.p3d";
        icon = "\rhsafrf\addons\rhs_radars\data\icons\P37_icon.paa";
        mapsize = 23;
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this call rhs_fnc_radar_init;[(_this select 0),'rhs_Sound_radar1'] spawn rhs_fnc_radar_engineSoundSource";
            };
        };
        class DestructionEffects: DestructionEffects {
            class Ruin1 {
                simulation = "ruin";
                type = "\rhsafrf\addons\rhs_radars\rhs_p37_wreck.p3d";
                position = "";
                intensity = 1;
                interval = 1;
                lifeTime = 1;
            };
        };
    };
    class rhs_prv13: rhs_p37 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_prv13.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        icon = "\rhsafrf\addons\rhs_radars\data\icons\prv13_icon.paa";
        model = "\rhsafrf\addons\rhs_radars\rhs_prv13.p3d";
        displayName = "$STR_RHS_PRV13";
        mapSize = 18;
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this call rhs_fnc_radar_init;[(_this select 0),'rhs_Sound_radar2'] spawn rhs_fnc_radar_engineSoundSource";
            };
        };
        class DestructionEffects: DestructionEffects {
            class Ruin1 {
                simulation = "ruin";
                type = "\rhsafrf\addons\rhs_radars\rhs_prv13_wreck.p3d";
                position = "";
                intensity = 1;
                interval = 1;
                lifeTime = 1;
            };
        };
    };
    class Land_rhs_p37: rhs_p37 {
        scope = 1;
        scopeCurator = 0;
    };
    class Land_rhs_prv13: rhs_prv13 {
        scope = 1;
        scopeCurator = 0;
    };
    class LandVehicle;
    class StaticWeapon: LandVehicle {
        class Turrets {
            class MainTurret;
        };
        class EventHandlers;
    };
    class StaticCannon: StaticWeapon {
        class ViewOptics;
    };
    class rhs_radars_turret_base: StaticCannon {
        dlc = "RHS_AFRF";
        transportSoldier = 0;
        isUAV = 0;
        side = 0;
        crew = "rhs_msv_driver";
        faction = "rhs_faction_vpvo";
        vehicleClass = "rhs_vehclass_radar";
        editorSubcategory = "rhs_EdSubcat_radar";
        destrType = "destructWreck";
        fuelCapacity = 20;
        radarType = 2;
        irTarget = 1;
        irTargetSize = 0.35;
        radarTarget = 1;
        radarTargetSize = 1.9;
        visualTarget = 1;
        visualTargetSize = 1.9;
        reportRemoteTargets = 1;
        reportOwnPosition = 1;
        driverAction = "RHS_Zu23_Cargo";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                minTurn = -0.01;
                maxTurn = 0.01;
                initTurn = 0;
                minElev = -0.01;
                maxElev = 0.01;
                initElev = 0;
                turretFollowFreeLook = 2;
                weapons[] = {};
                magazines[] = {};
                gunnerAction = "RHS_Zu23_Cargo";
                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pzu5";
                gunnerOpticsEffect[] = {"OpticsCHAbera1", "OpticsBlur2"};
                gunnerForceOptics = 1;
                memoryPointsGetInGunner = "pos_gunner_dir";
                memoryPointsGetInGunnerDir = "pos_gunner";
                soundServo[] = {
                    "\rhsafrf\addons\rhs_c_radars\Sounds\Engines01.wav",
                    9,
                    1,
                    70
                };
                class ViewOptics;
                class OpticsIn {
                    class Wide: ViewOptics {
                        opticsDisplayName = "AUTOTRACK";
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = "0.7/3";
                        minFov = "0.7/3";
                        maxFov = "0.7/3";
                        visionMode[] = {"Normal", "Ti"};
                        thermalMode[] = {0, 1};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_thermalscreen_empty.p3d";
                        directionStabilized = 1;
                    };
                };
                class Components {
                    class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                        class Components {
                            class EmptyDisplay {
                                componentType = "EmptyDisplayComponent";
                            };
                            class SensorDisplay {
                                componentType = "SensorsDisplayComponent";
                                range[] = {2500, 5000, 10000, 15000, 20000};
                                resource = "RscCustomInfoSensors";
                            };
                        };
                    };
                    class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                        defaultDisplay = "SensorDisplay";
                        class Components {
                            class EmptyDisplay {
                                componentType = "EmptyDisplayComponent";
                            };
                            class SensorDisplay {
                                componentType = "SensorsDisplayComponent";
                                range[] = {2500, 5000, 10000, 15000, 20000};
                                resource = "RscCustomInfoSensors";
                            };
                        };
                    };
                };
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {"a3\data_f\default.rvmat", "a3\data_f\default.rvmat", "a3\data_f\default_destruct.rvmat"};
        };
        class DestructionEffects {
            class Smoke1 {
                simulation = "particles";
                type = "HouseDestructionSmoke3";
                position = "destructionEffect1";
                qualityLevel = 2;
                intensity = 0.15;
                interval = 1;
                lifeTime = 0.05;
            };
            class Smoke2: Smoke1 {
                type = "HouseDestructionSmoke4";
                lifeTime = 0.035;
            };
            class Smoke3: Smoke1 {
                type = "HouseDestrSmokeLong";
                lifeTime = 0.035;
            };
            class Smoke1Med {
                simulation = "particles";
                type = "HouseDestructionSmoke3Med";
                position = "destructionEffect1";
                qualityLevel = 1;
                intensity = 0.15;
                interval = 1;
                lifeTime = 0.05;
            };
            class Smoke2Med: Smoke1Med {
                type = "HouseDestructionSmoke4Med";
                lifeTime = 0.035;
            };
            class Smoke3Med: Smoke1Med {
                type = "HouseDestrSmokeLongMed";
                lifeTime = 0.035;
            };
            class Smoke1Low {
                simulation = "particles";
                type = "HouseDestructionSmoke3Low";
                position = "destructionEffect1";
                qualityLevel = 0;
                intensity = 0.15;
                interval = 1;
                lifeTime = 0.05;
            };
            class Smoke2Low: Smoke1Low {
                type = "HouseDestructionSmoke4Low";
                lifeTime = 0.035;
            };
            class Smoke3Low: Smoke1Low {
                type = "HouseDestrSmokeLongLow";
                lifeTime = 0.035;
            };
        };
    };
    class rhs_p37_turret_base: rhs_radars_turret_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_p37.paa";
        displayName = "$STR_RHS_P37";
        model = "\rhsafrf\addons\rhs_radars\rhs_p37_turret.p3d";
        icon = "\rhsafrf\addons\rhs_radars\data\icons\P37_icon.paa";
        picture = "rhsafrf\addons\rhs_c_radars\icons\rhs_p37_turret_vpvo_ca.paa";
        mapsize = 23;
        class Components {
            class SensorsManagerComponent {
                class Components {
                    class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
                        class AirTarget {
                            minRange = 20000;
                            maxRange = 20000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 20000;
                            maxRange = 20000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = 50;
                        angleRangeHorizontal = 360;
                        angleRangeVertical = 80;
                        typeRecognitionDistance = 5000;
                        maxFogSeeThrough = 1;
                        maxTrackableATL = 1000;
                        minTrackableSpeed = 0;
                        maxTrackableSpeed = 230;
                    };
                    class DataLinkSensorComponent: SensorTemplateDataLink {};
                };
            };
        };
        class Sounds {
            class EngineLoop {
                sound[] = {
                    "\rhsafrf\addons\rhs_c_radars\Sounds\Engines01.wav",
                    9,
                    1,
                    70
                };
                frequency = "1";
                volume = "engineOn";
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this spawn RHS_fnc_radar_engineSound";
            };
        };
    };
    class rhs_p37_turret_vpvo: rhs_p37_turret_base {
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
    };
    class rhs_prv13_turret_base: rhs_radars_turret_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_prv13.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        model = "\rhsafrf\addons\rhs_radars\rhs_prv13_turret.p3d";
        icon = "\rhsafrf\addons\rhs_radars\data\icons\prv13_icon.paa";
        picture = "rhsafrf\addons\rhs_c_radars\icons\rhs_prv13_turret_vpvo_ca.paa";
        displayName = "$STR_RHS_PRV13";
        mapSize = 18;
        class Components {
            class SensorsManagerComponent {
                class Components {
                    class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
                        class AirTarget {
                            minRange = 20000;
                            maxRange = 20000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 20000;
                            maxRange = 20000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = 50;
                        angleRangeHorizontal = 360;
                        angleRangeVertical = 80;
                        typeRecognitionDistance = 5000;
                        maxFogSeeThrough = 1;
                        maxTrackableATL = 10000;
                        minTrackableSpeed = 0;
                        maxTrackableSpeed = 230;
                    };
                    class DataLinkSensorComponent: SensorTemplateDataLink {};
                };
            };
        };
        class Sounds {
            class EngineLoop {
                sound[] = {
                    "\rhsafrf\addons\rhs_c_radars\Sounds\Engines02.wav",
                    9,
                    1,
                    70
                };
                frequency = "1";
                volume = "engineOn";
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this spawn RHS_fnc_radar_engineSound";
            };
        };
    };
    class rhs_prv13_turret_vpvo: rhs_prv13_turret_base {
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
    };
    class rhs_2P3_1: ThingX {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_2P3_1.paa";
        dlc = "RHS_AFRF";
        faction = "rhs_faction_vpvo";
        vehicleClass = "rhs_vehclass_radar";
        editorSubcategory = "rhs_EdSubcat_radar";
        scope = 2;
        scopeCurator = 2;
        icon = "\rhsafrf\addons\rhs_radars\data\icons\2P3_1_icon.paa";
        model = "\rhsafrf\addons\rhs_radars\rhs_kung1.p3d";
        displayName = "$STR_RHS_2P3_1";
        author = "$STR_RHS_AUTHOR_FULL";
        mapSize = 8;
        selectionDamage = "damage";
        class Damage {
            tex[] = {};
            mat[] = {"rhsafrf\addons\rhs_radars\data\rhs_kung_01.rvmat", "rhsafrf\addons\rhs_radars\data\rhs_kung_01.rvmat", "rhsafrf\addons\rhs_radars\data\destr.rvmat"};
        };
    };
    class rhs_2P3_2: rhs_2P3_1 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_2P3_2.paa";
        icon = "\rhsafrf\addons\rhs_radars\data\icons\2P3_2_icon.paa";
        model = "\rhsafrf\addons\rhs_radars\rhs_kung2.p3d";
        displayName = "$STR_RHS_2P3_2";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_v2: rhs_2P3_1 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_v2.paa";
        icon = "\rhsafrf\addons\rhs_radars\data\icons\2P3_2_icon.paa";
        model = "\rhsafrf\addons\rhs_radars\rhs_kung3.p3d";
        displayName = "$STR_RHS_V2";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class rhs_v3: rhs_v2 {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_v3.paa";
        icon = "\rhsafrf\addons\rhs_radars\data\icons\2P3_2_icon.paa";
        model = "\rhsafrf\addons\rhs_radars\rhs_kung3.p3d";
        displayName = "$STR_RHS_V3";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class Sound;
    class rhs_Sound_radar1: Sound {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Sound_radar.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 1;
        sound = "rhs_radar_engines01";
        displayName = "Stream";
    };
    class rhs_Sound_radar2: Sound {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Sound_radar.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 1;
        sound = "rhs_radar_engines02";
        displayName = "Alarm";
    };
    class Ruins_F;
    class Land_rhs_p37_wreck: Ruins_F {
        scope = 1;
        model = "\rhsafrf\addons\rhs_radars\rhs_p37_wreck.p3d";
    };
    class Land_rhs_prv13_wreck: Ruins_F {
        scope = 1;
        model = "\rhsafrf\addons\rhs_radars\rhs_prv13_wreck.p3d";
    };
};
