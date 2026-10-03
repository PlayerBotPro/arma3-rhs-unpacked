class DefaultEventhandlers;
class CfgPatches {
    class rhsgref_c_air {
        units[] = {
            "rhs_l159_CDF",
            "rhs_l159_CDF_plamen",
            "rhs_l159_CDF_CAP",
            "rhs_l159_CDF_CAS",
            "rhs_l39_cdf",
            "rhs_l159_CDF_b",
            "rhs_l159_CDF_b_plamen",
            "rhs_l159_CDF_b_CAP",
            "rhs_l159_CDF_b_CAS",
            "rhs_l39_cdf_b",
            "rhs_vs1_seat",
            "rhs_an2",
            "rhs_an2_b",
            "rhs_uh1h_hidf",
            "rhs_uh1h_hidf_gunship",
            "rhs_uh1h_hidf_unarmed",
            "rhs_uh1h_un",
            "rhs_uh1h_idap"
        };
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {"rhsgref_c_airweapons", "rhsgref_main"};
        name = "GREF Planes";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class CfgMovesBasic {
    class DefaultDie;
    class BlendAnims;
    class ManActions {
        RHS_L159_pilot = "RHS_L159_pilot";
        RHS_L39_pilot = "RHS_L39_pilot";
        RHS_AN2_Cargo = "RHS_AN2_Cargo";
        RHS_AN2_Cargo01 = "RHS_AN2_Cargo01";
        RHS_AN2_Cargo02 = "RHS_AN2_Cargo02";
        RHS_AN2_Cargo03 = "RHS_AN2_Cargo03";
        RHS_AN2_Pilot = "RHS_AN2_Pilot";
        RHS_UH1H_Pilot = "RHS_UH1H_Pilot";
        RHS_UH1H_CoPilot = "RHS_UH1H_CoPilot";
        RHS_UH1H_Gunner_L = "RHS_UH1H_Gunner_L";
        RHS_UH1H_Gunner_R = "RHS_UH1H_Gunner_R";
        RHS_UH1H_Gunner = "RHS_UH1H_Gunner";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class KIA_RHS_UH1H_Pilot_01: DefaultDie {
            actions = "DeadActions";
            file = "rhsgref\addons\rhsgref_air\uh1h\data\anims\kia_uh1h_pilot_01.rtm";
            speed = 0.5;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {"Unconscious", 3};
        };
        class KIA_RHS_UH1H_Pilot_02: KIA_RHS_UH1H_Pilot_01 {
            file = "rhsgref\addons\rhsgref_air\uh1h\data\anims\kia_uh1h_pilot_02.rtm";
            speed = 0.33;
        };
        class KIA_RHS_UH1H_CoPilot_01: DefaultDie {
            actions = "DeadActions";
            file = "rhsgref\addons\rhsgref_air\uh1h\data\anims\kia_uh1h_copilot_01.rtm";
            speed = 0.5;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {"Unconscious", 3};
        };
        class KIA_RHS_UH1H_Gunner_L: DefaultDie {
            actions = "DeadActions";
            file = "rhsgref\addons\rhsgref_air\uh1h\data\anims\kia_uh1h_gunner_l.rtm";
            speed = 1;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {"Unconscious", 3};
        };
        class KIA_RHS_UH1H_Gunner_R: DefaultDie {
            actions = "DeadActions";
            file = "rhsgref\addons\rhsgref_air\uh1h\data\anims\kia_uh1h_gunner_r.rtm";
            speed = 1;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {"Unconscious", 3};
        };
        class Crew;
        class RHS_L159_pilot: Crew {
            file = "\rhsgref\addons\rhsgref_c_air\L159\Anim\L159sed.rtm";
            interpolateTo[] = {"KIA_RHS_L159_pilot", 1};
            speed = 10000000000;
            leaning = "crewShake_half";
        };
        class RHS_L39_pilot: RHS_L159_pilot {
            file = "\rhsgref\addons\rhsgref_c_air\L159\Anim\L39sed.rtm";
        };
        class KIA_RHS_L159_pilot: DefaultDie {
            actions = "DeadActions";
            file = "\rhsgref\addons\rhsgref_c_air\L159\Anim\L159smrt.rtm";
            speed = 10000000000;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_KIA_AN2_Pilot: DefaultDie {
            actions = "DeadActions";
            file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_KIA_pilot.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {1};
        };
        class RHS_AN2_Pilot: Crew {
            file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_Pilot.rtm";
            interpolateTo[] = {"RHS_KIA_AN2_Pilot", 1};
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {1};
        };
        class RHS_KIA_AN2_Cargo: RHS_KIA_AN2_Pilot {};
        class RHS_AN2_Cargo: Crew {
            file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_Cargo.rtm";
            interpolateTo[] = {"RHS_KIA_AN2_Cargo", 1};
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {1};
        };
        class RHS_KIA_AN2_Cargo01: DefaultDie {
            actions = "DeadActions";
            file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_KIA_Cargo01.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_AN2_Cargo01: Crew {
            file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_Cargo01.rtm";
            interpolateTo[] = {"RHS_KIA_AN2_Cargo01", 0.1};
            connectTo[] = {
                "RHS_AN2_Cargo01",
                0.1,
                "RHS_AN2_Cargo01_V1",
                0.1,
                "RHS_AN2_Cargo01_V2",
                0.1,
                "RHS_AN2_Cargo01_V3",
                0.1,
                "RHS_AN2_Cargo01_V4",
                0.1,
                "RHS_AN2_Cargo01_V5",
                0.1
            };
            equivalentTo = "RHS_AN2_Cargo01";
            variantsAI[] = {
                "RHS_AN2_Cargo01",
                0.4,
                "RHS_AN2_Cargo01_V1",
                0.1,
                "RHS_AN2_Cargo01_V2",
                0.1,
                "RHS_AN2_Cargo01_V3",
                0.1,
                "RHS_AN2_Cargo01_V4",
                0.1,
                "RHS_AN2_Cargo01_V5",
                0.1
            };
            variantAfter[] = {5, 10, 20};
            speed = 0.3;
        };
        class RHS_AN2_Cargo01_V1: RHS_AN2_Cargo01 {
            file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_Cargo01_V1.rtm";
            connectTo[] = {"RHS_AN2_Cargo01", 0.1};
            speed = 0.3125;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_AN2_Cargo01_V2: RHS_AN2_Cargo01 {
            file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_Cargo01_V2.rtm";
            connectTo[] = {"RHS_AN2_Cargo01", 0.1};
            speed = 0.410959;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_AN2_Cargo01_V3: RHS_AN2_Cargo01 {
            file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_Cargo01_V3.rtm";
            connectTo[] = {"RHS_AN2_Cargo01", 0.1};
            speed = 0.333333;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_AN2_Cargo01_V4: RHS_AN2_Cargo01 {
            file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_Cargo01_V4.rtm";
            connectTo[] = {"RHS_AN2_Cargo01", 0.1};
            speed = 0.410959;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_AN2_Cargo01_V5: RHS_AN2_Cargo01 {
            file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_Cargo01_V5.rtm";
            connectTo[] = {"RHS_AN2_Cargo01", 0.1};
            speed = 0.177515;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_AN2_Cargo02: Crew {
            file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_Cargo02.rtm";
            interpolateTo[] = {"RHS_KIA_AN2_Cargo01", 0.1};
            connectTo[] = {
                "RHS_AN2_Cargo02",
                0.1,
                "RHS_AN2_Cargo02_V1",
                0.1,
                "RHS_AN2_Cargo02_V2",
                0.1,
                "RHS_AN2_Cargo02_V3",
                0.1,
                "RHS_AN2_Cargo02_V4",
                0.1,
                "RHS_AN2_Cargo02_V5",
                0.1
            };
            equivalentTo = "RHS_AN2_Cargo02";
            variantsAI[] = {
                "RHS_AN2_Cargo02",
                0.4,
                "RHS_AN2_Cargo02_V1",
                0.1,
                "RHS_AN2_Cargo02_V2",
                0.1,
                "RHS_AN2_Cargo02_V3",
                0.1,
                "RHS_AN2_Cargo02_V4",
                0.1,
                "RHS_AN2_Cargo02_V5",
                0.1
            };
            variantAfter[] = {5, 10, 20};
            speed = 0.3;
        };
        class RHS_AN2_Cargo02_V1: RHS_AN2_Cargo02 {
            file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_Cargo02_V1.rtm";
            connectTo[] = {"RHS_AN2_Cargo02", 0.1};
            speed = 0.3125;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_AN2_Cargo02_V2: RHS_AN2_Cargo02 {
            file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_Cargo02_V2.rtm";
            connectTo[] = {"RHS_AN2_Cargo02", 0.1};
            speed = 0.37037;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_AN2_Cargo02_V3: RHS_AN2_Cargo02 {
            file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_Cargo02_V3.rtm";
            connectTo[] = {"RHS_AN2_Cargo02", 0.1};
            speed = 0.410959;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_AN2_Cargo02_V4: RHS_AN2_Cargo02 {
            file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_Cargo02_V4.rtm";
            connectTo[] = {"RHS_AN2_Cargo02", 0.1};
            speed = 0.535714;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_AN2_Cargo02_V5: RHS_AN2_Cargo02 {
            file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_Cargo02_V5.rtm";
            connectTo[] = {"RHS_AN2_Cargo02", 0.1};
            speed = 0.333333;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_AN2_Cargo03: Crew {
            file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_Cargo03.rtm";
            interpolateTo[] = {"RHS_KIA_AN2_Cargo01", 0.1};
            connectTo[] = {
                "RHS_AN2_Cargo03",
                0.1,
                "RHS_AN2_Cargo03_V1",
                0.1,
                "RHS_AN2_Cargo03_V2",
                0.1,
                "RHS_AN2_Cargo03_V3",
                0.1,
                "RHS_AN2_Cargo03_V4",
                0.1,
                "RHS_AN2_Cargo03_V5",
                0.1
            };
            equivalentTo = "RHS_AN2_Cargo03";
            variantsAI[] = {
                "RHS_AN2_Cargo03",
                0.4,
                "RHS_AN2_Cargo03_V1",
                0.1,
                "RHS_AN2_Cargo03_V2",
                0.1,
                "RHS_AN2_Cargo03_V3",
                0.1,
                "RHS_AN2_Cargo03_V4",
                0.1,
                "RHS_AN2_Cargo03_V5",
                0.1
            };
            variantAfter[] = {5, 10, 20};
            speed = 0.3;
        };
        class RHS_AN2_Cargo03_V1: RHS_AN2_Cargo03 {
            file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_Cargo03_V1.rtm";
            connectTo[] = {"RHS_AN2_Cargo03", 0.1};
            speed = 0.245902;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_AN2_Cargo03_V2: RHS_AN2_Cargo03 {
            file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_Cargo03_V2.rtm";
            connectTo[] = {"RHS_AN2_Cargo03", 0.1};
            speed = 0.410959;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_AN2_Cargo03_V3: RHS_AN2_Cargo03 {
            file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_Cargo03_V3.rtm";
            connectTo[] = {"RHS_AN2_Cargo03", 0.1};
            speed = 0.625;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_AN2_Cargo03_V4: RHS_AN2_Cargo03 {
            file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_Cargo03_V4.rtm";
            connectTo[] = {"RHS_AN2_Cargo03", 0.1};
            speed = 0.410959;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_AN2_Cargo03_V5: RHS_AN2_Cargo03 {
            file = "rhsgref\addons\rhsgref_air\AN2\data\anim\AN2_Cargo03_V5.rtm";
            connectTo[] = {"RHS_AN2_Cargo03", 0.1};
            speed = 0.177515;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_UH1H_Pilot: Crew {
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {1};
            leftLegIKCurve[] = {1};
            rightLegIKCurve[] = {1};
            leaning = "crewShake_RHS_UH1H";
            file = "rhsgref\addons\rhsgref_air\uh1h\data\anims\uh1h_pilot.rtm";
            speed = 10000000000;
            looped = 0;
            interpolateTo[] = {
                "KIA_RHS_UH1H_Pilot_02",
                1,
                "KIA_RHS_UH1H_Pilot_01",
                1
            };
        };
        class RHS_UH1H_CoPilot: Crew {
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {1};
            leftLegIKCurve[] = {1};
            rightLegIKCurve[] = {1};
            leaning = "crewShake_RHS_UH1H";
            file = "rhsgref\addons\rhsgref_air\uh1h\data\anims\uh1h_copilot.rtm";
            speed = 10000000000;
            looped = 0;
            interpolateTo[] = {"KIA_RHS_UH1H_CoPilot_01", 0.1};
        };
        class RHS_UH1H_Gunner: Crew {
            file = "rhsgref\addons\rhsgref_air\uh1h\data\anims\uh1h_gunner_r.rtm";
            leaning = "crewShake_RHS_UH1H";
            speed = 10000000000;
            looped = 0;
            interpolateTo[] = {"KIA_RHS_UH1H_Gunner_R", 0.1};
        };
        class RHS_UH1H_Gunner_L: Crew {
            file = "rhsgref\addons\rhsgref_air\uh1h\data\anims\uh1h_gunner_l.rtm";
            leaning = "crewShake_RHS_UH1H";
            speed = 10000000000;
            looped = 0;
            interpolateTo[] = {"KIA_RHS_UH1H_Gunner_L", 0.1};
        };
        class RHS_UH1H_Gunner_R: Crew {
            file = "rhsgref\addons\rhsgref_air\uh1h\data\anims\uh1h_gunner_r.rtm";
            leaning = "crewShake_RHS_UH1H";
            speed = 10000000000;
            looped = 0;
            interpolateTo[] = {"KIA_RHS_UH1H_Gunner_R", 0.1};
        };
    };
    class BlendAnims: BlendAnims {
        crewShake_RHS_UH1H[] = {
            "weapon",
            0,
            "Camera",
            0.5,
            "launcher",
            0.5,
            "Head",
            0.5,
            "Neck",
            0.5,
            "Neck1",
            0.5,
            "LeftShoulder",
            0.45,
            "LeftArm",
            0.35,
            "LeftArmRoll",
            0.25,
            "LeftForeArm",
            0.15,
            "RightShoulder",
            0.45,
            "RightArm",
            0.35,
            "RightArmRoll",
            0.25,
            "RightForeArm",
            0.315,
            "spine3",
            0.475,
            "spine2",
            0.45,
            "spine1",
            0.4,
            "spine",
            0.35,
            "pelvis",
            0.2,
            "LeftUpLeg",
            0.1,
            "LeftUpLegRoll",
            0.25,
            "LeftLeg",
            0.1,
            "RightUpLeg",
            0.1,
            "RightUpLegRoll",
            0.25,
            "RightLeg",
            0.1
        };
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class vs1_seatEjection {
                file = "\rhsgref\addons\rhsgref_c_air\scripts\rhs_seatEjection_vs1.sqf";
                description = "VS-1 Seat Ejection script";
            };
        };
    };
};
class RscOpticsText;
class RscOpticsValue;
class RscText;
class RscPicture;
class RscControlsGroup;
class HScrollbar;
class VScrollbar;
class RscInGameUI {
    class RscUnitInfoArtillery;
    class RHSUSF_RscUnitInfoAirRTDFullDigital_NoRadar;
    class RscUnitInfoAirPlane;
    class RHSGREF_RscUnitInfoAir_UH1H: RscUnitInfoArtillery {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
        controls[] = {
            "CA_BackgroundVehicle",
            "CA_BackgroundVehicleTitle",
            "CA_BackgroundVehicleTitleDark",
            "CA_BackgroundFuel",
            "CA_Vehicle",
            "CA_VehicleRole",
            "CA_HitZones",
            "CA_VehicleTogglesBackground",
            "CA_VehicleToggles",
            "CA_SpeedBackground",
            "CA_SpeedUnits",
            "CA_Speed",
            "CA_ValueFuel",
            "CA_AltBackground",
            "CA_AltUnits",
            "CA_Alt",
            "WeaponInfoControlsGroupRight",
            "CA_Zeroing",
            "CA_Mode"
        };
    };
    class RHSGREF_RscUnitInfoAirRTDFullDigital_UH1H: RHSUSF_RscUnitInfoAirRTDFullDigital_NoRadar {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
    };
    class RHSGREF_RscUnitInfoJet: RscUnitInfoAirPlane {
        controls[] = {
            "CA_BackgroundVehicle",
            "CA_BackgroundVehicleTitle",
            "CA_BackgroundVehicleTitleDark",
            "CA_BackgroundFuel",
            "CA_Vehicle",
            "CA_VehicleRole",
            "CA_HitZones",
            "CA_VehicleTogglesBackground",
            "CA_VehicleToggles",
            "CA_SpeedBackground",
            "CA_SpeedUnits",
            "CA_Speed",
            "CA_ValueFuel",
            "CA_AltBackground",
            "CA_AltUnits",
            "CA_Alt",
            "WeaponInfoControlsGroupRight",
            "CA_Throttle",
            "CA_Mode"
        };
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call rhsusf_fnc_announcer;_this spawn rhs_fnc_dynamicObjectDrawing_loop";
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
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RHS_Effects_Helicopter_Hull_Destruction;
class CfgNonAIVehicles {
    class ProxyWeapon;
    class ProxyRetex;
    class Proxyuh1h_wreck: ProxyRetex {
        hiddenSelections[] = {"camo1", "camo2"};
        model = "rhsgref\addons\rhsgref_air\uh1h\uh1h_wreck";
    };
};
class CfgVehicles {
    class Air;
    class Helicopter: Air {
        class ViewPilot;
        class Turrets;
        class HitPoints {
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
            class HitGlass5;
            class HitGlass6;
            class HitHull;
            class HitEngine;
            class HitAvionics;
        };
    };
    class Helicopter_Base_F: Helicopter {
        class Turrets: Turrets {
            class MainTurret;
        };
        class HitPoints: HitPoints {
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
            class HitGlass5;
            class HitGlass6;
            class HitMissiles;
            class HitHull;
            class HitFuel;
            class HitEngine;
            class HitAvionics;
            class HitVRotor;
            class HitHRotor;
        };
        class AnimationSources;
        class Eventhandlers;
        class ViewOptics;
        class CargoTurret;
        class RotorLibHelicopterProperties;
        class Reflectors {
            class Right;
        };
    };
    class Heli_Attack_02_base_F: Helicopter_Base_F {
        class RotorLibHelicopterProperties;
        class Sounds;
        class HitPoints: HitPoints {
            class HitEngine1;
        };
    };
    class Helicopter_Base_H: Helicopter_Base_F {
        class ViewOptics;
        class Turrets: Turrets {
            class CopilotTurret;
            class MainTurret;
        };
        class AnimationSources;
        class HitPoints: HitPoints {
            class HitHull;
            class HitFuel;
            class HitAvionics;
            class HitMissiles;
            class HitEngine;
            class HitHRotor;
            class HitVRotor;
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
            class HitGlass5;
            class HitGlass6;
        };
        class CargoTurret;
        class RotorLibHelicopterProperties;
        class Eventhandlers;
    };
    class rhs_uh1h_base: Helicopter_Base_H {
        author = "$STR_RHS_AUTHOR_FULL";
        forceInGarage = 0;
        picture = "rhsgref\addons\rhsgref_air\uh1h\ui\rhs_uh1h_pic_ca.paa";
        icon = "rhsgref\addons\rhsgref_air\uh1h\ui\icon_uh1h_ca.paa";
        mapSize = 14;
        model = "rhsgref\addons\rhsgref_air\uh1h\uh1h.p3d";
        displayName = "UH1H";
        unitInfoType = "RHSGREF_RscUnitInfoAir_UH1H";
        unitInfoTypeRTD = "RHSGREF_RscUnitInfoAirRTDFullDigital_UH1H";
        destrType = "DestructWreck";
        cargoAction[] = {
            "passenger_apc_narrow_generic02",
            "passenger_apc_narrow_generic02",
            "passenger_generic02_foldhands",
            "passenger_generic01_leanleft",
            "passenger_flatground_generic02",
            "passenger_flatground_leanleft"
        };
        GetInAction = "pilot_Heli_Light_02_Enter";
        GetOutAction = "pilot_Heli_Light_02_Exit";
        driverAction = "RHS_UH1H_Pilot";
        driverInAction = "RHS_UH1H_Pilot";
        driverLeftHandAnimName = "collective";
        driverDoor = "door_pilot";
        preciseGetInOut = 1;
        driverOpticsModel = "";
        transportSoldier = 6;
        cargoProxyIndexes[] = {1, 2, 3, 4, 5, 6, 7, 8};
        getInProxyOrder[] = {1, 2, 3, 4, 5, 6, 7, 8};
        cargoCompartments[] = {"compartment3"};
        getInRadius = 1;
        hideWeaponsDriver = 0;
        gForceShakeAttenuation = 0.3;
        minGForce = 0.05;
        maxGForce = 0.1;
        class Exhausts {
            class Exhaust1 {
                position = "Exhaust";
                direction = "Exhaust_dir";
                effect = "ExhaustsEffectHeliBig";
            };
        };
        availableForSupportTypes[] = {"Drop", "Transport"};
        supplyradius = 2;
        epeImpulseDamageCoef = 20;
        damageResistance = 0.01039;
        crewCrashProtection = 0.2;
        extCameraPosition[] = {0, 2, -17};
        threat[] = {0.4, 0, 0};
        showCrewAim = 0;
        mainRotorSpeed = 1.2;
        backRotorSpeed = 6.1;
        fuelCapacity = 781;
        fuelConsumptionRate = 0.09;
        maxFordingDepth = 1;
        driveOnComponent[] = {"Skids"};
        mainBladeRadius = 8.2;
        tailBladeRadius = 1.5;
        washDownStrength = "0.9f";
        maxSpeed = 217;
        slingLoadMemoryPoint = "slingLoad0";
        slingLoadMaxCargoMass = 1900;
        radarType = 0;
        liftForceCoef = 1.3;
        cyclicAsideForceCoef = 0.55;
        cyclicForwardForceCoef = 0.5;
        backrotorforcecoef = 0.6;
        bodyFrictionCoef = 0.6;
        sensitivity = 0.5;
        maximumLoad = 4309.128;
        irTarget = 1;
        irTargetSize = 0.9;
        visualTarget = 1;
        visualTargetSize = 1;
        radarTarget = 1;
        radarTargetSize = 1;
        LockDetectionSystem = "0";
        incomingMissileDetectionSystem = "0";
        class RotorLibHelicopterProperties: RotorLibHelicopterProperties {
            RTDconfig = "rhsgref\addons\rhsgref_c_air\uh1h\rtd_uh1h.xml";
            autoHoverCorrection[] = {5, 2.4, 0};
            defaultCollective = 0.75;
            starterTime = 10;
            throttleOffToIdle = 10;
            throttleIdleToOff = 10;
            throttleIdleToFull = 8;
            throttleFullToIdle = 15;
            maxTorque = 2168;
            maxMainRotorStress = 130000;
            maxTailRotorStress = 10000;
            retreatBladeStallWarningSpeed = 63;
            rtd_center = "rtd_center";
        };
        enableManualFire = 0;
        class MFD {};
        class ViewPilot: ViewPilot {
            initFov = 0.85;
            maxFov = 0.95;
        };
        soundGetIn[] = {"rhsgref\addons\rhsgref_air\uh1h\Sounds\open_close", 0.56234133, 1};
        soundGetOut[] = {
            "rhsgref\addons\rhsgref_air\uh1h\Sounds\open_close",
            0.7943282,
            1,
            20
        };
        soundEngineOnInt[] = {"rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_start_int", 0.4, 1};
        soundEngineOnExt[] = {
            "rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_start_ext",
            0.7943282,
            1,
            600
        };
        soundEngineOffInt[] = {"rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_stop_int", 0.4, 1};
        soundEngineOffExt[] = {
            "rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_stop_ext",
            0.7943282,
            1,
            600
        };
        soundGeneralCollision1[] = {
            "A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",
            1,
            1,
            100
        };
        soundGeneralCollision2[] = {
            "A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",
            1,
            1,
            100
        };
        soundGeneralCollision3[] = {
            "A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",
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
            "A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
            1,
            1,
            100
        };
        soundBushCollision2[] = {
            "A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
            1,
            1,
            100
        };
        soundBushCollision3[] = {
            "A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
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
            "A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",
            1,
            1,
            100
        };
        soundWaterCollision2[] = {
            "A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",
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
        soundDammage[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_ext_1", 3.1622777, 1};
        soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1", 1, 1};
        soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2", 0.7, 1};
        rotorDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_open_1", 1, 1};
        rotorDamageOut[] = {
            "A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1",
            2.5118864,
            1,
            150
        };
        rotorDamage[] = {"rotorDamageInt", "rotorDamageOut"};
        tailDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail", 1, 1};
        tailDamageOut[] = {
            "A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
            1,
            1,
            300
        };
        tailDamage[] = {"tailDamageInt", "tailDamageOut"};
        landingSoundInt0[] = {
            "A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open",
            1,
            1,
            100
        };
        landingSoundInt1[] = {
            "A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open",
            1,
            1,
            100
        };
        landingSoundInt[] = {"landingSoundInt0", 0.5, "landingSoundInt1", 0.5};
        landingSoundOut0[] = {
            "A3\Sounds_F\vehicles\air\noises\landing_skids_ext1",
            1.7782794,
            1,
            100
        };
        landingSoundOut1[] = {
            "A3\Sounds_F\vehicles\air\noises\landing_skids_ext1",
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
        class Sounds {
            class Engine {
                sound[] = {
                    "rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_engine_ext_2",
                    1.2889254,
                    1,
                    1200
                };
                frequency = "rotorSpeed";
                volume = "camPos*((rotorSpeed-0.72)*4)";
            };
            class RotorLowOut {
                sound[] = {
                    "rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_rotor_ext_1",
                    1.2589254,
                    1,
                    1500
                };
                frequency = "rotorSpeed";
                volume = "camPos*(0 max (rotorSpeed-0.1))";
                cone[] = {1.6, 3.14, 2, 0.5};
            };
            class RotorHighOut {
                sound[] = {
                    "rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_rotor_high_ext_1",
                    1.2589254,
                    1,
                    1500
                };
                frequency = "rotorSpeed";
                volume = "camPos*10*(0 max (rotorThrust-0.9))";
                cone[] = {1.6, 3.14, 2, 0.5};
            };
            class EngineIn {
                sound[] = {"rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_engine_int_1", 1, 1};
                frequency = "rotorSpeed";
                volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
            };
            class RotorLowIn {
                sound[] = {"rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_rotor_int_1", 1, 1};
                frequency = "rotorSpeed";
                volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
            };
            class RotorHighIn {
                sound[] = {"rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_rotor_high_int_1", 1, 1};
                frequency = "rotorSpeed";
                volume = "(1-camPos)*3*(rotorThrust-0.9)";
            };
            class TransmissionDamageExt_phase1 {
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
                    1,
                    1,
                    150
                };
                frequency = "0.66 + rotorSpeed / 3";
                volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
            };
            class TransmissionDamageExt_phase2 {
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
                    1,
                    1,
                    150
                };
                frequency = "0.66 + rotorSpeed / 3";
                volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
            };
            class TransmissionDamageInt_phase1 {
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
                    1,
                    1,
                    150
                };
                frequency = "0.66 + rotorSpeed / 3";
                volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
            };
            class TransmissionDamageInt_phase2 {
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
                    1,
                    1,
                    150
                };
                frequency = "0.66 + rotorSpeed / 3";
                volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
            };
            class damageAlarmInt {
                sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor", 0.31622776, 1};
                frequency = 1;
                volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
            };
            class damageAlarmExt {
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
                    0.2238721,
                    1,
                    20
                };
                frequency = 1;
                volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
            };
            class rotorLowAlarmInt {
                sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low", 0.31622776, 1};
                frequency = 1;
                volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
            };
            class rotorLowAlarmExt {
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
                    0.2238721,
                    1,
                    20
                };
                frequency = 1;
                volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
            };
            class scrubLandInt {
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\scrubLandInt_open",
                    1,
                    1,
                    100
                };
                frequency = 1;
                volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
            };
            class scrubLandExt {
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\scrubLandExt",
                    1,
                    1,
                    100
                };
                frequency = 1;
                volume = "camPos * (scrubLand factor[0.02, 0.05])";
            };
            class scrubBuildingInt {
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\scrubBuildingInt",
                    1,
                    1,
                    100
                };
                frequency = 1;
                volume = "2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
            };
            class scrubBuildingExt {
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\scrubBuildingExt",
                    1,
                    1,
                    100
                };
                frequency = 1;
                volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
            };
            class scrubTreeInt {
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
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
                sound[] = {
                    "A3\Sounds_F\vehicles\noises\rain1_int_open",
                    1,
                    1,
                    100
                };
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
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\wind_open_int",
                    1,
                    1,
                    50
                };
                frequency = 1;
                volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
            };
            class WindLateralMovementInt {
                sound[] = {
                    "A3\Sounds_F\vehicles\air\noises\wind_lateral_open_int",
                    1,
                    1,
                    50
                };
                frequency = 1;
                volume = "(1-camPos)*lateralMovement*((speed factor [5,40]) + (speed factor [-5,-40]))";
            };
            class GStress {
                sound[] = {
                    "A3\Sounds_F\vehicles\noises\vehicle_stress2b",
                    0.11622776,
                    1,
                    50
                };
                frequency = 1;
                volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
            };
        };
        class SoundsExt {
            class SoundEvents {};
            class Sounds {
                class Engine {
                    sound[] = {
                        "rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_engine_ext_2",
                        1.2889254,
                        1,
                        1200
                    };
                    frequency = "rotorSpeed";
                    volume = "camPos*((rotorSpeed-0.72)*4)";
                };
                class RotorLowOut {
                    sound[] = {
                        "rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_rotor_ext_1",
                        1.2589254,
                        1,
                        1500
                    };
                    frequency = "rotorSpeed";
                    volume = "camPos*(0 max (rotorSpeed-0.1))";
                    cone[] = {1.6, 3.14, 2, 0.5};
                };
                class RotorHighOut {
                    sound[] = {
                        "rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_rotor_high_ext_1",
                        1.2589254,
                        1,
                        1500
                    };
                    frequency = "rotorSpeed";
                    volume = "camPos*10*(0 max (rotorThrust-0.9))";
                    cone[] = {1.6, 3.14, 2, 0.5};
                };
                class EngineIn {
                    sound[] = {"rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_engine_int_1", 1, 1};
                    frequency = "rotorSpeed";
                    volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
                };
                class RotorLowIn {
                    sound[] = {"rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_rotor_int_1", 1, 1};
                    frequency = "rotorSpeed";
                    volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
                };
                class RotorHighIn {
                    sound[] = {"rhsgref\addons\rhsgref_air\uh1h\sounds\uh1h_rotor_high_int_1", 1, 1};
                    frequency = "rotorSpeed";
                    volume = "(1-camPos)*3*(rotorThrust-0.9)";
                };
                class TransmissionDamageExt_phase1 {
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
                        1,
                        1,
                        150
                    };
                    frequency = "0.66 + rotorSpeed / 3";
                    volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
                };
                class TransmissionDamageExt_phase2 {
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
                        1,
                        1,
                        150
                    };
                    frequency = "0.66 + rotorSpeed / 3";
                    volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
                };
                class TransmissionDamageInt_phase1 {
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
                        1,
                        1,
                        150
                    };
                    frequency = "0.66 + rotorSpeed / 3";
                    volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
                };
                class TransmissionDamageInt_phase2 {
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
                        1,
                        1,
                        150
                    };
                    frequency = "0.66 + rotorSpeed / 3";
                    volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
                };
                class damageAlarmInt {
                    sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor", 0.31622776, 1};
                    frequency = 1;
                    volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
                };
                class damageAlarmExt {
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
                        0.2238721,
                        1,
                        20
                    };
                    frequency = 1;
                    volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
                };
                class rotorLowAlarmInt {
                    sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low", 0.31622776, 1};
                    frequency = 1;
                    volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
                };
                class rotorLowAlarmExt {
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
                        0.2238721,
                        1,
                        20
                    };
                    frequency = 1;
                    volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
                };
                class scrubLandInt {
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\scrubLandInt_open",
                        1,
                        1,
                        100
                    };
                    frequency = 1;
                    volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05])";
                };
                class scrubLandExt {
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\scrubLandExt",
                        1,
                        1,
                        100
                    };
                    frequency = 1;
                    volume = "camPos * (scrubLand factor[0.02, 0.05])";
                };
                class scrubBuildingInt {
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\scrubBuildingInt",
                        1,
                        1,
                        100
                    };
                    frequency = 1;
                    volume = "2 * (1 - camPos) * (scrubBuilding factor[0.02, 0.05])";
                };
                class scrubBuildingExt {
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\scrubBuildingExt",
                        1,
                        1,
                        100
                    };
                    frequency = 1;
                    volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
                };
                class scrubTreeInt {
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
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
                    sound[] = {
                        "A3\Sounds_F\vehicles\noises\rain1_int_open",
                        1,
                        1,
                        100
                    };
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
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\wind_open_int",
                        1.1220185,
                        1,
                        50
                    };
                    frequency = 1;
                    volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
                };
                class WindLateralMovementInt {
                    sound[] = {
                        "A3\Sounds_F\vehicles\air\noises\wind_lateral_open_int",
                        1.9952624,
                        1,
                        50
                    };
                    frequency = 1;
                    volume = "(1-camPos)*lateralMovement*((speed factor [5,40]) + (speed factor [-5,-40]))";
                };
                class GStress {
                    sound[] = {
                        "A3\Sounds_F\vehicles\noises\vehicle_stress2b",
                        0.11622776,
                        1,
                        50
                    };
                    frequency = 1;
                    volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
                };
            };
        };
        class Reflectors {
            class Front {
                color[] = {11000, 7000, 5000};
                ambient[] = {11, 7, 5};
                intensity = 120;
                size = 1;
                innerAngle = 15;
                outerAngle = 65;
                coneFadeCoef = 10;
                position = "Light_pos";
                direction = "Light_dir";
                hitpoint = "Light_hitpoint";
                selection = "Light";
                useFlare = 1;
                flareSize = 10;
                flareMaxDistance = 250;
                dayLight = 1;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 1;
                    hardLimitStart = 100;
                    hardLimitEnd = 300;
                };
            };
        };
        class MarkerLights {
            class CollisionLight_Red {
                name = "CollisionLight_Red";
                color[] = {0.9, 0.15, 0.1};
                ambient[] = {0.09, 0.015, 0.01};
                intensity = 20;
                blinking = 1;
                blinkingPattern[] = {0.1, 0.9};
                blinkingPatternGuarantee = 0;
                drawLightSize = 0.2;
                drawLightCenterSize = 0.04;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 25;
                    quadratic = 50;
                    hardLimitStart = 0;
                    hardLimitEnd = 25;
                };
            };
            class Red_Interior: CollisionLight_Red {
                name = "Interior_Red";
                color[] = {0.9, 0.15, 0.1};
                ambient[] = {0.09, 0.015, 0.01};
                intensity = 800;
                blinking = 0;
                drawLightSize = 0;
                drawLightCenterSize = 0;
            };
            class Red_Top_Position: CollisionLight_Red {
                name = "CollisionLight_Top_Red";
                color[] = {0.9, 0.15, 0.1};
                ambient[] = {0.09, 0.015, 0.01};
                intensity = 20;
                blinking = 1;
                blinkingPattern[] = {0.5, 0.5};
                blinkingPatternGuarantee = 0;
                drawLightSize = 0.2;
                drawLightCenterSize = 0.04;
            };
            class Green_Position: CollisionLight_Red {
                name = "CollisionLight_Green";
                color[] = {0.4, 1, 0.5};
                ambient[] = {0.04, 0.1, 0.05};
            };
        };
        class Turrets: Turrets {
            class CopilotTurret: CopilotTurret {
                CanEject = 0;
                isCopilot = 1;
                hideWeaponsGunner = 0;
                gunnerAction = "RHS_UH1H_CoPilot";
                gunnerInAction = "RHS_UH1H_CoPilot";
                memoryPointsGetInGunner = "pos Codriver";
                memoryPointsGetInGunnerDir = "pos Codriver dir";
                gunnerGetInAction = "copilot_Heli_Light_02_Enter";
                gunnerGetOutAction = "copilot_Heli_Light_02_Exit";
                preciseGetInOut = 1;
                GunnerDoor = "door_copilot";
                gunnerLeftHandAnimName = "collective";
                gunnerRightHandAnimName = "stick_copilot";
                gunnerLeftLegAnimName = "PedalL";
                gunnerRightLegAnimName = "PedalR";
                gunBeg = "muzzle_copilot";
                gunEnd = "chamber_copilot";
                primaryGunner = 1;
                proxyIndex = 1;
                LODTurnedIn = 1100;
                LODTurnedOut = 1100;
                gunnerCompartments = "Compartment2";
                weapons[] = {"rhs_weap_DummyLauncher", "rhs_weap_fcs_nolrf_ammo"};
                magazines[] = {"rhs_laserfcsmag", "rhs_laserfcsmag"};
                class ViewGunner {
                    minAngleX = -65;
                    maxAngleX = 85;
                    initAngleX = 0;
                    minAngleY = -150;
                    maxAngleY = 150;
                    initAngleY = 0;
                    minFov = 0.25;
                    maxFov = 0.95;
                    initFov = 0.85;
                };
                class Hitpoints {};
            };
            class RightGunner: MainTurret {
                body = "RightTurretBase";
                gun = "RightTurretGun";
                animationSourceBody = "RightTurretBase";
                animationSourceGun = "RightTurretGun";
                turretInfoType = "RHS_RscWeaponZeroing";
                CanEject = 1;
                isCopilot = 0;
                initelev = 0;
                initturn = -90;
                maxelev = 20;
                maxturn = -25;
                minelev = -55;
                minturn = -135;
                soundServo[] = {"", 0.01, 1};
                stabilizedInAxes = 0;
                weapons[] = {"rhs_weap_m240H_2"};
                magazines[] = {
                    "rhs_mag_762x51_M240_200_M80",
                    "rhs_mag_762x51_M240_200_M80",
                    "rhs_mag_762x51_M240_200_M80",
                    "rhs_mag_762x51_M240_200_M80",
                    "rhs_mag_762x51_M240_200_M80"
                };
                discreteDistance[] = {200, 300, 400, 500, 600, 700, 800};
                discreteDistanceInitIndex = 0;
                gunBeg = "muzzle_2";
                gunEnd = "chamber_2";
                gunnerName = "$STR_A3_RIGHT_GUNNER";
                memoryPointsGetInGunner = "pos Gunner R";
                memoryPointsGetInGunnerDir = "pos Gunner R dir";
                gunneropticsmodel = "\A3\weapons_f\reticle\optics_empty";
                memoryPointGunnerOptics = "gunnerview_2";
                gunnerOutOpticsShowCursor = 1;
                gunnerLeftHandAnimName = "OtocHlaven_2";
                gunnerRightHandAnimName = "OtocHlaven_2";
                gunnerLeftLegAnimName = "gunner_2_leg_left";
                gunnerRightLegAnimName = "gunner_2_legs";
                gunnerAction = "RHS_UH1H_Gunner_R";
                gunnerInAction = "RHS_UH1H_Gunner_R";
                selectionFireAnim = "zasleh_2";
                primaryGunner = 0;
                proxyIndex = 3;
                class ViewOptics {
                    initanglex = 0;
                    initangley = 0;
                    initfov = 0.7;
                    maxanglex = 30;
                    maxangley = 100;
                    maxfov = 1.1;
                    minanglex = -30;
                    minangley = -100;
                    minfov = 0.25;
                };
                gunnerCompartments = "Compartment3";
                soundAttenuationTurret = "HeliAttenuationGunner";
                disableSoundAttenuation = 0;
                class Hitpoints {};
            };
            class LeftGunner: RightGunner {
                body = "LeftTurretBase";
                gun = "LeftTurretGun";
                animationSourceBody = "LeftTurretBase";
                animationSourceGun = "LeftTurretGun";
                weapons[] = {"rhs_weap_m240H_1"};
                magazines[] = {
                    "rhs_mag_762x51_M240_200_M80",
                    "rhs_mag_762x51_M240_200_M80",
                    "rhs_mag_762x51_M240_200_M80",
                    "rhs_mag_762x51_M240_200_M80",
                    "rhs_mag_762x51_M240_200_M80"
                };
                gunBeg = "muzzle_1";
                gunEnd = "chamber_1";
                gunnerLeftHandAnimName = "OtocHlaven_1";
                gunnerRightHandAnimName = "OtocHlaven_1";
                gunnerLeftLegAnimName = "gunner_1_leg_left";
                gunnerRightLegAnimName = "gunner_1_legs";
                gunnerAction = "RHS_UH1H_Gunner_L";
                gunnerInAction = "RHS_UH1H_Gunner_L";
                memoryPointsGetInGunner = "pos Gunner L";
                memoryPointsGetInGunnerDir = "pos Gunner L dir";
                primaryGunner = 0;
                proxyIndex = 2;
                memoryPointGunnerOptics = "gunnerview_1";
                selectionFireAnim = "zasleh_1";
                gunnerName = "$STR_A3_LEFT_GUNNER";
                initelev = 0;
                initturn = 90;
                maxelev = 20;
                maxturn = 125;
                minelev = -55;
                minturn = 30;
            };
            class CargoTurret_01: CargoTurret {
                gunnerAction = "passenger_bench_1";
                gunnerGetInAction = "GetInHeli_Light_01bench";
                gunnerCompartments = "compartment3";
                memoryPointsGetInGunner = "pos Gunner L";
                memoryPointsGetInGunnerDir = "pos Gunner L dir";
                gunnerName = "Passenger (Left Door)";
                gunBeg = "muzzle_copilot";
                gunEnd = "chamber_copilot";
                proxyIndex = 7;
                maxElev = 45;
                minElev = -55;
                maxTurn = 70;
                minTurn = -10;
                isPersonTurret = 1;
                ejectDeadGunner = 0;
                playerPosition = 4;
                soundAttenuationTurret = "";
                disableSoundAttenuation = 1;
                weapons[] = {"rhs_weap_DummyLauncher"};
                class Hitpoints {};
            };
            class CargoTurret_02: CargoTurret_01 {
                gunnerCompartments = "compartment3";
                memoryPointsGetInGunner = "pos Gunner R";
                memoryPointsGetInGunnerDir = "pos Gunner R dir";
                gunnerName = "Passenger (Right Door)";
                proxyIndex = 8;
                maxTurn = 35;
                minTurn = -60;
            };
        };
        class AnimationSources: AnimationSources {
            class door_pilot {
                source = "door";
                animPeriod = 0.8;
                initPhase = 0;
                sound = "MetalDoorsSound";
                soundPosition = "axis_door_pilot";
            };
            class door_copilot: door_pilot {
                soundPosition = "axis_door_copilot";
            };
            class rightturretbase {
                source = "user";
                initPhase = 0;
                animPeriod = 0;
            };
            class rightturretgun {
                source = "user";
                initPhase = 0;
                animPeriod = 0;
            };
            class leftturretgun {
                source = "user";
                initPhase = 0;
                animPeriod = 0;
            };
            class leftturretbase {
                source = "user";
                initPhase = 0;
                animPeriod = 0;
            };
            class Hide_mid_doors {
                source = "user";
                animPeriod = 0.0000001;
                initPhase = 1;
            };
            class close_cargo_doors {
                source = "door";
                sound = "RollDoorsSound";
                soundPosition = "door_sounds";
                animPeriod = 1.5;
                initPhase = 0;
            };
            class hide_crosshair {
                source = "user";
                animPeriod = 0.000001;
                initPhase = 1;
            };
            class Hide_guns {
                source = "user";
                animPeriod = 0.0000001;
                initPhase = 0;
            };
            class hide_gunmount {
                source = "user";
                animPeriod = 0.0000001;
                initPhase = 1;
            };
            class reloadAnim_1 {
                source = "reload";
                weapon = "rhs_weap_m240H_1";
            };
            class reloadMagazine_1 {
                source = "reloadmagazine";
                weapon = "rhs_weap_m240H_1";
            };
            class revolving_1 {
                source = "revolving";
                weapon = "rhs_weap_m240H_1";
            };
            class reloadAnim_2 {
                source = "reload";
                weapon = "rhs_weap_m240H_2";
            };
            class reloadMagazine_2 {
                source = "reloadmagazine";
                weapon = "rhs_weap_m240H_2";
            };
            class revolving_2 {
                source = "revolving";
                weapon = "rhs_weap_m240H_2";
            };
            class hit_pylon_1_source {
                source = "user";
                initPhase = 0;
                animPeriod = 0;
            };
            class hit_pylon_2_source {
                source = "user";
                initPhase = 0;
                animPeriod = 0;
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
            class HitGlass6 {
                source = "Hit";
                hitpoint = "HitGlass6";
                raw = 1;
            };
            class HitGlass7 {
                source = "Hit";
                hitpoint = "HitGlass7";
                raw = 1;
            };
        };
        armor = 35;
        armorStructural = 20;
        hullDamageCauseExplosion = 1;
        hullExplosionDelay[] = {10, 20};
        class HitPoints: HitPoints {
            class HitHull {
                simulation = "RHS_Hull_Helicopter";
                armor = -100;
                minimalHit = -0.2;
                explosionShielding = 1;
                radius = 0.4;
                armorComponent = "Hit_Hull";
                name = "hit_hull";
                visual = "zbytek";
                passThrough = 1;
                class DestructionEffects: RHS_Effects_Helicopter_Hull_Destruction {};
            };
            class HitFuel {
                armor = -70;
                name = "hit_fuel";
                visual = "-";
                radius = 0.15;
                explosionShielding = 1.5;
                passThrough = 0.2;
            };
            class HitGlass1 {
                armor = -12;
                explosionShielding = 1;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass1";
                name = "glass1";
                visual = "glass1";
            };
            class HitGlass2 {
                armor = -12;
                explosionShielding = 1;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass2";
                name = "glass2";
                visual = "glass2";
            };
            class HitGlass3 {
                armor = -12;
                explosionShielding = 1;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass3";
                name = "glass3";
                visual = "glass3";
            };
            class HitGlass4 {
                armor = -12;
                explosionShielding = 1;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass4";
                name = "glass4";
                visual = "glass4";
            };
            class HitGlass5 {
                armor = -12;
                explosionShielding = 1;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass5";
                name = "glass5";
                visual = "glass5";
            };
            class HitGlass6 {
                armor = -12;
                explosionShielding = 1;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass6";
                name = "glass6";
                visual = "glass6";
            };
            class HitGlass7 {
                armor = -12;
                explosionShielding = 1;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass7";
                name = "glass7";
                visual = "glass7";
            };
            class HitVRotor: HitVRotor {
                simulation = "RHS_Hull_Helicopter";
                armorComponent = "Hit_Tail";
                name = "Hit_Rotor_Tail";
                visual = "tail rotor static";
                armor = -80;
                minimalHit = -0.2;
                radius = 0.3;
                explosionShielding = 3;
                passThrough = 0.5;
            };
            class HitHRotor: HitHRotor {
                armorComponent = "Hit_Rotor_Main";
                name = "Hit_Rotor_Main";
                visual = "main rotor static";
                armor = -90;
                radius = 0.2;
                explosionShielding = 0.5;
            };
            class HitAvionics: HitAvionics {
                armor = -40;
                visual = "";
                name = "elektronika";
                radius = 0.05;
                explosionShielding = 1.5;
            };
            class HitEngine: HitEngine {
                armorComponent = "Hit_Engine";
                armor = -80;
                name = "motor";
                passThrough = 0.5;
                minimalHit = -0.12;
                explosionShielding = 2;
                radius = 0.27;
            };
            class HitWinch {
                armor = 999;
                name = "";
                visual = "-";
                radius = 0.001;
                passThrough = 0;
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsgref\addons\rhsgref_air\uh1h\data\uh1h.rvmat",
                "rhsgref\addons\rhsgref_air\uh1h\data\uh1h.rvmat",
                "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_destruct.rvmat",
                "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit1.rvmat",
                "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit1.rvmat",
                "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit1_destruct.rvmat",
                "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit2.rvmat",
                "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit2.rvmat",
                "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit2_destruct.rvmat",
                "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit3.rvmat",
                "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit3.rvmat",
                "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_cockpit3_destruct.rvmat",
                "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_glass.rvmat",
                "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_glass_damage.rvmat",
                "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_glass_damage.rvmat",
                "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_in.rvmat",
                "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_in.rvmat",
                "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_in_destruct.rvmat",
                "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_instruments.rvmat",
                "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_instruments.rvmat",
                "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_instruments_destruct.rvmat",
                "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_rotor.rvmat",
                "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_rotor.rvmat",
                "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_rotor_destruct.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "rhsgref\addons\rhsgref_air\uh1h\data\mlod_destruct.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        hiddenSelections[] = {"decals"};
        hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
        irScanRangeMin = 100;
        irScanRangeMax = 1000;
        irScanToEyeFactor = 2;
        class Components;
        class textureSources {
            class hidf_grey {
                displayName = "HIDF Grey";
                textures[] = {
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_grey_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_grey_in_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_grey_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_hidf_decals_ca.paa"
                };
                factions[] = {"rhsgref_faction_hidf"};
            };
            class hidf_summer: hidf_grey {
                displayName = "HIDF MERDC (Summer verdant)";
                textures[] = {
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_summer_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_summer_in_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_tropical_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"
                };
            };
            class hidf_tropical: hidf_grey {
                displayName = "HIDF MERDC (Tropical verdant)";
                textures[] = {
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_tropical_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_tropical_in_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_tropical_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"
                };
            };
            class hidf_olv: hidf_grey {
                displayName = "HIDF Olive";
                textures[] = {
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_olv_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_olv_in_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_hidf_decals_ca.paa"
                };
            };
            class hidf_tan: hidf_grey {
                displayName = "HIDF Tan";
                textures[] = {
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tan_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tan_in_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\mlod_tan_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_hidf_decals_ca.paa"
                };
            };
            class un {
                displayName = "UN";
                textures[] = {
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_un_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_un_in_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\mlod_un_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_un_decals_ca.paa"
                };
                factions[] = {"rhsgref_faction_un"};
            };
            class idap {
                displayName = "IDAP";
                textures[] = {
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_idap_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_idap_in_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\mlod_un_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_idap_decals_ca.paa"
                };
                factions[] = {"CIV_IDAP_F"};
            };
            class us_army {
                displayName = "US Army";
                textures[] = {
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_in_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_us_decals_ca.paa"
                };
                factions[] = {"rhs_faction_usarmy_wd", "rhs_faction_usarmy_d"};
            };
            class us_army_med: us_army {
                displayName = "US Army (Medevac)";
                textures[] = {
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_med_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_us_in_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_us_decals_ca.paa"
                };
            };
            class black {
                displayName = "Black";
                textures[] = {
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_black_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_black_in_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\mlod_black_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"
                };
                factions[] = {"CIV_F"};
            };
            class iraq {
                displayName = "Iraqi Air Force";
                textures[] = {
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_iaf_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_iaf_in_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\mlod_iaf_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"
                };
                factions[] = {"IND_F"};
            };
            class takistan {
                displayName = "Takistan";
                textures[] = {
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tka_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_in_tka_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\mlod_tka_co",
                    "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"
                };
                factions[] = {"OPF_F"};
            };
            class guerilla {
                displayName = "Guerilla";
                textures[] = {
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_gue_in_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\mlod_gue_co",
                    "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"
                };
                factions[] = {"IND_G_F", "BLU_G_F", "OPF_G_F"};
            };
            class tan {
                displayName = "Tan";
                textures[] = {
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tan_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_tan_in_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\mlod_tan_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"
                };
                factions[] = {"IND_G_F", "BLU_G_F", "OPF_G_F", "IND_F"};
            };
            class olive: tan {
                displayName = "Olive";
                textures[] = {
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_olv_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_olv_in_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"
                };
            };
            class white: tan {
                displayName = "White";
                textures[] = {
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_un_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_un_in_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\mlod_un_co.paa",
                    "rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"
                };
            };
        };
    };
    class rhs_uh1h_hidf: rhs_uh1h_base {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhs_uh1h_hidf.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "rhsgref_faction_hidf";
        displayName = "UH-1H";
        crew = "rhsgref_hidf_helipilot";
        typicalCargo[] = {"rhsgref_hidf_helipilot"};
        class TransportMagazines {};
        class TransportItems {};
        class TransportWeapons {};
        enableSweep = 0;
        hiddenSelections[] = {"Camo1", "Camo2", "Camo_mlod", "decals"};
        hiddenSelectionsTextures[] = {
            "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_grey_co.paa",
            "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_grey_in_co.paa",
            "rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_grey_co.paa",
            "rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_hidf_decals_ca.paa"
        };
        class textureSources: textureSources {
            class hidf_grey: hidf_grey {};
            class hidf_summer: hidf_summer {};
            class hidf_tropical: hidf_tropical {};
            class hidf_olv: hidf_olv {};
            class hidf_tan: hidf_tan {};
            class us_army: us_army {};
            class us_army_med: us_army_med {};
            class black: black {};
            class iraq: iraq {};
            class takistan: takistan {};
            class guerilla: guerilla {};
        };
        class AnimationSources: AnimationSources {
            class Hide_mid_doors {
                source = "user";
                animPeriod = 0.000001;
                initPhase = 1;
            };
        };
        textureList[] = {};
        class Attributes {
            class uh1h_textures {
                control = "ObjectTexture";
                data = "ObjectTexture";
                displayName = "Paint";
                tooltip = "Select paint color.";
            };
        };
    };
    class rhs_uh1h_hidf_gunship: rhs_uh1h_hidf {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhs_uh1h_hidf_gunship.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        forceInGarage = 1;
        displayName = "UH-1H Gunship";
        availableForSupportTypes[] = {"CAS_Heli", "Drop", "Transport"};
        enableSweep = 1;
        class AnimationSources: AnimationSources {
            class hide_crosshair {
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
            };
            class Hide_mid_doors {
                source = "user";
                animPeriod = 0.000001;
                initPhase = 1;
            };
            class hide_gunmount {
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
            };
            class hit_pylon_1_source {
                source = "Hit";
                hitpoint = "HitPylon1";
            };
            class hit_pylon_2_source {
                source = "Hit";
                hitpoint = "HitPylon2";
            };
        };
        class Hitpoints: HitPoints {
            class HitPylon1 {
                armor = -30;
                material = -1;
                name = "hit_pylon_1";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.1;
                radius = 0.95;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Pylon_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_pylon_1";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_Pylon_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_pylon_1";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_Pylon_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_pylon_1";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_Pylon_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_pylon_1";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class HitPylon2 {
                armor = -30;
                material = -1;
                name = "hit_pylon_2";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.1;
                radius = 0.95;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Pylon_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_pylon_2";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_Pylon_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_pylon_2";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_Pylon_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_pylon_2";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_Pylon_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_pylon_2";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
        };
        class Components: Components {
            class TransportPylonsComponent {
                UIPicture = "\rhsgref\addons\rhsgref_air\uh1h\ui\RHS_UH1H_EDEN_CA.paa";
                class pylons {
                    class pylon1 {
                        hardpoints[] = {"RHS_HP_FFAR_ARMY"};
                        UIposition[] = {0.573, 0.44};
                        maxweight = 1200;
                        priority = 1;
                        attachment = "rhs_mag_M151_19";
                        bay = -1;
                        hitpoint = "HitPylon1";
                    };
                    class pylon2: pylon1 {
                        UIposition[] = {0.1, 0.44};
                        mirroredMissilePos = 1;
                        hitpoint = "HitPylon2";
                    };
                };
                class Presets {
                    class Empty {
                        attachment[] = {"", ""};
                        displayname = "<empty>";
                    };
                    class Light {
                        attachment[] = {"rhs_mag_M151_7", "rhs_mag_M151_7"};
                        displayname = "Light";
                    };
                    class Heavy {
                        attachment[] = {"rhs_mag_M151_19", "rhs_mag_M151_19"};
                        displayname = "Heavy";
                    };
                };
            };
        };
    };
    class rhs_uh1h_hidf_unarmed: rhs_uh1h_hidf {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhs_uh1h_hidf_unarmed.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        forceInGarage = 1;
        displayName = "UH-1H Unarmed";
        cargoAction[] = {
            "passenger_apc_narrow_generic02",
            "passenger_apc_narrow_generic02",
            "passenger_generic02_foldhands",
            "passenger_generic01_leanleft",
            "passenger_flatground_generic02",
            "passenger_flatground_leanleft",
            "Heli_Light_02_cargo",
            "Heli_Light_02_cargo"
        };
        transportSoldier = 8;
        cargoProxyIndexes[] = {1, 2, 3, 4, 5, 6, 9, 10};
        getInProxyOrder[] = {2, 3, 1, 4, 5, 6, 7, 8, 9, 10};
        class AnimationSources: AnimationSources {
            class Hide_mid_doors {
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
            };
            class Hide_guns {
                source = "user";
                animPeriod = 0.000001;
                initPhase = 1;
            };
        };
        class UserActions {
            class Open_Side_Doors {
                displayName = "Open Side Doors";
                onlyforplayer = 1;
                position = "aimpoint";
                radius = 2;
                priority = 1;
                condition = "this doorPhase 'close_cargo_doors' > 0 and (alive this) and player in this;";
                statement = "this animateDoor ['close_cargo_doors',0]";
                showWindow = 0;
            };
            class Close_Side_Doors: Open_Side_Doors {
                displayName = "Close Side Doors";
                condition = "this doorPhase 'close_cargo_doors' == 0 and (alive this) and player in this;";
                statement = "this animateDoor ['close_cargo_doors',1]";
            };
        };
        class Attributes: Attributes {
            class uh1h_textures: uh1h_textures {};
            class close_cargo_doors {
                displayName = "Close Side Doors";
                property = "close_cargo_doors";
                control = "CheckboxNumber";
                defaultValue = "0";
                expression = "_this animateDoor ['%s',_value,true]";
            };
        };
        class Turrets: Turrets {
            class CopilotTurret: CopilotTurret {};
        };
    };
    class rhs_uh1h_un: rhs_uh1h_base {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhs_uh1h_un.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        faction = "rhsgref_faction_un";
        displayName = "UH-1H";
        crew = "rhsgref_cdf_un_pilot";
        typicalCargo[] = {"rhsgref_cdf_un_pilot"};
        cargoAction[] = {
            "passenger_apc_narrow_generic02",
            "passenger_apc_narrow_generic02",
            "passenger_generic02_foldhands",
            "passenger_generic01_leanleft",
            "passenger_flatground_generic02",
            "passenger_flatground_leanleft",
            "Heli_Light_02_cargo",
            "Heli_Light_02_cargo"
        };
        transportSoldier = 8;
        cargoProxyIndexes[] = {1, 2, 3, 4, 5, 6, 9, 10};
        getInProxyOrder[] = {2, 3, 1, 4, 5, 6, 9, 7, 8, 10};
        class TransportMagazines {};
        class TransportItems {};
        class TransportWeapons {};
        hiddenSelections[] = {"Camo1", "Camo2", "Camo_mlod", "decals"};
        hiddenSelectionsTextures[] = {
            "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_un_co.paa",
            "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_un_in_co.paa",
            "rhsgref\addons\rhsgref_air\uh1h\data\mlod_un_co.paa",
            "rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_un_decals_ca.paa"
        };
        class AnimationSources: AnimationSources {
            class Hide_mid_doors {
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
            };
            class Hide_guns {
                source = "user";
                animPeriod = 0.000001;
                initPhase = 1;
            };
        };
        class UserActions {
            class Open_Side_Doors {
                displayName = "Open Side Doors";
                onlyforplayer = 1;
                position = "aimpoint";
                radius = 2;
                priority = 1;
                condition = "this doorPhase 'close_cargo_doors' > 0 and (alive this) and player in this;";
                statement = "this animateDoor ['close_cargo_doors',0]";
                showWindow = 0;
            };
            class Close_Side_Doors: Open_Side_Doors {
                displayName = "Close Side Doors";
                condition = "this doorPhase 'close_cargo_doors' == 0 and (alive this) and player in this;";
                statement = "this animateDoor ['close_cargo_doors',1]";
            };
        };
        class Attributes {
            class close_cargo_doors {
                displayName = "Close Cargo Doors";
                property = "close_cargo_doors";
                control = "CheckboxNumber";
                defaultValue = "0";
                expression = "_this animateDoor ['%s',_value,true]";
            };
        };
        class Turrets: Turrets {
            class CopilotTurret: CopilotTurret {};
        };
    };
    class rhs_uh1h_idap: rhs_uh1h_base {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhs_uh1h_idap.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        side = 3;
        displayName = "UH-1H";
        faction = "CIV_IDAP_F";
        crew = "C_IDAP_Pilot_01_F";
        typicalCargo[] = {"C_IDAP_Pilot_01_F"};
        cargoAction[] = {
            "passenger_apc_narrow_generic02",
            "passenger_apc_narrow_generic02",
            "passenger_generic02_foldhands",
            "passenger_generic01_leanleft",
            "passenger_flatground_generic02",
            "passenger_flatground_leanleft",
            "Heli_Light_02_cargo",
            "Heli_Light_02_cargo"
        };
        transportSoldier = 8;
        cargoProxyIndexes[] = {1, 2, 3, 4, 5, 6, 9, 10};
        getInProxyOrder[] = {2, 3, 1, 4, 5, 6, 9, 10};
        class TransportMagazines {};
        class TransportItems {};
        class TransportWeapons {};
        hiddenSelections[] = {"Camo1", "Camo2", "Camo_mlod", "decals"};
        hiddenSelectionsTextures[] = {
            "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_idap_co.paa",
            "rhsgref\addons\rhsgref_air\uh1h\data\uh1h_idap_in_co.paa",
            "rhsgref\addons\rhsgref_air\uh1h\data\mlod_un_co.paa",
            "rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_idap_decals_ca.paa"
        };
        class AnimationSources: AnimationSources {
            class Hide_mid_doors {
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
            };
            class Hide_guns {
                source = "user";
                animPeriod = 0.000001;
                initPhase = 1;
            };
        };
        class UserActions {
            class Open_Side_Doors {
                displayName = "Open Side Doors";
                onlyforplayer = 1;
                position = "aimpoint";
                radius = 2;
                priority = 1;
                condition = "this doorPhase 'close_cargo_doors' > 0 and (alive this) and player in this;";
                statement = "this animateDoor ['close_cargo_doors',0]";
                showWindow = 0;
            };
            class Close_Side_Doors: Open_Side_Doors {
                displayName = "Close Side Doors";
                condition = "this doorPhase 'close_cargo_doors' == 0 and (alive this) and player in this;";
                statement = "this animateDoor ['close_cargo_doors',1]";
            };
        };
        class Attributes {
            class close_cargo_doors {
                displayName = "Close Cargo Doors";
                property = "close_cargo_doors";
                control = "CheckboxNumber";
                defaultValue = "0";
                expression = "_this animateDoor ['%s',_value,true]";
            };
        };
        class Turrets: Turrets {
            class CopilotTurret: CopilotTurret {};
        };
    };
    class UWreck_base_F;
    class Land_UH1H_Wreck_F: UWreck_base_F {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\Land_UH1H_Wreck_F.paa";
        mapSize = 14;
        scope = 2;
        scopeCurator = 2;
        keepHorizontalPlacement = 1;
        displayName = "UH-1H Wreck";
        model = "rhsgref\addons\rhsgref_air\uh1h\uh1h_wreck.p3d";
        icon = "rhsgref\addons\rhsgref_air\uh1h\ui\icon_uh1h_ca.paa";
        editorSubcategory = "EdSubcat_Helicopters";
    };
    class Heli_Transport_02_base_F: Helicopter_Base_H {};
    class Heli_Light_02_base_F: Helicopter_Base_H {
        class Turrets: Turrets {
            class CopilotTurret;
            class MainTurret;
        };
    };
    class Plane: Air {
        class HitPoints;
        class EventHandlers;
        class NewTurret;
    };
    class Plane_Base_F: Plane {
        class NewTurret: NewTurret {
            class ViewGunner;
        };
        class Turrets;
        class AnimationSources;
        class HitPoints: HitPoints {
            class HitHull;
        };
        class ViewPilot;
    };
    class Plane_CAS_02_base_F;
    class O_Plane_CAS_02_F: Plane_CAS_02_base_F {
        class EventHandlers;
    };
    class Plane_Fighter_03_base_F: Plane_Base_F {
        class EventHandlers;
        class Components;
    };
    class RHS_L159_base: Plane_Fighter_03_base_F {
        model = "rhsgref\addons\rhsgref_air\L159\rhs_l159.p3d";
        displayName = "$STR_RHSGREF_AIR_L159_NAME";
        dlc = "RHS_GREF";
        vehicleClass = "rhs_vehclass_aircraft";
        selectionDashboard = "podsvit pristroju";
        unitInfoType = "RHSGREF_RscUnitInfoJet";
        driverLeftHandAnimName = "throttle_pilot";
        driverRightHandAnimName = "stick_pilot";
        class pilotCamera {};
        class EjectionSystem {};
        driverCanEject = 1;
        class EventHandlers: EventHandlers {
            hit = "";
            class RHS_EventHandlers {
                hit = "_this call RHS_fnc_AI_eject";
                init = "_this call rhs_fnc_decalsReadParams";
                postInit = "_this call rhs_fnc_reapplyTextures";
                getout = "[_this select 0, _this select 2] call rhs_fnc_vs1_seatEjection";
                engine = "[_this select 0,_this select 1,10] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_addParachutes";
            };
        };
        class UserActions {};
        class HitPoints: HitPoints {
            class HitGlass2 {
                armor = 1;
                material = -1;
                name = "glass2";
                convexComponent = "glass2";
                visual = "glass2";
                passThrough = 0;
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class BrokenGlass1 {
                        simulation = "particles";
                        type = "BrokenGlass1N_0850_2250";
                        position = "glass2_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2 {
                        simulation = "particles";
                        type = "BrokenGlass2N_0850_2250";
                        position = "glass2_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3 {
                        simulation = "particles";
                        type = "BrokenGlass3N_0850_2250";
                        position = "glass2_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4 {
                        simulation = "particles";
                        type = "BrokenGlass4N_0850_2250";
                        position = "glass2_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5 {
                        simulation = "particles";
                        type = "BrokenGlass5N_0850_2250";
                        position = "glass2_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass6 {
                        simulation = "particles";
                        type = "BrokenGlass6N_0850_2250";
                        position = "glass2_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass7 {
                        simulation = "particles";
                        type = "BrokenGlass7N_0850_2250";
                        position = "glass2_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass1S {
                        simulation = "particles";
                        type = "BrokenGlass1S_0850_2250";
                        position = "glass2_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2S {
                        simulation = "particles";
                        type = "BrokenGlass2S_0850_2250";
                        position = "glass2_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3S {
                        simulation = "particles";
                        type = "BrokenGlass3S_0850_2250";
                        position = "glass2_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4S {
                        simulation = "particles";
                        type = "BrokenGlass4S_0850_2250";
                        position = "glass2_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5S {
                        simulation = "particles";
                        type = "BrokenGlass5S_0850_2250";
                        position = "glass2_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass6S {
                        simulation = "particles";
                        type = "BrokenGlass6S_0850_2250";
                        position = "glass2_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass7S {
                        simulation = "particles";
                        type = "BrokenGlass7S_0850_2250";
                        position = "glass2_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "glass2_effect";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "glass2_effect";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.005;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "glass2_effect";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                };
            };
            class HitPylon1 {
                armor = -30;
                material = -1;
                name = "hit_pylon_1";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.1;
                radius = 0.7;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Pylon_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_pylon_1";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_Pylon_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_pylon_1";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_Pylon_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_pylon_1";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_Pylon_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_pylon_1";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class HitPylon2 {
                armor = -30;
                material = -1;
                name = "hit_pylon_2";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.1;
                radius = 0.7;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Pylon_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_pylon_2";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_Pylon_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_pylon_2";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_Pylon_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_pylon_2";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_Pylon_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_pylon_2";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class HitPylon3 {
                armor = -30;
                material = -1;
                name = "hit_pylon_3";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.1;
                radius = 0.7;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Pylon_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_pylon_3";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_Pylon_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_pylon_3";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_Pylon_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_pylon_3";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_Pylon_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_pylon_3";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class HitPylon4 {
                armor = -30;
                material = -1;
                name = "hit_pylon_4";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.1;
                radius = 0.7;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Pylon_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_pylon_4";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_Pylon_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_pylon_4";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_Pylon_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_pylon_4";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_Pylon_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_pylon_4";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class HitPylon5 {
                armor = -30;
                material = -1;
                name = "hit_pylon_5";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.1;
                radius = 0.7;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Pylon_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_pylon_5";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_Pylon_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_pylon_5";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_Pylon_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_pylon_5";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_Pylon_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_pylon_5";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class HitPylon6 {
                armor = -30;
                material = -1;
                name = "hit_pylon_6";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.1;
                radius = 0.7;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Pylon_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_pylon_6";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_Pylon_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_pylon_6";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_Pylon_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_pylon_6";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_Pylon_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_pylon_6";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class HitPylon7 {
                armor = -30;
                material = -1;
                name = "hit_pylon_7";
                passThrough = 0;
                minimalHit = -0.5;
                explosionShielding = 0.1;
                radius = 0.7;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Pylon_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_pylon_7";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_Pylon_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_pylon_7";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_Pylon_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_pylon_7";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_Pylon_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_pylon_7";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
        };
        class AnimationSources: AnimationSources {
            class HitGlass2 {
                source = "Hit";
                hitpoint = "HitGlass2";
                raw = 1;
            };
            class eject {
                source = "user";
                animPeriod = 0.6;
                initPhase = 0;
            };
            class eject_hide {
                source = "user";
                animPeriod = 0.6;
                initPhase = 0;
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
            class hit_pylon_1_source {
                source = "Hit";
                hitpoint = "HitPylon1";
            };
            class hit_pylon_2_source {
                source = "Hit";
                hitpoint = "HitPylon2";
            };
            class hit_pylon_3_source {
                source = "Hit";
                hitpoint = "HitPylon3";
            };
            class hit_pylon_4_source {
                source = "Hit";
                hitpoint = "HitPylon4";
            };
            class hit_pylon_5_source {
                source = "Hit";
                hitpoint = "HitPylon5";
            };
            class hit_pylon_6_source {
                source = "Hit";
                hitpoint = "HitPylon6";
            };
            class hit_pylon_7_source {
                source = "Hit";
                hitpoint = "HitPylon7";
            };
        };
        hiddenselections[] = {"camo1", "camo2", "i1", "i2", "n1", "n2"};
        hiddenselectionstextures[] = {"\rhsgref\addons\rhsgref_air\l159\data\l159_body_1_co.paa", "\rhsgref\addons\rhsgref_air\l159\Data\l159_body_2_co.paa"};
        class Library {
            libTextDesc = "$STR_A3_CfgVehicles_Plane_Fighter_03_base_F_Library0";
        };
        class MarkerLights {
            class PositionRed {
                color[] = {1, 0, 0};
                ambient[] = {0.1, 0, 0};
                intensity = 75;
                name = "cerveny pozicni";
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
                color[] = {0, 1, 0};
                ambient[] = {0, 0.1, 0};
                name = "zeleny pozicni";
            };
            class PositionWhite: PositionRed {
                color[] = {1, 1, 1};
                ambient[] = {0.1, 0.1, 0.1};
                name = "light_nav_back";
            };
        };
        class Reflectors {
            class Left {
                color[] = {7000, 7500, 10000, 1};
                ambient[] = {100, 100, 100};
                position = "l svetlo";
                selection = "l svetlo";
                direction = "konec l svetla";
                hitpoint = "l svetlo";
                innerAngle = 20;
                outerAngle = 60;
                coneFadeCoef = 10;
                intensity = 50;
                useFlare = 1;
                dayLight = 0;
                FlareSize = 1;
                size = 1;
                class Attenuation {
                    constant = 0;
                    linear = 0;
                    quadratic = 4;
                    start = 1;
                    hardLimitStart = 150;
                    hardLimitEnd = 300;
                };
            };
            class Right: Left {
                position = "p svetlo";
                direction = "konec p svetla";
                hitpoint = "p svetlo";
                selection = "p svetlo";
            };
            class Center: Left {
                position = "svetlo";
                direction = "svetlo dir";
                hitpoint = "svetlo";
                selection = "svetlo";
            };
        };
        aggregateReflectors[] = {{"Left"}, {"Right"}, {"Center"}};
        class Exhausts {
            class Exhaust_1 {
                position = "exhaust_start";
                direction = "exhaust_dir";
                effect = "ExhaustsEffectJet";
            };
        };
        class WingVortices {
            class WingTipLeft {
                effectName = "WingVortices";
                position = "cerveny pozicni";
            };
            class WingTipRight {
                effectName = "WingVortices";
                position = "zeleny pozicni";
            };
            class BodyLeft {
                effectName = "BodyVortices";
                position = "body_vapour_L_S";
            };
            class BodyRight {
                effectName = "BodyVortices";
                position = "body_vapour_R_S";
            };
        };
        driverAction = "RHS_L159_pilot";
        envelope[] = {
            0,
            0.15,
            1.1,
            3,
            5,
            5.83,
            6,
            5.85,
            5.5,
            4.8,
            3.6,
            1.8,
            0
        };
        weapons[] = {};
        magazines[] = {};
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsgref\addons\rhsgref_air\L159\data\L159_body_1.rvmat",
                "rhsgref\addons\rhsgref_air\L159\data\L159_body_1_damage.rvmat",
                "rhsgref\addons\rhsgref_air\L159\data\L159_body_1_destruct.rvmat",
                "rhsgref\addons\rhsgref_air\L159\data\L159_body_2.rvmat",
                "rhsgref\addons\rhsgref_air\L159\data\L159_body_2_damage.rvmat",
                "rhsgref\addons\rhsgref_air\L159\data\L159_body_2_destruct.rvmat",
                "rhsgref\addons\rhsgref_air\L159\data\L159_glass.rvmat",
                "rhsgref\addons\rhsgref_air\L159\data\L159_glass_damage.rvmat",
                "rhsgref\addons\rhsgref_air\L159\data\L159_glass_destruct.rvmat",
                "rhsgref\addons\rhsgref_air\L159\data\L159_glass_in.rvmat",
                "rhsgref\addons\rhsgref_air\L159\data\L159_glass_damage.rvmat",
                "rhsgref\addons\rhsgref_air\L159\data\L159_glass_destruct.rvmat"
            };
        };
        class Components: Components {
            class TransportPylonsComponent {
                uiPicture = "\A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_A143_3DEN_CA.paa";
                class Pylons {
                    class Pylons1 {
                        hardpoints[] = {
                            "RHS_HP_AGM65",
                            "RHS_HP_FFAR_USAF",
                            "RHS_HP_Hydra_USAF",
                            "RHS_HP_AIM9",
                            "RHS_HP_AIM120"
                        };
                        attachment = "rhs_mag_Sidewinder";
                        priority = 5;
                        maxweight = 200;
                        UIposition[] = {0.35, 0.08};
                        hitpoint = "HitPylon1";
                    };
                    class Pylons2: Pylons1 {
                        priority = 4;
                        attachment = "rhs_mag_FFAR_7_USAF";
                        maxweight = 320;
                        UIposition[] = {0.345, 0.13};
                        hitpoint = "HitPylon2";
                    };
                    class Pylons3: Pylons1 {
                        hardpoints[] = {
                            "RHS_HP_AGM65",
                            "RHS_HP_FFAR_USAF",
                            "RHS_HP_Hydra_USAF",
                            "RHS_HP_LGB_500",
                            "RHS_HP_BOMB_500_3x",
                            "RHS_HP_AIM9",
                            "RHS_HP_AIM120",
                            "RHS_HP_ZPL20",
                            "RHS_HP_L159_FUELPOD"
                        };
                        priority = 3;
                        attachment = "rhs_mag_mk82";
                        maxweight = 400;
                        UIposition[] = {0.34, 0.18};
                        hitpoint = "HitPylon3";
                    };
                    class Pylons4: Pylons1 {
                        priority = 2;
                        attachment = "rhs_mag_zpl20_hei";
                        maxweight = 500;
                        UIposition[] = {0.27, 0.28};
                        hardpoints[] = {"RHS_HP_ZPL20", "RHS_HP_L159_FUELPOD"};
                        hitpoint = "HitPylon4";
                    };
                    class Pylons5: Pylons3 {
                        UIposition[] = {0.33, 0.38};
                        mirroredMissilePos = 3;
                        hitpoint = "HitPylon5";
                    };
                    class Pylons6: Pylons2 {
                        UIposition[] = {0.33, 0.43};
                        mirroredMissilePos = 2;
                        hitpoint = "HitPylon6";
                    };
                    class Pylons7: Pylons1 {
                        UIposition[] = {0.34, 0.48};
                        mirroredMissilePos = 1;
                        hitpoint = "HitPylon7";
                    };
                    class cmDispenser {
                        hardpoints[] = {"RHSUSF_cm_ANALE40", "RHSUSF_cm_ANALE40_x2"};
                        priority = 1;
                        attachment = "rhsusf_ANALE40_CMFlare_Chaff_Magazine_x2";
                        maxweight = 800;
                        UIposition[] = {0.625, 0.275};
                    };
                };
            };
        };
    };
    class rhs_l159_CDF: RHS_L159_base {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhs_l159_CDF.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
        side = 2;
        dlc = "RHS_GREF";
        rhs_decalParameters[] = {"['Number',[4,5],'AviaCDF']", "['Label',[2],'Aviation', 5]", "['Label',[3],'AviationSquadronsCDFGrey']"};
        faction = "rhsgref_faction_cdf_air";
        crew = "rhsgref_cdf_air_pilot";
        typicalCargo[] = {"rhsgref_cdf_air_pilot"};
    };
    class rhs_l159_CDF_plamen: rhs_l159_CDF {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhs_l159_CDF_plamen.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 1;
        scopeCurator = 2;
        displayName = "L-159 (Plamen)";
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class Pylons: Pylons {
                    class Pylons1: Pylons1 {};
                    class Pylons2: Pylons2 {};
                    class Pylons3: Pylons3 {
                        attachment = "rhs_mag_agm65b";
                    };
                    class Pylons4: Pylons4 {
                        attachment = "rhs_mag_zpl20_mixed";
                    };
                    class Pylons5: Pylons5 {
                        attachment = "rhs_mag_agm65b";
                    };
                    class Pylons6: Pylons6 {};
                    class Pylons7: Pylons7 {};
                    class cmDispenser: cmDispenser {};
                };
            };
        };
        availableForSupportTypes[] = {"CAS_Bombing"};
    };
    class rhs_l159_CDF_CAP: rhs_l159_CDF {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhs_l159_CDF_CAP.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 1;
        scopeCurator = 2;
        displayName = "L-159 (CAP)";
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class Pylons: Pylons {
                    class Pylons1: Pylons1 {};
                    class Pylons2: Pylons2 {
                        attachment = "rhs_mag_aim120";
                    };
                    class Pylons3: Pylons3 {
                        attachment = "rhs_mag_aim120";
                    };
                    class Pylons4: Pylons4 {};
                    class Pylons5: Pylons5 {
                        attachment = "rhs_mag_aim120";
                    };
                    class Pylons6: Pylons6 {
                        attachment = "rhs_mag_aim120";
                    };
                    class Pylons7: Pylons7 {};
                    class cmDispenser: cmDispenser {};
                };
            };
        };
    };
    class rhs_l159_CDF_CAS: rhs_l159_CDF {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhs_l159_CDF_CAS.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 1;
        scopeCurator = 2;
        displayName = "L-159 (CAS)";
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class Pylons: Pylons {
                    class Pylons1: Pylons1 {};
                    class Pylons2: Pylons2 {
                        attachment = "rhs_mag_FFAR_7_USAF";
                    };
                    class Pylons3: Pylons3 {
                        attachment = "rhs_mag_FFAR_7_USAF";
                    };
                    class Pylons4: Pylons4 {
                        attachment = "rhs_mag_zpl20_mixed";
                    };
                    class Pylons5: Pylons5 {
                        attachment = "rhs_mag_FFAR_7_USAF";
                    };
                    class Pylons6: Pylons6 {
                        attachment = "rhs_mag_FFAR_7_USAF";
                    };
                    class Pylons7: Pylons7 {};
                    class cmDispenser: cmDispenser {};
                };
            };
        };
    };
    class RHS_L39_base: RHS_L159_base {
        scope = 0;
        dlc = "RHS_GREF";
        displayName = "$STR_RHSGREF_AIR_L39C_NAME";
        model = "rhsgref\addons\rhsgref_air\L39\rhs_l39.p3d";
        driverAction = "RHS_L39_pilot";
        driverLeftHandAnimName = "throttle_lever";
        thrustCoef[] = {
            1.8,
            1.5,
            1.4,
            1.3,
            1.3,
            1.3,
            1.3,
            1.2,
            1.1,
            0.8,
            0.6,
            0.4,
            0.3,
            0,
            0,
            0
        };
        envelope[] = {
            0,
            0.15,
            1.1,
            3,
            5,
            5.83,
            6,
            5.85,
            5.5,
            4.8,
            3.6,
            1.8,
            0
        };
        class WingVortices {
            class WingTipLeft {
                effectName = "WingVortices";
                position = "cerveny pozicni";
            };
            class WingTipRight {
                effectName = "WingVortices";
                position = "zeleny pozicni";
            };
            class BodyLeft {
                effectName = "BodyVortices";
                position = "body_vertex_left";
            };
            class BodyRight {
                effectName = "BodyVortices";
                position = "body_vertex_right";
            };
        };
        class AnimationSources: AnimationSources {};
        rhs_decalParameters[] = {"['Number',[4,5],'AviaCDF']", "['Label',[2],'Aviation', 4]", "['Label',[3],'AviationSquadronsCDF', 2]"};
        hiddenselectionstextures[] = {"\rhsgref\addons\rhsgref_air\L39\Data\l-39_body_co.paa", "\rhsgref\addons\rhsgref_air\L39\Data\l-39_body_1_co.paa"};
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsgref\addons\rhsgref_air\L39\Data\l-39_body_1.rvmat",
                "rhsgref\addons\rhsgref_air\L39\data\l-39_body_1_damage.rvmat",
                "rhsgref\addons\rhsgref_air\L39\data\l-39_body_1_destruct.rvmat",
                "rhsgref\addons\rhsgref_air\L39\data\l-39_body.rvmat",
                "rhsgref\addons\rhsgref_air\L39\data\l-39_body_damage.rvmat",
                "rhsgref\addons\rhsgref_air\L39\data\l-39_body_destruct.rvmat",
                "rhsgref\addons\rhsgref_air\L39\data\l-39_glass.rvmat",
                "rhsgref\addons\rhsgref_air\L39\data\l-39_glass_damage.rvmat",
                "rhsgref\addons\rhsgref_air\L39\data\l-39_glass_destruct.rvmat",
                "rhsgref\addons\rhsgref_air\L39\data\l-39_glass_in.rvmat",
                "rhsgref\addons\rhsgref_air\L39\data\l-39_glass_damage.rvmat",
                "rhsgref\addons\rhsgref_air\L39\data\l-39_glass_destruct.rvmat"
            };
        };
        class MFD {
            class AirplaneHUD {
                enableParallax = 1;
                topLeft = "HUD LH";
                topRight = "HUD PH";
                bottomLeft = "HUD LD";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                class Pos10Vector {
                    pos0[] = {0.52, 0.03};
                    pos10[] = {2.02, 1.23};
                    type = "vector";
                };
                color[] = {0, 1, 0, 0.1};
                class Bones {
                    class PlaneW {
                        pos[] = {0.5, 0.5};
                        type = "fixed";
                    };
                    class ImpactPoint {
                        type = "vector";
                        source = "ImpactPoint";
                        pos0[] = {0.5, 0.38};
                        pos10[] = {1.18, 1.12};
                    };
                };
                class Draw {
                    condition = "on";
                    color[] = {0.69, 0.22, 0};
                    class ImpactPoint {
                        class Cros {
                            type = "line";
                            points[] = {
                                {"ImpactPoint", {0, -0.152353}, 1},
                                {"ImpactPoint", {0, -0.0870588}, 1},
                                {},
                                {"ImpactPoint", {0.0989949, -0.10773}, 1},
                                {"ImpactPoint", {0.0565685, -0.0615599}, 1},
                                {},
                                {"ImpactPoint", {0.14, 0.00000000665956}, 1},
                                {"ImpactPoint", {0.08, 0.00000000380546}, 1},
                                {},
                                {"ImpactPoint", {0.0989949, 0.10773}, 1},
                                {"ImpactPoint", {0.0565685, 0.0615599}, 1},
                                {},
                                {"ImpactPoint", {-0.0000000122392, 0.152353}, 1},
                                {"ImpactPoint", {-0.00000000699382, 0.0870588}, 1},
                                {},
                                {"ImpactPoint", {-0.0989949, 0.10773}, 1},
                                {"ImpactPoint", {-0.0565685, 0.0615599}, 1},
                                {},
                                {"ImpactPoint", {-0.14, -0.00000000181679}, 1},
                                {"ImpactPoint", {-0.08, -0.00000000103817}, 1},
                                {},
                                {"ImpactPoint", {-0.098995, -0.10773}, 1},
                                {"ImpactPoint", {-0.0565685, -0.0615599}, 1},
                                {}
                            };
                        };
                        class Dot {
                            type = "line";
                            points[] = {
                                {"ImpactPoint", {0, 0.005}, 1},
                                {"ImpactPoint", {0.005, -0}, 1},
                                {"ImpactPoint", {0, -0.005}, 1},
                                {"ImpactPoint", {-0.005, -0}, 1},
                                {"ImpactPoint", {0, 0.005}, 1}
                            };
                        };
                        class Ring {
                            type = "line";
                            lineType = 3;
                            width = 17;
                            points[] = {
                                {"ImpactPoint", {0, -0.435294}, 1},
                                {"ImpactPoint", {0.06944, -0.428678}, 1},
                                {"ImpactPoint", {0.1368, -0.409046}, 1},
                                {"ImpactPoint", {0.2, -0.376965}, 1},
                                {"ImpactPoint", {0.25712, -0.333435}, 1},
                                {"ImpactPoint", {0.3064, -0.279807}, 1},
                                {"ImpactPoint", {0.3464, -0.217647}, 1},
                                {"ImpactPoint", {0.37588, -0.148871}, 1},
                                {"ImpactPoint", {0.39392, -0.0755671}, 1},
                                {"ImpactPoint", {0.4, 0}, 1},
                                {"ImpactPoint", {0.39392, 0.0755671}, 1},
                                {"ImpactPoint", {0.37588, 0.148871}, 1},
                                {"ImpactPoint", {0.3464, 0.217647}, 1},
                                {"ImpactPoint", {0.3064, 0.279807}, 1},
                                {"ImpactPoint", {0.25712, 0.333435}, 1},
                                {"ImpactPoint", {0.2, 0.376965}, 1},
                                {"ImpactPoint", {0.1368, 0.409046}, 1},
                                {"ImpactPoint", {0.06944, 0.428678}, 1},
                                {"ImpactPoint", {0, 0.435294}, 1},
                                {"ImpactPoint", {-0.06944, 0.428678}, 1},
                                {"ImpactPoint", {-0.1368, 0.409046}, 1},
                                {"ImpactPoint", {-0.2, 0.376965}, 1},
                                {"ImpactPoint", {-0.25712, 0.333435}, 1},
                                {"ImpactPoint", {-0.3064, 0.279807}, 1},
                                {"ImpactPoint", {-0.3464, 0.217647}, 1},
                                {"ImpactPoint", {-0.37588, 0.148871}, 1},
                                {"ImpactPoint", {-0.39392, 0.0755671}, 1},
                                {"ImpactPoint", {-0.4, 0}, 1},
                                {"ImpactPoint", {-0.39392, -0.0755671}, 1},
                                {"ImpactPoint", {-0.37588, -0.148871}, 1},
                                {"ImpactPoint", {-0.3464, -0.217647}, 1},
                                {"ImpactPoint", {-0.3064, -0.279807}, 1},
                                {"ImpactPoint", {-0.25712, -0.333435}, 1},
                                {"ImpactPoint", {-0.2, -0.376965}, 1},
                                {"ImpactPoint", {-0.1368, -0.409046}, 1},
                                {"ImpactPoint", {-0.06944, -0.428678}, 1},
                                {"ImpactPoint", {0, -0.435294}, 1},
                                {},
                                {}
                            };
                        };
                    };
                    alpha = 1;
                };
            };
        };
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class PassiveRadarSensorComponent: SensorTemplatePassiveRadar {};
                };
            };
            class TransportPylonsComponent {
                uiPicture = "\A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_A143_3DEN_CA.paa";
                class Pylons {
                    class Pylons1 {
                        hardpoints[] = {
                            "RHS_HP_FAB250",
                            "RHS_HP_B8M1",
                            "RHS_HP_UB16",
                            "RHS_HP_UB32",
                            "RHS_HP_R73",
                            "RHS_HP_L159_FUELPOD"
                        };
                        attachment = "rhs_mag_ub16_s5m1";
                        priority = 1;
                        maxweight = 200;
                        UIposition[] = {0.35, 0.41};
                        hitpoint = "HitPylon1";
                    };
                    class Pylons2: Pylons1 {
                        attachment = "rhs_mag_ub16_s5ko";
                        UIposition[] = {0.35, 0.15};
                        mirroredMissilePos = 1;
                        hitpoint = "HitPylon2";
                    };
                };
            };
        };
    };
    class rhs_l39_cdf: RHS_L39_base {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhs_l39_cdf.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
        side = 2;
        faction = "rhsgref_faction_cdf_air";
        crew = "rhsgref_cdf_air_pilot";
        typicalCargo[] = {"rhsgref_cdf_air_pilot"};
    };
    class Car_f;
    class rhs_vs1_seat: Car_f {
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;
        hiddenSelections[] = {};
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "VS-1 Ejection Seat";
        Icon = "iconParachute";
        picture = "\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
        model = "rhsgref\addons\rhsgref_air\L39\rhs_vs1.p3d";
        simulation = "motorcycle";
        isBicycle = 0;
        textureTrackWheel = "";
        memoryPointTrack1L = "";
        memoryPointTrack2L = "";
        memoryPointsGetInCargo = "Cargo";
        memoryPointsGetInCargoDir = "Cargo dir";
        ejectSpeed[] = {1, 0, 1};
        unitInfoType = "RscUnitInfoSoldier";
        hideUnitInfo = 1;
        cargoAction[] = {"RHS_K36D_PilotEject"};
        hasdriver = 0;
        weapons[] = {};
        magazines[] = {};
        fuelCapacity = 0;
        secondaryExplosion = 0;
        fuelExplosionPower = 0;
        explosionEffect = "";
        destrType = "DestructNo";
        castCargoShadow = 1;
        transportSoldier = 1;
        vehicleClass = "Objects";
        occludeSoundsWhenIn = 1;
        obstructSoundsWhenIn = 1;
        driverRightHandAnimName = "handle";
        driverLeftHandAnimName = "handle";
        class AnimationSources {
            class hide_booster {
                source = "user";
                animPeriod = 0.6;
                initPhase = 0;
            };
            class handle_move: hide_booster {};
        };
        class Turrets {};
        class UserActions {};
        driveOnComponent[] = {};
        class Eventhandlers {};
        SLX_XEH_DISABLED = 1;
    };
    class rhs_l159_cdf_b_CDF: rhs_l159_CDF {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhs_l159_cdf_b_CDF.paa";
        faction = "rhsgref_faction_cdf_air_b";
        crew = "rhsgref_cdf_b_air_pilot";
        side = 1;
        author = "$STR_RHS_AUTHOR_FULL";
        forceInGarage = 0;
        scope = 2;
        scopeCurator = 2;
    };
    class rhs_l159_cdf_b_CDF_plamen: rhs_l159_CDF_plamen {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhs_l159_cdf_b_CDF_plamen.paa";
        faction = "rhsgref_faction_cdf_air_b";
        crew = "rhsgref_cdf_b_air_pilot";
        side = 1;
        author = "$STR_RHS_AUTHOR_FULL";
        forceInGarage = 0;
        scope = 1;
        scopeCurator = 2;
    };
    class rhs_l159_cdf_b_CDF_CAP: rhs_l159_CDF_CAP {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhs_l159_cdf_b_CDF_CAP.paa";
        faction = "rhsgref_faction_cdf_air_b";
        crew = "rhsgref_cdf_b_air_pilot";
        side = 1;
        author = "$STR_RHS_AUTHOR_FULL";
        forceInGarage = 0;
        scope = 1;
        scopeCurator = 2;
    };
    class rhs_l159_cdf_b_CDF_CAS: rhs_l159_CDF_CAS {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhs_l159_cdf_b_CDF_CAS.paa";
        faction = "rhsgref_faction_cdf_air_b";
        crew = "rhsgref_cdf_b_air_pilot";
        side = 1;
        author = "$STR_RHS_AUTHOR_FULL";
        forceInGarage = 0;
        scope = 1;
        scopeCurator = 2;
    };
    class rhs_l39_cdf_b_cdf: rhs_l39_cdf {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhs_l39_cdf_b_cdf.paa";
        faction = "rhsgref_faction_cdf_air_b";
        crew = "rhsgref_cdf_b_air_pilot";
        side = 1;
        author = "$STR_RHS_AUTHOR_FULL";
        forceInGarage = 0;
        scope = 2;
        scopeCurator = 2;
    };
    class RHS_AN2_Base: Plane_Base_F {
        cabinOpening = 0;
        dlc = "RHS_GREF";
        simulation = "airplaneX";
        destrType = "DestructWreck";
        scope = 0;
        vehicleClass = "rhs_vehclass_aircraft";
        model = "rhsgref\addons\rhsgref_air\AN2\AN2.p3d";
        picture = "rhsgref\addons\rhsgref_air\AN2\data\UI\picture_an2_CA.paa";
        icon = "rhsgref\addons\rhsgref_air\AN2\data\UI\icon_an2_CA.paa";
        mapSize = 20;
        memoryPointsGetInCargo[] = {"pos cargo"};
        memoryPointsGetInCargoDir[] = {"pos cargo dir"};
        memoryPointsGetInDriver = "pos cargo";
        memoryPointsGetInDriverDir = "pos cargo dir";
        getInAction = "GetInHigh";
        getOutAction = "GetOutHigh";
        cargoGetInAction[] = {"GetInHigh"};
        cargoGetOutAction[] = {"GetOutHigh"};
        accuracy = 0.15;
        cost = 20000;
        gearRetracting = 0;
        driverAction = "RHS_AN2_Pilot";
        cargoAction[] = {
            "RHS_AN2_Cargo01",
            "RHS_AN2_Cargo02",
            "RHS_AN2_Cargo01",
            "RHS_AN2_Cargo03",
            "RHS_AN2_Cargo02",
            "RHS_AN2_Cargo01",
            "RHS_AN2_Cargo03",
            "RHS_AN2_Cargo01",
            "RHS_AN2_Cargo03",
            "RHS_AN2_Cargo02",
            "RHS_AN2_Cargo01",
            "RHS_AN2_Cargo02",
            "RHS_AN2_Cargo02",
            "RHS_AN2_Cargo03"
        };
        cargoIsCoDriver[] = {1, 0};
        transportSoldier = 12;
        driverCompartments = "Compartment1";
        cargoCompartments[] = {"Compartment1"};
        insideSoundCoef = 0.2;
        attenuationEffectType = "HeliAttenuation";
        soundGetIn[] = {"rhsgref\addons\rhsgref_air\AN2\data\sound\close", 0.31622776, 1};
        soundGetOut[] = {
            "rhsgref\addons\rhsgref_air\AN2\data\sound\open",
            0.31622776,
            1,
            40
        };
        soundDammage[] = {"", 0.56234133, 1};
        soundEngineOnInt[] = {"rhsgref\addons\rhsgref_air\AN2\data\sound\AN2_engine_start_int", 0.17782794, 1};
        soundEngineOnExt[] = {
            "rhsgref\addons\rhsgref_air\AN2\data\sound\AN2_engine_start_ext",
            0.39810717,
            1,
            700
        };
        soundEngineOffInt[] = {"rhsgref\addons\rhsgref_air\AN2\data\sound\AN2_engine_stop_int", 0.17782794, 1};
        soundEngineOffExt[] = {
            "rhsgref\addons\rhsgref_air\AN2\data\sound\AN2_engine_stop_ext",
            0.39810717,
            1,
            700
        };
        soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1", 0.099999994, 1};
        soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 0.099999994, 1.5};
        class Sounds {
            class EngineLowOut {
                sound[] = {
                    "rhsgref\addons\rhsgref_air\AN2\data\sound\AN2_engine_low_ext",
                    1.7782794,
                    1,
                    900
                };
                frequency = "1.0 min (rpm + 0.5)";
                volume = "camPos*engineOn*(rpm factor[0.85, 0])";
            };
            class EngineHighOut {
                sound[] = {
                    "rhsgref\addons\rhsgref_air\AN2\data\sound\AN2_engine_high_ext",
                    1.7782794,
                    1,
                    1100
                };
                frequency = "1";
                volume = "camPos*engineOn*(rpm factor[0.55, 1.0])";
            };
            class ForsageOut {
                sound[] = {
                    "rhsgref\addons\rhsgref_air\AN2\data\sound\AN2_engine_high_ext",
                    1.4125376,
                    1,
                    1500
                };
                frequency = "1";
                volume = "camPos*engineOn*(thrust factor[0.5, 1.0])";
                cone[] = {1.14, 3.92, 2, 0.4};
            };
            class WindNoiseOut {
                sound[] = {
                    "rhsgref\addons\rhsgref_air\AN2\data\sound\ext-wind",
                    0.0009999999,
                    0.6,
                    150
                };
                frequency = "(0.1+(1.2*(speed factor[1, 100])))";
                volume = "camPos*(speed factor[1, 100])";
            };
            class EngineLowIn {
                sound[] = {"rhsgref\addons\rhsgref_air\AN2\data\sound\AN2_engine_low_int", 1, 1};
                frequency = "1.0 min (rpm + 0.5)";
                volume = "(1-camPos)*(engineOn*(rpm factor[0.85, 0]))";
            };
            class EngineHighIn {
                sound[] = {"rhsgref\addons\rhsgref_air\AN2\data\sound\AN2_engine_high_int", 1, 1};
                frequency = "1";
                volume = "(1-camPos)*(engineOn*(rpm factor[0.55, 1.0]))";
            };
            class ForsageIn {
                sound[] = {"rhsgref\addons\rhsgref_air\AN2\data\sound\AN2_engine_high_int", 1.4125376, 1.1};
                frequency = "1";
                volume = "(1-camPos)*(engineOn*(thrust factor[0.5, 1.0]))";
            };
            class WindNoiseIn {
                sound[] = {"rhsgref\addons\rhsgref_air\AN2\data\sound\int-wind", 0.0009999999, 0.6};
                frequency = "(0.1+(1.2*(speed factor[1, 100])))";
                volume = "(1-camPos)*(speed factor[1, 100])";
            };
        };
        weapons[] = {};
        magazines[] = {};
        threat[] = {0, 0, 0};
        airBrake = 0;
        maxSpeed = 258;
        landingSpeed = 85;
        takeoffSpeed = 90;
        landingAoa = "rad(10)";
        flapsFrictionCoef = 0.95;
        rudderInfluence = 0.5;
        aileronSensitivity = 0.4;
        elevatorSensitivity = 0.4;
        envelope[] = {
            0,
            0,
            0.43,
            1.2,
            2.3,
            2.42,
            3.53,
            7.12,
            8.56,
            11.05,
            9.39,
            7.94,
            5.2,
            2.82,
            0
        };
        angleOfIndicence = 0;
        draconicForceXCoef = 3.15;
        draconicForceYCoef = 0.5;
        draconicForceZCoef = 0.5;
        draconicTorqueXCoef = 0.15;
        draconicTorqueYCoef = 3.15;
        thrustCoef[] = {
            1.4,
            1.3,
            1.2,
            1.2,
            1.1,
            1.1,
            1,
            1,
            0.9,
            0.7,
            0.5,
            0.3,
            0.1,
            0,
            0,
            0
        };
        maxOmega = 2000;
        turnCoef = 1.5;
        class Wheels {
            class Wheel_1 {
                steering = 1;
                side = "left";
                boneName = "Wheel_1_1";
                center = "wheel_1_1_center";
                boundary = "wheel_1_1_bound";
                suspForceAppPointOffset = "Wheel_1_1_center";
                tireForceAppPointOffset = "Wheel_1_1_center";
                width = 0.3;
                mass = 50;
                MOI = 8;
                dampingRate = 0.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 10;
                maxHandBrakeTorque = 0;
                suspTravelDirection[] = {0, -1, 0};
                maxCompression = 0.1;
                maxDroop = 0.1;
                sprungMass = 2400;
                springStrength = 100000;
                springDamperRate = 128000;
                longitudinalStiffnessPerUnitGravity = 90;
                latStiffX = 15;
                latStiffY = 120;
                frictionVsSlipGraph[] = {{0, 2}, {0.5, 1}, {1, 1}};
            };
            class Wheel_2: Wheel_1 {
                boneName = "wheel_1_2";
                center = "wheel_1_2_center";
                boundary = "wheel_1_2_bound";
                suspForceAppPointOffset = "Wheel_1_2_center";
                tireForceAppPointOffset = "Wheel_1_2_center";
            };
            class Wheel_3: Wheel_2 {
                steering = 0;
                side = "left";
                boneName = "Wheel_2_1";
                center = "wheel_2_1_center";
                boundary = "wheel_2_1_bound";
                suspForceAppPointOffset = "Wheel_2_1_center";
                tireForceAppPointOffset = "Wheel_2_1_center";
                width = 0.16;
                maxCompression = 0.1;
                maxDroop = 0.1;
                sprungMass = 700;
                springStrength = 1580000;
                springDamperRate = 12000;
            };
        };
        wheelSteeringSensitivity = 2;
        ejectSpeed[] = {0, 0, 0};
        extCameraPosition[] = {0, 5, -20};
        lightOnGear = 0;
        driverLeftHandAnimName = "left_stick_aileron";
        driverRightHandAnimName = "left_stick_aileron";
        armor = 25;
        damageResistance = 0.00278;
        class HitPoints: HitPoints {
            class HitHull {
                armor = 1.5;
                explosionShielding = 1;
                passThrough = 0.5;
                minimalHit = 0;
                material = -1;
                radius = 0.3;
                name = "HitHull";
                visual = "vis_hull";
                depends = "Total";
            };
            class HitEngine {
                armor = 0.5;
                explosionShielding = 1;
                passThrough = 0.2;
                minimalHit = 0.1;
                material = -1;
                radius = 0.15;
                name = "hit_engine";
                visual = "vis_engine";
                depends = "0";
            };
            class HitFuel {
                armor = 1.5;
                explosionShielding = 2;
                passThrough = 0.2;
                minimalHit = 0;
                material = -1;
                radius = 0.1;
                name = "hit_fuel_l";
                visual = "vis_wing_lh";
                depends = "0";
            };
            class HitFuel2 {
                armor = 1.5;
                explosionShielding = 2;
                passThrough = 0.2;
                minimalHit = 0;
                material = -1;
                radius = 0.1;
                name = "hit_fuel_r";
                visual = "vis_wing_rh";
                depends = "0";
            };
            class HitLAileron_link {
                armor = 0.3;
                explosionShielding = 0.9;
                passThrough = 0.01;
                minimalHit = 0.03;
                material = -1;
                radius = 0.1;
                name = "hit_aileron_link_l";
                visual = "";
                depends = "0";
            };
            class HitLAileron_1 {
                armor = 1.5;
                explosionShielding = 3;
                passThrough = 0.1;
                minimalHit = 0.1;
                material = -1;
                radius = 0.12;
                name = "hit_aileron_lh";
                visual = "vis_wing_lh";
                depends = "HitLAileron_link*0.7";
            };
            class HitLAileron_2 {
                armor = 1.5;
                explosionShielding = 3;
                passThrough = 0.1;
                minimalHit = 0.1;
                material = -1;
                radius = 0.1;
                name = "hit_aileron_ld";
                visual = "vis_wing_ld";
                depends = "0";
            };
            class HitLAileron {
                armor = 1.5;
                explosionShielding = 3;
                passThrough = 0.1;
                minimalHit = 0.1;
                material = -1;
                radius = 0.12;
                name = "hit_aileron_lh";
                visual = "vis_wing_lh";
                depends = "(HitLAileron_1 + HitLAileron_2)*0.5";
            };
            class HitRAileron_link {
                armor = 0.3;
                explosionShielding = 0.9;
                passThrough = 0.01;
                minimalHit = 0.03;
                material = -1;
                radius = 0.1;
                name = "hit_aileron_link_r";
                visual = "";
                depends = "0";
            };
            class HitRAileron_1 {
                armor = 1.5;
                explosionShielding = 3;
                passThrough = 0.1;
                minimalHit = 0.1;
                material = -1;
                radius = 0.12;
                name = "hit_aileron_rh";
                visual = "vis_wing_rh";
                depends = "HitRAileron_link*0.7";
            };
            class HitRAileron_2 {
                armor = 1.5;
                explosionShielding = 3;
                passThrough = 0.1;
                minimalHit = 0.1;
                material = -1;
                radius = 0.1;
                name = "hit_aileron_rd";
                visual = "vis_wing_rd";
                depends = "0";
            };
            class HitRAileron {
                armor = 1.5;
                explosionShielding = 3;
                passThrough = 0.1;
                minimalHit = 0.1;
                material = -1;
                radius = 0.12;
                name = "hit_aileron_rh";
                visual = "vis_wing_rh";
                depends = "(HitRAileron_1 + HitRAileron_2)*0.5";
            };
            class HitControlRear {
                armor = 0.6;
                explosionShielding = 0.1;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.04;
                material = -1;
                name = "hit_control_rear";
                visual = "-";
                depends = "0";
            };
            class HitLCRudder {
                armor = 1.5;
                explosionShielding = 3;
                passThrough = 0.1;
                minimalHit = 0.1;
                material = -1;
                radius = 0.15;
                name = "hit_rudder";
                visual = "vis_rudder";
                depends = "HitControlRear";
            };
            class HitLCElevator {
                armor = 1.5;
                explosionShielding = 3;
                passThrough = 0.1;
                minimalHit = 0.1;
                material = -1;
                radius = 0.11;
                name = "hit_elevator_l";
                visual = "vis_elevator_l";
                depends = "HitControlRear";
            };
            class HitRElevator {
                armor = 1.5;
                explosionShielding = 3;
                passThrough = 0.1;
                minimalHit = 0.1;
                material = -1;
                radius = 0.11;
                name = "hit_elevator_r";
                visual = "vis_elevator_r";
                depends = "HitControlRear";
            };
            class HitGlass1 {
                armor = 0.1;
                material = -1;
                name = "glass1";
                visual = "glass1";
                passThrough = 0;
            };
            class HitGlass2 {
                armor = 0.1;
                material = -1;
                name = "glass2";
                visual = "glass2";
                passThrough = 0;
            };
            class HitGlass3 {
                armor = 0.1;
                material = -1;
                name = "glass3";
                visual = "glass3";
                passThrough = 0;
            };
            class HitGlass4 {
                armor = 0.1;
                material = -1;
                name = "glass4";
                visual = "glass4";
                passThrough = 0;
            };
        };
        class AnimationSources {
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
            class hideDoor {
                displayName = "Hide Door...";
                author = "Community Upgrade Project";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 0;
                forceAnimate[] = {};
                mass = 20;
            };
            class door {
                source = "user";
                animPeriod = 2.5;
                sound = "ServoRampSound_2";
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsgref\addons\rhsgref_air\AN2\Data\an2_1.rvmat",
                "rhsgref\addons\rhsgref_air\AN2\Data\an2_1_damage.rvmat",
                "rhsgref\addons\rhsgref_air\AN2\Data\an2_1_destruct.rvmat",
                "rhsgref\addons\rhsgref_air\AN2\Data\an2_2.rvmat",
                "rhsgref\addons\rhsgref_air\AN2\Data\an2_2_damage.rvmat",
                "rhsgref\addons\rhsgref_air\AN2\Data\an2_2_destruct.rvmat",
                "rhsgref\addons\rhsgref_air\AN2\Data\an2_interier.rvmat",
                "rhsgref\addons\rhsgref_air\AN2\Data\an2_interier_damage.rvmat",
                "rhsgref\addons\rhsgref_air\AN2\Data\an2_interier_destruct.rvmat",
                "rhsgref\addons\rhsgref_air\AN2\Data\an2_cockpit.rvmat",
                "rhsgref\addons\rhsgref_air\AN2\Data\an2_cockpit_damage.rvmat",
                "rhsgref\addons\rhsgref_air\AN2\Data\an2_cockpit_destruct.rvmat",
                "rhsgref\addons\rhsgref_air\AN2\Data\an2_wings.rvmat",
                "rhsgref\addons\rhsgref_air\AN2\Data\an2_wings_damage.rvmat",
                "rhsgref\addons\rhsgref_air\AN2\Data\an2_wings_destruct.rvmat",
                "rhsgref\addons\rhsgref_air\AN2\Data\an2_window.rvmat",
                "rhsgref\addons\rhsgref_air\AN2\Data\an2_window_damage.rvmat",
                "rhsgref\addons\rhsgref_air\AN2\Data\an2_window_destruct.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        driveOnComponent[] = {};
        driverLeftLegAnimName = "pedal_l";
        driverRightLegAnimName = "pedal_r";
        class Turrets: Turrets {
            class MainTurret: NewTurret {
                startEngine = 0;
                outGunnerMayFire = 1;
                commanding = -1;
                weapons[] = {};
                magazines[] = {};
                body = "";
                gun = "";
                animationSourceBody = "";
                animationSourceGun = "";
                memoryPointsGetInGunner = "pos driver";
                memoryPointsGetInGunnerDir = "pos driver dir";
                gunnerGetInAction = "GetInLow";
                gunnerGetOutAction = "GetOutLow";
                memoryPointGun = "machinegun";
                memoryPointGunnerOptics = "gunnerview";
                gunnerName = "Copilot";
                selectionFireAnim = "zasleh";
                castGunnerShadow = 1;
                viewGunnerShadow = 1;
                minElev = -50;
                maxElev = 30;
                initElev = 11;
                minTurn = -170;
                maxTurn = 170;
                initTurn = 0;
                gunnerAction = "RHS_AN2_Cargo";
                gunnerInAction = "RHS_AN2_Cargo";
                gunnerOpticsModel = "\A3\Weapons_F\empty.p3d";
                gunnerForceOptics = 0;
                enableManualFire = 0;
                LODTurnedIn = 1100;
                LODTurnedOut = 1100;
                class ViewPilot: ViewPilot {
                    minAngleX = -65;
                    maxAngleX = 85;
                    initAngleX = 0;
                    minAngleY = -150;
                    maxAngleY = 150;
                    initAngleY = 0;
                    minFov = 0.3;
                    maxFov = 1.2;
                    initFov = 1;
                };
                isCopilot = 1;
                primaryGunner = 0;
                canEject = 0;
                gunnerNotSpawned = 0;
                gunnerUsePilotView = 1;
                class HitPoints {};
                gunnerLeftHandAnimName = "yoke_copilot";
                gunnerRightHandAnimName = "right_stick_aileron";
                gunnerLeftLegAnimName = "pedal_l_copilot";
                gunnerRightLegAnimName = "pedal_r_copilot";
                turretCanSee = 15;
                class Components {
                    class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                        class Components: components {
                            class CrewDisplay {
                                componentType = "CrewDisplayComponent";
                                resource = "RscCustomInfoCrew";
                            };
                        };
                    };
                    class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                        defaultDisplay = "";
                        class Components: components {
                            class CrewDisplay {
                                componentType = "CrewDisplayComponent";
                                resource = "RscCustomInfoCrew";
                            };
                        };
                    };
                };
            };
        };
        class Components {
            class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                class Components: components {
                    class CrewDisplay {
                        componentType = "CrewDisplayComponent";
                        resource = "RscCustomInfoCrew";
                    };
                };
            };
            class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                defaultDisplay = "";
                class Components: components {
                    class CrewDisplay {
                        componentType = "CrewDisplayComponent";
                        resource = "RscCustomInfoCrew";
                    };
                };
            };
        };
        class Reflectors {
            class Left {
                color[] = {7000, 7500, 10000, 1};
                ambient[] = {100, 100, 100, 0};
                position = "light_l";
                direction = "light_l_dir";
                hitpoint = "light_l";
                selection = "light_l";
                size = 1;
                innerAngle = 20;
                outerAngle = 60;
                coneFadeCoef = 10;
                intensity = 50;
                useFlare = 1;
                dayLight = 0;
                FlareSize = 6;
                class Attenuation {
                    start = 1;
                    constant = 0;
                    linear = 0;
                    quadratic = 4;
                };
            };
            class Right: Left {
                position = "light_r";
                direction = "light_r_dir";
                hitpoint = "light_r";
                selection = "light_r";
            };
        };
        class Exhausts {
            class Exhaust1 {
                direction = "exhaust1_dir";
                effect = "ExhaustsEffectPlane";
                position = "exhaust1";
            };
        };
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "n1", "n2", "i1", "i2"};
        hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_air\an2\data\an2_1_co.paa", "rhsgref\addons\rhsgref_air\an2\data\an2_2_co.paa", "rhsgref\addons\rhsgref_air\an2\data\an2_wings_co.paa"};
        class textureSources {
            class standardCDF {
                displayName = "CDF";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsgref\addons\rhsgref_air\an2\data\an2_1_co.paa", "rhsgref\addons\rhsgref_air\an2\data\an2_2_co.paa", "rhsgref\addons\rhsgref_air\an2\data\an2_wings_co.paa"};
                factions[] = {"rhsgref_faction_cdf_air"};
            };
            class aeroschrot {
                displayname = "АэроШрот";
                author = "$STR_A3_Bohemia_Interactive";
                textures[] = {"rhsgref\addons\rhsgref_air\AN2\data\an2_1_A_CO", "rhsgref\addons\rhsgref_air\AN2\data\an2_2_A_CO", "rhsgref\addons\rhsgref_air\AN2\data\an2_wings_A_CO"};
                factions[] = {};
            };
            class airtak {
                displayName = "AirTak";
                author = "$STR_A3_Bohemia_Interactive";
                textures[] = {"rhsgref\addons\rhsgref_air\AN2\data\an2_1_B_CO", "rhsgref\addons\rhsgref_air\AN2\data\an2_2_B_CO", "rhsgref\addons\rhsgref_air\AN2\data\an2_wings_B_CO"};
                factions[] = {};
            };
            class military {
                displayName = "Military";
                author = "$STR_A3_Bohemia_Interactive";
                textures[] = {"rhsgref\addons\rhsgref_air\AN2\data\an2_1_CO", "rhsgref\addons\rhsgref_air\AN2\data\an2_2_CO", "rhsgref\addons\rhsgref_air\AN2\data\an2_wings_CO"};
                factions[] = {};
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
                displayName = "Define font type of side number";
                tooltip = "Define kind of font that will be drawn on vehicle";
                property = "rhs_decalNumber_type";
                control = "Combo";
                expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', [3,4], _value]]] call rhs_fnc_decalsInit}";
                defaultValue = 0;
                typeName = "STRING";
                class values {
                    class NoChange {
                        name = "Default";
                        value = "NoChange";
                    };
                    class AviaYellow {
                        name = "Aviation Yellow";
                        value = "AviaYellow";
                    };
                    class AviaBlue {
                        name = "Aviation Blue";
                        value = "AviaBlue";
                    };
                    class AviaRed {
                        name = "Aviation Red";
                        value = "AviaRed";
                    };
                    class AviaWhiteOut {
                        name = "Aviation White Out";
                        value = "AviaWhiteOut";
                    };
                    class AviaCDF {
                        name = "Aviation CDF";
                        value = "AviaCDF";
                        defaultValue = "AviaCDF";
                    };
                    class Default {
                        name = "Default (White)";
                        value = "Default";
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
                };
            };
            class rhs_decalNumber {
                displayName = "Set side number";
                tooltip = "Set side number. 2 numbers are required. Type 0 to hide numbers completly";
                property = "rhs_decalNumber";
                control = "Edit";
                validate = "Number";
                defaultValue = "-1";
                typeName = "Number";
                expression = "if( _value >= 0)then{if(_value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach [3,4]}else{[_this, [['Number', [3,4], _this getVariable ['rhs_decalNumber_type','AviaCDF'], _value] ] ] call rhs_fnc_decalsInit}};";
            };
            class rhs_decalTail {
                displayName = "Define tail decal";
                tooltip = "Define tail decal that will be drawn on vehicle";
                property = "rhs_decalTail";
                control = "Combo";
                expression = "[_this,[['Label', [5], 'Aviation',_value]]] call rhs_fnc_decalsInit";
                defaultValue = -1;
                typeName = "Number";
                class values {
                    class Default {
                        name = "Default";
                        value = -1;
                    };
                    class Empty {
                        name = "Empty";
                        value = 0;
                    };
                    class Star {
                        name = "Red Star";
                        value = 2;
                    };
                    class CDF {
                        name = "CDF";
                        value = 4;
                        defaultValue = 4;
                    };
                };
            };
            class door {
                displayName = "Open Door";
                property = "door";
                control = "slider";
                expression = "_this animate ['door',_value];";
                defaultValue = "0";
            };
        };
        class MarkerLights {
            class WhiteStill {
                name = "pos_light_still_white";
                color[] = {1, 1, 1};
                ambient[] = {0.1, 0.1, 0.1};
                intensity = 75;
                drawLight = 1;
                drawLightSize = 0.25;
                drawLightCenterSize = 0.04;
                activeLight = 0;
                blinking = 0;
                dayLight = 0;
                useFlare = 1;
            };
            class RedStill {
                name = "pos_light_still_red";
                color[] = {0.8, 0, 0};
                ambient[] = {0.08, 0, 0};
                intensity = 75;
                drawLight = 1;
                drawLightSize = 0.25;
                drawLightCenterSize = 0.04;
                activeLight = 0;
                blinking = 0;
                dayLight = 0;
                useFlare = 1;
            };
            class GreenStill {
                name = "pos_light_still_green";
                color[] = {0, 0.8, 0};
                ambient[] = {0, 0.08, 0};
                intensity = 75;
                drawLight = 1;
                drawLightSize = 0.25;
                drawLightCenterSize = 0.04;
                activeLight = 0;
                blinking = 0;
                dayLight = 0;
                useFlare = 1;
            };
            class RedBlinking {
                name = "pos_light_blink_red";
                color[] = {0.9, 0.15, 0.1};
                ambient[] = {0.09, 0.015, 0.01};
                intensity = 75;
                blinking = 1;
                blinkingStartsOn = 0;
                blinkingPattern[] = {2.9, 0.1};
                blinkingPatternGuarantee = 0;
                drawLightSize = 0.2;
                drawLightCenterSize = 0.04;
            };
            class WhiteBlinking1 {
                name = "pos_light_blink1_white";
                color[] = {1, 1, 1};
                ambient[] = {0.1, 0.1, 0.1};
                intensity = 100;
                blinking = 1;
                blinkingPattern[] = {0.1, 2.9};
                blinkingPatternGuarantee = 0;
                drawLightSize = 0.35;
                drawLightCenterSize = 0.08;
            };
            class WhiteBlinking2: WhiteBlinking1 {
                name = "pos_light_blink2_white";
            };
            class WhiteBlinking3: WhiteBlinking1 {
                name = "pos_light_blink3_white";
            };
        };
        class WingVortices {
            class WingTipLeft {
                effectName = "WingVortices";
                position = "body_vapour_L_E";
            };
            class WingTipRight {
                effectName = "WingVortices";
                position = "body_vapour_R_E";
            };
            class BodyLeft {
                effectName = "BodyVortices";
                position = "body_vapour_L_S";
            };
            class BodyRight {
                effectName = "BodyVortices";
                position = "body_vapour_R_S";
            };
            class WingTipLeftTop {
                effectName = "WingVortices";
                position = "body_vapour_L_E_T";
            };
            class WingTipRightTop {
                effectName = "WingVortices";
                position = "body_vapour_R_E_T";
            };
            class BodyLeftTop {
                effectName = "BodyVortices";
                position = "body_vapour_L_S_T";
            };
            class BodyRightTop {
                effectName = "BodyVortices";
                position = "body_vapour_R_S_T";
            };
        };
        class TransportBackpacks {
            class _xx_B_Parachute {
                backpack = "B_Parachute";
                count = 16;
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 20;
            };
            class _xx_Medikit {
                name = "Medikit";
                count = 5;
            };
        };
        class UserActions {
            class DoorOpen {
                displayName = "Open Doors";
                displayNameDefault = "Open doors";
                position = "cargo_door_handle";
                radius = 2;
                showwindow = 0;
                onlyForPlayer = 1;
                condition = "this animationPhase 'door' == 0 && (alive this) && (player in crew this) && (this animationPhase 'hideDoor' < 0.5);";
                statement = "this animate ['door',1, false];";
            };
            class DoorClose {
                displayName = "Close Doors";
                displayNameDefault = "Close doors";
                position = "cargo_door_handle";
                radius = 2;
                showwindow = 0;
                onlyForPlayer = 1;
                condition = "this animationPhase 'door' == 1 && (alive this) && (player in crew this) && (this animationPhase 'hideDoor' < 0.5);";
                statement = "this animate ['door',0, false];";
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this call rhs_fnc_air_init";
                postInit = "_this call rhs_fnc_reapplyTextures";
            };
        };
    };
    class RHS_AN2: RHS_AN2_Base {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\RHS_AN2.paa";
        accuracy = 0.5;
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
        side = 2;
        faction = "rhsgref_faction_cdf_air";
        crew = "rhsgref_cdf_air_pilot";
        typicalCargo[] = {"rhsgref_cdf_air_pilot"};
        displayName = "$STR_RHSGREF_AIR_AN2_NAME";
        rhs_decalParameters[] = {"['Number',[3,4],'AviaCDF']", "['Label',[5],'Aviation', 4]", "['Label',[6],'AviationSquadronsCDF']"};
    };
    class RHS_AN2_B: RHS_AN2 {
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
        side = 1;
        faction = "rhsgref_faction_cdf_air_b";
        crew = "rhsgref_cdf_b_air_pilot";
        typicalCargo[] = {"rhsgref_cdf_b_air_pilot"};
    };
    class Module_F;
    class ModuleCAS_F: Module_F {
        class Arguments {
            class Vehicle {
                class values {
                    class rhs_l159_CDF_CAS {
                        name = "L-159 (CAS)";
                        value = "rhs_l159_CDF_CAS";
                    };
                    class rhs_l39_cdf {
                        name = "L-39";
                        value = "rhs_l39_cdf";
                    };
                    class rhs_l159_cdf_b_cdf_CAS {
                        name = "L-159 (CAS)";
                        value = "rhs_l159_CDF_CAS";
                    };
                    class rhs_l39_cdf_b_cdf {
                        name = "L-39";
                        value = "rhs_l39_cdf";
                    };
                    class rhsgref_cdf_su25 {
                        name = "Su-25";
                        value = "rhsgref_cdf_su25";
                    };
                    class rhsgref_cdf_b_su25 {
                        name = "Su-25";
                        value = "rhsgref_cdf_b_su25";
                    };
                };
            };
        };
    };
};
