class CfgPatches {
    class rhssaf_c_weapons {
        units[] = {"rhssaf_weapons_crate", "Item_rhssaf_zrak_rd7j"};
        weapons[] = {
            "rhs_weap_cz99",
            "rhs_weap_cz99_etched",
            "rhs_weap_m21a",
            "rhs_weap_m21a_pr",
            "rhs_weap_m21a_fold",
            "rhs_weap_m21a_pbg40",
            "rhs_weap_m21a_pr_pbg40",
            "rhs_weap_m21s",
            "rhs_weap_m21s_fold",
            "rhs_weap_m21s_pr",
            "rhs_weap_m70ab2",
            "rhs_weap_m70ab2_fold",
            "rhs_weap_m70b1",
            "rhs_weap_m70b1n",
            "rhs_weap_m70b3n",
            "rhs_weap_m70b3n_pbg40",
            "rhs_weap_m76",
            "rhs_weap_m84",
            "rhs_weap_m92",
            "rhs_weap_m92_fold",
            "rhs_weap_scorpion",
            "rhs_weap_g36c",
            "rhs_weap_g36kv",
            "rhs_weap_g36kv_ag36",
            "rhs_weap_m82a1",
            "rhs_weap_minimi_para_railed",
            "rhssaf_zrak_rd7j"
        };
        magazines[] = {
            "rhssaf_mag_15Rnd_9x19_FMJ",
            "rhssaf_mag_15Rnd_9x19_JHP",
            "rhsgref_30rnd_556x45_m21",
            "rhsgref_30rnd_556x45_m21_t",
            "rhssaf_30rnd_556x45_EPR_G36",
            "rhssaf_30rnd_556x45_SOST_G36",
            "rhssaf_30rnd_556x45_SPR_G36",
            "rhssaf_100rnd_556x45_EPR_G36",
            "rhssaf_30rnd_556x45_Tracers_G36",
            "rhssaf_30rnd_556x45_TDIM_G36",
            "rhssaf_30rnd_556x45_MDIM_G36",
            "rhssaf_10Rnd_792x57_m76",
            "rhssaf_10Rnd_792x57_m76_tracer",
            "rhssaf_250Rnd_762x54R",
            "rhssaf_mine_pma3_mag",
            "rhssaf_mine_tma4_mag",
            "rhssaf_mine_mrud_a_mag",
            "rhssaf_mine_mrud_b_mag",
            "rhssaf_mine_mrud_c_mag",
            "rhssaf_mine_mrud_d_mag",
            "rhssaf_tm100_mag",
            "rhssaf_tm200_mag",
            "rhssaf_tm500_mag",
            "rhssaf_mag_br_m75",
            "rhssaf_mag_br_m84",
            "rhssaf_mag_brd_m83_white",
            "rhssaf_mag_brd_m83_yellow",
            "rhssaf_mag_brd_m83_green",
            "rhssaf_mag_brd_m83_red",
            "rhssaf_mag_brd_m83_blue",
            "rhssaf_mag_brd_m83_orange",
            "rhssaf_mag_brk_m79",
            "rhssaf_mag_rshb_p98",
            "rhssaf_mag_brz_m88",
            "rhsgref_20rnd_765x17_vz61",
            "rhsgref_10rnd_765x17_vz61"
        };
        ammo[] = {
            "rhssaf_ammo_556x45_EPR",
            "rhssaf_ammo_556x45_EPR_Tracer",
            "rhssaf_ammo_556x45_SOST",
            "rhssaf_ammo_556x45_SPR",
            "rhssaf_ammo_556x45_Ball_Tracer_Dim",
            "rhs_ammo_792x57_Ball",
            "rhssaf_ammo_br_m75",
            "rhssaf_ammo_br_m84",
            "rhssaf_ammo_brd_m83_white",
            "rhssaf_ammo_brd_m83_yellow",
            "rhssaf_ammo_brd_m83_green",
            "rhssaf_ammo_brd_m83_red",
            "rhssaf_mag_brd_m83_blue",
            "rhssaf_mag_brd_m83_orange",
            "rhssaf_ammo_rshb_p98",
            "rhssaf_ammo_brz_m88",
            "rhssaf_ammo_brk_m79",
            "rhssaf_ammo_brk_m79_fly",
            "rhssaf_ammo_brk_m79_impact",
            "rhssaf_ammo_brk_m79_penetrator"
        };
        requiredVersion = 1;
        requiredAddons[] = {"rhssaf_main"};
        name = "RHS: SAF Weapons configuration";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class rhs_russian_rifle_scopes_slot;
class rhs_picattinny_russian_rifle_scopes_slot;
class rhs_russian_ak_barrel_slot;
class rhs_western_rifle_underbarrel_slot;
class rhs_western_rifle_scopes_slot;
class rhs_western_rifle_scopes_slot_short;
class rhs_western_rifle_laser_slot;
class asdg_MuzzleSlot_556;
class rhs_western_rifle_muzzle_slot: asdg_MuzzleSlot_556 {
    class compatibleItems;
};
class rhs_western_rifle_gripod_slot;
class rhs_western_mg_gripod_slot;
class rhs_Underslot_m249_ris;
class RscOpticsText;
class RscOpticsValue;
class RscText;
class RscPicture;
class RscControlsGroup;
class RscInGameUI {
    class RscUnitInfo;
    class RscWeaponZeroing: RscUnitInfo {
        class WeaponInfoControlsGroupLeft;
    };
    class rhs_rscOptics_m21a_mtz: RscWeaponZeroing {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_fnc_acc_mtz_handler;_this call rhs_fnc_safemode";
        controls[] = {"CA_Zeroing", "RHS_safemode_handler", "RHS_npz_rail_handler"};
        class RHS_safemode_handler: RscPicture {
            idc = 9999;
        };
        class RHS_npz_rail_handler: RscPicture {
            idc = 9897;
        };
    };
    class rhs_rscOptics_m21s_mtz: rhs_rscOptics_m21a_mtz {};
    class rhs_rscOptics_m70ab2: RscWeaponZeroing {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_fnc_fold_weapon;_this call rhs_fnc_safemode";
        controls[] = {"CA_Zeroing", "RHS_safemode_handler", "RHS_ak_fold_handler"};
        class RHS_safemode_handler: RscPicture {
            idc = 9999;
        };
        class RHS_ak_fold_handler: RscPicture {
            idc = 9899;
        };
    };
    class rhs_rscOptics_m92: rhs_rscOptics_m70ab2 {};
    class rhs_rscOptics_m21a: rhs_rscOptics_m70ab2 {};
    class rhs_rscOptics_m21s: rhs_rscOptics_m70ab2 {};
    class rhs_rscOptics_m70b1: RscWeaponZeroing {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call rhs_fnc_safemode";
        controls[] = {"CA_Zeroing", "RHS_safemode_handler"};
        class RHS_safemode_handler: RscPicture {
            idc = 9999;
        };
    };
    class rhs_rscOptics_m76: rhs_rscOptics_m70b1 {};
    class rhs_rscOptics_acc_mtz: RscWeaponZeroing {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_acc_mtz";
    };
    class rhs_rscOptics_g36: RscWeaponZeroing {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_fnc_fold_weapon;_this call rhs_fnc_safemode";
        controls[] = {"CA_Zeroing", "RHS_safemode_handler", "RHS_fold_handler"};
        class RHS_safemode_handler: RscPicture {
            idc = 9999;
        };
        class RHS_fold_handler: RscPicture {
            idc = 9899;
        };
    };
    class rhs_rscOptics_g36c: rhs_rscOptics_g36 {};
    class rhs_rscOptics_g36kv: rhs_rscOptics_g36 {};
    class rhs_rscOptics_g36kv_ag36: rhs_rscOptics_g36 {};
    class rhs_rscOptics_m84: RscWeaponZeroing {
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhs_fnc_handle_pk";
        controls[] = {"CA_Zeroing"};
    };
};
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        rhs_GestureReloadG36A1 = "rhs_GestureReloadG36A1";
        rhs_GestureReloadG36MLI = "rhs_GestureReloadG36MLI";
        rhs_GestureReloadG36V = "rhs_GestureReloadG36V";
        rhs_GestureReloadAG36 = "rhs_GestureReloadAG36";
        rhssaf_m70c_Gunner = "rhssaf_m70c_Gunner";
        rhs_GestureReloadM21GP = "rhs_GestureReloadM21GP";
    };
    class Actions {
        class NoActions: ManActions {
            rhs_GestureReloadG36A1[] = {"rhs_GestureReloadG36A1", "Gesture"};
            rhs_GestureReloadG36MLI[] = {"rhs_GestureReloadG36MLI", "Gesture"};
            rhs_GestureReloadG36V[] = {"rhs_GestureReloadG36V", "Gesture"};
            rhs_GestureReloadAG36[] = {"rhs_GestureReloadAG36", "Gesture"};
            rhs_GestureReloadM21GP[] = {"rhs_GestureReloadM21GP", "Gesture"};
        };
        class RifleBaseStandActions;
        class RifleProneActions: RifleBaseStandActions {
            rhs_GestureReloadG36A1[] = {"rhs_GestureReloadG36A1_Prone", "Gesture"};
            rhs_GestureReloadG36MLI[] = {"rhs_GestureReloadG36MLI_Prone", "Gesture"};
            rhs_GestureReloadG36V[] = {"rhs_GestureReloadG36V_Prone", "Gesture"};
            rhs_GestureReloadAG36[] = {"rhs_GestureReloadAG36_Prone", "Gesture"};
            rhs_GestureReloadM21GP[] = {"rhs_GestureReloadM21GP_Prone", "Gesture"};
        };
        class RifleAdjustProneBaseActions;
        class RifleAdjustRProneActions: RifleAdjustProneBaseActions {
            rhs_GestureReloadG36A1[] = {"rhs_GestureReloadG36A1_Context", "Gesture"};
            rhs_GestureReloadG36MLI[] = {"rhs_GestureReloadG36MLI_Context", "Gesture"};
            rhs_GestureReloadG36V[] = {"rhs_GestureReloadG36V_Context", "Gesture"};
            rhs_GestureReloadAG36[] = {"rhs_GestureReloadAG36_Context", "Gesture"};
            rhs_GestureReloadM21GP[] = {"rhs_GestureReloadM21GP_Context", "Gesture"};
        };
        class RifleAdjustLProneActions: RifleAdjustProneBaseActions {
            rhs_GestureReloadG36A1[] = {"rhs_GestureReloadG36A1_Context", "Gesture"};
            rhs_GestureReloadG36MLI[] = {"rhs_GestureReloadG36MLI_Context", "Gesture"};
            rhs_GestureReloadG36V[] = {"rhs_GestureReloadG36V_Context", "Gesture"};
            rhs_GestureReloadAG36[] = {"rhs_GestureReloadAG36_Context", "Gesture"};
            rhs_GestureReloadM21GP[] = {"rhs_GestureReloadM21GP_Context", "Gesture"};
        };
        class RifleAdjustFProneActions: RifleAdjustProneBaseActions {
            rhs_GestureReloadG36A1[] = {"rhs_GestureReloadG36A1_Context", "Gesture"};
            rhs_GestureReloadG36MLI[] = {"rhs_GestureReloadG36MLI_Context", "Gesture"};
            rhs_GestureReloadG36V[] = {"rhs_GestureReloadG36V_Context", "Gesture"};
            rhs_GestureReloadAG36[] = {"rhs_GestureReloadAG36_Context", "Gesture"};
            rhs_GestureReloadM21GP[] = {"rhs_GestureReloadM21GP", "Gesture"};
        };
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class rhssaf_m70c_Gunner: Crew {
            file = "rhssaf\addons\rhssaf_c_weapons\anims\rhssaf_m70c_gunner";
            connectTo[] = {"Static_Dead", 1};
            leftHandIKBeg = 1;
            leftHandIKCurve[] = {1};
            leftHandIKEnd = 1;
            rightHandIKCurve[] = {1};
            righHandIKBeg = 1;
            righHandIKEnd = 1;
            collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
        };
    };
};
class CfgGesturesMale {
    class Default;
    class States {
        class RHS_GestureReloadG36A1: Default {
            file = "rhssaf\addons\rhssaf_m_weapon_g36\anim\standard\reload_G36_standing.rtm";
            speed = 0.23076923;
            looped = 0;
            mask = "handsWeapon";
            headBobStrength = 0.25;
            headBobMode = 2;
            leftHandIKCurve[] = {0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
            rightHandIKBeg = 1;
            rightHandIKEnd = 1;
        };
        class RHS_GestureReloadG36A1_Prone: Default {
            file = "rhssaf\addons\rhssaf_m_weapon_g36\anim\standard\reload_G36_prone.rtm";
            speed = 0.23076923;
            looped = 0;
            mask = "handsWeapon";
            headBobStrength = 0.15;
            headBobMode = 2;
            leftHandIKCurve[] = {0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
            rightHandIKBeg = 1;
            rightHandIKEnd = 1;
        };
        class RHS_GestureReloadG36A1_Context: RHS_GestureReloadG36A1 {
            mask = "handsWeapon_context";
        };
        class RHS_GestureReloadG36V: Default {
            file = "rhssaf\addons\rhssaf_m_weapon_g36\anim\varient\reload_G36V_standing.rtm";
            speed = 0.25641027;
            looped = 0;
            mask = "handsWeapon";
            headBobStrength = 0.25;
            headBobMode = 2;
            leftHandIKCurve[] = {0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
            rightHandIKCurve[] = {0, 1, 0.6545, 0, 0.72727, 0, 0.7545, 1};
            rightHandIKBeg = 1;
            rightHandIKEnd = 1;
        };
        class RHS_GestureReloadG36V_Prone: Default {
            file = "rhssaf\addons\rhssaf_m_weapon_g36\anim\varient\reload_G36V_prone.rtm";
            speed = 0.25641027;
            looped = 0;
            mask = "handsWeapon";
            headBobStrength = 0.15;
            headBobMode = 2;
            leftHandIKCurve[] = {0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
            rightHandIKCurve[] = {0, 1, 0.6545, 0, 0.72727, 0, 0.7545, 1};
            rightHandIKBeg = 1;
            rightHandIKEnd = 1;
        };
        class RHS_GestureReloadG36V_Context: RHS_GestureReloadG36V {
            mask = "handsWeapon_context";
        };
        class RHS_GestureReloadAG36: Default {
            file = "rhssaf\addons\rhssaf_m_weapon_g36\anim\ag36\reload_aG36_standing.rtm";
            speed = 0.23076923;
            looped = 0;
            mask = "handsWeapon";
            headBobStrength = 0.25;
            headBobMode = 2;
            leftHandIKCurve[] = {0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
            rightHandIKBeg = 1;
            rightHandIKEnd = 1;
        };
        class RHS_GestureReloadAG36_Prone: Default {
            file = "rhssaf\addons\rhssaf_m_weapon_g36\anim\ag36\reload_aG36_prone.rtm";
            speed = 0.23076923;
            looped = 0;
            mask = "handsWeapon";
            headBobStrength = 0.15;
            headBobMode = 2;
            leftHandIKCurve[] = {0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
            rightHandIKBeg = 1;
            rightHandIKEnd = 1;
        };
        class RHS_GestureReloadAG36_Context: RHS_GestureReloadAG36 {
            mask = "handsWeapon_context";
        };
        class RHS_GestureReloadG36MLI: Default {
            file = "rhssaf\addons\rhssaf_m_weapon_g36\anim\mli\reload_g36mli_standing.rtm";
            speed = 0.27272728;
            looped = 0;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            leftHandIKCurve[] = {0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
            rightHandIKCurve[] = {0, 1, 0.6545, 0, 0.72727, 0, 0.7545, 1};
            rightHandIKBeg = 1;
            rightHandIKEnd = 1;
        };
        class RHS_GestureReloadG36MLI_Prone: Default {
            file = "rhssaf\addons\rhssaf_m_weapon_g36\anim\mli\reload_g36mli_prone.rtm";
            looped = 0;
            speed = 0.27272728;
            mask = "handsWeapon";
            headBobStrength = 0.15;
            headBobMode = 2;
            leftHandIKBeg = 1;
            leftHandIKCurve[] = {0, 1, 0.07, 0, 0.81, 0, 0.86, 1};
            leftHandIKEnd = 1;
            rightHandIKBeg = 1;
            rightHandIKCurve[] = {0, 1, 0.6545, 0, 0.72727, 0, 0.7545, 1};
            rightHandIKEnd = 1;
        };
        class RHS_GestureReloadG36MLI_Context: RHS_GestureReloadG36MLI {
            mask = "handsWeapon_context";
        };
        class RHS_GestureReloadM21GP: Default {
            file = "\rhssaf\addons\rhssaf_c_weapons\anims\reload_m21_gp.rtm";
            looped = 0;
            speed = -4.8;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKCurve[] = {0.631944, 1, 0.657922, 0, 0.840278, 0, 0.875, 1};
            leftHandIKCurve[] = {0, 1, 0.03125, 0, 0.868056, 0, 0.96, 1};
            leftHandIKBeg = 0;
            leftHandIKEnd = 1;
            rightHandIKBeg = 1;
            rightHandIKEnd = 1;
        };
        class RHS_GestureReloadM21GP_Prone: Default {
            file = "\rhssaf\addons\rhssaf_c_weapons\anims\reload_m21_gp_prone.rtm";
            looped = 0;
            speed = -4.8;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            leftHandIKBeg = 0;
            leftHandIKCurve[] = {0, 1, 0.075, 0, 0.85, 0, 0.93, 1};
            leftHandIKEnd = 1;
            rightHandIKBeg = 1;
            rightHandIKCurve[] = {1};
            rightHandIKEnd = 1;
        };
        class RHS_GestureReloadM21GP_Context: RHS_GestureReloadM21GP {
            mask = "handsWeapon_context";
        };
    };
};
class CfgAmmo {
    class BulletBase;
    class rhs_ammo_base_penetrator;
    class B_9x21_Ball;
    class rhs_ammo_9x17: B_9x21_Ball {
        hit = 5.07;
        typicalSpeed = 272;
        airFriction = -0.0017671455;
        caliber = 0.838;
        deflecting = 37;
        visibleFire = 2.8;
        audibleFire = 5.65;
    };
    class B_556x45_Ball;
    class rhs_B_762x39_Ball;
    class rhssaf_ammo_762x39_m82_api: rhs_B_762x39_Ball {
        cartridge = "RHS_Cartridge_762x39";
        hit = 8.8;
        typicalSpeed = 718;
        airFriction = -0.0016519;
        caliber = 0.913;
        deflecting = 15;
        visibleFire = 3;
        audibleFire = 6;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerStartTime = 0.151;
        tracerEndTime = 1;
    };
    class rhssaf_ammo_556x45_EPR: B_556x45_Ball {
        hit = 8.114581;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        typicalSpeed = 905.256;
        airFriction = -0.0011543788;
        caliber = 0.855;
        deflecting = 21;
        visibleFire = 3;
        audibleFire = 7;
    };
    class rhssaf_ammo_556x45_EPR_Tracer: rhssaf_ammo_556x45_EPR {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgOnly = 0;
    };
    class rhssaf_ammo_556x45_SOST: B_556x45_Ball {
        hit = 9.038702;
        typicalSpeed = 857.0976;
        airFriction = -0.0012817576;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        caliber = 0.755;
        deflecting = 18;
        visibleFire = 3;
        audibleFire = 5.5;
    };
    class rhssaf_ammo_556x45_SPR: B_556x45_Ball {
        hit = 11.5702505;
        typicalSpeed = 868.68;
        airFriction = -0.0010867938;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        caliber = 0.615;
        deflecting = 16;
        visibleFire = 2.5;
        audibleFire = 5;
    };
    class B_556x45_Ball_Tracer_Red;
    class rhssaf_ammo_556x45_Ball_Tracer_Dim: B_556x45_Ball_Tracer_Red {
        nvgOnly = 1;
    };
    class rhs_ammo_792x57_Ball: BulletBase {
        hit = 11.55;
        indirectHit = 0;
        indirectHitRange = 0;
        cartridge = "FxCartridge_762";
        visibleFire = 22;
        audibleFire = 18;
        visibleFireTime = 3;
        cost = 1.2;
        airLock = 1;
        caliber = 0.45;
        model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
        tracerScale = 1.2;
        tracerStartTime = 0.045;
        tracerEndTime = 1.5;
        airFriction = -0.0006814;
        typicalSpeed = 838;
    };
    class GrenadeBase;
    class rhssaf_ammo_ttm_m60: GrenadeBase {
        simulation = "shotShell";
        model = "\rhssaf\addons\rhssaf_m_explosives\rifle_grenades\ttm_m60\rhssaf_ttm_m60_fly";
        hit = 100;
        indirectHit = 25;
        indirectHitRange = 15;
        visibleFire = 16;
        audibleFire = 18;
        visibleFireTime = 3;
        explosive = 1;
        cost = 500;
        deflecting = 5;
        airFriction = -0.0015;
        fuseDistance = 30;
        whistleDist = 5;
    };
    class rhssaf_ammo_tkm_m60: GrenadeBase {
        simulation = "shotShell";
        model = "\rhssaf\addons\rhssaf_m_explosives\rifle_grenades\tkm_m60\rhssaf_tkm_m60_fly";
        hit = 150;
        indirectHit = 25;
        indirectHitRange = 25;
        visibleFire = 16;
        audibleFire = 20;
        visibleFireTime = 3;
        explosive = 1;
        cost = 530;
        deflecting = 5;
        airFriction = -0.0015;
        fuseDistance = 30;
        whistleDist = 5;
    };
    class rhs_ammo_m80_penetrator: rhs_ammo_base_penetrator {
        caliber = "(300/((15*1000)/1000))";
    };
    class rhs_rpg26_rocket;
    class rhs_ammo_m80_rocket: rhs_rpg26_rocket {
        warheadName = "HEAT";
        submunitionAmmo = "rhs_ammo_m80_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        airFriction = 0.26;
        sideAirFriction = 0.001;
        hit = 180;
        indirectHit = 21;
        maxSpeed = 190;
        timeToLive = 4;
    };
    class GrenadeHand;
    class rhssaf_ammo_br_m75: GrenadeHand {
        model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\br_m75\rhssaf_br_m75_throw";
        explosionTime = 4;
    };
    class rhssaf_ammo_br_m84: GrenadeHand {
        model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\br_m84\rhssaf_br_m84_throw";
        explosionTime = 4;
    };
    class SmokeShell;
    class rhssaf_ammo_brd_m83_white: SmokeShell {
        model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\brd_m83\rhssaf_brd_m83_throw";
    };
    class rhssaf_ammo_brd_m83_yellow: rhssaf_ammo_brd_m83_white {
        smokeColor[] = {0.9883, 0.8606, 0.0719, 1};
        model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\brd_m83\rhssaf_brd_m83_y_throw";
    };
    class rhssaf_ammo_brd_m83_green: rhssaf_ammo_brd_m83_white {
        smokeColor[] = {0.2125, 0.6258, 0.4891, 1};
        model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\brd_m83\rhssaf_brd_m83_g_throw";
    };
    class rhssaf_ammo_brd_m83_red: rhssaf_ammo_brd_m83_white {
        smokeColor[] = {0.8438, 0.1383, 0.1353, 1};
        model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\brd_m83\rhssaf_brd_m83_r_throw";
    };
    class rhssaf_ammo_brd_m83_blue: rhssaf_ammo_brd_m83_white {
        smokeColor[] = {0.2549, 0.4117, 1, 1};
        model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\brd_m83\rhssaf_brd_m83_b_throw";
    };
    class rhssaf_ammo_brd_m83_orange: rhssaf_ammo_brd_m83_white {
        smokeColor[] = {1, 0.647, 0, 1};
        model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\brd_m83\rhssaf_brd_m83_o_throw";
    };
    class rhssaf_ammo_rshb_p98: GrenadeHand {
        model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\rshb_p98\rhssaf_rshb_p98_throw";
        hit = 0.1;
        indirectHit = 0.1;
        indirectHitRange = 15;
        ExplosionEffects = "RHSUSF_flashbang_15";
        craterEffects = "RHSUSF_flashbang_Crater";
        explosionTime = 1.5;
        cost = 10;
    };
    class rhssaf_ammo_brz_m88: SmokeShell {
        CraterEffects = "NoCrater";
        explosionEffects = "NoExplosion";
        cost = 150;
        timeToLive = 25;
        effectsSmoke = "RHS_Incendenary_Grenade";
        model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\brz_m88\rhssaf_brz_m88_throw";
        SmokeShellSoundLoop1[] = {
            "A3\Sounds_F\weapons\smokeshell\smoke_loop1",
            0.12589253,
            1,
            16.5
        };
        SmokeShellSoundLoop2[] = {
            "A3\Sounds_F\weapons\smokeshell\smoke_loop2",
            0.12589253,
            1,
            16.5
        };
        grenadeBurningSound[] = {
            "SmokeShellSoundLoop1",
            0.5,
            "SmokeShellSoundLoop2",
            0.5
        };
        aiAmmoUsageFlags = "1 + 2 + 64";
    };
    class rhssaf_ammo_brk_m79: GrenadeHand {
        model = "\rhssaf\addons\rhssaf_m_explosives\grenades\brk_m79\rhssaf_brk_m79";
        rhs_submunition = "rhssaf_ammo_brk_m79_fly";
        rhs_submunition_uxo = "rhssaf_ammo_brk_m79_uxo";
        rhs_fuseTime[] = {0.3, 0.35, 0.4};
        simulationStep = 0.001;
        explosionTime = -1;
        timeToLive = 5;
        explosionEffects = "";
        CraterEffects = "";
        SoundSetExplosion[] = {};
        multiSoundHit[] = {};
        hit = 0.1;
        indirectHit = 0;
    };
    class rhssaf_ammo_brk_m79_uxo: SmokeShell {
        model = "\rhssaf\addons\rhssaf_m_explosives\grenades\brk_m79\rhssaf_brk_m79";
        smokeColor[] = {0, 0, 0, 0};
        grenadeFireSound[] = {};
        grenadeBurningSound[] = {};
    };
    class rhssaf_ammo_brk_m79_fly: GrenadeHand {
        rhs_submunition = "rhssaf_ammo_brk_m79_explosion";
        hit = 180;
        indirectHit = 12;
        indirectHitRange = 3;
        model = "\rhssaf\addons\rhssaf_m_explosives\grenades\thrown\brk_m79\brk_m79_throw.p3d";
        explosionTime = -1;
        SoundSetExplosion[] = {};
    };
    class rhssaf_ammo_brk_m79_explosion: BulletBase {
        hit = 140;
        indirectHit = 8;
        indirectHitRange = 3;
        simulationStep = 0.00001;
        simulation = "shotShell";
        deflecting = 0;
        explosive = 1;
        timeToLive = 1;
        explosionTime = 0;
        explosionSoundEffect = "DefaultExplosion";
        CraterEffects = "GrenadeCrater";
        explosionEffects = "GrenadeExplosion";
        submunitionAmmo = "rhssaf_ammo_brk_m79_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0, 0, -0.1};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1053;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
    };
    class rhs_ammo_3bk12_penetrator;
    class rhssaf_ammo_brk_m79_penetrator: rhs_ammo_3bk12_penetrator {
        caliber = "(440/((15* 1000)/1000))";
    };
    class Sh_82mm_AMOS;
    class rhssaf_mortar_M73_HE: Sh_82mm_AMOS {
        hit = 100;
        indirectHit = 30;
        indirectHitRange = 10;
    };
    class MineBase;
    class DirectionalBombBase;
    class PipeBombBase;
    class rhssaf_mine_pma3_ammo: MineBase {
        AIAmmoUsageFlags = "16";
        hit = 3;
        indirectHit = 40;
        indirectHitRange = 0.1;
        model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\pma\rhssaf_pma3_e";
        mineModelDisabled = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\pma\rhssaf_pma3_d";
        icon = "iconExplosiveAP";
        defaultMagazine = "rhssaf_mine_pma3_mag";
        soundHit[] = {
            "A3\Sounds_F\weapons\mines\mine_debris_2",
            3.1622777,
            1,
            2000
        };
        explosionEffects = "MineExplosion";
        CraterEffects = "MineCrater";
        whistleDist = 8;
        cost = 200;
        mineInconspicuousness = 3;
        mineTrigger = "RangeTriggerShort";
    };
    class rhssaf_mine_tma4_ammo: MineBase {
        AIAmmoUsageFlags = "16";
        hit = 2200;
        indirectHit = 1250;
        indirectHitRange = 2;
        model = "\rhssaf\addons\rhssaf_m_explosives\mines_at\tma4\rhssaf_tma4_e";
        mineModelDisabled = "\rhssaf\addons\rhssaf_m_explosives\mines_at\tma4\rhssaf_tma4_d";
        icon = "iconExplosiveAT";
        defaultMagazine = "rhssaf_mine_tma4_mag";
        SoundSetExplosion[] = {"ATmine_Exp_SoundSet", "ATmine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
        explosionEffects = "ATMineExplosion";
        CraterEffects = "ATMineCrater";
        whistleDist = 8;
        cost = 200;
        mineInconspicuousness = 30;
        mineTrigger = "rhssaf_tma4Trigger";
        deleteParentWhenTriggered = 0;
        submunitionAmmo[] = {"rhssaf_mine_tma4_penetrator", 1};
        submunitionConeAngle[] = {0, 4};
        submunitionConeAngleHorizontal = 720;
        submunitionAutoleveling = 1;
        submunitionConeType[] = {"randomupcone", 1};
        submunitionInitSpeed = 100;
    };
    class rhssaf_mine_tma4_penetrator: rhs_ammo_base_penetrator {
        hit = 240;
        typicalspeed = 100;
        caliber = "(200/((15*100)/1000))";
    };
    class rhssaf_mine_mrud_a_ammo: DirectionalBombBase {
        AIAmmoUsageFlags = "16";
        hit = 15;
        indirectHit = 15;
        indirectHitRange = 10;
        model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_a_e";
        mineModelDisabled = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_a_d";
        icon = "iconExplosiveAP";
        defaultMagazine = "rhssaf_mine_mrud_a_mag";
        soundTrigger[] = {
            "A3\Sounds_F\weapons\mines\mech_trigger_2",
            3.1622777,
            1,
            50
        };
        soundActivation[] = {
            "A3\Sounds_F\weapons\mines\mech_activate_mine_1",
            0.56234133,
            1,
            30
        };
        soundDeactivation[] = {
            "A3\Sounds_F\weapons\mines\deactivate_mine_3a",
            0.56234133,
            1,
            30
        };
        soundHit[] = {
            "\A3\Sounds_F\arsenal\explosives\mines\Explosion_tripwire_landmine",
            3.1622777,
            1,
            1500
        };
        explosionEffects = "MineExplosion";
        CraterEffects = "MineCrater";
        whistleDist = 8;
        cost = 200;
        mineInconspicuousness = 30;
        mineTrigger = "rhssaf_mrud_a_Trigger";
    };
    class rhssaf_mine_mrud_b_ammo: rhssaf_mine_mrud_a_ammo {
        model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_b_e";
        defaultMagazine = "rhssaf_mine_mrud_b_mag";
        mineTrigger = "rhssaf_mrud_b_Trigger";
    };
    class rhssaf_mine_mrud_c_ammo: rhssaf_mine_mrud_a_ammo {
        model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_c_e";
        defaultMagazine = "rhssaf_mine_mrud_c_mag";
        mineTrigger = "rhssaf_mrud_c_Trigger";
    };
    class rhssaf_mine_mrud_d_ammo: rhssaf_mine_mrud_a_ammo {
        model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_d_e";
        mineModelDisabled = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_b_d";
        icon = "iconExplosiveAPDirectional";
        defaultMagazine = "rhssaf_mine_mrud_d_mag";
        cost = 400;
        mineTrigger = "RemoteTrigger";
    };
    class rhssaf_tm100_ammo: PipeBombBase {
        hit = 200;
        indirectHit = 200;
        indirectHitRange = 1;
        model = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm100_e";
        mineModelDisabled = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm100_d";
        soundHit[] = {
            "A3\Sounds_F\arsenal\explosives\bombs\Explosive_Charge",
            3.1622777,
            1,
            1500
        };
        soundDeactivation[] = {
            "A3\Sounds_F\weapons\Mines\deactivate_mine_3a",
            1.4125376,
            1,
            20
        };
        SoundSetExplosion[] = {"ExplosiveCharge_Exp_SoundSet", "ExplosiveCharge_Tail_SoundSet", "Explosion_Debris_SoundSet"};
        defaultMagazine = "rhssaf_tm100_mag";
        ExplosionEffects = "MineNondirectionalExplosionSmall";
        CraterEffects = "MineNondirectionalCraterSmall";
        whistleDist = 32;
        mineInconspicuousness = 5;
        mineTrigger = "RemoteTrigger";
    };
    class rhssaf_tm100_ammo_scripted: rhssaf_tm100_ammo {};
    class rhssaf_tm200_ammo: rhssaf_tm100_ammo {
        hit = 400;
        indirectHit = 400;
        indirectHitRange = 3;
        model = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm200_e";
        mineModelDisabled = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm200_d";
        defaultMagazine = "rhssaf_tm200_mag";
    };
    class rhssaf_tm200_ammo_scripted: rhssaf_tm200_ammo {};
    class rhssaf_tm500_ammo: rhssaf_tm100_ammo {
        hit = 1000;
        indirectHit = 1000;
        indirectHitRange = 5;
        model = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm500_e";
        mineModelDisabled = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm500_d";
        ExplosionEffects = "MineNondirectionalExplosion";
        CraterEffects = "MineNondirectionalCrater";
        defaultMagazine = "rhssaf_tm500_mag";
        SoundSetExplosion[] = {"ClaymoreMine_Exp_SoundSet", "ClaymoreMine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
    };
    class rhssaf_tm500_ammo_scripted: rhssaf_tm500_ammo {};
};
class CfgMineTriggers {
    class WireTrigger;
    class rhssaf_tma4Trigger: WireTrigger {
        mineTriggerRange = 0;
        mineTriggerMass = 200;
        mineMagnetic = 0;
        mineWireStart[] = {0, 0, 0};
        mineWireEnd[] = {0, 0.3, 0};
        restrictZoneCenter[] = {0, 0, 0};
        restrictZoneRadius = 5;
    };
    class rhssaf_mrud_a_Trigger: WireTrigger {
        mineTriggerRange = 1;
        mineTriggerActivationRange = 2;
        mineWireStart[] = {0, 0.1, 0};
        mineWireEnd[] = {0, 0.1, 3};
        timerStep = 30;
        mineDelay = 0;
    };
    class rhssaf_mrud_b_Trigger: rhssaf_mrud_a_Trigger {
        mineWireStart[] = {0, 0.1, 0};
        mineWireEnd[] = {0, 0.1, 6};
    };
    class rhssaf_mrud_c_Trigger: rhssaf_mrud_a_Trigger {
        mineWireStart[] = {0, 0.1, 0};
        mineWireEnd[] = {0, 0.1, 10};
    };
};
class CfgVehicles {
    class I_supplyCrate_F;
    class rhssaf_virtual_crate: I_supplyCrate_F {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_RHSSAF_CRATE";
        type = 0;
        transportMaxWeapons = 70;
        transportMaxMagazines = 40;
        class EventHandlers {
            init = "[_this select 0,0] call rhs_fnc_virtualAmmoBoxSAF;";
        };
        SLX_XEH_DISABLED = 1;
        class TransportWeapons {};
        class TransportMagazines {};
        class TransportItems {};
    };
    class Weapon_Base_F;
    class rhssaf_weapon_base: Weapon_Base_F {
        scope = 1;
        scopeCurator = 0;
        vehicleClass = "WeaponsPrimary";
        editorCategory = "EdCat_Weapons";
        editorSubcategory = "EdSubcat_AssaultRifles";
    };
    class rhssaf_weapon_cz99: rhssaf_weapon_base {
        scope = 2;
        scopeCurator = 2;
        class TransportWeapons {
            class rhs_weap_cz99 {
                weapon = "rhs_weap_cz99";
                count = 1;
            };
        };
        displayName = "$STR_RHS_WEAP_CZ99_DISPLAYNAME";
        class TransportMagazines {
            class rhssaf_mag_15Rnd_9x19_FMJ {
                magazine = "rhssaf_mag_15Rnd_9x19_FMJ";
                count = 1;
            };
        };
        vehicleClass = "WeaponsHandguns";
        editorSubcategory = "EdSubcat_Pistols";
        model = "\A3\Weapons_F\DummyPistol_Single.p3d";
    };
    class rhssaf_weapon_cz99_etched: rhssaf_weapon_base {
        scope = 2;
        scopeCurator = 2;
        class TransportWeapons {
            class rhs_weap_cz99_etched {
                weapon = "rhs_weap_cz99_etched";
                count = 1;
            };
        };
        displayName = "$STR_RHS_WEAP_CZ99_ETCHED_DISPLAYNAME";
        class TransportMagazines {
            class rhssaf_mag_15Rnd_9x19_FMJ {
                magazine = "rhssaf_mag_15Rnd_9x19_FMJ";
                count = 1;
            };
        };
        vehicleClass = "WeaponsHandguns";
        editorSubcategory = "EdSubcat_Pistols";
        model = "\A3\Weapons_F\DummyPistol_Single.p3d";
    };
    class rhssaf_weapon_m92: rhssaf_weapon_base {
        scope = 2;
        scopeCurator = 2;
        class TransportWeapons {
            class rhs_weap_m92 {
                weapon = "rhs_weap_m92";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_WEAP_M92";
        class TransportMagazines {
            class rhssaf_30Rnd_762x39mm_M67 {
                magazine = "rhssaf_30Rnd_762x39mm_M67";
                count = 1;
            };
        };
        editorSubcategory = "EdSubcat_SubMachineGuns";
    };
    class rhssaf_weapon_m92_fold: rhssaf_weapon_m92 {
        scope = 2;
        scopeCurator = 2;
        class TransportWeapons {
            class rhs_weap_m92_fold {
                weapon = "rhs_weap_m92_fold";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_WEAP_M92_FOLD";
    };
    class rhssaf_weapon_scorpion: rhssaf_weapon_m92 {
        scope = 2;
        scopeCurator = 2;
        class TransportWeapons {
            class rhs_weap_scorpion {
                weapon = "rhs_weap_scorpion";
                count = 1;
            };
        };
        displayName = "$STR_RHS_WEAP_SCORPION_DISPLAYNAME";
        class TransportMagazines {
            class rhsgref_20rnd_765x17_vz61 {
                magazine = "rhsgref_20rnd_765x17_vz61";
                count = 1;
            };
        };
    };
    class rhssaf_weapon_m76: rhssaf_weapon_base {
        scope = 2;
        scopeCurator = 2;
        class TransportWeapons {
            class rhs_weap_m76 {
                weapon = "rhs_weap_m76";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_WEAP_M76";
        class TransportMagazines {
            class rhsgref_10Rnd_792x57_m76 {
                magazine = "rhsgref_10Rnd_792x57_m76";
                count = 1;
            };
        };
        editorSubcategory = "EdSubcat_SniperRifles";
    };
    class rhssaf_weapon_m82a1: rhssaf_weapon_m76 {
        scope = 2;
        scopeCurator = 2;
        class TransportWeapons {
            class rhs_weap_m82a1 {
                weapon = "rhs_weap_m82a1";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_WEAP_M82A1";
        class TransportMagazines {
            class rhsusf_mag_10Rnd_STD_50BMG_M33 {
                magazine = "rhsusf_mag_10Rnd_STD_50BMG_M33";
                count = 1;
            };
        };
    };
    class rhssaf_weapon_minimi: rhssaf_weapon_base {
        scope = 2;
        scopeCurator = 2;
        class TransportWeapons {
            class rhs_weap_minimi_para_railed {
                weapon = "rhs_weap_minimi_para_railed";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_WEAP_MINIMI";
        class TransportMagazines {
            class rhs_200rnd_556x45_M_SAW {
                magazine = "rhs_200rnd_556x45_M_SAW";
                count = 1;
            };
        };
        editorSubcategory = "EdSubcat_MachineGuns";
    };
    class rhssaf_weapon_m84: rhssaf_weapon_minimi {
        scope = 2;
        scopeCurator = 2;
        class TransportWeapons {
            class rhs_weap_m84 {
                weapon = "rhs_weap_m84";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_WEAP_M84";
        class TransportMagazines {
            class rhs_100Rnd_762x54mmR {
                magazine = "rhs_100Rnd_762x54mmR";
                count = 1;
            };
        };
    };
    class rhssaf_weapon_m70ab2: rhssaf_weapon_base {
        scope = 2;
        scopeCurator = 2;
        class TransportWeapons {
            class rhs_weap_m70ab2 {
                weapon = "rhs_weap_m70ab2";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_WEAP_M70AB2";
        class TransportMagazines {
            class rhssaf_30Rnd_762x39mm_M67 {
                magazine = "rhssaf_30Rnd_762x39mm_M67";
                count = 1;
            };
        };
    };
    class rhssaf_weapon_m70ab2_fold: rhssaf_weapon_m70ab2 {
        class TransportWeapons {
            class rhs_weap_m70ab2_fold {
                weapon = "rhs_weap_m70ab2_fold";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_WEAP_M70AB2_FOLD";
    };
    class rhssaf_weapon_m70b1: rhssaf_weapon_m70ab2 {
        scope = 2;
        scopeCurator = 2;
        class TransportWeapons {
            class rhs_weap_m70b1 {
                weapon = "rhs_weap_m70b1";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_WEAP_M70B1";
    };
    class rhssaf_weapon_m70b1n: rhssaf_weapon_m70ab2 {
        scope = 2;
        scopeCurator = 2;
        class TransportWeapons {
            class rhs_weap_m70b1n {
                weapon = "rhs_weap_m70b1n";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_WEAP_M70B1N";
    };
    class rhssaf_weapon_m70b3n: rhssaf_weapon_m70ab2 {
        scope = 2;
        scopeCurator = 2;
        class TransportWeapons {
            class rhs_weap_m70b3n {
                weapon = "rhs_weap_m70b3n";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_WEAP_M70B3N";
    };
    class rhssaf_weapon_m70b3n_pbg40: rhssaf_weapon_m70ab2 {
        scope = 2;
        scopeCurator = 2;
        class TransportWeapons {
            class rhs_weap_m70b3n_pbg40 {
                weapon = "rhs_weap_m70b3n_pbg40";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_WEAP_M70B3N_PBG40";
    };
    class rhssaf_weapon_m21a: rhssaf_weapon_base {
        scope = 2;
        scopeCurator = 2;
        class TransportWeapons {
            class rhs_weap_m21a {
                weapon = "rhs_weap_m21a";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_WEAP_M21A";
        class TransportMagazines {
            class rhsgref_30rnd_556x45_m21 {
                magazine = "rhsgref_30rnd_556x45_m21";
                count = 1;
            };
        };
    };
    class rhssaf_weapon_m21a_pr: rhssaf_weapon_m21a {
        scope = 2;
        scopeCurator = 2;
        class TransportWeapons {
            class rhs_weap_m21a_pr {
                weapon = "rhs_weap_m21a_pr";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_WEAP_M21A_PIC";
    };
    class rhssaf_weapon_m21a_fold: rhssaf_weapon_m21a {
        class TransportWeapons {
            class rhs_weap_m21a_fold {
                weapon = "rhs_weap_m21a_fold";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_WEAP_M21A_FOLD";
    };
    class rhssaf_weapon_m21a_pbg40: rhssaf_weapon_m21a {
        scope = 2;
        scopeCurator = 2;
        class TransportWeapons {
            class rhs_weap_m21a_pbg40 {
                weapon = "rhs_weap_m21a_pbg40";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_WEAP_M21A_PBG40";
    };
    class rhssaf_weapon_m21a_pr_pbg40: rhssaf_weapon_m21a {
        scope = 2;
        scopeCurator = 2;
        class TransportWeapons {
            class rhs_weap_m21a_pr_pbg40 {
                weapon = "rhs_weap_m21a_pr_pbg40";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_WEAP_M21A_PIC_PBG40";
    };
    class rhssaf_weapon_m21s: rhssaf_weapon_m21a {
        scope = 2;
        scopeCurator = 2;
        class TransportWeapons {
            class rhs_weap_m21s {
                weapon = "rhs_weap_m21s";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_WEAP_M21S";
    };
    class rhssaf_weapon_m21s_pr: rhssaf_weapon_m21a {
        scope = 2;
        scopeCurator = 2;
        class TransportWeapons {
            class rhs_weap_m21s_pr {
                weapon = "rhs_weap_m21s_pr";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_WEAP_M21S_PIC";
    };
    class rhssaf_weapon_m21s_fold: rhssaf_weapon_m21a {
        class TransportWeapons {
            class rhs_weap_m21s_fold {
                weapon = "rhs_weap_m21s_fold";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_WEAP_M21S_FOLD";
    };
    class rhssaf_weapon_g36c: rhssaf_weapon_m21a {
        scope = 2;
        scopeCurator = 2;
        class TransportWeapons {
            class rhs_weap_g36c {
                weapon = "rhs_weap_g36c";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_WEAP_G36C";
        class TransportMagazines {
            class rhssaf_30rnd_556x45_EPR_G36 {
                magazine = "rhssaf_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class rhssaf_weapon_g36kv: rhssaf_weapon_g36c {
        scope = 2;
        scopeCurator = 2;
        class TransportWeapons {
            class rhs_weap_g36kv {
                weapon = "rhs_weap_g36kv";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_WEAP_G36KV";
    };
    class rhssaf_weapon_g36kv_ag36: rhssaf_weapon_g36c {
        scope = 2;
        scopeCurator = 2;
        class TransportWeapons {
            class rhs_weap_g36kv_ag36 {
                weapon = "rhs_weap_g36kv_ag36";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_WEAP_G36KV_AG36";
    };
    class rhssaf_weapon_m80: rhssaf_weapon_base {
        class TransportWeapons {
            class rhs_weap_m80 {
                weapon = "rhs_weap_m80";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_WEAP_M80";
        class TransportMagazines {
            class rhs_m80_mag {
                magazine = "rhs_m80_mag";
                count = 1;
            };
        };
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "WeaponsSecondary";
        editorSubcategory = "EdSubcat_Launchers";
    };
    class WeaponHolder_Single_limited_item_F;
    class rhssaf_magazine_base: WeaponHolder_Single_limited_item_F {
        vehicleClass = "Magazines";
        editorCategory = "EdCat_Weapons";
        editorSubcategory = "EdSubcat_Magazines";
    };
    class rhssaf_magazine_rhssaf_mag_br_m75: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_mag_br_m75 {
                magazine = "rhssaf_mag_br_m75";
                count = 1;
            };
        };
        displayName = "M75 Fragmentation Grenade";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_mag_br_m84: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_mag_br_m84 {
                magazine = "rhssaf_mag_br_m84";
                count = 1;
            };
        };
        displayName = "M84 Fragmentation Grenade";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_mag_rshb_p98: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_mag_rshb_p98 {
                magazine = "rhssaf_mag_rshb_p98";
                count = 1;
            };
        };
        displayName = "P98 Stun Grenade";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_mag_brz_m88: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_mag_brz_m88 {
                magazine = "rhssaf_mag_brz_m88";
                count = 1;
            };
        };
        displayName = "M88 Incendiary Grenade";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_mag_brd_m83_white: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_mag_brd_m83_white {
                magazine = "rhssaf_mag_brd_m83_white";
                count = 1;
            };
        };
        displayName = "M83 White Smoke Grenade";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_mag_brd_m83_green: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_mag_brd_m83_green {
                magazine = "rhssaf_mag_brd_m83_green";
                count = 1;
            };
        };
        displayName = "M83 Green Smoke Grenade";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_mag_brd_m83_red: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_mag_brd_m83_red {
                magazine = "rhssaf_mag_brd_m83_red";
                count = 1;
            };
        };
        displayName = "M83 Red Smoke Grenade";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_mag_brd_m83_yellow: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_mag_brd_m83_yellow {
                magazine = "rhssaf_mag_brd_m83_yellow";
                count = 1;
            };
        };
        displayName = "M83 Yellow Smoke Grenade";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_mag_brd_m83_blue: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_mag_brd_m83_blue {
                magazine = "rhssaf_mag_brd_m83_blue";
                count = 1;
            };
        };
        displayName = "M83 Blue Smoke Grenade";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_mag_brd_m83_orange: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_mag_brd_m83_orange {
                magazine = "rhssaf_mag_brd_m83_orange";
                count = 1;
            };
        };
        displayName = "M83 Orange Smoke Grenade";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_mag_brk_m79: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_mag_brk_m79 {
                magazine = "rhssaf_mag_brk_m79";
                count = 1;
            };
        };
        displayName = "M79 Anti Tank Grenade";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhsgref_20rnd_765x17_vz61: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhsgref_20rnd_765x17_vz61 {
                magazine = "rhsgref_20rnd_765x17_vz61";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_20RND_765X17_VZ61_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhsgref_10rnd_765x17_vz61: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhsgref_10rnd_765x17_vz61 {
                magazine = "rhsgref_10rnd_765x17_vz61";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_10RND_765X17_VZ61_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_mag_15Rnd_9x19_FMJ: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_mag_15Rnd_9x19_FMJ {
                magazine = "rhssaf_mag_15Rnd_9x19_FMJ";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_MAG_15RND_9X19_FMJ_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_mag_15Rnd_9x19_JHP: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_mag_15Rnd_9x19_JHP {
                magazine = "rhssaf_mag_15Rnd_9x19_JHP";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_MAG_15RND_9X19_JHP_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhsgref_30rnd_556x45_m21: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhsgref_30rnd_556x45_m21 {
                magazine = "rhsgref_30rnd_556x45_m21";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_30RND_556X45_M21_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhsgref_30rnd_556x45_m21_t: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhsgref_30rnd_556x45_m21_t {
                magazine = "rhsgref_30rnd_556x45_m21_t";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_30RND_556X45_M21_T_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_30rnd_556x45_EPR_G36: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_30rnd_556x45_EPR_G36 {
                magazine = "rhssaf_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_30RND_556X45_EPR_G36_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_30rnd_556x45_SOST_G36: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_30rnd_556x45_SOST_G36 {
                magazine = "rhssaf_30rnd_556x45_SOST_G36";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_30RND_556X45_SOST_G36_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_30rnd_556x45_SPR_G36: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_30rnd_556x45_SPR_G36 {
                magazine = "rhssaf_30rnd_556x45_SPR_G36";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_30RND_556X45_SPR_G36_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_100rnd_556x45_EPR_G36: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_100rnd_556x45_EPR_G36 {
                magazine = "rhssaf_100rnd_556x45_EPR_G36";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_100RND_556X45_EPR_G36_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_30rnd_556x45_Tracers_G36: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_30rnd_556x45_Tracers_G36 {
                magazine = "rhssaf_30rnd_556x45_Tracers_G36";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_30RND_556X45_TRACERS_G36_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_30rnd_556x45_TDIM_G36: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_30rnd_556x45_TDIM_G36 {
                magazine = "rhssaf_30rnd_556x45_TDIM_G36";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_30RND_556X45_TDIM_G36_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_30rnd_556x45_MDIM_G36: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_30rnd_556x45_MDIM_G36 {
                magazine = "rhssaf_30rnd_556x45_MDIM_G36";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_30RND_556X45_MDIM_G36_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_30Rnd_762x39mm_M67: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_30Rnd_762x39mm_M67 {
                magazine = "rhssaf_30Rnd_762x39mm_M67";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_30RND_762X39_M67_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_30Rnd_762x39mm_M78_tracer: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_30Rnd_762x39mm_M78_tracer {
                magazine = "rhssaf_30Rnd_762x39mm_M78_tracer";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_30RND_762X39_M78_TRACER_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_30Rnd_762x39_M82_api: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_30Rnd_762x39_M82_api {
                magazine = "rhssaf_30Rnd_762x39_M82_api";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_30RND_762X39_M82_API_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhsgref_10Rnd_792x57_m76: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhsgref_10Rnd_792x57_m76 {
                magazine = "rhsgref_10Rnd_792x57_m76";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_10RND_792X57_M76_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_10Rnd_792x57_m76_tracer: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_10Rnd_792x57_m76_tracer {
                magazine = "rhssaf_10Rnd_792x57_m76_tracer";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_10RND_792X57_M76_TRACER_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_250Rnd_762x54R: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_250Rnd_762x54R {
                magazine = "rhssaf_250Rnd_762x54R";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_250RND_762X54R_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_mine_pma3_mag: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_mine_pma3_mag {
                magazine = "rhssaf_mine_pma3_mag";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_PMA3_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_mine_tma4_mag: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_mine_tma4_mag {
                magazine = "rhssaf_mine_tma4_mag";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_TMA4_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_mine_mrud_a_mag: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_mine_mrud_a_mag {
                magazine = "rhssaf_mine_mrud_a_mag";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_MRUD_A_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_mine_mrud_b_mag: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_mine_mrud_b_mag {
                magazine = "rhssaf_mine_mrud_b_mag";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_MRUD_B_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_mine_mrud_c_mag: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_mine_mrud_c_mag {
                magazine = "rhssaf_mine_mrud_c_mag";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_MRUD_C_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_mine_mrud_d_mag: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_mine_mrud_d_mag {
                magazine = "rhssaf_mine_mrud_d_mag";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_MRUD_D_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_tm100_mag: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_tm100_mag {
                magazine = "rhssaf_tm100_mag";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_TM100_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_tm200_mag: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_tm200_mag {
                magazine = "rhssaf_tm200_mag";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_TM200_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class rhssaf_magazine_rhssaf_tm500_mag: rhssaf_magazine_base {
        scope = 2;
        class TransportMagazines {
            class rhssaf_tm500_mag {
                magazine = "rhssaf_tm500_mag";
                count = 1;
            };
        };
        displayName = "$STR_RHSSAF_TM500_DISPLAYNAME";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
    };
    class MineBase;
    class rhssaf_mine_pma3: MineBase {
        scope = 2;
        ammo = "rhssaf_mine_pma3_ammo";
        editorPreview = "\rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_mine_pma3";
        displayName = "$STR_RHSSAF_PMA3_DISPLAYNAME";
        icon = "iconExplosiveAP";
        picture = "\A3\Weapons_F\Data\clear_empty.paa";
        model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\pma\rhssaf_pma3_e";
        descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
        class Library {
            libTextDesc = "";
        };
    };
    class rhssaf_mine_tma4: MineBase {
        scope = 2;
        ammo = "rhssaf_mine_tma4_ammo";
        editorPreview = "\rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_mine_tma4";
        displayName = "$STR_RHSSAF_TMA4_DISPLAYNAME";
        icon = "iconExplosiveAT";
        picture = "\A3\Weapons_F\Data\clear_empty.paa";
        model = "\rhssaf\addons\rhssaf_m_explosives\mines_at\tma4\rhssaf_tma4_e";
        descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
        class Library {
            libTextDesc = "";
        };
    };
    class rhssaf_mine_mrud_a: MineBase {
        scope = 2;
        ammo = "rhssaf_mine_mrud_a_ammo";
        editorPreview = "\rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_mine_mrud_a";
        displayName = "$STR_RHSSAF_MRUD_A_DISPLAYNAME";
        icon = "iconExplosiveAT";
        picture = "\A3\Weapons_F\Data\clear_empty.paa";
        model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_a_e";
        descriptionShort = "$STR_A3_cfgMagazines_ClassicMineWireMagazine1";
        class Library {
            libTextDesc = "";
        };
    };
    class rhssaf_mine_mrud_b: MineBase {
        scope = 2;
        ammo = "rhssaf_mine_mrud_b_ammo";
        editorPreview = "\rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_mine_mrud_b";
        displayName = "$STR_RHSSAF_MRUD_B_DISPLAYNAME";
        icon = "iconExplosiveAP";
        picture = "\A3\Weapons_F\Data\clear_empty.paa";
        model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_b_e";
        descriptionShort = "$STR_A3_cfgMagazines_ClassicMineWireMagazine1";
        class Library {
            libTextDesc = "";
        };
    };
    class rhssaf_mine_mrud_c: MineBase {
        scope = 2;
        ammo = "rhssaf_mine_mrud_c_ammo";
        editorPreview = "\rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_mine_mrud_c";
        displayName = "$STR_RHSSAF_MRUD_C_DISPLAYNAME";
        icon = "iconExplosiveAP";
        picture = "\A3\Weapons_F\Data\clear_empty.paa";
        model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_c_e";
        descriptionShort = "$STR_A3_cfgMagazines_ClassicMineWireMagazine1";
        class Library {
            libTextDesc = "";
        };
    };
    class rhssaf_mine_mrud_d: rhssaf_mine_mrud_a {
        scope = 2;
        ammo = "rhssaf_mine_mrud_d_ammo";
        editorPreview = "\rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_mine_mrud_d";
        displayName = "$STR_RHSSAF_MRUD_D_DISPLAYNAME";
        icon = "iconExplosiveAPDirectional";
        model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_d_e";
        descriptionShort = "$STR_A3_cfgMagazines_ClassicMineWireMagazine1";
        class Library {
            libTextDesc = "";
        };
    };
    class rhssaf_tm100: MineBase {
        mapSize = 0.31;
        scope = 2;
        ammo = "rhssaf_tm100_ammo";
        editorPreview = "\rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_tm100";
        displayName = "$STR_RHSSAF_TM100_DISPLAYNAME";
        icon = "iconExplosiveGP";
        picture = "\A3\Weapons_F\Data\clear_empty.paa";
        model = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm100_e";
        descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
        class Library {
            libTextDesc = "";
        };
    };
    class rhssaf_tm200: rhssaf_tm100 {
        scope = 2;
        ammo = "rhssaf_tm200_ammo";
        editorPreview = "\rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_tm200";
        displayName = "$STR_RHSSAF_TM200_DISPLAYNAME";
        icon = "iconExplosiveGP";
        model = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm200_e";
        descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
        class Library {
            libTextDesc = "";
        };
    };
    class rhssaf_tm500: rhssaf_tm100 {
        scope = 2;
        ammo = "rhssaf_tm500_ammo";
        editorPreview = "\rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_tm500";
        displayName = "$STR_RHSSAF_TM500_DISPLAYNAME";
        icon = "iconExplosiveGP";
        model = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm500_e";
        descriptionShort = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
        class Library {
            libTextDesc = "";
        };
    };
    class Site_F;
    class Site_Minefield: Site_F {
        class Arguments {
            class minesType {
                class values {
                    class rhssaf_pma3_mine {
                        name = "$STR_RHSSAF_PMA3_DISPLAYNAME";
                        value = "rhssaf_mine_pma3";
                        default = 0;
                    };
                    class rhssaf_tma4_mine {
                        name = "$STR_RHSSAF_TMA4_DISPLAYNAME";
                        value = "rhssaf_mine_tma4";
                        default = 0;
                    };
                    class rhssaf_mrud_a_mine {
                        name = "$STR_RHSSAF_MRUD_A_DISPLAYNAME";
                        value = "rhssaf_mine_mrud_a";
                        default = 0;
                    };
                };
            };
        };
    };
    class LandVehicle;
    class StaticWeapon: LandVehicle {
        class Turrets {
            class MainTurret;
        };
        class EventHandlers;
    };
    class StaticMortar: StaticWeapon {};
    class rhs_m70c_60mm_base: StaticMortar {
        dlc = "RHS_SAF";
        availableForSupportTypes[] = {"Artillery"};
        displayname = "M70C";
        vehicleClass = "rhs_vehclass_artillery";
        editorSubcategory = "rhs_EdSubcat_artillery";
        class Library {
            libTextDesc = "";
        };
        model = "\rhssaf\addons\rhssaf_m_weapon_m70c\rhssaf_m70c_60mm";
        icon = "rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_podnos_2b14_CA.paa";
        picture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\rhs_2b14_82mm_msv_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"rhssaf\addons\rhssaf_t_weapon_m70c\data\rhssaf_m70c_co.paa"};
        transportSoldier = 0;
        mapSize = 1.5;
        cargoAction[] = {"Mortar_Gunner"};
        getInAction = "GetInMortar";
        getOutAction = "GetOutLow";
        class Damage {
            tex[] = {};
            mat[] = {"rhssaf\addons\rhssaf_t_weapon_m70c\data\rhssaf_m70c.rvmat", "rhssaf\addons\rhssaf_t_weapon_m70c\data\rhssaf_m70c.rvmat", "rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"};
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerLeftHandAnimName = "otochlaven";
                gunnerRightHandAnimName = "otochlaven";
                turretInfoType = "RHS_RscWeaponZeroing";
                weapons[] = {"rhs_weap_m70c"};
                magazines[] = {"rhssaf_mag_m73_HE"};
                gunnerAction = "rhssaf_m70c_Gunner";
                gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                memoryPointGunnerOptics = "gunnerview";
                animationSourceElevation = "ObsElevation";
                elevationAnimSourceSpeed = 0.2;
                cameraDir = "AimPoint";
                minElev = -85;
                maxelev = 5;
                minturn = -180;
                maxturn = 180;
                ejectDeadGunner = 1;
                usePIP = 2;
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
        htMin = 1;
        htMax = 480;
        afMax = 0;
        mfMax = 0;
        mFact = 1;
        tBody = 100;
        artilleryScanner = 1;
        class EventHandlers: EventHandlers {
            fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
        };
    };
    class rhs_m70c_60mm_army: rhs_m70c_60mm_base {
        side = 2;
        scope = 1;
        faction = "rhssaf_faction_army";
        crew = "rhssaf_army_m10_para_rifleman_g36";
        typicalCargo[] = {"rhssaf_army_m10_para_rifleman_g36"};
    };
    class Item_Base_F;
    class Item_rhssaf_zrak_rd7j: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "$STR_ITEM_RHSSAF_ZRAK_RD7J_DISPLAYNAME";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_InventoryItems";
        vehicleClass = "Items";
        model = "\rhssaf\addons\rhssaf_binoculars\zrak_rd7j\rhssaf_zrak_rd7j";
        class TransportItems {
            class rhssaf_zrak_rd7j {
                name = "Zrak RD-7J";
                count = 1;
            };
        };
    };
};
class cfgRecoils {
    class recoil_default;
    class rhs_recoil_g36: recoil_default {
        muzzleOuter[] = {0.3, 0.9, 0.4, 0.3};
        kickBack[] = {0.02, 0.04};
        temporary = 0.02;
    };
    class rhs_recoil_g36_folded: recoil_default {
        muzzleOuter[] = {0.37, 1, 0.5, 0.5};
        kickBack[] = {0.04, 0.06};
        temporary = 0.04;
    };
};
class CfgWeapons {
    class ItemCore;
    class InventoryItem_Base_F;
    class InventoryMuzzleItem_Base_F;
    class InventoryFlashLightItem_Base_F;
    class InventoryOpticsItem_Base_F;
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
        class GunParticles;
        class Eventhandlers;
    };
    class Pistol;
    class Pistol_Base_F: Pistol {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class SMG_01_Base;
    class SMG_01_F: SMG_01_Base {
        class Single;
        class FullAuto;
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class Rifle_Long_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class EBR_base_F;
    class srifle_EBR_F: EBR_base_F {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class UGL_F;
    class GP25_Base: UGL_F {
        class Single;
    };
    class RHS_SAFE_BASE;
    class RHS_FOLD_BASE;
    class PBG40_Base: GP25_Base {
        displayName = "$STR_RHSSAF_PBG40_NAME";
        descriptionShort = "Grenade launcher<br/>Caliber: 40mm";
        useModelOptics = 0;
        useExternalOptic = 0;
        reloadaction = "RHS_GestureReloadGP30";
        reloadMagazineSound[] = {
            "A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",
            1,
            1,
            10
        };
        magazines[] = {
            "rhs_VOG25",
            "rhs_VOG25p",
            "rhs_vg40tb",
            "rhs_vg40sz",
            "rhs_vg40op_white",
            "rhs_vg40op_green",
            "rhs_vg40op_red",
            "rhs_GRD40_white",
            "rhs_GRD40_green",
            "rhs_GRD40_red",
            "rhs_VG40MD_White",
            "rhs_VG40MD_Green",
            "rhs_VG40MD_Red",
            "rhs_GDM40"
        };
        modes[] = {"Single"};
        class Single: Single {
            soundSetShot[] = {"rhs_gp25_shot_SoundSet", "UGL_Tail_SoundSet", "UGL_InteriorTail_SoundSet"};
            recoil = "M240Recoil";
            recoilProne = "M240Recoil";
            minRange = 30;
            minRangeProbab = 0.1;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.05;
        };
        cameraDir = "OP_look";
        discreteDistance[] = {50, 100, 150, 200, 250, 300, 350, 400};
        discreteDistanceCameraPoint[] = {
            "OP_eye",
            "OP_eye1",
            "OP_eye2",
            "OP_eye3",
            "OP_eye4",
            "OP_eye5",
            "OP_eye6",
            "OP_eye7"
        };
        discreteDistanceInitIndex = 2;
        magazineReloadSwitchPhase = 0.36;
    };
    class RifleGrenade_Base: GP25_Base {
        displayName = "$STR_RIFLEGRENADE_BASE_DISPLAYNAME";
        descriptionShort = "Rifle Grenade launcher<br/>Caliber: 22mm";
        useModelOptics = 0;
        useExternalOptic = 0;
        reloadaction = "RHS_GestureReloadGP30";
        reloadMagazineSound[] = {
            "A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",
            1,
            1,
            10
        };
        magazines[] = {};
        magazineWell[] = {};
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                begin1[] = {
                    "rhsafrf\addons\rhs_sounds\ugl\gp-25_1",
                    0.70794576,
                    1,
                    200
                };
                begin2[] = {
                    "rhsafrf\addons\rhs_sounds\ugl\gp-25_2",
                    0.70794576,
                    1,
                    200
                };
                soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
                closure1[] = {
                    "A3\sounds_f\weapons\closure\closure_rifle_6.wss",
                    3.1622777,
                    1,
                    300
                };
                closure2[] = {
                    "A3\sounds_f\weapons\closure\closure_rifle_7.wss",
                    3.1622777,
                    1,
                    300
                };
                soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
            };
            recoil = "M240Recoil";
            recoilProne = "M240Recoil";
            minRange = 30;
            minRangeProbab = 0.1;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.05;
        };
        cameraDir = "OP_look";
        discreteDistance[] = {50, 100, 150, 200, 250};
        discreteDistanceCameraPoint[] = {
            "OP_eye",
            "OP_eye1",
            "OP_eye2",
            "OP_eye3",
            "OP_eye4"
        };
        discreteDistanceInitIndex = 1;
        magazineReloadSwitchPhase = 0.63;
    };
    class rhs_weap_m70_base: Rifle_Base_F {
        scope = 0;
        scopeCurator = 0;
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        magazines[] = {
            "rhssaf_30Rnd_762x39mm_M67",
            "rhssaf_30Rnd_762x39mm_M78_tracer",
            "rhssaf_30Rnd_762x39_M82_api",
            "rhs_30Rnd_762x39mm",
            "rhs_30Rnd_762x39mm_tracer",
            "rhs_30Rnd_762x39mm_89",
            "rhs_30Rnd_762x39mm_U"
        };
        magazineReloadSwitchPhase = 0.25;
        class Library {
            libTextDesc = "";
        };
        optics = 0;
        jsrs_soundeffect = "JSRS2_Distance_Effects_kaybhar";
        reloadAction = "RHS_GestureReloadAK762";
        maxRecoilSway = 0.008;
        swayDecaySpeed = 1.25;
        recoil = "recoil_mk20";
        recoilProne = "assaultRifleBase";
        class GunParticles: GunParticles {
            class SecondEffect {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
            class RHS_BarrelRefract {
                positionName = "usti hlavne";
                directionName = "usti hlavne up";
                effectName = "RHS_BarrelRefract";
            };
        };
        discreteDistance[] = {
            440,
            100,
            200,
            300,
            400,
            500,
            600,
            700,
            800,
            900,
            1000
        };
        discreteDistanceInitIndex = 0;
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot {};
            class MuzzleSlot: SlotInfo {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {"rhs_acc_pbs1", "rhs_acc_dtk1l"};
            };
            class rhs_npz_slot {};
            class PointerSlot: rhs_russian_ak_barrel_slot {};
        };
        opticsZoomMin = 0.25;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        descriptionShort = "$STR_A3_CfgWeapons_XM_base_F0";
        handAnim[] = {"OFP2_ManSkeleton", "\rhssaf\addons\rhssaf_c_weapons\anims\rhs_hand_m70_stock.rtm"};
        dexterity = 1.8;
        class SAFE: RHS_SAFE_BASE {};
        class PBG40Muzzle: PBG40_Base {};
        class RGMuzzle: RifleGrenade_Base {};
        muzzles[] = {"this", "SAFE"};
        bullet1[] = {
            "A3\sounds_f\weapons\shells\7_62\metal_762_01",
            0.630957,
            1,
            15
        };
        bullet2[] = {
            "A3\sounds_f\weapons\shells\7_62\metal_762_02",
            0.630957,
            1,
            15
        };
        bullet3[] = {
            "A3\sounds_f\weapons\shells\7_62\metal_762_03",
            0.630957,
            1,
            15
        };
        bullet4[] = {
            "A3\sounds_f\weapons\shells\7_62\metal_762_04",
            0.630957,
            1,
            15
        };
        bullet5[] = {
            "A3\sounds_f\weapons\shells\7_62\dirt_762_01",
            0.630957,
            1,
            15
        };
        bullet6[] = {
            "A3\sounds_f\weapons\shells\7_62\dirt_762_02",
            0.630957,
            1,
            15
        };
        bullet7[] = {
            "A3\sounds_f\weapons\shells\7_62\dirt_762_03",
            0.630957,
            1,
            15
        };
        bullet8[] = {
            "A3\sounds_f\weapons\shells\7_62\dirt_762_04",
            0.630957,
            1,
            15
        };
        bullet9[] = {
            "A3\sounds_f\weapons\shells\7_62\grass_762_01",
            0.630957,
            1,
            15
        };
        bullet10[] = {
            "A3\sounds_f\weapons\shells\7_62\grass_762_02",
            0.630957,
            1,
            15
        };
        bullet11[] = {
            "A3\sounds_f\weapons\shells\7_62\grass_762_03",
            0.630957,
            1,
            15
        };
        bullet12[] = {
            "A3\sounds_f\weapons\shells\7_62\grass_762_04",
            0.630957,
            1,
            15
        };
        soundBullet[] = {
            "bullet1",
            0.083,
            "bullet2",
            0.083,
            "bullet3",
            0.083,
            "bullet4",
            0.083,
            "bullet5",
            0.083,
            "bullet6",
            0.083,
            "bullet7",
            0.083,
            "bullet8",
            0.083,
            "bullet9",
            0.083,
            "bullet10",
            0.083,
            "bullet11",
            0.083,
            "bullet12",
            0.083
        };
        changeFiremodeSound[] = {
            "A3\sounds_f\weapons\closure\firemode_changer_2",
            0.56234133,
            1,
            20
        };
        modes[] = {
            "Single",
            "FullAuto",
            "single_medium_optics1",
            "single_far_optics2",
            "fullauto_medium"
        };
        class Single: Mode_SemiAuto {
            reloadTime = 0.1;
            dispersion = 0.0021;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
        };
        class FullAuto: Mode_FullAuto {
            reloadTime = 0.1;
            dispersion = 0.0021;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 0.000001;
        };
        class single_medium_optics1: Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 3;
            aiRateOfFireDispersion = 4;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2: single_medium_optics1 {
            requiredOpticType = 2;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 450;
            midRangeProbab = 0.6;
            maxRange = 800;
            maxRangeProbab = 0.05;
            aiRateOfFire = 6;
            aiRateOfFireDispersion = 4;
            aiRateOfFireDistance = 800;
        };
        class fullauto_medium: FullAuto {
            aiBurstTerminable = 1;
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDispersion = 2;
            aiRateOfFireDistance = 200;
        };
        aiDispersionCoefY = 10;
        aiDispersionCoefX = 8;
        drySound[] = {"A3\sounds_f\weapons\Other\dry_1", 0.562341, 1, 10};
        reloadMagazineSound[] = {
            "A3\Sounds_F\weapons\Khaybar\reload_khaibar",
            1,
            1,
            10
        };
    };
    class rhs_weap_m70ab2: rhs_weap_m70_base {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_m70ab2_ca.paa";
        scope = 2;
        scopeCurator = 2;
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "$STR_RHSSAF_WEAP_M70AB2";
        descriptionShort = "$STR_RHS_WEAP_M70AB2_DESCRIPTIONSHORT";
        model = "\rhssaf\addons\rhssaf_m_weapon_m70\rhs_m70ab2";
        UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\saf_m70ab2_gear_x.paa";
        discreteDistanceCameraPoint[] = {
            "eye",
            "eye_100",
            "eye_200",
            "eye_300",
            "eye_400",
            "eye_500",
            "eye_600",
            "eye_700",
            "eye_800",
            "eye_900",
            "eye_1000"
        };
        discreteDistance[] = {
            350,
            100,
            200,
            300,
            400,
            500,
            600,
            700,
            800,
            900,
            1000
        };
        discreteDistanceInitIndex = 0;
        cameraDir = "eye_look";
        weaponInfoType = "rhs_rscOptics_m70ab2";
        dexterity = 1.81;
        recoil = "recoil_mk20";
        recoilProne = "assaultRifleBase";
        muzzles[] = {"this", "RGMuzzle", "SAFE"};
        magazineWell[] = {"AK_762x39", "CBA_762x39_AK", "CBA_762x39_RPK"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 87.34;
        };
        rhs_fold = "rhs_weap_m70ab2_fold";
        baseWeapon = "rhs_weap_m70ab2";
    };
    class rhs_weap_m70ab2_fold: rhs_weap_m70ab2 {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_m70ab2_fold_ca.paa";
        scope = 1;
        scopeCurator = 0;
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "$STR_RHSSAF_WEAP_M70AB2_FOLD";
        model = "\rhssaf\addons\rhssaf_m_weapon_m70\rhs_m70ab2_fold";
        UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\saf_m70ab2_gear_x.paa";
        recoil = "recoil_mmg_01";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 65.51;
        };
        rhs_fold = "rhs_weap_m70ab2";
    };
    class rhs_weap_m70b1: rhs_weap_m70ab2 {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_m70b1_ca.paa";
        scope = 2;
        scopeCurator = 2;
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "$STR_RHSSAF_WEAP_M70B1";
        model = "\rhssaf\addons\rhssaf_m_weapon_m70\rhs_m70b1";
        UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\saf_m70b1_gear_x.paa";
        weaponInfoType = "rhs_rscOptics_m70b1";
        recoil = "recoil_mk20";
        recoilProne = "assaultRifleBase";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 91.74;
        };
        baseWeapon = "rhs_weap_m70b1";
    };
    class rhs_weap_m70b1n: rhs_weap_m70ab2 {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_m70b1n_ca.paa";
        scope = 2;
        scopeCurator = 2;
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "$STR_RHSSAF_WEAP_M70B1N";
        model = "\rhssaf\addons\rhssaf_m_weapon_m70\rhs_m70b1n";
        UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\saf_m70b1_gear_x.paa";
        weaponInfoType = "rhs_rscOptics_m70b1";
        recoil = "recoil_mk20";
        recoilProne = "assaultRifleBase";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: rhs_russian_rifle_scopes_slot {};
            mass = 91.74;
        };
        baseWeapon = "rhs_weap_m70b1n";
    };
    class rhs_weap_m70b3n: rhs_weap_m70ab2 {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_m70b3n_ca.paa";
        scope = 2;
        scopeCurator = 2;
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "$STR_RHSSAF_WEAP_M70B3N";
        model = "\rhssaf\addons\rhssaf_m_weapon_m70\rhs_m70b3n";
        UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\saf_m70b1_gear_x.paa";
        weaponInfoType = "rhs_rscOptics_m70b1";
        recoil = "recoil_mk20";
        recoilProne = "assaultRifleBase";
        muzzles[] = {"this", "SAFE"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: rhs_russian_rifle_scopes_slot {};
            mass = 91.74;
        };
        baseWeapon = "rhs_weap_m70b3n";
    };
    class rhs_weap_m70b3n_pbg40: rhs_weap_m70ab2 {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_m70b3n_pbg40_ca.paa";
        scope = 2;
        scopeCurator = 2;
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "$STR_RHSSAF_WEAP_M70B3N_PBG40";
        model = "\rhssaf\addons\rhssaf_m_weapon_m70\rhs_m70b3n_pbg40";
        UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\saf_m70b1_gear_x.paa";
        weaponInfoType = "rhs_rscOptics_m70b1";
        handAnim[] = {"OFP2_ManSkeleton", "\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_gp.rtm"};
        muzzles[] = {"this", "PBG40Muzzle", "SAFE"};
        recoil = "recoil_mk20";
        recoilProne = "assaultRifleBase";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class PointerSlot {};
            class CowsSlot: rhs_russian_rifle_scopes_slot {};
            mass = 124.74;
        };
        inertia = 0.6;
        dexterity = 1.4;
        baseWeapon = "rhs_weap_m70b3n_pbg40";
    };
    class rhs_weap_m92: rhs_weap_m70_base {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_m92_ca.paa";
        scope = 2;
        scopeCurator = 2;
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "$STR_RHSSAF_WEAP_M92";
        descriptionShort = "$STR_RHS_WEAP_M92_DESCRIPTIONSHORT";
        weaponInfoType = "rhs_rscOptics_m92";
        discreteDistance[] = {300, 500};
        discreteDistanceInitIndex = 0;
        handAnim[] = {"OFP2_ManSkeleton", "\rhssaf\addons\rhssaf_c_weapons\anims\rhs_hand_m92_stock.rtm"};
        magazineWell[] = {"AK_762x39", "CBA_762x39_AK", "CBA_762x39_RPK"};
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        inertia = 0.37;
        initSpeed = -0.92;
        recoil = "recoil_akm";
        model = "\rhssaf\addons\rhssaf_m_weapon_m92\rhs_m92";
        UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\saf_m92_gear_x.paa";
        class Single: Single {
            dispersion = 0.00255;
        };
        class FullAuto: FullAuto {
            dispersion = 0.00255;
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class PointerSlot {
                iconPosition[] = {0, 0};
                iconScale = 1;
                iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
                iconPinPoint = "Left";
            };
            mass = 78.54;
        };
        rhs_fold = "rhs_weap_m92_fold";
        baseWeapon = "rhs_weap_m92";
    };
    class rhs_weap_m92_fold: rhs_weap_m92 {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_m92_fold_ca.paa";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        scopeCurator = 0;
        displayName = "$STR_RHSSAF_WEAP_M92_FOLD";
        model = "\rhssaf\addons\rhssaf_m_weapon_m92\rhs_m92_fold";
        recoil = "recoil_mmg_02";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class PointerSlot {};
            mass = 58.91;
        };
        rhs_fold = "rhs_weap_m92";
    };
    class rhs_weap_m76: rhs_weap_m70_base {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_m76_ca.paa";
        scope = 2;
        scopeCurator = 2;
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "$STR_RHSSAF_WEAP_M76";
        descriptionShort = "$STR_RHS_WEAP_M76_DESCRIPTIONSHORT";
        magazines[] = {"rhsgref_10Rnd_792x57_m76", "rhssaf_10Rnd_792x57_m76_tracer"};
        magazineWell[] = {"CBA_792x57_M76"};
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        inertia = 0.5;
        aimTransitionSpeed = 0.75;
        recoil = "recoil_akm";
        discreteDistanceCameraPoint[] = {
            "eye",
            "eye_100",
            "eye_200",
            "eye_300",
            "eye_400",
            "eye_500",
            "eye_600",
            "eye_700",
            "eye_800",
            "eye_900",
            "eye_1000"
        };
        discreteDistance[] = {
            350,
            100,
            200,
            300,
            400,
            500,
            600,
            700,
            800,
            900,
            1000
        };
        discreteDistanceInitIndex = 0;
        cameraDir = "eye_look";
        model = "\rhssaf\addons\rhssaf_m_weapon_m76\rhs_wep_m76";
        UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\w_m76_icon_ca.paa";
        weaponInfoType = "rhs_rscOptics_m76";
        modes[] = {"Single", "single_medium_optics1", "single_far_optics2"};
        class Single: Mode_SemiAuto {
            reloadTime = 0.1;
            dispersion = 0.00095;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
        };
        class single_medium_optics1: Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 3;
            aiRateOfFireDispersion = 4;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2: single_medium_optics1 {
            requiredOpticType = 2;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 450;
            midRangeProbab = 0.6;
            maxRange = 1000;
            maxRangeProbab = 0.05;
            aiRateOfFire = 6;
            aiRateOfFireDispersion = 4;
            aiRateOfFireDistance = 800;
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: rhs_russian_rifle_scopes_slot {};
            class PointerSlot {};
            mass = 95.7;
        };
        baseWeapon = "rhs_weap_m76";
    };
    class rhs_weap_m21_base: rhs_weap_m70_base {
        scope = 0;
        scopeCurator = 0;
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "$STR_RHSSAF_WEAP_M21A";
        descriptionShort = "$STR_RHS_WEAP_M21_BASE_DESCRIPTIONSHORT";
        magazines[] = {"rhsgref_30rnd_556x45_m21", "rhsgref_30rnd_556x45_m21_t"};
        magazineWell[] = {"CBA_556x45_M21"};
        handAnim[] = {"OFP2_ManSkeleton", "\rhssaf\addons\rhssaf_c_weapons\anims\rhs_hand_m21_stock.rtm"};
        discreteDistance[] = {300, 500};
        discreteDistanceInitIndex = 0;
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        inertia = 0.5;
        class Single: Mode_SemiAuto {
            reloadTime = 0.1;
            dispersion = 0.0021;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
        };
        class FullAuto: Mode_FullAuto {
            reloadTime = 0.1;
            dispersion = 0.0021;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 0.000001;
        };
        class single_medium_optics1: Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 3;
            aiRateOfFireDispersion = 4;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2: single_medium_optics1 {
            requiredOpticType = 2;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 450;
            midRangeProbab = 0.6;
            maxRange = 800;
            maxRangeProbab = 0.05;
            aiRateOfFire = 6;
            aiRateOfFireDispersion = 4;
            aiRateOfFireDistance = 800;
        };
        class fullauto_medium: FullAuto {
            aiBurstTerminable = 1;
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDispersion = 2;
            aiRateOfFireDistance = 200;
        };
        reloadAction = "RHS_GestureReloadAKS";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: rhs_russian_rifle_scopes_slot {};
            class MuzzleSlot: rhs_western_rifle_muzzle_slot {};
            class rhs_mtz_slot: SlotInfo {
                compatibleItems[] = {"rhs_acc_mtz"};
            };
            mass = 91.3;
        };
        rhs_fold_checkOptic = 0;
    };
    class rhs_weap_m21a: rhs_weap_m21_base {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_m21a_ca.paa";
        scope = 2;
        scopeCurator = 2;
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "$STR_RHSSAF_WEAP_M21A";
        weaponInfoType = "rhs_rscOptics_m21a";
        model = "\rhssaf\addons\rhssaf_m_weapon_m21\rhs_m21a";
        UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\w_m21a_icon_ca.paa";
        rhs_mtz = "rhs_weap_m21a_pr";
        rhs_fold = "rhs_weap_m21a_fold";
        baseWeapon = "rhs_weap_m21a";
    };
    class rhs_weap_m21a_pr: rhs_weap_m21_base {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_m21a_pr_ca.paa";
        scope = 2;
        scopeCurator = 2;
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "$STR_RHSSAF_WEAP_M21A_PIC";
        weaponInfoType = "rhs_rscOptics_m21a_mtz";
        model = "\rhssaf\addons\rhssaf_m_weapon_m21\rhs_m21a_pr";
        UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\w_m21apr_icon_ca.paa";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
            class rhs_mtz_slot {};
            mass = 91.3;
        };
        rhs_mtz = "rhs_weap_m21a";
        baseWeapon = "rhs_weap_m21a_pr";
    };
    class rhs_weap_m21a_pr_pbg40: rhs_weap_m21_base {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_m21a_pr_pbg40_ca.paa";
        scope = 2;
        scopeCurator = 2;
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "$STR_RHSSAF_WEAP_M21A_PIC_PBG40";
        weaponInfoType = "rhs_rscOptics_m21a_mtz";
        model = "\rhssaf\addons\rhssaf_m_weapon_m21\rhs_m21a_pr_pbg40";
        UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\w_m21apr_icon_ca.paa";
        handAnim[] = {"OFP2_ManSkeleton", "\rhssaf\addons\rhssaf_c_weapons\anims\rhs_hand_m21_gp.rtm"};
        muzzles[] = {"this", "PBG40Muzzle", "SAFE"};
        reloadAction = "rhs_GestureReloadM21GP";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 124.3;
            class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
            class PointerSlot {};
            class rhs_mtz_slot {};
        };
        inertia = 0.6;
        dexterity = 1.4;
        rhs_mtz = "rhs_weap_m21a_pbg40";
        baseWeapon = "rhs_weap_m21a_pr_pbg40";
    };
    class rhs_weap_m21a_fold: rhs_weap_m21a {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_m21a_fold_ca.paa";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "$STR_RHSSAF_WEAP_M21A_FOLD";
        scopeArsenal = 0;
        model = "\rhssaf\addons\rhssaf_m_weapon_m21\rhs_m21a_fold";
        UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\w_m21afold_icon_ca.paa";
        recoil = "recoil_mxc";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 68.48;
        };
        rhs_fold = "rhs_weap_m21a";
        baseWeapon = "rhs_weap_m21a_fold";
    };
    class rhs_weap_m21a_pbg40: rhs_weap_m21a {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_m21a_pbg40_ca.paa";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "$STR_RHSSAF_WEAP_M21A_PBG40";
        model = "\rhssaf\addons\rhssaf_m_weapon_m21\rhs_m21a_pbg40";
        scope = 2;
        scopeCurator = 2;
        handAnim[] = {"OFP2_ManSkeleton", "\rhssaf\addons\rhssaf_c_weapons\anims\rhs_hand_m21_gp.rtm"};
        muzzles[] = {"this", "PBG40Muzzle", "SAFE"};
        reloadAction = "rhs_GestureReloadM21GP";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class PointerSlot {};
            mass = 124.3;
        };
        inertia = 0.6;
        dexterity = 1.4;
        rhs_mtz = "rhs_weap_m21a_pr_pbg40";
        rhs_fold = "rhs_weap_m21a_pbg40_fold";
        baseWeapon = "rhs_weap_m21a_pbg40";
    };
    class rhs_weap_m21a_pbg40_fold: rhs_weap_m21a_pbg40 {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_m21a_fold_ca.paa";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "$STR_RHSSAF_WEAP_M21A_PBG40_FOLD";
        scopeArsenal = 0;
        model = "\rhssaf\addons\rhssaf_m_weapon_m21\rhs_m21a_pbg40_fold";
        UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\w_m21afold_icon_ca.paa";
        recoil = "recoil_mxc";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 68.48;
        };
        rhs_fold = "rhs_weap_m21a_pbg40";
        baseWeapon = "rhs_weap_m21a_pbg40_fold";
    };
    class rhs_weap_m21s: rhs_weap_m21_base {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_m21s_ca.paa";
        scope = 2;
        scopeCurator = 2;
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "$STR_RHSSAF_WEAP_M21S";
        weaponInfoType = "rhs_rscOptics_m21s";
        initSpeed = -0.98;
        class Single: Single {
            dispersion = 0.00325;
        };
        class FullAuto: FullAuto {
            dispersion = 0.00325;
        };
        model = "\rhssaf\addons\rhssaf_m_weapon_m21\rhs_m21s";
        UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\w_m21s_icon_ca.paa";
        reloadAction = "RHS_GestureReloadAK_1hand";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 89.54;
        };
        rhs_mtz = "rhs_weap_m21s_pr";
        rhs_fold = "rhs_weap_m21s_fold";
        baseWeapon = "rhs_weap_m21s";
    };
    class rhs_weap_m21s_pr: rhs_weap_m21a_pr {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_m21s_pr_ca.paa";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_RHSSAF_WEAP_M21S_PIC";
        weaponInfoType = "rhs_rscOptics_m21s_mtz";
        initSpeed = -0.98;
        class Single: Single {
            dispersion = 0.00325;
        };
        class FullAuto: FullAuto {
            dispersion = 0.00325;
        };
        model = "\rhssaf\addons\rhssaf_m_weapon_m21\rhs_m21s_pr";
        UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\w_m21spr_icon_ca.paa";
        reloadAction = "RHS_GestureReloadAK_1hand";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 89.54;
        };
        rhs_mtz = "rhs_weap_m21s";
        baseWeapon = "rhs_weap_m21s_pr";
    };
    class rhs_weap_m21s_fold: rhs_weap_m21s {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_m21s_fold_ca.paa";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scopeArsenal = 0;
        displayName = "$STR_RHSSAF_WEAP_M21S_FOLD";
        model = "\rhssaf\addons\rhssaf_m_weapon_m21\rhs_m21s_fold";
        UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\w_m21afold_icon_ca.paa";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 67.16;
        };
        recoil = "recoil_mxc";
        rhs_fold = "rhs_weap_m21s";
        baseWeapon = "rhs_weap_m21s_fold";
    };
    class rhs_weap_M107;
    class rhs_weap_m82a1: rhs_weap_M107 {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_m82a1_ca.paa";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        displayname = "$STR_RHSSAF_WEAP_M82A1";
        baseWeapon = "rhs_weap_m82a1";
    };
    class rhs_weap_scorpion: SMG_01_F {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_scorpion_ca.paa";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_RHS_WEAP_SCORPION_DISPLAYNAME";
        magazines[] = {"rhsgref_20rnd_765x17_vz61", "rhsgref_10rnd_765x17_vz61"};
        magazineWell[] = {"CBA_32ACP_Vz61"};
        class Library {
            libTextDesc = "The M84A Škorpion is a Czechoslovak 7.65 mm machine pistol, licensed and produced by Yugoslavia between 1984 and 1992, then Serbia.";
        };
        model = "\rhssaf\addons\rhssaf_m_weapon_scorpion\rhs_scorpion";
        reloadAction = "GestureReloadSMG_02";
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        class GunParticles: GunParticles {
            class FirstEffect {
                effectName = "PistolCloud";
                positionName = "Usti hlavne";
                directionName = "Konec hlavne";
            };
            class SecondEffect {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 28.16;
            allowedSlots[] = {901};
            class MuzzleSlot {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {};
                iconPosition[] = {0, 0.45};
                iconScale = 0.2;
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
                iconPinpoint = "Center";
            };
            class CowsSlot {
                iconPosition[] = {0.5, 0.35};
                iconScale = 0.2;
                compatibleItems[] = {};
            };
            class PointerSlot {};
        };
        opticsZoomMin = 0.375;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        descriptionShort = "Sub-machine gun <br/>Caliber: 7.65x17 mm";
        handAnim[] = {"OFP2_ManSkeleton", "\rhssaf\addons\rhssaf_c_weapons\anims\rhs_hand_scorpion.rtm"};
        selectionfireanim = "zasleh";
        modes[] = {"Single", "FullAuto"};
        class Single: Single {
            reloadTime = 0.075;
            dispersion = 0.0005;
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 350;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: FullAuto {
            reloadTime = 0.075;
            dispersion = 0.0005;
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 25;
            midRangeProbab = 0.7;
            maxRange = 70;
            maxRangeProbab = 0.05;
            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 50;
        };
        baseWeapon = "rhs_weap_scorpion";
    };
    class rhs_weap_ag36_base: UGL_F {
        cameradir = "gl_look";
        discreteDistance[] = {50, 100, 150, 200, 250, 300, 350};
        discreteDistanceCameraPoint[] = {
            "gl_eye_50m",
            "gl_eye_100m",
            "gl_eye_150m",
            "gl_eye_200m",
            "gl_eye_250m",
            "gl_eye_300m",
            "gl_eye_350m"
        };
        discreteDistanceInitIndex = 1;
        displayname = "$STR_RHS_WEAP_AG36_BASE_DISPLAYNAME";
        magazines[] = {
            "rhs_mag_M441_HE",
            "rhs_mag_M433_HEDP",
            "rhs_mag_M397_HET",
            "rhs_mag_m576",
            "rhs_mag_M4009",
            "rhs_mag_M583A1_white",
            "rhs_mag_M661_green",
            "rhs_mag_M662_red",
            "rhs_mag_M585_white_cluster",
            "rhs_mag_M663_green_cluster",
            "rhs_mag_M664_red_cluster",
            "rhs_mag_M713_red",
            "rhs_mag_M714_white",
            "rhs_mag_M715_green",
            "rhs_mag_M716_yellow",
            "rhs_mag_M781_Practice",
            "1Rnd_HE_Grenade_shell",
            "UGL_FlareWhite_F",
            "UGL_FlareGreen_F",
            "UGL_FlareRed_F",
            "UGL_FlareYellow_F",
            "UGL_FlareCIR_F",
            "1Rnd_Smoke_Grenade_shell",
            "1Rnd_SmokeRed_Grenade_shell",
            "1Rnd_SmokeGreen_Grenade_shell",
            "1Rnd_SmokeYellow_Grenade_shell",
            "1Rnd_SmokePurple_Grenade_shell",
            "1Rnd_SmokeBlue_Grenade_shell",
            "1Rnd_SmokeOrange_Grenade_shell"
        };
        magazineWell[] = {"UGL_40x36", "CBA_40mm_M203", "CBA_40mm_EGLM"};
        useModelOptics = 0;
        useExternalOptic = 0;
        optics = 1;
        cursoraim = "gl";
        magazinereloadtime = 2;
        reloadtime = 0.1;
        reloadAction = "RHS_GestureReloadAG36";
        reloadMagazineSound[] = {
            "rhssaf\addons\rhssaf_sounds\G36\ag36_reload",
            1,
            1,
            10
        };
        magazineReloadSwitchPhase = 0.55;
        drySound[] = {
            "rhssaf\addons\rhssaf_sounds\G36\ag36_drystrike",
            0.66,
            1,
            10
        };
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                closure1[] = {
                    "rhssaf\addons\rhssaf_sounds\G36\ag36_striker",
                    1,
                    1,
                    10
                };
                soundClosure[] = {"closure1", 1};
                begin1[] = {
                    "rhssaf\addons\rhssaf_sounds\G36\ag36_launch",
                    0.70794576,
                    1,
                    200
                };
                begin2[] = {
                    "rhssaf\addons\rhssaf_sounds\G36\ag36_launch",
                    0.70794576,
                    1,
                    200
                };
                soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
            };
            class SoundTails {
                class TailInterior {
                    sound[] = {
                        "\rhssaf\addons\rhssaf_sounds\G36\AG36_indoor",
                        1,
                        1,
                        200
                    };
                    frequency = 1;
                    volume = "interior";
                };
            };
            recoil = "M240Recoil";
            recoilProne = "M240Recoil";
            minRange = 30;
            minRangeProbab = 0.1;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.05;
        };
    };
    class rhs_weap_g36_base: Rifle_Base_F {
        scope = 1;
        recoil = "rhs_recoil_g36";
        maxRecoilSway = 0.008;
        swayDecaySpeed = 1.25;
        maxZeroing = 1600;
        deployedpivot = "deploypivot";
        hasBipod = 0;
        magazineReloadSwitchPhase = 0.5;
        magazines[] = {
            "rhssaf_30rnd_556x45_EPR_G36",
            "rhssaf_30rnd_556x45_SOST_G36",
            "rhssaf_100rnd_556x45_EPR_G36",
            "rhssaf_30rnd_556x45_SPR_G36",
            "rhssaf_30rnd_556x45_Tracers_G36",
            "rhssaf_30rnd_556x45_MDIM_G36",
            "rhssaf_30rnd_556x45_TDIM_G36",
            "150Rnd_556x45_Drum_Mag_F",
            "150Rnd_556x45_Drum_Mag_Tracer_F"
        };
        magazineWell[] = {"CBA_556x45_G36"};
        class Library {
            libTextDesc = "H&K Gewehr36";
        };
        reloadAction = "GestureReloadEBR";
        aidispersioncoefx = 4;
        aidispersioncoefy = 6;
        cameraDir = "";
        bullet1[] = {
            "A3\sounds_f\weapons\shells\7_62\metal_762_01",
            0.398107,
            1,
            15
        };
        bullet10[] = {
            "A3\sounds_f\weapons\shells\7_62\grass_762_02",
            0.281838,
            1,
            15
        };
        bullet11[] = {
            "A3\sounds_f\weapons\shells\7_62\grass_762_03",
            0.281838,
            1,
            15
        };
        bullet12[] = {
            "A3\sounds_f\weapons\shells\7_62\grass_762_04",
            0.281838,
            1,
            15
        };
        bullet2[] = {
            "A3\sounds_f\weapons\shells\7_62\metal_762_02",
            0.398107,
            1,
            15
        };
        bullet3[] = {
            "A3\sounds_f\weapons\shells\7_62\metal_762_03",
            0.398107,
            1,
            15
        };
        bullet4[] = {
            "A3\sounds_f\weapons\shells\7_62\metal_762_04",
            0.398107,
            1,
            15
        };
        bullet5[] = {
            "A3\sounds_f\weapons\shells\7_62\dirt_762_01",
            0.281838,
            1,
            15
        };
        bullet6[] = {
            "A3\sounds_f\weapons\shells\7_62\dirt_762_02",
            0.281838,
            1,
            15
        };
        bullet7[] = {
            "A3\sounds_f\weapons\shells\7_62\dirt_762_03",
            0.281838,
            1,
            15
        };
        bullet8[] = {
            "A3\sounds_f\weapons\shells\7_62\dirt_762_04",
            0.281838,
            1,
            15
        };
        bullet9[] = {
            "A3\sounds_f\weapons\shells\7_62\grass_762_01",
            0.281838,
            1,
            15
        };
        drysound[] = {
            "rhssaf\addons\rhssaf_sounds\G36\g36_dryfire",
            1.01,
            1,
            10
        };
        reloadmagazinesound[] = {
            "rhssaf\addons\rhssaf_sounds\G36\G36_reload",
            0.9,
            1,
            35
        };
        changeFiremodeSound[] = {
            "\rhssaf\addons\rhssaf_sounds\G36\g36_switch",
            1,
            1,
            8
        };
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        soundbullet[] = {
            "bullet1",
            0.083,
            "bullet2",
            0.083,
            "bullet3",
            0.083,
            "bullet4",
            0.083,
            "bullet5",
            0.083,
            "bullet6",
            0.083,
            "bullet7",
            0.083,
            "bullet8",
            0.083,
            "bullet9",
            0.083,
            "bullet10",
            0.083,
            "bullet11",
            0.083,
            "bullet12",
            0.083
        };
        class SAFE: RHS_SAFE_BASE {};
        class FOLD: RHS_FOLD_BASE {};
        class AG36Muzzle: rhs_weap_ag36_base {};
        muzzles[] = {"this", "SAFE", "FOLD"};
        weaponInfoType = "rhs_rscOptics_g36";
        rhs_fold_checkOptic = 0;
        rhs_fold_anim = "RHS_GestureFoldSCAR";
        rhs_fold_sound[] = {
            "rhsusf\addons\rhsusf_c_weapons\sounds\stock_folding.wss",
            1.42,
            1,
            20
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class PointerSlot {};
            class MuzzleSlot {};
        };
        modes[] = {
            "Single",
            "FullAuto",
            "fullauto_medium",
            "single_medium_optics1",
            "single_far_optics2"
        };
        class Single: Mode_SemiAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            dispersion = 0.000555596;
            reloadtime = 0.08;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 250;
            aiRateOfFireDispersion = 2;
            minRange = 30;
            minRangeProbab = 0.7;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.1;
        };
        class Burst: Mode_Burst {
            dispersion = 0.000555596;
            reloadtime = 0.08;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            aiRateOfFireDispersion = 2;
            minRange = 10;
            minRangeProbab = 0.8;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
        };
        class FullAuto: Mode_FullAuto {
            sounds[] = {"StandardSound", "SilencedSound"};
            dispersion = 0.000555596;
            reloadtime = 0.08;
            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 50;
            aiRateOfFireDispersion = 1;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 5;
            midRangeProbab = 0.8;
            maxRange = 10;
            maxRangeProbab = 0.1;
        };
        class Burst2rnd: Burst {
            burst = 2;
            textureType = "dual";
        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 5;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            aiRateOfFireDispersion = 2;
            minRange = 10;
            minRangeProbab = 0.8;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
        };
        class single_medium_optics1: Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 450;
            aiRateOfFireDispersion = 3;
            minRange = 30;
            minRangeProbab = 0.8;
            midRange = 300;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.2;
        };
        class single_far_optics2: single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 500;
            aiRateOfFireDispersion = 4;
            minRange = 30;
            minRangeProbab = 0.8;
            midRange = 300;
            midRangeProbab = 0.6;
            maxRange = 900;
            maxRangeProbab = 0.2;
        };
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6",
            "camo7"
        };
    };
    class rhs_weap_g36c: rhs_weap_g36_base {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_g36c_ca.paa";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        deployedpivot = "deploypivot";
        hasBipod = 0;
        displayName = "$STR_RHSSAF_WEAP_G36C";
        descriptionShort = "Compact Carbine<br/>Caliber: 5.56mm NATO";
        reloadAction = "RHS_GestureReloadG36A1";
        handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_beta\Smgs\SMG_02\data\Anim\SMG_02.rtm"};
        discretedistance[] = {100};
        discretedistanceinitindex = 0;
        model = "rhssaf\addons\rhssaf_m_weapon_g36\rhssaf_g36c";
        hiddenSelectionsTextures[] = {
            "rhssaf\addons\rhssaf_t_weapon_g36\data\commonmaps\g36_commonmap_c_co.paa",
            "rhssaf\addons\rhssaf_t_weapon_g36\data\placeholder\g36_opticrails_co.paa",
            "rhssaf\addons\rhssaf_t_weapon_g36\data\placeholder\g36_magwell_co.paa",
            "rhssaf\addons\rhssaf_t_weapon_g36\data\placeholder\g36_stockfurniture_co.paa",
            "rhssaf\addons\rhssaf_t_weapon_g36\data\placeholder\g36_ag36_co.paa",
            "rhssaf\addons\rhssaf_t_weapon_g36\data\toadie_smrrail\smr_co.paa",
            "rhssaf\addons\rhssaf_t_weapon_g36\data\frontsight_co.paa",
            "rhssaf\addons\rhssaf_t_weapon_g36\data\rearsight_co.paa"
        };
        memoryPointCamera = "eye";
        rhs_grip1_change = "rhs_weap_g36c_grip1";
        rhs_grip2_change = "rhs_weap_g36c_grip2";
        rhs_grip3_change = "rhs_weap_g36c_grip3";
        rhs_fold = "rhs_weap_g36c_Folded";
        baseWeapon = "rhs_weap_g36c";
        class WeaponSlotsInfo {
            mass = 65.74;
            allowedSlots[] = {901};
            class UnderBarrelSlot {};
            class CowsSlot: rhs_western_rifle_scopes_slot_short {};
            class PointerSlot: rhs_western_rifle_laser_slot {};
            class MuzzleSlot: rhs_western_rifle_muzzle_slot {
                class compatibleItems: compatibleItems {
                    rhssaf_acc_G36_Rotex = 1;
                };
            };
            class GripodSlot: rhs_western_rifle_gripod_slot {};
        };
        inertia = 0.28;
        dexterity = 1.7388076;
        aimTransitionSpeed = 0.75;
        weaponInfoType = "rhs_rscOptics_g36c";
        muzzles[] = {"this", "SAFE", "FOLD"};
        modes[] = {
            "Single",
            "Burst",
            "FullAuto",
            "single_medium_optics1",
            "single_far_optics2"
        };
        class Single: Single {
            dispersion = 0.0008727;
            reloadtime = 0.08;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 250;
            aiRateOfFireDispersion = 2;
            minRange = 30;
            minRangeProbab = 0.7;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 400;
            maxRangeProbab = 0.1;
        };
        class Burst: Burst {
            burst = 2;
            textureType = "dual";
            dispersion = 0.0008727;
            reloadtime = 0.08;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            aiRateOfFireDispersion = 2;
            minRange = 10;
            minRangeProbab = 0.8;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
        };
        class FullAuto: FullAuto {
            dispersion = 0.0008727;
            reloadtime = 0.08;
            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 50;
            aiRateOfFireDispersion = 1;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 5;
            midRangeProbab = 0.8;
            maxRange = 10;
            maxRangeProbab = 0.1;
        };
        class single_medium_optics1: Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 450;
            aiRateOfFireDispersion = 3;
            minRange = 30;
            minRangeProbab = 0.8;
            midRange = 200;
            midRangeProbab = 0.6;
            maxRange = 600;
            maxRangeProbab = 0.2;
        };
        class single_far_optics2: single_medium_optics1 {
            requiredOpticType = 2;
        };
    };
    class rhs_weap_g36c_grip1: rhs_weap_g36c {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "$STR_RHSSAF_WEAP_G36C_GRIP1";
        dexterity = 1.5388076;
        rhs_fold = "rhs_weap_g36c_Folded_grip1";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhssaf\addons\rhssaf_c_weapons\anims\rhs_hand_g36c_grip.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip1";
                slot = "UnderBarrelSlot";
            };
        };
    };
    class rhs_weap_g36c_grip2: rhs_weap_g36c {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "$STR_RHSSAF_WEAP_G36C_GRIP2";
        dexterity = 1.5388076;
        rhs_fold = "rhs_weap_g36c_Folded_grip2";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhssaf\addons\rhssaf_c_weapons\anims\rhs_hand_g36c_afg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip2";
                slot = "UnderBarrelSlot";
            };
        };
    };
    class rhs_weap_g36c_grip3: rhs_weap_g36c {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "$STR_RHSSAF_WEAP_G36C_GRIP3";
        dexterity = 1.5388076;
        rhs_fold = "rhs_weap_g36c_Folded_grip3";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhssaf\addons\rhssaf_c_weapons\anims\rhs_hand_g36c_grip.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip3";
                slot = "UnderBarrelSlot";
            };
        };
    };
    class rhs_weap_g36kv: rhs_weap_g36_base {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_g36kv_ca.paa";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        displayName = "$STR_RHSSAF_WEAP_G36KV";
        reloadAction = "RHS_GestureReloadG36V";
        reloadmagazinesound[] = {
            "rhssaf\addons\rhssaf_sounds\G36\G36EV_reload",
            0.9,
            1,
            35
        };
        model = "rhssaf\addons\rhssaf_m_weapon_g36\rhssaf_g36k";
        hiddenSelectionsTextures[] = {
            "rhssaf\addons\rhssaf_t_weapon_g36\data\commonmaps\g36_commonmap_kv_co.paa",
            "rhssaf\addons\rhssaf_t_weapon_g36\data\placeholder\g36_opticrails_co.paa",
            "rhssaf\addons\rhssaf_t_weapon_g36\data\placeholder\g36_magwell_co.paa",
            "rhssaf\addons\rhssaf_t_weapon_g36\data\placeholder\g36_stockfurniture_co.paa",
            "rhssaf\addons\rhssaf_t_weapon_g36\data\placeholder\g36_ag36_co.paa",
            "rhssaf\addons\rhssaf_t_weapon_g36\data\toadie_smrrail\smr_co.paa",
            "rhssaf\addons\rhssaf_t_weapon_g36\data\frontsight_co.paa",
            "rhssaf\addons\rhssaf_t_weapon_g36\data\rearsight_co.paa"
        };
        discretedistance[] = {300};
        discretedistanceinitindex = 0;
        class WeaponSlotsInfo {
            mass = 74.14;
            allowedSlots[] = {901};
            class UnderBarrelSlot {};
            class CowsSlot: rhs_western_rifle_scopes_slot_short {};
            class PointerSlot: rhs_western_rifle_laser_slot {};
            class MuzzleSlot: rhs_western_rifle_muzzle_slot {
                class compatibleItems: compatibleItems {
                    rhssaf_acc_G36_Rotex = 1;
                };
            };
            class GripodSlot: rhs_western_rifle_gripod_slot {};
        };
        rhs_grip1_change = "rhs_weap_g36kv_grip1";
        rhs_grip2_change = "rhs_weap_g36kv_grip2";
        rhs_grip3_change = "rhs_weap_g36kv_grip3";
        rhs_fold = "rhs_weap_g36kv_Folded";
        baseWeapon = "rhs_weap_g36kv";
        muzzles[] = {"this", "SAFE", "FOLD"};
        modes[] = {
            "Single",
            "Burst2rnd",
            "FullAuto",
            "single_medium_optics1",
            "single_far_optics2"
        };
        weaponInfoType = "rhs_rscOptics_g36kv";
        inertia = 0.3;
        dexterity = 1.6495835;
        aimTransitionSpeed = 0.847084;
    };
    class rhs_weap_g36kv_grip1: rhs_weap_g36kv {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "$STR_RHSSAF_WEAP_G36KV_GRIP1";
        dexterity = 1.5495836;
        rhs_fold = "rhs_weap_g36kv_Folded_grip1";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhssaf\addons\rhssaf_c_weapons\anims\rhs_hand_g36k_grip.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip1";
                slot = "UnderBarrelSlot";
            };
        };
    };
    class rhs_weap_g36kv_grip2: rhs_weap_g36kv {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "$STR_RHSSAF_WEAP_G36KV_GRIP2";
        dexterity = 1.5495836;
        rhs_fold = "rhs_weap_g36kv_Folded_grip2";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhssaf\addons\rhssaf_c_weapons\anims\rhs_hand_g36k_afg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip2";
                slot = "UnderBarrelSlot";
            };
        };
    };
    class rhs_weap_g36kv_grip3: rhs_weap_g36kv {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "$STR_RHSSAF_WEAP_G36KV_GRIP3";
        dexterity = 1.5495836;
        rhs_fold = "rhs_weap_g36kv_Folded_grip3";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhssaf\addons\rhssaf_c_weapons\anims\rhs_hand_g36k_grip.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip3";
                slot = "UnderBarrelSlot";
            };
        };
    };
    class rhs_weap_g36kv_ag36: rhs_weap_g36kv {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_g36kv_ag36_ca.paa";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        displayName = "$STR_RHSSAF_WEAP_G36KV_AG36";
        muzzles[] = {"this", "AG36Muzzle", "SAFE", "FOLD"};
        weaponInfoType = "rhs_rscOptics_g36kv_ag36";
        model = "rhssaf\addons\rhssaf_m_weapon_g36\rhssaf_g36k_ag36";
        handanim[] = {"OFP2_ManSkeleton", "rhssaf\addons\rhssaf_m_weapon_g36\anim\handpose_ag36.rtm"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 107.14;
            class UnderBarrelSlot {};
            class CowsSlot: rhs_western_rifle_scopes_slot_short {};
            class PointerSlot: rhs_western_rifle_laser_slot {};
            class MuzzleSlot {};
            class GripodSlot {};
        };
        inertia = 0.48;
        dexterity = 1.1810873;
        aimTransitionSpeed = 0.82676107;
        rhs_fold = "rhs_weap_g36kv_ag36_Folded";
        baseWeapon = "rhs_weap_g36kv_ag36";
    };
    class rhs_weap_g36c_Folded: rhs_weap_g36c {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_g36c_Folded_ca.paa";
        scopeArsenal = 0;
        baseweapon = "rhs_weap_g36c_Folded";
        displayName = "$STR_RHSSAF_WEAP_G36C_FOLDED";
        model = "rhssaf\addons\rhssaf_m_weapon_g36\rhssaf_g36c_folded";
        handAnim[] = {};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 65.74;
        };
        recoil = "rhs_recoil_g36_folded";
        rhs_grip1_change = "rhs_weap_g36c_Folded_grip1";
        rhs_grip2_change = "rhs_weap_g36c_Folded_grip2";
        rhs_grip3_change = "rhs_weap_g36c_Folded_grip3";
        rhs_fold = "rhs_weap_g36c";
        rhs_fold_anim = "RHS_GestureUnfoldSCAR";
    };
    class rhs_weap_g36c_Folded_grip1: rhs_weap_g36c_Folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhssaf\addons\rhssaf_c_weapons\anims\rhs_hand_g36c_grip.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip1";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_g36c_grip1";
    };
    class rhs_weap_g36c_Folded_grip2: rhs_weap_g36c_Folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhssaf\addons\rhssaf_c_weapons\anims\rhs_hand_g36c_afg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip3";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_g36c_grip2";
    };
    class rhs_weap_g36c_Folded_grip3: rhs_weap_g36c_Folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhssaf\addons\rhssaf_c_weapons\anims\rhs_hand_g36c_grip.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip2";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_g36c_grip3";
    };
    class rhs_weap_g36kv_Folded: rhs_weap_g36kv {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_g36kv_Folded_ca.paa";
        scope = 2;
        baseweapon = "rhs_weap_g36kv";
        displayName = "$STR_RHSSAF_WEAP_G36KV_FOLDED";
        model = "rhssaf\addons\rhssaf_m_weapon_g36\rhssaf_g36k_folded";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 65.74;
        };
        recoil = "rhs_recoil_g36_folded";
        rhs_grip1_change = "rhs_weap_g36kv_Folded_grip1";
        rhs_grip2_change = "rhs_weap_g36kv_Folded_grip2";
        rhs_grip3_change = "rhs_weap_g36kv_Folded_grip3";
        rhs_fold = "rhs_weap_g36kv";
        rhs_fold_anim = "RHS_GestureUnfoldSCAR";
    };
    class rhs_weap_g36kv_Folded_grip1: rhs_weap_g36kv_Folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhssaf\addons\rhssaf_c_weapons\anims\rhs_hand_g36k_grip.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip1";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_g36kv_grip1";
    };
    class rhs_weap_g36kv_Folded_grip2: rhs_weap_g36kv_Folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhssaf\addons\rhssaf_c_weapons\anims\rhs_hand_g36k_afg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip3";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_g36kv_grip2";
    };
    class rhs_weap_g36kv_Folded_grip3: rhs_weap_g36kv_Folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhssaf\addons\rhssaf_c_weapons\anims\rhs_hand_g36k_grip.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip2";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_g36kv_grip3";
    };
    class rhs_weap_g36kv_ag36_Folded: rhs_weap_g36kv_ag36 {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_g36kv_ag36_Folded_ca.paa";
        scope = 2;
        baseweapon = "rhs_weap_g36kv_ag36";
        displayName = "$STR_RHSSAF_WEAP_G36KV_AG36_FOLDED";
        model = "rhssaf\addons\rhssaf_m_weapon_g36\rhssaf_g36k_ag36_folded";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 87.14;
        };
        recoil = "rhs_recoil_g36_folded";
        rhs_fold = "rhs_weap_g36kv_ag36";
        rhs_fold_anim = "RHS_GestureUnfoldSCAR";
    };
    class rhs_weap_SCAR_H_Base;
    class rhs_weap_SCAR_H_CQC_Base: rhs_weap_SCAR_H_Base {
        class WeaponSlotsInfo;
        class Single;
        class Fullauto;
    };
    class rhs_weap_SCAR_H_STD_Base: rhs_weap_SCAR_H_Base {
        class WeaponSlotsInfo;
        class Single;
        class Fullauto;
    };
    class rhs_weap_SCAR_H_LB_Base: rhs_weap_SCAR_H_Base {
        class WeaponSlotsInfo;
        class Single;
        class Fullauto;
    };
    class rhs_weap_SCARH_CQC: rhs_weap_SCAR_H_CQC_Base {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_SCARH_CQC_ca.paa";
        model = "rhssaf\addons\rhssaf_m_weapon_scar\SCARH_CQC";
        hiddenSelectionsTextures[] = {"rhssaf\addons\rhssaf_t_weapon_scar\data\scarh_blk_co.paa"};
        magazines[] = {
            "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
            "rhs_mag_20Rnd_SCAR_762x51_m61_ap_bk",
            "rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk",
            "rhs_mag_20Rnd_SCAR_762x51_m80a1_epr_bk",
            "rhs_mag_20Rnd_SCAR_762x51_m118_special_bk"
        };
        displayName = "SCAR-H (CQC)";
        baseweapon = "rhs_weap_SCARH_CQC";
        rhs_grip1_change = "rhs_weap_SCARH_CQC_grip";
        rhs_grip2_change = "rhs_weap_SCARH_CQC_grip3";
        rhs_grip3_change = "rhs_weap_SCARH_CQC_grip2";
        rhs_fold = "rhs_weap_SCARH_CQC_Folded";
    };
    class rhs_weap_SCARH_CQC_grip: rhs_weap_SCARH_CQC {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip1";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_CQC_Folded_grip";
    };
    class rhs_weap_SCARH_CQC_grip2: rhs_weap_SCARH_CQC {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip3";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_CQC_Folded_grip2";
    };
    class rhs_weap_SCARH_CQC_grip3: rhs_weap_SCARH_CQC {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_afg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip2";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_CQC_Folded_grip3";
    };
    class rhs_weap_SCARH_STD: rhs_weap_SCAR_H_STD_Base {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_SCARH_STD_ca.paa";
        model = "rhssaf\addons\rhssaf_m_weapon_scar\SCARH";
        hiddenSelectionsTextures[] = {"rhssaf\addons\rhssaf_t_weapon_scar\data\scarh_blk_co.paa"};
        magazines[] = {
            "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
            "rhs_mag_20Rnd_SCAR_762x51_m61_ap_bk",
            "rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk",
            "rhs_mag_20Rnd_SCAR_762x51_m80a1_epr_bk",
            "rhs_mag_20Rnd_SCAR_762x51_m118_special_bk"
        };
        displayName = "SCAR-H (STD)";
        baseweapon = "rhs_weap_SCARH_STD";
        rhs_grip1_change = "rhs_weap_SCARH_STD_grip";
        rhs_grip2_change = "rhs_weap_SCARH_STD_grip3";
        rhs_grip3_change = "rhs_weap_SCARH_STD_grip2";
        rhs_fold = "rhs_weap_SCARH_STD_Folded";
    };
    class rhs_weap_SCARH_STD_grip: rhs_weap_SCARH_STD {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip1";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_STD_Folded_grip";
    };
    class rhs_weap_SCARH_STD_grip2: rhs_weap_SCARH_STD {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip3";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_STD_Folded_grip2";
    };
    class rhs_weap_SCARH_STD_grip3: rhs_weap_SCARH_STD {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_afg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip2";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_STD_Folded_grip3";
    };
    class rhs_weap_SCARH_LB: rhs_weap_SCAR_H_LB_Base {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_SCARH_LB_ca.paa";
        model = "rhssaf\addons\rhssaf_m_weapon_scar\SCARH_LB";
        hiddenSelectionsTextures[] = {"rhssaf\addons\rhssaf_t_weapon_scar\data\scarh_blk_co.paa"};
        magazines[] = {
            "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
            "rhs_mag_20Rnd_SCAR_762x51_m61_ap_bk",
            "rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk",
            "rhs_mag_20Rnd_SCAR_762x51_m80a1_epr_bk",
            "rhs_mag_20Rnd_SCAR_762x51_m118_special_bk"
        };
        displayName = "SCAR-H (LB)";
        baseweapon = "rhs_weap_SCARH_LB";
        rhs_grip1_change = "rhs_weap_SCARH_LB_grip";
        rhs_grip2_change = "rhs_weap_SCARH_LB_grip3";
        rhs_grip3_change = "rhs_weap_SCARH_LB_grip2";
        rhs_fold = "rhs_weap_SCARH_LB_Folded";
    };
    class rhs_weap_SCARH_LB_grip: rhs_weap_SCARH_LB {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip1";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_LB_Folded_grip";
    };
    class rhs_weap_SCARH_LB_grip2: rhs_weap_SCARH_LB {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip3";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_LB_Folded_grip2";
    };
    class rhs_weap_SCARH_LB_grip3: rhs_weap_SCARH_LB {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_afg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip2";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_LB_Folded_grip3";
    };
    class rhs_weap_SCARH_FDE_CQC: rhs_weap_SCARH_CQC {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_SCARH_FDE_CQC_ca.paa";
        hiddenSelectionsTextures[] = {"rhssaf\addons\rhssaf_t_weapon_scar\data\scarh_tan_co.paa"};
        displayName = "SCAR-H (CQC)";
        baseweapon = "rhs_weap_SCARH_FDE_CQC";
        rhs_grip1_change = "rhs_weap_SCARH_FDE_CQC_grip";
        rhs_grip2_change = "rhs_weap_SCARH_FDE_CQC_grip3";
        rhs_grip3_change = "rhs_weap_SCARH_FDE_CQC_grip2";
        rhs_fold = "rhs_weap_SCARH_FDE_CQC_Folded";
    };
    class rhs_weap_SCARH_FDE_CQC_grip: rhs_weap_SCARH_FDE_CQC {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip1";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_FDE_CQC_Folded_grip";
    };
    class rhs_weap_SCARH_FDE_CQC_grip2: rhs_weap_SCARH_FDE_CQC {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip3";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_FDE_CQC_Folded_grip2";
    };
    class rhs_weap_SCARH_FDE_CQC_grip3: rhs_weap_SCARH_FDE_CQC {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_afg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip2";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_FDE_CQC_Folded_grip3";
    };
    class rhs_weap_SCARH_FDE_STD: rhs_weap_SCARH_STD {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_SCARH_FDE_STD_ca.paa";
        hiddenSelectionsTextures[] = {"rhssaf\addons\rhssaf_t_weapon_scar\data\scarh_tan_co.paa"};
        displayName = "SCAR-H (STD)";
        baseweapon = "rhs_weap_SCARH_FDE_STD";
        rhs_grip1_change = "rhs_weap_SCARH_FDE_STD_grip";
        rhs_grip2_change = "rhs_weap_SCARH_FDE_STD_grip3";
        rhs_grip3_change = "rhs_weap_SCARH_FDE_STD_grip2";
        rhs_fold = "rhs_weap_SCARH_FDE_STD_Folded";
    };
    class rhs_weap_SCARH_FDE_STD_grip: rhs_weap_SCARH_FDE_STD {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip1";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_FDE_STD_Folded_grip";
    };
    class rhs_weap_SCARH_FDE_STD_grip2: rhs_weap_SCARH_FDE_STD {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip3";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_FDE_STD_Folded_grip2";
    };
    class rhs_weap_SCARH_FDE_STD_grip3: rhs_weap_SCARH_FDE_STD {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_afg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip2";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_FDE_STD_Folded_grip3";
    };
    class rhs_weap_SCARH_FDE_LB: rhs_weap_SCARH_LB {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_SCARH_FDE_LB_ca.paa";
        hiddenSelectionsTextures[] = {"rhssaf\addons\rhssaf_t_weapon_scar\data\scarh_tan_co.paa"};
        displayName = "SCAR-H (LB)";
        baseweapon = "rhs_weap_SCARH_FDE_LB";
        rhs_grip1_change = "rhs_weap_SCARH_FDE_LB_grip";
        rhs_grip2_change = "rhs_weap_SCARH_FDE_LB_grip3";
        rhs_grip3_change = "rhs_weap_SCARH_FDE_LB_grip2";
        rhs_fold = "rhs_weap_SCARH_FDE_LB_Folded";
    };
    class rhs_weap_SCARH_FDE_LB_grip: rhs_weap_SCARH_FDE_LB {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip1";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_FDE_LB_Folded_grip";
    };
    class rhs_weap_SCARH_FDE_LB_grip2: rhs_weap_SCARH_FDE_LB {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip3";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_FDE_LB_Folded_grip2";
    };
    class rhs_weap_SCARH_FDE_LB_grip3: rhs_weap_SCARH_FDE_LB {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_afg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip2";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_FDE_LB_Folded_grip3";
    };
    class rhs_weap_SCARH_CQC_Folded: rhs_weap_SCARH_CQC {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scopeArsenal = 0;
        baseweapon = "rhs_weap_SCARH_CQC_Folded";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_SCARH_CQC_folded_ca.paa";
        displayName = "SCAR-H (CQC) Folded";
        model = "rhssaf\addons\rhssaf_m_weapon_scar\SCARH_CQC_folded";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 76.78;
        };
        initSpeed = -0.93;
        recoil = "rhs_weap_scarh_folded_recoil";
        rhs_grip1_change = "rhs_weap_SCARH_CQC_Folded_grip";
        rhs_grip2_change = "rhs_weap_SCARH_CQC_Folded_grip3";
        rhs_grip3_change = "rhs_weap_SCARH_CQC_Folded_grip2";
        rhs_fold = "rhs_weap_SCARH_CQC";
        rhs_fold_anim = "RHS_GestureUnfoldSCAR";
    };
    class rhs_weap_SCARH_CQC_Folded_grip: rhs_weap_SCARH_CQC_Folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip1";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_CQC_grip";
    };
    class rhs_weap_SCARH_CQC_Folded_grip2: rhs_weap_SCARH_CQC_Folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip3";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_CQC_grip2";
    };
    class rhs_weap_SCARH_CQC_Folded_grip3: rhs_weap_SCARH_CQC_Folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_afg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip2";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_CQC_grip3";
    };
    class rhs_weap_SCARH_STD_Folded: rhs_weap_SCARH_STD {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scopeArsenal = 0;
        baseweapon = "rhs_weap_SCARH_STD_Folded";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_SCARH_STD_folded_ca.paa";
        displayName = "SCAR-H (STD) Folded";
        model = "rhssaf\addons\rhssaf_m_weapon_scar\SCARH_folded";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 76.78;
        };
        initSpeed = -0.93;
        recoil = "rhs_weap_scarh_folded_recoil";
        rhs_grip1_change = "rhs_weap_SCARH_STD_Folded_grip";
        rhs_grip2_change = "rhs_weap_SCARH_STD_Folded_grip3";
        rhs_grip3_change = "rhs_weap_SCARH_STD_Folded_grip2";
        rhs_fold = "rhs_weap_SCARH_STD";
        rhs_fold_anim = "RHS_GestureUnfoldSCAR";
    };
    class rhs_weap_SCARH_STD_Folded_grip: rhs_weap_SCARH_STD_Folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip1";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_STD_grip";
    };
    class rhs_weap_SCARH_STD_Folded_grip2: rhs_weap_SCARH_STD_Folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip3";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_STD_grip2";
    };
    class rhs_weap_SCARH_STD_Folded_grip3: rhs_weap_SCARH_STD_Folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_afg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip2";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_STD_grip3";
    };
    class rhs_weap_SCARH_LB_Folded: rhs_weap_SCARH_LB {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scopeArsenal = 0;
        baseweapon = "rhs_weap_SCARH_LB_Folded";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_SCARH_LB_folded_ca.paa";
        displayName = "SCAR-H (LB) Folded";
        model = "rhssaf\addons\rhssaf_m_weapon_scar\SCARH_LB_folded";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 76.78;
        };
        initSpeed = -0.93;
        recoil = "rhs_weap_scarh_folded_recoil";
        rhs_grip1_change = "rhs_weap_SCARH_LB_Folded_grip";
        rhs_grip2_change = "rhs_weap_SCARH_LB_Folded_grip3";
        rhs_grip3_change = "rhs_weap_SCARH_LB_Folded_grip2";
        rhs_fold = "rhs_weap_SCARH_LB";
        rhs_fold_anim = "RHS_GestureUnfoldSCAR";
    };
    class rhs_weap_SCARH_LB_Folded_grip: rhs_weap_SCARH_LB_Folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip1";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_LB_grip";
    };
    class rhs_weap_SCARH_LB_Folded_grip2: rhs_weap_SCARH_LB_Folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip3";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_LB_grip2";
    };
    class rhs_weap_SCARH_LB_Folded_grip3: rhs_weap_SCARH_LB_Folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_afg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip2";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_LB_grip3";
    };
    class rhs_weap_SCARH_FDE_CQC_Folded: rhs_weap_SCARH_FDE_CQC {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scopeArsenal = 0;
        baseweapon = "rhs_weap_SCARH_FDE_CQC_Folded";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_SCARH_FDE_CQC_folded_ca.paa";
        displayName = "SCAR-H (CQC) Folded";
        model = "rhssaf\addons\rhssaf_m_weapon_scar\SCARH_CQC_folded";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 76.78;
        };
        initSpeed = -0.93;
        recoil = "rhs_weap_scarh_folded_recoil";
        rhs_grip1_change = "rhs_weap_SCARH_FDE_CQC_Folded_grip";
        rhs_grip2_change = "rhs_weap_SCARH_FDE_CQC_Folded_grip3";
        rhs_grip3_change = "rhs_weap_SCARH_FDE_CQC_Folded_grip2";
        rhs_fold = "rhs_weap_SCARH_FDE_CQC";
        rhs_fold_anim = "RHS_GestureUnfoldSCAR";
    };
    class rhs_weap_SCARH_FDE_CQC_Folded_grip: rhs_weap_SCARH_FDE_CQC_Folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip1";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_FDE_CQC_grip";
    };
    class rhs_weap_SCARH_FDE_CQC_Folded_grip2: rhs_weap_SCARH_FDE_CQC_Folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip3";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_FDE_CQC_grip2";
    };
    class rhs_weap_SCARH_FDE_CQC_Folded_grip3: rhs_weap_SCARH_FDE_CQC_Folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_afg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip2";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_FDE_CQC_grip3";
    };
    class rhs_weap_SCARH_FDE_STD_Folded: rhs_weap_SCARH_FDE_STD {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scopeArsenal = 0;
        baseweapon = "rhs_weap_SCARH_FDE_STD_Folded";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_SCARH_FDE_STD_Folded_ca.paa";
        displayName = "SCAR-H (STD) Folded";
        model = "rhssaf\addons\rhssaf_m_weapon_scar\SCARH_folded";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 76.78;
        };
        initSpeed = -0.93;
        recoil = "rhs_weap_scarh_folded_recoil";
        rhs_grip1_change = "rhs_weap_SCARH_FDE_STD_Folded_grip";
        rhs_grip2_change = "rhs_weap_SCARH_FDE_STD_Folded_grip3";
        rhs_grip3_change = "rhs_weap_SCARH_FDE_STD_Folded_grip2";
        rhs_fold = "rhs_weap_SCARH_FDE_STD";
        rhs_fold_anim = "RHS_GestureUnfoldSCAR";
    };
    class rhs_weap_SCARH_FDE_STD_Folded_grip: rhs_weap_SCARH_FDE_STD_Folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip1";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_FDE_STD_grip";
    };
    class rhs_weap_SCARH_FDE_STD_Folded_grip2: rhs_weap_SCARH_FDE_STD_Folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip3";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_FDE_STD_grip2";
    };
    class rhs_weap_SCARH_FDE_STD_Folded_grip3: rhs_weap_SCARH_FDE_STD_Folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_afg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip2";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_FDE_STD_grip3";
    };
    class rhs_weap_SCARH_FDE_LB_Folded: rhs_weap_SCARH_FDE_LB {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scopeArsenal = 0;
        baseweapon = "rhs_weap_SCARH_FDE_LB_Folded";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_SCARH_FDE_LB_folded_ca.paa";
        displayName = "SCAR-H (LB) Folded";
        model = "rhssaf\addons\rhssaf_m_weapon_scar\SCARH_LB_folded";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 76.78;
        };
        initSpeed = -0.93;
        recoil = "rhs_weap_scarh_folded_recoil";
        rhs_grip1_change = "rhs_weap_SCARH_FDE_LB_Folded_grip";
        rhs_grip2_change = "rhs_weap_SCARH_FDE_LB_Folded_grip3";
        rhs_grip3_change = "rhs_weap_SCARH_FDE_LB_Folded_grip2";
        rhs_fold = "rhs_weap_SCARH_FDE_LB";
        rhs_fold_anim = "RHS_GestureUnfoldSCAR";
    };
    class rhs_weap_SCARH_FDE_LB_Folded_grip: rhs_weap_SCARH_FDE_LB_Folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip1";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_FDE_LB_grip";
    };
    class rhs_weap_SCARH_FDE_LB_Folded_grip2: rhs_weap_SCARH_FDE_LB_Folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_vfg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip3";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_FDE_LB_grip2";
    };
    class rhs_weap_SCARH_FDE_LB_Folded_grip3: rhs_weap_SCARH_FDE_LB_Folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        handAnim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR_afg.rtm"};
        class LinkedItems {
            class LinkedItemsUnder {
                item = "rhsusf_acc_grip2";
                slot = "UnderBarrelSlot";
            };
        };
        rhs_fold = "rhs_weap_SCARH_FDE_LB_grip3";
    };
    class rhs_weap_m84: Rifle_Long_Base_F {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_m84_ca.paa";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "$STR_RHSSAF_WEAP_M84";
        scope = 2;
        scopeCurator = 2;
        magazines[] = {
            "rhs_100Rnd_762x54mmR",
            "rhs_100Rnd_762x54mmR_green",
            "rhssaf_250Rnd_762x54R",
            "rhs_100Rnd_762x54mmR_7N13",
            "rhs_100Rnd_762x54mmR_7N26",
            "rhs_100Rnd_762x54mmR_7BZ3"
        };
        magazineWell[] = {"PK_762x54R", "CBA_762x54R_LINKS"};
        reloadAction = "GestureReloadM200";
        recoil = "recoil_zafir";
        maxZeroing = 1500;
        handanim[] = {"OFP2_ManSkeleton", "\rhssaf\addons\rhssaf_m_weapon_m84\data\anim\m84.rtm"};
        model = "\rhssaf\addons\rhssaf_m_weapon_m84\rhssaf_m84";
        nameSound = "Mgun";
        UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\gear_m84_x_ca.paa";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"rhssaf\addons\rhssaf_t_weapon_m84\data\pkm_co.paa"};
        class Library {
            libTextDesc = "The Zastava M84 is a general-purpose machine gun manufactured by – then – Yugoslav Zastava Arms company.<br/>The M84 is a direct copy of the Soviet PK machine gun, the sole difference being in stock, which is not hollowed like on the original and is made out of a different wood type.<br/>Machine gun M84 is intended for infantry units and its main feature is excellent precision at large distances; tripod provides easy adaptation to various terrains.";
        };
        descriptionShort = "General Purpose Machine Gun<br />Caliber: 7.62x54 mm";
        cursor = "mg";
        cursorAim = "EmptyCursor";
        magazineReloadSwitchPhase = 0.46;
        aimTransitionSpeed = 0.5;
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 193.6;
            class MuzzleSlot {};
            class CowsSlot {
                iconPosition[] = {0, 0};
                iconScale = 1;
                iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
                iconPinPoint = "Left";
            };
            class PointerSlot {};
        };
        inertia = 0.85;
        dexterity = 1;
        modes[] = {
            "FullAuto",
            "close",
            "short",
            "medium",
            "far_optic1",
            "far_optic2"
        };
        bullet1[] = {
            "A3\sounds_f\weapons\shells\7_62\metal_762_01",
            0.794328,
            1,
            15
        };
        bullet2[] = {
            "A3\sounds_f\weapons\shells\7_62\metal_762_02",
            0.794328,
            1,
            15
        };
        bullet3[] = {
            "A3\sounds_f\weapons\shells\7_62\metal_762_03",
            0.794328,
            1,
            15
        };
        bullet4[] = {
            "A3\sounds_f\weapons\shells\7_62\metal_762_04",
            0.794328,
            1,
            15
        };
        bullet5[] = {
            "A3\sounds_f\weapons\shells\7_62\dirt_762_01",
            0.794328,
            1,
            15
        };
        bullet6[] = {
            "A3\sounds_f\weapons\shells\7_62\dirt_762_02",
            0.794328,
            1,
            15
        };
        bullet7[] = {
            "A3\sounds_f\weapons\shells\7_62\dirt_762_03",
            0.794328,
            1,
            15
        };
        bullet8[] = {
            "A3\sounds_f\weapons\shells\7_62\dirt_762_04",
            0.794328,
            1,
            15
        };
        bullet9[] = {
            "A3\sounds_f\weapons\shells\7_62\grass_762_01",
            0.794328,
            1,
            15
        };
        bullet10[] = {
            "A3\sounds_f\weapons\shells\7_62\grass_762_02",
            0.794328,
            1,
            15
        };
        bullet11[] = {
            "A3\sounds_f\weapons\shells\7_62\grass_762_03",
            0.794328,
            1,
            15
        };
        bullet12[] = {
            "A3\sounds_f\weapons\shells\7_62\grass_762_04",
            0.794328,
            1,
            15
        };
        soundBullet[] = {
            "bullet1",
            0.083,
            "bullet2",
            0.083,
            "bullet3",
            0.083,
            "bullet4",
            0.083,
            "bullet5",
            0.083,
            "bullet6",
            0.083,
            "bullet7",
            0.083,
            "bullet8",
            0.083,
            "bullet9",
            0.083,
            "bullet10",
            0.083,
            "bullet11",
            0.083,
            "bullet12",
            0.083
        };
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
        weaponInfoType = "rhs_rscOptics_m84";
        optics = 0;
        opticsZoomMin = 0.25;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        drySound[] = {
            "A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\dry_Mk200",
            0.446684,
            1,
            10
        };
        reloadMagazineSound[] = {"rhsafrf\addons\rhs_sounds\pkp\reload", 1.1, 1, 12};
        soundBipodDeploy[] = {
            "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_deploy",
            0.707946,
            1,
            20
        };
        soundBipodFold[] = {
            "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_fold",
            0.707946,
            1,
            20
        };
        soundBipodDown[] = {
            "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",
            0.707946,
            1,
            20
        };
        soundBipodUp[] = {
            "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",
            0.707946,
            1,
            20
        };
        jsrs_soundeffect = "JSRS2_Distance_Effects_PK";
        class FullAuto: Mode_FullAuto {
            reloadTime = 0.08571429;
            dispersion = 0.00087;
            recoil = "recoil_auto_mk200";
            recoilProne = "recoil_auto_prone_mk200";
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound {};
            class SilencedSound {};
            soundContinuous = 0;
            soundBurst = 0;
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.7;
            maxRange = 10;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
        };
        class close: FullAuto {
            burst = 10;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 10;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short: close {
            burst = 8;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.04;
        };
        class medium: close {
            burst = 7;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.1;
        };
        class far_optic1: medium {
            requiredOpticType = 1;
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 10;
            aiRateOfFireDistance = 1000;
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 500;
            midRangeProbab = 0.4;
            maxRange = 650;
            maxRangeProbab = 0.009;
        };
        class far_optic2: far_optic1 {
            burst = 3;
            requiredOpticType = 2;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 750;
            midRangeProbab = 0.7;
            maxRange = 900;
            maxRangeProbab = 0.009;
            aiRateOfFire = 10;
            aiRateOfFireDistance = 900;
        };
        aiDispersionCoefY = 23;
        aiDispersionCoefX = 19;
        deployedPivot = "bipod";
        hasBipod = 1;
        class GunParticles: GunParticles {
            class SecondEffect {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
            class RHS_BarrelRefract {
                positionName = "usti hlavne";
                directionName = "usti hlavne up";
                effectName = "RHS_BarrelRefract";
            };
        };
        baseWeapon = "rhs_weap_m84";
    };
    class rhs_weap_lmg_minimipara;
    class rhs_weap_minimi_para_railed: rhs_weap_lmg_minimipara {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_minimi_para_railed_ca.paa";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        model = "\rhsusf\addons\rhsusf_weapons2\M249\merged\SAF_minimi_para";
        displayName = "$STR_RHSSAF_WEAP_MINIMI";
        inertia = 0.71;
        initspeed = -1;
        weaponInfoType = "rhs_rscOptics_m249_para";
        class WeaponSlotsInfo {
            mass = 149.49;
            allowedSlots[] = {901};
            class CowsSlot: rhs_western_rifle_scopes_slot_short {};
            class PointerSlot: rhs_western_rifle_laser_slot {};
            class MuzzleSlot: rhs_western_rifle_muzzle_slot {};
            class GripodSlot: rhs_western_mg_gripod_slot {};
            class UnderBarrelSlot: rhs_Underslot_m249_ris {};
        };
        class LinkedItems {
            class LinkedItemsUnder {
                slot = "UnderBarrelSlot";
                item = "rhsusf_acc_saw_bipod";
            };
        };
        baseWeapon = "rhs_weap_minimi_para_railed";
        rhs_grip1_change = "rhs_weap_minimi_para_railed_vfg1";
        rhs_grip2_change = "rhs_weap_minimi_para_railed_vfg2";
        rhs_grip3_change = "rhs_weap_minimi_para_railed_vfg3";
        rhs_fold_checkOptic = 0;
        rhs_fold = "rhs_weap_minimi_para_railed_folded";
    };
    class rhs_weap_minimi_para_railed_vfg1: rhs_weap_minimi_para_railed {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        handanim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm"};
        rhs_fold = "rhs_weap_minimi_para_railed_folded_vfg1";
    };
    class rhs_weap_minimi_para_railed_vfg2: rhs_weap_minimi_para_railed {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        handanim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_VFG.rtm"};
        rhs_fold = "rhs_weap_minimi_para_railed_folded_vfg2";
    };
    class rhs_weap_minimi_para_railed_vfg3: rhs_weap_minimi_para_railed {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        handanim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm"};
        rhs_fold = "rhs_weap_minimi_para_railed_folded_vfg3";
    };
    class rhs_weap_minimi_para_railed_folded: rhs_weap_minimi_para_railed {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_minimi_para_railed_folded_ca.paa";
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        scopeCurator = 0;
        model = "\rhsusf\addons\rhsusf_weapons2\M249\merged\SAF_minimi_para_folded.p3d";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 145.44;
        };
        recoil = "rhs_recoil_m240";
        rhs_grip1_change = "rhs_weap_minimi_para_railed_folded_vfg1";
        rhs_grip2_change = "rhs_weap_minimi_para_railed_folded_vfg2";
        rhs_grip3_change = "rhs_weap_minimi_para_railed_folded_vfg3";
        rhs_fold = "rhs_weap_minimi_para_railed";
    };
    class rhs_weap_minimi_para_railed_folded_vfg1: rhs_weap_minimi_para_railed_folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        handanim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm"};
        rhs_fold = "rhs_weap_minimi_para_railed_vfg1";
    };
    class rhs_weap_minimi_para_railed_folded_vfg2: rhs_weap_minimi_para_railed_folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        handanim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_VFG.rtm"};
        rhs_fold = "rhs_weap_minimi_para_railed_vfg2";
    };
    class rhs_weap_minimi_para_railed_folded_vfg3: rhs_weap_minimi_para_railed_folded {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        handanim[] = {"OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm"};
        rhs_fold = "rhs_weap_minimi_para_railed_vfg3";
    };
    class Launcher;
    class Launcher_Base_F: Launcher {
        class WeaponSlotsInfo;
        class Eventhandlers;
    };
    class rhs_weap_m80: Launcher_Base_F {
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_m80_ca.paa";
        scope = 2;
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "$STR_RHSSAF_WEAP_M80";
        descriptionShort = "Rocket launcher<br/>Caliber: 64mm<br/>Type: Single-shot Anti-Tank";
        model = "\rhssaf\addons\rhssaf_m_weapon_m80\rhssaf_m80";
        class GunParticles {
            class effect1 {
                positionName = "konec hlavne";
                directionName = "usti hlavne";
                effectName = "RocketBackEffectsRPGNT";
            };
        };
        sounds[] = {"StandardSound"};
        class StandardSound {
            weaponSoundEffect = "DefaultRifle";
            begin1[] = {
                "A3\Sounds_F\weapons\Launcher\rpg32",
                1.99526,
                1,
                900
            };
            soundBegin[] = {"begin1", 1};
        };
        drySound[] = {"A3\sounds_f\weapons\other\dry6", 0.0316228, 1, 10};
        reloadMagazineSound[] = {
            "rhsusf\addons\rhsusf_weapons2\m136\sound\at4prep.ogg",
            0.562341,
            1,
            50
        };
        soundFly[] = {
            "A3\sounds_f\weapons\rockets\rocket_fly_1",
            0.316228,
            1.5,
            700
        };
        magazines[] = {"rhs_m80_mag"};
        reloadAction = "ReloadRPG";
        handAnim[] = {"OFP2_ManSkeleton", "\rhssaf\addons\rhssaf_c_weapons\anims\rhssaf_hand_m80.rtm"};
        recoil = "recoil_single_law";
        rhs_disposable = 1;
        reloadTime = 1;
        magazineReloadTime = 1;
        aimTransitionSpeed = 0.5;
        showToPlayer = 1;
        minRange = 10;
        minRangeProbab = 0.9;
        midRange = 200;
        midRangeProbab = 0.7;
        maxRange = 350;
        maxRangeProbab = 0.1;
        aiRateOfFire = 7;
        aiRateOfFireDistance = 300;
        weaponInfoType = "rhs_rscOptics_disposable";
        modelOptics = "-";
        optics = 1;
        class OpticsModes {
            class ironsight {
                opticsID = 2;
                opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
                useModelOptics = 0;
                opticsFlare = 0;
                opticsDisablePeripherialVision = 0;
                opticsZoomMin = 0.25;
                opticsZoomMax = 1.2;
                opticsZoomInit = 0.7;
                visionMode = "";
                discreteDistanceInitIndex = 0;
                discreteDistance[] = {150, 200, 250, 300, 350, 400};
                discreteDistanceCameraPoint[] = {
                    "op_eye_150",
                    "op_eye_200",
                    "op_eye_250",
                    "op_eye_300",
                    "op_eye_350",
                    "op_eye_400"
                };
                memoryPointCamera = "op_look1";
                cameraDir = "op_look";
                distanceZoomMin = 150;
                distanceZoomMax = 400;
            };
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            allowedSlots[] = {};
            mass = 66;
            class PointerSlot {
                iconPosition[] = {0, 0};
                iconScale = 1;
                iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
                iconPinPoint = "Left";
            };
        };
        class Library {
            libTextDesc = "M80 is a portable one-shot 64 mm unguided anti-tank weapon";
        };
        class ItemInfo {
            priority = 3;
            RMBhint = "M80";
            onHoverText = "M80";
        };
        class Eventhandlers: Eventhandlers {
            class RHS_DisposableWeapon {
                fired = "_this call rhs_fnc_disposable;";
            };
        };
    };
    class rhs_weap_m80_used: rhs_weap_m80 {
        scope = 1;
        model = "rhssaf\addons\rhssaf_m_weapon_m80\rhssaf_m80_used";
        descriptionShort = "Used rocket launcher<br/>Caliber: 64mm<br/>Type: Used launcher tube";
        displayname = "$STR_RHSSAF_WEAP_M80_USED";
        magazines[] = {"rhs_launcher_dummy_mag"};
        weaponInfoType = "RscWeaponZeroing";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            allowedSlots[] = {};
            mass = 34.76;
        };
    };
    class hgun_P07_F;
    class rhs_weap_cz99: hgun_P07_F {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_cz99_ca.paa";
        displayName = "$STR_RHS_WEAP_CZ99_DISPLAYNAME";
        model = "\rhssaf\addons\rhssaf_m_weapon_cz99\rhs_cz99";
        modelOptics = "-";
        weaponInfoType = "rhs_rscOptics_pistol_usf";
        magazines[] = {"rhssaf_mag_15Rnd_9x19_FMJ", "rhssaf_mag_15Rnd_9x19_JHP"};
        magazineWell[] = {"CZ99_9x19_PARA"};
        minRange = 5;
        minRangeProbab = 0.3;
        midRange = 25;
        midRangeProbab = 0.6;
        maxRange = 50;
        maxRangeProbab = 0.1;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 25;
        optics = 1;
        distanceZoomMin = 50;
        distanceZoomMax = 50;
        inertia = 0.2;
        dexterity = 1.8;
        initSpeed = -0.9;
        dispersion = 0.02;
        reloadTime = 0.13;
        class WeaponSlotsInfo {
            holsterScale = 1;
            holsterOffset = "holster";
            mass = 20.9;
            class CowsSlot {
                iconPosition[] = {0, 0};
                iconScale = 1;
                iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
                iconPinPoint = "Left";
            };
            class MuzzleSlot {};
            class PointerSlot {};
        };
        muzzles[] = {"this"};
        baseWeapon = "rhs_weap_cz99";
    };
    class rhs_weap_cz99_etched: rhs_weap_cz99 {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_cz99_etched_ca.paa";
        displayName = "$STR_RHS_WEAP_CZ99_ETCHED_DISPLAYNAME";
        model = "\rhssaf\addons\rhssaf_m_weapon_cz99\rhs_cz99_etched";
        modelOptics = "-";
        weaponInfoType = "rhs_rscOptics_pistol_usf";
        baseWeapon = "rhs_weap_cz99_etched";
    };
    class muzzle_snds_H;
    class rhssaf_silencer_base: muzzle_snds_H {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 0;
        scopeCurator = 0;
        class ItemInfo: InventoryMuzzleItem_Base_F {
            mass = 7;
            class MagazineCoef {
                initSpeed = 1.01;
            };
            class AmmoCoef {
                hit = 1;
                visibleFire = 0.2;
                audibleFire = 0.4;
                visibleFireTime = 0.5;
                audibleFireTime = 1;
                cost = 1;
                typicalSpeed = 1;
                airFriction = 1;
            };
            class MuzzleCoef {
                dispersionCoef = "0.8f";
                artilleryDispersionCoef = "1.0f";
                fireLightCoef = "0.1f";
                recoilCoef = "1.0f";
                recoilProneCoef = "1.0f";
                minRangeCoef = "1.0f";
                minRangeProbabCoef = "1.0f";
                midRangeCoef = "1.0f";
                midRangeProbabCoef = "1.0f";
                maxRangeCoef = "1.0f";
                maxRangeProbabCoef = "1.0f";
            };
            muzzleEnd = "zaslehPoint";
            alternativeFire = "Zasleh2";
            soundTypeIndex = 1;
            inertia = 0.2;
        };
    };
    class rhssaf_acc_G36_Rotex: rhssaf_silencer_base {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        model = "\rhssaf\addons\rhssaf_m_weapon_g36\G36_rotex_muzzle.p3d";
        displayName = "G36 Rotex adapter";
        class ItemInfo: ItemInfo {
            mass = 5;
            soundTypeIndex = 0;
            class MagazineCoef: MagazineCoef {
                initSpeed = 1;
            };
            class AmmoCoef: AmmoCoef {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 1;
                audibleFire = 1;
                visibleFireTime = 1;
                audibleFireTime = 1;
                cost = 1;
            };
            class MuzzleCoef: MuzzleCoef {
                dispersionCoef = "1f";
                fireLightCoef = "1f";
                recoilCoef = "1f";
                recoilProneCoef = "1f";
            };
            muzzleEnd = "mf";
            alternativeFire = "rhsusf_acc_muzzleFlash_ar15";
            inertia = 0.2;
        };
        inertia = 0;
    };
    class rhs_acc_scope_base: ItemCore {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 0;
        scopeCurator = 0;
        displayName = "$STR_RHS_ACC_PSO1M2";
        picture = "\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_pso1_ca.paa";
        model = "\rhsafrf\addons\rhs_weapons\acc\scopes\pso1\rhs_pso1";
        descriptionShort = "$STR_RHS_ACC_PSO1M2_SD";
        weaponInfoType = "RscWeaponZeroing";
        class ItemInfo: InventoryOpticsItem_Base_F {
            opticType = 2;
            mass = 13.64;
            RMBhint = "Optical Sniper Sight";
            optics = 1;
            modelOptics = "\rhsafrf\addons\rhs_weapons\acc\scopes\optics\rhs_pso_scope";
            class OpticsModes {
                class pso1_scope {
                    opticsID = 2;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
                    discreteDistance[] = {
                        100,
                        200,
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
                        1000
                    };
                    discreteDistanceInitIndex = 2;
                    opticsZoomMin = "0.35/4";
                    opticsZoomMax = "0.35/4";
                    opticsZoomInit = "0.35/4";
                    memoryPointCamera = "opticView";
                    visionMode[] = {"Normal"};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    distanceZoomMin = 200;
                    distanceZoomMax = 1000;
                    cameraDir = "";
                };
                class rhs_1p29_iron {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsPPEffects[] = {""};
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.1;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye_svd";
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                    visionMode[] = {};
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    distanceZoomMin = 300;
                    distanceZoomMax = 300;
                    cameraDir = "";
                };
            };
        };
        inertia = 0.2;
    };
    class rhs_acc_mtz: rhs_acc_scope_base {
        scope = 1;
        scopeCurator = 0;
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        weaponInfoType = "rhs_rscOptics_acc_mtz";
        displayName = "$STR_RHS_ACC_MTZ_DISPLAYNAME";
        picture = "\rhsafrf\addons\rhs_weapons\gear_acc\rhs_acc_gear_npz_ca.paa";
        model = "\rhsafrf\addons\rhs_weapons\acc\scopes\npz\rhs_npz";
        inertia = 0;
    };
    class rhs_weap_m21s_eo: rhs_weap_m21s_pr {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_eotech_552";
            };
        };
    };
    class rhs_weap_m21a_pr_aco: rhs_weap_m21a_pr {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_ACO";
            };
        };
    };
    class rhs_weap_m21a_pkas: rhs_weap_m21a {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhs_acc_pkas";
            };
        };
    };
    class rhs_weap_m21s_pkas: rhs_weap_m21s {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhs_acc_pkas";
            };
        };
    };
    class rhs_weap_m21a_pr_mrco: rhs_weap_m21a_pr {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_MRCO";
            };
        };
    };
    class rhs_weap_m21a_pr_hamr: rhs_weap_m21a_pr {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_Hamr";
            };
        };
    };
    class rhs_weap_m21a_pr_sos: rhs_weap_m21a_pr {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_SOS";
            };
        };
    };
    class rhs_weap_m21s_pr_aco: rhs_weap_m21s_pr {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_ACO";
            };
        };
    };
    class rhs_weap_m21s_pr_mrco: rhs_weap_m21s_pr {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_MRCO";
            };
        };
    };
    class rhs_weap_m21s_pr_hamr: rhs_weap_m21s_pr {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_Hamr";
            };
        };
    };
    class rhs_weap_m21s_pr_sos: rhs_weap_m21s_pr {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_SOS";
            };
        };
    };
    class rhs_weap_m76_pso: rhs_weap_m76 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhs_acc_pso1m2";
            };
        };
    };
    class rhs_weap_minimi_para_railed_eot552_m952v_sfmb: rhs_weap_minimi_para_railed {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_eotech_552";
            };
            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "rhsusf_acc_M952V";
            };
            class LinkedItemsUnder {
                slot = "UnderBarrelSlot";
                item = "rhsusf_acc_saw_bipod";
            };
        };
    };
    class rhs_weap_g36c_compm4: rhs_weap_g36c {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_compm4";
            };
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "rhssaf_acc_G36_Rotex";
            };
        };
    };
    class rhs_weap_g36c_grip3_eo: rhs_weap_g36c_grip3 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_eotech_552";
            };
            class LinkedItemsUnder {
                item = "rhs_acc_grip_ffg2";
                slot = "UnderBarrelSlot";
            };
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "rhssaf_acc_G36_Rotex";
            };
        };
    };
    class rhs_weap_g36kv_compm4: rhs_weap_g36kv {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_compm4";
            };
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "rhssaf_acc_G36_Rotex";
            };
        };
    };
    class rhs_weap_g36kv_ag36_eo: rhs_weap_g36kv_ag36 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_eotech_552";
            };
        };
    };
    class rhs_weap_g36kv_grip3_eo: rhs_weap_g36kv_grip3 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_eotech_552";
            };
            class LinkedItemsUnder {
                item = "rhs_acc_grip_ffg2";
                slot = "UnderBarrelSlot";
            };
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "rhssaf_acc_G36_Rotex";
            };
        };
    };
    class rhs_weap_m82a1_leu: rhs_weap_m82a1 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_LEUPOLDMK4_2";
            };
        };
    };
    class rhs_weap_hk416d10;
    class rhs_weap_hk416d10_compm4: rhs_weap_hk416d10 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_compm4";
            };
        };
    };
    class rhs_weap_SCARH_STD_grip2_su230a: rhs_weap_SCARH_STD_grip2 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_su230a";
            };
            class LinkedItemsUnder {
                slot = "GripodSlot";
                item = "rhs_acc_grip_ffg2";
            };
        };
    };
    class rhs_weap_SCARH_LB_bipod_m8541: rhs_weap_SCARH_LB {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_M8541";
            };
            class LinkedItemsUnder {
                item = "rhsusf_acc_harris_bipod";
                slot = "UnderBarrelSlot";
            };
        };
    };
    class Default;
    class Put: Default {
        muzzles[] += {
            "Rhssaf_Mine_Muzzle",
            "rhssaf_tm100_muzzle",
            "rhssaf_tm200_muzzle",
            "rhssaf_tm500_muzzle"
        };
        class PutMuzzle: Default {};
        class Rhssaf_Mine_Muzzle: PutMuzzle {
            magazines[] = {
                "rhssaf_mine_pma3_mag",
                "rhssaf_mine_tma4_mag",
                "rhssaf_mine_mrud_a_mag",
                "rhssaf_mine_mrud_b_mag",
                "rhssaf_mine_mrud_c_mag",
                "rhssaf_mine_mrud_d_mag"
            };
        };
        class rhssaf_tm100_muzzle: PutMuzzle {
            autoreload = 0;
            displayName = "TM-100 charge";
            magazines[] = {"rhssaf_tm100_mag"};
            enableAttack = 1;
            showToPlayer = 0;
        };
        class rhssaf_tm200_muzzle: PutMuzzle {
            autoreload = 0;
            displayName = "TM-200 charge";
            magazines[] = {"rhssaf_tm200_mag"};
            enableAttack = 1;
            showToPlayer = 0;
        };
        class rhssaf_tm500_muzzle: PutMuzzle {
            autoreload = 0;
            displayName = "TM-500 charge";
            magazines[] = {"rhssaf_tm500_mag"};
            enableAttack = 1;
            showToPlayer = 0;
        };
    };
    class GrenadeLauncher;
    class Throw: GrenadeLauncher {
        muzzles[] += {
            "rhssaff_throw_flashbang",
            "rhssaf_throw_grenade",
            "rhssaf_throw_at_grenade",
            "rhssaf_throw_incendiary",
            "rhssaf_throw_smoke_white",
            "rhssaf_throw_smoke_yellow",
            "rhssaf_throw_smoke_green",
            "rhssaf_throw_smoke_red",
            "rhssaf_throw_smoke_blue",
            "rhssaf_throw_smoke_orange"
        };
        class ThrowMuzzle: GrenadeLauncher {};
        class rhssaff_throw_flashbang: ThrowMuzzle {
            magazines[] = {"rhssaf_mag_rshb_p98"};
        };
        class rhssaf_throw_incendiary: ThrowMuzzle {
            magazines[] = {"rhssaf_mag_brz_m88"};
        };
        class rhssaf_throw_smoke_white: ThrowMuzzle {
            magazines[] = {"rhssaf_mag_brd_m83_white"};
        };
        class rhssaf_throw_smoke_yellow: ThrowMuzzle {
            magazines[] = {"rhssaf_mag_brd_m83_yellow"};
        };
        class rhssaf_throw_smoke_green: ThrowMuzzle {
            magazines[] = {"rhssaf_mag_brd_m83_green"};
        };
        class rhssaf_throw_smoke_red: ThrowMuzzle {
            magazines[] = {"rhssaf_mag_brd_m83_red"};
        };
        class rhssaf_throw_smoke_blue: ThrowMuzzle {
            magazines[] = {"rhssaf_mag_brd_m83_blue"};
        };
        class rhssaf_throw_smoke_orange: ThrowMuzzle {
            magazines[] = {"rhssaf_mag_brd_m83_orange"};
        };
        class rhssaf_throw_grenade: ThrowMuzzle {
            magazines[] = {"rhssaf_mag_br_m75", "rhssaf_mag_br_m84"};
        };
        class rhssaf_throw_at_grenade: ThrowMuzzle {
            magazines[] = {"rhssaf_mag_brk_m79"};
            class Eventhandlers {
                class RHS_ThrowAction {
                    fired = "[_this select 0, _this select 6] call RHS_FNC_RKG3_IMPACT;";
                };
            };
        };
    };
    class CannonCore;
    class mortar_82mm;
    class rhs_weap_m70c: mortar_82mm {
        displayName = "M70 Commando";
        magazines[] = {"rhssaf_mag_m73_HE"};
        modes[] = {
            "Single0",
            "Single1",
            "Single2",
            "Burst0",
            "Burst1"
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
            dispersion = 0;
            artilleryDispersion = 0;
            artilleryCharge = 0.566;
        };
        class Single1: Single0 {
            displayName = "CHARGE 1";
            artilleryCharge = 0.81;
        };
        class Single2: Single0 {
            displayName = "CHARGE 2";
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
            artilleryCharge = 1;
        };
    };
    class Binocular;
    class rhssaf_zrak_rd7j: Binocular {
        scope = 2;
        scopeCurator = 2;
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        opticsDisablePeripherialVision = 1;
        weaponPoolAvailable = 1;
        simulation = "Binocular";
        model = "\rhssaf\addons\rhssaf_binoculars\zrak_rd7j\rhssaf_zrak_rd7j";
        modelOptics = "rhssaf\addons\rhssaf_binoculars\zrak_rd7j\rhssaf_zrak_rd7j_reticle";
        opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
        visionMode[] = {"Normal"};
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\accessories\rhssaf_zrak_rd7j_ca.paa";
        displayName = "$STR_ITEM_RHSSAF_ZRAK_RD7J_DISPLAYNAME";
        optics = 1;
        forceOptics = 0;
        useAsBinocular = 1;
        primary = 0;
        opticsZoomMin = 0.03125;
        opticsZoomMax = 0.0625;
        opticsZoomInit = 0.0625;
        minRange = 150;
        midRange = 500;
        maxRange = 2500;
        magazines[] = {};
        descriptionShort = "Magnification: 8x";
        class WeaponSlotsInfo {
            mass = 10;
        };
    };
};
class CfgMagazines {
    class CA_Magazine;
    class 30Rnd_556x45_Stanag;
    class 32Rnd_155mm_Mo_shells;
    class rhssaf_mag_15Rnd_9x19_FMJ: CA_Magazine {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        type = 16;
        displayName = "$STR_RHSSAF_MAG_15RND_9X19_FMJ_DISPLAYNAME";
        displayNameShort = "$STR_RHSSAF_MAG_15RND_9X19_FMJ_DISPLAYNAMESHORT";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhssaf_mag_15Rnd_9x19_FMJ_ca.paa";
        ammo = "rhs_ammo_9x19_FMJ";
        count = 15;
        mass = 6;
        initSpeed = 390.1;
        descriptionShort = "$STR_RHSUSF_15RND_9x19_FMJ_DESCRIPTION_SHORT";
        model = "\rhssaf\addons\rhssaf_m_weapon_cz99\magazine\rhs_15rnd_cz99_mag";
    };
    class rhssaf_mag_15Rnd_9x19_JHP: rhssaf_mag_15Rnd_9x19_FMJ {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_RHSSAF_MAG_15RND_9X19_JHP_DISPLAYNAME";
        displayNameShort = "$STR_RHSSAF_MAG_15RND_9X19_JHP_DISPLAYNAMESHORT";
        ammo = "rhs_ammo_9x19_JHP";
        initSpeed = 301.8;
        descriptionShort = "$STR_RHSUSF_15RND_9x19_JHP_DESCRIPTION_SHORT";
    };
    class rhsgref_20rnd_765x17_vz61: CA_Magazine {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        mass = 5.5;
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_RHSSAF_20RND_765X17_VZ61_DISPLAYNAME";
        descriptionShort = "$STR_RHSSAF_20RND_765X17_VZ61_DESCRIPTIONSHORT";
        picture = "\rhssaf\addons\rhssaf_c_weapons\icons\m_scorpion.paa";
        ammo = "rhs_ammo_9x17";
        count = 20;
        initSpeed = 320;
        model = "\rhssaf\addons\rhssaf_m_weapon_scorpion\magazine\rhs_20rnd_scorpion_mag";
        modelSpecial = "\rhssaf\addons\rhssaf_m_weapon_scorpion\mag_proxies\rhs_mag_765x17_scorpion_20rnd";
        modelSpecialIsProxy = 1;
    };
    class rhsgref_10rnd_765x17_vz61: rhsgref_20rnd_765x17_vz61 {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        count = 10;
        mass = 3.5;
        displayName = "$STR_RHSSAF_10RND_765X17_VZ61_DISPLAYNAME";
        descriptionShort = "$STR_RHSSAF_10RND_765X17_VZ61_DESCRIPTIONSHORT";
        picture = "\rhssaf\addons\rhssaf_c_weapons\icons\m_scorpion2.paa";
        model = "\rhssaf\addons\rhssaf_m_weapon_scorpion\magazine\rhs_10rnd_scorpion_mag";
        modelSpecial = "\rhssaf\addons\rhssaf_m_weapon_scorpion\mag_proxies\rhs_mag_765x17_scorpion_10rnd";
    };
    class rhsgref_30rnd_556x45_m21: CA_Magazine {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_RHSSAF_30RND_556X45_M21_DISPLAYNAME";
        displaynameshort = "$STR_RHSSAF_30RND_556X45_M21_DISPLAYNAMESHORT";
        picture = "\rhssaf\addons\rhssaf_c_weapons\icons\m_m21mag_icon_ca.paa";
        ammo = "rhs_ammo_556x45_M855_Ball";
        count = 30;
        initSpeed = 925;
        mass = 10.35;
        tracersEvery = 0;
        lastRoundsTracer = 0;
        descriptionshort = "Caliber: 5.56x45mm <br />Rounds: 30<br />Used in: M21 Series Rifles";
        magazineGroup[] = {"rhs_m21_mag_group"};
        model = "\rhssaf\addons\rhssaf_m_weapon_m21\magazine\rhs_30rnd_m21_mag";
    };
    class rhsgref_30rnd_556x45_m21_t: rhsgref_30rnd_556x45_m21 {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        tracersEvery = 3;
        lastRoundsTracer = 0;
        displayName = "$STR_RHSSAF_30RND_556X45_M21_T_DISPLAYNAME";
        displaynameshort = "$STR_RHSSAF_30RND_556X45_M21_T_DISPLAYNAMESHORT";
        descriptionshort = "Caliber: 5.56x45mm Tracer<br />Rounds: 30<br />Used in: M21 Series Rifles";
        magazineGroup[] = {"rhs_m21_mag_group"};
    };
    class rhssaf_30rnd_556x45_EPR_G36: 30Rnd_556x45_Stanag {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        ammo = "rhs_ammo_556x45_M855A1_Ball";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm <br />Rounds: 30<br />Used in: G36 Rifles";
        displayname = "$STR_RHSSAF_30RND_556X45_EPR_G36_DISPLAYNAME";
        magazineGroup[] = {"G36_maggroup"};
        initspeed = 920;
        mass = 5.95;
        lastroundstracer = 0;
        tracersevery = 0;
        displaynameshort = "$STR_RHSSAF_30RND_556X45_EPR_G36_DISPLAYNAMESHORT";
        model = "\rhssaf\addons\rhssaf_m_weapon_g36\magazine\magazine_556.p3d";
        modelSpecial = "rhssaf\addons\rhssaf_m_weapon_g36\mag_proxies\rhs_mag_556x45_G36_30rnd";
        modelSpecialIsProxy = 1;
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhssaf_30rnd_556x45_EPR_G36_ca.paa";
    };
    class rhssaf_30rnd_556x45_SOST_G36: 30Rnd_556x45_Stanag {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        ammo = "rhs_ammo_556x45_Mk318_Ball";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm <br />Rounds: 30<br />Used in: G36 Rifles";
        displayname = "$STR_RHSSAF_30RND_556X45_SOST_G36_DISPLAYNAME";
        magazineGroup[] = {"G36_maggroup"};
        initspeed = 910;
        mass = 5.95;
        lastroundstracer = 0;
        tracersevery = 0;
        displaynameshort = "$STR_RHSSAF_30RND_556X45_SOST_G36_DISPLAYNAMESHORT";
        model = "\rhssaf\addons\rhssaf_m_weapon_g36\magazine\magazine_556.p3d";
        modelSpecial = "rhssaf\addons\rhssaf_m_weapon_g36\mag_proxies\rhs_mag_556x45_G36_30rnd";
        modelSpecialIsProxy = 1;
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhssaf_30rnd_556x45_SOST_G36_ca.paa";
    };
    class rhssaf_30rnd_556x45_SPR_G36: 30Rnd_556x45_Stanag {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        ammo = "rhs_ammo_556x45_Mk262_Ball";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm <br />Rounds: 30<br />Used in: G36 Rifles";
        displayname = "$STR_RHSSAF_30RND_556X45_SPR_G36_DISPLAYNAME";
        magazineGroup[] = {"G36_maggroup"};
        initspeed = 818.2;
        mass = 5.95;
        lastroundstracer = 0;
        tracersevery = 0;
        displaynameshort = "$STR_RHSSAF_30RND_556X45_SPR_G36_DISPLAYNAMESHORT";
        model = "\rhssaf\addons\rhssaf_m_weapon_g36\magazine\magazine_556.p3d";
        modelSpecial = "rhssaf\addons\rhssaf_m_weapon_g36\mag_proxies\rhs_mag_556x45_G36_30rnd";
        modelSpecialIsProxy = 1;
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhssaf_30rnd_556x45_SPR_G36_ca.paa";
    };
    class rhssaf_100rnd_556x45_EPR_G36: 30Rnd_556x45_Stanag {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        ammo = "rhs_ammo_556x45_M855A1_Ball";
        count = 100;
        descriptionshort = "Caliber: 5.56x45mm <br />Rounds: 100<br />Used in: G36 Series Rifles";
        displayname = "$STR_RHSSAF_100RND_556X45_EPR_G36_DISPLAYNAME";
        magazineGroup[] = {"G36_maggroup"};
        initspeed = 920;
        mass = 35.24;
        lastroundstracer = 0;
        tracersevery = 0;
        displaynameshort = "$STR_RHSSAF_100RND_556X45_EPR_G36_DISPLAYNAMESHORT";
        model = "rhsusf\addons\rhsusf_weapons\magazines\rhs_cmag";
        modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_cmag_100rnd";
        modelSpecialIsProxy = 1;
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhssaf_100rnd_556x45_EPR_G36_ca.paa";
    };
    class rhssaf_30rnd_556x45_Tracers_G36: 30Rnd_556x45_Stanag {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        ammo = "rhs_ammo_556x45_M855_Ball_Red";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm <br />Rounds: 30<br />Used in: G36 Series Rifles";
        displayname = "$STR_RHSSAF_30RND_556X45_TRACERS_G36_DISPLAYNAME";
        magazineGroup[] = {"G36_maggroup"};
        initspeed = 920;
        mass = 5.95;
        lastroundstracer = 0;
        tracersevery = 3;
        displaynameshort = "$STR_RHSSAF_30RND_556X45_TRACERS_G36_DISPLAYNAMESHORT";
        model = "\rhssaf\addons\rhssaf_m_weapon_g36\magazine\magazine_556.p3d";
        modelSpecial = "rhssaf\addons\rhssaf_m_weapon_g36\mag_proxies\rhs_mag_556x45_G36_30rnd";
        modelSpecialIsProxy = 1;
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhssaf_30rnd_556x45_Tracers_G36_ca.paa";
    };
    class rhssaf_30rnd_556x45_TDIM_G36: 30Rnd_556x45_Stanag {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        ammo = "rhssaf_ammo_556x45_Ball_Tracer_Dim";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm <br />Rounds: 30<br />Used in: G36 Series Rifles";
        displayname = "$STR_RHSSAF_30RND_556X45_TDIM_G36_DISPLAYNAME";
        magazineGroup[] = {"G36_maggroup"};
        initspeed = 920;
        mass = 5.95;
        lastroundstracer = 0;
        tracersevery = 3;
        displaynameshort = "$STR_RHSSAF_30RND_556X45_TDIM_G36_DISPLAYNAMESHORT";
        model = "\rhssaf\addons\rhssaf_m_weapon_g36\magazine\magazine_556.p3d";
        modelSpecial = "rhssaf\addons\rhssaf_m_weapon_g36\mag_proxies\rhs_mag_556x45_G36_30rnd";
        modelSpecialIsProxy = 1;
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhssaf_30rnd_556x45_TDIM_G36_ca.paa";
    };
    class rhssaf_30rnd_556x45_MDIM_G36: 30Rnd_556x45_Stanag {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        ammo = "rhssaf_ammo_556x45_Ball_Tracer_Dim";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm <br />Rounds: 30<br />Used in: G36 Series Rifles";
        displayname = "$STR_RHSSAF_30RND_556X45_MDIM_G36_DISPLAYNAME";
        magazineGroup[] = {"G36_maggroup"};
        initspeed = 920;
        mass = 5.95;
        lastroundstracer = 0;
        tracersevery = 3;
        displaynameshort = "$STR_RHSSAF_30RND_556X45_MDIM_G36_DISPLAYNAMESHORT";
        model = "\rhssaf\addons\rhssaf_m_weapon_g36\magazine\magazine_556.p3d";
        modelSpecial = "rhssaf\addons\rhssaf_m_weapon_g36\mag_proxies\rhs_mag_556x45_G36_30rnd";
        modelSpecialIsProxy = 1;
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhssaf_30rnd_556x45_MDIM_G36_ca.paa";
    };
    class rhs_30Rnd_545x39_AK;
    class rhssaf_30Rnd_762x39mm_M67: rhs_30Rnd_545x39_AK {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhssaf_30Rnd_762x39mm_M67_ca.paa";
        displayName = "$STR_RHSSAF_30RND_762X39_M67_DISPLAYNAME";
        descriptionShort = "$STR_RHSSAF_30RND_762X39_M67_DESC";
        displayNameShort = "M67";
        modelSpecial = "rhssaf\addons\rhssaf_m_weapon_m70\mag_proxies\rhs_mag_762x39_zastava_steel_30rnd";
        model = "\rhssaf\addons\rhssaf_m_weapon_m70\magazines\rhs_762x39_zastava_mag";
        modelSpecialIsProxy = 1;
        ammo = "rhs_B_762x39_Ball";
        count = 30;
        initSpeed = 718;
        mass = 13.53;
    };
    class rhssaf_30Rnd_762x39mm_M78_tracer: rhssaf_30Rnd_762x39mm_M67 {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        tracersEvery = 3;
        lastroundstracer = 0;
        ammo = "rhs_B_762x39_Tracer";
        displayName = "$STR_RHSSAF_30RND_762X39_M78_TRACER_DISPLAYNAME";
        displayNameShort = "M78 Tracer";
        descriptionShort = "$STR_RHSSAF_30RND_762X39_M78_TRACER_DESC";
    };
    class rhssaf_30Rnd_762x39_M82_api: rhssaf_30Rnd_762x39mm_M67 {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        tracersevery = 1;
        lastroundstracer = 1;
        ammo = "rhssaf_ammo_762x39_m82_api";
        displayname = "$STR_RHSSAF_30RND_762X39_M82_API_DISPLAYNAME";
        displaynameshort = "$STR_RHSSAF_30RND_762X39_M82_API_DISPLAYNAMESHORT";
        descriptionshort = "$STR_RHSSAF_30RND_762X39_M82_API_DESCRIPTIONSHORT";
    };
    class rhs_mag_20Rnd_SCAR_762x51_m80_ball;
    class rhs_mag_20Rnd_SCAR_762x51_m80a1_epr;
    class rhs_mag_20Rnd_SCAR_762x51_m62_tracer;
    class rhs_mag_20Rnd_SCAR_762x51_m61_ap;
    class rhs_mag_20Rnd_SCAR_762x51_m118_special;
    class rhs_mag_20Rnd_SCAR_762x51_mk316_special;
    class rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk: rhs_mag_20Rnd_SCAR_762x51_m80_ball {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "20rnd SCAR M80 (black)";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk_ca.paa";
        model = "rhssaf\addons\rhssaf_m_weapon_scar\magazine\rhs_20rnd_scarh_mag.p3d";
        modelSpecial = "rhssaf\addons\rhssaf_m_weapon_scar\mag_proxies\rhs_mag_762x51_scarh_20rnd";
    };
    class rhs_mag_20Rnd_SCAR_762x51_m80a1_epr_bk: rhs_mag_20Rnd_SCAR_762x51_m80a1_epr {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "20rnd SCAR M80A1 EPR (black)";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk_ca.paa";
        model = "rhssaf\addons\rhssaf_m_weapon_scar\magazine\rhs_20rnd_scarh_mag.p3d";
        modelSpecial = "rhssaf\addons\rhssaf_m_weapon_scar\mag_proxies\rhs_mag_762x51_scarh_20rnd";
    };
    class rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk: rhs_mag_20Rnd_SCAR_762x51_m62_tracer {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "20rnd SCAR M62 Tracer (black)";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk_ca.paa";
        model = "rhssaf\addons\rhssaf_m_weapon_scar\magazine\rhs_20rnd_scarh_mag.p3d";
        modelSpecial = "rhssaf\addons\rhssaf_m_weapon_scar\mag_proxies\rhs_mag_762x51_scarh_20rnd";
    };
    class rhs_mag_20Rnd_SCAR_762x51_m61_ap_bk: rhs_mag_20Rnd_SCAR_762x51_m61_ap {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "20rnd SCAR M61 AP (black)";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk_ca.paa";
        model = "rhssaf\addons\rhssaf_m_weapon_scar\magazine\rhs_20rnd_scarh_mag.p3d";
        modelSpecial = "rhssaf\addons\rhssaf_m_weapon_scar\mag_proxies\rhs_mag_762x51_scarh_20rnd";
    };
    class rhs_mag_20Rnd_SCAR_762x51_m118_special_bk: rhs_mag_20Rnd_SCAR_762x51_m118_special {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "20rnd SCAR M118 Ball (black)";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk_ca.paa";
        model = "rhssaf\addons\rhssaf_m_weapon_scar\magazine\rhs_20rnd_scarh_mag.p3d";
        modelSpecial = "rhssaf\addons\rhssaf_m_weapon_scar\mag_proxies\rhs_mag_762x51_scarh_20rnd";
    };
    class rhs_mag_20Rnd_SCAR_762x51_mk316_special_bk: rhs_mag_20Rnd_SCAR_762x51_mk316_special {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "20rnd SCAR Mk316 Mod 0 (black)";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk_ca.paa";
        model = "rhssaf\addons\rhssaf_m_weapon_scar\magazine\rhs_20rnd_scarh_mag.p3d";
        modelSpecial = "rhssaf\addons\rhssaf_m_weapon_scar\mag_proxies\rhs_mag_762x51_scarh_20rnd";
    };
    class rhsgref_10Rnd_792x57_m76: CA_Magazine {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_RHSSAF_10RND_792X57_M76_DISPLAYNAME";
        displaynameshort = "$STR_RHSSAF_10RND_792X57_M76_DISPLAYNAMESHORT";
        picture = "\rhssaf\addons\rhssaf_c_weapons\icons\m_m76mag_icon_ca.paa";
        ammo = "rhs_ammo_792x57_Ball";
        count = 10;
        initSpeed = 730;
        tracersEvery = 0;
        lastRoundsTracer = 0;
        descriptionshort = "Caliber: 7.92x57mm Mauser <br />Rounds: 10<br />Used in: M76 Rifle";
        magazineGroup[] = {"rhs_m76_mag_group"};
        mass = 6.94;
        model = "\rhssaf\addons\rhssaf_m_weapon_m76\magazine\rhs_10rnd_m76_mag";
    };
    class rhssaf_10Rnd_792x57_m76_tracer: CA_Magazine {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_RHSSAF_10RND_792X57_M76_TRACER_DISPLAYNAME";
        displaynameshort = "$STR_RHSSAF_10RND_792X57_M76_TRACER_DISPLAYNAMESHORT";
        picture = "\rhssaf\addons\rhssaf_c_weapons\icons\m_m76mag_icon_ca.paa";
        ammo = "rhs_ammo_792x57_Ball";
        count = 10;
        initSpeed = 730;
        tracersEvery = 3;
        lastRoundsTracer = 0;
        descriptionshort = "Caliber: 7.92x57mm Mauser/Tracer <br />Rounds: 10<br />Used in: M76 Rifle";
        magazineGroup[] = {"rhs_m76_mag_group"};
        mass = 6.94;
        model = "\rhssaf\addons\rhssaf_m_weapon_m76\magazine\rhs_10rnd_m76_mag";
    };
    class rhs_100Rnd_762x54mmR;
    class rhssaf_250Rnd_762x54R: rhs_100Rnd_762x54mmR {
        displayName = "$STR_RHSSAF_250RND_762X54R_DISPLAYNAME";
        descriptionshort = "Caliber: 7.62x54Rmm <br />Rounds: 250<br />Used in: M84 LMG";
        ammo = "rhs_B_762x54_Ball";
        count = 250;
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        mass = 128.7;
    };
    class rhs_rpg26_mag;
    class rhs_m80_mag: rhs_rpg26_mag {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        displayName = "$STR_RHS_M80_MAG_DISPLAYNAME";
        ammo = "rhs_ammo_m80_rocket";
        descriptionshort = "Caliber: 64mm HEAT <br />Rounds: 1<br />Preloaded in: RBR M80";
        scope = 1;
        scopeArsenal = 0;
        initSpeed = 190;
        mass = 31.24;
    };
    class rhssaf_mag_m73_HE: 32Rnd_155mm_Mo_shells {
        scope = 2;
        displayName = "M73 HE";
        displayNameShort = "HE";
        ammo = "rhssaf_mortar_M73_HE";
        count = 10;
        initSpeed = 126.5;
    };
    class ATMine_Range_Mag;
    class rhssaf_mine_pma3_mag: ATMine_Range_Mag {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        mass = 3.96;
        ammo = "rhssaf_mine_pma3_ammo";
        picture = "\rhssaf\addons\rhssaf_c_weapons\icons\rhssaf_mine_gear_pma3_ca.paa";
        displayName = "$STR_RHSSAF_PMA3_DISPLAYNAME";
        model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\pma\rhssaf_pma3_d";
        descriptionShort = "$STR_RHSSAF_PMA3_DESCRIPTIONSHORT";
        class Library {
            libTextDesc = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine_Library0";
        };
        descriptionUse = "$STR_A3_use_mine";
    };
    class rhssaf_mine_tma4_mag: ATMine_Range_Mag {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        mass = 69.3;
        ammo = "rhssaf_mine_tma4_ammo";
        picture = "\rhssaf\addons\rhssaf_c_weapons\icons\rhssaf_mine_gear_tma4_ca.paa";
        displayName = "$STR_RHSSAF_TMA4_DISPLAYNAME";
        model = "\rhssaf\addons\rhssaf_m_explosives\mines_at\tma4\rhssaf_tma4_d";
        descriptionShort = "$STR_RHSSAF_TMA4_DESCRIPTIONSHORT";
        class Library {
            libTextDesc = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine_Library0";
        };
        descriptionUse = "$STR_A3_use_mine";
    };
    class rhssaf_mine_mrud_a_mag: ATMine_Range_Mag {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        mass = 48.4;
        ammo = "rhssaf_mine_mrud_a_ammo";
        picture = "\rhssaf\addons\rhssaf_c_weapons\icons\rhssaf_mine_gear_mrud_a_ca.paa";
        displayName = "$STR_RHSSAF_MRUD_A_DISPLAYNAME";
        model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_a_d";
        descriptionShort = "$STR_RHSSAF_MRUD_A_DESCRIPTIONSHORT";
        class Library {
            libTextDesc = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine_Library0";
        };
        descriptionUse = "$STR_A3_use_mine";
    };
    class rhssaf_mine_mrud_b_mag: rhssaf_mine_mrud_a_mag {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        ammo = "rhssaf_mine_mrud_b_ammo";
        picture = "\rhssaf\addons\rhssaf_c_weapons\icons\rhssaf_mine_gear_mrud_a_ca.paa";
        displayName = "$STR_RHSSAF_MRUD_B_DISPLAYNAME";
        model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_a_d";
        descriptionShort = "$STR_RHSSAF_MRUD_A_DESCRIPTIONSHORT";
        class Library {
            libTextDesc = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine_Library0";
        };
        descriptionUse = "$STR_A3_use_mine";
    };
    class rhssaf_mine_mrud_c_mag: rhssaf_mine_mrud_a_mag {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        ammo = "rhssaf_mine_mrud_b_ammo";
        picture = "\rhssaf\addons\rhssaf_c_weapons\icons\rhssaf_mine_gear_mrud_a_ca.paa";
        displayName = "$STR_RHSSAF_MRUD_C_DISPLAYNAME";
        model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_a_d";
        descriptionShort = "$STR_RHSSAF_MRUD_A_DESCRIPTIONSHORT";
        class Library {
            libTextDesc = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine_Library0";
        };
        descriptionUse = "$STR_A3_use_mine";
    };
    class rhssaf_mine_mrud_d_mag: rhssaf_mine_mrud_a_mag {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        ammo = "rhssaf_mine_mrud_d_ammo";
        picture = "\rhssaf\addons\rhssaf_c_weapons\icons\rhssaf_mine_gear_mrud_d_ca.paa";
        displayName = "$STR_RHSSAF_MRUD_D_DISPLAYNAME";
        model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_b_d";
        descriptionShort = "$STR_RHSSAF_MRUD_D_DESCRIPTIONSHORT";
    };
    class rhssaf_tm100_mag: CA_Magazine {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        displayName = "$STR_RHSSAF_TM100_DISPLAYNAME";
        picture = "\rhssaf\addons\rhssaf_c_weapons\icons\rhssaf_tm100_icon_ca.paa";
        model = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm100_d";
        descriptionShort = "$STR_A3_cfgMagazines_DemoCharge1";
        class Library {
            libTextDesc = "$STR_A3_cfgMagazines_DemoCharge_Library0";
        };
        descriptionUse = "$STR_A3_use_charge";
        type = "2*		256";
        allowedSlots[] = {901, 701};
        value = 5;
        ammo = "rhssaf_tm100_ammo";
        mass = 3.3;
        count = 1;
        initSpeed = 0;
        maxLeadSpeed = 0;
        nameSoundWeapon = "satchelcharge";
        nameSound = "satchelcharge";
        weaponPoolAvailable = 1;
        useAction = 1;
        useActionTitle = "$STR_ACTION_PUTBOMB";
        sound[] = {"A3\sounds_f\dummysound", 0.00031622776, 1, 10};
    };
    class rhssaf_tm200_mag: rhssaf_tm100_mag {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        mass = 6.6;
        displayName = "$STR_RHSSAF_TM200_DISPLAYNAME";
        picture = "\rhssaf\addons\rhssaf_c_weapons\icons\rhssaf_tm200_icon_ca.paa";
        model = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm200_d";
        ammo = "rhssaf_tm200_ammo";
        descriptionShort = "$STR_A3_cfgMagazines_DemoCharge1";
        class Library {
            libTextDesc = "$STR_A3_cfgMagazines_DemoCharge_Library0";
        };
        allowedSlots[] = {901, 701};
    };
    class rhssaf_tm500_mag: rhssaf_tm100_mag {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        mass = 14.3;
        displayName = "$STR_RHSSAF_TM500_DISPLAYNAME";
        picture = "\rhssaf\addons\rhssaf_c_weapons\icons\rhssaf_tm500_icon_ca.paa";
        model = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm500_d";
        ammo = "rhssaf_tm500_ammo";
        descriptionShort = "$STR_A3_cfgMagazines_DemoCharge1";
        class Library {
            libTextDesc = "$STR_A3_cfgMagazines_DemoCharge_Library0";
        };
        allowedSlots[] = {901};
    };
    class HandGrenade;
    class rhssaf_mag_br_m75: HandGrenade {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        ammo = "rhssaf_ammo_br_m75";
        displayName = "BR M75";
        displayNameShort = "HE Grenade";
        descriptionshort = "Type: Defensive Fragmentation Grenade<br />Rounds: 1<br />Used in: Hand";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhssaf_mag_br_m75_ca.paa";
        model = "\rhssaf\addons\rhssaf_m_explosives\grenades\br_m75\rhssaf_br_m75";
        mass = 4.33;
    };
    class rhssaf_mag_br_m84: rhssaf_mag_br_m75 {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        ammo = "rhssaf_ammo_br_m84";
        displayName = "BR M84";
        displayNameShort = "HE Grenade";
        descriptionshort = "Type: Defensive Fragmentation Grenade<br />Rounds: 1<br />Used in: Hand";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhssaf_mag_br_m84_ca.paa";
        model = "\rhssaf\addons\rhssaf_m_explosives\grenades\br_m84\rhssaf_br_m84";
    };
    class rhssaf_mag_brd_m83_white: HandGrenade {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        ammo = "rhssaf_ammo_brd_m83_white";
        displayName = "BRD M83 (White)";
        displayNameShort = "White Smoke";
        descriptionshort = "Type: Smoke Grenade White<br />Rounds: 1<br />Used in: Hand";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhssaf_mag_brd_m83_white_ca.paa";
        model = "\rhssaf\addons\rhssaf_m_explosives\grenades\brd_m83\rhssaf_brd_m83";
        nameSoundWeapon = "smokeshell";
        nameSound = "smokeshell";
    };
    class rhssaf_mag_brd_m83_yellow: HandGrenade {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        ammo = "rhssaf_ammo_brd_m83_yellow";
        displayName = "BRD M83 (Yellow)";
        displayNameShort = "Yellow Smoke";
        descriptionshort = "Type: Smoke Grenade Yellow<br />Rounds: 1<br />Used in: Hand";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhssaf_mag_brd_m83_yellow_ca.paa";
        model = "\rhssaf\addons\rhssaf_m_explosives\grenades\brd_m83\rhssaf_brd_m83_y";
        nameSoundWeapon = "smokeshell";
        nameSound = "smokeshell";
    };
    class rhssaf_mag_brd_m83_green: HandGrenade {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        ammo = "rhssaf_ammo_brd_m83_green";
        displayName = "BRD M83 (Green)";
        displayNameShort = "Green Smoke";
        descriptionshort = "Type: Smoke Grenade Green<br />Rounds: 1<br />Used in: Hand";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhssaf_mag_brd_m83_green_ca.paa";
        model = "\rhssaf\addons\rhssaf_m_explosives\grenades\brd_m83\rhssaf_brd_m83_g";
        nameSoundWeapon = "smokeshell";
        nameSound = "smokeshell";
    };
    class rhssaf_mag_brd_m83_red: HandGrenade {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        ammo = "rhssaf_ammo_brd_m83_red";
        displayName = "BRD M83 (Red)";
        displayNameShort = "Red Smoke";
        descriptionshort = "Type: Smoke Grenade Red<br />Rounds: 1<br />Used in: Hand";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhssaf_mag_brd_m83_red_ca.paa";
        model = "\rhssaf\addons\rhssaf_m_explosives\grenades\brd_m83\rhssaf_brd_m83_r";
        nameSoundWeapon = "smokeshell";
        nameSound = "smokeshell";
    };
    class rhssaf_mag_brd_m83_blue: HandGrenade {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        ammo = "rhssaf_ammo_brd_m83_blue";
        displayName = "BRD M83 (Blue)";
        displayNameShort = "Blue Smoke";
        descriptionshort = "Type: Smoke Grenade Blue<br />Rounds: 1<br />Used in: Hand";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhssaf_mag_brd_m83_blue_ca.paa";
        model = "\rhssaf\addons\rhssaf_m_explosives\grenades\brd_m83\rhssaf_brd_m83_b";
        nameSoundWeapon = "smokeshell";
        nameSound = "smokeshell";
    };
    class rhssaf_mag_brd_m83_orange: HandGrenade {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        ammo = "rhssaf_ammo_brd_m83_orange";
        displayName = "BRD M83 (Orange)";
        displayNameShort = "Orange Smoke";
        descriptionshort = "Type: Smoke Grenade Orange<br />Rounds: 1<br />Used in: Hand";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhssaf_mag_brd_m83_orange_ca.paa";
        model = "\rhssaf\addons\rhssaf_m_explosives\grenades\brd_m83\rhssaf_brd_m83_o";
        nameSoundWeapon = "smokeshell";
        nameSound = "smokeshell";
    };
    class rhssaf_mag_rshb_p98: HandGrenade {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        ammo = "rhssaf_ammo_rshb_p98";
        displayName = "RShB P98";
        displayNameShort = "Flashbang";
        descriptionshort = "Type: Flashbang grenade<br />Rounds: 1<br />Used in: Hand";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhssaf_mag_rshb_p98_ca.paa";
        model = "\rhssaf\addons\rhssaf_m_explosives\grenades\rshb_p98\rhssaf_rshb_p98";
        mass = 4.2;
    };
    class rhssaf_mag_brz_m88: HandGrenade {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        ammo = "rhssaf_ammo_brz_m88";
        displayName = "BRZ M88";
        displayNameShort = "Incendiary Grenade";
        descriptionshort = "Type: Incendiary Grenade<br />Rounds: 1<br />Used in: Hand";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhssaf_mag_brz_m88_ca.paa";
        model = "\rhssaf\addons\rhssaf_m_explosives\grenades\brz_m88\rhssaf_brz_m88";
        mass = 11.54;
    };
    class rhssaf_mag_brk_m79: HandGrenade {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        ammo = "rhssaf_ammo_brk_m79";
        displayName = "BRK M79";
        displayNameShort = "AT Grenade";
        descriptionshort = "Type: Anti Armor Grenade<br />Rounds: 1<br />Used in: Hand";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhssaf_mag_brk_m79_ca.paa";
        model = "\rhssaf\addons\rhssaf_m_explosives\grenades\brk_m79\rhssaf_brk_m79";
        mass = 23.54;
        initSpeed = 15;
    };
    class rhssaf_mag_ttm_m60: CA_Magazine {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        scopeCurator = 0;
        initSpeed = 70;
        model = "\rhssaf\addons\rhssaf_m_explosives\rifle_grenades\ttm_m60\rhssaf_ttm_m60_proxy";
        modelSpecial = "\rhssaf\addons\rhssaf_m_explosives\rifle_grenades\ttm_m60\rhssaf_ttm_m60_proxy";
        modelSpecialIsProxy = 1;
        displayName = "TTM M60";
        ammo = "rhssaf_ammo_ttm_m60";
        count = 1;
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhssaf_mag_ttm_m60_ca.paa";
    };
    class rhssaf_mag_tkm_m60: CA_Magazine {
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 1;
        scopeCurator = 0;
        initSpeed = 70;
        model = "\rhssaf\addons\rhssaf_m_explosives\rifle_grenades\tkm_m60\rhssaf_tkm_m60_proxy";
        modelSpecial = "\rhssaf\addons\rhssaf_m_explosives\rifle_grenades\tkm_m60\rhssaf_tkm_m60_proxy";
        modelSpecialIsProxy = 1;
        displayName = "TKM M60";
        ammo = "rhssaf_ammo_tkm_m60";
        count = 1;
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhssaf_mag_tkm_m60_ca.paa";
    };
};
class CfgMagazineWells {
    class CBA_32ACP_Vz61 {
        RHSSAF_Magazines[] = {"rhsgref_20rnd_765x17_vz61", "rhsgref_10rnd_765x17_vz61"};
    };
    class CZ99_9x19_PARA {
        RHSSAF_Magazines[] = {"rhssaf_mag_15Rnd_9x19_FMJ", "rhssaf_mag_15Rnd_9x19_JHP"};
    };
    class CBA_556x45_G36 {
        RHSSAF_Magazines[] = {
            "rhssaf_30rnd_556x45_EPR_G36",
            "rhssaf_30rnd_556x45_SOST_G36",
            "rhssaf_30rnd_556x45_SPR_G36",
            "rhssaf_30rnd_556x45_Tracers_G36",
            "rhssaf_30rnd_556x45_MDIM_G36",
            "rhssaf_30rnd_556x45_TDIM_G36",
            "rhssaf_100rnd_556x45_EPR_G36"
        };
    };
    class CBA_556x45_M21 {
        RHSSAF_Magazines[] = {"rhsgref_30rnd_556x45_m21", "rhsgref_30rnd_556x45_m21_t"};
    };
    class AK_762x39 {
        RHSSAF_Magazines[] = {"rhssaf_30Rnd_762x39mm_M67", "rhssaf_30Rnd_762x39mm_M78_tracer", "rhssaf_30Rnd_762x39_M82_api"};
    };
    class CBA_762x39_AK {
        RHSSAF_Magazines[] = {"rhssaf_30Rnd_762x39mm_M67", "rhssaf_30Rnd_762x39mm_M78_tracer", "rhssaf_30Rnd_762x39_M82_api"};
    };
    class CBA_762x51_SCAR {
        RHSSAF_Magazines[] = {
            "rhs_mag_20Rnd_SCAR_762x51_m61_ap_bk",
            "rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk",
            "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
            "rhs_mag_20Rnd_SCAR_762x51_m80a1_epr_bk",
            "rhs_mag_20Rnd_SCAR_762x51_m118_special_bk",
            "rhs_mag_20Rnd_SCAR_762x51_mk316_special_bk"
        };
    };
    class CBA_792x57_M76 {
        RHSSAF_Magazines[] = {"rhsgref_10Rnd_792x57_m76"};
    };
    class AK_Rifle_Grenades {
        RHSSAF_RG_Magazines[] = {"rhssaf_mag_ttm_m60", "rhssaf_mag_tkm_m60"};
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class acc_mtz {
                file = "\rhssaf\addons\rhssaf_c_weapons\scripts\rhs_mtz.sqf";
                description = "MTZ mounting handler";
            };
            class acc_mtz_handler {
                file = "\rhssaf\addons\rhssaf_c_weapons\scripts\rhs_mtz_dismount.sqf";
                description = "MTZ dismounting handler";
            };
            class rkg3_impact {
                file = "\rhssaf\addons\rhssaf_c_weapons\scripts\rhs_rkg3_impact.sqf";
            };
            class virtualAmmoBoxSAF {
                file = "\rhssaf\addons\rhssaf_c_weapons\scripts\virtualAmmoBox.sqf";
                description = "[nameOfObject,type (type number: 0 - all gear, 1 - ammo only)] call rhs_fnc_virtualAmmoBoxSAF, make a object virtual ammo box with SAF gear inside";
            };
            class mine_damage_handler {
                file = "\rhssaf\addons\rhssaf_c_weapons\scripts\rhs_apers_mine_dmg_handler.sqf";
                description = "AP mine damage handler";
            };
        };
    };
};
