class RHS_UserAction_Towing_Detach {
    displayNameDefault = "<img image='\rhsafrf\addons\rhs_main\data\actions\rhs_tow_detach_ca.paa' size='3.5' />";
    displayName = "<img image='\rhsafrf\addons\rhs_main\data\actions\rhs_tow_detach_ca.paa' size='1.5' /> <t color='#00FF7F'>Detach vehicle</t>";
    position = "";
    radius = 2.5;
    onlyForplayer = 1;
    priority = 15;
    showWindow = 1;
    condition = "(alive this) && {speed this < 3}  && {this getVariable ['rhs_towing_detach',true]}";
    statement = "[this] spawn rhs_fnc_towing_detach;";
};
class RHS_UserAction_Towing_Attach {
    displayNameDefault = "<img image='\rhsafrf\addons\rhs_main\data\actions\rhs_tow_attach_ca.paa' size='3.5' />";
    displayName = "<img image='\rhsafrf\addons\rhs_main\data\actions\rhs_tow_attach_ca.paa' size='1.5' /> <t color='#00FF7F'>Select towing vehicle</t>";
    position = "";
    radius = 2.5;
    onlyForplayer = 1;
    priority = 15;
    showWindow = 1;
    condition = "(alive this) && (this  animationPhase 'Unfold' == 1) && {this getVariable ['rhs_towing_enabled',true]}";
    statement = "[this] call rhs_fnc_towing_selectVehicle";
};
class RHS_UserAction_Towing_Drag {
    displayNameDefault = "<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\ladderup_ca.paa' size='2.5' />";
    displayName = "<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\ladderup_ca.paa' /> <t color='#00FF7F'>Drag heavy weapon</t>";
    position = "";
    radius = 1.5;
    onlyForplayer = 1;
    priority = 15;
    showWindow = 1;
    condition = "(alive this) && (this  animationPhase 'Unfold' == 1) && {this getVariable ['rhs_towing_enabled',true]}";
    statement = "[this] call rhs_fnc_towing_drag";
};
class CfgPatches {
    class rhs_c_heavyweapons {
        units[] = {
            "rhs_casing_30mm",
            "RHS_ZU23_MSV",
            "RHS_ZU23_VDV",
            "RHS_ZU23_VMF",
            "RHS_NSV_TriPod_MSV",
            "RHS_NSV_TriPod_VDV",
            "RHS_NSV_TriPod_INS",
            "rhs_KORD_MSV",
            "rhs_KORD_VDV",
            "rhs_KORD_VMF",
            "rhs_KORD_INS",
            "rhs_KORD_high_MSV",
            "rhs_KORD_high_VDV",
            "rhs_KORD_high_VMF",
            "rhs_KORD_high_INS",
            "rhs_DSHKM_ins",
            "rhs_DSHKM_Mini_TriPod_ins",
            "RHS_AGS30_TriPod_MSV",
            "RHS_AGS30_TriPod_VDV",
            "RHS_AGS30_TriPod_VMF",
            "RHS_AGS30_TriPod_INS",
            "rhs_SPG9_INS",
            "rhs_SPG9M_MSV",
            "rhs_SPG9M_VDV",
            "rhs_SPG9M_VMF",
            "rhs_SPG9M_INS",
            "rhs_Igla_AA_pod_msv",
            "rhs_Igla_AA_pod_vdv",
            "rhs_Igla_AA_pod_vmf",
            "rhs_Igla_AA_pod_ins",
            "rhs_2b14_82mm_msv",
            "rhs_2b14_82mm_vdv",
            "rhs_2b14_82mm_vmf",
            "rhs_2b14_82mm_ins",
            "rhs_Metis_9k115_2_msv",
            "rhs_Metis_9k115_2_vdv",
            "rhs_Metis_9k115_2_vmf",
            "rhs_Metis_9k115_2_ins",
            "rhs_Metis_9k115_1_ins",
            "rhs_Kornet_9M133_2_msv",
            "rhs_Kornet_9M133_2_vdv",
            "rhs_Kornet_9M133_2_vmf",
            "rhs_Kornet_9M133_2_ins",
            "rhs_D30_msv",
            "rhs_D30_vdv",
            "rhs_D30_vmf",
            "rhs_D30_ins",
            "rhs_D30_AT_msv",
            "rhs_D30_AT_vdv",
            "rhs_D30_AT_vmf",
            "rhs_D30_AT_ins",
            "RHS_NSV_Gun_Bag",
            "RHS_NSV_Tripod_Bag",
            "RHS_DShkM_Gun_Bag",
            "RHS_DShkM_TripodHigh_Bag",
            "RHS_DShkM_TripodLow_Bag",
            "RHS_Kord_Gun_Bag",
            "RHS_Kord_Tripod_Bag",
            "RHS_Metis_Gun_Bag",
            "RHS_Metis_Tripod_Bag",
            "RHS_Kornet_Gun_Bag",
            "RHS_Kornet_Tripod_Bag",
            "RHS_AGS30_Gun_Bag",
            "RHS_AGS30_Tripod_Bag",
            "RHS_SPG9_Gun_Bag",
            "RHS_SPG9_Tripod_Bag",
            "RHS_Podnos_Gun_Bag",
            "RHS_Podnos_Bipod_Bag",
            "rhs_ZU23_towingVehicle",
            "rhs_D30_towingVehicle"
        };
        weapons[] = {
            "rhs_weap_pkt",
            "rhs_weap_nsvt",
            "rhs_weap_dshkm",
            "rhs_weap_kpvt",
            "rhs_weap_2a26",
            "rhs_weap_2a46_2",
            "rhs_weap_2a46m_2",
            "rhs_weap_2a46m_4",
            "rhs_weap_d10t2s_2",
            "rhs_weap_d10tg",
            "rhs_weap_d10t2s",
            "rhs_weap_u5ts",
            "rhs_weap_2a42",
            "rhs_weap_2a28",
            "rhs_weap_2a41",
            "rhs_weap_9k11",
            "rhs_weap_9m111",
            "rhs_weap_9k133",
            "rhs_weap_s8",
            "rhs_weap_902a",
            "rhs_weap_2p130"
        };
        requiredVersion = 1.7;
        requiredAddons[] = {"rhs_main"};
        name = "Heavy weapons pack";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class Mode_SemiAuto;
class Mode_Burst;
class DefaultEventhandlers;
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
    class SmokeLauncherAmmo;
    class SubmunitionCore;
    class SubmunitionBase;
    class SubmunitionBullet;
    class Default;
    class BulletCore;
    class BulletBase;
    class ShellBase;
    class SmokeShell;
    class MissileCore: Default {};
    class MissileBase: MissileCore {
        class EventHandlers;
    };
    class rhs_ammo_902a: SmokeLauncherAmmo {};
    class rhs_ammo_3d17: SmokeLauncherAmmo {
        rhs_smokeShell = "rhs_ammo_3d17_shell";
        muzzleEffect = "";
        weaponLockSystem = "1 + 2 + 4";
        simulation = "shotCM";
        AIAmmoUsageFlags = "4 + 8";
        hit = 0;
        indirectHit = 0;
        indirectHitRange = 0;
        class EventHandlers {
            class RHS_CM {
                fired = "_this call RHS_fnc_effectFiredSmokeLauncher";
            };
        };
    };
    class rhs_ammo_3d17_902B: rhs_ammo_3d17 {
        rhs_smokeShell = "rhs_ammo_3d17_shell_902B";
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
    class rhs_ammo_dazzler: rhs_ammo_smokegen {
        muzzleEffect = "";
        class EventHandlers {
            class RHS_CM {
                fired = "_this call RHS_fnc_effectFiredDazzler";
            };
        };
    };
    class Grenade;
    class GrenadeHand;
    class rhs_ammo_3d17_shell: Grenade {
        simulation = "shotShell";
        AIAmmoUsageFlags = "4";
        hit = 3;
        indirectHit = 3;
        indirectHitRange = 3;
        suppressionRadiusHit = 60;
        typicalspeed = 50;
        airFriction = -0.012;
        deflecting = 30;
        model = "\rhsafrf\addons\rhs_heavyweapons\3d17\rhs_smokecan";
        visibleFire = 0.5;
        audibleFire = 0.05;
        visibleFireTime = 1;
        fuseDistance = 0;
        explosionEffects = "RHS_3D17Effect";
        CraterEffects = "";
        explosionTime = 0.7;
        timeToLive = 1;
        coefGravity = 2.5;
    };
    class rhs_ammo_3d17_shell_902B: rhs_ammo_3d17_shell {
        explosionEffects = "RHS_3D17Effect_902B";
    };
    class RHS_Ammo_DIRCM_Vitebsk: BulletBase {
        cost = 1;
        visibleFire = 0;
        audibleFire = 0;
        hit = 1;
        indirectHit = 0;
        indirectHitRange = 0;
        timeToLive = 2.1;
        thrustTime = 2;
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
    class CMflareAmmo;
    class rhs_CMflare_Ammo: CMflareAmmo {
        effectsSmoke = "rhs_CounterMeasureFlare";
    };
    class Sh_125mm_APFSDS;
    class Sh_125mm_HE;
    class F_40mm_White;
    class Laserbeam;
    class rhs_Laserbeam: Laserbeam {
        hit = 0;
        cost = 1000000;
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
    class rhs_ammo_br_base: Sh_125mm_APFSDS {
        hit = 320;
        indirectHit = 20;
        indirectHitRange = 1;
        typicalSpeed = 895;
        cost = 500;
        deflecting = 15;
        model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
    };
    class rhs_ammo_bm_base: Sh_125mm_APFSDS {
        cost = 500;
        hit = 250;
        indirectHit = 0;
        indirectHitRange = 0;
        typicalspeed = 1430;
        explosive = 0;
        deflecting = 10;
        caliber = 33.33;
        timeToLive = 15;
        whistleOnFire = 1;
        whistleDist = 14;
        muzzleEffect = "";
        model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
    };
    class rhs_ammo_3bm_base: rhs_ammo_bm_base {
        indirectHit = 40;
        indirectHitRange = 0.5;
        typicalSpeed = 1700;
        simulationStep = 0.01;
        effectFly = "RHS_125mm_Sabot_Eject";
    };
    class rhs_ammo_base_penetrator: rhs_ammo_3bm_base {
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
        effectFly = "";
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
            "rhsafrf\addons\rhs_c_heavyweapons\sounds\Inhit.wav",
            4.23872,
            1,
            100
        };
        hitArmorInt[] = {"soundVehiclePlateInt1", 1};
        hitDefaultInt[] = {"soundVehiclePlateInt1", 1};
        hitMetalInt[] = {"soundVehiclePlateInt1", 1};
        hitMetalPlateInt[] = {"soundVehiclePlateInt1", 1};
        multiSoundHitInt[] = {"soundVehiclePlateInt1", 1};
        SoundSetExplosion[] = {};
    };
    class rhs_ammo_br412: rhs_ammo_br_base {};
    class rhs_ammo_br540: rhs_ammo_br_base {
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_br540_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        airFriction = -0.000099;
    };
    class rhs_ammo_br540_penetrator: rhs_ammo_ap_penetrator {
        hit = 290;
        typicalSpeed = 600;
        caliber = 16.6667;
    };
    class rhs_ammo_bm25: rhs_ammo_bm_base {
        hit = 520;
        typicalspeed = 1425;
        caliber = 16.317;
    };
    class rhs_ammo_bm8: rhs_ammo_bm_base {
        hit = 470;
        typicalspeed = 1425;
        caliber = 12.2497;
    };
    class rhs_ammo_bm4: rhs_ammo_bm_base {
        hit = 520;
        typicalspeed = 1650;
        caliber = 10.8761;
    };
    class rhs_ammo_bm23: rhs_ammo_bm_base {
        hit = 645;
        typicalspeed = 1650;
        caliber = 12.1212;
    };
    class rhs_ammo_3bm9: rhs_ammo_3bm_base {
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_3bm9_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_3bm9_penetrator: rhs_ammo_ap_penetrator {
        hit = 190;
        typicalSpeed = 1800;
        caliber = 9.07407;
    };
    class rhs_ammo_3bm12: rhs_ammo_3bm_base {
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_3bm12_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_3bm12_penetrator: rhs_ammo_ap_penetrator {
        hit = 215;
        typicalSpeed = 1800;
        caliber = 10.3704;
    };
    class rhs_ammo_3bm15: rhs_ammo_3bm_base {
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_3bm15_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_3bm15_penetrator: rhs_ammo_ap_penetrator {
        hit = 240;
        typicalSpeed = 1780;
        caliber = 11.6105;
    };
    class rhs_ammo_3bm17: rhs_ammo_3bm_base {
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_3bm17_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_3bm17_penetrator: rhs_ammo_ap_penetrator {
        hit = 230;
        typicalSpeed = 1760;
        caliber = 10.9848;
    };
    class rhs_ammo_3bm22: rhs_ammo_3bm_base {
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_3bm22_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_3bm22_penetrator: rhs_ammo_ap_penetrator {
        hit = 200;
        typicalSpeed = 1760;
        caliber = 14.3939;
    };
    class rhs_ammo_3bm26: rhs_ammo_3bm_base {
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_3bm26_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_3bm26_penetrator: rhs_ammo_ap_penetrator {
        hit = 230;
        typicalSpeed = 1720;
        caliber = 15.8915;
    };
    class rhs_ammo_3bm29: rhs_ammo_3bm_base {
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_3bm29_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_3bm29_penetrator: rhs_ammo_ap_penetrator {
        hit = 230;
        caliber = 16.8627;
    };
    class rhs_ammo_3bm32: rhs_ammo_3bm_base {
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_3bm32_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_3bm32_penetrator: rhs_ammo_ap_penetrator {
        hit = 230;
        caliber = 21.1765;
    };
    class rhs_ammo_3bm42: rhs_ammo_3bm_base {
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_3bm42_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_3bm42_penetrator: rhs_ammo_ap_penetrator {
        hit = 250;
        caliber = 19.2157;
    };
    class rhs_ammo_3bm42m: rhs_ammo_3bm_base {
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_3bm42m_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        airFriction = -0.000025;
    };
    class rhs_ammo_3bm42m_penetrator: rhs_ammo_ap_penetrator {
        hit = 270;
        typicalSpeed = 1750;
        caliber = 24.7619;
    };
    class rhs_ammo_3bm46: rhs_ammo_3bm_base {
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_3bm46_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        airFriction = -0.000032;
    };
    class rhs_ammo_3bm46_penetrator: rhs_ammo_ap_penetrator {
        hit = 300;
        typicalSpeed = 1700;
        caliber = 26.7059;
    };
    class rhs_ammo_3bm59: rhs_ammo_3bm_base {
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_3bm59_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        airFriction = -0.000032;
    };
    class rhs_ammo_3bm59_penetrator: rhs_ammo_ap_penetrator {
        hit = 300;
        typicalSpeed = 1700;
        caliber = 30.5882;
    };
    class rhs_ammo_3bm60: rhs_ammo_3bm_base {
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_3bm60_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        airFriction = -0.000032;
    };
    class rhs_ammo_3bm60_penetrator: rhs_ammo_ap_penetrator {
        hit = 300;
        typicalSpeed = 1700;
        caliber = 27.0588;
    };
    class rhs_ammo_3bm69: rhs_ammo_3bm_base {
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_3bm69_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        airFriction = -0.000032;
    };
    class rhs_ammo_3bm69_penetrator: rhs_ammo_ap_penetrator {
        hit = 300;
        typicalSpeed = 2050;
        caliber = 33.6842;
    };
    class rhs_ammo_3bm70: rhs_ammo_3bm_base {
        caliber = 0.1;
        submunitionAmmo = "rhs_ammo_3bm70_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 1;
        submunitionInitSpeed = 0;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        airFriction = -0.000032;
    };
    class rhs_ammo_3bm70_penetrator: rhs_ammo_ap_penetrator {
        hit = 300;
        typicalSpeed = 2050;
        caliber = 31.2281;
    };
    class rhs_ammo_bk_base: rhs_ammo_bm_base {
        warheadName = "HEAT";
        explosive = 0.4;
        caliber = 0.5;
        cost = 260;
        hit = 200;
        indirectHit = 15;
        indirectHitRange = 2;
        typicalspeed = 900;
        airLock = 1;
    };
    class rhs_ammo_bk4: rhs_ammo_bk_base {
        typicalspeed = 1000;
    };
    class rhs_ammo_bk5: rhs_ammo_bk_base {
        submunitionAmmo = "rhs_ammo_bk5_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_bk5_penetrator: rhs_ammo_base_penetrator {
        caliber = 25.3333;
    };
    class rhs_ammo_bk6m: rhs_ammo_bk_base {
        submunitionAmmo = "rhs_ammo_bk6m_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        airFriction = -0.00029;
    };
    class rhs_ammo_bk6m_penetrator: rhs_ammo_base_penetrator {
        caliber = 30.6667;
    };
    class rhs_ammo_bk13: rhs_ammo_bk_base {
        typicalspeed = 726;
        model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
        airFriction = -0.0005;
        submunitionAmmo = "rhs_ammo_bk13_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_bk13_penetrator: rhs_ammo_base_penetrator {
        caliber = 33.3333;
    };
    class rhs_ammo_bk15: rhs_ammo_bk_base {
        typicalspeed = 1060;
        submunitionAmmo = "rhs_ammo_3bk12_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_bk15_penetrator: rhs_ammo_base_penetrator {
        caliber = 28;
    };
    class rhs_ammo_bk17: rhs_ammo_bk_base {
        submunitionAmmo = "rhs_ammo_bk17_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_bk17_penetrator: rhs_ammo_base_penetrator {
        caliber = 41.3333;
    };
    class rhs_ammo_3bk_base: rhs_ammo_bk_base {
        indirectHit = 20;
        indirectHitRange = 3.6;
        typicalSpeed = 905;
        deflecting = 7;
    };
    class rhs_ammo_3bk12: rhs_ammo_3bk_base {
        hit = 200;
        submunitionAmmo = "rhs_ammo_3bk12_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_3bk12_penetrator: rhs_ammo_base_penetrator {
        caliber = 28;
    };
    class rhs_ammo_3bk14: rhs_ammo_3bk_base {
        hit = 210;
        submunitionAmmo = "rhs_ammo_3bk14_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_3bk14_penetrator: rhs_ammo_3bk12_penetrator {
        caliber = 30;
    };
    class rhs_ammo_3bk18: rhs_ammo_3bk_base {
        hit = 210;
        submunitionAmmo = "rhs_ammo_3bk18_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_3bk18_penetrator: rhs_ammo_3bk12_penetrator {
        caliber = 33.3333;
    };
    class rhs_ammo_3bk18M: rhs_ammo_3bk_base {
        hit = 215;
        submunitionAmmo = "rhs_ammo_3bk18m_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_3bk18m_penetrator: rhs_ammo_3bk12_penetrator {
        caliber = 36.6667;
    };
    class rhs_ammo_3bk21: rhs_ammo_3bk_base {
        hit = 220;
        submunitionAmmo = "rhs_ammo_3bk21_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_3bk21_penetrator: rhs_ammo_3bk12_penetrator {
        caliber = 36.6667;
    };
    class rhs_ammo_3bk29: rhs_ammo_3bk_base {
        hit = 230;
        typicalSpeed = 915;
        warheadName = "TandemHEAT";
        submunitionAmmo = "rhs_ammo_3bk29_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_3bk29_penetrator: rhs_ammo_3bk12_penetrator {
        caliber = 53.3333;
    };
    class rhs_ammo_3bk31: rhs_ammo_3bk_base {
        hit = 235;
        typicalSpeed = 915;
        warheadName = "TandemHEAT";
        submunitionAmmo = "rhs_ammo_3bk31_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_3bk31_penetrator: rhs_ammo_3bk12_penetrator {
        warheadName = "TandemHEAT";
        caliber = 56.6667;
    };
    class rhs_ammo_bp_base: rhs_ammo_bk_base {
        hit = 200;
        indirectHit = 15;
        indirectHitRange = 2;
    };
    class rhs_ammo_bp540: rhs_ammo_bp_base {
        hit = 335;
        typicalSpeed = 676;
        airfriction = -0.000204;
        submunitionAmmo = "rhs_ammo_bp540_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_bp540_penetrator: rhs_ammo_3bk12_penetrator {
        caliber = 16.6667;
    };
    class rhs_ammo_of_base: Sh_125mm_HE {
        explosive = 0.7;
        hit = 150;
        indirectHit = 40;
        indirectHitRange = 8;
        typicalspeed = 750;
        deflecting = 1;
        model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
        cost = 300;
        CraterEffects = "ArtyShellCrater";
        ExplosionEffects = "ArtyShellExplosion";
    };
    class rhs_ammo_of412: rhs_ammo_of_base {};
    class rhs_ammo_of11: rhs_ammo_of_base {
        hit = 170;
        indirectHit = 55;
    };
    class rhs_ammo_of28: rhs_ammo_of_base {
        hit = 180;
        indirectHit = 60;
        typicalspeed = 800;
    };
    class rhs_ammo_of29: rhs_ammo_of_base {
        hit = 180;
        indirectHit = 60;
        typicalspeed = 800;
    };
    class rhs_ammo_3of_base: rhs_ammo_of_base {
        hit = 200;
        indirectHit = 100;
        indirectHitRange = 15;
        typicalSpeed = 850;
        caliber = 5;
        whistleDist = 60;
        rhs_ammo_airburst = "rhs_ammo_3of_airburst";
    };
    class rhs_ammo_3of_airburst: ShellBase {
        explosive = 1;
        typicalSpeed = 100;
        hit = 200;
        indirectHit = 100;
        indirectHitRange = 45;
        explosionEffects = "RHS_Airburst_Explosion";
        explosionSoundEffect = "DefaultExplosion";
        CraterEffects = "";
        CraterWaterEffects = "";
        model = "\A3\Weapons_f\empty";
        timeToLive = 1;
        explosionTime = 0.001;
        soundFly[] = {"", 1, 1};
        soundEngine[] = {"", 1, 4};
        airFriction = 0;
    };
    class rhs_ammo_3of11: rhs_ammo_3of_base {
        airFriction = -0.0002;
        indirectHit = 70;
        indirectHitRange = 14;
    };
    class rhs_ammo_3of26: rhs_ammo_3of_base {
        airFriction = -0.0002;
    };
    class rhs_ammo_9m41: ShellBase {
        hit = 5;
        indirectHit = 0;
        indirectHitRange = 0;
        explosive = 0;
        ExplosionEffects = "";
        soundHit[] = {"", 0, 1};
        CraterEffects = "";
        whistleDist = 0;
    };
    class rhs_ammo_3UOF17: rhs_ammo_3of_base {
        hit = 210;
        indirectHit = 50;
        indirectHitRange = 12;
        typicalSpeed = 250;
        explosive = 0.8;
        cost = 300;
        model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
        airFriction = -0.00001;
        simulationStep = 0.01;
        CraterEffects = "ArtyShellCrater";
        ExplosionEffects = "ArtyShellExplosion";
        caliber = 6;
        whistleDist = 40;
        timeToLive = 35;
    };
    class rhs_ammo_3UOF19: rhs_ammo_3UOF17 {
        hit = 180;
        indirectHit = 40;
        indirectHitRange = 20;
        typicalSpeed = 355;
        explosive = 1.2;
        timeToLive = 35;
    };
    class rhs_ammo_3UOF191: rhs_ammo_3UOF19 {
        simulation = "shotSubmunitions";
        submunitionAmmo = "rhs_ammo_3UOF191_airburst";
        submunitionConeType[] = {"poissondisc", 1};
        submunitionConeAngle = 1;
        triggerDistance = 15;
        weaponType = "cannon";
    };
    class rhs_ammo_3UOF191_airburst: rhs_ammo_3UOF19 {
        indirectHitRange = 34;
        model = "\A3\Weapons_f\empty";
        timeToLive = 1;
        explosionTime = 0.001;
        simulationStep = 0.0005;
        airFriction = 0;
    };
    class G_40mm_HE;
    class rhs_ammo_VOG30: G_40mm_HE {
        hit = 40;
        indirectHit = 7;
        indirectHitRange = 4.174;
        dangerRadiusHit = 50;
        suppressionRadiusHit = 20;
        timetolive = 26;
        class CamShakeExplode {
            power = "(30*0.2)";
            duration = "((round (30^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((3 + 30^0.5)*8)";
        };
        class CamShakeHit {
            power = 20;
            duration = "((round (30^0.25))*0.2 max 0.2)";
            frequency = 20;
            distance = 1;
        };
        class CamShakeFire {
            power = "(0^0.25)";
            duration = "((round (0^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((0^0.5)*8)";
        };
        class CamShakePlayerFire {
            power = 0;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
        submunitionAmmo = "rhs_ammo_VOG30_explosion";
        submunitionConeType[] = {"randomcenter", 1};
        submunitionConeAngle = 0;
        triggerTime = 25;
    };
    class rhs_ammo_VOG30_explosion: G_40mm_HE {
        explosionTime = 0.001;
    };
    class rhs_ammo_GPD30: rhs_ammo_VOG30 {
        hit = 50;
        indirectHit = 7;
        airFriction = -0.00079;
        indirectHitRange = 5.192;
        submunitionAmmo = "rhs_ammo_GPD30_explosion";
    };
    class rhs_ammo_GPD30_explosion: G_40mm_HE {
        explosionTime = 0.001;
    };
    class rhs_ammo_VOG17m: rhs_ammo_VOG30 {
        hit = 35;
        indirectHit = 4;
        indirectHitRange = 3.328;
        submunitionAmmo = "rhs_ammo_VOG17m_explosion";
    };
    class rhs_ammo_VOG17m_explosion: G_40mm_HE {
        explosionTime = 0.001;
    };
    class Sh_155mm_AMOS;
    class rhs_ammo_3WOF27: Sh_155mm_AMOS {
        cost = 100;
        artilleryLock = 1;
        hit = 300;
        indirectHit = 105;
        indirectHitRange = 28;
        timetolive = 220;
        airFriction = -0.00008;
    };
    class rhs_ammo_3WOF27_direct: rhs_ammo_3WOF27 {
        artilleryLock = 0;
    };
    class rhs_ammo_53OF546: rhs_ammo_3WOF27 {};
    class rhs_ammo_53OF546_direct: rhs_ammo_53OF546 {
        artilleryLock = 0;
    };
    class rhs_ammo_3WB3: rhs_ammo_3WOF27 {
        cost = 100;
        artilleryLock = 1;
        simulation = "shotSubmunitions";
        submunitionAmmo = "rhs_ammo_3WB3_submunition";
        submunitionConeType[] = {"poissondisc", 1};
        submunitionConeAngle = 1;
        simulationStep = 0.01;
        triggerDistance = 15;
        aimAboveTarget[] = {10};
        aimAboveDefault = 0;
    };
    class rhs_ammo_3WB3_submunition: rhs_ammo_3WOF27 {
        hit = 3000;
        indirectHit = 3000;
        indirectHitRange = 500;
        explosionTime = 0.01;
        ExplosionEffects = "RHS_NukeExplosion5";
        CraterEffects = "";
        SoundSetExplosion[] = {"rhs_nuke_explosion_soundset", "Shell155mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
        class CamShakeExplode {
            power = 100;
            duration = 4.4;
            frequency = 20;
            distance = 13098.9;
        };
        class CamShakeHit {
            power = 500;
            duration = 1;
            frequency = 20;
            distance = 1;
        };
        class CamShakeFire {
            power = 4.72871;
            duration = 4.4;
            frequency = 20;
            distance = 178.885;
        };
        class CamShakePlayerFire {
            power = 2;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
    };
    class rhs_ammo_152_WP: rhs_ammo_3WOF27 {
        hit = 60;
        indirectHit = 50;
        indirectHitRange = 30;
        explosive = 0.8;
        ExplosionEffects = "WPExplosion";
        CraterEffects = "ExploAmmoCrater";
    };
    class Sh_155mm_AMOS_LG;
    class rhs_ammo_3WOF93: Sh_155mm_AMOS_LG {};
    class Flare_82mm_AMOS_White;
    class rhs_ammo_3WS23: SubmunitionBase {
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        explosive = 0;
        ExplosionEffects = "";
        soundHit[] = {"", 0, 1};
        CraterEffects = "";
        whistleDist = 0;
        timeToLive = 90;
        aimAboveTarget[] = {400, 450, 500, 550, 600, 650, 700};
        aimAboveDefault = 3;
        model = "\A3\weapons_f\ammo\shell";
        submunitionAmmo[] = {"rhs_ammo_flare_3WS23", 1};
    };
    class rhs_ammo_flare_3WS23: F_40mm_White {
        triggerTime = 0;
        brightness = 5000;
        lightColor[] = {100, 100, 100, 100};
        timeToLive = 45;
        intensity = 50000;
        flareSize = 70;
        flareMaxDistance = 3000;
        affectedByWind = 1;
    };
    class Smoke_120mm_AMOS_White;
    class rhs_ammo_53WD546U: Smoke_120mm_AMOS_White {
        hit = 8;
        indirectHit = 2;
        indirectHitRange = 4;
        explosive = 0.9;
        suppressionRadiusHit = 60;
        ExplosionEffects = "RHS_D832DUEffect";
        soundHit[] = {"", 0, 1};
        CraterEffects = "";
        whistleDist = 0;
        triggerDistance = -1;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        submunitionAmmo = "rhs_ammo_d832du_smoke";
        submunitionConeAngle[] = {120, 220};
        submunitionConeAngleHorizontal = 720;
        submunitionAutoleveling = 1;
        submunitionInitSpeed = 14;
        submunitionParentSpeedCoef = 0;
        submunitionInitialOffset[] = {0, 0, -7};
        submunitionConeType[] = {"randomupcone", 5};
        SoundSetExplosion[] = {"GrenadeHe_Exp_SoundSet", "GrenadeHe_Tail_SoundSet", "Explosion_Debris_SoundSet"};
    };
    class rhs_ammo_of462: Sh_155mm_AMOS {
        cost = 10;
        artilleryLock = 1;
        hit = 150;
        indirectHit = 105;
        indirectHitRange = 28;
        timetolive = 220;
        class CamShakeExplode {
            power = "(122*0.2)*10";
            duration = "((round (122^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((30 + 122^0.5))";
        };
        class CamShakeHit {
            power = "122 * 10";
            duration = "((round (122^0.25))*0.2 max 0.2)";
            frequency = 20;
            distance = 1;
        };
        class CamShakeFire {
            power = "(122^0.25)*10";
            duration = "((round (122^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((122^0.5))";
        };
        aiAmmoUsageFlags = "64+32+128+256";
    };
    class rhs_ammo_of462_direct: rhs_ammo_of462 {
        artilleryLock = 0;
        airFriction = -0.00012;
    };
    class rhs_ammo_3of56: rhs_ammo_of462 {
        hit = 160;
        indirectHit = 50;
        indirectHitRange = 30;
    };
    class rhs_ammo_3of56_direct: rhs_ammo_3of56 {
        artilleryLock = 0;
        airFriction = -0.00017;
    };
    class rhs_ammo_3of69m: Sh_155mm_AMOS_LG {};
    class rhs_ammo_s463: SubmunitionBase {
        hit = 8;
        indirectHit = 0;
        indirectHitRange = 0;
        explosive = 0;
        ExplosionEffects = "";
        soundHit[] = {"", 0, 1};
        CraterEffects = "";
        whistleDist = 0;
        timeToLive = 90;
        aimAboveTarget[] = {300, 350, 400, 450, 500, 550, 580};
        aimAboveDefault = 2;
        model = "\A3\weapons_f\ammo\shell";
        submunitionAmmo[] = {"rhs_ammo_flare_s463", 1};
    };
    class rhs_ammo_flare_s463: F_40mm_White {
        triggerTime = 0;
        brightness = 5000;
        lightColor[] = {100, 100, 100, 100};
        timeToLive = 30;
        intensity = 50000;
        flareSize = 70;
        flareMaxDistance = 3000;
        affectedByWind = 1;
    };
    class rhs_ammo_s463_direct: rhs_ammo_s463 {
        artilleryLock = 1;
        airFriction = -0.00012;
    };
    class rhs_ammo_d462: Smoke_120mm_AMOS_White {
        hit = 8;
        indirectHit = 2;
        indirectHitRange = 4;
        explosive = 0.9;
        suppressionRadiusHit = 60;
        ExplosionEffects = "RHS_D832DUEffect";
        soundHit[] = {"", 0, 1};
        CraterEffects = "";
        whistleDist = 0;
        triggerDistance = -1;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        submunitionAmmo = "rhs_ammo_d832du_smoke";
        submunitionConeAngle[] = {120, 220};
        submunitionConeAngleHorizontal = 720;
        submunitionAutoleveling = 1;
        submunitionInitSpeed = 14;
        submunitionParentSpeedCoef = 0;
        submunitionInitialOffset[] = {0, 0, -7};
        submunitionConeType[] = {"randomupcone", 5};
        SoundSetExplosion[] = {"GrenadeHe_Exp_SoundSet", "GrenadeHe_Tail_SoundSet", "Explosion_Debris_SoundSet"};
    };
    class rhs_ammo_d462_direct: rhs_ammo_d462 {
        artilleryLock = 0;
        airFriction = -0.00012;
    };
    class Sh_82mm_AMOS;
    class rhs_ammo_3vo18: Sh_82mm_AMOS {
        hit = 145;
        indirectHit = 42;
        indirectHitRange = 18;
    };
    class rhs_ammo_3vs25m: SubmunitionBase {
        hit = 5;
        indirectHit = 0;
        indirectHitRange = 0;
        explosive = 0;
        ExplosionEffects = "";
        soundHit[] = {"", 0, 1};
        CraterEffects = "";
        whistleDist = 0;
        timeToLive = 90;
        aimAboveTarget[] = {160, 180, 200, 240, 300, 340, 360};
        aimAboveDefault = 4;
        model = "\A3\weapons_f\ammo\shell";
        submunitionAmmo[] = {"rhs_ammo_flare_3vs25m", 1};
    };
    class rhs_ammo_flare_3vs25m: F_40mm_White {
        triggerTime = 0;
        brightness = 8500;
        lightColor[] = {100, 100, 100, 100};
        timeToLive = 35;
        intensity = 8500;
        flareSize = 30;
        flareMaxDistance = 3000;
        affectedByWind = 1;
    };
    class rhs_ammo_d832du: Smoke_120mm_AMOS_White {
        hit = 8;
        indirectHit = 2;
        indirectHitRange = 4;
        explosive = 0.9;
        suppressionRadiusHit = 60;
        ExplosionEffects = "RHS_D832DUEffect";
        soundHit[] = {"", 0, 1};
        CraterEffects = "";
        whistleDist = 0;
        triggerDistance = -1;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        submunitionAmmo = "rhs_ammo_d832du_smoke";
        submunitionConeAngle[] = {120, 220};
        submunitionConeAngleHorizontal = 720;
        submunitionAutoleveling = 1;
        submunitionInitSpeed = 14;
        submunitionParentSpeedCoef = 0;
        submunitionInitialOffset[] = {0, 0, -7};
        submunitionConeType[] = {"randomupcone", 5};
        SoundSetExplosion[] = {"GrenadeHe_Exp_SoundSet", "GrenadeHe_Tail_SoundSet", "Explosion_Debris_SoundSet"};
    };
    class rhs_ammo_d832du_smoke: SmokeShell {
        simulation = "shotSmoke";
        effectsSmoke = "RHS_D832DUBurnEffect";
        model = "\A3\weapons_f\ammo\shell_smoke";
    };
    class M_Titan_AT: MissileBase {
        class Components;
    };
    class rhs_ammo_atgmCore_base: M_Titan_AT {
        scope = 2;
        model = "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_atgm_base";
        hit = 240;
        indirectHit = 20;
        indirectHitRange = 4.2;
        missileManualControlCone = 50;
        canLock = 0;
        manualControl = 1;
        maxControlRange = 4500;
        trackOversteer = 0.3;
        trackLead = 0.2;
        weaponLockSystem = 1;
        maneuvrability = 8;
        timeToLive = 25;
        simulationStep = 0.005;
        sideAirFriction = 0.05;
        maxSpeed = 200;
        initTime = 0;
        thrustTime = 1.5;
        thrust = 250;
        deflecting = 0;
        fuseDistance = 50;
        whistleDist = 2;
        class Direct;
        flightProfiles[] = {"Direct"};
        CraterEffects = "ATRocketCrater";
        explosionEffects = "ATRocketExplosion";
        effectsMissileInit = "RocketBackEffectsNLAW";
        effectsMissile = "RHS_missile2";
        textureType = "semi";
        lockType = 0;
        soundFly[] = {
            "A3\Sounds_F\weapons\Rockets\rocket_fly_2",
            1,
            1,
            800
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
        class EventHandlers;
    };
    class rhs_ammo_atgmBase_base: M_Titan_AT {
        model = "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_atgm_base";
        flightProfiles[] = {"Direct"};
        hit = 240;
        indirectHit = 20;
        indirectHitRange = 4.2;
        cost = 800;
        maxSpeed = 115;
        canlock = 0;
        lockType = 0;
        irLock = 1;
        weaponLockSystem = 1;
        trackOversteer = 0.3;
        trackLead = 0.85;
        manualControl = 1;
        maxControlRange = 3000;
        initTime = 0;
        missileManualControlCone = 50;
        airfriction = -0.00002;
        sideairfriction = 0.14;
        thrustTime = 2.5;
        thrust = 100;
        maneuvrability = 4;
        typicalSpeed = 115;
        fuseDistance = 100;
        effectsMissileInit = "RocketBackEffectsNLAW";
        effectsMissile = "RHS_missile2";
        timeToLive = 26;
        textureType = "semi";
        soundFly[] = {
            "A3\Sounds_F\weapons\Rockets\rocket_fly_2",
            1,
            1,
            800
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
        class EventHandlers;
    };
    class rhs_ammo_9m14: rhs_ammo_atgmBase_base {
        submunitionAmmo = "rhs_ammo_9m14m_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        model = "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_9m14_fly";
        proxyShape = "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_9m14";
        thrustTime = 1.5;
        thrust = 80;
        manualControl = 0;
        missileManualControlCone = 30;
        lockType = 0;
        class EventHandlers: EventHandlers {
            class RHS_Guidance {
                fired = "_this call RHS_fnc_mclosGuide";
            };
        };
    };
    class rhs_ammo_9m14m: rhs_ammo_9m14 {
        thrustTime = 2.5;
        thrust = 100;
        submunitionAmmo = "rhs_ammo_9m14m_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_9m14m_penetrator: rhs_ammo_base_penetrator {
        caliber = 26.6667;
    };
    class rhs_ammo_mclos_training: rhs_ammo_9m14m {
        hit = 24;
        submunitionAmmo = "rhs_ammo_mclos_training_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_mclos_training_penetrator: rhs_ammo_base_penetrator {
        caliber = 0.666667;
    };
    class rhs_ammo_9m17: rhs_ammo_atgmBase_base {
        submunitionAmmo = "rhs_ammo_9m17_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_m_9m17_fly";
        proxyShape = "rhsafrf\addons\rhs_a2port_air\data\rhs_m_9m17";
        typicalSpeed = 115;
        thrustTime = 2.5;
        thrust = 150;
        maxSpeed = 125;
        manualControl = 0;
        lockType = 0;
        maverickWeaponIndexOffset = 40;
        class EventHandlers: EventHandlers {
            class RHS_Guidance {
                fired = "_this call RHS_fnc_mclosGuide";
            };
        };
    };
    class rhs_ammo_9m17_penetrator: rhs_ammo_base_penetrator {
        caliber = 33.3333;
    };
    class rhs_ammo_9m17p: rhs_ammo_9m17 {
        submunitionAmmo = "rhs_ammo_9m17p_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        maxControlRange = 4000;
        missileManualControlCone = 120;
        maxSpeed = 175;
        thrust = 170;
        rhs_saclos = 1;
        rhs_ballisticMode = 1;
        rhs_guideMode = "WIRE";
        class EventHandlers: EventHandlers {
            class RHS_Guidance {
                fired = "_this call RHS_fnc_saclosGuide";
            };
        };
    };
    class rhs_ammo_9m17p_penetrator: rhs_ammo_base_penetrator {
        caliber = 36.6667;
    };
    class rhs_ammo_9m112: rhs_ammo_atgmCore_base {
        warheadName = "TandemHEAT";
        submunitionAmmo = "rhs_ammo_9m112_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        manualcontrol = 0;
        airLock = 1;
        trackLead = 0;
        effectsMissileInit = "RHS_ATGM_Pusher_Eject";
        rhs_saclos = 1;
        rhs_ballisticMode = 1;
        rhs_guideMode = "RADIO";
        class EventHandlers: EventHandlers {
            class RHS_Guidance {
                fired = "_this call RHS_fnc_saclosGuide";
            };
        };
    };
    class rhs_ammo_9m112m: rhs_ammo_9m112 {
        submunitionAmmo = "rhs_ammo_9m112m_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        inittime = 0;
        irlock = 1;
        laserlock = 0;
        maneuvrability = 9;
        sideairfriction = 0.1;
        maxcontrolrange = 4000;
        maxspeed = 500;
        thrust = 112;
        thrusttime = 6;
        timetolive = 30;
    };
    class rhs_ammo_9m112m2: rhs_ammo_9m112m {
        submunitionAmmo = "rhs_ammo_9m112m_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_9m124: rhs_ammo_9m112m {
        submunitionAmmo = "rhs_ammo_9m124_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_9m112_penetrator: rhs_ammo_base_penetrator {
        warheadName = "TandemHEAT";
        caliber = 40;
    };
    class rhs_ammo_9m112m_penetrator: rhs_ammo_9m112_penetrator {
        caliber = 48;
    };
    class rhs_ammo_9m112m2_penetrator: rhs_ammo_9m112_penetrator {
        caliber = 56;
    };
    class rhs_ammo_9m124_penetrator: rhs_ammo_9m112_penetrator {
        caliber = 62.6667;
    };
    class rhs_ammo_9m128: rhs_ammo_atgmCore_base {
        submunitionAmmo = "rhs_ammo_9m128_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        maxControlRange = 5000;
    };
    class rhs_ammo_9m128_penetrator: rhs_ammo_9m112_penetrator {
        warheadName = "TandemHEAT";
        hit = 250;
        caliber = 50;
    };
    class rhs_ammo_9m111: rhs_ammo_atgmBase_base {
        model = "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_9m113";
        submunitionAmmo = "rhs_ammo_9m111_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        indirectHit = 20;
        indirectHitRange = 4.2;
        initTime = 0.25;
        maneuvrability = 8;
        trackOversteer = 0.3;
        trackLead = 0;
        sideairfriction = 0.05;
        simulationstep = 0.001;
        thrustTime = 1.5;
        thrust = 200;
        typicalSpeed = 900;
        fuseDistance = 70;
        timeToLive = 20;
        maxSpeed = 186;
        manualControl = 0;
        missileManualControlCone = 60;
        maxControlRange = 2000;
        rhs_saclos = 1;
        rhs_ballisticMode = 0;
        rhs_guideMode = "WIRE";
        class EventHandlers: EventHandlers {
            class RHS_Guidance {
                fired = "_this call RHS_fnc_saclosGuide";
            };
        };
    };
    class rhs_ammo_9m111m: rhs_ammo_9m111 {
        submunitionAmmo = "rhs_ammo_9m111m_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        maxControlRange = 2500;
    };
    class rhs_ammo_9m111_penetrator: rhs_ammo_base_penetrator {
        caliber = 26.6667;
    };
    class rhs_ammo_9m111m_penetrator: rhs_ammo_base_penetrator {
        caliber = 40;
    };
    class rhs_ammo_9m113: rhs_ammo_atgmBase_base {
        model = "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_9m113";
        submunitionAmmo = "rhs_ammo_9m113_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        indirectHit = 20;
        indirectHitRange = 4.2;
        initTime = 0.25;
        maneuvrability = 14;
        trackOversteer = 0.6;
        trackLead = 0.6;
        sideairfriction = 0.05;
        simulationstep = 0.001;
        thrustTime = 1.5;
        thrust = 200;
        typicalSpeed = 900;
        fuseDistance = 70;
        timeToLive = 20;
        maxSpeed = 200;
        manualControl = 0;
        missileManualControlCone = 60;
        maxControlRange = 4000;
        rhs_saclos = 1;
        rhs_ballisticMode = 0;
        rhs_guideMode = "WIRE";
        class EventHandlers: EventHandlers {
            class RHS_Guidance {
                fired = "_this call RHS_fnc_saclosGuide";
            };
        };
    };
    class rhs_ammo_9m113m: rhs_ammo_9m113 {
        submunitionAmmo = "rhs_ammo_9m113m_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_9m113_penetrator: rhs_ammo_base_penetrator {
        caliber = 40;
    };
    class rhs_ammo_9m113m_penetrator: rhs_ammo_base_penetrator {
        warheadName = "TandemHEAT";
        caliber = 50;
    };
    class rhs_ammo_9m117: rhs_ammo_atgmCore_base {
        submunitionAmmo = "rhs_ammo_9m117_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        model = "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_atgm_base";
        indirectHitRange = 4.2;
        cost = 100;
        canlock = 1;
        irlock = 1;
        airLock = 1;
        laserlock = 0;
        manualControl = 0;
        missileManualControlCone = 20;
        maxcontrolrange = 4000;
        weaponLockSystem = "1+4";
        maxSpeed = 380;
        typicalSpeed = 300;
        inittime = 0;
        thrust = 122;
        thrusttime = 6;
        timetolive = 30;
        airFriction = 0.1;
        sideairfriction = 0.1;
        trackOversteer = 0.3;
        trackLead = 1;
        maneuvrability = 17;
        rhs_saclos = 1;
        rhs_ballisticMode = 1;
        rhs_guideMode = "BEAMRIDER";
        class EventHandlers: EventHandlers {
            class RHS_Guidance {
                fired = "_this call RHS_fnc_saclosGuide";
            };
        };
    };
    class rhs_ammo_9m117_penetrator: rhs_ammo_base_penetrator {
        caliber = 40;
    };
    class rhs_ammo_9m117m: rhs_ammo_9m117 {
        maxcontrolrange = 5500;
        airFriction = 0.035;
        thrust = 222;
        thrusttime = 7;
        warheadName = "TandemHEAT";
        submunitionAmmo = "rhs_ammo_9m117m_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_9m117m_penetrator: rhs_ammo_base_penetrator {
        warheadName = "TandemHEAT";
        caliber = 43.3333;
    };
    class rhs_ammo_9m117m1: rhs_ammo_9m117m {
        maxcontrolrange = 6000;
        submunitionAmmo = "rhs_ammo_9m117m1_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_9m117m1_penetrator: rhs_ammo_base_penetrator {
        warheadName = "TandemHEAT";
        caliber = 50;
    };
    class rhs_ammo_9m118: rhs_ammo_9m117 {
        submunitionAmmo = "rhs_ammo_9m118_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_9m118_penetrator: rhs_ammo_base_penetrator {
        caliber = 43.3333;
    };
    class rhs_ammo_9m119: rhs_ammo_atgmCore_base {
        submunitionAmmo = "rhs_ammo_9m119_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        maxControlRange = 5000;
        trackOversteer = 0.3;
        trackLead = 0.3;
        maneuvrability = 9;
        typicalSpeed = 120;
        maxSpeed = 420;
        inittime = 0.1;
        airLock = 1;
        irlock = 1;
        laserlock = 0;
        manualControl = 0;
        sideairfriction = 0.1;
        thrust = 112;
        thrusttime = 6;
        timetolive = 30;
        weaponLockSystem = "1+4";
        effectsMissileInit = "RHS_ATGM_Pusher_Eject";
        rhs_saclos = 1;
        rhs_guideMode = "BEAMRIDER";
        rhs_ballisticMode = 1;
        class EventHandlers: EventHandlers {
            class RHS_Guidance {
                fired = "_this call RHS_fnc_saclosGuide";
            };
        };
    };
    class rhs_ammo_9m119_penetrator: rhs_ammo_base_penetrator {
        hit = 250;
        caliber = 46.6667;
    };
    class rhs_ammo_9m119m: rhs_ammo_9m119 {
        submunitionAmmo = "rhs_ammo_9m119m_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_9m119m_penetrator: rhs_ammo_base_penetrator {
        warheadName = "TandemHEAT";
        caliber = 56.6667;
    };
    class rhs_ammo_9m119f: rhs_ammo_9m119 {
        AIAmmoUsageFlags = "64+128+256";
        submunitionAmmo[] = {};
        hit = 100;
        indirectHit = 70;
        indirectHitRange = 12;
        cost = 100;
        explosive = 1;
        allowAgainstInfantry = 1;
        CraterEffects = "ArtyShellCrater";
        explosionEffects = "RHS_FAE_Explosion";
        effectsMissile = "rhs_missile3";
        class CamShakeExplode {
            power = "(210*0.2)";
            duration = "((round (210^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((5 + 210^0.5)*8)";
        };
        class CamShakeFire {
            power = 10;
            duration = 0.5;
            frequency = 20;
            distance = 30;
        };
        class CamShakePlayerFire {
            power = 5;
            duration = 0.1;
            frequency = 20;
        };
    };
    class rhs_ammo_9m115: rhs_ammo_9m119 {
        model = "\A3\Weapons_F_Tank\Launchers\Vorona\Vorona_missile_heat_fly";
        submunitionAmmo = "rhs_ammo_9m115_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        maxControlRange = 1000;
        initTime = 0.25;
        maxSpeed = 223;
        timetolive = 12;
        effectsMissileInit = "RocketBackEffectsStaticRPG";
        effectsMissile = "rhs_missile2";
        class CamShakeExplode {
            power = "(55*0.2)";
            duration = "((round (55^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((4 + 55^0.5)*8)";
        };
        class CamShakeHit {
            power = 110;
            duration = "((round (110^0.25))*0.2 max 0.2)";
            frequency = 20;
            distance = 1;
        };
        class CamShakeFire {
            power = "(60^0.25)";
            duration = "((round (60^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((60^0.5)*8)";
        };
        class CamShakePlayerFire {
            power = 3;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
        rhs_saclos = 1;
        rhs_ballisticMode = 1;
        rhs_guideMode = "WIRE";
        class EventHandlers: EventHandlers {
            class RHS_Guidance {
                fired = "_this call RHS_fnc_saclosGuide";
            };
        };
    };
    class rhs_ammo_9m115_penetrator: rhs_ammo_base_penetrator {
        caliber = 36.6667;
    };
    class rhs_ammo_9m131: rhs_ammo_9m115 {
        submunitionAmmo = "rhs_ammo_9m131_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        maxControlRange = 1500;
        airFriction = 0.14;
        thrusttime = 2;
    };
    class rhs_ammo_9m131_penetrator: rhs_ammo_base_penetrator {
        warheadName = "TandemHEAT";
        caliber = 56.6667;
    };
    class rhs_ammo_9m131m: rhs_ammo_9m131 {
        submunitionAmmo = "rhs_ammo_9m131m_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        maxControlRange = 2000;
    };
    class rhs_ammo_9m131m_penetrator: rhs_ammo_base_penetrator {
        warheadName = "TandemHEAT";
        caliber = 63.3333;
    };
    class rhs_ammo_9m131f: rhs_ammo_9m131m {
        AIAmmoUsageFlags = "64+128+256";
        submunitionAmmo = "";
        hit = 120;
        indirectHit = 100;
        indirectHitRange = 12;
        cost = 100;
        explosive = 1;
        allowAgainstInfantry = 1;
        CraterEffects = "ArtyShellCrater";
        explosionEffects = "RHS_FAE_Explosion";
        effectsMissile = "rhs_missile3";
        class CamShakeExplode {
            power = "(210*0.2)";
            duration = "((round (210^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((5 + 210^0.5)*8)";
        };
        class CamShakeFire {
            power = 10;
            duration = 0.5;
            frequency = 20;
            distance = 30;
        };
        class CamShakePlayerFire {
            power = 5;
            duration = 0.1;
            frequency = 20;
        };
    };
    class rhs_ammo_9m133: rhs_ammo_atgmBase_base {
        model = "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_9m133";
        submunitionAmmo = "rhs_ammo_9m133_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        indirectHit = 18;
        indirectHitRange = 4.5;
        whistleDist = 3;
        canlock = 1;
        irLock = 1;
        trackOversteer = 0.3;
        trackLead = 1;
        maneuvrability = 9;
        typicalSpeed = 120;
        maxSpeed = 300;
        inittime = 0.25;
        laserlock = 0;
        manualControl = 0;
        missileManualControlCone = 20;
        airFriction = 0.13;
        sideairfriction = 0.1;
        maxcontrolrange = 5000;
        thrust = 152;
        thrusttime = 3;
        timetolive = 30;
        rhs_saclos = 1;
        rhs_ballisticMode = 1;
        rhs_guideMode = "BEAMRIDER";
        class EventHandlers: EventHandlers {
            class RHS_Guidance {
                fired = "_this call RHS_fnc_saclosGuide";
            };
        };
    };
    class rhs_ammo_9m133_penetrator: rhs_ammo_base_penetrator {
        warheadName = "TandemHEAT";
        hit = 290;
        caliber = 66.6667;
    };
    class rhs_ammo_9m133f: rhs_ammo_9m131f {
        hit = 125;
        indirectHit = 100;
        indirectHitRange = 12;
    };
    class rhs_ammo_9m1331: rhs_ammo_9m133 {
        submunitionAmmo = "rhs_ammo_9m1331_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_9m1331_penetrator: rhs_ammo_9m133_penetrator {
        warheadName = "TandemHEAT";
        caliber = 73.3333;
    };
    class rhs_ammo_9m133m2: rhs_ammo_9m133 {
        submunitionAmmo = "rhs_ammo_9m133m2_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_9m133m2_penetrator: rhs_ammo_9m133_penetrator {
        warheadName = "TandemHEAT";
        caliber = 86.6667;
    };
    class rhs_ammo_3m7: rhs_ammo_atgmBase_base {
        submunitionAmmo = "rhs_ammo_9m7_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        indirectHit = 20;
        indirectHitRange = 3.2;
        whistleDist = 3;
        canlock = 1;
        irLock = 1;
        trackOversteer = 0.3;
        trackLead = 1;
        maneuvrability = 17;
        typicalSpeed = 120;
        maxSpeed = 781;
        inittime = 0;
        laserlock = 0;
        manualcontrol = 1;
        sideairfriction = 0.1;
        maxcontrolrange = 5000;
        thrust = 112;
        thrusttime = 2.5;
        timetolive = 30;
        proxyShape = "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_3m7";
    };
    class rhs_ammo_9m7_penetrator: rhs_ammo_base_penetrator {
        hit = 250;
        caliber = 16.6667;
    };
    class rhs_proxy_ags30_mag: rhs_ammo_atgmBase_base {
        maverickWeaponIndexOffset = 0;
        proxyShape = "\rhsafrf\addons\rhs_heavyweapons\AGS30\AGS_magazine.p3d";
    };
    class rhs_proxy_pkm_mag: rhs_ammo_atgmBase_base {
        maverickWeaponIndexOffset = 19;
        proxyShape = "\rhsafrf\addons\rhs_tigr\sts_proxies\sts_pkm_mag_proxy.p3d";
    };
    class R_230mm_HE;
    class R_230mm_fly;
    class Mo_cluster_AP;
    class rhs_ammo_m21OF_HE: R_230mm_HE {
        submunitionAmmo = "rhs_m21OF_fly";
        model = "\rhsafrf\addons\rhs_heavyweapons\grad\rhs_r_m21OF";
        proxyShape = "\rhsafrf\addons\rhs_heavyweapons\grad\rhs_r_m21OF_in";
        class CamShakeExplode {
            power = 24.4;
            duration = 2.2;
            frequency = 20;
            distance = 328.363;
        };
        class CamShakeHit {
            power = 122;
            duration = 0.6;
            frequency = 20;
            distance = 1;
        };
        class CamShakeFire {
            power = 3.32346;
            duration = 2.2;
            frequency = 20;
            distance = 88.3629;
        };
        class CamShakePlayerFire {
            power = 2;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
    };
    class rhs_m21OF_fly: R_230mm_fly {
        model = "\rhsafrf\addons\rhs_heavyweapons\grad\rhs_r_m21OF_fly";
        hit = 900;
        indirectHit = 500;
        indirectHitRange = 25;
        audibleFire = 64;
        class CamShakeExplode {
            power = 24.4;
            duration = 2.2;
            frequency = 20;
            distance = 328.363;
        };
        class CamShakeHit {
            power = 122;
            duration = 0.6;
            frequency = 20;
            distance = 1;
        };
        class CamShakeFire {
            power = 3.32346;
            duration = 2.2;
            frequency = 20;
            distance = 88.3629;
        };
        class CamShakePlayerFire {
            power = 2;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
    };
    class rhs_ammo_9m28f: rhs_ammo_m21OF_HE {
        submunitionAmmo = "rhs_9m28f_fly";
    };
    class rhs_9m28f_fly: rhs_m21OF_fly {
        hit = 1100;
        indirectHit = 500;
        indirectHitRange = 45;
    };
    class rhs_ammo_9m28k: rhs_ammo_m21OF_HE {
        triggerDistance = 250;
        triggerSpeedCoef[] = {0.5, 1};
        submunitionConeAngle = 19;
        submunitionConeType[] = {"randomcenter", 3};
        submunitionAmmo[] = {
            "rhs_ammo_ptm3_deploy",
            0.93,
            "Mo_cluster_AP_UXO_deploy",
            0.07
        };
    };
    class rhs_ammo_9m218: rhs_ammo_m21OF_HE {
        triggerDistance = 250;
        triggerSpeedCoef[] = {0.5, 1};
        submunitionConeAngle = 19;
        submunitionConeType[] = {"randomcenter", 45};
        submunitionAmmo[] = {
            "rhs_ammo_9m218_submunition",
            0.93,
            "Mo_cluster_AP_UXO_deploy",
            0.07
        };
    };
    class rhs_ammo_9m218_submunition: Mo_cluster_AP {
        submunitionAmmo = "rhs_ammo_9m218_submunition_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        model = "\rhsafrf\addons\rhs_airweapons\rhs_m_ptab25m";
        hit = 50;
        indirectHitRange = 4;
    };
    class rhs_ammo_9m218_submunition_penetrator: rhs_ammo_cluster_penetrator {
        hit = 130;
        submunitionConeType[] = {"randomcenter", 5};
        caliber = 8;
    };
    class rhs_ammo_9m521: rhs_ammo_m21OF_HE {
        submunitionAmmo = "rhs_9m521_fly";
    };
    class rhs_9m521_fly: rhs_m21OF_fly {
        hit = 1100;
        indirectHit = 500;
        indirectHitRange = 35;
    };
    class rhs_ammo_9m522: rhs_ammo_m21OF_HE {
        submunitionAmmo = "rhs_9m2522_fly";
    };
    class rhs_9m2522_fly: rhs_m21OF_fly {
        hit = 1400;
        indirectHit = 800;
        indirectHitRange = 45;
    };
    class RocketBase;
    class rhs_ammo_rpgShell_base: RocketBase {
        model = "\rhsafrf\addons\rhs_heavyweapons\SPG9\og9_projectile";
        hit = 85;
        indirectHit = 45;
        indirectHitRange = 6;
        cost = 250;
        typicalspeed = 700;
        explosive = 0.8;
        maxSpeed = 700;
        airfriction = 0.45;
        sideAirFriction = 0.01;
        initTime = 0.15;
        fuseDistance = 12;
        thrustTime = 0.35;
        thrust = 1400;
        timeToLive = 8;
        whistleOnFire = 1;
        whistleDist = 14;
        tracerScale = 2;
        tracerStartTime = 0.1;
        tracerEndTime = 2.3;
        effectsmissileinit = "";
        CraterEffects = "ATRocketCrater";
        explosionEffects = "ATRocketExplosion";
        soundFly[] = {
            "A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",
            1.1,
            0.7,
            250
        };
    };
    class rhs_ammo_og9v: rhs_ammo_rpgShell_base {
        AIAmmoUsageFlags = "64+128+256";
        thrustTime = 0;
        thrust = 0;
        airfriction = 0.074;
        sideAirFriction = 0.5;
        smokeTrail = 2;
        whistleDist = 2;
        CraterEffects = "HEShellCrater";
        CraterWaterEffects = "ImpactEffectsWaterHE";
        ExplosionEffects = "HEShellExplosion";
        effectsMissile = "missile3";
        effectsmissileinit = "RocketBackEffectsStaticRPG";
        warheadName = "HE";
    };
    class rhs_ammo_og9vm: rhs_ammo_og9v {
        hit = 95;
        indirectHit = 55;
    };
    class rhs_ammo_pg9v: rhs_ammo_rpgShell_base {
        model = "\rhsafrf\addons\rhs_heavyweapons\SPG9\pg9_projectile";
        hit = 205;
        indirectHit = 20;
        indirectHitRange = 4.2;
        cost = 200;
        aiAmmoUsageFlags = "128+512";
        smokeTrail = 2;
        whistleDist = 2;
        effectsMissile = "missile3";
        effectsmissileinit = "RocketBackEffectsStaticRPG";
        warheadName = "HEAT";
        submunitionAmmo = "rhs_ammo_pg9v_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_pg9v_penetrator: rhs_ammo_base_penetrator {
        hit = 220;
        caliber = 20;
    };
    class rhs_ammo_pg9n: rhs_ammo_pg9v {
        warheadName = "TandemHEAT";
        submunitionAmmo = "rhs_ammo_pg9n_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_pg9n_penetrator: rhs_ammo_base_penetrator {
        hit = 230;
        caliber = 26.6667;
    };
    class rhs_ammo_pg9vnt: rhs_ammo_pg9v {
        warheadName = "TandemHEAT";
        submunitionAmmo = "rhs_ammo_pg9n_penetrator";
    };
    class rhs_ammo_pg9vnt_penetrator: rhs_ammo_base_penetrator {
        hit = 280;
        caliber = 36.6667;
    };
    class rhs_ammo_rpg15Shell_base: ShellBase {
        simulation = "shotShell";
        hit = 85;
        indirectHit = 45;
        indirectHitRange = 5;
        typicalspeed = 350;
        explosive = 0.8;
        deflecting = 2;
        cost = 250;
        tracerScale = 1;
        tracerStartTime = 0.001;
        tracerEndTime = 12;
        initTime = -1;
        model = "\rhsafrf\addons\rhs_heavyweapons\SPG9\pg9_shell";
        airfriction = -0.00017;
        soundFly[] = {
            "A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",
            1.1,
            0.7,
            250
        };
        soundHit1[] = {
            "A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01",
            1.77828,
            1,
            1800
        };
        soundHit2[] = {
            "A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02",
            1.77828,
            1,
            1800
        };
        soundHit3[] = {
            "A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03",
            1.77828,
            1,
            1800
        };
        soundHit4[] = {
            "A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04",
            1.77828,
            1,
            1800
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
        CraterEffects = "ATRocketCrater";
        explosionEffects = "ATRocketExplosion";
    };
    class rhs_ammo_og15v: rhs_ammo_rpg15Shell_base {
        AIAmmoUsageFlags = "64+128+256";
        airfriction = -0.00011934;
        model = "\rhsafrf\addons\rhs_heavyweapons\SPG9\og9_shell";
        CraterEffects = "HEShellCrater";
        CraterWaterEffects = "ImpactEffectsWaterHE";
        ExplosionEffects = "HEShellExplosion";
        warheadName = "HE";
    };
    class rhs_ammo_og15v_rocket: rhs_ammo_og9v {
        effectsmissileinit = "";
    };
    class rhs_ammo_pg15v: rhs_ammo_rpg15Shell_base {
        hit = 205;
        indirectHit = 20;
        indirectHitRange = 4.2;
        airfriction = -0.00084;
        warheadName = "HEAT";
        submunitionAmmo = "rhs_ammo_pg15v_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_pg15v_rocket: rhs_ammo_pg9v {
        hit = 205;
        indirectHit = 20;
        indirectHitRange = 4.2;
        typicalspeed = 800;
        cost = 500;
        effectsmissileinit = "";
    };
    class rhs_ammo_pg15v_penetrator: rhs_ammo_base_penetrator {
        hit = 230;
        caliber = 26.6667;
    };
    class B_30mm_AP;
    class rhs_ammo_30x165mm_base: B_30mm_AP {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        hit = 72;
        indirectHit = 0;
        indirectHitRange = 0;
        visibleFire = 32;
        audibleFire = 32;
        visibleFireTime = 3;
        cost = 55;
        irLock = 1;
        tracerScale = 2;
        tracerStartTime = 0.1;
        tracerEndTime = 3.5;
        airFriction = -0.000855;
        muzzleEffect = "";
        caliber = 4.17;
        airLock = 1;
        timeToLive = 25;
        weaponType = "special";
        missileLockMaxDistance = 1000;
        missileLockMinDistance = 80;
        aiAmmoUsageFlags = "128 + 512 + 256";
    };
    class rhs_ammo_3ubr6: rhs_ammo_30x165mm_base {
        hit = 60;
        displayName = "$STR_RHS_AMMO_3UBR6";
        caliber = 3.78007;
        typicalspeed = 1120;
        airfriction = -0.00056;
    };
    class rhs_ammo_3ubr8: rhs_ammo_30x165mm_base {
        hit = 90;
        caliber = 3.92857;
        typicalspeed = 1120;
        airfriction = -0.00056;
        cost = 75;
        class HitEffects {
            hitMetal = "ImpactMetalSabotSmall";
            hitMetalPlate = "ImpactMetalSabotSmall";
            hitBuilding = "ImpactConcreteSabotSmall";
            hitConcrete = "ImpactConcreteSabotSmall";
            hitGroundSoft = "ImpactEffectsGroundSabot";
            hitGroundHard = "ImpactEffectsGroundSabot";
            Hit_Foliage_green = "ImpactLeavesGreen";
            Hit_Foliage_Dead = "ImpactLeavesDead";
            Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
            Hit_Foliage_Palm = "ImpactLeavesPalm";
            Hit_Foliage_Pine = "ImpactLeavesPine";
            hitFoliage = "ImpactLeaves";
            hitGlass = "ImpactGlass";
            hitGlassArmored = "ImpactGlassThin";
            hitWood = "ImpactWood";
            hitPlastic = "ImpactPlastic";
            hitRubber = "ImpactRubber";
            hitMan = "ImpactEffectsBlood";
            hitWater = "ImpactEffectsWater";
            default_mat = "ImpactEffectsGroundSabot";
        };
        class CamShakeExplode {
            power = "(45^0.5)";
            duration = "((round (45^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((45^0.5)*3)";
        };
        class CamShakeHit {
            power = 45;
            duration = "((round (45^0.25))*0.2 max 0.2)";
            frequency = 20;
            distance = 1;
        };
        class CamShakeFire {
            power = "(30^0.25)";
            duration = "((round (30^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((30^0.5)*8)";
        };
        class CamShakePlayerFire {
            power = 0.01;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
    };
    class rhs_ammo_gsh30_bt: rhs_ammo_3ubr8 {
        cost = 10;
        AIAmmoUsageFlags = "64 + 128 + 256";
        weaponType = "mgun";
    };
    class rhs_ammo_gsh30_mixed: SubmunitionBase {
        hit = 90;
        typicalspeed = 1120;
        airfriction = -0.00056;
        visibleFire = 32;
        audibleFire = 32;
        visibleFireTime = 3;
        airLock = 1;
        AIAmmoUsageFlags = "64 + 128 + 256";
        cost = 10;
        model = "\A3\Weapons_f\empty";
        submunitionAmmo[] = {
            "rhs_ammo_3ubr8",
            0.33,
            "rhs_ammo_3uof8",
            0.33,
            "rhs_ammo_3uor6",
            0.33
        };
        weaponType = "mgun";
        simulation = "shotSubmunitions";
        triggerTime = 0.01;
        missileLockMaxDistance = 1000;
        missileLockMinDistance = 80;
    };
    class rhs_ammo_3ubr11: rhs_ammo_3ubr8 {
        hit = 95;
        caliber = 5.47619;
    };
    class B_30mm_HE;
    class rhs_ammo_3uor6: B_30mm_HE {
        hit = 45;
        indirectHit = 25;
        indirectHitRange = 4;
        CraterEffects = "ExploAmmoCrater";
        explosionEffects = "ExploAmmoExplosion";
        cost = 20;
        explosive = 0.6;
        airfriction = -0.0002;
        caliber = 1.39;
        timeToLive = 15;
        displayName = "$STR_RHS_AMMO_3UOR6";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerScale = 2;
        tracerStartTime = 0.1;
        tracerEndTime = 10;
        allowAgainstInfantry = 1;
        aiAmmoUsageFlags = "64 + 128 + 256";
        weaponType = "special";
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
    class rhs_ammo_3uof8: rhs_ammo_3uor6 {
        hit = 50;
        indirectHit = 33;
        displayName = "$STR_RHS_AMMO_3UOF8";
    };
    class B_127x108_Ball;
    class rhs_ammo_127x107mm: B_127x108_Ball {
        hit = 25;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        timeToLive = 25;
        tracerEndTime = 3;
    };
    class rhs_ammo_127x108mm: rhs_ammo_127x107mm {};
    class rhs_ammo_127x108mm_notracer: rhs_ammo_127x108mm {
        model = "\A3\Weapons_f\empty";
    };
    class rhs_ammo_127x108mm_x5: SubmunitionBase {
        explosive = 0;
        allowAgainstInfantry = 1;
        airlock = 1;
        airfriction = -0.0009;
        audiblefire = 22;
        visiblefire = 22;
        visiblefiretime = 3;
        submunitionAmmo[] = {
            "rhs_ammo_127x108mm_notracer",
            0.85,
            "rhs_ammo_127x108mm",
            0.15
        };
        submunitionConeType[] = {"randomcenter", 5};
        cost = 10;
        submunitionConeAngle = 0.45;
        triggerTime = 0.01;
        triggerSpeedCoef[] = {0.8, 1};
        model = "\A3\Weapons_f\empty";
        cartridge = "FxCartridge_127";
        explosionEffects = "";
        CraterEffects = "";
        hit = 25;
        timeToLive = 15;
        class CamShakeExplode {
            power = 2.4;
            duration = 0.6;
            frequency = 20;
            distance = 51.7128;
        };
        class CamShakeHit {
            power = 12;
            duration = 0.4;
            frequency = 20;
            distance = 1;
        };
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
    class rhs_ammo_127x108mm_1SLT: rhs_ammo_127x108mm_x5 {
        submunitionConeType[] = {"randomcenter", 2};
        submunitionConeAngle = 0.207;
        weaponType = "mGun";
    };
    class rhs_ammo_127x108mm_1SLT_x5: rhs_ammo_127x108mm_x5 {
        submunitionConeType[] = {"randomcenter", 10};
        submunitionConeAngle = 0.54;
    };
    class rhs_ammo_145x115mm: rhs_ammo_127x107mm {
        tracerEndTime = 2.35;
        typicalSpeed = 988;
        airFriction = -0.00052;
        caliber = 2.76653;
    };
    class rhs_ammo_BS32_145x115mm: rhs_ammo_145x115mm {
        caliber = 2.05803;
    };
    class B_35mm_AA;
    class RHS_ammo_23mm_AA: B_35mm_AA {
        hit = 60;
        indirectHit = 40;
        indirectHitRange = 1.8;
        visibleFire = 32;
        audibleFire = 32;
        visibleFireTime = 4;
        explosive = 0.6;
        airLock = 1;
        cost = 15;
        timeToLive = 14;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
        tracerScale = 1.85;
        tracerStartTime = 0.1;
        tracerEndTime = 5.5;
        airFriction = -0.000471;
        muzzleEffect = "";
        caliber = 1.11;
    };
    class RHS_ammo_23mm_AA_mixed: SubmunitionBase {
        airLock = 1;
        AIAmmoUsageFlags = "256+128+64";
        airFriction = -0.000471;
        cost = 10;
        model = "\A3\Weapons_f\empty";
        submunitionAmmo[] = {
            "rhs_ammo_bzt_23x115mm",
            0.25,
            "rhs_ammo_ofz_23x115mm",
            0.75
        };
        weaponType = "cannon";
        simulation = "shotSubmunitions";
        triggerTime = 0.01;
    };
    class rhs_ammo_ofz_23x115mm: RHS_ammo_23mm_AA {
        model = "\A3\Weapons_f\empty";
    };
    class rhs_ammo_ofzt_23x115mm: rhs_ammo_ofz_23x115mm {
        indirectHit = 30;
        indirectHitRange = 1.1;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class rhs_ammo_bzt_23x115mm: rhs_ammo_30x165mm_base {
        explosive = 0;
        hit = 80;
        indirectHit = 1;
        indirectHitRange = 0.3;
        tracerEndTime = 5.5;
        airFriction = -0.000471;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
        caliber = 3.65854;
    };
    class rhs_ammo_mixed_23x115mm: SubmunitionBase {
        hit = 60;
        indirectHit = 40;
        indirectHitRange = 1.8;
        visibleFire = 32;
        audibleFire = 32;
        visibleFireTime = 4;
        airlock = 1;
        airFriction = -0.000471;
        typicalSpeed = 960;
        AIAmmoUsageFlags = "256+128+64";
        cost = 10;
        model = "\A3\Weapons_f\empty";
        submunitionAmmo[] = {
            "rhs_ammo_bzt_23x115mm",
            0.8,
            "rhs_ammo_ofz_23x115mm",
            0.2
        };
        weaponType = "cannon";
        simulation = "shotSubmunitions";
        triggerTime = 0.01;
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
    class SmokeLauncherMag;
    class CA_Magazine;
    class VehicleMagazine;
    class rhs_mag_902a: SmokeLauncherMag {
        count = 1;
        scope = 1;
        displayName = "$STR_RHS_MAG_902A";
        displayNameShort = "$STR_RHS_MAG_SH_902A";
        ammo = "rhs_ammo_902a";
    };
    class rhs_mag_3d17: SmokeLauncherMag {
        count = 8;
        scope = 1;
        initSpeed = 50;
        ammo = "rhs_ammo_3d17";
        displayName = "$STR_RHS_MAG_3D17";
        displayNameShort = "$STR_RHS_MAG_SH_3D17";
    };
    class rhs_mag_3d17_4: rhs_mag_3d17 {
        count = 4;
    };
    class rhs_mag_3d17_6: rhs_mag_3d17 {
        count = 6;
    };
    class rhs_mag_3d17_12: rhs_mag_3d17 {
        ammo = "rhs_ammo_3d17_902B";
        count = 12;
    };
    class rhs_mag_smokegen: SmokeLauncherMag {
        count = 999;
        scope = 1;
        ammo = "rhs_ammo_smokegen";
        displayName = "$STR_RHS_MAG_SMOKEGEN";
        displayNameShort = "$STR_RHS_MAG_SH_SMOKEGEN";
    };
    class rhs_mag_dazzler: rhs_mag_smokegen {
        count = 999;
        scope = 1;
        ammo = "rhs_ammo_dazzler";
    };
    class 60Rnd_CMFlare_Chaff_Magazine;
    class rhs_128Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine {
        count = 128;
    };
    class rhs_60Rnd_CMFlare_Magazine: 60Rnd_CMFlare_Chaff_Magazine {
        ammo = "rhs_CMflare_Ammo";
    };
    class rhs_ASO2_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine {
        pylonweapon = "rhs_weap_CMDispenser_ASO2";
        displayname = "1x32 PPI-26 Flare/PPR-26 Chaff";
        hardpoints[] = {"RHS_cm_ASO2"};
        count = 16;
    };
    class rhs_ASO2_CMFlare_Chaff_Magazine_x2: rhs_ASO2_CMFlare_Chaff_Magazine {
        displayname = "2x32 PPI-26 Flare/PPR-26 Chaff";
        hardpoints[] = {"RHS_cm_ASO2_x2"};
        count = 32;
    };
    class rhs_ASO2_CMFlare_Chaff_Magazine_x4: rhs_ASO2_CMFlare_Chaff_Magazine {
        displayname = "4x32 PPI-26 Flare/PPR-26 Chaff";
        hardpoints[] = {"RHS_cm_ASO2_x4"};
        count = 64;
    };
    class rhs_ASO2_CMFlare_Chaff_Magazine_x6: rhs_ASO2_CMFlare_Chaff_Magazine {
        displayname = "6x32 PPI-26 Flare/PPR-26 Chaff";
        hardpoints[] = {"RHS_cm_ASO2_x6"};
        count = 96;
    };
    class rhs_ASO2_CMFlare_Magazine: rhs_ASO2_CMFlare_Chaff_Magazine {
        displayname = "1x32 PPI-26 Flare";
        count = 32;
        ammo = "rhs_CMflare_Ammo";
    };
    class rhs_ASO2_CMFlare_Magazine_x2: rhs_ASO2_CMFlare_Magazine {
        displayname = "2x32 PPI-26 Flare";
        hardpoints[] = {"RHS_cm_ASO2_x2"};
        count = 64;
    };
    class rhs_ASO2_CMFlare_Magazine_x4: rhs_ASO2_CMFlare_Magazine {
        displayname = "4x32 PPI-26 Flare";
        hardpoints[] = {"RHS_cm_ASO2_x4"};
        count = 128;
    };
    class rhs_ASO2_CMFlare_Magazine_x6: rhs_ASO2_CMFlare_Magazine {
        displayname = "6x32 PPI-26 Flare";
        hardpoints[] = {"RHS_cm_ASO2_x6"};
        count = 192;
    };
    class rhs_BVP3026_CMFlare_Chaff_Magazine: rhs_ASO2_CMFlare_Chaff_Magazine {
        pylonweapon = "rhs_weap_CMDispenser_BVP3026";
        hardpoints[] = {"RHS_cm_BVP3026"};
        displayname = "1x30 PPI-26 Flare/PPR-26 Chaff";
        count = 15;
    };
    class rhs_BVP3026_CMFlare_Chaff_Magazine_x2: rhs_BVP3026_CMFlare_Chaff_Magazine {
        hardpoints[] = {"RHS_cm_BVP3026_x2"};
        displayname = "2x30 PPI-26 Flare/PPR-26 Chaff";
        count = 30;
    };
    class rhs_BVP3026_CMFlare_Magazine: rhs_BVP3026_CMFlare_Chaff_Magazine {
        displayname = "1x30 PPI-26 Flare";
        count = 30;
        ammo = "rhs_CMflare_Ammo";
    };
    class rhs_BVP3026_CMFlare_Magazine_x2: rhs_BVP3026_CMFlare_Magazine {
        hardpoints[] = {"RHS_cm_BVP3026_x2"};
        displayname = "2x30 PPI-26 Flare";
        count = 60;
    };
    class rhs_UV26_CMFlare_Chaff_Magazine: rhs_ASO2_CMFlare_Chaff_Magazine {
        pylonweapon = "rhs_weap_CMDispenser_UV26";
        hardpoints[] = {"RHS_cm_UV26"};
    };
    class rhs_UV26_CMFlare_Chaff_Magazine_x2: rhs_ASO2_CMFlare_Chaff_Magazine_x2 {
        pylonweapon = "rhs_weap_CMDispenser_UV26";
        hardpoints[] = {"RHS_cm_UV26_x2"};
    };
    class rhs_UV26_CMFlare_Chaff_Magazine_x4: rhs_ASO2_CMFlare_Chaff_Magazine_x4 {
        pylonweapon = "rhs_weap_CMDispenser_UV26";
        hardpoints[] = {"RHS_cm_UV26_x4"};
    };
    class rhs_UV26_CMFlare_Magazine: rhs_ASO2_CMFlare_Magazine {
        pylonweapon = "rhs_weap_CMDispenser_UV26";
        hardpoints[] = {"RHS_cm_UV26"};
    };
    class rhs_UV26_CMFlare_Magazine_x2: rhs_ASO2_CMFlare_Magazine_x2 {
        pylonweapon = "rhs_weap_CMDispenser_UV26";
        hardpoints[] = {"RHS_cm_UV26_x2"};
    };
    class rhs_UV26_CMFlare_Magazine_x4: rhs_ASO2_CMFlare_Magazine_x4 {
        pylonweapon = "rhs_weap_CMDispenser_UV26";
        hardpoints[] = {"RHS_cm_UV26_x4"};
    };
    class rhs_mag_DIRCM_Vitebsk: CA_Magazine {
        count = 120;
        ammo = "RHS_Ammo_DIRCM_Vitebsk";
        initSpeed = 30;
        weight = 0;
    };
    class rhs_mag_DIRCM_Lipa: rhs_mag_DIRCM_Vitebsk {
        count = 80;
    };
    class rhs_mag_aps_afganit: rhs_mag_smokegen {
        count = 1;
        scope = 1;
        ammo = "rhs_ammo_dazzler";
    };
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
    class rhs_mag_bm_base: VehicleMagazine {
        scope = 2;
        reloadTime = 12;
        magazineReloadTime = 12;
        count = 14;
        initSpeed = 900;
        rhs_magazineIndex = 1;
        maxLeadSpeed = 80;
        muzzleImpulseFactor[] = {"14*0.2", 14};
    };
    class rhs_mag_br412_14: rhs_mag_bm_base {
        displayName = "$STR_RHS_MAG_BR412";
        displayNameShort = "$STR_RHS_MAG_SH_BR412";
        ammo = "rhs_ammo_br412";
        initSpeed = 1450;
    };
    class rhs_mag_br412_17: rhs_mag_br412_14 {
        count = 17;
    };
    class rhs_mag_br540_10: rhs_mag_bm_base {
        displayName = "BR-540 AP";
        displayNameShort = "AP";
        ammo = "rhs_ammo_br540";
        initSpeed = 600;
        count = 10;
    };
    class rhs_mag_br540_4: rhs_mag_bm_base {
        count = 4;
    };
    class rhs_mag_br540: rhs_mag_br540_10 {
        count = 40;
    };
    class rhs_mag_bm25_14: rhs_mag_bm_base {
        displayName = "$STR_RHS_MAG_3UBM11";
        displayNameShort = "$STR_RHS_MAG_SH_3UBM11";
        ammo = "rhs_ammo_bm25";
        initSpeed = 1430;
    };
    class rhs_mag_bm8_14: rhs_mag_bm_base {
        displayName = "$STR_RHS_MAG_3UBM6";
        displayNameShort = "$STR_RHS_MAG_SH_3UBM6";
        ammo = "rhs_ammo_bm8";
        initSpeed = 1415;
    };
    class rhs_mag_bm4_15: rhs_mag_bm_base {
        displayName = "$STR_RHS_MAG_3UBM4";
        displayNameShort = "$STR_RHS_MAG_SH_3UBM4";
        ammo = "rhs_ammo_bm4";
        count = 15;
        initSpeed = 1411;
    };
    class rhs_mag_bm23_15: rhs_mag_bm_base {
        displayName = "$STR_RHS_MAG_3UBM13";
        displayNameShort = "$STR_RHS_MAG_SH_3UBM13";
        ammo = "rhs_ammo_bm23";
        initSpeed = 1450;
        count = 15;
    };
    class rhs_mag_3bm_base: rhs_mag_bm_base {
        reloadTime = 6.5;
        magazineReloadTime = 6.5;
        lastRoundsTracer = 5;
        tracersEvery = 1;
        count = 10;
    };
    class rhs_mag_dummy: rhs_mag_3bm_base {
        ammo = "rhs_ammo_3bm9";
    };
    class rhs_mag_3bm9_10: rhs_mag_3bm_base {
        displayName = "$STR_RHS_MAG_3BM9";
        displayNameShort = "$STR_RHS_MAG_SH_3BM9";
        ammo = "rhs_ammo_3bm9";
        initSpeed = 1800;
    };
    class rhs_mag_3bm9: rhs_mag_3bm9_10 {
        count = 40;
    };
    class rhs_mag_3bm12_10: rhs_mag_3bm_base {
        displayName = "$STR_RHS_MAG_3BM12";
        displayNameShort = "$STR_RHS_MAG_SH_3BM12";
        ammo = "rhs_ammo_3bm12";
        initSpeed = 1800;
    };
    class rhs_mag_3bm12: rhs_mag_3bm12_10 {
        count = 40;
    };
    class rhs_mag_3bm15_10: rhs_mag_3bm_base {
        displayName = "$STR_RHS_MAG_3BM15";
        displayNameShort = "$STR_RHS_MAG_SH_3BM15";
        ammo = "rhs_ammo_3bm15";
        initSpeed = 1785;
    };
    class rhs_mag_3bm15: rhs_mag_3bm15_10 {
        count = 40;
    };
    class rhs_mag_3bm17_10: rhs_mag_3bm_base {
        displayName = "$STR_RHS_MAG_3BM17";
        displayNameShort = "$STR_RHS_MAG_SH_3BM17";
        ammo = "rhs_ammo_3bm17";
        initSpeed = 1760;
    };
    class rhs_mag_3bm17_14: rhs_mag_3bm17_10 {
        count = 14;
    };
    class rhs_mag_3bm17: rhs_mag_3bm17_10 {
        count = 40;
    };
    class rhs_mag_3bm22_10: rhs_mag_3bm_base {
        displayName = "$STR_RHS_MAG_3BM22";
        displayNameShort = "$STR_RHS_MAG_SH_3BM22";
        ammo = "rhs_ammo_3bm22";
        initSpeed = 1760;
    };
    class rhs_mag_3bm22_14: rhs_mag_3bm22_10 {
        count = 14;
    };
    class rhs_mag_3bm22_7: rhs_mag_3bm22_10 {
        count = 7;
    };
    class rhs_mag_3bm22: rhs_mag_3bm22_10 {
        count = 40;
    };
    class rhs_mag_3bm26_10: rhs_mag_3bm_base {
        displayName = "$STR_RHS_MAG_3BM26";
        displayNameShort = "$STR_RHS_MAG_SH_3BM26";
        ammo = "rhs_ammo_3bm26";
        initSpeed = 1720;
    };
    class rhs_mag_3bm26_7: rhs_mag_3bm26_10 {
        count = 7;
    };
    class rhs_mag_3bm26: rhs_mag_3bm26_10 {
        count = 40;
    };
    class rhs_mag_3bm29_10: rhs_mag_3bm_base {
        displayName = "$STR_RHS_MAG_3BM29";
        displayNameShort = "$STR_RHS_MAG_SH_3BM29";
        ammo = "rhs_ammo_3bm29";
        initSpeed = 1660;
    };
    class rhs_mag_3bm29_7: rhs_mag_3bm29_10 {
        count = 7;
    };
    class rhs_mag_3bm29: rhs_mag_3bm29_10 {
        count = 40;
    };
    class rhs_mag_3bm32_10: rhs_mag_3bm_base {
        displayName = "$STR_RHS_MAG_3BM32";
        displayNameShort = "$STR_RHS_MAG_SH_3BM32";
        ammo = "rhs_ammo_3bm32";
        initSpeed = 1700;
    };
    class rhs_mag_3bm32_7: rhs_mag_3bm32_10 {
        count = 7;
    };
    class rhs_mag_3bm32: rhs_mag_3bm32_10 {
        count = 40;
    };
    class rhs_mag_3bm42_10: rhs_mag_3bm_base {
        displayName = "$STR_RHS_MAG_3BM42";
        displayNameShort = "$STR_RHS_MAG_SH_3BM42";
        ammo = "rhs_ammo_3bm42";
        initSpeed = 1700;
    };
    class rhs_mag_3bm42_7: rhs_mag_3bm42_10 {
        count = 7;
    };
    class rhs_mag_3bm42: rhs_mag_3bm42_10 {
        count = 40;
    };
    class rhs_mag_3bm42m_10: rhs_mag_3bm_base {
        displayName = "$STR_RHS_MAG_3BM42M";
        displayNameShort = "$STR_RHS_MAG_SH_3BM42M";
        ammo = "rhs_ammo_3bm42m";
        initSpeed = 1750;
    };
    class rhs_mag_3bm42m: rhs_mag_3bm42m_10 {
        count = 40;
    };
    class rhs_mag_3bm46_10: rhs_mag_3bm_base {
        displayName = "$STR_RHS_MAG_3BM46";
        displayNameShort = "$STR_RHS_MAG_SH_3BM46";
        ammo = "rhs_ammo_3bm46";
        initSpeed = 1700;
    };
    class rhs_mag_3bm46_8: rhs_mag_3bm46_10 {
        count = 8;
    };
    class rhs_mag_3bm46: rhs_mag_3bm46_10 {
        count = 40;
    };
    class rhs_mag_3bm59_10: rhs_mag_3bm_base {
        displayName = "$STR_RHS_MAG_3BM59";
        displayNameShort = "$STR_RHS_MAG_SH_3BM59";
        ammo = "rhs_ammo_3bm59";
        initSpeed = 1700;
    };
    class rhs_mag_3bm59: rhs_mag_3bm59_10 {
        count = 40;
    };
    class rhs_mag_3bm60_10: rhs_mag_3bm_base {
        displayName = "$STR_RHS_MAG_3BM60";
        displayNameShort = "$STR_RHS_MAG_SH_3BM60";
        ammo = "rhs_ammo_3bm60";
        initSpeed = 1700;
    };
    class rhs_mag_3bm60: rhs_mag_3bm60_10 {
        count = 40;
    };
    class rhs_mag_3bm69_10: rhs_mag_3bm_base {
        displayName = "$STR_RHS_MAG_3BM59";
        displayNameShort = "$STR_RHS_MAG_SH_3BM59";
        ammo = "rhs_ammo_3bm69";
        initSpeed = 2050;
    };
    class rhs_mag_3bm69_17: rhs_mag_3bm69_10 {
        count = 17;
    };
    class rhs_mag_3bm69: rhs_mag_3bm69_10 {
        count = 40;
    };
    class rhs_mag_3bm70_10: rhs_mag_3bm_base {
        displayName = "$STR_RHS_MAG_3BM70";
        displayNameShort = "$STR_RHS_MAG_SH_3BM70";
        ammo = "rhs_ammo_3bm70";
        initSpeed = 2050;
    };
    class rhs_mag_3bm70: rhs_mag_3bm70_10 {
        count = 40;
    };
    class rhs_mag_bk_base: VehicleMagazine {
        scope = 2;
        reloadTime = 12;
        magazineReloadTime = 12;
        count = 8;
        initSpeed = 900;
        maxLeadSpeed = 27;
        rhs_magazineIndex = 2;
        muzzleImpulseFactor = 0.01;
    };
    class rhs_mag_bk4_5: rhs_mag_bk_base {
        displayName = "$STR_RHS_MAG_3UBK3";
        displayNameShort = "$STR_RHS_MAG_SH_3UBK3";
        ammo = "rhs_ammo_bk4";
        count = 5;
        initSpeed = 1750;
    };
    class rhs_mag_bk5_8: rhs_mag_bk_base {
        displayName = "$STR_RHS_MAG_3UBK4";
        displayNameShort = "$STR_RHS_MAG_SH_3UBK4";
        ammo = "rhs_ammo_bk5";
        initSpeed = 900;
    };
    class rhs_mag_bk6m: rhs_mag_bk_base {
        displayName = "$STR_RHS_MAG_bk6m";
        displayNameShort = "$STR_RHS_MAG_SH_bk6m";
        ammo = "rhs_ammo_bk6m";
        initSpeed = 680;
        count = 1;
    };
    class rhs_mag_bk6m_5: rhs_mag_bk6m {
        count = 5;
    };
    class rhs_mag_bk6m_26: rhs_mag_bk6m {
        count = 26;
    };
    class rhs_mag_bk13: rhs_mag_bk_base {
        displayName = "$STR_RHS_MAG_bk13";
        displayNameShort = "$STR_RHS_MAG_SH_bk13";
        ammo = "rhs_ammo_bk13";
        initSpeed = 726;
        count = 1;
    };
    class rhs_mag_bk13_26: rhs_mag_bk13 {
        count = 26;
    };
    class rhs_mag_bk13_5: rhs_mag_bk13 {
        count = 5;
    };
    class rhs_mag_bk13_10: rhs_mag_bk13 {
        count = 10;
    };
    class rhs_mag_bk15_5: rhs_mag_bk_base {
        displayName = "$STR_RHS_MAG_3UBK7";
        displayNameShort = "$STR_RHS_MAG_SH_3UBK7";
        ammo = "rhs_ammo_bk15";
        count = 5;
        initSpeed = 1750;
    };
    class rhs_mag_bk17_8: rhs_mag_bk_base {
        displayName = "$STR_RHS_MAG_3UBK9";
        displayNameShort = "$STR_RHS_MAG_SH_3UBK9";
        ammo = "rhs_ammo_bk17";
        initSpeed = 850;
    };
    class rhs_mag_bp540_4: rhs_mag_bk_base {
        displayName = "BP-540 HEAT";
        displayNameShort = "HEAT";
        ammo = "rhs_ammo_bp540";
        initSpeed = 680;
        count = 4;
    };
    class rhs_mag_bp540: rhs_mag_bp540_4 {
        count = 40;
    };
    class rhs_mag_3bk_base: rhs_mag_bk_base {
        reloadTime = 6.5;
        magazineReloadTime = 6.5;
        count = 8;
        tracersEvery = 1;
        muzzleImpulseFactor[] = {"14*0.2", 14};
    };
    class rhs_mag_3bk12_8: rhs_mag_3bk_base {
        displayName = "$STR_RHS_MAG_3BK12";
        displayNameShort = "$STR_RHS_MAG_SH_3BK12";
        ammo = "rhs_ammo_3bk12";
        initSpeed = 905;
    };
    class rhs_mag_3bk12: rhs_mag_3bk12_8 {
        count = 40;
    };
    class rhs_mag_3bk14_8: rhs_mag_3bk_base {
        displayName = "$STR_RHS_MAG_3BK14";
        displayNameShort = "$STR_RHS_MAG_SH_3BK14";
        ammo = "rhs_ammo_3bk14";
        initSpeed = 905;
    };
    class rhs_mag_3bk14_6: rhs_mag_3bk14_8 {
        count = 6;
    };
    class rhs_mag_3bk14: rhs_mag_3bk14_8 {
        count = 40;
    };
    class rhs_mag_3bk18_8: rhs_mag_3bk_base {
        displayName = "$STR_RHS_MAG_3BK18";
        displayNameShort = "$STR_RHS_MAG_SH_3BK18";
        ammo = "rhs_ammo_3bk18";
        initSpeed = 905;
    };
    class rhs_mag_3bk18_6: rhs_mag_3bk18_8 {
        count = 6;
    };
    class rhs_mag_3bk18: rhs_mag_3bk18_8 {
        count = 40;
    };
    class rhs_mag_3bk18m_8: rhs_mag_3bk_base {
        displayName = "$STR_RHS_MAG_3BK18M";
        displayNameShort = "$STR_RHS_MAG_SH_3BK18M";
        ammo = "rhs_ammo_3bk18M";
        initSpeed = 905;
    };
    class rhs_mag_3bk18m_6: rhs_mag_3bk18m_8 {
        count = 6;
    };
    class rhs_mag_3bk18m: rhs_mag_3bk18m_8 {
        count = 40;
    };
    class rhs_mag_3bk21_8: rhs_mag_3bk_base {
        displayName = "$STR_RHS_MAG_3BK21";
        displayNameShort = "$STR_RHS_MAG_SH_3BK21";
        ammo = "rhs_ammo_3bk21";
        initSpeed = 905;
    };
    class rhs_mag_3bk21: rhs_mag_3bk21_8 {
        count = 40;
    };
    class rhs_mag_3bk29_8: rhs_mag_3bk_base {
        displayName = "$STR_RHS_MAG_3BK29";
        displayNameShort = "$STR_RHS_MAG_SH_3BK29";
        ammo = "rhs_ammo_3bk29";
        initSpeed = 905;
    };
    class rhs_mag_3bk29: rhs_mag_3bk29_8 {
        count = 40;
    };
    class rhs_mag_3bk31_8: rhs_mag_3bk_base {
        displayName = "$STR_RHS_MAG_3BK31";
        displayNameShort = "$STR_RHS_MAG_SH_3BK31";
        ammo = "rhs_ammo_3bk31";
        initSpeed = 905;
    };
    class rhs_mag_3bk31_6: rhs_mag_3bk31_8 {
        count = 6;
    };
    class rhs_mag_3bk31_3: rhs_mag_3bk31_8 {
        count = 3;
    };
    class rhs_mag_3bk31: rhs_mag_3bk31_8 {
        count = 40;
    };
    class rhs_mag_of_base: VehicleMagazine {
        scope = 2;
        reloadTime = 12;
        magazineReloadTime = 12;
        count = 17;
        initSpeed = 900;
        rhs_magazineIndex = 3;
        maxLeadSpeed = 40;
        muzzleImpulseFactor = 0.001;
    };
    class rhs_mag_of412_17: rhs_mag_of_base {
        displayName = "$STR_RHS_MAG_OF412";
        displayNameShort = "$STR_RHS_MAG_SH_OF412";
        ammo = "rhs_ammo_of412";
    };
    class rhs_mag_of412_21: rhs_mag_of412_17 {
        count = 21;
    };
    class rhs_mag_of412_18: rhs_mag_of412_17 {
        count = 18;
    };
    class rhs_mag_of11_20: rhs_mag_of_base {
        displayName = "$STR_RHS_MAG_3UOF11";
        displayNameShort = "$STR_RHS_MAG_SH_3UOF11";
        ammo = "rhs_ammo_of11";
        count = 20;
        muzzleImpulseFactor[] = {1, 0.1};
    };
    class rhs_mag_of28_20: rhs_mag_of_base {
        displayName = "$STR_RHS_MAG_3UOF37";
        displayNameShort = "$STR_RHS_MAG_SH_3UOF37";
        ammo = "rhs_ammo_of28";
        count = 20;
        muzzleImpulseFactor[] = {1, 0.1};
    };
    class rhs_mag_3of_base: rhs_mag_of_base {
        reloadTime = 6.5;
        magazineReloadTime = 6.5;
        count = 6;
        tracersEvery = 1;
        muzzleImpulseFactor[] = {"14*0.5", 14};
    };
    class rhs_mag_3of11_6: rhs_mag_3of_base {
        displayName = "$STR_RHS_MAG_3OF11";
        displayNameShort = "$STR_RHS_MAG_SH_3OF11";
        ammo = "rhs_ammo_3of11";
    };
    class rhs_mag_3of11: rhs_mag_3of11_6 {
        count = 40;
    };
    class rhs_mag_3of26_6: rhs_mag_3of_base {
        displayName = "$STR_RHS_MAG_3OF26";
        displayNameShort = "$STR_RHS_MAG_SH_3OF26";
        ammo = "rhs_ammo_3of26";
        initSpeed = 850;
        tracersEvery = 0;
    };
    class rhs_mag_3of26_5: rhs_mag_3of26_6 {
        count = 5;
    };
    class rhs_mag_3of26_7: rhs_mag_3of26_6 {
        count = 7;
    };
    class rhs_mag_3of26: rhs_mag_3of26_6 {
        count = 40;
    };
    class rhs_mag_3UOF17_22: VehicleMagazine {
        scope = 2;
        displayName = "$STR_RHS_MAG_3UOF17";
        displayNameShort = "$STR_RHS_MAG_SH_3UOF17";
        ammo = "rhs_ammo_3UOF17";
        count = 22;
        initSpeed = 250;
        maxLeadSpeed = 60;
        nameSound = "heat";
        tracersEvery = 0;
        rhs_magazineIndex = 3;
    };
    class rhs_mag_3UOF19_22: VehicleMagazine {
        scope = 2;
        displayName = "$STR_RHS_MAG_3UOF19";
        displayNameShort = "$STR_RHS_MAG_SH_3UOF19";
        ammo = "rhs_ammo_3UOF19";
        count = 22;
        initSpeed = 355;
        maxLeadSpeed = 60;
        nameSound = "heat";
        tracersEvery = 1;
        rhs_magazineIndex = 3;
    };
    class rhs_mag_3UOF191_22: rhs_mag_3UOF19_22 {
        displayName = "3UOF191";
        displayNameShort = "3UOF191";
        ammo = "rhs_ammo_3UOF191";
    };
    class rhs_mag_9m41_20: VehicleMagazine {
        scope = 2;
        displayName = "$STR_RHS_9m41_NAME";
        displayNameShort = "$STR_RHS_9m41_NAME";
        ammo = "Flare_82mm_AMOS_White";
        count = 20;
        initSpeed = 200;
    };
    class 32Rnd_155mm_Mo_shells;
    class rhs_mag_HE_2a33: 32Rnd_155mm_Mo_shells {
        scope = 2;
        displayName = "$STR_RHS_53WOF27_NAME";
        displayNameShort = "HE";
        ammo = "rhs_ammo_3WOF27";
        count = 26;
        nameSound = "heat";
        initSpeed = 655;
        rhs_magazineIndex = 3;
    };
    class rhs_mag_HE_2a33_26: rhs_mag_HE_2a33 {
        count = 26;
    };
    class rhs_mag_HE_2a33_32: rhs_mag_HE_2a33 {
        count = 32;
    };
    class rhs_mag_HE_2a33_46: rhs_mag_HE_2a33 {
        count = 46;
    };
    class rhs_mag_53vof546v: rhs_mag_HE_2a33 {
        displayName = "53-VOF-546V";
        ammo = "rhs_ammo_53OF546";
        initSpeed = 655;
        count = 1;
    };
    class rhs_mag_53vof546v_26: rhs_mag_53vof546v {
        count = 26;
    };
    class rhs_mag_53vof546v_32: rhs_mag_53vof546v {
        count = 32;
    };
    class rhs_mag_53vof546v_46: rhs_mag_53vof546v {
        count = 46;
    };
    class rhs_mag_53vof546v_direct: rhs_mag_53vof546v {
        ammo = "rhs_ammo_53OF546_direct";
    };
    class rhs_mag_53vof546v_direct_32: rhs_mag_53vof546v_direct {
        count = 32;
    };
    class rhs_mag_WP_2a33: rhs_mag_HE_2a33 {
        displayName = "$STR_RHS_53OCH540_NAME";
        displayNameShort = "WP";
        count = 5;
        ammo = "rhs_ammo_152_WP";
    };
    class rhs_mag_WP_2a33_26: rhs_mag_WP_2a33 {
        count = 26;
    };
    class rhs_mag_WP_2a33_46: rhs_mag_WP_2a33 {
        count = 46;
    };
    class rhs_mag_Atomic_2a33: rhs_mag_HE_2a33 {
        displayName = "$STR_RHS_3WB3_NAME";
        displayNameShort = "Nuke";
        ammo = "rhs_ammo_3WB3";
    };
    class rhs_mag_Atomic_2a33_26: rhs_mag_Atomic_2a33 {
        count = 26;
    };
    class rhs_mag_Atomic_2a33_46: rhs_mag_Atomic_2a33 {
        count = 46;
    };
    class rhs_mag_LASER_2a33: rhs_mag_HE_2a33 {
        displayName = "$STR_RHS_3WOF93_NAME";
        displayNameShort = "LG";
        count = 5;
        ammo = "rhs_ammo_3WOF93";
    };
    class rhs_mag_LASER_2a33_26: rhs_mag_LASER_2a33 {
        count = 26;
    };
    class rhs_mag_LASER_2a33_46: rhs_mag_LASER_2a33 {
        count = 26;
    };
    class rhs_mag_SMOKE_2a33: rhs_mag_HE_2a33 {
        displayName = "$STR_RHS_53WD546_NAME";
        displayNameShort = "Smoke";
        count = 5;
        ammo = "rhs_ammo_53WD546U";
    };
    class rhs_mag_SMOKE_2a33_26: rhs_mag_SMOKE_2a33 {
        count = 26;
    };
    class rhs_mag_SMOKE_2a33_46: rhs_mag_SMOKE_2a33 {
        count = 26;
    };
    class rhs_mag_ILLUM_2a33: rhs_mag_HE_2a33 {
        displayName = "$STR_RHS_3WS23_NAME";
        displayNameShort = "Illum";
        count = 5;
        ammo = "rhs_ammo_3WS23";
    };
    class rhs_mag_ILLUM_2a33_26: rhs_mag_ILLUM_2a33 {
        count = 26;
    };
    class rhs_mag_ILLUM_2a33_46: rhs_mag_ILLUM_2a33 {
        count = 26;
    };
    class rhs_mag_of462: 32Rnd_155mm_Mo_shells {
        scope = 2;
        displayName = "$STR_RHS_MAG_of462";
        ammo = "rhs_ammo_of462";
        count = 1;
        nameSound = "heat";
        initSpeed = 690;
        rhs_magazineIndex = 3;
        muzzleImpulseFactor = 0.1;
    };
    class rhs_mag_of462_10: rhs_mag_of462 {
        count = 10;
    };
    class rhs_mag_of462_direct: rhs_mag_of462 {
        ammo = "rhs_ammo_of462_direct";
    };
    class rhs_mag_of462_direct_10: rhs_mag_of462_direct {
        count = 10;
    };
    class rhs_mag_3of56: rhs_mag_of462 {
        displayName = "$STR_RHS_MAG_3of56";
        ammo = "rhs_ammo_3of56";
    };
    class rhs_mag_3of56_10: rhs_mag_3of56 {
        count = 10;
    };
    class rhs_mag_3of56_5: rhs_mag_3of56 {
        count = 5;
    };
    class rhs_mag_3of56_30: rhs_mag_3of56 {
        count = 30;
    };
    class rhs_mag_3of56_35: rhs_mag_3of56 {
        count = 35;
    };
    class rhs_mag_3of56_direct: rhs_mag_3of56 {
        ammo = "rhs_ammo_3of56_direct";
    };
    class rhs_mag_3of56_direct_10: rhs_mag_3of56_direct {
        count = 10;
    };
    class rhs_mag_3of56_direct_30: rhs_mag_3of56_direct {
        count = 30;
    };
    class rhs_mag_3of56_direct_5: rhs_mag_3of56_direct {
        count = 5;
    };
    class rhs_mag_d462: rhs_mag_of462 {
        displayName = "$STR_RHS_MAG_d462";
        displayNameShort = "Smoke";
        ammo = "rhs_ammo_d462";
        rhs_magazineIndex = -1;
    };
    class rhs_mag_d462_2: rhs_mag_d462 {
        count = 2;
    };
    class rhs_mag_s463: rhs_mag_of462 {
        displayName = "$STR_RHS_MAG_s463";
        displayNameShort = "Illum";
        ammo = "rhs_ammo_s463";
        rhs_magazineIndex = -1;
    };
    class rhs_mag_s463_2: rhs_mag_s463 {
        count = 2;
    };
    class rhs_mag_3of69m: rhs_mag_of462 {
        displayName = "$STR_RHS_MAG_3of69m";
        displayNameShort = "LG";
        ammo = "rhs_ammo_3of69m";
        rhs_magazineIndex = -1;
    };
    class rhs_mag_3of69m_2: rhs_mag_3of69m {
        count = 2;
    };
    class rhs_mag_3vo18_10: 32Rnd_155mm_Mo_shells {
        scope = 2;
        displayName = "$STR_RHS_MAG_3vo18";
        ammo = "rhs_ammo_3vo18";
        count = 10;
        initSpeed = 211;
    };
    class rhs_mag_3vs25m_10: rhs_mag_3vo18_10 {
        displayName = "$STR_RHS_MAG_3vs25m";
        displayNameShort = "Illum";
        ammo = "rhs_ammo_3vs25m";
    };
    class rhs_mag_53_va_832a_10: rhs_mag_3vo18_10 {
        displayName = "$STR_RHS_MAG_va_832a";
        displayNameShort = "Illum";
        ammo = "rhs_ammo_3vs25m";
    };
    class rhs_mag_d832du_10: rhs_mag_3vo18_10 {
        displayName = "$STR_RHS_MAG_d832du";
        displayNameShort = "Smoke";
        ammo = "rhs_ammo_d832du";
    };
    class rhs_mag_9m14m: VehicleMagazine {
        scope = 1;
        displayName = "$STR_RHS_MAG_9M14M";
        displayNameShort = "$STR_RHS_MAG_SH_9M14M";
        ammo = "rhs_ammo_9m14m";
        count = 1;
        initSpeed = 80;
        maxleadspeed = 30;
        nameSound = "missiles";
    };
    class rhs_mag_9m14m_3: rhs_mag_9m14m {
        count = 3;
    };
    class rhs_mag_9m14m_4: rhs_mag_9m14m {
        count = 4;
    };
    class rhs_mag_MCLOS_Training: rhs_mag_9m14m {
        displayname = "MCLOS training round";
        count = 999;
        ammo = "rhs_ammo_mclos_training";
    };
    class rhs_mag_9m14: rhs_mag_9m14m {
        displayName = "$STR_RHS_MAG_9M14";
        displayNameShort = "$STR_RHS_MAG_SH_9M14";
        ammo = "rhs_ammo_9m14";
    };
    class rhs_mag_9m17: VehicleMagazine {
        scope = 1;
        displayName = "$STR_RHS_MAG_9M17";
        displayNameShort = "$STR_RHS_MAG_SH_9M17";
        ammo = "rhs_ammo_9m17";
        count = 1;
        initSpeed = 80;
        maxleadspeed = 40;
        nameSound = "missiles";
    };
    class rhs_mag_9m17p: rhs_mag_9m17 {
        displayName = "$STR_RHS_MAG_9M17P";
        displayNameShort = "$STR_RHS_MAG_SH_9M17P";
        ammo = "rhs_ammo_9m17p";
    };
    class rhs_mag_9M17_Mi24_2x: rhs_mag_9m17 {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_9m17_2x";
        count = 2;
        mass = 85;
        weight = 85;
        hardpoints[] = {"RHS_HP_9m17_Mi24"};
        pylonWeapon = "rhs_weap_2K8_launcher";
    };
    class rhs_mag_9M17p_Mi24_2x: rhs_mag_9M17_Mi24_2x {
        displayName = "$STR_RHS_MAG_9M17P";
        displayNameShort = "$STR_RHS_MAG_SH_9M17P";
        ammo = "rhs_ammo_9m17p";
    };
    class rhs_mag_9m112_6: VehicleMagazine {
        scope = 2;
        displayName = "$STR_RHS_MAG_9M112";
        displayNameShort = "$STR_RHS_MAG_SH_9M112";
        reloadTime = 30;
        magazineReloadTime = 30;
        ammo = "rhs_ammo_9m112";
        count = 6;
        initSpeed = 125;
        maxleadspeed = 50;
        nameSound = "missiles";
        rhs_magazineIndex = 4;
    };
    class rhs_mag_9m112m_6: rhs_mag_9m112_6 {
        displayName = "$STR_RHS_MAG_9M112M";
        displayNameShort = "$STR_RHS_MAG_SH_9M112M";
        ammo = "rhs_ammo_9m112m";
    };
    class rhs_mag_9m112m_4: rhs_mag_9m112m_6 {
        count = 4;
    };
    class rhs_mag_9m112m2_6: rhs_mag_9m112_6 {
        displayName = "$STR_RHS_MAG_9M112M2";
        displayNameShort = "$STR_RHS_MAG_SH_9M112M2";
        ammo = "rhs_ammo_9m112m2";
    };
    class rhs_mag_9m124_6: rhs_mag_9m112_6 {
        displayName = "$STR_RHS_MAG_9M124";
        displayNameShort = "$STR_RHS_MAG_SH_9M124";
        ammo = "rhs_ammo_9m124";
    };
    class rhs_mag_9m128_6: rhs_mag_9m112_6 {
        scope = 2;
        canLock = 0;
        displayName = "$STR_RHS_MAG_9M128";
        displayNameShort = "$STR_RHS_MAG_SH_9M128";
        ammo = "rhs_ammo_9m128";
        count = 6;
    };
    class rhs_mag_9m113: VehicleMagazine {
        scope = 2;
        displayName = "$STR_RHS_MAG_9M113";
        displayNameShort = "$STR_RHS_MAG_SH_9M113";
        ammo = "rhs_ammo_9m113";
        count = 1;
        initSpeed = 80;
        maxleadspeed = 80;
        nameSound = "missiles";
        rhs_magazineIndex = 4;
    };
    class rhs_mag_9m113_3: rhs_mag_9m113 {
        count = 3;
    };
    class rhs_mag_9m113_4: rhs_mag_9m113 {
        count = 4;
    };
    class rhs_mag_9m113_5: rhs_mag_9m113 {
        count = 5;
    };
    class rhs_mag_9m113_5_9P148_pylon: rhs_mag_9m113 {
        hardpoints[] = {"RHS_HP_9P148"};
        displayname = "9M113";
        displaynameShort = "HEAT";
        descriptionShort = "HEAT. 600 mm RHA penetration ";
        pylonWeapon = "rhs_weap_9P148";
        count = 5;
        model = "\A3\weapons_f\empty";
    };
    class rhs_mag_9m113M: rhs_mag_9m113 {
        displayName = "$STR_RHS_MAG_9M113M";
        displayNameShort = "$STR_RHS_MAG_SH_9M113M";
        ammo = "rhs_ammo_9m113M";
    };
    class rhs_mag_9m113M_3: rhs_mag_9m113M {
        count = 3;
    };
    class rhs_mag_9m113M_4: rhs_mag_9m113M {
        count = 4;
    };
    class rhs_mag_9m113M_5: rhs_mag_9m113M {
        count = 5;
    };
    class rhs_mag_9m111: rhs_mag_9m113 {
        displayName = "$STR_RHS_MAG_9M111";
        displayNameShort = "$STR_RHS_MAG_SH_9M111";
        ammo = "rhs_ammo_9m111";
    };
    class rhs_mag_9m111_3: rhs_mag_9m111 {
        count = 4;
    };
    class rhs_mag_9m111_4: rhs_mag_9m111 {
        count = 4;
    };
    class rhs_mag_9m111_5: rhs_mag_9m111 {
        count = 5;
    };
    class rhs_mag_9m111M: rhs_mag_9m111 {
        displayName = "$STR_RHS_MAG_9M111M";
        displayNameShort = "$STR_RHS_MAG_SH_9M111M";
        ammo = "rhs_ammo_9m111M";
    };
    class rhs_mag_9m111M_3: rhs_mag_9m111M {
        count = 3;
    };
    class rhs_mag_9m111M_4: rhs_mag_9m111M {
        count = 4;
    };
    class rhs_mag_9m111M_5: rhs_mag_9m111M {
        count = 5;
    };
    class rhs_mag_9m117_3: VehicleMagazine {
        scope = 2;
        displayName = "$STR_RHS_MAG_3UBK101";
        displayNameShort = "$STR_RHS_MAG_SH_3UBK101";
        ammo = "rhs_ammo_9m117";
        reloadTime = 12;
        magazineReloadTime = 12;
        count = 3;
        initSpeed = 80;
        maxleadspeed = 70;
        nameSound = "missiles";
        rhs_magazineIndex = 2;
    };
    class rhs_mag_9m117_8: rhs_mag_9m117_3 {
        count = 8;
    };
    class rhs_mag_9m117m_3: rhs_mag_9m117_3 {
        displayName = "$STR_RHS_MAG_3UBK10M";
        displayNameShort = "$STR_RHS_MAG_SH_3UBK10M";
        ammo = "rhs_ammo_9m117m";
        count = 3;
    };
    class rhs_mag_9m117m_8: rhs_mag_9m117m_3 {
        count = 8;
    };
    class rhs_mag_9m117m1_3: rhs_mag_9m117_3 {
        displayName = "$STR_RHS_MAG_3UBK23";
        displayNameShort = "$STR_RHS_MAG_SH_3UBK23";
        ammo = "rhs_ammo_9m117m";
        count = 3;
    };
    class rhs_mag_9m117m1_8: rhs_mag_9m117m1_3 {
        count = 8;
    };
    class rhs_mag_9m118_3: rhs_mag_9m117_3 {
        displayName = "$STR_RHS_MAG_3UBK102";
        displayNameShort = "$STR_RHS_MAG_SH_3UBK102";
        canlock = 1;
        ammo = "rhs_ammo_9m118";
        count = 3;
        initSpeed = 100;
    };
    class rhs_mag_9m119_6: rhs_mag_9m112_6 {
        scope = 2;
        canLock = 0;
        displayName = "$STR_RHS_MAG_9M119";
        displayNameShort = "$STR_RHS_MAG_SH_9M119";
        ammo = "rhs_ammo_9m119";
        count = 6;
    };
    class rhs_mag_9m119_4: rhs_mag_9m119_6 {
        count = 4;
    };
    class rhs_mag_9m119rx_6: rhs_mag_9m119_6 {
        scope = 2;
        displayName = "$STR_RHS_MAG_9M119RX";
        displayNameShort = "$STR_RHS_MAG_SH_9M119RX";
        canLock = 0;
        reloadTime = 8;
        magazineReloadTime = 8;
        ammo = "rhs_ammo_9m119";
        count = 6;
        initSpeed = 120;
        maxleadspeed = 50;
        nameSound = "missiles";
    };
    class rhs_mag_9m119m_6: rhs_mag_9m112_6 {
        scope = 2;
        canLock = 0;
        displayName = "$STR_RHS_MAG_9M119M";
        displayNameShort = "$STR_RHS_MAG_SH_9M119M";
        ammo = "rhs_ammo_9m119m";
        count = 6;
    };
    class rhs_mag_9m119m_4: rhs_mag_9m119m_6 {
        count = 4;
    };
    class rhs_mag_9m119f_6: rhs_mag_9m112_6 {
        displayName = "$STR_RHS_MAG_9M119F";
        displayNameShort = "$STR_RHS_MAG_SH_9M119F";
        ammo = "rhs_ammo_9m119f";
    };
    class rhs_mag_9m133_2: VehicleMagazine {
        scope = 2;
        displayName = "$STR_RHS_MAG_9M133";
        displayNameShort = "$STR_RHS_MAG_SH_9M133";
        canLock = 1;
        reloadTime = 8;
        magazineReloadTime = 8;
        ammo = "rhs_ammo_9m133";
        count = 2;
        initSpeed = 100;
        maxleadspeed = 60;
        nameSound = "missiles";
        rhs_magazineIndex = 4;
        model = "\A3\weapons_f\empty";
    };
    class rhs_mag_9m133: rhs_mag_9m133_2 {
        count = 1;
    };
    class rhs_mag_9m133f_2: rhs_mag_9m133_2 {
        displayName = "$STR_RHS_MAG_9M133F";
        displayNameShort = "$STR_RHS_MAG_SH_9M133F";
        ammo = "rhs_ammo_9m133f";
    };
    class rhs_mag_9m133f: rhs_mag_9m133f_2 {
        count = 1;
        canLock = 0;
    };
    class rhs_mag_9m1331_2: rhs_mag_9m133_2 {
        displayName = "$STR_RHS_MAG_9M1331";
        displayNameShort = "$STR_RHS_MAG_SH_9M1331";
        ammo = "rhs_ammo_9m1331";
    };
    class rhs_mag_9m1331: rhs_mag_9m1331_2 {
        count = 1;
    };
    class rhs_mag_9m133m2_2: rhs_mag_9m133_2 {
        displayName = "$STR_RHS_MAG_9M133M2";
        displayNameShort = "$STR_RHS_MAG_SH_9M133M2";
        ammo = "rhs_ammo_9m133m2";
    };
    class rhs_mag_9m133m2: rhs_mag_9m133m2_2 {
        count = 1;
    };
    class rhs_mag_9m133_pylon: rhs_mag_9m133 {
        hardpoints[] = {"RHS_HP_T15"};
        displayname = "9M133";
        displaynameShort = "Tandem HEAT";
        descriptionShort = "Tandem HEAT. 1,000 mm RHA penetration ";
        pylonWeapon = "rhs_weap_9K133M_9M133";
        initSpeed = 0;
    };
    class rhs_mag_9m133f_pylon: rhs_mag_9m133f {
        hardpoints[] = {"RHS_HP_T15"};
        displayname = "9M133F";
        displaynameShort = "Thermobaric";
        descriptionShort = "Thermobaric 10 kg TNT equivalent";
        pylonWeapon = "rhs_weap_9K133M_9M133f";
        initSpeed = 0;
    };
    class rhs_mag_9m1331_pylon: rhs_mag_9m1331 {
        hardpoints[] = {"RHS_HP_T15"};
        displayname = "9M131-1";
        displaynameShort = "Tandem HEAT";
        descriptionShort = "Tandem HEAT. 1,100 mm RHA penetration ";
        pylonWeapon = "rhs_weap_9K133M_9M1331";
        initSpeed = 0;
    };
    class rhs_mag_9m133m2_pylon: rhs_mag_9m133m2 {
        hardpoints[] = {"RHS_HP_T15"};
        displayname = "9M133M-2";
        displaynameShort = "Tandem HEAT";
        descriptionShort = "Tandem HEAT. 1,300 mm RHA penetration ";
        pylonWeapon = "rhs_weap_9K133M_9M133M2";
        initSpeed = 0;
    };
    class rhs_mag_9m133_spare_pylon: rhs_mag_9m133_pylon {
        hardpoints[] = {"RHS_HP_T15_SPARE"};
        pylonWeapon = "rhs_weap_9K133M_spare";
        ammo = "rhs_Laserbeam";
    };
    class rhs_mag_9m133f_spare_pylon: rhs_mag_9m133f_pylon {
        hardpoints[] = {"RHS_HP_T15_SPARE"};
        pylonWeapon = "rhs_weap_9K133M_spare";
        ammo = "rhs_Laserbeam";
    };
    class rhs_mag_9m1331_spare_pylon: rhs_mag_9m1331_pylon {
        hardpoints[] = {"RHS_HP_T15_SPARE"};
        pylonWeapon = "rhs_weap_9K133M_spare";
        ammo = "rhs_Laserbeam";
    };
    class rhs_mag_9m133m2_spare_pylon: rhs_mag_9m133m2_pylon {
        hardpoints[] = {"RHS_HP_T15_SPARE"};
        pylonWeapon = "rhs_weap_9K133M_spare";
        ammo = "rhs_Laserbeam";
    };
    class rhs_mag_3m7_12: VehicleMagazine {
        scope = 2;
        displayName = "3M7";
        canLock = 1;
        reloadTime = 10;
        magazineReloadTime = 8.5;
        ammo = "rhs_ammo_3m7";
        count = 12;
        initSpeed = 100;
        maxleadspeed = 40;
        nameSound = "missiles";
    };
    class Titan_AA;
    class rhs_mag_2Rnd_Igla: Titan_AA {
        scope = 1;
        displayname = "9K32";
        descriptionshort = "Range: 800-4200 m <br/>Type: ground-air <br/>Used in: 9K32";
        ammo = "rhs_ammo_9k38";
        type = "6 * 		256";
        count = 2;
        initspeed = 40;
        maxleadspeed = 320;
        nameSound = "missiles";
    };
    class rhs_mag_9M115: VehicleMagazine {
        scope = 2;
        displayName = "$STR_RHS_MAG_9M115";
        displayNameShort = "$STR_RHS_MAG_SH_9M115";
        canLock = 0;
        reloadTime = 8;
        magazineReloadTime = 8;
        ammo = "rhs_ammo_9m115";
        count = 1;
        initSpeed = 80;
        maxleadspeed = 60;
        nameSound = "missiles";
        rhs_magazineIndex = 4;
    };
    class rhs_mag_9M131: rhs_mag_9M115 {
        displayName = "$STR_RHS_MAG_9M131";
        displayNameShort = "$STR_RHS_MAG_SH_9M131";
        ammo = "rhs_ammo_9m131";
    };
    class rhs_mag_9M131M: rhs_mag_9M115 {
        displayName = "$STR_RHS_MAG_9M131m";
        displayNameShort = "$STR_RHS_MAG_SH_9M131m";
        ammo = "rhs_ammo_9m131m";
    };
    class rhs_mag_9M131F: rhs_mag_9M115 {
        displayName = "$STR_RHS_MAG_9M131f";
        displayNameShort = "$STR_RHS_MAG_SH_9M131f";
        ammo = "rhs_ammo_9m131f";
    };
    class rhs_mag_9M114: VehicleMagazine {
        count = 1;
        initspeed = 55;
        namesound = "missiles";
        displayname = "9M114";
        displaynameshort = "9M114";
        maxleadspeed = 120;
        ammo = "rhs_ammo_9M114";
        mass = 42.5;
        weight = 42.5;
        pylonWeapon = "rhs_weap_9K114_launcher";
        hardpoints[] = {""};
    };
    class rhs_mag_9M114_Mi24_2x: rhs_mag_9M114 {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_9m114_2x";
        count = 2;
        mass = 85;
        weight = 85;
        hardpoints[] = {"RHS_HP_9m114_Mi24"};
    };
    class rhs_mag_9M114M_Mi24_2x: rhs_mag_9M114_Mi24_2x {
        displayname = "9M114M";
        displaynameshort = "9M114M";
        ammo = "rhs_ammo_9m114m";
    };
    class rhs_mag_9M114F_Mi24_2x: rhs_mag_9M114_Mi24_2x {
        displayname = "9M114F";
        displaynameshort = "9M114F";
        ammo = "rhs_ammo_9m114f";
        pylonWeapon = "rhs_weap_9K114f_launcher";
    };
    class rhs_mag_9M114M1_Mi24_2x: rhs_mag_9M114_Mi24_2x {
        displayname = "9M114M1";
        displaynameshort = "9M114M1";
        ammo = "rhs_ammo_9m114m1";
    };
    class rhs_mag_9M114M2_Mi24_2x: rhs_mag_9M114_Mi24_2x {
        displayname = "9M114M2";
        displaynameshort = "9M114M2";
        ammo = "rhs_ammo_9m114m2";
    };
    class rhs_mag_9m120: rhs_mag_9M114 {
        ammo = "rhs_ammo_9m120";
        displayname = "9M120";
        displaynameshort = "9M120";
        weight = 42.5;
        pylonWeapon = "rhs_weap_9m120_launcher";
    };
    class rhs_mag_9M120_Mi24_2x: rhs_mag_9m120 {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_9m120_2x";
        count = 2;
        mass = 85;
        weight = 85;
        hardpoints[] = {"RHS_HP_9m120_Mi24"};
    };
    class rhs_mag_9M120_Mi28_8x: rhs_mag_9m120 {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_9m120_8x";
        count = 8;
        mass = 340;
        weight = 340;
        hardpoints[] = {"RHS_HP_9m120_Mi28"};
    };
    class rhs_mag_9M120_8: rhs_mag_9m120 {
        count = 8;
        weight = 340;
    };
    class rhs_mag_9M120_16: rhs_mag_9m120 {
        count = 16;
        weight = 680;
    };
    class rhs_mag_9m120m: rhs_mag_9M114 {
        ammo = "rhs_ammo_9m120m";
        displayname = "9M120M";
        displaynameshort = "9M120M";
        weight = 42.5;
        pylonWeapon = "rhs_weap_9m120_launcher";
    };
    class rhs_mag_9M120M_Mi24_2x: rhs_mag_9m120m {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_9m120_2x";
        count = 2;
        mass = 85;
        weight = 85;
        hardpoints[] = {"RHS_HP_9m120_Mi24"};
    };
    class rhs_mag_9M120M_Mi28_8x: rhs_mag_9m120m {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_9m120_8x";
        count = 8;
        mass = 340;
        weight = 340;
        hardpoints[] = {"RHS_HP_9m120_Mi28"};
    };
    class rhs_mag_9M120m_8: rhs_mag_9m120m {
        count = 8;
        weight = "42.5*8";
    };
    class rhs_mag_9M120m_16: rhs_mag_9m120m {
        count = 16;
        weight = 680;
    };
    class rhs_mag_9m120f: rhs_mag_9M114 {
        ammo = "rhs_ammo_9m120f";
        displayname = "9M120F HE";
        displaynameshort = "9M120F HE";
        weight = 42.5;
        pylonWeapon = "rhs_weap_9m120f_launcher";
    };
    class rhs_mag_9M120F_Mi24_2x: rhs_mag_9m120f {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_9m120_2x";
        count = 2;
        mass = 85;
        weight = 85;
        hardpoints[] = {"RHS_HP_9m120_Mi24"};
    };
    class rhs_mag_9M120f_Mi28_8x: rhs_mag_9m120f {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_9m120_8x";
        count = 8;
        mass = 340;
        weight = 340;
        hardpoints[] = {"RHS_HP_9m120_Mi28"};
    };
    class rhs_mag_9M120f_8: rhs_mag_9m120f {
        count = 8;
        weight = 340;
    };
    class rhs_mag_9M120f_16: rhs_mag_9m120f {
        count = 16;
        weight = 680;
    };
    class rhs_mag_9m120o: rhs_mag_9M114 {
        ammo = "rhs_ammo_9m120o";
        displayname = "9M120O Proximity";
        displaynameshort = "9M120O Proximity";
        weight = 42.5;
        pylonWeapon = "rhs_weap_9m120o_launcher";
    };
    class rhs_mag_9M120O_Mi24_2x: rhs_mag_9m120o {
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_9m120_2x";
        count = 2;
        mass = 85;
        weight = 85;
        hardpoints[] = {"RHS_HP_9m120_Mi24"};
    };
    class rhs_mag_9M120O_Mi28_8x: rhs_mag_9m120o {
        model = "rhsafrf\addons\rhs_airweapons\rhs_pylon_m_9m120_8x";
        count = 8;
        mass = 340;
        weight = 340;
        hardpoints[] = {"RHS_HP_9m120_Mi28"};
    };
    class rhs_mag_mi24_empty: VehicleMagazine {
        scope = 2;
        ammo = "rhs_ammo_ptb1500";
        displayName = "Empty Shelf";
        count = 1;
        mass = 8.5;
        weight = 8.5;
        nameSound = "";
        model = "rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_mi24_empty";
        pylonweapon = "rhs_weap_DummyLauncher";
        hardpoints[] = {"RHS_HP_Empty_Mi24"};
    };
    class rhs_proxy_ags30_mag: VehicleMagazine {
        ammo = "rhs_proxy_ags30_mag";
        count = 1;
        weight = 7;
    };
    class rhs_proxy_ags30_12_mag: rhs_proxy_ags30_mag {
        count = 12;
        weight = 84;
    };
    class rhs_proxy_pkm_18_mag: VehicleMagazine {
        ammo = "rhs_proxy_pkm_mag";
        count = 18;
        weight = 7;
    };
    class rhs_mag_9m112: rhs_mag_9m112_6 {
        count = 40;
    };
    class rhs_mag_9m112m: rhs_mag_9m112m_6 {
        count = 40;
    };
    class rhs_mag_9m112m2: rhs_mag_9m112m2_6 {
        count = 40;
    };
    class rhs_mag_9m124: rhs_mag_9m124_6 {
        count = 40;
    };
    class rhs_mag_9m128: rhs_mag_9m128_6 {
        count = 40;
    };
    class rhs_mag_9m119: rhs_mag_9m119_4 {
        count = 40;
    };
    class rhs_mag_9m119rx: rhs_mag_9m119rx_6 {
        count = 40;
    };
    class rhs_mag_9m119m: rhs_mag_9m119m_4 {
        count = 40;
    };
    class rhs_mag_9m119f: rhs_mag_9m119f_6 {
        count = 40;
    };
    class rhs_mag_40Rnd_122mm_rockets: VehicleMagazine {
        scope = 2;
        count = 40;
        initspeed = 690;
        ammo = "rhs_ammo_m21OF_HE";
        displayname = "$STR_RHS_122MMGRAD_NAME";
        nameSound = "rockets";
        muzzleImpulseFactor[] = {0.5, 2};
    };
    class rhs_mag_bm21_base: VehicleMagazine {
        scope = 0;
        model = "\rhsafrf\addons\rhs_heavyweapons\grad\rhs_pylon_bm21";
        pylonWeapon = "rhs_weap_bm21";
        nameSound = "rockets";
        muzzleImpulseFactor[] = {0.5, 2};
        count = 1;
        initspeed = 690;
    };
    class rhs_mag_m21of_1: rhs_mag_bm21_base {
        scope = 2;
        ammo = "rhs_ammo_m21OF_HE";
        displayname = "M-21OF";
        displaynameShort = "HE";
        descriptionShort = "High explosive 18,4kg warhead. 20km range";
        hardpoints[] = {"RHS_HP_BM21"};
    };
    class rhs_mag_9m28f_1: rhs_mag_m21of_1 {
        ammo = "rhs_ammo_9m28f";
        displayname = "9M28F";
        displaynameShort = "HE FRAG";
        descriptionShort = "High explosive fragmentation 21kg warhead. 15km range";
        pylonWeapon = "rhs_weap_bm21_9m28f";
    };
    class rhs_mag_9m28k_1: rhs_mag_m21of_1 {
        ammo = "rhs_ammo_9m28k";
        displayname = "9M28K";
        displaynameShort = "Cluster AT Mine";
        descriptionShort = "Cluster AT mine munition. Deploys 3 PTM-3 mines. 13km range";
        pylonWeapon = "rhs_weap_bm21_9m28k";
    };
    class rhs_mag_9m218_1: rhs_mag_m21of_1 {
        ammo = "rhs_ammo_9m218";
        displayname = "9M218";
        displaynameShort = "Cluster HEAT";
        descriptionShort = "Cluster HEAT munition. Deploys 45 HEAT elements with penetration ability up to 160mm. 30km range";
        pylonWeapon = "rhs_weap_bm21_9m218";
    };
    class rhs_mag_9m521_1: rhs_mag_m21of_1 {
        ammo = "rhs_ammo_9m521";
        displayname = "9M521";
        displaynameShort = "HE FRAG";
        pylonWeapon = "rhs_weap_bm21_9m521";
        descriptionShort = "High explosive fragmentation extended range 21kg warhead. 40km range";
    };
    class rhs_mag_9m522_1: rhs_mag_m21of_1 {
        ammo = "rhs_ammo_9m522";
        displayname = "9M522";
        displaynameShort = "HE FRAG";
        descriptionShort = "High explosive fragmentation extended range 25kg warhead. 37km range";
        pylonWeapon = "rhs_weap_bm21_9m522";
    };
    class rhs_mag_pg15v_24: VehicleMagazine {
        scope = 2;
        displayName = "$STR_RHS_MAG_PG15V";
        displayNameShort = "$STR_RHS_MAG_SH_PG15V";
        ammo = "rhs_ammo_pg15v";
        count = 24;
        initSpeed = 690;
    };
    class rhs_mag_pg15v_20: rhs_mag_pg15v_24 {
        count = 20;
    };
    class rhs_mag_pg15v_12: rhs_mag_pg15v_24 {
        count = 12;
    };
    class rhs_mag_og15v_16: VehicleMagazine {
        scope = 2;
        displayName = "$STR_RHS_MAG_OG15V";
        displayNameShort = "$STR_RHS_MAG_SH_OG15V";
        ammo = "rhs_ammo_og15v";
        count = 16;
        initSpeed = 290;
    };
    class rhs_mag_og15v_20: rhs_mag_og15v_16 {
        count = 20;
    };
    class rhs_mag_og15v_8: rhs_mag_og15v_16 {
        count = 8;
    };
    class rhs_mag_pg9v: rhs_mag_pg15v_24 {
        displayName = "$STR_RHS_MAG_PG9V";
        displayNameShort = "$STR_RHS_MAG_SH_PG9V";
        ammo = "rhs_ammo_pg9v";
        count = 1;
        initSpeed = 435;
    };
    class rhs_mag_pg9n: rhs_mag_pg9v {
        displayName = "$STR_RHS_MAG_PG9N";
        displayNameShort = "$STR_RHS_MAG_SH_PG9N";
        ammo = "rhs_ammo_pg9n";
    };
    class rhs_mag_pg9vnt: rhs_mag_pg9v {
        displayName = "$STR_RHS_MAG_PG9VNT";
        displayNameShort = "$STR_RHS_MAG_SH_PG9VNT";
        ammo = "rhs_ammo_pg9vnt";
        initSpeed = 400;
    };
    class rhs_mag_og9v: rhs_mag_og15v_16 {
        displayName = "$STR_RHS_MAG_OG9V";
        displayNameShort = "$STR_RHS_MAG_SH_OG9V";
        ammo = "rhs_ammo_og9v";
        count = 1;
        initSpeed = 316;
    };
    class rhs_mag_og9vm: rhs_mag_og9v {
        displayName = "$STR_RHS_MAG_OG9VM";
        displayNameShort = "$STR_RHS_MAG_SH_OG9VM";
        ammo = "rhs_ammo_og9vm";
    };
    class 450Rnd_127x108_Ball;
    class rhs_mag_3uor6_230: 450Rnd_127x108_Ball {
        displayName = "$STR_RHS_MAG_3UOR6";
        displayNameShort = "$STR_RHS_MAG_SH_3UOR6";
        nameSound = "heat";
        ammo = "rhs_ammo_3uor6";
        count = 230;
        maxLeadSpeed = 25;
        initSpeed = 1120;
        tracersEvery = 4;
        weight = "0.385*230";
        rhs_magazineIndex = 5;
    };
    class rhs_mag_3uor6_125: rhs_mag_3uor6_230 {
        count = 125;
        weight = 48.125;
    };
    class rhs_mag_3uor6_150: rhs_mag_3uor6_230 {
        count = 150;
        weight = 57.75;
    };
    class rhs_mag_3uor6_180: rhs_mag_3uor6_230 {
        count = 180;
        weight = 69.3;
    };
    class rhs_mag_3uor6_200: rhs_mag_3uor6_230 {
        count = 200;
        weight = 77;
    };
    class rhs_mag_3uor6_237: rhs_mag_3uor6_230 {
        count = 237;
        weight = 91.245;
    };
    class rhs_mag_3uor6_250: rhs_mag_3uor6_230 {
        count = 250;
        weight = 96.25;
    };
    class rhs_mag_3uor6_305: rhs_mag_3uor6_230 {
        count = 305;
        weight = 117.425;
    };
    class rhs_mag_3uor6_340: rhs_mag_3uor6_230 {
        count = 340;
        weight = 130.9;
    };
    class rhs_mag_3uof8_230: rhs_mag_3uor6_230 {
        displayName = "$STR_RHS_MAG_3UOF8";
        displayNameShort = "$STR_RHS_MAG_SH_3UOF8";
        ammo = "rhs_ammo_3uof8";
        initSpeed = 960;
        weight = 89.47;
    };
    class rhs_mag_3uof8_125: rhs_mag_3uof8_230 {
        count = 125;
        weight = 48.625;
    };
    class rhs_mag_3uof8_150: rhs_mag_3uof8_230 {
        count = 150;
        weight = 58.35;
    };
    class rhs_mag_3uof8_180: rhs_mag_3uof8_230 {
        count = 180;
        weight = 70.02;
    };
    class rhs_mag_3uof8_200: rhs_mag_3uof8_230 {
        count = 200;
        weight = 77.8;
    };
    class rhs_mag_3uof8_237: rhs_mag_3uof8_230 {
        count = 237;
        weight = 92.193;
    };
    class rhs_mag_3uof8_250: rhs_mag_3uof8_230 {
        count = 250;
        weight = 97.25;
    };
    class rhs_mag_3uof8_305: rhs_mag_3uof8_230 {
        count = 305;
        weight = 118.645;
    };
    class rhs_mag_3uof8_340: rhs_mag_3uof8_230 {
        count = 340;
        weight = 132.26;
    };
    class rhs_mag_3ubr6_230: rhs_mag_3uor6_230 {
        displayName = "$STR_RHS_MAG_3UBR6";
        displayNameShort = "$STR_RHS_MAG_SH_3UBR6";
        ammo = "rhs_ammo_3ubr6";
        nameSound = "sabot";
        weight = 92;
        tracersEvery = 3;
        rhs_magazineIndex = 6;
    };
    class rhs_mag_3ubr6_100: rhs_mag_3ubr6_230 {
        count = 100;
        weight = 40;
    };
    class rhs_mag_3ubr6_120: rhs_mag_3ubr6_230 {
        count = 120;
        weight = 48;
    };
    class rhs_mag_3ubr6_125: rhs_mag_3ubr6_230 {
        count = 125;
        weight = 50;
    };
    class rhs_mag_3ubr6_150: rhs_mag_3ubr6_230 {
        count = 150;
        weight = 60;
    };
    class rhs_mag_3ubr6_160: rhs_mag_3ubr6_230 {
        count = 160;
        weight = 64;
    };
    class rhs_mag_3ubr6_195: rhs_mag_3ubr6_230 {
        count = 195;
        weight = 78;
    };
    class rhs_mag_3ubr6_227: rhs_mag_3ubr6_230 {
        count = 227;
        weight = 90.8;
    };
    class rhs_mag_3ubr6_250: rhs_mag_3ubr6_230 {
        count = 250;
        weight = 100;
    };
    class rhs_mag_3ubr8_230: rhs_mag_3ubr6_230 {
        displayName = "$STR_RHS_MAG_3UBR8";
        displayNameShort = "$STR_RHS_MAG_SH_3UBR8";
        ammo = "rhs_ammo_3ubr8";
        weight = 69;
    };
    class rhs_mag_3ubr8_100: rhs_mag_3ubr8_230 {
        count = 100;
        weight = 40;
    };
    class rhs_mag_3ubr8_120: rhs_mag_3ubr8_230 {
        count = 120;
        weight = 48;
    };
    class rhs_mag_3ubr8_125: rhs_mag_3ubr8_230 {
        count = 125;
        weight = 37.5;
    };
    class rhs_mag_3ubr8_150: rhs_mag_3ubr8_230 {
        count = 150;
        weight = 45;
    };
    class rhs_mag_3ubr8_160: rhs_mag_3ubr8_230 {
        count = 160;
        weight = 48;
    };
    class rhs_mag_3ubr8_195: rhs_mag_3ubr8_230 {
        count = 195;
        weight = 58.5;
    };
    class rhs_mag_3ubr8_227: rhs_mag_3ubr8_230 {
        count = 227;
        weight = 68.1;
    };
    class rhs_mag_3ubr8_250: rhs_mag_3ubr8_230 {
        count = 250;
        weight = 75;
    };
    class rhs_mag_3ubr11_230: rhs_mag_3ubr6_230 {
        displayName = "$STR_RHS_MAG_3UBR11";
        displayNameShort = "$STR_RHS_MAG_SH_3UBR11";
        ammo = "rhs_ammo_3ubr11";
        weight = 69;
    };
    class rhs_mag_3ubr11_100: rhs_mag_3ubr11_230 {
        count = 100;
        weight = 40;
    };
    class rhs_mag_3ubr11_120: rhs_mag_3ubr11_230 {
        count = 120;
        weight = 48;
    };
    class rhs_mag_3ubr11_125: rhs_mag_3ubr11_230 {
        count = 125;
        weight = 37.5;
    };
    class rhs_mag_3ubr11_150: rhs_mag_3ubr11_230 {
        count = 150;
        weight = 45;
    };
    class rhs_mag_3ubr11_160: rhs_mag_3ubr11_230 {
        count = 160;
        weight = 48;
    };
    class rhs_mag_3ubr11_195: rhs_mag_3ubr11_230 {
        count = 195;
        weight = 58.5;
    };
    class rhs_mag_3ubr11_227: rhs_mag_3ubr11_230 {
        count = 227;
        weight = 68.1;
    };
    class rhs_mag_3ubr11_250: rhs_mag_3ubr11_230 {
        count = 250;
        weight = 75;
    };
    class rhs_mag_AZP23_250: VehicleMagazine {
        scope = 2;
        displayName = "$STR_RHS_AZP23_NAME";
        ammo = "RHS_ammo_23mm_AA";
        count = 250;
        initSpeed = 980;
        maxLeadSpeed = 650;
        nameSound = "cannon";
        tracersEvery = 1;
    };
    class rhs_mag_AZP23_250_mixed: rhs_mag_AZP23_250 {
        ammo = "RHS_ammo_23mm_AA_mixed";
    };
    class rhs_mag_AZP23_250_ap: rhs_mag_AZP23_250 {
        ammo = "rhs_ammo_bzt_23x115mm";
    };
    class rhs_mag_AZP23_2000: rhs_mag_AZP23_250 {
        count = 2000;
    };
    class rhs_mag_AZP23_2000_mixed: rhs_mag_AZP23_2000 {
        ammo = "RHS_ammo_23mm_AA_mixed";
    };
    class rhs_mag_AZP23_100: rhs_mag_AZP23_250 {
        count = 100;
        muzzleImpulseFactor[] = {0.5, 0.2};
    };
    class rhs_mag_AZP23_100_veh: rhs_mag_AZP23_100 {
        muzzleImpulseFactor[] = {0.3, 1.2};
    };
    class rhs_mag_AZP23_100_ap: rhs_mag_AZP23_250_ap {
        count = 100;
    };
    class rhs_mag_AZP23_100_ap_veh: rhs_mag_AZP23_100_ap {
        muzzleImpulseFactor[] = {0.3, 1.2};
    };
    class rhs_mag_AM23_500: rhs_mag_AZP23_250 {
        initSpeed = 720;
        count = 500;
    };
    class rhs_mag_gsh30_ofzt_750: rhs_mag_3ubr6_230 {
        displayName = "$STR_RHS_MAG_OFZT30GSH";
        displayNameShort = "$STR_RHS_MAG_SH_OFZT30GSH";
        ammo = "rhs_ammo_3uof8";
        count = 750;
        tracersEvery = 1;
        initSpeed = 817;
        maxLeadSpeed = 300;
        weight = "0.390*750";
    };
    class rhs_mag_gsh30_bt_750: rhs_mag_3uor6_230 {
        displayName = "$STR_RHS_MAG_BT30GSH";
        displayNameShort = "$STR_RHS_MAG_SH_BT30GSH";
        ammo = "rhs_ammo_gsh30_bt";
        count = 750;
        weight = 292.5;
        maxLeadSpeed = 300;
    };
    class rhs_mag_gsh30_ofzt_250: rhs_mag_gsh30_ofzt_750 {
        count = 250;
        weight = 97.5;
        maxLeadSpeed = 300;
        muzzleImpulseFactor[] = {0.5, 1.2};
    };
    class rhs_mag_gsh30_bt_250: rhs_mag_gsh30_bt_750 {
        count = 250;
        weight = 97.5;
        maxLeadSpeed = 300;
        muzzleImpulseFactor[] = {0.5, 1.2};
    };
    class rhs_mag_gsh30_bt_150: rhs_mag_gsh30_bt_250 {
        count = 150;
        weight = 58.5;
    };
    class rhs_mag_gsh30_mixed_150: rhs_mag_gsh30_bt_150 {
        ammo = "rhs_ammo_gsh30_mixed";
    };
    class rhs_mag_762x54mm_100: VehicleMagazine {
        scope = 2;
        displayName = "$STR_RHS_MAG_762X54MM";
        displayNameShort = "$STR_RHS_MAG_SH_762X54MM";
        count = 100;
        ammo = "rhs_B_762x54_Ball";
        initSpeed = 855;
        tracersEvery = 4;
        nameSound = "mgun";
        rhs_magazineIndex = 7;
    };
    class rhs_mag_762x54mm_250: rhs_mag_762x54mm_100 {
        count = 250;
    };
    class rhs_mag_762x54mm_500: rhs_mag_762x54mm_100 {
        count = 500;
    };
    class rhs_mag_762x54mm_1000: rhs_mag_762x54mm_100 {
        count = 1000;
    };
    class rhs_mag_762x54mm_2000: rhs_mag_762x54mm_100 {
        count = 2000;
    };
    class rhs_mag_127x108mm_50: VehicleMagazine {
        scope = 2;
        displayName = "$STR_RHS_MAG_127X108MM";
        displayNameShort = "$STR_RHS_MAG_SH_127X108MM";
        count = 50;
        ammo = "rhs_ammo_127x108mm";
        initSpeed = 817;
        tracersEvery = 4;
        nameSound = "mgun";
        weight = "0.13*50";
    };
    class rhs_mag_127x108mm_100: rhs_mag_127x108mm_50 {
        count = 100;
        weight = 13;
    };
    class rhs_mag_127x108mm_150: rhs_mag_127x108mm_50 {
        count = 150;
        weight = 19.5;
    };
    class rhs_mag_127x108mm_300: rhs_mag_127x108mm_50 {
        count = 300;
        weight = 39;
    };
    class rhs_mag_127x108mm_1470: rhs_mag_127x108mm_50 {
        ammo = "rhs_ammo_127x108mm_x5";
        tracersEvery = 1;
        count = 1470;
        weight = 191.1;
        maxLeadSpeed = 300;
    };
    class rhs_mag_127x108mm_1slt_1470: rhs_mag_127x108mm_1470 {
        ammo = "rhs_ammo_127x108mm_1SLT";
        displayName = "$STR_RHS_MAG_127X108MM_1SLT";
        displayNameShort = "$STR_RHS_MAG_SH_127X108MM_1SLT";
        tracersEvery = 1;
        weight = 208.74;
        initSpeed = 735;
    };
    class rhs_mag_145x115mm_50: VehicleMagazine {
        displayName = "$STR_RHS_MAG_145X115MM";
        displayNameShort = "$STR_RHS_MAG_SH_145X115MM";
        count = 50;
        ammo = "rhs_ammo_145x115mm";
        initSpeed = 988;
        tracersEvery = 4;
        nameSound = "mgun";
    };
    class RHS_mag_VOG30_30: VehicleMagazine {
        displayName = "$STR_RHS_MAG_VOG30";
        displayNameShort = "$STR_RHS_MAG_SH_VOG30";
        count = 30;
        ammo = "rhs_ammo_VOG30";
        initSpeed = 185;
        nameSound = "handgrenade";
    };
    class RHS_mag_GPD30_30: RHS_mag_VOG30_30 {
        displayName = "$STR_RHS_MAG_GPD30";
        displayNameShort = "$STR_RHS_MAG_SH_GPD30";
        ammo = "rhs_ammo_GPD30";
    };
    class RHS_mag_VOG17m_30: RHS_mag_VOG30_30 {
        displayName = "$STR_RHS_MAG_VOG17m";
        displayNameShort = "$STR_RHS_MAG_SH_VOG17m";
        ammo = "rhs_ammo_VOG17m";
    };
};
class Mode_FullAuto;
class CfgWeapons {
    class Default;
    class SmokeLauncher;
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
    class rhs_weap_902a: SmokeLauncher {
        scope = 2;
        displayName = "$STR_RHS_WEAP_902A";
        magazines[] = {
            "rhs_mag_902a",
            "rhs_mag_3d17_4",
            "rhs_mag_3d17_6",
            "rhs_mag_3d17_12",
            "rhs_mag_3d17"
        };
        reloadTime = 0.099;
        showToPlayer = 1;
        autoFire = 1;
        minRange = 0;
        maxRange = 10000;
    };
    class rhs_weap_902b: rhs_weap_902a {
        displayName = "$STR_RHS_WEAP_902B";
        modes[] = {"Double", "Volley", "AIDouble", "AIVolley"};
        class Double: rhs_weap_902a {
            reloadTime = 0.099;
            burst = 2;
            showToPlayer = 1;
            multiplier = 1;
            minRange = 0;
            maxRange = 10000;
            soundBurst = 0;
            autoFire = 1;
            displayName = "$STR_RHS_WEAP_902B";
        };
        class Volley: Double {
            burst = 6;
            autoFire = 1;
            displayName = "$STR_RHS_WEAP_902B_BURST";
        };
        class AIDouble: Double {
            showToPlayer = 0;
        };
        class AIVolley: Volley {
            showToPlayer = 0;
        };
    };
    class rhs_weap_smokegen: Default {
        scope = 2;
        magazines[] = {"rhs_mag_smokegen"};
        reloadTime = 8;
        simulation = "cmlauncher";
        modes[] = {"Single", "Continuos"};
        class Single: Mode_SemiAuto {
            cursor = "EmptyCursor";
            displayName = "$STR_RHS_WEAP_SMOKEGEN";
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
            displayName = "Smokegen (cont)";
            burst = 999;
            reloadTime = 8;
        };
    };
    class rhs_weap_dazzler: rhs_weap_smokegen {
        displayName = "Dazzler";
        magazines[] = {"rhs_mag_dazzler"};
        reloadTime = 20;
    };
    class CMFlareLauncher: SmokeLauncher {
        class Single;
        class Burst;
    };
    class rhs_weap_CMFlareLauncher: CMFlareLauncher {
        magazines[] = {
            "rhs_128Rnd_CMFlare_Chaff_Magazine",
            "rhs_60Rnd_CMFlare_Magazine",
            "60Rnd_CMFlareMagazine",
            "120Rnd_CMFlareMagazine",
            "240Rnd_CMFlareMagazine",
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
    class rhs_weap_CMDispenser_ASO2: rhs_weap_CMFlareLauncher {
        magazines[] = {
            "rhs_ASO2_CMFlare_Magazine",
            "rhs_ASO2_CMFlare_Magazine_x2",
            "rhs_ASO2_CMFlare_Magazine_x4",
            "rhs_ASO2_CMFlare_Magazine_x6",
            "rhs_ASO2_CMFlare_Chaff_Magazine",
            "rhs_ASO2_CMFlare_Chaff_Magazine_x2",
            "rhs_ASO2_CMFlare_Chaff_Magazine_x4",
            "rhs_ASO2_CMFlare_Chaff_Magazine_x6"
        };
    };
    class rhs_weap_CMDispenser_BVP3026: rhs_weap_CMFlareLauncher {
        magazines[] = {
            "rhs_BVP3026_CMFlare_Magazine",
            "rhs_BVP3026_CMFlare_Magazine_x2",
            "rhs_BVP3026_CMFlare_Chaff_Magazine",
            "rhs_BVP3026_CMFlare_Chaff_Magazine_x2"
        };
    };
    class rhs_weap_CMDispenser_UV26: rhs_weap_CMFlareLauncher {
        magazines[] = {
            "rhs_UV26_CMFlare_Magazine",
            "rhs_UV26_CMFlare_Magazine_x2",
            "rhs_UV26_CMFlare_Magazine_x4",
            "rhs_UV26_CMFlare_Chaff_Magazine",
            "rhs_UV26_CMFlare_Chaff_Magazine_x2",
            "rhs_UV26_CMFlare_Chaff_Magazine_x4"
        };
    };
    class rhs_weap_DIRCM_Vitebsk: MGun {
        scope = 2;
        displayName = "Vitebsk DIRCM";
        magazines[] = {"RHS_mag_DIRCM_Vitebsk"};
        magazineReloadTime = 60;
        simulation = "cmlauncher";
        modes[] = {"Burst1"};
        reloadMagazineSound[] = {"A3\sounds_f\dummysound", 2, 1, 5};
        class Burst1: Mode_Burst {
            displayName = "DIRCM";
            reloadTime = 0.5;
            burst = 120;
            sounds[] = {"StandardSound"};
            class StandardSound {
                begin1[] = {
                    "rhsafrf\addons\rhs_c_heavyweapons\Sounds\ircm_on1",
                    2,
                    1,
                    5
                };
                begin2[] = {
                    "rhsafrf\addons\rhs_c_heavyweapons\Sounds\ircm_on2",
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
    class rhs_weap_DIRCM_Lipa: rhs_weap_DIRCM_Vitebsk {
        displayName = "Lipa DIRCM";
        magazines[] = {"rhs_mag_DIRCM_Lipa"};
        class Burst1: Mode_Burst {
            displayName = "DIRCM";
            reloadTime = 1;
            burst = 80;
            sounds[] = {"StandardSound"};
            class StandardSound {
                begin1[] = {
                    "rhsafrf\addons\rhs_c_heavyweapons\Sounds\ircm_on1",
                    2,
                    1,
                    5
                };
                begin2[] = {
                    "rhsafrf\addons\rhs_c_heavyweapons\Sounds\ircm_on2",
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
    class rhs_weap_afganit_base: MGun {
        scope = 1;
        showToPlayer = 0;
        modes[] = {"Single"};
        autReload = 0;
        class Single: Mode_SemiAuto {
            cursor = "EmptyCursor";
            showToPlayer = 0;
            autoFire = 1;
            burst = 1;
            reloadTime = 8;
            minRange = 0;
            maxRange = 1000;
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"rhs_afganitAPS_soundset", "Launcher_Firefist_Tail_SoundSet"};
            };
        };
        class EventHandlers {
            class RHS_CM_EH {
                fired = "_this call rhs_fnc_aps_afganit_fired";
            };
        };
    };
    class rhs_weap_afganit_1: rhs_weap_afganit_base {
        magazines[] = {"rhs_mag_aps_afganit"};
    };
    class rhs_weap_afganit_2: rhs_weap_afganit_base {
        magazines[] = {"rhs_mag_aps_afganit"};
    };
    class rhs_weap_afganit_3: rhs_weap_afganit_base {
        magazines[] = {"rhs_mag_aps_afganit"};
    };
    class rhs_weap_afganit_4: rhs_weap_afganit_base {
        magazines[] = {"rhs_mag_aps_afganit"};
    };
    class rhs_weap_afganit_5: rhs_weap_afganit_base {
        magazines[] = {"rhs_mag_aps_afganit"};
    };
    class rhs_weap_afganit_6: rhs_weap_afganit_base {
        magazines[] = {"rhs_mag_aps_afganit"};
    };
    class rhs_weap_afganit_7: rhs_weap_afganit_base {
        magazines[] = {"rhs_mag_aps_afganit"};
    };
    class rhs_weap_afganit_8: rhs_weap_afganit_base {
        magazines[] = {"rhs_mag_aps_afganit"};
    };
    class rhs_weap_afganit_9: rhs_weap_afganit_base {
        magazines[] = {"rhs_mag_aps_afganit"};
    };
    class rhs_weap_afganit_10: rhs_weap_afganit_base {
        magazines[] = {"rhs_mag_aps_afganit"};
    };
    class rhs_weap_afganit_smoke: rhs_weap_902a {
        displayName = "Smoke Launcher";
        magazines[] = {"rhs_mag_afganit_smoke_12"};
        modes[] = {"Double", "Volley", "AIDouble", "AIVolley"};
        class Double: rhs_weap_902a {
            reloadTime = 0.099;
            burst = 2;
            showToPlayer = 1;
            multiplier = 1;
            minRange = 0;
            maxRange = 10000;
            soundBurst = 0;
            autoFire = 1;
            displayName = "Smoke (Single)";
        };
        class Volley: Double {
            burst = 6;
            autoFire = 1;
            displayName = "Smoke (Burst)";
        };
        class AIDouble: Double {
            showToPlayer = 0;
        };
        class AIVolley: Volley {
            showToPlayer = 0;
        };
    };
    class PKT: MGun {
        scope = 1;
        reloadTime = 0.075;
        autoFire = 1;
        soundContinuous = 0;
        dispersion = 0.003;
        minRange = 2;
        minRangeProbab = 0.1;
        midRange = 200;
        midRangeProbab = 0.7;
        maxRange = 600;
        maxRangeProbab = 0.01;
        aiDispersionCoefY = 7;
        aiDispersionCoefX = 7;
        magazineReloadTime = 7;
        maxLeadSpeed = 600;
        canLock = 0;
    };
    class rhs_weap_pkt: PKT {
        type = 1;
        showAimCursorInternal = 1;
        scope = 1;
        displayName = "$STR_RHS_WEAP_PKT";
        magazines[] = {
            "rhs_mag_762x54mm_100",
            "rhs_mag_762x54mm_250",
            "rhs_mag_762x54mm_500",
            "rhs_mag_762x54mm_1000",
            "rhs_mag_762x54mm_2000"
        };
        aiDispersionCoefY = 10;
        aiDispersionCoefX = 8;
        initSpeed = 0;
        modes[] = {"manual", "close", "short", "medium", "far"};
        class manual: MGun {
            displayName = "$STR_RHS_WEAP_PKT";
            autoFire = 1;
            reloadTime = 0.075;
            dispersion = 0.00125;
            showToPlayer = 1;
            soundContinuous = 0;
            burst = 1;
            aiBurstTerminable = 1;
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
            burst = 12;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 50;
            aiRateOfFireDispersion = 4;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.04;
        };
        class short: close {
            burst = 10;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            aiRateOfFireDispersion = 4;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.1;
        };
        class medium: close {
            burst = 7;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            aiRateOfFireDispersion = 3;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 500;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.1;
        };
        class far: close {
            burst = 6;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 1000;
            aiRateOfFireDispersion = 3;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 850;
            midRangeProbab = 0.4;
            maxRange = 1100;
            maxRangeProbab = 0.01;
        };
    };
    class rhs_weap_pktm: rhs_weap_pkt {
        displayName = "$STR_RHS_WEAP_PKTM";
        class manual: manual {
            displayName = "$STR_RHS_WEAP_PKTM";
        };
        reloadMagazineSound[] = {
            "a3\Sounds_F\arsenal\weapons_static\Static_HMG\reload_static_HMG",
            1,
            1,
            10
        };
    };
    class rhs_weap_pkt_v1: rhs_weap_pkt {};
    class rhs_weap_pkt_v2: rhs_weap_pkt {};
    class rhs_weap_pkt_v3: rhs_weap_pkt {};
    class rhs_weap_pkt_bmd_coax: rhs_weap_pkt {
        class gunParticles {
            class effect1 {
                effectname = "MachineGunCloud";
                positionname = "Usti hlavne2";
                directionname = "Konec hlavne2";
            };
        };
    };
    class rhs_weap_pkt_2s3: rhs_weap_pkt {
        class gunParticles {
            class effect1 {
                effectname = "MachineGunCloud";
                positionname = "Usti hlavne3";
                directionname = "Konec hlavne3";
            };
        };
    };
    class rhs_weap_pkt_bmd_bow1: rhs_weap_pkt {
        class gunParticles {
            class effect1 {
                effectname = "MachineGunCloud";
                positionname = "muzzle2";
                directionname = "end2";
            };
        };
    };
    class rhs_weap_pkt_bmd_bow2: rhs_weap_pkt {
        class gunParticles {
            class effect1 {
                effectname = "MachineGunCloud";
                positionname = "muzzle3";
                directionname = "end3";
            };
        };
    };
    class rhs_weap_pkt_btr: rhs_weap_pkt {
        class gunParticles {
            class effect1 {
                effectname = "MachineGunCloud";
                positionname = "kulas";
                directionname = "kulas end";
            };
        };
    };
    class rhs_weap_pkt_btr80a: rhs_weap_pkt {
        class gunParticles {
            class effect1 {
                effectname = "MachineGunCloud";
                positionname = "kulas";
                directionname = "kulas end";
            };
            class effect2 {
                effectName = "MachineGunCartridge2";
                positionName = "machinegun_eject_pos";
                directionName = "machinegun_eject_dir";
            };
        };
    };
    class rhs_weap_pkt_zeroing: rhs_weap_pkt {
        ballisticscomputer = 2;
    };
    class rhs_weap_pkt_t90m_RWS: rhs_weap_pkt {
        ballisticsComputer = "2 + 16";
    };
    class rhs_weap_pktm_t14_RWS: rhs_weap_pktm {
        ballisticsComputer = "2 + 16";
    };
    class LMG_RCWS: MGun {};
    class rhs_weap_DSHKM: LMG_RCWS {
        type = 1;
        initSpeed = 0;
        class GunParticles {
            class effect1 {
                positionName = "usti hlavne";
                directionName = "konec hlavne";
                effectName = "MachineGunCloud";
            };
            class effect2 {
                positionName = "machinegun_eject_pos";
                directionName = "machinegun_eject_dir";
                effectName = "MachineGunCartridge2";
            };
        };
        reloadMagazineSound[] = {
            "a3\Sounds_F\arsenal\weapons_static\Static_HMG\reload_static_HMG",
            1,
            1,
            10
        };
        scope = 1;
        autoFire = 1;
        displayName = "$STR_RHS_WEAP_DSHKM";
        ballisticscomputer = 2;
        magazineReloadTime = 12;
        magazines[] = {"rhs_mag_127x108mm_50", "rhs_mag_127x108mm_150"};
        soundServo[] = {"", 0.0001, 1};
        reloadTime = 0.1;
        dispersion = 0.002;
        minRange = 1;
        minRangeProbab = 0.1;
        midRange = 400;
        midRangeProbab = 0.7;
        maxRange = 1200;
        maxRangeProbab = 0.04;
        aiDispersionCoefY = 7;
        aiDispersionCoefX = 9;
        aiRateOfFire = 0.3;
        aiRateOfFireDistance = 1500;
        maxLeadSpeed = 600;
        canLock = 0;
        modes[] = {"manual", "close", "short", "medium", "far"};
        class manual: MGun {
            displayName = "$STR_RHS_WEAP_NSVT";
            autoFire = 1;
            reloadTime = 0.1;
            dispersion = 0.002;
            showToPlayer = 1;
            burst = 1;
            aiBurstTerminable = 1;
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
            burst = 10;
            burstRangeMax = 15;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.58;
            maxRange = 100;
            maxRangeProbab = 0.04;
        };
        class short: close {
            burst = 9;
            burstRangeMax = 15;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            aiRateOfFireDispersion = 5;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.58;
            maxRange = 300;
            maxRangeProbab = 0.04;
        };
        class medium: close {
            burst = 6;
            burstRangeMax = 10;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            aiRateOfFireDispersion = 3;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 500;
            midRangeProbab = 0.58;
            maxRange = 800;
            maxRangeProbab = 0.04;
        };
        class far: close {
            burst = 5;
            burstRangeMax = 9;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 1000;
            aiRateOfFireDispersion = 4;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 800;
            midRangeProbab = 0.4;
            maxRange = 1100;
            maxRangeProbab = 0.01;
        };
    };
    class rhs_weap_dshkm_slow: rhs_weap_DSHKM {
        magazineReloadTime = 30;
    };
    class rhs_weap_nsvt: rhs_weap_DSHKM {
        scope = 1;
        displayName = "$STR_RHS_WEAP_NSVT";
        magazines[] = {
            "rhs_mag_127x108mm_50",
            "rhs_mag_127x108mm_100",
            "rhs_mag_127x108mm_150",
            "rhs_mag_127x108mm_300"
        };
        reloadTime = 0.1;
        magazineReloadTime = 10;
        flash = "gunfire";
        flashSize = 0.6;
        dispersion = 0.002;
        aiDispersionCoefY = 7;
        aiDispersionCoefX = 7;
        aiRateOfFire = 0.3;
        aiRateOfFireDistance = 1500;
        class manual: MGun {
            displayName = "$STR_RHS_WEAP_NSVT";
            autoFire = 1;
            reloadTime = 0.086;
            dispersion = 0.002;
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
            burst = 10;
            burstRangeMax = 15;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.58;
            maxRange = 100;
            maxRangeProbab = 0.04;
        };
        class short: close {
            burst = 9;
            burstRangeMax = 15;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            aiRateOfFireDispersion = 5;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.58;
            maxRange = 300;
            maxRangeProbab = 0.04;
        };
        class medium: close {
            burst = 8;
            burstRangeMax = 12;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            aiRateOfFireDispersion = 3;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 500;
            midRangeProbab = 0.58;
            maxRange = 800;
            maxRangeProbab = 0.04;
        };
        class far: close {
            burst = 5;
            burstRangeMax = 8;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 1000;
            aiRateOfFireDispersion = 4;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 800;
            midRangeProbab = 0.4;
            maxRange = 1100;
            maxRangeProbab = 0.01;
        };
        class GunParticles {};
    };
    class rhs_weap_nsvt_effects: rhs_weap_nsvt {
        class GunParticles {
            class effect1a {
                effectname = "MachineGunCloud";
                positionname = "Usti hlavne";
                directionname = "Konec hlavne";
            };
            class effect1 {
                positionname = "nabojnicestart";
                directionname = "nabojniceend";
                effectname = "MachineGunEject";
            };
            class effect2 {
                positionName = "machinegun_eject_pos";
                directionName = "machinegun_eject_dir";
                effectName = "MachineGunCartridge2";
            };
        };
    };
    class rhs_weap_nsvt_t72_var1: rhs_weap_nsvt_effects {};
    class rhs_weap_nsvt_t72: rhs_weap_nsvt_effects {
        type = 1;
        class GunParticles: GunParticles {
            class effect1a {
                effectname = "MachineGunCloud";
                positionname = "mg_end";
                directionname = "mg_start";
            };
        };
    };
    class rhs_weap_nsvt_obj681: rhs_weap_nsvt_effects {
        class GunParticles {
            class effect1a {
                effectname = "MachineGunCloud";
                positionname = "nsvt_start";
                directionname = "nsvt_end";
            };
        };
        holdsterAnimValue = 1;
    };
    class rhs_weap_nsvt_t80: rhs_weap_nsvt_effects {
        class GunParticles: GunParticles {
            class effect1a {
                effectname = "MachineGunCloud";
                positionname = "Mgun_end";
                directionname = "Mgun_start";
            };
        };
    };
    class rhs_weap_nsvt_t90m_RWS: rhs_weap_nsvt_t72 {
        ballisticsComputer = "2 + 16";
    };
    class rhs_weap_kord: rhs_weap_nsvt_effects {
        displayName = "$STR_RHS_DN_KORD";
        class manual: manual {
            displayName = "$STR_RHS_DN_KORD";
            reloadTime = 0.095;
            dispersion = 0.002;
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
            burst = 10;
            burstRangeMax = 16;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.58;
            maxRange = 100;
            maxRangeProbab = 0.04;
        };
        class short: close {
            burst = 9;
            burstRangeMax = 14;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            aiRateOfFireDispersion = 2;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.58;
            maxRange = 300;
            maxRangeProbab = 0.04;
        };
        class medium: close {
            burst = 8;
            burstRangeMax = 12;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            aiRateOfFireDispersion = 3;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 500;
            midRangeProbab = 0.58;
            maxRange = 800;
            maxRangeProbab = 0.04;
        };
        class far: close {
            burst = 5;
            burstRangeMax = 10;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 1000;
            aiRateOfFireDispersion = 4;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 800;
            midRangeProbab = 0.4;
            maxRange = 1100;
            maxRangeProbab = 0.01;
        };
    };
    class rhs_weap_kpvt: MGun {
        type = 1;
        autoFire = 1;
        reloadTime = 0.1;
        magazineReloadTime = 12;
        shotFromTurret = 1;
        canLock = 0;
        initSpeed = 0;
        class gunParticles {
            class effect1 {
                effectname = "MachineGunCloud";
                positionname = "Usti hlavne";
                directionname = "Konec hlavne";
            };
            class effect2 {
                effectname = "RHS_145mm_Catridge";
                positionname = "machinegun_eject_pos";
                directionname = "machinegun_eject_dir";
            };
        };
        scope = 1;
        displayName = "$STR_RHS_WEAP_KPVT";
        magazines[] = {"rhs_mag_145x115mm_50"};
        aiDispersionCoefY = 10;
        aiDispersionCoefX = 8;
        selectionFireAnim = "zasleh3";
        reloadMagazineSound[] = {
            "a3\Sounds_F\arsenal\weapons_static\Static_HMG\reload_static_HMG",
            1,
            1,
            10
        };
        modes[] = {"manual", "close", "short", "medium", "far"};
        class manual: MGun {
            displayName = "$STR_RHS_WEAP_KPVT";
            autoFire = 1;
            reloadTime = 0.1;
            dispersion = 0.0007;
            showToPlayer = 1;
            burst = 1;
            aiBurstTerminable = 1;
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
            burstRangeMax = 15;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 100;
            midRangeProbab = 0.58;
            maxRange = 300;
            maxRangeProbab = 0.04;
        };
        class short: close {
            burst = 6;
            burstRangeMax = 14;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            aiRateOfFireDispersion = 2;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 600;
            midRangeProbab = 0.58;
            maxRange = 1000;
            maxRangeProbab = 0.04;
        };
        class medium: close {
            burst = 4;
            burstRangeMax = 9;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 600;
            aiRateOfFireDispersion = 3;
            minRange = 800;
            minRangeProbab = 0.05;
            midRange = 1000;
            midRangeProbab = 0.58;
            maxRange = 1200;
            maxRangeProbab = 0.04;
        };
        class far: close {
            burst = 5;
            burstRangeMax = 9;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 1000;
            aiRateOfFireDispersion = 4;
            minRange = 1000;
            minRangeProbab = 0.05;
            midRange = 1200;
            midRangeProbab = 0.4;
            maxRange = 1500;
            maxRangeProbab = 0.01;
        };
    };
    class gatling_30mm;
    class rhs_weap_yakB: gatling_30mm {
        scope = 2;
        aidispersioncoefx = 1.6;
        aidispersioncoefy = 3;
        ballisticscomputer = 0;
        canlock = 0;
        cursor = "";
        cursoraim = "";
        displayname = "$STR_RHS_YAKBYU_NAME";
        firespreadangle = "0.5f";
        flash = "gunfire";
        flashsize = 0.1;
        magazines[] = {"rhs_mag_127x108mm_1470", "rhs_mag_127x108mm_1SLT_1470"};
        muzzles[] = {"this"};
        modes[] = {"manual", "close", "short", "medium", "far"};
        recoil = "Empty";
        showaimcursorinternal = 1;
        soundcontinuous = 0;
        class gunParticles {
            class effect1 {
                effectname = "RHS_YakB_Catridge";
                positionname = "machinegun_eject_pos";
                directionname = "machinegun_eject_dir";
            };
            class effect2 {
                directionname = "muzzle_1_dir";
                positionname = "muzzle_1";
                effectname = "AutoCannonFired";
            };
        };
        class manual: Mode_FullAuto {
            airateoffire = 0.5;
            airateoffiredistance = 50;
            autofire = 1;
            burst = 1;
            dispersion = 0.009;
            displayname = "$STR_RHS_YAKBYU_NAME";
            maxrange = 3;
            maxrangeprobab = 0.01;
            midrange = 2;
            midrangeprobab = 0.01;
            minrange = 1;
            minrangeprobab = 0.01;
            multiplier = 2;
            reloadTime = 0.03;
            showtoplayer = 1;
            soundburst = 0;
            soundcontinuous = 1;
        };
        class close: manual {
            airateoffire = 1;
            aiRateOfFireDispersion = 0;
            airateoffiredistance = 50;
            burst = 10;
            burstRangeMax = 19;
            maxrange = 500;
            maxrangeprobab = 0.04;
            midrange = 200;
            midrangeprobab = 0.88;
            minrange = 0;
            minrangeprobab = 0.05;
            showtoplayer = 0;
        };
        class short: close {
            airateoffire = 1.2;
            aiRateOfFireDispersion = 1;
            airateoffiredistance = 300;
            burst = 14;
            burstRangeMax = 20;
            maxrange = 800;
            maxrangeprobab = 0.04;
            midrange = 500;
            midrangeprobab = 0.88;
            minrange = 200;
            minrangeprobab = 0.05;
        };
        class medium: close {
            airateoffire = 2.3;
            aiRateOfFireDispersion = 1;
            airateoffiredistance = 300;
            burst = 14;
            burstRangeMax = 18;
            maxrange = 1000;
            maxrangeprobab = 0.04;
            midrange = 800;
            midrangeprobab = 0.68;
            minrange = 600;
            minrangeprobab = 0.05;
        };
        class far: close {
            airateoffire = 4;
            aiRateOfFireDispersion = 1;
            airateoffiredistance = 800;
            burst = 12;
            burstRangeMax = 16;
            maxrange = 1200;
            maxrangeprobab = 0.01;
            midrange = 1000;
            midrangeprobab = 0.4;
            minrange = 800;
            minrangeprobab = 0.05;
        };
    };
    class GMG_F;
    class GMG_20mm;
    class RHS_weap_Ags30: GMG_20mm {
        type = 1;
        ballisticsComputer = 2;
        scope = 1;
        displayName = "AGS-30";
        magazines[] = {"RHS_mag_VOG30_30", "RHS_mag_GPD30_30", "RHS_mag_VOG17m_30"};
        class GunParticles {
            class effect1 {
                positionName = "usti hlavne";
                directionName = "konec hlavne";
                effectName = "GrenadeLauncherCloud";
            };
        };
        autoreload = 1;
        canlock = 0;
        dispersion = 0.006;
        aiDispersionCoefY = 7;
        aiDispersionCoefX = 6;
        magazinereloadtime = 6;
        reloadtime = 0.15;
        modes[] = {"manual", "close", "short", "medium", "far"};
        class manual: GMG_F {
            displayname = "AGS-30 Grenade Launcher";
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"GMG20mm_Shot_SoundSet", "GMG20mm_Tail_SoundSet"};
            };
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
            burst = 3;
            burstRangeMax = 8;
            aiRateOfFire = 1;
            aiRateOfFireDispersion = 1;
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
            aiRateOfFire = 1;
            aiRateOfFireDispersion = 2;
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
            aiRateOfFire = 2;
            aiRateOfFireDispersion = 2;
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
            aiRateOfFire = 2;
            aiRateOfFireDispersion = 3;
            aiRateOfFireDistance = 1000;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 750;
            midRangeProbab = 0.4;
            maxRange = 1000;
            maxRangeProbab = 0.01;
        };
    };
    class rhs_weap_pkm_tigr: rhs_weap_pkt {
        ballisticscomputer = 2;
        magazineReloadTime = 5;
        displayName = "$STR_RHS_WEAP_PKM";
        class GunParticles {
            class effect1 {
                positionName = "weapon_pkm_end";
                directionName = "weapon_pkm_start";
                effectName = "MachineGunCloud";
            };
            class effect2 {
                positionName = "weapon_pkm_eject_pos";
                directionName = "weapon_pkm_eject_dir";
                effectName = "MachineGunCartridge2";
            };
            class SecondEffect {
                positionName = "weapon_pkm_eject_pos";
                directionName = "weapon_pkm_eject_dir";
                effectName = "RifleAssaultCloud";
            };
            class RHS_BarrelRefract {
                positionName = "weapon_pkm_end";
                directionName = "weapon_pkm_end_up";
                effectName = "RHS_BarrelRefract";
            };
        };
        aiDispersionCoefY = 14;
        aiDispersionCoefX = 8;
        modes[] = {"manual", "close", "short", "medium", "far"};
        class manual: manual {
            displayName = "$STR_RHS_WEAP_PKM";
            autoFire = 1;
            reloadTime = 0.075;
            dispersion = 0.00125;
            showToPlayer = 1;
            soundContinuous = 0;
            burst = 1;
            aiBurstTerminable = 1;
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
            burst = 12;
            burstRangeMax = 16;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 50;
            aiRateOfFireDispersion = 4;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.04;
        };
        class short: close {
            burst = 10;
            burstRangeMax = 14;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            aiRateOfFireDispersion = 4;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.1;
        };
        class medium: close {
            burst = 7;
            burstRangeMax = 11;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            aiRateOfFireDispersion = 3;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 500;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.1;
        };
        class far: close {
            burst = 6;
            burstRangeMax = 10;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 1000;
            aiRateOfFireDispersion = 3;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 850;
            midRangeProbab = 0.4;
            maxRange = 1100;
            maxRangeProbab = 0.01;
        };
    };
    class RHS_weap_Ags30_tigr: RHS_weap_Ags30 {
        class GunParticles {
            class effect1 {
                positionName = "weapon_ags_end";
                directionName = "weapon_ags_start";
                effectName = "GrenadeLauncherCloud";
            };
        };
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
        displayname = "";
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
        weaponLockSystem = 4;
        class gunParticles {};
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
    class rhs_weap_fcs_nolrf_ammo: rhs_weap_fcs {
        weaponLockSystem = 0;
        class Eventhandlers {
            fired = "[_this select 0,_this select 1,false,true] call rhs_fnc_firedFCS";
        };
    };
    class rhs_weap_fcs_mi24: rhs_weap_fcs {
        weaponLockSystem = 0;
        class Eventhandlers {
            fired = "_this call rhs_fnc_firedFCS_mi24";
        };
    };
    class rhs_weap_fcs_su25: rhs_weap_fcs {
        minRange = 500;
        minRangeProbab = 1;
        midRange = 4000;
        midRangeProbab = 1;
        maxRange = 8000;
        maxRangeProbab = 1;
        reloadTime = 6;
        class Eventhandlers {
            fired = "_this call rhs_fnc_Su25_AI_fire";
        };
    };
    class Laserdesignator_mounted;
    class RHS_T72_FCS: Laserdesignator_mounted {
        cursor = "EmptyCursor";
        cursoraim = "EmptyCursor";
        cursoraimon = "EmptyCursor";
        displayname = "$STR_RHS_FIRECONTROLSYSTEM_NAME";
        minRange = 1;
        minRangeProbab = 0.06;
        midRange = 2;
        midRangeProbab = 0.06;
        maxRange = 3;
        maxRangeProbab = 0.004;
        magazines[] = {"rhs_lasermag"};
    };
    class rhs_weap_PL1: RHS_T72_FCS {
        displayname = "$STR_RHS_PL1LASERDESIGNATOR_NAME";
    };
    class rhs_weap_klen_ps: RHS_T72_FCS {
        showtoplayer = 0;
        displayname = "Klen-PS";
    };
    class rhs_weap_d81: cannon_120mm {
        aiDispersioncoefX = 4;
        aiDispersioncoefY = 8;
        canLock = 0;
        scope = 1;
        nameSound = "cannon";
        showaimcursorinternal = 0;
        cursor = "EmptyCursor";
        cursoraim = "cannon";
        cursoraimon = "cannon";
        reloadSound[] = {"", 1, 1, 200};
        reloadMagazineSound[] = {"", 1, 1, 200};
        ballisticsComputer = 0;
        flash = "gunfire";
        flashSize = 10;
        maxLeadSpeed = 100;
        reloadTime = 6.5;
        aiRateOfFire = 6.6;
        aiRateOfFireDistance = 10;
        magazineReloadTime = 6.5;
        autoReload = 0;
        magazines[] = {"rhs_mag_dummy"};
        magazineWell[] = {"RHS_Cannon_125mm_D81"};
        modes[] = {"player", "close", "short", "medium", "far"};
        class player: player {
            autoReload = 0;
        };
        class close: close {};
        class short: short {};
        class medium: medium {};
        class far: far {
            aiRateOfFireDistance = 2500;
            minRange = 1500;
            minRangeProbab = 0.75;
            midRange = 2000;
            midRangeProbab = 0.8;
            maxRange = 4000;
            maxRangeProbab = 0.4;
        };
    };
    class rhs_weap_2a26: rhs_weap_d81 {
        aiDispersioncoefX = 5;
        aiDispersioncoefY = 9;
        displayName = "$STR_RHS_WEAP_2A26";
        magazines[] = {
            "rhs_mag_dummy",
            "rhs_mag_3bm9_10",
            "rhs_mag_3bm12_10",
            "rhs_mag_3bm15_10",
            "rhs_mag_3bm17_10",
            "rhs_mag_3bm17_14",
            "rhs_mag_3bm22_10",
            "rhs_mag_3bm22_14",
            "rhs_mag_3bm26_10",
            "rhs_mag_3bk12_8",
            "rhs_mag_3bk14_8",
            "rhs_mag_3bk18_8",
            "rhs_mag_3bk18m_8",
            "rhs_mag_3of11_6",
            "rhs_mag_3of26_6"
        };
        magazineWell[] = {};
    };
    class rhs_weap_2a46_2: rhs_weap_d81 {
        aiDispersioncoefX = 3.5;
        aiDispersioncoefY = 6.5;
        displayName = "$STR_RHS_WEAP_2A462";
        class medium: medium {
            aiRateOfFireDistance = 1500;
            minRange = 1000;
            minRangeProbab = 0.6;
            midRange = 2000;
            midRangeProbab = 0.85;
            maxRange = 3000;
            maxRangeProbab = 0.8;
        };
        class far: far {
            aiRateOfFireDistance = 3500;
            minRange = 1500;
            minRangeProbab = 0.75;
            midRange = 2000;
            midRangeProbab = 0.8;
            maxRange = 6000;
            maxRangeProbab = 0.4;
        };
    };
    class rhs_weap_2a46m_2: rhs_weap_d81 {
        aiDispersioncoefX = 3.5;
        aiDispersioncoefY = 5;
        displayName = "$STR_RHS_WEAP_2A46M2";
        magazineWell[] = {"RHS_Cannon_125mm_D81", "RHS_Cannon_125mm_2A46M"};
        class far: far {
            aiRateOfFireDistance = 4500;
            minRange = 1500;
            minRangeProbab = 0.75;
            midRange = 2000;
            midRangeProbab = 0.8;
            maxRange = 6000;
            maxRangeProbab = 0.4;
        };
    };
    class rhs_weap_2a46m: rhs_weap_2a46m_2 {
        aiDispersioncoefX = 4;
        aiDispersioncoefY = 7;
        displayName = "$STR_RHS_WEAP_2A46M";
    };
    class rhs_weap_2a46m_4: rhs_weap_2a46m_2 {
        aiDispersioncoefX = 3.5;
        aiDispersioncoefY = 5;
        displayName = "$STR_RHS_WEAP_2A46M4";
    };
    class rhs_weap_2a46m_5: rhs_weap_2a46m_2 {
        aiDispersioncoefX = 3;
        aiDispersioncoefY = 5;
        displayName = "$STR_RHS_WEAP_2A46M5";
        magazineWell[] = {"RHS_Cannon_125mm_D81", "RHS_Cannon_125mm_2A46M", "RHS_Cannon_125mm_2A46M_5"};
        class player: player {
            reloadtime = 6;
            aiRateOfFireDistance = 10;
            aiRateOfFire = 5;
        };
        class close: close {
            reloadtime = 6;
            aiRateOfFireDistance = 10;
            aiRateOfFire = 5;
        };
        class short: short {
            reloadtime = 6;
            aiRateOfFireDistance = 10;
            aiRateOfFire = 5;
        };
        class medium: medium {
            reloadtime = 6;
            aiRateOfFireDistance = 10;
            aiRateOfFire = 5;
        };
        class far: far {
            reloadtime = 6;
            aiRateOfFireDistance = 10;
            aiRateOfFire = 5;
        };
        magazineReloadTime = 6;
    };
    class rhs_weap_2a82: rhs_weap_2a46m_2 {
        aiDispersioncoefX = 2.5;
        aiDispersioncoefY = 4;
        displayName = "$STR_RHS_WEAP_2A82";
        magazineWell[] = {
            "RHS_Cannon_125mm_D81",
            "RHS_Cannon_125mm_2A46M",
            "RHS_Cannon_125mm_2A46M_5",
            "RHS_Cannon_125mm_2A82"
        };
    };
    class rhs_weap_2a82_1m: rhs_weap_2a82 {
        aiDispersioncoefX = 2.5;
        aiDispersioncoefY = 3;
        displayName = "$STR_RHS_WEAP_2A82_1M";
        magazineReloadTime = 5.5;
        class player: player {
            reloadtime = 5.5;
            aiRateOfFireDistance = 10;
            aiRateOfFire = 5;
        };
        class close: close {
            reloadtime = 5.5;
            aiRateOfFireDistance = 10;
            aiRateOfFire = 5;
        };
        class short: short {
            reloadtime = 5.5;
            aiRateOfFireDistance = 10;
            aiRateOfFire = 5;
        };
        class medium: medium {
            reloadtime = 5.5;
            aiRateOfFireDistance = 10;
            aiRateOfFire = 5;
        };
        class far: far {
            reloadtime = 5.5;
            aiRateOfFireDistance = 10;
            aiRateOfFire = 5;
        };
        ballisticsComputer = "2 + 16";
    };
    class rhs_weap_d10t2s_2: rhs_weap_d81 {
        scope = 2;
        displayName = "$STR_RHS_WEAP_D10T2S";
        magazines[] = {
            "rhs_mag_bm25_14",
            "rhs_mag_of412_17",
            "rhs_mag_of412_21",
            "rhs_mag_9m117_3",
            "rhs_mag_bk17_8"
        };
        magazineWell[] = {};
        reloadTime = 12;
        magazineReloadTime = 6.5;
    };
    class rhs_weap_d10tg: rhs_weap_d10t2s_2 {
        scope = 2;
        displayName = "$STR_RHS_WEAP_D10TG";
        magazines[] = {
            "rhs_mag_br412_14",
            "rhs_mag_br412_17",
            "rhs_mag_of412_17",
            "rhs_mag_of412_18",
            "rhs_mag_of412_21"
        };
    };
    class rhs_weap_d10t2s: rhs_weap_d10t2s_2 {
        scope = 2;
        displayName = "$STR_RHS_WEAP_D10T2S";
        magazines[] = {
            "rhs_mag_br412_14",
            "rhs_mag_br412_17",
            "rhs_mag_of412_17",
            "rhs_mag_of412_18",
            "rhs_mag_of412_21",
            "rhs_mag_bk5_8",
            "rhs_mag_bk17_8",
            "rhs_mag_bm25_14",
            "rhs_mag_bm8_14",
            "rhs_mag_9m117_3"
        };
    };
    class rhs_weap_u5ts: rhs_weap_d81 {
        scope = 2;
        displayName = "$STR_RHS_WEAP_2A20";
        sound[] = {
            "\rhsafrf\addons\rhs_c_heavyweapons\sounds\rhs_s_u5ts.ogg",
            2.5118864,
            1,
            1500
        };
        reloadSound[] = {"\rhsafrf\addons\rhs_c_heavyweapons\sounds\rhs_s_u5ts_reload.ogg", 1, 1};
        magazines[] = {
            "rhs_mag_bm4_15",
            "rhs_mag_of11_20",
            "rhs_mag_of28_20",
            "rhs_mag_bk4_5",
            "rhs_mag_bk15_5",
            "rhs_mag_bm23_15",
            "rhs_mag_9m118_3"
        };
        magazineWell[] = {};
        reloadTime = 12;
        magazineReloadTime = 8.5;
        class gunParticles {
            class Effect {
                positionname = "Usti hlavne";
                directionname = "Konec hlavne";
                effectname = "CannonFired";
            };
        };
    };
    class autocannon_30mm_CTWS;
    class rhs_weap_2a42_base: autocannon_30mm_CTWS {
        aiDispersioncoefX = 2;
        aiDispersioncoefY = 3;
        airateoffire = 1;
        airateoffiredistance = 1000;
        scope = 1;
        displayName = "$STR_RHS_WEAP_2A42";
        nameSound = "cannon";
        reloadTime = 0.02;
        magazinereloadtime = 0.2;
        autoFire = 1;
        canLock = 0;
        magazines[] = {};
        magazineWell[] = {"RHS_AutoCannon_30mm_2A42_AP", "RHS_AutoCannon_30mm_2A42_HE"};
        modes[] = {
            "LowROFBMD2",
            "HighROFBMD2",
            "closeBMD2",
            "shortBMD2",
            "mediumBMD2",
            "farBMD2"
        };
        cursor = "EmptyCursor";
        cursorAim = "mg";
        cursorSize = 1;
        ballisticsComputer = 0;
        class gunParticles {
            class Shell {
                positionName = "ejector_30mm";
                directionName = "ejector_30mm_dir";
                effectName = "RHS_30mm_Catridge";
            };
            class Effect {
                positionname = "Usti hlavne";
                directionname = "Konec hlavne";
                effectname = "AutoCannonFired";
            };
            class EffectL {
                positionname = "barrel_smoke_l";
                directionname = "barrel_smoke_l_dir";
                effectname = "RHS_2a42_Fired";
            };
            class EffectR {
                positionname = "barrel_smoke_r";
                directionname = "barrel_smoke_r_dir";
                effectname = "RHS_2a42_Fired";
            };
        };
        class LowROFBMD2: Mode_FullAuto {
            displayName = "$STR_RHS_WEAP_MODE_300";
            displayNameShort = "$STR_RHS_WEAP_MODE_300";
            reloadTime = 0.2;
            soundContinuous = 0;
            flash = "gunfire";
            flashSize = 0.1;
            aiBurstTerminable = 1;
            minRange = 1;
            minRangeProbab = 0.06;
            midRange = 2;
            midRangeProbab = 0.06;
            maxRange = 3;
            maxRangeProbab = 0.004;
            dispersion = 0.0009375;
            textureType = "burst";
        };
        class HighROFBMD2: LowROFBMD2 {
            displayName = "$STR_RHS_WEAP_MODE_600";
            displayNameShort = "$STR_RHS_WEAP_MODE_600";
            reloadTime = 0.1;
            soundContinuous = 0;
            minRange = 1;
            minRangeProbab = 0.08;
            midRange = 2;
            midRangeProbab = 0.058;
            maxRange = 3;
            maxRangeProbab = 0.004;
            dispersion = 0.00325;
            textureType = "fullAuto";
        };
        class closeBMD2: HighROFBMD2 {
            showToPlayer = 0;
            soundBurst = 0;
            burst = 10;
            burstRangeMax = 15;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.58;
            maxRange = 300;
            maxRangeProbab = 0.04;
        };
        class shortBMD2: closeBMD2 {
            burst = 6;
            burstRangeMax = 14;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 300;
            aiRateOfFireDispersion = 2;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.58;
            maxRange = 600;
            maxRangeProbab = 0.04;
        };
        class mediumBMD2: LowROFBMD2 {
            showToPlayer = 0;
            soundBurst = 0;
            burst = 5;
            burstRangeMax = 12;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            aiRateOfFireDispersion = 3;
            minRange = 600;
            minRangeProbab = 0.05;
            midRange = 1500;
            midRangeProbab = 0.58;
            maxRange = 2000;
            maxRangeProbab = 0.04;
        };
        class farBMD2: mediumBMD2 {
            burst = 4;
            burstRangeMax = 9;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 1000;
            aiRateOfFireDispersion = 3;
            minRange = 2000;
            minRangeProbab = 0.05;
            midRange = 2500;
            midRangeProbab = 0.4;
            maxRange = 3000;
            maxRangeProbab = 0.01;
        };
    };
    class rhs_weap_2a42: rhs_weap_2a42_base {
        muzzles[] = {"HE", "AP"};
        class HE: rhs_weap_2a42_base {};
        class AP: rhs_weap_2a42_base {
            magazineWell[] = {"RHS_AutoCannon_30mm_2A42_HE"};
            modes[] = {"closeBMD2", "shortBMD2", "mediumBMD2", "farBMD2"};
        };
    };
    class rhs_weap_2a72_base: rhs_weap_2a42 {
        displayName = "$STR_RHS_WEAP_2A72";
        class gunParticles {
            class Shell {
                positionName = "ejector_30mm";
                directionName = "ejector_30mm_dir";
                effectName = "RHS_30mm_Catridge";
            };
            class Effect {
                positionname = "Usti hlavne3";
                directionname = "Konec hlavne3";
                effectname = "AutoCannonFired";
            };
        };
        cursor = "EmptyCursor";
        cursorAim = "mg";
        cursorSize = 1;
        ballisticsComputer = 0;
        class LowROFBMD2: LowROFBMD2 {
            displayName = "$STR_RHS_WEAP_MODE_SINGLE";
            displayNameShort = "$STR_RHS_WEAP_MODE_SINGLE";
            reloadTime = 0.2;
            autofire = 0;
            soundContinuous = 0;
            flash = "gunfire";
            flashSize = 0.1;
            recoil = "Empty";
            minRange = 1;
            minRangeProbab = 0.06;
            midRange = 2;
            midRangeProbab = 0.06;
            maxRange = 3;
            maxRangeProbab = 0.004;
            dispersion = 0.000714286;
            textureType = "semi";
        };
        class HighROFBMD2: LowROFBMD2 {
            displayName = "$STR_RHS_WEAP_MODE_330";
            displayNameShort = "$STR_RHS_WEAP_MODE_330";
            reloadTime = 0.181818;
            autofire = 1;
            soundContinuous = 0;
            minRange = 1;
            minRangeProbab = 0.08;
            midRange = 2;
            midRangeProbab = 0.058;
            maxRange = 3;
            maxRangeProbab = 0.004;
            textureType = "fullAuto";
        };
        class closeBMD2: HighROFBMD2 {
            showToPlayer = 0;
            soundBurst = 0;
            burst = 10;
            burstRangeMax = 15;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.58;
            maxRange = 300;
            maxRangeProbab = 0.04;
        };
        class shortBMD2: closeBMD2 {
            burst = 6;
            burstRangeMax = 14;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 300;
            aiRateOfFireDispersion = 2;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.58;
            maxRange = 600;
            maxRangeProbab = 0.04;
        };
        class mediumBMD2: LowROFBMD2 {
            showToPlayer = 0;
            soundBurst = 0;
            burst = 5;
            burstRangeMax = 12;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            aiRateOfFireDispersion = 3;
            minRange = 600;
            minRangeProbab = 0.05;
            midRange = 1500;
            midRangeProbab = 0.58;
            maxRange = 2000;
            maxRangeProbab = 0.04;
        };
        class farBMD2: mediumBMD2 {
            burst = 4;
            burstRangeMax = 9;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 1000;
            aiRateOfFireDispersion = 3;
            minRange = 2000;
            minRangeProbab = 0.05;
            midRange = 2500;
            midRangeProbab = 0.4;
            maxRange = 3000;
            maxRangeProbab = 0.01;
        };
    };
    class rhs_weap_2a72: rhs_weap_2a72_base {
        class HE: rhs_weap_2a72_base {};
        class AP: rhs_weap_2a72_base {
            magazineWell[] = {"RHS_AutoCannon_30mm_2A42_HE"};
            modes[] = {"closeBMD2", "shortBMD2", "mediumBMD2", "farBMD2"};
        };
    };
    class rhs_weap_2a72_btr: rhs_weap_2a72_base {
        class HE: rhs_weap_2a72_base {
            class LowROFBMD2: LowROFBMD2 {
                dispersion = 0.00107143;
            };
            class HighROFBMD2: HighROFBMD2 {
                dispersion = 0.005;
            };
        };
        class AP: rhs_weap_2a72_base {
            class LowROFBMD2: LowROFBMD2 {
                dispersion = 0.00107143;
            };
            class HighROFBMD2: HighROFBMD2 {
                dispersion = 0.005;
            };
            magazineWell[] = {"RHS_AutoCannon_30mm_2A42_AP"};
            modes[] = {"closeBMD2", "shortBMD2", "mediumBMD2", "farBMD2"};
        };
    };
    class rhs_weap_2a70: rhs_weap_d81 {
        aiDispersioncoefX = 2;
        aiDispersioncoefY = 4;
        displayName = "$STR_RHS_WEAP_2A70";
        magazineReloadTime = 5.5;
        magazines[] = {
            "rhs_mag_3UOF17_22",
            "rhs_mag_3UOF19_22",
            "rhs_mag_3UOF191_22",
            "rhs_mag_9m117_3",
            "rhs_mag_9m117_8",
            "rhs_mag_9m117m_3",
            "rhs_mag_9m117m_8",
            "rhs_mag_9m117m1_3",
            "rhs_mag_9m117m1_8"
        };
        magazineWell[] = {"RHS_Cannon_100mm_2A70"};
        minRange = 5;
        minRangeProbab = 0.7;
        midRange = 1200;
        midRangeProbab = 0.7;
        maxRange = 2500;
        maxRangeProbab = 0.1;
        reloadSound[] = {
            "\rhsafrf\addons\rhs_c_heavyweapons\sounds\autoloader",
            3.1622777,
            1,
            200
        };
        class gunParticles {
            class Effect {
                positionname = "Usti hlavne";
                directionname = "Konec hlavne";
                effectname = "CannonFired";
            };
        };
        class player: player {
            reloadTime = 5.5;
            dispersion = 0.00275;
        };
        class close: close {
            reloadTime = 5.5;
            dispersion = 0.00275;
        };
        class short: short {
            reloadTime = 5.5;
            dispersion = 0.00275;
        };
        class medium: medium {
            reloadTime = 5.5;
            dispersion = 0.00275;
        };
        class far: far {
            reloadTime = 5.5;
            dispersion = 0.00275;
        };
    };
    class rhs_weap_2a75: rhs_weap_d81 {
        aiDispersioncoefX = 3;
        aiDispersioncoefY = 4;
        scope = 2;
        displayName = "$STR_RHS_WEAP_2A75";
        magazineReloadTime = 7.5;
        class player: player {
            reloadTime = 7.5;
            dispersion = "0.00025*2.6";
        };
        class close: close {
            reloadTime = 7.5;
            dispersion = "0.00025*2.6";
        };
        class short: short {
            reloadTime = 7.5;
            dispersion = "0.00025*2.6";
        };
        class medium: medium {
            reloadTime = 7.5;
            dispersion = "0.00025*2.6";
        };
        class far: far {
            reloadTime = 7.5;
            dispersion = "0.00025*2.6";
        };
    };
    class rhs_weap_2a28_base: cannon_120mm {
        aiDispersioncoefX = 3;
        aiDispersioncoefY = 8;
        canLock = 0;
        ballisticsComputer = 0;
        scope = 1;
        cursor = "EmptyCursor";
        displayName = "$STR_RHS_WEAP_2A28";
        reloadSound[] = {
            "A3\sounds_f\vehicles\armor\noises\reload_tank_cannon_3",
            3.1622777,
            1,
            10
        };
        magazines[] = {
            "rhs_mag_pg15v_24",
            "rhs_mag_pg15v_20",
            "rhs_mag_pg15v_12",
            "rhs_mag_og15v_16",
            "rhs_mag_og15v_20",
            "rhs_mag_og15v_8"
        };
        minRange = 1;
        minRangeProbab = 0.1;
        midRange = 765;
        midRangeProbab = 1;
        maxRange = 1300;
        maxRangeProbab = 0.1;
        reloadTime = 7;
        magazineReloadTime = 5.5;
        aiRateOfFire = 12;
        aiRateOfFireDistance = 1000;
        maxLeadSpeed = 100;
        class gunParticles {
            class Effect {
                positionname = "Usti hlavne";
                directionname = "Konec hlavne";
                effectname = "RHS_2A28_Fired";
            };
        };
        class player: player {
            dispersion = "0.00025*15";
        };
        class close: close {
            dispersion = "0.00025*15";
        };
        class short: short {
            dispersion = "0.00025*15";
        };
        class medium: medium {
            dispersion = "0.00025*15";
        };
        class far: far {
            dispersion = "0.00025*15";
        };
    };
    class rhs_weap_2a28: rhs_weap_2a28_base {
        muzzles[] = {"HE", "AP"};
        class AP: rhs_weap_2a28_base {};
        class HE: rhs_weap_2a28_base {
            modes[] = {"close", "short", "medium", "far"};
            magazines[] = {"rhs_mag_og15v_16", "rhs_mag_og15v_20", "rhs_mag_og15v_8"};
        };
    };
    class rhs_weap_2a41_base: rhs_weap_2a28_base {
        displayName = "$STR_RHS_WEAP_2A41";
        class player: player {
            dispersion = "0.00025*10";
        };
        class close: close {
            dispersion = "0.00025*10";
        };
        class short: short {
            dispersion = "0.00025*10";
        };
        class medium: medium {
            dispersion = "0.00025*10";
        };
        class far: far {
            dispersion = "0.00025*10";
        };
    };
    class rhs_weap_2a41: rhs_weap_2a41_base {
        muzzles[] = {"AP", "HE"};
        class AP: rhs_weap_2a41_base {};
        class HE: rhs_weap_2a41_base {
            modes[] = {"close", "short", "medium", "far"};
            magazines[] = {"rhs_mag_og15v_16", "rhs_mag_og15v_20", "rhs_mag_og15v_8"};
        };
    };
    class mortar_155mm_AMOS;
    class rhs_weap_2a33: mortar_155mm_AMOS {
        displayname = "2A33";
        magazinereloadtime = 6;
        magazines[] = {
            "rhs_mag_HE_2a33",
            "rhs_mag_WP_2a33",
            "rhs_mag_Atomic_2a33",
            "rhs_mag_LASER_2a33",
            "rhs_mag_SMOKE_2a33",
            "rhs_mag_ILLUM_2a33",
            "rhs_mag_53vof546v",
            "rhs_mag_53vof546v_26",
            "rhs_mag_53vof546v_32",
            "rhs_mag_53vof546v_46",
            "rhs_mag_53vof546v_direct",
            "rhs_mag_53vof546v_direct_32",
            "rhs_mag_br540_10",
            "rhs_mag_br540",
            "rhs_mag_bp540_4",
            "rhs_mag_bp540",
            "rhs_mag_HE_2a33_46",
            "rhs_mag_WP_2a33_46",
            "rhs_mag_Atomic_2a_2633_46",
            "rhs_mag_LASER_2a33_46",
            "rhs_mag_SMOKE_2a33_46",
            "rhs_mag_ILLUM_2a33_46",
            "rhs_mag_HE_2a33_32",
            "rhs_mag_HE_2a33_26",
            "rhs_mag_WP_2a33_26",
            "rhs_mag_Atomic_2a_2633_26",
            "rhs_mag_LASER_2a33_26",
            "rhs_mag_SMOKE_2a33_26",
            "rhs_mag_ILLUM_2a33_26"
        };
        class GunParticles {
            class Effect1 {
                directionname = "Konec hlavne";
                effectname = "ArtilleryFired1";
                positionname = "Usti hlavne";
            };
            class Effect2 {
                directionname = "Usti hlavne b";
                effectname = "ArtilleryFiredL";
                positionname = "Usti hlavne";
            };
            class Effect3 {
                directionname = "Usti hlavne b";
                effectname = "ArtilleryFiredR";
                positionname = "Usti hlavne";
            };
        };
        modes[] = {
            "Single1",
            "Single2",
            "Single3",
            "Single4",
            "Single5",
            "Single6",
            "Single7"
        };
        class Single1: Mode_SemiAuto {
            displayName = "Charge 6";
            reloadTime = 8;
            artilleryDispersion = 7.2;
            artilleryCharge = 0.256;
            minRange = 2050;
            minRangeProbab = 0.6;
            midRange = 2458.5;
            midRangeProbab = 0.65;
            maxRange = 2867;
            maxRangeProbab = 0.6;
        };
        class Single2: Single1 {
            displayName = "Charge 5";
            artilleryCharge = 0.298;
            minRange = 2807;
            minRangeProbab = 0.6;
            midRange = 3346;
            midRangeProbab = 0.65;
            maxRange = 3885;
            maxRangeProbab = 0.6;
        };
        class Single3: Single1 {
            displayName = "Charge 4";
            artilleryCharge = 0.346;
            minRange = 3784;
            minRangeProbab = 0.6;
            midRange = 4510.5;
            midRangeProbab = 0.65;
            maxRange = 5237;
            maxRangeProbab = 0.6;
        };
        class Single4: Single1 {
            displayName = "Charge 3";
            artilleryCharge = 0.4;
            minRange = 5058;
            minRangeProbab = 0.6;
            midRange = 6028.5;
            midRangeProbab = 0.65;
            maxRange = 6999;
            maxRangeProbab = 0.6;
        };
        class Single5: Single1 {
            displayName = "Charge 2";
            artilleryCharge = 0.47;
            minRange = 6983;
            minRangeProbab = 0.6;
            midRange = 8323.5;
            midRangeProbab = 0.65;
            maxRange = 9664;
            maxRangeProbab = 0.6;
        };
        class Single6: Single1 {
            displayName = "Charge 1";
            artilleryCharge = 0.54;
            minRange = 9218;
            minRangeProbab = 0.6;
            midRange = 10987.5;
            midRangeProbab = 0.65;
            maxRange = 12757;
            maxRangeProbab = 0.6;
        };
        class Single7: Single1 {
            displayName = "Full charge";
            artilleryCharge = 0.634;
            minRange = 12707;
            minRangeProbab = 0.6;
            midRange = 15103.5;
            midRangeProbab = 0.65;
            maxRange = 17500;
            maxRangeProbab = 0.6;
        };
        class close: Single1 {
            artilleryCharge = 1;
            artilleryDispersion = 1;
            showToPlayer = 0;
            burst = 1;
            burstRangeMax = 1;
            aiRateOfFire = 6;
            aiRateOfFireDispersion = 0.5;
            aiRateOfFireDistance = 500;
            minRange = 5;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.8;
            maxRange = 1000;
            maxRangeProbab = 0.85;
        };
        class short: close {
            aiRateOfFire = 6;
            aiRateOfFireDispersion = 1;
            aiRateOfFireDistance = 2000;
            minRange = 500;
            minRangeProbab = 0.3;
            midRange = 1500;
            midRangeProbab = 0.85;
            maxRange = 2000;
            maxRangeProbab = 0.85;
        };
        class medium: close {
            aiRateOfFire = 8;
            aiRateOfFireDispersion = 4;
            aiRateOfFireDistance = 2250;
            minRange = 1500;
            minRangeProbab = 0.6;
            midRange = 2500;
            midRangeProbab = 0.85;
            maxRange = 3000;
            maxRangeProbab = 0.8;
        };
        class far: close {
            aiRateOfFire = 10;
            aiRateOfFireDispersion = 8;
            aiRateOfFireDistance = 3500;
            minRange = 2500;
            minRangeProbab = 0.75;
            midRange = 5000;
            midRangeProbab = 0.8;
            maxRange = 6500;
            maxRangeProbab = 0.05;
        };
    };
    class rhs_weap_2a33_at: rhs_weap_2a33 {
        modes[] = {
            "Single7",
            "Single6",
            "Single5",
            "Single4",
            "Single3",
            "Single2",
            "Single1",
            "close",
            "short",
            "medium",
            "far"
        };
        aiDispersioncoefX = 3.5;
        aiDispersioncoefY = 5;
        class Single1: Single1 {
            artilleryCharge = 0.43;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
        class Single2: Single2 {
            artilleryCharge = 0.51;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
        class Single3: Single3 {
            artilleryCharge = 0.58;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
        class Single4: Single4 {
            artilleryCharge = 0.64;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
        class Single5: Single5 {
            artilleryCharge = 0.78;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
        class Single6: Single6 {
            artilleryCharge = 0.92;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
        class Single7: Single7 {
            artilleryCharge = 1;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
    };
    class rhs_weap_2a31: rhs_weap_2a33 {
        displayname = "2A31";
        magazinereloadtime = 6;
        modes[] = {
            "Single1",
            "Single2",
            "Single3",
            "Single4",
            "Single5",
            "Single6"
        };
        class Single1: Single1 {
            displayName = "Charge 4";
            artilleryCharge = 0.26;
            minRange = 1900;
            minRangeProbab = 0.6;
            midRange = 2550;
            midRangeProbab = 0.65;
            maxRange = 3200;
            maxRangeProbab = 0.6;
        };
        class Single2: Single2 {
            displayName = "Charge 3";
            artilleryCharge = 0.32;
            minRange = 3000;
            minRangeProbab = 0.6;
            midRange = 3950;
            midRangeProbab = 0.65;
            maxRange = 4900;
            maxRangeProbab = 0.6;
        };
        class Single3: Single3 {
            displayName = "Charge 2";
            artilleryCharge = 0.39;
            minRange = 4300;
            minRangeProbab = 0.6;
            midRange = 5800;
            midRangeProbab = 0.65;
            maxRange = 7300;
            maxRangeProbab = 0.6;
        };
        class Single4: Single4 {
            displayName = "Charge 1";
            artilleryCharge = 0.44;
            minRange = 5500;
            minRangeProbab = 0.6;
            midRange = 7400;
            midRangeProbab = 0.65;
            maxRange = 9300;
            maxRangeProbab = 0.6;
        };
        class Single5: Single5 {
            displayName = "Reduced charge";
            artilleryCharge = 0.5;
            minRange = 7000;
            minRangeProbab = 0.6;
            midRange = 9500;
            midRangeProbab = 0.65;
            maxRange = 12000;
            maxRangeProbab = 0.6;
        };
        class Single6: Single6 {
            displayName = "Full charge";
            artilleryCharge = 0.564;
            minRange = 9000;
            minRangeProbab = 0.6;
            midRange = 12200;
            midRangeProbab = 0.65;
            maxRange = 15400;
            maxRangeProbab = 0.6;
        };
        magazines[] = {
            "rhs_mag_of462",
            "rhs_mag_of462_10",
            "rhs_mag_3of56",
            "rhs_mag_3of56_10",
            "rhs_mag_3of56_30",
            "rhs_mag_3of56_35",
            "rhs_mag_3of56_5",
            "rhs_mag_of462_direct",
            "rhs_mag_of462_direct_10",
            "rhs_mag_3of56_direct",
            "rhs_mag_3of56_direct_10",
            "rhs_mag_3of56_direct_30",
            "rhs_mag_3of56_direct_5",
            "rhs_mag_bk6m",
            "rhs_mag_bk6m_26",
            "rhs_mag_bk6m_5",
            "rhs_mag_bk13",
            "rhs_mag_bk13_26",
            "rhs_mag_bk13_5",
            "rhs_mag_bk13_10",
            "rhs_mag_d462",
            "rhs_mag_d462_2",
            "rhs_mag_s463",
            "rhs_mag_s463_2",
            "rhs_mag_3of69m",
            "rhs_mag_3of69m_2"
        };
        class EventHandlers {
            class RHS_EventHandlers {
                fired = "(_this + [35000,'konec hlavne']) call rhs_fnc_scriptedRecoil";
            };
        };
    };
    class rhs_weap_2a31_at: rhs_weap_2a31 {
        modes[] = {
            "Single6",
            "Single5",
            "Single4",
            "Single3",
            "Single2",
            "Single1",
            "close",
            "short",
            "medium",
            "far"
        };
        aiDispersioncoefX = 3.5;
        aiDispersioncoefY = 5;
        class Single1: Single1 {
            artilleryCharge = 0.4;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
        class Single2: Single2 {
            artilleryCharge = 0.48;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
        class Single3: Single3 {
            artilleryCharge = 0.6;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
        class Single4: Single4 {
            artilleryCharge = 0.71;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
        class Single5: Single5 {
            artilleryCharge = 0.81;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
        class Single6: Single6 {
            artilleryCharge = 1;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
        class EventHandlers: EventHandlers {
            class RHS_Artillery_EventHandlers {
                fired = "_this call rhs_fnc_scriptedArtilleryCharge";
            };
        };
    };
    class rhs_weap_d30: mortar_155mm_AMOS {
        displayName = "$STR_RHS_DN_D30";
        ballisticscomputer = 2;
        reloadTime = 6;
        magazineReloadTime = 6;
        class GunParticles {
            class Effect1 {
                directionname = "Konec hlavne";
                positionname = "Usti hlavne";
                effectname = "ArtilleryFired1";
            };
            class Effec2 {
                directionname = "ejector_pos";
                positionname = "ejector_dir";
                effectname = "RHS_D30_Fired";
            };
        };
        modes[] = {
            "Single1",
            "Single2",
            "Single3",
            "Single4",
            "Single5",
            "Single6"
        };
        class Single1: Mode_SemiAuto {
            displayName = "Charge 4";
            reloadTime = 8;
            artilleryDispersion = 7.2;
            artilleryCharge = 0.26;
            minRange = 1900;
            minRangeProbab = 0.6;
            midRange = 2550;
            midRangeProbab = 0.65;
            maxRange = 3200;
            maxRangeProbab = 0.6;
        };
        class Single2: Single1 {
            displayName = "Charge 3";
            artilleryCharge = 0.32;
            minRange = 3000;
            minRangeProbab = 0.6;
            midRange = 3950;
            midRangeProbab = 0.65;
            maxRange = 4900;
            maxRangeProbab = 0.6;
        };
        class Single3: Single1 {
            displayName = "Charge 2";
            artilleryCharge = 0.39;
            minRange = 4300;
            minRangeProbab = 0.6;
            midRange = 5800;
            midRangeProbab = 0.65;
            maxRange = 7300;
            maxRangeProbab = 0.6;
        };
        class Single4: Single1 {
            displayName = "Charge 1";
            artilleryCharge = 0.44;
            minRange = 5500;
            minRangeProbab = 0.6;
            midRange = 7400;
            midRangeProbab = 0.65;
            maxRange = 9300;
            maxRangeProbab = 0.6;
        };
        class Single5: Single1 {
            displayName = "Reduced charge";
            artilleryCharge = 0.5;
            minRange = 7000;
            minRangeProbab = 0.6;
            midRange = 9500;
            midRangeProbab = 0.65;
            maxRange = 12000;
            maxRangeProbab = 0.6;
        };
        class Single6: Single1 {
            displayName = "Full charge";
            artilleryCharge = 0.564;
            minRange = 9000;
            minRangeProbab = 0.6;
            midRange = 12200;
            midRangeProbab = 0.65;
            maxRange = 15400;
            maxRangeProbab = 0.6;
        };
        class close: Single1 {
            artilleryCharge = 1;
            artilleryDispersion = 1;
            showToPlayer = 0;
            burst = 1;
            burstRangeMax = 1;
            aiRateOfFire = 6;
            aiRateOfFireDispersion = 0.5;
            aiRateOfFireDistance = 500;
            minRange = 5;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.8;
            maxRange = 1000;
            maxRangeProbab = 0.85;
        };
        class short: close {
            aiRateOfFire = 6;
            aiRateOfFireDispersion = 1;
            aiRateOfFireDistance = 2000;
            minRange = 500;
            minRangeProbab = 0.3;
            midRange = 1500;
            midRangeProbab = 0.85;
            maxRange = 2000;
            maxRangeProbab = 0.85;
        };
        class medium: close {
            aiRateOfFire = 8;
            aiRateOfFireDispersion = 4;
            aiRateOfFireDistance = 2250;
            minRange = 1500;
            minRangeProbab = 0.6;
            midRange = 2500;
            midRangeProbab = 0.85;
            maxRange = 3000;
            maxRangeProbab = 0.8;
        };
        class far: close {
            aiRateOfFire = 10;
            aiRateOfFireDispersion = 8;
            aiRateOfFireDistance = 3500;
            minRange = 2500;
            minRangeProbab = 0.75;
            midRange = 5000;
            midRangeProbab = 0.8;
            maxRange = 6500;
            maxRangeProbab = 0.05;
        };
        magazines[] = {
            "rhs_mag_of462",
            "rhs_mag_of462_10",
            "rhs_mag_3of56",
            "rhs_mag_3of56_10",
            "rhs_mag_3of56_5",
            "rhs_mag_of462_direct",
            "rhs_mag_of462_direct_10",
            "rhs_mag_3of56_direct",
            "rhs_mag_3of56_direct_10",
            "rhs_mag_3of56_direct_5",
            "rhs_mag_bk6m",
            "rhs_mag_bk6m_26",
            "rhs_mag_bk6m_5",
            "rhs_mag_bk13",
            "rhs_mag_bk13_26",
            "rhs_mag_bk13_5",
            "rhs_mag_d462",
            "rhs_mag_d462_2",
            "rhs_mag_s463",
            "rhs_mag_s463_2",
            "rhs_mag_3of69m",
            "rhs_mag_3of69m_2"
        };
    };
    class rhs_weap_d30_at: rhs_weap_d30 {
        modes[] = {
            "Single6",
            "Single5",
            "Single4",
            "Single3",
            "Single2",
            "Single1",
            "close",
            "short",
            "medium",
            "far"
        };
        class Single1: Single1 {
            artilleryCharge = 0.4;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
        class Single2: Single2 {
            artilleryCharge = 0.48;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
        class Single3: Single3 {
            artilleryCharge = 0.6;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
        class Single4: Single4 {
            artilleryCharge = 0.71;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
        class Single5: Single5 {
            artilleryCharge = 0.81;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
        class Single6: Single6 {
            artilleryCharge = 1;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
        class EventHandlers {
            class RHS_Artillery_EventHandlers {
                fired = "_this call rhs_fnc_scriptedArtilleryCharge";
            };
        };
    };
    class rhs_weap_gsh30: gatling_30mm {
        scope = 2;
        canlock = 2;
        cursor = "mg";
        cursoraim = "EmptyCursor";
        cursorsize = 0;
        muzzles[] = {"this"};
        displayname = "$STR_RHS_GSH302K_NAME";
        initspeed = 940;
        shotFromTurret = 0;
        ballisticsComputer = 8;
        class gunParticles {
            class effect2 {
                directionname = "chamber_1_dir";
                positionname = "chamber_1";
                effectname = "RHS_AutoCannonFired";
            };
            class effect1 {
                effectname = "RHS_30mm_Catridge";
                directionname = "mgun_eject_dir";
                positionname = "mgun_eject_pos";
            };
        };
        magazines[] = {
            "rhs_mag_gsh30_ofzt_750",
            "rhs_mag_gsh30_ofzt_250",
            "rhs_mag_gsh30_bt_750",
            "rhs_mag_gsh30_bt_250",
            "rhs_mag_gsh30_bt_150",
            "rhs_mag_gsh30_mixed_150"
        };
        namesound = "cannon";
        soundcontinuous = 1;
        flash = "gunfire";
        flashSize = 0.5;
        modes[] = {
            "manual",
            "manual_low",
            "close",
            "short",
            "medium",
            "far"
        };
        class manual: Mode_FullAuto {
            airateoffire = 0.5;
            airateoffiredistance = 50;
            autofire = 1;
            burst = 2;
            dispersion = 0.006;
            displayname = "$STR_RHS_GSH302K_NAME";
            maxrange = 3;
            maxrangeprobab = 0.01;
            midrange = 2;
            midrangeprobab = 0.01;
            minrange = 1;
            minrangeprobab = 0.01;
            multiplier = 1;
            reloadtime = 0.025;
            flash = "gunfire";
            flashSize = 0.5;
            showtoplayer = 1;
            sound[] = {"", 10, 1};
            soundburst = 0;
            soundcontinuous = 0;
        };
        class manual_low: manual {
            reloadtime = 0.2;
            textureType = "semi";
            burst = 0;
        };
        class close: manual {
            airateoffire = 0.001;
            airateoffiredistance = 50;
            aiRateOfFireDispersion = 3;
            burst = 1;
            maxrange = 300;
            maxrangeprobab = 0.04;
            midrange = 100;
            midrangeprobab = 0.88;
            minrange = 0;
            minrangeprobab = 0.5;
            showtoplayer = 0;
            soundburst = 0;
        };
        class short: close {
            aiRateOfFire = 0.25;
            airateoffiredistance = 300;
            aiRateOfFireDispersion = 3;
            burst = 10;
            burstRangeMax = 15;
            maxrange = 800;
            midrange = 500;
            minrange = 200;
        };
        class medium: manual_low {
            airateoffire = 3;
            airateoffiredistance = 600;
            burst = 7;
            burstRangeMax = 12;
            maxrangeprobab = 0.04;
            midrangeprobab = 0.88;
            minrangeprobab = 0.5;
            maxrange = 1000;
            midrange = 800;
            minrange = 600;
            showtoplayer = 0;
        };
        class far: medium {
            airateoffire = 4;
            airateoffiredistance = 1000;
            aiRateOfFireDispersion = 3;
            burst = 4;
            burstRangeMax = 9;
            maxrange = 1250;
            maxrangeprobab = 0.11;
            midrange = 1050;
            midrangeprobab = 0.4;
            minrange = 850;
            minrangeprobab = 0.15;
        };
    };
    class rhs_weap_gsh302: rhs_weap_gsh30 {
        initspeed = 870;
        displayname = "$STR_RHS_GSH302_NAME";
        modes[] = {"manual", "close", "short", "medium", "far"};
        class manual: manual {
            displayname = "$STR_RHS_GSH302_NAME";
            reloadtime = 0.02;
            dispersion = 0.003;
        };
        class close: close {
            reloadtime = 0.02;
        };
        class short: short {
            reloadtime = 0.02;
        };
        class medium: close {
            airateoffire = 3;
            airateoffiredistance = 600;
            burst = 7;
            burstRangeMax = 12;
            maxrange = 1000;
            midrange = 800;
            minrange = 600;
        };
        class far: close {
            airateoffire = 4;
            airateoffiredistance = 1000;
            aiRateOfFireDispersion = 3;
            burst = 4;
            burstRangeMax = 9;
            maxrange = 1250;
            maxrangeprobab = 0.11;
            midrange = 1050;
            midrangeprobab = 0.4;
            minrange = 850;
            minrangeprobab = 0.15;
        };
    };
    class rhs_weap_gsh301: rhs_weap_gsh30 {
        initspeed = 900;
        holdsterAnimValue = 1.5;
        displayname = "$STR_RHS_GSH301_NAME";
        ballisticscomputer = "4 + 8";
        class gunParticles {
            class effect2 {
                directionname = "chamber_1_dir";
                positionname = "chamber_1";
                effectname = "AutoCannonFired";
            };
        };
        modes[] = {"manual", "close", "short", "medium", "far"};
        muzzles[] = {"this", "rhs_burst_safe"};
        class rhs_burst_safe: rhs_weap_gsh30 {
            displayName = "Burst Lock - GSh-30-1";
            modes[] = {"manual"};
            class manual: manual {
                showtoplayer = 0;
                autofire = 0;
                maxrangeprobab = 0;
                midrangeprobab = 0;
                minrangeprobab = 0;
                maxrange = 0;
                midrange = 0;
                minrange = 0;
                textureType = "default";
            };
        };
        class manual: manual {
            autofire = 1;
            textureType = "burst";
            displayname = "$STR_RHS_GSH301_NAME";
            reloadtime = 0.04;
            dispersion = 0.003;
            burst = 1;
        };
        class close: close {
            reloadtime = 0.04;
        };
        class short: short {
            reloadtime = 0.04;
        };
        class medium: close {
            airateoffire = 3;
            airateoffiredistance = 600;
            burst = 7;
            burstRangeMax = 12;
            maxrange = 1000;
            midrange = 800;
            minrange = 600;
        };
        class far: close {
            airateoffire = 4;
            airateoffiredistance = 1000;
            aiRateOfFireDispersion = 3;
            burst = 4;
            burstRangeMax = 9;
            maxrange = 1250;
            maxrangeprobab = 0.11;
            midrange = 1050;
            midrangeprobab = 0.4;
            minrange = 850;
            minrangeprobab = 0.15;
        };
    };
    class rhs_weap_gsh23l: rhs_weap_gsh30 {
        initspeed = 715;
        displayname = "$STR_RHS_GSH23L_NAME";
        magazines[] = {
            "rhs_mag_AM23_500",
            "rhs_mag_upk23_ofz",
            "rhs_mag_upk23_ofzt",
            "rhs_mag_upk23_btz",
            "rhs_mag_upk23_mixed",
            "rhs_mag_upk23_ka52_ofz",
            "rhs_mag_upk23_ka52_ofzt",
            "rhs_mag_upk23_ka52_btz",
            "rhs_mag_upk23_ka52_mixed"
        };
        namesound = "cannon";
        shotFromTurret = 0;
        soundcontinuous = 1;
        modes[] = {"manual", "close", "short", "medium", "far"};
        class manual: manual {
            airateoffire = 0.5;
            airateoffiredistance = 50;
            burst = 4;
            dispersion = 0.0035;
            displayname = "$STR_RHS_GSH23L_NAME";
            maxrange = 3;
            maxrangeprobab = 0.01;
            midrange = 2;
            midrangeprobab = 0.01;
            minrange = 1;
            minrangeprobab = 0.01;
            multiplier = 1;
            reloadtime = 0.01875;
        };
        class close: manual {
            airateoffire = 0.001;
            airateoffiredistance = 50;
            burst = 1;
            maxrange = 300;
            maxrangeprobab = 0.04;
            midrange = 100;
            midrangeprobab = 0.58;
            minrange = 0;
            minrangeprobab = 0.5;
            showtoplayer = 0;
        };
        class short: close {
            airateoffire = "2 + random 2";
            airateoffiredistance = 300;
            aiRateOfFireDispersion = 3;
            burst = 10;
            burstRangeMax = 15;
            maxrange = 800;
            midrange = 500;
            minrange = 200;
        };
        class medium: close {
            airateoffire = 3;
            airateoffiredistance = 600;
            aiRateOfFireDispersion = 3;
            burst = 7;
            burstRangeMax = 11;
            maxrange = 1000;
            midrange = 800;
            minrange = 600;
        };
        class far: close {
            airateoffire = 4;
            airateoffiredistance = 1000;
            aiRateOfFireDispersion = 3;
            burst = 4;
            burstRangeMax = 9;
            maxrange = 1250;
            maxrangeprobab = 0.01;
            midrange = 1050;
            midrangeprobab = 0.4;
            minrange = 850;
            minrangeprobab = 0.05;
        };
        class gunParticles {
            class mg1 {
                positionName = "chase01";
                directionName = "chase01dir";
                effectName = "MachineGun1";
            };
            class mg2 {
                positionName = "chase03";
                directionName = "chase03dir";
                effectName = "MachineGun1";
            };
            class mg3 {
                positionName = "chase03";
                directionName = "chase03dir";
                effectName = "MachineGun1";
            };
            class mg4 {
                positionName = "chase04";
                directionName = "chase04dir";
                effectName = "MachineGun1";
            };
        };
    };
    class rhs_weap_gsh23lx2: rhs_weap_gsh23l {
        class manual: manual {
            reloadtime = 0.009375;
        };
        class close: close {
            reloadtime = 0.009375;
        };
        class short: short {
            reloadtime = 0.009375;
        };
        class medium: medium {
            reloadtime = 0.009375;
        };
        class far: far {
            reloadtime = 0.009375;
        };
    };
    class rhs_weap_azp23: CannonCore {
        scope = 1;
        ballisticsComputer = 4;
        displayName = "$STR_RHS_AZP23_NAME";
        nameSound = "cannon";
        cartridgePos = "eject1";
        cartridgeVel = "eject1dir";
        cursor = "emptyCursor";
        cursorAim = "mg";
        cursorAimOn = "";
        cursorSize = 1;
        canLock = 2;
        weaponLockSystem = 8;
        flash = "gunfire";
        flashSize = 0.1;
        class gunParticles {
            class effect1 {
                positionName = "eject1";
                directionName = "eject1dir";
                effectName = "MachineGunCartridge2";
            };
            class effect2 {
                positionName = "eject2";
                directionName = "eject2dir";
                effectName = "MachineGunCartridge2";
            };
            class effect3 {
                positionName = "eject3";
                directionName = "eject3dir";
                effectName = "MachineGunCartridge2";
            };
            class effect4 {
                positionName = "eject4";
                directionName = "eject4dir";
                effectName = "MachineGunCartridge2";
            };
            class mg1 {
                positionName = "chase01e";
                directionName = "chase01dir";
                effectName = "MachineGun1";
            };
            class mg2 {
                positionName = "chase03e";
                directionName = "chase03dir";
                effectName = "MachineGun1";
            };
            class mg3 {
                positionName = "chase03e";
                directionName = "chase03dir";
                effectName = "MachineGun1";
            };
            class mg4 {
                positionName = "chase04e";
                directionName = "chase04dir";
                effectName = "MachineGun1";
            };
        };
        magazines[] = {
            "rhs_mag_AZP23_2000",
            "rhs_mag_AZP23_2000_mixed",
            "RHS_mag_AZP23_250",
            "RHS_mag_AZP23_250_mixed",
            "rhs_mag_AZP23_250_ap"
        };
        magazineReloadTime = 14;
        modes[] = {"manual", "close", "short", "medium", "far"};
        class manual: CannonCore {
            displayName = "$STR_RHS_AZP23_NAME";
            autoFire = 1;
            reloadTime = 0.024;
            dispersion = 0.005;
            multiplier = 2;
            soundContinuous = 0;
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
            burst = 10;
            burstRangeMax = 15;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 1000;
            aiRateOfFireDispersion = 2;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 1000;
            midRangeProbab = 0.58;
            maxRange = 1600;
            maxRangeProbab = 0.3;
        };
        class short: close {
            burst = 10;
            burstRangeMax = 16;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 1600;
            aiRateOfFireDispersion = 3;
            minRange = 1000;
            minRangeProbab = 0.3;
            midRange = 1600;
            midRangeProbab = 0.58;
            maxRange = 2200;
            maxRangeProbab = 0.3;
        };
        class medium: close {
            burst = 15;
            burstRangeMax = 25;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 2200;
            aiRateOfFireDispersion = 3;
            minRange = 1600;
            minRangeProbab = 0.3;
            midRange = 2000;
            midRangeProbab = 0.58;
            maxRange = 2800;
            maxRangeProbab = 0.3;
        };
        class far: close {
            burst = 9;
            burstRangeMax = 18;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 3000;
            aiRateOfFireDispersion = 4;
            minRange = 1600;
            minRangeProbab = 0.3;
            midRange = 2200;
            midRangeProbab = 0.4;
            maxRange = 8500;
            maxRangeProbab = 0.01;
        };
    };
    class rhs_weap_2a14: rhs_weap_azp23 {
        type = 1;
        ballisticsComputer = 2;
        canLock = 0;
        weaponLockSystem = 1;
        displayName = "2A14";
        reloadMagazineSound[] = {
            "rhsafrf\addons\rhs_c_heavyweapons\sounds\rhs_2a14_reload",
            10,
            1,
            20
        };
        class gunParticles {
            class effect1 {
                positionName = "eject1";
                directionName = "eject1dir";
                effectName = "RHS_23mm_Catridge";
            };
            class effect2 {
                positionName = "eject2";
                directionName = "eject2dir";
                effectName = "RHS_23mm_AmmoBeltLink";
            };
            class effect3 {
                positionName = "eject3";
                directionName = "eject3dir";
                effectName = "RHS_23mm_Catridge";
            };
            class effect4 {
                positionName = "eject4";
                directionName = "eject4dir";
                effectName = "RHS_23mm_AmmoBeltLink";
            };
        };
        magazineReloadTime = 9;
        magazines[] = {
            "RHS_mag_AZP23_100",
            "rhs_mag_AZP23_100_veh",
            "rhs_mag_AZP23_100_ap",
            "rhs_mag_AZP23_100_ap_veh"
        };
        class manual: manual {
            displayName = "2A14";
            reloadTime = 0.03;
        };
    };
    class mortar_82mm: CannonCore {
        class Burst1;
        class Burst2;
        class Burst3;
        class Single1;
        class Single2;
        class Single3;
    };
    class rhs_weap_2p130: mortar_82mm {
        displayName = "$STR_RHS_2P130_NAME";
        magazines[] = {"rhs_mag_9m41_20"};
        class GunParticles {
            class FirstEffect {
                effectName = "MortarFired";
                positionName = "2p130_start";
                directionName = "2p130_end";
            };
        };
        class Burst1: Burst1 {
            reloadTime = 5.8;
        };
        class Burst2: Burst3 {
            reloadTime = 5.8;
        };
        class Burst3: Burst3 {
            reloadTime = 5.8;
        };
        class Single1: Single1 {
            reloadTime = 5.8;
        };
        class Single2: Single2 {
            reloadTime = 5.8;
        };
        class Single3: Single3 {
            reloadTime = 5.8;
        };
    };
    class rhs_weap_2b14: mortar_82mm {
        displayName = "$STR_RHS_2b14_NAME";
        magazines[] = {
            "rhs_mag_3vo18_10",
            "rhs_mag_3vs25m_10",
            "rhs_mag_53_va_832a_10",
            "rhs_mag_d832du_10"
        };
    };
    class MissileLauncher;
    class rhs_weap_9k11: MissileLauncher {
        displayName = "$STR_RHS_WEAP_9K11";
        minRange = 300;
        minRangeProbab = 0.1;
        midRange = 1000;
        midRangeProbab = 0.7;
        maxRange = 2000;
        maxRangeProbab = 0.001;
        sounds[] = {"StandardSound"};
        class StandardSound {
            weaponSoundEffect = "DefaultRifle";
            begin1[] = {"\rhsafrf\addons\rhs_c_heavyweapons\sounds\rhs_s_atgm.ogg", 2.5118864, 1200};
            soundBegin[] = {"begin1", 1};
        };
        reloadTime = 3;
        magazineReloadTime = 14;
        magazines[] = {
            "rhs_mag_9m14",
            "rhs_mag_9m14m",
            "rhs_mag_9m14m_3",
            "rhs_mag_9m14m_4",
            "rhs_mag_mclos_training"
        };
        aiRateOfFire = 5;
        aiRateOfFireDistance = 500;
        autoreload = 0;
        textureType = "semi";
        class EventHandlers {
            class RHS_EventHandlers {
                fired = "_this call rhs_fnc_9m14_fired;";
                reloaded = "_this call rhs_fnc_9m14_reload;";
            };
        };
    };
    class missiles_Zephyr;
    class missiles_titan;
    class rhs_weap_9m111: MissileLauncher {
        canLock = 1;
        minRange = 10;
        minRangeProbab = 0.5;
        midRange = 1450;
        midRangeProbab = 1;
        maxRange = 2550;
        maxRangeProbab = 0.6;
        aiRateOfFireDistance = 500;
        reloadTime = 30;
        magazineReloadTime = 30;
        displayName = "$STR_RHS_WEAP_9M111";
        sounds[] = {"StandardSound"};
        class StandardSound {
            weaponSoundEffect = "DefaultRifle";
            begin1[] = {"\rhsafrf\addons\rhs_c_heavyweapons\sounds\rhs_s_atgm.ogg", 2.5118864, 1200};
            soundBegin[] = {"begin1", 1};
        };
        magazines[] = {
            "rhs_mag_9m111",
            "rhs_mag_9m111_3",
            "rhs_mag_9m111_4",
            "rhs_mag_9m111_5",
            "rhs_mag_9m111m",
            "rhs_mag_9m111m_3",
            "rhs_mag_9m111m_4",
            "rhs_mag_9m111m_5",
            "rhs_mag_9m113",
            "rhs_mag_9m113_3",
            "rhs_mag_9m113_4",
            "rhs_mag_9m113_5"
        };
        aiRateOfFire = 5;
        autoreload = 0;
        holdsterAnimValue = 1;
        textureType = "semi";
        class gunParticles {
            class effect1 {
                effectname = "RHS_ATGM_Cap";
                positionname = "spice rakety";
                directionname = "cap_ejection_dir1";
            };
            class effect2 {
                effectName = "RHS_ATGM_Cap";
                positionname = "konec rakety";
                directionname = "cap_ejection_dir2";
            };
        };
    };
    class rhs_weap_9m113: rhs_weap_9m111 {
        autoreload = 0;
        minRange = 10;
        minRangeProbab = 0.5;
        midRange = 1450;
        midRangeProbab = 1;
        maxRange = 3750;
        maxRangeProbab = 0.6;
        displayName = "$STR_RHS_WEAP_9M113";
        magazines[] = {
            "rhs_mag_9m113m",
            "rhs_mag_9m113M_3",
            "rhs_mag_9m113M_4",
            "rhs_mag_9m113M_5",
            "rhs_mag_9m113",
            "rhs_mag_9m113_3",
            "rhs_mag_9m113_4",
            "rhs_mag_9m113_5"
        };
    };
    class rhs_weap_9P148: rhs_weap_9m111 {
        autoreload = 0;
        reloadTime = 1.5;
        magazines[] = {"rhs_mag_9m113_5_9P148_pylon", "rhs_mag_9m113_5"};
        class EventHandlers {
            class RHS_EventHandlers {
                fired = "_this call rhs_fnc_firedPylon;(_this + [true]) call RHS_fnc_at14_fired ";
            };
        };
        class gunParticles {};
    };
    class rhs_weap_9m119: rhs_weap_9m111 {
        minRange = 10;
        midRange = 2450;
        maxRange = 5000;
        reloadTime = 30;
        magazineReloadTime = 30;
        displayName = "$STR_RHS_WEAP_9M111";
        magazines[] = {"rhs_mag_9m113_3", "rhs_mag_9m113_4"};
        aiRateOfFire = 5;
        class gunParticles {};
    };
    class rhs_weap_2k4: rhs_weap_9m111 {
        reloadTime = 10;
        magazineReloadTime = 8.5;
        displayName = "2K4";
        reloadSound[] = {"\rhsafrf\addons\rhs_c_heavyweapons\sounds\rhs_s_2a37_reload.ogg", 1, 1};
        magazines[] = {"rhs_mag_3m7_12"};
        class gunParticles {};
    };
    class rhs_weap_9k133: rhs_weap_9m111 {
        displayName = "$STR_RHS_WEAP_9K133";
        magazines[] = {"rhs_mag_9m133_2"};
        reloadTime = 0.1;
    };
    class RocketPods;
    class rhs_weap_SPG9: RocketPods {
        scope = 2;
        canlock = 0;
        displayName = "$STR_RHS_DN_SPG9";
        type = 65536;
        reloadTime = 3;
        magazineReloadTime = 10;
        modelOptics = "";
        magazines[] = {
            "rhs_mag_PG9V",
            "rhs_mag_PG9N",
            "rhs_mag_PG9VNT",
            "rhs_mag_OG9VM",
            "rhs_mag_OG9V"
        };
        sounds[] = {"StandardSound"};
        class StandardSound {
            weaponSoundEffect = "DefaultRifle";
            begin1[] = {
                "rhsafrf\addons\rhs_sounds\rpg\rpg_1",
                2.35,
                1,
                1100
            };
            begin2[] = {
                "rhsafrf\addons\rhs_sounds\rpg\rpg_2",
                2.35,
                1,
                1100
            };
            soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
        };
        reloadMagazineSound[] = {
            "\rhsafrf\addons\rhs_c_heavyweapons\sounds\flare_reload",
            0.00031622773,
            1,
            20
        };
        recoil = "launcherBase";
        aiRateOfFire = 10;
        aiRateOfFireDistance = 450;
        minRange = 50;
        midRange = 450;
        maxRange = 800;
        cursor = "Rocket";
        cursorSize = 1;
        textureType = "semi";
    };
    class rhs_weap_9K114_launcher: MissileLauncher {
        canlock = 1;
        cursoraim = "";
        weaponLockSystem = 1;
        displayname = "9K114";
        magazines[] = {
            "rhs_mag_9M114",
            "rhs_mag_9M114_Mi24_2x",
            "rhs_mag_9M114M_Mi24_2x",
            "rhs_mag_9M114M1_Mi24_2x",
            "rhs_mag_9M114M2_Mi24_2x"
        };
        airateoffire = 4;
        airateoffiredistance = 700;
        maxrange = 6000;
        maxrangeprobab = 0.87;
        midrange = 2700;
        midrangeprobab = 0.95;
        minrange = 400;
        minrangeprobab = 0.65;
        reloadtime = 1;
        textureType = "fullAuto";
    };
    class rhs_weap_9K114F_launcher: rhs_weap_9K114_launcher {
        displayname = "9K114F";
        magazines[] = {"rhs_mag_9M114F_Mi24_2x"};
    };
    class rhs_weap_2K8_launcher: rhs_weap_9K114_launcher {
        displayname = "2K8";
        magazines[] = {
            "rhs_mag_9m17",
            "rhs_mag_9m17p",
            "rhs_mag_9M17_Mi24_2x",
            "rhs_mag_9M17p_Mi24_2x"
        };
        maxrange = 4000;
        maxrangeprobab = 0.1;
        midrange = 2000;
        midrangeprobab = 0.7;
        minrange = 400;
        minrangeprobab = 0.35;
    };
    class rhs_weap_9K115_launcher: rhs_weap_9K114_launcher {
        displayname = "9K115 Metis";
        magazines[] = {"rhs_mag_9M115"};
        maxrange = 1000;
        midrange = 500;
        minrange = 80;
        magazineReloadTime = 15;
        autoReload = 0;
        textureType = "semi";
        class gunParticles {
            class effect1 {
                effectname = "RHS_ATGM_Cap_x2";
                positionname = "spice rakety";
                directionname = "cap_ejection_dir1";
            };
            class effect2 {
                effectName = "RHS_ATGM_Cap_x2";
                positionname = "konec rakety";
                directionname = "cap_ejection_dir2";
            };
        };
    };
    class rhs_weap_9K115_1_launcher: rhs_weap_9K115_launcher {
        displayname = "9K115-1 Metis-M";
        magazines[] = {"rhs_mag_9M131"};
        maxrange = 1500;
        midrange = 500;
        minrange = 80;
    };
    class rhs_weap_9K115_2_launcher: rhs_weap_9K115_launcher {
        displayname = "9K115-2 Metis-M1";
        magazines[] = {"rhs_mag_9M131M", "rhs_mag_9M131F"};
        maxrange = 2000;
        midrange = 500;
        minrange = 80;
    };
    class rhs_weap_9K133_launcher: rhs_weap_9K115_launcher {
        displayname = "$STR_rhs_DN_kornet";
        magazines[] = {
            "rhs_mag_9m133",
            "rhs_mag_9m133f",
            "rhs_mag_9m1331",
            "rhs_mag_9m133m2"
        };
        maxrange = 5500;
        midrange = 2500;
        minrange = 80;
    };
    class rhs_weap_9K133M_9M133: rhs_weap_9K133_launcher {
        displayname = "9M133";
        magazines[] = {"rhs_mag_9m133_pylon"};
        class gunParticles {};
        class EventHandlers {
            class RHS_EventHandlers {
                fired = "_this call rhs_fnc_firedPylon;(_this + [true]) call RHS_fnc_at14_fired ";
            };
        };
        reloadTime = 0;
        magazineReloadTime = 0;
        autoReload = 0;
    };
    class rhs_weap_9K133M_9M133f: rhs_weap_9K133M_9M133 {
        displayname = "9M133F";
        magazines[] = {"rhs_mag_9m133f_pylon"};
    };
    class rhs_weap_9K133M_9M1331: rhs_weap_9K133M_9M133 {
        displayname = "9M133-1";
        magazines[] = {"rhs_mag_9m1331_pylon"};
    };
    class rhs_weap_9K133M_9M133M2: rhs_weap_9K133M_9M133 {
        displayname = "9M133M2";
        magazines[] = {"rhs_mag_9m133m2_pylon"};
    };
    class rhs_weap_9K133M_spare: MissileLauncher {
        showToPlayer = 0;
        maxrange = 3;
        midrange = 2;
        minrange = 1;
        magazines[] = {
            "rhs_mag_9m133_spare_pylon",
            "rhs_mag_9m133f_spare_pylon",
            "rhs_mag_9m1331_spare_pylon",
            "rhs_mag_9m133m2_spare_pylon"
        };
    };
    class rhs_weap_9M120_launcher: rhs_weap_9K114_launcher {
        displayname = "9M120";
        magazines[] = {
            "rhs_mag_9M120",
            "rhs_mag_9M120_8",
            "rhs_mag_9M120_16",
            "rhs_mag_9M120M",
            "rhs_mag_9M120M_8",
            "rhs_mag_9M120M_16",
            "rhs_mag_9M120_Mi24_2x",
            "rhs_mag_9M120M_Mi24_2x",
            "rhs_mag_9M120_Mi28_8x",
            "rhs_mag_9M120M_Mi28_8x"
        };
        maxrange = 8000;
        midrange = 3500;
    };
    class rhs_weap_9M120F_launcher: rhs_weap_9M120_launcher {
        displayname = "9M120F";
        magazines[] = {
            "rhs_mag_9M120F",
            "rhs_mag_9M120F_8",
            "rhs_mag_9M120F_16",
            "rhs_mag_9M120F_Mi24_2x",
            "rhs_mag_9M120F_Mi28_8x"
        };
    };
    class rhs_weap_9M120O_launcher: rhs_weap_9M120_launcher {
        displayname = "9M120O";
        magazines[] = {
            "rhs_mag_9M120F",
            "rhs_mag_9M120F_8",
            "rhs_mag_9M120F_16",
            "rhs_mag_9M120O_Mi24_2x",
            "rhs_mag_9M120O_Mi28_8x"
        };
    };
    class missiles_titan_static;
    class rhs_weap_Igla_twice: missiles_titan_static {
        scope = 2;
        displayName = "$STR_RHS_DN_IGLA_TWICE";
        reloadMagazineSound[] = {
            "A3\Sounds_F\weapons\Reloads\reload_magazine_MissileLauncher",
            0.891251,
            1,
            10
        };
        magazineReloadTime = 20;
        magazines[] = {"rhs_mag_2Rnd_Igla"};
        weaponLockSystem = 2;
        modes[] = {"Single", "Burst"};
        class Single: missiles_titan_static {
            aiRateOfFire = 5;
            aiRateOfFireDistance = 2100;
            displayName = "$STR_RHS_DN_IGLA_TWICE";
            minRange = 500;
            minRangeProbab = 0.3;
            midRange = 3100;
            midRangeProbab = 0.8;
            maxRange = 5200;
            maxRangeProbab = 0.1;
            reloadtime = 0.05;
            textureType = "semi";
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundsetshot[] = {"RocketsHeavy_Shot_SoundSet"};
            };
        };
        class Burst: Single {
            reloadtime = 0;
            multiplier = 1;
            burst = 2;
            salvo = 2;
            textureType = "burst";
        };
    };
    class rockets_230mm_GAT;
    class rhs_weap_grad: rockets_230mm_GAT {
        displayname = "$STR_RHS_122MMGRAD_NAME";
        magazines[] = {"rhs_mag_40Rnd_122mm_rockets"};
        modes[] = {
            "Mode_1",
            "Mode_2",
            "Mode_3",
            "Mode_4",
            "Mode_5",
            "Mode_6"
        };
        magazineReloadTime = 0.15;
        class Close: RocketPods {
            artillerycharge = 0.17;
            artillerydispersion = 0.9;
            dispersion = 0.05;
            autofire = 0;
            burst = 1;
            salvo = 1;
            maxrange = 4600;
            maxrangeprobab = 0.05;
            midrange = 2500;
            midrangeprobab = 0.65;
            minrange = 800;
            minrangeprobab = 0.15;
            reloadtime = 0.2;
            soundBurst = 0;
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"Launcher_Titan_Shot_SoundSet", "Launcher_Titan_Tail_SoundSet"};
            };
        };
        class Mode_1: Close {
            displayName = "5000m-6500m";
            artilleryCharge = 0.365;
            minRange = 5000;
            minRangeProbab = 0.15;
            midRange = 5750;
            midRangeProbab = 0.65;
            maxRange = 6500;
            maxRangeProbab = 0.05;
        };
        class Mode_2: Close {
            displayName = "6500m-8300m";
            artilleryCharge = 0.415;
            minRange = 6500;
            minRangeProbab = 0.15;
            midRange = 7400;
            midRangeProbab = 0.65;
            maxRange = 8300;
            maxRangeProbab = 0.05;
        };
        class Mode_3: Close {
            displayName = "8300m-10000m";
            artilleryCharge = 0.47;
            minRange = 8300;
            minRangeProbab = 0.15;
            midRange = 9150;
            midRangeProbab = 0.65;
            maxRange = 10000;
            maxRangeProbab = 0.05;
        };
        class Mode_4: Close {
            displayName = "10000m-13000m";
            artilleryCharge = 0.518;
            minRange = 10000;
            minRangeProbab = 0.15;
            midRange = 11500;
            midRangeProbab = 0.65;
            maxRange = 13000;
            maxRangeProbab = 0.05;
        };
        class Mode_5: Close {
            displayName = "13000m-16000m";
            artilleryCharge = 0.58;
            minRange = 13000;
            minRangeProbab = 0.15;
            midRange = 14500;
            midRangeProbab = 0.65;
            maxRange = 16000;
            maxRangeProbab = 0.05;
        };
        class Mode_6: Close {
            displayName = "16000m-20000m";
            artilleryCharge = 0.65;
            minRange = 16000;
            minRangeProbab = 0.15;
            midRange = 18000;
            midRangeProbab = 0.65;
            maxRange = 20000;
            maxRangeProbab = 0.05;
        };
        class EventHandlers {
            class RHS_EH {
                fired = "_this call rhs_fnc_bm21_fired";
            };
        };
    };
    class rhs_weap_bm21: rhs_weap_grad {
        magazines[] = {"rhs_mag_m21of_1"};
    };
    class rhs_weap_bm21_9m28f: rhs_weap_grad {
        magazines[] = {"rhs_mag_9m28f_1"};
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
            "Mode_10"
        };
        class Mode_1: Close {
            displayName = "1500m-1900m";
            artilleryCharge = 0.2;
            minRange = 1500;
            minRangeProbab = 0.15;
            midRange = 1700;
            midRangeProbab = 0.65;
            maxRange = 1900;
            maxRangeProbab = 0.05;
        };
        class Mode_2: Close {
            displayName = "1900m-2400m";
            artilleryCharge = 0.226;
            minRange = 1900;
            minRangeProbab = 0.15;
            midRange = 2150;
            midRangeProbab = 0.65;
            maxRange = 2400;
            maxRangeProbab = 0.05;
        };
        class Mode_3: Close {
            displayName = "2400m-3100m";
            artilleryCharge = 0.255;
            minRange = 2400;
            minRangeProbab = 0.15;
            midRange = 2750;
            midRangeProbab = 0.65;
            maxRange = 3100;
            maxRangeProbab = 0.05;
        };
        class Mode_4: Close {
            displayName = "3100m-4000m";
            artilleryCharge = 0.288;
            minRange = 3100;
            minRangeProbab = 0.15;
            midRange = 3550;
            midRangeProbab = 0.65;
            maxRange = 4000;
            maxRangeProbab = 0.05;
        };
        class Mode_5: Close {
            displayName = "4000m-3100m";
            artilleryCharge = 0.33;
            minRange = 4000;
            minRangeProbab = 0.15;
            midRange = 3550;
            midRangeProbab = 0.65;
            maxRange = 3100;
            maxRangeProbab = 0.05;
        };
        class Mode_6: Close {
            displayName = "5000m-6500m";
            artilleryCharge = 0.365;
            minRange = 5000;
            minRangeProbab = 0.15;
            midRange = 5750;
            midRangeProbab = 0.65;
            maxRange = 6500;
            maxRangeProbab = 0.05;
        };
        class Mode_7: Close {
            displayName = "6500m-8300m";
            artilleryCharge = 0.415;
            minRange = 6500;
            minRangeProbab = 0.15;
            midRange = 7400;
            midRangeProbab = 0.65;
            maxRange = 8300;
            maxRangeProbab = 0.05;
        };
        class Mode_8: Close {
            displayName = "8300m-10000m";
            artilleryCharge = 0.47;
            minRange = 8300;
            minRangeProbab = 0.15;
            midRange = 9150;
            midRangeProbab = 0.65;
            maxRange = 10000;
            maxRangeProbab = 0.05;
        };
        class Mode_9: Close {
            displayName = "10000m-13000m";
            artilleryCharge = 0.518;
            minRange = 10000;
            minRangeProbab = 0.15;
            midRange = 11500;
            midRangeProbab = 0.65;
            maxRange = 13000;
            maxRangeProbab = 0.05;
        };
        class Mode_10: Close {
            displayName = "13000m-15000m";
            artilleryCharge = 0.56;
            minRange = 13000;
            minRangeProbab = 0.15;
            midRange = 14000;
            midRangeProbab = 0.65;
            maxRange = 15000;
            maxRangeProbab = 0.05;
        };
    };
    class rhs_weap_bm21_9m28k: rhs_weap_grad {
        magazines[] = {"rhs_mag_9m28k_1"};
        modes[] = {
            "Mode_1",
            "Mode_2",
            "Mode_3",
            "Mode_4",
            "Mode_5",
            "Mode_6",
            "Mode_7",
            "Mode_8",
            "Mode_9"
        };
        class Mode_1: Close {
            displayName = "1500m-1900m";
            artilleryCharge = 0.2;
            minRange = 1500;
            minRangeProbab = 0.15;
            midRange = 1700;
            midRangeProbab = 0.65;
            maxRange = 1900;
            maxRangeProbab = 0.05;
        };
        class Mode_2: Close {
            displayName = "1900m-2400m";
            artilleryCharge = 0.226;
            minRange = 1900;
            minRangeProbab = 0.15;
            midRange = 2150;
            midRangeProbab = 0.65;
            maxRange = 2400;
            maxRangeProbab = 0.05;
        };
        class Mode_3: Close {
            displayName = "2400m-3100m";
            artilleryCharge = 0.255;
            minRange = 2400;
            minRangeProbab = 0.15;
            midRange = 2750;
            midRangeProbab = 0.65;
            maxRange = 3100;
            maxRangeProbab = 0.05;
        };
        class Mode_4: Close {
            displayName = "3100m-4000m";
            artilleryCharge = 0.288;
            minRange = 3100;
            minRangeProbab = 0.15;
            midRange = 3550;
            midRangeProbab = 0.65;
            maxRange = 4000;
            maxRangeProbab = 0.05;
        };
        class Mode_5: Close {
            displayName = "4000m-3100m";
            artilleryCharge = 0.33;
            minRange = 4000;
            minRangeProbab = 0.15;
            midRange = 3550;
            midRangeProbab = 0.65;
            maxRange = 3100;
            maxRangeProbab = 0.05;
        };
        class Mode_6: Close {
            displayName = "5000m-6500m";
            artilleryCharge = 0.365;
            minRange = 5000;
            minRangeProbab = 0.15;
            midRange = 5750;
            midRangeProbab = 0.65;
            maxRange = 6500;
            maxRangeProbab = 0.05;
        };
        class Mode_7: Close {
            displayName = "6500m-8300m";
            artilleryCharge = 0.415;
            minRange = 6500;
            minRangeProbab = 0.15;
            midRange = 7400;
            midRangeProbab = 0.65;
            maxRange = 8300;
            maxRangeProbab = 0.05;
        };
        class Mode_8: Close {
            displayName = "8300m-10000m";
            artilleryCharge = 0.47;
            minRange = 8300;
            minRangeProbab = 0.15;
            midRange = 9150;
            midRangeProbab = 0.65;
            maxRange = 10000;
            maxRangeProbab = 0.05;
        };
        class Mode_9: Close {
            displayName = "10000m-13000m";
            artilleryCharge = 0.518;
            minRange = 10000;
            minRangeProbab = 0.15;
            midRange = 11500;
            midRangeProbab = 0.65;
            maxRange = 13000;
            maxRangeProbab = 0.05;
        };
    };
    class rhs_weap_bm21_9m218: rhs_weap_grad {
        magazines[] = {"rhs_mag_9m218_1"};
        modes[] = {
            "Mode_1",
            "Mode_2",
            "Mode_3",
            "Mode_4",
            "Mode_5",
            "Mode_6",
            "Mode_7",
            "Mode_8"
        };
        class Mode_1: Close {
            displayName = "5000m-6500m";
            artilleryCharge = 0.365;
            minRange = 5000;
            minRangeProbab = 0.15;
            midRange = 5750;
            midRangeProbab = 0.65;
            maxRange = 6500;
            maxRangeProbab = 0.05;
        };
        class Mode_2: Close {
            displayName = "6500m-8300m";
            artilleryCharge = 0.415;
            minRange = 6500;
            minRangeProbab = 0.15;
            midRange = 7400;
            midRangeProbab = 0.65;
            maxRange = 8300;
            maxRangeProbab = 0.05;
        };
        class Mode_3: Close {
            displayName = "8300m-10000m";
            artilleryCharge = 0.47;
            minRange = 8300;
            minRangeProbab = 0.15;
            midRange = 9150;
            midRangeProbab = 0.65;
            maxRange = 10000;
            maxRangeProbab = 0.05;
        };
        class Mode_4: Close {
            displayName = "10000m-13000m";
            artilleryCharge = 0.518;
            minRange = 10000;
            minRangeProbab = 0.15;
            midRange = 11500;
            midRangeProbab = 0.65;
            maxRange = 13000;
            maxRangeProbab = 0.05;
        };
        class Mode_5: Close {
            displayName = "13000m-16000m";
            artilleryCharge = 0.58;
            minRange = 13000;
            minRangeProbab = 0.15;
            midRange = 14500;
            midRangeProbab = 0.65;
            maxRange = 16000;
            maxRangeProbab = 0.05;
        };
        class Mode_6: Close {
            displayName = "16000m-20000m";
            artilleryCharge = 0.65;
            minRange = 16000;
            minRangeProbab = 0.15;
            midRange = 18000;
            midRangeProbab = 0.65;
            maxRange = 20000;
            maxRangeProbab = 0.05;
        };
        class Mode_7: Close {
            displayName = "20000m-25000m";
            artilleryCharge = 0.72;
            minRange = 20000;
            minRangeProbab = 0.15;
            midRange = 22500;
            midRangeProbab = 0.65;
            maxRange = 25000;
            maxRangeProbab = 0.05;
        };
        class Mode_8: Close {
            displayName = "25000m-30000m";
            artilleryCharge = 0.79;
            minRange = 25000;
            minRangeProbab = 0.15;
            midRange = 27500;
            midRangeProbab = 0.65;
            maxRange = 30000;
            maxRangeProbab = 0.05;
        };
    };
    class rhs_weap_bm21_9m521: rhs_weap_grad {
        magazines[] = {"rhs_mag_9m521_1"};
        modes[] = {
            "Mode_1",
            "Mode_2",
            "Mode_3",
            "Mode_4",
            "Mode_5",
            "Mode_6",
            "Mode_7",
            "Mode_9",
            "Mode_10"
        };
        class Mode_1: Close {
            displayName = "5000m-6500m";
            artilleryCharge = 0.365;
            minRange = 5000;
            minRangeProbab = 0.15;
            midRange = 5750;
            midRangeProbab = 0.65;
            maxRange = 6500;
            maxRangeProbab = 0.05;
        };
        class Mode_2: Close {
            displayName = "6500m-8300m";
            artilleryCharge = 0.415;
            minRange = 6500;
            minRangeProbab = 0.15;
            midRange = 7400;
            midRangeProbab = 0.65;
            maxRange = 8300;
            maxRangeProbab = 0.05;
        };
        class Mode_3: Close {
            displayName = "8300m-10000m";
            artilleryCharge = 0.47;
            minRange = 8300;
            minRangeProbab = 0.15;
            midRange = 9150;
            midRangeProbab = 0.65;
            maxRange = 10000;
            maxRangeProbab = 0.05;
        };
        class Mode_4: Close {
            displayName = "10000m-13000m";
            artilleryCharge = 0.518;
            minRange = 10000;
            minRangeProbab = 0.15;
            midRange = 11500;
            midRangeProbab = 0.65;
            maxRange = 13000;
            maxRangeProbab = 0.05;
        };
        class Mode_5: Close {
            displayName = "13000m-16000m";
            artilleryCharge = 0.58;
            minRange = 13000;
            minRangeProbab = 0.15;
            midRange = 14500;
            midRangeProbab = 0.65;
            maxRange = 16000;
            maxRangeProbab = 0.05;
        };
        class Mode_6: Close {
            displayName = "16000m-20000m";
            artilleryCharge = 0.65;
            minRange = 16000;
            minRangeProbab = 0.15;
            midRange = 18000;
            midRangeProbab = 0.65;
            maxRange = 20000;
            maxRangeProbab = 0.05;
        };
        class Mode_7: Close {
            displayName = "20000m-25000m";
            artilleryCharge = 0.72;
            minRange = 20000;
            minRangeProbab = 0.15;
            midRange = 22500;
            midRangeProbab = 0.65;
            maxRange = 25000;
            maxRangeProbab = 0.05;
        };
        class Mode_8: Close {
            displayName = "25000m-30000m";
            artilleryCharge = 0.79;
            minRange = 25000;
            minRangeProbab = 0.15;
            midRange = 27500;
            midRangeProbab = 0.65;
            maxRange = 30000;
            maxRangeProbab = 0.05;
        };
        class Mode_9: Close {
            displayName = "30000m-35000m";
            artilleryCharge = 0.85;
            minRange = 30000;
            minRangeProbab = 0.15;
            midRange = 32500;
            midRangeProbab = 0.65;
            maxRange = 35000;
            maxRangeProbab = 0.05;
        };
        class Mode_10: Close {
            displayName = "35000m-40000m";
            artilleryCharge = 0.91;
            minRange = 35000;
            minRangeProbab = 0.15;
            midRange = 37500;
            midRangeProbab = 0.65;
            maxRange = 40000;
            maxRangeProbab = 0.05;
        };
    };
    class rhs_weap_bm21_9m522: rhs_weap_grad {
        magazines[] = {"rhs_mag_9m522_1"};
        modes[] = {
            "Mode_1",
            "Mode_2",
            "Mode_3",
            "Mode_4",
            "Mode_5",
            "Mode_6",
            "Mode_7",
            "Mode_8",
            "Mode_9"
        };
        class Mode_1: Close {
            displayName = "5000m-6500m";
            artilleryCharge = 0.365;
            minRange = 5000;
            minRangeProbab = 0.15;
            midRange = 5750;
            midRangeProbab = 0.65;
            maxRange = 6500;
            maxRangeProbab = 0.05;
        };
        class Mode_2: Close {
            displayName = "6500m-8300m";
            artilleryCharge = 0.415;
            minRange = 6500;
            minRangeProbab = 0.15;
            midRange = 7400;
            midRangeProbab = 0.65;
            maxRange = 8300;
            maxRangeProbab = 0.05;
        };
        class Mode_3: Close {
            displayName = "8300m-10000m";
            artilleryCharge = 0.47;
            minRange = 8300;
            minRangeProbab = 0.15;
            midRange = 9150;
            midRangeProbab = 0.65;
            maxRange = 10000;
            maxRangeProbab = 0.05;
        };
        class Mode_4: Close {
            displayName = "10000m-13000m";
            artilleryCharge = 0.518;
            minRange = 10000;
            minRangeProbab = 0.15;
            midRange = 11500;
            midRangeProbab = 0.65;
            maxRange = 13000;
            maxRangeProbab = 0.05;
        };
        class Mode_5: Close {
            displayName = "13000m-16000m";
            artilleryCharge = 0.58;
            minRange = 13000;
            minRangeProbab = 0.15;
            midRange = 14500;
            midRangeProbab = 0.65;
            maxRange = 16000;
            maxRangeProbab = 0.05;
        };
        class Mode_6: Close {
            displayName = "16000m-20000m";
            artilleryCharge = 0.65;
            minRange = 16000;
            minRangeProbab = 0.15;
            midRange = 18000;
            midRangeProbab = 0.65;
            maxRange = 20000;
            maxRangeProbab = 0.05;
        };
        class Mode_7: Close {
            displayName = "20000m-25000m";
            artilleryCharge = 0.72;
            minRange = 20000;
            minRangeProbab = 0.15;
            midRange = 22500;
            midRangeProbab = 0.65;
            maxRange = 25000;
            maxRangeProbab = 0.05;
        };
        class Mode_8: Close {
            displayName = "25000m-30000m";
            artilleryCharge = 0.79;
            minRange = 25000;
            minRangeProbab = 0.15;
            midRange = 27500;
            midRangeProbab = 0.65;
            maxRange = 30000;
            maxRangeProbab = 0.05;
        };
        class Mode_9: Close {
            displayName = "30000m-37500m";
            artilleryCharge = 0.879;
            minRange = 30000;
            minRangeProbab = 0.15;
            midRange = 33750;
            midRangeProbab = 0.65;
            maxRange = 37500;
            maxRangeProbab = 0.05;
        };
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class Functions {
            class fired_IglaAA {
                file = "\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_igla_aa_fired.sqf";
                description = "AINET smart fuse for HE-FRAG rounds";
            };
            class fired_D30 {
                file = "\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_d30_fired.sqf";
                description = "AINET smart fuse for HE-FRAG rounds";
            };
            class firedFCS {
                file = "\rhsafrf\addons\rhs_c_heavyweapons\functions\rhs_firedFCS.sqf";
                description = "LRF marking & ammo changing";
            };
            class firedFCS_mi24 {
                file = "\rhsafrf\addons\rhs_c_heavyweapons\functions\rhs_firedFCS_mi24.sqf";
            };
            class firedPylon {
                file = "\rhsafrf\addons\rhs_c_heavyweapons\functions\rhs_firedPylon.sqf";
            };
            class d30_pack {
                file = "\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_d30_pack.sqf";
                description = "Prepare D30 for towing or air lifting";
            };
            class zu23_pack {
                file = "\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_zu23_pack.sqf";
            };
            class bm21_fired {
                file = "\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_bm21_fired.sqf";
            };
            class burstLimiter {
                file = "\rhsafrf\addons\rhs_c_heavyweapons\functions\rhs_burstLimiter.sqf";
                description = "Burst limiter for air cannons";
            };
            class eden_defineLoadout {
                file = "\rhsafrf\addons\rhs_c_heavyweapons\functions\rhs_defineLoadout.sqf";
                description = "3den";
            };
        };
        class WeaponsEH {
            class saclosGuide {
                file = "\rhsafrf\addons\rhs_c_heavyweapons\functions\rhs_saclosGuide.sqf";
                description = "SACLOS guidance";
            };
            class mclosGuide {
                file = "\rhsafrf\addons\rhs_c_heavyweapons\functions\rhs_mclosGuide.sqf";
                description = "MCLOS guidance";
            };
            class klenPSGuide {
                file = "\rhsafrf\addons\rhs_c_heavyweapons\functions\rhs_klenPSGuide.sqf";
                description = "Klen-PS laser guidance";
            };
            class 9m14_fired {
                file = "\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_9m14_fired.sqf";
                description = "Maljutka Hide";
            };
            class 9m14_reload {
                file = "\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_9m14_reload.sqf";
                description = "Maljutka Reload";
            };
            class at14_fired {
                file = "\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_at14coverejection.sqf";
                description = "Cover Ejection for At14";
            };
            class atgm_spentTube {
                file = "\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_atgm_spentTube.sqf";
                description = "Spent tubes for atgm";
            };
            class effectFiredSmokeLauncher {
                file = "\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_effectFiredSmokeLauncher.sqf";
                description = "Effects for smoke launcher";
            };
            class effectFiredSmokeGenerator {
                file = "\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_effectFiredSmokeGenerator.sqf";
                description = "Effects for smoke generator";
            };
            class scriptedRecoil {
                file = "\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_scriptedRecoil.sqf";
            };
            class scriptedArtilleryCharge {
                file = "\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_scriptedArtilleryCharge.sqf";
            };
        };
    };
};
class CfgRemoteExec {
    class Functions {
        mode = 2;
        jip = 1;
        class RHS_fnc_effectFiredSmokeGenerator {
            allowedTargets = 0;
        };
        class RHS_fnc_effectFiredSmokeLauncher {
            allowedTargets = 0;
        };
    };
};
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        RHS_StaticWeapon_GetOut_Low = "amovppnemstpsraswrfldnon";
        RHS_StaticWeapon_GetOut_Medium = "amovpknlmstpsraswrfldnon";
        RHS_LowKORD_Gunner = "RHS_LowKORD_Gunner";
        RHS_KORD_Gunner = "RHS_KORD_Gunner";
        RHS_DShKM_Gunner = "RHS_DShKM_Gunner";
        RHS_LowTripod_Gunner = "RHS_LowTripod_Gunner";
        RHS_AGS_Gunner = "RHS_AGS_Gunner";
        RHS_SPG_Gunner = "RHS_SPG_Gunner";
        RHS_Metis_Gunner = "RHS_Metis_Gunner";
        RHS_D30_Commander = "RHS_D30_Commander";
        RHS_D30_Gunner = "RHS_D30_Gunner";
        RHS_D30_Cargo = "RHS_D30_Cargo";
        RHS_Zu23_Cargo = "RHS_Zu23_Cargo";
        RHS_Zu23_Gunner = "RHS_Zu23_Gunner";
        RHS_IglaPod_Gunner = "RHS_IglaPod_Gunner";
        RHS_Kornet_Gunner = "RHS_Kornet_gunner";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class RHS_LowKORD_Gunner: Crew {
            file = "\rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\anim\sittingGunner.rtm";
            connectTo[] = {"Static_Dead", 1};
            leftHandIKBeg = 1;
            leftHandIKCurve[] = {1};
            leftHandIKEnd = 1;
            rightHandIKCurve[] = {1};
            righHandIKBeg = 1;
            righHandIKEnd = 1;
            collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
        };
        class RHS_DShKM_Gunner: Crew {
            file = "rhsafrf\addons\rhs_heavyweapons\data\anim\DShKM_Gunner.rtm";
            connectTo[] = {"Static_Dead", 1};
            leftHandIKBeg = 1;
            leftHandIKCurve[] = {1};
            leftHandIKEnd = 1;
            rightHandIKCurve[] = {1};
            righHandIKBeg = 1;
            righHandIKEnd = 1;
            collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Idle.p3d";
        };
        class RHS_LowTripod_Gunner: RHS_DShKM_Gunner {
            file = "rhsafrf\addons\rhs_heavyweapons\data\anim\LowTripod_Gunner.rtm";
        };
        class RHS_KORD_Gunner: RHS_DShKM_Gunner {
            file = "rhsafrf\addons\rhs_heavyweapons\data\anim\standingGunner.rtm";
        };
        class RHS_AGS_Gunner: Crew {
            file = "rhsafrf\addons\rhs_heavyweapons\data\anim\AGS_Gunner.rtm";
            connectTo[] = {"Static_Dead", 1};
            collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
        };
        class RHS_KIA_SPG_Gunner: DefaultDie {
            actions = "DeadActions";
            file = "\A3\cargoposes_F\Anim\gunner_static_low01_KIA.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_SPG_Gunner: Crew {
            file = "rhsafrf\addons\rhs_heavyweapons\data\anim\SPG9_gunner.rtm";
            interpolateTo[] = {"RHS_KIA_SPG_Gunner", 1};
            collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
        };
        class RHS_Kornet_Gunner: Crew {
            file = "rhsafrf\addons\rhs_heavyweapons\data\anim\kornet_gunner.rtm";
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {1};
            interpolateTo[] = {"RHS_KIA_SPG_Gunner", 1};
            collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
        };
        class RHS_Metis_Gunner: Crew {
            file = "rhsafrf\addons\rhs_heavyweapons\data\anim\Metis_Gunner.rtm";
            connectTo[] = {"RHS_KIA_SPG_Gunner", 0.1};
            collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
        };
        class RHS_D30_Commander: Crew {
            file = "rhsafrf\addons\rhs_heavyweapons\data\anim\D30_Commander.rtm";
            connectTo[] = {"Static_Dead", 1};
            collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Idle.p3d";
        };
        class RHS_D30_Gunner: Crew {
            file = "rhsafrf\addons\rhs_heavyweapons\data\anim\D30_Gunner.rtm";
            connectTo[] = {"Static_Dead", 1};
            collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Idle.p3d";
        };
        class RHS_D30_Cargo: Crew {
            file = "rhsafrf\addons\rhs_heavyweapons\data\anim\D30_Cargo.rtm";
            connectTo[] = {"Static_Dead", 1};
            collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Idle.p3d";
        };
        class RHS_Zu23_Cargo: Crew {
            file = "rhsafrf\addons\rhs_heavyweapons\data\anim\Hilux_Cargo01.rtm";
            connectTo[] = {"RHS_KIA_ZU23_Gunner", 1};
            interpolateTo[] = {"RHS_KIA_ZU23_Gunner", 1};
        };
        class RHS_Zu23_Gunner: Crew {
            file = "rhsafrf\addons\rhs_heavyweapons\data\anim\rhs_zu23_gunner.rtm";
            connectTo[] = {"RHS_KIA_ZU23_Gunner", 1};
            interpolateTo[] = {"RHS_KIA_ZU23_Gunner", 1};
        };
        class RHS_KIA_ZU23_Gunner: RHS_KIA_SPG_Gunner {
            file = "rhsafrf\addons\rhs_heavyweapons\data\anim\KIA_Hilux_Cargo01.rtm";
        };
        class RHS_IglaPod_Gunner: Crew {
            file = "rhsafrf\addons\rhs_heavyweapons\data\anim\rhs_iglapod_gunner.rtm";
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {1};
            interpolateTo[] = {"RHS_KIA_SPG_Gunner", 1};
            collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
        };
    };
};
class CfgSounds {
    class RHS_ERA_EXPLOSION_1 {
        name = "ERA Explosion 1";
        sound[] = {"A3\Sounds_F\weapons\Explosion\explosion_mine_1", 1, 1};
        titles[] = {};
    };
    class RHS_Autoloader {
        name = "Autoloader sound";
        sound[] = {
            "\rhsafrf\addons\rhs_c_heavyweapons\sounds\autoloader",
            1.4125376,
            1,
            200
        };
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
    class MachineGunCartridge1;
    class SmallFireF;
    class RHS_YakB_Catridge: MachineGunCartridge1 {
        interval = "0.06/10";
    };
    class MachineGunCartridge2;
    class RHS_Tank_Catridge: MachineGunCartridge2 {
        interval = 5.56;
        lifeTime = 60;
        size[] = {2};
        sizeVar = 0;
        position[] = {0, 0, 0};
        moveVelocity[] = {-3, -3, -6};
        particleShape = "\rhsafrf\addons\rhs_c_heavyweapons\rhs_casing_30mm.p3d";
    };
    class RHS_30mm_Catridge: MachineGunCartridge2 {
        moveVelocity[] = {"-directionX * 3", "- directionY * 3", "- directionZ * 3"};
        particleShape = "\rhsafrf\addons\rhs_c_heavyweapons\rhs_casing_30mm.p3d";
        size[] = {1};
        sizeVar = 0;
        damping = 0.05;
        externalAcceleration = 1.2;
        restitution = 0.4;
        dynamicFriction = 0.2;
        staticFriction = 0.2;
        collisionSize = 0.05;
        maxMotionDist = 4;
    };
    class RHS_145mm_Catridge: RHS_30mm_Catridge {
        size[] = {0.85};
    };
    class RHS_23mm_Catridge: RHS_30mm_Catridge {
        size[] = {0.95};
        MoveVelocityVar[] = {0.6, 0.6, 0.6};
    };
    class MachineGunEject;
    class RHS_23mm_AmmoBeltLink: MachineGunEject {
        lifeTime = 6;
        moveVelocity[] = {"-directionX*2", "-directionY*2", "-directionZ*2"};
        size[] = {4.6};
        MoveVelocityVar[] = {0.4, 0.4, 0.4};
    };
    class RHS_ATGM_Cap: RHS_30mm_Catridge {
        interval = 0.06;
        particleShape = "\rhsafrf\addons\rhs_bmd\rhs_berezhok_cover.p3d";
        size[] = {1};
        rotationVelocity = 3;
        rotationVelocityVar = 1;
        randomDirectionPeriod = 0.1;
        randomDirectionIntensity = 0.05;
    };
    class RHS_ATGM_Cap_x2: RHS_ATGM_Cap {
        moveVelocity[] = {"-directionX * 6", "- directionY * 6", "- directionZ * 6"};
    };
    class RHS_ATGM_Pusher_Eject: MachineGunCartridge2 {
        interval = 0.95;
        lifeTime = 60;
        size[] = {1};
        sizeVar = 0;
        position[] = {0, 0, 0};
        moveVelocity[] = {"speedX  * 0.3", "speedY  * 0.3", "speedZ  * 0.3"};
        particleShape = "\rhsafrf\addons\rhs_heavyweapons\atgmpush\atgmpush.p3d";
    };
    class RHS_125mm_Sabot_1_Eject: MachineGunCartridge2 {
        particleShape = "\rhsafrf\addons\rhs_heavyweapons\sabot\sabot.p3d";
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
    class RHS_125mm_Sabot_2_Eject: RHS_125mm_Sabot_1_Eject {
        moveVelocity[] = {"speedX  * 0.05", "speedY  * 0.06", "speedZ  * 0.06"};
    };
    class RHS_125mm_Sabot_3_Eject: RHS_125mm_Sabot_1_Eject {
        moveVelocity[] = {"speedX  * 0.07", "speedY  * 0.06", "speedZ  * 0.06"};
    };
    class RHS_NukeConeFire: Default {
        interval = 0.01;
        CircleRadius = 22.1;
        CircleVelocity[] = {0, 0.1, -0.55};
        particleShape = "\a3\Data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 4;
        particleFSFrameCount = 16;
        particleFSLoop = 1;
        angle = 0;
        angleVar = 0;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 23.5;
        lifeTimeVar = 0;
        weight = 10;
        volume = 7.65;
        rubbing = 0;
        size[] = {4.2, 3, 2};
        sizeVar = 0.25;
        sizeCoef = 1;
        animationSpeed[] = {1};
        animationSpeedCoef = 1;
        position[] = {0, 8, 0};
        positionVar[] = {0.25, 0.25, 0};
        positionVarConst[] = {0, 0, 0};
        moveVelocity[] = {0, 6, 0};
        moveVelocityVar[] = {0, 0.175, 0};
        moveVelocityVarConst[] = {0, 0, 0};
        rotationVelocity = 0;
        rotationVelocityVar = 0;
        color[] = {{0.25, 0.25, 0.25, 0.35}, {0.25, 0.25, 0.25, 0.25}, {0.25, 0.25, 0.25, 0}};
        colorVar[] = {0, 0, 0, 0};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
        destroyOnWaterSurface = 0;
        destroyOnWaterSurfaceOffset = 0;
        onSurface = 0;
        keepOnSurface = 0;
        surfaceOffset = 0;
        bounceOnSurface = 0.6;
        bounceOnSurfaceVar = 0;
        postEffects = "";
        particleEffects = "";
        randomDirectionPeriod = 1;
        randomDirectionIntensity = 0;
        onTimerScript = "";
        beforeDestroyScript = "";
    };
    class RHS_NukeConeSmokeBottom: Default {
        interval = 0.005;
        CircleRadius = 12;
        CircleVelocity[] = {5, 0.1, 5};
        particleShape = "\a3\Data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 8;
        particleFSFrameCount = 18;
        particleFSLoop = 0;
        angle = 0;
        angleVar = 0;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 24.5;
        lifeTimeVar = 0;
        weight = 10;
        volume = 7.65;
        rubbing = 0;
        size[] = {7.2, 4, 1};
        sizeVar = 0.25;
        sizeCoef = 1;
        animationSpeed[] = {1};
        animationSpeedCoef = 1;
        position[] = {0, 0, 0};
        positionVar[] = {0.25, 0.25, 0};
        positionVarConst[] = {0, 0, 0};
        moveVelocity[] = {0, 0, 0};
        moveVelocityVar[] = {0, 0.175, 0};
        moveVelocityVarConst[] = {0, 0, 0};
        rotationVelocity = 0;
        rotationVelocityVar = 0;
        color[] = {{0.1, 0.1, 0.1, 1}, {0.25, 0.25, 0.25, 0.5}, {0.5, 0.5, 0.5, 0}};
        colorVar[] = {0, 0, 0, 0};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
        destroyOnWaterSurface = 0;
        destroyOnWaterSurfaceOffset = 0;
        onSurface = 0;
        keepOnSurface = 0;
        surfaceOffset = 0;
        bounceOnSurface = 0.6;
        bounceOnSurfaceVar = 0;
        postEffects = "";
        particleEffects = "";
        randomDirectionPeriod = 1;
        randomDirectionIntensity = 0;
        onTimerScript = "";
        beforeDestroyScript = "";
    };
    class RHS_NukeConeSmokeTop: Default {
        interval = 0.005;
        CircleRadius = 22;
        CircleVelocity[] = {0, 0, -0.55};
        particleShape = "\a3\Data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 8;
        particleFSFrameCount = 18;
        particleFSLoop = 0;
        angle = 0;
        angleVar = 0;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 24.5;
        lifeTimeVar = 0;
        weight = 10;
        volume = 7.65;
        rubbing = 0;
        size[] = {7.2, 4, 4};
        sizeVar = 0.25;
        sizeCoef = 1;
        animationSpeed[] = {1};
        animationSpeedCoef = 1;
        position[] = {0, 8, 0};
        positionVar[] = {0.25, 0.25, 0};
        positionVarConst[] = {0, 0, 0};
        moveVelocity[] = {0, 6, 0};
        moveVelocityVar[] = {0, 0.175, 0};
        moveVelocityVarConst[] = {0, 0, 0};
        rotationVelocity = 0;
        rotationVelocityVar = 0;
        color[] = {{0.1, 0.1, 0.1, 0.7}, {0.25, 0.25, 0.25, 0.45}, {0.5, 0.5, 0.5, 0}};
        colorVar[] = {0, 0, 0, 0};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
        destroyOnWaterSurface = 0;
        destroyOnWaterSurfaceOffset = 0;
        onSurface = 0;
        keepOnSurface = 0;
        surfaceOffset = 0;
        bounceOnSurface = 0.6;
        bounceOnSurfaceVar = 0;
        postEffects = "";
        particleEffects = "";
        randomDirectionPeriod = 1;
        randomDirectionIntensity = 0;
        onTimerScript = "";
        beforeDestroyScript = "";
    };
    class RHS_NukeSmokeChimney: Default {
        interval = 0.01;
        CircleRadius = 0;
        CircleVelocity[] = {0, 0, 0};
        particleShape = "\a3\Data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 8;
        particleFSFrameCount = 16;
        particleFSLoop = 1;
        angle = 0;
        angleVar = 0;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 23.5;
        lifeTimeVar = 0;
        weight = 10;
        volume = 7.75;
        rubbing = 0;
        size[] = {9, 8, 6, 1};
        sizeVar = 0.25;
        sizeCoef = 1;
        animationSpeed[] = {1};
        animationSpeedCoef = 1;
        position[] = {0, 0, 0};
        positionVar[] = {0.25, 6.25, 0};
        positionVarConst[] = {0, 0, 0};
        moveVelocity[] = {0, 3, 0};
        moveVelocityVar[] = {0.175, 2.175, 0};
        moveVelocityVarConst[] = {0, 0, 0};
        rotationVelocity = 0;
        rotationVelocityVar = 0;
        color[] = {{0.25, 0.25, 0.25, 0.7}, {0.15, 0.15, 0.15, 0.3}};
        colorVar[] = {0, 0, 0, 0};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
        destroyOnWaterSurface = 0;
        destroyOnWaterSurfaceOffset = 0;
        onSurface = 0;
        keepOnSurface = 0;
        surfaceOffset = 0;
        bounceOnSurface = 0.6;
        bounceOnSurfaceVar = 0;
        postEffects = "";
        particleEffects = "";
        randomDirectionPeriod = 1;
        randomDirectionIntensity = 0;
        onTimerScript = "";
        beforeDestroyScript = "";
    };
    class MachineGun2;
    class RHS_MachineGun2: MachineGun2 {
        color[] = {
            {0.58, 0.58, 0.49, 0.08},
            {0.58, 0.58, 0.49, 0.066},
            {0.58, 0.58, 0.49, 0.012},
            {0.58, 0.58, 0.49, 0.001}
        };
        size[] = {1.3, 3, 5, 7};
        sizeCoef = 1;
    };
    class AutoCannonFired;
    class RHS_AutoCannon_Fired: AutoCannonFired {
        color[] = {
            {0.54, 0.52, 0.48, 0.12},
            {0.54, 0.52, 0.48, 0.066},
            {0.21, 0.21, 0.28, 0.022},
            {0.21, 0.21, 0.2, 0.001}
        };
        size[] = {3, 6, 9, 10};
        sizeCoef = 1;
    };
    class RHS_2A42_Fired: AutoCannonFired {
        color[] = {
            {0.54, 0.52, 0.48, 0.12},
            {0.54, 0.52, 0.48, 0.036},
            {0.21, 0.21, 0.28, 0.012},
            {0.21, 0.21, 0.2, 0.001}
        };
        size[] = {0.1, 3, 6, 4};
        sizeCoef = 1;
        lifeTime = 3.1;
        lifeTimeVar = 2.4;
        weight = 0.05;
        volume = 0.04;
        rubbing = 0.65;
        moveVelocity[] = {"17*directionX", "17*directionY", "17*directionZ"};
        position[] = {"positionX", "positionY", "positionZ"};
    };
    class RHS_KPVT_Flash: AutoCannonFired {
        interval = 0.05;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 2;
        particleFSFrameCount = 32;
        particleFSLoop = 0;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 0.135;
        position[] = {"positionX", "positionY", "positionZ"};
        moveVelocity[] = {"1*directionX", "2*directionY", "1*directionZ"};
        rotationVelocity = 0;
        weight = 10;
        volume = 0.5;
        rubbing = 0.075;
        size[] = {0.35, 0.35};
        color[] = {
            {1, 1, 1, -2},
            {1, 1, 1, -2},
            {1, 1, 1, -1},
            {1, 1, 1, 0}
        };
        animationSpeed[] = {3};
        randomDirectionPeriod = 0;
        randomDirectionIntensity = 0;
        onTimerScript = "";
        beforeDestroyScript = "";
        lifeTimeVar = 0;
        positionVar[] = {0, 0, 0};
        MoveVelocityVar[] = {0, 0, 0};
        rotationVelocityVar = 0;
        sizeVar = 0;
        colorVar[] = {0, 0, 0, 0.1};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
        angleVar = 0;
    };
    class ExhaustSmokeTank2;
    class RHS_ExhaustSmokeTankGas: ExhaustSmokeTank2 {
        color[] = {
            {0.86, 0.96, 0.96, 0.04},
            {0.8, 0.8, 0.8, 0.05},
            {0.83, 0.93, 0.93, 0.005},
            {0.83, 0.93, 0.93, 0.001}
        };
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
    class RHS_3D17SparksBig: Default {
        interval = 0.002;
        color[] = {{1, 0.3, 0.1, -500}, {1, 0.3, 0.1, -500}};
        colorCoef[] = {1, 1, 1, 1};
        emissiveColor[] = {{250, 50, 25, 0}, {0, 0, 0, 0}};
        lifeTime = 3;
        lifeTimeVar = 5;
        weight = 100;
        volume = 0.01;
        rubbing = 0.05;
        size[] = {0.15, 0.075, 0};
        sizeVar = 0.1;
        moveVelocity[] = {"inDirX * inSpeed * 0.35", "inDirY * inSpeed * 0.35", "inDirZ * inSpeed * 0.35"};
        moveVelocityVar[] = {7, 7, 7};
        bounceOnSurface = 0.5;
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
    class RHS_3D17SparksSlow: RHS_3D17SparksBig {
        interval = 0.003;
        weight = 1.277;
        volume = 0.8;
        emissiveColor[] = {{50, 15, 10, 0}, {0, 0, 0, 0}};
        moveVelocity[] = {"inDirX * inSpeed * 0.15", "inDirY * inSpeed * 0.15", "inDirZ * inSpeed * 0.15"};
        moveVelocityVar[] = {2, 2, 2};
        particleEffects = "RHS_3D17ParticleLight";
    };
    class RHS_3D17SparksTail: RHS_3D17SparksBig {
        interval = 0.001;
        color[] = {{1, 0.2, 0.1, -500}, {1, 0.2, 0.1, -500}};
        emissiveColor[] = {{50000, 7500, 3500, 0}, {0, 0, 0, 0}};
        lifeTime = 3;
        lifeTimeVar = 5;
        weight = 100;
        volume = 0.01;
        rubbing = 0.01;
        size[] = {0.15, 0.1, 0};
        sizeVar = 0.1;
        moveVelocity[] = {"inDirX * inSpeed * 0.35", "inDirY * inSpeed * 0.35", "inDirZ * inSpeed * 0.35"};
        moveVelocityVar[] = {7, 7, 7};
        bounceOnSurface = 0.4;
        bounceOnSurfaceVar = 0.1;
        particleEffects = "RHS_3D17ParticleTail";
    };
    class RHS_3D17SparksTail_902B: RHS_3D17SparksTail {
        interval = 0.0015;
        moveVelocity[] = {"inDirX * inSpeed * 0.45", "inDirY * inSpeed * 0.45", "inDirZ * inSpeed * 0.45"};
        moveVelocityVar[] = {9, 9, 9};
        bounceOnSurface = 0.65;
        bounceOnSurfaceVar = 0.1;
        particleEffects = "RHS_3D17ParticleTail_902B";
    };
    class RHS_3D17SparksSmall: RHS_3D17SparksBig {
        interval = 0.002;
        color[] = {{1, 0.3, 0.1, -500}, {1, 0.3, 0.1, -500}};
        emissiveColor[] = {{250, 50, 25, 0}, {0, 0, 0, 0}};
        lifeTime = 0.3;
        lifeTimeVar = 5;
        weight = 100;
        volume = 0.01;
        rubbing = 0.05;
        size[] = {0.2, 0.1, 0};
        sizeVar = 0.15;
        moveVelocity[] = {"inDirX * inSpeed * 0.15", "inDirY * inSpeed * 0.15", "inDirZ * inSpeed * 0.15"};
        moveVelocityVar[] = {15, 15, 15};
    };
    class RHS_3D17SparksBack: RHS_3D17SparksSmall {
        interval = 0.006;
        moveVelocity[] = {"inDirX * inSpeed * -0.25", "inDirY * inSpeed * -0.25", "inDirZ * inSpeed * -0.25"};
        moveVelocityVar[] = {1, 1, 1};
        lifeTime = 0.6;
        lifeTimeVar = 5;
    };
    class RHS_3D17TrailEffect: Default {
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
        interval = 0.3;
        emissiveColor[] = {{0.5, 0.5, 0.5, 0}, {0, 0, 0, 0}};
        colorVar[] = {0, 0, 0, 0};
        lifeTime = 3.5;
        lifeTimeVar = 0.25;
        weight = 1.277;
        volume = "0.99 + randomValue / 40";
        rubbing = 0.075;
        size[] = {2.8125, 5.625, 7.875};
        sizeVar = 0.5;
        color[] = {
            {0.6, 0.6, 0.6, 0},
            {0.5, 0.5, 0.5, 0.3},
            {0.5, 0.5, 0.5, 0.4},
            {0.5, 0.5, 0.5, 0.3},
            {0.5, 0.5, 0.5, 0.2},
            {0.8, 0.8, 0.8, 0.05},
            {1, 1, 1, 0}
        };
        rotationVelocity = 0.75;
        rotationVelocityVar = 0.25;
        randomDirectionPeriod = 1.25;
        randomDirectionIntensity = 0.25;
        randomDirectionIntensityVar = 0.1;
        position[] = {0, 0, 0};
        positionVar[] = {0.1, 0.1, 0.1};
        blockAIVisibility = 0;
    };
    class RHS_3D17TrailEffect1: RHS_3D17TrailEffect {
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
    class RHS_3D17TrailEffect2: RHS_3D17TrailEffect {
        color[] = {
            {0.6, 0.6, 0.6, 0},
            {0.5, 0.5, 0.5, 0.12},
            {0.5, 0.5, 0.5, 0.15},
            {0.5, 0.5, 0.5, 0.2},
            {0.5, 0.5, 0.5, 0.1},
            {0.8, 0.8, 0.8, 0.02},
            {1, 1, 1, 0}
        };
        size[] = {1.25, 2.5, 3.5};
        interval = 0.075;
    };
    class RHS_3D17TrailEffectLong: RHS_3D17TrailEffect {
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
        interval = 0.3;
        color[] = {
            {0.8, 0.8, 0.8, 0.005},
            {0.6, 0.6, 0.6, 0.6},
            {0.6, 0.6, 0.6, 0.5},
            {0.6, 0.6, 0.6, 0.3},
            {0.6, 0.6, 0.6, 0.2},
            {0.8, 0.8, 0.8, 0.05},
            {1, 1, 1, 0}
        };
        emissiveColor[] = {{0.5, 0.5, 0.5, 0}, {0, 0, 0, 0}};
        lifeTime = 22;
        lifeTimeVar = 1;
        size[] = {4.5, 7.875, 14.625};
        sizeVar = 0.5;
        weight = 1.277;
        volume = "0.99 + randomValue / 40";
        rotationVelocity = 1.25;
        rotationVelocityVar = 1;
        randomDirectionPeriod = 1.5;
        randomDirectionIntensity = 0.15;
        bounceOnSurface = -1;
        bounceOnSurfaceVar = 0;
        blockAIVisibility = 1;
    };
    class RHS_3D17TrailEffectLong1: RHS_3D17TrailEffectLong {
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
        interval = 0.15;
    };
    class RHS_3D17TrailEffectLong2: RHS_3D17TrailEffectLong {
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
        interval = 0.125;
    };
    class RHS_3D17ExplosionCloud: RHS_3D17TrailEffect {
        moveVelocity[] = {0, 0, 0.1};
        size[] = {2.8125, 5.625, 7.875};
        weight = 1.277;
        volume = "1.25 + randomValue / 30";
        randomDirectionPeriod = 1.5;
        randomDirectionIntensity = 0.25;
        interval = 0.02;
        lifeTime = 4;
        lifeTimeVar = 0.25;
        color[] = {
            {0.03, 0.03, 0.03, 0.6},
            {0.03, 0.03, 0.03, 0.5},
            {0.03, 0.03, 0.03, 0.4},
            {0.03, 0.03, 0.03, 0.2},
            {0.03, 0.03, 0.03, 0.05},
            {0.03, 0.03, 0.03, 0.01},
            {1, 1, 1, 0}
        };
    };
    class RHS_D832DUSparksTail: RHS_3D17SparksTail {
        particleEffects = "RHS_D832DUParticleTail";
        moveVelocityVar[] = {17, 17, 17};
    };
    class RHS_D832DUTrailEffect: RHS_3D17TrailEffect {
        sizeCoef = 2;
    };
    class RHS_D832DUTrailEffect1: RHS_3D17TrailEffect1 {
        sizeCoef = 2;
    };
    class RHS_D832DUTrailEffect2: RHS_3D17TrailEffect2 {
        sizeCoef = 2;
    };
    class RHS_D832DUTrailEffectLong: RHS_3D17TrailEffectLong {
        sizeCoef = 2;
    };
    class RHS_D832DUTrailEffectLong1: RHS_3D17TrailEffectLong1 {
        sizeCoef = 2;
    };
    class RHS_D832DUTrailEffectLong2: RHS_3D17TrailEffectLong2 {
        sizeCoef = 2;
    };
    class RHS_D832DUExplosionCloud: RHS_3D17ExplosionCloud {
        sizeCoef = 2;
    };
    class ExhaustSmokeRefractHeliBig;
    class ExhaustSmokeRefractGasTurbine: ExhaustSmokeRefractHeliBig {
        interval = "0.002/(intensity + 0.001)/(vehicleSpeedSize interpolate [0,70,1,20])";
        moveVelocity[] = {"speedX * 0.98", "speedY * 0.98", "speedZ * 0.98"};
        lifeTime = "0.4/(vehicleSpeedSize interpolate [0,70,1,10])";
        sizeCoef = "(vehicleSpeedSize interpolate [0,80,1,3])";
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
    class RHS_RPS_K37_800_Smoke: RHS_ERA_Smoke {
        interval = 0.005;
        lifeTime = 7;
        size[] = {2, 2, 2};
    };
    class RHS_RPS_K37_800_Fire: RHS_ERA_Flash {
        interval = 0.05;
        timerPeriod = 1;
        lifeTime = 0.25;
        weight = 1.277;
        volume = 1;
        rubbing = 0.1;
        size[] = {0.3, 0.4, 1.2};
        color[] = {{1, 1, 1, -6}, {1, 0.5, 0.5, 0}};
        animationSpeed[] = {1};
        randomDirectionPeriod = 0.2;
        randomDirectionIntensity = 0.2;
        position[] = {0, 0, 0};
        positionVar[] = {0, 0, 0};
        MoveVelocityVar[] = {0.2, 0.5, 0.2};
        rotationVelocityVar = 1;
    };
    class RHS_InternalFire: SmallFireF {
        coreIntensity = 800;
        coreDistance = 0.4;
        damageTime = 0.1;
        constantDistance = 0.02;
        damageType = "Fire";
    };
    class RHS_Incendiary_Fire: SmallFireF {
        coreIntensity = 300;
        coreDistance = 0.9;
        damageTime = 1.1;
        constantDistance = 0.02;
        damageType = "Fire";
    };
    class RHS_SmokeWP_Fire2: SmallFireF {
        coreIntensity = 3;
    };
    class RHS_SmokeWP_Fire: SmallFireF {
        interval = 0.01;
        CircleRadius = 0;
        CircleVelocity[] = {0, 0, 0};
        particleShape = "\a3\Data_f\ParticleEffects\Universal\SparksDot.p3d";
        particleFSNtieth = 1;
        particleFSIndex = 1;
        particleFSFrameCount = 8;
        particleFSLoop = 0;
        angle = 0;
        angleVar = 0;
        animationName = "";
        particleType = "SpaceObject";
        timerPeriod = 1;
        lifeTime = 0.5;
        lifeTimeVar = 0;
        weight = 10;
        volume = 7.8;
        rubbing = 1.075;
        size[] = {0.1, 0.01};
        sizeVar = 0.25;
        sizeCoef = 1;
        animationSpeed[] = {0.08};
        animationSpeedCoef = 1;
        position[] = {0, 0, 0};
        positionVar[] = {0.1, 0.1, 0};
        positionVarConst[] = {0, 0, 0};
        moveVelocity[] = {0, 0.75, 0};
        moveVelocityVar[] = {0.175, 0, 0.175};
        moveVelocityVarConst[] = {0, 0, 0};
        rotationVelocity = 0;
        rotationVelocityVar = 0;
        color[] = {{0.1, 0.1, 0.1, 1}, {0.25, 0.25, 0.25, 0.5}, {0.5, 0.5, 0.5, 0}};
        colorVar[] = {0, 0, 0, 0};
        colorCoef[] = {0, 0, 0, 0.1};
        emissiveColor[] = {
            {500, 75, 35, 0},
            {50, 7.5, 3.5, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        };
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
        destroyOnWaterSurface = 0;
        destroyOnWaterSurfaceOffset = 0;
        onSurface = 1;
        keepOnSurface = 0;
        surfaceOffset = 0;
        bounceOnSurface = 0.6;
        bounceOnSurfaceVar = 0;
        postEffects = "";
        particleEffects = "";
        randomDirectionPeriod = 1;
        randomDirectionIntensity = 0;
        onTimerScript = "";
        beforeDestroyScript = "";
    };
    class RHS_Incendiary_FireSparks: Default {
        interval = 0.05;
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
        timerPeriod = 1;
        lifeTime = 3.5;
        moveVelocity[] = {0, 0.5, 0};
        rotationVelocity = 1;
        weight = 1.85;
        volume = 1;
        rubbing = 0.17;
        size[] = {0.1, 0.1, 0.1, 0.1, 0.1, 0.08, 0.08, 0.08, 0.08, 0};
        color[] = {
            {1, 0.3, 0.3, -6.5},
            {1, 0.3, 0.3, -6},
            {1, 0.3, 0.3, -5.5},
            {1, 0.3, 0.3, -4.5}
        };
        animationSpeed[] = {1000};
        randomDirectionPeriod = 0.5;
        randomDirectionIntensity = 0.55;
        onTimerScript = "";
        beforeDestroyScript = "";
        blockAIVisibility = 0;
        lifeTimeVar = 2.5;
        positionVar[] = {0, 0.2, 0};
        MoveVelocityVar[] = {0.2, 1, 0.2};
        rotationVelocityVar = 2;
        sizeVar = 0.04;
        colorVar[] = {0, 0.15, 0.15, 0};
        randomDirectionPeriodVar = 0.3;
        randomDirectionIntensityVar = 0.15;
        coreIntensity = 0.1;
        coreDistance = 4.5;
        damageTime = 1.1;
        constantDistance = 0.02;
        damageType = "Fire";
    };
    class RHS_Rocket_Fired: Default {
        interval = "0.003";
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        angleVar = 1;
        particleFSLoop = 0;
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 12;
        particleFSFrameCount = 8;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 7;
        moveVelocity[] = {0, 0, 0};
        rotationVelocity = 1;
        weight = 1;
        volume = 0.8;
        rubbing = 0;
        size[] = {3, 9};
        color[] = {{0, 0, 0, 0.15}, {0.05, 0.05, 0.05, 0.1}, {0.1, 0.1, 0.1, 0.02}};
        animationSpeed[] = {1};
        randomDirectionPeriod = 0.1;
        randomDirectionIntensity = 0.1;
        onTimerScript = "";
        beforeDestroyScript = "";
        blockAIVisibility = 0;
        lifeTimeVar = 3;
        positionVar[] = {0.6, 0.6, 0.6};
        MoveVelocityVar[] = {0.8, 0.8, 0.8};
        rotationVelocityVar = 20;
        sizeVar = 0.5;
        colorVar[] = {0, 0, 0, 0};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
    };
    class RocketBackfireRPGNT;
    class RHS_Rocket_Init_Fire: Default {
        interval = 0.0009;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        angleVar = 1;
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 3;
        particleFSFrameCount = 1;
        particleFSLoop = 0;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 0.18;
        moveVelocity[] = {"-0.16 * speedX + parentSpeedX", "-0.16 * speedY + parentSpeedY", "-0.16 * speedZ + parentSpeedZ"};
        rotationVelocity = 1;
        weight = 441.275;
        volume = 381;
        rubbing = 0;
        size[] = {0.1, 0.5, 1.5, 1.8, 1, 0};
        sizeCoef = 1;
        color[] = {
            {0.4, 0.4, 0.4, 0.4},
            {0.45, 0.45, 0.45, 0.35},
            {0.5, 0.5, 0.5, 0.16},
            {0.55, 0.55, 0.55, 0.12},
            {0.6, 0.6, 0.6, 0.02}
        };
        colorCoef[] = {1.2, 1.2, 1.2, 0.9};
        animationSpeed[] = {1000};
        animationSpeedCoef = 1;
        randomDirectionPeriod = 0.1;
        randomDirectionIntensity = 0.5;
        onTimerScript = "";
        beforeDestroyScript = "";
        lifeTimeVar = 0.3;
        positionVar[] = {0, 0, 0};
        MoveVelocityVar[] = {0.5, 0.1, 0.5};
        rotationVelocityVar = 30;
        position[] = {0, 0, -1};
        sizeVar = 0.15;
        colorVar[] = {0, 0, 0, 0};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
    };
    class PylonBacksmoke;
    class RHS_Rocket_Init_Smoke: PylonBacksmoke {
        interval = 0.001;
        lifeTime = 7;
        rubbing = 0;
        rotationVelocityVar = 4;
        sizeCoef = 2;
        colorCoef[] = {0, 0, 0, 0.2};
        randomDirectionIntensity = 0.4;
        moveVelocity[] = {"-0.25 * speedX + parentSpeedX", "-0.25 * speedY + parentSpeedY", "-0.25 * speedZ + parentSpeedZ"};
        positionVar[] = {1, 1, 1};
        position[] = {0, 0, -1.2};
    };
    class ExhaustSmoke1PlaneHP;
    class RHS_ExhaustSmoke1PlaneHP: Default {
        interval = "0.001 * (engineDamage interpolate [0,2.5,2,8]) * (vehicleSpeedSize interpolate [0,200,10,1])";
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
        lifeTime = "0.3 * (engineDamage interpolate [0,1,3,12])";
        moveVelocity[] = {"speedX", "speedY", "speedZ"};
        rotationVelocity = 1;
        weight = 1.4;
        volume = 1;
        rubbing = 0.1;
        size[] = {0.3, 3};
        sizeCoef = "1.4 * (engineDamage interpolate [0,1,2,6])";
        color[] = {
            {0.06, 0.06, 0.06, 0.12},
            {0.1, 0.1, 0.1, 0.04},
            {0.2, 0.2, 0.2, 0.001},
            {0.3, 0.3, 0.3, 0.0001}
        };
        colorCoef[] = {
            "15",
            "15",
            "15",
            "((intensity*1.4)/2 * (engineDamage interpolate [0.0,0.4,1.5,6])) * (vehicleSpeedSize interpolate [0,200,0.51,1])"
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
        MoveVelocityVar[] = {"1 * (engineDamage interpolate [0,1,1,2.5])", "1 * (engineDamage interpolate [0,1,2,2.5])", "1 * (engineDamage interpolate [0,1,1,2.5])"};
        rotationVelocityVar = 20;
        sizeVar = 0.2;
        colorVar[] = {0, 0, 0, 0};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
    };
    class RHS_HeavyBombSmk1: Default {
        interval = 0.007;
        circleRadius = 9;
        circleVelocity[] = {0.9, 0, 0.9};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 7;
        particleFSFrameCount = 48;
        particleFSLoop = 1;
        angleVar = 360;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 26;
        moveVelocity[] = {0, 12, 0};
        rotationVelocity = 1;
        weight = 1.1;
        volume = 1;
        rubbing = 0.15;
        size[] = {6, 40};
        color[] = {
            {0.5, 0.5, 0.5, 0.4},
            {0.5, 0.5, 0.5, 0.22},
            {0.6, 0.6, 0.6, 0.15},
            {0.8, 0.8, 0.8, 0.05}
        };
        animationSpeed[] = {1.5, 0.5, 0.25, 0.25};
        randomDirectionPeriod = 0.2;
        randomDirectionIntensity = 0.1;
        onTimerScript = "";
        beforeDestroyScript = "";
        lifeTimeVar = 1.5;
        positionVar[] = {0.2, 5.2, 0.2};
        MoveVelocityVar[] = {0.5, 22, 0.5};
        rotationVelocityVar = 20;
        sizeVar = 0.3;
        colorVar[] = {0, 0, 0, 0.3};
        randomDirectionPeriodVar = 0.2;
        randomDirectionIntensityVar = 0.05;
    };
    class RHS_HeavyBombSmk2: RHS_HeavyBombSmk1 {
        interval = 0.005;
        circleRadius = 6.5;
        circleVelocity[] = {8, 0, 8};
        lifeTime = 29;
        moveVelocity[] = {0, 6, 0};
        rotationVelocity = 1;
        weight = 1.175;
        volume = 1;
        rubbing = 0.15;
        size[] = {12, 26};
        color[] = {
            {0.5, 0.5, 0.5, 0.4},
            {0.5, 0.5, 0.5, 0.22},
            {0.6, 0.6, 0.6, 0.09},
            {0.8, 0.8, 0.8, 0.01}
        };
        animationSpeed[] = {1.5, 0.5, 0.25, 0.25};
        randomDirectionPeriod = 0.2;
        randomDirectionIntensity = 0.1;
        lifeTimeVar = 0.5;
        positionVar[] = {0.2, 0.2, 0.2};
        MoveVelocityVar[] = {0.1, 0.1, 0.1};
        rotationVelocityVar = 20;
        sizeVar = 1;
        colorVar[] = {0, 0, 0, 0};
        randomDirectionPeriodVar = 0.2;
        randomDirectionIntensityVar = 0.05;
    };
    class RHS_HeavyBombSmk3: RHS_HeavyBombSmk1 {
        interval = 0.02;
        circleRadius = 7;
        circleVelocity[] = {7, 0, 7};
        lifeTime = 32;
        moveVelocity[] = {0, 2, 0};
        rotationVelocity = 1;
        weight = 1.275;
        volume = 1;
        rubbing = 0.15;
        size[] = {18, 25};
        color[] = {
            {0.5, 0.5, 0.5, 0.4},
            {0.6, 0.6, 0.6, 0.15},
            {0.7, 0.7, 0.7, 0.06},
            {1, 1, 1, 0.01}
        };
        animationSpeed[] = {0.5};
        randomDirectionPeriod = 0.2;
        randomDirectionIntensity = 0.1;
        lifeTimeVar = 2;
        positionVar[] = {3, 1, 3};
        MoveVelocityVar[] = {7, 0.5, 7};
        rotationVelocityVar = 20;
        sizeVar = 0.3;
        colorVar[] = {0, 0, 0, 0.3};
        randomDirectionPeriodVar = 0.2;
        randomDirectionIntensityVar = 0.05;
    };
    class RHS_BombExp1: Default {
        interval = 0.01;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 2;
        particleFSFrameCount = 80;
        particleFSLoop = 0;
        angleVar = 1;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 1;
        moveVelocity[] = {0, 2.5, 0};
        rotationVelocity = 0;
        weight = 2;
        volume = 1;
        rubbing = 0.1;
        size[] = {25, 38};
        color[] = {
            {1, 1, 1, -20},
            {1, 1, 1, -15},
            {1, 1, 1, -10},
            {1, 1, 1, -6},
            {1, 1, 1, -2}
        };
        animationSpeed[] = {0.25};
        randomDirectionPeriod = 0.2;
        randomDirectionIntensity = 0.1;
        onTimerScript = "";
        beforeDestroyScript = "";
        lifeTimeVar = 0.3;
        positionVar[] = {5, 6, 5};
        MoveVelocityVar[] = {2, 2, 2};
        rotationVelocityVar = 25;
        sizeVar = 0.4;
        colorVar[] = {0, 0, 0, 0.3};
        randomDirectionPeriodVar = 0.2;
        randomDirectionIntensityVar = 0.05;
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
    class RHS_2A28_Fired: AutoCannonFired {
        interval = 0.003;
        angleVar = 0.5;
        lifeTime = 4.1;
        moveVelocity[] = {"25*directionX", "25*directionY", "25*directionZ"};
        size[] = {0.3, 0.7, 1, 1.2, 1.4, 1.6, 1.8};
        color[] = {
            {0.9, 0.9, 0.9, 0.08},
            {0.9, 0.9, 0.9, 0.036},
            {0.9, 0.9, 0.9, 0.012},
            {0.9, 0.9, 0.9, 0.001}
        };
        animationSpeed[] = {1.2};
        randomDirectionPeriod = 0.1;
        randomDirectionIntensity = 0.05;
        sizeCoef = 3.9;
        position[] = {"positionX + 0.12 * directionLocalX", "positionY + 0.12 * directionLocalY", "positionZ + 0.12 * directionLocalZ"};
        lifeTimeVar = 0;
        positionVar[] = {0, 0, 0};
        MoveVelocityVar[] = {11, 11, 11};
        rotationVelocityVar = 15;
        sizeVar = 0;
    };
    class CannonFired3;
    class RHS_2A28_Fired2: CannonFired3 {
        moveVelocity[] = {"directionX * 4.2", "directionY * 4.2", "directionZ * 4.2"};
        color[] = {
            {0.8, 0.8, 0.8, 0.04},
            {0.8, 0.8, 0.8, 0.03},
            {0.8, 0.8, 0.8, 0.05},
            {0.8, 0.8, 0.8, 0.01}
        };
    };
};
class CfgLights {
    class RHS_LightNuke {
        diffuse[] = {0.4, 0.28, 0.15};
        color[] = {1500, 1200, 1000};
        ambient[] = {1500, 1200, 1000};
        brightness = 10000000;
        size = 1;
        intensity = 450000;
        daylight = 1;
        drawLight = 0;
        blinking = 1;
        class Attenuation {
            start = 0.5;
            constant = 0;
            linear = 0;
            quadratic = 0.3;
            hardLimitStart = 1500;
            hardLimitEnd = 3000;
        };
        position[] = {0, 0, 0};
    };
    class RHS_KPVT_Light {
        diffuse[] = {0.4, 0.28, 0.15};
        color[] = {1, 0.5, 0.2};
        ambient[] = {0.8, 0.6, 0.2};
        brightness = 0.02;
        size = 1;
        intensity = 45;
        drawLight = 0;
        blinking = 1;
        class Attenuation {
            start = 0.5;
            constant = 0;
            linear = 0;
            quadratic = 0.3;
            hardLimitStart = 15;
            hardLimitEnd = 30;
        };
        position[] = {0, 0, 0};
    };
    class RHS_SmokeWPLight {
        diffuse[] = {0.996, 0.784, 0.569};
        color[] = {0.996, 0.784, 0.569};
        ambient[] = {0.996, 0.784, 0.569};
        brightness = "1110 + random 40";
        size = 1;
        intensity = 1100;
        drawLight = 1;
        blinking = 1;
        class Attenuation {
            start = 0;
            constant = 0;
            linear = 0;
            quadratic = 1;
            hardLimitStart = 40;
            hardLimitEnd = 80;
        };
        position[] = {0, 0, 0};
    };
    class RHS_3D17SparksLight {
        diffuse[] = {0.937, 0.8, 0.7};
        color[] = {0.937, 0.8, 0.7};
        ambient[] = {0.937, 0.8, 0.7};
        brightness = "10 + random 40";
        size = 1;
        intensity = 100;
        drawLight = 0;
        blinking = 1;
        class Attenuation {
            start = 0;
            constant = 0;
            linear = 0;
            quadratic = 1;
            hardLimitStart = 40;
            hardLimitEnd = 80;
        };
        position[] = {0, 0, 0};
    };
    class RHS_3D17ExplosionLight {
        lifetime = 0.2;
        diffuse[] = {0.937, 0.7, 0.6};
        color[] = {0.937, 0.7, 0.6};
        ambient[] = {0.937, 0.7, 0.6};
        brightness = 1000;
        size = 1;
        intensity = 80000;
        drawLight = 0;
        blinking = 1;
        class Attenuation {
            start = 0;
            constant = 0;
            linear = 0;
            quadratic = 2.2;
            hardLimitStart = 500;
            hardLimitEnd = 1000;
        };
        position[] = {0, 0, 0};
    };
};
class RHS_KPVT_Effect {
    class Light1 {
        simulation = "light";
        type = "FiredLightSmall";
        position[] = {0, 0, 0};
        intensity = 0;
        interval = 1;
        lifeTime = 0.08;
    };
    class RHS_KPVT_Flash {
        simulation = "particles";
        type = "RHS_KPVT_Flash";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
    };
    class MachineGunCloud1 {
        simulation = "particles";
        type = "MachineGunCloud1";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
    };
    class MachineGunDust1 {
        simulation = "particles";
        type = "MachineGunDust1";
        position[] = {0, 0, 0};
        enabled = "(humidity interpolate [0.2,0.20001,1,0]) * isWaterSurface";
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
    };
};
class RHS_Tank_Catridge {
    class RHS_Tank_Catridge {
        simulation = "particles";
        type = "RHS_Tank_Catridge";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 5;
        lifeTime = 0.05;
        qualityLevel = 2;
    };
    class RHS_Tank_CatridgeMed {
        simulation = "particles";
        type = "RHS_Tank_Catridge";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
        qualityLevel = 1;
    };
};
class RHS_30mm_Catridge {
    class RHS_30mm_Catridge {
        simulation = "particles";
        type = "RHS_30mm_Catridge";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
        qualityLevel = 2;
    };
    class RHS_30mm_CatridgeMed {
        simulation = "particles";
        type = "RHS_30mm_Catridge";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
        qualityLevel = 1;
    };
};
class RHS_30mm_Catridge_Simulated {
    class RHS_30mm_Catridge {
        simulation = "epeparticles";
        type = "RHS_30mm_Catridge";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
    };
};
class RHS_23mm_Catridge {
    class RHS_30mm_Catridge {
        simulation = "particles";
        type = "RHS_23mm_Catridge";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
        qualityLevel = 2;
    };
    class RHS_30mm_CatridgeMed {
        simulation = "particles";
        type = "RHS_23mm_Catridge";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
        qualityLevel = 1;
    };
};
class RHS_145mm_Catridge {
    class RHS_30mm_Catridge {
        simulation = "particles";
        type = "RHS_145mm_Catridge";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
        qualityLevel = 2;
    };
    class RHS_30mm_CatridgeMed {
        simulation = "particles";
        type = "RHS_145mm_Catridge";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
        qualityLevel = 1;
    };
};
class RHS_23mm_AmmoBeltLink {
    class MachineGunEject1 {
        simulation = "particles";
        type = "RHS_23mm_AmmoBeltLink";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
    };
};
class RHS_ATGM_Cap {
    class RHS_30mm_Catridge {
        simulation = "particles";
        type = "RHS_ATGM_Cap";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
        qualityLevel = 2;
    };
    class RHS_30mm_CatridgeMed {
        simulation = "particles";
        type = "RHS_ATGM_Cap";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
        qualityLevel = 1;
    };
};
class RHS_ATGM_Cap_x2 {
    class RHS_30mm_Catridge {
        simulation = "particles";
        type = "RHS_ATGM_Cap_x2";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
        qualityLevel = 2;
    };
    class RHS_30mm_CatridgeMed {
        simulation = "particles";
        type = "RHS_ATGM_Cap_x2";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
        qualityLevel = 1;
    };
};
class RHS_NukeExplosion5 {
    class Cone {
        simulation = "particles";
        type = "RHS_NukeConeFire";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 5;
    };
    class SmokeBottom {
        simulation = "particles";
        type = "RHS_NukeConeSmokeBottom";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 17;
    };
    class SmokeTop {
        simulation = "particles";
        type = "RHS_NukeConeSmokeTop";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 6;
    };
    class Smoke {
        simulation = "particles";
        type = "RHS_NukeSmokeChimney";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 7;
    };
    class Light {
        simulation = "light";
        type = "RHS_LightNuke";
        position[] = {0, 0, 0};
        intensity = 0.1;
        interval = 1;
        lifeTime = 4;
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
class RHS_3D17ParticleTail {
    class RHS_3D17TrailEffect {
        simulation = "particles";
        type = "RHS_3D17TrailEffect";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = "2.4 + random 0.5";
        qualityLevel = 0;
    };
    class RHS_3D17TrailEffect1: RHS_3D17TrailEffect {
        type = "RHS_3D17TrailEffect1";
        qualityLevel = 1;
    };
    class RHS_3D17TrailEffect2: RHS_3D17TrailEffect {
        type = "RHS_3D17TrailEffect2";
        qualityLevel = 2;
    };
    class RHS_3D17TrailEffectLong {
        simulation = "particles";
        type = "RHS_3D17TrailEffectLong";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = "2.4 + random 0.5";
        qualityLevel = 0;
    };
    class RHS_3D17TrailEffectLong1: RHS_3D17TrailEffectLong {
        type = "RHS_3D17TrailEffectLong1";
        qualityLevel = 1;
    };
    class RHS_3D17TrailEffectLong2: RHS_3D17TrailEffectLong {
        type = "RHS_3D17TrailEffectLong2";
        qualityLevel = 2;
    };
    class RHS_3D17SparksLight {
        simulation = "light";
        type = "RHS_3D17SparksLight";
        position[] = {0, 0, 0};
        intensity = 0.001;
        interval = 1;
        lifeTime = "0 + random 3";
        qualityLevel = 1;
    };
    class RHS_3D17SparksLight2: RHS_3D17SparksLight {
        qualityLevel = 2;
    };
};
class RHS_3D17ParticleTail_902B: RHS_3D17ParticleTail {
    class RHS_3D17TrailEffect {
        simulation = "particles";
        type = "RHS_3D17TrailEffect";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = "2 + random 0.5";
        qualityLevel = 0;
    };
    class RHS_3D17TrailEffect1: RHS_3D17TrailEffect {
        type = "RHS_3D17TrailEffect1";
        qualityLevel = 1;
    };
    class RHS_3D17TrailEffect2: RHS_3D17TrailEffect {
        type = "RHS_3D17TrailEffect2";
        qualityLevel = 2;
    };
    class RHS_3D17TrailEffectLong {
        simulation = "particles";
        type = "RHS_3D17TrailEffectLong";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = "2 + random 0.5";
        qualityLevel = 0;
    };
    class RHS_3D17TrailEffectLong1: RHS_3D17TrailEffectLong {
        type = "RHS_3D17TrailEffectLong1";
        qualityLevel = 1;
    };
    class RHS_3D17TrailEffectLong2: RHS_3D17TrailEffectLong {
        type = "RHS_3D17TrailEffectLong2";
        qualityLevel = 2;
    };
    class RHS_3D17SparksLight {
        simulation = "light";
        type = "RHS_3D17SparksLight";
        position[] = {0, 0, 0};
        intensity = 0.001;
        interval = 1;
        lifeTime = "0 + random 3";
        qualityLevel = 1;
    };
};
class RHS_3D17ParticleLight {
    class RHS_3D17SparksLight {
        simulation = "light";
        type = "RHS_3D17SparksLight";
        position[] = {0, 0, 0};
        intensity = 0.001;
        interval = 1;
        lifeTime = "1 + random 2";
    };
};
class RHS_3D17Effect {
    class ExplosionLight {
        simulation = "light";
        type = "RHS_3D17ExplosionLight";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class ExplosionSparksBig {
        simulation = "particles";
        type = "RHS_3D17SparksBig";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.1;
        qualityLevel = 2;
    };
    class ExplosionSparksSlow {
        simulation = "particles";
        type = "RHS_3D17SparksSlow";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.1;
        qualityLevel = 2;
    };
    class ExplosionSparksTail {
        simulation = "particles";
        type = "RHS_3D17SparksTail";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.2;
    };
    class ExplosionSparksSmall {
        simulation = "particles";
        type = "RHS_3D17SparksSmall";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
        qualityLevel = 0;
    };
    class ExplosionSparksSmall1: ExplosionSparksSmall {
        lifeTime = 0.075;
        qualityLevel = 1;
    };
    class ExplosionSparksSmall2: ExplosionSparksSmall {
        lifeTime = 0.1;
        qualityLevel = 2;
    };
    class ExplosionSparksBack {
        simulation = "particles";
        type = "RHS_3D17SparksBack";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
    };
    class ExplosionCloud {
        simulation = "particles";
        type = "RHS_3D17ExplosionCloud";
        position[] = {0, 0, 0.5};
        intensity = 1;
        interval = 1;
        lifeTime = 0.2;
    };
    class GrenadeExp1 {
        simulation = "particles";
        type = "GrenadeExp";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.5;
    };
};
class RHS_3D17Effect_902B {
    class ExplosionLight {
        simulation = "light";
        type = "RHS_3D17ExplosionLight";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class ExplosionSparksBig {
        simulation = "particles";
        type = "RHS_3D17SparksBig";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.1;
        qualityLevel = 2;
    };
    class ExplosionSparksSlow {
        simulation = "particles";
        type = "RHS_3D17SparksSlow";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.1;
        qualityLevel = 2;
    };
    class ExplosionSparksTail {
        simulation = "particles";
        type = "RHS_3D17SparksTail_902B";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.2;
    };
    class ExplosionSparksSmall {
        simulation = "particles";
        type = "RHS_3D17SparksSmall";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
        qualityLevel = 0;
    };
    class ExplosionSparksBack {
        simulation = "particles";
        type = "RHS_3D17SparksBack";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
    };
    class ExplosionSparksSmall1: ExplosionSparksSmall {
        lifeTime = 0.075;
        qualityLevel = 1;
    };
    class ExplosionSparksSmall2: ExplosionSparksSmall {
        lifeTime = 0.1;
        qualityLevel = 2;
    };
    class ExplosionCloud {
        simulation = "particles";
        type = "RHS_3D17ExplosionCloud";
        position[] = {0, 0, 0.5};
        intensity = 1;
        interval = 1;
        lifeTime = 0.2;
    };
    class GrenadeExp1 {
        simulation = "particles";
        type = "GrenadeExp";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.5;
    };
};
class RHS_D832DUParticleTail {
    class RHS_D832DUTrailEffect {
        simulation = "particles";
        type = "RHS_D832DUTrailEffect";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = "2.4 + random 0.5";
        qualityLevel = 0;
    };
    class RHS_D832DUTrailEffect1: RHS_D832DUTrailEffect {
        type = "RHS_D832DUTrailEffect1";
        qualityLevel = 1;
    };
    class RHS_D832DUTrailEffect2: RHS_D832DUTrailEffect {
        type = "RHS_D832DUTrailEffect2";
        qualityLevel = 2;
    };
    class RHS_D832DUTrailEffectLong {
        simulation = "particles";
        type = "RHS_D832DUTrailEffectLong";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = "2.4 + random 0.5";
        qualityLevel = 0;
    };
    class RHS_D832DUTrailEffectLong1: RHS_D832DUTrailEffectLong {
        type = "RHS_D832DUTrailEffectLong1";
        qualityLevel = 1;
    };
    class RHS_D832DUTrailEffectLong2: RHS_D832DUTrailEffectLong {
        type = "RHS_D832DUTrailEffectLong2";
        qualityLevel = 2;
    };
    class RHS_3D17SparksLight {
        simulation = "light";
        type = "RHS_3D17SparksLight";
        position[] = {0, 0, 0};
        intensity = 0.001;
        interval = 1;
        lifeTime = "0 + random 3";
        qualityLevel = 1;
    };
    class RHS_3D17SparksLight2: RHS_3D17SparksLight {
        qualityLevel = 2;
    };
};
class RHS_D832DUEffect {
    class ExplosionLight {
        simulation = "light";
        type = "RHS_3D17ExplosionLight";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class ExplosionSparksBig {
        simulation = "particles";
        type = "RHS_3D17SparksBig";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.1;
        qualityLevel = 2;
    };
    class ExplosionSparksSlow {
        simulation = "particles";
        type = "RHS_3D17SparksSlow";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.1;
        qualityLevel = 2;
    };
    class ExplosionSparksTail {
        simulation = "particles";
        type = "RHS_D832DUSparksTail";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.2;
    };
    class ExplosionSparksSmall {
        simulation = "particles";
        type = "RHS_3D17SparksSmall";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
        qualityLevel = 0;
    };
    class ExplosionSparksSmall1: ExplosionSparksSmall {
        lifeTime = 0.075;
        qualityLevel = 1;
    };
    class ExplosionSparksSmall2: ExplosionSparksSmall {
        lifeTime = 0.1;
        qualityLevel = 2;
    };
    class ExplosionSparksBack {
        simulation = "particles";
        type = "RHS_3D17SparksBack";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
    };
    class ExplosionCloud {
        simulation = "particles";
        type = "RHS_D832DUExplosionCloud";
        position[] = {0, 0, 0.5};
        intensity = 1;
        interval = 1;
        lifeTime = 0.2;
    };
    class GrenadeExp1 {
        simulation = "particles";
        type = "GrenadeExp";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.5;
    };
};
class RHS_D832DUBurnEffect {
    class SmokeShellWhite {
        simulation = "particles";
        type = "SmokeShellWhiteSmall";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
    };
    class Flare1 {
        simulation = "particles";
        type = "FlareShell";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 60;
    };
    class Light1 {
        simulation = "light";
        type = "RHS_SmokeWPLight";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 60;
    };
    class Fire {
        simulation = "particles";
        type = "RHS_SmokeWP_Fire";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 60;
    };
    class Fire2 {
        simulation = "particles";
        type = "RHS_SmokeWP_Fire2";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 60;
    };
    class FireSparks {
        simulation = "particles";
        type = "RHS_Incendiary_FireSparks";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 60;
    };
};
class RHS_Airburst_Explosion {
    class LightExp {
        simulation = "light";
        type = "ExploLight";
        position[] = {0, 1.5, 0};
        intensity = 0.001;
        interval = 1;
        lifeTime = 0.5;
    };
    class Explosion1 {
        simulation = "particles";
        type = "VehExplosionParticles";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.2;
    };
    class Explosion2 {
        simulation = "particles";
        type = "FireBallBright";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class Smoke1 {
        simulation = "particles";
        type = "VehExpSmoke";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class SmallSmoke1 {
        simulation = "particles";
        type = "VehExpSmoke2";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
};
class RHS_D30_Fired {
    class CannonFired3 {
        simulation = "particles";
        type = "CannonFired3";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        qualityLevel = 2;
    };
    class CannonFired3Med {
        simulation = "particles";
        type = "CannonFired3";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        qualityLevel = 1;
    };
    class CannonFiredDust1 {
        simulation = "particles";
        type = "CircleDustTankBig";
        enabled = "(distToSurface interpolate [10.099,10.1,1,-1])";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.5;
    };
    class CannonFiredDust2 {
        simulation = "particles";
        type = "CircleDustTankSmall";
        enabled = "(distToSurface interpolate [10.099,10.1,1,-1])";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.5;
    };
    class CannonFiredDust3 {
        simulation = "particles";
        type = "CircleDustTankLong";
        enabled = "(distToSurface interpolate [10.099,10.1,1,-1])";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.2;
    };
};
class RHS_AutoCannonFired {
    class MachineGun2 {
        simulation = "particles";
        type = "RHS_MachineGun2";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
    };
    class Light1 {
        simulation = "light";
        type = "FiredLightSmall";
        position[] = {0, 0, 0};
        intensity = 0;
        interval = 1;
        lifeTime = 0.08;
    };
    class AutoCannonFired {
        simulation = "particles";
        type = "RHS_AutoCannon_Fired";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
    };
};
class RHS_2A28_Fired {
    class MachineGun2 {
        simulation = "particles";
        type = "RHS_MachineGun2";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
    };
    class Light1 {
        simulation = "light";
        type = "FiredLightSmall";
        position[] = {0, 0, 0};
        intensity = 0;
        interval = 1;
        lifeTime = 0.08;
    };
    class AutoCannonFired {
        simulation = "particles";
        type = "RHS_2A28_Fired";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
    };
    class CannonFired3 {
        simulation = "particles";
        type = "RHS_2A28_Fired2";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.4;
        qualityLevel = 2;
    };
};
class RHS_2A42_Fired {
    class Light1 {
        simulation = "light";
        type = "FiredLightSmall";
        position[] = {0, 0, 0};
        intensity = 0;
        interval = 1;
        lifeTime = 0.08;
    };
    class AutoCannonFired {
        simulation = "particles";
        type = "RHS_2A42_Fired";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
    };
};
class RHS_YakB_Catridge {
    class MachineGunCartridge1 {
        simulation = "particles";
        type = "RHS_YakB_Catridge";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
        qualityLevel = 2;
    };
    class MachineGunCartridge1Med {
        simulation = "particles";
        type = "RHS_YakB_Catridge";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
        qualityLevel = 1;
    };
};
class RHS_HeavyBombCrater {
    class BombSmk1 {
        simulation = "particles";
        type = "RHS_HeavyBombSmk1";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 1.7;
    };
    class BombSmk2 {
        simulation = "particles";
        type = "RHS_HeavyBombSmk2";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 1.7;
    };
    class BombSmk3 {
        simulation = "particles";
        type = "RHS_HeavyBombSmk3";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 6;
    };
    class BombDust {
        simulation = "particles";
        type = "BombDust";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 3;
    };
};
class RHS_HeavyBombExplosion {
    class ExpSparksBig {
        simulation = "particles";
        type = "ExpSparks";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.5;
    };
    class ShardsBig {
        simulation = "particles";
        type = "ObjectDestructionShards";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class ShardsBig1 {
        simulation = "particles";
        type = "ObjectDestructionShards1";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class ShardsBig2 {
        simulation = "particles";
        type = "ObjectDestructionShards2";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class ShardsBig3 {
        simulation = "particles";
        type = "ObjectDestructionShards3";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class ShardsBigBurn {
        simulation = "particles";
        type = "ObjectDestructionShardsBurning";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class ShardsBigBurn1 {
        simulation = "particles";
        type = "ObjectDestructionShardsBurning1";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class ShardsBigBurn2 {
        simulation = "particles";
        type = "ObjectDestructionShardsBurning2";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class ShardsBigBurn3 {
        simulation = "particles";
        type = "ObjectDestructionShardsBurning3";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class LightExpBig {
        simulation = "light";
        type = "ExploLight";
        position[] = {0, 1.5, 0};
        intensity = 0.001;
        interval = 1;
        lifeTime = 0.5;
    };
    class Explosion1Big {
        simulation = "particles";
        type = "VehExplosionParticles";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.2;
    };
    class BombExp1 {
        simulation = "particles";
        type = "RHS_BombExp1";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.2;
    };
    class Smoke1Big {
        simulation = "particles";
        type = "VehExpSmoke";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class SmallSmoke1Big {
        simulation = "particles";
        type = "VehExpSmoke2";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
};
class RHS_MissileExplosion {
    class ExpSparksBig {
        simulation = "particles";
        type = "ExpSparks";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.5;
    };
    class ShardsBig {
        simulation = "particles";
        type = "ObjectDestructionShards";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class ShardsBig1 {
        simulation = "particles";
        type = "ObjectDestructionShards1";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class ShardsBig2 {
        simulation = "particles";
        type = "ObjectDestructionShards2";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class ShardsBig3 {
        simulation = "particles";
        type = "ObjectDestructionShards3";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class ShardsBigBurn {
        simulation = "particles";
        type = "ObjectDestructionShardsBurning";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class ShardsBigBurn1 {
        simulation = "particles";
        type = "ObjectDestructionShardsBurning1";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class ShardsBigBurn2 {
        simulation = "particles";
        type = "ObjectDestructionShardsBurning2";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class ShardsBigBurn3 {
        simulation = "particles";
        type = "ObjectDestructionShardsBurning3";
        position = "";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class LightExpBig {
        simulation = "light";
        type = "ExploLight";
        position[] = {0, 1.5, 0};
        intensity = 0.001;
        interval = 1;
        lifeTime = 0.5;
    };
    class Explosion1Big {
        simulation = "particles";
        type = "VehExplosionParticles";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.2;
    };
    class Explosion2Big {
        simulation = "particles";
        type = "FireBallBright";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class BombExp1 {
        simulation = "particles";
        type = "RHS_BombExp1";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.2;
    };
    class Smoke1Big {
        simulation = "particles";
        type = "VehExpSmoke";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class SmallSmoke1Big {
        simulation = "particles";
        type = "VehExpSmoke2";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
};
class RHS_CounterMeasureFlare {
    class Cmeasures1 {
        simulation = "particles";
        type = "Cmeasures1";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 4.5;
        qualityLevel = 2;
    };
    class Cmeasures1M {
        simulation = "particles";
        type = "Cmeasures1M";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 4.5;
        qualityLevel = 1;
    };
    class Cmeasures1L {
        simulation = "particles";
        type = "Cmeasures1L";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 4.5;
        qualityLevel = 0;
    };
    class Cmeasures2 {
        simulation = "particles";
        type = "Cmeasures2";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 3.2;
    };
    class Light1 {
        simulation = "light";
        type = "CmeasuresLight";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 3;
    };
};
class RHS_Incendiary_Bomb {
    class Flare1 {
        simulation = "particles";
        type = "Flare1";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
    };
    class SmokeShell {
        simulation = "particles";
        type = "SmokeShellWhite";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
    };
    class Fire {
        simulation = "particles";
        type = "RHS_Incendiary_Fire";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
    };
    class FireSparks {
        simulation = "particles";
        type = "RHS_Incendiary_FireSparks";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
    };
};
class RHS_Rocket_Fired {
    class Light1 {
        simulation = "light";
        type = "RocketLight";
        position[] = {0, 0, 0};
        intensity = 0.01;
        interval = 1;
        lifeTime = 1;
    };
    class Missile {
        simulation = "particles";
        type = "RHS_Rocket_Fired";
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
class RHS_Rocket_Init {
    class RocketBackfire1 {
        simulation = "particles";
        type = "RHS_Rocket_Init_Fire";
        start = 1;
    };
    class MissileDARSmoke: RocketBackfire1 {
        simulation = "particles";
        type = "RHS_Rocket_Init_Smoke";
    };
};
class RHS_ExhaustsEffectPlaneHP {
    class ExhaustsEffect01 {
        simulation = "particles";
        type = "RHS_ExhaustSmoke1PlaneHP";
    };
    class ExhaustsEffectRefract01 {
        simulation = "particles";
        type = "ExhaustSmokeRefractPlane";
    };
};
class RHS_ATGM_Pusher_Eject {
    class ATGM_Pusher {
        simulation = "particles";
        type = "RHS_ATGM_Pusher_Eject";
        start = 1;
    };
};
class RHS_125mm_Sabot_Eject {
    class FX_1 {
        simulation = "particles";
        type = "RHS_125mm_Sabot_1_Eject";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        enabled = "flyTime interpolate [0,0.2,1,-1]";
    };
    class FX_2: FX_1 {
        type = "RHS_125mm_Sabot_2_Eject";
    };
    class FX_3: FX_1 {
        type = "RHS_125mm_Sabot_3_Eject";
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
class CfgMagazineWells {
    class RHS_Cannon_100mm_2A70 {
        RHS_125mm_AP_Magazines[] = {"rhs_mag_3UOF17_22", "rhs_mag_3UOF19_22", "rhs_mag_3UOF191_22"};
        RHS_125mm_ATGM_Magazines[] = {
            "rhs_mag_9m117_3",
            "rhs_mag_9m117_8",
            "rhs_mag_9m117m_3",
            "rhs_mag_9m117m_8",
            "rhs_mag_9m117m1_3",
            "rhs_mag_9m117m1_8"
        };
    };
    class RHS_Cannon_125mm_D81 {
        RHS_125mm_AP_Magazines[] = {
            "rhs_mag_3bm9",
            "rhs_mag_3bm12",
            "rhs_mag_3bm15",
            "rhs_mag_3bm17",
            "rhs_mag_3bm22",
            "rhs_mag_3bm26",
            "rhs_mag_3bm29",
            "rhs_mag_3bm32",
            "rhs_mag_3bm42",
            "rhs_mag_3bm46",
            "rhs_mag_3bm9_10",
            "rhs_mag_3bm12_10",
            "rhs_mag_3bm15_10",
            "rhs_mag_3bm17_10",
            "rhs_mag_3bm17_14",
            "rhs_mag_3bm22_10",
            "rhs_mag_3bm22_14",
            "rhs_mag_3bm26_10",
            "rhs_mag_3bm26_7",
            "rhs_mag_3bm29_10",
            "rhs_mag_3bm29_7",
            "rhs_mag_3bm32_10",
            "rhs_mag_3bm32_7",
            "rhs_mag_3bm42_10",
            "rhs_mag_3bm42_7",
            "rhs_mag_3bm42m_10",
            "rhs_mag_3bm46_10",
            "rhs_mag_3bm46_8"
        };
        RHS_125mm_HEAT_Magazines[] = {
            "rhs_mag_3bk12",
            "rhs_mag_3bk14",
            "rhs_mag_3bk18",
            "rhs_mag_3bk18m",
            "rhs_mag_3bk21",
            "rhs_mag_3bk29",
            "rhs_mag_3bk31",
            "rhs_mag_dummy",
            "rhs_mag_3bk12_8",
            "rhs_mag_3bk14_8",
            "rhs_mag_3bk14_6",
            "rhs_mag_3bk18_8",
            "rhs_mag_3bk18_6",
            "rhs_mag_3bk18m_8",
            "rhs_mag_3bk18m_6",
            "rhs_mag_3bk21_8",
            "rhs_mag_3bk29_8",
            "rhs_mag_3bk31_8",
            "rhs_mag_3bk31_6",
            "rhs_mag_3bk31_3"
        };
        RHS_125mm_HE_Magazines[] = {
            "rhs_mag_3of11",
            "rhs_mag_3of26",
            "rhs_mag_3of11_6",
            "rhs_mag_3of26_7",
            "rhs_mag_3of26_6",
            "rhs_mag_3of26_5"
        };
        RHS_125mm_ATGM_Magazines[] = {
            "rhs_mag_9m112",
            "rhs_mag_9m112m",
            "rhs_mag_9m112m2",
            "rhs_mag_9m124",
            "rhs_mag_9m128",
            "rhs_mag_9m119",
            "rhs_mag_9m119rx",
            "rhs_mag_9m119m",
            "rhs_mag_9m119f",
            "rhs_mag_9m112_6",
            "rhs_mag_9m112m_6",
            "rhs_mag_9m112m_4",
            "rhs_mag_9m112m2_6",
            "rhs_mag_9m124_6",
            "rhs_mag_9m128_6",
            "rhs_mag_9m119_4",
            "rhs_mag_9m119_6",
            "rhs_mag_9m119rx_6",
            "rhs_mag_9m119m_6",
            "rhs_mag_9m119f_6"
        };
    };
    class RHS_Cannon_125mm_2A46M {
        RHS_125mm_ATGM_Magazines[] = {
            "rhs_mag_9m112",
            "rhs_mag_9m112m",
            "rhs_mag_9m112m2",
            "rhs_mag_9m124",
            "rhs_mag_9m128",
            "rhs_mag_9m119",
            "rhs_mag_9m119rx",
            "rhs_mag_9m119m",
            "rhs_mag_9m119f",
            "rhs_mag_9m112_6",
            "rhs_mag_9m112m_6",
            "rhs_mag_9m112m_4",
            "rhs_mag_9m112m2_6",
            "rhs_mag_9m124_6",
            "rhs_mag_9m128_6",
            "rhs_mag_9m119_6",
            "rhs_mag_9m119rx_6",
            "rhs_mag_9m119m_6",
            "rhs_mag_9m119f_6"
        };
    };
    class RHS_Cannon_125mm_2A46M_5 {
        RHS_125mm_AP_Magazines[] = {
            "rhs_mag_3bm59",
            "rhs_mag_3bm60",
            "rhs_mag_3bm59_10",
            "rhs_mag_3bm60_10"
        };
    };
    class RHS_Cannon_125mm_2A82 {
        RHS_125mm_AP_Magazines[] = {
            "rhs_mag_3bm69",
            "rhs_mag_3bm70",
            "rhs_mag_3bm69_10",
            "rhs_mag_3bm69_17",
            "rhs_mag_3bm70_10"
        };
    };
    class RHS_AutoCannon_30mm_2A42_AP {
        RHS_30mm_AP_Magazines[] = {
            "rhs_mag_3ubr6_100",
            "rhs_mag_3ubr6_120",
            "rhs_mag_3ubr6_125",
            "rhs_mag_3ubr6_150",
            "rhs_mag_3ubr6_160",
            "rhs_mag_3ubr6_195",
            "rhs_mag_3ubr6_227",
            "rhs_mag_3ubr6_230",
            "rhs_mag_3ubr6_250",
            "rhs_mag_3ubr8_100",
            "rhs_mag_3ubr8_120",
            "rhs_mag_3ubr8_125",
            "rhs_mag_3ubr8_150",
            "rhs_mag_3ubr8_160",
            "rhs_mag_3ubr8_195",
            "rhs_mag_3ubr8_227",
            "rhs_mag_3ubr8_230",
            "rhs_mag_3ubr8_250",
            "rhs_mag_3ubr11_100",
            "rhs_mag_3ubr11_120",
            "rhs_mag_3ubr11_125",
            "rhs_mag_3ubr11_150",
            "rhs_mag_3ubr11_160",
            "rhs_mag_3ubr11_195",
            "rhs_mag_3ubr11_227",
            "rhs_mag_3ubr11_230",
            "rhs_mag_3ubr11_250"
        };
    };
    class RHS_AutoCannon_30mm_2A42_HE {
        RHS_30mm_HE_Magazines[] = {
            "rhs_mag_3uor6_125",
            "rhs_mag_3uor6_150",
            "rhs_mag_3uor6_180",
            "rhs_mag_3uor6_200",
            "rhs_mag_3uor6_230",
            "rhs_mag_3uor6_237",
            "rhs_mag_3uor6_250",
            "rhs_mag_3uor6_305",
            "rhs_mag_3uor6_305",
            "rhs_mag_3uor6_340",
            "rhs_mag_3uof8_125",
            "rhs_mag_3uof8_150",
            "rhs_mag_3uof8_180",
            "rhs_mag_3uof8_200",
            "rhs_mag_3uof8_230",
            "rhs_mag_3uof8_237",
            "rhs_mag_3uof8_250",
            "rhs_mag_3uof8_305",
            "rhs_mag_3uof8_305",
            "rhs_mag_3uof8_340"
        };
    };
};
class CfgVehicles {
    class House;
    class ThingX;
    class rhs_casing_30mm: House {
        model = "\rhsafrf\addons\rhs_c_heavyweapons\rhs_casing_30mm.p3d";
        displayName = "Cartridge";
        nameSound = "";
        destrType = "DestructNo";
        mapSize = 0.7;
        accuracy = 0.2;
        armor = 5;
        scope = 1;
    };
    class rhs_casing_122mm: ThingX {
        scope = 2;
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_casing_122mm.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "122mm Artilery Casing";
        editorCategory = "EdCat_Things";
        editorSubcategory = "EdSubcat_Military";
        vehicleClass = "Small_items";
        model = "\rhsafrf\addons\rhs_c_heavyweapons\rhs_casing_122mm.p3d";
    };
    class rhs_weap_9m113_used: rhs_casing_122mm {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_weap_9m113_used.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "9M113 Used Tube";
        model = "\rhsafrf\addons\rhs_heavyweapons\atgm\rhs_9m113_emptytube";
    };
    class rhs_weap_9m111_used: rhs_weap_9m113_used {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_weap_9m111_used.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "9M111 Used Tube";
        model = "\rhsafrf\addons\rhs_heavyweapons\atgm\rhs_9m113_emptytube";
    };
    class rhs_weap_9K115_launcher_used: rhs_weap_9m111_used {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_weap_9K115_launcher_used.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "9K115 Used Tube";
        model = "\rhsafrf\addons\rhs_heavyweapons\atgm\rhs_metis_emptytube";
    };
    class rhs_weap_9K133_launcher_used: rhs_weap_9m111_used {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_weap_9K133_launcher_used.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "9K133 Used Tube";
        model = "\rhsafrf\addons\rhs_heavyweapons\atgm\rhs_kornet_emptytube";
    };
    class LandVehicle;
    class StaticWeapon: LandVehicle {
        class Turrets {
            class MainTurret;
        };
        class EventHandlers;
        class ViewPilot;
        class VehicleTransport {
            class Cargo {
                canBeTransported = 0;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
        };
    };
    class StaticMGWeapon: StaticWeapon {};
    class StaticATWeapon: StaticWeapon {};
    class StaticAAWeapon: StaticWeapon {};
    class StaticCannon: StaticWeapon {
        class ViewOptics;
    };
    class StaticGrenadeLauncher: StaticWeapon {
        class ViewOptics;
    };
    class StaticMortar: StaticWeapon {};
    class Helicopter;
    class Helicopter_Base_F: Helicopter {
        class EventHandlers;
    };
    class RHS_TowedWeapons_Base: Helicopter_Base_F {
        simulation = "helicopterX";
        destrType = "DestructDefault";
        armor = 80;
        armorStructural = 50;
        epeImpulseDamageCoef = 1;
        gearRetracting = 1;
        hasDriver = 0;
        secondaryExplosion = 0;
        fuelExplosionPower = 0;
        disableInventory = 1;
        class Hitpoints {};
        class Reflectors {};
        class Turrets {};
        class UserActions {
            class Detach: RHS_UserAction_Towing_Detach {};
        };
        class EventHandlers: EventHandlers {
            killed = "_this call rhs_fnc_towing_destroyed";
        };
    };
    class RHS_FakeCarrier: StaticWeapon {
        scope = 1;
        model = "\rhsafrf\addons\rhs_heavyweapons\data\rhs_fakeTow";
        accuracy = 1000;
        hiddenSelections[] = {"Camo_1"};
        class Turrets {};
        class RHS_TowingSystem {
            class Carrier {
                rhs_maxCargoMass = 9999;
                rhs_attachPoint = "";
                rhs_attachPointPos[] = {0, 0, 0};
            };
        };
    };
    class RHS_ZU23_base: StaticCannon {
        dlc = "RHS_AFRF";
        mapSize = 2.5;
        displayname = "ZU-23-2";
        model = "\rhsafrf\addons\rhs_heavyweapons\ZU23\rhs_zu23";
        class Library {
            libTextDesc = "ZU-23-2";
        };
        icon = "\rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_zu23_CA.paa";
        picture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\RHS_ZU23_MSV_ca.paa";
        transportSoldier = 0;
        memoryPointsGetInCargo = "pos_cargo_dir";
        memoryPointsGetInCargoDir = "pos_cargo";
        memoryPointsGetInDriver = "pos_driver_dir";
        memoryPointsGetInDriverDir = "pos_driver";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        class Hitpoints {
            class HitHull {
                armor = 1;
                passThrough = 1;
                name = "telo";
            };
        };
        armorStructural = 4;
        explosionShielding = 0.5;
        memoryPointTaskMarker = "TaskMarker_1_pos";
        slingLoadCargoMemoryPoints[] = {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4",
            "SlingLoadCargo5"
        };
        class ViewPilot: ViewPilot {
            initAngleX = -0;
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
        class CargoTurret;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                minTurn = -180;
                maxTurn = 180;
                initTurn = 0;
                minElev = -10;
                maxElev = 85;
                initElev = 0;
                maxHorizontalRotSpeed = 0.55;
                maxVerticalRotSpeed = 0.35;
                weapons[] = {"rhs_weap_2A14"};
                canUseScanner = 0;
                magazines[] = {
                    "RHS_mag_AZP23_100",
                    "RHS_mag_AZP23_100",
                    "RHS_mag_AZP23_100",
                    "RHS_mag_AZP23_100",
                    "RHS_mag_AZP23_100",
                    "RHS_mag_AZP23_100"
                };
                gunnerAction = "RHS_Zu23_Gunner";
                gunnerInAction = "RHS_Zu23_Gunner";
                gunnerGetInAction = "GetInHeli_Transport_01Cargo";
                gunnerLeftHandAnimName = "handle_elev_hand";
                gunnerRightHandAnimName = "handle_trav_hand";
                gunnerLeftLegAnimName = "otocVez";
                gunnerRightLegAnimName = "otocVez";
                animationSourceStickX = "MainTurret_Inertia";
                animationSourceStickY = "MainGun_Inertia";
                selectionFireAnim = "zasleh";
                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_t3_scope";
                soundServo[] = {
                    "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\btr80\btr_turret",
                    1.4,
                    1,
                    30
                };
                soundServoVertical[] = {
                    "rhsafrf\addons\rhs_vehiclesounds\sounds\soft\btr80\btr_turret_elev",
                    2,
                    1,
                    30
                };
                gunnerOpticsEffect[] = {"OpticsCHAbera1", "OpticsBlur2"};
                gunnerForceOptics = 0;
                memoryPointGun[] = {"muzzle_1", "muzzle_2"};
                lodTurnedIn = 0;
                lodTurnedOut = 0;
                turretInfoType = "RHS_RscWeaponZU23_T3_Optic";
                class ViewGunner {
                    initAngleX = 0;
                    initAngleY = -9;
                    minAngleX = -30;
                    maxAngleX = 30;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                class ViewOptics {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.093;
                    minFov = 0.093;
                    maxFov = 0.093;
                };
                class OpticsIn {
                    class Collimator: ViewOptics {
                        opticsDisplayName = "COLLIMATOR";
                        initFov = 0.636364;
                        minFov = 0.636364;
                        maxFov = 0.636364;
                        gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                    };
                    class CollimatorZoom: Collimator {
                        initFov = 0.35;
                        minFov = 0.35;
                        maxFov = 0.35;
                    };
                    class T3_Optic {
                        opticsDisplayName = "T3";
                        camPos = "commanderview";
                        camDir = "view_t3_dir";
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.2;
                        minFov = 0.2;
                        maxFov = 0.2;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_t3_scope.p3d";
                    };
                };
                disableSoundAttenuation = 1;
                class HitPoints {
                    class HitTurret {
                        armor = -100;
                        material = -1;
                        name = "Hit_Turret";
                        armorComponent = "Hit_Turret";
                        visual = "vez";
                        passThrough = 0.015;
                        minimalHit = -0.2;
                        explosionShielding = 0.1;
                        radius = 0.1;
                    };
                    class HitGun {
                        armor = -100;
                        material = -1;
                        name = "Hit_Gun";
                        armorComponent = "Hit_Gun";
                        visual = "-";
                        passThrough = 0.015;
                        minimalHit = -0.2;
                        explosionShielding = 0.1;
                        radius = 0.1;
                    };
                    class Hit_Optic_Collimator {
                        armor = -40;
                        explosionShielding = 0;
                        name = "";
                        visual = "vis_optic_TPN4";
                        armorComponent = "Hit_Optic_ESSA";
                        passThrough = 0;
                    };
                    class Hit_Optic_T3 {
                        armor = -40;
                        explosionShielding = 0;
                        name = "";
                        visual = "vis_optic_TPN4";
                        armorComponent = "Hit_Optic_ESSA";
                        passThrough = 0;
                    };
                };
            };
            class CargoTurret_01: CargoTurret {
                gunnerAction = "vehicle_coshooter_1";
                gunnerGetInAction = "GetInHeli_Transport_01Cargo";
                gunnerGetOutAction = "Crouch";
                gunnerReversedGetOut = 0;
                memoryPointsGetInGunner = "pos_cargo";
                memoryPointsGetInGunnerDir = "pos_cargo_dir";
                gunnerName = "Loader";
                primaryObserver = 0;
                dontCreateAI = 0;
                commanding = 1;
                gunnerCompartments = "Compartment1";
                proxyIndex = 1;
                maxElev = 45;
                minElev = -15;
                maxTurn = 64;
                minTurn = -65;
                isPersonTurret = 1;
                gunnerUsesPilotView = 1;
                memorypointgunneroptics = "";
                selectionFireAnim = "";
                lodTurnedIn = 0;
                lodTurnedOut = 0;
                playerPosition = 2;
            };
        };
        class AnimationSources {
            class muzzle_source {
                source = "reload";
                weapon = "rhs_weap_2A14";
            };
            class fire_anim: muzzle_source {
                source = "revolving";
            };
            class muzzleHMG_ROT: muzzle_source {
                source = "ammorandom";
            };
            class ReloadMagazine: muzzle_source {
                source = "reloadmagazine";
            };
            class Unfold {
                displayname = "unfold";
                useSource = 1;
                source = "user";
                animPeriod = 1.6;
                initPhase = 0;
            };
            class maingunT_source {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class mainTurretT_source: maingunT_source {};
            class Elevation {
                source = "user";
                animPeriod = 0.1;
                initPhase = 5;
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base_damage.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base_destruct.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_wheel.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_wheel_damage.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base_destruct.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_damage.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_destruct.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_base.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_base_damage.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_base_destruct.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class UserActions {
            class Fold {
                displayNameDefault = "<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa' size='3.5' /> Static Mode";
                displayName = "<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa' /> Switch to static mode";
                position = "";
                radius = 2.51;
                onlyForplayer = 0;
                priority = 10;
                condition = "(alive this) && (this animationPhase 'Unfold' isEqualTo 1) && {this getVariable ['rhs_heavyWeapon_packing,true]}";
                statement = "[this,0] call rhs_fnc_zu23_pack;";
            };
            class Unfold: Fold {
                priority = 0;
                displayNameDefault = "<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\unloadVehicle_ca.paa' size='3.5' /> Moving Mode";
                displayName = "<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\unloadVehicle_ca.paa' /> Switch to moving mode";
                condition = "(alive this) && ((count (crew this)) == 0) && (this  animationPhase 'Unfold' <= 0.01) && {this getVariable ['rhs_heavyWeapon_packing,true]}";
                statement = "[this,1] call rhs_fnc_zu23_pack;";
            };
            class AttachVehicle: RHS_UserAction_Towing_Attach {
                position = "tow_point";
                condition = "(alive this)&& (this  animationPhase 'Unfold' >= 0.99)";
            };
            class DragVehicle: RHS_UserAction_Towing_Drag {
                position = "tow_point";
                condition = "(alive this) && (this  animationPhase 'Unfold' >= 0.99)";
            };
        };
        class VehicleTransport {
            class Cargo {
                parachuteClass = "O_Parachute_02_F";
                parachuteHeightLimit = 5;
                canBeTransported = 1;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
        };
        class RHS_TowingSystem {
            class Cargo {
                rhs_fakeVehicle = "rhs_ZU23_towingVehicle";
                rhs_animationsOnAttach[] = {"Pins_Raise", 1};
                rhs_animationsOnDetach[] = {"Pins_Raise", 0};
                rhs_towedMass = 420;
                rhs_towingPoint = "tow_point";
                rhs_additionalRopeOffset[] = {0, 0, 0.6};
                rhs_ropeLength = 0.1;
                rhs_maxAttachDistance = 2;
                rhs_dragOffset[] = {0, 0, 0.5};
                rhs_boostCoef = 1;
            };
        };
    };
    class RHS_ZU23_MSV: RHS_ZU23_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_ZU23_MSV.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_rifleman";
        typicalCargo[] = {"rhs_msv_rifleman"};
        class Turrets: Turrets {
            class MainTurret: MainTurret {};
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = "rhs_msv_sergeant";
            };
        };
    };
    class RHS_ZU23_VDV: RHS_ZU23_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_ZU23_VDV.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_rifleman";
        typicalCargo[] = {"rhs_vdv_rifleman"};
        class Turrets: Turrets {
            class MainTurret: MainTurret {};
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = "rhs_vdv_sergeant";
            };
        };
    };
    class RHS_ZU23_VMF: RHS_ZU23_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_ZU23_VDV.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_rifleman";
        typicalCargo[] = {"rhs_vmf_flora_rifleman"};
        class Turrets: Turrets {
            class MainTurret: MainTurret {};
            class CargoTurret_01: CargoTurret_01 {
                gunnerType = "rhs_vmf_flora_sergeant";
            };
        };
    };
    class rhs_ZU23_towingVehicle_base: RHS_TowedWeapons_Base {
        reversed = 0;
        displayname = "ZU23 Tow";
        model = "\rhsafrf\addons\rhs_heavyweapons\ZU23\rhs_zu23";
        driveOnComponent[] = {"wheel_1_physx", "wheel_2_physx"};
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_base_co.paa", "rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_co.paa"};
        class AnimationSources {
            class Pins_Raise {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class Unfold {
                source = "user";
                animPeriod = 1.6;
                initPhase = 1;
            };
            class Wheel_1_source {
                source = "wheel";
                wheel = "Wheel_1";
            };
            class Wheel_2_source {
                source = "wheel";
                wheel = "Wheel_2";
            };
            class maingunT_source {
                source = "user";
                animPeriod = 1;
                initPhase = 0.349066;
            };
            class mainTurretT_source: maingunT_source {
                initPhase = 0;
            };
            class mainturret {
                initPhase = 0;
                animPeriod = 0;
                source = "user";
            };
            class maingun {
                initPhase = 0;
                animPeriod = 0;
                source = "user";
            };
            class fire_anim {
                initPhase = 0;
                animPeriod = 0;
                source = "user";
            };
            class muzzlehmg_rot {
                initPhase = 0;
                animPeriod = 0;
                source = "user";
            };
        };
        maxOmega = 1000;
        maxSpeed = 40;
        differentialType = "all_open";
        frontBias = 1.1;
        class Wheels {
            class Wheel_1 {
                steering = 1;
                side = "left";
                boneName = "damper_front";
                suspForceAppPointOffset = "wheel_1_center";
                tireForceAppPointOffset = "wheel_1_center";
                center = "wheel_1_center";
                boundary = "wheel_1_bound";
                suspTravelDirection[] = {0, -1, 0};
                width = 0.27;
                mass = 115;
                MOI = 46.2413;
                dampingRate = 0.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 0;
                maxHandBrakeTorque = 0;
                maxCompression = 0.1;
                maxDroop = 0.2;
                sprungMass = -1;
                springStrength = 11600;
                springDamperRate = 18280;
                longitudinalStiffnessPerUnitGravity = 15000;
                latStiffX = 12.5;
                latStiffY = 18;
                frictionVsSlipGraph[] = {{0, 15}, {0.5, 5}, {1, 2}};
            };
            class Wheel_2: Wheel_1 {
                steering = 1;
                side = "right";
                boneName = "damper_left";
                suspForceAppPointOffset = "wheel_2_center";
                tireForceAppPointOffset = "wheel_2_center";
                center = "wheel_2_center";
                boundary = "wheel_2_bound";
            };
        };
    };
    class rhs_ZU23_towingVehicle: rhs_ZU23_towingVehicle_base {
        scope = 1;
    };
    class AT_01_base_F: StaticMGWeapon {};
    class rhs_nsv_tripod_base: StaticMGWeapon {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_nsv_tripod_base.paa";
        dlc = "RHS_AFRF";
        model = "\rhsafrf\addons\rhs_heavyweapons\mg\rhs_nsv_tripod";
        icon = "\rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\icomap_kord_CA.paa";
        picture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\rhs_KORD_MSV_ca.paa";
        mapSize = 3;
        displayName = "NSV (6T7)";
        sensorPosition = "gunnerView";
        class Hitpoints {
            class HitHull {
                armor = 1;
                passThrough = 1;
                name = "telo";
            };
        };
        class ViewPilot: ViewPilot {
            initAngleX = -0;
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
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_body.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_body.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_tripod.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_tripod.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\sa_nsvt.rvmat",
                "rhsafrf\addons\rhs_t80\data\materials\sa_nsvt.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                optics = 1;
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
                gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                animationSourceStickX = "MainTurret_Inertia";
                animationSourceStickY = "MainGun_Inertia";
                gunnerLeftHandAnimName = "otochlaven_shake";
                gunnerRightHandAnimName = "otochlaven_shake";
                selectionFireAnim = "zasleh";
                turretInfoType = "RHS_RscWeaponZeroing";
                minElev = -15;
                maxelev = 15;
                maxturn = 30;
                minturn = -30;
                weapons[] = {"rhs_weap_nsvt_effects"};
                magazines[] = {
                    "rhs_mag_127x108mm_50",
                    "rhs_mag_127x108mm_50",
                    "rhs_mag_127x108mm_50",
                    "rhs_mag_127x108mm_50",
                    "rhs_mag_127x108mm_50"
                };
                gunnerAction = "RHS_LowKORD_Gunner";
                gunnerGetInAction = "RHS_StaticWeapon_GetOut_Medium";
                gunnerGetOutAction = "RHS_StaticWeapon_GetOut_Medium";
                disableSoundAttenuation = 1;
            };
        };
        class AnimationSources {
            class ReloadAnim {
                source = "reload";
                weapon = "rhs_weap_nsvt_effects";
            };
            class ReloadMagazine: ReloadAnim {
                source = "reloadmagazine";
            };
            class Revolving: ReloadAnim {
                source = "revolving";
            };
            class muzzleHMG_ROT: ReloadAnim {
                source = "ammorandom";
            };
        };
        armorStructural = 10;
        class assembleInfo {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {"RHS_NSV_Gun_Bag", "RHS_NSV_Tripod_Bag"};
            displayName = "";
        };
    };
    class RHS_NSV_TriPod_MSV: rhs_nsv_tripod_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_NSV_TriPod_MSV.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_rifleman";
        typicalCargo[] = {"rhs_msv_rifleman"};
    };
    class RHS_NSV_TriPod_VDV: rhs_nsv_tripod_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_NSV_TriPod_VDV.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_rifleman";
        typicalCargo[] = {"rhs_vdv_rifleman"};
    };
    class RHS_NSV_TriPod_VMF: rhs_nsv_tripod_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_NSV_TriPod_VMF.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_rifleman";
        typicalCargo[] = {"rhs_vmf_flora_rifleman"};
    };
    class RHS_NSV_TriPod_INS: rhs_nsv_tripod_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_NSV_TriPod_INS.paa";
        scope = 1;
        side = 2;
        author = "Red Hammer Studios";
        faction = "rhs_faction_insurgents";
        crew = "rhs_g_Soldier_F";
        typicalCargo[] = {"rhs_g_Soldier_F"};
    };
    class RHS_KORD_Base: rhs_nsv_tripod_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_KORD_Base.paa";
        model = "\rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\kord";
        icon = "rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_kord_CA.paa";
        picture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\rhs_KORD_MSV_ca.paa";
        mapSize = 3;
        displayName = "$STR_RHS_DN_KORD_LOW";
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_body.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_body.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_tripod.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_tripod.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_6u16sp.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_6u16sp.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"
            };
        };
        class ViewPilot: ViewPilot {
            initAngleX = -0;
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
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                animationSourceStickX = "MainTurret_Inertia";
                animationSourceStickY = "MainGun_Inertia";
                gunnerLeftHandAnimName = "otochlaven_shake";
                gunnerRightHandAnimName = "otochlaven_shake";
                gunnerLeftLegAnimName = "leg_left";
                gunnerRightLegAnimName = "leg_right";
                minElev = -20;
                maxelev = 15;
                weapons[] = {"rhs_weap_KORD"};
                magazines[] = {
                    "rhs_mag_127x108mm_50",
                    "rhs_mag_127x108mm_50",
                    "rhs_mag_127x108mm_50",
                    "rhs_mag_127x108mm_50",
                    "rhs_mag_127x108mm_50"
                };
                gunnerAction = "rhs_LowKORD_Gunner";
                gunnerGetInAction = "RHS_StaticWeapon_GetOut_Medium";
                gunnerGetOutAction = "RHS_StaticWeapon_GetOut_Medium";
                minTurn = -60;
                maxTurn = 60;
                initTurn = 0;
                optics = 1;
                discreteDistance[] = {
                    100,
                    200,
                    300,
                    400,
                    500,
                    600,
                    800,
                    1000,
                    1200,
                    1500,
                    1700,
                    2000
                };
                discreteDistanceInitIndex = 2;
                selectionFireAnim = "zasleh";
                gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                class ViewOptics {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
            };
        };
        class AnimationSources {
            class ReloadAnim {
                source = "reload";
                weapon = "rhs_weap_KORD";
            };
            class ReloadMagazine: ReloadAnim {
                source = "reloadmagazine";
            };
            class Revolving: ReloadAnim {
                source = "revolving";
            };
            class muzzleHMG_ROT: ReloadAnim {
                source = "ammorandom";
            };
        };
        armorStructural = 10;
        class Library {
            libTextDesc = "$STR_rhs_LIB_KORD";
        };
        class assembleInfo {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {"rhs_Kord_Gun_Bag", "rhs_Kord_Tripod_Bag"};
            displayName = "";
        };
    };
    class rhs_KORD_MSV: RHS_KORD_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_KORD_MSV.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_rifleman";
        typicalCargo[] = {"rhs_msv_rifleman"};
    };
    class rhs_KORD_VDV: RHS_KORD_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_KORD_VDV.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_rifleman";
        typicalCargo[] = {"rhs_vdv_rifleman"};
    };
    class rhs_KORD_VMF: RHS_KORD_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_KORD_VDV.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_rifleman";
        typicalCargo[] = {"rhs_vmf_flora_rifleman"};
    };
    class rhs_KORD_INS: RHS_KORD_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_KORD_INS.paa";
        scope = 1;
        side = 2;
        author = "Red Hammer Studios";
        faction = "rhs_faction_insurgents";
        crew = "rhs_g_Soldier_F";
        typicalCargo[] = {"rhs_g_Soldier_F"};
    };
    class RHS_KORD_high_base: RHS_KORD_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_KORD_high_base.paa";
        displayName = "$STR_rhs_DN_KORD";
        model = "\rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\KORD_6u16sp";
        icon = "rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_kord6u16sp_CA.paa";
        picture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\rhs_KORD_high_MSV_ca.paa";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                minElev = -7;
                maxelev = 45;
                gunnerAction = "rhs_KORD_Gunner";
                gunnerGetInAction = "";
                gunnerGetOutAction = "";
                turretInfoType = "RHS_RscWeaponZeroing";
                minTurn = -180;
                maxTurn = 180;
                initTurn = 0;
            };
        };
    };
    class rhs_KORD_high_MSV: RHS_KORD_high_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_KORD_high_MSV.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_rifleman";
        typicalCargo[] = {"rhs_msv_rifleman"};
    };
    class rhs_KORD_high_VDV: RHS_KORD_high_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_KORD_high_VDV.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_rifleman";
        typicalCargo[] = {"rhs_vdv_rifleman"};
    };
    class rhs_KORD_high_VMF: RHS_KORD_high_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_KORD_high_VDV.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_rifleman";
        typicalCargo[] = {"rhs_vmf_flora_rifleman"};
    };
    class rhs_KORD_high_INS: RHS_KORD_high_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_KORD_high_INS.paa";
        scope = 1;
        side = 2;
        author = "Red Hammer Studios";
        faction = "rhs_faction_insurgents";
        crew = "rhs_g_Soldier_F";
        typicalCargo[] = {"rhs_g_Soldier_F"};
    };
    class rhs_DSHKM_base: StaticMGWeapon {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_DSHKM_base.paa";
        dlc = "RHS_AFRF";
        model = "\rhsafrf\addons\rhs_heavyweapons\DShKM\DShKM_mg";
        icon = "\rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_DShKM_CA.paa";
        picture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\rhs_DSHKM_ins_ca.paa";
        mapSize = 2;
        displayName = "$STR_rhs_DN_DSHKM";
        sensorPosition = "gunnerView";
        class Hitpoints {
            class HitHull {
                armor = 1;
                passThrough = 1;
                name = "telo";
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_heavyweapons\dshkm\data\dshk.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\dshkm\data\dshk_damage.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\ags30\data\tripod_ags.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\ags30\data\tripod_ags.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\dshkm\data\tripod_dshk.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\dshkm\data\tripod_dshk.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"
            };
        };
        class ViewPilot: ViewPilot {
            initAngleX = -0;
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
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                animationSourceStickX = "MainTurret_Inertia";
                animationSourceStickY = "MainGun_Inertia";
                gunnerLeftHandAnimName = "otochlaven_shake";
                gunnerRightHandAnimName = "otochlaven_shake";
                gunnerLeftLegAnimName = "leg_left";
                gunnerRightLegAnimName = "leg_right";
                minElev = -20;
                maxelev = 60;
                minturn = -180;
                maxturn = 180;
                weapons[] = {"rhs_weap_DSHKM"};
                turretInfoType = "RHS_RscWeaponZeroing";
                discreteDistance[] = {
                    100,
                    200,
                    300,
                    400,
                    500,
                    600,
                    800,
                    1000,
                    1200,
                    1500
                };
                discreteDistanceInitIndex = 2;
                magazines[] = {
                    "rhs_mag_127x108mm_50",
                    "rhs_mag_127x108mm_50",
                    "rhs_mag_127x108mm_50",
                    "rhs_mag_127x108mm_50",
                    "rhs_mag_127x108mm_50"
                };
                gunnerAction = "rhs_DShKM_Gunner";
                selectionFireAnim = "zasleh";
                gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                class ViewOptics {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                disableSoundAttenuation = 1;
                ejectDeadGunner = 1;
            };
        };
        class AnimationSources {
            class muzzle_source {
                source = "reload";
                weapon = "rhs_weap_DSHKM";
            };
            class ReloadAnim: muzzle_source {
                source = "reload";
            };
            class ReloadMagazine: muzzle_source {
                source = "reloadmagazine";
            };
            class Revolving: muzzle_source {
                source = "revolving";
            };
            class muzzleHMG_ROT: muzzle_source {
                source = "ammorandom";
            };
        };
        class Library {
            libTextDesc = "$STR_rhs_LIB_DSHKM";
        };
        class assembleInfo {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {"rhs_DShkM_Gun_Bag", "rhs_DShkM_TripodHigh_Bag"};
            displayName = "";
        };
    };
    class rhs_DSHKM_ins: rhs_DSHKM_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_DSHKM_ins.paa";
        scope = 1;
        side = 2;
        author = "Red Hammer Studios";
        faction = "rhs_faction_insurgents";
        crew = "rhs_g_Soldier_F";
        typicalCargo[] = {"rhs_g_Soldier_F"};
    };
    class rhs_DSHkM_Mini_TriPod_base: rhs_DSHKM_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_DSHkM_Mini_TriPod_base.paa";
        displayname = "DSHkM Minitripod";
        model = "rhsafrf\addons\rhs_heavyweapons\DShKM\DShKM_mg2";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                turretInfoType = "RHS_RscInfoStaticWeapon";
                gunneraction = "rhs_LowTripod_Gunner";
                gunnerGetInAction = "RHS_StaticWeapon_GetOut_Medium";
                gunnerGetOutAction = "RHS_StaticWeapon_GetOut_Medium";
                initturn = 0;
                maxturn = 90;
                minturn = -90;
                maxelev = 20;
            };
        };
        class assembleInfo {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {"rhs_DShkM_Gun_Bag", "rhs_DShkM_TripodLow_Bag"};
            displayName = "";
        };
    };
    class rhs_DSHKM_Mini_TriPod_ins: rhs_DSHkM_Mini_TriPod_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_DSHKM_Mini_TriPod_ins.paa";
        scope = 1;
        side = 2;
        author = "Red Hammer Studios";
        faction = "rhs_faction_insurgents";
        crew = "rhs_g_Soldier_F";
        typicalCargo[] = {"rhs_g_Soldier_F"};
    };
    class RHS_AGS30_TriPod_base: StaticGrenadeLauncher {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_AGS30_TriPod_base.paa";
        dlc = "RHS_USAF";
        displayName = "AGS-30 (6P17)";
        model = "\rhsafrf\addons\rhs_heavyweapons\AGS30\AGS_static";
        icon = "rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_ags_CA.paa";
        picture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\RHS_AGS30_TriPod_MSV_ca.paa";
        mapSize = 2.5;
        sensorPosition = "gunnerView";
        class Hitpoints {
            class HitHull {
                armor = 1;
                passThrough = 1;
                name = "telo";
            };
        };
        class ViewPilot: ViewPilot {
            initAngleX = -0;
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
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_heavyweapons\ags30\data\tripod_ags.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\ags30\data\tripod_ags.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\ags30\data\ags30.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\ags30\data\ags30.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerLeftHandAnimName = "";
                gunnerRightHandAnimName = "";
                gunnerOpticsModel = "\rhsafrf\addons\rhs_heavyweapons\data\optika_AGS30";
                minElev = -10;
                maxelev = 32;
                minTurn = -78;
                maxTurn = 78;
                initTurn = 0;
                turretInfoType = "RHS_RscInfoStaticWeapon";
                weapons[] = {"RHS_weap_AGS30"};
                magazines[] = {
                    "RHS_mag_VOG30_30",
                    "RHS_mag_VOG30_30",
                    "RHS_mag_VOG30_30",
                    "RHS_mag_VOG30_30"
                };
                gunnerAction = "rhs_AGS_Gunner";
                gunnerGetInAction = "RHS_StaticWeapon_GetOut_Medium";
                gunnerGetOutAction = "RHS_StaticWeapon_GetOut_Medium";
                selectionFireAnim = "zasleh";
                class ViewGunner {
                    initAngleX = 5;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                class ViewOptics: ViewOptics {
                    initFov = 0.25;
                    minFov = 0.25;
                    maxFov = 0.25;
                };
            };
        };
        class AnimationSources {
            class belt_rotation {
                source = "reload";
                weapon = "RHS_weap_AGS30";
            };
            class ReloadMagazine {
                source = "reloadmagazine";
                weapon = "RHS_weap_AGS30";
            };
            class Revolving {
                source = "revolving";
                weapon = "RHS_weap_AGS30";
            };
            class muzzle_rot_MG: belt_rotation {
                source = "ammorandom";
            };
        };
        class assembleInfo {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {"RHS_AGS30_Gun_Bag", "RHS_AGS30_Tripod_Bag"};
            displayName = "";
        };
    };
    class RHS_AGS30_TriPod_MSV: RHS_AGS30_TriPod_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_AGS30_TriPod_MSV.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_rifleman";
        typicalCargo[] = {"rhs_msv_rifleman"};
    };
    class RHS_AGS30_TriPod_VDV: RHS_AGS30_TriPod_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_AGS30_TriPod_VDV.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_rifleman";
        typicalCargo[] = {"rhs_vdv_rifleman"};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {
                    "RHS_mag_GPD30_30",
                    "RHS_mag_GPD30_30",
                    "RHS_mag_GPD30_30",
                    "RHS_mag_GPD30_30"
                };
            };
        };
    };
    class RHS_AGS30_TriPod_VMF: RHS_AGS30_TriPod_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_AGS30_TriPod_VMF.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_rifleman";
        typicalCargo[] = {"rhs_vmf_flora_rifleman"};
    };
    class RHS_AGS30_TriPod_INS: RHS_AGS30_TriPod_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_AGS30_TriPod_INS.paa";
        scope = 1;
        side = 2;
        author = "Red Hammer Studios";
        faction = "rhs_faction_insurgents";
        crew = "rhs_g_Soldier_F";
        typicalCargo[] = {"rhs_g_Soldier_F"};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {
                    "RHS_mag_VOG17m_30",
                    "RHS_mag_VOG17m_30",
                    "RHS_mag_VOG17m_30",
                    "RHS_mag_VOG17m_30"
                };
            };
        };
    };
    class rhs_SPG9_base: AT_01_base_F {
        dlc = "RHS_AFRF";
        displayName = "$STR_rhs_DN_SPG9";
        model = "\rhsafrf\addons\rhs_heavyweapons\spg9\spg9.p3d";
        icon = "rhsafrf\addons\rhs_heavyweapons\data\mapico\icon_spg9_CA.paa";
        picture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\rhs_SPG9_INS_ca.paa";
        mapSize = 3;
        nameSound = "cannon";
        transportSoldier = 0;
        gunnerHasFlares = 1;
        sensorPosition = "gunnerView";
        class Hitpoints {
            class HitHull {
                armor = 1;
                passThrough = 1;
                name = "telo";
            };
        };
        class ViewPilot: ViewPilot {
            initAngleX = -0;
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
        hiddenSelections[] = {};
        class AnimationSources {
            class ReloadAnim {
                source = "reload";
                weapon = "rhs_weap_SPG9";
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {"rhsafrf\addons\rhs_heavyweapons\spg9\data\spg9.rvmat", "rhsafrf\addons\rhs_heavyweapons\spg9\data\spg9.rvmat", "rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"};
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"rhs_weap_SPG9"};
                magazines[] = {
                    "rhs_mag_PG9V",
                    "rhs_mag_OG9V",
                    "rhs_mag_OG9V",
                    "rhs_mag_OG9V",
                    "rhs_mag_OG9V",
                    "rhs_mag_OG9V",
                    "rhs_mag_OG9V",
                    "rhs_mag_PG9V",
                    "rhs_mag_PG9V",
                    "rhs_mag_PG9V",
                    "rhs_mag_PG9V",
                    "rhs_mag_PG9V",
                    "rhs_mag_PG9V"
                };
                gunnerLeftHandAnimName = "otochlaven";
                gunnerAction = "rhs_SPG_Gunner";
                gunnerGetInAction = "RHS_StaticWeapon_GetOut_Medium";
                gunnerGetOutAction = "RHS_StaticWeapon_GetOut_Medium";
                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pgo9_scope";
                gunnerOpticsEffect[] = {"OpticsCHAbera1", "OpticsBlur2", "TankGunnerOptics1"};
                memoryPointGunnerOptics = "gunnerview";
                minTurn = -45;
                maxTurn = 45;
                initTurn = 0;
                minElev = -10;
                maxElev = 40;
                initElev = 0;
                ejectDeadGunner = 0;
                gunnerForceOptics = 0;
                turretInfoType = "RHS_RscInfoStaticWeapon";
                class ViewGunner {
                    initAngleX = 5;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                class ViewOptics {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.111;
                    minFov = 0.111;
                    maxFov = 0.111;
                };
            };
        };
        class Library {
            libTextDesc = "$STR_rhs_LIB_SPG9";
        };
        class assembleInfo {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {"rhs_SPG9_Gun_Bag", "rhs_SPG9_Tripod_Bag"};
            displayName = "";
        };
    };
    class rhs_SPG9M_base: rhs_SPG9_base {
        displayName = "$STR_rhs_DN_SPG9M";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {
                    "rhs_mag_OG9VM",
                    "rhs_mag_OG9VM",
                    "rhs_mag_OG9VM",
                    "rhs_mag_OG9VM",
                    "rhs_mag_OG9VM",
                    "rhs_mag_OG9VM",
                    "rhs_mag_OG9VM",
                    "rhs_mag_PG9N",
                    "rhs_mag_PG9N",
                    "rhs_mag_PG9N",
                    "rhs_mag_PG9N",
                    "rhs_mag_PG9VNT",
                    "rhs_mag_PG9VNT"
                };
                class OpticsIn {
                    class HEAT: ViewOptics {
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pgok9_kum_scope.p3d";
                    };
                    class HE: ViewOptics {
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pgok9_of_scope.p3d";
                    };
                };
            };
        };
    };
    class rhs_SPG9_INS: rhs_SPG9_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_SPG9_INS.paa";
        scope = 1;
        side = 2;
        author = "Red Hammer Studios";
        faction = "rhs_faction_insurgents";
        crew = "rhs_g_Soldier_F";
        typicalCargo[] = {"rhs_g_Soldier_F"};
    };
    class rhs_SPG9M_MSV: rhs_SPG9M_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_SPG9M_MSV.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_rifleman";
        typicalCargo[] = {"rhs_msv_rifleman"};
    };
    class rhs_SPG9M_VDV: rhs_SPG9M_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_SPG9M_VDV.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_rifleman";
        typicalCargo[] = {"rhs_vdv_rifleman"};
    };
    class rhs_SPG9M_VMF: rhs_SPG9M_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_SPG9M_VDV.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_rifleman";
        typicalCargo[] = {"rhs_vmf_flora_rifleman"};
    };
    class rhs_Igla_AA_pod_Base: StaticAAWeapon {
        dlc = "RHS_AFRF";
        gunnercansee = "2+4+8+32";
        displayName = "$STR_rhs_DN_IGLA_AA_POD_EAST";
        mapsize = 2.8;
        model = "rhsafrf\addons\rhs_heavyweapons\igla\igla_AA_pod";
        icon = "rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_igla_aa_pod_CA.paa";
        picture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\rhs_Igla_AA_pod_msv_ca.paa";
        class Hitpoints {
            class HitHull {
                armor = 1;
                passThrough = 1;
                name = "telo";
            };
        };
        armorStructural = 4;
        explosionShielding = 0.5;
        class ViewPilot: ViewPilot {
            initAngleX = -0;
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
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_heavyweapons\igla\data\igla_aa_pod.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\igla\data\igla_aa_pod.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\igla\data\igla_aa_pod_roof.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\igla\data\igla_aa_pod_roof.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\igla\data\igla_aa_pod_seats.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\igla\data\igla_aa_pod_seats.rvmat",
                "rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"
            };
        };
        memoryPointMissile[] = {"Rocket_2", "Rocket_1"};
        memoryPointMissileDir[] = {"Rocket_2_End", "Rocket_1_End"};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                minTurn = -180;
                maxTurn = 180;
                gunneraction = "RHS_IglaPod_Gunner";
                gunneropticseffect[] = {"OpticsCHAbera1", "OpticsBlur2"};
                gunnerLeftHandAnimName = "OtocHlaven";
                gunnerRightHandAnimName = "OtocHlaven";
                gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                weapons[] = {"rhs_weap_Igla_twice"};
                magazines[] = {
                    "rhs_mag_2Rnd_Igla",
                    "rhs_mag_2Rnd_Igla",
                    "rhs_mag_2Rnd_Igla",
                    "rhs_mag_2Rnd_Igla",
                    "rhs_mag_2Rnd_Igla"
                };
                maxelev = 120;
                minelev = -10;
                class ViewOptics {
                    initanglex = 0;
                    initangley = 0;
                    initfov = 0.155;
                    maxanglex = 30;
                    maxangley = 100;
                    maxfov = 0.155;
                    minanglex = -30;
                    minangley = -100;
                    minfov = 0.047;
                };
                disableSoundAttenuation = 1;
            };
        };
        class AnimationSources {
            class MagazineReload {
                source = "reloadmagazine";
                weapon = "rhs_weap_Igla_twice";
            };
            class Revolving {
                source = "revolving";
                weapon = "rhs_weap_Igla_twice";
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                fired = "_this call rhs_fnc_fired_IglaAA";
            };
        };
    };
    class rhs_Igla_AA_pod_msv: rhs_Igla_AA_pod_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Igla_AA_pod_msv.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_rifleman";
        typicalCargo[] = {"rhs_msv_rifleman"};
    };
    class rhs_Igla_AA_pod_vdv: rhs_Igla_AA_pod_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Igla_AA_pod_vdv.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_rifleman";
        typicalCargo[] = {"rhs_vdv_rifleman"};
    };
    class rhs_Igla_AA_pod_vmf: rhs_Igla_AA_pod_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Igla_AA_pod_vdv.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_rifleman";
        typicalCargo[] = {"rhs_vmf_flora_rifleman"};
    };
    class rhs_Igla_AA_pod_ins: rhs_Igla_AA_pod_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Igla_AA_pod_ins.paa";
        scope = 1;
        side = 2;
        author = "Red Hammer Studios";
        faction = "rhs_faction_insurgents";
        crew = "rhs_g_Soldier_F";
        typicalCargo[] = {"rhs_g_Soldier_F"};
    };
    class rhs_2b14_82mm_Base: StaticMortar {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_2b14_82mm_Base.paa";
        dlc = "RHS_AFRF";
        availableForSupportTypes[] = {"Artillery"};
        displayname = "$STR_rhs_DN_2B14";
        vehicleClass = "rhs_vehclass_artillery";
        editorSubcategory = "rhs_EdSubcat_artillery";
        class Library {
            libTextDesc = "$STR_rhs_LIB_2B14";
        };
        model = "\rhsafrf\addons\rhs_heavyweapons\podnos_2b14_82mm\podnos_2b14_82mm";
        icon = "rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_podnos_2b14_CA.paa";
        picture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\rhs_2b14_82mm_msv_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_heavyweapons\podnos_2b14_82mm\data\podnos_2b14_82mm_co.paa"};
        transportSoldier = 1;
        cargoAction[] = {"rhs_D30_Cargo"};
        mapSize = 1.5;
        unitInfoType = "RscUnitInfoMortar";
        class Hitpoints {
            class HitHull {
                armor = 1;
                passThrough = 1;
                name = "telo";
            };
        };
        class ViewPilot: ViewPilot {
            initAngleX = -0;
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
        class Damage {
            tex[] = {};
            mat[] = {"rhsafrf\addons\rhs_heavyweapons\podnos_2b14_82mm\data\podnos_2b14_82mm.rvmat", "rhsafrf\addons\rhs_heavyweapons\podnos_2b14_82mm\data\podnos_2b14_82mm.rvmat", "rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"};
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class ViewOptics;
                gunnerAction = "rhs_D30_Cargo";
                turretInfoType = "rhs_gui_optic_mortar";
                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pg1";
                gunnerOpticsEffect[] = {"TankGunnerOptics2", "OpticsBlur2", "OpticsCHAbera3"};
                class OpticsIn {
                    class PanoramicSight {
                        hitpoint = "Hit_Optic_MPM44M";
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.175;
                        minFov = 0.175;
                        maxFov = 0.175;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pg1m.p3d";
                    };
                };
                weapons[] = {"rhs_weap_2b14"};
                magazines[] = {
                    "rhs_mag_3vo18_10",
                    "rhs_mag_3vo18_10",
                    "rhs_mag_3vs25m_10",
                    "rhs_mag_d832du_10"
                };
                cameraDir = "usti hlavne";
                memoryPointGunnerOptics = "gunnerview";
                elevationMode = 1;
                initCamElev = 0;
                minCamElev = -15;
                maxCamElev = 35;
                initElev = 0;
                initTurn = 0;
                minElev = -15;
                maxElev = 30;
                minTurn = -180;
                maxTurn = 180;
                usePiP = 2;
                disableSoundAttenuation = 1;
                stabilizedInAxes = 0;
                class HitPoints {
                    class Hit_Optic_MPM44M {
                        armor = -40;
                        explosionShielding = 0.1;
                        name = "Hit_Optic";
                        visual = "vis_optic";
                        armorComponent = "Hit_Optic";
                        passThrough = 0;
                    };
                };
            };
        };
        htMin = 1;
        htMax = 480;
        afMax = 0;
        mfMax = 0;
        mFact = 1;
        tBody = 100;
        artilleryScanner = 1;
        class assembleInfo {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {"rhs_Podnos_Gun_Bag", "rhs_Podnos_Bipod_Bag"};
            displayName = "";
        };
        class Attributes {
            class rhs_ammoslot_1_type {
                displayName = "Ammo slot #1 type";
                tooltip = "Define type of shell for #1 slot [HE rounds]";
                property = "rhs_ammoslot_1_type";
                control = "Combo";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = 0;
                typeName = "STRING";
                class values {
                    class rhs_mag_3vo18_10 {
                        name = "$STR_rhs_mag_3vo18";
                        value = "rhs_mag_3vo18_10";
                        defaultValue = "rhs_mag_3vo18_10";
                    };
                };
            };
            class rhs_ammoslot_1 {
                displayName = "Ammo slot #1 count";
                tooltip = "Define number of rounds stored inside of type #1. Max 40. Leave -1 for default loadout";
                property = "rhs_ammoslot_1";
                control = "Edit";
                expression = "if(_value >= 0)then{ [_this,_value,'%s',40,['rhs_ammoslot_1','rhs_ammoslot_2','rhs_ammoslot_3']] spawn rhs_fnc_Eden_DefineLoadout};";
                defaultValue = "-1";
                validate = "NUMBER";
                typeName = "NUMBER";
            };
            class rhs_ammoslot_2_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #2 type";
                tooltip = "Define type of shell for #2 slot [Illumination rounds]";
                property = "rhs_ammoslot_2_type";
                class values {
                    class rhs_mag_3vs25m_10 {
                        name = "$STR_rhs_mag_3vs25m";
                        value = "rhs_mag_3vs25m_10";
                        defaultValue = "rhs_mag_3vs25m_10";
                    };
                };
            };
            class rhs_ammoslot_2: rhs_ammoslot_1 {
                displayName = "Ammo slot #2 count";
                tooltip = "Define number of rounds stored inside of type #2. Max 40. Leave -1 for default loadout";
                property = "rhs_ammoslot_2";
            };
            class rhs_ammoslot_3_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #3 type";
                tooltip = "Define type of shell for #3 slot [Smoke rounds]";
                property = "rhs_ammoslot_3_type";
                class values {
                    class rhs_mag_d832du_10 {
                        name = "$STR_rhs_mag_d832du";
                        value = "rhs_mag_d832du_10";
                        defaultValue = "rhs_mag_d832du_10";
                    };
                };
            };
            class rhs_ammoslot_3: rhs_ammoslot_1 {
                displayName = "Ammo slot #3 count";
                tooltip = "Define number of rounds stored inside of type #3. Max 40. Leave -1 for default loadout";
                property = "rhs_ammoslot_3";
            };
        };
    };
    class rhs_2b14_82mm_msv: rhs_2b14_82mm_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_2b14_82mm_msv.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_rifleman";
        typicalCargo[] = {"rhs_msv_rifleman"};
    };
    class rhs_2b14_82mm_vdv: rhs_2b14_82mm_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_2b14_82mm_vdv.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_rifleman";
        typicalCargo[] = {"rhs_vdv_rifleman"};
    };
    class rhs_2b14_82mm_vmf: rhs_2b14_82mm_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_2b14_82mm_vdv.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_rifleman";
        typicalCargo[] = {"rhs_vmf_flora_rifleman"};
    };
    class rhs_2b14_82mm_ins: rhs_2b14_82mm_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_2b14_82mm_ins.paa";
        scope = 1;
        side = 2;
        author = "Red Hammer Studios";
        faction = "rhs_faction_insurgents";
        crew = "rhs_g_Soldier_F";
        typicalCargo[] = {"rhs_g_Soldier_F"};
    };
    class rhs_Metis_Base: AT_01_base_F {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Metis_Base.paa";
        dlc = "RHS_AFRF";
        class assembleInfo {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {"rhs_Metis_Gun_Bag", "rhs_Metis_Tripod_Bag"};
            displayName = "";
        };
        scope = 0;
        displayname = "$STR_rhs_DN_AT13M";
        class Library {
            libTextDesc = "$STR_rhs_LIB_AT13";
        };
        model = "\rhsafrf\addons\rhs_heavyweapons\metis_at_13\metis.p3d";
        icon = "rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_metis_at13_CA.paa";
        picture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\rhs_Metis_9k115_2_msv_ca.paa";
        mapSize = 1.5;
        hiddenSelections[] = {};
        class Hitpoints {
            class HitHull {
                armor = 1;
                passThrough = 1;
                name = "telo";
            };
        };
        class ViewPilot: ViewPilot {
            initAngleX = -0;
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
        class Damage {
            tex[] = {};
            mat[] = {"rhsafrf\addons\rhs_heavyweapons\metis_at_13\data\metis.rvmat", "rhsafrf\addons\rhs_heavyweapons\metis_at_13\data\metis.rvmat", "rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"};
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"rhs_weap_9K115_2_launcher"};
                magazines[] = {
                    "rhs_mag_9M131m",
                    "rhs_mag_9M131m",
                    "rhs_mag_9M131m",
                    "rhs_mag_9M131f"
                };
                gunnerAction = "rhs_Metis_Gunner";
                gunnerGetInAction = "RHS_StaticWeapon_GetOut_Low";
                gunnerGetOutAction = "RHS_StaticWeapon_GetOut_Low";
                gunnerOpticsModel = "\rhsafrf\addons\rhs_heavyweapons\data\2Dscope_Metis";
                gunnerOpticsEffect[] = {"OpticsCHAbera1", "OpticsBlur2"};
                turretInfoType = "RHS_RscInfoStaticWeapon";
                memorypointgunneroptics = "gunnerview";
                minTurn = -45;
                maxTurn = 45;
                initTurn = 0;
                minElev = -10;
                maxElev = 40;
                initElev = 0;
                ejectDeadGunner = 0;
                gunnerForceOptics = 0;
                class ViewGunner {
                    initAngleX = 5;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                class ViewOptics {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.078;
                    minFov = 0.078;
                    maxFov = 0.078;
                    visionMode[] = {"Normal", "TI"};
                    thermalMode[] = {4, 5};
                };
                disableSoundAttenuation = 1;
            };
        };
        class AnimationSources {
            class revolving {
                source = "revolving";
                weapon = "rhs_weap_9K115_2_launcher";
            };
            class ReloadMagazine {
                source = "reloadmagazine";
                weapon = "rhs_weap_9K115_2_launcher";
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                reloaded = "[_this select 0,_this select 1,_this select 4,'rhs_weap_9K115_2_launcher','rhs_weap_9K115_launcher_used','hideMissile',0.92] call rhs_fnc_atgm_spentTube";
            };
        };
    };
    class rhs_Metis_9k115_2_msv: rhs_Metis_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Metis_9k115_2_msv.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_rifleman";
        typicalCargo[] = {"rhs_msv_rifleman"};
    };
    class rhs_Metis_9k115_2_vdv: rhs_Metis_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Metis_9k115_2_vdv.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_rifleman";
        typicalCargo[] = {"rhs_vdv_rifleman"};
    };
    class rhs_Metis_9k115_2_vmf: rhs_Metis_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Metis_9k115_2_vdv.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_rifleman";
        typicalCargo[] = {"rhs_vmf_flora_rifleman"};
    };
    class rhs_Metis_9k115_2_ins: rhs_Metis_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Metis_9k115_2_ins.paa";
        scope = 1;
        side = 2;
        author = "Red Hammer Studios";
        faction = "rhs_faction_insurgents";
        crew = "rhs_g_Soldier_F";
        typicalCargo[] = {"rhs_g_Soldier_F"};
    };
    class rhs_Metis_9k115_1_ins: rhs_Metis_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Metis_9k115_1_ins.paa";
        scope = 1;
        side = 2;
        author = "Red Hammer Studios";
        faction = "rhs_faction_insurgents";
        crew = "rhs_g_Soldier_F";
        typicalCargo[] = {"rhs_g_Soldier_F"};
        displayname = "$STR_rhs_DN_AT13";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"rhs_weap_9K115_1_launcher"};
                magazines[] = {
                    "rhs_mag_9M131",
                    "rhs_mag_9M131",
                    "rhs_mag_9M131",
                    "rhs_mag_9M131"
                };
            };
        };
        class AnimationSources {
            class revolving {
                source = "revolving";
                weapon = "rhs_weap_9K115_1_launcher";
            };
            class ReloadMagazine {
                source = "reloadmagazine";
                weapon = "rhs_weap_9K115_1_launcher";
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                reloaded = "[_this select 0,_this select 1,'rhs_weap_9K115_1_launcher','rhs_weap_9K115_launcher_used','hideMissile',0.92] call rhs_fnc_atgm_spentTube";
            };
        };
    };
    class rhs_D30_base: StaticCannon {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_D30_base.paa";
        dlc = "RHS_AFRF";
        slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1", "SlingLoadCargo2", "SlingLoadCargo3"};
        accuracy = 0.12;
        cost = 10000;
        availableForSupportTypes[] = {"Artillery"};
        artilleryScanner = 1;
        displayName = "$STR_rhs_DN_D30";
        vehicleClass = "rhs_vehclass_artillery";
        editorSubcategory = "rhs_EdSubcat_artillery";
        unitInfoType = "RscUnitInfoMortar";
        model = "\rhsafrf\addons\rhs_heavyweapons\D30\D30";
        icon = "rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_d30_CA.paa";
        picture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\rhs_D30_msv_ca.paa";
        mapSize = 4.5;
        cargoAction[] = {"rhs_D30_Cargo", "rhs_D30_Commander"};
        typicalCargo[] = {};
        transportSoldier = 2;
        gunnerHasFlares = 1;
        driveOnComponent[] = {"wheels"};
        memoryPointsGetInCargo = "pos_cargo_dir";
        memoryPointsGetInCargoDir = "pos_cargo";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_heavyweapons\d30\data\d30_co.paa"};
        class Hitpoints {
            class HitHull {
                armor = 1;
                passThrough = 1;
                name = "telo";
            };
        };
        armorStructural = 4;
        explosionShielding = 0.5;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunBeg = "Usti hlavne";
                gunEnd = "Konec hlavne";
                weapons[] = {"rhs_weap_D30"};
                magazines[] = {
                    "rhs_mag_3of56_10",
                    "rhs_mag_d462_2",
                    "rhs_mag_s463_2",
                    "rhs_mag_3of69m_2"
                };
                gunnerLeftHandAnimName = "handleElev";
                gunnerRightHandAnimName = "handleHoriz";
                gunnerAction = "rhs_D30_Gunner";
                gunnerOpticsModel = "\rhsafrf\addons\rhs_heavyweapons\data\2Dscope_D30_panoramic";
                gunnerOpticsEffect[] = {"OpticsCHAbera1", "OpticsBlur2"};
                elevationMode = 1;
                turretInfoType = "rhs_gui_optic_d30_op4";
                maxHorizontalRotSpeed = 0.35;
                maxVerticalRotSpeed = 0.25;
                gunnerForceOptics = 0;
                minElev = -9;
                maxelev = 72;
                minTurn = -180;
                maxTurn = 180;
                class ViewOptics: ViewOptics {
                    initFov = 0.096;
                    minFov = 0.096;
                    maxFov = 0.096;
                };
                class OpticsIn {
                    class PanoramicSight: ViewOptics {
                        opticsDisplayName = "PG1";
                        hitpoint = "Hit_Optic_PG1M";
                        initFov = 0.175;
                        minFov = 0.175;
                        maxFov = 0.175;
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pg1m.p3d";
                        visionMode[] = {"Normal"};
                    };
                    class OP4M_45 {
                        opticsDisplayName = "OP4";
                        hitpoint = "Hit_Optic_OP4M";
                        camPos = "view_op4m";
                        camDir = "view_op4m_dir";
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.127273;
                        minFov = 0.127273;
                        maxFov = 0.127273;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_empty.p3d";
                    };
                };
                disableSoundAttenuation = 1;
                class HitPoints {
                    class HitTurret {
                        armor = -100;
                        material = -1;
                        name = "Hit_Turret";
                        armorComponent = "Hit_Turret";
                        visual = "vez";
                        passThrough = 0;
                        minimalHit = -0.2;
                        explosionShielding = 0.1;
                        radius = 0.1;
                    };
                    class HitGun {
                        armor = -100;
                        material = -1;
                        name = "Hit_Gun";
                        armorComponent = "Hit_Gun";
                        visual = "-";
                        passThrough = 0;
                        minimalHit = -0.2;
                        explosionShielding = 0.1;
                        radius = 0.1;
                    };
                    class Hit_Optic_PG1M {
                        armor = -40;
                        explosionShielding = 0.1;
                        name = "Hit_Optic_Panoramic";
                        visual = "vis_optic_pg1m";
                        armorComponent = "Hit_Optic_Panoramic";
                        passThrough = 0;
                    };
                    class Hit_Optic_OP4M {
                        armor = -40;
                        explosionShielding = 0.1;
                        name = "Hit_Optic_Direct";
                        visual = "vis_optic_op4m";
                        armorComponent = "Hit_Optic_Direct";
                        passThrough = 0;
                    };
                };
            };
        };
        class AnimationSources {
            class recoil {
                source = "door";
                animPeriod = 6;
            };
            class leftT_source {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class rightT_source: leftT_source {
                initPhase = 0;
            };
            class leftW_source: leftT_source {
                initPhase = 0;
            };
            class rightW_source: leftW_source {};
            class maingunT_source {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class mainTurretT_source: maingunT_source {};
            class szpilki_source {
                source = "user";
                animPeriod = 0.1;
                initPhase = 0;
            };
            class body_source {
                source = "user";
                animPeriod = 0.6;
                initPhase = 0;
            };
            class d30_kolo {
                source = "user";
                animPeriod = 0.6;
                initPhase = 0;
            };
            class Wheel_1_source {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class Wheel_2_source {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class RaiseWheels {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class fold_arty_handler: leftT_source {
                mass = -1;
                displayName = "fold gun";
                author = "$STR_RHS_AUTHOR_FULL";
                onPhaseChanged = "[_this select 0,_this select 1] call rhs_fnc_d30_pack;";
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {"rhsafrf\addons\rhs_heavyweapons\D30\data\d30.rvmat", "rhsafrf\addons\rhs_heavyweapons\D30\data\d30_damage.rvmat", "rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"};
        };
        class Library {
            libTextDesc = "$STR_rhs_LIB_D30";
        };
        htMin = 1;
        htMax = 480;
        afMax = 0;
        mfMax = 0;
        mFact = 1;
        tBody = 450;
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                fired = "_this spawn rhs_fnc_fired_d30";
            };
        };
        class UserActions {
            class Fold {
                displayNameDefault = "<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\unloadVehicle_ca.paa' size='3.5' /> Moving Mode";
                displayName = "<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\unloadVehicle_ca.paa' /> Switch to moving mode";
                position = "aimpoint";
                radius = 2.51;
                onlyForplayer = 0;
                condition = "(alive this)&& ((count (crew this)) == 0) && (this animationPhase 'leftT' <= 0.1)";
                statement = "[this,1] call rhs_fnc_d30_pack;";
            };
            class Unfold: Fold {
                displayNameDefault = "<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa' size='3.5' /> Static Mode";
                displayName = "<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa' /> Switch to static mode";
                condition = "(alive this)&& (this  animationPhase 'leftT' >= 2.2)";
                statement = "[this,0] call rhs_fnc_d30_pack;";
            };
            class AttachVehicle: RHS_UserAction_Towing_Attach {
                position = "tow_point";
                condition = "(alive this)&& (this  animationPhase 'leftT' >= 2.2)";
            };
            class DragVehicle: RHS_UserAction_Towing_Drag {
                position = "tow_point";
                condition = "(alive this)&& (this  animationPhase 'leftT' >= 2.2)";
            };
        };
        class Attributes {
            class ObjectTexture {
                control = "ObjectTexture";
                data = "ObjectTexture";
                displayName = "Skin";
                tooltip = "Texture and material set applied on the object.";
            };
            class rhs_caseDeleteTime {
                displayName = "Spent case liftime";
                tooltip = "Define how long spent caseses are rendred in game. Type -1 for infinitve time";
                property = "rhs_caseDeleteTime";
                control = "Edit";
                validate = "Number";
                typeName = "Number";
                defaultValue = "120";
                expression = "_this setVariable ['rhs_caseDeleteTime',_value]";
            };
            class rhs_ammoslot_1_type {
                displayName = "Ammo slot #1 type";
                tooltip = "Define type of shell for #1 slot [HE rounds]";
                property = "rhs_ammoslot_1_type";
                control = "Combo";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = 0;
                typeName = "STRING";
                class values {
                    class rhs_mag_3of56_10 {
                        name = "$STR_rhs_mag_3of56";
                        value = "rhs_mag_3of56_10";
                        defaultValue = "rhs_mag_3of56_10";
                    };
                    class rhs_mag_of462_10 {
                        name = "$STR_rhs_mag_of462";
                        value = "rhs_mag_of462_10";
                        defaultValue = "rhs_mag_of462_10";
                    };
                };
            };
            class rhs_ammoslot_1 {
                displayName = "Ammo slot #1 count";
                tooltip = "Define number of rounds stored inside of type #1. Max 40. Leave -1 for default loadout";
                property = "rhs_ammoslot_1";
                control = "Edit";
                expression = "if(_value >= 0)then{ [_this,_value,'%s',40,['rhs_ammoslot_1','rhs_ammoslot_2','rhs_ammoslot_3','rhs_ammoslot_4']] spawn rhs_fnc_Eden_DefineLoadout};";
                defaultValue = "-1";
                validate = "NUMBER";
                typeName = "NUMBER";
            };
            class rhs_ammoslot_2_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #2 type";
                tooltip = "Define type of shell for #2 slot [Smoke rounds]";
                property = "rhs_ammoslot_2_type";
                class values {
                    class rhs_mag_d462_2 {
                        name = "$STR_rhs_mag_d462";
                        value = "rhs_mag_d462_2";
                        defaultValue = "rhs_mag_d462_2";
                    };
                };
            };
            class rhs_ammoslot_2: rhs_ammoslot_1 {
                displayName = "Ammo slot #2 count";
                tooltip = "Define number of rounds stored inside of type #2. Max 40. Leave -1 for default loadout";
                property = "rhs_ammoslot_2";
            };
            class rhs_ammoslot_3_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #3 type";
                tooltip = "Define type of shell for #3 slot [Illumination rounds]";
                property = "rhs_ammoslot_3_type";
                class values {
                    class rhs_mag_s463_2 {
                        name = "$STR_rhs_mag_s463";
                        value = "rhs_mag_s463_2";
                        defaultValue = "rhs_mag_s463_2";
                    };
                };
            };
            class rhs_ammoslot_3: rhs_ammoslot_1 {
                displayName = "Ammo slot #3 count";
                tooltip = "Define number of rounds stored inside of type #3. Max 40. Leave -1 for default loadout";
                property = "rhs_ammoslot_3";
            };
            class rhs_ammoslot_4_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #4 type";
                tooltip = "Define type of shell for #4 slot [Laser guided rounds]";
                property = "rhs_ammoslot_4_type";
                class values {
                    class rhs_mag_3of69m_2 {
                        name = "$STR_rhs_mag_3of69m";
                        value = "rhs_mag_3of69m_2";
                        defaultValue = "rhs_mag_3of69m_2";
                    };
                };
            };
            class rhs_ammoslot_4: rhs_ammoslot_1 {
                displayName = "Ammo slot #4 count";
                tooltip = "Define number of rounds stored inside of type #4. Max 40. Leave -1 for default loadout";
                property = "rhs_ammoslot_4";
            };
        };
        class RHS_TowingSystem {
            class Cargo {
                rhs_fakeVehicle = "rhs_D30_towingVehicle";
                rhs_animationsOnAttach[] = {"RaiseWheels", 1};
                rhs_animationsOnDetach[] = {"RaiseWheels", 0};
                rhs_towedMass = 1420;
                rhs_towingPoint = "tow_point";
                rhs_additionalRopeOffset[] = {0, 0, 0.6};
                rhs_ropeLength = 0.1;
                rhs_maxAttachDistance = 2;
                rhs_dragOffset[] = {0, 0.6, 0.9};
            };
        };
    };
    class rhs_tow_pin: ThingX {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tow_pin.paa";
        scope = 1;
        collisionEffect = "";
        scopeCurator = 0;
        model = "\rhsafrf\addons\rhs_heavyweapons\D30\pin";
        accuracy = 1000;
        animated = 0;
        countsForScoreboard = 0;
        class DestructionEffects {};
    };
    class rhs_D30_msv: rhs_D30_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_D30_msv.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_rifleman";
        typicalCargo[] = {"rhs_msv_rifleman"};
    };
    class rhs_D30_vdv: rhs_D30_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_D30_vdv.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_rifleman";
        typicalCargo[] = {"rhs_vdv_rifleman"};
    };
    class rhs_D30_vmf: rhs_D30_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_D30_vdv.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_rifleman";
        typicalCargo[] = {"rhs_vmf_flora_rifleman"};
    };
    class rhs_D30_ins: rhs_D30_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_D30_ins.paa";
        scope = 1;
        side = 2;
        author = "Red Hammer Studios";
        faction = "rhs_faction_insurgents";
        crew = "rhs_g_Soldier_F";
        typicalCargo[] = {"rhs_g_Soldier_F"};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {
                    "rhs_mag_of462_10",
                    "rhs_mag_d462_2",
                    "rhs_mag_s463_2",
                    "rhs_mag_3of69m_2"
                };
            };
        };
    };
    class rhs_D30_AT_base: rhs_D30_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_D30_AT_base.paa";
        displayName = "$STR_rhs_DN_d30_AT";
        author = "$STR_RHS_AUTHOR_FULL";
        availableForSupportTypes[] = {};
        artilleryScanner = 0;
        sensorPosition = "gunnerView";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                elevationMode = 0;
                maxVerticalRotSpeed = 0.105;
                weapons[] = {"rhs_weap_D30_at", "rhs_weap_fcs_noLRF"};
                memoryPointGunnerOptics = "gunnerview";
                maxElev = 70;
                magazines[] = {
                    "rhs_mag_bk6m",
                    "rhs_mag_bk6m",
                    "rhs_mag_bk6m",
                    "rhs_mag_bk6m",
                    "rhs_mag_bk6m",
                    "rhs_mag_bk6m",
                    "rhs_mag_bk6m",
                    "rhs_mag_bk6m",
                    "rhs_mag_bk6m",
                    "rhs_mag_bk6m",
                    "rhs_mag_of462_direct",
                    "rhs_mag_of462_direct",
                    "rhs_mag_of462_direct",
                    "rhs_mag_of462_direct",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
            };
        };
        class AnimationSources: AnimationSources {
            class recoil {
                source = "door";
                animPeriod = 6;
            };
        };
        class Attributes: Attributes {
            class rhs_caseDeleteTime: rhs_caseDeleteTime {};
            class rhs_ammoslot_1_type {
                displayName = "Ammo slot #1 type";
                tooltip = "Define type of shell for #1 slot [HE rounds]";
                property = "rhs_ammoslot_1_type";
                control = "Combo";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = 0;
                typeName = "STRING";
                class values {
                    class rhs_mag_3of56_direct_10 {
                        name = "$STR_rhs_mag_3of56_direct";
                        value = "rhs_mag_3of56_direct_10";
                        defaultValue = "rhs_mag_3of56_direct_10";
                    };
                    class rhs_mag_of462_direct_10 {
                        name = "$STR_rhs_mag_of462_direct";
                        value = "rhs_mag_of462_direct_10";
                        defaultValue = "rhs_mag_of462_direct_10";
                    };
                };
            };
            class rhs_ammoslot_1 {
                displayName = "Ammo slot #1 count";
                tooltip = "Define number of rounds stored inside of type #1. Max 40. Leave -1 for default loadout";
                property = "rhs_ammoslot_1";
                control = "Edit";
                expression = "if(_value >= 0)then{ [_this,_value,'%s',40,['rhs_ammoslot_1','rhs_ammoslot_2','rhs_ammoslot_3','rhs_ammoslot_4','rhs_ammoslot_5']] spawn rhs_fnc_Eden_DefineLoadout};";
                defaultValue = "-1";
                validate = "NUMBER";
                typeName = "NUMBER";
            };
            class rhs_ammoslot_2_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #2 type";
                tooltip = "Define type of shell for #2 slot [Smoke rounds]";
                property = "rhs_ammoslot_2_type";
                class values {
                    class rhs_mag_d462_2 {
                        name = "$STR_rhs_mag_d462";
                        value = "rhs_mag_d462_2";
                        defaultValue = "rhs_mag_d462_2";
                    };
                };
            };
            class rhs_ammoslot_2: rhs_ammoslot_1 {
                displayName = "Ammo slot #2 count";
                tooltip = "Define number of rounds stored inside of type #2. Max 40. Leave -1 for default loadout";
                property = "rhs_ammoslot_2";
            };
            class rhs_ammoslot_3_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #3 type";
                tooltip = "Define type of shell for #3 slot [Illumination rounds]";
                property = "rhs_ammoslot_3_type";
                class values {
                    class rhs_mag_s463_2 {
                        name = "$STR_rhs_mag_s463";
                        value = "rhs_mag_s463_2";
                        defaultValue = "rhs_mag_s463_2";
                    };
                };
            };
            class rhs_ammoslot_3: rhs_ammoslot_1 {
                displayName = "Ammo slot #3 count";
                tooltip = "Define number of rounds stored inside of type #3. Max 40. Leave -1 for default loadout";
                property = "rhs_ammoslot_3";
            };
            class rhs_ammoslot_4_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #4 type";
                tooltip = "Define type of shell for #4 slot [Laser guided rounds]";
                property = "rhs_ammoslot_4_type";
                class values {
                    class rhs_mag_3of69m_2 {
                        name = "$STR_rhs_mag_3of69m";
                        value = "rhs_mag_3of69m_2";
                        defaultValue = "rhs_mag_3of69m_2";
                    };
                };
            };
            class rhs_ammoslot_4: rhs_ammoslot_1 {
                displayName = "Ammo slot #4 count";
                tooltip = "Define number of rounds stored inside of type #4. Max 40. Leave -1 for default loadout";
                property = "rhs_ammoslot_4";
            };
            class rhs_ammoslot_5_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #5 type";
                tooltip = "Define type of shell for #5 slot [HEAT rounds]";
                property = "rhs_ammoslot_5_type";
                class values {
                    class rhs_mag_bk6m_26 {
                        name = "$STR_rhs_mag_bk6m";
                        value = "rhs_mag_bk6m_26";
                        defaultValue = "rhs_mag_bk6m_26";
                    };
                    class rhs_mag_bk13_26 {
                        name = "$STR_rhs_mag_bk13";
                        value = "rhs_mag_bk13_26";
                        defaultValue = "rhs_mag_bk13_26";
                    };
                };
            };
            class rhs_ammoslot_5: rhs_ammoslot_1 {
                displayName = "Ammo slot #5 count";
                tooltip = "Define number of rounds stored inside of type #5. Max 40. Leave -1 for default loadout";
                property = "rhs_ammoslot_5";
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                fired = "_this spawn rhs_fnc_fired_d30;";
            };
        };
    };
    class rhs_D30_at_msv: rhs_D30_AT_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_D30_at_msv.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_rifleman";
        typicalCargo[] = {"rhs_msv_rifleman"};
    };
    class rhs_D30_at_vdv: rhs_D30_AT_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_D30_at_vdv.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_rifleman";
        typicalCargo[] = {"rhs_vdv_rifleman"};
    };
    class rhs_D30_at_vmf: rhs_D30_AT_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_D30_at_vdv.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_rifleman";
        typicalCargo[] = {"rhs_vmf_flora_rifleman"};
    };
    class rhs_D30_at_ins: rhs_D30_AT_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_D30_at_ins.paa";
        scope = 1;
        side = 2;
        author = "Red Hammer Studios";
        faction = "rhs_faction_insurgents";
        crew = "rhs_g_Soldier_F";
        typicalCargo[] = {"rhs_g_Soldier_F"};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {
                    "rhs_mag_bk6m",
                    "rhs_mag_bk6m",
                    "rhs_mag_bk6m",
                    "rhs_mag_bk6m",
                    "rhs_mag_bk6m",
                    "rhs_mag_bk6m",
                    "rhs_mag_bk6m",
                    "rhs_mag_bk6m",
                    "rhs_mag_bk6m",
                    "rhs_mag_bk6m",
                    "rhs_mag_of462",
                    "rhs_mag_of462",
                    "rhs_mag_of462",
                    "rhs_mag_of462"
                };
            };
        };
    };
    class rhs_D30_towingVehicle_base: RHS_TowedWeapons_Base {
        displayname = "D30 Tow";
        model = "\rhsafrf\addons\rhs_heavyweapons\D30\D30";
        driveOnComponent[] = {"wheels"};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_heavyweapons\d30\data\d30_co.paa"};
        class AnimationSources {
            class leftT_source {
                source = "user";
                animPeriod = 1;
                initPhase = 2.3;
            };
            class rightT_source: leftT_source {
                initPhase = 2.3;
            };
            class leftW_source: leftT_source {
                initPhase = 0.7;
            };
            class rightW_source: leftW_source {};
            class maingunT_source {
                source = "user";
                animPeriod = 1;
                initPhase = -0.165;
            };
            class mainTurretT_source: maingunT_source {
                initPhase = 0;
            };
            class szpilki_source {
                source = "user";
                animPeriod = 0.1;
                initPhase = 0.7;
            };
            class body_source {
                source = "user";
                animPeriod = 0.6;
                initPhase = 0;
            };
            class d30_kolo {
                source = "user";
                animPeriod = 0.6;
                initPhase = 0;
            };
            class fold_arty_handler {
                source = "user";
                animPeriod = 0.6;
                initPhase = 0;
            };
            class Wheel_1_source {
                source = "wheel";
                wheel = "Wheel_1";
            };
            class Wheel_2_source {
                source = "wheel";
                wheel = "Wheel_2";
            };
            class RaiseWheels {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
        };
        maxOmega = 1000;
        maxSpeed = 40;
        class Wheels {
            class Wheel_1 {
                steering = 1;
                side = "left";
                boneName = "damper_front";
                suspForceAppPointOffset = "wheel_1_center";
                tireForceAppPointOffset = "wheel_1_center";
                center = "wheel_1_center";
                boundary = "wheel_1_bound";
                suspTravelDirection[] = {0, -1, 0};
                width = 0.27;
                mass = 115;
                MOI = 50.3885;
                dampingRate = 0.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 0;
                maxHandBrakeTorque = 0;
                maxCompression = 0.1;
                maxDroop = 0.1;
                sprungMass = -1;
                springStrength = 11600;
                springDamperRate = 3280;
                longitudinalStiffnessPerUnitGravity = 25000;
                latStiffX = 12.5;
                latStiffY = 18;
                frictionVsSlipGraph[] = {{0, 5}, {0.5, 2}, {1, 1}};
            };
            class Wheel_2: Wheel_1 {
                steering = 1;
                side = "right";
                boneName = "damper_left";
                suspForceAppPointOffset = "wheel_2_center";
                tireForceAppPointOffset = "wheel_2_center";
                center = "wheel_2_center";
                boundary = "wheel_2_bound";
            };
        };
    };
    class rhs_D30_towingVehicle: rhs_D30_towingVehicle_base {
        scope = 1;
    };
    class rhs_Kornet_Base: AT_01_base_F {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Kornet_Base.paa";
        dlc = "RHS_AFRF";
        class assembleInfo {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {"rhs_Kornet_Gun_Bag", "rhs_Kornet_Tripod_Bag"};
            displayName = "";
        };
        scope = 0;
        displayname = "$STR_rhs_DN_kornet";
        class Library {
            libTextDesc = "$STR_rhs_LIB_AT13";
        };
        model = "\rhsafrf\addons\rhs_heavyweapons\kornet\kornet.p3d";
        icon = "rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_metis_at13_CA.paa";
        picture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\rhs_Kornet_9M133_2_msv_ca.paa";
        mapSize = 1.5;
        sensorPosition = "gunnerView";
        class Hitpoints {
            class HitHull {
                armor = 1;
                passThrough = 1;
                name = "telo";
            };
        };
        class ViewPilot: ViewPilot {
            initAngleX = -0;
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
        hiddenSelections[] = {};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"rhs_weap_9K133_launcher"};
                magazines[] = {"rhs_mag_9m133", "rhs_mag_9m133", "rhs_mag_9m133"};
                gunnerAction = "RHS_Kornet_Gunner";
                gunnerGetInAction = "RHS_StaticWeapon_GetOut_Medium";
                gunnerGetOutAction = "RHS_StaticWeapon_GetOut_Medium";
                memorypointgunneroptics = "gunnerview";
                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1pn79_6x";
                gunnerOpticsEffect[] = {"OpticsCHAbera1", "OpticsBlur2"};
                gunnerRightHandAnimName = "horizontal_handle";
                gunnerLeftHandAnimName = "vertical_handle";
                turretInfoType = "RHS_RscInfoStaticWeapon";
                maxHorizontalRotSpeed = 0.35;
                maxVerticalRotSpeed = 0.35;
                minTurn = -45;
                maxTurn = 45;
                initTurn = 0;
                minElev = -10;
                maxElev = 20;
                initElev = 0;
                ejectDeadGunner = 0;
                gunnerForceOptics = 0;
                class ViewGunner {
                    initAngleX = 5;
                    minAngleX = -10;
                    maxAngleX = 20;
                    initAngleY = 0;
                    minAngleY = -60;
                    maxAngleY = 60;
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                class ViewOptics {
                    initAngleX = 5;
                    minAngleX = -10;
                    maxAngleX = 20;
                    initAngleY = 0;
                    minAngleY = -60;
                    maxAngleY = 60;
                    initFov = 0.058;
                    minFov = 0.058;
                    maxFov = 0.058;
                    visionMode[] = {"Normal", "TI"};
                    thermalMode[] = {4, 5};
                };
                disableSoundAttenuation = 1;
                class OpticsIn {
                    class Wide: ViewOptics {
                        opticsDisplayName = "W";
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1pn79_6x";
                    };
                    class Medium: Wide {
                        opticsDisplayName = "M";
                        initFov = 0.0292;
                        minFov = 0.0292;
                        maxFov = 0.0292;
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1pn79_12x";
                    };
                    class Narrow: Wide {
                        opticsDisplayName = "N";
                        initFov = 0.0175;
                        minFov = 0.0175;
                        maxFov = 0.0175;
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1pn79_20x";
                    };
                };
                class OpticsOut {
                    class ViewGunner: ViewGunner {
                        gunnerOpticsModel = "";
                        gunnerOpticsEffect[] = {};
                    };
                };
            };
        };
        class AnimationSources {
            class revolving {
                source = "revolving";
                weapon = "rhs_weap_9K133_launcher";
            };
            class ReloadMagazine {
                source = "reloadmagazine";
                weapon = "rhs_weap_9K133_launcher";
            };
        };
    };
    class rhs_Kornet_9M133_2_msv: rhs_Kornet_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Kornet_9M133_2_msv.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_rifleman";
        typicalCargo[] = {"rhs_msv_rifleman"};
    };
    class rhs_Kornet_9M133_2_vdv: rhs_Kornet_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Kornet_9M133_2_vdv.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_vdv";
        crew = "rhs_vdv_rifleman";
        typicalCargo[] = {"rhs_vdv_rifleman"};
    };
    class rhs_Kornet_9M133_2_vmf: rhs_Kornet_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Kornet_9M133_2_vdv.paa";
        scope = 2;
        side = 0;
        author = "Red Hammer Studios";
        faction = "rhs_faction_vmf";
        crew = "rhs_vmf_flora_rifleman";
        typicalCargo[] = {"rhs_vmf_flora_rifleman"};
    };
    class rhs_Kornet_9M133_2_ins: rhs_Kornet_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Kornet_9M133_2_ins.paa";
        scope = 1;
        side = 2;
        author = "Red Hammer Studios";
        faction = "rhs_faction_insurgents";
        crew = "rhs_g_Soldier_F";
        typicalCargo[] = {"rhs_g_Soldier_F"};
    };
    class rhs_Kornet_9M133_1_ins: rhs_Kornet_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Kornet_9M133_1_ins.paa";
        scope = 1;
        side = 2;
        author = "Red Hammer Studios";
        faction = "rhs_faction_insurgents";
        crew = "rhs_g_Soldier_F";
        typicalCargo[] = {"rhs_g_Soldier_F"};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"rhs_weap_9K115_1_launcher"};
                magazines[] = {
                    "rhs_mag_9M131",
                    "rhs_mag_9M131",
                    "rhs_mag_9M131",
                    "rhs_mag_9M131"
                };
            };
        };
        class AnimationSources {
            class revolving {
                source = "revolving";
                weapon = "rhs_weap_9K115_1_launcher";
            };
            class ReloadMagazine {
                source = "reloadmagazine";
                weapon = "rhs_weap_9K115_1_launcher";
            };
        };
    };
    class Bag_Base;
    class Weapon_Bag_Base: Bag_Base {
        class assembleInfo;
    };
    class RHS_NSV_Gun_Bag: Weapon_Bag_Base {
        dlc = "RHS_AFRF";
        scope = 2;
        author = "$STR_A3_Bohemia_Interactive";
        displayName = "NSV Gun Bag";
        mass = 382;
        model = "\rhsafrf\addons\rhs_heavyweapons\bags\StaticX.p3d";
        picture = "\rhsafrf\addons\rhs_heavyweapons\bags\staticX_CA.paa";
        icon = "\rhsafrf\addons\rhs_heavyweapons\bags\mapIcon_backpack_CA.paa";
        class assembleInfo {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {};
            displayName = "";
        };
        faction = "rhs_faction_msv";
        editorSubcategory = "EdSubcat_DismantledWeapons";
    };
    class RHS_NSV_Tripod_Bag: Weapon_Bag_Base {
        dlc = "RHS_AFRF";
        scope = 2;
        mass = 250;
        author = "$STR_A3_Bohemia_Interactive";
        displayName = "NSV 6T7 Tripod Bag";
        model = "\rhsafrf\addons\rhs_heavyweapons\bags\StaticY.p3d";
        picture = "\rhsafrf\addons\rhs_heavyweapons\bags\staticY_CA.paa";
        icon = "\rhsafrf\addons\rhs_heavyweapons\bags\mapIcon_backpack_CA.paa";
        faction = "rhs_faction_msv";
        class assembleInfo: assembleInfo {
            displayName = "$STR_A3_CfgVehicles_B_HMG_01_Wpn_assembleInfo0";
            assembleTo = "RHS_NSV_TriPod_MSV";
            base[] = {"RHS_NSV_Gun_Bag"};
        };
        editorSubcategory = "EdSubcat_DismantledWeapons";
    };
    class RHS_DShkM_Gun_Bag: RHS_NSV_Gun_Bag {
        author = "$STR_A3_Bohemia_Interactive";
        displayName = "DShkM Gun Bag";
        mass = 380;
        class assembleInfo {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {};
            displayName = "";
        };
        faction = "rhs_faction_insurgents";
    };
    class RHS_DShkM_TripodHigh_Bag: RHS_NSV_Tripod_Bag {
        mass = 420;
        author = "$STR_A3_Bohemia_Interactive";
        displayName = "DShkM High Tripod Bag";
        faction = "rhs_faction_insurgents";
        class assembleInfo: assembleInfo {
            displayName = "$STR_A3_CfgVehicles_B_HMG_01_Wpn_assembleInfo0";
            assembleTo = "RHS_DSHKM_INS";
            base[] = {"RHS_DShkM_Gun_Bag"};
        };
    };
    class RHS_DShkM_TripodLow_Bag: RHS_DShkM_TripodHigh_Bag {
        mass = 300;
        displayName = "DShkM Low Tripod Bag";
        faction = "rhs_faction_insurgents";
        class assembleInfo: assembleInfo {
            assembleTo = "rhs_DSHKM_Mini_TriPod_ins";
        };
    };
    class RHS_Kord_Gun_Bag: RHS_DShkM_Gun_Bag {
        displayName = "KORD Gun Bag";
        faction = "rhs_faction_msv";
        mass = 250;
    };
    class RHS_Kord_Tripod_Bag: RHS_DShkM_TripodHigh_Bag {
        mass = 450;
        displayName = "KORD 6T7 Tripod Bag";
        faction = "rhs_faction_msv";
        class assembleInfo: assembleInfo {
            assembleTo = "RHS_Kord_MSV";
            base[] = {"RHS_Kord_Gun_Bag"};
        };
    };
    class RHS_Metis_Gun_Bag: RHS_DShkM_Gun_Bag {
        displayName = "9K115-2 'Metis-M' Gun Bag";
        mass = 80;
    };
    class RHS_Metis_Tripod_Bag: RHS_DShkM_TripodHigh_Bag {
        mass = 70;
        displayName = "9K115-2 'Metis-M' Tripod Bag";
        class assembleInfo: assembleInfo {
            displayName = "$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
            assembleTo = "rhs_Metis_9k115_2_msv";
            base[] = {"RHS_Metis_Gun_Bag"};
        };
    };
    class RHS_Kornet_Gun_Bag: RHS_NSV_Gun_Bag {
        model = "\rhsafrf\addons\rhs_heavyweapons\bags\rhs_kornet_tube.p3d";
        displayName = "9K133 'Kornet' Gun Bag";
        mass = 80;
        hiddenselections[] = {"camo"};
        hiddenselectionstextures[] = {"\rhsafrf\addons\rhs_heavyweapons\kornet\data\rhs_kornet_tube_CO.paa"};
    };
    class RHS_Kornet_Tripod_Bag: RHS_NSV_Tripod_Bag {
        model = "\rhsafrf\addons\rhs_heavyweapons\bags\rhs_kornet_base.p3d";
        mass = 70;
        displayName = "9K133 'Kornet' Tripod Bag";
        class assembleInfo: assembleInfo {
            displayName = "$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
            assembleTo = "rhs_Kornet_9M133_2_msv";
            base[] = {"RHS_Kornet_Gun_Bag"};
        };
    };
    class RHS_AGS30_Gun_Bag: RHS_DShkM_Gun_Bag {
        displayName = "AGS-30 Gun Bag";
        faction = "rhs_faction_msv";
        mass = 100;
    };
    class RHS_AGS30_Tripod_Bag: RHS_DShkM_TripodHigh_Bag {
        mass = 60;
        displayName = "AGS-30 6P17 Tripod Bag";
        faction = "rhs_faction_msv";
        class assembleInfo: assembleInfo {
            displayName = "$STR_A3_CfgVehicles_B_gmg_01_Wpn_assembleInfo0";
            assembleTo = "RHS_AGS30_TriPod_MSV";
            base[] = {"RHS_AGS30_Gun_Bag"};
        };
    };
    class RHS_SPG9_Gun_Bag: RHS_DShkM_Gun_Bag {
        displayName = "SPG-9 Gun Bag";
        mass = 470;
    };
    class RHS_SPG9_Tripod_Bag: RHS_DShkM_TripodHigh_Bag {
        mass = 110;
        displayName = "SPG-9 Tripod Bag";
        class assembleInfo: assembleInfo {
            displayName = "$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
            assembleTo = "rhs_SPG9_INS";
            base[] = {"RHS_SPG9_Gun_Bag"};
        };
    };
    class RHS_Podnos_Gun_Bag: RHS_DShkM_Gun_Bag {
        displayName = "2B14-1 'Podnos' Gun Bag";
        mass = 162;
    };
    class RHS_Podnos_Bipod_Bag: RHS_DShkM_TripodHigh_Bag {
        mass = 139;
        displayName = "2B14-1 'Podnos' Bipod Bag";
        class assembleInfo: assembleInfo {
            displayName = "$STR_A3_CfgVehicles_B_Mortar_01_Wpn_assembleInfo0";
            assembleTo = "rhs_2b14_82mm_msv";
            base[] = {"RHS_Podnos_Gun_Bag"};
        };
    };
};
class CfgNonAIVehicles {
    class ProxyWeapon;
    class Proxyrhs_9m14: ProxyWeapon {
        model = "\rhsafrf\addons\rhs_heavyweapons\atgm\rhs_9m14.p3d";
        simulation = "maverickweapon";
    };
    class ProxyAGS_magazine: ProxyWeapon {
        model = "\rhsafrf\addons\rhs_heavyweapons\AGS30\AGS_magazine.p3d";
        simulation = "maverickweapon";
    };
    class Proxysts_pkm_mag_proxy: ProxyWeapon {
        model = "\rhsafrf\addons\rhs_tigr\sts_proxies\sts_pkm_mag_proxy.p3d";
        simulation = "maverickweapon";
    };
};
