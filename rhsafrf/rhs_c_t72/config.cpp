class CfgPatches {
    class rhs_c_t72 {
        units[] = {
            "rhs_t72ba_tv",
            "rhs_t72bb_tv",
            "rhs_t72bc_tv",
            "rhs_t72bd_tv",
            "rhs_t72be_tv",
            "rhs_t90_tv",
            "rhs_t90a_tv",
            "rhs_t90saa_tv",
            "rhs_t90sab_tv",
            "rhs_t90am_tv",
            "rhs_t90sm_tv"
        };
        weapons[] = {};
        requiredVersion = 1.64;
        requiredAddons[] = {
            "rhs_main",
            "rhs_c_heavyweapons",
            "rhs_decals",
            "rhs_optics",
            "rhs_c_troops",
            "rhs_aps"
        };
        name = "T-72 Series Tanks";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class RCWSOptics;
class DefaultEventHandlers;
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class t72_init {
                file = "\rhsafrf\addons\rhs_c_t72\scripts\rhs_t72_init.sqf";
                description = "Initialization script for T-72";
            };
            class t72_autoloader {
                file = "\rhsafrf\addons\rhs_c_t72\scripts\rhs_autoloader.sqf";
                description = "Autoloader gun anim & stub ejection for T-72";
            };
            class t72_hatch {
                file = "\rhsafrf\addons\rhs_c_t72\scripts\rhs_hatch.sqf";
                description = "T72 commander hatch handler";
            };
            class turretBlow {
                file = "\rhsafrf\addons\rhs_c_t72\scripts\rhs_turretBlow.sqf";
                description = "T Tanks turret blowoff";
            };
            class hatchAbandon {
                file = "\rhsafrf\addons\rhs_c_t72\scripts\rhs_hatchAbandon.sqf";
            };
            class TTanks_DefineLoadout {
                file = "\rhsafrf\addons\rhs_c_t72\scripts\defineLoadout.sqf";
                description = "T Tanks loadout handler";
            };
        };
    };
};
class CfgSounds {
    class RHS_Error {
        name = "Tank beep";
        sound[] = {"\rhsafrf\addons\rhs_c_t72\scripts\alarm_loop1.wss", 0.3548134, 1};
        titles[] = {};
    };
};
class CfgMovesBasic {
    class Default;
    class DefaultDie;
    class ManActions {
        rhs_t72_commander = "rhs_t72_commander";
        rhs_t72_commander_out = "rhs_t72_commander_out";
        rhs_t72_commander_mg = "rhs_t72_commander_mg";
        rhs_t72_gunner = "rhs_t72_gunner";
        rhs_t72_driver = "rhs_t72_driver";
        rhs_t90_commander = "rhs_t90_commander";
        rhs_t90sm_commander = "rhs_t90sm_commander";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class rhs_crew_in: Default {
            actions = "CargoActions";
            aiming = "aimingNo";
            aimingBody = "aimingNo";
            legs = "legsNo";
            head = "headNo";
            disableWeapons = 1;
            interpolationRestart = 1;
            soundEdge[] = {0.45};
            boundingSphere = 2.5;
            canPullTrigger = 0;
            leaning = "crewShake";
            rightHandIKCurve[] = {1};
            leftHandIKCurve[] = {1};
            rightLegIKCurve[] = {1};
            leftLegIKCurve[] = {1};
            ConnectTo[] = {};
            InterpolateTo[] = {"Unconscious", 0.1};
        };
        class KIA_RHS_T72_Commander: DefaultDie {
            actions = "DeadActions";
            file = "\rhsafrf\addons\rhs_c_t72\anim\KIA_T72_Commander.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class KIA_RHS_T72_Gunner: KIA_RHS_T72_Commander {
            file = "\rhsafrf\addons\rhs_c_t72\anim\KIA_T72_Gunner.rtm";
        };
        class KIA_RHS_T72_Commander_MG: KIA_RHS_T72_Commander {
            file = "\rhsafrf\addons\rhs_c_t72\anim\KIA_MG_CommanderOut.rtm";
        };
        class KIA_RHS_T72_driver: KIA_RHS_T72_Commander {
            file = "\rhsafrf\addons\rhs_c_t72\anim\T72_driver.rtm";
        };
        class KIA_RHS_T90SM_Commander: KIA_RHS_T72_Commander {
            file = "\rhsafrf\addons\rhs_c_t72\anim\KIA_T90SM_Commander.rtm";
        };
        class rhs_t72_commander: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_c_t72\anim\T72_Commander.rtm";
            interpolateTo[] = {"KIA_RHS_T72_Commander", 1};
        };
        class rhs_t72_commander_out: Crew {
            file = "\rhsafrf\addons\rhs_c_t72\anim\T72_Commander_out.rtm";
            interpolateTo[] = {"KIA_RHS_T80a_Commander", 1};
        };
        class rhs_t72_commander_mg: Crew {
            file = "\rhsafrf\addons\rhs_c_t72\anim\MG_CommanderOut.rtm";
            interpolateTo[] = {"KIA_RHS_T72_Commander_mg", 1};
        };
        class rhs_t72_gunner: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_c_t72\anim\T72_Gunner.rtm";
            interpolateTo[] = {"KIA_RHS_T72_Gunner", 1};
        };
        class rhs_t72_driver: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_c_t72\anim\T72_driver.rtm";
            interpolateTo[] = {"KIA_RHS_T72_driver", 1};
        };
        class rhs_t90_commander: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_c_t72\anim\T90_Commander.rtm";
            interpolateTo[] = {"KIA_RHS_T72_Commander", 1};
        };
        class rhs_t90sm_commander: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_c_t72\anim\T90SM_Commander.rtm";
            interpolateTo[] = {"KIA_RHS_T90SM_Commander", 1};
        };
    };
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
    class rhs_a3t72tank_base: Tank_F {
        dlc = "RHS_AFRF";
        rhs_decalParameters[] = {"['Number',cRHST72NumberPlaces,'Default']", "['Label',cRHST72PlnSymPlaces, 'Platoon',8]"};
        category = "Armored";
        allowTabLock = 0;
        destrType = "DestructDefault";
        driveOnComponent[] = {"Track_L", "Track_R", "Slide"};
        author = "$STR_RHS_AUTHOR_FULL";
        vehicleClass = "rhs_vehclass_tank";
        editorSubcategory = "rhs_EdSubcat_tank";
        displayName = "$STR_T72BA_Name";
        accuracy = 0.3;
        supplyRadius = 1;
        memoryPointSupply = "pos driver";
        model = "\rhsafrf\addons\rhs_t72\rhs_t72b_c";
        picture = "\A3\armor_f_gamma\MBT_01\Data\UI\Slammer_M2A1_Base_ca.paa";
        Icon = "\rhsafrf\addons\rhs_t72\data\icomap_t72_CA.paa";
        mapSize = 9.5;
        tf_range_api = 45000;
        irTarget = 1;
        irTargetSize = 1;
        visualTarget = 1;
        visualTargetSize = 0.7;
        radarTarget = 1;
        radarTargetSize = 1.1;
        precision = 1;
        crew = "rhs_msv_crew";
        typicalCargo[] = {};
        side = 0;
        faction = "rhs_faction_tv";
        driverCanSee = "2+4+8";
        gunnerCanSee = "2+4+8";
        commanderCanSee = "2+4+8";
        unitInfoType = "RHS_RscInfoT72";
        enableGPS = 0;
        incomingMissileDetectionSystem = 0;
        getInAction = "GetInLow";
        getOutAction = "GetOutLow";
        driverAction = "driver_apcwheeled2_out";
        driverInAction = "rhs_t72_driver";
        driverDoor = "hatchD";
        driverOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
        LODDriverTurnedIn = 0;
        LODDriverTurnedOut = 0;
        LODDriverOpticsIn = 0;
        class DriverOpticsIn {
            class OpticView: ViewPilot {
                OpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5";
                hitpoint = "Hit_Optic_Driver";
                initFov = 0.7;
                minFov = 0.7;
                maxFov = 0.7;
            };
        };
        weapons[] = {"rhs_weap_smokegen"};
        magazines[] = {"rhs_mag_smokegen"};
        soundGetIn[] = {
            "rhsafrf\addons\rhs_t72\sounds\T72_inside_door1",
            1.5848932,
            1,
            9
        };
        soundGetOut[] = {
            "rhsafrf\addons\rhs_t72\sounds\T72_inside_door1",
            1.5848932,
            1,
            25
        };
        soundDammage[] = {"", 0.56234133, 1};
        soundEngineOnInt[] = {"rhsafrf\addons\rhs_t72\sounds\T72_outside_startup", 1.5848932, 1};
        soundEngineOnExt[] = {
            "\rhsafrf\addons\rhs_t72\sounds\T72_outside_startup",
            4.466836,
            1,
            200
        };
        soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_stop", 0.70794576, 1};
        soundEngineOffExt[] = {
            "rhsafrf\addons\rhs_t72\sounds\T72_outside_shutdown",
            1.6309574,
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
            class Idle_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_t72\sounds\T72_outside-d_idle1",
                    "3.5*0.79432821",
                    1,
                    200
                };
                frequency = "0.95	+	((rpm/	2340) factor[(400*1.57/	2340),(900*1.57/	2340)])*0.15";
                volume = "engineOn*camPos*(((rpm/	2340) factor[(100*1.57/	2340),(200*1.57/	2340)])	*	((rpm/	2340) factor[(900*1.57/	2340),(700*1.57/	2340)]))";
            };
            class Engine {
                sound[] = {
                    "rhsafrf\addons\rhs_t72\sounds\T72_outside-m_low1",
                    "3.5*0.89125091",
                    1,
                    340
                };
                frequency = "0.8	+	((rpm/	2340) factor[(700*1.57/	2340),(1100*1.57/	2340)])*0.2";
                volume = "engineOn*camPos*(((rpm/	2340) factor[(705*1.57/	2340),(850*1.57/	2340)])	*	((rpm/	2340) factor[(1100 *1.57/	2340),(950*1.57/	2340)]))";
            };
            class Engine1_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_t72\sounds\T72_outside-m_low1",
                    "3.5*1.1220185",
                    1,
                    380
                };
                frequency = "0.8	+	((rpm/	2340) factor[(950*1.57/	2340),(1400*1.57/	2340)])*0.2";
                volume = "engineOn*camPos*(((rpm/	2340) factor[(900*1.57/	2340),(1050*1.57/	2340)])	*	((rpm/	2340) factor[(1400*1.57/	2340),(1200*1.57/	2340)]))";
            };
            class Engine2_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_t72\sounds\T72_outside-m_low1",
                    "3.5*1.2589254",
                    1,
                    420
                };
                frequency = "0.8	+	((rpm/	2340) factor[(1200*1.57/	2340),(1700*1.57/	2340)])*0.2";
                volume = "engineOn*camPos*(((rpm/	2340) factor[(1170*1.57/	2340),(1380*1.57/	2340)])	*	((rpm/	2340) factor[(1700*1.57/	2340),(1500*1.57/	2340)]))";
            };
            class Engine3_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_t72\sounds\T72_outside-m_high1",
                    "3.5*1.4125376",
                    1,
                    460
                };
                frequency = "0.8	+	((rpm/	2340) factor[(1500*1.57/	2340),(2100*1.57/	2340)])*0.1";
                volume = "engineOn*camPos*(((rpm/	2340) factor[(1500*1.57/	2340),(1670*1.57/	2340)])	*	((rpm/	2340) factor[(2100*1.57/	2340),(1800*1.57/	2340)]))";
            };
            class Engine4_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_t72\sounds\T72_outside-m_high1",
                    "3.5*1.5848932",
                    1,
                    500
                };
                frequency = "0.8	+	((rpm/	2340) factor[(1800*1.57/	2340),(2300*1.57/	2340)])*0.1";
                volume = "engineOn*camPos*(((rpm/	2340) factor[(1780*1.57/	2340),(2060*1.57/	2340)])	*	((rpm/	2340) factor[(2450*1.57/	2340),(2200*1.57/	2340)]))";
            };
            class Engine5_ext {
                sound[] = {
                    "rhsafrf\addons\rhs_t72\sounds\T72_outside-m_high1",
                    "3.5*1.7782794",
                    1,
                    540
                };
                frequency = "0.8	+	((rpm/	2340) factor[(2100*1.57/	2340),(2340*1.57/	2340)])*0.1";
                volume = "engineOn*camPos*((rpm/	2340) factor[(2150*1.57/	2340),(2500*1.57/	2340)])";
            };
            class IdleThrust {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm1",
                    "3.5*1.1220185",
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	2340) factor[(400*1.57/	2340),(900*1.57/	2340)])*0.15";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(100*1.57/	2340),(200*1.57/	2340)])	*	((rpm/	2340) factor[(900*1.57/	2340),(700*1.57/	2340)]))";
            };
            class EngineThrust {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm2",
                    "3*1.4125376",
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	2340) factor[(700*1.57/	2340),(1100*1.57/	2340)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(705*1.57/	2340),(850*1.57/	2340)])	*	((rpm/	2340) factor[(1100 *1.57/	2340),(950*1.57/	2340)]))";
            };
            class Engine1_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm3",
                    "3*1.7782794",
                    1,
                    230
                };
                frequency = "0.8	+	((rpm/	2340) factor[(950*1.57/	2340),(1400*1.57/	2340)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(900*1.57/	2340),(1050*1.57/	2340)])	*	((rpm/	2340) factor[(1400*1.57/	2340),(1200*1.57/	2340)]))";
            };
            class Engine2_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm4",
                    "3*1.9952624",
                    1,
                    290
                };
                frequency = "0.8	+	((rpm/	2340) factor[(1200*1.57/	2340),(1700*1.57/	2340)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(1170*1.57/	2340),(1380*1.57/	2340)])	*	((rpm/	2340) factor[(1700*1.57/	2340),(1500*1.57/	2340)]))";
            };
            class Engine3_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm5",
                    "3*1.7782794",
                    1,
                    350
                };
                frequency = "0.8	+	((rpm/	2340) factor[(1500*1.57/	2340),(2100*1.57/	2340)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(1500*1.57/	2340),(1670*1.57/	2340)])	*	((rpm/	2340) factor[(2100*1.57/	2340),(1800*1.57/	2340)]))";
            };
            class Engine4_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm6",
                    "3*2.2387211",
                    1,
                    400
                };
                frequency = "0.8	+	((rpm/	2340) factor[(1800*1.57/	2340),(2300*1.57/	2340)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(1780*1.57/	2340),(2060*1.57/	2340)])	*	((rpm/	2340) factor[(2450*1.57/	2340),(2200*1.57/	2340)]))";
            };
            class Engine5_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm7",
                    "3*2.5118864",
                    1,
                    450
                };
                frequency = "0.8	+	((rpm/	2340) factor[(2100*1.57/	2340),(2340*1.57/	2340)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2340) factor[(2150*1.57/	2340),(2500*1.57/	2340)])";
            };
            class Idle_int {
                sound[] = {"rhsafrf\addons\rhs_t72\sounds\T72_inside_idle1", "3*0.50118721", 1};
                frequency = "0.8	+	((rpm/	2340) factor[(400*1.57/	2340),(900*1.57/	2340)])*0.15";
                volume = "engineOn*(1-camPos)*(((rpm/	2340) factor[(100*1.57/	2340),(200*1.57/	2340)])	*	((rpm/	2340) factor[(900*1.57/	2340),(700*1.57/	2340)]))";
            };
            class Engine_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm2", 0.35481337, 1};
                frequency = "0.8	+	((rpm/	2340) factor[(700*1.57/	2340),(1100*1.57/	2340)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	2340) factor[(705*1.57/	2340),(850*1.57/	2340)])	*	((rpm/	2340) factor[(1100 *1.57/	2340),(950*1.57/	2340)]))";
            };
            class Engine1_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm3", 0.39810717, 1};
                frequency = "0.8	+	((rpm/	2340) factor[(950*1.57/	2340),(1400*1.57/	2340)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	2340) factor[(900*1.57/	2340),(1050*1.57/	2340)])	*	((rpm/	2340) factor[(1400*1.57/	2340),(1200*1.57/	2340)]))";
            };
            class Engine2_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm4", 0.4466836, 1};
                frequency = "0.8	+	((rpm/	2340) factor[(1200*1.57/	2340),(1700*1.57/	2340)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	2340) factor[(1170*1.57/	2340),(1380*1.57/	2340)])	*	((rpm/	2340) factor[(1700*1.57/	2340),(1500*1.57/	2340)]))";
            };
            class Engine3_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm5", 0.5011872, 1};
                frequency = "0.8	+	((rpm/	2340) factor[(1500*1.57/	2340),(2100*1.57/	2340)])*0.1";
                volume = "engineOn*(1-camPos)*(((rpm/	2340) factor[(1500*1.57/	2340),(1670*1.57/	2340)])	*	((rpm/	2340) factor[(2100*1.57/	2340),(1800*1.57/	2340)]))";
            };
            class Engine4_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm6", 0.56234133, 1};
                frequency = "0.8	+	((rpm/	2340) factor[(1800*1.57/	2340),(2300*1.57/	2340)])*0.1";
                volume = "engineOn*(1-camPos)*(((rpm/	2340) factor[(1780*1.57/	2340),(2060*1.57/	2340)])	*	((rpm/	2340) factor[(2450*1.57/	2340),(2200*1.57/	2340)]))";
            };
            class Engine5_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm7", 0.63095737, 1};
                frequency = "0.8	+	((rpm/	2340) factor[(2100*1.57/	2340),(2340*1.57/	2340)])*0.1";
                volume = "engineOn*(1-camPos)*((rpm/	2340) factor[(2150*1.57/	2340),(2500*1.57/	2340)])";
            };
            class IdleThrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm1", 0.63095737, 1};
                frequency = "0.8	+	((rpm/	2340) factor[(400*1.57/	2340),(900*1.57/	2340)])*0.15";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(100*1.57/	2340),(200*1.57/	2340)])	*	((rpm/	2340) factor[(900*1.57/	2340),(700*1.57/	2340)]))";
            };
            class EngineThrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm2", 0.39810717, 1};
                frequency = "0.8	+	((rpm/	2340) factor[(700*1.57/	2340),(1100*1.57/	2340)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(705*1.57/	2340),(850*1.57/	2340)])	*	((rpm/	2340) factor[(1100 *1.57/	2340),(950*1.57/	2340)]))";
            };
            class Engine1_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm3", 0.4466836, 1};
                frequency = "0.8	+	((rpm/	2340) factor[(950*1.57/	2340),(1400*1.57/	2340)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(900*1.57/	2340),(1050*1.57/	2340)])	*	((rpm/	2340) factor[(1400*1.57/	2340),(1200*1.57/	2340)]))";
            };
            class Engine2_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm4", 0.4466836, 1};
                frequency = "0.8	+	((rpm/	2340) factor[(1200*1.57/	2340),(1700*1.57/	2340)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(1170*1.57/	2340),(1380*1.57/	2340)])	*	((rpm/	2340) factor[(1700*1.57/	2340),(1500*1.57/	2340)]))";
            };
            class Engine3_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm5", 0.5011872, 1};
                frequency = "0.8	+	((rpm/	2340) factor[(1500*1.57/	2340),(2100*1.57/	2340)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(1500*1.57/	2340),(1670*1.57/	2340)])	*	((rpm/	2340) factor[(2100*1.57/	2340),(1800*1.57/	2340)]))";
            };
            class Engine4_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm6", 0.56234133, 1};
                frequency = "0.8	+	((rpm/	2340) factor[(1800*1.57/	2340),(2300*1.57/	2340)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(1780*1.57/	2340),(2060*1.57/	2340)])	*	((rpm/	2340) factor[(2450*1.57/	2340),(2200*1.57/	2340)]))";
            };
            class Engine5_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm7", 0.63095737, 1};
                frequency = "0.8	+	((rpm/	2340) factor[(2100*1.57/	2340),(2340*1.57/	2340)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2340) factor[(2150*1.57/	2340),(2500*1.57/	2340)])";
            };
            class NoiseInt {
                sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1", 0.5011872, 1};
                frequency = "1";
                volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
            };
            class NoiseExt {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
                    0.8912509,
                    1,
                    50
                };
                frequency = "1";
                volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
            };
            class ThreadsOutH0 {
                sound[] = {
                    "rhsafrf\addons\rhs_t72\sounds\ext_treads_hard_01",
                    "3*0.39810717",
                    1,
                    140
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-0) max 0)*1.57/	60),(((-5) max 5)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-15) max 15)*1.57/	60),(((-10) max 10)*1.57/	60)]))";
            };
            class ThreadsOutH1 {
                sound[] = {
                    "rhsafrf\addons\rhs_t72\sounds\ext_treads_hard_02",
                    "3*0.44668359",
                    1,
                    160
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-10) max 10)*1.57/	60),(((-15) max 15)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-30) max 30)*1.57/	60),(((-25) max 25)*1.57/	60)]))";
            };
            class ThreadsOutH2 {
                sound[] = {
                    "rhsafrf\addons\rhs_t72\sounds\ext_treads_hard_03",
                    "3*0.50118721",
                    1,
                    180
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-25) max 25)*1.57/	60),(((-30) max 30)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-45) max 45)*1.57/	60),(((-40) max 40)*1.57/	60)]))";
            };
            class ThreadsOutH3 {
                sound[] = {
                    "rhsafrf\addons\rhs_t72\sounds\ext_treads_hard_04",
                    "3*0.56234133",
                    1,
                    200
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-40) max 40)*1.57/	60),(((-45) max 45)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-55) max 55)*1.57/	60),(((-50) max 50)*1.57/	60)]))";
            };
            class ThreadsOutH4 {
                sound[] = {
                    "rhsafrf\addons\rhs_t72\sounds\ext_treads_hard_05",
                    "3*0.56234133",
                    1,
                    220
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-49) max 49)*1.57/	60),(((-53) max 53)*1.57/	60)])";
            };
            class ThreadsOutS0 {
                sound[] = {
                    "rhsafrf\addons\rhs_t72\sounds\ext_treads_soft_01",
                    "3*0.31622776",
                    1,
                    120
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-0) max 0)*1.57/	60),(((-5) max 5)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-15) max 15)*1.57/	60),(((-10) max 10)*1.57/	60)]))";
            };
            class ThreadsOutS1 {
                sound[] = {
                    "rhsafrf\addons\rhs_t72\sounds\ext_treads_soft_02",
                    "3*0.35481337",
                    1,
                    140
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-10) max 10)*1.57/	60),(((-15) max 15)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-30) max 30)*1.57/	60),(((-25) max 25)*1.57/	60)]))";
            };
            class ThreadsOutS2 {
                sound[] = {
                    "rhsafrf\addons\rhs_t72\sounds\ext_treads_soft_03",
                    "3*0.39810717",
                    1,
                    160
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-25) max 25)*1.57/	60),(((-30) max 30)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-45) max 45)*1.57/	60),(((-40) max 40)*1.57/	60)]))";
            };
            class ThreadsOutS3 {
                sound[] = {
                    "rhsafrf\addons\rhs_t72\sounds\ext_treads_soft_04",
                    "3*0.44668359",
                    1,
                    180
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-40) max 40)*1.57/	60),(((-45) max 45)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-55) max 55)*1.57/	60),(((-50) max 50)*1.57/	60)]))";
            };
            class ThreadsOutS4 {
                sound[] = {
                    "rhsafrf\addons\rhs_t72\sounds\ext_treads_soft_05",
                    "3*0.50118721",
                    1,
                    200
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-49) max 49)*1.57/	60),(((-53) max 53)*1.57/	60)])";
            };
            class ThreadsInH0 {
                sound[] = {"rhsafrf\addons\rhs_t72\sounds\int_treads_hard_01", "2*0.25118864", 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-0) max 0)*1.57/	60),(((-5) max 5)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-15) max 15)*1.57/	60),(((-10) max 10)*1.57/	60)]))";
            };
            class ThreadsInH1 {
                sound[] = {"rhsafrf\addons\rhs_t72\sounds\int_treads_hard_02", "2*0.2818383", 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-10) max 10)*1.57/	60),(((-15) max 15)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-30) max 30)*1.57/	60),(((-25) max 25)*1.57/	60)]))";
            };
            class ThreadsInH2 {
                sound[] = {"rhsafrf\addons\rhs_t72\sounds\int_treads_hard_03", "2*0.31622776", 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-25) max 25)*1.57/	60),(((-30) max 30)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-45) max 45)*1.57/	60),(((-40) max 40)*1.57/	60)]))";
            };
            class ThreadsInH3 {
                sound[] = {"rhsafrf\addons\rhs_t72\sounds\int_treads_hard_04", "2*0.35481337", 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-40) max 40)*1.57/	60),(((-45) max 45)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-55) max 55)*1.57/	60),(((-50) max 50)*1.57/	60)]))";
            };
            class ThreadsInH4 {
                sound[] = {"rhsafrf\addons\rhs_t72\sounds\int_treads_hard_05", "2*0.39810717", 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-49) max 49)*1.57/	60),(((-53) max 53)*1.57/	60)])";
            };
            class ThreadsInS0 {
                sound[] = {"rhsafrf\addons\rhs_t72\sounds\int_treads_soft_01", "2*0.31622776", 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-0) max 0)*1.57/	60),(((-5) max 5)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-15) max 15)*1.57/	60),(((-10) max 10)*1.57/	60)]))";
            };
            class ThreadsInS1 {
                sound[] = {"rhsafrf\addons\rhs_t72\sounds\int_treads_soft_02", "2*0.31622776", 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-10) max 10)*1.57/	60),(((-15) max 15)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-30) max 30)*1.57/	60),(((-25) max 25)*1.57/	60)]))";
            };
            class ThreadsInS2 {
                sound[] = {"rhsafrf\addons\rhs_t72\sounds\int_treads_soft_03", "2*0.35481337", 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-25) max 25)*1.57/	60),(((-30) max 30)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-45) max 45)*1.57/	60),(((-40) max 40)*1.57/	60)]))";
            };
            class ThreadsInS3 {
                sound[] = {"rhsafrf\addons\rhs_t72\sounds\int_treads_soft_04", "2*0.35481337", 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-40) max 40)*1.57/	60),(((-45) max 45)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-55) max 55)*1.57/	60),(((-50) max 50)*1.57/	60)]))";
            };
            class ThreadsInS4 {
                sound[] = {"rhsafrf\addons\rhs_t72\sounds\int_treads_soft_05", "2*0.39810717", 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-49) max 49)*1.57/	60),(((-53) max 53)*1.57/	60)])";
            };
        };
        simulation = "tankX";
        normalSpeedForwardCoef = 0.75;
        slowSpeedForwardCoef = 0.25;
        fuelCapacity = 29.5;
        RHS_fuelCapacity = 1200;
        brakeIdleSpeed = 1.78;
        maxSpeed = 60;
        maxFordingDepth = 0;
        waterResistance = 0;
        waterDamageEngine = 0.2;
        waterLeakiness = 10;
        torqueCurve[] = {
            {0, 0},
            {0.478261, 0.853329},
            {0.521739, 0.986803},
            {0.565217, 1},
            {0.608696, 1},
            {0.695652, 0.980804},
            {0.869565, 0.884823},
            {1.43478, 0}
        };
        engineMOI = 11;
        enginePower = 626;
        peakTorque = 3334;
        minOmega = 80;
        maxOmega = 240.86;
        idleRPM = 800;
        redRPM = 2300;
        thrustDelay = 0;
        engineBrakeCoef = 0.9;
        tankTurnForce = 950000;
        tankTurnForceAngMinSpd = 0.7;
        tankTurnForceAngSpd = 0.92;
        accelAidForceCoef = 2.5;
        accelAidForceYOffset = -5.5;
        accelAidForceSpd = 2.23;
        antiRollbarForceCoef = 24;
        antiRollbarForceLimit = 42;
        antiRollbarSpeedMin = 30;
        antiRollbarSpeedMax = 75;
        engineLosses = 35;
        transmissionLosses = 45;
        clutchStrength = 40;
        latency = 1.3;
        switchTime = 0;
        changeGearType = "rpmratio";
        changeGearOmegaRatios[] = {
            1,
            0.434783,
            0.434783,
            0,
            0.956522,
            0.434783,
            0.956522,
            0.782609,
            0.913043,
            0.782609,
            0.913043,
            0.782609,
            0.869565,
            0.73913,
            0.826087,
            0.695652,
            1,
            0.608696
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -16.35,
                "N",
                0,
                "D1",
                8.173,
                "D2",
                4.4,
                "D3",
                3.485,
                "D4",
                2.787,
                "D5",
                2.027,
                "D6",
                1.467,
                "D7",
                1
            };
            TransmissionRatios[] = {"High", 9.05};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
            transmissionDelay = 0.1;
        };
        class Wheels {
            class L2 {
                side = "left";
                suspTravelDirection[] = {-0.125, -1, 0};
                boneName = "wheel_podkoloL1";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                steering = 0;
                width = 0.459;
                mass = 193;
                MOI = 17.069;
                maxBrakeTorque = 20000;
                sprungMass = 3750;
                springStrength = 484000;
                springDamperRate = 11000;
                maxDroop = 0.18;
                maxCompression = 0.18;
                dampingRate = 3145;
                dampingRateInAir = 3145;
                dampingRateDamaged = 10;
                dampingRateDestroyed = 10000;
                latStiffX = 1;
                latStiffY = 40;
                longitudinalStiffnessPerUnitGravity = 72000;
                frictionVsSlipGraph[] = {{0, 0.4}, {0.18, 1}, {0.7, 0.75}};
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
            class L5: L2 {
                boneName = "wheel_podkolol4";
                center = "wheel_1_5_axis";
                boundary = "wheel_1_5_bound";
            };
            class L6: L2 {
                boneName = "wheel_podkolol5";
                center = "wheel_1_6_axis";
                boundary = "wheel_1_6_bound";
            };
            class L7: L2 {
                boneName = "wheel_podkolol6";
                center = "wheel_1_7_axis";
                boundary = "wheel_1_7_bound";
            };
            class L9: L2 {
                boneName = "wheel_podkolol9";
                center = "wheel_1_9_axis";
                boundary = "wheel_1_9_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class L1: L2 {
                boneName = "";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class R2: L2 {
                suspTravelDirection[] = {0.125, -1, 0};
                boneName = "wheel_podkolop1";
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                side = "right";
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
            class R9: R2 {
                boneName = "wheel_podkolop9";
                center = "wheel_2_9_axis";
                boundary = "wheel_2_9_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class R1: R2 {
                boneName = "";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
        };
        tracksSpeed = -1;
        wheelCircumference = 2.51;
        attenuationEffectType = "TankAttenuation";
        extCameraPosition[] = {0, 2.2, -11};
        viewDriverInExternal = 1;
        viewCargoShadow = 1;
        viewCargoShadowDiff = 1;
        viewCargoShadowAmb = 1;
        cost = 1500000;
        class TransportMagazines {
            class _xx_rhs_30Rnd_545x39_7N10_AK {
                magazine = "rhs_30Rnd_545x39_7N10_AK";
                count = 10;
            };
            class _xx_rhs_mag_rgd5 {
                magazine = "rhs_mag_rgd5";
                count = 10;
            };
            class _xx_rhs_mag_nspn_red {
                magazine = "rhs_mag_nspn_red";
                count = 10;
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
        armor = 450;
        armorStructural = 220;
        explosionShielding = 100;
        crewExplosionProtection = 0.9999995;
        minTotalDamageThreshold = 0.5;
        fireResistance = -1;
        crewVulnerable = 0;
        class HitPoints: HitPoints {
            class Armor_Composite_75 {
                armor = 999;
                material = -1;
                name = "Armor_CE_75_Hit";
                armorComponent = "Armor_CE_75";
                simulation = "RHS_Composite_75";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.001;
                visual = "-";
            };
            class Armor_Composite_80 {
                armor = 999;
                material = -1;
                name = "Armor_CE_80_Hit";
                armorComponent = "Armor_CE_80";
                simulation = "RHS_Composite_80";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.001;
                visual = "-";
            };
            class Armor_Composite_85 {
                armor = 999;
                material = -1;
                name = "Armor_CE_85_Hit";
                armorComponent = "Armor_CE_85";
                simulation = "RHS_Composite_85";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.001;
                visual = "-";
            };
            class Armor_Composite_95 {
                armor = 999;
                material = -1;
                name = "Armor_CE_95_Hit";
                armorComponent = "Armor_CE_95";
                simulation = "RHS_Composite_95";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.001;
                visual = "-";
            };
            class Sideskirt_1_hitpoint {
                simulation = "RHS_Sideskirt_Rubber";
                armor = -80;
                material = -1;
                name = "Skirt_1";
                armorComponent = "Skirt_1";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.2;
                radius = 0.16;
                visual = "-";
            };
            class Sideskirt_2_hitpoint {
                simulation = "RHS_Sideskirt_Rubber";
                armor = -80;
                material = -1;
                name = "Skirt_2";
                armorComponent = "Skirt_2";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.2;
                radius = 0.16;
                visual = "-";
            };
            class Sideskirt_3_hitpoint {
                simulation = "RHS_Sideskirt_Rubber";
                armor = -80;
                material = -1;
                name = "Skirt_3";
                armorComponent = "Skirt_3";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.2;
                radius = 0.16;
                visual = "-";
            };
            class Sideskirt_4_hitpoint {
                simulation = "RHS_Sideskirt_Rubber";
                armor = -80;
                material = -1;
                name = "Skirt_4";
                armorComponent = "Skirt_4";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.2;
                radius = 0.16;
                visual = "-";
            };
            class Sideskirt_5_hitpoint {
                simulation = "RHS_Sideskirt_Rubber";
                armor = -80;
                material = -1;
                name = "Skirt_5";
                armorComponent = "Skirt_5";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.2;
                radius = 0.16;
                visual = "-";
            };
            class Sideskirt_6_hitpoint {
                simulation = "RHS_Sideskirt_Rubber";
                armor = -80;
                material = -1;
                name = "Skirt_6";
                armorComponent = "Skirt_6";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.2;
                radius = 0.16;
                visual = "-";
            };
            class Sideskirt_7_hitpoint {
                simulation = "RHS_Sideskirt_Rubber";
                armor = -80;
                material = -1;
                name = "Skirt_7";
                armorComponent = "Skirt_7";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.2;
                radius = 0.16;
                visual = "-";
            };
            class Sideskirt_8_hitpoint {
                simulation = "RHS_Sideskirt_Rubber";
                armor = -80;
                material = -1;
                name = "Skirt_8";
                armorComponent = "Skirt_8";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.2;
                radius = 0.16;
                visual = "-";
            };
            class Sideskirt_9_hitpoint {
                simulation = "RHS_Sideskirt_Rubber";
                armor = -80;
                material = -1;
                name = "Skirt_9";
                armorComponent = "Skirt_9";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.2;
                radius = 0.16;
                visual = "-";
            };
            class Sideskirt_10_hitpoint {
                simulation = "RHS_Sideskirt_Rubber";
                armor = -80;
                material = -1;
                name = "Skirt_10";
                armorComponent = "Skirt_10";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.2;
                radius = 0.16;
                visual = "-";
            };
            class HitFuelTank_Left {
                armor = -80;
                material = -1;
                name = "Hit_FuelTank_Left";
                armorComponent = "Hit_FuelTank_Left";
                visual = "-";
                passThrough = 0;
                minimalHit = 0.3;
                explosionShielding = 0;
                radius = 0.1;
            };
            class HitFuelTank_Right: HitFuelTank_Left {
                name = "Hit_FuelTank_Right";
                armorComponent = "Hit_FuelTank_Right";
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
                name = "Hit_Hull";
                armorComponent = "Hit_Carousel";
                visual = "zbytek";
                passThrough = 0;
                minimalHit = 0.04;
                explosionShielding = 0.01;
                radius = 0.1;
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
                armorComponent = "Hit_TrackL";
                name = "Hit_TrackL";
                passThrough = 0;
                material = -1;
                minimalHit = -0.25;
                explosionShielding = 0.5;
                radius = 0.3;
            };
            class HitRTrack: HitRTrack {
                armor = -150;
                armorComponent = "Hit_TrackR";
                name = "Hit_TrackR";
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
            class Hit_Optic_Periscope {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_gunperiscope";
                armorComponent = "Hit_Optic_Periscope";
                passThrough = 0;
            };
            class Hit_Optic_TPD1K {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_tpd1k";
                armorComponent = "Hit_Optic_TPD1K";
                passThrough = 0;
            };
            class Hit_Optic_1K13 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_1K13";
                armorComponent = "Hit_Optic_1K13";
                passThrough = 0;
            };
            class Hit_Optic_TKN3 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_TKN3";
                armorComponent = "Hit_Optic_TKN3";
                passThrough = 0;
            };
        };
        enableManualFire = 0;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        LODTurnedOut = 1200;
                        body = "obsTurret";
                        gun = "obsGun";
                        animationSourceBody = "obsTurret";
                        animationSourceGun = "obsGun";
                        maxHorizontalRotSpeed = 1.8;
                        maxVerticalRotSpeed = 1.8;
                        stabilizedInAxes = 3;
                        minElev = -5;
                        maxElev = 60;
                        initElev = 0;
                        minTurn = -360;
                        maxTurn = 360;
                        initTurn = 0;
                        memoryPointGun = "usti hlavne3";
                        gunBeg = "usti hlavne3";
                        gunEnd = "konec hlavne3";
                        weapons[] = {};
                        magazines[] = {};
                        turretInfoType = "RHS_RscWeaponTKN3_FCS";
                        discreteDistance[] = {100};
                        discreteDistanceInitIndex = 0;
                        canUseScanners = 0;
                        allowTabLock = 0;
                        memoryPointGunnerOutOptics = "commanderview";
                        memoryPointGunnerOptics = "commanderview";
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
                        gunnerOutOpticsModel = "";
                        gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera3"};
                        class ViewOptics: ViewOptics {
                            initAngleX = 0;
                            minAngleX = -30;
                            maxAngleX = 30;
                            initAngleY = 0;
                            minAngleY = -100;
                            maxAngleY = 100;
                            initFov = 0.101;
                            minFov = 0.102;
                            maxFov = 0.102;
                            visionMode[] = {"Normal"};
                        };
                        class OpticsIn {
                            class Wide: ViewOptics {
                                opticsDisplayName = "TKN3";
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
                                gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                                initFov = "0.7/5";
                                hitpoint = "Hit_Optic_TKN3";
                            };
                            class Night: Wide {
                                initFov = "0.7/4.2";
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3_night.p3d";
                                visionMode[] = {"NVG"};
                            };
                            class Periscope: ViewOptics {
                                initAngleX = 0;
                                minAngleX = -30;
                                maxAngleX = 30;
                                initAngleY = 0;
                                minAngleY = -100;
                                maxAngleY = 100;
                                initFov = 0.26;
                                minFov = 0.26;
                                maxFov = 0.26;
                                visionMode[] = {"Normal"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
                                gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera2"};
                            };
                        };
                        gunnerAction = "RHS_passenger_inside_6";
                        gunnerInAction = "rhs_t72_commander";
                        gunnerGetInAction = "GetInMedium";
                        gunnerGetOutAction = "GetOutMedium";
                        personTurretAction = "RHS_passenger_inside_6";
                        isPersonTurret = 1;
                        gunnerDoor = "hatchC";
                        gunnerType = "rhs_msv_crew_commander";
                        startEngine = 0;
                        viewGunnerInExternal = 1;
                        outGunnerMayFire = 1;
                        inGunnerMayFire = 1;
                        class HitPoints {
                            class HitTurretCom {
                                isTurret = 1;
                                armor = -999;
                                material = -1;
                                name = "vezVelitele";
                                visual = "vezVelitele";
                                passThrough = 0;
                                minimalHit = 1;
                                explosionShielding = 0.6;
                                radius = 0.25;
                            };
                            class HitGunCom {
                                isGun = 1;
                                armor = -999;
                                material = -1;
                                name = "zbranVelitele";
                                visual = "zbranVelitele";
                                passThrough = 0;
                                minimalHit = 1;
                                explosionShielding = 0.6;
                                radius = 0.25;
                            };
                        };
                        selectionFireAnim = "";
                        class Components {
                            class VehicleSystemsDisplayManagerComponentLeft {
                                class EmptyDisplay {
                                    componentType = "EmptyDisplayComponent";
                                };
                                class CrewDisplay {
                                    componentType = "CrewDisplayComponent";
                                    resource = "RscCustomInfoCrew";
                                };
                            };
                            class VehicleSystemsDisplayManagerComponentRight {
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
                    class CommanderMG: CommanderOptics {
                        gunnername = "Commander HMG";
                        proxyindex = 2;
                        dontCreateAi = 1;
                        cantCreateAI = 1;
                        body = "mg_turret";
                        gun = "mg_gun";
                        animationSourceBody = "mg_turret";
                        animationSourceGun = "mg_gun";
                        gunnerDoor = "";
                        memoryPointGun = "mg_end";
                        gunBeg = "mg_end";
                        gunEnd = "mg_start";
                        stabilizedInAxes = 0;
                        gunnerAction = "rhs_t72_commander_mg";
                        gunnerInAction = "rhs_t72_commander_mg";
                        canHideGunner = 0;
                        isPersonTurret = 0;
                        memoryPointGunnerOutOptics = "commander_out_view";
                        gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                        soundAttenuationTurret = "HeliAttenuationGunner";
                        disableSoundAttenuation = 1;
                        animationSourceStickX = "mg_Turret_Inertia";
                        animationSourceStickY = "mg_Gun_Inertia";
                        gunnerLeftHandAnimName = "";
                        gunnerRightHandAnimName = "mg_handle2";
                        turretInfoType = "RHS_RscWeaponZeroing";
                        maxVerticalRotSpeed = 0.35;
                        minElev = -6;
                        maxElev = 45;
                        initElev = 44;
                        initTurn = -180;
                        LODOpticsOut = 1200;
                        LODOpticsIn = 1200;
                        discreteDistance[] = {
                            100,
                            200,
                            300,
                            400,
                            500,
                            600,
                            800,
                            900,
                            1000,
                            1100,
                            1200,
                            1400,
                            1500,
                            1800,
                            1900,
                            2000
                        };
                        discreteDistanceInitIndex = 2;
                        weapons[] = {"rhs_weap_nsvt_t72"};
                        magazines[] = {"rhs_mag_127x108mm_50", "rhs_mag_127x108mm_50", "rhs_mag_127x108mm_50"};
                        selectionFireAnim = "zasleh4";
                        class OpticsIn: OpticsIn {
                            class Wide: Wide {
                                visionMode[] = {"Normal"};
                                initFov = 0.583333;
                                minFov = 0.583333;
                                maxFov = 0.583333;
                            };
                        };
                        class HitPoints {
                            class HitTurretNSVT {
                                isTurret = 1;
                                armor = 0.3;
                                material = -1;
                                name = "nsvt_turret";
                                armorComponent = "Hit_NSVT_Turret";
                                visual = "-";
                                passThrough = 0;
                                minimalHit = 0.03;
                                explosionShielding = 0.6;
                                radius = 0.25;
                            };
                            class HitGunNSVT {
                                isGun = 1;
                                armor = 0.3;
                                material = -1;
                                name = "nsvt_gun";
                                armorComponent = "Hit_NSVT_Gun";
                                visual = "-";
                                passThrough = 0;
                                minimalHit = 0.03;
                                explosionShielding = 0.6;
                                radius = 0.25;
                            };
                        };
                        gunnercompartments = "Compartment5";
                    };
                };
                LODTurnedOut = 0;
                memoryPointGun = "usti hlavne2";
                selectionFireAnim = "zaslehCoax";
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                startEngine = 0;
                weapons[] = {
                    "rhs_weap_2a46m",
                    "rhs_weap_pkt",
                    "rhs_weap_902a",
                    "rhs_weap_fcs"
                };
                magazines[] = {
                    "rhs_mag_3bm42_7",
                    "rhs_mag_3bk18m_6",
                    "rhs_mag_3of26_5",
                    "rhs_mag_9m119_4",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_3d17",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
                maxHorizontalRotSpeed = 0.35;
                maxVerticalRotSpeed = 0.07;
                minElev = -5;
                maxElev = 14;
                initElev = 10;
                initTurn = -13;
                soundServo[] = {"rhsafrf\addons\rhs_t72\sounds\traverse", 7, 1, 30};
                class TurnIn {
                    limitsArrayTop[] = {{14, -180}, {14, 180}};
                    limitsArrayBottom[] = {
                        {-1.9, -180},
                        {-1.9, -134.6867},
                        {-4.7683, -133.6867},
                        {-5, 0},
                        {-4.7173, 133.6372},
                        {-1.9, 134.6867},
                        {-1.9, 180}
                    };
                };
                turretInfoType = "RHS_RscWeaponT72_FCS";
                discreteDistance[] = {100};
                discreteDistanceInitIndex = 0;
                canUseScanners = 0;
                allowTabLock = 0;
                enableManualFire = 0;
                memoryPointGunnerOptics = "gunnerview";
                gunnerOutOpticsModel = "";
                gunnerOutOpticsEffect[] = {};
                gunnerOpticsEffect[] = {};
                gunnerForceOptics = 1;
                class ViewOptics;
                class OpticsIn {
                    class Day: ViewOptics {
                        opticsDisplayName = "DAY";
                        minFov = 0.0777778;
                        maxFov = 0.0777778;
                        initFov = 0.0777778;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tpdk1_empty";
                        HitPoint = "Hit_Optic_TPD1K";
                    };
                    class 1k113: ViewOptics {
                        opticsDisplayName = "ATGM";
                        camPos = "view_1k13";
                        initFov = 0.0875;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1k113.p3d";
                        HitPoint = "Hit_Optic_1K13";
                    };
                    class Periscope: Day {
                        opticsDisplayName = "PERISCOPE";
                        camPos = "view_periscope";
                        initFov = 0.466666;
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
                        HitPoint = "Hit_Optic_Periscope";
                    };
                    class Night: Day {
                        opticsDisplayName = "NIGHT";
                        camPos = "view_1k13";
                        initFov = 0.1;
                        visionMode[] = {"NVG"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tpd1kn.p3d";
                        HitPoint = "Hit_Optic_1K13";
                    };
                };
                lockWhenDriverOut = 1;
                gunnerAction = "rhs_t80a_gunner_out";
                gunnerInAction = "rhs_t80a_gunner_in";
                gunnerGetInAction = "GetInMedium";
                gunnerGetOutAction = "GetOutMedium";
                gunnerDoor = "hatchG";
                forceHideGunner = 0;
                inGunnerMayFire = 1;
                viewGunnerInExternal = 1;
                class HitPoints {
                    class HitTurret {
                        armor = -150;
                        material = -1;
                        name = "vez";
                        armorComponent = "Hit_Turret";
                        visual = "vez";
                        passThrough = 0;
                        minimalHit = -0.2;
                        explosionShielding = 0.0009;
                        radius = 0.1;
                    };
                    class HitGun {
                        armor = -150;
                        material = -1;
                        name = "zbran";
                        armorComponent = "Hit_Gun";
                        visual = "-";
                        passThrough = 0;
                        minimalHit = -0.2;
                        explosionShielding = 0.0001;
                        radius = 0.1;
                    };
                };
                class Reflectors {
                    class Searchlight_FG125 {
                        color[] = {1900, 1300, 950};
                        ambient[] = {5, 5, 5};
                        position = "Light_FG125";
                        direction = "Light_FG125_end";
                        hitpoint = "Light_FG125";
                        selection = "Light_FG125";
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
                    class Searchlight_FG125_Flare {
                        color[] = {7, 6, 6.5};
                        ambient[] = {22, 22, 22};
                        position = "Light_FG125";
                        direction = "Light_FG125_end";
                        hitpoint = "Light_FG125";
                        selection = "Light_FG125";
                        size = 1;
                        innerAngle = 30;
                        outerAngle = 175;
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
                armorLights = 0.1;
                class Components {
                    class VehicleSystemsDisplayManagerComponentLeft {
                        class EmptyDisplay {
                            componentType = "EmptyDisplayComponent";
                        };
                        class CrewDisplay {
                            componentType = "CrewDisplayComponent";
                            resource = "RscCustomInfoCrew";
                        };
                    };
                    class VehicleSystemsDisplayManagerComponentRight {
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
        };
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6",
            "camo7",
            "camo8",
            "camo9",
            "camo10",
            "camo11",
            "n1",
            "n2",
            "n3",
            "i1",
            "i2",
            ""
        };
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_01a_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_02a_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        class textureSources {
            class standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_01a_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_02a_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa"
                };
                factions[] = {};
            };
            class rhs_Sand: standard {
                displayName = "Sand";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_01a_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02a_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa"
                };
            };
            class rhs_chdkz: rhs_Sand {
                displayName = "CHDKZ";
                textures[] = {
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_01a_chdkz_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02a_chdkz_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa"
                };
            };
            class r1: standard {
                displayName = "#1";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "#(argb,8,8,3)color(0.92,0.87,0.92,1)",
                    "#(argb,8,8,3)color(0.92,0.87,0.92,1)",
                    "#(argb,8,8,3)color(0.92,0.87,0.92,1)",
                    "#(argb,8,8,3)color(0.92,0.87,0.92,1)",
                    "#(argb,8,8,3)color(0.92,0.87,0.92,1)",
                    "#(argb,8,8,3)color(0.92,0.87,0.92,1)",
                    "#(argb,8,8,3)color(0.92,0.87,0.92,1)",
                    "#(argb,8,8,3)color(0.92,0.87,0.92,1)"
                };
            };
            class r2: standard {
                displayName = "#2";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "#(argb,8,8,3)color(0.07,0.98,0,1)",
                    "#(argb,8,8,3)color(0.07,0.98,0,1)",
                    "#(argb,8,8,3)color(0.07,0.98,0,1)",
                    "#(argb,8,8,3)color(0.07,0.98,0,1)",
                    "#(argb,8,8,3)color(0.07,0.98,0,1)",
                    "#(argb,8,8,3)color(0.07,0.98,0,1)",
                    "#(argb,8,8,3)color(0.07,0.98,0,1)",
                    "#(argb,8,8,3)color(0.07,0.98,0,1)"
                };
            };
            class r3: standard {
                displayName = "#3";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "#(argb,8,8,3)color(0,0.11,0.67,1)",
                    "#(argb,8,8,3)color(0,0.11,0.67,1)",
                    "#(argb,8,8,3)color(0,0.11,0.67,1)",
                    "#(argb,8,8,3)color(0,0.11,0.67,1)",
                    "#(argb,8,8,3)color(0,0.11,0.67,1)",
                    "#(argb,8,8,3)color(0,0.11,0.67,1)",
                    "#(argb,8,8,3)color(0,0.11,0.67,1)",
                    "#(argb,8,8,3)color(0,0.11,0.67,1)"
                };
            };
            class r4: standard {
                displayName = "#4";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "#(argb,8,8,3)color(0.99,0.27,0.25,1)",
                    "#(argb,8,8,3)color(0.99,0.27,0.25,1)",
                    "#(argb,8,8,3)color(0.99,0.27,0.25,1)",
                    "#(argb,8,8,3)color(0.99,0.27,0.25,1)",
                    "#(argb,8,8,3)color(0.99,0.27,0.25,1)",
                    "#(argb,8,8,3)color(0.99,0.27,0.25,1)",
                    "#(argb,8,8,3)color(0.99,0.27,0.25,1)",
                    "#(argb,8,8,3)color(0.99,0.27,0.25,1)"
                };
            };
            class r5: standard {
                displayName = "#5";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "#(argb,8,8,3)color(00.41,0.4,0,1)",
                    "#(argb,8,8,3)color(00.41,0.4,0,1)",
                    "#(argb,8,8,3)color(00.41,0.4,0,1)",
                    "#(argb,8,8,3)color(00.41,0.4,0,1)",
                    "#(argb,8,8,3)color(00.41,0.4,0,1)",
                    "#(argb,8,8,3)color(00.41,0.4,0,1)",
                    "#(argb,8,8,3)color(00.41,0.4,0,1)",
                    "#(argb,8,8,3)color(00.41,0.4,0,1)"
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
                expression = "_this setVariable ['%s', _value];[_this,[['Number', cRHST72NumberPlaces, _value]]] call rhs_fnc_decalsInit";
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
                expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHST72NumberPlaces}else{[_this, [['Number', cRHST72NumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
            };
            class rhs_decalPlatoon_type {
                displayName = "Define platoon symbol type";
                tooltip = "Decal type";
                property = "rhs_decalPlatoon_type";
                control = "Combo";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = "0";
                typeName = "STRING";
                class values {
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
                    class Army {
                        name = "Army";
                        value = "Army";
                        defaultValue = "1";
                    };
                    class Honor {
                        name = "Honor";
                        value = "Honor";
                        defaultValue = "0";
                    };
                    class HonorGDR {
                        name = "Honor GDR";
                        value = "HonorGDR";
                    };
                };
            };
            class rhs_decalPlatoon {
                displayName = "Set platoon symbol";
                tooltip = "Set platoon symbol located on turret. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalPlatoon";
                control = "Edit";
                validate = "none";
                defaultValue = "-1";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cRHST72PlnSymPlaces,  _this getVariable ['rhs_decalPlatoon_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_decalHonor_type: rhs_decalPlatoon_type {
                displayName = "Define honor symbol type";
                property = "rhs_decalHonor_type";
                class values: values {
                    class Honor: Honor {};
                    class HonorGDR: HonorGDR {};
                    class Platoon: Platoon {};
                    class PlatoonGDR: PlatoonGDR {};
                    class PlatoonVDV: PlatoonVDV {};
                    class Army: Army {};
                };
            };
            class rhs_decalHonor: rhs_decalPlatoon {
                displayName = "Set honor symbol";
                tooltip = "Define symbol located on IR Lamp ('84-'89 type tanks only). Usually used for honor symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalHonor";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cRHST72HnrSymPlaces,  _this getVariable ['rhs_decalHonor_type','Honor'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
            class rhs_ammoslot_1_type {
                displayName = "Ammo slot #1 type";
                tooltip = "Define type of shell for #1 slot [AP rounds]";
                property = "rhs_ammoslot_1_type";
                control = "Combo";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = 0;
                typeName = "STRING";
                class values {
                    class rhs_mag_3bm42_10 {
                        name = "$STR_rhs_mag_3bm42";
                        value = "rhs_mag_3bm42";
                        defaultValue = "rhs_mag_3bm42";
                    };
                    class rhs_mag_3bm9_10 {
                        name = "$STR_rhs_mag_3bm9";
                        value = "rhs_mag_3bm9";
                        defaultValue = "rhs_mag_3bm9";
                    };
                    class rhs_mag_3bm12_10 {
                        name = "$STR_rhs_mag_3bm12";
                        value = "rhs_mag_3bm12";
                        defaultValue = "rhs_mag_3bm12";
                    };
                    class rhs_mag_3bm15_10 {
                        name = "$STR_rhs_mag_3bm15";
                        value = "rhs_mag_3bm15";
                        defaultValue = "rhs_mag_3bm15";
                    };
                    class rhs_mag_3bm17_10 {
                        name = "$STR_rhs_mag_3bm17";
                        value = "rhs_mag_3bm17";
                        defaultValue = "rhs_mag_3bm17";
                    };
                    class rhs_mag_3bm22_10 {
                        name = "$STR_rhs_mag_3bm22";
                        value = "rhs_mag_3bm22";
                        defaultValue = "rhs_mag_3bm22";
                    };
                    class rhs_mag_3bm29_10 {
                        name = "$STR_rhs_mag_3bm29";
                        value = "rhs_mag_3bm29";
                        defaultValue = "rhs_mag_3bm29";
                    };
                    class rhs_mag_3bm26_10 {
                        name = "$STR_rhs_mag_3bm26";
                        value = "rhs_mag_3bm26";
                        defaultValue = "rhs_mag_3bm26";
                    };
                    class rhs_mag_3bm32_10 {
                        name = "$STR_rhs_mag_3bm32";
                        value = "rhs_mag_3bm32";
                        defaultValue = "rhs_mag_3bm32";
                    };
                    class rhs_mag_3bm42m_10 {
                        name = "$STR_rhs_mag_3bm42m";
                        value = "rhs_mag_3bm42m";
                        defaultValue = "rhs_mag_3bm42m";
                    };
                    class rhs_mag_3bm46_10 {
                        name = "$STR_rhs_mag_3bm46";
                        value = "rhs_mag_3bm46";
                        defaultValue = "rhs_mag_3bm46";
                    };
                };
            };
            class rhs_ammoslot_1 {
                displayName = "Ammo slot #1 count";
                tooltip = "Define number of rounds stored inside of type #1. Max 22. Leave -1 for default loadout";
                property = "rhs_ammoslot_1";
                control = "Edit";
                expression = "if(_value >= 0)then{ [_this,_value,'%s',22] spawn rhs_fnc_TTanks_DefineLoadout};";
                defaultValue = "-1";
                validate = "NUMBER";
                typeName = "NUMBER";
            };
            class rhs_ammoslot_2_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #2 type";
                tooltip = "Define type of shell for #2 slot [HEAT rounds]";
                property = "rhs_ammoslot_2_type";
                class values {
                    class rhs_mag_3bk21_8 {
                        name = "$STR_rhs_mag_3bk21";
                        value = "rhs_mag_3bk21";
                        defaultValue = "rhs_mag_3bk21";
                    };
                    class rhs_mag_3bk12_8 {
                        name = "$STR_rhs_mag_3bk12";
                        value = "rhs_mag_3bk12";
                        defaultValue = "rhs_mag_3bk12";
                    };
                    class rhs_mag_3bk14_8 {
                        name = "$STR_rhs_mag_3bk14";
                        value = "rhs_mag_3bk14";
                        defaultValue = "rhs_mag_3bk14";
                    };
                    class rhs_mag_3bk18_8 {
                        name = "$STR_rhs_mag_3bk18";
                        value = "rhs_mag_3bk18";
                        defaultValue = "rhs_mag_3bk18";
                    };
                    class rhs_mag_3bk18m_8 {
                        name = "$STR_rhs_mag_3bk18m";
                        value = "rhs_mag_3bk18m";
                        defaultValue = "rhs_mag_3bk18m";
                    };
                    class rhs_mag_3bk29_8 {
                        name = "$STR_rhs_mag_3bk29";
                        value = "rhs_mag_3bk29";
                        defaultValue = "rhs_mag_3bk29";
                    };
                    class rhs_mag_3bk31_8 {
                        name = "$STR_rhs_mag_3bk31";
                        value = "rhs_mag_3bk31";
                        defaultValue = "rhs_mag_3bk31";
                    };
                };
            };
            class rhs_ammoslot_2: rhs_ammoslot_1 {
                displayName = "Ammo slot #2 count";
                tooltip = "Define number of rounds stored inside of type #2. Max 22. Leave -1 for default loadout";
                property = "rhs_ammoslot_2";
            };
            class rhs_ammoslot_3_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #3 type";
                tooltip = "Define type of shell for #3 slot [HE rounds]";
                property = "rhs_ammoslot_3_type";
                class values {
                    class rhs_mag_3of26_6 {
                        name = "$STR_rhs_mag_3of26";
                        value = "rhs_mag_3of26";
                        defaultValue = "rhs_mag_3of26";
                    };
                    class rhs_mag_3of11_6 {
                        name = "$STR_rhs_mag_3of11";
                        value = "rhs_mag_3of11";
                        defaultValue = "rhs_mag_3of11";
                    };
                };
            };
            class rhs_ammoslot_3: rhs_ammoslot_1 {
                displayName = "Ammo slot #3 count";
                tooltip = "Define number of rounds stored inside of type #3. Max 22. Leave -1 for default loadout";
                property = "rhs_ammoslot_3";
            };
            class rhs_ammoslot_4_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #4 type";
                tooltip = "Define type of shell for #4 slot [ATGM rounds]";
                property = "rhs_ammoslot4_type";
                class values {
                    class rhs_mag_9m119m_6 {
                        name = "$STR_rhs_mag_9m119m";
                        value = "rhs_mag_9m119m";
                        defaultValue = "rhs_mag_9m119m";
                    };
                    class rhs_mag_9m119_6 {
                        name = "$STR_rhs_mag_9m119";
                        value = "rhs_mag_9m119";
                        defaultValue = "rhs_mag_9m119";
                    };
                    class rhs_mag_9m119f_6 {
                        name = "$STR_rhs_mag_9m119f";
                        value = "rhs_mag_9m119f";
                        defaultValue = "rhs_mag_9m119f";
                    };
                };
            };
            class rhs_ammoslot_4: rhs_ammoslot_1 {
                displayName = "Ammo slot #4 count";
                tooltip = "Define number of rounds stored inside of type #4. Max 22. Leave -1 for default loadout";
                property = "rhs_ammoslot_4";
            };
            class rhs_hide_com_shield {
                displayName = "Remove commander shield";
                property = "rhs_hide_com_shield";
                control = "CheckboxNumber";
                expression = "_this animate ['hide_com_shield',_value,true]";
                defaultValue = "0";
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_t72\data\periscope.rvmat",
                "rhsafrf\addons\rhs_t72\data\periscope_damage.rvmat",
                "rhsafrf\addons\rhs_t72\data\periscope_destroyed.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_04.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_04.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_04.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_05.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_05.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_05.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72c_tracks.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72c_tracks.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72c_tracks.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_A.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_A.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_destroy.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_02.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_dam_bmd4_02.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_destr_bmd4_02.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class ViewOptics: ViewOptics {
            visionMode[] = {"Normal", "NVG"};
            initFov = 0.7;
            minFov = 0.7;
            maxFov = 0.7;
        };
        class AnimationSources: AnimationSources {
            class smokecap_revolving_source {
                source = "revolving";
                weapon = "rhs_weap_902a";
            };
            class recoil_source {
                source = "door";
                animPeriod = 6;
                initPhase = 0;
            };
            class reload_source {
                weapon = "rhs_weap_2a46m";
                source = "reload";
            };
            class reload_magazine_source: reload_source {
                source = "reloadMagazine";
            };
            class muzzle_rot_cannon: reload_source {
                source = "ammorandom";
            };
            class muzzle_rot_mg1: muzzle_rot_cannon {
                weapon = "rhs_weap_pkt";
            };
            class autoloader {
                source = "user";
                animPeriod = 3.25;
                initPhase = 0;
            };
            class turretHide: autoloader {
                animPeriod = 0.0000000001;
            };
            class hide_com_shield: autoloader {
                animPeriod = 0.0000000001;
                displayName = "hide commander shield";
                mass = 1;
            };
            class hide_sideskirts: autoloader {
                displayName = "hide side skirts";
                useSource = 1;
                mass = 0;
                animPeriod = 0.01;
            };
            class TCOverrideTurret {
                source = "user";
                animPeriod = 4;
                initPhase = 0;
            };
            class sightHide: autoloader {
                animPeriod = 0.0000000001;
            };
            class sightRange {
                source = "user";
                animPeriod = 0.0005;
                initPhase = 0;
            };
            class sightElevationAPFSDS: sightRange {
                animPeriod = 0.4;
                initPhase = 7.46;
            };
            class sightElevationHEAT: sightRange {
                animPeriod = 0.065;
            };
            class sightElevationHEF: sightRange {
                animPeriod = 0.08;
            };
            class HatchC {
                source = "door";
                animPeriod = 2.1;
            };
            class HatchG: HatchC {};
            class HatchD: HatchC {};
            class muzzle_rot_hmg: muzzle_rot_cannon {
                weapon = "rhs_weap_nsvt_t72";
            };
            class ReloadAnim {
                source = "reload";
                weapon = "rhs_weap_nsvt_t72";
            };
            class ReloadMagazine: ReloadAnim {
                source = "reloadmagazine";
            };
            class Revolving: ReloadAnim {
                source = "revolving";
            };
            class skirt_1_source {
                source = "Hit";
                hitpoint = "sideskirt_1_hitpoint";
            };
            class skirt_2_source {
                source = "Hit";
                hitpoint = "sideskirt_2_hitpoint";
            };
            class skirt_3_source {
                source = "Hit";
                hitpoint = "sideskirt_3_hitpoint";
            };
            class skirt_4_source {
                source = "Hit";
                hitpoint = "sideskirt_4_hitpoint";
            };
            class skirt_5_source {
                source = "Hit";
                hitpoint = "sideskirt_5_hitpoint";
            };
            class skirt_6_source {
                source = "Hit";
                hitpoint = "sideskirt_6_hitpoint";
            };
            class skirt_7_source {
                source = "Hit";
                hitpoint = "sideskirt_7_hitpoint";
            };
            class skirt_8_source {
                source = "Hit";
                hitpoint = "sideskirt_8_hitpoint";
            };
            class skirt_9_source {
                source = "Hit";
                hitpoint = "sideskirt_9_hitpoint";
            };
            class skirt_10_source {
                source = "Hit";
                hitpoint = "sideskirt_10_hitpoint";
            };
        };
        class Exhausts {
            class Exhaust1 {
                position = "exhaustl";
                direction = "exhaustl_dir";
                effect = "ExhaustEffectTankSide";
            };
            class Exhaust2 {
                position = "exhaustr";
                direction = "exhaustr_dir";
                effect = "ExhaustEffectTankSide";
            };
        };
        class Reflectors {
            class Driver_FG125_Cover {
                color[] = {1900, 1300, 950};
                ambient[] = {5, 5, 5};
                position = "Light_L";
                direction = "Light_L_end";
                hitpoint = "Light_L";
                selection = "Light_L";
                size = 1;
                innerAngle = 35;
                outerAngle = 75;
                coneFadeCoef = 5;
                intensity = 15;
                useFlare = 0;
                dayLight = 1;
                flareSize = 0.85;
                class Attenuation {
                    start = 1;
                    constant = 0;
                    linear = 0;
                    quadratic = 0.2;
                    hardLimitStart = 130;
                    hardLimitEnd = 160;
                };
            };
            class Driver_FG125_Cover_Flare: Driver_FG125_Cover {
                intensity = 5;
                innerAngle = 55;
                outerAngle = 155;
                flareSize = 0.3;
                useFlare = 1;
            };
        };
        aggregateReflectors[] = {{"Driver_FG125_Cover", "Driver_FG125_Cover_Flare"}};
        armorLights = 0.1;
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this call RHS_fnc_T72_init;";
                postInit = "_this call rhs_fnc_reapplyTextures";
                fired = "_this call RHS_fnc_T72_autoloader;";
                hitpart = "_this call rhs_fnc_hitSpall";
                killed = "[_this select 0,'rhs_Wreck_T72_turret_F'] call rhs_fnc_turretBlow";
                getOut = "_this call rhs_fnc_t72_hatch;_this call rhs_fnc_hatchAbandon";
                engine = "[_this select 0,_this select 1,2.7] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_engineCheckDamage;";
            };
        };
        class UserActions {
            class trunk_open {
                displayName = "Use NSVT";
                position = "trunk_action";
                radius = 2;
                onlyForplayer = 0;
                condition = "this animationPhase 'HatchCommander'>0.5 and ((call rhs_fnc_findPlayer) == commander this)";
                statement = "(call rhs_fnc_findPlayer) action ['moveToTurret', this, [0,1]];[this,[[0,0],true]] remoteExecCall ['lockTurret']";
            };
            class trunk_close: trunk_open {
                displayName = "Leave NSVT";
                condition = "vehicle (call rhs_fnc_findPlayer) turretUnit [0,1] == (call rhs_fnc_findPlayer)";
                statement = "(call rhs_fnc_findPlayer) action ['moveToTurret', this, [0,0]];[this,[[0,0],false]] remoteExecCall ['lockTurret']";
            };
        };
        class Components: Components {
            class VehicleSystemsDisplayManagerComponentLeft {
                class EmptyDisplay {
                    componentType = "EmptyDisplayComponent";
                };
                class CrewDisplay {
                    componentType = "CrewDisplayComponent";
                    resource = "RscCustomInfoCrew";
                };
            };
            class VehicleSystemsDisplayManagerComponentRight {
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
    class rhs_t72ba_tv: rhs_a3t72tank_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t72ba_tv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        model = "\rhsafrf\addons\rhs_t72\rhs_t72b_a";
        scope = 2;
        displayName = "$STR_T72BA_Name";
        picture = "\rhsafrf\addons\rhs_t72\icons\t72b1984_ca.paa";
    };
    class rhs_t72bb_tv: rhs_a3t72tank_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t72bb_tv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        model = "\rhsafrf\addons\rhs_t72\rhs_t72b_b";
        scope = 2;
        displayName = "$STR_T72BB_Name";
        picture = "\rhsafrf\addons\rhs_t72\icons\t72b1985_ca.paa";
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_01b_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_02b_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_05b_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        class textureSources: textureSources {
            class standard: standard {
                textures[] = {
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_01b_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_02b_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_05b_co.paa"
                };
            };
            class rhs_Sand: rhs_Sand {
                textures[] = {
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_01b_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02b_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05b_sand_co.paa"
                };
            };
            class rhs_chdkz: rhs_Sand {
                displayName = "CHDKZ";
                textures[] = {
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_01b_chdkz_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02b_chdkz_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05b_chdkz_co.paa"
                };
            };
        };
        class AnimationSources: AnimationSources {
            class smokecap_revolving_source {
                source = "revolving";
                weapon = "rhs_weap_902a";
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
        };
        class HitPoints: HitPoints {
            class Armor_Composite_75 {
                armor = 999;
                material = -1;
                name = "Armor_CE_75_Hit";
                armorComponent = "Armor_CE_75";
                simulation = "RHS_Composite_75";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.001;
                visual = "-";
            };
            class Armor_Composite_80 {
                armor = 999;
                material = -1;
                name = "Armor_CE_80_Hit";
                armorComponent = "Armor_CE_80";
                simulation = "RHS_Composite_80";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.001;
                visual = "-";
            };
            class Armor_Composite_85 {
                armor = 999;
                material = -1;
                name = "Armor_CE_85_Hit";
                armorComponent = "Armor_CE_85";
                simulation = "RHS_Composite_85";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.001;
                visual = "-";
            };
            class Armor_Composite_95 {
                armor = 999;
                material = -1;
                name = "Armor_CE_95_Hit";
                armorComponent = "Armor_CE_95";
                simulation = "RHS_Composite_95";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.001;
                visual = "-";
            };
            class era_1_hitpoint {
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
        };
    };
    class rhs_t72bc_tv: rhs_a3t72tank_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t72bc_tv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
        displayName = "$STR_T72BC_Name";
        picture = "\rhsafrf\addons\rhs_t72\icons\t72b1989_ca.paa";
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_01_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_02_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        class textureSources: textureSources {
            class standard: standard {
                textures[] = {
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_01_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_02_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa"
                };
            };
            class rhs_Sand: rhs_Sand {
                textures[] = {
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_01_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05_sand_co.paa"
                };
            };
            class rhs_chdkz: rhs_chdkz {
                displayName = "";
            };
        };
        class AnimationSources: AnimationSources {
            class smokecap_revolving_source {
                source = "revolving";
                weapon = "rhs_weap_902a";
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
        };
        class HitPoints: HitPoints {
            class Armor_Composite_75 {
                armor = 999;
                material = -1;
                name = "Armor_CE_75_Hit";
                armorComponent = "Armor_CE_75";
                simulation = "RHS_Composite_75";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.001;
                visual = "-";
            };
            class Armor_Composite_80 {
                armor = 999;
                material = -1;
                name = "Armor_CE_80_Hit";
                armorComponent = "Armor_CE_80";
                simulation = "RHS_Composite_80";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.001;
                visual = "-";
            };
            class Armor_Composite_85 {
                armor = 999;
                material = -1;
                name = "Armor_CE_85_Hit";
                armorComponent = "Armor_CE_85";
                simulation = "RHS_Composite_85";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.001;
                visual = "-";
            };
            class Armor_Composite_95 {
                armor = 999;
                material = -1;
                name = "Armor_CE_95_Hit";
                armorComponent = "Armor_CE_95";
                simulation = "RHS_Composite_95";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.001;
                visual = "-";
            };
            class era_1_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
        };
    };
    class rhs_t72bd_tv: rhs_a3t72tank_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t72bd_tv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
        displayName = "$STR_T72BD_Name";
        picture = "\rhsafrf\addons\rhs_t72\icons\t72b3_ca.paa";
        normalSpeedForwardCoef = 0.75;
        slowSpeedForwardCoef = 0.25;
        fuelCapacity = 29.5;
        RHS_fuelCapacity = 1200;
        brakeIdleSpeed = 1.78;
        maxSpeed = 68;
        torqueCurve[] = {
            {0, 0},
            {0.478261, 0.853329},
            {0.521739, 0.986803},
            {0.565217, 1},
            {0.608696, 1},
            {0.695652, 0.980804},
            {0.869565, 0.884823},
            {1.43478, 0}
        };
        engineMOI = 17;
        enginePower = 745;
        peakTorque = 4321;
        minOmega = 80;
        maxOmega = 240.86;
        idleRPM = 800;
        redRPM = 2300;
        changeGearOmegaRatios[] = {
            1,
            0.434783,
            0.434783,
            0,
            0.956522,
            0.434783,
            0.956522,
            0.782609,
            0.913043,
            0.782609,
            0.913043,
            0.782609,
            0.869565,
            0.73913,
            0.826087,
            0.695652,
            1,
            0.608696
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -16.35,
                "N",
                0,
                "D1",
                8.173,
                "D2",
                4.4,
                "D3",
                3.485,
                "D4",
                2.787,
                "D5",
                2.027,
                "D6",
                1.467,
                "D7",
                1
            };
            TransmissionRatios[] = {"High", 9.05};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
            transmissionDelay = 0.1;
        };
        class Wheels: Wheels {
            class L2: L2 {
                width = 0.504;
                MOI = 17.069;
                sprungMass = -1;
                dampingRate = 3143;
                dampingRateInAir = 3143;
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
            class L5: L2 {
                boneName = "wheel_podkolol4";
                center = "wheel_1_5_axis";
                boundary = "wheel_1_5_bound";
            };
            class L6: L2 {
                boneName = "wheel_podkolol5";
                center = "wheel_1_6_axis";
                boundary = "wheel_1_6_bound";
            };
            class L7: L2 {
                boneName = "wheel_podkolol6";
                center = "wheel_1_7_axis";
                boundary = "wheel_1_7_bound";
            };
            class L9: L2 {
                boneName = "wheel_podkolol9";
                center = "wheel_1_9_axis";
                boundary = "wheel_1_9_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class L1: L2 {
                boneName = "";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class R2: L2 {
                boneName = "wheel_podkolop1";
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                side = "right";
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
            class R9: R2 {
                boneName = "wheel_podkolop9";
                center = "wheel_2_9_axis";
                boundary = "wheel_2_9_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class R1: R2 {
                boneName = "";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
        };
        model = "\rhsafrf\addons\rhs_t72\rhs_t72b_d";
        enableGPS = 1;
        receiveRemoteTargets = 1;
        reportRemoteTargets = 1;
        reportOwnPosition = 1;
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_turret_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        class textureSources: textureSources {
            class standard: standard {
                textures[] = {
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_turret_co.paa"
                };
            };
            class rhs_Sand: rhs_Sand {
                textures[] = {
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_01_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_02_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_turret_sand_co.paa"
                };
            };
            class rhs_chdkz: rhs_chdkz {
                displayName = "";
            };
        };
        crew = "rhs_msv_emr_armoredcrew";
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_t72\data\periscope.rvmat",
                "rhsafrf\addons\rhs_t72\data\periscope_damage.rvmat",
                "rhsafrf\addons\rhs_t72\data\periscope_destroyed.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_04.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_04.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_04.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_05.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_05.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_05.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_turret.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_turret.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_turret.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72c_tracks.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72c_tracks.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72c_tracks.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_02.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_dam_bmd4_02.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_destr_bmd4_02.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class AnimationSources: AnimationSources {
            class smokecap_revolving_source {
                source = "revolving";
                weapon = "rhs_weap_902a";
            };
            class reload_source {
                weapon = "rhs_weap_2a46m_5";
                source = "reload";
            };
            class reload_magazine_source: reload_source {
                source = "reloadMagazine";
            };
            class muzzle_rot_cannon: reload_source {
                source = "ammorandom";
            };
            class hide_com_shield: autoloader {};
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
        };
        class HitPoints: HitPoints {
            class Hit_Optic_SosnaU {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_essa";
                armorComponent = "Hit_Optic_ESSA";
                passThrough = 0;
            };
            class era_1_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
        };
        enableManualFire = 1;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        gunnerType = "rhs_msv_emr_crew_commander";
                        gunnerAction = "passenger_inside_6";
                        personTurretAction = "passenger_inside_6";
                        class Components {
                            class VehicleSystemsDisplayManagerComponentLeft {
                                class EmptyDisplay {
                                    componentType = "EmptyDisplayComponent";
                                };
                                class CrewDisplay {
                                    componentType = "CrewDisplayComponent";
                                    resource = "RscCustomInfoCrew";
                                };
                                class VehiclePrimaryGunnerDisplay {
                                    componentType = "TransportFeedDisplayComponent";
                                    source = "PrimaryGunner";
                                };
                            };
                            class VehicleSystemsDisplayManagerComponentRight {
                                class EmptyDisplay {
                                    componentType = "EmptyDisplayComponent";
                                };
                                class CrewDisplay {
                                    componentType = "CrewDisplayComponent";
                                    resource = "RscCustomInfoCrew";
                                };
                                class VehiclePrimaryGunnerDisplay {
                                    componentType = "TransportFeedDisplayComponent";
                                    source = "PrimaryGunner";
                                };
                            };
                        };
                    };
                    class CommanderMG: CommanderMG {};
                };
                maxHorizontalRotSpeed = 0.88;
                memoryPointGunnerOptics = "gunnerview2";
                weapons[] = {
                    "rhs_weap_2a46m_5",
                    "rhs_weap_pkt",
                    "rhs_weap_902a",
                    "rhs_weap_fcs"
                };
                magazines[] = {
                    "rhs_mag_3bm46_8",
                    "rhs_mag_3bk31_3",
                    "rhs_mag_3of26_7",
                    "rhs_mag_9m119_4",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_3d17",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
                turretInfoType = "RHS_RscWeaponSosnaU_FCS";
                class OpticsIn {
                    class Wide: ViewOptics {
                        camPos = "gunnerview2";
                        hitpoint = "Hit_Optic_SosnaU";
                        opticsDisplayName = "TI1";
                        initFov = 0.233333;
                        minFov = 0.233333;
                        maxFov = 0.233333;
                        visionMode[] = {"Normal", "Ti"};
                        thermalMode[] = {0, 1};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_sosnau.p3d";
                    };
                    class Medium: Wide {
                        opticsDisplayName = "TI2";
                        initFov = 0.0583333;
                        minFov = 0.0583333;
                        maxFov = 0.0583333;
                    };
                    class Narrow: Medium {
                        opticsDisplayName = "TI3";
                        initFov = 0.0291667;
                        minFov = 0.0291667;
                        maxFov = 0.0291667;
                    };
                    class Narrow2: Narrow {
                        opticsDisplayName = "AUTOTRACK";
                        directionStabilized = 1;
                    };
                };
            };
        };
        class Attributes: Attributes {
            class ObjectTexture: ObjectTexture {};
            class rhs_decalNumber_type: rhs_decalNumber_type {};
            class rhs_decalNumber: rhs_decalNumber {};
            class rhs_decalPlatoon_type: rhs_decalPlatoon_type {};
            class rhs_decalPlatoon: rhs_decalPlatoon {};
            class rhs_ammoslot_1_type: rhs_ammoslot_1_type {
                class values {
                    class rhs_mag_3bm46_10 {
                        name = "$STR_rhs_mag_3bm46";
                        value = "rhs_mag_3bm46";
                        defaultValue = "rhs_mag_3bm46";
                    };
                    class rhs_mag_3bm9_10 {
                        name = "$STR_rhs_mag_3bm9";
                        value = "rhs_mag_3bm9";
                        defaultValue = "rhs_mag_3bm9";
                    };
                    class rhs_mag_3bm12_10 {
                        name = "$STR_rhs_mag_3bm12";
                        value = "rhs_mag_3bm12";
                        defaultValue = "rhs_mag_3bm12";
                    };
                    class rhs_mag_3bm15_10 {
                        name = "$STR_rhs_mag_3bm15";
                        value = "rhs_mag_3bm15";
                        defaultValue = "rhs_mag_3bm15";
                    };
                    class rhs_mag_3bm17_10 {
                        name = "$STR_rhs_mag_3bm17";
                        value = "rhs_mag_3bm17";
                        defaultValue = "rhs_mag_3bm17";
                    };
                    class rhs_mag_3bm22_10 {
                        name = "$STR_rhs_mag_3bm22";
                        value = "rhs_mag_3bm22";
                        defaultValue = "rhs_mag_3bm22";
                    };
                    class rhs_mag_3bm29_10 {
                        name = "$STR_rhs_mag_3bm29";
                        value = "rhs_mag_3bm29";
                        defaultValue = "rhs_mag_3bm29";
                    };
                    class rhs_mag_3bm26_10 {
                        name = "$STR_rhs_mag_3bm26";
                        value = "rhs_mag_3bm26";
                        defaultValue = "rhs_mag_3bm26";
                    };
                    class rhs_mag_3bm32_10 {
                        name = "$STR_rhs_mag_3bm32";
                        value = "rhs_mag_3bm32";
                        defaultValue = "rhs_mag_3bm32";
                    };
                    class rhs_mag_3bm42_10 {
                        name = "$STR_rhs_mag_3bm42";
                        value = "rhs_mag_3bm42";
                        defaultValue = "rhs_mag_3bm42";
                    };
                    class rhs_mag_3bm42m_10 {
                        name = "$STR_rhs_mag_3bm42m";
                        value = "rhs_mag_3bm42m";
                        defaultValue = "rhs_mag_3bm42m";
                    };
                };
            };
            class rhs_ammoslot_1: rhs_ammoslot_1 {};
            class rhs_ammoslot_2_type: rhs_ammoslot_2_type {
                class values {
                    class rhs_mag_3bk31_8 {
                        name = "$STR_rhs_mag_3bk31";
                        value = "rhs_mag_3bk31";
                        defaultValue = "rhs_mag_3bk31";
                    };
                    class rhs_mag_3bk12_8 {
                        name = "$STR_rhs_mag_3bk12";
                        value = "rhs_mag_3bk12";
                        defaultValue = "rhs_mag_3bk12";
                    };
                    class rhs_mag_3bk14_8 {
                        name = "$STR_rhs_mag_3bk14";
                        value = "rhs_mag_3bk14";
                        defaultValue = "rhs_mag_3bk14";
                    };
                    class rhs_mag_3bk18_8 {
                        name = "$STR_rhs_mag_3bk18";
                        value = "rhs_mag_3bk18";
                        defaultValue = "rhs_mag_3bk18";
                    };
                    class rhs_mag_3bk18m_8 {
                        name = "$STR_rhs_mag_3bk18m";
                        value = "rhs_mag_3bk18m";
                        defaultValue = "rhs_mag_3bk18m";
                    };
                    class rhs_mag_3bk21_8 {
                        name = "$STR_rhs_mag_3bk21";
                        value = "rhs_mag_3bk21";
                        defaultValue = "rhs_mag_3bk21";
                    };
                    class rhs_mag_3bk29_8 {
                        name = "$STR_rhs_mag_3bk29";
                        value = "rhs_mag_3bk29";
                        defaultValue = "rhs_mag_3bk29";
                    };
                };
            };
            class rhs_ammoslot_2: rhs_ammoslot_2 {};
            class rhs_ammoslot_3_type: rhs_ammoslot_3_type {
                class values {
                    class rhs_mag_3of26_6 {
                        name = "$STR_rhs_mag_3of26";
                        value = "rhs_mag_3of26";
                        defaultValue = "rhs_mag_3of26";
                    };
                    class rhs_mag_3of11_6 {
                        name = "$STR_rhs_mag_3of11";
                        value = "rhs_mag_3of11";
                        defaultValue = "rhs_mag_3of11";
                    };
                };
            };
            class rhs_ammoslot_3: rhs_ammoslot_3 {};
            class rhs_ammoslot_4_type: rhs_ammoslot_4_type {
                class values {
                    class rhs_mag_9m119m_6 {
                        name = "$STR_rhs_mag_9m119m";
                        value = "rhs_mag_9m119m";
                        defaultValue = "rhs_mag_9m119m";
                    };
                    class rhs_mag_9m119_6 {
                        name = "$STR_rhs_mag_9m119";
                        value = "rhs_mag_9m119";
                        defaultValue = "rhs_mag_9m119";
                    };
                    class rhs_mag_9m119f_6 {
                        name = "$STR_rhs_mag_9m119f";
                        value = "rhs_mag_9m119f";
                        defaultValue = "rhs_mag_9m119f";
                    };
                };
            };
            class rhs_ammoslot_4: rhs_ammoslot_4 {};
        };
    };
    class rhs_t72be_tv: rhs_t72bd_tv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t72be_tv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
        displayName = "$STR_T72BE_Name";
        picture = "\rhsafrf\addons\rhs_t72\icons\rhs_t72be_ca.paa";
        normalSpeedForwardCoef = 0.75;
        slowSpeedForwardCoef = 0.25;
        fuelCapacity = 29.5;
        RHS_fuelCapacity = 1200;
        brakeIdleSpeed = 1.78;
        maxSpeed = 68;
        torqueCurve[] = {
            {0, 0},
            {0.478261, 0.853329},
            {0.521739, 0.986803},
            {0.565217, 1},
            {0.608696, 1},
            {0.695652, 0.980804},
            {0.869565, 0.884823},
            {1.43478, 0}
        };
        engineMOI = 17;
        enginePower = 831;
        peakTorque = 4521;
        minOmega = 80;
        maxOmega = 240.86;
        idleRPM = 800;
        redRPM = 2300;
        changeGearOmegaRatios[] = {
            1,
            0.434783,
            0.434783,
            0,
            0.956522,
            0.434783,
            0.956522,
            0.782609,
            0.913043,
            0.782609,
            0.913043,
            0.782609,
            0.869565,
            0.73913,
            0.826087,
            0.695652,
            1,
            0.608696
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -16.35,
                "N",
                0,
                "D1",
                8.173,
                "D2",
                4.4,
                "D3",
                3.485,
                "D4",
                2.787,
                "D5",
                2.027,
                "D6",
                1.467,
                "D7",
                1
            };
            TransmissionRatios[] = {"High", 9.05};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
            transmissionDelay = 0.1;
        };
        class Wheels: Wheels {
            class L2: L2 {
                width = 0.504;
                MOI = 17.069;
                sprungMass = -1;
                dampingRate = 3143;
                dampingRateInAir = 3143;
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
            class L5: L2 {
                boneName = "wheel_podkolol4";
                center = "wheel_1_5_axis";
                boundary = "wheel_1_5_bound";
            };
            class L6: L2 {
                boneName = "wheel_podkolol5";
                center = "wheel_1_6_axis";
                boundary = "wheel_1_6_bound";
            };
            class L7: L2 {
                boneName = "wheel_podkolol6";
                center = "wheel_1_7_axis";
                boundary = "wheel_1_7_bound";
            };
            class L9: L2 {
                boneName = "wheel_podkolol9";
                center = "wheel_1_9_axis";
                boundary = "wheel_1_9_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class L1: L2 {
                boneName = "";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class R2: L2 {
                boneName = "wheel_podkolop1";
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                side = "right";
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
            class R9: R2 {
                boneName = "wheel_podkolop9";
                center = "wheel_2_9_axis";
                boundary = "wheel_2_9_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class R1: R2 {
                boneName = "";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
        };
        model = "\rhsafrf\addons\rhs_t72\rhs_t72b_e";
        class DriverOpticsIn {
            class OpticView: ViewPilot {
                hitpoint = "Hit_Optic_Driver";
                initFov = 0.7;
                minFov = 0.7;
                maxFov = 0.7;
                OpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5";
            };
            class Rear: OpticView {
                camPos = "view_rear";
                camDir = "view_rear_dir";
                hitpoint = "Hit_Optic_Driver_Rear";
                OpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_sosnau_dcam";
            };
        };
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_turret_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_01_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_02_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_03_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t90parts_co.paa"
        };
        class textureSources: textureSources {
            class standard: standard {
                textures[] = {
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_turret_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_01_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_02_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_03_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t90parts_co.paa"
                };
            };
            class rhs_Sand: rhs_Sand {
                textures[] = {
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_01_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_02_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_turret_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_e_01_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_e_02_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_e_03_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t90parts_sand_co.paa"
                };
            };
        };
        crew = "rhs_msv_emr_armoredcrew";
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_t72\data\periscope.rvmat",
                "rhsafrf\addons\rhs_t72\data\periscope_damage.rvmat",
                "rhsafrf\addons\rhs_t72\data\periscope_destroyed.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_04.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_04.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_04.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_05.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_05.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_05.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_turret.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_turret.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_turret.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_e_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_e_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_e_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_e_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_e_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_e_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t90parts.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t90parts.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t90parts.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72c_tracks.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72c_tracks.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72c_tracks.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_02.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_dam_bmd4_02.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_destr_bmd4_02.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        animationList[] = {"hide_hull_slats", 1, "unhide_tank_holders", 0};
        class AnimationSources: AnimationSources {
            class hide_hull_slats {
                displayName = "Show Slat Cage (Hull)";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 1;
                forceAnimatePhase = 1;
                forceAnimate[] = {"unhide_tank_holders", 0};
            };
            class unhide_tank_holders: hide_hull_slats {
                displayName = "Show Tank Holders";
                initPhase = 0;
                forceAnimate[] = {"hide_hull_slats", 0};
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
            class era_38_source {
                source = "Hit";
                hitpoint = "era_38_hitpoint";
            };
            class era_39_source {
                source = "Hit";
                hitpoint = "era_39_hitpoint";
            };
            class era_40_source {
                source = "Hit";
                hitpoint = "era_40_hitpoint";
            };
            class era_41_source {
                source = "Hit";
                hitpoint = "era_41_hitpoint";
            };
            class era_42_source {
                source = "Hit";
                hitpoint = "era_42_hitpoint";
            };
            class era_43_source {
                source = "Hit";
                hitpoint = "era_43_hitpoint";
            };
            class era_44_source {
                source = "Hit";
                hitpoint = "era_44_hitpoint";
            };
            class era_45_source {
                source = "Hit";
                hitpoint = "era_45_hitpoint";
            };
            class era_46_source {
                source = "Hit";
                hitpoint = "era_46_hitpoint";
            };
            class era_47_source {
                source = "Hit";
                hitpoint = "era_47_hitpoint";
            };
            class era_48_source {
                source = "Hit";
                hitpoint = "era_48_hitpoint";
            };
            class era_49_source {
                source = "Hit";
                hitpoint = "era_49_hitpoint";
            };
            class era_50_source {
                source = "Hit";
                hitpoint = "era_50_hitpoint";
            };
            class ERA_51_source {
                source = "Hit";
                hitpoint = "SLAT_51_hitpoint";
            };
            class ERA_52_source {
                source = "Hit";
                hitpoint = "SLAT_52_hitpoint";
            };
            class ERA_53_source {
                source = "Hit";
                hitpoint = "SLAT_53_hitpoint";
            };
            class ERA_54_source {
                source = "Hit";
                hitpoint = "SLAT_54_hitpoint";
            };
            class ERA_55_source {
                source = "Hit";
                hitpoint = "SLAT_55_hitpoint";
            };
            class ERA_56_source {
                source = "Hit";
                hitpoint = "SLAT_56_hitpoint";
            };
            class ERA_57_source {
                source = "Hit";
                hitpoint = "SLAT_57_hitpoint";
            };
            class era_58_source {
                source = "Hit";
                hitpoint = "era_58_hitpoint";
            };
            class era_59_source {
                source = "Hit";
                hitpoint = "era_59_hitpoint";
            };
            class era_60_source {
                source = "Hit";
                hitpoint = "era_60_hitpoint";
            };
            class era_61_source {
                source = "Hit";
                hitpoint = "era_61_hitpoint";
            };
            class era_62_source {
                source = "Hit";
                hitpoint = "era_62_hitpoint";
            };
            class era_63_source {
                source = "Hit";
                hitpoint = "era_63_hitpoint";
            };
            class era_64_source {
                source = "Hit";
                hitpoint = "era_64_hitpoint";
            };
            class era_65_source {
                source = "Hit";
                hitpoint = "era_65_hitpoint";
            };
            class era_66_source {
                source = "Hit";
                hitpoint = "era_66_hitpoint";
            };
            class era_67_source {
                source = "Hit";
                hitpoint = "era_67_hitpoint";
            };
            class ERA_68_source {
                source = "Hit";
                hitpoint = "SLAT_68_hitpoint";
            };
            class ERA_69_source {
                source = "Hit";
                hitpoint = "SLAT_69_hitpoint";
            };
            class ERA_70_source {
                source = "Hit";
                hitpoint = "SLAT_70_hitpoint";
            };
        };
        class HitPoints: HitPoints {
            class era_1_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
            class era_38_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e38";
                armorComponent = "e38";
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
                        position = "fx_e38";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e38";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e38";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e38";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_39_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e39";
                armorComponent = "e39";
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
                        position = "fx_e39";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e39";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e39";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e39";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_40_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e40";
                armorComponent = "e40";
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
                        position = "fx_e40";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e40";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e40";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e40";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_41_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e41";
                armorComponent = "e41";
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
                        position = "fx_e41";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e41";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e41";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e41";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_42_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e42";
                armorComponent = "e42";
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
                        position = "fx_e42";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e42";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e42";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e42";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_43_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e43";
                armorComponent = "e43";
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
                        position = "fx_e43";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e43";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e43";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e43";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_44_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e44";
                armorComponent = "e44";
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
                        position = "fx_e44";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e44";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e44";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e44";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_45_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e45";
                armorComponent = "e45";
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
                        position = "fx_e45";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e45";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e45";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e45";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_46_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e46";
                armorComponent = "e46";
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
                        position = "fx_e46";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e46";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e46";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e46";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_47_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e47";
                armorComponent = "e47";
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
                        position = "fx_e47";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e47";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e47";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e47";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_48_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e48";
                armorComponent = "e48";
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
                        position = "fx_e48";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e48";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e48";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e48";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_49_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e49";
                armorComponent = "e49";
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
                        position = "fx_e49";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e49";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e49";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e49";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_50_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e50";
                armorComponent = "e50";
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
                        position = "fx_e50";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e50";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e50";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e50";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class SLAT_51_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e51";
                armorComponent = "e51";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_52_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e52";
                armorComponent = "e52";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_53_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e53";
                armorComponent = "e53";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_54_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e54";
                armorComponent = "e54";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_55_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e55";
                armorComponent = "e55";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_56_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e56";
                armorComponent = "e56";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_57_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e57";
                armorComponent = "e57";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class era_58_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e58";
                armorComponent = "e58";
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
                        position = "fx_e58";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e58";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e58";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e58";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_59_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e59";
                armorComponent = "e59";
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
                        position = "fx_e59";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e59";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e59";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e59";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_60_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e60";
                armorComponent = "e60";
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
                        position = "fx_e60";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e60";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e60";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e60";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_61_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e61";
                armorComponent = "e61";
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
                        position = "fx_e61";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e61";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e61";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e61";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_62_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e62";
                armorComponent = "e62";
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
                        position = "fx_e62";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e62";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e62";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e62";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_63_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e63";
                armorComponent = "e63";
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
                        position = "fx_e63";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e63";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e63";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e63";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_64_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e64";
                armorComponent = "e64";
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
                        position = "fx_e64";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e64";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e64";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e64";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_65_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e65";
                armorComponent = "e65";
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
                        position = "fx_e65";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e65";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e65";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e65";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_66_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e66";
                armorComponent = "e66";
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
                        position = "fx_e66";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e66";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e66";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e66";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_67_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
                material = -1;
                name = "e67";
                armorComponent = "e67";
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
                        position = "fx_e67";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e67";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e67";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e67";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class SLAT_68_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e68";
                armorComponent = "e68";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_69_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e69";
                armorComponent = "e69";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_70_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e70";
                armorComponent = "e70";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
        };
    };
    class rhs_t90_tv: rhs_t72bd_tv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t90_tv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
        displayName = "$STR_T90_Name";
        picture = "\rhsafrf\addons\rhs_t72\icons\t90_ca.paa";
        model = "\rhsafrf\addons\rhs_t72\rhs_t90";
        simulation = "tankX";
        normalSpeedForwardCoef = 0.75;
        slowSpeedForwardCoef = 0.25;
        fuelCapacity = 29.5;
        RHS_fuelCapacity = 1200;
        brakeIdleSpeed = 1.78;
        maxSpeed = 60;
        maxFordingDepth = 0;
        waterResistance = 0;
        waterDamageEngine = 0.2;
        waterLeakiness = 10;
        torqueCurve[] = {
            {0, 0},
            {0.478261, 0.853329},
            {0.521739, 0.986803},
            {0.565217, 1},
            {0.608696, 1},
            {0.695652, 0.980804},
            {0.869565, 0.884823},
            {1.43478, 0}
        };
        engineMOI = 11;
        enginePower = 626;
        peakTorque = 3334;
        minOmega = 80;
        maxOmega = 240.86;
        idleRPM = 800;
        redRPM = 2300;
        thrustDelay = 0;
        engineBrakeCoef = 0.9;
        tankTurnForce = 950000;
        tankTurnForceAngMinSpd = 0.7;
        tankTurnForceAngSpd = 0.92;
        accelAidForceCoef = 2.5;
        accelAidForceYOffset = -5.5;
        accelAidForceSpd = 2.23;
        antiRollbarForceCoef = 24;
        antiRollbarForceLimit = 42;
        antiRollbarSpeedMin = 30;
        antiRollbarSpeedMax = 75;
        engineLosses = 35;
        transmissionLosses = 45;
        clutchStrength = 40;
        latency = 1.3;
        switchTime = 0;
        changeGearType = "rpmratio";
        changeGearOmegaRatios[] = {
            1,
            0.434783,
            0.434783,
            0,
            0.956522,
            0.434783,
            0.956522,
            0.782609,
            0.913043,
            0.782609,
            0.913043,
            0.782609,
            0.869565,
            0.73913,
            0.826087,
            0.695652,
            1,
            0.608696
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -16.35,
                "N",
                0,
                "D1",
                8.173,
                "D2",
                4.4,
                "D3",
                3.485,
                "D4",
                2.787,
                "D5",
                2.027,
                "D6",
                1.467,
                "D7",
                1
            };
            TransmissionRatios[] = {"High", 9.05};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
            transmissionDelay = 0.1;
        };
        class Wheels {
            class L2 {
                side = "left";
                suspTravelDirection[] = {-0.125, -1, 0};
                boneName = "wheel_podkoloL1";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                steering = 0;
                width = 0.459;
                mass = 193;
                MOI = 17.069;
                maxBrakeTorque = 20000;
                sprungMass = 3750;
                springStrength = 484000;
                springDamperRate = 11000;
                maxDroop = 0.18;
                maxCompression = 0.18;
                dampingRate = 3145;
                dampingRateInAir = 3145;
                dampingRateDamaged = 10;
                dampingRateDestroyed = 10000;
                latStiffX = 1;
                latStiffY = 40;
                longitudinalStiffnessPerUnitGravity = 72000;
                frictionVsSlipGraph[] = {{0, 0.4}, {0.18, 1}, {0.7, 0.75}};
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
            class L5: L2 {
                boneName = "wheel_podkolol4";
                center = "wheel_1_5_axis";
                boundary = "wheel_1_5_bound";
            };
            class L6: L2 {
                boneName = "wheel_podkolol5";
                center = "wheel_1_6_axis";
                boundary = "wheel_1_6_bound";
            };
            class L7: L2 {
                boneName = "wheel_podkolol6";
                center = "wheel_1_7_axis";
                boundary = "wheel_1_7_bound";
            };
            class L9: L2 {
                boneName = "wheel_podkolol9";
                center = "wheel_1_9_axis";
                boundary = "wheel_1_9_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class L1: L2 {
                boneName = "";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class R2: L2 {
                suspTravelDirection[] = {0.125, -1, 0};
                boneName = "wheel_podkolop1";
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                side = "right";
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
            class R9: R2 {
                boneName = "wheel_podkolop9";
                center = "wheel_2_9_axis";
                boundary = "wheel_2_9_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class R1: R2 {
                boneName = "";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
        };
        gunnerHasFlares = 0;
        enableGPS = 1;
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6",
            "camo7",
            "camo8",
            "dazzler",
            "dazzlerlight",
            "camo11",
            "n1",
            "n2",
            "n3",
            "i1",
            "dazzlerglass"
        };
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_02d_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t90parts_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa",
            "",
            "rhsafrf\addons\rhs_t72\data\rhs_dazzler_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_dazzler_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        class textureSources: textureSources {
            class standard: standard {
                textures[] = {
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_02d_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t90parts_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa",
                    "",
                    "rhsafrf\addons\rhs_t72\data\rhs_dazzler_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_dazzler_co.paa"
                };
            };
            class rhs_Sand: rhs_Sand {
                textures[] = {
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_01_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02d_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t90parts_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_02_sand_co.paa",
                    "",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_dazzler_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_dazzler_sand_co.paa"
                };
            };
            class RHS_CDF {
                scope = 0;
                displayName = "";
            };
        };
        rhs_aps_shtora = 1;
        unitInfoType = "RHS_RscInfoT90";
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                init = "_this call RHS_fnc_T72_init;";
            };
        };
        lockDetectionSystem = 4;
        class AnimationSources: AnimationSources {
            class smokecap_revolving_source {
                source = "revolving";
                weapon = "rhs_weap_902b";
            };
            class reload_source {
                weapon = "rhs_weap_2a46m_4";
                source = "reload";
            };
            class reload_magazine_source: reload_source {
                source = "reloadMagazine";
            };
            class muzzle_rot_cannon: reload_source {
                source = "ammorandom";
            };
            class ShtoraTurn {
                source = "user";
                animperiod = 2;
            };
            class Unhide_vis_optic_d_driver {
                source = "hit";
                hitpoint = "Hit_Optic_Driver";
            };
            class Unhide_vis_optic_d_gunperiscope {
                source = "hit";
                hitpoint = "Hit_Optic_Periscope";
            };
            class Unhide_vis_optic_d_sosnau {
                source = "hit";
                hitpoint = "Hit_Optic_ESSA";
            };
            class Unhide_vis_optic_d_1g46 {
                source = "hit";
                hitpoint = "Hit_Optic_1G46";
            };
            class Unhide_vis_optic_d_tkn4 {
                source = "hit";
                hitpoint = "Hit_Optic_TKN4S";
            };
            class Unhide_vis_optic_d_1pz3 {
                source = "hit";
                hitpoint = "Hit_Optic_NSVT";
            };
            class Unhide_vis_optic_d_periscope1 {
                source = "hit";
                hitpoint = "Hit_Optic_Periscope1";
            };
            class Unhide_vis_optic_d_periscope2 {
                source = "hit";
                hitpoint = "Hit_Optic_Periscope1";
            };
            class Unhide_vis_optic_d_periscope3 {
                source = "hit";
                hitpoint = "Hit_Optic_Periscope1";
            };
            class Unhide_vis_optic_d_periscope4 {
                source = "hit";
                hitpoint = "Hit_Optic_Periscope1";
            };
            class Unhide_vis_lwr_d_1 {
                source = "hit";
                hitpoint = "Hit_LWR_1";
            };
            class Unhide_vis_lwr_d_2 {
                source = "hit";
                hitpoint = "Hit_LWR_2";
            };
            class Unhide_vis_lwr_d_3 {
                source = "hit";
                hitpoint = "Hit_LWR_3";
            };
            class Unhide_vis_lwr_d_4 {
                source = "hit";
                hitpoint = "Hit_LWR_4";
            };
            class Unhide_vis_lwr_d_5 {
                source = "hit";
                hitpoint = "Hit_LWR_5";
            };
            class Unhide_vis_lwr_d_6 {
                source = "hit";
                hitpoint = "Hit_LWR_6";
            };
        };
        class Hitpoints: HitPoints {
            class Hit_Optic_Driver {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_driver";
                armorComponent = "Hit_Optic_Driver";
                passThrough = 0;
            };
            class Hit_Optic_Periscope {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_gunperiscope";
                armorComponent = "Hit_Optic_Periscope";
                passThrough = 0;
            };
            class Hit_Optic_1G46 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_1g46";
                armorComponent = "Hit_Optic_1G46";
                passThrough = 0;
            };
            class Hit_Optic_TPN4 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_TPN4";
                armorComponent = "Hit_Optic_ESSA";
                passThrough = 0;
            };
            class Hit_Optic_ESSA {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_essa";
                armorComponent = "Hit_Optic_ESSA";
                passThrough = 0;
            };
            class Hit_Optic_NSVT {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_1pz3";
                armorComponent = "Hit_Optic_NSVT";
                passThrough = 0;
            };
            class Hit_Optic_TKN4S {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_tkn4s";
                armorComponent = "Hit_Optic_TKN4S";
                passThrough = 0;
            };
            class Hit_Optic_Periscope1 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_periscope1";
                armorComponent = "Hit_Optic_Periscope1";
                passThrough = 0;
            };
            class Hit_Optic_Periscope2 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_periscope2";
                armorComponent = "Hit_Optic_Periscope2";
                passThrough = 0;
            };
            class Hit_Optic_Periscope3 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_periscope3";
                armorComponent = "Hit_Optic_Periscope3";
                passThrough = 0;
            };
            class Hit_Optic_Periscope4 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optic_periscope4";
                armorComponent = "Hit_Optic_Periscope4";
                passThrough = 0;
            };
            class Hit_Shtora_L {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_shtora_l";
                armorComponent = "Hit_Shtora_L";
                passThrough = 0;
            };
            class Hit_Shtora_R {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_shtora_r";
                armorComponent = "Hit_Shtora_R";
                passThrough = 0;
            };
            class Hit_LWR_1 {
                armor = -20;
                explosionShielding = 0;
                name = "";
                visual = "vis_lwr_1";
                armorComponent = "aps_s1";
                passThrough = 0;
            };
            class Hit_LWR_2 {
                armor = -20;
                explosionShielding = 0;
                name = "";
                visual = "vis_lwr_2";
                armorComponent = "aps_s2";
                passThrough = 0;
            };
            class Hit_LWR_3 {
                armor = -20;
                explosionShielding = 0;
                name = "";
                visual = "vis_lwr_3";
                armorComponent = "aps_s3";
                passThrough = 0;
            };
            class Hit_LWR_4 {
                armor = -20;
                explosionShielding = 0;
                name = "";
                visual = "vis_lwr_4";
                armorComponent = "aps_s4";
                passThrough = 0;
            };
            class Hit_LWR_5 {
                armor = -20;
                explosionShielding = 0;
                name = "";
                visual = "vis_lwr_5";
                armorComponent = "aps_s5";
                passThrough = 0;
            };
            class Hit_LWR_6 {
                armor = -20;
                explosionShielding = 0;
                name = "";
                visual = "vis_lwr_6";
                armorComponent = "aps_s6";
                passThrough = 0;
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                maxHorizontalRotSpeed = 0.48;
                weapons[] = {
                    "rhs_weap_2a46m_4",
                    "rhs_weap_pkt",
                    "rhs_weap_902b",
                    "rhs_weap_fcs"
                };
                magazines[] = {
                    "rhs_mag_3bm46_8",
                    "rhs_mag_3bk31_3",
                    "rhs_mag_3of26_7",
                    "rhs_mag_9m119_4",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_3d17_12",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
                turretInfoType = "rhs_gui_optic_t90_rangefinder";
                class OpticsIn {
                    class day1 {
                        camPos = "view_1g46";
                        hitpoint = "Hit_Optic_1G46";
                        opticsDisplayName = "DAY";
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.179487;
                        minFov = 0.179487;
                        maxFov = 0.179487;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1g46.p3d";
                        gunnerOpticsEffect[] = {"TankCommanderOptics1", "OpticsBlur2", "OpticsCHAbera3"};
                    };
                    class day2: day1 {
                        opticsDisplayName = "DAYZOOM";
                        initFov = 0.0583333;
                        minFov = 0.0583333;
                        maxFov = 0.0583333;
                        visionMode[] = {"Normal"};
                    };
                    class Periscope: day1 {
                        camPos = "view_periscope";
                        hitpoint = "Hit_Optic_Periscope";
                        opticsDisplayName = "PERISCOPE";
                        initFov = 0.466667;
                        minFov = 0.466667;
                        maxFov = 0.466667;
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
                        gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera2"};
                    };
                    class night3: day1 {
                        camPos = "view_tpn4";
                        hitpoint = "Hit_Optic_tpn4";
                        opticsDisplayName = "NIGHT";
                        initFov = 0.1;
                        minFov = 0.1;
                        maxFov = 0.1;
                        visionMode[] = {"NVG"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_empty";
                        gunnerOpticsEffect[] = {"TankCommanderOptics1", "OpticsBlur2", "OpticsCHAbera3"};
                    };
                };
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        gun = "obsGun";
                        animationSourceGun = "obsGun";
                        weapons[] = {"rhs_weap_nsvt_t72"};
                        magazines[] = {"rhs_mag_127x108mm_150", "rhs_mag_127x108mm_150"};
                        discreteDistance[] = {
                            100,
                            200,
                            300,
                            400,
                            500,
                            600,
                            800,
                            900,
                            1000,
                            1100,
                            1200,
                            1400,
                            1500,
                            1800,
                            1900,
                            2000
                        };
                        discreteDistanceInitIndex = 2;
                        memoryPointGun = "mg_end";
                        gunBeg = "mg_end";
                        gunEnd = "mg_start";
                        minElev = -7;
                        maxElev = 60;
                        minTurn = -180;
                        maxTurn = 180;
                        initElev = 0;
                        LodTurnedOut = 0;
                        turretInfoType = "rhs_gui_optic_TKN4S_rangefinder";
                        gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                        gunnerOpticsEffect[] = {
                            "TankGunnerOptics1",
                            "BWTV",
                            "OpticsBlur2",
                            "OpticsCHAbera3"
                        };
                        class OpticsIn {
                            class day1aa {
                                camPos = "commanderview_aa";
                                hitpoint = "Hit_Optic_NSVT";
                                opticsDisplayName = "AA";
                                initAngleX = 0;
                                minAngleX = -30;
                                maxAngleX = 30;
                                initAngleY = 0;
                                minAngleY = -100;
                                maxAngleY = 100;
                                initFov = 0.291667;
                                minFov = 0.291667;
                                maxFov = 0.291667;
                                visionMode[] = {"Normal"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pzu5.p3d";
                                gunnerOpticsEffect[] = {"OpticsBlur2", "OpticsCHAbera3"};
                            };
                            class day1: day1aa {
                                camPos = "commanderview";
                                hitpoint = "Hit_Optic_TKN4S";
                                opticsDisplayName = "DAY";
                                initFov = 0.7;
                                minFov = 0.7;
                                maxFov = 0.7;
                                visionMode[] = {"Normal"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn4s.p3d";
                                gunnerOpticsEffect[] = {
                                    "TankGunnerOptics1",
                                    "BWTV",
                                    "OpticsBlur2",
                                    "OpticsCHAbera3"
                                };
                            };
                            class day2: day1 {
                                opticsDisplayName = "DAYZOOM";
                                initFov = 0.0875;
                                minFov = 0.0875;
                                maxFov = 0.0875;
                                visionMode[] = {"Normal"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn4s_zoom.p3d";
                                gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera3"};
                            };
                            class night3: day1 {
                                opticsDisplayName = "NIGHT";
                                initFov = 0.1;
                                minFov = 0.1;
                                maxFov = 0.1;
                                visionMode[] = {"NVG"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_empty";
                                gunnerOpticsEffect[] = {"TankCommanderOptics1", "OpticsBlur2", "OpticsCHAbera3"};
                            };
                        };
                        outGunnerMayFire = 0;
                        inGunnerMayFire = 1;
                        gunnerAction = "passenger_inside_6";
                        gunnerInAction = "rhs_t90_commander";
                        personTurretAction = "passenger_inside_6";
                        selectionFireAnim = "zasleh4";
                        lockWhenDriverOut = 0;
                        maxHorizontalRotSpeed = 0.9;
                        maxVerticalRotSpeed = 0.47;
                    };
                    delete CommanderMG;
                };
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_t72\data\periscope.rvmat",
                "rhsafrf\addons\rhs_t72\data\periscope_damage.rvmat",
                "rhsafrf\addons\rhs_t72\data\periscope_destroyed.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t90a_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t90a_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t90a_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t90parts.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t90parts.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t90parts.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dazzler.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_dazzler.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_dazzler.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_04.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_04.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_04.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_05.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_05.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_05.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72c_tracks.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72c_tracks.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72c_tracks.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_turret.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_turret.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_turret.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_A.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_A.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_destroy.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_02.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_dam_bmd4_02.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_destr_bmd4_02.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class UserActions {};
    };
    class rhs_t90a_tv: rhs_t90_tv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t90a_tv.paa";
        displayName = "$STR_T90A_Name";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
        model = "\rhsafrf\addons\rhs_t72\rhs_t90a";
        picture = "\rhsafrf\addons\rhs_t72\icons\t90a_ca.paa";
        normalSpeedForwardCoef = 0.75;
        slowSpeedForwardCoef = 0.25;
        fuelCapacity = 29.5;
        RHS_fuelCapacity = 1200;
        brakeIdleSpeed = 1.78;
        maxSpeed = 68;
        torqueCurve[] = {
            {0, 0},
            {0.478261, 0.853329},
            {0.521739, 0.986803},
            {0.565217, 1},
            {0.608696, 1},
            {0.695652, 0.980804},
            {0.869565, 0.884823},
            {1.43478, 0}
        };
        engineMOI = 17;
        enginePower = 736;
        peakTorque = 3920;
        minOmega = 80;
        maxOmega = 240.86;
        idleRPM = 800;
        redRPM = 2300;
        changeGearOmegaRatios[] = {
            1,
            0.434783,
            0.434783,
            0,
            0.956522,
            0.434783,
            0.956522,
            0.782609,
            0.913043,
            0.782609,
            0.913043,
            0.782609,
            0.869565,
            0.73913,
            0.826087,
            0.695652,
            1,
            0.608696
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -16.35,
                "N",
                0,
                "D1",
                8.173,
                "D2",
                4.4,
                "D3",
                3.485,
                "D4",
                2.787,
                "D5",
                2.027,
                "D6",
                1.467,
                "D7",
                1
            };
            TransmissionRatios[] = {"High", 9.05};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
            transmissionDelay = 0.1;
        };
        class Wheels: Wheels {
            class L2: L2 {
                width = 0.504;
                MOI = 17.069;
                sprungMass = -1;
                dampingRate = 3143;
                dampingRateInAir = 3143;
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
            class L5: L2 {
                boneName = "wheel_podkolol4";
                center = "wheel_1_5_axis";
                boundary = "wheel_1_5_bound";
            };
            class L6: L2 {
                boneName = "wheel_podkolol5";
                center = "wheel_1_6_axis";
                boundary = "wheel_1_6_bound";
            };
            class L7: L2 {
                boneName = "wheel_podkolol6";
                center = "wheel_1_7_axis";
                boundary = "wheel_1_7_bound";
            };
            class L9: L2 {
                boneName = "wheel_podkolol9";
                center = "wheel_1_9_axis";
                boundary = "wheel_1_9_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class L1: L2 {
                boneName = "";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class R2: L2 {
                boneName = "wheel_podkolop1";
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                side = "right";
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
            class R9: R2 {
                boneName = "wheel_podkolop9";
                center = "wheel_2_9_axis";
                boundary = "wheel_2_9_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class R1: R2 {
                boneName = "";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
        };
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t90parts_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t90a_02_co.paa",
            "",
            "rhsafrf\addons\rhs_t72\data\rhs_dazzler_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_dazzler_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        class textureSources: textureSources {
            class standard: standard {
                textures[] = {
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t90parts_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t90a_02_co.paa",
                    "",
                    "rhsafrf\addons\rhs_t72\data\rhs_dazzler_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_dazzler_co.paa"
                };
            };
            class rhs_Sand: rhs_Sand {
                textures[] = {
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_01_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_02_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t90parts_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t90a_02_sand_co.paa",
                    "",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_dazzler_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_dazzler_sand_co.paa"
                };
            };
        };
        receiveRemoteTargets = 1;
        reportRemoteTargets = 1;
        reportOwnPosition = 1;
        crew = "rhs_msv_emr_armoredcrew";
        rhs_aps_shtora = 1;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                maxHorizontalRotSpeed = 0.88;
                weapons[] = {
                    "rhs_weap_2a46m_5",
                    "rhs_weap_pkt",
                    "rhs_weap_902b",
                    "rhs_weap_fcs"
                };
                magazines[] = {
                    "rhs_mag_3bm46_8",
                    "rhs_mag_3bk31_3",
                    "rhs_mag_3of26_7",
                    "rhs_mag_9m119_4",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_3d17_12",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
                turretInfoType = "RHS_RscWeaponPlissa_T90_FCS";
                class OpticsIn {
                    class Periscope: ViewOptics {
                        camPos = "view_periscope";
                        hitpoint = "Hit_Optic_Periscope";
                        opticsDisplayName = "PERISCOPE";
                        minFov = 0.466667;
                        maxFov = 0.466667;
                        initFov = 0.466667;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
                    };
                    class day1: Periscope {
                        camPos = "view_1g46";
                        hitpoint = "Hit_Optic_1G46";
                        opticsDisplayName = "DAY";
                        initFov = 0.175;
                        minFov = 0.175;
                        maxFov = 0.175;
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1g46.p3d";
                    };
                    class day2: day1 {
                        opticsDisplayName = "DAYZOOM";
                        initFov = 0.0583333;
                        minFov = 0.0583333;
                        maxFov = 0.0583333;
                        visionMode[] = {"Normal"};
                    };
                    class thermal1: day1 {
                        camPos = "gunnerview2";
                        hitpoint = "Hit_Optic_ESSA";
                        opticsDisplayName = "TI1";
                        initFov = 0.466667;
                        minFov = 0.466667;
                        maxFov = 0.466667;
                        visionMode[] = {"Ti"};
                        thermalMode[] = {0, 1};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_sosnau.p3d";
                    };
                    class thermal2: thermal1 {
                        opticsDisplayName = "TI2";
                        initFov = 0.155556;
                        minFov = 0.155556;
                        maxFov = 0.155556;
                    };
                    class thermal3: thermal2 {
                        opticsDisplayName = "TI3";
                        initFov = 0.0388889;
                        minFov = 0.0388889;
                        maxFov = 0.0388889;
                    };
                    class thermal4: thermal3 {
                        opticsDisplayName = "AUTOTRACK";
                        directionStabilized = 1;
                    };
                };
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        class Components {
                            class VehicleSystemsDisplayManagerComponentLeft {
                                class EmptyDisplay {
                                    componentType = "EmptyDisplayComponent";
                                };
                                class CrewDisplay {
                                    componentType = "CrewDisplayComponent";
                                    resource = "RscCustomInfoCrew";
                                };
                                class MinimapDisplay {
                                    componentType = "MinimapDisplayComponent";
                                    resource = "RscCustomInfoMiniMap";
                                };
                                class VehiclePrimaryGunnerDisplay {
                                    componentType = "TransportFeedDisplayComponent";
                                    source = "PrimaryGunner";
                                };
                            };
                            class VehicleSystemsDisplayManagerComponentRight {
                                class EmptyDisplay {
                                    componentType = "EmptyDisplayComponent";
                                };
                                class CrewDisplay {
                                    componentType = "CrewDisplayComponent";
                                    resource = "RscCustomInfoCrew";
                                };
                                class MinimapDisplay {
                                    componentType = "MinimapDisplayComponent";
                                    resource = "RscCustomInfoMiniMap";
                                };
                                class VehiclePrimaryGunnerDisplay {
                                    componentType = "TransportFeedDisplayComponent";
                                    source = "PrimaryGunner";
                                };
                            };
                        };
                    };
                    delete CommanderMG;
                };
            };
        };
        class AnimationSources: AnimationSources {
            class reload_source {
                weapon = "rhs_weap_2a46m_5";
                source = "reload";
            };
            class reload_magazine_source: reload_source {
                source = "reloadMagazine";
            };
            class muzzle_rot_cannon: reload_source {
                source = "ammorandom";
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                killed = "[_this select 0,'rhs_Wreck_T90a_turret_F'] call rhs_fnc_turretBlow";
            };
        };
    };
    class rhs_t90saa_tv: rhs_t90a_tv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t90saa_tv.paa";
        displayName = "$STR_T90SAA_Name";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
        model = "\rhsafrf\addons\rhs_t72\rhs_t90sa_a";
        picture = "\rhsafrf\addons\rhs_t72\icons\t90a_ca.paa";
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t90parts_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t90a_02_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t90sa_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        class textureSources: textureSources {
            class standard: standard {
                textures[] = {
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t90parts_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t90a_02_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t90sa_co.paa"
                };
            };
            class rhs_Sand: rhs_Sand {
                textures[] = {
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_01_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_02_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t90parts_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t90a_02_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t90sa_sand_co.paa"
                };
            };
        };
        class HitPoints: Hitpoints {
            class era_1_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_t72\data\periscope.rvmat",
                "rhsafrf\addons\rhs_t72\data\periscope_damage.rvmat",
                "rhsafrf\addons\rhs_t72\data\periscope_destroyed.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t90a_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t90a_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t90a_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t90parts.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t90parts.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t90parts.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dazzler.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_dazzler.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_dazzler.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_04.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_04.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_04.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_05.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_05.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_05.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72c_tracks.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72c_tracks.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72c_tracks.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_turret.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_turret.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_turret.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_A.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_A.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_destroy.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_02.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_dam_bmd4_02.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_destr_bmd4_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t90sa.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t90sa.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t90sa.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
    };
    class rhs_t90sab_tv: rhs_t90a_tv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t90sab_tv.paa";
        displayName = "$STR_T90SAB_Name";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
        model = "\rhsafrf\addons\rhs_t72\rhs_t90sa_b";
        picture = "\rhsafrf\addons\rhs_t72\icons\rhs_t90sab_ca.paa";
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6",
            "camo7",
            "camo8",
            "camo9",
            "camo10",
            "camo11",
            "n1",
            "n2",
            "n3",
            "i1",
            "i2",
            ""
        };
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t90parts_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t90a_02_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_01_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_02_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t90sa_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t90am_02_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        class textureSources: textureSources {
            class standard: standard {
                textures[] = {
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t90parts_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t90a_02_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_01_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_02_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t90sa_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t90am_02_co.paa"
                };
            };
            class rhs_Sand: rhs_Sand {
                textures[] = {
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_01_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_02_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t90parts_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t90a_02_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_e_01_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_e_02_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t90sa_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t90am_02_sand_co.paa"
                };
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_t72\data\periscope.rvmat",
                "rhsafrf\addons\rhs_t72\data\periscope_damage.rvmat",
                "rhsafrf\addons\rhs_t72\data\periscope_destroyed.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t90a_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t90a_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t90a_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t90parts.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t90parts.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t90parts.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dazzler.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_dazzler.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_dazzler.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_04.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_04.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_04.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_05.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_05.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_05.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72c_tracks.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72c_tracks.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72c_tracks.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_turret.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_turret.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_turret.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_A.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_A.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\turret_destroy.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_02.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_dam_bmd4_02.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_destr_bmd4_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t90sa.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t90sa.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t90sa.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_e_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_e_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_e_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_e_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t90am_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t90am_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t90am_02.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class DriverOpticsIn {
            class OpticView: ViewPilot {
                hitpoint = "Hit_Optic_Driver";
                initFov = 0.7;
                minFov = 0.7;
                maxFov = 0.7;
                OpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5";
            };
            class Rear: OpticView {
                camPos = "view_rear";
                camDir = "view_rear_dir";
                hitpoint = "Hit_Optic_Driver_Rear";
                OpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_sosnau_dcam";
            };
        };
        class AnimationSources: AnimationSources {
            class hide_hull_slats {
                displayName = "Show Slat Cage (Hull)";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 1;
            };
            class hide_log {
                displayName = "Show Wooden Log";
                source = "user";
                animPeriod = 0.000001;
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
            class era_38_source {
                source = "Hit";
                hitpoint = "era_38_hitpoint";
            };
            class era_39_source {
                source = "Hit";
                hitpoint = "era_39_hitpoint";
            };
            class era_40_source {
                source = "Hit";
                hitpoint = "era_40_hitpoint";
            };
            class era_41_source {
                source = "Hit";
                hitpoint = "era_41_hitpoint";
            };
            class era_42_source {
                source = "Hit";
                hitpoint = "era_42_hitpoint";
            };
            class era_43_source {
                source = "Hit";
                hitpoint = "era_43_hitpoint";
            };
            class era_44_source {
                source = "Hit";
                hitpoint = "era_44_hitpoint";
            };
            class era_45_source {
                source = "Hit";
                hitpoint = "era_45_hitpoint";
            };
            class era_46_source {
                source = "Hit";
                hitpoint = "era_46_hitpoint";
            };
            class era_47_source {
                source = "Hit";
                hitpoint = "era_47_hitpoint";
            };
            class era_48_source {
                source = "Hit";
                hitpoint = "era_48_hitpoint";
            };
            class era_49_source {
                source = "Hit";
                hitpoint = "era_49_hitpoint";
            };
            class era_50_source {
                source = "Hit";
                hitpoint = "era_50_hitpoint";
            };
            class ERA_51_source {
                source = "Hit";
                hitpoint = "SLAT_51_hitpoint";
            };
            class ERA_52_source {
                source = "Hit";
                hitpoint = "SLAT_52_hitpoint";
            };
            class ERA_53_source {
                source = "Hit";
                hitpoint = "SLAT_53_hitpoint";
            };
            class ERA_54_source {
                source = "Hit";
                hitpoint = "SLAT_54_hitpoint";
            };
        };
        class HitPoints: Hitpoints {
            class era_1_hitpoint {
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K1";
                armor = -80;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_K5";
                armor = -100;
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
            class era_38_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e38";
                armorComponent = "e38";
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
                        position = "fx_e38";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e38";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e38";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e38";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_39_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e39";
                armorComponent = "e39";
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
                        position = "fx_e39";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e39";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e39";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e39";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_40_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e40";
                armorComponent = "e40";
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
                        position = "fx_e40";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e40";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e40";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e40";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_41_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e41";
                armorComponent = "e41";
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
                        position = "fx_e41";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e41";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e41";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e41";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_42_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e42";
                armorComponent = "e42";
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
                        position = "fx_e42";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e42";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e42";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e42";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_43_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e43";
                armorComponent = "e43";
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
                        position = "fx_e43";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e43";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e43";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e43";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_44_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e44";
                armorComponent = "e44";
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
                        position = "fx_e44";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e44";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e44";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e44";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_45_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e45";
                armorComponent = "e45";
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
                        position = "fx_e45";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e45";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e45";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e45";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_46_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e46";
                armorComponent = "e46";
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
                        position = "fx_e46";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e46";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e46";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e46";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_47_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e47";
                armorComponent = "e47";
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
                        position = "fx_e47";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e47";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e47";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e47";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_48_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e48";
                armorComponent = "e48";
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
                        position = "fx_e48";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e48";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e48";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e48";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_49_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e49";
                armorComponent = "e49";
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
                        position = "fx_e49";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e49";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e49";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e49";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_50_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e50";
                armorComponent = "e50";
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
                        position = "fx_e50";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e50";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e50";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e50";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class SLAT_51_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e51";
                armorComponent = "e51";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_52_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e52";
                armorComponent = "e52";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_53_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e53";
                armorComponent = "e53";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_54_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e54";
                armorComponent = "e54";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
        };
    };
    class rhs_t90am_tv: rhs_t90_tv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t90am_tv.paa";
        displayName = "$STR_T90AM_Name";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
        model = "\rhsafrf\addons\rhs_t72\rhs_t90am";
        picture = "\rhsafrf\addons\rhs_t72\icons\rhs_t90am_ca.paa";
        normalSpeedForwardCoef = 0.75;
        slowSpeedForwardCoef = 0.25;
        fuelCapacity = 29.5;
        RHS_fuelCapacity = 1200;
        brakeIdleSpeed = 1.78;
        maxSpeed = 70;
        torqueCurve[] = {
            {0, 0},
            {0.478261, 0.853329},
            {0.521739, 0.986803},
            {0.565217, 1},
            {0.608696, 1},
            {0.695652, 0.980804},
            {0.869565, 0.884823},
            {1.43478, 0}
        };
        engineMOI = 17;
        enginePower = 831;
        peakTorque = 4821;
        minOmega = 80;
        maxOmega = 240.86;
        idleRPM = 800;
        redRPM = 2300;
        changeGearOmegaRatios[] = {
            1,
            0.434783,
            0.434783,
            0,
            0.956522,
            0.434783,
            0.956522,
            0.782609,
            0.913043,
            0.782609,
            0.913043,
            0.782609,
            0.869565,
            0.73913,
            0.826087,
            0.695652,
            1,
            0.608696
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -7.35,
                "N",
                0,
                "D1",
                8.173,
                "D2",
                4.4,
                "D3",
                3.485,
                "D4",
                2.787,
                "D5",
                2.027,
                "D6",
                1.467,
                "D7",
                1
            };
            TransmissionRatios[] = {"High", 9.05};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
            transmissionDelay = 0.1;
        };
        class Wheels: Wheels {
            class L2: L2 {
                width = 0.504;
                MOI = 17.069;
                sprungMass = -1;
                dampingRate = 3143;
                dampingRateInAir = 3143;
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
            class L5: L2 {
                boneName = "wheel_podkolol4";
                center = "wheel_1_5_axis";
                boundary = "wheel_1_5_bound";
            };
            class L6: L2 {
                boneName = "wheel_podkolol5";
                center = "wheel_1_6_axis";
                boundary = "wheel_1_6_bound";
            };
            class L7: L2 {
                boneName = "wheel_podkolol6";
                center = "wheel_1_7_axis";
                boundary = "wheel_1_7_bound";
            };
            class L9: L2 {
                boneName = "wheel_podkolol9";
                center = "wheel_1_9_axis";
                boundary = "wheel_1_9_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class L1: L2 {
                boneName = "";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class R2: L2 {
                boneName = "wheel_podkolop1";
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                side = "right";
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
            class R9: R2 {
                boneName = "wheel_podkolop9";
                center = "wheel_2_9_axis";
                boundary = "wheel_2_9_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class R1: R2 {
                boneName = "";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
        };
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6",
            "camo7",
            "camo8",
            "camo9",
            "camo10",
            "camo11",
            "n1",
            "n2",
            "n3",
            "i1",
            "i2",
            ""
        };
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t90am_01_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t90am_02_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_01_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_02_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t90parts_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t90a_02_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        class textureSources: textureSources {
            class standard: standard {
                textures[] = {
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t90am_01_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t90am_02_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_01_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_02_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t90parts_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t90a_02_co.paa"
                };
            };
            class rhs_Sand: rhs_Sand {
                textures[] = {
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_01_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_02_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t90am_01_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t90am_02_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_e_01_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_e_02_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t90parts_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t90a_02_sand_co.paa"
                };
            };
        };
        crew = "rhs_msv_emr_armoredcrew";
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_e_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_e_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_e_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_e_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_e_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_e_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_04.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_04.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_04.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t90am_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t90am_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t90am_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t90am_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t90am_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t90am_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_01.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_dam_bmp3_01.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_destr_bmp3.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t90parts.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t90parts.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t90parts.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t90a_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t90a_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t90a_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72c_tracks.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72c_tracks.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72c_tracks.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        rhs_aps_shtora = 1;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                maxHorizontalRotSpeed = 1;
                weapons[] = {
                    "rhs_weap_2a46m_5",
                    "rhs_weap_pkt",
                    "rhs_weap_902b",
                    "rhs_weap_fcs"
                };
                magazines[] = {
                    "rhs_mag_3bm46_8",
                    "rhs_mag_3bk31_3",
                    "rhs_mag_3of26_7",
                    "rhs_mag_9m119_4",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_3d17_12",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
                turretInfoType = "RHS_RscWeaponSosnaU_FCS";
                class OpticsIn {
                    class Wide: ViewOptics {
                        camPos = "gunnerview2";
                        hitpoint = "Hit_Optic_SosnaU";
                        opticsDisplayName = "TI1";
                        initFov = 0.233333;
                        minFov = 0.233333;
                        maxFov = 0.233333;
                        visionMode[] = {"Normal", "Ti"};
                        thermalMode[] = {0, 1};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_sosnau.p3d";
                    };
                    class Medium: Wide {
                        opticsDisplayName = "TI2";
                        initFov = 0.0583333;
                        minFov = 0.0583333;
                        maxFov = 0.0583333;
                    };
                    class Narrow: Medium {
                        opticsDisplayName = "TI3";
                        initFov = 0.0291667;
                        minFov = 0.0291667;
                        maxFov = 0.0291667;
                    };
                    class Narrow2: Narrow {
                        opticsDisplayName = "AUTOTRACK";
                        directionStabilized = 1;
                    };
                };
                class Reflectors {};
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        gun = "obsGun";
                        animationSourceGun = "obsGun";
                        weapons[] = {"rhs_weap_pkt_t90m_RWS"};
                        magazines[] = {"rhs_mag_762x54mm_250", "rhs_mag_762x54mm_250"};
                        discreteDistance[] = {
                            100,
                            200,
                            300,
                            400,
                            500,
                            600,
                            800,
                            900,
                            1000,
                            1100,
                            1200,
                            1400,
                            1500,
                            1800,
                            1900,
                            2000
                        };
                        discreteDistanceInitIndex = 2;
                        memoryPointGun = "mg_end";
                        gunBeg = "mg_end";
                        gunEnd = "mg_start";
                        minElev = -7;
                        maxElev = 50;
                        minTurn = -180;
                        maxTurn = 180;
                        initElev = 0;
                        LodTurnedOut = 0;
                        turretInfoType = "RHS_RscWeaponSosnaU_commander_FCS";
                        gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                        class OpticsIn {
                            class Wide: ViewOptics {
                                camPos = "commanderview";
                                hitpoint = "Hit_Optic_SosnaU";
                                opticsDisplayName = "TI1";
                                initFov = 0.233333;
                                minFov = 0.233333;
                                maxFov = 0.233333;
                                visionMode[] = {"Normal", "Ti"};
                                thermalMode[] = {0, 1};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_sosnau.p3d";
                            };
                            class Medium: Wide {
                                opticsDisplayName = "TI2";
                                initFov = 0.0583333;
                                minFov = 0.0583333;
                                maxFov = 0.0583333;
                            };
                            class Narrow: Medium {
                                opticsDisplayName = "TI3";
                                initFov = 0.0291667;
                                minFov = 0.0291667;
                                maxFov = 0.0291667;
                            };
                        };
                        outGunnerMayFire = 0;
                        inGunnerMayFire = 1;
                        gunnerAction = "passenger_inside_6";
                        gunnerInAction = "rhs_t90_commander";
                        personTurretAction = "passenger_inside_6";
                        selectionFireAnim = "zasleh4";
                        lockWhenDriverOut = 0;
                        maxHorizontalRotSpeed = 0.9;
                        maxVerticalRotSpeed = 0.47;
                    };
                    delete CommanderMG;
                };
            };
        };
        class AnimationSources: AnimationSources {
            class reload_source {
                weapon = "rhs_weap_2a46m_5";
                source = "reload";
            };
            class hide_hull_slats {
                displayName = "Show Slat Cage (Hull)";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 1;
            };
            class hide_log {
                displayName = "Show Wooden Log";
                source = "user";
                animPeriod = 0.000001;
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
            class ERA_18_source {
                source = "Hit";
                hitpoint = "SLAT_18_hitpoint";
            };
            class ERA_19_source {
                source = "Hit";
                hitpoint = "SLAT_19_hitpoint";
            };
            class ERA_20_source {
                source = "Hit";
                hitpoint = "SLAT_20_hitpoint";
            };
            class ERA_21_source {
                source = "Hit";
                hitpoint = "SLAT_21_hitpoint";
            };
            class ERA_22_source {
                source = "Hit";
                hitpoint = "SLAT_22_hitpoint";
            };
            class ERA_23_source {
                source = "Hit";
                hitpoint = "SLAT_23_hitpoint";
            };
            class ERA_24_source {
                source = "Hit";
                hitpoint = "SLAT_24_hitpoint";
            };
            class ERA_25_source {
                source = "Hit";
                hitpoint = "SLAT_25_hitpoint";
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
            class era_38_source {
                source = "Hit";
                hitpoint = "era_38_hitpoint";
            };
            class era_39_source {
                source = "Hit";
                hitpoint = "era_39_hitpoint";
            };
            class era_40_source {
                source = "Hit";
                hitpoint = "era_40_hitpoint";
            };
            class era_41_source {
                source = "Hit";
                hitpoint = "era_41_hitpoint";
            };
            class era_42_source {
                source = "Hit";
                hitpoint = "era_42_hitpoint";
            };
            class era_43_source {
                source = "Hit";
                hitpoint = "era_43_hitpoint";
            };
            class era_44_source {
                source = "Hit";
                hitpoint = "era_44_hitpoint";
            };
            class era_45_source {
                source = "Hit";
                hitpoint = "era_45_hitpoint";
            };
            class era_46_source {
                source = "Hit";
                hitpoint = "era_46_hitpoint";
            };
            class era_47_source {
                source = "Hit";
                hitpoint = "era_47_hitpoint";
            };
            class era_48_source {
                source = "Hit";
                hitpoint = "era_48_hitpoint";
            };
            class era_49_source {
                source = "Hit";
                hitpoint = "era_49_hitpoint";
            };
            class era_50_source {
                source = "Hit";
                hitpoint = "era_50_hitpoint";
            };
            class ERA_51_source {
                source = "Hit";
                hitpoint = "SLAT_51_hitpoint";
            };
            class ERA_52_source {
                source = "Hit";
                hitpoint = "SLAT_52_hitpoint";
            };
            class ERA_53_source {
                source = "Hit";
                hitpoint = "SLAT_53_hitpoint";
            };
            class ERA_54_source {
                source = "Hit";
                hitpoint = "SLAT_54_hitpoint";
            };
            class era_55_source {
                source = "Hit";
                hitpoint = "era_55_hitpoint";
            };
            class era_56_source {
                source = "Hit";
                hitpoint = "era_56_hitpoint";
            };
            class era_57_source {
                source = "Hit";
                hitpoint = "era_57_hitpoint";
            };
            class era_58_source {
                source = "Hit";
                hitpoint = "era_58_hitpoint";
            };
            class era_59_source {
                source = "Hit";
                hitpoint = "era_59_hitpoint";
            };
            class era_60_source {
                source = "Hit";
                hitpoint = "era_60_hitpoint";
            };
            class era_61_source {
                source = "Hit";
                hitpoint = "era_61_hitpoint";
            };
            class era_62_source {
                source = "Hit";
                hitpoint = "era_62_hitpoint";
            };
            class era_63_source {
                source = "Hit";
                hitpoint = "era_63_hitpoint";
            };
            class era_64_source {
                source = "Hit";
                hitpoint = "era_64_hitpoint";
            };
            class era_65_source {
                source = "Hit";
                hitpoint = "era_65_hitpoint";
            };
            class era_66_source {
                source = "Hit";
                hitpoint = "era_66_hitpoint";
            };
        };
        class HitPoints: Hitpoints {
            class era_1_hitpoint {
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
            class SLAT_18_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e18";
                armorComponent = "e18";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_19_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e19";
                armorComponent = "e19";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_20_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e20";
                armorComponent = "e20";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_21_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e21";
                armorComponent = "e21";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_22_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e22";
                armorComponent = "e22";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_23_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e23";
                armorComponent = "e23";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_24_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e24";
                armorComponent = "e24";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_25_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e25";
                armorComponent = "e25";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class era_26_hitpoint {
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
            class era_38_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e38";
                armorComponent = "e38";
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
                        position = "fx_e38";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e38";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e38";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e38";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_39_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e39";
                armorComponent = "e39";
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
                        position = "fx_e39";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e39";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e39";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e39";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_40_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e40";
                armorComponent = "e40";
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
                        position = "fx_e40";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e40";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e40";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e40";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_41_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e41";
                armorComponent = "e41";
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
                        position = "fx_e41";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e41";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e41";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e41";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_42_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e42";
                armorComponent = "e42";
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
                        position = "fx_e42";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e42";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e42";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e42";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_43_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e43";
                armorComponent = "e43";
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
                        position = "fx_e43";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e43";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e43";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e43";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_44_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e44";
                armorComponent = "e44";
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
                        position = "fx_e44";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e44";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e44";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e44";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_45_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e45";
                armorComponent = "e45";
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
                        position = "fx_e45";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e45";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e45";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e45";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_46_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e46";
                armorComponent = "e46";
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
                        position = "fx_e46";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e46";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e46";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e46";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_47_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e47";
                armorComponent = "e47";
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
                        position = "fx_e47";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e47";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e47";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e47";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_48_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e48";
                armorComponent = "e48";
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
                        position = "fx_e48";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e48";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e48";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e48";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_49_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e49";
                armorComponent = "e49";
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
                        position = "fx_e49";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e49";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e49";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e49";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_50_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e50";
                armorComponent = "e50";
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
                        position = "fx_e50";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e50";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e50";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e50";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class SLAT_51_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e51";
                armorComponent = "e51";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_52_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e52";
                armorComponent = "e52";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_53_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e53";
                armorComponent = "e53";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_54_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e54";
                armorComponent = "e54";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class era_55_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e55";
                armorComponent = "e55";
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
                        position = "fx_e55";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e55";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e55";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e55";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_56_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e56";
                armorComponent = "e56";
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
                        position = "fx_e56";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e56";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e56";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e56";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_57_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e57";
                armorComponent = "e57";
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
                        position = "fx_e57";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e57";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e57";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e57";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_58_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e58";
                armorComponent = "e58";
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
                        position = "fx_e58";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e58";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e58";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e58";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_59_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e59";
                armorComponent = "e59";
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
                        position = "fx_e59";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e59";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e59";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e59";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_60_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e60";
                armorComponent = "e60";
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
                        position = "fx_e60";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e60";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e60";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e60";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_61_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e61";
                armorComponent = "e61";
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
                        position = "fx_e61";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e61";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e61";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e61";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_62_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e62";
                armorComponent = "e62";
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
                        position = "fx_e62";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e62";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e62";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e62";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_63_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e63";
                armorComponent = "e63";
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
                        position = "fx_e63";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e63";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e63";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e63";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_64_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e64";
                armorComponent = "e64";
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
                        position = "fx_e64";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e64";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e64";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e64";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_65_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e65";
                armorComponent = "e65";
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
                        position = "fx_e65";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e65";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e65";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e65";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_66_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e66";
                armorComponent = "e66";
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
                        position = "fx_e66";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e66";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e66";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e66";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                killed = "[_this select 0,'rhs_Wreck_T90am_turret_F'] call rhs_fnc_turretBlow";
            };
        };
    };
    class rhs_t90sm_tv: rhs_t90am_tv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t90sm_tv.paa";
        displayName = "$STR_T90SM_Name";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
        model = "\rhsafrf\addons\rhs_t72\rhs_t90sm";
        picture = "\rhsafrf\addons\rhs_t72\icons\rhs_t90sm_ca.paa";
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6",
            "camo7",
            "camo8",
            "camo9",
            "camo10",
            "camo11",
            "n1",
            "n2",
            "n3",
            "i1",
            "i2",
            ""
        };
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t90am_01_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t90am_02_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_01_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_02_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t90parts_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t90a_02_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t90sm_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        class textureSources: textureSources {
            class standard: standard {
                textures[] = {
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t90am_01_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t90am_02_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_01_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_02_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t90parts_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t90a_02_co.paa",
                    "rhsafrf\addons\rhs_t72\data\rhs_t90sm_co.paa"
                };
            };
            class rhs_Sand: rhs_Sand {
                textures[] = {
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_01_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_02_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t90am_01_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t90am_02_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_e_01_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_e_02_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t90parts_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t90a_02_sand_co.paa",
                    "rhsafrf\addons\rhs_t72_camo\data\rhs_t90sm_sand_co.paa"
                };
            };
        };
        crew = "rhs_msv_emr_armoredcrew";
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_e_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_e_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_e_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_e_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_e_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_e_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_e_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_03.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b_04.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_04.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_04.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t90am_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t90am_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t90am_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t90am_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t90am_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t90am_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_01.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_02.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_01.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_dam_bmp3_01.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_destr_bmp3.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t90parts.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t90parts.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t90parts.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t90a_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t90a_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t90a_02.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t72c_tracks.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t72c_tracks.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t72c_tracks.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_t90sm.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_dam_t90sm.rvmat",
                "rhsafrf\addons\rhs_t72\data\rhs_destr_t90sm.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
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
        class DriverOpticsIn {
            class OpticView: ViewPilot {
                hitpoint = "Hit_Optic_Driver";
                initFov = 0.7;
                minFov = 0.7;
                maxFov = 0.7;
                OpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5";
            };
            class Rear: OpticView {
                camPos = "view_rear";
                camDir = "view_rear_dir";
                hitpoint = "Hit_Optic_Driver_Rear";
                initFov = 1;
                minFov = 1;
                maxFov = 1;
                visionMode[] = {"NVG", "Ti"};
                thermalMode[] = {0, 1};
                OpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_sosnau";
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                maxHorizontalRotSpeed = 1;
                weapons[] = {
                    "rhs_weap_2a46m_5",
                    "rhs_weap_pkt",
                    "rhs_weap_902b",
                    "rhs_weap_fcs"
                };
                magazines[] = {
                    "rhs_mag_3bm46_8",
                    "rhs_mag_3bk31_3",
                    "rhs_mag_3of26_7",
                    "rhs_mag_9m119_4",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_3d17_12",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
                class Reflectors {};
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        gun = "obsGun";
                        animationSourceGun = "obsGun";
                        weapons[] = {"rhs_weap_nsvt_t90m_RWS"};
                        magazines[] = {"rhs_mag_127x108mm_150", "rhs_mag_127x108mm_150"};
                        discreteDistance[] = {
                            100,
                            200,
                            300,
                            400,
                            500,
                            600,
                            800,
                            900,
                            1000,
                            1100,
                            1200,
                            1400,
                            1500,
                            1800,
                            1900,
                            2000
                        };
                        discreteDistanceInitIndex = 2;
                        memoryPointGun = "mg_end";
                        gunBeg = "mg_end";
                        gunEnd = "mg_start";
                        minElev = -7;
                        maxElev = 50;
                        minTurn = -180;
                        maxTurn = 180;
                        initElev = 0;
                        LodTurnedOut = 0;
                        turretInfoType = "RHS_RscWeaponSosnaU_FCS";
                        gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                        class OpticsIn {
                            class Wide: ViewOptics {
                                camPos = "commanderview";
                                hitpoint = "Hit_Optic_SosnaU";
                                opticsDisplayName = "TI1";
                                initFov = 0.233333;
                                minFov = 0.233333;
                                maxFov = 0.233333;
                                visionMode[] = {"Normal", "Ti"};
                                thermalMode[] = {0, 1};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_sosnau.p3d";
                            };
                            class Medium: Wide {
                                opticsDisplayName = "TI2";
                                initFov = 0.0583333;
                                minFov = 0.0583333;
                                maxFov = 0.0583333;
                            };
                            class Narrow: Medium {
                                opticsDisplayName = "TI3";
                                initFov = 0.0291667;
                                minFov = 0.0291667;
                                maxFov = 0.0291667;
                            };
                        };
                        outGunnerMayFire = 0;
                        inGunnerMayFire = 1;
                        gunnerInAction = "rhs_t90sm_commander";
                        gunnerAction = "vehicle_turnout_1";
                        personTurretAction = "vehicle_turnout_1";
                        selectionFireAnim = "zasleh4";
                        lockWhenDriverOut = 0;
                        maxHorizontalRotSpeed = 0.9;
                        maxVerticalRotSpeed = 0.47;
                    };
                    delete CommanderMG;
                };
            };
        };
        class AnimationSources: AnimationSources {
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
            class ERA_23_source {
                source = "Hit";
                hitpoint = "SLAT_23_hitpoint";
            };
            class era_24_source {
                source = "Hit";
                hitpoint = "era_24_hitpoint";
            };
            class era_25_source {
                source = "Hit";
                hitpoint = "era_25_hitpoint";
            };
            class ERA_26_source {
                source = "Hit";
                hitpoint = "SLAT_26_hitpoint";
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
            class era_38_source {
                source = "Hit";
                hitpoint = "era_38_hitpoint";
            };
            class era_39_source {
                source = "Hit";
                hitpoint = "era_39_hitpoint";
            };
            class era_40_source {
                source = "Hit";
                hitpoint = "era_40_hitpoint";
            };
            class era_41_source {
                source = "Hit";
                hitpoint = "era_41_hitpoint";
            };
            class era_42_source {
                source = "Hit";
                hitpoint = "era_42_hitpoint";
            };
            class era_43_source {
                source = "Hit";
                hitpoint = "era_43_hitpoint";
            };
            class era_44_source {
                source = "Hit";
                hitpoint = "era_44_hitpoint";
            };
            class era_45_source {
                source = "Hit";
                hitpoint = "era_45_hitpoint";
            };
            class era_46_source {
                source = "Hit";
                hitpoint = "era_46_hitpoint";
            };
            class era_47_source {
                source = "Hit";
                hitpoint = "era_47_hitpoint";
            };
            class era_48_source {
                source = "Hit";
                hitpoint = "era_48_hitpoint";
            };
            class era_49_source {
                source = "Hit";
                hitpoint = "era_49_hitpoint";
            };
            class era_50_source {
                source = "Hit";
                hitpoint = "era_50_hitpoint";
            };
            class ERA_51_source {
                source = "Hit";
                hitpoint = "SLAT_51_hitpoint";
            };
            class ERA_52_source {
                source = "Hit";
                hitpoint = "SLAT_52_hitpoint";
            };
            class ERA_53_source {
                source = "Hit";
                hitpoint = "SLAT_53_hitpoint";
            };
            class ERA_54_source {
                source = "Hit";
                hitpoint = "SLAT_54_hitpoint";
            };
            class ERA_55_source {
                source = "Hit";
                hitpoint = "SLAT_55_hitpoint";
            };
            class ERA_56_source {
                source = "Hit";
                hitpoint = "SLAT_56_hitpoint";
            };
            class ERA_57_source {
                source = "Hit";
                hitpoint = "SLAT_57_hitpoint";
            };
        };
        class HitPoints: HitPoints {
            class era_1_hitpoint {
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
            class SLAT_23_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e23";
                armorComponent = "e23";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class era_24_hitpoint {
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
            class SLAT_26_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e26";
                armorComponent = "e26";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class era_27_hitpoint {
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
                simulation = "RHS_ERA_RELIKT";
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
            class era_38_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e38";
                armorComponent = "e38";
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
                        position = "fx_e38";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e38";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e38";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e38";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_39_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e39";
                armorComponent = "e39";
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
                        position = "fx_e39";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e39";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e39";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e39";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_40_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e40";
                armorComponent = "e40";
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
                        position = "fx_e40";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e40";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e40";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e40";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_41_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e41";
                armorComponent = "e41";
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
                        position = "fx_e41";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e41";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e41";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e41";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_42_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e42";
                armorComponent = "e42";
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
                        position = "fx_e42";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e42";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e42";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e42";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_43_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e43";
                armorComponent = "e43";
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
                        position = "fx_e43";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e43";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e43";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e43";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_44_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e44";
                armorComponent = "e44";
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
                        position = "fx_e44";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e44";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e44";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e44";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_45_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e45";
                armorComponent = "e45";
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
                        position = "fx_e45";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e45";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e45";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e45";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_46_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e46";
                armorComponent = "e46";
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
                        position = "fx_e46";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e46";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e46";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e46";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_47_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e47";
                armorComponent = "e47";
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
                        position = "fx_e47";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e47";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e47";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e47";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_48_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e48";
                armorComponent = "e48";
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
                        position = "fx_e48";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e48";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e48";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e48";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_49_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e49";
                armorComponent = "e49";
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
                        position = "fx_e49";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e49";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e49";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e49";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_50_hitpoint {
                simulation = "RHS_ERA_RELIKT";
                armor = -150;
                material = -1;
                name = "e50";
                armorComponent = "e50";
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
                        position = "fx_e50";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e50";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e50";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e50";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class SLAT_51_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e51";
                armorComponent = "e51";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_52_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e52";
                armorComponent = "e52";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_53_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e53";
                armorComponent = "e53";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_54_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e54";
                armorComponent = "e54";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_55_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e55";
                armorComponent = "e55";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_56_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e56";
                armorComponent = "e56";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
            class SLAT_57_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "e57";
                armorComponent = "e57";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                killed = "[_this select 0,'rhs_Wreck_T90am_turret_F'] call rhs_fnc_turretBlow";
            };
        };
    };
    class ThingX;
    class rhs_Wreck_T72_turret_F: ThingX {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Wreck_T72_turret_F.paa";
        mapSize = 8.56;
        author = "$STR_RHS_AUTHOR_FULL";
        reversed = 1;
        scope = 2;
        scopeCurator = 2;
        displayName = "T-72B Wreck (Turret)";
        model = "\rhsafrf\addons\rhs_t72\rhs_t72b_destTurret";
        icon = "iconObject_1x2";
        vehicleClass = "Wreck";
        destrType = "DestructNo";
    };
    class rhs_Wreck_T90a_turret_F: rhs_Wreck_T72_turret_F {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Wreck_T90a_turret_F.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "T-90A Wreck (Turret)";
        model = "\rhsafrf\addons\rhs_t72\rhs_t90a_destTurret";
    };
    class rhs_Wreck_T90am_turret_F: rhs_Wreck_T72_turret_F {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Wreck_T90am_turret_F.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "T-90A Wreck (Turret)";
        model = "\rhsafrf\addons\rhs_t72\rhs_t90am_destTurret";
    };
};
class CfgNonAIVehicles {
    class ProxyRetex;
    class Proxyrhs_t72b_hull_extra: ProxyRetex {
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6",
            "camo7"
        };
        model = "\rhsafrf\addons\rhs_t72\rhs_t72b_hull_extra";
    };
    class Proxyrhs_t72b_hull2_extra: Proxyrhs_t72b_hull_extra {
        model = "\rhsafrf\addons\rhs_t72\rhs_t72b_hull2_extra";
    };
    class Proxyrhs_t72b3_hull: Proxyrhs_t72b_hull_extra {
        model = "\rhsafrf\addons\rhs_t72\proxy\rhs_t72b3_hull";
    };
    class Proxyrhs_t72b_drivl: Proxyrhs_t72b_hull_extra {
        model = "\rhsafrf\addons\rhs_t72\proxy\rhs_t72b_drivl";
    };
    class Proxyrhs_t72b_drivr: Proxyrhs_t72b_hull_extra {
        model = "\rhsafrf\addons\rhs_t72\proxy\rhs_t72b_drivr";
    };
    class Proxyrhs_t72b_retl: Proxyrhs_t72b_hull_extra {
        model = "\rhsafrf\addons\rhs_t72\proxy\rhs_t72b_retl";
    };
    class Proxyrhs_t72b_retr: Proxyrhs_t72b_hull_extra {
        model = "\rhsafrf\addons\rhs_t72\proxy\rhs_t72b_retr";
    };
    class Proxyrhs_t72b_gun_extra: Proxyrhs_t72b_hull_extra {
        model = "\rhsafrf\addons\rhs_t72\rhs_t72b_gun_extra";
    };
    class Proxyrhs_t72b_comcop_extra: Proxyrhs_t72b_hull_extra {
        model = "\rhsafrf\addons\rhs_t72\rhs_t72b_comcop_extra";
    };
    class Proxyrhs_t72b_turret_extra: Proxyrhs_t72b_hull_extra {
        model = "\rhsafrf\addons\rhs_t72\proxy\rhs_t72b_turret_extra";
    };
    class Proxyrhs_t72b_turret2_extra: Proxyrhs_t72b_hull_extra {
        model = "\rhsafrf\addons\rhs_t72\proxy\rhs_t72b_turret2_extra";
    };
    class Proxyrhs_B3gun_extra: Proxyrhs_t72b_hull_extra {
        model = "\rhsafrf\addons\rhs_t72\rhs_B3gun_extra";
    };
    class Proxyrhs_B3comcop_extra: Proxyrhs_t72b_hull_extra {
        model = "\rhsafrf\addons\rhs_t72\rhs_B3comcop_extra";
    };
    class Proxyrhs_B3turretextra: Proxyrhs_t72b_hull_extra {
        model = "\rhsafrf\addons\rhs_t72\rhs_B3turretextra";
    };
    class Proxyrhs_t72b_latefront: Proxyrhs_t72b_hull_extra {
        model = "\rhsafrf\addons\rhs_t72\rhs_t72b_latefront";
    };
    class Proxyrhs_t72b_veryearly: Proxyrhs_t72b_hull_extra {
        model = "\rhsafrf\addons\rhs_t72\rhs_t72b_veryearly";
    };
    class Proxyrhs_t72b_andbfront: Proxyrhs_t72b_hull_extra {
        model = "\rhsafrf\addons\rhs_t72\data\andbfront\rhs_t72b_andbfront";
    };
    class Proxyrhs_t90a_turretextra: Proxyrhs_t72b_hull_extra {
        model = "\rhsafrf\addons\rhs_t72\rhs_t90a_turretextra";
    };
    class Proxyrhs_t90_comm: Proxyrhs_t72b_hull_extra {
        model = "\rhsafrf\addons\rhs_t72\rhs_t90_comm";
    };
    class Proxyturret_extra_t90: Proxyrhs_t72b_hull_extra {
        model = "\rhsafrf\addons\rhs_t72\turret_extra_t90";
    };
    class Proxyrhs_nsvt_handle_extra: Proxyrhs_t72b_hull_extra {
        model = "\rhsafrf\addons\rhs_t72\rhs_nsvt_handle_extra";
    };
    class Proxyrhs_nsvt_gunmount_extra: Proxyrhs_t72b_hull_extra {
        model = "\rhsafrf\addons\rhs_t72\rhs_nsvt_gunmount_extra";
    };
    class Proxyrhs_nsvt_extra: Proxyrhs_t72b_hull_extra {
        model = "\rhsafrf\addons\rhs_t72\rhs_nsvt_extra";
    };
    class Proxyrhs_t72b_e_hull: Proxyrhs_t72b_hull_extra {
        model = "\rhsafrf\addons\rhs_t72\proxy\rhs_t72b_e_hull";
    };
    class Proxyrhs_t72b_e_turretextra: Proxyrhs_t72b_hull_extra {
        model = "\rhsafrf\addons\rhs_t72\proxy\rhs_t72b_e_turretextra";
    };
};
