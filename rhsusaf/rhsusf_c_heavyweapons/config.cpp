class CfgPatches {
    class rhsusf_c_heavyweapons {
        units[] = {"rhs_laneMarker", "rhs_laneMarker_static", "rhs_casing_105mm_m14b1"};
        weapons[] = {
            "rhs_weap_m256",
            "rhs_weap_m284",
            "RHS_weap_M242BC",
            "RHS_weap_M119",
            "Rhs_weap_TOW_Launcher",
            "Rhs_weap_TOW_Launcher_static",
            "RHS_M2_Abrams_Commander",
            "RHS_M2_Abrams_Gunner",
            "RHS_M2",
            "RHS_M2_offroad",
            "RHS_M2_M1117",
            "rhs_weap_m240veh",
            "rhs_weap_m240_abrams",
            "rhs_weap_m240_m113",
            "rhs_weap_m240_abrams_coax",
            "rhs_weap_m134_minigun_1",
            "rhs_weap_m134_minigun_2",
            "RHS_MKV_M134",
            "rhs_weap_M197",
            "rhs_weap_M230",
            "RHS_weap_gau8",
            "RHS_MK19",
            "rhsusf_weap_M259",
            "rhsusf_weap_CMFlareLauncher"
        };
        requiredVersion = 1.7;
        requiredAddons[] = {"rhsusf_main"};
        name = "RHSUSF Heavy Weapons";
        author = "$STR_RHSUSF_AUTHOR_FULL";
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
class CfgAmmo {
    class Default;
    class BulletCore;
    class BulletBase;
    class ShellBase;
    class MissileCore: Default {};
    class MissileBase: MissileCore {
        class EventHandlers;
    };
    class Sh_120mm_APFSDS;
    class Sh_120mm_HE;
    class B_30mm_APFSDS_Tracer_Red;
    class B_30mm_HE;
    class F_40mm_White;
    class SubmunitionBase;
    class Laserbeam;
    class rhs_Laserbeam: Laserbeam {
        hit = 0;
        cost = 1000000;
    };
    class Sh_125mm_APFSDS;
    class rhsusf_ammo_basic_penetrator: Sh_125mm_APFSDS {
        caliber = 6.66667;
        warheadName = "HEAT";
        hit = 290;
        indirectHit = 0;
        indirectHitRange = 0;
        explosive = 0;
        typicalSpeed = 1000;
        deflecting = 0;
        deflectionDirDistribution = 0;
        penetrationDirDistribution = 0;
        timeToLive = 0.01;
        simulationStep = 0.0005;
        airFriction = -0.5;
        whistleOnFire = 0;
        whistleDist = 0;
        submunitionConeType[] = {"randomcenter", 30};
        submunitionAmmo = "rhs_ammo_spall";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.4};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 200;
        deleteParentWhenTriggered = 0;
        triggerTime = 0.003;
        model = "\A3\Weapons_f\empty";
        SoundSetExplosion[] = {"Silence_SoundSet"};
    };
    class rhsusf_ammo_reduced_penetrator: rhsusf_ammo_basic_penetrator {
        submunitionConeType[] = {"randomcenter", 10};
    };
    class rhs_ammo_cluster_penetrator: Sh_125mm_APFSDS {
        caliber = 6.66667;
        warheadName = "HEAT";
        hit = 150;
        indirectHit = 0;
        indirectHitRange = 0;
        explosive = 0;
        deflecting = 0;
        typicalSpeed = 1000;
        simulationStep = 0.0005;
        airFriction = -0.5;
        whistleOnFire = 0;
        whistleDist = 0;
        submunitionConeType[] = {"randomcenter", 4};
        submunitionAmmo = "rhs_ammo_spall";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.4};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 200;
        deleteParentWhenTriggered = 0;
        triggerTime = 0.003;
        model = "\A3\Weapons_f\empty";
        SoundSetExplosion[] = {"Silence_SoundSet"};
    };
    class rhs_ammo_ap_penetrator: Sh_125mm_APFSDS {
        warheadName = "AP";
        model = "\A3\Weapons_f\empty";
        indirectHit = 11;
        indirectHitRange = 0.35;
        timetolive = 5;
        simulationStep = 0.0005;
        airFriction = -0.08;
        submunitionConeType[] = {"randomcenter", 30};
        submunitionAmmo = "rhs_ammo_spall";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.4};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 200;
        deleteParentWhenTriggered = 0;
        triggerTime = 0.002;
        soundVehiclePlateInt1[] = {
            "rhsusf\addons\rhsusf_c_heavyweapons\sounds\Inhit.wav",
            4.23872,
            1,
            100
        };
        hitArmorInt[] = {"soundVehiclePlateInt1", 1};
        hitDefaultInt[] = {"soundVehiclePlateInt1", 1};
        hitMetalInt[] = {"soundVehiclePlateInt1", 1};
        hitMetalPlateInt[] = {"soundVehiclePlateInt1", 1};
        SoundSetExplosion[] = {};
    };
    class rhs_laserbeam_fcs: BulletBase {
        simulation = "shotSubmunitions";
        hit = 145;
        indirectHit = 1;
        indirectHitRange = 0;
        cost = 1;
        airFriction = -0.00000001;
        triggerTime = 0.001;
        triggerSpeedCoef = 0.001;
        submunitionConeAngle = 0;
        submunitionCount = 1;
        submunitionAmmo = "rhs_fakeAmmo";
        airLock = 1;
        aiAmmoUsageFlags = "64+32+128+256+512";
    };
    class rhs_laserbeam_ai: Laserbeam {
        simulationStep = 0.1;
        cost = 5000;
        airFriction = -0.00000001;
        timeToLive = 20;
        maxSpeed = 350;
        airLock = 1;
        irLock = 1;
        aiAmmoUsageFlags = "64+32+128+256+512";
    };
    class rhs_fakeAmmo: BulletBase {
        model = "\A3\Weapons_f\empty";
        tracerScale = 0;
        tracerStartTime = 0;
        tracerEndTime = 0;
        whistleOnFire = 0;
        whistleDist = 0;
        muzzleEffect = "";
        explosive = 0;
        caliber = 0;
        hit = 0;
        indirectHit = 0;
        indirectHitRange = 0;
        typicalspeed = 1;
        timeToLive = 0.002;
        simulationStep = 0.001;
    };
    class rhs_ammo_spall: BulletBase {
        caliber = 10;
        hit = 20;
        indirectHit = 0;
        indirectHitRange = 0.15;
        typicalSpeed = 50;
        airfriction = -0.00001;
        deflecting = 90;
        deflectionSlowDown = 2;
        deflectionDirDistribution = 1;
        penetrationDirDistribution = 1;
        timeToLive = 0.5;
    };
    class rhs_ammo_thermobaric_wave: rhs_ammo_spall {
        caliber = 6.66667;
        hit = 5;
        indirectHit = 20;
        indirectHitRange = 2.15;
        typicalSpeed = 200;
        explosive = 0.8;
        timeToLive = 0.3;
        ExplosionEffects = "";
        CraterEffects = "";
        deflectionSlowDown = 0.2;
    };
    class rhs_ammo_he_fragments: BulletBase {
        caliber = 0.888889;
        hit = 40;
        indirectHit = 3;
        indirectHitRange = 1.15;
        typicalSpeed = 1500;
        deflecting = 9;
        timeToLive = 0.5;
        warheadName = "HE";
    };
    class rhs_ammo_flechettes: BulletBase {
        hit = 4;
        indirectHit = 0;
        indirectHitRange = 0.15;
        typicalSpeed = 200;
        deflecting = 50;
    };
    class rhs_ammo_flechettes_m1028: rhs_ammo_flechettes {
        hit = 7;
        indirectHit = 4.2;
        indirectHitRange = 1.75;
        typicalSpeed = 1000;
        airFriction = -0.00045;
    };
    class rhs_ammo_M1069: Sh_120mm_HE {
        hit = 350;
        indirectHit = 45;
        indirectHitRange = 7;
        typicalSpeed = 1000;
        explosive = 0.8;
        cost = 200;
        airFriction = -0.00045;
        caliber = 12;
        timeToLive = 15;
        whistleDist = 14;
        tracerScale = 2;
        tracerStartTime = 0.1;
        tracerEndTime = 2.6;
        model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
    };
    class rhs_ammo_M1147: rhs_ammo_M1069 {};
    class rhs_ammo_M416: rhs_ammo_M1069 {
        caliber = 16.2963;
        airFriction = -0.00000000000045;
    };
    class rhs_ammo_M1028: rhs_ammo_M1069 {
        simulation = "shotSubmunitions";
        submunitionAmmo = "rhs_ammo_flechettes_m1028";
        submunitionConeType[] = {"randomcenter", 143};
        submunitionConeAngle = "0.009 * 120";
        triggerTime = 0.01;
    };
    class rhs_ammo_M829: Sh_120mm_APFSDS {
        model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
        cost = 500;
        deflecting = 6;
        airFriction = -0.00004;
        simulationStep = 0.01;
        timeToLive = 15;
        whistleOnFire = 1;
        whistleDist = 14;
        tracerScale = 2;
        tracerStartTime = 0.1;
        tracerEndTime = 2.6;
        effectFly = "RHS_120mm_Sabot_Eject";
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_M829_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_M829_penetrator: rhs_ammo_ap_penetrator {
        hit = 250;
        typicalSpeed = 1670;
        deflecting = 6;
        caliber = 24.3912;
    };
    class rhs_ammo_M829A1: rhs_ammo_M829 {
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_M829A1_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_M829A1_penetrator: rhs_ammo_M829_penetrator {
        hit = 240;
        typicalSpeed = 1575;
        caliber = 27.3862;
    };
    class rhs_ammo_M829A2: rhs_ammo_M829 {
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_M829A2_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_M829A2_penetrator: rhs_ammo_M829_penetrator {
        hit = 240;
        typicalSpeed = 1680;
        caliber = 30.5159;
    };
    class rhs_ammo_M829A3: rhs_ammo_M829 {
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_M829A3_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
        tracerEndTime = 3.6;
    };
    class rhs_ammo_M829A3_penetrator: rhs_ammo_M829_penetrator {
        hit = 250;
        typicalSpeed = 1555;
        caliber = 34.8124;
    };
    class rhs_ammo_M829A4: rhs_ammo_M829A3 {
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_M829A4_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_M829A4_penetrator: rhs_ammo_M829_penetrator {
        hit = 250;
        typicalSpeed = 1650;
        caliber = 36.1616;
    };
    class rhs_ammo_M830: Sh_120mm_APFSDS {
        warheadName = "HEAT";
        airLock = 1;
        explosive = 0.5;
        caliber = 0.5;
        cost = 1;
        hit = 250;
        indirectHit = 11;
        indirectHitRange = 4.15;
        typicalSpeed = 1140;
        tracerStartTime = 0.1;
        tracerEndTime = 2.6;
        aiAmmoUsageFlags = "32+64+128+256+512";
        deflecting = 0;
        model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
        submunitionAmmo = "rhs_ammo_M830_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_M830_penetrator: rhsusf_ammo_basic_penetrator {
        caliber = 40;
    };
    class rhs_ammo_M830A1: rhs_ammo_M830 {
        explosive = 0.8;
        indirectHit = 24;
        indirectHitRange = 3.15;
        submunitionAmmo = "rhs_ammo_M830A1_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_M830A1_penetrator: rhsusf_ammo_basic_penetrator {
        caliber = 30;
    };
    class rhs_ammo_M392: rhs_ammo_M829 {
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_M392_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_M392_penetrator: rhs_ammo_M829_penetrator {
        hit = 240;
        typicalSpeed = 1478;
        caliber = 12.1786;
    };
    class rhs_ammo_M728: rhs_ammo_M392 {
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_M728_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_M728_penetrator: rhs_ammo_M392_penetrator {
        hit = 240;
        typicalSpeed = 1426.5;
        caliber = 14.0203;
    };
    class rhs_ammo_M735: rhs_ammo_M392 {
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_M735_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_M735_penetrator: rhs_ammo_M392_penetrator {
        hit = 240;
        typicalSpeed = 1501;
        caliber = 18.2101;
    };
    class rhs_ammo_M774: rhs_ammo_M392 {
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_M774_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_M774_penetrator: rhs_ammo_M392_penetrator {
        hit = 240;
        typicalSpeed = 1508;
        caliber = 19.4518;
    };
    class rhs_ammo_M833: rhs_ammo_M392 {
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_M833_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_M833_penetrator: rhs_ammo_M392_penetrator {
        hit = 240;
        typicalSpeed = 1493;
        caliber = 21.8799;
    };
    class rhs_ammo_M900: rhs_ammo_M392 {
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_M900_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_M900_penetrator: rhs_ammo_M392_penetrator {
        hit = 240;
        typicalSpeed = 1505;
        caliber = 26.5781;
    };
    class rhs_ammo_M456: rhs_ammo_M830 {
        explosive = 0.5;
        indirectHit = 11;
        indirectHitRange = 3.15;
        submunitionAmmo = "rhs_ammo_M456_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_M456_penetrator: rhsusf_ammo_basic_penetrator {
        caliber = 26;
    };
    class rhs_ammo_M456A2: rhs_ammo_M456 {
        submunitionAmmo = "rhs_ammo_M456A2_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_M456A2_penetrator: rhsusf_ammo_basic_penetrator {
        caliber = 28.6667;
    };
    class rhs_ammo_M494: rhs_ammo_M1028 {
        typicalSpeed = 821;
        simulation = "shotSubmunitions";
        submunitionAmmo = "rhs_ammo_flechettes_m1028";
        submunitionConeType[] = {"randomcenter", 125};
        submunitionConeAngle = "0.009 * 120";
        triggerTime = 0.01;
    };
    class rhs_ammo_M393: rhs_ammo_M1069 {
        hit = 350;
        indirectHit = 40;
        indirectHitRange = 8;
        typicalSpeed = 731;
        tracerStartTime = 0.1;
        tracerEndTime = 6.1;
        model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_yellow";
        submunitionAmmo = "rhs_ammo_M393_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_M393_penetrator: rhsusf_ammo_basic_penetrator {
        hit = 20;
        caliber = 20;
    };
    class rhs_ammo_M393A3: rhs_ammo_M393 {
        typicalSpeed = 750;
    };
    class RHS_ammo_M791_APDS: B_30mm_APFSDS_Tracer_Red {
        hit = 90;
        caliber = 3.22181;
        typicalspeed = 1345;
        maxSpeed = 1345;
        airfriction = -0.0002;
        tracerEndTime = 3.1;
    };
    class RHS_ammo_M919_APFSDS: B_30mm_APFSDS_Tracer_Red {
        hit = 90;
        caliber = 4.46009;
        typicalspeed = 1385;
        maxSpeed = 1385;
        airfriction = -0.0002;
        tracerEndTime = 3.1;
    };
    class RHS_ammo_M792_HEI: B_30mm_HE {
        timeToLive = 7.5;
        airfriction = -0.00056;
        typicalspeed = 1100;
        maxSpeed = 1100;
        model = "\rhsusf\addons\rhsusf_heavyweapons\data\tracer\rhs_tracer_25mm_red.p3d";
        tracerScale = 1.5;
    };
    class G_40mm_HE;
    class rhs_ammo_mk19m3_M384: G_40mm_HE {
        hit = 40;
        airFriction = -0.0008;
        timetolive = 40;
    };
    class rhs_ammo_mk19m3_M430I: rhs_ammo_mk19m3_M384 {
        hit = 35;
        submunitionAmmo = "rhs_ammo_mk19m3_M430I_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_mk19m3_M430I_penetrator: rhsusf_ammo_reduced_penetrator {
        hit = 90;
        caliber = 3.33333;
    };
    class rhs_ammo_mk19m3_M430A1: rhs_ammo_mk19m3_M430I {
        hit = 35;
        submunitionAmmo = "rhs_ammo_mk19m3_M430A1_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_mk19m3_M430A1_penetrator: rhsusf_ammo_reduced_penetrator {
        hit = 90;
        caliber = 5.06667;
    };
    class rhs_ammo_mk19m3_M1001: rhs_ammo_mk19m3_M384 {
        simulation = "shotSubmunitions";
        submunitionAmmo = "rhs_ammo_flechettes";
        submunitionConeType[] = {"randomcenter", 56};
        submunitionConeAngle = "0.009 * 160";
        triggerTime = 0.01;
    };
    class Sh_82mm_AMOS;
    class Sh_155mm_AMOS;
    class Smoke_120mm_AMOS_White;
    class Flare_82mm_AMOS_White;
    class rhs_m821_he: Sh_82mm_AMOS {
        model = "\rhsusf\addons\rhsusf_m252\rhs_m821_he";
    };
    class rhs_ammo_m1_he: Sh_155mm_AMOS {
        cost = 100;
        artilleryLock = 1;
        hit = 110;
        indirectHit = 75;
        indirectHitRange = 21;
        timetolive = 220;
        class CamShakeExplode {
            power = "(105*0.2)*10";
            duration = "((round (105^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((30 + 105^0.5))";
        };
        class CamShakeHit {
            power = "105 * 10";
            duration = "((round (105^0.25))*0.2 max 0.2)";
            frequency = 20;
            distance = 1;
        };
        class CamShakeFire {
            power = "(105^0.25)*10";
            duration = "((round (105^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((105^0.5))";
        };
    };
    class rhs_ammo_m314_ilum: SubmunitionBase {
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        explosive = 0;
        ExplosionEffects = "";
        soundHit[] = {"", 0, 1};
        CraterEffects = "";
        whistleDist = 0;
        timeToLive = 90;
        aimAboveTarget[] = {300, 360, 400, 500, 640, 720, 800};
        aimAboveDefault = 3;
        submunitionAmmo[] = {"rhs_ammo_flare_m314", 1};
    };
    class rhs_ammo_flare_M314: F_40mm_White {
        triggerTime = 0;
        model = "rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_r_m257_drogue";
        brightness = 4000;
        lightColor[] = {100, 100, 100, 100};
        timeToLive = 60;
        intensity = 40000;
        flareSize = 60;
        flareMaxDistance = 3000;
        affectedByWind = 1;
    };
    class rhs_ammo_m60a2_smoke: Smoke_120mm_AMOS_White {
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        explosive = 0.1;
        ExplosionEffects = "";
        soundHit[] = {"", 0, 1};
        CraterEffects = "";
        whistleDist = 0;
    };
    class rhs_ammo_m485_ilum: SubmunitionBase {
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        explosive = 0;
        ExplosionEffects = "";
        soundHit[] = {"", 0, 1};
        CraterEffects = "";
        whistleDist = 0;
        timeToLive = 180;
        aimAboveTarget[] = {360, 400, 500, 640, 720, 800, 850};
        aimAboveDefault = 3;
        submunitionAmmo[] = {"rhs_ammo_flare_m485", 1};
    };
    class rhs_ammo_flare_m485: F_40mm_White {
        triggerTime = 0;
        model = "rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_r_m257_drogue";
        brightness = 10000;
        lightColor[] = {100, 100, 100, 100};
        timeToLive = 120;
        intensity = 100000;
        flareSize = 90;
        flareMaxDistance = 3000;
        affectedByWind = 1;
    };
    class Gatling_30mm_HE_Plane_CAS_01_F;
    class rhs_ammo_30x173mm_GAU8_mixed: SubmunitionBase {
        hit = 180;
        indirectHit = 4;
        indirectHitRange = 8;
        caliber = 5;
        explosive = 0.4;
        airlock = 1;
        deflecting = 5;
        airFriction = -0.00036;
        typicalSpeed = 960;
        visibleFire = 32;
        audibleFire = 250;
        visibleFireTime = 3;
        fuseDistance = 10;
        dangerRadiusBulletClose = 20;
        dangerRadiusHit = 60;
        suppressionRadiusBulletClose = 12;
        suppressionRadiusHit = 24;
        cost = 20;
        allowAgainstInfantry = 1;
        aiAmmoUsageFlags = "64 + 128 + 512";
        weaponType = "cannon";
        simulation = "shotSubmunitions";
        triggerTime = 0.01;
        submunitionAmmo[] = {
            "rhs_ammo_PGU14B_API",
            0.8,
            "rhs_ammo_PGU13B_HE",
            0.2
        };
        model = "\A3\Weapons_f\empty";
        class CamShakeExplode {
            power = 6;
            duration = 1;
            frequency = 20;
            distance = 83.8178;
        };
        class CamShakeHit {
            power = 30;
            duration = 0.4;
            frequency = 20;
            distance = 1;
        };
        class CamShakeFire {
            power = 2.34035;
            duration = 1;
            frequency = 20;
            distance = 43.8178;
        };
        class CamShakePlayerFire {
            power = 30;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
    };
    class rhs_ammo_PGU13B_HE: Gatling_30mm_HE_Plane_CAS_01_F {
        hit = 80;
        explosive = 0.9;
        timeToLive = 10;
    };
    class rhs_ammo_PGU14B_API: B_30mm_APFSDS_Tracer_Red {
        hit = 120;
        explosive = 0;
        typicalSpeed = 860;
        airFriction = -0.00036;
        timeToLive = 10;
        caliber = 6;
        tracerEndTime = 10;
    };
    class B_20mm;
    class rhs_ammo_30x113mm_M789_HEDP: B_30mm_HE {
        allowagainstinfantry = 1;
        hit = 37;
        indirectHit = 15;
        indirectHitRange = 3;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerScale = 2;
        tracerStartTime = 0.1;
        tracerEndTime = 4;
        explosive = 0.4;
        caliber = 2;
        airFriction = -0.00078;
        timeToLive = 12;
        submunitionAmmo = "rhs_ammo_30x113mm_M789_HEDP_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_30x113mm_M789_HEDP_laser: rhs_ammo_30x113mm_M789_HEDP {
        laserLock = 1;
    };
    class rhs_ammo_30x113mm_M789_HEDP_penetrator: rhsusf_ammo_basic_penetrator {
        hit = 90;
        submunitionConeType[] = {"randomcenter", 4};
        caliber = 1.66667;
    };
    class rhs_ammo_20mm_AP: B_20mm {
        hit = 45;
        indirectHit = 10;
        indirectHitRange = 2;
        visibleFire = 28;
        audibleFire = 28;
        visibleFireTime = 3;
        cost = 25;
        airLock = 1;
        explosive = 0.3;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerScale = 1.8;
        tracerStartTime = 0.1;
        tracerEndTime = 3.5;
        airFriction = -0.00077;
        caliber = 2.33;
        timeToLive = 12;
    };
    class B_127x99_Ball;
    class rhs_ammo_127x99_Ball: B_127x99_Ball {
        caliber = 2.34848;
        class CamShakeFire {
            power = 1;
            duration = 0.2;
            frequency = 20;
            distance = 8;
        };
        class CamShakePlayerFire {
            power = 1;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
    };
    class rhs_ammo_127x99_Ball_Tracer_Red: rhs_ammo_127x99_Ball {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerEndTime = 3;
    };
    class rhs_ammo_127x99_Ball_Tracer_Green: rhs_ammo_127x99_Ball {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
        tracerEndTime = 3;
    };
    class rhs_ammo_127x99_Ball_Tracer_Yellow: rhs_ammo_127x99_Ball {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
        tracerEndTime = 3;
    };
    class B_127x99_SLAP;
    class rhs_ammo_127x99_SLAP: B_127x99_SLAP {
        caliber = 2.80992;
        class CamShakeFire {
            power = 1;
            duration = 0.2;
            frequency = 20;
            distance = 8;
        };
        class CamShakePlayerFire {
            power = 1;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
    };
    class rhs_ammo_127x99_SLAP_Tracer_Red: rhs_ammo_127x99_SLAP {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerEndTime = 3;
    };
    class rhs_ammo_127x99_SLAP_Tracer_Green: rhs_ammo_127x99_SLAP {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
        tracerEndTime = 3;
    };
    class rhs_ammo_127x99_SLAP_Tracer_Yellow: rhs_ammo_127x99_SLAP {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
        tracerEndTime = 3;
    };
    class rhs_ammo_127x99_Ball_Plane: rhs_ammo_127x99_Ball {
        class CamShakeFire {
            power = 1.56508;
            duration = 0.4;
            frequency = 20;
            distance = 19.5959;
        };
        class CamShakePlayerFire {
            power = 6;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
    };
    class rhs_ammo_127x99_Ball_Tracer_Red_Plane: rhs_ammo_127x99_Ball_Tracer_Red {
        class CamShakeFire {
            power = 1.56508;
            duration = 0.4;
            frequency = 20;
            distance = 19.5959;
        };
        class CamShakePlayerFire {
            power = 6;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
    };
    class rhs_ammo_127x99_SLAP_Plane: rhs_ammo_127x99_SLAP {
        class CamShakeFire {
            power = 1.56508;
            duration = 0.4;
            frequency = 20;
            distance = 19.5959;
        };
        class CamShakePlayerFire {
            power = 6;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
    };
    class rhs_ammo_127x99_SLAP_Tracer_Red_Plane: rhs_ammo_127x99_SLAP_Tracer_Red {
        class CamShakeFire {
            power = 1.56508;
            duration = 0.4;
            frequency = 20;
            distance = 19.5959;
        };
        class CamShakePlayerFire {
            power = 6;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
    };
    class rhs_ammo_127x99_Ball_AI: rhs_ammo_127x99_Ball {
        irLock = 1;
        laserLock = 1;
        airLock = 1;
        nvLock = 1;
        aiAmmoUsageFlags = 448;
    };
    class rhs_ammo_127x99_Ball_Tracer_Red_AI: rhs_ammo_127x99_Ball_Tracer_Red {
        irLock = 1;
        laserLock = 1;
        airLock = 1;
        nvLock = 1;
        aiAmmoUsageFlags = 448;
    };
    class rhs_ammo_127x99_SLAP_AI: rhs_ammo_127x99_SLAP {
        irLock = 1;
        laserLock = 1;
        airLock = 1;
        nvLock = 1;
        aiAmmoUsageFlags = 448;
    };
    class rhs_ammo_127x99_SLAP_Tracer_Red_AI: rhs_ammo_127x99_SLAP_Tracer_Red {
        irLock = 1;
        laserLock = 1;
        airLock = 1;
        nvLock = 1;
        aiAmmoUsageFlags = 448;
    };
    class M_Titan_AT: MissileBase {
        class Components;
    };
    class rhs_ammo_TOW_AT: M_Titan_AT {
        submunitionAmmo = "rhs_ammo_TOW_AT_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        hit = 480;
        indirectHit = 12;
        indirectHitRange = 4.2;
        cost = 800;
        canlock = 0;
        irLock = 1;
        trackOversteer = 0.8;
        trackLead = 0.9;
        timeToLive = 30;
        maneuvrability = 10;
        simulationStep = 0.005;
        airFriction = 0.14;
        sideAirFriction = 0.75;
        lockType = 1;
        manualControl = 1;
        maxControlRange = 3000;
        manualControlOffset = 150;
        missileManualControlCone = 45;
        autoSeekTarget = 1;
        lockSeekRadius = 1;
        initTime = 0.151;
        thrustTime = 1.45;
        thrust = 165;
        maxSpeed = 296;
        deflecting = 0;
        fuseDistance = 5;
        effectsMissile = "RHS_Missile2";
        whistleDist = 2;
        weaponLockSystem = 1;
        rhs_saclos = 1;
        rhs_ballisticMode = 0;
        rhs_guideMode = "WIRE";
        flightProfiles[] = {"Direct"};
        class Direct {};
        model = "\rhsusf\addons\rhsusf_heavyweapons\atgm\TOW2BB";
        soundFly[] = {
            "rhsusf\addons\rhsusf_heavyweapons\Sounds\TOW",
            1.1,
            0.7,
            550
        };
        class EventHandlers: EventHandlers {
            class RHS_Guidance {
                fired = "_this call RHS_fnc_saclosGuide";
            };
        };
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class VisualSensorComponent: SensorTemplateVisual {
                        class AirTarget {
                            minRange = 500;
                            maxRange = 5000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 500;
                            maxRange = 5000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        maxTrackableSpeed = 35;
                        nightRangeCoef = 0.8;
                        angleRangeHorizontal = 5;
                        angleRangeVertical = 5;
                    };
                };
            };
        };
    };
    class rhs_ammo_TOWB_AT: rhs_ammo_TOW_AT {
        submunitionAmmo = "rhs_ammo_TOW_AT_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        maxControlRange = 3750;
    };
    class rhs_ammo_TOW_AT_penetrator: rhsusf_ammo_basic_penetrator {
        caliber = 28.6667;
    };
    class rhs_ammo_ITOW_AT: rhs_ammo_TOWB_AT {
        submunitionAmmo = "rhs_ammo_ITOW_AT_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        model = "\rhsusf\addons\rhsusf_heavyweapons\atgm\TOW2A";
    };
    class rhs_ammo_ITOW_AT_penetrator: rhsusf_ammo_basic_penetrator {
        caliber = 42;
    };
    class rhs_ammo_TOW2_AT: rhs_ammo_TOWB_AT {
        submunitionAmmo = "rhs_ammo_TOW2_AT_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        model = "\rhsusf\addons\rhsusf_heavyweapons\atgm\TOW2A";
        hit = 450;
        indirectHit = 20;
        indirectHitRange = 4;
        maxSpeed = 329;
        thrust = 210;
        whistleDist = 4;
        rhs_ballisticMode = 0;
    };
    class rhs_ammo_TOW2_AT_static: rhs_ammo_TOW2_AT {
        initTime = 0.15;
    };
    class rhs_ammo_TOW2_AT_penetrator: rhsusf_ammo_basic_penetrator {
        caliber = 60;
    };
    class rhs_ammo_TOW2A_AT: rhs_ammo_TOW2_AT {
        warheadName = "TandemHEAT";
        submunitionAmmo = "rhs_ammo_TOW2A_AT_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_TOW2A_AT_penetrator: rhsusf_ammo_basic_penetrator {
        warheadName = "TandemHEAT";
        caliber = 60;
    };
    class rhs_ammo_TOW2B_AT: rhs_ammo_TOW2A_AT {
        submunitionAmmo = "rhs_ammo_TOW2B_AT_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        model = "\rhsusf\addons\rhsusf_heavyweapons\atgm\TOW2B";
        rhs_ballisticMode = 2;
    };
    class rhs_ammo_TOW2B_AERO_AT: rhs_ammo_TOW2B_AT {
        model = "\rhsusf\addons\rhsusf_heavyweapons\atgm\TOW2BAERO";
        maxControlRange = 4000;
    };
    class rhs_ammo_TOW2B_AT_penetrator: rhsusf_ammo_basic_penetrator {
        warheadName = "TandemHEAT";
        caliber = 20;
    };
    class rhs_ammo_TOW2_BB: rhs_ammo_TOW2_AT {
        AIAmmoUsageFlags = "64+128+256";
        submunitionAmmo = "rhs_ammo_TOW2_BB_penetrator";
        model = "\rhsusf\addons\rhsusf_heavyweapons\atgm\TOW2BB";
        hit = 120;
        indirectHit = 30;
        indirectHitRange = 6;
        cost = 100;
        explosive = 1;
        allowAgainstInfantry = 1;
        deleteParentWhenTriggered = 1;
    };
    class rhs_ammo_TOW2_BB_penetrator: rhsusf_ammo_basic_penetrator {
        caliber = 13.3333;
        simulationStep = 0.0001;
        timeToLive = 0.01;
        triggerTime = 0.0015;
        deleteParentWhenTriggered = 1;
        submunitionAmmo = "rhs_ammo_TOW2_BB_explosive";
        submunitionConeType[] = {"randomcenter", 1};
    };
    class rhs_ammo_TOW2_BB_explosive: rhs_ammo_TOW2_AT {
        hit = 120;
        indirectHit = 100;
        indirectHitRange = 12;
        explosive = 1;
        CraterEffects = "ArtyShellCrater";
        explosionEffects = "MortarExplosion";
        class CamShakeExplode {
            power = 22;
            duration = 2;
            frequency = 20;
            distance = 227.905;
        };
        class CamShakeHit {
            power = 110;
            duration = 0.6;
            frequency = 20;
            distance = 1;
        };
        class CamShakeFire {
            power = 3.23853;
            duration = 2;
            frequency = 20;
            distance = 83.9047;
        };
        class CamShakePlayerFire {
            power = 5;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
        submunitionConeType[] = {"randomcenter", 15};
        submunitionConeAngle = 120;
        submunitionAmmo = "rhs_ammo_thermobaric_wave";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.4};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 200;
        deleteParentWhenTriggered = 0;
        triggerTime = 0.003;
    };
    class R_230mm_HE;
    class R_230mm_fly;
    class rhs_ammo_m26_rocket: R_230mm_HE {
        model = "\rhsusf\addons\rhsusf_heavyweapons\rockets\rhs_M26_rocket_fly.p3d";
        triggerDistance = 250;
        triggerSpeedCoef[] = {0.5, 1};
        submunitionConeAngle = 19;
        submunitionConeType[] = {"randomcenter", 161};
        submunitionAmmo[] = {
            "rhs_ammo_m77_submunition",
            0.93,
            "Mo_cluster_AP_UXO_deploy",
            0.07
        };
    };
    class rhs_ammo_m26a1_rocket: rhs_ammo_m26_rocket {
        submunitionAmmo[] = {
            "rhs_ammo_m85_submunition",
            0.93,
            "Mo_cluster_AP_UXO_deploy",
            0.07
        };
        submunitionConeType[] = {"randomcenter", 130};
    };
    class rhs_ammo_m30_rocket: rhs_ammo_m26_rocket {
        model = "\rhsusf\addons\rhsusf_heavyweapons\rockets\rhs_M30_rocket_fly.p3d";
        submunitionAmmo[] = {
            "rhs_ammo_m85_submunition",
            0.93,
            "Mo_cluster_AP_UXO_deploy",
            0.07
        };
        submunitionConeType[] = {"randomcenter", 101};
    };
    class rhs_ammo_m31_rocket: R_230mm_HE {
        model = "\rhsusf\addons\rhsusf_heavyweapons\rockets\rhs_M30_rocket_fly.p3d";
        submunitionAmmo = "rhs_ammo_m31_rocket_deploy";
    };
    class rhs_ammo_m31_rocket_deploy: R_230mm_fly {
        model = "\rhsusf\addons\rhsusf_heavyweapons\rockets\rhs_M30_rocket.p3d";
    };
    class rhs_ammo_ATACMS_rocket_base: R_230mm_HE {
        model = "\rhsusf\addons\rhsusf_heavyweapons\rockets\rhs_MGM140_rocket.p3d";
    };
    class rhs_ammo_mgm140a_rocket: rhs_ammo_ATACMS_rocket_base {
        triggerDistance = 400;
        triggerSpeedCoef[] = {0.5, 1};
        submunitionConeAngle = 19;
        submunitionConeType[] = {"randomcenter", 234};
        submunitionAmmo[] = {
            "rhs_ammo_m74_submunition",
            0.93,
            "rhs_ammo_m74_deploy",
            0.07
        };
    };
    class rhs_ammo_mgm140b_rocket: rhs_ammo_ATACMS_rocket_base {
        triggerDistance = 250;
        submunitionConeType[] = {"randomcenter", 69};
    };
    class rhs_ammo_mgm164_block4_rocket: rhs_ammo_ATACMS_rocket_base {
        submunitionAmmo = "rhs_ammo_mgm164_block4_rocket_deploy";
    };
    class rhs_ammo_mgm164_block4_rocket_deploy: R_230mm_fly {
        hit = 5000;
        indirectHit = 1150;
        indirectHitRange = 12;
        explosionEffects = "BombExplosion";
        model = "\rhsusf\addons\rhsusf_heavyweapons\rockets\rhs_MGM140_rocket.p3d";
    };
    class Mo_cluster_AP;
    class ShotDeployBase;
    class APERSMine_Range_Ammo;
    class rhs_ammo_m74_submunition: Mo_cluster_AP {
        hit = 8;
        indirectHit = 8;
        indirectHitRange = 6;
        model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_sub_F";
    };
    class rhs_ammo_m74_deploy: ShotDeployBase {
        model = "\a3\Weapons_F_Orange\Ammo\BombCluster_02_sub_F";
        submunitionAmmo = "rhs_ammo_uxo_m74";
    };
    class rhs_ammo_uxo_m74: APERSMine_Range_Ammo {
        hit = 8;
        indirectHit = 8;
        indirectHitRange = 6;
        icon = "iconExplosiveUXO";
        model = "\A3\Weapons_F_Orange\Explosives\BombCluster_02_UXO1_F";
        mineModelDisabled = "\A3\Weapons_F\empty.p3d";
        defaultMagazine = "";
        mineTrigger = "RangeTriggerShort";
        mineCanBeReactivated = 0;
        mineFloating = 10000000;
    };
    class rhs_ammo_m77_submunition: rhs_ammo_m74_submunition {
        hit = 35;
        indirectHit = 25;
        indirectHitRange = 8;
        model = "\A3\weapons_f\ammo\shell";
    };
    class rhs_ammo_m85_submunition: rhs_ammo_m77_submunition {};
    class rhs_ammo_BAT_submunition: rhs_ammo_m77_submunition {};
    class SmokeLauncherAmmo;
    class rhsusf_ammo_L8A3: SmokeLauncherAmmo {
        rhs_smokeShell = "rhsusf_ammo_L8A3_shell";
        muzzleEffect = "";
        weaponLockSystem = "1";
        simulation = "shotCM";
        AIAmmoUsageFlags = "4 + 8";
        hit = 0;
        indirectHit = 0;
        indirectHitRange = 0;
    };
    class rhsusf_ammo_duke: SmokeLauncherAmmo {
        muzzleEffect = "";
        weaponLockSystem = "1";
        simulation = "shotCM";
        AIAmmoUsageFlags = "0";
        hit = 0;
        indirectHit = 0;
        indirectHitRange = 0;
        class EventHandlers {
            class RHS_CM {
                fired = "_this call RHSUSF_fnc_effectFiredDuke";
            };
        };
    };
    class rhsusf_ammo_laneMarkerSystem: SmokeLauncherAmmo {
        muzzleEffect = "";
        weaponLockSystem = "0";
        simulation = "shotCM";
        AIAmmoUsageFlags = "0";
        hit = 0;
        indirectHit = 0;
        indirectHitRange = 0;
        class EventHandlers {
            class RHS_CM {
                fired = "_this call rhs_fnc_laneMarkerSystem";
            };
        };
    };
    class rhs_ammo_smokegen: SmokeLauncherAmmo {
        muzzleEffect = "";
        weaponLockSystem = "2";
        simulation = "shotCM";
        AIAmmoUsageFlags = "4";
        hit = 0;
        indirectHit = 0;
        indirectHitRange = 0;
        class EventHandlers {
            class RHS_CM {
                fired = "_this call RHS_fnc_effectFiredSmokeGenerator";
            };
        };
    };
    class rhs_ammo_LWIRCM: BulletBase {
        cost = 1;
        visibleFire = 0;
        audibleFire = 0;
        hit = 1;
        indirectHit = 0;
        indirectHitRange = 0;
        timeToLive = 2.25;
        thrustTime = 3;
        airFriction = -0.01;
        simulation = "shotCM";
        weaponLockSystem = "2";
        model = "\A3\weapons_f\empty";
        maxControlRange = -1;
        initTime = 0;
        aiAmmoUsageFlags = 8;
        soundFly[] = {"A3\sounds_f\dummysound", 0.1, 1};
        supersonicCrackNear[] = {"A3\sounds_f\dummysound", 0, 1, 0};
        supersonicCrackFar[] = {"A3\sounds_f\dummysound", 0, 1, 0};
        effectsSmoke = "EmptyEffect";
    };
    class Grenade;
    class GrenadeHand;
    class rhsusf_ammo_L8A3_shell: Grenade {
        simulation = "shotShell";
        AIAmmoUsageFlags = "4";
        hit = 3;
        indirectHit = 1;
        indirectHitRange = 2;
        suppressionRadiusHit = 15;
        typicalspeed = 50;
        airFriction = -0.012;
        model = "rhsusf\addons\rhsusf_heavyweapons\galix\galix_proj";
        visibleFireTime = 1;
        fuseDistance = 0;
        soundHit1[] = {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_01",
            1.5,
            1,
            750
        };
        soundHit2[] = {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_02",
            1.5,
            1,
            750
        };
        soundHit3[] = {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_03",
            1.5,
            1,
            750
        };
        soundHit4[] = {
            "A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_04",
            1.5,
            1,
            750
        };
        multiSoundHit[] = {
            "soundHit1",
            0.25,
            "soundHit2",
            0.25,
            "soundHit3",
            0.25,
            "soundHit4",
            0.25
        };
        explosionEffects = "RHSUSF_CM_L8A3_Effect";
        CraterEffects = "EmptyEffect";
        explosionTime = 0.7;
        timeToLive = 1;
        coefGravity = 2.5;
    };
    class CMflareAmmo;
    class rhsusf_CMflare_Ammo: CMflareAmmo {
        effectsSmoke = "CounterMeasureFlare";
    };
    class ammo_Penetrator_Base: ShellBase {
        submunitionConeType[] = {"randomcenter", 30};
        submunitionAmmo = "rhs_ammo_spall";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.4};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 200;
        deleteParentWhenTriggered = 0;
        triggerTime = 0.003;
    };
};
class CfgMagazines {
    class VehicleMagazine;
    class CA_Magazine;
    class Laserbatteries;
    class rhs_LaserMag: Laserbatteries {
        scope = 1;
        ammo = "rhs_laserbeam";
    };
    class rhs_LaserFCSMag: Laserbatteries {
        scope = 1;
        ammo = "rhs_laserbeam_FCS";
        count = 99;
        initSpeed = 600;
        maxLeadSpeed = 150;
    };
    class rhs_LaserMag_ai: Laserbatteries {
        scope = 1;
        initSpeed = 96000;
        maxLeadSpeed = 1500;
        ammo = "rhs_laserbeam_ai";
    };
    class rhs_mag_M1069: VehicleMagazine {
        scope = 2;
        displayName = "XM1069 HE-FRAG";
        displayNameShort = "M1069";
        ammo = "rhs_ammo_M1069";
        muzzleImpulseFactor[] = {"9*0.1", 9};
        count = 8;
        initSpeed = 1410;
        maxLeadSpeed = 20;
        nameSound = "heat";
        tracersEvery = 1;
        rhs_magazineIndex = 3;
    };
    class rhs_mag_M1147: rhs_mag_M1069 {
        displayName = "M1147 HE-FRAG";
        displayNameShort = "M1147";
        ammo = "rhs_ammo_M1147";
    };
    class rhs_mag_M416: rhs_mag_M1069 {
        displayName = "M416 Smoke";
        displayNameShort = "M416";
        ammo = "rhs_ammo_M416";
        initSpeed = 732;
        rhs_magazineIndex = -1;
    };
    class rhs_mag_M1028: rhs_mag_M1069 {
        displayName = "M1028 Canister";
        displayNameShort = "M1028";
        ammo = "rhs_ammo_M1028";
        initSpeed = 1410;
        rhs_magazineIndex = 3;
    };
    class rhs_mag_M829: rhs_mag_M1069 {
        displayName = "M829 APFSDS-T";
        displayNameShort = "M829";
        ammo = "rhs_ammo_M829";
        count = 28;
        initSpeed = 1670;
        nameSound = "sabot";
        rhs_magazineIndex = 1;
    };
    class rhs_mag_M829A1: rhs_mag_M829 {
        displayName = "M829A1 APFSDS-T";
        displayNameShort = "M829A1";
        ammo = "rhs_ammo_M829A1";
        count = 28;
        initSpeed = 1575;
    };
    class rhs_mag_M829A2: rhs_mag_M829 {
        displayName = "M829A2 APFSDS-T";
        displayNameShort = "M829A2";
        ammo = "rhs_ammo_M829A2";
        count = 28;
        initSpeed = 1680;
    };
    class rhs_mag_M829A3: rhs_mag_M829 {
        displayName = "M829A3 APFSDS-T";
        displayNameShort = "M829A3";
        ammo = "rhs_ammo_M829A3";
        count = 28;
        initSpeed = 1555;
    };
    class rhs_mag_M829A4: rhs_mag_M829 {
        displayName = "M829A4 APFSDS-T";
        displayNameShort = "M829A4";
        ammo = "rhs_ammo_M829A4";
        count = 28;
        initSpeed = 1650;
    };
    class rhs_mag_M830: rhs_mag_M1069 {
        displayName = "M830 HEAT-FS";
        displayNameShort = "M830";
        ammo = "rhs_ammo_M830";
        initSpeed = 915;
        maxLeadSpeed = 20;
        rhs_magazineIndex = 2;
    };
    class rhs_mag_M830A1: rhs_mag_M830 {
        displayName = "M830A1 MPAT";
        displayNameShort = "M830A1";
        ammo = "rhs_ammo_M830A1";
        count = 8;
        initSpeed = 1440;
    };
    class rhs_mag_M829A4_max: rhs_mag_M829A4 {
        count = 40;
    };
    class rhs_mag_M829A3_max: rhs_mag_M829A3 {
        count = 40;
    };
    class rhs_mag_M829A2_max: rhs_mag_M829A2 {
        count = 40;
    };
    class rhs_mag_M829A1_max: rhs_mag_M829A1 {
        count = 40;
    };
    class rhs_mag_M829_max: rhs_mag_M829 {
        count = 40;
    };
    class rhs_mag_M830_max: rhs_mag_M830 {
        count = 40;
    };
    class rhs_mag_M830A1_max: rhs_mag_M830A1 {
        count = 40;
    };
    class rhs_mag_M1069_max: rhs_mag_M1069 {
        count = 40;
    };
    class rhs_mag_M1147_max: rhs_mag_M1147 {
        count = 40;
    };
    class rhs_mag_M1028_max: rhs_mag_M1028 {
        count = 40;
    };
    class rhs_mag_M416_max: rhs_mag_M416 {
        count = 40;
    };
    class 60Rnd_30mm_APFSDS_shells_Tracer_RED;
    class rhs_mag_70Rnd_25mm_M242_APFSDS: 60Rnd_30mm_APFSDS_shells_Tracer_RED {
        ammo = "RHS_ammo_M919_APFSDS";
        count = 70;
        displayname = "25x137mm M919 APFSDS-T";
        displaynameshort = "M919 APFSDS-T";
        initspeed = 1385;
    };
    class rhs_mag_70Rnd_25mm_M242_M791: 60Rnd_30mm_APFSDS_shells_Tracer_RED {
        ammo = "RHS_ammo_M791_APDS";
        count = 70;
        displayname = "25x137mm M791 APDS-T";
        displaynameshort = "M791 APDS-T";
        initspeed = 1345;
    };
    class 140Rnd_30mm_MP_shells_Tracer_RED;
    class rhs_mag_230Rnd_25mm_M242_HEI: 140Rnd_30mm_MP_shells_Tracer_RED {
        scope = 2;
        ammo = "RHS_ammo_M792_HEI";
        count = 230;
        displayname = "25x137mm M792 HEI-T";
        displaynameshort = "M792 HEI-T";
        initspeed = 1100;
        lastroundstracer = 4;
        maxleadspeed = 100;
        namesound = "cannon";
        tracersevery = 1;
    };
    class rhs_mag_1100Rnd_762x51_M240: VehicleMagazine {
        scope = 2;
        ammo = "rhs_ammo_762x51_M80A1EPR_Ball";
        displayname = "7.62x51mm EPR";
        displaynameshort = "M80A1 EPR";
        namesound = "mgun";
        initspeed = 930;
        maxleadspeed = 100;
        count = 1100;
        tracersevery = 5;
    };
    class rhs_mag_762x51_M240_1200: rhs_mag_1100Rnd_762x51_M240 {
        count = 1200;
    };
    class rhs_mag_762x51_M240: rhs_mag_1100Rnd_762x51_M240 {
        count = 100;
        initSpeed = 910;
        lastRoundsTracer = 0;
    };
    class rhs_mag_762x51_M240_200: rhs_mag_762x51_M240 {
        count = 200;
    };
    class rhs_mag_762x51_M240_200_M80: rhs_mag_762x51_M240 {
        ammo = "rhs_ammo_762x51_M80_Ball";
        displayname = "7.62x51mm Ball";
        displaynameshort = "M80 Ball";
        initspeed = 838;
        count = 200;
    };
    class rhs_mag_762x51_m80a1_4000: rhs_mag_1100Rnd_762x51_M240 {
        count = 4000;
        weight = 84;
    };
    class 32Rnd_155mm_Mo_shells;
    class RHS_mag_m1_he_12: 32Rnd_155mm_Mo_shells {
        scope = 2;
        count = 12;
        displayname = "HE-FRAG M1";
        displaynameshort = "HE-FRAG";
        nameSound = "heat";
        ammo = "rhs_ammo_m1_he";
        muzzleImpulseFactor[] = {0.1, 0.1};
    };
    class rhs_mag_m314_ilum_4: RHS_mag_m1_he_12 {
        count = 4;
        displayname = "Illumination M314";
        displaynameshort = "Illumination";
        ammo = "rhs_ammo_m314_ilum";
    };
    class rhs_mag_m60a2_smoke_4: RHS_mag_m1_he_12 {
        count = 4;
        displayname = "Smoke M60A2";
        displaynameshort = "Smoke";
        ammo = "rhs_ammo_m60a2_smoke";
    };
    class 1000Rnd_Gatling_30mm_Plane_CAS_01_F;
    class rhs_mag_1000Rnd_30x173: 1000Rnd_Gatling_30mm_Plane_CAS_01_F {
        ammo = "rhs_ammo_PGU14B_API";
        tracersEvery = 0;
        muzzleImpulseFactor[] = {0.1, 0.4};
    };
    class rhs_mag_1000Rnd_30x173_mixed: 1000Rnd_Gatling_30mm_Plane_CAS_01_F {
        ammo = "rhs_ammo_30x173mm_GAU8_mixed";
        tracersEvery = 0;
        muzzleImpulseFactor[] = {0.1, 0.4};
    };
    class rhs_mag_1150Rnd_30x173: 1000Rnd_Gatling_30mm_Plane_CAS_01_F {
        count = 1150;
        ammo = "rhs_ammo_PGU14B_API";
        tracersEvery = 0;
        muzzleImpulseFactor[] = {0.1, 0.5};
    };
    class rhs_mag_1150Rnd_30x173_mixed: 1000Rnd_Gatling_30mm_Plane_CAS_01_F {
        count = 1150;
        ammo = "rhs_ammo_30x173mm_GAU8_mixed";
        tracersEvery = 0;
        muzzleImpulseFactor[] = {0.1, 0.5};
    };
    class rhs_mag_M197_750: VehicleMagazine {
        scope = 2;
        displayname = "20x102mm PGU-28/B SAPHEI";
        displaynameshort = "SAPHEI";
        ammo = "rhs_ammo_20mm_AP";
        count = 750;
        initSpeed = 1036;
        maxLeadSpeed = 200;
        tracersEvery = 0;
        nameSound = "cannon";
    };
    class rhs_mag_M301_500: VehicleMagazine {
        scope = 2;
        displayname = "20x102mm M1031/1032 SAPHEI-T";
        displaynameshort = "SAPHEI-T";
        ammo = "rhs_ammo_20mm_AP";
        count = 500;
        initSpeed = 1036;
        maxLeadSpeed = 200;
        tracersEvery = 0;
        nameSound = "cannon";
    };
    class rhs_mag_30x113mm_M789_HEDP_1200: VehicleMagazine {
        scope = 1;
        displayName = "30x113mm M789 HEDP-T";
        ammo = "rhs_ammo_30x113mm_M789_HEDP";
        count = 1200;
        initSpeed = 805;
        tracersEvery = 0;
        maxLeadSpeed = 500;
        nameSound = "cannon";
        airLock = 1;
        weight = 419;
    };
    class rhs_mag_30x113mm_M789_HEDP_laser_1200: rhs_mag_30x113mm_M789_HEDP_1200 {
        ammo = "rhs_ammo_30x113mm_M789_HEDP_laser";
        weight = 419;
    };
    class RHS_48Rnd_40mm_MK19: VehicleMagazine {
        scope = 2;
        displayName = "Mk. 19 40mm M384 HE";
        ammo = "rhs_ammo_mk19m3_M384";
        count = 48;
        initSpeed = 240;
        maxLeadSpeed = 100;
        nameSound = "grenadelauncher";
        displaynameshort = "M384 HE";
        muzzleImpulseFactor[] = {2, 2};
    };
    class RHS_48Rnd_40mm_MK19_M430I: RHS_48Rnd_40mm_MK19 {
        displayName = "Mk. 19 40mm M430I HEDP";
        displaynameshort = "M430I HEDP";
        ammo = "rhs_ammo_mk19m3_M430I";
    };
    class RHS_48Rnd_40mm_MK19_M430A1: RHS_48Rnd_40mm_MK19 {
        displayName = "Mk. 19 40mm M430A1 HEDP";
        displaynameshort = "M430A1 HEDP";
        ammo = "rhs_ammo_mk19m3_M430A1";
    };
    class RHS_48Rnd_40mm_MK19_M1001: RHS_48Rnd_40mm_MK19 {
        displayName = "Mk. 19 40mm M1001 Canister";
        displaynameshort = "M1001 Canister";
        ammo = "rhs_ammo_mk19m3_M1001";
    };
    class RHS_96Rnd_40mm_MK19: RHS_48Rnd_40mm_MK19 {
        count = 96;
    };
    class RHS_96Rnd_40mm_MK19_M430I: RHS_48Rnd_40mm_MK19_M430I {
        count = 96;
    };
    class RHS_96Rnd_40mm_MK19_M430A1: RHS_48Rnd_40mm_MK19_M430A1 {
        count = 96;
    };
    class RHS_96Rnd_40mm_MK19_M1001: RHS_48Rnd_40mm_MK19_M1001 {
        count = 96;
    };
    class rhs_mag_100rnd_127x99_mag: VehicleMagazine {
        scope = 2;
        ammo = "rhs_ammo_127x99_Ball";
        initSpeed = 880;
        maxLeadSpeed = 200;
        tracersEvery = 5;
        nameSound = "mgun";
        count = 100;
        displayName = "12.7mm M2 HMG Belt";
        descriptionShort = "Caliber: 12.7x99 mm NATO<br/>Rounds: 100<br />Used in: Mounted M2";
        displaynameshort = "M2 Ball";
    };
    class rhs_mag_100rnd_127x99_mag_Tracer_Red: rhs_mag_100rnd_127x99_mag {
        ammo = "rhs_ammo_127x99_Ball_Tracer_Red";
        displayName = "12.7mm M2 HMG Tracer (Red) Belt";
        descriptionShort = "Caliber: 12.7x99 mm Tracer - Red<br/>Rounds: 100<br />Used in: Mounted M2";
    };
    class rhs_mag_100rnd_127x99_mag_Tracer_Green: rhs_mag_100rnd_127x99_mag_Tracer_Red {
        ammo = "rhs_ammo_127x99_Ball_Tracer_Green";
        displayName = "12.7mm M2 HMG Tracer (Green) Belt";
        descriptionShort = "Caliber: 12.7x99 mm Tracer - Green<br/>Rounds: 100<br />Used in: Mounted M2";
    };
    class rhs_mag_100rnd_127x99_mag_Tracer_Yellow: rhs_mag_100rnd_127x99_mag_Tracer_Red {
        ammo = "rhs_ammo_127x99_Ball_Tracer_Yellow";
        displayName = "12.7mm M2 HMG Tracer (Yellow) Belt";
        descriptionShort = "Caliber: 12.7x99 mm Tracer - Yellow<br/>Rounds: 100<br />Used in: Mounted M2";
    };
    class rhs_mag_100rnd_127x99_SLAP_mag: rhs_mag_100rnd_127x99_mag {
        ammo = "rhs_ammo_127x99_SLAP";
        displayName = "12.7mm SLAP M2 HMG Belt";
        descriptionShort = "Caliber: 12.7x99 mm SLAP <br/>Rounds: 100<br />Used in: Mounted M2";
        displaynameshort = "M903 SLAP";
        initSpeed = 1210;
    };
    class rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Red: rhs_mag_100rnd_127x99_SLAP_mag {
        ammo = "rhs_ammo_127x99_SLAP_Tracer_Red";
        displayName = "12.7mm SLAP M2 HMG Tracer (Red) Belt";
        descriptionShort = "Caliber: 12.7x99 mm SLAP Tracer - Red<br/>Rounds: 100<br />Used in: Mounted M2";
    };
    class rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Green: rhs_mag_100rnd_127x99_SLAP_mag {
        ammo = "rhs_ammo_127x99_SLAP_Tracer_Green";
        displayName = "12.7mm SLAP M2 HMG Tracer (Green) Belt";
        descriptionShort = "Caliber: 12.7x99 mm SLAP Tracer - Green<br/>Rounds: 100<br />Used in: Mounted M2";
    };
    class rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Yellow: rhs_mag_100rnd_127x99_SLAP_mag {
        ammo = "rhs_ammo_127x99_SLAP_Tracer_Yellow";
        displayName = "12.7mm SLAP M2 HMG Tracer (Yellow) Belt";
        descriptionShort = "Caliber: 12.7x99 mm SLAP Tracer - Yellow<br/>Rounds: 100<br />Used in: Mounted M2";
    };
    class rhs_mag_200rnd_127x99_mag: rhs_mag_100rnd_127x99_mag {
        scope = 2;
        count = 200;
        descriptionShort = "Caliber: 12.7x99 mm NATO<br/>Rounds: 200<br />Used in: Mounted M2";
    };
    class rhs_mag_200rnd_127x99_mag_Tracer_Red: rhs_mag_100rnd_127x99_mag_Tracer_Red {
        scope = 2;
        count = 200;
        descriptionShort = "Caliber: 12.7x99 mm Tracer - Red<br/>Rounds: 200<br />Used in: Mounted M2";
    };
    class rhs_mag_200rnd_127x99_SLAP_mag: rhs_mag_100rnd_127x99_SLAP_mag {
        scope = 2;
        count = 200;
        descriptionShort = "Caliber: 12.7x99 mm SLAP<br/>Rounds: 200<br />Used in: Mounted M2";
    };
    class rhs_mag_200rnd_127x99_SLAP_mag_Tracer_Red: rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Red {
        scope = 2;
        count = 200;
        descriptionShort = "Caliber: 12.7x99 mm SLAP Tracer - Red<br/>Rounds: 200<br />Used in: Mounted M2";
    };
    class rhs_mag_300rnd_127x99_mag: rhs_mag_100rnd_127x99_mag {
        scope = 2;
        count = 300;
        descriptionShort = "Caliber: 12.7x99 mm NATO<br/>Rounds: 400<br />Used in: Mounted M2";
    };
    class rhs_mag_300rnd_127x99_mag_Tracer_Red: rhs_mag_100rnd_127x99_mag_Tracer_Red {
        scope = 2;
        count = 300;
        tracersEvery = 1;
        descriptionShort = "Caliber: 12.7x99 mm Tracer - Red<br/>Rounds: 400<br />Used in: Mounted M2";
    };
    class rhs_mag_300rnd_127x99_SLAP_mag: rhs_mag_100rnd_127x99_SLAP_mag {
        scope = 2;
        count = 300;
        descriptionShort = "Caliber: 12.7x99 mm SLAP<br/>Rounds: 400<br />Used in: Mounted M2";
    };
    class rhs_mag_300rnd_127x99_SLAP_mag_Tracer_Red: rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Red {
        scope = 2;
        count = 300;
        tracersEvery = 1;
        descriptionShort = "Caliber: 12.7x99 mm SLAP Tracer - Red<br/>Rounds: 400<br />Used in: Mounted M2";
    };
    class rhs_mag_400rnd_127x99_mag: rhs_mag_100rnd_127x99_mag {
        scope = 2;
        count = 400;
        descriptionShort = "Caliber: 12.7x99 mm NATO<br/>Rounds: 400<br />Used in: Mounted M2";
    };
    class rhs_mag_400rnd_127x99_mag_Tracer_Red: rhs_mag_100rnd_127x99_mag_Tracer_Red {
        scope = 2;
        count = 400;
        descriptionShort = "Caliber: 12.7x99 mm Tracer - Red<br/>Rounds: 400<br />Used in: Mounted M2";
    };
    class rhs_mag_400rnd_127x99_SLAP_mag: rhs_mag_100rnd_127x99_SLAP_mag {
        scope = 2;
        count = 400;
        descriptionShort = "Caliber: 12.7x99 mm SLAP<br/>Rounds: 400<br />Used in: Mounted M2";
    };
    class rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red: rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Red {
        scope = 2;
        count = 400;
        descriptionShort = "Caliber: 12.7x99 mm SLAP Tracer - Red<br/>Rounds: 400<br />Used in: Mounted M2";
    };
    class rhs_mag_400rnd_127x99_mag_AI: rhs_mag_400rnd_127x99_mag {
        ammo = "rhs_ammo_127x99_Ball_AI";
    };
    class rhs_mag_400rnd_127x99_mag_Tracer_Red_AI: rhs_mag_400rnd_127x99_mag_Tracer_Red {
        ammo = "rhs_ammo_127x99_Ball_Tracer_Red_AI";
    };
    class rhs_mag_400rnd_127x99_SLAP_mag_AI: rhs_mag_400rnd_127x99_SLAP_mag {
        ammo = "rhs_ammo_127x99_SLAP_AI";
    };
    class rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red_AI: rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red {
        ammo = "rhs_ammo_127x99_SLAP_Tracer_Red_AI";
    };
    class rhs_mag_400rnd_127x99_mag_Plane: rhs_mag_400rnd_127x99_mag {
        ammo = "rhs_ammo_127x99_Ball_Plane";
    };
    class rhs_mag_400rnd_127x99_mag_Tracer_Red_Plane: rhs_mag_400rnd_127x99_mag_Tracer_Red {
        ammo = "rhs_ammo_127x99_Ball_Tracer_Red_Plane";
    };
    class rhs_mag_400rnd_127x99_SLAP_mag_Plane: rhs_mag_400rnd_127x99_SLAP_mag {
        ammo = "rhs_ammo_127x99_SLAP_Plane";
    };
    class rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red_Plane: rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red {
        ammo = "rhs_ammo_127x99_SLAP_Tracer_Red_Plane";
    };
    class 8Rnd_82mm_Mo_shells;
    class rhs_1Rnd_m821_HE: 8Rnd_82mm_Mo_shells {
        author = "RHS";
        displayName = "81mm M821 HE Mortar Shell";
        displayNameShort = "$STR_A3_cfgmagazines_8rnd_82mm_mo_shells_dns";
        count = 1;
        ammo = "rhs_m821_he";
        initSpeed = 200;
    };
    class rhs_12Rnd_m821_HE: rhs_1Rnd_m821_HE {
        count = 12;
    };
    class rhs_mag_155mm_m795_28: 32Rnd_155mm_Mo_shells {
        initSpeed = 810;
        displayNameShort = "$STR_A3_CfgMagazines_50Rnd_120mm_Mo_shells_dns";
        scope = 2;
        displayName = "$STR_A3_CfgMagazines_50Rnd_120mm_Mo_shells0";
        ammo = "Sh_155mm_AMOS";
        count = 32;
        nameSound = "heat";
        muzzleImpulseFactor[] = {7, 22};
    };
    class rhs_mag_155mm_m825a1_2: rhs_mag_155mm_m795_28 {
        count = 2;
        ammo = "Smoke_120mm_AMOS_White";
        displayName = "$STR_A3_CfgMagazines_10Rnd_120mm_Mo_smoke0";
        displayNameShort = "$STR_A3_CfgMagazines_SmokeShell_dns";
    };
    class rhs_mag_155mm_485_2: rhs_mag_155mm_m825a1_2 {
        ammo = "rhs_ammo_m485_ilum";
        displayName = "Illumination";
        displayNameShort = "Illumination";
    };
    class rhs_mag_155mm_m712_2: rhs_mag_155mm_m825a1_2 {
        ammo = "Sh_155mm_AMOS_LG";
        displayName = "$STR_A3_CfgMagazines_10Rnd_120mm_Mo_LG0";
        displayNameShort = "$STR_A3_CfgMagazines_10Rnd_120mm_Mo_LG0";
    };
    class rhs_mag_155mm_m731_1: rhs_mag_155mm_m825a1_2 {
        count = 1;
        ammo = "Mine_155mm_AMOS_range";
        displayName = "$STR_A3_CfgMagazines_10Rnd_120mm_Mo_mine0";
        displayNameShort = "$STR_A3_CfgMagazines_10Rnd_120mm_Mo_mine0";
    };
    class rhs_mag_155mm_raams_1: rhs_mag_155mm_m731_1 {
        ammo = "AT_Mine_155mm_AMOS_range";
        displayName = "$STR_A3_at_mine_cluster_0";
        displayNameShort = "$STR_A3_at_mine_cluster_0";
    };
    class rhs_mag_155mm_m864_3: rhs_mag_155mm_m825a1_2 {
        count = 3;
        ammo = "Cluster_155mm_AMOS";
        displayName = "$STR_A3_CfgMagazines_10Rnd_120mm_Mo_Cluster0";
        displayNameShort = "$STR_A3_CfgMagazines_10Rnd_120mm_Mo_Cluster0";
    };
    class rhs_mag_2Rnd_TOW: VehicleMagazine {
        scope = 2;
        ammo = "rhs_ammo_TOW_AT";
        displayname = "BGM-71A TOW";
        displaynameshort = "BGM-71A";
        nameSound = "missiles";
        count = 2;
        initSpeed = 55.71;
        maxleadspeed = 130;
        rhs_magazineIndex = 4;
    };
    class rhs_mag_2Rnd_TOWB: rhs_mag_2Rnd_TOW {
        scope = 2;
        ammo = "rhs_ammo_TOWB_AT";
        displayname = "BGM-71B TOW";
        displaynameshort = "BGM-71B";
    };
    class rhs_mag_2Rnd_ITOW: rhs_mag_2Rnd_TOW {
        scope = 2;
        ammo = "rhs_ammo_ITOW_AT";
        displayname = "BGM-71C ITOW";
        displaynameshort = "BGM-71C";
    };
    class rhs_mag_2Rnd_TOW2: rhs_mag_2Rnd_TOW {
        scope = 2;
        ammo = "rhs_ammo_TOW2_AT";
        displayname = "BGM-71D TOW-2";
        displaynameshort = "BGM-71D";
    };
    class rhs_mag_2Rnd_TOW2A: rhs_mag_2Rnd_TOW {
        scope = 2;
        ammo = "rhs_ammo_TOW2A_AT";
        displayname = "BGM-71E TOW-2A";
        displaynameshort = "BGM-71E";
    };
    class rhs_mag_2Rnd_TOW2B: rhs_mag_2Rnd_TOW {
        scope = 2;
        ammo = "rhs_ammo_TOW2B_AT";
        displayname = "BGM-71F TOW-2B";
        displaynameshort = "BGM-71F";
    };
    class rhs_mag_2Rnd_TOW2B_AERO: rhs_mag_2Rnd_TOW {
        scope = 2;
        ammo = "rhs_ammo_TOW2B_AERO_AT";
        displayname = "BGM-71F-3 TOW-2B AERO";
        displaynameshort = "BGM-71F-3";
    };
    class rhs_mag_2Rnd_TOW2BB: rhs_mag_2Rnd_TOW {
        scope = 2;
        ammo = "rhs_ammo_TOW2_BB";
        displayname = "BGM-71H Bunker Buster";
        displaynameshort = "BGM-71H";
    };
    class rhs_mag_TOW: rhs_mag_2Rnd_TOW {
        count = 1;
    };
    class rhs_mag_TOWB: rhs_mag_2Rnd_TOWB {
        count = 1;
    };
    class rhs_mag_ITOW: rhs_mag_2Rnd_ITOW {
        count = 1;
    };
    class rhs_mag_TOW2: rhs_mag_2Rnd_TOW2 {
        count = 1;
        ammo = "rhs_ammo_TOW2_AT_static";
    };
    class rhs_mag_TOW2a: rhs_mag_2Rnd_TOW2A {
        count = 1;
    };
    class rhs_mag_TOW2b: rhs_mag_2Rnd_TOW2B {
        count = 1;
    };
    class rhs_mag_TOW2b_aero: rhs_mag_2Rnd_TOW2B_AERO {
        count = 1;
    };
    class rhs_mag_TOW2bb: rhs_mag_2Rnd_TOW2BB {
        count = 1;
    };
    class rhs_mag_m26_6: VehicleMagazine {
        scope = 2;
        displayName = "M26";
        displayNameShort = "Cluster";
        descriptionShort = "227mm rocket, ×161 M77 DPICM";
        ammo = "rhs_ammo_m26_rocket";
        nameSound = "rockets";
        initSpeed = 650;
        count = 6;
        model = "rhsusf\addons\rhsusf_himars\M142_MLRS_Pod";
        hardpoints[] = {"RHS_HP_MLRS"};
        pylonWeapon = "rhs_weap_mlrs";
    };
    class rhs_mag_m26a1_6: rhs_mag_m26_6 {
        displayName = "M26A1";
        descriptionShort = "227mm rocket, ×130 M85 DPICM";
        ammo = "rhs_ammo_m26a1_rocket";
        initSpeed = 850;
    };
    class rhs_mag_m30_6: rhs_mag_m26a1_6 {
        displayName = "M30";
        descriptionShort = "227mm rocket, GPS/INS, ×101 M85 DPICM";
        ammo = "rhs_ammo_m30_rocket";
        hardpoints[] = {"RHS_HP_GMLRS"};
        pylonWeapon = "rhs_weap_mlrs_guided";
    };
    class rhs_mag_m31_6: rhs_mag_m30_6 {
        displayName = "M31";
        displayNameShort = "Unitary HE";
        descriptionShort = "227mm rocket, GPS/INS, 200lb HE warhead";
        ammo = "rhs_ammo_m31_rocket";
    };
    class rhs_mag_mgm140a_1: rhs_mag_m30_6 {
        displayName = "MGM-140A (M39)";
        displayNameShort = "Cluster";
        descriptionShort = "ATacMS Block I, ×234 M74 APAM";
        ammo = "rhs_ammo_mgm140a_rocket";
        count = 1;
        model = "rhsusf\addons\rhsusf_himars\M142_ATACMS_Pod";
        hardpoints[] = {"RHS_HP_ATACMS"};
        pylonWeapon = "rhs_weap_atacms";
    };
    class rhs_mag_mgm140b_1: rhs_mag_mgm140a_1 {
        displayName = "MGM-140B (M39A1)";
        descriptionShort = "ATacMS Block IA, GPS/INS, ×69 M74 APAM";
        ammo = "rhs_ammo_mgm140b_rocket";
        pylonWeapon = "rhs_weap_atacms_guided";
    };
    class rhs_mag_mgm164_block2_1: rhs_mag_mgm140a_1 {
        hardpoints[] = {};
        displayName = "MGM-164A";
        displayNameShort = "Cluster, Guided HEAT";
        descriptionShort = "ATacMS Block II, GPS/INS, ×13 Guided BAT";
        ammo = "rhs_ammo_mgm164_block2_rocket";
    };
    class rhs_mag_mgm164_block4_1: rhs_mag_mgm140a_1 {
        hardpoints[] = {};
        displayName = "MGM-168";
        displayNameShort = "Unitary HE";
        descriptionShort = "ATacMS Block IVA, GPS/INS, 500lb HE warhead";
        ammo = "rhs_ammo_mgm164_block4_rocket";
        pylonWeapon = "rhs_weap_atacms_guided";
    };
    class rhs_mag_mgm168_block4_1: rhs_mag_mgm164_block4_1 {
        hardpoints[] = {"RHS_HP_ATACMS"};
    };
    class SmokeLauncherMag;
    class rhsusf_mag_L8A3_8: SmokeLauncherMag {
        count = 8;
        scope = 2;
        ammo = "rhsusf_ammo_L8A3";
        initSpeed = 50;
    };
    class rhsusf_mag_L8A3_12: rhsusf_mag_L8A3_8 {
        count = 12;
    };
    class rhsusf_mag_L8A3_16: rhsusf_mag_L8A3_8 {
        count = 16;
    };
    class rhsusf_mag_L8A3_48: rhsusf_mag_L8A3_8 {
        count = 48;
    };
    class rhsusf_mag_L8A3_L1_8: rhsusf_mag_L8A3_8 {};
    class rhsusf_mag_L8A3_L2_8: rhsusf_mag_L8A3_8 {};
    class rhsusf_mag_L8A3_L3_8: rhsusf_mag_L8A3_8 {};
    class rhsusf_mag_L8A3_R1_8: rhsusf_mag_L8A3_8 {};
    class rhsusf_mag_L8A3_R2_8: rhsusf_mag_L8A3_8 {};
    class rhsusf_mag_L8A3_R3_8: rhsusf_mag_L8A3_8 {};
    class rhs_mag_smokegen: SmokeLauncherMag {
        scope = 2;
        count = 999;
        ammo = "rhs_ammo_smokegen";
        displayName = "$STR_RHSUSF_MAG_SMOKEGEN";
        displayNameShort = "$STR_RHSUSF_MAG_SMOKEGEN";
    };
    class rhsusf_mag_duke: SmokeLauncherMag {
        count = 1;
        scope = 2;
        ammo = "rhsusf_ammo_duke";
        initSpeed = 10;
    };
    class rhsusf_mag_laneMarkerSystem: SmokeLauncherMag {
        count = 50;
        scope = 2;
        ammo = "rhsusf_ammo_laneMarkerSystem";
        initSpeed = 10;
    };
    class rhsusf_mag_LWIRCM: CA_Magazine {
        count = 120;
        ammo = "rhs_ammo_LWIRCM";
        initSpeed = 30;
        weight = 0;
    };
    class rhsusf_mag_DIRCM: rhsusf_mag_LWIRCM {};
    class 60Rnd_CMFlare_Chaff_Magazine;
    class 30Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine {
        count = 30;
    };
    class rhsusf_M130_CMFlare_Chaff_Magazine: 30Rnd_CMFlare_Chaff_Magazine {
        pylonweapon = "rhsusf_weap_CMDispenser_M130";
        displayname = "1x30 M206 Flare/RR-170 Chaff";
        hardpoints[] = {"RHSUSF_cm_M130"};
        count = 15;
    };
    class rhsusf_M130_CMFlare_Chaff_Magazine_x2: rhsusf_M130_CMFlare_Chaff_Magazine {
        displayname = "2x30 M206 Flare/RR-170 Chaff";
        hardpoints[] = {"RHSUSF_cm_M130_x2"};
        count = 30;
    };
    class rhsusf_M130_CMFlare_Chaff_Magazine_x4: rhsusf_M130_CMFlare_Chaff_Magazine {
        displayname = "4x30 M206 Flare/RR-170 Chaff";
        hardpoints[] = {"RHSUSF_cm_M130_x4"};
        count = 60;
    };
    class rhsusf_M130_CMFlare_Chaff_Magazine_x8: rhsusf_M130_CMFlare_Chaff_Magazine {
        displayname = "8x30 M206 Flare/RR-170 Chaff";
        hardpoints[] = {"RHSUSF_cm_M130_x8"};
        count = 120;
    };
    class rhsusf_M130_CMFlare_Chaff_Magazine_x16: rhsusf_M130_CMFlare_Chaff_Magazine {
        displayname = "16x30 M206 Flare/RR-170 Chaff";
        hardpoints[] = {"RHSUSF_cm_M130_x16"};
        count = 240;
    };
    class rhsusf_M130_CMFlare_Magazine: rhsusf_M130_CMFlare_Chaff_Magazine {
        displayname = "1x30 M206 Flare";
        count = 30;
        ammo = "rhsusf_CMflare_Ammo";
    };
    class rhsusf_M130_CMFlare_Magazine_x2: rhsusf_M130_CMFlare_Magazine {
        displayname = "2x30 M206 Flare";
        hardpoints[] = {"RHSUSF_cm_M130_x2"};
        count = 60;
    };
    class rhsusf_M130_CMFlare_Magazine_x4: rhsusf_M130_CMFlare_Magazine {
        displayname = "4x30 M206 Flare";
        hardpoints[] = {"RHSUSF_cm_M130_x4"};
        count = 120;
    };
    class rhsusf_M130_CMFlare_Magazine_x8: rhsusf_M130_CMFlare_Magazine {
        displayname = "8x30 M206 Flare";
        hardpoints[] = {"RHSUSF_cm_M130_x8"};
        count = 240;
    };
    class rhsusf_M130_CMFlare_Magazine_x16: rhsusf_M130_CMFlare_Magazine {
        displayname = "16x30 M206 Flare";
        hardpoints[] = {"RHSUSF_cm_M130_x16"};
        count = 480;
    };
    class rhsusf_ANALE39_CMFlare_Chaff_Magazine: rhsusf_M130_CMFlare_Chaff_Magazine {
        pylonweapon = "rhsusf_weap_CMDispenser_ANALE39";
        displayname = "1x30 MJU-32 Flare/RR-144 Chaff";
        hardpoints[] = {"RHSUSF_cm_ANALE39"};
    };
    class rhsusf_ANALE39_CMFlare_Chaff_Magazine_x2: rhsusf_M130_CMFlare_Chaff_Magazine_x2 {
        pylonweapon = "rhsusf_weap_CMDispenser_ANALE39";
        displayname = "2x30 MJU-32 Flare/RR-144 Chaff";
        hardpoints[] = {"RHSUSF_cm_ANALE39_x2"};
    };
    class rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4: rhsusf_M130_CMFlare_Chaff_Magazine_x4 {
        pylonweapon = "rhsusf_weap_CMDispenser_ANALE39";
        displayname = "4x30 MJU-32 Flare/RR-144 Chaff";
        hardpoints[] = {"RHSUSF_cm_ANALE39_x4"};
    };
    class rhsusf_ANALE39_CMFlare_Magazine: rhsusf_M130_CMFlare_Magazine {
        pylonweapon = "rhsusf_weap_CMDispenser_ANALE39";
        displayname = "1x30 MJU-32 Flare";
        hardpoints[] = {"RHSUSF_cm_ANALE39"};
    };
    class rhsusf_ANALE39_CMFlare_Magazine_x2: rhsusf_M130_CMFlare_Magazine_x2 {
        pylonweapon = "rhsusf_weap_CMDispenser_ANALE39";
        displayname = "2x30 MJU-32 Flare";
        hardpoints[] = {"RHSUSF_cm_ANALE39_x2"};
    };
    class rhsusf_ANALE39_CMFlare_Magazine_x4: rhsusf_M130_CMFlare_Magazine_x4 {
        pylonweapon = "rhsusf_weap_CMDispenser_ANALE39";
        displayname = "4x30 MJU-32 Flare";
        hardpoints[] = {"RHSUSF_cm_ANALE39_x4"};
    };
    class rhsusf_ANALE40_CMFlare_Chaff_Magazine: rhsusf_M130_CMFlare_Chaff_Magazine {
        pylonweapon = "rhsusf_weap_CMDispenser_ANALE40";
        hardpoints[] = {"RHSUSF_cm_ANALE40"};
    };
    class rhsusf_ANALE40_CMFlare_Chaff_Magazine_x2: rhsusf_M130_CMFlare_Chaff_Magazine_x2 {
        pylonweapon = "rhsusf_weap_CMDispenser_ANALE40";
        hardpoints[] = {"RHSUSF_cm_ANALE40_x2"};
    };
    class rhsusf_ANALE40_CMFlare_Chaff_Magazine_x4: rhsusf_M130_CMFlare_Chaff_Magazine_x4 {
        pylonweapon = "rhsusf_weap_CMDispenser_ANALE40";
        hardpoints[] = {"RHSUSF_cm_ANALE40_x4"};
    };
    class rhsusf_ANALE40_CMFlare_Chaff_Magazine_x8: rhsusf_M130_CMFlare_Chaff_Magazine_x8 {
        pylonweapon = "rhsusf_weap_CMDispenser_ANALE40";
        hardpoints[] = {"RHSUSF_cm_ANALE40_x8"};
    };
    class rhsusf_ANALE40_CMFlare_Chaff_Magazine_x16: rhsusf_M130_CMFlare_Chaff_Magazine_x16 {
        pylonweapon = "rhsusf_weap_CMDispenser_ANALE40";
        hardpoints[] = {"RHSUSF_cm_ANALE40_x16"};
    };
    class rhsusf_ANALE40_CMFlare_Magazine: rhsusf_M130_CMFlare_Magazine {
        pylonweapon = "rhsusf_weap_CMDispenser_ANALE40";
        hardpoints[] = {"RHSUSF_cm_ANALE40"};
    };
    class rhsusf_ANALE40_CMFlare_Magazine_x2: rhsusf_M130_CMFlare_Magazine_x2 {
        pylonweapon = "rhsusf_weap_CMDispenser_ANALE40";
        hardpoints[] = {"RHSUSF_cm_ANALE40_x2"};
    };
    class rhsusf_ANALE40_CMFlare_Magazine_x4: rhsusf_M130_CMFlare_Magazine_x4 {
        pylonweapon = "rhsusf_weap_CMDispenser_ANALE40";
        hardpoints[] = {"RHSUSF_cm_ANALE40_x4"};
    };
    class rhsusf_ANALE40_CMFlare_Magazine_x8: rhsusf_M130_CMFlare_Magazine_x8 {
        pylonweapon = "rhsusf_weap_CMDispenser_ANALE40";
        hardpoints[] = {"RHSUSF_cm_ANALE40_x8"};
    };
    class rhsusf_ANALE40_CMFlare_Magazine_x16: rhsusf_M130_CMFlare_Magazine_x16 {
        pylonweapon = "rhsusf_weap_CMDispenser_ANALE40";
        hardpoints[] = {"RHSUSF_cm_ANALE40_x16"};
    };
    class rhsusf_ANALE52_CMFlare_Chaff_Magazine: 30Rnd_CMFlare_Chaff_Magazine {
        pylonweapon = "rhsusf_weap_CMDispenser_ANALE52";
        displayname = "1x12 MJU-39 Flare/12 RR-170 Chaff";
        hardpoints[] = {"RHSUSF_cm_ANALE52"};
        count = 12;
    };
    class rhsusf_ANALE52_CMFlare_Chaff_Magazine_x2: rhsusf_ANALE52_CMFlare_Chaff_Magazine {
        displayname = "2x12 MJU-39 Flare/24 RR-170 Chaff";
        hardpoints[] = {"RHSUSF_cm_ANALE52_x2"};
        count = 24;
    };
    class rhsusf_ANALE52_CMFlare_Chaff_Magazine_x4: rhsusf_ANALE52_CMFlare_Chaff_Magazine {
        displayname = "4x12 MJU-39 Flare/2x24 RR-170 Chaff";
        hardpoints[] = {"RHSUSF_cm_ANALE52_x4"};
        count = 48;
    };
    class rhsusf_ANALE52_CMFlare_Magazine: rhsusf_ANALE52_CMFlare_Chaff_Magazine {
        displayname = "1x12 MJU-39 Flare";
        count = 12;
        ammo = "rhsusf_CMflare_Ammo";
    };
    class rhsusf_ANALE52_CMFlare_Magazine_x2: rhsusf_ANALE52_CMFlare_Magazine {
        displayname = "2x12 MJU-39 Flare";
        hardpoints[] = {"RHSUSF_cm_ANALE52_x2"};
        count = 24;
    };
    class rhsusf_ANALE52_CMFlare_Magazine_x4: rhsusf_ANALE52_CMFlare_Magazine {
        displayname = "4x12 MJU-39 Flare";
        hardpoints[] = {"RHSUSF_cm_ANALE52_x4"};
        count = 48;
    };
    class rhsusf_ANALE52_CMFlare_Magazine_x6: rhsusf_ANALE52_CMFlare_Magazine {
        displayname = "6x12 MJU-39 Flare";
        hardpoints[] = {"RHSUSF_cm_ANALE52_x6"};
        count = 72;
    };
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons {
    class Default;
    class MGun;
    class rhs_weap_MASTERSAFE: Default {
        scope = 1;
        displayName = "MASTERSAFE";
        descriptionShort = "MASTERSAFE";
        showToPlayer = 0;
        modes[] = {"this"};
        magazines[] = {};
        minRange = 0;
        minRangeProbab = 0.001;
        midRange = 0.001;
        midRangeProbab = 0.001;
        maxRange = 0.001;
        maxRangeProbab = 0.001;
    };
    class rhs_weap_MASTERSAFE_Holdster15: rhs_weap_MASTERSAFE {
        holdsterAnimValue = 1.502;
    };
    class CannonCore;
    class cannon_120mm: CannonCore {
        class player;
        class close;
        class short;
        class medium;
        class far;
    };
    class rhs_weap_fcs: cannon_120mm {
        minRange = 1;
        minRangeProbab = 1;
        midRange = 2000;
        midRangeProbab = 1;
        maxRange = 5000;
        maxRangeProbab = 1;
        aiRateOfFire = 0.6;
        aiRateOfFireDistance = 5000;
        modes[] = {"this"};
        magazines[] = {"rhs_laserfcsmag"};
        showToPlayer = 0;
        reloadTime = 2;
        magazineReloadTime = 2;
        class gunParticles {};
        weaponLockSystem = 4;
        class Eventhandlers {
            fired = "[_this select 0,_this select 1,true] call rhs_fnc_firedFCS";
        };
    };
    class rhs_weap_fcs_noLRF: rhs_weap_fcs {
        weaponLockSystem = 0;
        class Eventhandlers {
            fired = "[_this select 0,_this select 1] call rhs_fnc_firedFCS";
        };
    };
    class rhs_weap_fcs_ammo: rhs_weap_fcs {
        class Eventhandlers {
            fired = "[_this select 0,_this select 1,true,true] call rhs_fnc_firedFCS";
        };
    };
    class rhs_weap_planeAI: rhs_weap_fcs {
        weaponLockSystem = 0;
        class Eventhandlers {
            fired = "_this call rhs_fnc_firedPlaneAI";
        };
    };
    class rhs_weap_fcs_ah64: rhs_weap_fcs {
        midRange = 4000;
        midRangeProbab = 1;
        maxRange = 8000;
        maxRangeProbab = 1;
        reloadTime = 6;
        class Eventhandlers {
            fired = "_this call rhs_fnc_AH64_AI_fire";
        };
    };
    class laserDesignator_vehicle;
    class rhs_weap_laserDesignator_AI: laserDesignator_vehicle {
        magazines[] = {"rhs_LaserMag_ai"};
        modes[] = {"this"};
        minRange = 1;
        minRangeProbab = 1;
        midRange = 1;
        midRangeProbab = 1;
        maxRange = 1;
        maxRangeProbab = 1;
        aiRateOfFire = 0.6;
    };
    class rhs_weap_m256: cannon_120mm {
        canLock = 0;
        scope = 1;
        nameSound = "cannon";
        showaimcursorinternal = 0;
        cursor = "EmptyCursor";
        cursoraim = "EmptyCursor";
        cursoraimon = "EmptyCursor";
        displayname = "120mm M256A1";
        ballisticsComputer = 1;
        flash = "gunfire";
        flashSize = 10;
        aiDispersioncoefX = 1.4;
        aiDispersioncoefY = 2;
        reloadSound[] = {
            "\rhsusf\addons\rhsusf_c_heavyweapons\sounds\reload_tank_cannon_loader",
            3.622776,
            1,
            15
        };
        reloadMagazineSound[] = {
            "\rhsusf\addons\rhsusf_c_heavyweapons\sounds\reload_tank_cannon_loader",
            3.622776,
            1,
            15
        };
        reloadTime = 17;
        magazineReloadTime = 12;
        autoReload = 1;
        magazines[] = {
            "rhs_mag_M829A4",
            "rhs_mag_M829A3",
            "rhs_mag_M829A2",
            "rhs_mag_M829A1",
            "rhs_mag_M829",
            "rhs_mag_M830",
            "rhs_mag_M830A1",
            "rhs_mag_M1069",
            "rhs_mag_M1147",
            "rhs_mag_M1028",
            "rhs_mag_M416",
            "rhs_mag_M829A4_max",
            "rhs_mag_M829A3_max",
            "rhs_mag_M829A2_max",
            "rhs_mag_M829A1_max",
            "rhs_mag_M829_max",
            "rhs_mag_M830_max",
            "rhs_mag_M830A1_max",
            "rhs_mag_M1069_max",
            "rhs_mag_M1147_max",
            "rhs_mag_M1028_max",
            "rhs_mag_M416_max"
        };
        magazineWell[] = {"RHS_Cannon_120mm_M256"};
        class player: player {
            reloadTime = 11;
        };
        class close: close {
            reloadTime = 11;
        };
        class short: short {
            reloadTime = 11;
        };
        class medium: medium {
            aiRateOfFireDistance = 1500;
            reloadTime = 11;
            minRange = 1000;
            minRangeProbab = 0.6;
            midRange = 2000;
            midRangeProbab = 0.85;
            maxRange = 3000;
            maxRangeProbab = 0.8;
        };
        class far: far {
            aiRateOfFireDistance = 3500;
            reloadTime = 11;
            minRange = 1500;
            minRangeProbab = 0.75;
            midRange = 2500;
            midRangeProbab = 0.8;
            maxRange = 5000;
            maxRangeProbab = 0.4;
        };
        class EventHandlers {
            class RHS_Fired_EH {
                fired = "_this call rhs_fnc_tankLoader";
            };
        };
    };
    class mortar_155mm_AMOS;
    class cannon_155mm: mortar_155mm_AMOS {
        class Single1;
        class Single2;
        class Single3;
        class Single4;
        class Single5;
        class Burst1;
        class Burst2;
        class Burst3;
        class Burst4;
        class Burst5;
    };
    class rhs_weap_m284: cannon_155mm {
        scope = 1;
        displayName = "$STR_A3_mortar_120mm_AMOS0";
        nameSound = "cannon";
        cursor = "mortar";
        cursorAim = "EmptyCursor";
        reloadSound[] = {
            "A3\Sounds_F\vehicles\armor\noises\reload_tank_cannon_2",
            31.622776,
            1,
            15
        };
        minRange = 10;
        minRangeProbab = 0.7;
        midRange = 1800;
        midRangeProbab = 0.7;
        maxRange = 3000;
        maxRangeProbab = 0.1;
        reloadTime = 6;
        magazineReloadTime = 7;
        autoReload = 1;
        canLock = 0;
        magazines[] = {
            "rhs_mag_155mm_m795_28",
            "rhs_mag_155mm_m825a1_2",
            "rhs_mag_155mm_485_2",
            "rhs_mag_155mm_m712_2",
            "rhs_mag_155mm_m731_1",
            "rhs_mag_155mm_raams_1",
            "rhs_mag_155mm_m864_3"
        };
        modes[] = {
            "Single1",
            "Single2",
            "Single3",
            "Single4",
            "Single5",
            "Burst1",
            "Burst2",
            "Burst3",
            "Burst4",
            "Burst5"
        };
        class Single1: Single1 {};
        class Single2: Single2 {};
        class Single3: Single3 {};
        class Single4: Single4 {};
        class Single5: Single5 {};
        class Burst1: Burst1 {};
        class Burst2: Burst2 {};
        class Burst3: Burst3 {};
        class Burst4: Burst4 {};
        class Burst5: Burst5 {};
    };
    class autocannon_Base_F;
    class autocannon_30mm_CTWS: autocannon_Base_F {
        class HE: autocannon_Base_F {
            class player;
            class close;
            class short;
            class medium;
            class far;
        };
        class AP: autocannon_Base_F {
            class player;
            class close;
            class short;
            class medium;
            class far;
        };
    };
    class RHS_weap_M242BC: autocannon_30mm_CTWS {
        aiDispersioncoefX = 4;
        aiDispersioncoefY = 6;
        airateoffire = 2;
        airateoffiredistance = 1000;
        canlock = 0;
        FCSMaxLeadSpeed = 0;
        class GunParticles {
            class Effect {
                effectName = "AutoCannonFired";
                positionName = "Usti hlavne";
                directionName = "Konec hlavne";
            };
            class Shell {
                positionName = "shell_eject_pos";
                directionName = "shell_eject_dir";
                effectName = "RHS_HeavyGunCartridge1";
            };
        };
        displayName = "25mm M242";
        muzzles[] = {"AP", "HE"};
        class HE: HE {
            displayName = "25mm M242";
            magazines[] = {"rhs_mag_230Rnd_25mm_M242_HEI", "rhs_mag_70Rnd_25mm_M242_APFSDS"};
            magazineWell[] = {"RHS_AutoCannon_25mm_M242_HE", "RHS_AutoCannon_25mm_M242_AP"};
            canlock = 0;
            magazineReloadTime = 0.3;
            modes[] = {
                "single",
                "100rpm",
                "player",
                "close",
                "short",
                "medium",
                "far"
            };
            class player: player {
                reloadTime = 0.3;
                textureType = "fullAuto";
            };
            class 100rpm: player {
                reloadTime = 0.6;
                textureType = "burst";
            };
            class single: player {
                autofire = 0;
                textureType = "semi";
            };
            FCSMaxLeadSpeed = 0;
            minZeroing = 200;
        };
        class AP: AP {
            displayName = "25mm M242 - M919 APFSDS-T";
            magazines[] = {"rhs_mag_70Rnd_25mm_M242_APFSDS"};
            magazineWell[] = {"RHS_AutoCannon_25mm_M242_AP"};
            canlock = 0;
            showToPlayer = 0;
            class player: player {
                showToPlayer = 0;
                reloadTime = 0.3;
            };
            class close: close {
                showToPlayer = 0;
                reloadTime = 0.3;
            };
            class short: short {
                showToPlayer = 0;
                reloadTime = 0.3;
            };
            class medium: medium {
                showToPlayer = 0;
                reloadTime = 0.3;
            };
            class far: far {
                showToPlayer = 0;
                reloadTime = 0.6;
            };
        };
    };
    class RHS_weap_M242BC_manual: RHS_weap_M242BC {
        ballisticsComputer = 2;
        class HE: HE {
            ballisticsComputer = 2;
        };
    };
    class RHS_weap_M119: mortar_155mm_AMOS {
        displayName = "$STR_RHS_DN_M119";
        ballisticscomputer = 2;
        reloadTime = 6;
        magazineReloadTime = 6;
        class GunParticles {
            class Effect1 {
                directionname = "Konec hlavne";
                effectname = "ArtilleryFired1";
                positionname = "Usti hlavne";
            };
        };
        modes[] = {
            "Single1",
            "Single2",
            "Single3",
            "Burst1",
            "Burst2",
            "Burst3"
        };
        magazines[] = {"RHS_mag_m1_he_12", "rhs_mag_m314_ilum_4", "rhs_mag_m60a2_smoke_4"};
    };
    class HMG_127;
    class HMG_01;
    class HMG_M2: HMG_01 {
        class manual;
        class close;
        class short;
        class medium;
        class far;
    };
    class Gatling_30mm_Plane_CAS_01_F: CannonCore {
        class LowROF;
    };
    class RHS_M2_Abrams_Commander: HMG_M2 {
        ballisticsComputer = 2;
        canLock = 0;
        initspeed = 0;
        magazines[] = {
            "rhs_mag_100rnd_127x99_mag",
            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
            "rhs_mag_100rnd_127x99_mag_Tracer_Green",
            "rhs_mag_100rnd_127x99_mag_Tracer_Yellow",
            "rhs_mag_100rnd_127x99_SLAP_mag",
            "rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Red",
            "rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Green",
            "rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Yellow"
        };
        class GunParticles {
            class effect1 {
                positionname = "usti hlavne3";
                directionname = "konec hlavne3";
                effectname = "MachineGunCloud";
            };
            class effect2 {
                positionname = "nabojnicestart";
                directionname = "nabojniceend";
                effectname = "MachineGunEject";
            };
            class effect3 {
                positionname = "nabojnicestart";
                directionname = "nabojniceend";
                effectname = "MachineGunCartridge2";
            };
            class RHSUSF_BarrelRefract {
                positionName = "usti hlavne3";
                directionName = "usti hlavne3";
                effectName = "RHSUSF_BarrelRefractHeavy";
            };
        };
        reloadMagazineSound[] = {
            "a3\Sounds_F\arsenal\weapons_static\Static_HMG\reload_static_HMG",
            1,
            1,
            10
        };
    };
    class RHS_M2_Abrams_Gunner: HMG_M2 {
        displayName = "M2 CSAMM";
        displaynameshort = "M2 CSAMM";
        canLock = 0;
        initspeed = 0;
        magazines[] = {
            "rhs_mag_100rnd_127x99_mag",
            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
            "rhs_mag_100rnd_127x99_mag_Tracer_Green",
            "rhs_mag_100rnd_127x99_mag_Tracer_Yellow",
            "rhs_mag_100rnd_127x99_SLAP_mag",
            "rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Red",
            "rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Green",
            "rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Yellow",
            "rhs_mag_200rnd_127x99_mag",
            "rhs_mag_200rnd_127x99_mag_Tracer_Red",
            "rhs_mag_200rnd_127x99_SLAP_mag",
            "rhs_mag_200rnd_127x99_SLAP_mag_Tracer_Red"
        };
        class GunParticles {
            class effect1 {
                positionname = "usti hlavne4";
                directionname = "konec hlavne4";
                effectname = "MachineGunCloud";
            };
            class effect2 {
                positionname = "nabojnicestart2";
                directionname = "nabojniceend2";
                effectname = "MachineGunEject";
            };
            class effect3 {
                positionname = "nabojnicestart2";
                directionname = "nabojniceend2";
                effectname = "MachineGunCartridge2";
            };
            class RHSUSF_BarrelRefract {
                positionName = "usti hlavne4";
                directionName = "usti hlavne4";
                effectName = "RHSUSF_BarrelRefractHeavy";
            };
        };
        reloadMagazineSound[] = {
            "a3\Sounds_F\arsenal\weapons_static\Static_HMG\reload_static_HMG",
            1,
            1,
            10
        };
    };
    class RHS_M2: HMG_M2 {
        type = 1;
        ballisticsComputer = 2;
        canLock = 0;
        initspeed = 0;
        cursor = "EmptyCursor";
        cursoraimon = "EmptyCursor";
        magazines[] = {
            "rhs_mag_100rnd_127x99_mag",
            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
            "rhs_mag_100rnd_127x99_mag_Tracer_Green",
            "rhs_mag_100rnd_127x99_mag_Tracer_Yellow",
            "rhs_mag_100rnd_127x99_SLAP_mag",
            "rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Red",
            "rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Green",
            "rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Yellow",
            "rhs_mag_200rnd_127x99_mag",
            "rhs_mag_200rnd_127x99_mag_Tracer_Red",
            "rhs_mag_200rnd_127x99_SLAP_mag",
            "rhs_mag_200rnd_127x99_SLAP_mag_Tracer_Red"
        };
        class GunParticles {
            class effect1 {
                positionname = "usti hlavne";
                directionname = "konec hlavne";
                effectname = "MachineGunCloud";
            };
            class effect2 {
                positionname = "nabojnicestart";
                directionname = "nabojniceend";
                effectname = "MachineGunEject";
            };
            class effect3 {
                positionname = "nabojnicestart2";
                directionname = "nabojniceend2";
                effectname = "MachineGunCartridge2";
            };
            class RHSUSF_BarrelRefract {
                positionName = "usti hlavne";
                directionName = "usti hlavne";
                effectName = "RHSUSF_BarrelRefractHeavy";
            };
        };
        class manual: manual {};
        class close: close {};
        class short: short {};
        class medium: medium {};
        class far: far {};
        reloadMagazineSound[] = {
            "a3\Sounds_F\arsenal\weapons_static\Static_HMG\reload_static_HMG",
            1,
            1,
            10
        };
    };
    class RHS_M2_offroad: RHS_M2 {
        aiDispersionCoefX = 7;
        aiDispersionCoefY = 9;
        class GunParticles: GunParticles {
            class effect3 {
                positionName = "nabojnicestart";
                directionName = "nabojniceend";
                effectName = "MachineGunCartridge2";
            };
        };
    };
    class RHS_M2_M1117: RHS_M2 {
        class GunParticles {
            class effect1 {
                positionname = "kulas";
                directionname = "ZaslehKulas";
                effectname = "MachineGunCloud";
            };
            class RHSUSF_BarrelRefract: effect1 {
                effectName = "RHSUSF_BarrelRefractHeavy";
            };
        };
    };
    class RHS_MKV_M2_p: RHS_M2 {
        aiDispersionCoefX = 7;
        aiDispersionCoefY = 9;
        class GunParticles {
            class effect1 {
                positionName = "m2_p_muzzle";
                directionName = "m2_p_endBarrel";
                effectName = "MachineGunCloud";
            };
            class effect2 {
                positionName = "m2_p_caseStart";
                directionName = "m2_p_caseEnd";
                effectName = "MachineGunEject";
            };
            class effect3 {
                positionName = "m2_p_caseStart";
                directionName = "m2_p_caseEnd";
                effectName = "MachineGunCartridge2";
            };
        };
        scope = 1;
        selectionfireanim = "m2_p_flash";
        displayName = "Port M2";
    };
    class RHS_MKV_M2_s: RHS_MKV_M2_p {
        displayName = "Stbd M2";
        class GunParticles {
            class effect1 {
                positionName = "m2_s_muzzle";
                directionName = "m2_s_endBarrel";
                effectName = "MachineGunCloud";
            };
            class effect2 {
                positionName = "m2_s_caseStart";
                directionName = "m2_s_caseEnd";
                effectName = "MachineGunEject";
            };
            class effect3 {
                positionName = "m2_s_caseStart";
                directionName = "m2_s_caseEnd";
                effectName = "MachineGunCartridge2";
            };
        };
        selectionfireanim = "m2_s_flash";
    };
    class RHS_M2_CROWS_M151: RHS_M2 {
        magazineReloadTime = 25;
        ballisticsComputer = "2 + 16";
        magazines[] = {
            "rhs_mag_100rnd_127x99_mag",
            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
            "rhs_mag_100rnd_127x99_mag_Tracer_Green",
            "rhs_mag_100rnd_127x99_mag_Tracer_Yellow",
            "rhs_mag_100rnd_127x99_SLAP_mag",
            "rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Red",
            "rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Green",
            "rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Yellow",
            "rhs_mag_200rnd_127x99_mag",
            "rhs_mag_200rnd_127x99_mag_Tracer_Red",
            "rhs_mag_200rnd_127x99_SLAP_mag",
            "rhs_mag_200rnd_127x99_SLAP_mag_Tracer_Red",
            "rhs_mag_400rnd_127x99_mag",
            "rhs_mag_400rnd_127x99_mag_Tracer_Red",
            "rhs_mag_400rnd_127x99_SLAP_mag",
            "rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red"
        };
    };
    class RHS_M2_CROWS_M153: RHS_M2_CROWS_M151 {};
    class RHS_M2_CROWS_M153_Abrams: RHS_M2_CROWS_M153 {
        class GunParticles {
            class effect1 {
                positionname = "CROWS usti";
                directionname = "CROWS konec";
                effectname = "MachineGunCloud";
            };
            class effect2 {
                positionname = "nabojnicestart2";
                directionname = "nabojniceend2";
                effectname = "MachineGunEject";
            };
            class effect3 {
                positionname = "nabojnicestart2";
                directionname = "nabojniceend2";
                effectname = "MachineGunCartridge2";
            };
            class RHSUSF_BarrelRefract {
                positionName = "CROWS usti";
                directionName = "CROWS usti";
                effectName = "RHSUSF_BarrelRefractHeavy";
            };
        };
    };
    class rhs_weap_gau21_1: RHS_M2 {
        aiDispersionCoefX = 7;
        aiDispersionCoefY = 9;
        displayName = "GAU-21";
        magazines[] = {
            "rhs_mag_100rnd_127x99_mag",
            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
            "rhs_mag_100rnd_127x99_mag_Tracer_Green",
            "rhs_mag_100rnd_127x99_mag_Tracer_Yellow",
            "rhs_mag_100rnd_127x99_SLAP_mag",
            "rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Red",
            "rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Green",
            "rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Yellow",
            "rhs_mag_200rnd_127x99_mag",
            "rhs_mag_200rnd_127x99_mag_Tracer_Red",
            "rhs_mag_200rnd_127x99_SLAP_mag",
            "rhs_mag_200rnd_127x99_SLAP_mag_Tracer_Red",
            "rhs_mag_300rnd_127x99_mag",
            "rhs_mag_300rnd_127x99_mag_Tracer_Red",
            "rhs_mag_300rnd_127x99_SLAP_mag",
            "rhs_mag_300rnd_127x99_SLAP_mag_Tracer_Red"
        };
        class GunParticles {
            class effect1 {
                positionname = "muzzle_1";
                directionname = "chamber_1";
                effectname = "MachineGunCloud";
            };
            class effect2 {
                positionname = "link_pos1";
                directionname = "link_dir1";
                effectname = "MachineGunEject";
            };
            class effect3 {
                positionname = "cart_pos1";
                directionname = "cart_dir1";
                effectname = "MachineGunCartridge2";
            };
            class RHSUSF_BarrelRefract {
                positionName = "muzzle_1";
                directionName = "muzzle_1";
                effectName = "RHSUSF_BarrelRefractHeavy";
            };
        };
        class manual: manual {
            reloadTime = 0.0585;
        };
        class close: close {
            reloadTime = 0.0585;
        };
        class short: short {
            reloadTime = 0.0585;
        };
        class medium: medium {
            reloadTime = 0.0585;
        };
        class far: far {
            reloadTime = 0.0585;
        };
    };
    class rhs_weap_M3W_A29: rhs_weap_gau21_1 {
        displayName = "2xM3 HMG";
        selectionFireAnim[] = {"zasleh"};
        cursorAim = "EmptyCursor";
        class manual: manual {
            reloadTime = 0.0273;
        };
        class close: close {
            reloadTime = 0.0273;
            burst = 4;
            burstRangeMax = 19;
            aiBurstTerminable = 1;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 200;
            aiRateOfFireDispersion = 1;
            minRange = 0;
            minRangeProbab = 0.2;
            midRange = 120;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.1;
        };
        class short: short {
            reloadTime = 0.0273;
            burst = 14;
            burstRangeMax = 10;
            aiBurstTerminable = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 350;
            aiRateOfFireDispersion = 2;
            minRange = 120;
            minRangeProbab = 0.2;
            midRange = 320;
            midRangeProbab = 0.7;
            maxRange = 450;
            maxRangeProbab = 0.1;
        };
        class medium: medium {
            reloadTime = 0.0273;
            burst = 9;
            burstRangeMax = 9;
            aiBurstTerminable = 1;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 500;
            aiRateOfFireDispersion = 2;
            minRange = 400;
            minRangeProbab = 0.2;
            midRange = 520;
            midRangeProbab = 0.7;
            maxRange = 750;
            maxRangeProbab = 0.1;
        };
        class far: far {
            reloadTime = 0.0273;
            burst = 7;
            burstRangeMax = 10;
            aiBurstTerminable = 1;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 950;
            aiRateOfFireDispersion = 2;
            minRange = 700;
            minRangeProbab = 0.2;
            midRange = 920;
            midRangeProbab = 0.7;
            maxRange = 1350;
            maxRangeProbab = 0.1;
        };
        magazines[] = {
            "rhs_mag_100rnd_127x99_mag",
            "rhs_mag_100rnd_127x99_mag_Tracer_Red",
            "rhs_mag_100rnd_127x99_mag_Tracer_Green",
            "rhs_mag_100rnd_127x99_mag_Tracer_Yellow",
            "rhs_mag_100rnd_127x99_SLAP_mag",
            "rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Red",
            "rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Green",
            "rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Yellow",
            "rhs_mag_200rnd_127x99_mag",
            "rhs_mag_200rnd_127x99_mag_Tracer_Red",
            "rhs_mag_200rnd_127x99_SLAP_mag",
            "rhs_mag_200rnd_127x99_SLAP_mag_Tracer_Red",
            "rhs_mag_300rnd_127x99_mag",
            "rhs_mag_300rnd_127x99_mag_Tracer_Red",
            "rhs_mag_300rnd_127x99_SLAP_mag",
            "rhs_mag_300rnd_127x99_SLAP_mag_Tracer_Red",
            "rhs_mag_400rnd_127x99_mag",
            "rhs_mag_400rnd_127x99_mag_Tracer_Red",
            "rhs_mag_400rnd_127x99_SLAP_mag",
            "rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red",
            "rhs_mag_400rnd_127x99_mag_AI",
            "rhs_mag_400rnd_127x99_mag_Tracer_Red_AI",
            "rhs_mag_400rnd_127x99_SLAP_mag_AI",
            "rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red_AI",
            "rhs_mag_400rnd_127x99_mag_Plane",
            "rhs_mag_400rnd_127x99_mag_Tracer_Red_Plane",
            "rhs_mag_400rnd_127x99_SLAP_mag_Plane",
            "rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red_Plane"
        };
        class GunParticles {
            class effect1 {
                positionName = "usti hlavne 1";
                directionName = "konec hlavne 1";
                effectName = "MachineGunCloud";
            };
            class effect2 {
                positionName = "MGCasingL";
                directionName = "MGCasingDirL";
                effectName = "MachineGunCartridge1";
            };
            class effect3: effect1 {
                positionName = "usti hlavne 2";
                directionName = "konec hlavne 2";
            };
            class effect4: effect2 {
                positionName = "MGCasingR";
                directionName = "MGCasingDirR";
            };
        };
    };
    class LMG_RCWS;
    class LMG_M200: LMG_RCWS {
        class manual;
        class close;
        class short;
        class medium;
        class far;
    };
    class rhs_weap_m240veh: LMG_M200 {
        type = 1;
        ballisticsComputer = 2;
        canLock = 0;
        initspeed = 0;
        cursor = "EmptyCursor";
        cursoraim = "EmptyCursor";
        cursoraimon = "EmptyCursor";
        scope = 1;
        aidispersioncoefx = 8.4;
        aidispersioncoefy = 9.6;
        displayName = "M240";
        displaynameshort = "M240";
        class manual: manual {
            reloadTime = 0.0631;
        };
        class close: close {
            reloadTime = 0.0631;
        };
        class short: short {
            reloadTime = 0.0631;
        };
        class medium: medium {
            reloadTime = 0.0631;
        };
        class far: far {
            reloadTime = 0.0631;
        };
        magazines[] = {
            "rhs_mag_1100Rnd_762x51_M240",
            "rhs_mag_762x51_M240_1200",
            "rhs_mag_762x51_M240_200",
            "rhs_mag_762x51_M240_200_M80"
        };
        magazineReloadTime = 12;
        class GunParticles {
            class effect1 {
                directionname = "kulas";
                positionname = "kulas start";
                effectname = "MachineGunCloud";
            };
        };
    };
    class rhs_weap_m240veh_mounted: rhs_weap_m240veh {
        magazinereloadtime = 7;
    };
    class rhs_weap_m240_abrams: rhs_weap_m240veh {
        class GunParticles {
            class effect1 {
                positionname = "usti hlavne5";
                directionname = "konec hlavne5";
                effectname = "MachineGunCloud";
            };
            class RHSUSF_BarrelRefract {
                positionname = "usti hlavne5";
                directionname = "konec hlavne5";
                effectName = "RHSUSF_BarrelRefractHeavy";
            };
        };
    };
    class rhs_weap_m240_m113: rhs_weap_m240veh_mounted {
        reloadMagazineSound[] = {
            "rhsusf\addons\rhsusf_sounds\m240\reload",
            1.3,
            1,
            30
        };
        cursorAim = "mg";
        displayName = "M240B";
        displaynameshort = "M240B";
        class manual: manual {
            reloadTime = 0.075;
        };
        class close: close {
            reloadTime = 0.075;
        };
        class short: short {
            reloadTime = 0.075;
        };
        class medium: medium {
            reloadTime = 0.075;
        };
        class far: far {
            reloadTime = 0.075;
        };
        class GunParticles {
            class M240_AmmoBeltLinkEject {
                positionName = "ammobeltlinks_start";
                directionName = "ammobeltlinks_end";
                effectName = "MachineGunEject2";
            };
            class M240_AmmoBeltCaseEject {
                positionName = "shelleject_start";
                directionName = "shelleject_end";
                effectName = "RHSUSF_762Cartridge";
            };
            class M240_WhiteGas {
                positionName = "usti hlavne";
                directionName = "konec hlavne";
                effectName = "RifleAssaultCloud";
            };
            class M240_RHSUSF_BarrelRefract {
                positionName = "usti hlavne";
                directionName = "usti hlavne up";
                effectName = "RHSUSF_BarrelRefractHeavy";
            };
        };
    };
    class rhs_weap_m240_m1134: rhs_weap_m240_m113 {
        class GunParticles {
            class M240_AmmoBeltLinkEject {
                positionName = "ammobeltlinks_start";
                directionName = "ammobeltlinks_end";
                effectName = "MachineGunEject2";
            };
            class M240_AmmoBeltCaseEject {
                positionName = "shelleject_start";
                directionName = "shelleject_end";
                effectName = "RHSUSF_762Cartridge";
            };
            class M240_WhiteGas {
                positionName = "Weapon_Gun_Beg";
                directionName = "Weapon_Gun_End";
                effectName = "RifleAssaultCloud";
            };
            class M240_RHSUSF_BarrelRefract {
                positionName = "Weapon_Gun_Beg";
                directionName = "Weapon_Gun_Beg_Up";
                effectName = "RHSUSF_BarrelRefractHeavy";
            };
        };
    };
    class rhs_weap_m240_gmv_r: rhs_weap_m240veh_mounted {
        cursorAim = "mg";
        displayName = "M240B";
        displaynameshort = "M240B";
        class manual: manual {
            reloadTime = 0.075;
        };
        class close: close {
            reloadTime = 0.075;
        };
        class short: short {
            reloadTime = 0.075;
        };
        class medium: medium {
            reloadTime = 0.075;
        };
        class far: far {
            reloadTime = 0.075;
        };
        class GunParticles {
            class M240_AmmoBeltLinkEject {
                positionName = "swingarm_r_ammobeltlinks_start";
                directionName = "swingarm_r_ammobeltlinks_end";
                effectName = "MachineGunEject2";
            };
            class M240_AmmoBeltCaseEject {
                positionName = "swingarm_r_shelleject_start";
                directionName = "swingarm_r_shelleject_end";
                effectName = "RHSUSF_762Cartridge";
            };
            class M240_WhiteGas {
                positionName = "swingarm_r_usti";
                directionName = "swingarm_r_konec";
                effectName = "RifleAssaultCloud";
            };
            class M240_RHSUSF_BarrelRefract {
                positionName = "swingarm_r_usti";
                directionName = "swingarm_r_usti_up";
                effectName = "RHSUSF_BarrelRefractHeavy";
            };
        };
    };
    class rhs_weap_m240_gmv_l: rhs_weap_m240_gmv_r {
        class GunParticles {
            class M240_AmmoBeltLinkEject {
                positionName = "swingarm_l_ammobeltlinks_start";
                directionName = "swingarm_l_ammobeltlinks_end";
                effectName = "MachineGunEject2";
            };
            class M240_AmmoBeltCaseEject {
                positionName = "swingarm_l_shelleject_start";
                directionName = "swingarm_l_shelleject_end";
                effectName = "RHSUSF_762Cartridge";
            };
            class M240_WhiteGas {
                positionName = "swingarm_l_usti";
                directionName = "swingarm_l_konec";
                effectName = "RifleAssaultCloud";
            };
            class M240_RHSUSF_BarrelRefract {
                positionName = "swingarm_l_usti";
                directionName = "swingarm_l_usti_up";
                effectName = "RHSUSF_BarrelRefractHeavy";
            };
        };
    };
    class rhs_weap_m240_abrams_coax: rhs_weap_m240veh {
        class GunParticles {
            class effect1 {
                positionname = "usti hlavne2";
                directionname = "konec hlavne2";
                effectname = "MachineGunCloud";
            };
        };
    };
    class rhs_weap_m240_bradley_coax: rhs_weap_m240veh {
        displayName = "M240C";
        displaynameshort = "M240C";
        ballisticsComputer = "2 + 16";
        minZeroing = 200;
    };
    class rhs_weap_m240H: rhs_weap_m240veh_mounted {
        displayName = "M240H";
        displaynameshort = "M240H";
        cursor = "EmptyCursor";
        cursoraim = "mg";
        cursoraimon = "EmptyCursor";
        class manual: manual {
            displayName = "M240H";
        };
    };
    class rhs_weap_m240H_1: rhs_weap_m240H {
        class GunParticles {
            class FirstEffect {
                effectName = "MachineGun1";
                positionName = "muzzle_1";
                directionName = "chamber_1";
            };
            class effect1 {
                positionName = "shelleject_1_start";
                directionName = "shelleject_1_end";
                effectName = "RHSUSF_762Cartridge";
            };
            class RHSUSF_BarrelRefract {
                positionName = "muzzle_1";
                directionName = "muzzle_1";
                effectName = "RHSUSF_BarrelRefractHeavy";
            };
        };
    };
    class rhs_weap_m240H_2: rhs_weap_m240H_1 {
        class GunParticles {
            class SecondEffect {
                effectName = "MachineGun1";
                positionName = "muzzle_2";
                directionName = "chamber_2";
            };
            class effect2 {
                positionName = "shelleject_2_start";
                directionName = "shelleject_2_end";
                effectName = "RHSUSF_762Cartridge";
            };
            class RHSUSF_BarrelRefract {
                positionName = "muzzle_2";
                directionName = "muzzle_2";
                effectName = "RHSUSF_BarrelRefractHeavy";
            };
        };
    };
    class MGunCore;
    class M134_minigun: MGunCore {
        class LowROF;
    };
    class rhs_weap_m134_minigun_1: M134_minigun {
        displayName = "M134 Minigun 7.62mm";
        magazines[] = {"rhs_mag_762x51_m80a1_4000"};
        class GunParticles {
            class FirstEffect {
                effectName = "MachineGun1";
                positionName = "muzzle_1";
                directionName = "chamber_1";
            };
            class effect1 {
                positionName = "machinegun_eject_pos";
                directionName = "machinegun_eject_dir";
                effectName = "MachineGunCartridge";
            };
            class RHSUSF_BarrelRefract {
                positionName = "muzzle_1";
                directionName = "muzzle_1";
                effectName = "RHSUSF_BarrelRefractHeavy";
            };
        };
    };
    class rhs_weap_m134_minigun_2: rhs_weap_m134_minigun_1 {
        class GunParticles {
            class SecondEffect {
                effectName = "MachineGun1";
                positionName = "muzzle_2";
                directionName = "chamber_2";
            };
            class effect2 {
                positionName = "machinegun_eject_2_pos";
                directionName = "machinegun_eject_2_dir";
                effectName = "MachineGunCartridge";
            };
            class RHSUSF_BarrelRefract {
                positionName = "muzzle_2";
                directionName = "muzzle_2";
                effectName = "RHSUSF_BarrelRefractHeavy";
            };
        };
    };
    class rhs_weap_m134_mounted: M134_minigun {
        displayName = "M134D Minigun 7.62mm";
        magazines[] = {"rhs_mag_762x51_m80a1_4000"};
        class GunParticles {
            class FirstEffect {
                effectName = "MachineGun1";
                positionName = "usti hlavne";
                directionName = "konec hlavne";
            };
            class effect1 {
                positionName = "machinegun_eject_pos";
                directionName = "machinegun_eject_dir";
                effectName = "RHSUSF_762Cartridge";
            };
            class RHSUSF_BarrelRefract {
                positionName = "usti hlavne";
                directionName = "usti hlavne";
                effectName = "RHSUSF_BarrelRefractHeavy";
            };
        };
    };
    class RHS_MKV_M134: rhs_weap_m134_minigun_1 {
        magazines[] = {"2000Rnd_762x51_Belt_T_Red"};
        displayName = "Port M134";
        class gunParticles {
            class effect1 {
                positionName = "m134_p_caseStart";
                directionName = "m134_p_caseEnd";
                effectName = "MachineGunCartridge1";
            };
            class effect2 {
                positionName = "m134_p_beginBarrel";
                directionName = "m134_p_endBarrel";
                effectName = "MachineGun1";
            };
        };
    };
    class RHS_weap_m134_pylon: rhs_weap_m134_minigun_1 {
        scope = 1;
        displayname = "M134D-H";
        cursor = "EmptyCursor";
        cursorAim = "EmptyCursor";
        magazines[] = {"rhs_mag_m134_pylon_3000"};
        canLock = 0;
        modes[] = {
            "LowROF",
            "HighROF",
            "close",
            "short",
            "medium",
            "far"
        };
        weight = 40;
        class GunParticles {
            class FirstEffect {
                effectName = "MachineGun1";
                positionName = "z_gunR_muzzle";
                directionName = "z_gunR_chamber";
            };
            class SecondEffect {
                effectName = "MachineGun1";
                positionName = "z_gunL_muzzle";
                directionName = "z_gunL_chamber";
            };
            class effect1 {
                positionName = "machinegun_eject_pos";
                directionName = "machinegun_eject_dir";
                effectName = "MachineGunCartridge";
            };
            class effect2 {
                positionName = "machinegun_eject_2_pos";
                directionName = "machinegun_eject_2_dir";
                effectName = "MachineGunCartridge";
            };
            class effect3 {
                positionName = "machinegun_eject_pos";
                directionName = "machinegun_eject_dir";
                effectName = "MachineGunEject";
            };
            class effect4 {
                positionName = "machinegun_eject_2_pos";
                directionName = "machinegun_eject_2_dir";
                effectName = "MachineGunEject";
            };
        };
        class LowROF: LowROF {
            displayName = "LO";
            textureType = "burst";
            soundContinuous = 1;
            flash = "gunfire";
            flashSize = 0.1;
            recoil = "Empty";
            aiDispersionCoefX = 3;
            aiDispersionCoefY = 3;
            reloadTime = 0.03;
            dispersion = 0.0055;
            minRange = 1;
            minRangeProbab = 0.06;
            midRange = 2;
            midRangeProbab = 0.06;
            maxRange = 3;
            maxRangeProbab = 0.004;
            showToPlayer = 1;
            multiplier = 1;
        };
        class HighROF: LowROF {
            displayName = "HI";
            textureType = "fullAuto";
            minRangeProbab = 0.08;
            midRangeProbab = 0.058;
            reloadTime = 0.015;
        };
        class close: HighROF {
            showToPlayer = 0;
            soundBurst = 0;
            burst = 15;
            aiRateOfFire = 0.3;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.7;
            midRange = 500;
            midRangeProbab = 0.95;
            maxRange = 1000;
            maxRangeProbab = 0.95;
        };
        class short: close {
            burst = 25;
            burstRangeMax = 45;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 300;
            minRange = 500;
            minRangeProbab = 0.95;
            midRange = 1000;
            midRangeProbab = 0.9;
            maxRange = 1500;
            maxRangeProbab = 0.85;
        };
        class medium: LowROF {
            showToPlayer = 0;
            soundBurst = 0;
            burst = 33;
            burstRangeMax = 66;
            aiRateOfFire = 0.7;
            aiRateOfFireDistance = 600;
            minRange = 1000;
            minRangeProbab = 0.9;
            midRange = 1500;
            midRangeProbab = 0.85;
            maxRange = 2000;
            maxRangeProbab = 0.7;
        };
        class far: medium {
            burst = 15;
            burstRangeMax = 35;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 1000;
            minRange = 1500;
            minRangeProbab = 0.85;
            midRange = 2500;
            midRangeProbab = 0.65;
            maxRange = 3000;
            maxRangeProbab = 0.6;
        };
    };
    class gatling_30mm;
    class rhs_weap_M197: gatling_30mm {
        aiDispersionCoefX = 2;
        scope = 1;
        cursor = "mg";
        cursorAim = "EmptyCursor";
        cursorSize = 0;
        muzzles[] = {"this"};
        class GunParticles {
            class Effect {
                effectName = "MachineGun2";
                positionName = "machinegun";
                directionName = "machinegun_end";
            };
        };
        displayName = "M197";
        ballisticsComputer = 16;
        autoFire = 1;
        nameSound = "cannon";
        magazines[] = {"rhs_mag_M197_750"};
        canLock = 2;
        modes[] = {"manual", "close", "short", "medium", "far"};
        class manual: Mode_FullAuto {
            displayName = "M197";
            autoFire = 1;
            sounds[] = {"StandardSound"};
            class StandardSound {
                weaponSoundEffect = "DefaultRifle";
                begin1[] = {
                    "\rhsusf\addons\rhsusf_a2port_air\data\sounds\a10vulcanVII",
                    3.1622777,
                    1,
                    1100
                };
                soundBegin[] = {"begin1", 1};
            };
            reloadTime = 0.06;
            dispersion = 0.0085;
            showToPlayer = 1;
            burst = 1;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 1;
            minRangeProbab = 0.01;
            midRange = 2;
            midRangeProbab = 0.01;
            maxRange = 3;
            maxRangeProbab = 0.01;
        };
        class close: manual {
            showToPlayer = 0;
            soundBurst = 0;
            burst = 8;
            burstRangeMax = 16;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.35;
            midRange = 200;
            midRangeProbab = 0.88;
            maxRange = 500;
            maxRangeProbab = 0.34;
        };
        class short: close {
            burst = 6;
            burstRangeMax = 12;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 300;
            minRangeProbab = 0.35;
            midRange = 600;
            midRangeProbab = 0.88;
            maxRange = 800;
            maxRangeProbab = 0.34;
        };
        class medium: close {
            burst = 4;
            burstRangeMax = 8;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 600;
            minRange = 700;
            minRangeProbab = 0.05;
            midRange = 900;
            midRangeProbab = 0.58;
            maxRange = 1000;
            maxRangeProbab = 0.04;
        };
        class far: close {
            burst = 4;
            burstRangeMax = 9;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 1000;
            minRange = 1000;
            minRangeProbab = 0.05;
            midRange = 1200;
            midRangeProbab = 0.4;
            maxRange = 1400;
            maxRangeProbab = 0.01;
        };
    };
    class rhs_weap_M301: rhs_weap_M197 {
        displayName = "M301";
        modes[] = {
            "manual",
            "HighROF",
            "close",
            "short",
            "medium",
            "far"
        };
        magazines[] = {"rhs_mag_M301_500"};
        class manual: manual {
            displayName = "M301(LO)";
            reloadTime = 0.08;
        };
        class HighROF: manual {
            displayName = "M301(HI)";
            reloadTime = 0.04;
            dispersion = 0.0095;
            textureType = "fastAuto";
        };
    };
    class rhs_weap_M230: rhs_weap_M197 {
        displayName = "M230";
        magazines[] = {"rhs_mag_30x113mm_M789_HEDP_1200", "rhs_mag_30x113mm_M789_HEDP_laser_1200"};
        shotFromTurret = 0;
        aiDispersionCoefX = 2;
        modes[] = {
            "manual",
            "burst_20",
            "burst_50",
            "burst_100",
            "burst_all",
            "close",
            "short",
            "medium",
            "far"
        };
        class manual: Mode_FullAuto {
            displayName = "BURST: 10";
            rhs_burstLimiter = 10;
            sounds[] = {"StandardSound"};
            autoFire = 1;
            reloadTime = 0.096;
            dispersion = 0.0075;
            soundContinuous = 0;
            showToPlayer = 1;
            burst = 1;
            multiplier = 1;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 1;
            minRangeProbab = 0.001;
            midRange = 2;
            midRangeProbab = 0.001;
            maxRange = 3;
            maxRangeProbab = 0.001;
        };
        class burst_20: manual {
            displayName = "BURST: 20";
            rhs_burstLimiter = 20;
        };
        class burst_50: manual {
            displayName = "BURST: 50";
            rhs_burstLimiter = 50;
        };
        class burst_100: manual {
            displayName = "BURST: 100";
            rhs_burstLimiter = 100;
        };
        class burst_all: manual {
            displayName = "BURST: ALL";
            rhs_burstLimiter = 1200;
        };
        class close: manual {
            showToPlayer = 0;
            soundBurst = 0;
            burst = 10;
            burstRangeMax = 20;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 400;
            minRange = 0;
            minRangeProbab = 0.35;
            midRange = 200;
            midRangeProbab = 0.88;
            maxRange = 400;
            maxRangeProbab = 0.3;
        };
        class short: close {
            burst = 8;
            burstRangeMax = 16;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 600;
            minRange = 200;
            midRange = 500;
            maxRange = 800;
        };
        class medium: close {
            burst = 6;
            burstRangeMax = 12;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 800;
            minRange = 600;
            minRangeProbab = 0.35;
            midRange = 800;
            midRangeProbab = 0.78;
            maxRange = 1000;
            maxRangeProbab = 0.3;
        };
        class far: close {
            burst = 3;
            burstRangeMax = 7;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 1000;
            minRange = 800;
            minRangeProbab = 0.2;
            midRange = 1000;
            midRangeProbab = 0.6;
            maxRange = 1500;
            maxRangeProbab = 0.1;
        };
        class EventHandlers {
            class RHS_EventHandlers {
                fired = "_this call rhs_fnc_burstLimiterShots";
            };
        };
    };
    class RHS_weap_gau8: Gatling_30mm_Plane_CAS_01_F {
        displayName = "GAU-8";
        cursorSize = 0;
        cursor = "mg";
        cursorAim = "EmptyCursor";
        initspeed = 0;
        magazines[] = {
            "rhs_mag_1150Rnd_30x173",
            "rhs_mag_1150Rnd_30x173_mixed",
            "rhs_mag_1000Rnd_30x173",
            "rhs_mag_1000Rnd_30x173_mixed"
        };
        modes[] = {
            "LowROF",
            "HighROF",
            "close",
            "short",
            "medium",
            "far"
        };
        class LowROF: LowROF {
            class StandardSound;
            displayName = "LO";
            textureType = "burst";
            reloadTime = 0.03;
        };
        class HighROF: LowROF {
            class StandardSound: StandardSound {
                begin1[] = {
                    "A3\Sounds_F\arsenal\weapons_vehicles\gatling_30mm\30mm_01_burst",
                    5.62341,
                    1,
                    1500,
                    {12852, 16079.5}
                };
                soundBegin[] = {"begin1", 1};
            };
            displayName = "HI";
            textureType = "fullAuto";
            reloadtime = 0.015;
        };
    };
    class RHS_weap_gau19: HMG_127 {
        scope = 1;
        displayName = "GAU-19/A";
        cursor = "EmptyCursor";
        cursorAim = "EmptyCursor";
        magazines[] = {"rhsusf_mag_gau19_melb_right", "rhsusf_mag_gau19_melb_left"};
        canLock = 0;
        modes[] = {
            "LowROF",
            "HighROF",
            "close",
            "short",
            "medium",
            "far"
        };
        weight = 60;
        class GunParticles {
            class effect1 {
                effectName = "MachineGunCloud";
                positionName = "z_gauL_muzzle";
                directionName = "z_gauL_chamber";
            };
            class effect2 {
                positionName = "gauL_eject_pos";
                directionName = "gauL_eject_dir";
                effectName = "MachineGunEject";
            };
            class effect3 {
                positionName = "gauL_eject_pos";
                directionName = "gauL_eject_dir";
                effectName = "MachineGunCartridge1";
            };
        };
        class LowROF: Mode_FullAuto {
            displayName = "GAU/LO";
            textureType = "burst";
            sounds[] = {"StandardSound"};
            class StandardSound {
                begin1[] = {
                    "rhsusf\addons\rhsusf_melb\Sound\Gau19\Gau19_1",
                    2.5,
                    1,
                    2600
                };
                begin2[] = {
                    "rhsusf\addons\rhsusf_melb\Sound\Gau19\Gau19_2",
                    2.5,
                    1,
                    2600
                };
                begin3[] = {
                    "rhsusf\addons\rhsusf_melb\Sound\Gau19\Gau19_3",
                    2.5,
                    1,
                    2600
                };
                soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
                closure1[] = {
                    "A3\sounds_f\weapons\gatling\gatling_rotation_short_2",
                    0.31622776,
                    1,
                    20
                };
                closure2[] = {
                    "A3\sounds_f\weapons\gatling\gatling_rotation_short_3",
                    0.31622776,
                    1,
                    20
                };
                soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
            };
            soundContinuous = 0;
            soundBurst = 0;
            flash = "gunfire";
            flashSize = 0.1;
            recoil = "Empty";
            reloadTime = 0.06;
            dispersion = 0.005;
            minRange = 1;
            minRangeProbab = 0.06;
            midRange = 2;
            midRangeProbab = 0.06;
            maxRange = 3;
            maxRangeProbab = 0.004;
            showToPlayer = 1;
            multiplier = 1;
        };
        class HighROF: LowROF {
            displayName = "GAU/HI";
            textureType = "fullAuto";
            minRangeProbab = 0.08;
            midRangeProbab = 0.058;
            reloadTime = 0.03;
        };
        class close: LowROF {
            showToPlayer = 0;
            burst = 15;
            burstRangeMax = 25;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 100;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 500;
            midRangeProbab = 0.7;
            maxRange = 1000;
            maxRangeProbab = 0.1;
        };
        class short: close {
            burst = 21;
            burstRangeMax = 31;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 200;
            minRange = 500;
            minRangeProbab = 0.05;
            midRange = 1000;
            midRangeProbab = 0.7;
            maxRange = 1500;
            maxRangeProbab = 0.1;
        };
        class medium: close {
            showToPlayer = 0;
            soundBurst = 0;
            burst = 10;
            burstRangeMax = 20;
            aiRateOfFire = 1.5;
            aiRateOfFireDistance = 600;
            minRange = 1000;
            minRangeProbab = 0.05;
            midRange = 1500;
            midRangeProbab = 0.58;
            maxRange = 2000;
            maxRangeProbab = 0.04;
        };
        class far: close {
            burst = 10;
            burstRangeMax = 20;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 100;
            minRange = 1500;
            minRangeProbab = 0.05;
            midRange = 2500;
            midRangeProbab = 0.4;
            maxRange = 3000;
            maxRangeProbab = 0.01;
        };
    };
    class GMG_F;
    class GMG_20mm;
    class RHS_MK19: GMG_20mm {
        type = 1;
        scope = 1;
        ballisticsComputer = 2;
        class GunParticles {
            class effect1 {
                positionName = "usti hlavne";
                directionName = "konec hlavne";
                effectName = "GrenadeLauncherCloud";
            };
        };
        autoreload = 1;
        canlock = 0;
        initspeed = 0;
        maxZeroing = 1500;
        dispersion = 0.006;
        aiDispersionCoefY = 6;
        aiDispersionCoefX = 5;
        reloadtime = 0.4;
        magazinereloadtime = 6;
        class manual: GMG_F {
            displayname = "Mk. 19 Grenade Launcher";
            sounds[] = {"StandardSound"};
            soundBurst = 0;
            aiBurstTerminable = 1;
            minRange = 1;
            minRangeProbab = 0.01;
            midRange = 2;
            midRangeProbab = 0.01;
            maxRange = 3;
            maxRangeProbab = 0.01;
            reloadtime = 0.15;
        };
        class close: manual {
            burst = 5;
            burstRangeMax = 8;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 50;
            minRange = 8;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class short: close {
            burst = 4;
            burstRangeMax = 8;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.1;
        };
        class medium: close {
            burst = 2;
            burstRangeMax = 6;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.1;
        };
        class far: close {
            burst = 2;
            burstRangeMax = 6;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 1000;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 750;
            midRangeProbab = 0.4;
            maxRange = 1000;
            maxRangeProbab = 0.01;
        };
        displayName = "Mk. 19";
        magazines[] = {
            "RHS_48Rnd_40mm_MK19",
            "RHS_48Rnd_40mm_MK19_M430I",
            "RHS_48Rnd_40mm_MK19_M430A1",
            "RHS_48Rnd_40mm_MK19_M1001",
            "RHS_96Rnd_40mm_MK19",
            "RHS_96Rnd_40mm_MK19_M430I",
            "RHS_96Rnd_40mm_MK19_M430A1",
            "RHS_96Rnd_40mm_MK19_M1001"
        };
    };
    class RHS_MKV_MK19: RHS_MK19 {
        displayName = "Stbd MK19";
        class GunParticles {
            class effect1 {
                positionName = "mk19_s_muzzle";
                directionName = "mk19_s_endBarrel";
                effectName = "GrenadeLauncherCloud";
            };
        };
    };
    class RHS_MK19_CROWS_M151: RHS_MK19 {
        magazineReloadTime = 25;
        ballisticsComputer = "2 + 16";
        magazines[] = {
            "RHS_48Rnd_40mm_MK19",
            "RHS_48Rnd_40mm_MK19_M430I",
            "RHS_48Rnd_40mm_MK19_M430A1",
            "RHS_48Rnd_40mm_MK19_M1001",
            "RHS_96Rnd_40mm_MK19",
            "RHS_96Rnd_40mm_MK19_M430I",
            "RHS_96Rnd_40mm_MK19_M430A1",
            "RHS_96Rnd_40mm_MK19_M1001"
        };
    };
    class RHS_MK19_CROWS_M153: RHS_MK19_CROWS_M151 {};
    class missiles_titan;
    class rhs_weap_TOW_Launcher: missiles_titan {
        holdsterAnimValue = 1;
        autoReload = 0;
        textureType = "semi";
        scope = 1;
        displayName = "BGM-71 TOW Launcher";
        canLock = 0;
        cursor = "rocket";
        minRange = 10;
        minRangeProbab = 0.5;
        midRange = 1450;
        midRangeProbab = 1;
        maxRange = 3750;
        maxRangeProbab = 0.6;
        reloadTime = 2;
        magazineReloadTime = 90;
        magazines[] = {
            "rhs_mag_2Rnd_TOW",
            "rhs_mag_2Rnd_TOWB",
            "rhs_mag_2Rnd_ITOW",
            "rhs_mag_2Rnd_TOW2",
            "rhs_mag_2Rnd_TOW2A",
            "rhs_mag_2Rnd_TOW2B",
            "rhs_mag_2Rnd_TOW2B_AERO",
            "rhs_mag_2Rnd_TOW2BB"
        };
        aiRateOfFire = 5;
        aiRateOfFireDistance = 500;
        modes[] = {"this"};
        sounds[] = {"StandardSound"};
        weaponLockSystem = 1;
    };
    class rhs_weap_TOW_Launcher_static: missiles_titan {
        canLock = 0;
        autoReload = 0;
        minRange = 10;
        minRangeProbab = 0.5;
        midRange = 1450;
        midRangeProbab = 1;
        maxRange = 3750;
        maxRangeProbab = 0.8;
        aiRateOfFire = 5;
        aiRateOfFireDistance = 500;
        magazineReloadTime = 15;
        textureType = "semi";
        displayName = "BGM-71 TOW Launcher";
        magazines[] = {
            "rhs_mag_TOW",
            "rhs_mag_TOWB",
            "rhs_mag_ITOW",
            "rhs_mag_TOW2",
            "rhs_mag_TOW2A",
            "rhs_mag_TOW2b",
            "rhs_mag_TOW2b_aero",
            "rhs_mag_TOW2bb"
        };
        modes[] = {"this"};
        sounds[] = {"StandardSound"};
    };
    class rockets_230mm_GAT;
    class rhs_weap_mlrs: rockets_230mm_GAT {
        displayname = "MLRS";
        magazines[] = {"rhs_mag_m26_6", "rhs_mag_m26a1_6", "rhs_mag_xm29_6"};
        modes[] = {
            "Mode_1",
            "Mode_2",
            "Mode_3",
            "Mode_4",
            "Mode_5",
            "Mode_6",
            "Mode_7",
            "Mode_8",
            "Mode_9",
            "Mode_10",
            "Mode_11",
            "Mode_12",
            "Mode_13",
            "Mode_14",
            "Mode_15",
            "Mode_16"
        };
        class Close;
        class Mode_base: Close {
            reloadTime = 1.8;
            artilleryDispersion = 1.2;
        };
        class Mode_1: Mode_base {
            displayName = "1000m-1300m";
            artilleryCharge = 0.135;
            minRange = 1000;
            minRangeProbab = 0.15;
            midRange = 1150;
            midRangeProbab = 0.65;
            maxRange = 1300;
            maxRangeProbab = 0.05;
        };
        class Mode_2: Mode_base {
            displayName = "1300m-1700m";
            artilleryCharge = 0.153;
            minRange = 1300;
            minRangeProbab = 0.15;
            midRange = 1500;
            midRangeProbab = 0.65;
            maxRange = 1700;
            maxRangeProbab = 0.05;
        };
        class Mode_3: Mode_base {
            displayName = "1700m-2200m";
            artilleryCharge = 0.175;
            minRange = 1700;
            minRangeProbab = 0.15;
            midRange = 1950;
            midRangeProbab = 0.65;
            maxRange = 2200;
            maxRangeProbab = 0.05;
        };
        class Mode_4: Mode_base {
            displayName = "2200m-2900m";
            artilleryCharge = 0.2;
            minRange = 2200;
            minRangeProbab = 0.15;
            midRange = 2550;
            midRangeProbab = 0.65;
            maxRange = 2900;
            maxRangeProbab = 0.05;
        };
        class Mode_5: Mode_base {
            displayName = "2900m-3800m";
            artilleryCharge = 0.228;
            minRange = 2900;
            minRangeProbab = 0.15;
            midRange = 3350;
            midRangeProbab = 0.65;
            maxRange = 3800;
            maxRangeProbab = 0.05;
        };
        class Mode_6: Mode_base {
            displayName = "3800m-5000m";
            artilleryCharge = 0.261;
            minRange = 3800;
            minRangeProbab = 0.15;
            midRange = 4400;
            midRangeProbab = 0.65;
            maxRange = 5000;
            maxRangeProbab = 0.05;
        };
        class Mode_7: Mode_base {
            displayName = "5000m-6600m";
            artilleryCharge = 0.3;
            minRange = 5000;
            minRangeProbab = 0.15;
            midRange = 5800;
            midRangeProbab = 0.65;
            maxRange = 6600;
            maxRangeProbab = 0.05;
        };
        class Mode_8: Mode_base {
            displayName = "6600m-8500m";
            artilleryCharge = 0.341;
            minRange = 6600;
            minRangeProbab = 0.15;
            midRange = 7550;
            midRangeProbab = 0.65;
            maxRange = 8500;
            maxRangeProbab = 0.05;
        };
        class Mode_9: Mode_base {
            displayName = "8500m-11000m";
            artilleryCharge = 0.388;
            minRange = 8500;
            minRangeProbab = 0.15;
            midRange = 9750;
            midRangeProbab = 0.65;
            maxRange = 11000;
            maxRangeProbab = 0.05;
        };
        class Mode_10: Mode_base {
            displayName = "11000m-14000m";
            artilleryCharge = 0.44;
            minRange = 11000;
            minRangeProbab = 0.15;
            midRange = 12500;
            midRangeProbab = 0.65;
            maxRange = 14000;
            maxRangeProbab = 0.05;
        };
        class Mode_11: Mode_base {
            displayName = "14000m-18000m";
            artilleryCharge = 0.495;
            minRange = 14000;
            minRangeProbab = 0.15;
            midRange = 16000;
            midRangeProbab = 0.65;
            maxRange = 18000;
            maxRangeProbab = 0.05;
        };
        class Mode_12: Mode_base {
            displayName = "18000m-23000m";
            artilleryCharge = 0.56;
            minRange = 18000;
            minRangeProbab = 0.15;
            midRange = 20500;
            midRangeProbab = 0.65;
            maxRange = 23000;
            maxRangeProbab = 0.05;
        };
        class Mode_13: Mode_base {
            displayName = "23000m-30000m";
            artilleryCharge = 0.639;
            minRange = 23000;
            minRangeProbab = 0.15;
            midRange = 26500;
            midRangeProbab = 0.65;
            maxRange = 30000;
            maxRangeProbab = 0.05;
        };
        class Mode_14: Mode_base {
            displayName = "30000m-40000m";
            artilleryCharge = 0.74;
            minRange = 30000;
            minRangeProbab = 0.15;
            midRange = 35000;
            midRangeProbab = 0.65;
            maxRange = 40000;
            maxRangeProbab = 0.05;
        };
        class Mode_15: Mode_base {
            displayName = "40000m-52000m";
            artilleryCharge = 0.842;
            minRange = 40000;
            minRangeProbab = 0.15;
            midRange = 46000;
            midRangeProbab = 0.65;
            maxRange = 52000;
            maxRangeProbab = 0.05;
        };
        class Mode_16: Mode_base {
            displayName = "52000m-67000m";
            artilleryCharge = 0.96;
            minRange = 52000;
            minRangeProbab = 0.15;
            midRange = 59500;
            midRangeProbab = 0.65;
            maxRange = 67000;
            maxRangeProbab = 0.05;
        };
        class Mode_17: Mode_base {
            displayName = "62000m-67000m";
            artilleryCharge = 1.96;
            minRange = 62000;
            minRangeProbab = 0.15;
            midRange = 64500;
            midRangeProbab = 0.65;
            maxRange = 67000;
            maxRangeProbab = 0.05;
        };
        class Mode_18: Mode_base {
            displayName = "52000m-67000m";
            artilleryCharge = 0.96;
            minRange = 52000;
            minRangeProbab = 0.15;
            midRange = 59500;
            midRangeProbab = 0.65;
            maxRange = 67000;
            maxRangeProbab = 0.05;
        };
        class Mode_19: Mode_base {
            displayName = "52000m-67000m";
            artilleryCharge = 0.96;
            minRange = 52000;
            minRangeProbab = 0.15;
            midRange = 59500;
            midRangeProbab = 0.65;
            maxRange = 67000;
            maxRangeProbab = 0.05;
        };
        class Mode_20: Mode_base {
            displayName = "52000m-67000m";
            artilleryCharge = 0.96;
            minRange = 52000;
            minRangeProbab = 0.15;
            midRange = 59500;
            midRangeProbab = 0.65;
            maxRange = 67000;
            maxRangeProbab = 0.05;
        };
        class EventHandlers {
            class RHS_EH {
                fired = "_this call rhsusf_fnc_effectFiredMLRS";
            };
        };
    };
    class rhs_weap_mlrs_m26: rockets_230mm_GAT {
        magazines[] = {"rhs_mag_m26_6"};
        modes[] = {
            "Mode_1",
            "Mode_2",
            "Mode_3",
            "Mode_4",
            "Mode_5",
            "Mode_6",
            "Mode_7",
            "Mode_8",
            "Mode_9",
            "Mode_10",
            "Mode_11",
            "Mode_12",
            "Mode_13"
        };
    };
    class rhs_weap_mlrs_m26a1: rockets_230mm_GAT {
        magazines[] = {"rhs_mag_m26a1_6", "rhs_mag_xm29_6"};
        modes[] = {
            "Mode_1",
            "Mode_2",
            "Mode_3",
            "Mode_4",
            "Mode_5",
            "Mode_6",
            "Mode_7",
            "Mode_8",
            "Mode_9",
            "Mode_10",
            "Mode_11",
            "Mode_12",
            "Mode_13",
            "Mode_14"
        };
    };
    class rhs_weap_mlrs_guided: rhs_weap_mlrs {
        displayname = "GMLRS";
        magazines[] = {"rhs_mag_m30_6", "rhs_mag_m31_6"};
        modes[] = {
            "Mode_1",
            "Mode_2",
            "Mode_3",
            "Mode_4",
            "Mode_5",
            "Mode_6",
            "Mode_7",
            "Mode_8",
            "Mode_9",
            "Mode_10",
            "Mode_11",
            "Mode_12",
            "Mode_13",
            "Mode_14",
            "Mode_15",
            "Mode_16"
        };
        class Mode_base: Mode_base {
            artilleryDispersion = 0.3;
        };
        class Mode_1: Mode_base {
            displayName = "1000m-1300m";
            artilleryCharge = 0.135;
            minRange = 1000;
            minRangeProbab = 0.15;
            midRange = 1150;
            midRangeProbab = 0.65;
            maxRange = 1300;
            maxRangeProbab = 0.05;
        };
        class Mode_2: Mode_base {
            displayName = "1300m-1700m";
            artilleryCharge = 0.153;
            minRange = 1300;
            minRangeProbab = 0.15;
            midRange = 1500;
            midRangeProbab = 0.65;
            maxRange = 1700;
            maxRangeProbab = 0.05;
        };
        class Mode_3: Mode_base {
            displayName = "1700m-2200m";
            artilleryCharge = 0.175;
            minRange = 1700;
            minRangeProbab = 0.15;
            midRange = 1950;
            midRangeProbab = 0.65;
            maxRange = 2200;
            maxRangeProbab = 0.05;
        };
        class Mode_4: Mode_base {
            displayName = "2200m-2900m";
            artilleryCharge = 0.2;
            minRange = 2200;
            minRangeProbab = 0.15;
            midRange = 2550;
            midRangeProbab = 0.65;
            maxRange = 2900;
            maxRangeProbab = 0.05;
        };
        class Mode_5: Mode_base {
            displayName = "2900m-3800m";
            artilleryCharge = 0.228;
            minRange = 2900;
            minRangeProbab = 0.15;
            midRange = 3350;
            midRangeProbab = 0.65;
            maxRange = 3800;
            maxRangeProbab = 0.05;
        };
        class Mode_6: Mode_base {
            displayName = "3800m-5000m";
            artilleryCharge = 0.261;
            minRange = 3800;
            minRangeProbab = 0.15;
            midRange = 4400;
            midRangeProbab = 0.65;
            maxRange = 5000;
            maxRangeProbab = 0.05;
        };
        class Mode_7: Mode_base {
            displayName = "5000m-6600m";
            artilleryCharge = 0.3;
            minRange = 5000;
            minRangeProbab = 0.15;
            midRange = 5800;
            midRangeProbab = 0.65;
            maxRange = 6600;
            maxRangeProbab = 0.05;
        };
        class Mode_8: Mode_base {
            displayName = "6600m-8500m";
            artilleryCharge = 0.341;
            minRange = 6600;
            minRangeProbab = 0.15;
            midRange = 7550;
            midRangeProbab = 0.65;
            maxRange = 8500;
            maxRangeProbab = 0.05;
        };
        class Mode_9: Mode_base {
            displayName = "8500m-11000m";
            artilleryCharge = 0.388;
            minRange = 8500;
            minRangeProbab = 0.15;
            midRange = 9750;
            midRangeProbab = 0.65;
            maxRange = 11000;
            maxRangeProbab = 0.05;
        };
        class Mode_10: Mode_base {
            displayName = "11000m-14000m";
            artilleryCharge = 0.44;
            minRange = 11000;
            minRangeProbab = 0.15;
            midRange = 12500;
            midRangeProbab = 0.65;
            maxRange = 14000;
            maxRangeProbab = 0.05;
        };
        class Mode_11: Mode_base {
            displayName = "14000m-18000m";
            artilleryCharge = 0.495;
            minRange = 14000;
            minRangeProbab = 0.15;
            midRange = 16000;
            midRangeProbab = 0.65;
            maxRange = 18000;
            maxRangeProbab = 0.05;
        };
        class Mode_12: Mode_base {
            displayName = "18000m-23000m";
            artilleryCharge = 0.56;
            minRange = 18000;
            minRangeProbab = 0.15;
            midRange = 20500;
            midRangeProbab = 0.65;
            maxRange = 23000;
            maxRangeProbab = 0.05;
        };
        class Mode_13: Mode_base {
            displayName = "23000m-30000m";
            artilleryCharge = 0.639;
            minRange = 23000;
            minRangeProbab = 0.15;
            midRange = 26500;
            midRangeProbab = 0.65;
            maxRange = 30000;
            maxRangeProbab = 0.05;
        };
        class Mode_14: Mode_base {
            displayName = "30000m-40000m";
            artilleryCharge = 0.74;
            minRange = 30000;
            minRangeProbab = 0.15;
            midRange = 35000;
            midRangeProbab = 0.65;
            maxRange = 40000;
            maxRangeProbab = 0.05;
        };
        class Mode_15: Mode_base {
            displayName = "40000m-52000m";
            artilleryCharge = 0.842;
            minRange = 40000;
            minRangeProbab = 0.15;
            midRange = 46000;
            midRangeProbab = 0.65;
            maxRange = 52000;
            maxRangeProbab = 0.05;
        };
        class Mode_16: Mode_base {
            displayName = "52000m-67000m";
            artilleryCharge = 0.96;
            minRange = 52000;
            minRangeProbab = 0.15;
            midRange = 59500;
            midRangeProbab = 0.65;
            maxRange = 67000;
            maxRangeProbab = 0.05;
        };
    };
    class rhs_weap_atacms: rhs_weap_mlrs {
        displayname = "ATacMS";
        magazines[] = {"rhs_mag_mgm140a_1"};
    };
    class rhs_weap_atacms_guided: rhs_weap_mlrs_guided {
        displayname = "ATacMS (ER)";
        magazines[] = {
            "rhs_mag_mgm140b_1",
            "rhs_mag_mgm164_block2_1",
            "rhs_mag_mgm164_block4_1",
            "rhs_mag_mgm168_block4_1"
        };
    };
    class SmokeLauncher;
    class rhsusf_weap_M259: SmokeLauncher {
        scope = 2;
        magazines[] = {"rhsusf_mag_L8A3_8"};
        reloadTime = 0.04;
        magazineReloadTime = 60;
        autoReload = 0;
        showToPlayer = 1;
        autoFire = 1;
        minRange = 0;
        maxRange = 10000;
        soundBurst = 0;
        burst = 8;
        class EventHandlers {
            class RHS_CM {
                fired = "_this call RHSUSF_fnc_effectFiredSmokeLauncher";
            };
        };
    };
    class rhsusf_weap_M257: SmokeLauncher {
        magazines[] = {"rhsusf_mag_L8A3_16"};
        modes[] = {"Double", "Volley"};
        class Double: rhsusf_weap_M259 {
            reloadTime = 0.099;
            burst = 8;
            showToPlayer = 1;
            multiplier = 1;
            minRange = 0;
            maxRange = 10000;
            soundBurst = 0;
            autoFire = 1;
            displayName = "M257 (8)";
        };
        class Volley: Double {
            burst = 16;
            displayName = "M257 (16)";
        };
        class EventHandlers {
            class RHS_CM {
                fired = "_this call RHSUSF_fnc_effectFiredSmokeLauncher";
            };
        };
    };
    class rhsusf_weap_M6: rhsusf_weap_M257 {
        class Double: Double {
            displayName = "M6 (8)";
        };
        class Volley: Volley {
            displayName = "M6 (16)";
        };
    };
    class rhsusf_weap_M7: rhsusf_weap_M257 {
        class Double: Double {
            displayName = "M7 (8)";
        };
        class Volley: Volley {
            displayName = "M7 (16)";
        };
        class EventHandlers {
            class RHS_CM {
                fired = "(_this + [['smoke_','_pos','_dir']]) call RHSUSF_fnc_effectFiredSmokeLauncher";
            };
        };
    };
    class rhsusf_weap_M6_GLUA: rhsusf_weap_M257 {
        modes[] = {"Double"};
        class Double: Double {
            reloadTime = 1;
            burst = 1;
            displayName = "M6 (4)";
            class StandardSound {
                soundSetShot[] = {"UGL_InteriorTail_SoundSet"};
            };
        };
        class EventHandlers {
            class RHS_CM {
                fired = "_this spawn rhs_fnc_stryker_m1127_fireSmoke";
            };
        };
        magazines[] = {"rhsusf_mag_L8A3_48"};
    };
    class rhsusf_weap_M6_L1: rhsusf_weap_M6_GLUA {
        class Double: Double {
            reloadTime = 0.01;
            burst = 4;
            showToPlayer = 0;
            class StandardSound {
                soundSetShot[] = {"UGL_shot_SoundSet", "UGL_Tail_SoundSet", "UGL_InteriorTail_SoundSet"};
            };
        };
        class EventHandlers {
            class RHS_CM {
                fired = "(_this + [['smoke_L1_','_pos','_dir']]) call RHSUSF_fnc_effectFiredSmokeLauncher";
            };
        };
        magazines[] = {"rhsusf_mag_L8A3_L1_8"};
    };
    class rhsusf_weap_M6_L2: rhsusf_weap_M6_L1 {
        magazines[] = {"rhsusf_mag_L8A3_L2_8"};
        class EventHandlers {
            class RHS_CM {
                fired = "(_this + [['smoke_L2_','_pos','_dir']]) call RHSUSF_fnc_effectFiredSmokeLauncher";
            };
        };
    };
    class rhsusf_weap_M6_L3: rhsusf_weap_M6_L1 {
        magazines[] = {"rhsusf_mag_L8A3_L3_8"};
        class EventHandlers {
            class RHS_CM {
                fired = "(_this + [['smoke_L3_','_pos','_dir']]) call RHSUSF_fnc_effectFiredSmokeLauncher";
            };
        };
    };
    class rhsusf_weap_M6_R1: rhsusf_weap_M6_L1 {
        magazines[] = {"rhsusf_mag_L8A3_R1_8"};
        class EventHandlers {
            class RHS_CM {
                fired = "(_this + [['smoke_R1_','_pos','_dir']]) call RHSUSF_fnc_effectFiredSmokeLauncher";
            };
        };
    };
    class rhsusf_weap_M6_R2: rhsusf_weap_M6_L1 {
        magazines[] = {"rhsusf_mag_L8A3_R2_8"};
        class EventHandlers {
            class RHS_CM {
                fired = "(_this + [['smoke_R2_','_pos','_dir']]) call RHSUSF_fnc_effectFiredSmokeLauncher";
            };
        };
    };
    class rhsusf_weap_M6_R3: rhsusf_weap_M6_L1 {
        magazines[] = {"rhsusf_mag_L8A3_R3_8"};
        class EventHandlers {
            class RHS_CM {
                fired = "(_this + [['smoke_R3_','_pos','_dir']]) call RHSUSF_fnc_effectFiredSmokeLauncher";
            };
        };
    };
    class rhsusf_weap_M257_8: SmokeLauncher {
        magazines[] = {"rhsusf_mag_L8A3_8"};
        modes[] = {"Double", "Volley"};
        class Double: rhsusf_weap_M259 {
            reloadTime = 0.099;
            burst = 4;
            showToPlayer = 1;
            multiplier = 1;
            minRange = 0;
            maxRange = 10000;
            soundBurst = 0;
            autoFire = 1;
            displayName = "M257 (4)";
        };
        class Volley: Double {
            burst = 8;
            displayName = "M257 (8)";
        };
        class EventHandlers {
            class RHS_CM {
                fired = "_this call RHSUSF_fnc_effectFiredSmokeLauncher";
            };
        };
    };
    class rhsusf_weap_M250: SmokeLauncher {
        magazines[] = {"rhsusf_mag_L8A3_12"};
        modes[] = {"Double", "Volley"};
        class Double: rhsusf_weap_M259 {
            reloadTime = 0.099;
            burst = 6;
            showToPlayer = 1;
            multiplier = 1;
            minRange = 0;
            maxRange = 10000;
            soundBurst = 0;
            autoFire = 1;
            displayName = "M250 (6)";
        };
        class Volley: Double {
            burst = 12;
            displayName = "M250 (12)";
        };
        class EventHandlers {
            class RHS_CM {
                fired = "_this call RHSUSF_fnc_effectFiredSmokeLauncher";
            };
        };
    };
    class CMFlareLauncher: SmokeLauncher {
        class Single;
        class Burst;
    };
    class rhsusf_weap_CMFlareLauncher: CMFlareLauncher {
        magazines[] = {
            "60Rnd_CMFlareMagazine",
            "120Rnd_CMFlareMagazine",
            "240Rnd_CMFlareMagazine",
            "30Rnd_CMFlare_Chaff_Magazine",
            "60Rnd_CMFlare_Chaff_Magazine",
            "120Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine",
            "192Rnd_CMFlare_Chaff_Magazine",
            "168Rnd_CMFlare_Chaff_Magazine",
            "300Rnd_CMFlare_Chaff_Magazine"
        };
        modes[] = {
            "Burst",
            "AIBurst",
            "Timed",
            "AITimed",
            "LongTimed"
        };
        class Timed: Single {
            displayName = "Timed";
            burst = 8;
            reloadTime = 1.3;
        };
        class AITimed: Timed {
            showToPlayer = 0;
            minRange = 0;
            maxRange = 3000;
        };
        class LongTimed: Single {
            displayName = "Timed 16f/4s";
            burst = 8;
            reloadTime = 4;
        };
    };
    class rhsusf_weap_CMDispenser_M130: rhsusf_weap_CMFlareLauncher {
        magazines[] = {
            "rhsusf_M130_CMFlare_Magazine",
            "rhsusf_M130_CMFlare_Magazine_x2",
            "rhsusf_M130_CMFlare_Magazine_x4",
            "rhsusf_M130_CMFlare_Magazine_x8",
            "rhsusf_M130_CMFlare_Magazine_x16",
            "rhsusf_M130_CMFlare_Chaff_Magazine",
            "rhsusf_M130_CMFlare_Chaff_Magazine_x2",
            "rhsusf_M130_CMFlare_Chaff_Magazine_x4",
            "rhsusf_M130_CMFlare_Chaff_Magazine_x8",
            "rhsusf_M130_CMFlare_Chaff_Magazine_x16"
        };
    };
    class rhsusf_weap_CMDispenser_ANALE39: rhsusf_weap_CMFlareLauncher {
        magazines[] = {
            "rhsusf_ANALE39_CMFlare_Magazine",
            "rhsusf_ANALE39_CMFlare_Magazine_x2",
            "rhsusf_ANALE39_CMFlare_Magazine_x4",
            "rhsusf_ANALE39_CMFlare_Chaff_Magazine",
            "rhsusf_ANALE39_CMFlare_Chaff_Magazine_x2",
            "rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4"
        };
    };
    class rhsusf_weap_CMDispenser_ANALE40: rhsusf_weap_CMFlareLauncher {
        magazines[] = {
            "rhsusf_ANALE40_CMFlare_Magazine",
            "rhsusf_ANALE40_CMFlare_Magazine_x2",
            "rhsusf_ANALE40_CMFlare_Magazine_x4",
            "rhsusf_ANALE40_CMFlare_Magazine_x8",
            "rhsusf_ANALE40_CMFlare_Magazine_x16",
            "rhsusf_ANALE40_CMFlare_Chaff_Magazine",
            "rhsusf_ANALE40_CMFlare_Chaff_Magazine_x2",
            "rhsusf_ANALE40_CMFlare_Chaff_Magazine_x4",
            "rhsusf_ANALE40_CMFlare_Chaff_Magazine_x8",
            "rhsusf_ANALE40_CMFlare_Chaff_Magazine_x16"
        };
    };
    class rhsusf_weap_CMDispenser_ANALE52: rhsusf_weap_CMFlareLauncher {
        magazines[] = {
            "rhsusf_ANALE52_CMFlare_Magazine",
            "rhsusf_ANALE52_CMFlare_Magazine_x2",
            "rhsusf_ANALE52_CMFlare_Magazine_x4",
            "rhsusf_ANALE52_CMFlare_Magazine_x6",
            "rhsusf_ANALE52_CMFlare_Chaff_Magazine",
            "rhsusf_ANALE52_CMFlare_Chaff_Magazine_x2",
            "rhsusf_ANALE52_CMFlare_Chaff_Magazine_x4"
        };
    };
    class rhs_weap_smokegen: Default {
        scope = 2;
        magazines[] = {"rhs_mag_smokegen"};
        simulation = "cmlauncher";
        reloadTime = 8;
        modes[] = {"Single", "Continuos"};
        class Single: Mode_SemiAuto {
            cursor = "EmptyCursor";
            displayName = "$STR_RHSUSF_WEAP_SMOKEGEN";
            showToPlayer = 1;
            autoFire = 1;
            burst = 1;
            reloadTime = 8;
            minRange = 0;
            maxRange = 1000;
            sounds[] = {"StandardSound"};
            class StandardSound {
                begin1[] = {};
                soundBegin[] = {};
                weaponSoundEffect = "";
            };
        };
        class Continuos: Single {
            displayName = "$STR_RHSUSF_WEAP_SMOKEGEN_CONT";
            burst = 999;
            reloadTime = 8;
        };
    };
    class rhsusf_weap_duke: SmokeLauncher {
        displayName = "DUKE offline";
        displayNameShort = "DUKE offline";
        scope = 2;
        magazines[] = {"rhsusf_mag_duke"};
        sounds[] = {};
        reloadTime = 0.04;
        magazineReloadTime = 0;
        showToPlayer = 1;
        autoFire = 1;
        minRange = 0;
        maxRange = 10000;
        soundBurst = 0;
        burst = 1;
    };
    class rhsusf_weap_duke_on: rhsusf_weap_duke {
        displayName = "DUKE online";
        displayNameShort = "DUKE online";
    };
    class rhsusf_weap_LWIRCM: MGun {
        scope = 2;
        displayName = "LWIRCM";
        magazines[] = {"rhsusf_mag_LWIRCM"};
        magazineReloadTime = 60;
        simulation = "cmlauncher";
        modes[] = {"Burst1", "Burst2"};
        reloadMagazineSound[] = {"A3\sounds_f\dummysound", 2, 1, 5};
        class Burst1: Mode_Burst {
            displayName = "LWIRCM";
            reloadTime = 0.25;
            burst = 120;
            sounds[] = {"StandardSound"};
            class StandardSound {
                begin1[] = {
                    "rhsusf\addons\rhsusf_melb\Sound\ircm_on1",
                    2,
                    1,
                    5
                };
                begin2[] = {
                    "rhsusf\addons\rhsusf_melb\Sound\ircm_on2",
                    2,
                    1,
                    5
                };
                soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
                weaponSoundEffect = "";
            };
            showToPlayer = 1;
            multiplier = 1;
            minRange = 0;
            maxRange = 200;
            soundContinuos = 0;
        };
        class Burst2: Burst1 {};
    };
    class rhsusf_weap_ANALQ144: MGun {
        scope = 2;
        displayName = "LWIRCM";
        magazines[] = {"rhsusf_mag_LWIRCM", "rhsusf_mag_DIRCM"};
        magazineReloadTime = 60;
        simulation = "cmlauncher";
        modes[] = {"Burst1"};
        reloadMagazineSound[] = {"A3\sounds_f\dummysound", 2, 1, 5};
        class Burst1: Mode_Burst {
            displayName = "AN/ALQ-144";
            reloadTime = 0.5;
            burst = 120;
            sounds[] = {"StandardSound"};
            class StandardSound {
                begin1[] = {
                    "rhsafrf\addons\rhs_c_heavyweapons\Sound\ircm_on1",
                    2,
                    1,
                    5
                };
                begin2[] = {
                    "rhsafrf\addons\rhs_c_heavyweapons\Sound\ircm_on2",
                    2,
                    1,
                    5
                };
                soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
                weaponSoundEffect = "";
            };
            showToPlayer = 1;
            multiplier = 1;
            minRange = 0;
            maxRange = 200;
            soundContinuos = 0;
        };
    };
    class rhsusf_weap_ANALQ157: rhsusf_weap_ANALQ144 {
        displayName = "AN/ALQ-157";
        class Burst1: Burst1 {
            displayName = "AN/ALQ-157";
        };
    };
    class rhsusf_weap_ANALQ212: rhsusf_weap_ANALQ144 {
        displayName = "AN/ALQ-212";
        class Burst1: Burst1 {
            displayName = "AN/ALQ-212";
        };
    };
    class rhsusf_weap_ANAAQ24: rhsusf_weap_ANALQ144 {
        displayName = "AN/AAQ-24";
        class Burst1: Burst1 {
            displayName = "AN/AAQ-24";
        };
    };
    class rhsusf_weap_laneMarkerSystem: SmokeLauncher {
        displayName = "Lane Marking";
        displayNameShort = "Lane Marking";
        scope = 2;
        magazines[] = {"rhsusf_mag_laneMarkerSystem"};
        sounds[] = {};
        reloadTime = 1;
        magazineReloadTime = 0;
        showToPlayer = 1;
        autoFire = 1;
        minRange = 0;
        maxRange = 10000;
        soundBurst = 0;
        burst = 1;
    };
    class mortar_82mm;
    class rhs_mortar_81mm: mortar_82mm {
        displayname = "81mm Mortar";
        magazines[] = {
            "rhs_1Rnd_m821_HE",
            "rhs_12Rnd_m821_HE",
            "8Rnd_82mm_Mo_shells",
            "8Rnd_82mm_Mo_Flare_white",
            "8Rnd_82mm_Mo_Smoke_white",
            "8Rnd_82mm_Mo_guided",
            "8Rnd_82mm_Mo_LG"
        };
        minRange = 90;
        midRange = 4000;
        maxRange = 8000;
        class GunParticles {
            class FirstEffect {
                effectName = "MortarFired";
                positionName = "Usti Hlavne";
                directionName = "Konec Hlavne";
            };
        };
        modes[] = {
            "Single0",
            "Single1",
            "Single2",
            "Single3",
            "Single4",
            "Burst0",
            "Burst1",
            "Burst2",
            "Burst3",
            "Burst4"
        };
        class Single0: Mode_SemiAuto {
            displayName = "CHARGE 0";
            sounds[] = {"StandardSound"};
            class StandardSound {
                begin1[] = {
                    "A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",
                    1.2589254,
                    1,
                    250
                };
                begin2[] = {
                    "A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",
                    1.2589254,
                    1,
                    250
                };
                soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
            };
            reloadSound[] = {
                "A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",
                1,
                1,
                20
            };
            soundServo[] = {"", 0.0001, 1};
            reloadTime = 1.8;
            minRange = 0;
            midRange = 0;
            maxRange = 0;
            artilleryDispersion = 1.9;
            artilleryCharge = 0.2;
        };
        class Single1: Single0 {
            displayName = "CHARGE 1";
            artilleryCharge = 0.4;
        };
        class Single2: Single1 {
            displayName = "CHARGE 2";
            artilleryCharge = 0.6;
        };
        class Single3: Single1 {
            displayName = "CHARGE 3";
            artilleryCharge = 0.8;
        };
        class Single4: Single1 {
            displayName = "CHARGE 4";
            artilleryCharge = 1;
        };
        class Burst0: Mode_Burst {
            showToPlayer = 0;
            displayName = "$STR_A3_mortar_82mm_Burst10";
            burst = 4;
            aiBurstTerminable = 1;
            sounds[] = {"StandardSound"};
            class StandardSound {
                begin1[] = {
                    "A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",
                    1.2589254,
                    1,
                    250
                };
                begin2[] = {
                    "A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",
                    1.2589254,
                    1,
                    250
                };
                soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
            };
            reloadSound[] = {
                "A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",
                1,
                1,
                20
            };
            soundServo[] = {"", 0.0001, 1};
            soundBurst = 0;
            reloadTime = 1.8;
            minRange = 60;
            minRangeProbab = 0.5;
            midRange = 290;
            midRangeProbab = 0.7;
            maxRange = 665;
            maxRangeProbab = 0.5;
            artilleryDispersion = 2.2;
            artilleryCharge = 0.2;
        };
        class Burst1: Burst0 {
            showToPlayer = 0;
            displayName = "$STR_A3_mortar_82mm_Burst20";
            minRange = 230;
            minRangeProbab = 0.4;
            midRange = 1175;
            midRangeProbab = 0.6;
            maxRange = 2660;
            maxRangeProbab = 0.4;
            artilleryCharge = 0.4;
        };
        class Burst2: Burst0 {
            showToPlayer = 0;
            displayName = "$STR_A3_mortar_82mm_Burst30";
            minRange = 540;
            minRangeProbab = 0.3;
            midRange = 2355;
            midRangeProbab = 0.4;
            maxRange = 5500;
            maxRangeProbab = 0.3;
            artilleryCharge = 0.6;
        };
        class Burst3: Burst0 {
            showToPlayer = 0;
            displayName = "$STR_A3_mortar_82mm_Burst30";
            minRange = 540;
            minRangeProbab = 0.3;
            midRange = 2355;
            midRangeProbab = 0.4;
            maxRange = 5500;
            maxRangeProbab = 0.3;
            artilleryCharge = 0.8;
        };
        class Burst4: Burst1 {
            showToPlayer = 0;
            displayName = "$STR_A3_mortar_82mm_Burst30";
            minRange = 540;
            minRangeProbab = 0.3;
            midRange = 2355;
            midRangeProbab = 0.4;
            maxRange = 5500;
            maxRangeProbab = 0.3;
            artilleryCharge = 1;
        };
    };
};
class CfgFunctions {
    class RHSUSF {
        tag = "RHSUSF";
        class Functions {
            class firedFCS {
                file = "\rhsusf\addons\rhsusf_c_heavyweapons\functions\rhs_firedFCS.sqf";
                description = "LRF marking & ammo changing";
            };
            class eden_defineLoadout {
                file = "\rhsusf\addons\rhsusf_c_heavyweapons\functions\rhs_defineLoadout.sqf";
                description = "3den";
            };
        };
        class WeaponsEH {
            class effectFiredSmokeLauncher {
                file = "\rhsusf\addons\rhsusf_c_heavyweapons\effects\rhs_effectFiredSmokeLauncher.sqf";
                description = "Effects for smoke launcher";
            };
            class effectFiredDuke {
                file = "\rhsusf\addons\rhsusf_c_heavyweapons\effects\rhs_effectFiredDuke.sqf";
                description = "Duke turn on/off handling";
            };
            class effectFiredMLRS {
                file = "\rhsusf\addons\rhsusf_c_heavyweapons\effects\rhs_effectFiredMLRS.sqf";
            };
        };
    };
    class RHS {
        tag = "RHS";
        class Functions {
            class firedFCS {
                file = "\rhsusf\addons\rhsusf_c_heavyweapons\functions\rhs_firedFCS.sqf";
                description = "LRF marking & ammo changing";
            };
            class firedPlaneAI {
                file = "\rhsusf\addons\rhsusf_c_heavyweapons\functions\rhs_firedPlaneAI.sqf";
            };
            class saclosGuide {
                file = "\rhsusf\addons\rhsusf_c_heavyweapons\functions\rhs_saclosGuide.sqf";
                description = "SACLOS guidance";
            };
            class LOALGuide {
                file = "\rhsusf\addons\rhsusf_c_heavyweapons\functions\rhs_LOALGuide.sqf";
                description = "LOAL guidance";
            };
            class tankLoader {
                file = "\rhsusf\addons\rhsusf_c_heavyweapons\functions\rhs_tankLoader.sqf";
            };
            class burstLimiterShots {
                file = "\rhsusf\addons\rhsusf_c_heavyweapons\functions\rhs_burstLimiterShots.sqf";
                description = "Burst limiter for air cannons";
            };
            class laneMarkerSystem {
                file = "\rhsusf\addons\rhsusf_c_heavyweapons\functions\rhs_laneMarkerSystem.sqf";
            };
        };
        class WeaponsEH {
            class effectFiredSmokeGenerator {
                file = "\rhsusf\addons\rhsusf_c_heavyweapons\effects\rhs_effectFiredSmokeGenerator.sqf";
                description = "Effects for smoke generator";
            };
        };
    };
};
class CfgSounds {
    class RHS_ERA_EXPLOSION_1 {
        name = "ERA Explosion 1";
        sound[] = {"A3\Sounds_F\weapons\Explosion\explosion_mine_1", 1, 1};
        titles[] = {};
    };
};
class cfgSFX {
    class RHS_ERA_Explosion_Sound {
        sound0[] = {
            "A3\Sounds_F\weapons\Explosion\explosion_mine_1",
            1.1220185,
            1,
            200,
            1,
            10,
            10,
            10
        };
        sounds[] = {"sound0"};
        titles[] = {};
        empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
    };
};
class CfgCloudlets {
    class FireSparks;
    class RHS_FireSparks: FireSparks {
        emissiveColor[] = {
            {500, 75, 35, 0},
            {50, 7.5, 3.5, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        };
    };
    class Default;
    class HeavyGunCartridge1;
    class RHS_HeavyGunCartridge1: HeavyGunCartridge1 {
        moveVelocity[] = {"-directionX * 3", "- directionY * 3", "- directionZ * 3"};
        particleShape = "\rhsusf\addons\rhsusf_c_heavyweapons\rhs_casing_30mm.p3d";
        size[] = {1};
    };
    class MachineGunCartridge2;
    class RHS_Tank_Catridge: MachineGunCartridge2 {
        interval = 5.56;
        lifeTime = 60;
        size[] = {2};
        sizeVar = 0;
        position[] = {0, 0, 0};
        moveVelocity[] = {-3, -3, -6};
        particleShape = "\rhsusf\addons\rhsusf_c_heavyweapons\rhs_casing_30mm.p3d";
    };
    class RHS_SmokeGenerator: Default {
        interval = 0.15;
        particleShape = "\A3\data_f\cl_basic.p3d";
        particleFSNtieth = 1;
        particleFSIndex = 0;
        particleFSFrameCount = 1;
        particleFSLoop = 0;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        animationSpeed[] = {0};
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        emissiveColor[] = {{0, 0, 0, 0}};
        rotationVelocity = 0;
        rotationVelocityVar = 0;
        randomDirectionPeriod = 0;
        randomDirectionIntensity = 0;
        blockAIVisibility = 1;
    };
    class RHSUSF_CM_L8A3_Spark_Base: Default {
        interval = 0.002;
        color[] = {{1, 0.3, 0.1, -500}, {1, 0.3, 0.1, -500}};
        colorCoef[] = {1, 1, 1, 1};
        emissiveColor[] = {{250, 50, 25, 0}, {0, 0, 0, 0}};
        lifeTime = 0.75;
        lifeTimeVar = 1.5;
        weight = 100;
        volume = 0.01;
        rubbing = 0.05;
        size[] = {0.15, 0.075, 0};
        sizeVar = 0.1;
        moveVelocity[] = {"inDirX * inSpeed * 0.35", "inDirY * inSpeed * 0.35", "inDirZ * inSpeed * 0.35"};
        moveVelocityVar[] = {11, 11, 11};
        bounceOnSurface = 0.25;
        bounceOnSurfaceVar = 0.1;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 13;
        particleFSFrameCount = 2;
        particleFSLoop = 0;
        angleVar = 360;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 3;
        rotationVelocity = 1;
        sizeCoef = 1;
        animationSpeed[] = {1000};
        animationSpeedCoef = 1;
        randomDirectionPeriod = 0;
        randomDirectionIntensity = 0;
        onTimerScript = "";
        beforeDestroyScript = "";
        blockAIVisibility = 0;
        position[] = {0, 0, 0};
        positionVar[] = {0.01, 0.01, 0.01};
        rotationVelocityVar = 0;
        colorVar[] = {0.05, 0.05, 0.05, 5};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
    };
    class RHSUSF_CM_L8A3_Spark_Tail: RHSUSF_CM_L8A3_Spark_Base {
        color[] = {{1, 0.2, 0.1, -500}, {1, 0.2, 0.1, -500}};
        emissiveColor[] = {{5000, 750, 350, 0}, {0, 0, 0, 0}};
        particleEffects = "RHSUSF_CM_L8A3_Spark_Tail_Subeffect";
    };
    class RHSUSF_CM_L8A3_Spark_Small: RHSUSF_CM_L8A3_Spark_Base {
        interval = 0.002;
        color[] = {{1, 0.3, 0.1, -500}, {1, 0.3, 0.1, -500}};
        emissiveColor[] = {{250, 50, 25, 0}, {0, 0, 0, 0}};
        lifeTime = 0.1;
        lifeTimeVar = 5;
        weight = 100;
        volume = 0.01;
        rubbing = 0.05;
        size[] = {0.2, 0.1, 0};
        sizeVar = 0.15;
        moveVelocity[] = {"inDirX * inSpeed * 0.25", "inDirY * inSpeed * 0.25", "inDirZ * inSpeed * 0.25"};
        moveVelocityVar[] = {15, 15, 15};
    };
    class RHS_120mm_Sabot_1_Eject: MachineGunCartridge2 {
        particleShape = "rhsusf\addons\rhsusf_heavyweapons\120mm_sabot\rhsusf_120mm_petal";
        interval = 0.1;
        lifeTime = 60;
        size[] = {1};
        sizeVar = 0;
        position[] = {0, 0, 0};
        moveVelocity[] = {"speedX  * 0.06", "speedY  * 0.12", "speedZ  * 0.06"};
        forcedInitialOrientationDir[] = {"3*speedX", "3*speedY", "3*speedZ"};
        rotationVelocity = 3;
        rotationVelocityVar = 1;
        bounceOnSurface = 0.5;
        bounceOnSurfaceVar = 0.15;
        randomDirectionPeriodVar = 0.4;
        randomDirectionIntensityVar = 1;
    };
    class RHS_120mm_Sabot_2_Eject: RHS_120mm_Sabot_1_Eject {
        moveVelocity[] = {"speedX  * 0.05", "speedY  * 0.06", "speedZ  * 0.06"};
    };
    class RHS_120mm_Sabot_3_Eject: RHS_120mm_Sabot_1_Eject {
        moveVelocity[] = {"speedX  * 0.07", "speedY  * 0.06", "speedZ  * 0.06"};
    };
    class RHSUSF_CM_L8A3_Smoke_Tail_Base: Default {
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 12;
        particleFSFrameCount = 8;
        particleFSLoop = 1;
        angleVar = 1;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        moveVelocity[] = {0, 0, 0};
        sizeCoef = 1;
        colorCoef[] = {1, 1, 1, 1};
        animationSpeed[] = {1};
        animationSpeedCoef = 1;
        onTimerScript = "";
        beforeDestroyScript = "";
        MoveVelocityVar[] = {0, 0, 0};
        emissiveColor[] = {{0, 0, 0, 0}};
        colorVar[] = {0, 0, 0, 0};
        lifeTime = 3;
        lifeTimeVar = 0.25;
        weight = 1.277;
        volume = "0.99 + randomValue / 40";
        rubbing = 0.075;
        sizeVar = 0.5;
        rotationVelocity = 0.75;
        rotationVelocityVar = 0.25;
        randomDirectionPeriod = 1.25;
        randomDirectionIntensity = 0.25;
        randomDirectionIntensityVar = 0.1;
        position[] = {0, 0, 0};
        positionVar[] = {0.1, 0.1, 0.1};
        blockAIVisibility = 0;
        color[] = {
            {0.6, 0.6, 0.6, 0},
            {0.5, 0.5, 0.5, 0.4},
            {0.5, 0.5, 0.5, 0.5},
            {0.5, 0.5, 0.5, 0.4},
            {0.5, 0.5, 0.5, 0.3},
            {0.8, 0.8, 0.8, 0.05},
            {1, 1, 1, 0}
        };
        size[] = {3.515625, 7.03125, 9.84375};
        interval = 0.5;
    };
    class RHSUSF_CM_L8A3_Smoke_Tail_Small_0: RHSUSF_CM_L8A3_Smoke_Tail_Base {};
    class RHSUSF_CM_L8A3_Smoke_Tail_Small_1: RHSUSF_CM_L8A3_Smoke_Tail_Small_0 {
        color[] = {
            {0.6, 0.6, 0.6, 0},
            {0.5, 0.5, 0.5, 0.3},
            {0.5, 0.5, 0.5, 0.4},
            {0.5, 0.5, 0.5, 0.3},
            {0.5, 0.5, 0.5, 0.2},
            {0.8, 0.8, 0.8, 0.05},
            {1, 1, 1, 0}
        };
        size[] = {2.8125, 5.625, 7.875};
        interval = 0.3;
    };
    class RHSUSF_CM_L8A3_Smoke_Tail_Small_2: RHSUSF_CM_L8A3_Smoke_Tail_Small_0 {
        color[] = {
            {0.6, 0.6, 0.6, 0},
            {0.5, 0.5, 0.5, 0.2},
            {0.5, 0.5, 0.5, 0.25},
            {0.5, 0.5, 0.5, 0.3},
            {0.5, 0.5, 0.5, 0.1},
            {0.8, 0.8, 0.8, 0.02},
            {1, 1, 1, 0}
        };
        size[] = {1.875, 3.75, 5.25};
        interval = 0.15;
    };
    class RHSUSF_CM_L8A3_Smoke_Tail_Big_0: RHSUSF_CM_L8A3_Smoke_Tail_Base {
        particleShape = "\A3\data_f\cl_basic.p3d";
        particleFSNtieth = 1;
        particleFSIndex = 0;
        particleFSFrameCount = 1;
        particleFSLoop = 0;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        animationSpeed[] = {0};
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        lifeTime = 44;
        lifeTimeVar = 1;
        weight = 1.277;
        volume = "0.985 + randomValue / 60";
        rubbing = 0.1;
        rotationVelocity = 1.5;
        rotationVelocityVar = 1.5;
        randomDirectionPeriod = 0.4;
        randomDirectionIntensity = 0.1;
        bounceOnSurface = -1;
        bounceOnSurfaceVar = 0;
        blockAIVisibility = 1;
        color[] = {
            {0.8, 0.8, 0.8, 0.005},
            {0.6, 0.6, 0.6, 0.6},
            {0.6, 0.6, 0.6, 0.5},
            {0.6, 0.6, 0.6, 0.3},
            {0.6, 0.6, 0.6, 0.2},
            {0.8, 0.8, 0.8, 0.05},
            {1, 1, 1, 0}
        };
        size[] = {4.5, 7.875, 14.625};
        interval = 0.4;
    };
    class RHSUSF_CM_L8A3_Smoke_Tail_Big_1: RHSUSF_CM_L8A3_Smoke_Tail_Big_0 {
        color[] = {
            {0.8, 0.8, 0.8, 0.005},
            {0.6, 0.6, 0.6, 0.45},
            {0.6, 0.6, 0.6, 0.4},
            {0.6, 0.6, 0.6, 0.25},
            {0.6, 0.6, 0.6, 0.1},
            {0.8, 0.8, 0.8, 0.02},
            {1, 1, 1, 0}
        };
        size[] = {3, 5.25, 9.75};
        interval = 0.2;
    };
    class RHSUSF_CM_L8A3_Smoke_Tail_Big_2: RHSUSF_CM_L8A3_Smoke_Tail_Big_0 {
        color[] = {
            {0.8, 0.8, 0.8, 0.005},
            {0.6, 0.6, 0.6, 0.35},
            {0.6, 0.6, 0.6, 0.4},
            {0.6, 0.6, 0.6, 0.15},
            {0.6, 0.6, 0.6, 0.05},
            {0.8, 0.8, 0.8, 0.02},
            {1, 1, 1, 0}
        };
        size[] = {3, 5.25, 9.75};
        interval = 0.1;
    };
    class ExhaustSmokeRefractHeliBig;
    class ExhaustSmokeRefractGasTurbine: ExhaustSmokeRefractHeliBig {
        interval = "0.002/(intensity + 0.001)/(vehicleSpeedSize interpolate [0,70,1,20])";
        moveVelocity[] = {"speedX * 0.98", "speedY * 0.98", "speedZ * 0.98"};
        lifeTime = "0.4/(vehicleSpeedSize interpolate [0,70,1,10])";
        sizeCoef = "(vehicleSpeedSize interpolate [0,80,1,3])";
    };
    class RHS_ERA_Flash: Default {
        interval = 0.05;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 0;
        particleFSFrameCount = 32;
        particleFSLoop = 0;
        angleVar = 1;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 0.15;
        moveVelocity[] = {0, 1, 0};
        rotationVelocity = 1;
        weight = 1.277;
        volume = 1;
        rubbing = 0.1;
        size[] = {0.3, 1.4, 1.8};
        color[] = {{1, 1, 1, -6}, {1, 0.5, 0.5, 0}};
        animationSpeed[] = {1};
        randomDirectionPeriod = 0.2;
        randomDirectionIntensity = 0.2;
        onTimerScript = "";
        beforeDestroyScript = "";
        lifeTimeVar = 0;
        position[] = {0, 0, 0};
        positionVar[] = {0, 0, 0};
        MoveVelocityVar[] = {0.2, 0.5, 0.2};
        rotationVelocityVar = 1;
        sizeVar = 0.6;
        colorVar[] = {0, 0, 0, 0};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
    };
    class RHS_ERA_Smoke: Default {
        interval = 0.05;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal_02";
        particleFSNtieth = 8;
        particleFSIndex = 0;
        particleFSFrameCount = 40;
        particleFSLoop = 1;
        angleVar = 1;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 3;
        moveVelocity[] = {0, 2.5, 0};
        rotationVelocity = 0;
        weight = 0.061;
        volume = 0.045;
        rubbing = 0.2;
        size[] = {3, 4, 7};
        color[] = {{0.9, 0.8, 0.8, 0.7}, {0.8, 0.8, 0.8, 0.2}, {1, 1, 1, 0}};
        animationSpeed[] = {1.5, 0.5, 0.2};
        randomDirectionPeriod = 0.2;
        randomDirectionIntensity = 0.05;
        onTimerScript = "";
        beforeDestroyScript = "";
        lifeTimeVar = 0.7;
        position[] = {0, 0, 0};
        positionVar[] = {0, 0, 0};
        MoveVelocityVar[] = {1.5, 0.5, 1.5};
        rotationVelocityVar = 2;
        sizeVar = 0.5;
        colorVar[] = {0, 0, 0, 0};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
    };
    class RHS_ERA_Shard: Default {
        interval = 0.05;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        particleShape = "\A3\data_f\ParticleEffects\Shard\shard.p3d";
        particleFSNtieth = 1;
        particleFSIndex = 0;
        particleFSFrameCount = 1;
        particleFSLoop = 0;
        angleVar = 1;
        animationName = "";
        particleType = "SpaceObject";
        timerPeriod = 1;
        lifeTime = 40;
        moveVelocity[] = {0, 2, 0};
        rotationVelocity = 3;
        weight = 40;
        volume = 7.9;
        rubbing = 0.05;
        size[] = {0.3};
        color[] = {{1, 0.8, 0.4, -10}, {1, 1, 1, 1}};
        animationSpeed[] = {1};
        randomDirectionPeriod = 0;
        randomDirectionIntensity = 0;
        onTimerScript = "";
        beforeDestroyScript = "";
        bounceOnSurface = 0.04;
        bounceOnSurfaceVar = 0.02;
        blockAIVisibility = 0;
        lifeTimeVar = 10;
        positionVar[] = {0.1, 0.1, 0.1};
        MoveVelocityVar[] = {10, 12, 10};
        rotationVelocityVar = 2.5;
        sizeVar = 0.25;
        colorVar[] = {0, 0, 0, 0};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
    };
    class rhs_MLRSFired1: Default {
        interval = 0.0003;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 12;
        particleFSFrameCount = 13;
        particleFSLoop = 0;
        angleVar = 360;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 5;
        moveVelocity[] = {0, 0, 0};
        rotationVelocity = 1;
        weight = 1.22;
        volume = 1;
        rubbing = 0.4;
        size[] = {1, 8};
        color[] = {
            {0.5, 0.5, 0.5, 0.22},
            {0.5, 0.5, 0.5, 0.12},
            {0.5, 0.5, 0.5, 0.08},
            {0.5, 0.5, 0.5, 0.05},
            {0.5, 0.5, 0.5, 0.01}
        };
        animationSpeed[] = {1000};
        randomDirectionPeriod = 0.1;
        randomDirectionIntensity = 0.1;
        onTimerScript = "";
        beforeDestroyScript = "";
        animationSpeedCoef = 1;
        colorCoef[] = {1, 1, 1, 1};
        sizeCoef = 1;
        position[] = {0, 0, 0};
        lifeTimeVar = 1;
        positionVar[] = {0.5, 0.5, 0.5};
        MoveVelocityVar[] = {3.5, 3.5, 3.5};
        rotationVelocityVar = 10;
        sizeVar = 0;
        colorVar[] = {0, 0, 0, 0};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
    };
    class rhs_MLRSFired1M: rhs_MLRSFired1 {
        interval = 0.0006;
        lifeTime = 4;
        size[] = {1.2, 9};
        lifeTimeVar = 0.6;
    };
    class rhs_MLRSFired1L: rhs_MLRSFired1 {
        interval = 0.0015;
        lifeTime = 2.5;
        size[] = {1.2, 9};
        lifeTimeVar = 0.5;
    };
    class CircleDustTank;
    class CircleDustTankL;
    class rhs_CircleDustTank: CircleDustTank {
        interval = 0.005;
        color[] = {{0.205, 0.185, 0.15, 0.04}, {0.205, 0.185, 0.15, 0.02}, {0.205, 0.185, 0.15, 0.005}};
        weight = 0.051;
        MoveVelocityVar[] = {3.5, 0.5, 3.5};
        lifeTime = 27.8;
    };
    class rhs_CircleDustTankL: CircleDustTankL {
        interval = 0.008;
    };
    class rhs_MissileExhaustRefract: Default {
        interval = 0.01;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Refract";
        particleFSNtieth = 1;
        particleFSIndex = 0;
        particleFSFrameCount = 1;
        particleFSLoop = 0;
        angleVar = 1;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1.1;
        lifeTime = 14;
        rotationVelocity = 1;
        weight = 1.265;
        volume = 1;
        rubbing = 0.07;
        size[] = {0.8, 2.12};
        color[] = {
            {0.06, 0.06, 0.06, 0.2},
            {0.3, 0.3, 0.3, 0.17},
            {0.3, 0.3, 0.3, 0.14},
            {0.3, 0.3, 0.3, 0.11},
            {0.3, 0.3, 0.3, 0.05}
        };
        colorCoef[] = {1, 1, 1, 1};
        animationSpeed[] = {2, 1};
        randomDirectionPeriod = 0.1;
        randomDirectionIntensity = 0.02;
        onTimerScript = "";
        beforeDestroyScript = "";
        destroyOnWaterSurface = 1;
        blockAIVisibility = 0;
        sizeCoef = 1.5;
        animationSpeedCoef = 1;
        lifeTimeVar = 0.5;
        positionVar[] = {0, 0, 0};
        MoveVelocityVar[] = {0, 0, 0};
        rotationVelocityVar = 5;
        sizeVar = 0.05;
        colorVar[] = {0, 0, 0, 0};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
    };
    class RHS_ExhaustSmoke1AirPlaneHP: Default {
        interval = "0.001 * (engineDamage interpolate [0,2.5,1,8])";
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal_02";
        particleFSNtieth = 8;
        particleFSIndex = 0;
        particleFSFrameCount = 40;
        particleFSLoop = 1;
        angleVar = 1;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = "0.3 * (engineDamage interpolate [0,1,1,12])";
        moveVelocity[] = {"speedX", "speedY", "speedZ"};
        rotationVelocity = 1;
        weight = 1.4;
        volume = 1;
        rubbing = 0.1;
        size[] = {0.3, 3};
        sizeCoef = "1.4 * (engineDamage interpolate [0,1,1,6])";
        color[] = {
            {0.06, 0.06, 0.06, 0.12},
            {0.1, 0.1, 0.1, 0.04},
            {0.2, 0.2, 0.2, 0.01},
            {0.3, 0.3, 0.3, 0.001}
        };
        colorCoef[] = {
            "15",
            "15",
            "15",
            "intensity/2 * (engineDamage interpolate [0.3,0.4,0.05,6]))"
        };
        animationSpeed[] = {2, 1};
        animationSpeedCoef = 1;
        randomDirectionPeriod = 0.1;
        randomDirectionIntensity = 0.25;
        onTimerScript = "";
        beforeDestroyScript = "";
        blockAIVisibility = 0;
        destroyOnWaterSurface = 1;
        destroyOnWaterSurfaceOffset = -0.1;
        lifeTimeVar = "0.15 * (engineDamage interpolate [0,1,1,4])";
        position[] = {"positionX", "positionY", "positionZ"};
        positionVar[] = {0.2, 0.2, 0.2};
        MoveVelocityVar[] = {"1 * (engineDamage interpolate [0,1,1,2.5])", "1 * (engineDamage interpolate [0,1,1,2.5])", "1 * (engineDamage interpolate [0,1,1,2.5])"};
        rotationVelocityVar = 20;
        sizeVar = 0.2;
        colorVar[] = {0, 0, 0, 0};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
    };
};
class RHSUSF_CM_L8A3_Spark_Tail_Subeffect {
    class RHSUSF_CM_L8A3_Smoke_Tail_Small_0 {
        simulation = "particles";
        type = "RHSUSF_CM_L8A3_Smoke_Tail_Small_0";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = "1 + random 0.25";
        qualityLevel = 0;
    };
    class RHSUSF_CM_L8A3_Smoke_Tail_Small_1: RHSUSF_CM_L8A3_Smoke_Tail_Small_0 {
        type = "RHSUSF_CM_L8A3_Smoke_Tail_Small_1";
        qualityLevel = 1;
    };
    class RHSUSF_CM_L8A3_Smoke_Tail_Small_2: RHSUSF_CM_L8A3_Smoke_Tail_Small_0 {
        type = "RHSUSF_CM_L8A3_Smoke_Tail_Small_2";
        qualityLevel = 2;
    };
    class RHSUSF_CM_L8A3_Smoke_Tail_Big_0 {
        simulation = "particles";
        type = "RHSUSF_CM_L8A3_Smoke_Tail_Big_0";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = "1.5 + random 0.25";
        qualityLevel = 0;
    };
    class RHSUSF_CM_L8A3_Smoke_Tail_Big_1: RHSUSF_CM_L8A3_Smoke_Tail_Big_0 {
        type = "RHSUSF_CM_L8A3_Smoke_Tail_Big_1";
        qualityLevel = 1;
    };
    class RHSUSF_CM_L8A3_Smoke_Tail_Big_2: RHSUSF_CM_L8A3_Smoke_Tail_Big_0 {
        type = "RHSUSF_CM_L8A3_Smoke_Tail_Big_2";
        qualityLevel = 2;
    };
};
class RHSUSF_CM_L8A3_Effect {
    class Explosion {
        simulation = "particles";
        type = "GrenadeExp";
        position[] = {0, 0, 0};
        intensity = 0.5;
        interval = 1;
        lifeTime = 0.5;
    };
    class Explosion_Light {
        simulation = "light";
        type = "GrenadeExploLight";
        position[] = {0, 0, 0};
        intensity = 0.01;
        interval = 1;
        lifeTime = 1;
    };
    class RHSUSF_CM_L8A3_Spark_Tail {
        simulation = "particles";
        type = "RHSUSF_CM_L8A3_Spark_Tail";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.2;
    };
    class RHSUSF_CM_L8A3_Spark_Small_0 {
        simulation = "particles";
        type = "RHSUSF_CM_L8A3_Spark_Small";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.01;
        qualityLevel = 0;
    };
    class RHSUSF_CM_L8A3_Spark_Small_1: RHSUSF_CM_L8A3_Spark_Small_0 {
        lifeTime = 0.02;
        qualityLevel = 1;
    };
    class RHSUSF_CM_L8A3_Spark_Small_2: RHSUSF_CM_L8A3_Spark_Small_0 {
        lifeTime = 0.03;
        qualityLevel = 2;
    };
};
class RHS_HeavyGunCartridge1 {
    class RHS_30mm_Catridge {
        simulation = "particles";
        type = "RHS_HeavyGunCartridge1";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
        qualityLevel = 2;
    };
    class RHS_30mm_CatridgeMed {
        simulation = "particles";
        type = "RHS_HeavyGunCartridge1";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
        qualityLevel = 1;
    };
};
class RHS_ExhaustEffectTankGasBack {
    class ExhaustsEffect01 {
        simulation = "particles";
        type = "ExhaustSmoke1HeliBig";
    };
    class ExhaustsEffectRefract01 {
        simulation = "particles";
        type = "ExhaustSmokeRefractGasTurbine";
    };
    class ExhaustsEffectWater01 {
        simulation = "particles";
        type = "ExhaustSmokeBigWater1";
        qualityLevel = 2;
    };
    class ExhaustsEffectWater01Med {
        simulation = "particles";
        type = "ExhaustSmokeBigWater1";
        qualityLevel = 1;
    };
    class ExhaustsEffectWater02 {
        simulation = "particles";
        type = "ExhaustSmokeBigWater2";
        qualityLevel = 2;
    };
    class ExhaustsEffectWater02Med {
        simulation = "particles";
        type = "ExhaustSmokeBigWater2";
        qualityLevel = 1;
    };
};
class RHS_FAE_Explosion {
    class Light1 {
        simulation = "light";
        type = "GrenadeExploLight";
        position[] = {0, 0, 0};
        intensity = 0.01;
        interval = 1;
        lifeTime = 1;
    };
    class MortarExp1 {
        simulation = "particles";
        type = "MortarExp";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.5;
    };
    class MortarSmoke1 {
        simulation = "particles";
        type = "CloudSmallLight";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
};
class RHS_120mm_Sabot_Eject {
    class FX_1 {
        simulation = "particles";
        type = "RHS_120mm_Sabot_1_Eject";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        enabled = "flyTime interpolate [0,0.2,1,-1]";
    };
    class FX_2: FX_1 {
        type = "RHS_120mm_Sabot_2_Eject";
    };
    class FX_3: FX_1 {
        type = "RHS_120mm_Sabot_3_Eject";
    };
};
class RHS_Missile0 {
    class Light1 {
        simulation = "light";
        type = "FiredLightMed";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = -1;
    };
    class MissileEffects1 {
        simulation = "particles";
        type = "Missile0";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = -1;
    };
    class Refract {
        simulation = "particles";
        type = "rhs_MissileExhaustRefract";
    };
};
class RHS_Missile1 {
    class Light1 {
        simulation = "light";
        type = "RocketLight";
        position[] = {0, 0, 0};
        intensity = 0.01;
        interval = 1;
        lifeTime = 1;
    };
    class MissileEffects1 {
        simulation = "particles";
        type = "Missile1";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class Refract {
        simulation = "particles";
        type = "rhs_MissileExhaustRefract";
    };
};
class RHS_Missile2 {
    class Light1 {
        simulation = "light";
        type = "RocketLight";
        position[] = {0, 0, 0};
        intensity = 0.01;
        interval = 1;
        lifeTime = 1;
    };
    class Missile2 {
        simulation = "particles";
        type = "Missile2";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        qualityLevel = 2;
    };
    class Missile2Med {
        simulation = "particles";
        type = "Missile2Med";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        qualityLevel = 1;
    };
    class Refract {
        simulation = "particles";
        type = "rhs_MissileExhaustRefract";
    };
};
class RHS_Missile3 {
    class Light1 {
        simulation = "light";
        type = "RocketLight";
        position[] = {0, 0, 0};
        intensity = 0.01;
        interval = 1;
        lifeTime = 1;
    };
    class Missile3 {
        simulation = "particles";
        type = "Missile3";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        qualityLevel = 2;
    };
    class Missile3Med {
        simulation = "particles";
        type = "Missile3Med";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        qualityLevel = 1;
    };
    class Refract {
        simulation = "particles";
        type = "rhs_MissileExhaustRefract";
    };
};
class RHS_Missile4 {
    class Light1 {
        simulation = "light";
        type = "RocketLight";
        position[] = {0, 0, 0};
        intensity = 0.01;
        interval = 1;
        lifeTime = 1;
    };
    class Missile4 {
        simulation = "particles";
        type = "Missile4";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class Refract {
        simulation = "particles";
        type = "rhs_MissileExhaustRefract";
    };
};
class RHS_Missile5 {
    class Light1 {
        simulation = "light";
        type = "RocketLight";
        position[] = {0, 0, 0};
        intensity = 0.01;
        interval = 1;
        lifeTime = 1;
    };
    class Missile5 {
        simulation = "particles";
        type = "Missile5";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class Refract {
        simulation = "particles";
        type = "rhs_MissileExhaustRefract";
    };
};
class RHS_EngineEffectAirPlaneHP {
    class ExhaustsEffect01 {
        simulation = "particles";
        type = "RHS_ExhaustSmoke1AirPlaneHP";
    };
    class ExhaustsEffectRefract01 {
        simulation = "particles";
        type = "ExhaustSmokeRefractPlane";
    };
};
class CfgMagazineWells {
    class RHS_Cannon_120mm_M256 {
        RHS_120mm_AP_Magazines[] = {
            "rhs_mag_M829A4",
            "rhs_mag_M829A3",
            "rhs_mag_M829A2",
            "rhs_mag_M829A1",
            "rhs_mag_M829"
        };
        RHS_120mm_HE_Magazines[] = {"rhs_mag_M1069", "rhs_mag_M1147"};
        RHS_120mm_HEAT_Magazines[] = {"rhs_mag_M830", "rhs_mag_M830A1"};
        RHS_120mm_Special_Magazines[] = {"rhs_mag_M1028", "rhs_mag_M416"};
    };
    class RHS_AutoCannon_25mm_M242_AP {
        RHS_25mm_AP_Magazines[] = {"rhs_mag_70Rnd_25mm_M242_APFSDS", "rhs_mag_70Rnd_25mm_M242_M791"};
    };
    class RHS_AutoCannon_25mm_M242_HE {
        RHS_25mm_HE_Magazines[] = {"rhs_mag_230Rnd_25mm_M242_HEI"};
    };
};
class CfgVehicles {
    class House;
    class ThingX;
    class Signs_base_F;
    class rhs_casing_105mm_m14b1: ThingX {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_casing_105mm_m14b1.paa";
        scope = 2;
        displayName = "105mm m14b1 Artilery Casing";
        editorCategory = "EdCat_Things";
        editorSubcategory = "EdSubcat_Military";
        vehicleClass = "Small_items";
        model = "\rhsusf\addons\rhsusf_c_heavyweapons\rhs_casing_105mm_m14b1.p3d";
    };
    class rhs_laneMarker: ThingX {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_laneMarker.paa";
        scope = 2;
        displayName = "Lane marker pole";
        editorCategory = "EdCat_Things";
        editorSubcategory = "EdSubcat_Military";
        vehicleClass = "Small_items";
        destrType = "DestructDefault";
        model = "\rhsusf\addons\rhsusf_stryker\rhsusf_laneMarker.p3d";
    };
    class rhs_laneMarker_static: Signs_base_F {
        scope = 1;
        displayName = "Lane marker pole (static)";
        editorCategory = "EdCat_Things";
        editorSubcategory = "EdSubcat_Military";
        vehicleClass = "Small_items";
        destrType = "DestructTree";
        model = "\rhsusf\addons\rhsusf_stryker\rhsusf_laneMarker.p3d";
        armor = 20;
    };
};
