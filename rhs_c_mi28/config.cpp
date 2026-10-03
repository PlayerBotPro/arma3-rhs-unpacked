class DefaultEventhandlers;
class CfgPatches {
    class rhs_c_mi28 {
        units[] = {
            "rhs_mi28n_vvs",
            "rhs_mi28n_vvsc",
            "rhs_mi28n_b13_vvs",
            "rhs_mi28n_b13_vvsc"
        };
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {
            "rhs_c_airweapons",
            "rhs_c_heavyweapons",
            "rhs_c_a2port_air",
            "rhs_main"
        };
        name = "Mi-28";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class mi28_init {
                file = "\rhsafrf\addons\rhs_c_mi28\scripts\rhs_fnc_mi28_init.sqf";
                description = "Mi-28 settings init";
            };
            class mi28_ejection {
                file = "\rhsafrf\addons\rhs_c_mi28\scripts\rhs_mi28_ejection.sqf";
                description = "Mi-28 settings init";
            };
        };
    };
};
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        rhs_mi28_pilot = "rhs_mi28_pilot";
        rhs_mi28_gunner = "rhs_mi28_gunner";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class rhs_kia_mi28_pilot: DefaultDie {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\KIA_Ka52_Pilot.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class rhs_mi28_pilot: Crew {
            file = "\rhsafrf\addons\rhs_c_mi28\anims\mi28_pilot2.rtm";
            interpolateTo[] = {"rhs_kia_mi28_pilot", 1};
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
        };
        class rhs_mi28_gunner: Crew {
            file = "\rhsafrf\addons\rhs_c_mi28\anims\rhs_mi28_gunner.rtm";
            interpolateTo[] = {"rhs_kia_mi28_pilot", 1};
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
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft {
    class components;
};
class DefaultVehicleSystemsDisplayManagerRight {
    class components;
};
class RHS_Effects_Helicopter_Hull_Destruction;
class CfgVehicles {
    class ThingX;
    class Air;
    class Helicopter: Air {
        class Turrets;
        class HitPoints {};
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
    };
    class Heli_Attack_02_base_F: Helicopter_Base_F {
        class RotorLibHelicopterProperties;
        class Sounds;
        class HitPoints: HitPoints {
            class HitEngine1;
        };
        class Components;
    };
    class Plane;
    class rhs_mi28_base: Heli_Attack_02_base_F {
        side = 0;
        tf_isolatedAmount_api = 0.6;
        destrType = "DestructWreck";
        maxOmega = 2000;
        engineMOI = 10;
        class Wheels {
            class Wheel_1_1 {
                steering = 0;
                side = "left";
                boneName = "Wheel_1_1_axis_damper";
                suspForceAppPointOffset = "Wheel_1_1_axis";
                tireForceAppPointOffset = "Wheel_1_1_axis";
                center = "Wheel_1_1_axis";
                boundary = "Wheel_1_1_bound";
                suspTravelDirection[] = {0, -1, 0};
                width = 0.234;
                mass = 15;
                MOI = 0.768;
                dampingRate = 1;
                dampingRateDamaged = 2;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 2000;
                maxHandBrakeTorque = 0;
                maxCompression = 0.11;
                maxDroop = 0.15;
                sprungMass = 240;
                springStrength = 42000;
                springDamperRate = 99280;
                longitudinalStiffnessPerUnitGravity = 5000;
                latStiffX = 2.5;
                latStiffY = 18;
                frictionVsSlipGraph[] = {{0, 1.3}, {0.5, 1}, {1, 1.6}};
            };
            class Wheel_1_2: Wheel_1_1 {
                boneName = "Wheel_1_2_axis_damper";
                side = "right";
                suspForceAppPointOffset = "Wheel_1_2_axis";
                tireForceAppPointOffset = "Wheel_1_2_axis";
                center = "Wheel_1_2_axis";
                boundary = "Wheel_1_2_bound";
            };
            class Wheel_2_1: Wheel_1_1 {
                steering = 1;
                boneName = "Wheel_2_1_axis_damper";
                suspForceAppPointOffset = "Wheel_2_1_axis";
                tireForceAppPointOffset = "Wheel_2_1_axis";
                center = "Wheel_2_1_axis";
                boundary = "Wheel_2_1_bound";
                width = 0.186;
                suspTravelDirection[] = {0, -1, 0};
                maxCompression = 0.18;
                maxDroop = 0.12;
                sprungMass = 100;
                springStrength = 1580;
                springDamperRate = 95120;
            };
        };
        gearRetracting = 0;
        driveOnComponent[] = {"wheels"};
        LESH_canBeTowed = 1;
        LESH_towFromFront = 1;
        LESH_AxisOffsetTarget[] = {-0.12, 8.5, -2.21};
        LESH_WheelOffset[] = {-0.12, 1};
        rhs_decalParameters[] = {"['Number',cRHSAIRMI28NumberPlaces,'AviaYellow']"};
        dlc = "RHS_AFRF";
        category = "Air";
        crew = "rhs_pilot_combat_heli";
        typicalCargo[] = {"rhs_pilot_combat_heli"};
        maxSpeed = 395;
        fuelCapacity = 2130;
        AGM_fuelCapacity = 2130;
        fuelConsumptionRate = 0.5;
        mainBladeRadius = 8.5;
        tailBladeRadius = 1.95;
        tailBladeVertical = 1;
        tailBladeCenter = "mala osa";
        mainBladeCenter = "rotor_center";
        bodyFrictionCoef = 0.52;
        backRotorForceCoef = 1;
        liftForceCoef = 2;
        altFullForce = 4000;
        altNoForce = 6000;
        mainRotorSpeed = -1;
        backrotorspeed = -1;
        numberPhysicalWheels = 3;
        class RotorLibHelicopterProperties: RotorLibHelicopterProperties {
            rtd_center = "rtd_center";
            RTDconfig = "rhsafrf\addons\rhs_c_mi28\rotorlib\RTD_Mi28.xml";
        };
        availableForSupportTypes[] = {"CAS_Heli"};
        audible = 7;
        camShakeCoef = 0.6;
        scope = 1;
        mapSize = 16;
        vehicleClass = "rhs_vehclass_helicopter";
        editorSubcategory = "rhs_EdSubcat_helicopter";
        displayName = "$STR_MI28N_name";
        model = "\rhsafrf\addons\rhs_mi28\rhs_mi28";
        icon = "rhsafrf\addons\rhs_a2port_air\data\map_ico\icon_mi24_ca.paa";
        picture = "\rhsafrf\addons\rhs_a2port_air\data\ico\rhs_mi24p_pic_ca.paa";
        getInRadius = 2;
        gunnerUsesPilotView = 1;
        allowTabLock = 0;
        class MFD {
            class MFD_Left_Compass {
                topLeft = "mfd_left_compass_lt";
                topRight = "mfd_left_compass_rt";
                bottomLeft = "mfd_left_compass_lb";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0, 1, 0, 0.1};
                enableParallax = 0;
                font = "rhs_digital_font_var";
                class Bones {
                    class Compass_text {
                        type = "fixed";
                        pos[] = {0.5, 0.53};
                    };
                    class Speed_text: Compass_text {
                        pos[] = {0.192, 0.225};
                    };
                    class VSpeed_text: Compass_text {
                        pos[] = {0.812, 0.225};
                    };
                    class Alt_radar_text: Compass_text {
                        pos[] = {0.192, 0.599};
                    };
                    class Alt_baro_text: Compass_text {
                        pos[] = {0.812, 0.592};
                    };
                };
                class Draw {
                    alpha = 0.95;
                    color[] = {1, 1, 1};
                    condition = "on";
                    class Compass {
                        type = "text";
                        align = "center";
                        scale = 1;
                        source = "Heading";
                        sourceScale = 1;
                        pos[] = {"Compass_text", {-0, -0.015}, 1};
                        right[] = {"Compass_text", {0.025, -0.015}, 1};
                        down[] = {"Compass_text", {-0, 0.015}, 1};
                    };
                    class Speed: Compass {
                        source = "speed";
                        sourceScale = 3.6;
                        pos[] = {"Speed_text", {-0, -0.015}, 1};
                        right[] = {"Speed_text", {0.025, -0.015}, 1};
                        down[] = {"Speed_text", {-0, 0.015}, 1};
                    };
                    class VSpeed: Compass {
                        source = "vspeed";
                        pos[] = {"VSpeed_text", {-0, -0.015}, 1};
                        right[] = {"VSpeed_text", {0.025, -0.015}, 1};
                        down[] = {"VSpeed_text", {-0, 0.015}, 1};
                    };
                    class Alt_Radar: Compass {
                        source = "altitudeAGL";
                        max = 300;
                        pos[] = {"Alt_radar_text", {-0, -0.015}, 1};
                        right[] = {"Alt_radar_text", {0.025, -0.015}, 1};
                        down[] = {"Alt_radar_text", {-0, 0.015}, 1};
                    };
                    class Alt_Baro: Compass {
                        source = "altitudeASL";
                        max = 10000;
                        pos[] = {"Alt_baro_text", {-0, -0.015}, 1};
                        right[] = {"Alt_baro_text", {0.025, -0.015}, 1};
                        down[] = {"Alt_baro_text", {-0, 0.015}, 1};
                    };
                };
            };
            class MFD_Gunner_Left_Compass: MFD_Left_Compass {
                topLeft = "mfd_gunner_left_compass_lt";
                topRight = "mfd_gunner_left_compass_rt";
                bottomLeft = "mfd_gunner_left_compass_lb";
                class Bones {
                    class Compass_text {
                        type = "fixed";
                        pos[] = {0.5, 0.53};
                    };
                    class Speed_text: Compass_text {
                        pos[] = {0.192, 0.225};
                    };
                    class VSpeed_text: Compass_text {
                        pos[] = {0.812, 0.225};
                    };
                    class Alt_radar_text: Compass_text {
                        pos[] = {0.192, 0.599};
                    };
                    class Alt_baro_text: Compass_text {
                        pos[] = {0.812, 0.592};
                    };
                };
                class Draw {
                    alpha = 0.95;
                    color[] = {1, 1, 1};
                    condition = "on";
                    class Compass {
                        type = "text";
                        align = "center";
                        scale = 1;
                        source = "Heading";
                        sourceScale = 1;
                        pos[] = {"Compass_text", {-0, -0.015}, 1};
                        right[] = {"Compass_text", {0.025, -0.015}, 1};
                        down[] = {"Compass_text", {-0, 0.015}, 1};
                    };
                    class Speed: Compass {
                        source = "speed";
                        sourceScale = 3.6;
                        pos[] = {"Speed_text", {-0, -0.015}, 1};
                        right[] = {"Speed_text", {0.025, -0.015}, 1};
                        down[] = {"Speed_text", {-0, 0.015}, 1};
                    };
                    class VSpeed: Compass {
                        source = "vspeed";
                        pos[] = {"VSpeed_text", {-0, -0.015}, 1};
                        right[] = {"VSpeed_text", {0.025, -0.015}, 1};
                        down[] = {"VSpeed_text", {-0, 0.015}, 1};
                    };
                    class Alt_Radar: Compass {
                        source = "altitudeAGL";
                        max = 300;
                        pos[] = {"Alt_radar_text", {-0, -0.015}, 1};
                        right[] = {"Alt_radar_text", {0.025, -0.015}, 1};
                        down[] = {"Alt_radar_text", {-0, 0.015}, 1};
                    };
                    class Alt_Baro: Compass {
                        source = "altitudeASL";
                        max = 10000;
                        pos[] = {"Alt_baro_text", {-0, -0.015}, 1};
                        right[] = {"Alt_baro_text", {0.025, -0.015}, 1};
                        down[] = {"Alt_baro_text", {-0, 0.015}, 1};
                    };
                };
            };
            class MFD_Right_Gun: MFD_Left_Compass {
                topLeft = "mfd_right_gun_lt";
                topRight = "mfd_right_gun_rt";
                bottomLeft = "mfd_right_gun_lb";
                color[] = {0, 1, 0, 0.1};
                class Bones {
                    class PlaneW {
                        type = "fixed";
                        pos[] = {0.5, 0.65};
                    };
                };
                class Draw {
                    alpha = 1;
                    color[] = {0.1, 0.8, 0};
                    condition = "on";
                    class Speed {
                        type = "text";
                        align = "left";
                        scale = 1;
                        source = "speed";
                        sourceScale = 3.6;
                        pos[] = {"PlaneW", {-0.3, "-0.53+-0.2."}, 1};
                        right[] = {"PlaneW", {"-0.3+0.16", "-0.53+-0.2"}, 1};
                        down[] = {"PlaneW", {-0.3, "0.43+-0.2"}, 1};
                    };
                    class Height: Speed {
                        source = "altitudeAGL";
                        sourceScale = 1;
                        format = "%3.0f";
                        pos[] = {"PlaneW", {0.39, "-0.53+-0.2"}, 1};
                        right[] = {"PlaneW", {"0.39+0.16", "-0.53+-0.2"}, 1};
                        down[] = {"PlaneW", {0.39, "0.43+-0.2"}, 1};
                    };
                };
            };
            class MFD_Gunner_Right_Gun: MFD_Right_Gun {
                topLeft = "mfd_gunner_right_gun_lt";
                topRight = "mfd_gunner_right_gun_rt";
                bottomLeft = "mfd_gunner_right_gun_lb";
                class Bones {
                    class PlaneW {
                        type = "fixed";
                        pos[] = {0.5, 0.65};
                    };
                };
                class Draw {
                    alpha = 1;
                    color[] = {0.1, 0.8, 0};
                    condition = "on";
                    class Speed {
                        type = "text";
                        align = "left";
                        scale = 1;
                        source = "speed";
                        sourceScale = 3.6;
                        pos[] = {"PlaneW", {-0.3, "-0.53+-0.2."}, 1};
                        right[] = {"PlaneW", {"-0.3+0.16", "-0.53+-0.2"}, 1};
                        down[] = {"PlaneW", {-0.3, "0.43+-0.2"}, 1};
                    };
                    class Height: Speed {
                        source = "altitudeAGL";
                        sourceScale = 1;
                        format = "%3.0f";
                        pos[] = {"PlaneW", {0.39, "-0.53+-0.2"}, 1};
                        right[] = {"PlaneW", {"0.39+0.16", "-0.53+-0.2"}, 1};
                        down[] = {"PlaneW", {0.39, "0.43+-0.2"}, 1};
                    };
                };
            };
            class CrossGunner {
                topLeft = "HUD LH";
                topRight = "HUD PH";
                bottomLeft = "HUD LD";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0, 1, 0, 0.1};
                enableParallax = 1;
                turret[] = {0};
                class Bones {
                    class WeaponAim {
                        type = "vector";
                        source = "weapon";
                        pos0[] = {"0.50  - 0.02", "0.31  + 0.03"};
                        pos10[] = {1.126, 0.9138};
                    };
                };
                class Draw {
                    alpha = 0.95;
                    color[] = {0.15, 1, 0.15};
                    condition = "on";
                    class MGun {
                        class Circle {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"WeaponAim", {0, 0.02}, 1},
                                {"WeaponAim", {0, 0.01}, 1},
                                {},
                                {"WeaponAim", {0, -0.01}, 1},
                                {"WeaponAim", {0, -0.02}, 1},
                                {},
                                {"WeaponAim", {0.02, 0}, 1},
                                {"WeaponAim", {0.01, 0}, 1},
                                {},
                                {"WeaponAim", {-0.01, 0}, 1},
                                {"WeaponAim", {-0.02, 0}, 1},
                                {}
                            };
                        };
                    };
                };
            };
            class AirplaneHUD {
                class Pos10Vector {
                    type = "vector";
                    pos0[] = {0.502, 0.49};
                    pos10[] = {1.112, 1.03};
                };
                topLeft = "HUD LH";
                topRight = "HUD PH";
                bottomLeft = "HUD LD";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0, 1, 0, 0.1};
                enableParallax = 1;
                turret[] = {-1};
                font = "rhs_digital_font_rus";
                class Bones {
                    class PlaneW {
                        type = "fixed";
                        pos[] = {0.502, 0.49};
                    };
                    class ImpactPoint {
                        type = "vector";
                        source = "ImpactPoint";
                        pos0[] = {0.5, 0.31};
                        pos10[] = {1.146, 0.8838};
                    };
                    class Limit0109 {
                        type = "limit";
                        limits[] = {0.1, 0.1, 0.9, 0.9};
                    };
                    class MissileFlightTimeRot1 {
                        type = "rotational";
                        source = "MissileFlightTime";
                        sourceScale = 1;
                        center[] = {0, 0};
                        min = 0;
                        max = 0.5;
                        minAngle = 0;
                        maxAngle = 18;
                        aspectRatio = 0.888235;
                    };
                    class MissileFlightTimeRot2: MissileFlightTimeRot1 {
                        maxAngle = 37;
                        max = 2;
                    };
                    class MissileFlightTimeRot3: MissileFlightTimeRot1 {
                        maxAngle = 55.5;
                        max = 3;
                    };
                    class MissileFlightTimeRot4: MissileFlightTimeRot1 {
                        maxAngle = 74;
                        max = 4;
                    };
                    class MissileFlightTimeRot5: MissileFlightTimeRot1 {
                        maxAngle = 92.5;
                        max = 5;
                    };
                    class MissileFlightTimeRot6: MissileFlightTimeRot1 {
                        maxAngle = 111;
                        max = 6;
                    };
                    class MissileFlightTimeRot7: MissileFlightTimeRot1 {
                        maxAngle = 129.5;
                        max = 7;
                    };
                    class MissileFlightTimeRot8: MissileFlightTimeRot1 {
                        maxAngle = 148;
                        max = 8;
                    };
                    class MissileFlightTimeRot9: MissileFlightTimeRot1 {
                        maxAngle = 166.5;
                        max = 9;
                    };
                    class MissileFlightTimeRot10: MissileFlightTimeRot1 {
                        maxAngle = 185;
                        max = 10;
                    };
                    class MissileFlightTimeRot11: MissileFlightTimeRot1 {
                        maxAngle = 203.5;
                        max = 11;
                    };
                    class MissileFlightTimeRot12: MissileFlightTimeRot1 {
                        maxAngle = 222;
                        max = 12;
                    };
                    class MissileFlightTimeRot13: MissileFlightTimeRot1 {
                        maxAngle = 240.5;
                        max = 13;
                    };
                    class MissileFlightTimeRot14: MissileFlightTimeRot1 {
                        maxAngle = 259;
                        max = 14;
                    };
                    class MissileFlightTimeRot15: MissileFlightTimeRot1 {
                        maxAngle = 277.5;
                        max = 15;
                    };
                    class MissileFlightTimeRot16: MissileFlightTimeRot1 {
                        maxAngle = 296;
                        max = 16;
                    };
                    class MissileFlightTimeRot17: MissileFlightTimeRot1 {
                        maxAngle = 314.5;
                        max = 17;
                    };
                    class MissileFlightTimeRot18: MissileFlightTimeRot1 {
                        maxAngle = 333;
                        max = 18;
                    };
                    class MissileFlightTimeRot19: MissileFlightTimeRot1 {
                        maxAngle = 351.5;
                        max = 19;
                    };
                    class MissileFlightTimeRot20: MissileFlightTimeRot1 {
                        maxAngle = 370;
                        max = 20;
                    };
                    class ForwardVector {
                        type = "vector";
                        source = "forward";
                        pos0[] = {0, 0};
                        pos10[] = {0.347, 0.345};
                    };
                    class Target {
                        source = "target";
                        type = "vector";
                        pos0[] = {0.5, 0.31};
                        pos10[] = {1.146, 0.8838};
                    };
                    class Velocity: Pos10Vector {
                        type = "vector";
                        source = "velocity";
                        pos0[] = {0.502, 0.49};
                        pos10[] = {0.563, 0.544};
                    };
                    class SliderSpeedSource {
                        type = "linear";
                        source = "speed";
                        min = 0;
                        max = 138.889;
                        minPos[] = {0.255, 0.2};
                        maxPos[] = {0.255, 0.525};
                    };
                    class AGLMove {
                        type = "linear";
                        source = "altitudeAGL";
                        min = 0;
                        max = 1000;
                        minPos[] = {0, "0.15*0.65"};
                        maxPos[] = {0, "0.65*0.65"};
                    };
                    class Heading_number_anchor {
                        type = "fixed";
                        pos[] = {0.498, 0.035};
                    };
                    class Heading {
                        type = "linear";
                        source = "Heading";
                        min = -36;
                        max = 36;
                        minPos[] = {0, 0};
                        maxPos[] = {1, 0};
                    };
                    class TargetDistanceMissile {
                        type = "rotational";
                        source = "targetDist";
                        center[] = {0, 0};
                        min = 100;
                        max = 3000;
                        minAngle = -120;
                        maxAngle = 120;
                    };
                    class vspeed {
                        source = "vspeed";
                        type = "linear";
                        min = -30;
                        max = 30;
                        minPos[] = {0, 0.06};
                        maxPos[] = {0, 0.3};
                    };
                    class HorizonBankMGun {
                        type = "rotational";
                        source = "HorizonBank";
                        center[] = {0, 0};
                        min = -6.28319;
                        max = 6.28319;
                        minAngle = -360;
                        maxAngle = 360;
                        aspectRatio = 0.885246;
                    };
                    class HorizonDive {
                        source = "horizonDive";
                        type = "linear";
                        min = -1;
                        max = 1;
                        minPos[] = {0.502, 2.49};
                        maxPos[] = {0.502, -1.51};
                    };
                    class HorizonBankReverted {
                        center[] = {0.5, 0.6016};
                        type = "rotational";
                        source = "HorizonBank";
                        min = "-3.14159265*2";
                        max = "3.14159265*2";
                        minAngle = 360;
                        maxAngle = -360;
                        aspectRatio = 0.8;
                    };
                    class Level0 {
                        pos0[] = {0.5, 0.46};
                        pos10[] = {1.384, 1.2452};
                        type = "horizon";
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
                };
                class Draw {
                    alpha = 1;
                    color[] = {0.15, 1, 0.15};
                    condition = "on";
                    class MGunD {
                        condition = "mgun+rocket+bomb";
                        class Cross {
                            type = "line";
                            width = 3;
                            points[] = {
                                {"ImpactPoint", {0, -0.0266471}, 1},
                                {"ImpactPoint", {0, -0.0355294}, 1},
                                {},
                                {"ImpactPoint", {0.02, -0.024}, 1},
                                {"ImpactPoint", {0.025, -0.031}, 1},
                                {},
                                {"ImpactPoint", {0, -0.002}, 1},
                                {"ImpactPoint", {0, 0.002}, 1},
                                {},
                                {"ImpactPoint", {-0.002, 0}, 1},
                                {"ImpactPoint", {0.002, 0}, 1},
                                {}
                            };
                        };
                        class Circle {
                            type = "line";
                            width = 3;
                            points[] = {
                                {"ImpactPoint", {0, -0.0310882}, 1},
                                {"MissileFlightTimeRot1", {0, 0.035}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot2", {0, 0.035}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot3", {0, 0.035}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot4", {0, 0.035}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot5", {0, 0.035}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot6", {0, 0.035}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot7", {0, 0.035}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot8", {0, 0.035}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot9", {0, 0.035}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot10", {0, 0.035}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot11", {0, 0.035}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot12", {0, 0.035}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot13", {0, 0.035}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot14", {0, 0.035}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot15", {0, 0.035}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot16", {0, 0.035}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot17", {0, 0.035}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot18", {0, 0.035}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot19", {0, 0.035}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot20", {0, 0.035}, 1, "ImpactPoint", 1}
                            };
                        };
                        class Circle_Min_Range {
                            type = "line";
                            width = 3;
                            points[] = {
                                {"ImpactPoint", {0, -0.0266471}, 1},
                                {"ImpactPoint", {0.005208, -0.026242}, 1},
                                {"ImpactPoint", {0.01026, -0.0250402}, 1},
                                {"ImpactPoint", {0.015, -0.0230763}, 1},
                                {"ImpactPoint", {0.019284, -0.0204116}, 1},
                                {"ImpactPoint", {0.02298, -0.0171287}, 1},
                                {"ImpactPoint", {0.02598, -0.0133235}, 1},
                                {"ImpactPoint", {0.028191, -0.00911329}, 1},
                                {"ImpactPoint", {0.029544, -0.00462593}, 1},
                                {"ImpactPoint", {0.03, 0}, 1},
                                {"ImpactPoint", {0.029544, 0.00462593}, 1},
                                {"ImpactPoint", {0.028191, 0.00911329}, 1},
                                {"ImpactPoint", {0.02598, 0.0133235}, 1},
                                {"ImpactPoint", {0.02298, 0.0171287}, 1},
                                {"ImpactPoint", {0.019284, 0.0204116}, 1},
                                {"ImpactPoint", {0.015, 0.0230763}, 1},
                                {"ImpactPoint", {0.01026, 0.0250402}, 1},
                                {"ImpactPoint", {0.005208, 0.026242}, 1},
                                {"ImpactPoint", {0, 0.0266471}, 1},
                                {"ImpactPoint", {-0.005208, 0.026242}, 1},
                                {"ImpactPoint", {-0.01026, 0.0250402}, 1},
                                {"ImpactPoint", {-0.015, 0.0230763}, 1},
                                {"ImpactPoint", {-0.019284, 0.0204116}, 1},
                                {"ImpactPoint", {-0.02298, 0.0171287}, 1},
                                {"ImpactPoint", {-0.02598, 0.0133235}, 1},
                                {"ImpactPoint", {-0.028191, 0.00911329}, 1},
                                {"ImpactPoint", {-0.029544, 0.00462593}, 1},
                                {"ImpactPoint", {-0.03, 0}, 1},
                                {"ImpactPoint", {-0.029544, -0.00462593}, 1},
                                {"ImpactPoint", {-0.028191, -0.00911329}, 1},
                                {"ImpactPoint", {-0.02598, -0.0133235}, 1},
                                {"ImpactPoint", {-0.02298, -0.0171287}, 1},
                                {"ImpactPoint", {-0.019284, -0.0204116}, 1},
                                {"ImpactPoint", {-0.015, -0.0230763}, 1},
                                {"ImpactPoint", {-0.01026, -0.0250402}, 1},
                                {"ImpactPoint", {-0.005208, -0.026242}, 1},
                                {"ImpactPoint", {0, -0.0266471}, 1}
                            };
                        };
                        class Distance {
                            type = "text";
                            source = "ImpactDistance";
                            sourceScale = 0.001;
                            sourcePrecision = 1;
                            max = 15;
                            align = "center";
                            scale = 1;
                            pos[] = {"ImpactPoint", {-0.002, -0.08}, 1};
                            right[] = {"ImpactPoint", {0.045, -0.08}, 1};
                            down[] = {"ImpactPoint", {-0.002, -0.04}, 1};
                        };
                    };
                    class Static2 {
                        clipTL[] = {0, 0.5};
                        clipBR[] = {1, 0};
                        points[] = {
                            {"PlaneW", {-0.21, "7.34351e-009--0.12"}, 1},
                            {"PlaneW", {-0.28, "9.79135e-009--0.12"}, 1},
                            {},
                            {"PlaneW", {0.21, "-2.00338e-009--0.12"}, 1},
                            {"PlaneW", {0.28, "-2.67117e-009--0.12"}, 1},
                            {},
                            {"PlaneW", {-0.105, "0.145492--0.12"}, 1},
                            {"PlaneW", {-0.14, "0.19399--0.12"}, 1},
                            {},
                            {"PlaneW", {0.105, "0.145492--0.12"}, 1},
                            {"PlaneW", {0.14, "0.19399--0.12"}, 1},
                            {},
                            {"PlaneW", {-0.181865, "0.084--0.12"}, 1},
                            {"PlaneW", {-0.242487, "0.112--0.12"}, 1},
                            {},
                            {"PlaneW", {0.181865, "0.084--0.12"}, 1},
                            {"PlaneW", {0.242487, "0.112--0.12"}, 1},
                            {},
                            {"PlaneW", {-0.202844, "0.0434816--0.12"}, 1},
                            {"PlaneW", {-0.270459, "0.0579755--0.12"}, 1},
                            {},
                            {"PlaneW", {0.202844, "0.0434816--0.12"}, 1},
                            {"PlaneW", {0.270459, "0.0579755--0.12"}, 1},
                            {},
                            {"PlaneW", {-0.209201, "0.0146422--0.12"}, 1},
                            {"PlaneW", {-0.244068, "0.0170825--0.12"}, 1},
                            {},
                            {"PlaneW", {-0.20681, "0.0291729--0.12"}, 1},
                            {"PlaneW", {-0.241278, "0.034035--0.12"}, 1},
                            {},
                            {"PlaneW", {0.20681, "0.0291729--0.12"}, 1},
                            {"PlaneW", {0.241278, "0.034035--0.12"}, 1},
                            {},
                            {"PlaneW", {0.209201, "0.0146422--0.12"}, 1},
                            {"PlaneW", {0.244068, "0.0170825--0.12"}, 1},
                            {}
                        };
                        type = "line";
                    };
                    class HorizonBank {
                        points[] = {
                            {"PlaneW", 1, "HorizonBankReverted", {"0.21-0.50", "0-0.50"}, 1},
                            {"PlaneW", 1, "HorizonBankReverted", {"0.14-0.50", "0-0.50"}, 1},
                            {"PlaneW", 1, "HorizonBankReverted", {"0.11-0.50", "-0.035-0.50"}, 1},
                            {"PlaneW", 1, "HorizonBankReverted", {"0.08-0.50", "0-0.50"}, 1},
                            {"PlaneW", 1, "HorizonBankReverted", {"0.03-0.50", "0-0.50"}, 1},
                            {},
                            {"PlaneW", 1, "HorizonBankReverted", {"-0.21-0.50", "0-0.50"}, 1},
                            {"PlaneW", 1, "HorizonBankReverted", {"-0.14-0.50", "0-0.50"}, 1},
                            {"PlaneW", 1, "HorizonBankReverted", {"-0.11-0.50", "-0.035-0.50"}, 1},
                            {"PlaneW", 1, "HorizonBankReverted", {"-0.08-0.50", "0-0.50"}, 1},
                            {"PlaneW", 1, "HorizonBankReverted", {"-0.03-0.50", "0-0.50"}, 1},
                            {},
                            {"PlaneW", 1, "HorizonBankReverted", {"0-0.50", "-0.004-0.50"}, 1},
                            {"PlaneW", 1, "HorizonBankReverted", {"0-0.50", "0.004-0.50"}, 1}
                        };
                        type = "line";
                    };
                    class CollectiveGroup {
                        condition = "simulRTD";
                        class CollectiveText {
                            type = "text";
                            source = "static";
                            text = "%";
                            align = "right";
                            scale = 1;
                            pos[] = {{0.2, 0.2}, 1};
                            right[] = {{0.26, 0.2}, 1};
                            down[] = {{0.2, 0.25}, 1};
                        };
                        class CollectiveNumber {
                            type = "text";
                            source = "rtdCollective";
                            sourceScale = 100;
                            align = "left";
                            scale = 1;
                            pos[] = {{0.2, 0.2}, 1};
                            right[] = {{0.26, 0.2}, 1};
                            down[] = {{0.2, 0.25}, 1};
                        };
                    };
                    class Horizont {
                        clipTL[] = {0.25, 0.25};
                        clipBR[] = {0.75, 0.75};
                        class Dimmed {
                            class Level0 {
                                type = "line";
                                width = 4;
                                points[] = {
                                    {"Level0", {-0.28, 0}, 1},
                                    {"Level0", {-0.175, 0}, 1},
                                    {},
                                    {"Level0", {-0.063, 0}, 1},
                                    {"Level0", {-0.007, 0}, 1},
                                    {},
                                    {"Level0", {0.007, 0}, 1},
                                    {"Level0", {0.063, 0}, 1},
                                    {},
                                    {"Level0", {0.175, 0}, 1},
                                    {"Level0", {0.28, 0}, 1}
                                };
                            };
                            class LevelM5: Level0 {
                                type = "line";
                                points[] = {
                                    {"LevelM5", {-0.32, 0}, 1},
                                    {"LevelM5", {-0.22, 0}, 1},
                                    {},
                                    {"LevelM5", {0.22, 0}, 1},
                                    {"LevelM5", {0.32, 0}, 1}
                                };
                            };
                            class VALM_1_5 {
                                type = "text";
                                source = "static";
                                text = -5;
                                align = "right";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelM5", {-0.21, -0.021}, 1};
                                right[] = {"LevelM5", {-0.15, -0.021}, 1};
                                down[] = {"LevelM5", {-0.21, 0.024}, 1};
                            };
                            class VALM_1_5L: VALM_1_5 {
                                align = "left";
                                pos[] = {"LevelM5", {0.21, -0.021}, 1};
                                right[] = {"LevelM5", {0.27, -0.021}, 1};
                                down[] = {"LevelM5", {0.21, 0.024}, 1};
                            };
                            class LevelP5: Level0 {
                                type = "line";
                                points[] = {
                                    {"LevelP5", {-0.32, 0}, 1},
                                    {"LevelP5", {-0.22, 0}, 1},
                                    {},
                                    {"LevelP5", {0.22, 0}, 1},
                                    {"LevelP5", {0.32, 0}, 1}
                                };
                            };
                            class VALP_1_5 {
                                type = "text";
                                source = "static";
                                text = "5";
                                align = "right";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelP5", {-0.21, -0.021}, 1};
                                right[] = {"LevelP5", {-0.15, -0.021}, 1};
                                down[] = {"LevelP5", {-0.21, 0.024}, 1};
                            };
                            class VALP_1_5L: VALP_1_5 {
                                align = "left";
                                pos[] = {"LevelP5", {0.21, -0.021}, 1};
                                right[] = {"LevelP5", {0.27, -0.021}, 1};
                                down[] = {"LevelP5", {0.21, 0.024}, 1};
                            };
                            class LevelM10: Level0 {
                                type = "line";
                                points[] = {
                                    {"LevelM10", {-0.32, 0}, 1},
                                    {"LevelM10", {-0.22, 0}, 1},
                                    {},
                                    {"LevelM10", {0.22, 0}, 1},
                                    {"LevelM10", {0.32, 0}, 1}
                                };
                            };
                            class VALM_1_10 {
                                type = "text";
                                source = "static";
                                text = -10;
                                align = "right";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelM10", {-0.21, -0.021}, 1};
                                right[] = {"LevelM10", {-0.15, -0.021}, 1};
                                down[] = {"LevelM10", {-0.21, 0.024}, 1};
                            };
                            class VALM_1_10L: VALM_1_10 {
                                align = "left";
                                pos[] = {"LevelM10", {0.21, -0.021}, 1};
                                right[] = {"LevelM10", {0.27, -0.021}, 1};
                                down[] = {"LevelM10", {0.21, 0.024}, 1};
                            };
                            class LevelP10: Level0 {
                                type = "line";
                                points[] = {
                                    {"LevelP10", {-0.32, 0}, 1},
                                    {"LevelP10", {-0.22, 0}, 1},
                                    {},
                                    {"LevelP10", {0.22, 0}, 1},
                                    {"LevelP10", {0.32, 0}, 1}
                                };
                            };
                            class VALP_1_10 {
                                type = "text";
                                source = "static";
                                text = "10";
                                align = "right";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelP10", {-0.21, -0.021}, 1};
                                right[] = {"LevelP10", {-0.15, -0.021}, 1};
                                down[] = {"LevelP10", {-0.21, 0.024}, 1};
                            };
                            class VALP_1_10L: VALP_1_10 {
                                align = "left";
                                pos[] = {"LevelP10", {0.21, -0.021}, 1};
                                right[] = {"LevelP10", {0.27, -0.021}, 1};
                                down[] = {"LevelP10", {0.21, 0.024}, 1};
                            };
                            class LevelM15: Level0 {
                                type = "line";
                                points[] = {
                                    {"LevelM15", {-0.32, 0}, 1},
                                    {"LevelM15", {-0.22, 0}, 1},
                                    {},
                                    {"LevelM15", {0.22, 0}, 1},
                                    {"LevelM15", {0.32, 0}, 1}
                                };
                            };
                            class VALM_1_15 {
                                type = "text";
                                source = "static";
                                text = -15;
                                align = "right";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelM15", {-0.21, -0.021}, 1};
                                right[] = {"LevelM15", {-0.15, -0.021}, 1};
                                down[] = {"LevelM15", {-0.21, 0.024}, 1};
                            };
                            class VALM_1_15L: VALM_1_15 {
                                align = "left";
                                pos[] = {"LevelM15", {0.21, -0.021}, 1};
                                right[] = {"LevelM15", {0.27, -0.021}, 1};
                                down[] = {"LevelM15", {0.21, 0.024}, 1};
                            };
                            class LevelP15: Level0 {
                                type = "line";
                                points[] = {
                                    {"LevelP15", {-0.32, 0}, 1},
                                    {"LevelP15", {-0.22, 0}, 1},
                                    {},
                                    {"LevelP15", {0.22, 0}, 1},
                                    {"LevelP15", {0.32, 0}, 1}
                                };
                            };
                            class VALP_1_15 {
                                type = "text";
                                source = "static";
                                text = "15";
                                align = "right";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelP15", {-0.21, -0.021}, 1};
                                right[] = {"LevelP15", {-0.15, -0.021}, 1};
                                down[] = {"LevelP15", {-0.21, 0.024}, 1};
                            };
                            class VALP_1_15L: VALP_1_15 {
                                align = "left";
                                pos[] = {"LevelP15", {0.21, -0.021}, 1};
                                right[] = {"LevelP15", {0.27, -0.021}, 1};
                                down[] = {"LevelP15", {0.21, 0.024}, 1};
                            };
                            class LevelM20: Level0 {
                                type = "line";
                                points[] = {
                                    {"LevelM20", {-0.32, 0}, 1},
                                    {"LevelM20", {-0.22, 0}, 1},
                                    {},
                                    {"LevelM20", {0.22, 0}, 1},
                                    {"LevelM20", {0.32, 0}, 1}
                                };
                            };
                            class VALM_1_20 {
                                type = "text";
                                source = "static";
                                text = -20;
                                align = "right";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelM20", {-0.21, -0.021}, 1};
                                right[] = {"LevelM20", {-0.15, -0.021}, 1};
                                down[] = {"LevelM20", {-0.21, 0.024}, 1};
                            };
                            class VALM_1_20L: VALM_1_20 {
                                align = "left";
                                pos[] = {"LevelM20", {0.21, -0.021}, 1};
                                right[] = {"LevelM20", {0.27, -0.021}, 1};
                                down[] = {"LevelM20", {0.21, 0.024}, 1};
                            };
                            class LevelP20: Level0 {
                                type = "line";
                                points[] = {
                                    {"LevelP20", {-0.32, 0}, 1},
                                    {"LevelP20", {-0.22, 0}, 1},
                                    {},
                                    {"LevelP20", {0.22, 0}, 1},
                                    {"LevelP20", {0.32, 0}, 1}
                                };
                            };
                            class VALP_1_20 {
                                type = "text";
                                source = "static";
                                text = "20";
                                align = "right";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelP20", {-0.21, -0.021}, 1};
                                right[] = {"LevelP20", {-0.15, -0.021}, 1};
                                down[] = {"LevelP20", {-0.21, 0.024}, 1};
                            };
                            class VALP_1_20L: VALP_1_20 {
                                align = "left";
                                pos[] = {"LevelP20", {0.21, -0.021}, 1};
                                right[] = {"LevelP20", {0.27, -0.021}, 1};
                                down[] = {"LevelP20", {0.21, 0.024}, 1};
                            };
                            class LevelM25: Level0 {
                                type = "line";
                                points[] = {
                                    {"LevelM25", {-0.32, 0}, 1},
                                    {"LevelM25", {-0.22, 0}, 1},
                                    {},
                                    {"LevelM25", {0.22, 0}, 1},
                                    {"LevelM25", {0.32, 0}, 1}
                                };
                            };
                            class VALM_1_25 {
                                type = "text";
                                source = "static";
                                text = -25;
                                align = "right";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelM25", {-0.21, -0.021}, 1};
                                right[] = {"LevelM25", {-0.15, -0.021}, 1};
                                down[] = {"LevelM25", {-0.21, 0.024}, 1};
                            };
                            class VALM_1_25L: VALM_1_25 {
                                align = "left";
                                pos[] = {"LevelM25", {0.21, -0.021}, 1};
                                right[] = {"LevelM25", {0.27, -0.021}, 1};
                                down[] = {"LevelM25", {0.21, 0.024}, 1};
                            };
                            class LevelP25: Level0 {
                                type = "line";
                                points[] = {
                                    {"LevelP25", {-0.32, 0}, 1},
                                    {"LevelP25", {-0.22, 0}, 1},
                                    {},
                                    {"LevelP25", {0.22, 0}, 1},
                                    {"LevelP25", {0.32, 0}, 1}
                                };
                            };
                            class VALP_1_25 {
                                type = "text";
                                source = "static";
                                text = "25";
                                align = "right";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelP25", {-0.21, -0.021}, 1};
                                right[] = {"LevelP25", {-0.15, -0.021}, 1};
                                down[] = {"LevelP25", {-0.21, 0.024}, 1};
                            };
                            class VALP_1_25L: VALP_1_25 {
                                align = "left";
                                pos[] = {"LevelP25", {0.21, -0.021}, 1};
                                right[] = {"LevelP25", {0.27, -0.021}, 1};
                                down[] = {"LevelP25", {0.21, 0.024}, 1};
                            };
                            class LevelM30: Level0 {
                                type = "line";
                                points[] = {
                                    {"LevelM30", {-0.32, 0}, 1},
                                    {"LevelM30", {-0.22, 0}, 1},
                                    {},
                                    {"LevelM30", {0.22, 0}, 1},
                                    {"LevelM30", {0.32, 0}, 1}
                                };
                            };
                            class VALM_1_30 {
                                type = "text";
                                source = "static";
                                text = -30;
                                align = "right";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelM30", {-0.21, -0.021}, 1};
                                right[] = {"LevelM30", {-0.15, -0.021}, 1};
                                down[] = {"LevelM30", {-0.21, 0.024}, 1};
                            };
                            class VALM_1_30L: VALM_1_30 {
                                align = "left";
                                pos[] = {"LevelM30", {0.21, -0.021}, 1};
                                right[] = {"LevelM30", {0.27, -0.021}, 1};
                                down[] = {"LevelM30", {0.21, 0.024}, 1};
                            };
                            class LevelP30: Level0 {
                                type = "line";
                                points[] = {
                                    {"LevelP30", {-0.32, 0}, 1},
                                    {"LevelP30", {-0.22, 0}, 1},
                                    {},
                                    {"LevelP30", {0.22, 0}, 1},
                                    {"LevelP30", {0.32, 0}, 1}
                                };
                            };
                            class VALP_1_30 {
                                type = "text";
                                source = "static";
                                text = "30";
                                align = "right";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelP30", {-0.21, -0.021}, 1};
                                right[] = {"LevelP30", {-0.15, -0.021}, 1};
                                down[] = {"LevelP30", {-0.21, 0.024}, 1};
                            };
                            class VALP_1_30L: VALP_1_30 {
                                align = "left";
                                pos[] = {"LevelP30", {0.21, -0.021}, 1};
                                right[] = {"LevelP30", {0.27, -0.021}, 1};
                                down[] = {"LevelP30", {0.21, 0.024}, 1};
                            };
                            class LevelM35: Level0 {
                                type = "line";
                                points[] = {
                                    {"LevelM35", {-0.32, 0}, 1},
                                    {"LevelM35", {-0.22, 0}, 1},
                                    {},
                                    {"LevelM35", {0.22, 0}, 1},
                                    {"LevelM35", {0.32, 0}, 1}
                                };
                            };
                            class VALM_1_35 {
                                type = "text";
                                source = "static";
                                text = -35;
                                align = "right";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelM35", {-0.21, -0.021}, 1};
                                right[] = {"LevelM35", {-0.15, -0.021}, 1};
                                down[] = {"LevelM35", {-0.21, 0.024}, 1};
                            };
                            class VALM_1_35L: VALM_1_35 {
                                align = "left";
                                pos[] = {"LevelM35", {0.21, -0.021}, 1};
                                right[] = {"LevelM35", {0.27, -0.021}, 1};
                                down[] = {"LevelM35", {0.21, 0.024}, 1};
                            };
                            class LevelP35: Level0 {
                                type = "line";
                                points[] = {
                                    {"LevelP35", {-0.32, 0}, 1},
                                    {"LevelP35", {-0.22, 0}, 1},
                                    {},
                                    {"LevelP35", {0.22, 0}, 1},
                                    {"LevelP35", {0.32, 0}, 1}
                                };
                            };
                            class VALP_1_35 {
                                type = "text";
                                source = "static";
                                text = "35";
                                align = "right";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelP35", {-0.21, -0.021}, 1};
                                right[] = {"LevelP35", {-0.15, -0.021}, 1};
                                down[] = {"LevelP35", {-0.21, 0.024}, 1};
                            };
                            class VALP_1_35L: VALP_1_35 {
                                align = "left";
                                pos[] = {"LevelP35", {0.21, -0.021}, 1};
                                right[] = {"LevelP35", {0.27, -0.021}, 1};
                                down[] = {"LevelP35", {0.21, 0.024}, 1};
                            };
                            class LevelM40: Level0 {
                                type = "line";
                                points[] = {
                                    {"LevelM40", {-0.32, 0}, 1},
                                    {"LevelM40", {-0.22, 0}, 1},
                                    {},
                                    {"LevelM40", {0.22, 0}, 1},
                                    {"LevelM40", {0.32, 0}, 1}
                                };
                            };
                            class VALM_1_40 {
                                type = "text";
                                source = "static";
                                text = -40;
                                align = "right";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelM40", {-0.21, -0.021}, 1};
                                right[] = {"LevelM40", {-0.15, -0.021}, 1};
                                down[] = {"LevelM40", {-0.21, 0.024}, 1};
                            };
                            class VALM_1_40L: VALM_1_40 {
                                align = "left";
                                pos[] = {"LevelM40", {0.21, -0.021}, 1};
                                right[] = {"LevelM40", {0.27, -0.021}, 1};
                                down[] = {"LevelM40", {0.21, 0.024}, 1};
                            };
                            class LevelP40: Level0 {
                                type = "line";
                                points[] = {
                                    {"LevelP40", {-0.32, 0}, 1},
                                    {"LevelP40", {-0.22, 0}, 1},
                                    {},
                                    {"LevelP40", {0.22, 0}, 1},
                                    {"LevelP40", {0.32, 0}, 1}
                                };
                            };
                            class VALP_1_40 {
                                type = "text";
                                source = "static";
                                text = "40";
                                align = "right";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelP40", {-0.21, -0.021}, 1};
                                right[] = {"LevelP40", {-0.15, -0.021}, 1};
                                down[] = {"LevelP40", {-0.21, 0.024}, 1};
                            };
                            class VALP_1_40L: VALP_1_40 {
                                align = "left";
                                pos[] = {"LevelP40", {0.21, -0.021}, 1};
                                right[] = {"LevelP40", {0.27, -0.021}, 1};
                                down[] = {"LevelP40", {0.21, 0.024}, 1};
                            };
                            class LevelM45: Level0 {
                                type = "line";
                                points[] = {
                                    {"LevelM45", {-0.32, 0}, 1},
                                    {"LevelM45", {-0.22, 0}, 1},
                                    {},
                                    {"LevelM45", {0.22, 0}, 1},
                                    {"LevelM45", {0.32, 0}, 1}
                                };
                            };
                            class VALM_1_45 {
                                type = "text";
                                source = "static";
                                text = -45;
                                align = "right";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelM45", {-0.21, -0.021}, 1};
                                right[] = {"LevelM45", {-0.15, -0.021}, 1};
                                down[] = {"LevelM45", {-0.21, 0.024}, 1};
                            };
                            class VALM_1_45L: VALM_1_45 {
                                align = "left";
                                pos[] = {"LevelM45", {0.21, -0.021}, 1};
                                right[] = {"LevelM45", {0.27, -0.021}, 1};
                                down[] = {"LevelM45", {0.21, 0.024}, 1};
                            };
                            class LevelP45: Level0 {
                                type = "line";
                                points[] = {
                                    {"LevelP45", {-0.32, 0}, 1},
                                    {"LevelP45", {-0.22, 0}, 1},
                                    {},
                                    {"LevelP45", {0.22, 0}, 1},
                                    {"LevelP45", {0.32, 0}, 1}
                                };
                            };
                            class VALP_1_45 {
                                type = "text";
                                source = "static";
                                text = "45";
                                align = "right";
                                scale = 1;
                                sourceScale = 1;
                                pos[] = {"LevelP45", {-0.21, -0.021}, 1};
                                right[] = {"LevelP45", {-0.15, -0.021}, 1};
                                down[] = {"LevelP45", {-0.21, 0.024}, 1};
                            };
                            class VALP_1_45L: VALP_1_45 {
                                align = "left";
                                pos[] = {"LevelP45", {0.21, -0.021}, 1};
                                right[] = {"LevelP45", {0.27, -0.021}, 1};
                                down[] = {"LevelP45", {0.21, 0.024}, 1};
                            };
                        };
                    };
                    class Static {
                        type = "line";
                        width = 4;
                        points[] = {
                            {"vspeed", {0.22, 0.56}, 1},
                            {"vspeed", {0.205, 0.55}, 1},
                            {"vspeed", {0.22, 0.54}, 1},
                            {"vspeed", {0.22, 0.56}, 1},
                            {},
                            {{0.2, 0.598}, 1},
                            {{0.2, 0.782}, 1},
                            {},
                            {{0.2, 0.61}, 1},
                            {{0.18, 0.61}, 1},
                            {},
                            {{0.195, 0.77}, 1},
                            {{0.18, 0.77}, 1},
                            {},
                            {{0.195, 0.65}, 1},
                            {{0.18, 0.65}, 1},
                            {},
                            {{0.195, 0.69}, 1},
                            {{0.18, 0.69}, 1},
                            {},
                            {{0.195, 0.73}, 1},
                            {{0.18, 0.73}, 1},
                            {},
                            {"vspeed", {0.78, 0.56}, 1},
                            {"vspeed", {0.795, 0.55}, 1},
                            {"vspeed", {0.78, 0.54}, 1},
                            {"vspeed", {0.78, 0.56}, 1},
                            {},
                            {{0.8, 0.598}, 1},
                            {{0.8, 0.862}, 1},
                            {},
                            {{0.8, 0.61}, 1},
                            {{0.83, 0.61}, 1},
                            {},
                            {{0.805, 0.85}, 1},
                            {{0.83, 0.85}, 1},
                            {},
                            {{0.805, 0.65}, 1},
                            {{0.82, 0.65}, 1},
                            {},
                            {{0.805, 0.69}, 1},
                            {{0.82, 0.69}, 1},
                            {},
                            {{0.805, 0.73}, 1},
                            {{0.83, 0.73}, 1},
                            {},
                            {{0.805, 0.77}, 1},
                            {{0.82, 0.77}, 1},
                            {},
                            {{0.805, 0.81}, 1},
                            {{0.82, 0.81}, 1},
                            {}
                        };
                    };
                    class SpeedGroup {
                        condition = "speed-2.78";
                        class Static {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"SliderSpeedSource", {"0.015-0.03", 0.01}, 1},
                                {"SliderSpeedSource", {"0.000-0.03", 0}, 1},
                                {"SliderSpeedSource", {"0.015-0.03", -0.01}, 1},
                                {"SliderSpeedSource", {"0.015-0.03", 0.01}, 1},
                                {},
                                {{"0.25-0.03", 0.2}, 1},
                                {{"0.25-0.03", 0.525}, 1},
                                {},
                                {{"0.25-0.03", 0.2}, 1},
                                {{"0.23-0.03", 0.2}, 1},
                                {},
                                {{"0.24-0.03", 0.265}, 1},
                                {{"0.23-0.03", 0.265}, 1},
                                {},
                                {{"0.24-0.03", 0.33}, 1},
                                {{"0.23-0.03", 0.33}, 1},
                                {},
                                {{"0.24-0.03", 0.395}, 1},
                                {{"0.23-0.03", 0.395}, 1},
                                {},
                                {{"0.24-0.03", 0.46}, 1},
                                {{"0.23-0.03", 0.46}, 1},
                                {},
                                {{"0.25-0.03", 0.525}, 1},
                                {{"0.23-0.03", 0.525}, 1},
                                {}
                            };
                        };
                        class SpeedStatic500 {
                            type = "text";
                            source = "static";
                            text = "500";
                            scale = 1;
                            sourceScale = 1;
                            align = "left";
                            pos[] = {{"0.220-0.03", 0.183}, 1};
                            right[] = {{0.23, 0.183}, 1};
                            down[] = {{"0.220-0.03", 0.213}, 1};
                        };
                        class SpeedStatic0 {
                            type = "text";
                            source = "static";
                            text = "0";
                            scale = 1;
                            sourceScale = 1;
                            align = "left";
                            pos[] = {{"0.220-0.03", 0.508}, 1};
                            right[] = {{0.23, 0.508}, 1};
                            down[] = {{"0.220-0.03", 0.538}, 1};
                        };
                    };
                    class AGL_Radar {
                        condition = "1000-altitudeAGL";
                        class Panel {
                            width = 4;
                            type = "line";
                            points[] = {
                                {"AGLMove", {0.73, 0.11}, 1},
                                {"AGLMove", {0.745, 0.1}, 1},
                                {"AGLMove", {0.73, 0.09}, 1},
                                {"AGLMove", {0.73, 0.11}, 1},
                                {},
                                {{0.75, 0.1975}, 1},
                                {{0.75, 0.5225}, 1},
                                {},
                                {{0.75, 0.1975}, 1},
                                {{0.77, 0.1975}, 1},
                                {},
                                {{0.725, 0.5225}, 1},
                                {{0.775, 0.5225}, 1},
                                {},
                                {{0.755, 0.2625}, 1},
                                {{0.77, 0.2625}, 1},
                                {},
                                {{0.755, 0.3275}, 1},
                                {{0.77, 0.3275}, 1},
                                {},
                                {{0.755, 0.3925}, 1},
                                {{0.77, 0.3925}, 1},
                                {},
                                {{0.755, 0.4575}, 1},
                                {{0.77, 0.4575}, 1},
                                {}
                            };
                        };
                        class AltStatic50 {
                            type = "text";
                            source = "static";
                            scale = 1;
                            sourceScale = 1;
                            align = "right";
                            text = 1000;
                            pos[] = {{0.79, 0.17}, 1};
                            right[] = {{0.83, 0.17}, 1};
                            down[] = {{0.79, 0.205}, 1};
                        };
                    };
                    class RadarBoxes {
                        type = "radar";
                        pos0[] = {0.5, 0.31};
                        pos10[] = {1.146, 0.8838};
                        width = 4;
                        points[] = {
                            {{-0.002, -0.00177647}, 1},
                            {{0.002, -0.00177647}, 1},
                            {{0.002, 0.00177647}, 1},
                            {{-0.002, 0.00177647}, 1},
                            {{-0.002, -0.00177647}, 1}
                        };
                    };
                    class TargetDiamond {
                        class shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Target", 1, "Limit0109", 1, {0.02, 0.0177647}, 1},
                                {"Target", 1, "Limit0109", 1, {-0.02, 0.0177647}, 1},
                                {"Target", 1, "Limit0109", 1, {-0.02, -0.0177647}, 1},
                                {"Target", 1, "Limit0109", 1, {0.02, -0.0177647}, 1},
                                {"Target", 1, "Limit0109", 1, {0.02, 0.0177647}, 1}
                            };
                        };
                    };
                    class SpeedNumber {
                        type = "text";
                        align = "right";
                        source = "speed";
                        sourceScale = 3.6;
                        sourceLength = 3;
                        scale = 1;
                        pos[] = {{0.07, 0.07}, 1};
                        right[] = {{0.15, 0.07}, 1};
                        down[] = {{0.07, 0.12}, 1};
                    };
                    class AltNumber: SpeedNumber {
                        source = "altitudeAGL";
                        sourceScale = 1;
                        sourceLength = 3;
                        sourceOffset = 0;
                        align = "right";
                        pos[] = {{0.76, 0.07}, 1};
                        right[] = {{0.84, 0.07}, 1};
                        down[] = {{0.76, 0.12}, 1};
                    };
                    class AltNumberStatic: AltNumber {
                        type = "text";
                        source = "static";
                        align = "right";
                        text = "р";
                        scale = 1;
                        sourceScale = 1;
                        pos[] = {{0.88, 0.09}, 1};
                        right[] = {{0.93, 0.09}, 1};
                        down[] = {{0.88, 0.13}, 1};
                    };
                    class VspeedNumber: SpeedNumber {
                        source = "vspeed";
                        sourceScale = 1;
                        sourceLength = 2;
                        align = "left";
                        pos[] = {{0.81, 0.55}, 1};
                        right[] = {{0.89, 0.55}, 1};
                        down[] = {{0.81, 0.6}, 1};
                    };
                    class VspeedNumberStaticP30 {
                        type = "text";
                        source = "static";
                        text = "+30";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.835, 0.59}, 1};
                        right[] = {{0.885, 0.59}, 1};
                        down[] = {{0.835, 0.63}, 1};
                    };
                    class VspeedNumberStaticZERO {
                        type = "text";
                        source = "static";
                        text = "0";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.835, 0.71}, 1};
                        right[] = {{0.885, 0.71}, 1};
                        down[] = {{0.835, 0.75}, 1};
                    };
                    class VspeedNumberStaticM30 {
                        type = "text";
                        source = "static";
                        text = "-30";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.835, 0.83}, 1};
                        right[] = {{0.885, 0.83}, 1};
                        down[] = {{0.835, 0.87}, 1};
                    };
                    class NevimStatic3 {
                        type = "text";
                        source = "static";
                        text = "3";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.14, 0.59}, 1};
                        right[] = {{0.19, 0.59}, 1};
                        down[] = {{0.14, 0.63}, 1};
                    };
                    class NevimStaticZERO {
                        type = "text";
                        source = "static";
                        text = "0";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.14, 0.71}, 1};
                        right[] = {{0.19, 0.71}, 1};
                        down[] = {{0.14, 0.75}, 1};
                    };
                    class NevimStatic1 {
                        type = "text";
                        source = "static";
                        text = "1";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.14, 0.75}, 1};
                        right[] = {{0.19, 0.75}, 1};
                        down[] = {{0.14, 0.79}, 1};
                    };
                    class HeadingArrows {
                        type = "line";
                        width = 4;
                        points[] = {
                            {{"0.25", "0.055+0.01+0.025"}, 1},
                            {{0.75, "0.055+0.01+0.025"}, 1},
                            {},
                            {{"0.5 - 0.016", "0.09 - 0.018"}, 1},
                            {{0.5, 0.09}, 1},
                            {{"0.5 + 0.016", "0.09 - 0.018"}, 1},
                            {},
                            {{"0.5 - 0.035", "0.055 - 0.018"}, 1},
                            {{"0.5 + 0.035", "0.055 - 0.018"}, 1},
                            {{"0.5 + 0.035", "0.055 + 0.018"}, 1},
                            {{"0.5 - 0.035", "0.055 + 0.018"}, 1},
                            {{"0.5 - 0.035", "0.055 - 0.018"}, 1},
                            {}
                        };
                    };
                    class HeadingText {
                        type = "text";
                        source = "heading";
                        align = "center";
                        sourceScale = 1;
                        scale = 1;
                        pos[] = {"Heading_number_anchor", {0, 0}, 1};
                        right[] = {"Heading_number_anchor", {"0 + 0.041", 0}, 1};
                        down[] = {"Heading_number_anchor", {0, "0  + 0.04"}, 1};
                    };
                    class HeadingScale {
                        type = "scale";
                        source = "heading";
                        horizontal = 1;
                        sourceScale = 0.1;
                        width = 3;
                        top = 0.25;
                        center = 0.5;
                        bottom = 0.75;
                        lineXleft = 0.1;
                        lineYright = 0.09;
                        lineXleftMajor = 0.11;
                        lineYrightMajor = 0.09;
                        majorLineEach = 2;
                        numberEach = 2;
                        step = 0.5;
                        stepSize = 0.0555556;
                        align = "center";
                        scale = 1;
                        pos[] = {"0.32-0.072", "0.0+0.11"};
                        right[] = {"0.35-0.072", "0.0+0.11"};
                        down[] = {"0.32-0.072", "0.03+0.11"};
                    };
                };
            };
        };
        unitInfoType = "RHS_RscUnitInfoAir_Mi28";
        hideWeaponsCargo = 1;
        receiveRemoteTargets = 1;
        reportRemoteTargets = 1;
        reportOwnPosition = 1;
        irTarget = 1;
        irTargetSize = 1;
        visualTarget = 1;
        visualTargetSize = 0.9;
        radarTarget = 1;
        radarTargetSize = 1;
        LockDetectionSystem = "8";
        incomingMissileDetectionSystem = "8+16";
        gunnerCanSee = 55;
        driverCanSee = 55;
        class TransportMagazines {
            class _xx_rhs_mag_nspn_red {
                magazine = "rhs_mag_nspn_red";
                count = 10;
            };
            class _xx_rhs_mag_rdg2_white {
                magazine = "rhs_mag_rdg2_white";
                count = 4;
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 8;
            };
            class _xx_Toolkit {
                name = "Toolkit";
                count = 1;
            };
        };
        class TransportWeapons {};
        class TransportBackpacks {};
        driverDoor = "Door_Pilot";
        memoryPointsGetInCargo = "pos_cargo";
        memoryPointsGetInCargoDir = "pos_cargo_dir";
        cargoaction[] = {"passenger_flatground_generic04"};
        cargoDoors[] = {"Hatch_Cargo"};
        cargoCompartments[] = {"Compartment3"};
        viewCargoShadow = 1;
        driverCanEject = 1;
        driverCompartments = 1;
        ejectSpeed[] = {1, 0, 11};
        cargoGetInAction[] = {"GetInHeli_Transport_01Cargo"};
        cargoGetOutAction[] = {"RHS_HIND_Cargo_Exit"};
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "tail_decals",
            "n1",
            "n2"
        };
        hiddenSelectionsTextures[] = {
            "\rhsafrf\addons\rhs_mi28\data\rhs_mi28_01_grey_co.paa",
            "\rhsafrf\addons\rhs_mi28\data\rhs_mi28_02_grey_co.paa",
            "\rhsafrf\addons\rhs_mi28\data\rhs_mi28_03_exterior_grey_co.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
        class textureSources {
            class standard {
                displayName = "Grey";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "\rhsafrf\addons\rhs_mi28\data\rhs_mi28_01_grey_co.paa",
                    "\rhsafrf\addons\rhs_mi28\data\rhs_mi28_02_grey_co.paa",
                    "\rhsafrf\addons\rhs_mi28\data\rhs_mi28_03_exterior_grey_co.paa",
                    "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
                };
                factions[] = {"rhs_faction_vvs_c", "rhs_faction_vvs"};
            };
            class Camo: standard {
                displayName = "Camo";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "\rhsafrf\addons\rhs_mi28\data\rhs_mi28_01_camo_co.paa",
                    "\rhsafrf\addons\rhs_mi28\data\rhs_mi28_02_camo_co.paa",
                    "\rhsafrf\addons\rhs_mi28\data\rhs_mi28_03_exterior_camo_co.paa",
                    "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
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
            class rhs_hideRadome {
                displayName = "Hide radome";
                tooltip = "Hide the rotor-mounted radome";
                property = "rhs_hideRadome";
                control = "CheckboxNumber";
                expression = "_this animate ['radome_hide',_value,true]";
                defaultValue = "0";
            };
            class rhs_decalNumber_type {
                displayName = "Define font type of side number";
                tooltip = "Define kind of font that will be drawn on vehicle";
                property = "rhs_decalNumber_type";
                control = "Combo";
                expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHSAIRMI28NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
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
                        defaultValue = "AviaBlue";
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
                typeName = "Number";
                defaultValue = "-1";
                expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRMI28NumberPlaces}else{[_this, [['Number', cRHSAIRMI28NumberPlaces, _this getVariable ['rhs_decalNumber_type','AviaYellow'], _value] ] ] call rhs_fnc_decalsInit}};";
            };
            class rhs_decalTail {
                displayName = "Define tail decal";
                tooltip = "Define tail decal that will be drawn on vehicle";
                property = "rhs_decalTail";
                control = "Combo";
                expression = "[_this,[['Label', cRHSAIRMI28TailPlaces, 'Aviation',_value]]] call rhs_fnc_decalsInit";
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
                    class VVS {
                        name = "VVS Russia";
                        value = 3;
                        defaultValue = 3;
                    };
                };
            };
        };
        selectionHRotorStill = "velka vrtule staticka";
        selectionHRotorMove = "velka vrtule blur";
        selectionVRotorStill = "mala vrtule staticka";
        selectionVRotorMove = "mala vrtule blur";
        selectionDamage = "trup";
        selectionShowDamage = "poskozeni";
        slingLoadMaxCargoMass = 0;
        precisegetinout = 1;
        driverAction = "rhs_mi28_pilot";
        driverInAction = "rhs_mi28_pilot";
        getInAction = "pilot_Heli_Light_02_Enter";
        getOutAction = "pilot_Heli_Light_02_Exit";
        memoryPointsGetInDriverPrecise = "pos driver";
        memoryPointsGetInDriver = "pos driver";
        memoryPointsGetInDriverDir = "pos driver dir";
        driverLeftHandAnimName = "lever_pilot";
        driverRightHandAnimName = "stick_pilot";
        driverLeftLegAnimName = "pedalR";
        driverRightLegAnimName = "pedalL";
        memoryPointLRocket = "rocket_1";
        memoryPointRRocket = "rocket_2";
        memoryPointLMissile = "missile_1";
        memoryPointRMissile = "missile_2";
        memoryPointGun[] = {"machinegun", "machinegun2"};
        gunBeg[] = {"muzzle_1", "muzzle_2"};
        gunEnd[] = {"chamber_1", "chamber_2"};
        particlesPos = "chamber_1";
        particlesDir = "muzzle_1";
        selectionFireAnim = "";
        primaryGunner = 2;
        weaponsGroup1 = 128;
        weaponsGroup4 = 64;
        weapons[] = {"rhs_weap_MASTERSAFE"};
        magazines[] = {};
        transportsoldier = 3;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                body = "mainTurret";
                gun = "mainGun";
                weapons[] = {"rhs_weap_MASTERSAFE", "rhs_weap_2a42"};
                magazines[] = {"rhs_mag_3ubr11_125", "rhs_mag_3uof8_125"};
                gunBeg = "muzzle_1";
                gunEnd = "chamber_1";
                memoryPointGun = "muzzle_1";
                particlesPos = "chamber_1";
                particlesDir = "muzzle_1";
                selectionFireAnim = "zasleh";
                maxhorizontalrotspeed = 1.6;
                maxverticalrotspeed = 1.6;
                initelev = 4;
                initturn = 0;
                maxelev = 13;
                minelev = -40;
                maxturn = 110;
                minturn = -110;
                gunnerAction = "rhs_mi28_gunner";
                gunnerInAction = "rhs_mi28_gunner";
                gunnerGetInAction = "Heli_Attack_01_Pilot_enter";
                gunnerGetOutAction = "Heli_Attack_01_Pilot_exit";
                memoryPointsGetInGunnerPrecise = "pos gunner";
                memoryPointsGetInGunner = "pos gunner";
                memoryPointsGetInGunnerDir = "pos gunner dir";
                gunnerLeftHandAnimName = "stick_gunner";
                gunnerRightHandAnimName = "stick_gunner";
                castGunnerShadow = 1;
                viewGunnerShadow = 1;
                precisegetinout = 1;
                outGunnerMayFire = 1;
                commanding = -1;
                primaryGunner = 1;
                isCopilot = 0;
                CanEject = 1;
                gunnerCompartments = "Compartment2";
                canHideGunner = 0;
                usePiP = 1;
                lodTurnedIn = 1100;
                lodTurnedOut = 1100;
                stabilizedInAxes = 3;
                memoryPointGunnerOptics = "gunnerview";
                memoryPointGunnerOutOptics = "gunnerview";
                turretinfotype = "RHS_RscWeaponMi28_FCS";
                gunnerDoor = "door_gunner";
                canUseScanners = 0;
                allowTabLock = 0;
                class ViewOptics {
                    initanglex = 0;
                    initangley = 0;
                    initfov = 0.155;
                    maxanglex = 50;
                    maxangley = 100;
                    maxfov = 0.155;
                    minanglex = -50;
                    minangley = -100;
                    minfov = 0.057;
                };
                gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                gunnerOpticsEffect[] = {"TankCommanderOptics1"};
                class OpticsIn {
                    class Samshin_WFOV {
                        opticsDisplayName = "1";
                        gunneropticsmodel = "rhsafrf\addons\rhs_optics\vehicles\rhs_mi28_3x";
                        initanglex = 0;
                        initangley = 0;
                        maxanglex = 30;
                        maxangley = 100;
                        minanglex = -30;
                        minangley = -100;
                        initfov = 0.233333;
                        maxfov = 0.233333;
                        minfov = 0.233333;
                        thermalmode[] = {0, 1};
                        visionmode[] = {"Normal", "TI"};
                        hitpoint = "Hit_Optic_OPS28";
                    };
                    class Samshin_NFOV: Samshin_WFOV {
                        opticsDisplayName = "2";
                        gunneropticsmodel = "rhsafrf\addons\rhs_optics\vehicles\rhs_mi28_15x";
                        initfov = 0.102941;
                        maxfov = 0.102941;
                        minfov = 0.102941;
                    };
                    class Samshin_NFOV_Stabilised: Samshin_NFOV {
                        gunneropticsmodel = "rhsafrf\addons\rhs_optics\vehicles\rhs_mi28_30x";
                        opticsDisplayName = "3";
                        initfov = 0.0318182;
                        maxfov = 0.0318182;
                        minfov = 0.0318182;
                        directionStabilized = 1;
                    };
                };
                class Components {
                    class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                        class Components: components {
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
                            class UAVDisplay {
                                componentType = "UAVFeedDisplayComponent";
                            };
                            class SensorDisplay {
                                componentType = "SensorsDisplayComponent";
                                range[] = {8000, 16000, 24000, 4000};
                                resource = "RscCustomInfoSensors";
                            };
                        };
                    };
                    class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                        defaultDisplay = "SensorDisplay";
                        class Components: components {
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
                            class UAVDisplay {
                                componentType = "UAVFeedDisplayComponent";
                            };
                            class SensorDisplay {
                                componentType = "SensorsDisplayComponent";
                                range[] = {8000, 16000, 24000, 4000};
                                resource = "RscCustomInfoSensors";
                            };
                        };
                    };
                };
            };
        };
        class pilotCamera {
            class OpticsIn {
                class Samshin_Pilot {
                    opticsDisplayName = "1";
                    gunneropticsmodel = "rhsafrf\addons\rhs_optics\vehicles\rhs_mi28_3x";
                    initanglex = 0;
                    initangley = 0;
                    maxanglex = 30;
                    maxangley = 100;
                    minanglex = -30;
                    minangley = -100;
                    initfov = 0.233333;
                    maxfov = 0.233333;
                    minfov = 0.233333;
                    thermalmode[] = {0, 1};
                    visionmode[] = {"Normal", "TI"};
                    hitpoint = "Hit_Optic_TOES521";
                };
                class Samshin_NFOV: Samshin_Pilot {
                    opticsDisplayName = "2";
                    gunneropticsmodel = "rhsafrf\addons\rhs_optics\vehicles\rhs_mi28_15x";
                    initfov = 0.102941;
                    maxfov = 0.102941;
                    minfov = 0.102941;
                };
                class Samshin_NFOV_Stabilised: Samshin_NFOV {
                    opticsDisplayName = "3";
                    gunneropticsmodel = "rhsafrf\addons\rhs_optics\vehicles\rhs_mi28_30x";
                    initfov = 0.0233333;
                    maxfov = 0.0233333;
                    minfov = 0.0233333;
                    directionStabilized = 1;
                };
                showMiniMapInOptics = 0;
                showUAVViewpInOptics = 0;
                showSlingLoadManagerInOptics = 1;
            };
            minTurn = -120;
            maxTurn = 120;
            initTurn = 0;
            minElev = -13;
            maxElev = 80;
            initElev = 0;
            maxXRotSpeed = 0.3;
            maxYRotSpeed = 0.3;
            pilotOpticsShowCursor = 1;
            controllable = 1;
        };
        memoryPointDriverOptics = "toes521_view";
        driverWeaponsInfoType = "RHS_RscWeaponMi28_Pilot_FCS";
        class UserActions {
            class SAFEMODE {
                displayName = "<t color='#00FF7F'>MASTERSAFE</t>";
                condition = "(call rhs_fnc_findPlayer) in this";
                statement = "(call rhs_fnc_findPlayer) action ['SwitchWeapon', this, (call rhs_fnc_findPlayer), (weapons this) find 'rhs_weap_MASTERSAFE'];";
                position = "";
                radius = 10;
                priority = 10.5;
                onlyforplayer = 1;
                showWindow = 0;
                shortcut = "user13";
                hideOnUse = 1;
            };
            class openDoor {
                displayName = "Lights front";
                position = "";
                priority = 0.01;
                radius = 3;
                onlyForplayer = 1;
                showWindow = 0;
                condition = "this doorPhase 'landingLights' < 0.5 AND alive this";
                statement = "this animateDoor ['landingLights',1]";
            };
            class closeDoor: openDoor {
                displayName = "Lights side";
                condition = "this doorPhase 'landingLights' > 0.5 AND alive this";
                statement = "this animateDoor ['landingLights',0]";
            };
            class WheelBrakes: SAFEMODE {
                displayName = "Toggle Wheel Brakes";
                shortcut = "binocular";
                condition = "!difficultyEnabledRTD && (call rhs_fnc_findPlayer) isEqualTo (driver this)";
                statement = "[this] call rhs_fnc_heli_wheelBrakes";
            };
        };
        class Exhausts {
            class Exhaust01 {
                direction = "exhaust1_dir";
                position = "exhaust1";
                effect = "ExhaustEffectHeli";
            };
            class Exhaust02 {
                direction = "exhaust2_dir";
                position = "exhaust2";
                effect = "ExhaustEffectHeli";
            };
        };
        armor = 60;
        armorStructural = 25;
        damageResistance = 0.00555;
        hullDamageCauseExplosion = 1;
        epeImpulseDamageCoef = 1;
        hullExplosionDelay[] = {10, 30};
        class HitPoints: HitPoints {
            class HitHull: HitHull {
                simulation = "RHS_Hull_Helicopter";
                armor = -250;
                minimalHit = -0.2;
                radius = 0.1;
                explosionShielding = 0.15;
                armorComponent = "Hit_Hull";
                name = "hull_hit";
                visual = "zbytek";
                passThrough = 1;
                class DestructionEffects: RHS_Effects_Helicopter_Hull_Destruction {};
            };
            class HitFuel: HitFuel {
                armor = 1.3;
                radius = 0.125;
                minimalHit = 0.05;
                explosionShielding = 1;
            };
            class HitAvionics: HitAvionics {
                armor = 1.6;
                radius = 0.4;
                minimalHit = 0.15;
                explosionShielding = 1.5;
                visual = "podsvit pristroju";
            };
            class HitEngine1: HitEngine1 {
                armor = -50;
                radius = 0.35;
                explosionShielding = 1;
                minimalHit = 0.1;
                name = "engine_1_hit";
                armorComponent = "Hit_Engine_1";
            };
            class HitEngine2: HitEngine1 {
                name = "engine_2_hit";
                armorComponent = "Hit_Engine_2";
            };
            class HitEngine: HitEngine2 {
                armor = 999;
                visual = "camo2";
                name = "engine_hit";
                depends = "0.5 * (HitEngine1 + HitEngine2)";
            };
            class HitWings {
                armor = 999;
                explosionShielding = 1;
                material = 51;
                radius = 0.15;
                passThrough = 0.1;
                name = "hitwings";
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "wing_explo1";
                        interval = 1;
                        intensity = 0.5;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound: RHS_ERA_Flash {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke: RHS_ERA_Flash {
                        type = "RHS_ERA_Smoke";
                        intensity = 0.1;
                        lifeTime = 0.04;
                    };
                    class RHS_ERA_Flash2: RHS_ERA_Flash {
                        position = "wing_explo2";
                    };
                    class RHS_ERA_Sound2: RHS_ERA_Sound {
                        position = "wing_explo2";
                    };
                    class RHS_ERA_Smoke2: RHS_ERA_Smoke {
                        position = "wing_explo2";
                    };
                };
            };
            class HitTail {
                armor = -150;
                explosionShielding = 0.2;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.13;
                armorComponent = "Hit_Tail";
                name = "Hit_Tail";
                visual = "vis_tail";
            };
            class HitVRotor {
                armor = 1.5;
                explosionShielding = 1;
                material = 51;
                radius = 0.45;
                passThrough = 0.3;
                name = "tail_rotor_hit";
                visual = "mala vrtule staticka";
                depends = "HitTail";
            };
            class HitHRotor {
                armor = 1.5;
                explosionShielding = 1;
                material = 51;
                radius = 0.45;
                passThrough = 0.1;
                name = "main_rotor_hit";
                visual = "velka vrtule staticka";
            };
            class HitRotor: HitVRotor {
                armor = 999;
                visual = "-";
                name = "engine_hit";
                depends = "(HitVRotor + HitHRotor)";
            };
            class Hit_Radar {
                armor = -30;
                explosionShielding = 0;
                name = "";
                visual = "-";
                armorComponent = "Hit_Radar";
                passThrough = 0;
            };
            class Hit_Optic_TOES521 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "-";
                armorComponent = "Hit_Optic_TOES521";
                passThrough = 0;
            };
            class Hit_Optic_OPS28 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "-";
                armorComponent = "Hit_Optic_OPS28";
                passThrough = 0;
            };
            class HitGlass1 {
                armor = -40;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.1;
                armorComponent = "glass1";
                name = "glass1";
                visual = "glass1";
            };
            class HitGlass2 {
                armor = -40;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.1;
                armorComponent = "glass2";
                name = "glass2";
                visual = "glass2";
            };
            class HitGlass3 {
                armor = -40;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.1;
                armorComponent = "glass3";
                name = "glass3";
                visual = "glass3";
            };
            class HitGlass4 {
                armor = -40;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.1;
                armorComponent = "glass4";
                name = "glass4";
                visual = "glass4";
            };
            class HitGlass5 {
                armor = -40;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.1;
                armorComponent = "glass5";
                name = "glass5";
                visual = "glass5";
            };
            class HitGlass6 {
                armor = -40;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.1;
                armorComponent = "glass6";
                name = "glass6";
                visual = "glass6";
            };
            class HitGlass7 {
                armor = -40;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.1;
                armorComponent = "glass7";
                name = "glass7";
                visual = "glass7";
            };
            class HitGlass8 {
                armor = -40;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.1;
                armorComponent = "glass8";
                name = "glass8";
                visual = "glass8";
            };
            class HitGear {
                armor = -50;
                explosionShielding = 0.01;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.13;
                armorComponent = "Hit_Gear";
                name = "Hit_Gear";
                visual = "-";
            };
            class HitHydraulics {
                armor = -50;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.13;
                armorComponent = "hit_hydraulics";
                name = "hit_hydraulics";
                visual = "-";
            };
            class HitTransmission {
                armor = -80;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.13;
                armorComponent = "hit_transmission";
                name = "hit_transmission";
                visual = "-";
            };
            class HitPylon1 {
                armor = -30;
                material = -1;
                name = "hit_pylon_1";
                passThrough = 0;
                minimalHit = -0.1;
                explosionShielding = 0.1;
                radius = 0.75;
                visual = "-";
                depends = "HitWings";
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
                minimalHit = -0.1;
                explosionShielding = 0.1;
                radius = 0.75;
                visual = "-";
                depends = "HitWings";
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
                minimalHit = -0.1;
                explosionShielding = 0.1;
                radius = 0.75;
                visual = "-";
                depends = "HitWings";
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
                minimalHit = -0.1;
                explosionShielding = 0.1;
                radius = 0.75;
                visual = "-";
                depends = "HitWings";
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
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_mi28\data\rhs_mi28_01.rvmat",
                "rhsafrf\addons\rhs_mi28\data\rhs_mi28_01_dam.rvmat",
                "rhsafrf\addons\rhs_mi28\data\rhs_mi28_01_des.rvmat",
                "rhsafrf\addons\rhs_mi28\data\rhs_mi28_02.rvmat",
                "rhsafrf\addons\rhs_mi28\data\rhs_mi28_02_dam.rvmat",
                "rhsafrf\addons\rhs_mi28\data\rhs_mi28_02_des.rvmat",
                "rhsafrf\addons\rhs_mi28\data\rhs_mi28_03.rvmat",
                "rhsafrf\addons\rhs_mi28\data\rhs_mi28_03_dam.rvmat",
                "rhsafrf\addons\rhs_mi28\data\rhs_mi28_03_des.rvmat",
                "rhsafrf\addons\rhs_mi28\data\rhs_mi28_glass.rvmat",
                "rhsafrf\addons\rhs_mi28\data\rhs_mi28_glass_dam.rvmat",
                "rhsafrf\addons\rhs_mi28\data\rhs_mi28_glass_dam.rvmat",
                "rhsafrf\addons\rhs_mi28\data\rhs_mi28_glass_int.rvmat",
                "rhsafrf\addons\rhs_mi28\data\rhs_mi28_glass_dam.rvmat",
                "rhsafrf\addons\rhs_mi28\data\rhs_mi28_glass_dam.rvmat"
            };
        };
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class LaserSensorComponent: SensorTemplateLaser {
                        class AirTarget {
                            minRange = 9000;
                            maxRange = 9000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 9000;
                            maxRange = 9000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        angleRangeHorizontal = 75;
                        angleRangeVertical = 75;
                        typeRecognitionDistance = -1;
                        maxGroundNoiseDistance = 0;
                        maxFogSeeThrough = 0.3;
                        animDirection = "mainGun";
                    };
                    class PassiveRadarSensorComponent: SensorTemplatePassiveRadar {};
                    class DataLinkSensorComponent: SensorTemplateDataLink {};
                };
            };
            class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                class Components: components {
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
                    class UAVDisplay {
                        componentType = "UAVFeedDisplayComponent";
                    };
                    class SensorDisplay {
                        componentType = "SensorsDisplayComponent";
                        range[] = {8000, 16000, 24000, 4000};
                        resource = "RscCustomInfoSensors";
                    };
                };
            };
            class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                defaultDisplay = "SensorDisplay";
                class Components: components {
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
                    class UAVDisplay {
                        componentType = "UAVFeedDisplayComponent";
                    };
                    class SensorDisplay {
                        componentType = "SensorsDisplayComponent";
                        range[] = {8000, 16000, 24000, 4000};
                        resource = "RscCustomInfoSensors";
                    };
                };
            };
            class TransportPylonsComponent {
                UIPicture = "\rhsafrf\addons\rhs_mi28\data\loadouts\RHS_Mi28_EDEN_CA.paa";
                class pylons {
                    class pylon1 {
                        hardpoints[] = {
                            "RHS_HP_FAB250",
                            "RHS_HP_FAB500",
                            "RHS_HP_B13L1",
                            "RHS_HP_B8V20",
                            "RHS_HP_UB16",
                            "RHS_HP_UB32",
                            "RHS_HP_UPK23"
                        };
                        priority = 1;
                        attachment = "rhs_mag_b8v20a_s8kom";
                        maxweight = 550;
                        UIposition[] = {0.54, 0.4};
                        turret[] = {};
                        hitpoint = "HitPylon1";
                    };
                    class pylon2: pylon1 {
                        UIposition[] = {0.12, 0.4};
                        mirroredMissilePos = 1;
                        hitpoint = "HitPylon2";
                    };
                    class pylon3: pylon1 {
                        hardpoints[] = {
                            "RHS_HP_FAB250",
                            "RHS_HP_FAB500",
                            "RHS_HP_B13L1",
                            "RHS_HP_B8V20",
                            "RHS_HP_UB16",
                            "RHS_HP_UB32",
                            "RHS_HP_9m120_Mi28"
                        };
                        attachment = "rhs_mag_9M120M_Mi28_8x";
                        maxweight = 400;
                        priority = 2;
                        UIposition[] = {0.6, 0.45};
                        turret[] = {0};
                        hitpoint = "HitPylon3";
                    };
                    class pylon4: pylon3 {
                        UIposition[] = {0.06, 0.45};
                        mirroredMissilePos = 3;
                        hitpoint = "HitPylon4";
                    };
                    class cmDispenser {
                        hardpoints[] = {"RHS_cm_UV26", "RHS_cm_UV26_x2", "RHS_cm_UV26_x4"};
                        priority = 1;
                        attachment = "rhs_UV26_CMFlare_Chaff_Magazine_x4";
                        maxweight = 800;
                        UIposition[] = {0.33, 0};
                    };
                };
                class Presets {
                    class Bomb {
                        attachment[] = {
                            "rhs_mag_fab250",
                            "rhs_mag_fab250",
                            "rhs_mag_9M120M_Mi28_8x",
                            "rhs_mag_9M120M_Mi28_8x",
                            "rhs_UV26_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "Bomb";
                    };
                    class HeavyBomb {
                        attachment[] = {
                            "rhs_mag_fab500",
                            "rhs_mag_fab500",
                            "rhs_mag_9M120M_Mi28_8x",
                            "rhs_mag_9M120M_Mi28_8x",
                            "rhs_UV26_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "Heavy Bomb";
                    };
                    class ClusterMine {
                        attachment[] = {
                            "rhs_mag_kmgu2_pfm1",
                            "rhs_mag_kmgu2_pfm1",
                            "rhs_mag_9M120M_Mi28_8x",
                            "rhs_mag_9M120M_Mi28_8x",
                            "rhs_UV26_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "KMGU-2 (AP Mines)";
                    };
                    class ClusterHE {
                        attachment[] = {
                            "rhs_mag_kmgu2_ao25",
                            "rhs_mag_kmgu2_ao25",
                            "rhs_mag_9M120M_Mi28_8x",
                            "rhs_mag_9M120M_Mi28_8x",
                            "rhs_UV26_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "KMGU-2 (HE)";
                    };
                    class UPK {
                        attachment[] = {
                            "rhs_mag_upk23_mixed",
                            "rhs_mag_upk23_mixed",
                            "rhs_mag_9M120M_Mi28_8x",
                            "rhs_mag_9M120M_Mi28_8x",
                            "rhs_UV26_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "UPK-23-250";
                    };
                    class CAS {
                        attachment[] = {
                            "rhs_mag_b8v20a_s8kom",
                            "rhs_mag_b8v20a_s8kom",
                            "rhs_mag_9M120M_Mi28_8x",
                            "rhs_mag_9M120M_Mi28_8x",
                            "rhs_UV26_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "Close Air Support";
                    };
                    class HeavyCAS {
                        attachment[] = {
                            "rhs_mag_b13l1_s13b",
                            "rhs_mag_b13l1_s13b",
                            "rhs_mag_9M120M_Mi28_8x",
                            "rhs_mag_9M120M_Mi28_8x",
                            "rhs_UV26_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "Close Air Support (S-13)";
                    };
                    class Rockets {
                        attachment[] = {
                            "rhs_mag_b8v20a_s8kom",
                            "rhs_mag_b8v20a_s8kom",
                            "rhs_mag_b8v20a_s8df",
                            "rhs_mag_b8v20a_s8df",
                            "rhs_UV26_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "Rockets";
                    };
                };
            };
        };
        class AnimationSources: AnimationSources {
            class Door_Gunner {
                source = "door";
                animPeriod = 0.8;
            };
            class Door_Pilot: Door_Gunner {};
            class Hatch_Cargo: Door_Gunner {};
            class landingLights: Door_Pilot {
                animPeriod = 1.4;
            };
            class muzzle_rot_hmg {
                weapon = "rhs_weap_2a42";
                source = "ammorandom";
            };
            class elev {
                source = "user";
                animperiod = 0.0016;
            };
            class elev_bank {
                source = "user";
                animperiod = 0.0016;
            };
            class offset {
                source = "user";
                animperiod = 0.0002;
            };
            class radome_hide {
                source = "user";
                initPhase = 0;
                animPeriod = 0.00001;
                mass = 1;
                displayName = "hide radar";
                onPhaseChanged = "[(_this # 0),['ActiveRadarSensorComponent',(_this # 1) isEqualTo 0]] remoteExecCall ['enableVehicleSensor',0] ;";
            };
            class wings_hide {
                source = "user";
                initPhase = 0;
                animPeriod = 0.00001;
            };
            class eject: wings_hide {
                animPeriod = 0.3;
            };
            class w_launch: wings_hide {};
            class w_radar: wings_hide {};
            class w_laser: wings_hide {};
            class HitEngine1 {
                source = "Hit";
                hitpoint = "HitEngine1";
                raw = 1;
            };
            class HitEngine2: HitEngine1 {
                hitpoint = "HitEngine2";
            };
            class HitGear: HitEngine1 {
                hitpoint = "hitgear";
            };
            class HitRotor: HitEngine1 {
                hitpoint = "HitRotor";
            };
            class HitAvionics: HitEngine1 {
                hitpoint = "HitAvionics";
            };
            class HitGlass1 {
                source = "Hit";
                hitpoint = "HitGlass1";
                raw = 1;
            };
            class HitGlass7: HitGlass1 {
                hitpoint = "HitGlass7";
            };
            class HitGlass8: HitGlass1 {
                hitpoint = "HitGlass8";
            };
            class Damper_1_1_source {
                source = "damper";
                wheel = "Wheel_1_1";
            };
            class Damper_1_2_source {
                source = "damper";
                wheel = "Wheel_1_2";
            };
            class Damper_2_1_source {
                source = "damper";
                wheel = "Wheel_2_1";
            };
            class Wheel_1_1_source {
                source = "wheel";
                wheel = "Wheel_1_1";
            };
            class Wheel_1_2_source {
                source = "wheel";
                wheel = "Wheel_1_2";
            };
            class Wheel_2_1_source {
                source = "wheel";
                wheel = "Wheel_2_1";
            };
            class Helicopter_Brakes {
                source = "user";
                animPeriod = 0.01;
                initPhase = 1;
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
        };
        class compartmentsLights {
            class Comp1 {
                class Light_Pilot {
                    color[] = {40, 20, 20};
                    ambient[] = {0, 0, 0};
                    intensity = 5.5;
                    size = 0;
                    useFlare = 0;
                    flareSize = 0;
                    flareMaxDistance = 0;
                    dayLight = 0;
                    blinking = 0;
                    class Attenuation {
                        start = 0;
                        constant = 0;
                        linear = 1;
                        quadratic = 70;
                        hardLimitStart = 0.55;
                        hardLimitEnd = 0.75;
                    };
                    point = "light_pilot";
                };
            };
            class Comp2 {
                class Light_Gunner {
                    color[] = {40, 20, 20};
                    ambient[] = {0, 0, 0};
                    intensity = 2.5;
                    size = 0;
                    useFlare = 0;
                    flareSize = 0;
                    flareMaxDistance = 0;
                    dayLight = 0;
                    blinking = 0;
                    class Attenuation {
                        start = 0;
                        constant = 0;
                        linear = 1;
                        quadratic = 70;
                        hardLimitStart = 1.45;
                        hardLimitEnd = 2.45;
                    };
                    point = "light_gunner";
                };
            };
            class Comp3 {
                class Light_Cargo {
                    color[] = {40, 20, 20};
                    ambient[] = {0, 0, 0};
                    intensity = 2.5;
                    size = 0;
                    useFlare = 0;
                    flareSize = 0;
                    flareMaxDistance = 0;
                    dayLight = 0;
                    blinking = 0;
                    class Attenuation {
                        start = 0;
                        constant = 0;
                        linear = 1;
                        quadratic = 70;
                        hardLimitStart = 1.45;
                        hardLimitEnd = 2.45;
                    };
                    point = "light_cargo";
                };
            };
        };
        class Reflectors {
            class LightL {
                color[] = {7000, 7500, 10000};
                ambient[] = {70, 75, 100};
                intensity = 250;
                size = 1;
                innerAngle = 5;
                outerAngle = 75;
                coneFadeCoef = 10;
                position = "l svetlo";
                direction = "l svetlo konec";
                hitpoint = "l svetlo";
                selection = "l svetlo";
                useFlare = 0;
                dayLight = 0;
                flareSize = 1.5;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 0;
                    hardLimitStart = 400;
                    hardLimitEnd = 450;
                };
            };
            class LightR: LightL {
                position = "p svetlo";
                direction = "p svetlo konec";
                hitpoint = "p svetlo";
                selection = "p svetlo";
            };
            class LightLFlare: LightL {
                position = "L_Flare";
                useFlare = 1;
                outerAngle = 175;
                color[] = {10, 10, 9};
                ambient[] = {10, 10, 9};
            };
            class LightRFlare: LightR {
                position = "R_Flare";
                useFlare = 1;
                outerAngle = 175;
                color[] = {10, 10, 9};
                ambient[] = {10, 10, 9};
            };
        };
        aggregateReflectors[] = {{"LightL", "LightLFlare"}, {"LightR", "LightRFlare"}};
        class markerlights {
            class GreenStill {
                activeLight = 0;
                color[] = {0, 0.8, 0};
                ambient[] = {0, 0.08, 0};
                intensity = 55;
                blinking = 0;
                brightness = 0.01;
                flareSize = 0.5;
                name = "zeleny pozicni";
                useFlare = 1;
                drawLight = 1;
                drawLightSize = 0.25;
                drawLightCenterSize = 0.08;
            };
            class RedStill: GreenStill {
                color[] = {0.8, 0, 0};
                ambient[] = {0.08, 0, 0};
                name = "cerveny pozicni";
            };
            class WhiteStill: GreenStill {
                color[] = {0.8, 0.8, 0.8};
                ambient[] = {0.1, 0.1, 0.1};
                name = "bily pozicni";
            };
            class WhiteBlicking: GreenStill {
                color[] = {1, 1, 1};
                ambient[] = {0.1, 0.1, 0.1};
                blinking = 1;
                name = "bily pozicni blik";
            };
            class RedBlinking: WhiteBlicking {
                color[] = {0.9, 0.15, 0.1};
                ambient[] = {0.09, 0.015, 0.01};
                name = "cerveny pozicni blik";
            };
        };
        class RenderTargets {};
        class EventHandlers: Eventhandlers {
            hit = "";
            class RHS_EventHandlers {
                hit = "_this call RHS_fnc_AI_eject";
                init = "_this call rhs_fnc_mi28_init";
                postInit = "_this call rhs_fnc_reapplyTextures";
                incomingMissile = "_this spawn rhs_fnc_rwr_mi28";
                getout = "_this spawn rhs_fnc_mi28_ejection";
                engine = "_this call rhs_fnc_addParachutes;";
            };
        };
    };
    class rhs_mi28n_base: rhs_mi28_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_mi28n_Base.paa";
        displayName = "$STR_MI28N_name";
        selectionFireAnim = "";
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class LaserSensorComponent: SensorTemplateLaser {
                        class AirTarget {
                            minRange = 9000;
                            maxRange = 9000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 9000;
                            maxRange = 9000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        angleRangeHorizontal = 75;
                        angleRangeVertical = 75;
                        typeRecognitionDistance = -1;
                        maxGroundNoiseDistance = 0;
                        maxFogSeeThrough = 0.3;
                        animDirection = "mainGun";
                    };
                    class PassiveRadarSensorComponent: SensorTemplatePassiveRadar {};
                    class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
                        class AirTarget {
                            minRange = 11000;
                            maxRange = 11000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 11000;
                            maxRange = 11000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = -1;
                        angleRangeHorizontal = 120;
                        angleRangeVertical = 100;
                        typeRecognitionDistance = 4000;
                        maxFogSeeThrough = 1;
                        maxTrackableSpeed = 555;
                    };
                    class DataLinkSensorComponent: SensorTemplateDataLink {};
                };
            };
            class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                class Components: components {
                    class SensorDisplay {
                        componentType = "SensorsDisplayComponent";
                        range[] = {4000, 8000, 16000, 25000};
                        resource = "RscCustomInfoSensors";
                    };
                };
            };
            class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                defaultDisplay = "SensorDisplay";
                class Components: components {
                    class SensorDisplay {
                        componentType = "SensorsDisplayComponent";
                        range[] = {4000, 8000, 16000, 25000};
                        resource = "RscCustomInfoSensors";
                    };
                };
            };
        };
    };
    class rhs_mi28n_S13_base: rhs_mi28n_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_mi28n_Base.paa";
        displayName = "Mi-28N (S-13)";
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class pylon1: pylon1 {
                        attachment = "rhs_mag_b13l_s13b";
                        turret[] = {};
                    };
                    class pylon2: pylon2 {
                        attachment = "rhs_mag_b13l_s13b";
                        turret[] = {};
                    };
                    class pylon3: pylon3 {
                        attachment = "rhs_mag_9M120M_Mi28_8x";
                        turret[] = {0};
                    };
                    class pylon4: pylon4 {
                        attachment = "rhs_mag_9M120M_Mi28_8x";
                        turret[] = {0};
                    };
                    class cmDispenser: cmDispenser {};
                };
            };
        };
    };
    class rhs_mi28n_vvs: rhs_mi28n_base {
        author = "$STR_RHS_AUTHOR_FULL";
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_mi28n_vvs.paa";
        scope = 2;
        faction = "rhs_faction_vvs";
    };
    class rhs_mi28n_vvsc: rhs_mi28n_base {
        author = "$STR_RHS_AUTHOR_FULL";
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_mi28n_vvsc.paa";
        scope = 2;
        faction = "rhs_faction_vvs_c";
        hiddenSelectionsTextures[] = {
            "\rhsafrf\addons\rhs_mi28\data\rhs_mi28_01_camo_co.paa",
            "\rhsafrf\addons\rhs_mi28\data\rhs_mi28_02_camo_co.paa",
            "\rhsafrf\addons\rhs_mi28\data\rhs_mi28_03_exterior_camo_co.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class rhs_mi28n_s13_vvs: rhs_mi28n_S13_base {
        author = "$STR_RHS_AUTHOR_FULL";
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_mi28n_vvs.paa";
        scope = 1;
        scopeCurator = 2;
        faction = "rhs_faction_vvs";
    };
    class rhs_mi28n_s13_vvsc: rhs_mi28n_S13_base {
        author = "$STR_RHS_AUTHOR_FULL";
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_mi28n_vvsc.paa";
        scope = 1;
        scopeCurator = 2;
        faction = "rhs_faction_vvs_c";
        hiddenSelectionsTextures[] = {
            "\rhsafrf\addons\rhs_mi28\data\rhs_mi28_01_camo_co.paa",
            "\rhsafrf\addons\rhs_mi28\data\rhs_mi28_02_camo_co.paa",
            "\rhsafrf\addons\rhs_mi28\data\rhs_mi28_03_exterior_camo_co.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class Wreck_base_F;
    class Land_rhs_mi28_wreck: Wreck_base_F {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\Land_rhs_mi28_wreck.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-28N Wreck";
        class Armory {
            disabled = 1;
        };
        model = "\rhsafrf\addons\rhs_mi28\rhs_mi28_wreck";
        icon = "iconObject_1x2";
        mapSize = 14;
        editorSubcategory = "EdSubcat_Helicopters";
    };
    class Land_rhs_mi28_wreck2: Land_rhs_mi28_wreck {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\Land_rhs_mi28_wreck2.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "Mi-28N Wreck 2";
        model = "\rhsafrf\addons\rhs_mi28\rhs_mi28_wreck2";
    };
    class rhs_mi28_wing_left: Plane {
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_mi28\data\rhs_mi28_01_grey_co.paa", "\rhsafrf\addons\rhs_mi28\data\rhs_mi28_02_grey_co.paa", "\rhsafrf\addons\rhs_mi28\data\rhs_mi28_03_exterior_grey_co.paa"};
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "Mi-28 Wing";
        draconicForceXCoef = 17.2;
        draconicForceYCoef = 12.6;
        draconicForceZCoef = 10.15;
        draconicTorqueXCoef = 11.29;
        draconicTorqueYCoef = 13.1;
        Icon = "iconParachute";
        picture = "\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
        model = "\rhsafrf\addons\rhs_mi28\rhs_mi28_wing_left.p3d";
        unitInfoType = "RscUnitInfoSoldier";
        hideUnitInfo = 1;
        hasdriver = 0;
        weapons[] = {};
        magazines[] = {};
        fuelCapacity = 0;
        secondaryExplosion = 0;
        fuelExplosionPower = 0;
        explosionEffect = "";
        destrType = "DestructNo";
        transportSoldier = 0;
        vehicleClass = "Objects";
        driveOnComponent[] = {};
        class Turrets {};
        class UserActions {};
        class Eventhandlers {
            HandleDamage = "deleteVehicle (_this select 0)";
        };
        SLX_XEH_DISABLED = 1;
    };
    class rhs_mi28_wing_right: rhs_mi28_wing_left {
        model = "\rhsafrf\addons\rhs_mi28\rhs_mi28_wing_right.p3d";
    };
    class rhs_mi28_door_gunner: rhs_mi28_wing_left {
        displayName = "Mi-28 Door";
        model = "\rhsafrf\addons\rhs_mi28\rhs_mi28_door_gunner.p3d";
    };
    class rhs_mi28_door_pilot: rhs_mi28_door_gunner {
        model = "\rhsafrf\addons\rhs_mi28\rhs_mi28_door_pilot.p3d";
    };
    class rhs_mi28_balonetes: rhs_mi28_door_gunner {
        model = "\rhsafrf\addons\rhs_mi28\rhs_balonetes.p3d";
        class AnimationSources {
            class fold {
                source = "user";
                animperiod = 0.5;
            };
        };
    };
};
