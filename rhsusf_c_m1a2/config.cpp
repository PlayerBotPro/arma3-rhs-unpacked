class CfgPatches {
    class rhsusf_c_m1a2 {
        units[] = {
            "rhsusf_m1a2sep1d_usarmy",
            "rhsusf_m1a2sep1wd_usarmy",
            "rhsusf_m1a2sep1tuskid_usarmy",
            "rhsusf_m1a2sep1tuskiwd_usarmy",
            "rhsusf_m1a2sep1tuskiid_usarmy",
            "rhsusf_m1a2sep1tuskiiwd_usarmy",
            "rhsusf_m1a2sep2d_usarmy",
            "rhsusf_m1a2sep2wd_usarmy"
        };
        weapons[] = {};
        requiredVersion = 1.83;
        requiredAddons[] = {"rhsusf_main", "rhsusf_c_m1a1"};
        name = "M1A2 Tanks";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class DefaultEventhandlers;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored {
    class Wide;
    class Medium;
    class Narrow;
};
class CfgMovesBasic {
    class Default;
    class DefaultDie;
    class ManActions {
        RHS_M1A1_Commander = "RHS_M1A1_Commander";
        RHS_M1A1_Gunner = "RHS_M1A1_Gunner";
        RHS_M1A1_Loader = "RHS_M1A1_Loader";
        RHS_M1A2_Commander = "RHS_M1A2_Commander";
        RHS_M1A2_CommanderOUT = "RHS_M1A2_CommanderOUT";
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
            file = "\rhsusf\addons\rhsusf_c_m1a2\anims\KIA_RHS_M1A2_Commander.rtm";
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
        class KIA_RHS_M1A2_Commander: DefaultDie {
            actions = "DeadActions";
            file = "\rhsusf\addons\rhsusf_c_m1a2\anims\KIA_RHS_M1A2_Commander.rtm";
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
            speed = 0.5;
            looped = 0;
        };
        class KIA_RHS_M1A2_CommanderOut: KIA_RHS_M1A2_Commander {
            file = "\rhsusf\addons\rhsusf_c_m1a2\anims\KIA_RHS_M1A2_CommanderOut.rtm";
        };
        class KIA_RHS_M1A1_Gunner: KIA_RHS_M1A2_Commander {
            file = "\rhsusf\addons\rhsusf_c_m1a2\anims\RHS_M1A1_Gunner.rtm";
        };
        class KIA_RHS_M1A1_Loader: KIA_RHS_M1A2_Commander {
            file = "\rhsusf\addons\rhsusf_c_m1a2\anims\RHS_M1A1_Loader.rtm";
        };
        class KIA_RHS_M1A1_Commander: KIA_RHS_M1A2_Commander {
            file = "\rhsusf\addons\rhsusf_c_m1a2\anims\RHS_M1A1_Commander.rtm";
        };
        class RHS_M1A2_Commander: rhs_crew_in {
            file = "\rhsusf\addons\rhsusf_c_m1a2\anims\RHS_M1A2_Commander.rtm";
            interpolateTo[] = {"KIA_RHS_M1A2_Commander", 1};
        };
        class RHS_M1A2_CommanderOut: Crew {
            file = "\rhsusf\addons\rhsusf_c_m1a2\anims\RHS_M1A2_CommanderOut.rtm";
            interpolateTo[] = {"KIA_RHS_M1A2_CommanderOut", 1};
        };
        class RHS_M1A1_Gunner: rhs_crew_in {
            file = "\rhsusf\addons\rhsusf_c_m1a2\anims\RHS_M1A1_Gunner.rtm";
            interpolateTo[] = {"KIA_RHS_M1A1_Gunner", 1};
        };
        class RHS_M1A1_Loader: rhs_crew_in {
            file = "\rhsusf\addons\rhsusf_c_m1a2\anims\RHS_M1A1_Loader.rtm";
            interpolateTo[] = {"KIA_RHS_M1A1_Loader", 1};
        };
        class RHS_M1A1_Commander: rhs_crew_in {
            file = "\rhsusf\addons\rhsusf_c_m1a2\anims\RHS_M1A1_Commander.rtm";
            interpolateTo[] = {"KIA_RHS_M1A1_Commander", 1};
        };
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class M1_hatch {
                file = "\rhsusf\addons\rhsusf_c_m1a2\scripts\rhs_hatch.sqf";
                description = "M1 hatch handler";
            };
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
    };
    class MBT_01_base_F: Tank_F {
        class EventHandlers;
    };
    class rhsusf_m1a1tank_base: MBT_01_base_F {
        dlc = "RHS_USAF";
        class AnimationSources;
        class HitPoints;
        class EventHandlers: EventHandlers {
            class RHSUSF_EventHandlers;
        };
        class Attributes {
            class ObjectTexture;
            class rhs_hideIFFPanel;
            class rhs_hideMiles;
            class rhs_decalBarrel_type;
            class rhs_decalBarrel;
            class rhs_decalPlatoon_type;
            class rhs_decalPlatoon;
            class rhs_ammoslot_1_type;
            class rhs_ammoslot_1;
            class rhs_ammoslot_2_type;
            class rhs_ammoslot_2;
            class rhs_ammoslot_3_type;
            class rhs_ammoslot_3;
        };
    };
    class rhsusf_m1a2tank_base: rhsusf_m1a1tank_base {
        rhs_decalParameters[] = {"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_D']", "['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_WD']"};
        displayName = "$STR_M1A2SEP_Name";
        accuracy = 0.3;
        model = "\rhsusf\addons\rhsusf_m1a2\m1a2v1";
        Icon = "\rhsusf\addons\rhsusf_m1a2\icons\M1A2SEPV1.paa";
        picture = "\rhsusf\addons\rhsusf_m1a2\icons\M1A2SIDE_ca.paa";
        typicalCargo[] = {};
        side = 1;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        body = "CITVTurret";
                        gun = "CITVGun";
                        animationSourceBody = "CITVTurret";
                        animationSourceGun = "CITVGun";
                        maxHorizontalRotSpeed = 1.3;
                        maxVerticalRotSpeed = 0.48;
                        stabilizedInAxes = 3;
                        soundServo[] = {
                            "A3\Sounds_F\vehicles\armor\noises\servo_armor_comm",
                            1,
                            1,
                            30
                        };
                        soundServoVertical[] = {
                            "A3\Sounds_F\vehicles\armor\noises\servo_armor_comm",
                            1,
                            1,
                            30
                        };
                        minElev = -5;
                        maxElev = 60;
                        initElev = 0;
                        minTurn = -360;
                        maxTurn = 360;
                        initTurn = 0;
                        memoryPointGun = "usti hlavne3";
                        gunBeg = "usti hlavne3";
                        gunEnd = "konec hlavne3";
                        LodTurnedOut = 1200;
                        weapons[] = {"rhsusf_weap_M250"};
                        magazines[] = {"rhsusf_mag_L8A3_12"};
                        turretInfoType = "RscOptics_Offroad_01";
                        memoryPointGunnerOutOptics = "";
                        memoryPointGunnerOptics = "CITV_view";
                        gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
                        gunnerOutForceOptics = 0;
                        gunnerOutOpticsModel = "";
                        gunnerOpticsEffect[] = {};
                        gunnerHasFlares = 1;
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
                            visionMode[] = {"Normal"};
                            thermalMode[] = {2, 3};
                        };
                        class OpticsIn: Optics_Commander_01 {
                            class Wide: Wide {
                                initFov = 0.233333;
                                minFov = 0.233333;
                                maxFov = 0.233333;
                                hitpoint = "Hit_Optic_CITV";
                                gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_CITV_w";
                            };
                            class Medium: Medium {
                                initFov = 0.116667;
                                minFov = 0.116667;
                                maxFov = 0.116667;
                                hitpoint = "Hit_Optic_CITV";
                                gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_CITV_m";
                            };
                            class Medium_TI: Medium {
                                initFov = 0.0538462;
                                minFov = 0.0538462;
                                maxFov = 0.0538462;
                                visionMode[] = {"Ti"};
                            };
                            class Medium2_TI: Medium_TI {
                                initFov = 0.028;
                                minFov = 0.028;
                                maxFov = 0.028;
                            };
                            class Narrow_TI: Medium_TI {
                                initFov = 0.014;
                                minFov = 0.014;
                                maxFov = 0.014;
                                gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_CITV_n";
                            };
                        };
                        gunnerAction = "mbt2_slot2b_out";
                        gunnerInAction = "RHS_M1A2_Commander";
                        gunnerGetInAction = "GetInHigh";
                        gunnerGetOutAction = "GetOutHigh";
                        startEngine = 0;
                        viewGunnerInExternal = 1;
                        outGunnerMayFire = 1;
                        inGunnerMayFire = 1;
                        class HitPoints {
                            class HitTurretCom {
                                armor = 0.3;
                                material = -1;
                                name = "vezVelitele";
                                visual = "vezVelitele";
                                passThrough = 0;
                                minimalHit = 0.03;
                                explosionShielding = 0.6;
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
                                explosionShielding = 0.6;
                                radius = 0.25;
                                isGun = 1;
                            };
                            class Hit_Optic_CITV {
                                armor = -40;
                                explosionShielding = 0;
                                name = "";
                                visual = "vis_optic_CITV";
                                armorComponent = "Hit_Optic_CITV";
                                passThrough = 0;
                            };
                        };
                        selectionFireAnim = "";
                    };
                    class Loader: CommanderOptics {
                        class HitPoints {
                            class Hit_Optic_LoaderPeriscope {
                                armor = -40;
                                explosionShielding = 0;
                                name = "";
                                visual = "vis_optic_LoaderPeriscope";
                                armorComponent = "Hit_Optic_LoaderPeriscope";
                                passThrough = 0;
                            };
                        };
                        isPersonTurret = 1;
                        lockWhenDriverOut = 0;
                        lodTurnedOut = 1200;
                        minTurn = -140;
                        maxTurn = 140;
                        stabilizedInAxes = 0;
                        gunnerAction = "RHS_M1A1_Loader_out";
                        gunnerInAction = "RHS_M1A1_Loader_in";
                        weapons[] = {};
                        magazines[] = {};
                        gunnerOutForceOptics = 0;
                        gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                        inGunnerMayFire = 1;
                        outGunnerMayFire = 1;
                        memoryPointGun = "usti hlavne5";
                        gunBeg = "usti hlavne5";
                        gunEnd = "konec hlavne5";
                        selectionFireAnim = "";
                        soundAttenuationTurret = "HeliAttenuationGunner";
                        disableSoundAttenuation = 0;
                        animationSourceHatch = "HatchGunner";
                        animationSourceBody = "LoaderVisorTurret";
                        animationSourceGun = "LoaderVisorGun";
                        body = "LoaderVisorTurret";
                        gun = "LoaderVisorGun";
                        animationSourceStickX = "";
                        animationSourceStickY = "";
                        commanding = -3;
                        primaryObserver = 0;
                        memoryPointsGetInGunner = "pos gunner";
                        memoryPointsGetInGunnerDir = "pos gunner dir";
                        gunnername = "Loader";
                        memoryPointGunnerOptics = "loadervisor_view";
                        soundServo[] = {"A3\sounds_f\dummysound", 0.000001, 1};
                        gunnerDoor = "hatchL";
                        proxyindex = 2;
                        class OpticsIn: OpticsIn {
                            class Periscope: ViewOptics {
                                initFov = 0.7;
                                minFov = 0.7;
                                maxFov = 0.7;
                                visionMode[] = {"Normal"};
                                gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhs_periscope_BISType";
                                hitpoint = "Hit_Optic_LoaderPeriscope";
                            };
                            class Wide: Wide {
                                camPos = "CITV_view";
                                camDir = "CITV_view_dir";
                            };
                            class Medium: Medium {
                                camPos = "CITV_view";
                                camDir = "CITV_view_dir";
                            };
                            class Medium_TI: Medium_TI {
                                camPos = "CITV_view";
                                camDir = "CITV_view_dir";
                            };
                            class Medium2_TI: Medium2_TI {
                                camPos = "CITV_view";
                                camDir = "CITV_view_dir";
                            };
                            class Narrow_TI: Narrow_TI {
                                camPos = "CITV_view";
                                camDir = "CITV_view_dir";
                            };
                        };
                    };
                    class CommanderMG: CommanderOptics {
                        gunnername = "Commander MG";
                        proxyindex = 3;
                        dontCreateAi = 1;
                        cantCreateAI = 1;
                        isPersonTurret = 0;
                        body = "ObsTurret";
                        gun = "ObsGun";
                        animationSourceBody = "ObsTurret";
                        animationSourceGun = "ObsGun";
                        animationSourceStickX = "CommanderTurret_Inertia";
                        animationSourceStickY = "CommanderGun_Inertia";
                        gunnerDoor = "";
                        stabilizedInAxes = 0;
                        gunnerAction = "RHS_M1A2_CommanderOUT";
                        gunnerInAction = "RHS_M1A2_CommanderOUT";
                        canHideGunner = 0;
                        memoryPointGunnerOutOptics = "commander_out_view";
                        gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                        soundAttenuationTurret = "HeliAttenuationGunner";
                        disableSoundAttenuation = 0;
                        LODOpticsIn = 1200;
                        LODOpticsOut = 1200;
                        gunnerLeftHandAnimName = "handleL";
                        gunnerRightHandAnimName = "handleR";
                        minElev = -8;
                        maxElev = 30;
                        minTurn = -61;
                        maxTurn = 61;
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
                        turretInfoType = "RHS_RscWeaponZeroing";
                        weapons[] = {"RHS_M2_Abrams_Commander"};
                        magazines[] = {
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_100rnd_127x99_mag_Tracer_Red"
                        };
                        selectionFireAnim = "zasleh3";
                        class OpticsIn: Optics_Commander_01 {
                            class Wide: Wide {
                                visionMode[] = {"Normal"};
                                initFov = 0.35;
                                minFov = 0.35;
                                maxFov = 0.35;
                            };
                        };
                        gunnercompartments = "Compartment5";
                        class HitPoints {
                            class HitTurretComM2 {
                                armor = 0.3;
                                material = -1;
                                name = "com_m2_turret";
                                visual = "-";
                                passThrough = 0;
                                minimalHit = 0.03;
                                explosionShielding = 0.6;
                                radius = 0.25;
                                isTurret = 1;
                            };
                            class HitGunComM2 {
                                armor = 0.3;
                                material = -1;
                                name = "com_m2_gun";
                                visual = "-";
                                passThrough = 0;
                                minimalHit = 0.03;
                                explosionShielding = 0.6;
                                radius = 0.25;
                                isGun = 1;
                            };
                        };
                    };
                    class LoaderMG: Loader {
                        proxyindex = 4;
                        dontCreateAi = 1;
                        cantCreateAI = 1;
                        isPersonTurret = 0;
                        canHideGunner = 0;
                        gunnername = "Loader MG";
                        gunnercompartments = "Compartment5";
                        animationSourceBody = "LoaderTurret";
                        animationSourceGun = "LoaderGun";
                        memoryPointGunnerOutOptics = "loaderview";
                        memoryPointGunnerOptics = "loaderview";
                        gunnerLeftHandAnimName = "Loader_Gun";
                        gunnerRightHandAnimName = "Loader_Gun";
                        animationSourceStickX = "LoaderTurret_Inertia";
                        animationSourceStickY = "LoaderGun_Inertia";
                        body = "LoaderTurret";
                        gun = "LoaderGun";
                        gunnerAction = "RHS_M1A2_CommanderOUT";
                        minTurn = 48;
                        maxTurn = 140;
                        LODOpticsIn = 1200;
                        LODOpticsOut = 1200;
                        selectionFireAnim = "zasleh5";
                        discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900};
                        discreteDistanceInitIndex = 2;
                        turretInfoType = "RHS_RscWeaponZeroing";
                        class OpticsIn {};
                        class ViewOptics: ViewOptics {
                            initFov = 0.7;
                            minFov = 0.25;
                            maxFov = 1.1;
                        };
                        class ViewGunner: ViewOptics {};
                        weapons[] = {"rhs_weap_m240_abrams"};
                        magazines[] = {"rhs_mag_762x51_M240_200", "rhs_mag_762x51_M240_200", "rhs_mag_762x51_M240_200"};
                        class HitPoints {
                            class HitTurretLoader {
                                armor = 0.3;
                                material = -1;
                                name = "LoaderTurret";
                                visual = "-";
                                passThrough = 0;
                                minimalHit = 0.03;
                                explosionShielding = 0.6;
                                radius = 0.25;
                                isTurret = 1;
                            };
                            class HitGunLoader {
                                armor = 0.3;
                                material = -1;
                                name = "LoaderGun";
                                visual = "-";
                                passThrough = 0;
                                minimalHit = 0.03;
                                explosionShielding = 0.6;
                                radius = 0.25;
                                isGun = 1;
                            };
                        };
                    };
                };
                memoryPointGun = "usti hlavne2";
                selectionFireAnim = "zaslehCoax";
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                weapons[] = {"rhs_weap_m256", "rhs_weap_m240_abrams_coax", "rhs_weap_fcs"};
                magazines[] = {
                    "rhs_mag_M829A3",
                    "rhs_mag_M830A1",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
                minElev = -10;
                maxElev = 22;
                initElev = 5;
                maxhorizontalrotspeed = 0.7;
                maxverticalrotspeed = 0.44;
                turretInfoType = "RHS_RscWeaponM1_FCS";
                discreteDistance[] = {};
                memoryPointGunnerOptics = "gunnerview";
                gunnerOutOpticsModel = "";
                gunnerOutOpticsEffect[] = {};
                gunnerOpticsEffect[] = {};
                gunnerForceOptics = 1;
                class OpticsIn {
                    class Wide: ViewOptics {
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.233333;
                        minFov = 0.233333;
                        maxFov = 0.233333;
                        visionMode[] = {"Normal"};
                        thermalMode[] = {2, 3};
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2";
                        gunnerOpticsEffect[] = {};
                        hitpoint = "Hit_Optic_GPS";
                    };
                    class Medium: Wide {
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A1_2";
                        initFov = 0.07;
                        minFov = 0.07;
                        maxFov = 0.07;
                    };
                    class Wide_TI: Wide {
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2_ti";
                        visionMode[] = {"Ti"};
                        initFov = 0.233333;
                        minFov = 0.233333;
                        maxFov = 0.233333;
                        hitpoint = "Hit_Optic_GPS_TI";
                    };
                    class Wide2_TI: Wide_TI {
                        initFov = 0.116667;
                        minFov = 0.116667;
                        maxFov = 0.116667;
                    };
                    class Medium_TI: Wide_TI {
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2_2";
                        initFov = 0.0538462;
                        minFov = 0.0538462;
                        maxFov = 0.0538462;
                    };
                    class Medium2_TI: Wide_TI {
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2_3";
                        initFov = 0.028;
                        minFov = 0.028;
                        maxFov = 0.028;
                    };
                    class Narrow_TI: Wide_TI {
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_m1a1\gunnerOptics_M1A2_4";
                        initFov = 0.014;
                        minFov = 0.014;
                        maxFov = 0.014;
                    };
                };
                gunnerAction = "mbt2_slot2a_out";
                gunnerInAction = "RHS_M1A1_Gunner";
                forceHideGunner = 1;
                inGunnerMayFire = 1;
                viewGunnerInExternal = 1;
                class HitPoints {
                    class HitTurret {
                        armor = 0.2;
                        material = -1;
                        name = "vez";
                        visual = "vez";
                        passThrough = 0;
                        minimalHit = 0.34;
                        explosionShielding = 0.001;
                        radius = 0.18;
                    };
                    class HitGun {
                        armor = 0.3;
                        material = -1;
                        name = "zbran";
                        armorComponent = "Hit_Gun";
                        visual = "-";
                        passThrough = 0;
                        minimalHit = 0.15;
                        explosionShielding = 0;
                        radius = 0.12;
                    };
                    class Hit_GPS_HeadMirror {
                        armor = -40;
                        explosionShielding = 0;
                        name = "";
                        visual = "-";
                        armorComponent = "Hit_HeadMirror";
                        passThrough = 0;
                    };
                    class Hit_GPS_Optical: Hit_GPS_HeadMirror {
                        visual = "vis_optic_GPS";
                        armorComponent = "Hit_Optic_GPS";
                    };
                    class Hit_GPS_TIS: Hit_GPS_HeadMirror {
                        visual = "vis_optic_GPS_TI";
                        armorComponent = "Hit_Optic_GPS_TI";
                    };
                    class Hit_Optic_GPS: Hit_GPS_Optical {
                        visual = "-";
                        armorComponent = "-";
                        depends = "Hit_GPS_HeadMirror max Hit_GPS_Optical";
                    };
                    class Hit_Optic_GPS_TI: Hit_GPS_TIS {
                        visual = "-";
                        armorComponent = "-";
                        depends = "Hit_GPS_HeadMirror max Hit_GPS_TIS";
                    };
                };
            };
        };
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "",
            "",
            "",
            "",
            "n1",
            "n2",
            "n3",
            "i1",
            "i2",
            "i3"
        };
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_wd_01_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_wd_02_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
            "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa"
        };
        class textureSources {
            class woodland {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_wd_01_co.paa",
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_wd_02_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa"
                };
            };
            class desert: woodland {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_d_01_co.paa",
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_d_02_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_d_co.paa"
                };
            };
        };
        textureList[] = {};
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aim_03.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_03.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aim_d_03.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_d_03.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_t.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_dam_m1a1aim_t.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_destr_m1a1aim_t.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_d_01.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_dam_m1a2_d_01.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_destr_m1a2_d_01.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_d_02.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_dam_m1a2_d_02.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_destr_m1a2_d_02.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_wd_01.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_dam_m1a2_wd_01.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_destr_m1a2_wd_01.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_wd_02.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_dam_m1a2_wd_02.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_destr_m1a2_wd_02.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskia2_d.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_dam_tuskia2_d.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_destr_tuskia2_d.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskia2_wd.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_dam_tuskia2_wd.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_destr_tuskia2_wd.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_d.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_dam_m1slat_d.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_destr_m1slat_d.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_wd.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_dam_m1slat_wd.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_destr_m1slat_wd.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv2.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_dam_m1a2sepv2.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_destr_m1a2sepv2.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\m153.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\m153_dam.rvmat",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_destr_m1a2sepv2.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\opticsglass.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\opticsglass_damage.rvmat",
                "rhsusf\addons\rhsusf_m1a1\data\opticsglass_damage.rvmat"
            };
        };
        class ViewOptics: ViewOptics {
            visionMode[] = {"Normal", "NVG"};
        };
        class AnimationSources: AnimationSources {
            class muzzle_rot_hmg2 {
                source = "ammorandom";
                weapon = "rhs_M2_Abrams_Gunner";
            };
            class reload2 {
                source = "reload";
                weapon = "RHS_M2_Abrams_Commander";
            };
            class ReloadMagazine2 {
                source = "reloadmagazine";
                weapon = "RHS_M2_Abrams_Commander";
            };
            class Revolving2 {
                source = "revolving";
                weapon = "RHS_M2_Abrams_Commander";
            };
            class ObsTurret {
                source = "user";
                animperiod = 1.5;
            };
            class ObsGun {
                source = "user";
                animperiod = 7;
            };
            class Unhide_vis_optic_d_CITV {
                source = "hit";
                hitpoint = "Hit_Optic_CITV";
            };
        };
        class UserActions {
            class trunk_open {
                displayName = "Use M2";
                position = "trunk_action";
                radius = 4;
                onlyForplayer = 0;
                shortcut = "turnOut";
                condition = "this animationPhase 'HatchCommander1'>0.5 and ((call rhsusf_fnc_findPlayer) == commander this)";
                statement = "(call rhsusf_fnc_findPlayer) action ['moveToTurret', this, [0,2]];[this,[[0,0],true]] remoteExecCall ['lockTurret']";
            };
            class trunk_close: trunk_open {
                displayName = "Leave M2";
                shortcut = "turnIn";
                condition = "vehicle (call rhsusf_fnc_findPlayer) turretUnit [0,2] == (call rhsusf_fnc_findPlayer)";
                statement = "(call rhsusf_fnc_findPlayer) action ['moveToTurret', this, [0,0]];[this,[[0,0],false]] remoteExecCall ['lockTurret']";
            };
            class LoaderGun_Use {
                displayName = "Use M240";
                position = "";
                radius = 4;
                onlyForplayer = 0;
                shortcut = "turnOut";
                condition = "this animationPhase 'HatchGunner'>0.5 and ((call rhsusf_fnc_findPlayer) == this turretUnit [0,1])";
                statement = "(call rhsusf_fnc_findPlayer) action ['moveToTurret', this, [0,3]];[this,[[0,1],true]] remoteExecCall ['lockTurret']";
            };
            class LoaderGun_Leave: LoaderGun_Use {
                displayName = "Leave M240";
                condition = "vehicle (call rhsusf_fnc_findPlayer) turretUnit [0,3] == (call rhsusf_fnc_findPlayer)";
                shortcut = "turnIn";
                statement = "(call rhsusf_fnc_findPlayer) action ['moveToTurret', this, [0,1]];[this,[[0,1],false]] remoteExecCall ['lockTurret']";
            };
        };
        class EventHandlers: EventHandlers {
            class RHSUSF_EventHandlers: RHSUSF_EventHandlers {
                getOut = "_this call rhs_fnc_M1_hatch";
            };
        };
    };
    class rhsusf_m1a2sep1d_usarmy: rhsusf_m1a2tank_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1a2sep1d_usarmy.paa";
        scope = 2;
        displayName = "$STR_M1A2SEP_Name";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        faction = "rhs_faction_usarmy_d";
        vehicleClass = "rhs_vehclass_tank";
        crew = "rhsusf_army_ocp_combatcrewman";
        rhs_decalParameters[] = {"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_D']", "['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_D']"};
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_d_01_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_d_02_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03_co.paa",
            "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_d_co.paa"
        };
    };
    class rhsusf_m1a2sep1wd_usarmy: rhsusf_m1a2tank_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1a2sep1wd_usarmy.paa";
        scope = 2;
        displayName = "$STR_M1A2SEPWD_Name";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_tank";
        crew = "rhsusf_army_ucp_combatcrewman";
        rhs_decalParameters[] = {"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_WD']", "['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_WD']"};
    };
    class rhsusf_m1a2sep2_base: rhsusf_m1a2tank_base {
        scope = 1;
        displayName = "$STR_M1A2SEPV2_Name";
        model = "\rhsusf\addons\rhsusf_m1a2\m1a2v2";
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
        };
        rhs_duke_type = "rhsusf_duke_m1a2";
        class AnimationSources: AnimationSources {
            class muzzle_rot_crows {
                source = "ammorandom";
                weapon = "RHS_M2_CROWS_M153_Abrams";
            };
            class DUKE_Hide {
                source = "user";
                mass = -20;
                displayName = "hide DUKE antenna";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                animPeriod = 0.00001;
                initPhase = 0;
                onPhaseChanged = "_this + ([[0,0]]) call rhs_fnc_duke_vg;";
            };
            class HitDuke1 {
                source = "Hit";
                hitpoint = "HitDuke1";
            };
            class deflector_hide {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide exhaust deflector";
                source = "user";
                useSource = 1;
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class rearguard_hide {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide track guard";
                source = "user";
                useSource = 1;
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class fuelcans_hide {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide fuel jerry";
                source = "user";
                useSource = 1;
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class sparerw_hide {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide spare road wheel";
                source = "user";
                useSource = 1;
                animPeriod = 0.00001;
                initPhase = 0;
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
            "n1",
            "n2",
            "n3",
            "i1",
            "i2",
            "i3"
        };
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_d_01_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_d_02_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03_co.paa",
            "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_d_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskia2_d_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_d_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv2_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv2_crows_co.paa"
        };
        class textureSources {
            class woodland {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_wd_01_co.paa",
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_wd_02_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa",
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskia2_wd_co.paa",
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_wd_co.paa",
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv2_wd_co.paa",
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv2_crows_wd_co.paa"
                };
            };
            class desert: woodland {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_d_01_co.paa",
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_d_02_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_d_co.paa",
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskia2_d_co.paa",
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_d_co.paa",
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv2_co.paa",
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv2_crows_co.paa"
                };
            };
        };
        textureList[] = {};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CROWS_Turret: CommanderOptics {
                        body = "crowsTurret";
                        gun = "crowsGun";
                        animationSourceBody = "crowsTurret";
                        animationSourceGun = "crowsGun";
                        selectionFireAnim = "zasleh3";
                        weapons[] = {"RHS_M2_CROWS_M153_Abrams", "rhsusf_weap_M250", "rhsusf_weap_duke"};
                        magazines[] = {
                            "rhs_mag_400rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_400rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_400rnd_127x99_mag_Tracer_Red",
                            "rhs_mag_400rnd_127x99_mag_Tracer_Red",
                            "rhsusf_mag_L8A3_12",
                            "rhsusf_mag_duke"
                        };
                        gunBeg = "CROWS usti";
                        gunEnd = "CROWS konec";
                        soundServo[] = {
                            "A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01",
                            0.17782794,
                            1,
                            10
                        };
                        soundServoVertical[] = {
                            "A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01",
                            0.17782794,
                            1,
                            10
                        };
                        stabilizedInAxes = 3;
                        minElev = -20;
                        maxElev = 60;
                        turretInfoType = "RHS_RscM153_CROWS_Abrams";
                        discreteDistance[] = {
                            100,
                            150,
                            200,
                            250,
                            300,
                            350,
                            400,
                            450,
                            500,
                            550,
                            600,
                            650,
                            700,
                            750,
                            800,
                            850,
                            900,
                            950,
                            1000,
                            1050,
                            1100,
                            1150,
                            1200,
                            1250,
                            1300,
                            1350,
                            1400,
                            1450,
                            1500,
                            1550,
                            1600,
                            1650,
                            1700,
                            1750,
                            1800,
                            1850,
                            1900,
                            1950,
                            2000
                        };
                        discreteDistanceInitIndex = 2;
                        canUseScanners = 0;
                        showCrewAim = 0;
                        allowTabLock = 0;
                        gunnerAction = "mbt2_slot2b_out";
                        gunnerInAction = "RHS_M1A1_Commander";
                        gunnerGetInAction = "GetInHigh";
                        gunnerGetOutAction = "GetOutHigh";
                        gunnerDoor = "hatchC";
                        startEngine = 0;
                        viewGunnerInExternal = 1;
                        outGunnerMayFire = 0;
                        inGunnerMayFire = 1;
                        memoryPointGunnerOutOptics = "PIP0_dir";
                        memoryPointGunnerOptics = "PIP0_dir";
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_CROWS_monitor";
                        gunnerOutOpticsModel = "";
                        gunnerOpticsEffect[] = {};
                        gunnerHasFlares = 1;
                        gunnerForceOptics = 1;
                        class ViewOptics: ViewOptics {
                            initFov = 0.155;
                            minFov = 0.034;
                            maxFov = 0.155;
                            visionMode[] = {"Normal", "NVG"};
                        };
                        class OpticsIn {
                            class DaysightWFOV: ViewOptics {
                                opticsDisplayName = "1.0x";
                                gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_CROWS_monitor";
                                visionMode[] = {"Normal"};
                                hitpoint = "Hit_Optic_CROWS_Day";
                                initFov = 0.7;
                                minFov = 0.7;
                                maxFov = 0.7;
                            };
                            class ThermalWFOV: DaysightWFOV {
                                opticsDisplayName = "4.3x";
                                visionMode[] = {"TI"};
                                thermalMode[] = {0, 1};
                                hitpoint = "Hit_Optic_CROWS_TI";
                                initFov = 0.162791;
                                minFov = 0.162791;
                                maxFov = 0.162791;
                            };
                            class ThermalNFOV: ThermalWFOV {
                                opticsDisplayName = "12.5x";
                                initFov = 0.056;
                                minFov = 0.056;
                                maxFov = 0.056;
                            };
                            class DaysightNFOV: DaysightWFOV {
                                opticsDisplayName = "15.0x";
                                initFov = 0.0466667;
                                minFov = 0.0466667;
                                maxFov = 0.0466667;
                            };
                            class DaysightVNFOV: DaysightWFOV {
                                opticsDisplayName = "30.0x";
                                initFov = 0.0233333;
                                minFov = 0.0233333;
                                maxFov = 0.0233333;
                            };
                        };
                        class Hitpoints {
                            class Hit_Optic_CROWS_Day {
                                armor = -40;
                                explosionShielding = 0;
                                name = "";
                                visual = "vis_optic_CROWS_Day";
                                armorComponent = "Hit_Optic_CROWS_Day";
                                passThrough = 0;
                            };
                            class Hit_Optic_CROWS_TI {
                                armor = -40;
                                explosionShielding = 0;
                                name = "";
                                visual = "vis_optic_CROWS_TI";
                                armorComponent = "Hit_Optic_CROWS_TI";
                                passThrough = 0;
                            };
                            class Hit_Optic_CROWS_LRF {
                                armor = -40;
                                explosionShielding = 0;
                                name = "";
                                visual = "vis_optic_CROWS_LRF";
                                armorComponent = "Hit_Optic_CROWS_LRF";
                                passThrough = 0;
                            };
                            class HitTurret {
                                armor = -120;
                                minimalHit = -0.13;
                                explosionShielding = 0.5;
                                name = "";
                                visual = "vis_turret";
                                armorComponent = "Hit_Turret";
                                passThrough = 0;
                            };
                            class HitGun {
                                armor = -120;
                                minimalHit = -0.13;
                                explosionShielding = 0.5;
                                name = "";
                                visual = "vis_gun";
                                armorComponent = "Hit_Gun";
                                passThrough = 0;
                            };
                        };
                    };
                    class Loader: Loader {};
                    class LoaderMG: LoaderMG {};
                };
            };
        };
        class UserActions {
            class LoaderGun_Use {
                displayName = "Use M240";
                position = "";
                radius = 4;
                onlyForplayer = 0;
                shortcut = "turnOut";
                condition = "this animationPhase 'HatchGunner'>0.5 and ((call rhsusf_fnc_findPlayer) == this turretUnit [0,1])";
                statement = "(call rhsusf_fnc_findPlayer) action ['moveToTurret', this, [0,2]];[this,[[0,1],true]] remoteExecCall ['lockTurret']";
            };
            class LoaderGun_Leave: LoaderGun_Use {
                displayName = "Leave M240";
                condition = "vehicle (call rhsusf_fnc_findPlayer) turretUnit [0,2] == (call rhsusf_fnc_findPlayer)";
                shortcut = "turnIn";
                statement = "(call rhsusf_fnc_findPlayer) action ['moveToTurret', this, [0,1]];[this,[[0,1],false]] remoteExecCall ['lockTurret']";
            };
        };
        class EventHandlers: EventHandlers {
            class rhs_duke {
                handleDamage = "_this call rhs_fnc_duke_destruction";
            };
        };
    };
    class rhsusf_m1a2sep2d_usarmy: rhsusf_m1a2sep2_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1a2sep2d_usarmy.paa";
        scope = 2;
        author = "$STR_RHSUSF_AUTHOR_FULL";
        faction = "rhs_faction_usarmy_d";
        vehicleClass = "rhs_vehclass_tank";
        crew = "rhsusf_army_ocp_combatcrewman";
        rhs_decalParameters[] = {"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_D']", "['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_D']"};
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_d_01_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_d_02_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03_co.paa",
            "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_d_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskia2_d_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_d_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv2_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv2_crows_co.paa"
        };
    };
    class rhsusf_m1a2sep2wd_usarmy: rhsusf_m1a2sep2_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1a2sep2wd_usarmy.paa";
        scope = 2;
        author = "$STR_RHSUSF_AUTHOR_FULL";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_tank";
        crew = "rhsusf_army_ucp_combatcrewman";
        rhs_decalParameters[] = {"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_WD']", "['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_WD']"};
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_wd_01_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_wd_02_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
            "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskia2_wd_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_wd_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv2_wd_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv2_crows_wd_co.paa"
        };
    };
    class rhsusf_m1a2sep1tuskid_usarmy: rhsusf_m1a2tank_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1a2sep1tuskid_usarmy.paa";
        model = "\rhsusf\addons\rhsusf_m1a2\m1a2v1_tuski";
        Icon = "\rhsusf\addons\rhsusf_m1a2\icons\M1A2SEPV1TUSKI.paa";
        picture = "\rhsusf\addons\rhsusf_m1a2\icons\M1A2TUSKISIDE_ca.paa";
        scope = 2;
        displayName = "$STR_M1A2SEPTUSKI_Name";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        faction = "rhs_faction_usarmy_d";
        vehicleClass = "rhs_vehclass_tank";
        crew = "rhsusf_army_ocp_combatcrewman";
        rhs_decalParameters[] = {"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_D']", "['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_D']"};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {};
                    class Loader: Loader {};
                    class CommanderMG: CommanderMG {
                        maxTurn = 2;
                    };
                    class LoaderMG: LoaderMG {
                        maxTurn = 117;
                    };
                };
                weapons[] = {
                    "rhs_weap_m256",
                    "RHS_M2_Abrams_Gunner",
                    "rhs_weap_m240_abrams_coax",
                    "rhs_weap_fcs"
                };
                magazines[] = {
                    "rhs_mag_M829A3",
                    "rhs_mag_M830A1",
                    "rhs_mag_200rnd_127x99_SLAP_mag_Tracer_Red",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_mag_762x51_M240_1200",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
                class Reflectors {
                    class Gunner {
                        color[] = {7000, 7400, 9500};
                        ambient[] = {6, 8, 8};
                        position = "Light_G";
                        direction = "Light_G_end";
                        hitpoint = "Light_G";
                        selection = "Light_G";
                        size = 1;
                        innerAngle = 11;
                        outerAngle = 16;
                        coneFadeCoef = 1;
                        intensity = 7;
                        useFlare = 0;
                        dayLight = 0;
                        flareSize = 1;
                        class Attenuation {
                            start = 0.5;
                            constant = 0;
                            linear = 0;
                            quadratic = 0.05;
                            hardLimitStart = 600;
                            hardLimitEnd = 1200;
                        };
                    };
                    class Gunner2: Gunner {
                        position = "light_G_flare";
                        useFlare = 1;
                        innerAngle = 10;
                        outerAngle = 160;
                        coneFadeCoef = 10;
                        intensity = 1;
                        flareSize = 3.25;
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
                aggregateReflectors[] = {{"Gunner"}, {"Gunner2"}};
                armorLights = 0.01;
            };
        };
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6",
            "",
            "",
            "n1",
            "n2",
            "n3",
            "i1",
            "i2",
            "i3"
        };
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tusk_d_01_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tusk_d_02_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03_co.paa",
            "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_tuski_d_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskia2_d_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_d_co.paa"
        };
        class textureSources {
            class woodland {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tusk_wd_01_co.paa",
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tusk_wd_02_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_tuski_wd_co.paa",
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskia2_wd_co.paa",
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_wd_co.paa"
                };
            };
            class desert: woodland {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tusk_d_01_co.paa",
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tusk_d_02_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_tuski_d_co.paa",
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskia2_d_co.paa",
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_d_co.paa"
                };
            };
        };
        textureList[] = {};
        class AnimationSources: AnimationSources {
            class muzzle_rot_hmg3 {
                source = "ammorandom";
                weapon = "RHS_M2_Abrams_Gunner";
            };
            class muzzle_hide_hmg3 {
                source = "reload";
                weapon = "RHS_M2_Abrams_Gunner";
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
            class SLAT_1_source {
                source = "Hit";
                hitpoint = "SLAT_1_hitpoint";
            };
        };
        class HitPoints: HitPoints {
            class era_1_hitpoint {
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e1";
                armorComponent = "e1";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e2";
                armorComponent = "e2";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e3";
                armorComponent = "e3";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e4";
                armorComponent = "e4";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e5";
                armorComponent = "e5";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e6";
                armorComponent = "e6";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e7";
                armorComponent = "e7";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e8";
                armorComponent = "e8";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e9";
                armorComponent = "e9";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e10";
                armorComponent = "e10";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e11";
                armorComponent = "e11";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e12";
                armorComponent = "e12";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e13";
                armorComponent = "e13";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e14";
                armorComponent = "e14";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e15";
                armorComponent = "e15";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e16";
                armorComponent = "e16";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e17";
                armorComponent = "e17";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e18";
                armorComponent = "e18";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e19";
                armorComponent = "e19";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e20";
                armorComponent = "e20";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e21";
                armorComponent = "e21";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e22";
                armorComponent = "e22";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e23";
                armorComponent = "e23";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e24";
                armorComponent = "e24";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e25";
                armorComponent = "e25";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e26";
                armorComponent = "e26";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e27";
                armorComponent = "e27";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e28";
                armorComponent = "e28";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e29";
                armorComponent = "e29";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e30";
                armorComponent = "e30";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e31";
                armorComponent = "e31";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e32";
                armorComponent = "e32";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e33";
                armorComponent = "e33";
                passThrough = 0;
                minimalHit = -0.5;
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
                simulation = "RHS_ERA_Arat1";
                armor = -100;
                material = -1;
                name = "e34";
                armorComponent = "e34";
                passThrough = 0;
                minimalHit = -0.5;
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
            class SLAT_1_hitpoint {
                simulation = "RHS_SLAT";
                armor = -60;
                material = -1;
                name = "SLAT_1";
                armorComponent = "SLAT_1";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.07;
                radius = 0.16;
                visual = "-";
            };
        };
    };
    class rhsusf_m1a2sep1tuskiwd_usarmy: rhsusf_m1a2sep1tuskid_usarmy {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1a2sep1tuskiwd_usarmy.paa";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_tank";
        crew = "rhsusf_army_ucp_combatcrewman";
        rhs_decalParameters[] = {"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_WD']", "['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_WD']"};
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tusk_wd_01_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tusk_wd_02_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
            "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_tuski_wd_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskia2_wd_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_wd_co.paa"
        };
    };
    class rhsusf_m1a2sep1tuskiiwd_usarmy: rhsusf_m1a2sep1tuskid_usarmy {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1a2sep1tuskiiwd_usarmy.paa";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        faction = "rhs_faction_usarmy_wd";
        vehicleClass = "rhs_vehclass_tank";
        crew = "rhsusf_army_ucp_combatcrewman";
        rhs_decalParameters[] = {"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_WD']", "['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_WD']"};
        model = "\rhsusf\addons\rhsusf_m1a2\m1a2v1_tuskii";
        Icon = "\rhsusf\addons\rhsusf_m1a2\icons\M1A2SEPV1TUSKII.paa";
        picture = "\rhsusf\addons\rhsusf_m1a2\icons\M1A2TUSKIISIDE_ca.paa";
        displayName = "$STR_M1A2SEPWDTUSKII_Name";
        rhs_duke_type = "rhsusf_duke_m1a2";
        class AnimationSources: AnimationSources {
            class DUKE_Hide {
                source = "user";
                mass = -20;
                displayName = "hide DUKE antennas";
                author = "$STR_RHSUSF_AUTHOR_FULL";
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
            class era_46_source {
                source = "Hit";
                hitpoint = "era_46_hitpoint";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2_Mixed";
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
                simulation = "RHS_ERA_Arat2";
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
                simulation = "RHS_ERA_Arat2";
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
                simulation = "RHS_ERA_Arat2";
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
                simulation = "RHS_ERA_Arat2";
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
                simulation = "RHS_ERA_Arat2";
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
                simulation = "RHS_ERA_Arat2";
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
                simulation = "RHS_ERA_Arat2";
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
                simulation = "RHS_ERA_Arat2";
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
                simulation = "RHS_ERA_Arat2";
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
                simulation = "RHS_ERA_Arat2";
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
                simulation = "RHS_ERA_Arat2";
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
                simulation = "RHS_ERA_Arat2";
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
                simulation = "RHS_ERA_Arat2";
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
            class era_46_hitpoint {
                simulation = "RHS_ERA_Arat2";
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
        };
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6",
            "duke_tex",
            "",
            "n1",
            "n2",
            "n3",
            "i1",
            "i2",
            "i3"
        };
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tuskii_wd_01_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tuskii_wd_02_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
            "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_tuski_wd_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskiia2_wd_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_wd_co.paa",
            "rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
        };
        class textureSources {
            class woodland {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tusk_wd_01_co.paa",
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tusk_wd_02_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_tuski_wd_co.paa",
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskiia2_wd_co.paa",
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_wd_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
                };
            };
            class desert: woodland {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_d_01_co.paa",
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_d_02_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_tuski_d_co.paa",
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskiia2_d_co.paa",
                    "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_d_co.paa",
                    "rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_d_co.paa"
                };
            };
        };
        textureList[] = {};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        weapons[] = {"rhsusf_weap_M250", "rhsusf_weap_duke"};
                        magazines[] = {"rhsusf_mag_L8A3_12", "rhsusf_mag_duke"};
                    };
                    class Loader: Loader {};
                    class CommanderMG: CommanderMG {};
                    class LoaderMG: LoaderMG {};
                };
            };
        };
        class Attributes: Attributes {
            class ObjectTexture: ObjectTexture {};
            class rhs_hideIFFPanel: rhs_hideIFFPanel {};
            class rhs_hideMiles: rhs_hideMiles {};
            class rhs_hideDUKE: rhs_hideMiles {
                displayName = "hide DUKE antennas";
                property = "rhs_hideDUKE";
                expression = "_this animate ['DUKE_Hide',_value,true];if(_value isEqualTo 1)then{_this removeWeaponTurret ['rhsusf_weap_duke',[0,0]]}";
            };
            class rhs_decalBarrel_type: rhs_decalBarrel_type {};
            class rhs_decalBarrel: rhs_decalBarrel {};
            class rhs_decalPlatoon_type: rhs_decalPlatoon_type {};
            class rhs_decalPlatoon: rhs_decalPlatoon {};
            class rhs_ammoslot_1_type: rhs_ammoslot_1_type {};
            class rhs_ammoslot_1: rhs_ammoslot_1 {};
            class rhs_ammoslot_2_type: rhs_ammoslot_2_type {};
            class rhs_ammoslot_2: rhs_ammoslot_2 {};
            class rhs_ammoslot_3_type: rhs_ammoslot_3_type {};
            class rhs_ammoslot_3: rhs_ammoslot_3 {};
        };
        class EventHandlers: EventHandlers {
            class rhs_duke {
                handleDamage = "_this call rhs_fnc_duke_destruction";
            };
        };
    };
    class rhsusf_m1a2sep1tuskiid_usarmy: rhsusf_m1a2sep1tuskiiwd_usarmy {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1a2sep1tuskiid_usarmy.paa";
        hiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tuskii_d_01_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tuskii_d_02_co.paa",
            "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_d_03_co.paa",
            "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_tuski_d_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskiia2_d_co.paa",
            "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_d_co.paa",
            "rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_d_co.paa"
        };
        author = "$STR_RHSUSF_AUTHOR_FULL";
        faction = "rhs_faction_usarmy_d";
        vehicleClass = "rhs_vehclass_tank";
        crew = "rhsusf_army_ocp_combatcrewman";
        rhs_decalParameters[] = {"['Label', cM1PlnSymPlaces, 'ArmyPlt_Abrams_D']", "['Label', cM1BarrelSymPlaces, 'BarrelArt_Abrams_D']"};
    };
};
