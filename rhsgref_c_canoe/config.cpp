class DefaultEventhandlers;
class CfgPatches {
    class rhsgref_c_canoe {
        units[] = {"rhsgref_hidf_canoe", "rhsgref_civ_canoe"};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {"rhsgref_main"};
        name = "RHS Canoe";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        rhsgref_canoe_driver = "rhsgref_canoe_driver";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class rhsgref_canoe_driver_KIA: DefaultDie {
            actions = "DeadActions";
            file = "rhsgref\addons\rhsgref_c_canoe\anims\rhsgref_canoe_driver.rtm";
            connectTo[] = {"Unconscious", 0.1};
        };
        class rhsgref_canoe_driver: Crew {
            file = "rhsgref\addons\rhsgref_c_canoe\anims\rhsgref_canoe_driver.rtm";
            interpolateTo[] = {"rhsgref_canoe_driver_KIA", 1};
        };
    };
};
class CfgVehicles {
    class Boat_F;
    class Rubber_duck_base_F: Boat_F {
        class EventHandlers;
    };
    class rhsgref_canoe_base: Rubber_duck_base_F {
        DLC = "RHS_GREF";
        model = "rhsgref\addons\rhsgref_canoe\rhs_canoe.p3d";
        picture = "rhsgref\addons\rhsgref_canoe\data\rhs_canoe_ui_ca.paa";
        displayName = "Poseidon II";
        editorSubcategory = "EdSubcat_Boats";
        extCameraPosition[] = {0, 1, -3};
        driverAction = "rhsgref_canoe_driver";
        driverInAction = "rhsgref_canoe_driver";
        driverLeftHandAnimName = "paddle";
        driverRightHandAnimName = "paddle";
        LODDriverTurnedIn = 0;
        LODDriverTurnedOut = 0;
        ejectDeadDriver = 0;
        hideWeaponsDriver = 0;
        transportSoldier = 0;
        slingLoadCargoMemoryPoints[] = {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        armor = 15;
        crewCrashProtection = 0.65;
        epeImpulseDamageCoef = 12;
        class Turrets {};
        hiddenSelections[] = {"camo_1"};
        hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_canoe\data\rhs_canoe_co.paa"};
        class textureSources {
            class Purple {
                displayName = "Purple";
                textures[] = {"\rhsgref\addons\rhsgref_canoe\data\rhs_canoe_purple_co.paa"};
                factions[] = {"rhsgref_faction_hidf", "CIV_F"};
            };
            class Red: Purple {
                displayName = "$STR_A3_TEXTURESOURCES_RED0";
                textures[] = {"\rhsgref\addons\rhsgref_canoe\data\rhs_canoe_red_co.paa"};
            };
            class Yellow: Purple {
                displayName = "$STR_A3_TEXTURESOURCES_YELLOW0";
                textures[] = {"\rhsgref\addons\rhsgref_canoe\data\rhs_canoe_yellow_co.paa"};
            };
            class Black: Purple {
                displayName = "$STR_A3_TEXTURESOURCES_BLACK0";
                textures[] = {"\rhsgref\addons\rhsgref_canoe\data\rhs_canoe_co.paa"};
            };
            class Grey {
                displayName = "$STR_A3_TEXTURESOURCES_GREY0";
                textures[] = {"\rhsgref\addons\rhsgref_canoe\data\rhs_canoe_black_co.paa"};
            };
            class Blue: Purple {
                displayName = "$STR_A3_TEXTURESOURCES_BLUE0";
                textures[] = {"\rhsgref\addons\rhsgref_canoe\data\rhs_canoe_blue_co.paa"};
            };
            class Green: Purple {
                displayName = "$STR_A3_TEXTURESOURCES_GREEN0";
                textures[] = {"\rhsgref\addons\rhsgref_canoe\data\rhs_canoe_green_co.paa"};
            };
            class Orange: Purple {
                displayName = "$STR_A3_TEXTURESOURCES_ORANGE0";
                textures[] = {"\rhsgref\addons\rhsgref_canoe\data\rhs_canoe_orange_co.paa"};
            };
            class Camo: Purple {
                displayName = "$STR_A3_RSCDISPLAYGARAGE_TAB_TEXTURESOURCES";
                textures[] = {"\rhsgref\addons\rhsgref_canoe\data\rhs_canoe_camo_co.paa"};
            };
        };
        class AnimationSources {
            class paddle_source {
                source = "user";
                initPhase = 0;
                animPeriod = 1.4;
            };
        };
        engineEffectSpeed = 2;
        leftEngineEffect = "";
        rightEngineEffect = "";
        memoryPointsLeftEngineEffect = "EngineEffectL";
        memoryPointsRightEngineEffect = "EngineEffectR";
        waterEffectSpeed = 2;
        leftWaterEffect = "";
        rightWaterEffect = "";
        memoryPointsLeftWaterEffect = "waterEffectL";
        memoryPointsRightWaterEffect = "waterEffectR";
        waterFastEffectSpeed = 18;
        leftFastWaterEffect = "";
        rightFastWaterEffect = "";
        maxSpeed = 15;
        overSpeedBrakeCoef = 0.5;
        enginePower = 100.5;
        idleRPM = 30;
        engineMOI = 0.1;
        engineShiftY = 0.6;
        waterLeakiness = 0.5;
        waterResistanceCoef = 0.15;
        thrustDelay = 0.05;
        waterLinearDampingCoefY = 2;
        waterLinearDampingCoefX = 2;
        waterAngularDampingCoef = 1.3;
        rudderForceCoef = 1.1;
        rudderForceCoefAtMaxSpeed = 0.2;
        torqueCurve[] = {
            {0, 0},
            {0.265, 0.6},
            {0.417, 0.8},
            {0.663, 0.982},
            {0.758, 1},
            {0.85, 0.93},
            {0.925, 0.807},
            {1, 0.6}
        };
        class ComplexGearbox {
            GearboxRatios[] = {"R1", -1.5, "N", 0, "D1", 1};
            TransmissionRatios[] = {"High", 1};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        class Damage {
            tex[] = {};
            mat[] = {};
        };
        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then {[(_this select 0), '', [], false] call bis_fnc_initVehicle;};";
            engine = "_this execVM 'rhsgref\addons\rhsgref_canoe\scripts\rhs_paddleAnim.sqf'";
        };
        soundEngineOnInt[] = {"", 1, 1};
        soundEngineOnExt[] = {"", 1, 1, 150};
        soundEngineOffInt[] = {"", 1, 1};
        soundEngineOffExt[] = {"", 1, 1, 150};
        class Sounds {
            class WaternoiseOutW0 {
                sound[] = {
                    "A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",
                    1,
                    1,
                    100
                };
                frequency = "1";
                volume = "(speed factor[4, 1]) * water";
            };
            class WaternoiseOutW1 {
                sound[] = {
                    "A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",
                    1,
                    1,
                    150
                };
                frequency = "1";
                volume = "((speed factor[2, 6]) min (speed factor[6, 4]))";
            };
            class WaternoiseOutW2 {
                sound[] = {
                    "A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",
                    1,
                    1,
                    300
                };
                frequency = "1";
                volume = "(speed factor[3, 9])";
            };
            class WaternoiseOutW3 {
                sound[] = {
                    "A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",
                    1,
                    1,
                    100
                };
                frequency = "1";
                volume = "(speed factor[-4, -1]) * water";
            };
            class WaternoiseOutW4 {
                sound[] = {
                    "A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",
                    1,
                    0.9,
                    150
                };
                frequency = "1";
                volume = "((speed factor[-2, -6]) min (speed factor[-6, -4]))";
            };
            class WaternoiseOutW5 {
                sound[] = {
                    "A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",
                    1,
                    0.9,
                    300
                };
                frequency = "1";
                volume = "(speed factor[-3, -9])";
            };
            class scrubLandExt {
                sound[] = {
                    "A3\Sounds_F\vehicles\boat\noises\boat_land_on_shallow",
                    1.7782794,
                    1,
                    100
                };
                frequency = 1;
                volume = "(scrubLand factor[0.01, 0.20])";
            };
            class RainExt {
                sound[] = {"A3\Sounds_F\vehicles\noises\rain2_ext", 1, 1, 100};
                frequency = 1;
                volume = "camPos * (rain - rotorSpeed/2) * 2";
            };
            class RainInt {
                sound[] = {"A3\Sounds_F\vehicles\noises\rain2_ext", 1, 1, 100};
                frequency = 1;
                volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
            };
        };
    };
    class rhsgref_hidf_canoe: rhsgref_canoe_base {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_hidf_canoe.paa";
        scope = 2;
        side = 1;
        faction = "rhsgref_faction_hidf";
        crew = "rhsgref_hidf_rifleman";
        hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_canoe\data\rhs_canoe_camo_co.paa"};
        textureList[] = {"Camo", 1};
    };
    class rhsgref_civ_canoe: rhsgref_canoe_base {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_civ_canoe.paa";
        scope = 2;
        side = 3;
        faction = "CIV_F";
        crew = "C_man_sport_1_F_tanoan";
        textureList[] = {
            "Purple",
            1,
            "Red",
            1,
            "Yellow",
            1,
            "Black",
            1,
            "Blue",
            1,
            "Green",
            1,
            "Orange",
            1
        };
    };
};
