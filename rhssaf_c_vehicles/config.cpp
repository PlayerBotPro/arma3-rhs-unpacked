class CfgPatches {
    class rhssaf_c_vehicles {
        name = "RHS: SAF vehicles";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        url = "http://www.rhsmods.org";
        units[] = {
            "rhssaf_army_kraz255b1_flatbed",
            "rhssaf_army_o_kraz255b1_flatbed",
            "rhssaf_army_kraz255b1_pmp",
            "rhssaf_army_o_kraz255b1_pmp",
            "rhssaf_m998_olive_2dr_halftop",
            "rhssaf_army_o_m998_olive_2dr_halftop",
            "rhssaf_m998_olive_2dr_fulltop",
            "rhssaf_army_o_m998_olive_2dr_fulltop",
            "rhssaf_m1025_olive",
            "rhssaf_army_o_m1025_olive",
            "rhssaf_m1025_olive_m2",
            "rhssaf_m1151_olive",
            "rhssaf_army_o_m1151_olive",
            "rhssaf_m1151_olive_pkm",
            "rhssaf_army_o_m1151_olive_pkm",
            "rhssaf_m1152_olive",
            "rhssaf_army_o_m1152_olive",
            "rhssaf_m1152_rsv_olive",
            "rhssaf_army_o_m1152_rsv_olive",
            "rhssaf_m1152_TCV_olive",
            "rhssaf_army_o_m1152_tcv_olive",
            "rhssaf_army_o_m1025_olive_m2",
            "rhssaf_army_ural",
            "rhssaf_army_o_ural",
            "rhssaf_army_ural_open",
            "rhssaf_army_o_ural_open",
            "rhssaf_army_ural_fuel",
            "rhssaf_army_o_ural_fuel",
            "rhssaf_un_ural",
            "rhssaf_army_d30",
            "rhssaf_army_o_d30",
            "rhssaf_army_ags30_tripod",
            "rhssaf_army_o_ags30_tripod",
            "rhssaf_army_nsv_tripod",
            "rhssaf_army_o_nsv_tripod",
            "rhssaf_army_m252",
            "rhssaf_army_o_m252",
            "rhssaf_army_metis_9k115",
            "rhssaf_army_o_metis_9k115",
            "rhssaf_army_m2staticmg_minitripod",
            "rhssaf_army_o_m2staticmg_minitripod",
            "rhssaf_airforce_ht40",
            "rhssaf_airforce_o_ht40",
            "rhssaf_airforce_ht48",
            "rhssaf_airforce_o_ht48",
            "rhssaf_army_t72s",
            "rhssaf_army_o_t72s",
            "rhssaf_army_2s1",
            "rhssaf_army_o_2s1",
            "rhssaf_army_pts",
            "rhssaf_army_o_pts",
            "rhssaf_airforce_l_18_101",
            "rhssaf_airforce_o_l_18_101",
            "rhssaf_airforce_l_18",
            "rhssaf_airforce_o_l_18"
        };
        weapons[] = {};
        requiredVersion = 2;
        requiredAddons[] = {"rhssaf_main"};
        version = "VERSION";
        text = "QUOTE(RHS_TAG VERSION)";
    };
};
class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class CfgVehicles {
    class rhs_d30_base;
    class rhs_nsv_tripod_base;
    class RHS_AGS30_TriPod_base;
    class rhs_Metis_Base;
    class RHS_M252_Base;
    class RHS_M2StaticMG_MiniTripod_base;
    class Air;
    class Helicopter: Air {
        class Turrets;
    };
    class Helicopter_Base_F: Helicopter {
        class Turrets: Turrets {
            class MainTurret;
        };
        class CargoTurret;
    };
    class Plane: Air {
        class HitPoints;
    };
    class Plane_Base_F: Plane {
        class NewTurret;
        class Turrets;
        class ViewPilot;
        class AnimationSources;
        class HitPoints: HitPoints {
            class HitHull;
        };
        class Components;
    };
    class Heli_Light_02_base_F;
    class RHS_Mi8_base: Heli_Light_02_base_F {
        class TextureSources {
            class RHS_SAF_Green {
                displayName = "SAF (Green)";
                author = "$STR_RHSSAF_AUTHOR_FULL";
                textures[] = {
                    "rhssaf\addons\rhssaf_t_vehicle_ret\mi17\data\rhssaf_mi8_body_green_co.paa",
                    "rhssaf\addons\rhssaf_t_vehicle_ret\mi8\rhssaf_mi8_det_camo_co.paa",
                    "a3\data_f\clear_empty.paa",
                    "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_notext_ca.paa"
                };
                factions[] = {"rhssaf_faction_airforce"};
            };
        };
    };
    class rhs_mi8t_base: RHS_Mi8_base {
        class TextureSources {
            class RHS_SAF_Camo {
                displayName = "SAF (Camo)";
                author = "$STR_RHSSAF_AUTHOR_FULL";
                textures[] = {
                    "rhssaf\addons\rhssaf_t_vehicle_ret\mi8\rhssaf_mi8_body_camo_co.paa",
                    "rhssaf\addons\rhssaf_t_vehicle_ret\mi8\rhssaf_mi8_det_camo_co.paa",
                    "rhssaf\addons\rhssaf_t_vehicle_ret\mi8\rhssaf_mi8_tv2_camo_co.paa",
                    "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_notext_ca.paa"
                };
                factions[] = {"rhssaf_faction_airforce"};
            };
            class RHS_SAF_Green {
                displayName = "SAF (Green)";
                author = "$STR_RHSSAF_AUTHOR_FULL";
                textures[] = {
                    "rhssaf\addons\rhssaf_t_vehicle_ret\mi17\data\rhssaf_mi8_body_green_co.paa",
                    "rhssaf\addons\rhssaf_t_vehicle_ret\mi8\rhssaf_mi8_det_camo_co.paa",
                    "rhssaf\addons\rhssaf_t_vehicle_ret\mi8\rhssaf_mi8_tv2_green_co.paa",
                    "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_notext_ca.paa"
                };
                factions[] = {"rhssaf_faction_airforce"};
            };
        };
    };
    class RHS_Mi8_VVS_Base: RHS_Mi8_base {};
    class RHS_Mi8mt_vvs: RHS_Mi8_VVS_Base {};
    class RHS_Mi8mt_Cargo_vvs: RHS_Mi8mt_vvs {};
    class LandVehicle;
    class Car: LandVehicle {
        class HitPoints;
        class NewTurret;
    };
    class Car_F: Car {
        class AnimationSources;
        class EventHandlers;
        class Turrets {
            class MainTurret: NewTurret {
                class ViewOptics;
            };
        };
    };
    class Offroad_01_base_F: Car_F {};
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
    };
    class RHS_UAZ_Base: Offroad_01_base_F {
        class Turrets: Turrets {};
    };
    class rhs_uaz_open_Base: RHS_UAZ_Base {};
    class Truck_F: Car_F {
        class ViewPilot;
        class HitPoints: HitPoints {
            class HitLFWheel;
            class HitLBWheel;
            class HitLMWheel;
            class HitLF2Wheel;
            class HitRFWheel;
            class HitRBWheel;
            class HitRMWheel;
            class HitRF2Wheel;
        };
        class AnimationSources;
    };
    class Truck_02_base_F: Truck_F {
        class HitPoints: HitPoints {
            class HitFuel;
            class HitEngine;
        };
        class AnimationSources: AnimationSources {};
    };
    class O_Truck_02_covered_F: Truck_02_base_F {
        class CargoTurret;
        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret {};
            class CargoTurret_02: CargoTurret_01 {};
        };
        class EventHandlers;
    };
    class MRAP_01_base_F: Car_F {
        class Sounds;
        class EventHandlers;
    };
    class rhsusf_hmmwe_base: MRAP_01_base_F {
        class Sounds;
        class AnimationSources;
    };
    class rhsusf_m998_w_2dr: rhsusf_hmmwe_base {
        class CargoTurret;
        class Turrets: Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
        class AnimationSources: AnimationSources {
            class hide_backTop;
            class hide_frontTop;
            class hide_snorkel;
            class hide_middleTop;
            class hide_CIP;
            class hide_BFT;
            class hide_Antenna;
            class hide_A2_Parts;
            class Hide_A2Bumper;
        };
    };
    class rhsusf_m998_w_2dr_halftop: rhsusf_m998_w_2dr {
        class AnimationSources: AnimationSources {
            class hide_frontTop;
        };
        class Turrets: Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };
    class rhsusf_m998_w_2dr_fulltop: rhsusf_m998_w_2dr_halftop {
        class AnimationSources: AnimationSources {
            class hide_backTop;
        };
        class Sounds: Sounds {
            class RainIn;
            class RainExt;
        };
        class Turrets: Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };
    class rhsusf_m998_w_4dr: rhsusf_m998_w_2dr {
        class CargoTurret;
        class Turrets: Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
        };
    };
    class rhsusf_m998_w_4dr_halftop: rhsusf_m998_w_4dr {
        class AnimationSources: AnimationSources {
            class hide_frontTop;
            class hide_middleTop;
        };
        class CargoTurret;
        class Turrets: Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };
    class rhsusf_m998_w_4dr_fulltop: rhsusf_m998_w_4dr_halftop {
        class AnimationSources: AnimationSources {
            class hide_backTop;
            class hide_middleTop;
        };
        class Sounds: Sounds {
            class RainIn;
            class RainExt;
        };
        class Turrets;
    };
    class rhsusf_m1025_w: rhsusf_m998_w_4dr_fulltop {
        class AnimationSources: AnimationSources {
            class trunk;
        };
    };
    class rhsusf_m1025_w_m2: rhsusf_m1025_w {
        class AnimationSources: AnimationSources {
            class ReloadAnim;
        };
    };
    class rhsusf_m1151_base: MRAP_01_base_F {
        class textureSources {
            class rhssaf_green {
                displayName = "SAF";
                author = "$STR_RHSSAF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1151_Ext_o_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1152M1165_o_CO.paa"
                };
                factions[] = {};
                decals[] = {7};
            };
        };
    };
    class rhsusf_m1152_base: rhsusf_m1151_base {
        class textureSources {
            class rhssaf_green {
                displayName = "SAF";
                author = "$STR_RHSSAF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1151_Ext_o_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1152M1165_o_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_g_co.paa"
                };
                factions[] = {};
                decals[] = {7};
            };
        };
    };
    class rhsusf_m1152_TCV_base;
    class rhsusf_m1151_GPK_base: rhsusf_m1151_base {};
    class rhsusf_M1151_GPK_PKM_base: rhsusf_m1151_GPK_base {
        class textureSources: textureSources {
            class rhssaf_green {
                displayName = "SAF";
                author = "$STR_RHSSAF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1151_Ext_o_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1152M1165_o_CO.paa",
                    "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_GPK_wd_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
                };
                factions[] = {};
                decals[] = {7};
            };
        };
    };
    class RHS_Ural_BaseTurret: Truck_F {
        class Turrets;
        class AnimationSources: AnimationSources {
            class people_tag_hide;
        };
    };
    class RHS_Ural_Base: RHS_Ural_BaseTurret {};
    class RHS_Ural_MSV_Base: RHS_Ural_Base {};
    class RHS_Ural_Civ_Base: RHS_Ural_Base {};
    class RHS_Ural_Open_MSV_01: RHS_Ural_MSV_Base {};
    class RHS_Ural_Support_MSV_Base_01: RHS_Ural_MSV_Base {};
    class RHS_Ural_Fuel_MSV_01: RHS_Ural_Support_MSV_Base_01 {};
    class rhs_kraz255_base: O_Truck_02_covered_F {};
    class rhs_kraz255b1_base: rhs_kraz255_base {};
    class rhs_kraz255b1_flatbed_base: rhs_kraz255b1_base {};
    class rhs_kraz255b1_pmp_base: rhs_kraz255b1_flatbed_base {};
    class rhs_a3t72tank_base: Tank_F {
        class AnimationSources: AnimationSources {
            class hide_com_shield;
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics;
                    class CommanderMG;
                };
            };
        };
    };
    class rhs_t72bd_tv: rhs_a3t72tank_base {
        class EventHandlers;
    };
    class APC_Tracked_02_base_F: Tank_F {
        class EventHandlers;
    };
    class rhs_2s1tank_base: Tank_F {
        class TextureSources {
            class RHS_SAF_Camo {
                displayName = "SAF (Camo)";
                author = "$STR_RHSSAF_AUTHOR_FULL";
                textures[] = {
                    "rhssaf\addons\rhssaf_t_vehicle_ret\2s1\data\rhs_2s1_saf_hull_co.paa",
                    "rhssaf\addons\rhssaf_t_vehicle_ret\2s1\data\rhs_2s1_saf_turret_co.paa",
                    "rhssaf\addons\rhssaf_t_vehicle_ret\2s1\data\rhs_2s1_saf_suspension_red_co.paa",
                    "rhssaf\addons\rhssaf_t_vehicle_ret\2s1\data\rhs_2s1_saf_suspension_green_co.paa",
                    "rhssaf\addons\rhssaf_t_vehicle_ret\2s1\data\rhs_2s1_saf_suspension_green_co.paa",
                    "rhssaf\addons\rhssaf_t_vehicle_ret\2s1\data\rhs_2s1_saf_suspension_black_co.paa",
                    "rhssaf\addons\rhssaf_t_vehicle_ret\2s1\data\rhs_2s1_saf_suspension_green_co.paa",
                    "rhssaf\addons\rhssaf_t_vehicle_ret\2s1\data\rhs_2s1_saf_suspension_black_co.paa",
                    "rhssaf\addons\rhssaf_t_vehicle_ret\2s1\data\rhs_2s1_saf_suspension_black_co.paa",
                    "rhssaf\addons\rhssaf_t_vehicle_ret\2s1\data\rhs_2s1_saf_suspension_green_co.paa",
                    "rhssaf\addons\rhssaf_t_vehicle_ret\2s1\data\rhs_2s1_saf_suspension_red_co.paa"
                };
                factions[] = {"rhssaf_faction_army"};
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics;
                    class LoaderOptics;
                };
            };
        };
    };
    class rhs_pts_base: APC_Tracked_02_base_F {};
    class rhs_pts_vmf: rhs_pts_base {};
    class rhs_mig29s_base: Plane_Base_F {
        class Components: Components {
            class TransportPylonsComponent {
                class pylons {
                    class pylon1;
                    class pylon2;
                    class pylon3;
                    class pylon4;
                    class pylon5;
                    class pylon6;
                    class pylon7;
                    class cmDispenser;
                };
            };
        };
        class TextureSources {
            class RHS_SAF_Gray {
                displayName = "SAF (Gray)";
                author = "$STR_RHSSAF_AUTHOR_FULL";
                textures[] = {"rhssaf\addons\rhssaf_t_vehicle_ret\mig29\data\rhs_mig29_01_gray_co.paa", "rhssaf\addons\rhssaf_t_vehicle_ret\mig29\data\rhs_mig29_02_gray_co.paa", "rhssaf\addons\rhssaf_t_vehicle_ret\mig29\data\rhs_mig29_03_gray_co.paa"};
                factions[] = {"rhssaf_faction_airforce"};
            };
            class RHS_SAF_Blue {
                displayName = "SAF (Blue-Gray)";
                author = "$STR_RHSSAF_AUTHOR_FULL";
                textures[] = {"rhssaf\addons\rhssaf_t_vehicle_ret\mig29\data\rhs_mig29_01_blue_co.paa", "rhssaf\addons\rhssaf_t_vehicle_ret\mig29\data\rhs_mig29_02_blue_co.paa", "rhssaf\addons\rhssaf_t_vehicle_ret\mig29\data\rhs_mig29_03_blue_co.paa"};
                factions[] = {"rhssaf_faction_airforce"};
            };
        };
    };
    class rhs_mig29sm_base: rhs_mig29s_base {};
    class rhssaf_m998_olive_2dr_halftop: rhsusf_m998_w_2dr {
        scope = 2;
        scopeCurator = 2;
        faction = "rhssaf_faction_army";
        vehicleClass = "rhssaf_vehclass_cars";
        crew = "rhssaf_army_m10_digital_crew";
        editorSubcategory = "rhssaf_EdSubcat_cars";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_m998_olive_2dr_halftop.paa";
        side = 2;
        typicalCargo[] = {"rhssaf_army_m10_digital_crew"};
        hiddenSelections[] = {
            "exterior",
            "interior",
            "A2",
            "wheels",
            "mainbody",
            "hood gratting",
            "interior_wood",
            "2drcargocomplete",
            "camo1",
            "unitdecals_1",
            "unitdecals_2",
            "ind_wait",
            "ind_brake",
            "ind_highbeam"
        };
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_g_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "",
            ""
        };
        class TransportBackpacks {
            class _xx_rhssaf_kitbag_smb {
                backpack = "rhssaf_kitbag_smb";
                count = 1;
            };
        };
        class TransportMagazines {
            class _xx_rhsgref_30rnd_556x45_m21 {
                count = 20;
                magazine = "rhsgref_30rnd_556x45_m21";
            };
            class _xx_rhssaf_30Rnd_762x39mm_M67 {
                count = 20;
                magazine = "rhssaf_30Rnd_762x39mm_M67";
            };
            class _xx_rhsgref_10Rnd_792x57_m76 {
                count = 10;
                magazine = "rhsgref_10Rnd_792x57_m76";
            };
            class _xx_rhs_100Rnd_762x54mmR {
                count = 5;
                magazine = "rhs_100Rnd_762x54mmR";
            };
            class _xx_rhs_mag_smaw_HEAA {
                count = 5;
                magazine = "rhs_mag_smaw_HEAA";
            };
            class _xx_rhssaf_mag_brd_m83_green {
                count = 2;
                magazine = "rhssaf_mag_brd_m83_green";
            };
            class _xx_rhssaf_mag_brd_m83_red {
                count = 2;
                magazine = "rhssaf_mag_brd_m83_red";
            };
            class _xx_rhssaf_mag_brd_m83_white {
                count = 4;
                magazine = "rhssaf_mag_brd_m83_white";
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 10;
            };
            class _xx_ToolKit {
                name = "ToolKit";
                count = 1;
            };
            class _xx_Medikit {
                name = "Medikit";
                count = 1;
            };
        };
        class TransportWeapons {
            class _xx_rhs_weap_m80 {
                weapon = "rhs_weap_m80";
                count = 2;
            };
        };
        class AnimationSources: AnimationSources {
            class hide_backTop: hide_backTop {
                initPhase = 1;
            };
            class hide_frontTop: hide_frontTop {
                initPhase = 0;
            };
            class hide_snorkel: hide_snorkel {
                initPhase = 1;
            };
            class hide_middleTop: hide_middleTop {
                displayName = "unhide middle top";
            };
            class hide_CIP: hide_CIP {
                initPhase = 1;
            };
            class hide_BFT: hide_BFT {
                initPhase = 1;
            };
            class hide_Antenna: hide_Antenna {
                initPhase = 1;
            };
            class hide_A2_Parts: hide_A2_Parts {
                initPhase = 1;
            };
            class Hide_A2Bumper: Hide_A2Bumper {
                initPhase = 0;
            };
        };
    };
    class rhssaf_m998_olive_2dr_fulltop: rhssaf_m998_olive_2dr_halftop {
        scope = 2;
        scopeCurator = 2;
        faction = "rhssaf_faction_army";
        vehicleClass = "rhssaf_vehclass_cars";
        crew = "rhssaf_army_m10_digital_crew";
        editorSubcategory = "rhssaf_EdSubcat_cars";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_m998_olive_2dr_fulltop.paa";
        Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m998_2dr.paa";
        attenuationEffectType = "RHS_CarAttenuation";
        soundAttenuationCargo[] = {1};
        insideSoundCoef = 0.6;
        class AnimationSources: AnimationSources {
            class hide_backTop: hide_backTop {
                initPhase = 0;
            };
        };
        class Sounds: Sounds {
            class RainIn {
                sound[] = {"rhsusf\addons\rhsusf_sounds\misc\rain.wss", 1.4125376, 1};
                frequency = 1;
                volume = "rain*(1-camPos)";
            };
            class RainExt {
                sound[] = {"rhsusf\addons\rhsusf_sounds\misc\rain.wss", 1.4125376, 1};
                frequency = 1;
                volume = "rain*camPos";
            };
        };
        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret_01 {
                maxElev = 15;
            };
            class CargoTurret_02: CargoTurret_02 {
                maxElev = 15;
            };
        };
    };
    class rhssaf_m1025_olive: rhsusf_m1025_w {
        scope = 2;
        scopeCurator = 2;
        faction = "rhssaf_faction_army";
        vehicleClass = "rhssaf_vehclass_cars";
        crew = "rhssaf_army_m10_digital_crew";
        editorSubcategory = "rhssaf_EdSubcat_cars";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_m1025_olive.paa";
        side = 2;
        hiddenSelections[] = {
            "exterior",
            "interior",
            "A2",
            "wheels",
            "mainbody",
            "hood gratting",
            "camo1",
            "camo2",
            "unitdecals_1",
            "unitdecals_2",
            "ind_wait",
            "ind_brake",
            "ind_highbeam"
        };
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1025_g_co.paa",
            "",
            ""
        };
        class AnimationSources: AnimationSources {
            class hide_BFT: trunk {
                animPeriod = 0.000001;
                initPhase = 1;
            };
            class hide_Antenna: hide_BFT {
                initPhase = 1;
            };
            class hide_A2_Parts: hide_BFT {
                initPhase = 1;
            };
            class Hide_A2Bumper: hide_BFT {
                initPhase = 0;
            };
        };
        class TransportBackpacks {
            class _xx_rhssaf_kitbag_smb {
                backpack = "rhssaf_kitbag_smb";
                count = 1;
            };
        };
        class TransportMagazines {
            class _xx_rhsgref_30rnd_556x45_m21 {
                count = 20;
                magazine = "rhsgref_30rnd_556x45_m21";
            };
            class _xx_rhssaf_30Rnd_762x39mm_M67 {
                count = 20;
                magazine = "rhssaf_30Rnd_762x39mm_M67";
            };
            class _xx_rhsgref_10Rnd_792x57_m76 {
                count = 10;
                magazine = "rhsgref_10Rnd_792x57_m76";
            };
            class _xx_rhs_100Rnd_762x54mmR {
                count = 5;
                magazine = "rhs_100Rnd_762x54mmR";
            };
            class _xx_rhs_mag_smaw_HEAA {
                count = 5;
                magazine = "rhs_mag_smaw_HEAA";
            };
            class _xx_rhssaf_mag_brd_m83_green {
                count = 2;
                magazine = "rhssaf_mag_brd_m83_green";
            };
            class _xx_rhssaf_mag_brd_m83_red {
                count = 2;
                magazine = "rhssaf_mag_brd_m83_red";
            };
            class _xx_rhssaf_mag_brd_m83_white {
                count = 4;
                magazine = "rhssaf_mag_brd_m83_white";
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 10;
            };
            class _xx_ToolKit {
                name = "ToolKit";
                count = 1;
            };
            class _xx_Medikit {
                name = "Medikit";
                count = 1;
            };
        };
        class TransportWeapons {
            class _xx_rhs_weap_m80 {
                weapon = "rhs_weap_m80";
                count = 2;
            };
        };
    };
    class rhssaf_m1025_olive_m2: rhsusf_m1025_w_m2 {
        scope = 2;
        scopeCurator = 2;
        faction = "rhssaf_faction_army";
        vehicleClass = "rhssaf_vehclass_cars";
        crew = "rhssaf_army_m10_digital_crew";
        editorSubcategory = "rhssaf_EdSubcat_cars";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_m1025_olive_m2.paa";
        side = 2;
        hiddenSelections[] = {
            "exterior",
            "interior",
            "A2",
            "wheels",
            "mainbody",
            "hood gratting",
            "camo1",
            "camo2",
            "camo3",
            "unitdecals_1",
            "unitdecals_2",
            "ind_wait",
            "ind_brake",
            "ind_highbeam"
        };
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m1025_g_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "",
            ""
        };
        class AnimationSources: AnimationSources {
            class hide_BFT: ReloadAnim {
                source = "user";
                animPeriod = 0.000001;
                initPhase = 1;
                weapon = "";
            };
            class hide_Antenna: hide_BFT {
                initPhase = 1;
            };
            class hide_A2_Parts: hide_BFT {
                initPhase = 1;
            };
            class Hide_A2Bumper: hide_BFT {
                initPhase = 0;
            };
        };
        class TransportBackpacks {
            class _xx_rhssaf_kitbag_smb {
                backpack = "rhssaf_kitbag_smb";
                count = 1;
            };
        };
        class TransportMagazines {
            class _xx_rhsgref_30rnd_556x45_m21 {
                count = 20;
                magazine = "rhsgref_30rnd_556x45_m21";
            };
            class _xx_rhssaf_30Rnd_762x39mm_M67 {
                count = 20;
                magazine = "rhssaf_30Rnd_762x39mm_M67";
            };
            class _xx_rhsgref_10Rnd_792x57_m76 {
                count = 10;
                magazine = "rhsgref_10Rnd_792x57_m76";
            };
            class _xx_rhs_100Rnd_762x54mmR {
                count = 5;
                magazine = "rhs_100Rnd_762x54mmR";
            };
            class _xx_rhs_mag_smaw_HEAA {
                count = 5;
                magazine = "rhs_mag_smaw_HEAA";
            };
            class _xx_rhssaf_mag_brd_m83_green {
                count = 2;
                magazine = "rhssaf_mag_brd_m83_green";
            };
            class _xx_rhssaf_mag_brd_m83_red {
                count = 2;
                magazine = "rhssaf_mag_brd_m83_red";
            };
            class _xx_rhssaf_mag_brd_m83_white {
                count = 4;
                magazine = "rhssaf_mag_brd_m83_white";
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 10;
            };
            class _xx_ToolKit {
                name = "ToolKit";
                count = 1;
            };
            class _xx_Medikit {
                name = "Medikit";
                count = 1;
            };
        };
        class TransportWeapons {
            class _xx_rhs_weap_m80 {
                weapon = "rhs_weap_m80";
                count = 2;
            };
        };
    };
    class rhssaf_m1151_olive: rhsusf_m1151_base {
        scope = 2;
        scopeCurator = 2;
        faction = "rhssaf_faction_army";
        vehicleClass = "rhssaf_vehclass_cars";
        crew = "rhssaf_army_m10_digital_crew";
        editorSubcategory = "rhssaf_EdSubcat_cars";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_m1151_olive.paa";
        side = 2;
        hiddenselectionstextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1151_Ext_o_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1152M1165_o_CO.paa"
        };
        textureList[] = {"rhssaf_green", 1};
        animationList[] = {
            "DUKE_Hide",
            1,
            "iff_hide",
            1,
            "snorkel_lower",
            0,
            "BFT_Hide",
            1,
            "Antennas_Hide",
            1
        };
        class TransportBackpacks {
            class _xx_rhssaf_kitbag_smb {
                backpack = "rhssaf_kitbag_smb";
                count = 1;
            };
        };
        class TransportMagazines {
            class _xx_rhsgref_30rnd_556x45_m21 {
                count = 20;
                magazine = "rhsgref_30rnd_556x45_m21";
            };
            class _xx_rhssaf_30Rnd_762x39mm_M67 {
                count = 20;
                magazine = "rhssaf_30Rnd_762x39mm_M67";
            };
            class _xx_rhsgref_10Rnd_792x57_m76 {
                count = 10;
                magazine = "rhsgref_10Rnd_792x57_m76";
            };
            class _xx_rhs_100Rnd_762x54mmR {
                count = 5;
                magazine = "rhs_100Rnd_762x54mmR";
            };
            class _xx_rhs_mag_smaw_HEAA {
                count = 5;
                magazine = "rhs_mag_smaw_HEAA";
            };
            class _xx_rhssaf_mag_brd_m83_green {
                count = 2;
                magazine = "rhssaf_mag_brd_m83_green";
            };
            class _xx_rhssaf_mag_brd_m83_red {
                count = 2;
                magazine = "rhssaf_mag_brd_m83_red";
            };
            class _xx_rhssaf_mag_brd_m83_white {
                count = 4;
                magazine = "rhssaf_mag_brd_m83_white";
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 10;
            };
            class _xx_ToolKit {
                name = "ToolKit";
                count = 1;
            };
            class _xx_Medikit {
                name = "Medikit";
                count = 1;
            };
        };
        class TransportWeapons {
            class _xx_rhs_weap_m80 {
                weapon = "rhs_weap_m80";
                count = 2;
            };
        };
    };
    class rhssaf_m1151_olive_pkm: rhsusf_M1151_GPK_PKM_base {
        scope = 2;
        scopeCurator = 2;
        faction = "rhssaf_faction_army";
        vehicleClass = "rhssaf_vehclass_cars";
        crew = "rhssaf_army_m10_digital_crew";
        editorSubcategory = "rhssaf_EdSubcat_cars";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_m1151_olive_pkm.paa";
        side = 2;
        hiddenselectionstextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1151_Ext_o_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1152M1165_o_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_GPK_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
        };
        textureList[] = {"rhssaf_green", 1};
        animationList[] = {"snorkel_lower", 0, "Antennas_Hide", 1};
        class TransportBackpacks {
            class _xx_rhssaf_kitbag_smb {
                backpack = "rhssaf_kitbag_smb";
                count = 1;
            };
        };
        class TransportMagazines {
            class _xx_rhsgref_30rnd_556x45_m21 {
                count = 20;
                magazine = "rhsgref_30rnd_556x45_m21";
            };
            class _xx_rhssaf_30Rnd_762x39mm_M67 {
                count = 20;
                magazine = "rhssaf_30Rnd_762x39mm_M67";
            };
            class _xx_rhsgref_10Rnd_792x57_m76 {
                count = 10;
                magazine = "rhsgref_10Rnd_792x57_m76";
            };
            class _xx_rhs_100Rnd_762x54mmR {
                count = 5;
                magazine = "rhs_100Rnd_762x54mmR";
            };
            class _xx_rhs_mag_smaw_HEAA {
                count = 5;
                magazine = "rhs_mag_smaw_HEAA";
            };
            class _xx_rhssaf_mag_brd_m83_green {
                count = 2;
                magazine = "rhssaf_mag_brd_m83_green";
            };
            class _xx_rhssaf_mag_brd_m83_red {
                count = 2;
                magazine = "rhssaf_mag_brd_m83_red";
            };
            class _xx_rhssaf_mag_brd_m83_white {
                count = 4;
                magazine = "rhssaf_mag_brd_m83_white";
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 10;
            };
            class _xx_ToolKit {
                name = "ToolKit";
                count = 1;
            };
            class _xx_Medikit {
                name = "Medikit";
                count = 1;
            };
        };
        class TransportWeapons {
            class _xx_rhs_weap_m80 {
                weapon = "rhs_weap_m80";
                count = 2;
            };
        };
    };
    class rhssaf_m1152_olive: rhsusf_m1152_base {
        displayName = "$STR_RHS_M1152_CCV_NAME";
        scope = 2;
        scopeCurator = 2;
        faction = "rhssaf_faction_army";
        vehicleClass = "rhssaf_vehclass_cars";
        crew = "rhssaf_army_m10_digital_crew";
        editorSubcategory = "rhssaf_EdSubcat_cars";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_m1152_olive.paa";
        side = 2;
        typicalCargo[] = {"rhssaf_army_m10_digital_crew"};
        hiddenselectionstextures[] = {
            "rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1151_Ext_o_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
            "rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1152M1165_o_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_g_co.paa"
        };
        textureList[] = {"rhssaf_green", 1};
        animationList[] = {
            "iff_hide",
            1,
            "snorkel_lower",
            0,
            "BFT_Hide",
            1,
            "Antennas_Hide",
            1,
            "m1152_Hide",
            0
        };
        class TransportBackpacks {
            class _xx_rhssaf_kitbag_smb {
                backpack = "rhssaf_kitbag_smb";
                count = 1;
            };
        };
        class TransportMagazines {
            class _xx_rhsgref_30rnd_556x45_m21 {
                count = 20;
                magazine = "rhsgref_30rnd_556x45_m21";
            };
            class _xx_rhssaf_30Rnd_762x39mm_M67 {
                count = 20;
                magazine = "rhssaf_30Rnd_762x39mm_M67";
            };
            class _xx_rhsgref_10Rnd_792x57_m76 {
                count = 10;
                magazine = "rhsgref_10Rnd_792x57_m76";
            };
            class _xx_rhs_100Rnd_762x54mmR {
                count = 5;
                magazine = "rhs_100Rnd_762x54mmR";
            };
            class _xx_rhs_mag_smaw_HEAA {
                count = 5;
                magazine = "rhs_mag_smaw_HEAA";
            };
            class _xx_rhssaf_mag_brd_m83_green {
                count = 2;
                magazine = "rhssaf_mag_brd_m83_green";
            };
            class _xx_rhssaf_mag_brd_m83_red {
                count = 2;
                magazine = "rhssaf_mag_brd_m83_red";
            };
            class _xx_rhssaf_mag_brd_m83_white {
                count = 4;
                magazine = "rhssaf_mag_brd_m83_white";
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 10;
            };
            class _xx_ToolKit {
                name = "ToolKit";
                count = 1;
            };
            class _xx_Medikit {
                name = "Medikit";
                count = 1;
            };
        };
        class TransportWeapons {
            class _xx_rhs_weap_m80 {
                weapon = "rhs_weap_m80";
                count = 2;
            };
        };
    };
    class rhssaf_m1152_rsv_olive: rhssaf_m1152_olive {
        picture = "\rhsusf\addons\rhsusf_m11xx\pictures\rhs_m1152_rsv_pic_ca.paa";
        displayName = "$STR_RHS_M1152_RSV_NAME";
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_m1152_rsv_olive.paa";
        scope = 2;
        accuracy = 0.5;
        transportAmmo = 250000;
        transportFuel = 250000;
        transportRepair = 5000000;
        supplyRadius = 12;
        animationList[] = {
            "iff_hide",
            1,
            "snorkel_lower",
            0,
            "BFT_Hide",
            1,
            "Antennas_Hide",
            1,
            "m1152_Hide",
            0,
            "m1152_tent_Hide",
            0,
            "supply_hide",
            0
        };
        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 5;
                canBeTransported = 1;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
        };
    };
    class rhssaf_m1152_TCV_olive: rhsusf_m1152_TCV_base {
        scope = 2;
        scopeCurator = 2;
        faction = "rhssaf_faction_army";
        vehicleClass = "rhssaf_vehclass_cars";
        crew = "rhssaf_army_m10_digital_crew";
        editorSubcategory = "rhssaf_EdSubcat_cars";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_m1152_TCV_olive.paa";
        side = 2;
        typicalCargo[] = {"rhssaf_army_m10_digital_crew"};
        textureList[] = {"rhssaf_green", 1};
        animationList[] = {
            "iff_hide",
            1,
            "snorkel_lower",
            0,
            "BFT_Hide",
            1,
            "Antennas_Hide",
            1
        };
        class TransportBackpacks {
            class _xx_rhssaf_kitbag_smb {
                backpack = "rhssaf_kitbag_smb";
                count = 1;
            };
        };
        class TransportMagazines {
            class _xx_rhsgref_30rnd_556x45_m21 {
                count = 20;
                magazine = "rhsgref_30rnd_556x45_m21";
            };
            class _xx_rhssaf_30Rnd_762x39mm_M67 {
                count = 20;
                magazine = "rhssaf_30Rnd_762x39mm_M67";
            };
            class _xx_rhsgref_10Rnd_792x57_m76 {
                count = 10;
                magazine = "rhsgref_10Rnd_792x57_m76";
            };
            class _xx_rhs_100Rnd_762x54mmR {
                count = 5;
                magazine = "rhs_100Rnd_762x54mmR";
            };
            class _xx_rhs_mag_smaw_HEAA {
                count = 5;
                magazine = "rhs_mag_smaw_HEAA";
            };
            class _xx_rhssaf_mag_brd_m83_green {
                count = 2;
                magazine = "rhssaf_mag_brd_m83_green";
            };
            class _xx_rhssaf_mag_brd_m83_red {
                count = 2;
                magazine = "rhssaf_mag_brd_m83_red";
            };
            class _xx_rhssaf_mag_brd_m83_white {
                count = 4;
                magazine = "rhssaf_mag_brd_m83_white";
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 10;
            };
            class _xx_ToolKit {
                name = "ToolKit";
                count = 1;
            };
            class _xx_Medikit {
                name = "Medikit";
                count = 1;
            };
        };
        class TransportWeapons {
            class _xx_rhs_weap_m80 {
                weapon = "rhs_weap_m80";
                count = 2;
            };
        };
    };
    class rhssaf_army_ural: RHS_Ural_Civ_Base {
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_army_ural.paa";
        scope = 2;
        displayName = "$STR_RHSSAF_ARMY_URAL_DISPLAYNAME";
        crew = "rhssaf_army_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 2;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army";
        class AnimationSources: AnimationSources {
            class people_tag_hide: people_tag_hide {
                initPhase = 1;
            };
        };
        rhs_decalParameters[] = {};
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "n1",
            "n2",
            "n3",
            "n4",
            "i1",
            "i2",
            "i3",
            "i4",
            "numplate",
            "numplate2"
        };
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa"};
    };
    class rhssaf_army_ural_open: RHS_Ural_Open_MSV_01 {
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_army_ural_open.paa";
        scope = 2;
        displayName = "$STR_RHSSAF_ARMY_URAL_OPEN_DISPLAYNAME";
        crew = "rhssaf_army_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 2;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army";
        rhs_decalParameters[] = {};
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "n1",
            "n2",
            "n3",
            "n4",
            "i1",
            "i2",
            "i3",
            "i4",
            "numplate",
            "numplate2"
        };
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa"};
    };
    class rhssaf_army_ural_fuel: RHS_Ural_Fuel_MSV_01 {
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_army_ural_fuel.paa";
        scope = 2;
        displayName = "$STR_RHSSAF_ARMY_URAL_FUEL_DISPLAYNAME";
        crew = "rhssaf_army_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 2;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army";
        rhs_decalParameters[] = {};
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "n1",
            "n2",
            "n3",
            "n4",
            "i1",
            "i2",
            "i3",
            "i4",
            "camo3",
            "numplate",
            "numplate2"
        };
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa",
            "rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa",
            "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_khk_co.paa"
        };
    };
    class rhssaf_army_kraz255b1_flatbed: rhs_kraz255b1_flatbed_base {
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_army_kraz255b1_flatbed.paa";
        scope = 2;
        crew = "rhssaf_army_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 2;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army";
        rhs_decalParameters[] = {};
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_kraz255\data\kraz255b1_co.paa", "rhsafrf\addons\rhs_kraz255\data\kol255_co.paa", "rhsafrf\addons\rhs_kraz255\data\kuzov_255_co.paa"};
    };
    class rhssaf_army_kraz255b1_pmp: rhs_kraz255b1_pmp_base {
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_army_kraz255b1_pmp.paa";
        scope = 2;
        crew = "rhssaf_army_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 2;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army";
        rhs_decalParameters[] = {};
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_kraz255\data\kraz255b1_co.paa", "rhsafrf\addons\rhs_kraz255\data\kol255_co.paa", "rhsafrf\addons\rhs_kraz255\data\pmp_tr_co.paa"};
    };
    class rhssaf_army_t72s: rhs_t72bd_tv {
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_army_t72s.paa";
        rhs_decalParameters[] = {};
        crew = "rhssaf_army_m10_digital_crew_armored";
        author = "RHS";
        side = 2;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army";
        scope = 2;
        displayName = "$STR_RHSSAF_ARMY_T72S_DISPLAYNAME";
        picture = "\rhsafrf\addons\rhs_t72\icons\t72b3_ca.paa";
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa",
            "rhsafrf\addons\rhs_t72\data\rhs_t72b3_turret_co.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
        };
        class AnimationSources: AnimationSources {
            class hide_com_shield: hide_com_shield {
                initPhase = 1;
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
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
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        gunnerType = "rhssaf_army_m10_digital_crew_armored_nco";
                    };
                    class CommanderMG: CommanderMG {};
                };
            };
        };
    };
    class rhssaf_army_2s1: rhs_2s1tank_base {
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_army_2s1.paa";
        displayName = "$STR_2S1_Name";
        crew = "rhssaf_army_m10_digital_crew_armored";
        author = "RHS";
        side = 2;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army";
        scope = 2;
        textureList[] = {"RHS_SAF_Camo", 1, "light", 0.3};
        rhs_decalParameters[] = {"['Number', cRHS2S1SerbianNumberPlaces,'CDF']"};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        gunnerType = "rhssaf_army_m10_digital_crew_armored_nco";
                    };
                    class LoaderOptics: LoaderOptics {
                        gunnerType = "rhssaf_army_m10_digital_crew_armored";
                    };
                };
            };
        };
    };
    class rhssaf_army_pts: rhs_pts_vmf {
        displayName = "$STR_RHSSAF_ARMY_PTS_DISPLAYNAME";
        crew = "rhssaf_army_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 2;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army";
        scope = 2;
        rhs_decalParameters[] = {"['Number',cRHSPTSNumberPlaces,'Default']"};
    };
    class rhssaf_un_ural: rhssaf_army_ural {
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_un_ural.paa";
        scope = 2;
        crew = "rhssaf_un_m10_digital_desert_crew";
        author = "RHS (A2 port)";
        side = 2;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_un";
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "n1",
            "n2",
            "n3",
            "n4",
            "i1",
            "i2",
            "i3",
            "i4",
            "numplate",
            "numplate2"
        };
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_un_co.paa", "rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_un_co.paa"};
    };
    class rhssaf_un_uaz: RHS_UAZ_Base {
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_un_uaz.paa";
        scope = 2;
        crew = "rhssaf_un_m10_digital_desert_crew";
        author = "RHS (A2 port)";
        side = 2;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_un";
        accuracy = 0.5;
        rhs_decalParameters[] = {};
        hiddenSelections[] = {
            "camo1",
            "camo2g",
            "n1",
            "n2",
            "n3",
            "n4",
            "i1",
            "i2",
            "i3",
            "i4",
            "numplate",
            "numplate2"
        };
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_un_co.paa"};
    };
    class rhssaf_un_uaz_open: rhs_uaz_open_Base {
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_un_uaz_open.paa";
        scope = 2;
        crew = "rhssaf_un_m10_digital_desert_crew";
        author = "RHS (A2 port)";
        side = 2;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_un";
        accuracy = 0.5;
        rhs_decalParameters[] = {};
        hiddenSelections[] = {
            "camo1",
            "camo2g",
            "n1",
            "n2",
            "n3",
            "n4",
            "i1",
            "i2",
            "i3",
            "i4",
            "numplate",
            "numplate2"
        };
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_un_co.paa"};
    };
    class rhssaf_army_d30: rhs_d30_base {
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_army_d30.paa";
        displayname = "$STR_RHSSAF_ARMY_D30_DISPLAYNAME";
        crew = "rhssaf_army_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 2;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army";
        scope = 2;
    };
    class rhssaf_army_ags30_tripod: RHS_AGS30_TriPod_base {
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_army_ags30_tripod.paa";
        displayname = "$STR_RHSSAF_ARMY_AGS30_TRIPOD_DISPLAYNAME";
        crew = "rhssaf_army_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 2;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army";
        scope = 2;
    };
    class rhssaf_army_nsv_tripod: rhs_nsv_tripod_base {
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_army_nsv_tripod.paa";
        displayname = "$STR_RHSSAF_ARMY_NSV_TRIPOD_DISPLAYNAME";
        crew = "rhssaf_army_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 2;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army";
        scope = 2;
    };
    class rhssaf_army_m252: RHS_M252_Base {
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_army_m252.paa";
        displayname = "$STR_RHSSAF_ARMY_M252_DISPLAYNAME";
        scope = 2;
        crew = "rhssaf_army_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 2;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army";
    };
    class rhssaf_army_metis_9k115: rhs_Metis_Base {
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_army_metis_9k115.paa";
        scope = 2;
        crew = "rhssaf_army_m10_para_crew";
        author = "RHS (A2 port)";
        side = 2;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army";
    };
    class rhssaf_army_m2staticmg_minitripod: RHS_M2StaticMG_MiniTripod_base {
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_army_m2staticmg_minitripod.paa";
        displayname = "$STR_RHSSAF_ARMY_M2STATICMG_MINITRIPOD_DISPLAYNAME";
        scope = 2;
        crew = "rhssaf_army_m10_para_crew";
        author = "RHS (A2 port)";
        side = 2;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army";
    };
    class rhssaf_airforce_ht40: rhs_mi8t_base {
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_airforce_ht40.paa";
        scope = 2;
        displayname = "$STR_RHSSAF_AIRFORCE_HT40_DISPLAYNAME";
        rhs_decalParameters[] = {};
        crew = "rhssaf_airforce_pilot_transport_heli";
        author = "RHS (A2 port)";
        side = 2;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_airforce";
        hiddenselectionstextures[] = {
            "rhssaf\addons\rhssaf_t_vehicle_ret\mi8\rhssaf_mi8_body_camo_co.paa",
            "rhssaf\addons\rhssaf_t_vehicle_ret\mi8\rhssaf_mi8_det_camo_co.paa",
            "rhssaf\addons\rhssaf_t_vehicle_ret\mi8\rhssaf_mi8_tv2_camo_co.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_notext_ca.paa"
        };
    };
    class rhssaf_airforce_ht48: RHS_Mi8mt_Cargo_vvs {
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_airforce_ht48.paa";
        scope = 2;
        displayname = "$STR_RHSSAF_AIRFORCE_HT48_DISPLAYNAME";
        rhs_decalParameters[] = {};
        crew = "rhssaf_airforce_pilot_transport_heli";
        author = "RHS (A2 port)";
        side = 2;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_airforce";
        hiddenselectionstextures[] = {
            "rhssaf\addons\rhssaf_t_vehicle_ret\mi17\data\rhssaf_mi8_body_green_co.paa",
            "rhssaf\addons\rhssaf_t_vehicle_ret\mi8\rhssaf_mi8_det_camo_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_notext_ca.paa"
        };
    };
    class rhssaf_airforce_l_18_101: rhs_mig29sm_base {
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_airforce_l_18_101.paa";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        displayName = "L-18 (101/CAP)";
        crew = "rhssaf_airforce_pilot_mig29";
        side = 2;
        faction = "rhssaf_faction_airforce";
        hiddenselectionstextures[] = {"rhssaf\addons\rhssaf_t_vehicle_ret\mig29\data\rhs_mig29_01_gray_co.paa", "rhssaf\addons\rhssaf_t_vehicle_ret\mig29\data\rhs_mig29_02_gray_co.paa", "rhssaf\addons\rhssaf_t_vehicle_ret\mig29\data\rhs_mig29_03_gray_co.paa"};
        textureList[] = {"RHS_SAF_Gray", 1};
        rhs_decalParameters[] = {"['Number',cRHSAIRMIG29SerbianTailStaticNumberPlaces,'AviaSerbianTail', 18]", "['Number',[cRHSAIRMIG29SerbianTailDynamicNumberPlaces,cRHSAIRMIG29SerbianIntakeNumberPlaces],['AviaSerbianTail','AviaSerbianIntake'], [101]]"};
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class pylon1: pylon1 {
                        attachment = "rhs_mag_R27R_APU470";
                    };
                    class pylon2: pylon2 {
                        attachment = "rhs_mag_R27R_APU470";
                    };
                    class pylon3: pylon3 {
                        attachment = "rhs_mag_R73M_APU73";
                    };
                    class pylon4: pylon4 {
                        attachment = "rhs_mag_R73M_APU73";
                    };
                    class pylon5: pylon5 {
                        attachment = "rhs_mag_R73M_APU73";
                    };
                    class pylon6: pylon6 {
                        attachment = "rhs_mag_R73M_APU73";
                    };
                    class pylon7: pylon7 {};
                    class cmDispenser: cmDispenser {};
                };
            };
        };
    };
    class rhssaf_airforce_l_18: rhs_mig29sm_base {
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_airforce_l_18.paa";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        displayName = "L-18";
        crew = "rhssaf_airforce_pilot_mig29";
        side = 2;
        faction = "rhssaf_faction_airforce";
        hiddenselectionstextures[] = {"rhssaf\addons\rhssaf_t_vehicle_ret\mig29\data\rhs_mig29_01_blue_co.paa", "rhssaf\addons\rhssaf_t_vehicle_ret\mig29\data\rhs_mig29_02_blue_co.paa", "rhssaf\addons\rhssaf_t_vehicle_ret\mig29\data\rhs_mig29_03_blue_co.paa"};
        textureList[] = {"RHS_SAF_Gray", 0.6, "RHS_SAF_Blue", 0.4};
        rhs_decalParameters[] = {"['Number', cRHSAIRMIG29SerbianTailStaticNumberPlaces,'AviaSerbianTail',  18]", "['Number', [cRHSAIRMIG29SerbianTailDynamicNumberPlaces,cRHSAIRMIG29SerbianIntakeNumberPlaces],['AviaSerbianTail','AviaSerbianIntake'],  [102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124]]"};
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class pylon1: pylon1 {
                        attachment = "rhs_mag_b8m1_bd3_umk2a_s8kom";
                    };
                    class pylon2: pylon2 {
                        attachment = "rhs_mag_b8m1_bd3_umk2a_s8kom";
                    };
                    class pylon3: pylon3 {
                        attachment = "rhs_mag_b8m1_bd3_umk2a_s8df";
                    };
                    class pylon4: pylon4 {
                        attachment = "rhs_mag_b8m1_bd3_umk2a_s8df";
                    };
                    class pylon5: pylon5 {
                        attachment = "rhs_mag_R60M_APU60";
                    };
                    class pylon6: pylon6 {
                        attachment = "rhs_mag_R60M_APU60";
                    };
                    class pylon7: pylon7 {};
                    class cmDispenser: cmDispenser {};
                };
            };
        };
    };
    class rhssaf_army_o_kraz255b1_flatbed: rhssaf_army_kraz255b1_flatbed {
        crew = "rhssaf_army_o_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 0;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army_opfor";
    };
    class rhssaf_army_o_kraz255b1_pmp: rhssaf_army_kraz255b1_pmp {
        crew = "rhssaf_army_o_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 0;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army_opfor";
    };
    class rhssaf_army_o_m998_olive_2dr_halftop: rhssaf_m998_olive_2dr_halftop {
        crew = "rhssaf_army_o_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 0;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army_opfor";
    };
    class rhssaf_army_o_m998_olive_2dr_fulltop: rhssaf_m998_olive_2dr_fulltop {
        crew = "rhssaf_army_o_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 0;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army_opfor";
    };
    class rhssaf_army_o_m1025_olive: rhssaf_m1025_olive {
        crew = "rhssaf_army_o_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 0;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army_opfor";
    };
    class rhssaf_army_o_m1025_olive_m2: rhssaf_m1025_olive_m2 {
        crew = "rhssaf_army_o_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 0;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army_opfor";
    };
    class rhssaf_army_o_m1151_olive: rhssaf_m1151_olive {
        crew = "rhssaf_army_o_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 0;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army_opfor";
    };
    class rhssaf_army_o_m1151_olive_pkm: rhssaf_m1151_olive_pkm {
        crew = "rhssaf_army_o_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 0;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army_opfor";
    };
    class rhssaf_army_o_m1152_olive: rhssaf_m1152_olive {
        crew = "rhssaf_army_o_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 0;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army_opfor";
    };
    class rhssaf_army_o_m1152_rsv_olive: rhssaf_m1152_rsv_olive {
        crew = "rhssaf_army_o_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 0;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army_opfor";
    };
    class rhssaf_army_o_m1152_tcv_olive: rhssaf_m1152_TCV_olive {
        crew = "rhssaf_army_o_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 0;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army_opfor";
    };
    class rhssaf_army_o_ural: rhssaf_army_ural {
        crew = "rhssaf_army_o_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 0;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army_opfor";
    };
    class rhssaf_army_o_ural_open: rhssaf_army_ural_open {
        crew = "rhssaf_army_o_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 0;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army_opfor";
    };
    class rhssaf_army_o_ural_fuel: rhssaf_army_ural_fuel {
        crew = "rhssaf_army_o_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 0;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army_opfor";
    };
    class rhssaf_army_o_t72s: rhssaf_army_t72s {
        crew = "rhssaf_army_o_m10_digital_crew_armored";
        author = "RHS";
        side = 0;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army_opfor";
    };
    class rhssaf_army_o_2s1: rhssaf_army_2s1 {
        crew = "rhssaf_army_o_m10_digital_crew_armored";
        author = "RHS";
        side = 0;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army_opfor";
    };
    class rhssaf_army_o_pts: rhssaf_army_pts {
        crew = "rhssaf_army_o_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 0;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army_opfor";
    };
    class rhssaf_army_o_d30: rhssaf_army_d30 {
        crew = "rhssaf_army_o_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 0;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army_opfor";
    };
    class rhssaf_army_o_ags30_tripod: rhssaf_army_ags30_tripod {
        crew = "rhssaf_army_o_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 0;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army_opfor";
    };
    class rhssaf_army_o_nsv_tripod: rhssaf_army_nsv_tripod {
        crew = "rhssaf_army_o_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 0;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army_opfor";
    };
    class rhssaf_army_o_m252: rhssaf_army_m252 {
        crew = "rhssaf_army_o_m93_oakleaf_summer_crew";
        author = "RHS (A2 port)";
        side = 0;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army_opfor";
    };
    class rhssaf_army_o_metis_9k115: rhssaf_army_metis_9k115 {
        crew = "rhssaf_army_o_m10_para_crew";
        author = "RHS (A2 port)";
        side = 0;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army_opfor";
    };
    class rhssaf_army_o_m2staticmg_minitripod: rhssaf_army_m2staticmg_minitripod {
        crew = "rhssaf_army_o_m10_para_crew";
        author = "RHS (A2 port)";
        side = 0;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_army_opfor";
    };
    class rhssaf_airforce_o_ht40: rhssaf_airforce_ht40 {
        crew = "rhssaf_airforce_o_pilot_transport_heli";
        author = "RHS (A2 port)";
        side = 0;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_airforce_opfor";
    };
    class rhssaf_airforce_o_ht48: rhssaf_airforce_ht48 {
        crew = "rhssaf_airforce_o_pilot_transport_heli";
        author = "RHS (A2 port)";
        side = 0;
        dlc = "RHS_SAF";
        faction = "rhssaf_faction_airforce_opfor";
    };
    class rhssaf_airforce_o_l_18_101: rhssaf_airforce_l_18_101 {
        crew = "rhssaf_airforce_o_pilot_mig29";
        side = 0;
        faction = "rhssaf_faction_airforce_opfor";
    };
    class rhssaf_airforce_o_l_18: rhssaf_airforce_l_18 {
        crew = "rhssaf_airforce_o_pilot_mig29";
        side = 0;
        faction = "rhssaf_faction_airforce_opfor";
    };
};
