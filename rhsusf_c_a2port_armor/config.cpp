class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class m2_doors {
                file = "\rhsusf\addons\rhsusf_c_a2port_armor\scripts\m2_doors.sqf";
                description = "M2 doors open/closed state handling";
            };
            class hatch_control {
                file = "\rhsusf\addons\rhsusf_c_a2port_armor\scripts\rhs_hatch_control.sqf";
                description = "Hatch control";
            };
            class hatch_control_ui_eh {
                file = "\rhsusf\addons\rhsusf_c_a2port_armor\scripts\rhs_hatch_control_ui_eh.sqf";
                description = "Hatch control";
            };
            class turretAction {
                file = "\rhsusf\addons\rhsusf_c_a2port_armor\scripts\rhs_turretAction.sqf";
                description = "Hatch control";
            };
            class m2_handleWeaponVG {
                file = "\rhsusf\addons\rhsusf_c_a2port_armor\scripts\rhs_m2_handleWeaponVG.sqf";
            };
        };
    };
};
class CfgAnimationSourceSounds {
    class ServoRampSound_2;
    class RHS_Ramp: ServoRampSound_2 {
        class DoorMovement {
            loop = 0;
            terminate = 1;
            trigger = "(phase factor[0.01,0.02]) * (phase factor[0.99,0.98])";
            sound0[] = {
                "rhsusf\addons\rhsusf_a2port_armor\data\sounds\ServoRampSound_1",
                1,
                1,
                60
            };
            sound1[] = {
                "rhsusf\addons\rhsusf_a2port_armor\data\sounds\ServoRampSound_2",
                1,
                1,
                60
            };
            sound[] = {"sound0", 0.5, "sound1", 0.5};
        };
    };
};
class RscPicture;
class RscInGameUI {
    class RscUnitInfo;
    class RscWeaponZeroing: RscUnitInfo {
        class WeaponInfoControlsGroupLeft;
    };
    class rhs_m113_hatch: RscWeaponZeroing {
        idd = 300;
        controls[] = {"CA_Zeroing", "RHS_tigr_handler"};
        class RHS_tigr_handler: RscPicture {
            idc = 59999;
        };
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0] call RHSusf_fnc_hatch_control";
    };
};
class CfgPatches {
    class RHS_US_A2Port_Armor {
        requiredAddons[] = {"rhsusf_main", "rhsusf_c_troops", "rhsusf_c_heavyweapons"};
        units[] = {
            "RHS_M2A2",
            "RHS_M2A2_BUSKI",
            "RHS_M2A3",
            "RHS_M2A3_BUSKI",
            "RHS_M2A3_BUSKIII",
            "RHS_M6",
            "RHS_M2A2_wd",
            "RHS_M2A2_BUSKI_wd",
            "RHS_M2A3_wd",
            "RHS_M2A3_BUSKI_wd",
            "RHS_M2A3_BUSKIII_wd",
            "RHS_M6_wd"
        };
        requiredVersion = 1.83;
        weapons[] = {};
        name = "M2 Bradley IFV";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class CfgMovesBasic {
    class Default;
    class DefaultDie;
    class ManActions {
        RHS_M2A2_Commander = "RHS_M2A2_Commander";
        RHS_M2A2_CommanderOUT = "RHS_M2A2_CommanderOUT";
        RHS_M2A2_Driver = "RHS_M2A2_Driver";
        RHS_M2A2_DriverOUT = "RHS_M2A2_DriverOUT";
        RHS_M2A2_Gunner = "RHS_M2A2_Gunner";
        RHS_M2A2_GunnerOUT = "RHS_M2A2_GunnerOUT";
        RHS_M2A3_Commander = "RHS_M2A3_Commander";
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
        class RHS_M2A2_Commander: rhs_crew_in {
            file = "\rhsusf\addons\rhsusf_a2port_armor\data\anim\M2A2_Commander.rtm";
            interpolateTo[] = {"RHS_M2A2_KIA_Commander", 1};
        };
        class RHS_M2A2_CommanderOut: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_armor\data\anim\M2A2_CommanderOut.rtm";
            interpolateTo[] = {"RHS_M2A2_KIA_CommanderOut", 1};
        };
        class RHS_M2A2_KIA_CommanderOut: DefaultDie {
            file = "\rhsusf\addons\rhsusf_a2port_armor\data\anim\M2A2_KIA_CommanderOut";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_M2A2_KIA_Commander: RHS_M2A2_KIA_CommanderOut {
            file = "\rhsusf\addons\rhsusf_a2port_armor\data\anim\M2A2_Commander.rtm";
        };
        class RHS_KIA_M2A2_Gunner: RHS_M2A2_KIA_CommanderOut {
            file = "\rhsusf\addons\rhsusf_a2port_armor\data\anim\M2A2_Gunner.rtm";
        };
        class RHS_M2A2_Gunner: rhs_crew_in {
            file = "\rhsusf\addons\rhsusf_a2port_armor\data\anim\M2A2_Gunner.rtm";
            interpolateTo[] = {"RHS_KIA_M2A2_Gunner", 1};
        };
        class RHS_KIA_M2A2_GunnerOut: RHS_M2A2_KIA_CommanderOut {
            file = "\rhsusf\addons\rhsusf_a2port_armor\data\anim\M2A2_KIA_GunnerOut.rtm";
        };
        class RHS_M2A2_GunnerOut: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_armor\data\anim\M2A2_GunnerOut.rtm";
            interpolateTo[] = {"RHS_KIA_M2A2_GunnerOut", 1};
        };
        class RHS_KIA_M2A2_Driver: RHS_M2A2_KIA_CommanderOut {
            file = "\rhsusf\addons\rhsusf_a2port_armor\data\anim\M2A2_KIA_Driver.rtm";
        };
        class RHS_M2A2_Driver: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_armor\data\anim\M2A2_Driver.rtm";
            interpolateTo[] = {"RHS_KIA_M2A2_Driver", 1};
        };
        class RHS_KIA_M2A2_DriverOut: RHS_M2A2_KIA_CommanderOut {
            file = "\rhsusf\addons\rhsusf_a2port_armor\data\anim\M2A2_KIA_DriverOut.rtm";
        };
        class RHS_M2A2_DriverOut: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_armor\data\anim\M2A2_DriverOut.rtm";
            interpolateTo[] = {"RHS_KIA_M2A2_DriverOut", 1};
        };
        class RHS_KIA_M2A3_Commander: RHS_M2A2_KIA_CommanderOut {
            file = "\rhsusf\addons\rhsusf_a2port_armor\data\anim\M2A3_Commander.rtm";
        };
        class RHS_M2A3_Commander: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_armor\data\anim\M2A3_Commander.rtm";
            interpolateTo[] = {"RHS_KIA_M2A3_Commander", 1};
        };
    };
};
class CfgVehicles {
    class LandVehicle;
    class Tank: LandVehicle {
        class NewTurret;
        class Sounds;
        class HitPoints;
        class CommanderOptics;
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
    };
    class APC_Tracked_03_base_F: Tank_F {};
    class RHS_M2A2_Base: APC_Tracked_03_base_F {
        dlc = "RHS_USAF";
        category = "Armored";
        destrType = "DestructDefault";
        scope = 0;
        soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out", 0.56234133, 1};
        soundGetOut[] = {
            "A3\sounds_f\vehicles\armor\noises\get_in_out",
            0.56234133,
            1,
            20
        };
        soundDammage[] = {"", 0.56234133, 1};
        soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_start", 0.63095737, 1};
        soundEngineOnExt[] = {
            "A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_start",
            1,
            1,
            200
        };
        soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_stop", 0.63095737, 1};
        soundEngineOffExt[] = {
            "A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_stop",
            1,
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
                    "A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_1",
                    0.56234133,
                    1,
                    160
                };
                frequency = "0.3	+	((rpm/	2600) factor[(100/	2600),(250/	2600)])*0.1";
                volume = "engineOn*camPos*(((rpm/	2600) factor[(100/	2600),(400/	2600)])	*	((rpm/	2600) factor[(730/	2600),(610/	2600)]))";
            };
            class Engine {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_2",
                    0.7943282,
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	2600) factor[(600/	2600),(1100/	2600)])*0.2";
                volume = "engineOn*camPos*(((rpm/	2600) factor[(550/	2600),(700/	2600)])	*	((rpm/	2600) factor[(1100/	2600),(760/	2600)]))";
            };
            class Engine1_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_3",
                    0.8912509,
                    1,
                    260
                };
                frequency = "0.8	+	((rpm/	2600) factor[(770/	2600),(1400/	2600)])*0.2";
                volume = "engineOn*camPos*(((rpm/	2600) factor[(720/	2600),(1060/	2600)])	*	((rpm/	2600) factor[(1400/	2600),(1180/	2600)]))";
            };
            class Engine2_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_4",
                    1,
                    1,
                    280
                };
                frequency = "0.8	+	((rpm/	2600) factor[(1150/	2600),(1700/	2600)])*0.2";
                volume = "engineOn*camPos*(((rpm/	2600) factor[(1130/	2600),(1370/	2600)])	*	((rpm/	2600) factor[(1700/	2600),(1500/	2600)]))";
            };
            class Engine3_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_5",
                    1.1220185,
                    1,
                    300
                };
                frequency = "0.8	+	((rpm/	2600) factor[(1500/	2600),(2100/	2600)])*0.1";
                volume = "engineOn*camPos*(((rpm/	2600) factor[(1460/	2600),(1670/	2600)])	*	((rpm/	2600) factor[(2100/	2600),(1800/	2600)]))";
            };
            class Engine4_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_6",
                    1.2589254,
                    1,
                    320
                };
                frequency = "0.8	+	((rpm/	2600) factor[(1800/	2600),(2600/	2600)])*0.1";
                volume = "engineOn*camPos*((rpm/	2600) factor[(1750/	2600),(2050/	2600)])";
            };
            class IdleThrust {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_1",
                    1,
                    1,
                    250
                };
                frequency = "0.8	+	((rpm/	2600) factor[(500/	2600),(650/	2600)])*0.15";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(100/	2600),(400/	2600)])	*	((rpm/	2600) factor[(730/	2600),(610/	2600)]))";
            };
            class EngineThrust {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_2",
                    1.1220185,
                    1,
                    280
                };
                frequency = "0.8	+	((rpm/	2600) factor[(600/	2600),(1100/	2600)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(550/	2600),(700/	2600)])	*	((rpm/	2600) factor[(1100/	2600),(760/	2600)]))";
            };
            class Engine1_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_3",
                    1.2589254,
                    1,
                    300
                };
                frequency = "0.8	+	((rpm/	2600) factor[(770/	2600),(1400/	2600)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(720/	2600),(1060/	2600)])	*	((rpm/	2600) factor[(1400/	2600),(1180/	2600)]))";
            };
            class Engine2_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_4",
                    1.4125376,
                    1,
                    340
                };
                frequency = "0.8	+	((rpm/	2600) factor[(1150/	2600),(1700/	2600)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(1130/	2600),(1370/	2600)])	*	((rpm/	2600) factor[(1700/	2600),(1500/	2600)]))";
            };
            class Engine3_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_5",
                    1.7782794,
                    1,
                    360
                };
                frequency = "0.8	+	((rpm/	2600) factor[(1500/	2600),(2100/	2600)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(1460/	2600),(1670/	2600)])	*	((rpm/	2600) factor[(2100/	2600),(1800/	2600)]))";
            };
            class Engine4_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_6",
                    1.9952624,
                    1,
                    380
                };
                frequency = "0.8	+	((rpm/	2600) factor[(1800/	2600),(2600/	2600)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2600) factor[(1750/	2600),(2050/	2600)])";
            };
            class Idle_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_1", 0.31622776, 1};
                frequency = "0.8	+	((rpm/	2600) factor[(500/	2600),(650/	2600)])*0.15";
                volume = "engineOn*(1-camPos)*(((rpm/	2600) factor[(100/	2600),(400/	2600)])	*	((rpm/	2600) factor[(730/	2600),(610/	2600)]))";
            };
            class Engine_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_2", 0.35481337, 1};
                frequency = "0.8	+	((rpm/	2600) factor[(600/	2600),(1100/	2600)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	2600) factor[(550/	2600),(700/	2600)])	*	((rpm/	2600) factor[(1100/	2600),(760/	2600)]))";
            };
            class Engine1_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_3", 0.39810717, 1};
                frequency = "0.8	+	((rpm/	2600) factor[(770/	2600),(1400/	2600)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	2600) factor[(720/	2600),(1060/	2600)])	*	((rpm/	2600) factor[(1400/	2600),(1180/	2600)]))";
            };
            class Engine2_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_4", 0.4466836, 1};
                frequency = "0.8	+	((rpm/	2600) factor[(1150/	2600),(1700/	2600)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	2600) factor[(1130/	2600),(1370/	2600)])	*	((rpm/	2600) factor[(1700/	2600),(1500/	2600)]))";
            };
            class Engine3_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_5", 0.5011872, 1};
                frequency = "0.8	+	((rpm/	2600) factor[(1500/	2600),(2100/	2600)])*0.1";
                volume = "engineOn*(1-camPos)*(((rpm/	2600) factor[(1460/	2600),(1670/	2600)])	*	((rpm/	2600) factor[(2100/	2600),(1800/	2600)]))";
            };
            class Engine4_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_6", 0.56234133, 1};
                frequency = "0.8	+	((rpm/	2600) factor[(1800/	2600),(2600/	2600)])*0.1";
                volume = "engineOn*(1-camPos)*((rpm/	2600) factor[(1750/	2600),(2050/	2600)])";
            };
            class IdleThrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_1", 0.35481337, 1};
                frequency = "0.8	+	((rpm/	2600) factor[(500/	2600),(650/	2600)])*0.15";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(100/	2600),(400/	2600)])	*	((rpm/	2600) factor[(730/	2600),(610/	2600)]))";
            };
            class EngineThrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_2", 0.39810717, 1};
                frequency = "0.8	+	((rpm/	2600) factor[(600/	2600),(1100/	2600)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(550/	2600),(700/	2600)])	*	((rpm/	2600) factor[(1100/	2600),(760/	2600)]))";
            };
            class Engine1_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_3", 0.4466836, 1};
                frequency = "0.8	+	((rpm/	2600) factor[(770/	2600),(1400/	2600)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(720/	2600),(1060/	2600)])	*	((rpm/	2600) factor[(1400/	2600),(1180/	2600)]))";
            };
            class Engine2_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_4", 0.4466836, 1};
                frequency = "0.8	+	((rpm/	2600) factor[(1150/	2600),(1700/	2600)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(1130/	2600),(1370/	2600)])	*	((rpm/	2600) factor[(1700/	2600),(1500/	2600)]))";
            };
            class Engine3_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_5", 0.5011872, 1};
                frequency = "0.8	+	((rpm/	2600) factor[(1500/	2600),(2100/	2600)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(1460/	2600),(1670/	2600)])	*	((rpm/	2600) factor[(2100/	2600),(1800/	2600)]))";
            };
            class Engine4_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_6", 0.56234133, 1};
                frequency = "0.8	+	((rpm/	2600) factor[(1800/	2600),(2600/	2600)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2600) factor[(1750/	2600),(2050/	2600)])";
            };
            class NoiseInt {
                sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1", 3.1622777, 1};
                frequency = "1";
                volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
            };
            class NoiseExt {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
                    3.1622777,
                    1,
                    250
                };
                frequency = "1";
                volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
            };
            class ThreadsOutH0 {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\treads\ext_treads_hard_01",
                    0.39810717,
                    1,
                    140
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
            };
            class ThreadsOutH1 {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\treads\ext_treads_hard_02",
                    0.4466836,
                    1,
                    160
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
            };
            class ThreadsOutH2 {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\treads\ext_treads_hard_03",
                    0.5011872,
                    1,
                    180
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
            };
            class ThreadsOutH3 {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\treads\ext_treads_hard_04",
                    0.56234133,
                    1,
                    200
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
            };
            class ThreadsOutH4 {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\treads\ext_treads_hard_05",
                    0.56234133,
                    1,
                    220
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
            };
            class ThreadsOutS0 {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\treads\ext_treads_soft_01",
                    0.31622776,
                    1,
                    120
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
            };
            class ThreadsOutS1 {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\treads\ext_treads_soft_02",
                    0.35481337,
                    1,
                    140
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
            };
            class ThreadsOutS2 {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\treads\ext_treads_soft_03",
                    0.39810717,
                    1,
                    160
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
            };
            class ThreadsOutS3 {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\treads\ext_treads_soft_04",
                    0.4466836,
                    1,
                    180
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
            };
            class ThreadsOutS4 {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\treads\ext_treads_soft_05",
                    0.5011872,
                    1,
                    200
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
            };
            class ThreadsInH0 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_01", 0.4466836, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
            };
            class ThreadsInH1 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_02", 0.5011872, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
            };
            class ThreadsInH2 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_03", 0.56234133, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
            };
            class ThreadsInH3 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_04", 0.63095737, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
            };
            class ThreadsInH4 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_05", 0.70794576, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
            };
            class ThreadsInS0 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_01", 0.39810717, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
            };
            class ThreadsInS1 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_02", 0.4466836, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
            };
            class ThreadsInS2 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_03", 0.5011872, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
            };
            class ThreadsInS3 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_04", 0.63095737, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
            };
            class ThreadsInS4 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_05", 0.70794576, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
            };
        };
        simulation = "tankX";
        normalSpeedForwardCoef = 0.6;
        slowSpeedForwardCoef = 0.45;
        fuelCapacity = 24.15;
        RHS_fuelCapacity = 462;
        maxSpeed = 66;
        tracksSpeed = 10;
        maxFordingDepth = 0;
        waterResistance = 0;
        waterDamageEngine = 0.2;
        waterLeakiness = 10;
        tankTurnForce = 450000;
        tankTurnForceAngMinSpd = 0.7;
        tankTurnForceAngSpd = 0.87;
        accelAidForceCoef = 2;
        accelAidForceYOffset = -4;
        accelAidForceSpd = 4.23;
        torqueCurve[] = {
            {0.307692, 0.518072},
            {0.384615, 0.855422},
            {0.538462, 1},
            {0.576923, 0.945783},
            {0.653846, 0.909639},
            {0.769231, 0.873494},
            {0.903846, 0.843373},
            {1.02962, 0}
        };
        engineMOI = 5;
        enginePower = 447;
        peakTorque = 1660;
        minOmega = 84;
        maxOmega = 272.27;
        idleRPM = 800;
        redRPM = 2600;
        thrustDelay = 0.3;
        brakeIdleSpeed = 1.78;
        switchTime = 0.1;
        latency = 1;
        clutchStrength = 35;
        engineLosses = 25;
        transmissionLosses = 15;
        changeGearType = "rpmratio";
        changeGearOmegaRatios[] = {
            1,
            0.384615,
            0.384615,
            0,
            0.923077,
            0.384615,
            0.961538,
            0.538462,
            0.961538,
            0.576923,
            1,
            0.692308
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -2.2,
                "N",
                0,
                "D1",
                4.2,
                "D2",
                2.23,
                "D3",
                1.22,
                "D4",
                0.839
            };
            TransmissionRatios[] = {"High", 14.75};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        class Wheels {
            class L2 {
                suspTravelDirection[] = {-0.125, -1, 0};
                boneName = "wheel_podkoloL1";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                side = "left";
                steering = 0;
                width = 0.4;
                mass = 130;
                MOI = 10.0392;
                maxDroop = 0.18;
                maxCompression = 0.18;
                maxBrakeTorque = 6520;
                sprungMass = 2500;
                springStrength = 256250;
                springDamperRate = 14811;
                dampingRate = 1088;
                dampingRateInAir = 1088;
                dampingRateDamaged = 10;
                dampingRateDestroyed = 10000;
                latStiffX = 3.5;
                latStiffY = 45;
                longitudinalStiffnessPerUnitGravity = 14000;
                frictionVsSlipGraph[] = {{0, 0.45}, {0.32, 1}, {0.6, 0.86}};
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
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        vehicleClass = "rhs_vehclass_ifv";
        editorSubcategory = "rhs_EdSubcat_ifv";
        class SpeechVariants {
            class Default {
                speechSingular[] = {"veh_vehicle_APC_s"};
                speechPlural[] = {"veh_vehicle_APC_p"};
            };
        };
        textSingular = "IFV";
        textPlural = "IFVs";
        nameSound = "veh_vehicle_APC_s";
        driveOnComponent[] = {"slide", "trackL", "trackR"};
        unitInfoType = "RHSUSF_RscUnitInfoWestTank";
        model = "\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\M2A2";
        picture = "\rhsusf\addons\rhsusf_a2port_armor\pictures\rhs_m2a2_pic_ca.paa";
        Icon = "\rhsusf\addons\rhsusf_a2port_armor\Data\UI\Icon_m2a2_CA.paa";
        MapSize = 7;
        displayname = "M2 Bradley";
        accuracy = 0.3;
        transportSoldier = 6;
        getInAction = "GetInHigh";
        getOutAction = "GetOutHigh";
        cargoGetInAction[] = {"GetInLow"};
        cargoGetOutAction[] = {"GetOutLow"};
        memoryPointsGetInCargo[] = {
            "pos cargo",
            "pos cargo 1",
            "pos cargo 2",
            "pos cargo 3"
        };
        memoryPointsGetInCargoDir[] = {
            "pos cargo dir",
            "pos cargo 1 dir",
            "pos cargo dir",
            "pos cargo 2 dir",
            "pos cargo 3 dir"
        };
        cargoProxyIndexes[] = {1, 2, 3, 4, 5, 6};
        getInProxyOrder[] = {1, 2, 3, 4, 5, 6};
        weapons[] = {"rhs_weap_smokegen"};
        magazines[] = {"rhs_mag_smokegen"};
        rhs_hasSmokeCap = 1;
        reportOwnPosition = 1;
        delayBetweenEjects = 0.5;
        LODDriverTurnedIn = 1100;
        LODDriverTurnedOut = 0;
        LODDriverOpticsIn = 0;
        viewDriverInExternal = 1;
        viewCargoShadow = 1;
        viewCargoShadowDiff = 0.05;
        viewCargoShadowAmb = 0.5;
        headGforceLeaningFactor[] = {0.015, 0.011, 0.015};
        maximumLoad = 6000;
        class RenderTargets {};
        driverLeftHandAnimName = "yoke";
        driverRightHandAnimName = "yoke";
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "selection_stinger",
            "selection_tow"
        };
        hiddenSelectionsTextures[] = {
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\a3_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa"
        };
        class textureSources {
            class standard {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\a3_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
            class Desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\a3_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_d"};
            };
            class Olive {
                displayName = "Olive";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_a3_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
        };
        textureList[] = {};
        driverOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block";
        forceHideDriver = 0;
        DriverForceOptics = 0;
        driverDoor = "hatchD";
        dustFrontLeftPos = "wheel_1_4_bound";
        dustFrontRightPos = "wheel_2_4_bound";
        dustBackLeftPos = "wheel_1_7_bound";
        dustBackRightPos = "wheel_2_7_bound";
        radarType = 1;
        LockDetectionSystem = 0;
        incomingMissileDetectionSystem = 0;
        irtarget = 1;
        irScanGround = 0;
        threat[] = {0.9, 0.9, 0.4};
        armor = 290;
        armorStructural = 280;
        explosionShielding = 15;
        class HitPoints: HitPoints {
            class HitHull_Structural {
                armor = -600;
                name = "Hit_Engine";
                visual = "-";
                passThrough = 0;
                minimalHit = -0.22;
                explosionShielding = 0;
                radius = 0;
            };
            class HitHull: HitHull {
                armor = -110;
                name = "Hit_Hull";
                armorComponent = "Hit_Hull";
                visual = "zbytek";
                passThrough = 0;
                minimalHit = -0.15;
                explosionShielding = 0.01;
                radius = 0.1;
                depends = "HitHull_Structural";
            };
            class HitEngine: HitEngine {
                armor = -100;
                name = "Hit_Engine";
                armorComponent = "Hit_Engine";
                visual = "zbytek";
                passThrough = 0;
                minimalHit = 0.14;
                explosionShielding = 0.009;
                radius = 0.17;
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
                };
            };
            class HitLTrack: HitLTrack {
                armor = -150;
                armorComponent = "Hit_TrackL";
                name = "Hit_TrackL";
                passThrough = 0;
                minimalHit = -0.25;
                explosionShielding = 0.5;
                radius = 0.3;
            };
            class HitRTrack: HitRTrack {
                armor = -150;
                armorComponent = "Hit_TrackR";
                name = "Hit_TrackR";
                passThrough = 0;
                minimalHit = -0.25;
                explosionShielding = 0.5;
                radius = 0.3;
            };
            class Hit_LightL {
                armor = -10;
                name = "l svetlo";
                visual = "-";
                passThrough = 0;
                minimalHit = -0.1;
                explosionShielding = 1;
                radius = 0;
            };
            class Hit_LightR: Hit_LightL {
                name = "p svetlo";
            };
            class Hit_Optics_Dvr_Peri {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optics_Dvr_Peri";
                armorComponent = "Hit_Optics_Dvr_Peri";
                passThrough = 0;
            };
        };
        class CargoTurret;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                lockWhenDriverOut = 1;
                turretInfoType = "RHS_RscODS_ISU";
                discreteDistance[] = {
                    0,
                    200,
                    400,
                    600,
                    800,
                    1000,
                    1200,
                    1400,
                    1600,
                    1800,
                    2000,
                    2200,
                    2400,
                    2600,
                    2800,
                    3000
                };
                discreteDistanceInitIndex = 2;
                gunnerHasFlares = 0;
                gunnerForceOptics = 1;
                gunnerAction = "RHS_M2A2_GunnerOut";
                gunnerInAction = "RHS_M2A2_Gunner";
                gunnerGetInAction = "GetInHigh";
                gunnerGetOutAction = "GetOutHigh";
                gunnerDoor = "hatchG";
                minElev = -9;
                maxElev = 57;
                initElev = 0;
                viewGunnerInExternal = 1;
                showCrewAim = 0;
                allowTabLock = 0;
                maxhorizontalrotspeed = 1.04;
                maxverticalrotspeed = 1.04;
                stabilizedinaxes = 3;
                startengine = 0;
                hideWeaponsGunner = 1;
                selectionFireAnim = "zasleh2";
                weapons[] = {
                    "RHS_weap_M242BC",
                    "rhs_weap_m240_bradley_coax",
                    "Rhs_weap_TOW_Launcher",
                    "rhs_weap_fcs_ammo"
                };
                magazines[] = {
                    "rhs_mag_1100Rnd_762x51_M240",
                    "rhs_mag_1100Rnd_762x51_M240",
                    "rhs_mag_230Rnd_25mm_M242_HEI",
                    "rhs_mag_230Rnd_25mm_M242_HEI",
                    "rhs_mag_230Rnd_25mm_M242_HEI",
                    "rhs_mag_70Rnd_25mm_M242_APFSDS",
                    "rhs_mag_70Rnd_25mm_M242_APFSDS",
                    "rhs_mag_70Rnd_25mm_M242_APFSDS",
                    "rhs_mag_2Rnd_TOW2A",
                    "rhs_mag_2Rnd_TOW2A",
                    "rhs_mag_2Rnd_TOW2A",
                    "rhs_mag_2Rnd_TOW2BB",
                    "rhs_laserfcsmag"
                };
                class OpticsIn {
                    class Wide {
                        opticsDisplayName = "WIDE";
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.175;
                        minFov = 0.175;
                        maxFov = 0.175;
                        visionMode[] = {"Normal", "Ti"};
                        thermalMode[] = {4};
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_ISU";
                        gunnerOpticsEffect[] = {};
                        hitPoint = "Hit_Optics_Gnr";
                    };
                    class Narrow: Wide {
                        opticsDisplayName = "NARROW";
                        initFov = 0.0583333;
                        minFov = 0.0583333;
                        maxFov = 0.0583333;
                    };
                };
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        body = "obsTurret";
                        gun = "obsGun";
                        animationSourceBody = "obsTurret";
                        animationSourceGun = "obsGun";
                        memoryPointGunnerOptics = "commanderview";
                        minElev = -5;
                        maxElev = 5;
                        initElev = 0;
                        minTurn = -360;
                        maxTurn = 360;
                        initTurn = 0;
                        hideWeaponsGunner = 1;
                        weapons[] = {"rhsusf_weap_M257_8"};
                        magazines[] = {"rhsusf_mag_L8A3_8"};
                        turretInfoType = "RHS_RscODS_ISU";
                        gunnerAction = "RHS_M2A2_CommanderOut";
                        gunnerInAction = "RHS_M2A2_Commander";
                        gunnerGetInAction = "GetInHigh";
                        gunnerGetOutAction = "GetOutHigh";
                        gunnerForceOptics = 1;
                        gunnerDoor = "hatchC";
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\gunnerOptics_M2A2_2";
                        gunnerOpticsEffect[] = {};
                        class ViewOptics {
                            initAngleX = 0;
                            minAngleX = -30;
                            maxAngleX = 30;
                            initAngleY = 0;
                            minAngleY = -100;
                            maxAngleY = 100;
                            initFov = 0.155;
                            minFov = 0.067;
                            maxFov = 0.155;
                        };
                        class OpticsIn {
                            class VisionBlock {
                                opticsDisplayName = "periscope";
                                initAngleX = 0;
                                minAngleX = -30;
                                maxAngleX = 30;
                                initAngleY = 0;
                                minAngleY = -100;
                                maxAngleY = 100;
                                initfov = 0.7;
                                minFov = 0.7;
                                maxFov = 0.7;
                                visionMode[] = {"Normal", "NVG"};
                                gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block";
                                gunnerOpticsEffect[] = {};
                                hitPoint = "Hit_Optics_Cdr_Peri";
                            };
                            class Wide {
                                camPos = "gunnerview";
                                opticsDisplayName = "WIDE";
                                initAngleX = 0;
                                minAngleX = -30;
                                maxAngleX = 30;
                                initAngleY = 0;
                                minAngleY = -100;
                                maxAngleY = 100;
                                initFov = 0.175;
                                minFov = 0.175;
                                maxFov = 0.175;
                                visionMode[] = {"Normal", "Ti"};
                                thermalMode[] = {4};
                                gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_ISU";
                                gunnerOpticsEffect[] = {};
                                hitPoint = "Hit_Optics_Gnr";
                            };
                            class Narrow: Wide {
                                opticsDisplayName = "NARROW";
                                initFov = 0.0583333;
                                minFov = 0.0583333;
                                maxFov = 0.0583333;
                            };
                        };
                        startEngine = 0;
                        gunnerHasFlares = 1;
                        viewGunnerInExternal = 1;
                        outGunnerMayFire = 1;
                        inGunnerMayFire = 1;
                        showCrewAim = 0;
                        allowTabLock = 0;
                        class HitPoints {
                            class HitTurretCom {
                                armor = 0.3;
                                material = -1;
                                name = "vezVelitele";
                                visual = "vezVelitele";
                                passThrough = 0;
                                minimalHit = 0.03;
                                explosionShielding = 0.001;
                                radius = 0.25;
                                isTurret = 1;
                            };
                            class HitGunCom {
                                armor = 0.3;
                                material = -1;
                                name = "zbranVelitele";
                                visual = "zbranVelitele";
                                passThrough = 0;
                                minimalHit = 0.03;
                                explosionShielding = 0.001;
                                radius = 0.25;
                                isGun = 1;
                            };
                            class Hit_Optics_Cdr_Peri {
                                armor = -40;
                                explosionShielding = 0;
                                name = "";
                                visual = "vis_optics_Cdr_Peri";
                                armorComponent = "Hit_Optics_Cdr_Peri";
                                passThrough = 0;
                            };
                        };
                        class Reflectors {
                            class cabin {
                                color[] = {800, 900, 650};
                                ambient[] = {5, 5, 5};
                                intensity = 0.3;
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
                                    hardLimitStart = 1;
                                    hardLimitEnd = 1.5;
                                };
                            };
                            class cargo_light_1: cabin {
                                color[] = {800, 900, 650};
                                position = "cargo_light_1";
                                direction = "cargo_light_1_dir";
                                hitpoint = "cargo_light_1";
                                selection = "cargo_light_1";
                                intensity = 3;
                                useFlare = 0;
                                coneFadeCoef = 0.1;
                                innerAngle = 140;
                                outerAngle = 175;
                                class Attenuation {
                                    start = 0;
                                    constant = 0;
                                    linear = 1;
                                    quadratic = 70;
                                    hardLimitStart = 1.4;
                                    hardLimitEnd = 2;
                                };
                            };
                        };
                    };
                };
                class HitPoints {
                    class HitTurret {
                        armor = -60;
                        armorComponent = "Hit_Turret";
                        name = "vez";
                        visual = "vez";
                        passThrough = 0;
                        minimalHit = -0.3;
                        explosionShielding = 0.001;
                        radius = 0.08;
                        isTurret = 1;
                    };
                    class HitGun {
                        armor = -60;
                        armorComponent = "Hit_Gun";
                        name = "zbran";
                        visual = "-";
                        passThrough = 0;
                        minimalHit = -0.3;
                        explosionShielding = 0.001;
                        radius = 0.1;
                        isGun = 1;
                    };
                    class Hit_Optics_Gnr {
                        armor = -40;
                        explosionShielding = 0;
                        name = "";
                        visual = "vis_optics_Gnr";
                        armorComponent = "Hit_Optics_Gnr";
                        passThrough = 0;
                    };
                };
            };
        };
        driverAction = "RHS_M2A2_DriverOut";
        driverInAction = "RHS_M2A2_Driver";
        cargoAction[] = {
            "RHS_M113_Cargo03",
            "RHS_M113_Cargo03",
            "RHS_M113_Cargo03",
            "RHS_M113_Cargo02",
            "RHS_M113_Cargo02",
            "RHS_M113_Cargo02"
        };
        insideSoundCoef = 0.9;
        class Exhausts {
            class Exhaust1 {
                position = "vyfuk start";
                direction = "vyfuk konec";
                effect = "ExhaustEffectTankSide";
            };
        };
        class ViewPilot: ViewPilot {
            initAngleX = 7;
            minAngleX = -15;
            maxAngleX = 25;
            initAngleY = 0;
            minAngleY = -90;
            maxAngleY = 90;
        };
        class ViewOptics: ViewOptics {
            visionMode[] = {"Normal", "NVG"};
            initFov = 0.7;
            minFov = 0.7;
            maxFov = 0.7;
        };
        class DriverOpticsIn {
            class Wide: ViewOptics {
                opticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block";
                hitpoint = "Hit_Optics_Dvr_Peri";
            };
        };
        class TransportBackpacks {
            class _xx_rhsusf_falconii {
                backpack = "rhsusf_falconii";
                count = 8;
            };
        };
        class TransportMagazines {
            class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
                magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
                count = 75;
            };
            class _xx_rhsusf_100Rnd_556x45_soft_pouch {
                magazine = "rhsusf_100Rnd_556x45_soft_pouch";
                count = 11;
            };
            class _xx_rhsusf_100Rnd_762x51 {
                magazine = "rhsusf_100Rnd_762x51";
                count = 11;
            };
            class _xx_rhs_fgm148_magazine_AT {
                magazine = "rhs_fgm148_magazine_AT";
                count = 4;
            };
            class _xx_rhs_mag_M441_HE {
                magazine = "rhs_mag_M441_HE";
                count = 20;
            };
            class _xx_rhs_mag_M714_white {
                magazine = "rhs_mag_M714_white";
                count = 8;
            };
            class _xx_rhs_mag_M662_red {
                magazine = "rhs_mag_M662_red";
                count = 4;
            };
            class _xx_rhs_mag_m67 {
                magazine = "rhs_mag_m67";
                count = 10;
            };
            class _xx_rhs_mag_m18_green {
                magazine = "rhs_mag_m18_green";
                count = 4;
            };
            class _xx_rhs_mag_m18_red {
                magazine = "rhs_mag_m18_red";
                count = 4;
            };
            class _xx_rhs_mag_an_m8hc {
                magazine = "rhs_mag_an_m8hc";
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
                count = 2;
            };
            class _xx_Toolkit {
                name = "Toolkit";
                count = 1;
            };
        };
        class TransportWeapons {
            class _xx_rhs_weap_m4_carryhandle_pmag {
                weapon = "rhs_weap_m4_carryhandle_pmag";
                count = 4;
            };
            class _xx_rhs_weap_fgm148 {
                weapon = "rhs_weap_fgm148";
                count = 2;
            };
        };
        class EventHandlers: EventHandlers {
            class RHSUSF_EventHandlers {
                postInit = "_this call rhs_fnc_reapplyTextures";
                getIn = "_this call rhs_fnc_m2_doors";
                getOut = "_this call rhs_fnc_m2_doors";
                engine = "[_this select 0,_this select 1,2] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_engineCheckDamage";
            };
        };
        class Reflectors {
            class Left {
                color[] = {1900, 1300, 950};
                ambient[] = {5, 5, 5};
                position = "l svetlo";
                direction = "konec l svetla";
                hitpointClass = "Hit_LightL";
                selection = "L svetlo";
                size = 1;
                innerAngle = 30;
                outerAngle = 100;
                coneFadeCoef = 10;
                intensity = 1;
                useFlare = 1;
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
                position = "p svetlo";
                direction = "konec p svetla";
                hitpointClass = "Hit_LightR";
                selection = "P svetlo";
            };
        };
        aggregateReflectors[] = {{"Left"}, {"Right"}};
        armorLights = 0.1;
        class UserActions {
            class OpenCargoDoor {
                displayName = "Open ramp";
                position = "pos driver";
                radius = 15;
                showwindow = 0;
                condition = "this doorPhase 'ramp' == 0 and {(call rhsusf_fnc_findPlayer) in this};";
                statement = "this animateDoor ['ramp', 1];this setVariable ['ramp_handler',1,true]";
                onlyforplayer = 1;
                shortcut = "user12";
            };
            class CloseCargoDoor: OpenCargoDoor {
                displayName = "Close ramp";
                condition = "this doorPhase 'ramp' > 0 and {(call rhsusf_fnc_findPlayer) in this};";
                statement = "this animateDoor ['ramp', 0];this setVariable ['ramp_handler',0,true]";
            };
            class ToggleLight {
                displayName = "Toggle interior light";
                position = "pos driver";
                radius = 15;
                showwindow = 0;
                condition = "player in this;";
                statement = "[this,'cargolights_hide',[0,0]] call rhs_fnc_toggleIntLight";
                onlyforplayer = 1;
            };
        };
        class Attributes {
            class ObjectTexture {
                control = "ObjectTexture";
                data = "ObjectTexture";
                displayName = "Skin";
                tooltip = "Texture and material set applied on the object.";
            };
            class rhs_hideIFFPanel {
                displayName = "Hide IFF Panel";
                property = "rhs_hideIFFPanel";
                control = "CheckboxNumber";
                expression = "_this animate ['IFF_Panels_Hide',_value,true]";
                defaultValue = "0";
            };
            class OpenRamp {
                control = "CheckboxNumber";
                defaultValue = "0";
                displayName = "Open rear ramp";
                property = "OpenRamp";
                expression = "_this animateDoor ['ramp', _value,true];_this setVariable ['ramp_handler',_value,true]";
            };
        };
    };
    class RHS_M2A2: RHS_M2A2_Base {
        scope = 2;
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_M2A2.paa";
        displayName = "M2A2ODS";
        side = 1;
        class Library {
            libTextDesc = "The M2 Bradley IFV (Infantry Fighting Vehicle) is an US infantry fighting vehicle. It is designed to transport infantry with armor protection while providing covering fire to suppressing enemy troops and armored vehicles.<br/>The A2 variant features improvements based on lessons learned during Gulf War in 1991.";
        };
        model = "\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\M2A2";
        cargoDoors[] = {"ramp"};
        damageResistance = 0.01189;
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV1.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV1_damage.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV1_destruct.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2_damage.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2_destruct.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2_ERAon.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2_ERAon_damage.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2_ERAon_destruct.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\M2_tracks.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\M2_tracks_damage.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\M2_tracks_destruct.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class AnimationSources {
            class smoke_revolving_source {
                source = "revolving";
                weapon = "rhsusf_weap_M257_8";
            };
            class cargolights_hide {
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
            };
            class cabinlights_hide: cargolights_hide {};
            class IFF_Panels_Hide {
                source = "user";
                mass = -20;
                displayName = "hide IFF Panels";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class recoil_source {
                source = "reload";
                weapon = "RHS_weap_M242BC";
            };
            class muzzle_hide_hmg: recoil_source {};
            class muzzle_rot_hmg: recoil_source {
                source = "ammorandom";
            };
            class muzzle_rot_hmg2: muzzle_rot_hmg {
                weapon = "rhs_weap_m240_bradley_coax";
            };
            class Select_TOW {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "add Stinger launcher";
                forceAnimatePhase = 1;
                forceAnimate[] = {"Select_Stinger", 0};
                source = "user";
                animPeriod = 0.0000001;
                initPhase = 0;
            };
            class Select_Stinger: Select_TOW {
                initPhase = 1;
                forceAnimatePhase = 1;
                displayName = "add TOW launcher";
                forceAnimate[] = {"Select_TOW", 0};
                onPhaseChanged = "_this call rhs_fnc_m2_handleWeaponVG";
            };
            class HatchC {
                source = "door";
                animPeriod = 2.1;
            };
            class HatchG: HatchC {};
            class HatchD: HatchC {};
            class ramp {
                source = "door";
                animPeriod = 3.285;
                initPhase = 0;
                sound = "rhs_ramp";
                soundPosition = "ramp_axis";
            };
            class rear_hatch {
                source = "door";
                animPeriod = 0.8;
                initPhase = 0;
            };
        };
    };
    class RHS_M2A2_early: RHS_M2A2 {
        scope = 0;
        displayName = "M2A2";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"RHS_weap_M242BC_manual", "rhs_weap_m240veh", "rhs_weap_TOW_Launcher"};
                magazines[] = {
                    "rhs_mag_1100Rnd_762x51_M240",
                    "rhs_mag_1100Rnd_762x51_M240",
                    "rhs_mag_230Rnd_25mm_M242_HEI",
                    "rhs_mag_230Rnd_25mm_M242_HEI",
                    "rhs_mag_230Rnd_25mm_M242_HEI",
                    "rhs_mag_70Rnd_25mm_M242_APFSDS",
                    "rhs_mag_70Rnd_25mm_M242_APFSDS",
                    "rhs_mag_70Rnd_25mm_M242_APFSDS",
                    "rhs_mag_2Rnd_TOW2",
                    "rhs_mag_2Rnd_TOW2",
                    "rhs_mag_2Rnd_TOW2",
                    "rhs_mag_2Rnd_TOW2"
                };
                turretInfoType = "RHS_Rsc_ISU";
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        turretInfoType = "RHS_Rsc_ISU";
                    };
                };
            };
        };
        class AnimationSources: AnimationSources {
            class recoil_source: recoil_source {
                weapon = "RHS_weap_M242BC_manual";
            };
            class muzzle_hide_hmg: recoil_source {};
            class muzzle_rot_hmg: recoil_source {
                source = "ammorandom";
            };
            class muzzle_rot_hmg2: muzzle_rot_hmg {
                weapon = "rhs_weap_m240veh";
            };
        };
    };
    class RHS_M2A2_BUSKI: RHS_M2A2 {
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        displayName = "M2A2ODS (BUSK I)";
        model = "\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\M2A2_ERA";
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_M2A2_BUSKI.paa";
        damageResistance = 0.01101;
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "selection_stinger",
            "selection_tow"
        };
        hiddenSelectionsTextures[] = {
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\a3_buski_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa"
        };
        class textureSources {
            class standard {
                displayName = "Woodland";
                textures[] = {
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\a3_buski_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
            class Desert {
                displayName = "Desert";
                textures[] = {
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\a3_buski_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_d"};
            };
            class Olive {
                displayName = "Olive";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_a3_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
        };
        class AnimationSources: AnimationSources {
            class Select_TOW: Select_TOW {
                scope = 0;
            };
            class Select_Stinger: Select_Stinger {
                scope = 0;
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
        };
        class HitPoints: HitPoints {
            class era_1_hitpoint {
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e1";
                armorComponent = "e1";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e2";
                armorComponent = "e2";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e3";
                armorComponent = "e3";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e4";
                armorComponent = "e4";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e5";
                armorComponent = "e5";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e6";
                armorComponent = "e6";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e7";
                armorComponent = "e7";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e8";
                armorComponent = "e8";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e9";
                armorComponent = "e9";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e10";
                armorComponent = "e10";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e11";
                armorComponent = "e11";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e12";
                armorComponent = "e12";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e13";
                armorComponent = "e13";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e14";
                armorComponent = "e14";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e15";
                armorComponent = "e15";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e16";
                armorComponent = "e16";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e17";
                armorComponent = "e17";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e18";
                armorComponent = "e18";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e19";
                armorComponent = "e19";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e20";
                armorComponent = "e20";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e21";
                armorComponent = "e21";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e22";
                armorComponent = "e22";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e23";
                armorComponent = "e23";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e24";
                armorComponent = "e24";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e25";
                armorComponent = "e25";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e26";
                armorComponent = "e26";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e27";
                armorComponent = "e27";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e28";
                armorComponent = "e28";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e29";
                armorComponent = "e29";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e30";
                armorComponent = "e30";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e31";
                armorComponent = "e31";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e32";
                armorComponent = "e32";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e33";
                armorComponent = "e33";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e34";
                armorComponent = "e34";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e35";
                armorComponent = "e35";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e36";
                armorComponent = "e36";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e37";
                armorComponent = "e37";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e38";
                armorComponent = "e38";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e39";
                armorComponent = "e39";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e40";
                armorComponent = "e40";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e41";
                armorComponent = "e41";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e42";
                armorComponent = "e42";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e43";
                armorComponent = "e43";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e44";
                armorComponent = "e44";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e45";
                armorComponent = "e45";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
        };
    };
    class RHS_M2A3: RHS_M2A2 {
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        displayName = "M2A3";
        model = "\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\M2A3";
        picture = "\rhsusf\addons\rhsusf_a2port_armor\pictures\rhs_m2a3_pic_ca.paa";
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_M2A3.paa";
        damageResistance = 0.01189;
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa", "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\a3_co.paa", "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa"};
        class textureSources {
            class standard {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa", "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\a3_co.paa", "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa"};
                factions[] = {"rhs_faction_usarmy_wd"};
            };
            class Desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa", "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\a3_co.paa", "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa"};
                factions[] = {"rhs_faction_usarmy_d"};
            };
            class Olive {
                displayName = "Olive";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa", "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_a3_co.paa", "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa"};
                factions[] = {"rhs_faction_usarmy_wd"};
            };
        };
        class AnimationSources {
            class smoke_revolving_source {
                source = "revolving";
                weapon = "rhsusf_weap_M257_8";
            };
            class cargolights_hide {
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
            };
            class cabinlights_hide: cargolights_hide {};
            class IFF_Panels_Hide {
                source = "user";
                mass = -20;
                displayName = "hide IFF Panels";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class recoil_source {
                source = "reload";
                weapon = "RHS_weap_M242BC";
            };
            class muzzle_hide_hmg: recoil_source {};
            class muzzle_rot_hmg: recoil_source {
                source = "ammorandom";
            };
            class muzzle_rot_hmg2: muzzle_rot_hmg {
                weapon = "rhs_weap_m240_bradley_coax";
            };
            class HatchC {
                source = "door";
                animPeriod = 2.1;
            };
            class HatchG: HatchC {};
            class HatchD: HatchC {};
            class ramp {
                source = "door";
                animPeriod = 5;
                initPhase = 0;
                sound = "ServoRampSound_2";
                soundPosition = "ramp_axis";
            };
        };
        class HitPoints: HitPoints {
            class Hit_Optics_Dvr_DVE {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optics_Dvr_RVE";
                armorComponent = "Hit_Optics_Dvr_DVE";
                passThrough = 0;
            };
            class Hit_Optics_Dvr_RearCam {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "vis_optics_Dvr_RearCam";
                armorComponent = "Hit_Optics_Dvr_RearCam";
                passThrough = 0;
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                turretInfoType = "RHS_RscIBAS";
                magazines[] = {
                    "rhs_mag_1100Rnd_762x51_M240",
                    "rhs_mag_1100Rnd_762x51_M240",
                    "rhs_mag_230Rnd_25mm_M242_HEI",
                    "rhs_mag_230Rnd_25mm_M242_HEI",
                    "rhs_mag_230Rnd_25mm_M242_HEI",
                    "rhs_mag_70Rnd_25mm_M242_APFSDS",
                    "rhs_mag_70Rnd_25mm_M242_APFSDS",
                    "rhs_mag_70Rnd_25mm_M242_APFSDS",
                    "rhs_mag_2Rnd_TOW2B_AERO",
                    "rhs_mag_2Rnd_TOW2B_AERO",
                    "rhs_mag_2Rnd_TOW2A",
                    "rhs_mag_2Rnd_TOW2BB",
                    "rhs_laserfcsmag"
                };
                class OpticsIn {
                    class Wide {
                        opticsDisplayName = "60HZ";
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.175;
                        minFov = 0.175;
                        maxFov = 0.175;
                        visionMode[] = {"Normal", "Ti"};
                        thermalMode[] = {0, 1};
                        gunnerOpticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_IBAS_4x";
                        gunnerOpticsEffect[] = {};
                        hitPoint = "Hit_Optics_Gnr";
                    };
                    class Narrow: Wide {
                        opticsDisplayName = "60HZ";
                        gunnerOpticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_IBAS_12x";
                        initFov = 0.0583333;
                        minFov = 0.0583333;
                        maxFov = 0.0583333;
                    };
                    class Narrow2x: Narrow {
                        opticsDisplayName = "60HZ 2X";
                        initFov = 0.0291667;
                        minFov = 0.0291667;
                        maxFov = 0.0291667;
                    };
                    class Narrow4x: Narrow {
                        opticsDisplayName = "60HZ 4X";
                        initFov = 0.0145833;
                        minFov = 0.0145833;
                        maxFov = 0.0145833;
                    };
                };
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        turretInfoType = "RHS_RscCIV";
                        stabilizedInAxes = "StabilizedInAxesBoth";
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\comTI_M2A2";
                        gunnerOpticsEffect[] = {};
                        class ViewOptics: ViewOptics {
                            initFov = 0.466;
                            minFov = 0.015;
                            maxFov = 0.466;
                            visionMode[] = {"Normal", "NVG", "Ti"};
                            thermalMode[] = {0, 1};
                        };
                        minElev = -22;
                        maxElev = 60;
                        minTurn = -360;
                        maxTurn = 360;
                        class OpticsIn {
                            class Ultrawide {
                                opticsDisplayName = "60HZ";
                                initAngleX = 0;
                                minAngleX = -30;
                                maxAngleX = 30;
                                initAngleY = 0;
                                minAngleY = -100;
                                maxAngleY = 100;
                                initFov = 0.7;
                                minFov = 0.7;
                                maxFov = 0.7;
                                visionMode[] = {"Normal", "Ti"};
                                thermalMode[] = {0, 1};
                                gunnerOpticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_IBAS_1x";
                                gunnerOpticsEffect[] = {};
                                hitPoint = "Hit_Optics_Cdr_CIV";
                            };
                            class Wide: Ultrawide {
                                opticsDisplayName = "60HZ";
                                initFov = 0.175;
                                minFov = 0.175;
                                maxFov = 0.175;
                                gunnerOpticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_IBAS_4x";
                            };
                            class Narrow: Ultrawide {
                                opticsDisplayName = "60HZ";
                                gunnerOpticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_IBAS_12x";
                                initFov = 0.0583333;
                                minFov = 0.0583333;
                                maxFov = 0.0583333;
                            };
                            class Narrow2x: Narrow {
                                opticsDisplayName = "60HZ 2X";
                                initFov = 0.0291667;
                                minFov = 0.0291667;
                                maxFov = 0.0291667;
                            };
                            class Narrow4x: Narrow {
                                opticsDisplayName = "60HZ 4X";
                                initFov = 0.0145833;
                                minFov = 0.0145833;
                                maxFov = 0.0145833;
                            };
                        };
                        class HitPoints: HitPoints {
                            class Hit_Optics_Cdr_CIV {
                                armor = -40;
                                explosionShielding = 0;
                                name = "";
                                visual = "vis_optics_Cdr_CIV";
                                armorComponent = "Hit_Optics_Cdr_CIV";
                                passThrough = 0;
                            };
                        };
                    };
                };
            };
        };
        class DriverOpticsIn {
            class Wide: ViewOptics {
                camPos = "view_driver";
                opticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block";
                visionMode[] = {"Normal"};
                hitpoint = "Hit_Optics_Dvr_Peri";
            };
            class DVE_Wide: Wide {
                camPos = "view_DVE";
                opticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_DVE_4x3";
                visionMode[] = {"TI"};
                thermalMode[] = {0, 1};
                initFov = 1.07692;
                minFov = 1.07692;
                maxFov = 1.07692;
                hitpoint = "Hit_Optics_Dvr_DVE";
            };
            class DVS_Rear: DVE_Wide {
                camPos = "view_rear";
                camDir = "view_rear_dir";
                opticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_DVE2_4x3";
                hitpoint = "Hit_Optics_Dvr_RearCam";
            };
        };
    };
    class RHS_M2A3_BUSKI: RHS_M2A3 {
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        rhs_duke_type = "rhsusf_duke_m1a2";
        displayName = "M2A3 (BUSK I)";
        model = "\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\M2A3_ERA";
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_M2A3_BUSKI.paa";
        damageResistance = 0.01189;
        hiddenSelections[] = {"camo1", "camo2", "camo3", "duke_tex"};
        hiddenSelectionsTextures[] = {
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\a3_buski_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa",
            "rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_d_co.paa"
        };
        class textureSources {
            class standard {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\a3_buski_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
            class Desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\a3_buski_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_d_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_d"};
            };
            class Olive {
                displayName = "Olive";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_a3_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
        };
        class AnimationSources: AnimationSources {
            class DUKE_Hide {
                source = "user";
                mass = -20;
                displayName = "hide DUKE antennas";
                animPeriod = 0.00001;
                initPhase = 0;
                onPhaseChanged = "_this + ([[0,0]]) call rhs_fnc_duke_vg;";
            };
            class HitDuke1 {
                source = "Hit";
                hitpoint = "HitDuke1";
            };
            class HitDuke2: HitDuke1 {
                hitpoint = "HitDuke2";
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
        };
        class HitPoints: HitPoints {
            class HitDuke1 {
                armor = 0.75;
                material = -1;
                name = "duke1";
                visual = "-";
                passThrough = 0;
                MinimalHit = 0.05;
                explosionShielding = 0.01;
                radius = 0.15;
            };
            class HitDuke2: HitDuke1 {
                name = "duke2";
                visual = "-";
            };
            class era_1_hitpoint {
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e1";
                armorComponent = "e1";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e2";
                armorComponent = "e2";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e3";
                armorComponent = "e3";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e4";
                armorComponent = "e4";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e5";
                armorComponent = "e5";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e6";
                armorComponent = "e6";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e7";
                armorComponent = "e7";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e8";
                armorComponent = "e8";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e9";
                armorComponent = "e9";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e10";
                armorComponent = "e10";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e11";
                armorComponent = "e11";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e12";
                armorComponent = "e12";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e13";
                armorComponent = "e13";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e14";
                armorComponent = "e14";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e15";
                armorComponent = "e15";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e16";
                armorComponent = "e16";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e17";
                armorComponent = "e17";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e18";
                armorComponent = "e18";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e19";
                armorComponent = "e19";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e20";
                armorComponent = "e20";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e21";
                armorComponent = "e21";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e22";
                armorComponent = "e22";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e23";
                armorComponent = "e23";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e24";
                armorComponent = "e24";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e25";
                armorComponent = "e25";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e26";
                armorComponent = "e26";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e27";
                armorComponent = "e27";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e28";
                armorComponent = "e28";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e29";
                armorComponent = "e29";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e30";
                armorComponent = "e30";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e31";
                armorComponent = "e31";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e32";
                armorComponent = "e32";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e33";
                armorComponent = "e33";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e34";
                armorComponent = "e34";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e35";
                armorComponent = "e35";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e36";
                armorComponent = "e36";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e37";
                armorComponent = "e37";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e38";
                armorComponent = "e38";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e39";
                armorComponent = "e39";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e40";
                armorComponent = "e40";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e41";
                armorComponent = "e41";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e42";
                armorComponent = "e42";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e43";
                armorComponent = "e43";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e44";
                armorComponent = "e44";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e45";
                armorComponent = "e45";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        isPersonTurret = 0;
                        gunnerInAction = "RHS_M2A3_Commander";
                        weapons[] = {"rhsusf_weap_M257_8", "rhsusf_weap_duke"};
                        magazines[] = {"rhsusf_mag_L8A3_8", "rhsusf_mag_duke"};
                    };
                };
            };
        };
        class Attributes: Attributes {
            class ObjectTexture: ObjectTexture {};
            class rhs_hideIFFPanel: rhs_hideIFFPanel {};
            class rhs_hideDUKE: rhs_hideIFFPanel {
                displayName = "hide DUKE antennas";
                property = "rhs_hideDUKE";
                expression = "_this animate ['DUKE_Hide',_value,true];if(_value isEqualTo 1)then{_this removeWeaponTurret ['rhsusf_weap_duke',[0,0]]};";
            };
            class OpenRamp: OpenRamp {};
        };
        class EventHandlers: EventHandlers {
            class rhs_duke {
                handleDamage = "_this call rhs_fnc_duke_destruction";
            };
        };
    };
    class RHS_M2A3_BUSKIII: RHS_M2A3_BUSKI {
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        rhs_duke_type = "rhsusf_duke";
        displayName = "M2A3 (BUSK III)";
        model = "\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\M2A3_ERA2";
        picture = "\rhsusf\addons\rhsusf_a2port_armor\pictures\rhs_m2a3b_pic_ca.paa";
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_M2A3_BUSKIII.paa";
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "duke_tex"};
        hiddenSelectionsTextures[] = {
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\buskiii\base_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\buskiii\a3_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\buskiii_co.paa",
            "\rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_d_co.paa"
        };
        class textureSources {
            class standard {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\woodland\base_buskiii_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\woodland\a3_buskiii_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\BUSKIII_co.paa",
                    "\rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
            class Desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\buskiii\base_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\buskiii\a3_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\buskiii_co.paa",
                    "\rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_d_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_d"};
            };
            class Olive {
                displayName = "Olive";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_a3_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
                    "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\BUSKIII_co.paa",
                    "\rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd"};
            };
        };
        damageResistance = 0.01189;
        class AnimationSources: AnimationSources {
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
            class era_51_source {
                source = "Hit";
                hitpoint = "era_51_hitpoint";
            };
            class era_52_source {
                source = "Hit";
                hitpoint = "era_52_hitpoint";
            };
            class era_53_source {
                source = "Hit";
                hitpoint = "era_53_hitpoint";
            };
            class era_54_source {
                source = "Hit";
                hitpoint = "era_54_hitpoint";
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
        };
        class HitPoints: HitPoints {
            class era_46_hitpoint {
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e46";
                armorComponent = "e46";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e47";
                armorComponent = "e47";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e48";
                armorComponent = "e48";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e49";
                armorComponent = "e49";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e50";
                armorComponent = "e50";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
            class era_51_hitpoint {
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e51";
                armorComponent = "e51";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e51";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e51";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e51";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e51";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_52_hitpoint {
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e52";
                armorComponent = "e52";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e52";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e52";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e52";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e52";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_53_hitpoint {
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e53";
                armorComponent = "e53";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e53";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e53";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e53";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e53";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_54_hitpoint {
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e54";
                armorComponent = "e54";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_e54";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_e54";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_e54";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_e54";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class era_55_hitpoint {
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e55";
                armorComponent = "e55";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e56";
                armorComponent = "e56";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e57";
                armorComponent = "e57";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e58";
                armorComponent = "e58";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
                simulation = "RHS_ERA_BUSK";
                armor = -150;
                material = -1;
                name = "e59";
                armorComponent = "e59";
                passThrough = 0;
                minimalHit = -0.4;
                explosionShielding = 0.007;
                radius = 0.16;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    effectRadius = 1;
                    ignoreFuel = 1;
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
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV1.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV1_damage.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV1_destruct.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2_damage.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2_destruct.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2_ERAon.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2_ERAon_damage.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2_ERAon_destruct.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\BUSKIII.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\BUSKIII_damage.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\BUSKIII_destruct.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\M2_tracks.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\M2_tracks_damage.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\M2_tracks_destruct.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
    };
    class RHS_M2A3_BUSKIII_wd: RHS_M2A3_BUSKIII {
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_M2A3_BUSKIII_wd.paa";
        hiddenSelectionsTextures[] = {
            "\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\woodland\base_buskiii_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\woodland\a3_buskiii_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\BUSKIII_co.paa",
            "\rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
        };
    };
    class RHS_M6: RHS_M2A2_Base {
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        scope = 2;
        displayName = "M6A2";
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_M6.paa";
        side = 1;
        damageResistance = 0.01101;
        cargoDoors[] = {"ramp"};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {
                    "RHS_weap_M242BC",
                    "rhs_weap_m240_bradley_coax",
                    "Rhs_weap_stinger_Launcher",
                    "rhs_weap_fcs_ammo"
                };
                magazines[] = {
                    "rhs_mag_1100Rnd_762x51_M240",
                    "rhs_mag_1100Rnd_762x51_M240",
                    "Rhs_mag_4Rnd_stinger",
                    "Rhs_mag_4Rnd_stinger",
                    "Rhs_mag_4Rnd_stinger",
                    "rhs_mag_70Rnd_25mm_M242_APFSDS",
                    "rhs_mag_230Rnd_25mm_M242_HEI",
                    "rhs_mag_70Rnd_25mm_M242_APFSDS",
                    "rhs_mag_230Rnd_25mm_M242_HEI",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
            };
        };
        class Library {
            libTextDesc = "The M6 Linebacker is an air-defense variant of the M2A2 Bradley. It features two four-tube Stinger missile pods. The Linebacker is due to be retired from U.S. service.";
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV1.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV1_damage.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV1_destruct.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2_damage.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\brad_UV2_destruct.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\M2_tracks.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\M2_tracks_damage.rvmat",
                "rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\M2_tracks_destruct.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class AnimationSources: AnimationSources {
            class IFF_Panels_Hide {
                source = "user";
                mass = -20;
                displayName = "hide IFF Panels";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class recoil_source {
                source = "reload";
                weapon = "RHS_weap_M242BC";
            };
            class muzzle_hide_hmg: recoil_source {};
            class muzzle_rot_hmg: recoil_source {
                source = "ammorandom";
            };
            class muzzle_rot_hmg2: muzzle_rot_hmg {
                weapon = "rhs_weap_m240_bradley_coax";
            };
            class Select_TOW {
                source = "user";
                animPeriod = 0.0000001;
                initPhase = 1;
            };
            class Select_Stinger: Select_TOW {
                initPhase = 0;
            };
            class HatchC {
                source = "door";
                animPeriod = 2.1;
            };
            class HatchG: HatchC {};
            class HatchD: HatchC {};
            class ramp {
                source = "door";
                animPeriod = 5;
                initPhase = 0;
                sound = "ServoRampSound_2";
                soundPosition = "ramp_axis";
            };
        };
        hiddenSelectionsTextures[] = {
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\a3_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
            ""
        };
        threat[] = {0.9, 0.3, 1};
        class TransportMagazines {
            class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
                magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
                count = 75;
            };
            class _xx_rhsusf_100Rnd_556x45_soft_pouch {
                magazine = "rhsusf_100Rnd_556x45_soft_pouch";
                count = 11;
            };
            class _xx_rhsusf_100Rnd_762x51 {
                magazine = "rhsusf_100Rnd_762x51";
                count = 11;
            };
            class _xx_rhs_fim92_mag {
                magazine = "rhs_fim92_mag";
                count = 4;
            };
            class _xx_rhs_mag_M441_HE {
                magazine = "rhs_mag_M441_HE";
                count = 20;
            };
            class _xx_rhs_mag_M714_white {
                magazine = "rhs_mag_M714_white";
                count = 8;
            };
            class _xx_rhs_mag_M662_red {
                magazine = "rhs_mag_M662_red";
                count = 4;
            };
            class _xx_rhs_mag_m67 {
                magazine = "rhs_mag_m67";
                count = 10;
            };
            class _xx_rhs_mag_m18_green {
                magazine = "rhs_mag_m18_green";
                count = 4;
            };
            class _xx_rhs_mag_m18_red {
                magazine = "rhs_mag_m18_red";
                count = 4;
            };
            class _xx_rhs_mag_an_m8hc {
                magazine = "rhs_mag_an_m8hc";
                count = 10;
            };
            class _xx_rhs_M136_mag {
                magazine = "rhs_M136_mag";
                count = 2;
            };
        };
        class TransportWeapons {
            class _xx_rhs_weap_m4_carryhandle_pmag {
                weapon = "rhs_weap_m4_carryhandle_pmag";
                count = 4;
            };
            class _xx_rhs_weap_fim92 {
                weapon = "rhs_weap_fim92";
                count = 2;
            };
            class _xx_rhs_weap_M136 {
                weapon = "rhs_weap_M136";
                count = 2;
            };
        };
    };
    class RHS_M2A2_wd: RHS_M2A2 {
        scope = 2;
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_M2A2_wd.paa";
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "selection_stinger",
            "selection_tow"
        };
        hiddenSelectionsTextures[] = {
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\a3_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa"
        };
    };
    class RHS_M2A2_BUSKI_WD: RHS_M2A2_BUSKI {
        scope = 2;
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_M2A2_BUSKI_WD.paa";
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "selection_stinger",
            "selection_tow"
        };
        hiddenSelectionsTextures[] = {
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\a3_buski_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa"
        };
    };
    class RHS_M2A3_BUSKI_wd: RHS_M2A3_BUSKI {
        scope = 2;
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_M2A3_BUSKI_wd.paa";
        hiddenSelections[] = {"camo1", "camo2", "camo3", "duke_tex"};
        hiddenSelectionsTextures[] = {
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\a3_buski_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
            "\rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
        };
    };
    class RHS_M2A3_wd: RHS_M2A3 {
        scope = 2;
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_M2A3_wd.paa";
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa", "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\a3_co.paa", "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa"};
    };
    class RHS_M6_wd: RHS_M6 {
        scope = 2;
        displayName = "M6A2";
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\RHS_M6_wd.paa";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_crewman";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "selection_stinger",
            "selection_tow"
        };
        hiddenSelectionsTextures[] = {
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_a3_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
            "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
            ""
        };
    };
};
