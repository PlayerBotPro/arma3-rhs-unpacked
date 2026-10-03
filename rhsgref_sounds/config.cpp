class CfgPatches {
    class rhsgref_sounds {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {"rhs_c_weapons", "rhsgref_c_weapons", "rhsgref_c_airweapons"};
        version = "0.1";
        name = "GREF Sounds";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons {
    class InventoryOpticsItem_Base_F;
    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F {};
    class Rifle_Long_Base_F;
    class UGL_F;
    class srifle_EBR_F;
    class LMG_Mk200_F;
    class LMG_M200;
    class MGun;
    class rhs_weap_m70_base: Rifle_Base_F {
        reloadMagazineSound[] = {
            "rhsafrf\addons\rhs_sounds\ak_shared\reload_AK762",
            1.5,
            1,
            10
        };
        changeFiremodeSound[] = {
            "rhsgref\addons\rhsgref_sounds\ak_shared\firemode",
            0.6,
            1,
            5
        };
    };
    class rhs_weap_m21_base: rhs_weap_m70_base {
        reloadMagazineSound[] = {
            "rhsgref\addons\rhsgref_sounds\ak_shared\reload",
            1.5,
            1,
            10
        };
        changeFiremodeSound[] = {
            "rhsgref\addons\rhsgref_sounds\ak_shared\firemode",
            0.6,
            1,
            5
        };
    };
    class rhs_weap_m76: rhs_weap_m70_base {
        reloadMagazineSound[] = {
            "rhsafrf\addons\rhs_sounds\ak_shared\reload_AK2",
            1.2,
            1,
            15
        };
        changeFiremodeSound[] = {
            "rhsafrf\addons\rhs_sounds\ak_shared\firemode",
            0.6,
            1,
            5
        };
    };
    class rhs_weap_m38_Base_F: Rifle_Base_F {
        reloadMagazineSound[] = {
            "\rhsgref\addons\rhsgref_weapons\kar98k\data\sounds\1903A1_reload_noscope",
            0.8,
            1,
            10
        };
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_kar98_Shot_SoundSet", "RHS_mmg1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHSUSF_sd_xm2010_Shot_SoundSet", "RHS_sd_mmg1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_kar98k_Base_F: Rifle_Base_F {
        reloadMagazineSound[] = {
            "\rhsgref\addons\rhsgref_weapons\kar98k\data\sounds\1903A1_reload_noscope",
            0.8,
            1,
            10
        };
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_kar98_Shot_SoundSet", "RHS_mmg1_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_savz58_base: Rifle_Base_F {
        reloadMagazineSound[] = {
            "rhsafrf\addons\rhs_sounds\ak_shared\reload_AK762",
            1.5,
            1,
            10
        };
        changeFiremodeSound[] = {
            "rhsgref\addons\rhsgref_sounds\ak_shared\firemode",
            0.6,
            1,
            5
        };
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_akm_Closure_SoundSet", "RHS_akm_Shot_SoundSet", "RHS_lmg1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHS_akm_Closure_SoundSet", "RHS_akm_ShotSD_SoundSet", "RHS_Rifle1_SD_Tail_SoundSet"};
            };
        };
        class FullAuto: Mode_FullAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_akm_Closure_SoundSet", "RHS_akm_Shot_SoundSet", "RHS_lmg1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHS_akm_Closure_SoundSet", "RHS_akm_ShotSD_SoundSet", "RHS_Rifle1_SD_Tail_SoundSet"};
            };
        };
    };
    class rhs_weap_stgw57_base: Rifle_Base_F {
        reloadMagazineSound[] = {
            "rhsgref\addons\rhsgref_sounds\ak_shared\reload",
            1.5,
            1,
            10
        };
        changeFiremodeSound[] = {
            "rhsgref\addons\rhsgref_sounds\ak_shared\firemode",
            0.6,
            1,
            5
        };
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_akm_Closure_SoundSet", "RHS_akm_Shot_SoundSet", "RHS_lmg1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHS_akm_Closure_SoundSet", "RHS_akm_ShotSD_SoundSet", "RHS_Rifle1_SD_Tail_SoundSet"};
            };
        };
        class FullAuto: Mode_FullAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {
                soundSetShot[] = {"RHS_akm_Closure_SoundSet", "RHS_akm_Shot_SoundSet", "RHS_lmg1_Tail_SoundSet"};
            };
            class SilencedSound {
                soundSetShot[] = {"RHS_akm_Closure_SoundSet", "RHS_akm_ShotSD_SoundSet", "RHS_Rifle1_SD_Tail_SoundSet"};
            };
        };
    };
    class MissileLauncher;
    class Missile_AGM_02_Plane_CAS_01_F;
    class rhs_weap_zt3_launcher: MissileLauncher {
        sounds[] = {"StandardSound"};
        class StandardSound {
            soundsetshot[] = {"RocketsMedium_Shot_SoundSet"};
        };
    };
    class rhs_weap_zt6_Launcher: Missile_AGM_02_Plane_CAS_01_F {
        sounds[] = {"StandardSound"};
        class StandardSound {
            begin1[] = {
                "rhsusf\addons\rhsusf_sounds\launcher_small\launcher_small_1",
                2.5,
                0.96,
                1500
            };
            begin2[] = {
                "rhsusf\addons\rhsusf_sounds\launcher_small\launcher_small_2",
                2.5,
                0.96,
                1500
            };
            soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
        };
    };
};
