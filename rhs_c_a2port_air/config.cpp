class DefaultEventhandlers;
class CfgPatches {
    class rhs_c_a2port_air {
        units[] = {
            "RHS_Mi24P_vvs",
            "RHS_Mi24V_vvs",
            "RHS_Mi24P_CAS_vvs",
            "RHS_Mi24P_AT_vvs",
            "RHS_Mi24V_UPK23_vvs",
            "RHS_Mi24V_FAB_vvs",
            "RHS_Mi24V_AT_vvs",
            "RHS_Mi24Vt_vvs",
            "RHS_Mi24P_vvsc",
            "RHS_Mi24V_vvsc",
            "RHS_Mi24P_CAS_vvsc",
            "RHS_Mi24P_AT_vvsc",
            "RHS_Mi24V_UPK23_vvsc",
            "RHS_Mi24V_FAB_vvsc",
            "RHS_Mi24V_AT_vvsc",
            "RHS_Mi24Vt_vvsc",
            "RHS_Mi24P_vdv",
            "RHS_Mi24V_vdv",
            "RHS_Mi24P_CAS_vdv",
            "RHS_Mi24V_UPK23_vdv",
            "RHS_Mi24V_FAB_vdv",
            "RHS_Mi24V_AT_vdv",
            "RHS_Mi8AMTSh_vvs",
            "RHS_Mi8AMTSh_UPK23_vvs",
            "RHS_Mi8AMTSh_FAB_vvs",
            "RHS_Mi8MTV3_vvs",
            "RHS_Mi8MTV3_UPK23_vvs",
            "RHS_Mi8MTV3_FAB_vvs",
            "RHS_Mi8MTV3_Cargo_vvs",
            "RHS_Mi8MTV3_heavy_vvs",
            "RHS_Mi8AMT_vvs",
            "RHS_Mi8mt_vvs",
            "RHS_Mi8mt_Cargo_vvs",
            "RHS_Mi8T_vvs",
            "RHS_Mi8MTV3_vdv",
            "RHS_Mi8MTV3_UPK23_vdv",
            "RHS_Mi8MTV3_FAB_vdv",
            "RHS_Mi8MTV3_Cargo_vdv",
            "RHS_Mi8MTV3_heavy_vdv",
            "RHS_Mi8AMT_vdv",
            "RHS_Mi8mt_vdv",
            "RHS_Mi8mt_Cargo_vdv",
            "RHS_Mi8T_vdv",
            "RHS_Mi8AMTSh_vvsc",
            "RHS_Mi8AMTSh_UPK23_vvsc",
            "RHS_Mi8AMTSh_FAB_vvsc",
            "RHS_Mi8MTV3_vvsc",
            "RHS_Mi8MTV3_UPK23_vvsc",
            "RHS_Mi8MTV3_FAB_vvsc",
            "RHS_Mi8MTV3_Cargo_vvsc",
            "RHS_Mi8MTV3_heavy_vvsc",
            "RHS_Mi8AMT_vvsc",
            "RHS_Mi8mt_vvsc",
            "RHS_Mi8mt_Cargo_vvsc",
            "RHS_Mi8T_vvsc",
            "RHS_Mi8mt_vv",
            "RHS_Mi8mt_Cargo_vv",
            "RHS_Mi8T_vv",
            "RHS_Mi8amt_civilian",
            "RHS_Mi8T_civilian",
            "RHS_Su25SM_vvs",
            "RHS_Su25SM_vvsc",
            "RHS_Su25SM_KH29_vvs",
            "RHS_Su25SM_KH29_vvsc",
            "RHS_Su25SM_CAS_vvs",
            "RHS_Su25SM_CAS_vvsc",
            "RHS_Su25SM_Cluster_vvs",
            "RHS_Su25SM_Cluster_vvsc",
            "RHS_Ka52_vvs",
            "RHS_Ka52_vvsc",
            "RHS_Ka52_UPK23_vvs",
            "RHS_Ka52_UPK23_vvsc",
            "rhs_pchela1t_vvs",
            "rhs_pchela1t_vvsc",
            "rhs_d6_Parachute",
            "rhs_d6_Parachute_backpack"
        };
        requiredVersion = 1.62;
        requiredAddons[] = {"rhs_c_airweapons", "rhs_c_heavyweapons", "rhs_main"};
        name = "A2 ported air";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
    class RHS_A2_AirImport {
        units[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {};
    };
};
class DefaultVehicleSystemsDisplayManagerLeft {
    class components;
};
class DefaultVehicleSystemsDisplayManagerRight {
    class components;
};
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        RHS_HIND_Pilot = "RHS_HIND_Pilot";
        RHS_HIND_Gunner = "RHS_HIND_Gunner";
        RHS_HIND_Cargo = "RHS_HIND_Cargo";
        RHS_HIND_Cargo_Enter = "GetInHelicopterCargoRfl";
        RHS_HIND_Cargo_Exit = "GetOutHelicopterCargoRfl";
        RHS_Mi17_Pilot = "RHS_Mi17_Pilot";
        RHS_Mi17_Gunner = "RHS_Mi17_Gunner";
        RHS_Mi17v2_Gunner = "RHS_Mi17v2_Gunner";
        RHS_Mi17_Cargo01 = "RHS_Mi17_Cargo01";
        RHS_Mi17_Cargo02 = "RHS_Mi17_Cargo02";
        RHS_Mi8_Pilot = "RHS_Mi8_Pilot";
        RHS_Mi8_PilotV2 = "RHS_Mi8_PilotV2";
        RHS_Mi8_Gunner = "RHS_Mi8_Gunner";
        RHS_Mi8_GunnerFront = "RHS_Mi8_GunnerFront";
        RHS_Mi8_Cargo = "RHS_Mi8_Cargo";
        RHS_SU25_Pilot = "RHS_SU25_Pilot";
        RHS_Ka52_Pilot = "RHS_Ka52_Pilot";
        RHS_Ka52_Pilot_Eject = "RHS_ka52_Pilot_Eject_Wait";
        RHS_Ka52_Gunner = "RHS_Ka52_Gunner";
        RHS_D6_Pilot = "RHS_D6_Pilot_Init";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class RHS_SU25_Pilot: Crew {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\SU25Pilot.rtm";
            interpolateTo[] = {"RHS_KIA_SU25_Pilot", 1};
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
            leaning = "crewShake_half";
        };
        class RHS_KIA_SU25_Pilot: DefaultDie {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\SU25PilotKIA.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_KIA_HIND_Pilot: RHS_KIA_SU25_Pilot {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\KIA_Mi35_Pilot.rtm";
        };
        class RHS_HIND_Pilot: Crew {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\Mi35_Pilot.rtm";
            interpolateTo[] = {"RHS_KIA_HIND_Pilot", 1};
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
            leaning = "crewShake_half";
        };
        class RHS_KIA_HIND_Gunner: RHS_KIA_SU25_Pilot {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\KIA_Mi35_Gunner.rtm";
        };
        class RHS_HIND_Gunner: Crew {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\Mi35_Gunner.rtm";
            interpolateTo[] = {"RHS_KIA_HIND_Gunner", 1};
            leaning = "crewShake_half";
        };
        class RHS_KIA_HIND_Cargo: RHS_KIA_SU25_Pilot {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\KIA_Skodovka_Cargo01.rtm";
        };
        class RHS_HIND_Cargo: Crew {
            file = "\rhsafrf\addons\rhs_a2port_car\data\anim\UAZ_Cargo03.rtm";
            interpolateTo[] = {"RHS_KIA_HIND_Cargo", 0.1};
        };
        class RHS_Mi17v2_Gunner: Crew {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\MI171_Gunner.rtm";
            connectTo[] = {"RHS_Mi17v2_KIA_Gunner", 1};
            interpolateTo[] = {"RHS_Mi17v2_KIA_Gunner", 1};
            speed = 10000000000;
        };
        class RHS_Mi17v2_KIA_Gunner: RHS_KIA_SU25_Pilot {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\MI171_KIA_Gunner.rtm";
        };
        class RHS_KIA_KA50_Pilot: RHS_KIA_SU25_Pilot {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\KIA_KA50_Pilot.rtm";
            leaning = "crewShake_half";
        };
        class RHS_KA50_Pilot: Crew {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\KA50_Pilot.rtm";
            interpolateTo[] = {"RHS_KIA_KA50_Pilot", 1};
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
            leaning = "crewShake_half";
        };
        class RHS_KIA_Mi17_Pilot: RHS_KIA_SU25_Pilot {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\KIA_Mi17_Pilot.rtm";
        };
        class RHS_Mi17_Pilot: Crew {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\Mi17_Pilot.rtm";
            interpolateTo[] = {"RHS_KIA_Mi17_Pilot", 1};
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
        };
        class RHS_KIA_Mi8_Pilot: RHS_KIA_SU25_Pilot {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\KIA_Mi8_Pilot.rtm";
        };
        class RHS_Mi8_Pilot: Crew {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\Mi8_Pilot.rtm";
            interpolateTo[] = {"RHS_KIA_Mi8_Pilot", 1};
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
        };
        class RHS_Mi8_PilotV2: RHS_Mi8_Pilot {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\Mi8_PilotV2.rtm";
        };
        class RHS_KIA_Mi17_Gunner: RHS_KIA_SU25_Pilot {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\KIA_Mi17_Gunner.rtm";
        };
        class RHS_Mi17_Gunner: Crew {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\Mi17_Gunner.rtm";
            interpolateTo[] = {"RHS_KIA_Mi17_Gunner", 1};
        };
        class RHS_KIA_Mi8_Gunner: RHS_KIA_SU25_Pilot {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\KIA_Mi8_Gunner.rtm";
        };
        class RHS_Mi8_Gunner: Crew {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\Mi8_Gunner.rtm";
            interpolateTo[] = {"RHS_KIA_Mi8_Gunner", 1};
        };
        class RHS_Mi8_GunnerFront: Crew {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\Mi8_GunnerFront.rtm";
            interpolateTo[] = {"RHS_KIA_Mi8_Gunner", 1};
        };
        class RHS_Mi17_Cargo01: Crew {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\Mi17_Pilot.rtm";
            interpolateTo[] = {"RHS_KIA_Mi17_Pilot", 1};
        };
        class RHS_Mi8_Cargo: Crew {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\Mi8_Pilot.rtm";
            interpolateTo[] = {"RHS_KIA_Mi8_Pilot", 1};
        };
        class RHS_KIA_Mi17_Cargo02: RHS_KIA_SU25_Pilot {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\KIA_Mi17_Cargo02.rtm";
        };
        class RHS_Mi17_Cargo02: Crew {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\Mi17_Cargo02_V0.rtm";
            interpolateTo[] = {"RHS_KIA_Mi17_Cargo02", 0.1};
            connectTo[] = {
                "RHS_Mi17_Cargo02",
                0.1,
                "RHS_Mi17_Cargo02_V1",
                0.1,
                "RHS_Mi17_Cargo02_V2",
                0.1,
                "RHS_Mi17_Cargo02_V3",
                0.1,
                "RHS_Mi17_Cargo02_V4",
                0.1,
                "RHS_Mi17_Cargo02_V5",
                0.1,
                "RHS_Mi17_Cargo02_V6",
                0.1
            };
            equivalentTo = "RHS_Mi17_Cargo02";
            variantsAI[] = {
                "RHS_Mi17_Cargo02",
                0.4,
                "RHS_Mi17_Cargo02_V1",
                0.1,
                "RHS_Mi17_Cargo02_V2",
                0.1,
                "RHS_Mi17_Cargo02_V3",
                0.1,
                "RHS_Mi17_Cargo02_V4",
                0.1,
                "RHS_Mi17_Cargo02_V5",
                0.1,
                "RHS_Mi17_Cargo02_V6",
                0.1
            };
            variantAfter[] = {5, 10, 20};
            speed = 0.3;
        };
        class RHS_Mi17_Cargo02_V1: RHS_Mi17_Cargo02 {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\Mi17_Cargo02_V1.rtm";
            interpolateTo[] = {"RHS_KIA_Mi17_Cargo02", 0.1};
            connectTo[] = {"RHS_Mi17_Cargo02", 0.1};
            speed = 0.27;
            variantAfter[] = {3.7, 3.7, 3.7};
        };
        class RHS_Mi17_Cargo02_V2: RHS_Mi17_Cargo02 {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\Mi17_Cargo02_V2.rtm";
            interpolateTo[] = {"RHS_KIA_Mi17_Cargo02", 0.1};
            connectTo[] = {"RHS_Mi17_Cargo02", 0.1};
            speed = 0.345;
            variantAfter[] = {3, 3, 3};
        };
        class RHS_Mi17_Cargo02_V3: RHS_Mi17_Cargo02 {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\Mi17_Cargo02_V3.rtm";
            interpolateTo[] = {"RHS_KIA_Mi17_Cargo02", 0.1};
            connectTo[] = {"RHS_Mi17_Cargo02", 0.1};
            speed = 0.2;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_Mi17_Cargo02_V4: RHS_Mi17_Cargo02 {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\Mi17_Cargo02_V4.rtm";
            interpolateTo[] = {"RHS_KIA_Mi17_Cargo02", 0.1};
            connectTo[] = {"RHS_Mi17_Cargo02", 0.1};
            speed = 0.201;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_Mi17_Cargo02_V5: RHS_Mi17_Cargo02 {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\Mi17_Cargo02_V5.rtm";
            interpolateTo[] = {"RHS_KIA_Mi17_Cargo02", 0.1};
            connectTo[] = {"RHS_Mi17_Cargo02", 0.1};
            speed = 0.197;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_Mi17_Cargo02_V6: RHS_Mi17_Cargo02 {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\Mi17_Cargo02_V6.rtm";
            interpolateTo[] = {"RHS_KIA_Mi17_Cargo02", 0.1};
            connectTo[] = {"RHS_Mi17_Cargo02", 0.1};
            speed = 0.345;
            variantAfter[] = {3, 3, 3};
        };
        class RHS_KIA_ka52_Pilot: RHS_KIA_SU25_Pilot {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\KIA_Ka52_Pilot.rtm";
        };
        class RHS_ka52_Pilot: Crew {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\ka52_Pilot.rtm";
            interpolateTo[] = {"RHS_KIA_ka52_Pilot", 1};
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {1};
            leftHandIKBeg = 1;
            leftHandIKEnd = 1;
        };
        class RHS_ka52_Pilot_Eject_Wait: Crew {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\ka52_Pilot.rtm";
            interpolateTo[] = {"RHS_ka52_Pilot_Eject", 1};
            interpolationSpeed = 1;
            leaning = "empty";
        };
        class RHS_ka52_Pilot_Eject: RHS_ka52_Pilot {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\ka52_Pilot_eject.rtm";
            leaning = "empty";
        };
        class RHS_KIA_ka52_Gunner: RHS_KIA_SU25_Pilot {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\KIA_ka52_Gunner.rtm";
        };
        class RHS_ka52_Gunner: Crew {
            file = "\rhsafrf\addons\rhs_a2port_air\anim\ka52_Gunner.rtm";
            interpolateTo[] = {"RHS_KIA_ka52_Gunner", 1};
        };
        class RHS_D6_Pilot_Init: Crew {
            file = "\rhsafrf\addons\rhs_c_a2port_air\anims\rhs_para_d6_init.rtm";
            interpolationSpeed = 1;
            speed = -3.5;
            looped = 0;
            connectTo[] = {"RHS_D6_Pilot", 1};
            interpolateTo[] = {"RHS_KIA_D6_Pilot", 1};
            variantsAI[] = {"RHS_D6_Pilot", 1};
            variantsPlayer[] = {"RHS_D6_Pilot", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class RHS_D6_Pilot: Crew {
            file = "\rhsafrf\addons\rhs_c_a2port_air\anims\rhs_para_d6.rtm";
            interpolateTo[] = {"RHS_KIA_D6_Pilot", 1};
            speed = 0.066519;
        };
        class RHS_KIA_D6_Pilot: RHS_KIA_SU25_Pilot {
            file = "\rhsafrf\addons\rhs_c_a2port_air\anims\rhs_kia_para_d6.rtm";
        };
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class addParachutes {
                file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_addParachutes.sqf";
            };
            class air_init {
                file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_air_init.sqf";
                description = "Air vehicles settings init";
            };
            class ka52_ejection {
                file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_ka52_ejection.sqf";
                description = "KA-52 ejection system";
            };
            class rwr_mi24 {
                file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_rwr_mi24.sqf";
                description = "RWR system for Mi-24";
            };
            class rwr_mi28 {
                file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_rwr_mi28.sqf";
                description = "RWR system for Mi-28";
            };
            class rwr_air {
                file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_rwr_air.sqf";
                description = "RWR system for generic planes";
            };
            class mi24_camo {
                file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_mi24_camo.sqf";
                description = "Random Camo script for Mi-24";
            };
            class mi24_doors {
                file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_mi24_doors.sqf";
                description = "Mi-24 cargo door handler";
            };
            class mi24_map {
                file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_mi24_map.sqf";
                description = "Mi-24 moving map";
            };
            class mi8_doors {
                file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_mi8_doors.sqf";
                description = "Mi-8AMT cargo door handler";
            };
            class rus_doorHandler {
                file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_doorHandler.sqf";
                description = "Delayed door handler";
            };
            class mi8_checkDoor {
                file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_mi8_checkDoor.sqf";
                description = "Door script for Mi-8";
            };
            class atgm_guide {
                file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_atgm_guide.sqf";
                description = "ATGM guidance for Ka-52";
            };
            class toggleIntLight {
                file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_toggleIntLight.sqf";
                description = "Toggle interior light";
            };
            class heli_wheelBrakes {
                file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_heli_wheelBrakes.sqf";
            };
            class Su25_AI_fire {
                file = "\rhsafrf\addons\rhs_c_a2port_air\scripts\rhs_su25_AI_laserTarget.sqf";
            };
        };
    };
};
class CfgSounds {
    class rhs_Missile3OClockH {
        name = "Missile3OClockH";
        sound[] = {"\rhsafrf\addons\rhs_c_a2port_air\sounds\Missile3OClockH.ogg", 1.7782794, 1};
        titles[] = {};
    };
    class rhs_Missile6OClockH {
        name = "Missile6OClockH";
        sound[] = {"\rhsafrf\addons\rhs_c_a2port_air\sounds\Missile6OClockH.ogg", 1.7782794, 1};
        titles[] = {};
    };
    class rhs_Missile9OClockH {
        name = "Missile9OClockH";
        sound[] = {"\rhsafrf\addons\rhs_c_a2port_air\sounds\Missile9OClockH.ogg", 1.7782794, 1};
        titles[] = {};
    };
    class rhs_Missile12OClockH {
        name = "Missile12OClockH";
        sound[] = {"\rhsafrf\addons\rhs_c_a2port_air\sounds\Missile12OClockH.ogg", 1.7782794, 1};
        titles[] = {};
    };
    class rhs_Missile3OClockL {
        name = "Missile3OClockL";
        sound[] = {"\rhsafrf\addons\rhs_c_a2port_air\sounds\Missile3OClockL.ogg", 1.7782794, 1};
        titles[] = {};
    };
    class rhs_Missile6OClockL {
        name = "Missile6OClockL";
        sound[] = {"\rhsafrf\addons\rhs_c_a2port_air\sounds\Missile6OClockL.ogg", 1.7782794, 1};
        titles[] = {};
    };
    class rhs_Missile9OClockL {
        name = "Missile9OClockL";
        sound[] = {"\rhsafrf\addons\rhs_c_a2port_air\sounds\Missile9OClockL.ogg", 1.7782794, 1};
        titles[] = {};
    };
    class rhs_Missile12OClockL {
        name = "Missile12OClockL";
        sound[] = {"\rhsafrf\addons\rhs_c_a2port_air\sounds\Missile12OClockL.ogg", 1.7782794, 1};
        titles[] = {};
    };
};
class CfgNonAIVehicles {
    class ProxyWeapon;
    class ProxyRetex;
    class ProxyMi24Wreck: ProxyRetex {
        hiddenSelections[] = {"camo1", "camo2"};
        model = "\rhsafrf\addons\rhs_a2port_air\Mi35\Mi24Wreck";
    };
    class ProxyKa52Wreck: ProxyRetex {
        hiddenSelections[] = {"camo1", "camo2"};
        model = "\rhsafrf\addons\rhs_a2port_air\Ka52\Ka52Wreck";
    };
    class ProxyMI8Wreck: ProxyRetex {
        hiddenSelections[] = {"camo1"};
        model = "\rhsafrf\addons\rhs_a2port_air\Mi17\MI8Wreck";
    };
    class ProxySu25Wreck: ProxyRetex {
        hiddenSelections[] = {"camo1"};
        model = "\rhsafrf\addons\rhs_a2port_air\Su25\Su25Wreck";
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
class RHS_Effects_Helicopter_Hull_Destruction;
class CfgVehicles {
    class ThingX;
    class Air;
    class Helicopter: Air {
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
        class Components;
    };
    class Helicopter_Base_H: Helicopter_Base_F {
        class Turrets: Turrets {
            class CopilotTurret;
        };
        class AnimationSources;
        class Eventhandlers;
        class Viewoptics;
        class RotorLibHelicopterProperties;
    };
    class Heli_Transport_02_base_F: Helicopter_Base_H {};
    class Heli_Light_02_base_F: Helicopter_Base_H {
        class Turrets: Turrets {
            class CopilotTurret;
            class MainTurret;
        };
        class Components;
    };
    class Plane: Air {
        class HitPoints;
        class EventHandlers;
    };
    class Plane_Base_F: Plane {
        class AnimationSources;
        class HitPoints: HitPoints {
            class HitHull;
        };
    };
    class Plane_CAS_02_base_F;
    class O_Plane_CAS_02_F: Plane_CAS_02_base_F {
        class EventHandlers;
        class AnimationSources;
        class ViewPilot;
    };
    class UAV: Plane {
        class NewTurret;
        class ViewPilot;
        class ViewOptics;
        class AnimationSources;
    };
    class RHS_Mi24_base: Heli_Attack_02_base_F {
        rhs_decalParameters[] = {"['Number',cRHSAIRMI24NumberPlaces,'AviaYellow']"};
        dlc = "RHS_AFRF";
        category = "Air";
        crew = "rhs_pilot_combat_heli";
        typicalCargo[] = {"rhs_pilot_combat_heli"};
        maxSpeed = 585;
        fuelCapacity = 2130;
        AGM_fuelCapacity = 2130;
        fuelConsumptionRate = 0.5;
        mainBladeRadius = 7;
        tailBladeRadius = 1.5;
        tailBladeVertical = 1;
        tailBladeCenter = "mala osa";
        mainBladeCenter = "rotor_center";
        bodyFrictionCoef = 0.52;
        backRotorForceCoef = 1;
        liftForceCoef = 2;
        altFullForce = 4000;
        altNoForce = 6000;
        mainRotorSpeed = 1;
        backrotorspeed = 1;
        numberPhysicalWheels = 3;
        class RotorLibHelicopterProperties: RotorLibHelicopterProperties {
            rtd_center = "rtd_center";
            RTDconfig = "rhsafrf\addons\rhs_c_a2port_air\Mi35\RTD_mi24.xml";
            maxTorque = 201754;
            maxMainRotorStress = 320000;
            maxTailRotorStress = 60000;
            maxHorizontalStabilizerLeftStress = 12000;
            maxHorizontalStabilizerRightStress = 12000;
            maxVerticalStabilizerStress = 8000;
            defaultCollective = 0.75;
            autoHoverCorrection[] = {6, -1, 0};
            retreatBladeStallWarningSpeed = 93.056;
            horizontalWingsAngleCollMin = -12.5;
            horizontalWingsAngleCollMax = 7.5;
            stressDamagePerSec = 0.0033333332;
        };
        availableForSupportTypes[] = {"CAS_Heli"};
        audible = 7;
        camShakeCoef = 0.8;
        class PilotCamera {};
        scope = 1;
        mapSize = 16;
        vehicleClass = "rhs_vehclass_helicopter";
        editorSubcategory = "rhs_EdSubcat_helicopter";
        displayName = "Mi-24P";
        icon = "rhsafrf\addons\rhs_a2port_air\data\map_ico\icon_mi24_ca.paa";
        picture = "\rhsafrf\addons\rhs_a2port_air\data\ico\rhs_mi24p_pic_ca.paa";
        getInRadius = 2;
        gunnerUsesPilotView = 0;
        maxOmega = 2000;
        class Wheels {
            disableWheelsWhenDestroyed = 1;
            class wheel_1_1 {
                steering = 1;
                side = "left";
                boneName = "gear_1_1_damper";
                suspForceAppPointOffset = "gear_1_1_wheel_axis";
                tireForceAppPointOffset = "gear_1_1_wheel_axis";
                center = "gear_1_1_wheel_axis";
                boundary = "gear_1_1_wheel_bound";
                suspTravelDirection[] = {0, -1, 0};
                width = 0.437;
                mass = 15;
                MOI = 0.768;
                dampingRate = 0.25;
                dampingRateDamaged = 2;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 2000;
                maxHandBrakeTorque = 0;
                maxCompression = 1.2;
                maxDroop = 0;
                sprungMass = 13;
                springStrength = 1200;
                springDamperRate = 1280;
                longitudinalStiffnessPerUnitGravity = 5000;
                latStiffX = 2.5;
                latStiffY = 18;
                frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1, 1}};
            };
            class wheel_2_1: wheel_1_1 {
                steering = 0;
                side = "left";
                boneName = "gear_2_1_damper";
                suspForceAppPointOffset = "gear_2_1_wheel_hub";
                tireForceAppPointOffset = "gear_2_1_wheel_hub";
                center = "gear_2_1_wheel_hub";
                boundary = "gear_2_1_wheel_bound";
                sprungMass = 2856;
                width = 0.237;
                maxCompression = 1.6;
                maxDroop = 0.191;
            };
            class wheel_2_2: wheel_2_1 {
                side = "right";
                boneName = "gear_2_2_damper";
                suspForceAppPointOffset = "gear_2_2_wheel_hub";
                tireForceAppPointOffset = "gear_2_2_wheel_hub";
                center = "gear_2_2_wheel_hub";
                boundary = "gear_2_2_wheel_bound";
            };
        };
        gearRetracting = 1;
        driveOnComponent[] = {"wheels"};
        defaultUserMFDvalues[] = {0.5, 0.5};
        class MFD {
            class AirplaneHUD {
                enableParallax = 1;
                topLeft = "MFD_1_TL";
                topRight = "MFD_1_TR";
                bottomLeft = "MFD_1_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0, 1, 0, 0.1};
                turret[] = {-1};
                class Bones {
                    class PlaneOrientation {
                        type = "fixed";
                        refreshRate = 0.1;
                        pos[] = {0.44, 0.53};
                    };
                    class ImpactPoint {
                        type = "vector";
                        source = "ImpactPoint";
                        pos[] = {0.44, 0.53};
                        pos0[] = {0.44, 0.47};
                        pos10[] = {1.12, 1.21};
                    };
                };
                class Draw {
                    color[] = {0.15, 1, 0.15};
                    alpha = 0.8;
                    condition = "on";
                    class ImpactCross {
                        width = 4;
                        type = "line";
                        points[] = {
                            {"ImpactPoint", {0, -0.174118}, 1},
                            {"ImpactPoint", {0, -0.0326471}, 1},
                            {},
                            {"ImpactPoint", {0, 0.174118}, 1},
                            {"ImpactPoint", {0, 0.0326471}, 1},
                            {},
                            {"ImpactPoint", {-0.16, 0}, 1},
                            {"ImpactPoint", {-0.03, 0}, 1},
                            {},
                            {"ImpactPoint", {0.16, 0}, 1},
                            {"ImpactPoint", {0.03, 0}, 1}
                        };
                    };
                };
            };
            class MFD_Map {
                topLeft = "MFD_MAP_TL";
                topRight = "MFD_MAP_TR";
                bottomLeft = "MFD_MAP_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0, 1, 0, 0.1};
                enableParallax = 0;
                class material {
                    ambient[] = {1, 1, 1, 1};
                    diffuse[] = {10, 10, 10, 1};
                    emissive[] = {400, 200, 200, 1};
                };
                class Bones {
                    class MovementY {
                        type = "linear";
                        source = "user";
                        sourceIndex = 0;
                        refreshRate = 0.1;
                        min = 0;
                        max = 1;
                        sourceScale = 1;
                        maxPos[] = {0, 1};
                        minPos[] = {0, 0};
                    };
                    class MovementX: MovementY {
                        sourceIndex = 1;
                        maxPos[] = {0, 0};
                        minPos[] = {1, 0};
                    };
                };
                class Draw {
                    color[] = {0.9, 0, 0};
                    alpha = 1;
                    condition = 1;
                    class PlanePosition {
                        width = 8;
                        type = "line";
                        points[] = {
                            {"MovementY", 1, "MovementX", 1, {0.0277778, 0.07}, 1},
                            {"MovementY", 1, "MovementX", 1, {0.0277778, -0.03}, 1},
                            {"MovementY", 1, "MovementX", 1, {-0.0277778, -0.03}, 1},
                            {"MovementY", 1, "MovementX", 1, {-0.0277778, 0.07}, 1},
                            {"MovementY", 1, "MovementX", 1, {0.0277778, 0.07}, 1}
                        };
                    };
                    class BlackGroup {
                        color[] = {0, 0, 0};
                        alpha = 1;
                        condition = 1;
                        class Cross {
                            width = 8;
                            type = "line";
                            points[] = {
                                {"MovementY", 1, "MovementX", 1, {-0.0277778, 0.02}, 1},
                                {"MovementY", 1, "MovementX", 1, {0.0277778, 0.02}, 1},
                                {},
                                {"MovementY", 1, "MovementX", 1, {0, -0.03}, 1},
                                {"MovementY", 1, "MovementX", 1, {0, 0.07}, 1},
                                {}
                            };
                        };
                    };
                };
            };
        };
        gunnerCanSee = "2+4+8+16";
        driverCanSee = "2+4+8+16";
        irTarget = 1;
        irTargetSize = 1;
        visualTarget = 1;
        visualTargetSize = 1.2;
        radarTarget = 1;
        radarTargetSize = 1;
        incomingMissileDetectionSystem = 8;
        lockDetectionSystem = 8;
        soundIncommingMissile[] = {"\rhsafrf\addons\rhs_c_a2port_air\sounds\alarm_beep", 1.098107, 1};
        soundLocked[] = {"", 1.5848932, 1};
        unitInfoType = "RHS_RscUnitInfoAir_Mi24";
        unitInfoTypeRTD = "RHS_RscUnitInfoAir_RTD_Mi24";
        unitInfoTypeLite = "RHS_RscUnitInfoAir_RTD_Basic_Mi24";
        hideWeaponsCargo = 0;
        class TransportMagazines {
            class _xx_rhs_30Rnd_545x39_7N10_AK {
                magazine = "rhs_30Rnd_545x39_7N10_AK";
                count = 30;
            };
            class _xx_rhs_mag_rgd5 {
                magazine = "rhs_mag_rgd5";
                count = 10;
            };
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
            class _xx_Medikit {
                name = "Medikit";
                count = 1;
            };
            class _xx_Toolkit {
                name = "Toolkit";
                count = 1;
            };
        };
        class TransportWeapons {};
        class TransportBackpacks {};
        driverDoor = "Door_Pilot";
        cargoaction[] = {"RHS_HIND_Cargo"};
        cargoDoors[] = {"Door_Cargo"};
        driverCompartments = 1;
        cargoCompartments[] = {"Compartment3"};
        cargoGetInAction[] = {"GetInHeli_Transport_01Cargo"};
        cargoGetOutAction[] = {"RHS_HIND_Cargo_Exit"};
        model = "\rhsafrf\addons\rhs_a2port_air\mi35\mi24_p";
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "exhaust",
            "tail_decals",
            "n1",
            "n2",
            "moving_map"
        };
        hiddenSelectionsTextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\mi35\data\mi24p_001_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\mi35\data\mi24p_002_co.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi171_det_co.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
        class textureSources {
            class standard {
                displayName = "Grey";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_a2port_air\mi35\data\mi24p_001_co.paa", "\rhsafrf\addons\rhs_a2port_air\mi35\data\mi24p_002_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\mi171_det_co.paa"};
                factions[] = {"rhs_faction_vvs_c", "rhs_faction_vvs"};
            };
            class Camo: standard {
                displayName = "Camo #1";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_a2port_air\mi35\data\mi24v_001_co.paa", "\rhsafrf\addons\rhs_a2port_air\mi35\data\mi24v_002_co.paa", "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
            };
            class Camo1: standard {
                displayName = "Camo #2";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_001_camo1_co.paa", "\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_002_camo1_co.paa", "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
            };
            class Camo2: standard {
                displayName = "Camo #3";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_001_camo2_co.paa", "\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_002_camo2_co.paa", "rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_o_co.paa"};
            };
            class Camo3: standard {
                displayName = "Camo #4";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_001_camo3_co.paa", "\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_002_camo3_co.paa", "rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_w_co.paa"};
            };
            class Camo4: standard {
                displayName = "Soot Camo #1";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_a2port_air\mi35\data\soot\mi24p_001_soot1_co.paa", "\rhsafrf\addons\rhs_a2port_air\mi35\data\soot\mi24p_002_soot1_co.paa", "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
            };
            class Camo5: standard {
                displayName = "Soot Camo #2";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_a2port_air\mi35\data\soot\mi24p_001_soot2_co.paa", "\rhsafrf\addons\rhs_a2port_air\mi35\data\soot\mi24p_002_soot2_co.paa", "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
            };
            class Camo6: standard {
                displayName = "Soot Camo #3";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_a2port_air\mi35\data\soot\mi24p_001_soot3_co.paa", "\rhsafrf\addons\rhs_a2port_air\mi35\data\soot\mi24p_002_soot3_co.paa", "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
            };
            class Camo7: standard {
                displayName = "CDF";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_001_co.paa", "\rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_002_co.paa", "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
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
            class rhs_hideExhaust {
                displayName = "Hide exhaust cover";
                tooltip = "Hide exhaust cover. WARNING: DUE TO HOW ENGINE WORKS IT DOESN'T CHANGE EXHAUST MEMORY POINTS";
                property = "rhs_hideExhaust";
                control = "CheckboxNumber";
                expression = "_this animate ['exhaust_hide',_value,true]";
                defaultValue = "0";
            };
            class rhs_opendoors {
                displayName = "Open cargo doors";
                property = "rhs_opendoors";
                control = "CheckboxNumber";
                expression = "_this animateDoor ['Door_Cargo',_value,true]";
                defaultValue = "0";
            };
            class rhs_decalNumber_type {
                displayName = "Define font type of side number";
                tooltip = "Define kind of font that will be drawn on vehicle";
                property = "rhs_decalNumber_type";
                control = "Combo";
                expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHSAIRMI24NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
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
                defaultValue = "-1";
                typeName = "Number";
                expression = "if(_value >= 0)then{if(_value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRMI24NumberPlaces}else{[_this, [['Number', cRHSAIRMI24NumberPlaces, _this getVariable ['rhs_decalNumber_type','AviaYellow'], _value] ] ] call rhs_fnc_decalsInit}};";
            };
            class rhs_decalTail {
                displayName = "Define tail decal";
                tooltip = "Define tail decalthat will be drawn on vehicle";
                property = "rhs_decalTail";
                control = "Combo";
                expression = "[_this,[['Label', cRHSAIRMI24TailPlaces, 'Aviation',_value]]] call rhs_fnc_decalsInit";
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
        slingLoadMaxCargoMass = 2400;
        precisegetinout = 1;
        driverAction = "rhs_hind_pilot";
        driverInAction = "rhs_hind_pilot";
        getInAction = "pilot_Heli_Light_02_Enter";
        getOutAction = "pilot_Heli_Light_02_Exit";
        memoryPointsGetInDriverPrecise = "pos driver";
        memoryPointsGetInDriver = "pos driver";
        memoryPointsGetInDriverDir = "pos driver dir";
        driverLeftHandAnimName = "stick_pilot";
        driverRightHandAnimName = "stick_pilot";
        memoryPointLRocket = "rocket_1";
        memoryPointRRocket = "rocket_2";
        memoryPointLMissile = "missile_1";
        memoryPointRMissile = "missile_2";
        memoryPointGun[] = {"machinegun", "machinegun2"};
        gunBeg[] = {"muzzle_1", "muzzle_2"};
        gunEnd[] = {"chamber_1", "chamber_2"};
        particlesPos = "chamber_1";
        particlesDir = "muzzle_1";
        selectionFireAnim = "zasleh";
        primaryGunner = 2;
        weaponsGroup1 = 128;
        weaponsGroup4 = 64;
        weapons[] = {"rhs_weap_MASTERSAFE", "rhs_weap_DIRCM_Lipa", "rhs_weap_gsh30"};
        magazines[] = {
            "rhs_mag_gsh30_ofzt_750",
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa"
        };
        transportsoldier = 4;
        cargoProxyIndexes[] = {1, 2, 3, 4};
        getInProxyOrder[] = {1, 2, 3, 4, 5, 6, 7, 8};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"rhs_weap_MASTERSAFE", "rhs_weap_fcs_mi24"};
                magazines[] = {"rhs_laserfcsmag"};
                gunnerAction = "rhs_hind_gunner";
                gunnerInAction = "rhs_hind_gunner";
                gunnerGetInAction = "Heli_Attack_01_Pilot_enter";
                gunnerGetOutAction = "Heli_Attack_01_Pilot_exit";
                memoryPointsGetInGunnerPrecise = "pos gunner";
                memoryPointsGetInGunner = "pos gunner";
                memoryPointsGetInGunnerDir = "pos gunner dir";
                gunnerLeftHandAnimName = "stick_gunner";
                gunnerRightHandAnimName = "stick_gunner";
                animationSourceStickX = "MainTurret_Inertia";
                animationSourceStickY = "MainGun_Inertia";
                gunnerCompartments = "Compartment2";
                castGunnerShadow = 1;
                viewGunnerShadow = 1;
                precisegetinout = 1;
                outGunnerMayFire = 1;
                commanding = 0;
                primaryGunner = 1;
                isCopilot = 1;
                selectionFireAnim = "";
                memoryPointGun = "";
                gunBeg = "";
                gunEnd = "";
                initelev = 4;
                initturn = 0;
                maxelev = 20;
                minelev = -60;
                maxturn = 60;
                minturn = -60;
                particlesPos = "";
                particlesDir = "";
                canHideGunner = 0;
                usePiP = 1;
                lodTurnedIn = 1000;
                lodTurnedOut = 1000;
                stabilizedInAxes = 3;
                memoryPointGunnerOptics = "gunnerview2";
                memoryPointGunnerOutOptics = "gunnerview2";
                turretinfotype = "RHS_RscWeaponMi24_FCS";
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
                    minfov = 0.047;
                };
                gunneropticseffect[] = {"OpticsBlur2", "OpticsCHAbera2"};
                class OpticsIn {
                    class KPS53AV {
                        opticsDisplayName = "KPS53AV";
                        gunneropticsmodel = "\A3\weapons_f\reticle\optics_empty";
                        initanglex = 0;
                        initangley = 0;
                        maxanglex = 30;
                        maxangley = 100;
                        initfov = 0.7;
                        maxfov = 0.7;
                        minfov = 0.7;
                        minanglex = -30;
                        minangley = -100;
                        thermalmode[] = {0, 1};
                    };
                    class 9S475_3 {
                        camPos = "view_9s475";
                        hitpoint = "Hit_Optic_9S475";
                        opticsDisplayName = "9S475_3";
                        gunneropticsmodel = "rhsafrf\addons\rhs_a2port_air\mi35\rhs_sight_9s475_x3";
                        initanglex = 0;
                        initangley = 0;
                        maxanglex = 30;
                        maxangley = 100;
                        initfov = 0.212121;
                        maxfov = 0.212121;
                        minfov = 0.212121;
                        minanglex = -30;
                        minangley = -100;
                        thermalmode[] = {0, 1};
                        visionmode[] = {"Normal"};
                    };
                    class 9S475_10: 9S475_3 {
                        opticsDisplayName = "9S475_10";
                        gunneropticsmodel = "rhsafrf\addons\rhs_a2port_air\mi35\rhs_sight_9s475_x10";
                        initfov = 0.07;
                        maxfov = 0.07;
                        minfov = 0.07;
                        directionStabilized = 1;
                    };
                };
                class OpticsOut {
                    class KPS53AV {
                        gunneropticsmodel = "\A3\weapons_f\reticle\optics_empty";
                        initanglex = 0;
                        initangley = 0;
                        maxanglex = 30;
                        maxangley = 100;
                        initfov = 0.7;
                        maxfov = 0.7;
                        minfov = 0.7;
                        minanglex = -30;
                        minangley = -100;
                        thermalmode[] = {0, 1};
                        visionmode[] = {"Normal"};
                    };
                };
                class Reflectors {
                    class cabin {
                        color[] = {830, 100, 100};
                        ambient[] = {5, 0, 0};
                        intensity = 9;
                        size = 1;
                        innerAngle = 90;
                        outerAngle = 165;
                        coneFadeCoef = 1;
                        position = "cabin_light";
                        direction = "cabin_light_dir";
                        hitpoint = "cabin_light";
                        selection = "cabin_light";
                        useFlare = 0;
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
                };
                class Components {
                    class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                        class Components {
                            class EmptyDisplay {
                                componentType = "EmptyDisplayComponent";
                            };
                            class CrewDisplay {
                                componentType = "CrewDisplayComponent";
                                resource = "RscCustomInfoCrew";
                            };
                        };
                    };
                    class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                        class Components {
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
            class CargoTurret_01: CargoTurret {
                gunnerAction = "passenger_inside_1";
                gunnerGetInAction = "GetInHeli_Transport_01Cargo";
                gunnerGetOutAction = "RHS_HIND_Cargo_Exit";
                memoryPointsGetInGunner = "pos cargo R2";
                memoryPointsGetInGunnerDir = "pos cargo R2 dir";
                gunnerName = "Passenger (Right Bench 2)";
                gunnerCompartments = "Compartment3";
                proxyIndex = 5;
                maxElev = 15;
                minElev = -45;
                maxTurn = 40;
                minTurn = -15;
                lodTurnedIn = 1200;
                lodTurnedOut = 1200;
                lodOpticsIn = 1200;
                lodOpticsOut = 1200;
                isPersonTurret = 1;
                gunnerUsesPilotView = 0;
                gunnerDoor = "Door_Cargo";
                selectionFireAnim = "";
                commanding = -2;
                weapons[] = {"rhs_weap_DummyLauncher"};
                cantCreateAI = 1;
                playerPosition = 2;
                soundAttenuationTurret = "HeliAttenuationRamp";
                disableSoundAttenuation = 0;
                enabledByAnimationSource = "Door_Cargo";
                class Hitpoints {};
            };
            class CargoTurret_02: CargoTurret_01 {
                gunnerName = "Passenger (Right Bench 1)";
                memoryPointsGetInGunner = "pos cargo R";
                memoryPointsGetInGunnerDir = "pos cargo R dir";
                proxyIndex = 7;
                maxTurn = 34;
                minTurn = -30;
            };
            class CargoTurret_03: CargoTurret_01 {
                memoryPointsGetInGunner = "pos cargo L2";
                memoryPointsGetInGunnerDir = "pos cargo L2 dir";
                gunnerName = "Passenger (Left Bench 2)";
                proxyIndex = 6;
                maxTurn = 25;
                minTurn = -44;
            };
            class CargoTurret_04: CargoTurret_01 {
                gunnerName = "Passenger (Left Bench 1)";
                memoryPointsGetInGunner = "pos cargo L";
                memoryPointsGetInGunnerDir = "pos cargo L dir";
                proxyIndex = 8;
                maxTurn = 31;
                minTurn = -25;
            };
        };
        class Components: Components {
            class SensorsManagerComponent {
                class Components {
                    class VisualSensorComponent: SensorTemplateVisual {
                        class AirTarget {
                            minRange = 500;
                            maxRange = 2000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 500;
                            maxRange = 3200;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        animDirection = "mainGun";
                        maxTrackableSpeed = 30;
                        angleRangeHorizontal = 28;
                        angleRangeVertical = 22;
                        maxFogSeeThrough = 0.35;
                        nightRangeCoef = 0.1;
                    };
                };
            };
            class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                class Components: components {
                    class CrewDisplay {
                        componentType = "CrewDisplayComponent";
                        resource = "RscCustomInfoCrew";
                    };
                };
            };
            class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                class Components: components {
                    class CrewDisplay {
                        componentType = "CrewDisplayComponent";
                        resource = "RscCustomInfoCrew";
                    };
                };
            };
            class TransportPylonsComponent {
                UIPicture = "\rhsafrf\addons\rhs_a2port_air\data\loadouts\RHS_Mi24_EDEN_CA.paa";
                class pylons {
                    class pylon1 {
                        hardpoints[] = {
                            "RHS_HP_FAB250",
                            "RHS_HP_FAB500",
                            "RHS_HP_KMGU2",
                            "RHS_HP_APU68M3_S24",
                            "RHS_HP_B13L1",
                            "RHS_HP_B8V20",
                            "RHS_HP_UB16",
                            "RHS_HP_UB32",
                            "RHS_HP_UPK23"
                        };
                        priority = 1;
                        attachment = "rhs_mag_fab250";
                        maxweight = 550;
                        UIposition[] = {0.503, 0.3};
                        turret[] = {0};
                    };
                    class pylon2: pylon1 {
                        UIposition[] = {0.165, 0.3};
                        mirroredMissilePos = 1;
                    };
                    class pylon3: pylon1 {
                        hardpoints[] = {
                            "RHS_HP_FAB250",
                            "RHS_HP_APU68M3_S24",
                            "RHS_HP_B8V20",
                            "RHS_HP_UB16",
                            "RHS_HP_UB32",
                            "RHS_HP_UPK23",
                            "RHS_HP_9m17_Mi24",
                            "RHS_HP_9m114_Mi24",
                            "RHS_HP_9m120_Mi24"
                        };
                        attachment = "rhs_mag_b8v20a_s8kom";
                        maxweight = 400;
                        priority = 2;
                        UIposition[] = {0.583, 0.35};
                        turret[] = {};
                    };
                    class pylon4: pylon3 {
                        UIposition[] = {0.085, 0.35};
                        mirroredMissilePos = 3;
                    };
                    class pylon5: pylon1 {
                        hardpoints[] = {
                            "RHS_HP_9m17_Mi24",
                            "RHS_HP_9m114_Mi24",
                            "RHS_HP_9m120_Mi24",
                            "RHS_HP_Empty_Mi24"
                        };
                        priority = 4;
                        bay = 1;
                        attachment = "rhs_mag_9M120M_Mi24_2x";
                        maxweight = 150;
                        UIposition[] = {0.628, 0.4};
                        turret[] = {0};
                    };
                    class pylon6: pylon5 {
                        UIposition[] = {0.04, 0.4};
                        mirroredMissilePos = 5;
                    };
                    class cmDispenser {
                        hardpoints[] = {"RHS_cm_ASO2", "RHS_cm_ASO2_x2", "RHS_cm_ASO2_x4"};
                        priority = 1;
                        attachment = "rhs_ASO2_CMFlare_Chaff_Magazine_x4";
                        maxweight = 800;
                        UIposition[] = {0.33, 0};
                    };
                };
                class Bays {
                    class 9S475_Hatch {
                        bayOpenTime = 1;
                        openBayWhenWeaponSelected = 1;
                        autoCloseWhenEmptyDelay = -1;
                    };
                };
                class Presets {
                    class Bomb {
                        attachment[] = {
                            "rhs_mag_fab250",
                            "rhs_mag_fab250",
                            "rhs_mag_b8v20a_s8kom",
                            "rhs_mag_b8v20a_s8kom",
                            "rhs_mag_9M120M_Mi24_2x",
                            "rhs_mag_9M120M_Mi24_2x",
                            "rhs_ASO2_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "Bomb";
                    };
                    class UPK {
                        attachment[] = {
                            "rhs_mag_upk23_mixed",
                            "rhs_mag_upk23_mixed",
                            "rhs_mag_b8v20a_s8kom",
                            "rhs_mag_b8v20a_s8kom",
                            "rhs_mag_9M120M_Mi24_2x",
                            "rhs_mag_9M120M_Mi24_2x",
                            "rhs_ASO2_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "UPK-23-250";
                    };
                    class AT {
                        attachment[] = {
                            "rhs_mag_b8v20a_s8kom",
                            "rhs_mag_b8v20a_s8kom",
                            "rhs_mag_9M120M_Mi24_2x",
                            "rhs_mag_9M120M_Mi24_2x",
                            "rhs_mag_9M120M_Mi24_2x",
                            "rhs_mag_9M120M_Mi24_2x",
                            "rhs_ASO2_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "Anti Tank";
                    };
                    class CAS {
                        attachment[] = {
                            "rhs_mag_b8v20a_s8df",
                            "rhs_mag_b8v20a_s8df",
                            "rhs_mag_b8v20a_s8kom",
                            "rhs_mag_b8v20a_s8kom",
                            "rhs_mag_9M120M_Mi24_2x",
                            "rhs_mag_9M120M_Mi24_2x",
                            "rhs_ASO2_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "Close Air Support";
                    };
                };
            };
        };
        class UserActions {
            class SAFEMODE {
                displayName = "<t color='#00FF7F'>MASTERSAFE</t>";
                condition = "(call rhs_fnc_findPlayer) isEqualTo (driver this) || (call rhs_fnc_findPlayer) isEqualTo (gunner this)";
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
                displayName = "Open Door";
                position = "";
                radius = 3;
                priority = 11;
                showWindow = 0;
                onlyForplayer = 1;
                condition = "this doorPhase 'Door_Cargo' < 0.5 AND alive this";
                statement = "this animateDoor ['Door_Cargo',1]";
                shortcut = "user12";
            };
            class closeDoor: openDoor {
                displayName = "Close Door";
                condition = "this doorPhase 'Door_Cargo' > 0.5 AND alive this";
                statement = "this animateDoor ['Door_Cargo',0]";
            };
            class ToggleLight {
                displayName = "Toggle interior light";
                position = "pos driver";
                radius = 15;
                showwindow = 0;
                condition = "player in this;";
                statement = "[this,'cabinlights_hide',[0]] call rhs_fnc_toggleIntLight";
                onlyforplayer = 1;
            };
        };
        class Exhausts {
            class Exhaust01 {
                direction = "exhaust1h_dir";
                position = "exhaust1h";
                effect = "ExhaustEffectHeli";
            };
            class Exhaust02 {
                direction = "exhaust2h_dir";
                position = "exhaust2h";
                effect = "ExhaustEffectHeli";
            };
        };
        armor = 50;
        armorStructural = 20;
        damageresistance = 0.000345;
        hullDamageCauseExplosion = 1;
        epeImpulseDamageCoef = 1;
        hullExplosionDelay[] = {10, 20};
        class HitPoints: HitPoints {
            class HitHull: HitHull {
                simulation = "RHS_Hull_Helicopter";
                armor = -200;
                minimalHit = -0.15;
                radius = 0.2;
                name = "hull_hit";
                armorComponent = "Hit_Hull";
                visual = "zbytek";
                passThrough = 1;
                class DestructionEffects: RHS_Effects_Helicopter_Hull_Destruction {};
            };
            class HitFuel: HitFuel {
                armor = 1.3;
                radius = 0.125;
                minimalHit = 0.05;
                explosionShielding = 2;
            };
            class HitAvionics: HitAvionics {
                armor = 1.6;
                radius = 0.4;
                minimalHit = 0.15;
                explosionShielding = 1.5;
                visual = "podsvit pristroju";
            };
            class HitEngine1: HitEngine1 {
                armor = 1.63;
                radius = 0.35;
                explosionShielding = 3;
                minimalHit = 0.1;
                name = "engine_1_hit";
            };
            class HitEngine2: HitEngine1 {
                name = "engine_2_hit";
            };
            class HitEngine: HitEngine2 {
                armor = 999;
                visual = "camo2";
                name = "engine_hit";
                convexComponent = "engine_hit";
                depends = "0.5 * (HitEngine1 + HitEngine2)";
            };
            class HitTail {
                armor = -150;
                explosionShielding = 0.2;
                passThrough = 0.5;
                minimalHit = -0.2;
                radius = 0.13;
                armorComponent = "Hit_Tail";
                name = "Hit_Tail";
                visual = "-";
                simulation = "RHS_Hull_Helicopter";
            };
            class HitVRotor {
                armor = 0.5;
                explosionShielding = 1;
                passThrough = 0.3;
                name = "tail_rotor_hit";
                visual = "mala vrtule staticka";
                depends = "HitTail";
            };
            class HitHRotor {
                armor = 0.5;
                explosionShielding = 1;
                material = 51;
                passThrough = 0.1;
                name = "main_rotor_hit";
                visual = "velka vrtule staticka";
            };
            class HitHydraulics {
                armor = -50;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.13;
                name = "hit_hydraulics";
                visual = "-";
            };
            class HitTransmission {
                armor = -80;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.13;
                name = "transmission";
                visual = "-";
            };
            class HitHStabilizerL1 {
                armor = -30;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.13;
                name = "hstabilizerl1";
                visual = "-";
            };
            class HitHStabilizerR1 {
                armor = -30;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.13;
                name = "hstabilizerr1";
                visual = "-";
            };
            class HitVStabilizer1 {
                armor = -30;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.13;
                name = "vstabilizer1";
                visual = "-";
            };
            class HitPitotTube {
                armor = -30;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.13;
                name = "pitot tube";
                visual = "-";
                depends = "";
            };
            class HitStaticPort {
                armor = -30;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.13;
                name = "static port";
                visual = "-";
                depends = "";
            };
            class HitGlass1: HitGlass1 {
                armor = 14.75;
                explosionShielding = 2;
                radius = 0.35;
                minimalHit = 0.001;
            };
            class HitGlass2: HitGlass2 {
                armor = 0.45;
                armorComponent = "glass2";
                explosionShielding = 1.5;
                radius = 0.2;
                minimalHit = 0.01;
            };
            class HitGlass3: HitGlass3 {
                armor = 14.75;
                armorComponent = "glass3";
                explosionShielding = 2;
                radius = 0.35;
                minimalHit = 0.001;
            };
            class HitGlass4: HitGlass4 {
                armor = 0.45;
                armorComponent = "glass4";
                explosionShielding = 1.5;
                radius = 0.35;
                minimalHit = 0.01;
            };
            class HitGlass5: HitGlass5 {
                armor = 0.45;
                armorComponent = "glass5";
                explosionShielding = 1.5;
                radius = 0.3;
                minimalHit = 0.01;
            };
            class HitGlass6: HitGlass6 {
                armor = 0.45;
                armorComponent = "glass6";
                explosionShielding = 1.5;
                radius = 0.35;
                minimalHit = 0.05;
            };
            class Hit_Optic_9S475 {
                armor = -40;
                explosionShielding = 0;
                name = "";
                visual = "-";
                armorComponent = "Hit_Optic_9S475";
                passThrough = 0;
            };
            class HitPylon1 {
                armor = -30;
                material = -1;
                name = "hit_pylon_1";
                passThrough = 0;
                minimalHit = -0.1;
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
                minimalHit = -0.1;
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
                minimalHit = -0.1;
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
                minimalHit = -0.1;
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
                minimalHit = -0.1;
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
                minimalHit = -0.1;
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
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_sklo.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_sklo_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_sklo_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_sklo_interier.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_sklo_interier_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_sklo_interier_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_001.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_001_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_001_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_002.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_002_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_002_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_003.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_003_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_003_destruct.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class AnimationSources: AnimationSources {
            class cabinlights_hide {
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
            };
            class Door_Gunner {
                source = "door";
                animPeriod = 0.8;
            };
            class Door_Pilot {
                source = "door";
                animPeriod = 0.8;
            };
            class Door_Cargo {
                source = "door";
                animPeriod = 1;
                initPhase = 0;
                sound = "ServoDoorsSound";
                soundPosition = "pos cargo dir";
            };
            class muzzle_rot_hmg {
                weapon = "rhs_weap_gsh30";
                source = "ammorandom";
            };
            class muzzle_hide_hmg {
                weapon = "rhs_weap_gsh30";
                source = "reload";
            };
            class exhaust_hide {
                source = "user";
                initPhase = 0;
                animPeriod = 0.00001;
                mass = 1;
                displayName = "hide exhaust";
            };
            class rwr_lights_lock {
                source = "user";
                initPhase = 0;
                animPeriod = 8;
            };
            class rwr_lock_dir_primary: rwr_lights_lock {
                animPeriod = 0.1;
            };
            class rwr_lock_primary: rwr_lights_lock {
                animPeriod = 0.0000001;
            };
            class rwr_signal_strenght: rwr_lights_lock {
                animPeriod = 0.0000001;
            };
            class rwr_lights: rwr_lock_primary {};
            class damper_1_1_source {
                source = "damper";
                wheel = "wheel_1_1";
            };
            class damper_2_1_source {
                source = "damper";
                wheel = "wheel_2_1";
            };
            class damper_2_2_source {
                source = "damper";
                wheel = "wheel_2_2";
            };
            class wheel_1_1_source {
                source = "wheel";
                wheel = "wheel_1_1";
            };
            class wheel_2_1_source {
                source = "wheel";
                wheel = "wheel_2_1";
            };
            class wheel_2_2_source {
                source = "wheel";
                wheel = "wheel_2_2";
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
        };
        class compartmentsLights {
            class Comp1 {
                class Light_Pilot {
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
                        hardLimitStart = 0.55;
                        hardLimitEnd = 0.95;
                    };
                    point = "light_pilot";
                };
            };
            class Comp2 {
                class Light_Gunner {
                    color[] = {40, 20, 20};
                    ambient[] = {0, 0, 0};
                    intensity = 3.5;
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
                        hardLimitStart = 0.75;
                        hardLimitEnd = 1.05;
                    };
                    point = "light_gunner";
                };
            };
        };
        class Reflectors {
            class Light {
                color[] = {7000, 7500, 10000};
                ambient[] = {70, 75, 100};
                intensity = 50;
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
                flareSize = 0.75;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 0;
                    hardLimitStart = 200;
                    hardLimitEnd = 250;
                };
            };
            class Light_Flare: Light {
                intensity = 0.5;
                useFlare = 1;
                innerAngle = 5;
                outerAngle = 175;
            };
        };
        aggregateReflectors[] = {{"Light", "Light_Flare"}};
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
                color[] = {1, 1, 1};
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
        class RenderTargets {
            class LeftMirror {
                renderTarget = "rendertarget0";
                class CameraView1 {
                    pointPosition = "m1p";
                    pointDirection = "m1d";
                    renderQuality = 2;
                    renderVisionMode = 4;
                    fov = 0.7;
                };
            };
            class RightMirror {
                renderTarget = "rendertarget1";
                class CameraView1 {
                    pointPosition = "m2p";
                    pointDirection = "m2d";
                    renderQuality = 2;
                    renderVisionMode = 4;
                    fov = 0.7;
                };
            };
        };
        class EventHandlers: Eventhandlers {
            class RHS_EventHandlers {
                init = "_this call rhs_fnc_air_init";
                postInit = "_this call rhs_fnc_reapplyTextures";
                getIn = "_this call rhs_fnc_mi24_doors";
                getOut = "_this call rhs_fnc_mi24_doors";
            };
        };
    };
    class RHS_Mi24V_Base: RHS_Mi24_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24V_Base.paa";
        displayName = "Mi-24V";
        model = "\rhsafrf\addons\rhs_a2port_air\mi35\mi24_v";
        picture = "\rhsafrf\addons\rhs_a2port_air\data\ico\rhs_mi24v_pic_ca.paa";
        tf_isolatedAmount_api = 0.6;
        LESH_canBeTowed = 1;
        LESH_towFromFront = 1;
        LESH_AxisOffsetTarget[] = {-0.12, 8.5, -2.21};
        LESH_WheelOffset[] = {-0.12, 1};
        weapons[] = {"rhs_weap_MASTERSAFE", "rhs_weap_DIRCM_Lipa"};
        magazines[] = {
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa"
        };
        selectionFireAnim = "";
        class AnimationSources: AnimationSources {
            class Gatling_1 {
                source = "revolving";
                weapon = "rhs_weap_yakB";
            };
            class muzzle_rot_hmg {
                weapon = "rhs_weap_yakB";
                source = "ammorandom";
            };
            class muzzle_hide_hmg {
                weapon = "rhs_weap_yakB";
                source = "reload";
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                body = "mainTurret";
                gun = "mainGun";
                weapons[] = {"rhs_weap_MASTERSAFE", "rhs_weap_yakB", "rhs_weap_fcs_mi24"};
                magazines[] = {"rhs_mag_127x108mm_1SLT_1470", "rhs_laserfcsmag"};
                gunBeg = "muzzle_1";
                gunEnd = "chamber_1";
                memoryPointGun = "chamber_1";
                particlesPos = "chamber_1";
                particlesDir = "muzzle_1";
                selectionFireAnim = "";
                maxhorizontalrotspeed = 1.6;
                maxverticalrotspeed = 1.6;
                initelev = 4;
                initturn = 0;
                maxelev = 20;
                minelev = -60;
                maxturn = 60;
                minturn = -60;
                primarygunner = 1;
                stabilizedInAxes = 2;
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
        };
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class pylon1: pylon1 {
                        attachment = "rhs_mag_b8v20a_s8kom";
                        turret[] = {};
                    };
                    class pylon2: pylon2 {
                        attachment = "rhs_mag_b8v20a_s8kom";
                        turret[] = {};
                    };
                    class pylon3: pylon3 {
                        attachment = "rhs_mag_b8v20a_s8df";
                        turret[] = {};
                    };
                    class pylon4: pylon4 {
                        attachment = "rhs_mag_b8v20a_s8df";
                        turret[] = {};
                    };
                    class pylon5: pylon5 {
                        attachment = "rhs_mag_9M120M_Mi24_2x";
                        turret[] = {0};
                    };
                    class pylon6: pylon6 {
                        attachment = "rhs_mag_9M120M_Mi24_2x";
                        turret[] = {0};
                    };
                    class cmDispenser: cmDispenser {};
                };
            };
        };
        memoryPointGun[] = {"chase01", "chase02", "chase03", "chase04"};
        gunBeg[] = {
            "chase01dir",
            "chase02dir",
            "chase03dir",
            "chase04dir"
        };
        gunEnd[] = {"chase01", "chase02", "chase03", "chase04"};
    };
    class RHS_Mi24D_Base: RHS_Mi24V_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24V_Base.paa";
        displayName = "$STR_RHS_MI24D_Name";
        class AnimationSources: AnimationSources {
            class exhaust_hide {
                source = "user";
                initPhase = 1;
                animPeriod = 0.00001;
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
        weapons[] = {"rhs_weap_MASTERSAFE"};
        magazines[] = {};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"rhs_weap_MASTERSAFE", "rhs_weap_yakB"};
                magazines[] = {"rhs_mag_127x108mm_1SLT_1470"};
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
        };
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class pylon1: pylon1 {
                        attachment = "rhs_mag_ub32_s5ko";
                        turret[] = {};
                    };
                    class pylon2: pylon2 {
                        attachment = "rhs_mag_ub32_s5ko";
                        turret[] = {};
                    };
                    class pylon3: pylon3 {
                        attachment = "rhs_mag_ub32_s5k1";
                        turret[] = {};
                    };
                    class pylon4: pylon4 {
                        attachment = "rhs_mag_ub32_s5k1";
                        turret[] = {};
                    };
                    class pylon5: pylon5 {
                        attachment = "rhs_mag_9M17P_Mi24_2x";
                        turret[] = {0};
                    };
                    class pylon6: pylon6 {
                        attachment = "rhs_mag_9M17P_Mi24_2x";
                        turret[] = {0};
                    };
                    class cmDispenser: cmDispenser {};
                };
            };
        };
    };
    class RHS_Mi24D_Early_Base: RHS_Mi24D_Base {
        displayName = "$STR_RHS_MI24D_Early_Name";
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class pylon1: pylon1 {
                        attachment = "rhs_mag_ub32_s5ko";
                        turret[] = {};
                    };
                    class pylon2: pylon2 {
                        attachment = "rhs_mag_ub32_s5ko";
                        turret[] = {};
                    };
                    class pylon3: pylon3 {
                        attachment = "rhs_mag_ub32_s5k1";
                        turret[] = {};
                    };
                    class pylon4: pylon4 {
                        attachment = "rhs_mag_ub32_s5k1";
                        turret[] = {};
                    };
                    class pylon5: pylon5 {
                        attachment = "rhs_mag_9M17_Mi24_2x";
                        turret[] = {0};
                    };
                    class pylon6: pylon6 {
                        attachment = "rhs_mag_9M17_Mi24_2x";
                        turret[] = {0};
                    };
                    class cmDispenser: cmDispenser {};
                };
            };
        };
    };
    class RHS_Mi24P_VVS_Base: RHS_Mi24_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24P_VVS_Base.paa";
        accuracy = 0.5;
        side = 0;
        faction = "rhs_faction_vvs";
        LESH_canBeTowed = 1;
        LESH_towFromFront = 1;
        LESH_AxisOffsetTarget[] = {0.5, 8.5, -2.21};
        LESH_WheelOffset[] = {0.5, 1};
    };
    class RHS_Mi24P_vvs: RHS_Mi24P_VVS_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24P_vvs.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Mi24P_vvsc: RHS_Mi24P_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24P_vvsc.paa";
        faction = "rhs_faction_vvs_c";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        hiddenselectionstextures[] = {"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo1_co.paa", "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa", "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                init = "_this call rhs_fnc_air_init; _this call rhs_fnc_mi24_camo";
            };
        };
    };
    class RHS_Mi24P_CAS_VVS_Base: RHS_Mi24P_VVS_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24P_CAS_VVS_Base.paa";
        displayName = "$STR_RHS_MI24P_CAS_Name";
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class pylon1: pylon1 {
                        attachment = "rhs_mag_b8v20a_s8kom";
                        turret[] = {};
                    };
                    class pylon2: pylon2 {
                        attachment = "rhs_mag_b8v20a_s8kom";
                        turret[] = {};
                    };
                    class pylon3: pylon3 {
                        attachment = "rhs_mag_b8v20a_s8df";
                        turret[] = {};
                    };
                    class pylon4: pylon4 {
                        attachment = "rhs_mag_b8v20a_s8df";
                        turret[] = {};
                    };
                    class pylon5: pylon5 {
                        attachment = "rhs_mag_9M120M_Mi24_2x";
                        turret[] = {0};
                    };
                    class pylon6: pylon6 {
                        attachment = "rhs_mag_9M120M_Mi24_2x";
                        turret[] = {0};
                    };
                    class cmDispenser: cmDispenser {};
                };
            };
        };
    };
    class RHS_Mi24P_CAS_vvs: RHS_Mi24P_CAS_VVS_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24P_CAS_vvs.paa";
        scope = 1;
        scopeCurator = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Mi24P_CAS_vvsc: RHS_Mi24P_CAS_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24P_CAS_vvsc.paa";
        faction = "rhs_faction_vvs_c";
        scope = 1;
        scopeCurator = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo1_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa",
            "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                init = "_this call rhs_fnc_air_init; _this call rhs_fnc_mi24_camo";
            };
        };
    };
    class RHS_Mi24P_CAS_vdv: RHS_Mi24P_CAS_VVS_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24P_CAS_vdv.paa";
        scope = 1;
        scopeCurator = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_vdv";
        class AnimationSources: AnimationSources {
            class exhaust_hide {
                source = "user";
                initPhase = 1;
                animPeriod = 0.00001;
            };
        };
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo2_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo2_co.paa",
            "rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_o_co.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
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
    };
    class RHS_Mi24P_AT_VVS_Base: RHS_Mi24P_VVS_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24P_AT_VVS_Base.paa";
        displayName = "$STR_RHS_MI24P_AT_Name";
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class pylon1: pylon1 {
                        attachment = "rhs_mag_b8v20a_s8kom";
                        turret[] = {};
                    };
                    class pylon2: pylon2 {
                        attachment = "rhs_mag_b8v20a_s8kom";
                        turret[] = {};
                    };
                    class pylon3: pylon3 {
                        attachment = "rhs_mag_9M120M_Mi24_2x";
                        turret[] = {0};
                    };
                    class pylon4: pylon4 {
                        attachment = "rhs_mag_9M120M_Mi24_2x";
                        turret[] = {0};
                    };
                    class pylon5: pylon5 {
                        attachment = "rhs_mag_9M120M_Mi24_2x";
                        turret[] = {0};
                    };
                    class pylon6: pylon6 {
                        attachment = "rhs_mag_9M120M_Mi24_2x";
                        turret[] = {0};
                    };
                    class cmDispenser: cmDispenser {};
                };
            };
        };
    };
    class RHS_Mi24P_AT_vvs: RHS_Mi24P_AT_VVS_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24P_AT_vvs.paa";
        scope = 1;
        scopeCurator = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Mi24P_AT_vvsc: RHS_Mi24P_AT_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24P_AT_vvsc.paa";
        faction = "rhs_faction_vvs_c";
        scope = 1;
        scopeCurator = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo1_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa",
            "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                init = "_this call rhs_fnc_air_init; _this call rhs_fnc_mi24_camo";
            };
        };
    };
    class RHS_Mi24P_AT_vdv: RHS_Mi24P_AT_VVS_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24P_AT_vdv.paa";
        scope = 1;
        scopeCurator = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_vdv";
        class AnimationSources: AnimationSources {
            class exhaust_hide {
                source = "user";
                initPhase = 1;
                animPeriod = 0.00001;
            };
        };
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo2_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo2_co.paa",
            "rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_o_co.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
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
    };
    class RHS_Mi24P_vdv: RHS_Mi24P_vvsc {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24P_vdv.paa";
        faction = "rhs_faction_vdv";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
        class AnimationSources: AnimationSources {
            class exhaust_hide {
                source = "user";
                initPhase = 1;
                animPeriod = 0.00001;
            };
        };
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo2_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo2_co.paa",
            "rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_o_co.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
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
    };
    class RHS_Mi24V_VVS_Base: RHS_Mi24V_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24V_VVS_Base.paa";
        accuracy = 0.5;
        side = 0;
        faction = "rhs_faction_vvs";
    };
    class RHS_Mi24V_vvs: RHS_Mi24V_VVS_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24V_vvs.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Mi24V_vvsc: RHS_Mi24V_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24V_vvsc.paa";
        faction = "rhs_faction_vvs_c";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo1_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa",
            "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class RHS_Mi24V_FAB_VVS_Base: RHS_Mi24V_VVS_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24V_FAB_VVS_Base.paa";
        faction = "rhs_faction_vvs";
        displayName = "$STR_RHS_MI24V_FAB_Name";
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class pylon1: pylon1 {
                        attachment = "rhs_mag_fab250";
                        turret[] = {0};
                    };
                    class pylon2: pylon2 {
                        attachment = "rhs_mag_fab250";
                        turret[] = {0};
                    };
                    class pylon3: pylon3 {
                        attachment = "rhs_mag_b8v20a_s8kom";
                        turret[] = {};
                    };
                    class pylon4: pylon4 {
                        attachment = "rhs_mag_b8v20a_s8kom";
                        turret[] = {};
                    };
                    class pylon5: pylon5 {
                        attachment = "rhs_mag_9M120M_Mi24_2x";
                        turret[] = {0};
                    };
                    class pylon6: pylon6 {
                        attachment = "rhs_mag_9M120M_Mi24_2x";
                        turret[] = {0};
                    };
                    class cmDispenser: cmDispenser {};
                };
            };
        };
    };
    class RHS_Mi24V_FAB_vvs: RHS_Mi24V_FAB_VVS_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24V_FAB_vvs.paa";
        scope = 1;
        scopeCurator = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Mi24V_FAB_vvsc: RHS_Mi24V_FAB_vvs {
        faction = "rhs_faction_vvs_c";
        scope = 1;
        scopeCurator = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo1_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa",
            "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                init = "_this call rhs_fnc_air_init; _this call rhs_fnc_mi24_camo";
            };
        };
    };
    class RHS_Mi24V_FAB_vdv: RHS_Mi24V_FAB_VVS_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24V_FAB_vdv.paa";
        scope = 1;
        scopeCurator = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_vdv";
        class AnimationSources: AnimationSources {
            class exhaust_hide {
                source = "user";
                initPhase = 1;
                animPeriod = 0.00001;
            };
        };
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo2_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo2_co.paa",
            "rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_o_co.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
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
    };
    class RHS_Mi24V_UPK23_VVS_Base: RHS_Mi24V_VVS_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24V_UPK23_VVS_Base.paa";
        faction = "rhs_faction_vvs";
        displayName = "$STR_RHS_MI24V_UPK_Name";
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class pylon1: pylon1 {
                        attachment = "rhs_mag_upk23_mixed";
                        turret[] = {};
                    };
                    class pylon2: pylon2 {
                        attachment = "rhs_mag_upk23_mixed";
                        turret[] = {};
                    };
                    class pylon3: pylon3 {
                        attachment = "rhs_mag_b8v20a_s8kom";
                        turret[] = {};
                    };
                    class pylon4: pylon4 {
                        attachment = "rhs_mag_b8v20a_s8kom";
                        turret[] = {};
                    };
                    class pylon5: pylon5 {
                        attachment = "rhs_mag_9M120M_Mi24_2x";
                        turret[] = {0};
                    };
                    class pylon6: pylon6 {
                        attachment = "rhs_mag_9M120M_Mi24_2x";
                        turret[] = {0};
                    };
                    class cmDispenser: cmDispenser {};
                };
            };
        };
    };
    class RHS_Mi24V_UPK23_vvs: RHS_Mi24V_UPK23_VVS_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24V_UPK23_vvs.paa";
        scope = 1;
        scopeCurator = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Mi24V_UPK23_vvsc: RHS_Mi24V_UPK23_vvs {
        faction = "rhs_faction_vvs_c";
        scope = 1;
        scopeCurator = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo1_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa",
            "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                init = "_this call rhs_fnc_air_init; _this call rhs_fnc_mi24_camo";
            };
        };
    };
    class RHS_Mi24V_UPK23_vdv: RHS_Mi24V_UPK23_VVS_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24V_UPK23_vdv.paa";
        scope = 1;
        scopeCurator = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_vdv";
        class AnimationSources: AnimationSources {
            class exhaust_hide {
                source = "user";
                initPhase = 1;
                animPeriod = 0.00001;
            };
        };
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo2_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo2_co.paa",
            "rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_o_co.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
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
    };
    class RHS_Mi24V_AT_VVS_Base: RHS_Mi24V_VVS_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24V_AT_VVS_Base.paa";
        faction = "rhs_faction_vvs";
        displayName = "$STR_RHS_MI24V_AT_Name";
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class pylon1: pylon1 {
                        attachment = "rhs_mag_b8v20a_s8kom";
                        turret[] = {};
                    };
                    class pylon2: pylon2 {
                        attachment = "rhs_mag_b8v20a_s8kom";
                        turret[] = {};
                    };
                    class pylon3: pylon3 {
                        attachment = "rhs_mag_9M120M_Mi24_2x";
                        turret[] = {0};
                    };
                    class pylon4: pylon4 {
                        attachment = "rhs_mag_9M120M_Mi24_2x";
                        turret[] = {0};
                    };
                    class pylon5: pylon5 {
                        attachment = "rhs_mag_9M120M_Mi24_2x";
                        turret[] = {0};
                    };
                    class pylon6: pylon6 {
                        attachment = "rhs_mag_9M120M_Mi24_2x";
                        turret[] = {0};
                    };
                    class cmDispenser: cmDispenser {};
                };
            };
        };
    };
    class RHS_Mi24V_AT_vvs: RHS_Mi24V_AT_VVS_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24V_AT_vvs.paa";
        scope = 1;
        scopeCurator = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Mi24V_AT_vvsc: RHS_Mi24V_AT_vvs {
        faction = "rhs_faction_vvs_c";
        scope = 1;
        scopeCurator = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo1_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa",
            "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                init = "_this call rhs_fnc_air_init; _this call rhs_fnc_mi24_camo";
            };
        };
    };
    class RHS_Mi24V_AT_vdv: RHS_Mi24V_AT_VVS_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24V_AT_vdv.paa";
        scope = 1;
        scopeCurator = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_vdv";
        class AnimationSources: AnimationSources {
            class exhaust_hide {
                source = "user";
                initPhase = 1;
                animPeriod = 0.00001;
            };
        };
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo2_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo2_co.paa",
            "rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_o_co.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
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
    };
    class RHS_Mi24Vt_vvs: RHS_Mi24V_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24Vt_vvs.paa";
        scope = 2;
        displayName = "$STR_RHS_MI24Vt_Name";
        author = "$STR_RHS_AUTHOR_FULL";
        model = "\rhsafrf\addons\rhs_a2port_air\mi35\mi24_vt";
        slingLoadMaxCargoMass = 2400;
        slingLoadMemoryPoint = "slingLoad0";
        LESH_canBeTowed = 1;
        LESH_towFromFront = 1;
        LESH_AxisOffsetTarget[] = {-0.12, 8.5, -2.21};
        LESH_WheelOffset[] = {-0.12, 1};
        class Components: Components {
            class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsDisplayManagerComponentLeft {
                class Components {
                    class EmptyDisplay {
                        componentType = "EmptyDisplayComponent";
                    };
                    class CrewDisplay {
                        componentType = "CrewDisplayComponent";
                        resource = "RscCustomInfoCrew";
                    };
                    class SlingLoadDisplay {
                        componentType = "SlingLoadDisplayComponent";
                        resource = "RscCustomInfoSlingLoad";
                    };
                };
            };
            class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsDisplayManagerComponentRight {
                class Components {
                    class EmptyDisplay {
                        componentType = "EmptyDisplayComponent";
                    };
                    class CrewDisplay {
                        componentType = "CrewDisplayComponent";
                        resource = "RscCustomInfoCrew";
                    };
                    class SlingLoadDisplay {
                        componentType = "SlingLoadDisplayComponent";
                        resource = "RscCustomInfoSlingLoad";
                    };
                };
            };
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons {
                    UIPicture = "\rhsafrf\addons\rhs_a2port_air\data\loadouts\RHS_Mi24_EDEN_CA.paa";
                    class cmDispenser {
                        hardpoints[] = {"RHS_cm_ASO2", "RHS_cm_ASO2_x2", "RHS_cm_ASO2_x4"};
                        priority = 1;
                        attachment = "rhs_ASO2_CMFlare_Chaff_Magazine_x4";
                        maxweight = 800;
                        UIposition[] = {0.33, 0};
                    };
                };
            };
        };
    };
    class RHS_Mi24Vt_vvsc: RHS_Mi24Vt_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24Vt_vvsc.paa";
        faction = "rhs_faction_vvs_c";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo1_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa",
            "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                init = "_this call rhs_fnc_air_init; _this call rhs_fnc_mi24_camo";
            };
        };
    };
    class RHS_Mi24V_vdv: RHS_Mi24V_vvsc {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24V_vdv.paa";
        faction = "rhs_faction_vdv";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
        class AnimationSources: AnimationSources {
            class exhaust_hide {
                source = "user";
                initPhase = 1;
                animPeriod = 0.00001;
            };
        };
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo2_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo2_co.paa",
            "rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_o_co.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa",
            "rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
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
    };
    class RHS_Mi8_base: Heli_Light_02_base_F {
        dlc = "RHS_AFRF";
        LESH_canBeTowed = 1;
        LESH_towFromFront = 1;
        LESH_AxisOffsetTarget[] = {0, 7.5, -2.4};
        LESH_WheelOffset[] = {0, 0.6};
        Icon = "\rhsafrf\addons\rhs_a2port_air\data\map_ico\icomap_mi17_mg_ca.paa";
        rhs_decalParameters[] = {"['Number',cRHSAIRMI8NumberPlaces,'AviaYellow']"};
        class PilotCamera {};
        category = "Air";
        availableForSupportTypes[] = {"Drop", "Transport"};
        picture = "\rhsafrf\addons\rhs_a2port_air\data\ico\rhs_mi8_pic_ca.paa";
        mapsize = 25;
        maxspeed = 240;
        fuelCapacity = 1870;
        AGM_fuelCapacity = 1870;
        fuelConsumptionRate = 0.33;
        mainBladeRadius = 11;
        backRotorForceCoef = 0.9;
        tailBladeCenter = "tail_blade_center";
        mainBladeCenter = "main_blade_center";
        altFullForce = 4500;
        altNoForce = 6000;
        mainRotorSpeed = 1;
        backrotorspeed = 1;
        liftForceCoef = 1;
        bodyFrictionCoef = 1.25;
        numberPhysicalWheels = 3;
        class RotorLibHelicopterProperties: RotorLibHelicopterProperties {
            RTDconfig = "rhsafrf\addons\rhs_c_a2port_air\Mi17\RTD_MI8.xml";
            autoHoverCorrection[] = {4.3, -1.7, 0};
            defaultCollective = 0.665;
            retreatBladeStallWarningSpeed = 92.583;
            maxTorque = 201754;
            stressDamagePerSec = 0.00333333;
            maxHorizontalStabilizerLeftStress = 10000;
            maxHorizontalStabilizerRightStress = 10000;
            maxVerticalStabilizerStress = 10000;
            horizontalWingsAngleCollMin = 0;
            horizontalWingsAngleCollMax = 0;
            maxMainRotorStress = 320000;
            maxTailRotorStress = 60000;
        };
        model = "\rhsafrf\addons\rhs_a2port_air\mi17\Mi_8MT";
        displayname = "$STR_RHS_MI8_Name";
        crew = "rhs_pilot_transport_heli";
        typicalCargo[] = {"rhs_pilot_transport_heli"};
        cargoaction[] = {"RHS_Mi17_Cargo02"};
        drivercompartments = "Compartment1";
        cargocompartments[] = {"Compartment1", "Compartment1"};
        audible = 6;
        camShakeCoef = 0.8;
        cargoiscodriver[] = {1, 0};
        cost = 900000;
        irTarget = 1;
        irTargetSize = 0.9;
        visualTarget = 1;
        visualTargetSize = 1;
        radarTarget = 1;
        radarTargetSize = 1;
        LockDetectionSystem = "0";
        incomingMissileDetectionSystem = "0";
        vehicleClass = "rhs_vehclass_helicopter";
        editorSubcategory = "rhs_EdSubcat_helicopter";
        weapons[] = {};
        magazines[] = {};
        driveraction = "RHS_Mi8_Pilot";
        driverinaction = "RHS_Mi8_Pilot";
        unitInfoType = "RHS_RscUnitInfoAir_Mi8";
        unitInfoTypeRTD = "RHS_RscUnitInfoAir_RTD_Mi8";
        unitInfoTypeLite = "RHS_RscUnitInfoAir_RTD_Basic_Mi8";
        precisegetinout = 0;
        GetInAction = "GetInHeli_Transport_01Cargo";
        getOutAction = "RHS_HIND_Cargo_Exit";
        enablemanualfire = 0;
        maxOmega = 2000;
        engineMOI = 10;
        class Wheels {
            disableWheelsWhenDestroyed = 1;
            class Wheel_1 {
                steering = 1;
                side = "left";
                boneName = "damper_front";
                suspForceAppPointOffset = "wheel_1_axis";
                tireForceAppPointOffset = "wheel_1_axis";
                center = "wheel_1_axis";
                boundary = "wheel_1_bound";
                suspTravelDirection[] = {0, -1, 0};
                width = 0.488;
                mass = 15;
                MOI = 0.62208;
                dampingRate = 0.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 2000;
                maxHandBrakeTorque = 0;
                maxCompression = 0;
                maxDroop = 0.1;
                sprungMass = 200;
                springStrength = 600;
                springDamperRate = 99280;
                longitudinalStiffnessPerUnitGravity = 5000;
                latStiffX = 2.5;
                latStiffY = 18;
                frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1, 1}};
            };
            class Wheel_2: Wheel_1 {
                steering = 0;
                side = "left";
                boneName = "damper_left";
                suspForceAppPointOffset = "wheel_2_axis";
                tireForceAppPointOffset = "wheel_2_axis";
                center = "wheel_2_axis";
                boundary = "wheel_2_bound";
                sprungMass = 667;
                MOI = 1.323;
                width = 0.27;
                maxDroop = 0.2;
            };
            class Wheel_3: Wheel_2 {
                side = "right";
                boneName = "damper_right";
                suspForceAppPointOffset = "wheel_3_axis";
                tireForceAppPointOffset = "wheel_3_axis";
                center = "wheel_3_axis";
                boundary = "wheel_3_bound";
            };
        };
        gearRetracting = 0;
        driveOnComponent[] = {"wheels"};
        drivercansee = "2+4+16";
        gunnercansee = "2+4+8+16";
        slingLoadMaxCargoMass = 2700;
        maximumLoad = 3500;
        supplyradius = 2.5;
        transportammo = 0;
        transportmaxbackpacks = 10;
        transportsoldier = 15;
        threat[] = {0.5, 0, 0};
        selectionHRotorStill = "velka vrtule staticka";
        selectionHRotorMove = "velka vrtule blur";
        selectionVRotorStill = "mala vrtule staticka";
        selectionVRotorMove = "mala vrtule blur";
        selectionDamage = "trup";
        selectionShowDamage = "poskozeni";
        driverLeftHandAnimName = "stick_pilot";
        driverRightHandAnimName = "stick_pilot";
        memoryPointLRocket = "l raketa";
        memoryPointRRocket = "p raketa";
        memoryPointLMissile = "l strela";
        memoryPointRMissile = "p strela";
        memoryPointGun[] = {"chase01", "chase02", "chase03", "chase04"};
        class TransportBackpacks {
            class _xx_rhs_d6_Parachute_backpack {
                backpack = "rhs_d6_Parachute_backpack";
                count = 8;
            };
        };
        class TransportMagazines {
            class _xx_rhs_30Rnd_545x39_7N10_AK {
                magazine = "rhs_30Rnd_545x39_7N10_AK";
                count = 30;
            };
            class _xx_rhs_mag_rgd5 {
                magazine = "rhs_mag_rgd5";
                count = 10;
            };
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
            class _xx_Medikit {
                name = "Medikit";
                count = 1;
            };
            class _xx_Toolkit {
                name = "Toolkit";
                count = 1;
            };
        };
        class TransportWeapons {};
        class MFD {};
        hiddenSelections[] = {
            "Camo1",
            "Camo2",
            "Camo3",
            "Camo4",
            "n1",
            "n2",
            "tail_decals"
        };
        hiddenselectionstextures[] = {
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_g_vsr_co.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
        class textureSources {
            class standard {
                displayName = "Grey";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_g_vsr_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_co.paa"};
                factions[] = {};
            };
            class Civilian: standard {
                displayName = "Civilian";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8civil_body_g_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8civil_det_g_co.paa"};
            };
            class Camo: standard {
                displayName = "CDF";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_g_cdf_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_cdf_co.paa"};
            };
            class Camo1: standard {
                displayName = "Chedaki";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_g_chdkz_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_cdf_co.paa"};
            };
            class Camo2: standard {
                displayName = "Camo #1";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo1_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo1_co.paa"};
            };
            class Camo3: standard {
                displayName = "Camo #2";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo2_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo2_co.paa"};
            };
            class Camo4: standard {
                displayName = "Camo #3";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo3_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo_mvd_co.paa"};
            };
            class Camo5: standard {
                displayName = "Camo #4";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo4_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo3_co.paa"};
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
                expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHSAIRMI8NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
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
                expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRMI8NumberPlaces}else{[_this, [['Number', cRHSAIRMI8NumberPlaces, _this getVariable ['rhs_decalNumber_type','AviaYellow'], _value] ] ] call rhs_fnc_decalsInit}};";
            };
            class rhs_decalTail {
                displayName = "Define tail decal";
                tooltip = "Define tail decalthat will be drawn on vehicle";
                property = "rhs_decalTail";
                control = "Combo";
                expression = "[_this,[['Label', cRHSAIRMI8TailPlaces, 'Aviation',_value]]] call rhs_fnc_decalsInit";
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
        class Components: Components {
            class TransportPylonsComponent {
                UIPicture = "\rhsafrf\addons\rhs_a2port_air\data\loadouts\RHS_Mi8_NoPylon_EDEN_CA.paa";
                class pylons {
                    class cmDispenser {
                        hardpoints[] = {
                            "RHS_cm_ASO2",
                            "RHS_cm_ASO2_x2",
                            "RHS_cm_ASO2_x4",
                            "RHS_cm_ASO2_x6"
                        };
                        priority = 1;
                        attachment = "rhs_ASO2_CMFlare_Chaff_Magazine_x6";
                        maxweight = 800;
                        UIposition[] = {0.33, 0};
                    };
                };
            };
            class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                class Components {
                    class EmptyDisplay {
                        componentType = "EmptyDisplayComponent";
                    };
                    class CrewDisplay {
                        componentType = "CrewDisplayComponent";
                        resource = "RscCustomInfoCrew";
                    };
                    class SlingLoadDisplay {
                        componentType = "SlingLoadDisplayComponent";
                        resource = "RscCustomInfoSlingLoad";
                    };
                };
            };
            class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                defaultDisplay = "SensorDisplay";
                class Components {
                    class EmptyDisplay {
                        componentType = "EmptyDisplayComponent";
                    };
                    class CrewDisplay {
                        componentType = "CrewDisplayComponent";
                        resource = "RscCustomInfoCrew";
                    };
                    class SlingLoadDisplay {
                        componentType = "SlingLoadDisplayComponent";
                        resource = "RscCustomInfoSlingLoad";
                    };
                };
            };
        };
        class Turrets: Turrets {
            class CopilotTurret: CopilotTurret {
                proxyindex = 3;
                gunnername = "Co-pilot";
                gunneraction = "RHS_Mi8_Pilot";
                gunnerinaction = "RHS_Mi8_Pilot";
                gunnerGetInAction = "GetInHeli_Transport_01Cargo";
                gunnerGetOutAction = "RHS_HIND_Cargo_Exit";
                gunnercompartments = "Compartment1";
                gunnerLeftHandAnimName = "stick_copilot";
                gunnerRightHandAnimName = "stick_copilot";
                memoryPointsGetInGunner = "pos driver";
                memoryPointsGetInGunnerDir = "pos driver dir";
                precisegetinout = 0;
                canEject = 0;
                commanding = -1;
                class Reflectors {
                    class cabin {
                        color[] = {830, 100, 100};
                        ambient[] = {5, 0, 0};
                        intensity = 9;
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
                        color[] = {830, 100, 100};
                        position = "cargo_light_1";
                        direction = "cargo_light_1_dir";
                        hitpoint = "cargo_light_1";
                        selection = "cargo_light_1";
                        intensity = 10;
                        useFlare = 0;
                        coneFadeCoef = 0.1;
                        class Attenuation {
                            start = 0;
                            constant = 0;
                            linear = 1;
                            quadratic = 70;
                            hardLimitStart = 2;
                            hardLimitEnd = 2.5;
                        };
                    };
                    class cargo_light_2: cargo_light_1 {
                        position = "cargo_light_2";
                        direction = "cargo_light_2_dir";
                        hitpoint = "cargo_light_2";
                        selection = "cargo_light_2";
                    };
                    class cargo_light_3: cargo_light_1 {
                        position = "cargo_light_3";
                        direction = "cargo_light_3_dir";
                        hitpoint = "cargo_light_3";
                        selection = "cargo_light_3";
                    };
                };
                class Hitpoints {};
                class Components {
                    class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                        class Components {
                            class EmptyDisplay {
                                componentType = "EmptyDisplayComponent";
                            };
                            class CrewDisplay {
                                componentType = "CrewDisplayComponent";
                                resource = "RscCustomInfoCrew";
                            };
                            class SlingLoadDisplay {
                                componentType = "SlingLoadDisplayComponent";
                                resource = "RscCustomInfoSlingLoad";
                            };
                        };
                    };
                    class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                        class Components {
                            class EmptyDisplay {
                                componentType = "EmptyDisplayComponent";
                            };
                            class CrewDisplay {
                                componentType = "CrewDisplayComponent";
                                resource = "RscCustomInfoCrew";
                            };
                            class SlingLoadDisplay {
                                componentType = "SlingLoadDisplayComponent";
                                resource = "RscCustomInfoSlingLoad";
                            };
                        };
                    };
                };
            };
            class MainTurret: MainTurret {
                body = "mainTurret";
                gun = "mainGun";
                gunbeg = "muzzle_1";
                gunend = "chamber_1";
                gunnercompartments = "Compartment1";
                gunneraction = "RHS_Mi8_Gunner";
                gunnerinaction = "RHS_Mi8_Gunner";
                gunnerGetInAction = "GetInLow";
                gunnerGetOutAction = "GetOutLow";
                memorypointgun = "muzzle_1";
                memorypointgunneroptics = "gunnerview";
                gunnerLeftHandAnimName = "OtocHlaven";
                gunnerRightHandAnimName = "OtocHlaven";
                gunnerLeftLegAnimName = "gunner1_leg_left";
                gunnerRightLegAnimName = "gunner1_legs";
                LODTurnedOut = 1000;
                LODTurnedIn = 1000;
                LODOpticsOut = 1000;
                LODOpticsIn = 1000;
                commanding = -2;
                gunnername = "Crew Chief";
                gunneropticsmodel = "\A3\weapons_f\reticle\optics_empty";
                weapons[] = {"rhs_weap_pkt_v1"};
                magazines[] = {
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100",
                    "rhs_mag_762x54mm_100"
                };
                primarygunner = 0;
                initelev = -60;
                initturn = 90;
                maxelev = 25;
                maxturn = 130;
                minelev = -80;
                minturn = 30;
                stabilizedinaxes = 0;
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
                isCoPilot = 0;
                showAsCargo = 1;
                class Hitpoints {};
                class Components {
                    class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                        class Components {
                            class EmptyDisplay {
                                componentType = "EmptyDisplayComponent";
                            };
                            class CrewDisplay {
                                componentType = "CrewDisplayComponent";
                                resource = "RscCustomInfoCrew";
                            };
                        };
                    };
                    class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                        defaultDisplay = "";
                        class Components {
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
            class BackTurret: MainTurret {
                commanding = -3;
                LODTurnedOut = 1000;
                LODTurnedIn = 1000;
                LODOpticsOut = 1000;
                LODOpticsIn = 1000;
                animationsourcebody = "Turret_2";
                animationsourcegun = "Gun_2";
                body = "Turret_2";
                gun = "Gun_2";
                gunbeg = "muzzle_2";
                gunend = "chamber_2";
                memorypointgun = "muzzle_2";
                memorypointgunneroptics = "gunnerview2";
                selectionfireanim = "zasleh2";
                gunnerLeftHandAnimName = "OtocHlaven2";
                gunnerRightHandAnimName = "OtocHlaven2";
                gunnerLeftLegAnimName = "gunner2_legs";
                gunnerRightLegAnimName = "gunner2_leg_right";
                gunneraction = "rhs_mi8_Gunner";
                gunnerinaction = "rhs_mi8_Gunner";
                gunnercompartments = "Compartment1";
                gunnername = "Rear Gunner";
                initelev = -60;
                initturn = -155;
                maxelev = 25;
                maxturn = -45;
                minelev = -80;
                minturn = -185;
                primarygunner = 0;
                proxyindex = 2;
                stabilizedinaxes = 0;
                weapons[] = {"rhs_weap_pkt_v2"};
                class Hitpoints {};
            };
        };
        armor = 40;
        armorStructural = 20;
        hullDamageCauseExplosion = 1;
        hullExplosionDelay[] = {10, 20};
        damageresistance = 0.00172;
        epeImpulseDamageCoef = 1;
        class HitPoints: HitPoints {
            class HitHull {
                simulation = "RHS_Hull_Helicopter";
                armor = -100;
                minimalHit = -0.2;
                explosionShielding = 2;
                radius = 0.4;
                armorComponent = "Hit_Hull";
                name = "hit_hull";
                visual = "zbytek";
                passThrough = 1;
                class DestructionEffects: RHS_Effects_Helicopter_Hull_Destruction {};
            };
            class HitFuel: HitFuel {
                armor = 10;
                radius = 0.25;
                minimalHit = 0.05;
            };
            class HitEngine1 {
                armor = 1.2;
                radius = 0.4;
                material = -1;
                explosionShielding = 3;
                minimalHit = 0.1;
                passThrough = 1;
                visual = "motor";
                name = "engine_1_hit";
            };
            class HitEngine2: HitEngine1 {
                name = "engine_2_hit";
            };
            class HitEngine: HitEngine2 {
                armor = 999;
                name = "engine_hit";
                depends = "0.5 * (HitEngine1 + HitEngine2)";
            };
            class HitAvionics {
                armor = "0.15*2";
                explosionShielding = 1;
                material = 51;
                passThrough = 1;
                name = "avionics_hit";
                visual = "-";
            };
            class HitTail {
                armor = -150;
                explosionShielding = 0.2;
                passThrough = 0.1;
                minimalHit = -0.15;
                radius = 0.13;
                armorComponent = "Hit_Tail";
                name = "Hit_Tail";
                visual = "vis_tail";
            };
            class HitVRotor {
                armor = "0.5*2";
                explosionShielding = 1;
                passThrough = 0.3;
                name = "tail_rotor_hit";
                visual = "mala vrtule staticka";
                depends = "HitTail";
                armorComponent = "Hit_Rotor_Rear";
            };
            class HitHRotor {
                armor = "0.5*2";
                explosionShielding = 1;
                material = 51;
                passThrough = 0.1;
                name = "main_rotor_hit";
                visual = "velka vrtule staticka";
                armorComponent = "Hit_Rotor_Main";
            };
            class HitHydraulics {
                armor = -50;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.13;
                name = "hit_hydraulics";
                visual = "-";
            };
            class HitTransmission {
                armor = -80;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.13;
                name = "hit_transmission";
                visual = "-";
            };
            class HitGlass1 {
                armor = -10;
                explosionShielding = 1.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.1;
                armorComponent = "glass1";
                name = "glass1";
                visual = "glass1";
            };
            class HitGlass2 {
                armor = -10;
                explosionShielding = 1.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.1;
                armorComponent = "glass2";
                name = "glass2";
                visual = "glass2";
            };
            class HitGlass3 {
                armor = -10;
                explosionShielding = 1.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.1;
                armorComponent = "glass3";
                name = "glass3";
                visual = "glass3";
            };
            class HitGlass4 {
                armor = -10;
                explosionShielding = 1.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.1;
                armorComponent = "glass4";
                name = "glass4";
                visual = "glass4";
            };
            class HitGlass5 {
                armor = -10;
                explosionShielding = 1.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.1;
                armorComponent = "glass5";
                name = "glass5";
                visual = "glass5";
            };
            class HitGlass6 {
                armor = -10;
                explosionShielding = 1.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.1;
                armorComponent = "glass6";
                name = "glass6";
                visual = "glass6";
            };
            class HitGlass7 {
                armor = -10;
                explosionShielding = 1.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.1;
                armorComponent = "glass7";
                name = "glass7";
                visual = "glass7";
            };
            class HitGlass8 {
                armor = -10;
                explosionShielding = 1.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.1;
                armorComponent = "glass8";
                name = "glass8";
                visual = "glass8";
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
                minimalHit = -0.1;
                explosionShielding = 0.1;
                radius = 0.75;
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
                minimalHit = -0.1;
                explosionShielding = 0.1;
                radius = 0.75;
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
        };
        class Reflectors {
            class LSvetla {
                color[] = {1100, 1000, 900};
                ambient[] = {1100, 1000, 900};
                position = "L svetlo";
                direction = "konec L svetla";
                hitpoint = "L svetlo";
                selection = "L svetlo";
                size = 1;
                innerAngle = 30;
                outerAngle = 120;
                coneFadeCoef = 5;
                intensity = 100;
                useFlare = 1;
                dayLight = 0;
                flareSize = 0.75;
                class Attenuation {
                    start = 1;
                    constant = 1;
                    linear = 0;
                    quadratic = 15;
                };
            };
            class RSvetla: LSvetla {
                position = "P svetlo";
                direction = "konec P svetla";
                hitpoint = "P svetlo";
                selection = "P svetlo";
            };
        };
        class MarkerLights {
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
                color[] = {1, 1, 1};
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
        class AnimationSources: AnimationSources {
            class cargolights_hide {
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
            };
            class cabinlights_hide: cargolights_hide {};
            class bench_hide: cargolights_hide {
                mass = 1;
                displayname = "hide benches";
                onPhaseChanged = "{(_this select 0) lockCargo [_x,(_this select 1) isEqualTo 1]}foreach [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,17,18];";
            };
            class intake_hide: cargolights_hide {
                mass = 1;
                displayname = "hide intake covers";
            };
            class LeftDoor {
                source = "user";
                animPeriod = 0.8;
                initPhase = 1;
            };
            class RearDoors {
                source = "door";
                animPeriod = 1.6;
                initPhase = 0;
                sound = "ServoDoorsSound";
                soundPosition = "pos cargo dir";
                mass = 1;
                displayname = "open rear doors";
                onPhaseChanged = "(_this select 0) animateDoor ['RearDoors',_this select 1]";
            };
            class hide_turrets {
                source = "user";
                animPeriod = 0.000000000000001;
                initPhase = 0;
            };
            class hide_door_hatch {
                source = "user";
                animPeriod = 0.000000000000001;
                initPhase = 1;
            };
            class ReloadAnim {
                source = "reload";
                weapon = "rhs_weap_pkt_v1";
            };
            class ReloadMagazine {
                source = "reloadmagazine";
                weapon = "rhs_weap_pkt_v1";
            };
            class Revolving {
                source = "revolving";
                weapon = "rhs_weap_pkt_v1";
            };
            class ReloadAnim_2 {
                source = "reload";
                weapon = "rhs_weap_pkt_v2";
            };
            class ReloadMagazine_2 {
                source = "reloadmagazine";
                weapon = "rhs_weap_pkt_v2";
            };
            class Revolving_2 {
                source = "revolving";
                weapon = "rhs_weap_pkt_v2";
            };
            class muzzle_rot_hmg1: ReloadMagazine {
                source = "ammorandom";
            };
            class muzzle_rot_hmg2: ReloadMagazine_2 {
                source = "ammorandom";
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
            class Helicopter_Brakes {
                source = "user";
                animPeriod = 0.01;
                initPhase = 1;
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_amt.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_amt_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_amt_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_glass.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_glass_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_glass_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_glass_in.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_glass_in_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_glass_in_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_inter.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_inter_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_inter_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_air\data\pkm.rvmat",
                "rhsafrf\addons\rhs_a2port_air\data\pkm.rvmat",
                "rhsafrf\addons\rhs_a2port_air\data\pkm_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_mtv.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_mtv_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_mtv_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8t\mi8t_tv2.rvmat",
                "rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8t\mi8t_tv2_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8t\mi8t_tv2_destruct.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class RenderTargets {
            class LeftMirror {
                renderTarget = "rendertarget0";
                class CameraView1 {
                    pointPosition = "m1p";
                    pointDirection = "m1d";
                    renderQuality = 2;
                    renderVisionMode = 4;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_0_TL", "PIP_0_TR", "PIP_0_BL", "PIP_0_BR"};
            };
            class RightMirror {
                renderTarget = "rendertarget1";
                class CameraView1 {
                    pointPosition = "m2p";
                    pointDirection = "m2d";
                    renderQuality = 2;
                    renderVisionMode = 4;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_1_TL", "PIP_1_TR", "PIP_1_BL", "PIP_1_BR"};
            };
        };
        class UserActions {
            class ToggleLight {
                displayName = "Toggle interior light";
                position = "pos driver";
                radius = 15;
                showwindow = 0;
                condition = "player in this;";
                statement = "[this,'cargolights_hide'] call rhs_fnc_toggleIntLight";
                onlyforplayer = 1;
            };
            class WheelBrakes: ToggleLight {
                displayName = "Toggle Wheel Brakes";
                shortcut = "binocular";
                condition = "!difficultyEnabledRTD && (call rhs_fnc_findPlayer) isEqualTo (driver this)";
                statement = "[this] call rhs_fnc_heli_wheelBrakes";
            };
        };
        class EventHandlers: Eventhandlers {
            class RHS_EventHandlers {
                init = "_this call rhs_fnc_air_init";
                postInit = "_this call rhs_fnc_reapplyTextures";
            };
            class BIS_Randomisation {
                init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;}";
            };
        };
    };
    class rhs_mi8mtv3_base: RHS_Mi8_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_mi8mtv3_base.paa";
        transportsoldier = 13;
        cost = 2000000;
        threat[] = {0.8, 0.8, 0.6};
        drivercompartments = "Compartment1";
        cargocompartments[] = {"Compartment1"};
        cargoiscodriver[] = {0};
        tf_isolatedAmount_api = 0.4;
        LockDetectionSystem = "8";
        incomingMissileDetectionSystem = "8";
        model = "\rhsafrf\addons\rhs_a2port_air\mi17\Mi_8MTV_3";
        displayName = "$STR_RHS_MI8MTV3_Name";
        class Turrets: Turrets {
            class CopilotTurret: CopilotTurret {
                LODTurnedIn = 1100;
                LODTurnedOut = 1100;
                LODOpticsOut = 1100;
                LODOpticsIn = 1100;
                proxyindex = 4;
                class Components {
                    class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                        class Components {
                            class EmptyDisplay {
                                componentType = "EmptyDisplayComponent";
                            };
                            class MinimapDisplay {
                                componentType = "MinimapDisplayComponent";
                                resource = "RscCustomInfoMiniMap";
                            };
                            class CrewDisplay {
                                componentType = "CrewDisplayComponent";
                                resource = "RscCustomInfoCrew";
                            };
                            class SlingLoadDisplay {
                                componentType = "SlingLoadDisplayComponent";
                                resource = "RscCustomInfoSlingLoad";
                            };
                            class SensorDisplay {
                                componentType = "SensorsDisplayComponent";
                                resource = "RscCustomInfoSensors";
                                range[] = {3000, 8000, 16000, 35000};
                            };
                        };
                    };
                    class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                        defaultDisplay = "";
                        class Components {
                            class EmptyDisplay {
                                componentType = "EmptyDisplayComponent";
                            };
                            class MinimapDisplay {
                                componentType = "MinimapDisplayComponent";
                                resource = "RscCustomInfoMiniMap";
                            };
                            class CrewDisplay {
                                componentType = "CrewDisplayComponent";
                                resource = "RscCustomInfoCrew";
                            };
                            class SlingLoadDisplay {
                                componentType = "SlingLoadDisplayComponent";
                                resource = "RscCustomInfoSlingLoad";
                            };
                            class SensorDisplay {
                                componentType = "SensorsDisplayComponent";
                                resource = "RscCustomInfoSensors";
                                range[] = {3000, 8000, 16000, 35000};
                            };
                        };
                    };
                };
            };
            class SideTurret: MainTurret {
                commanding = -4;
                gunnername = "Door gunner";
                primarygunner = 0;
                proxyindex = 2;
                gunnercompartments = "Compartment1";
                LODTurnedOut = 1000;
                LODTurnedIn = 1000;
                LODOpticsOut = 1000;
                LODOpticsIn = 1000;
                class Hitpoints {};
            };
            class BackTurret: BackTurret {
                commanding = -3;
                gunnername = "Rear gunner";
                primarygunner = 0;
                proxyindex = 3;
                gunnerLeftHandAnimName = "OtocHlaven2";
                gunnerRightHandAnimName = "OtocHlaven2";
                gunnerLeftLegAnimName = "gunner2_legs";
                gunnerRightLegAnimName = "gunner2_leg_right";
                gunnercompartments = "Compartment1";
            };
            class FrontTurret: MainTurret {
                animationsourcebody = "Turret_3";
                animationsourcegun = "Gun_3";
                body = "Turret_3";
                commanding = -2;
                gun = "Gun_3";
                gunbeg = "muzzle_3";
                gunend = "chamber_3";
                gunnerLeftHandAnimName = "OtocHlaven3";
                gunnerRightHandAnimName = "OtocHlaven3";
                gunnerLeftLegAnimName = "gunner3_legs";
                gunnerRightLegAnimName = "gunner3_legs";
                gunneraction = "RHS_Mi8_GunnerFront";
                gunnerinaction = "RHS_Mi8_GunnerFront";
                gunnername = "Crew chief";
                initelev = -10;
                initturn = 0;
                maxelev = 25;
                maxturn = 35;
                memorypointgun = "muzzle_3";
                memorypointgunneroptics = "gunnerview3";
                minelev = -45;
                minturn = -35;
                primarygunner = 0;
                proxyindex = 1;
                selectionfireanim = "zasleh3";
                stabilizedinaxes = 0;
                weapons[] = {"rhs_weap_pkt_v3"};
                LODTurnedOut = 1000;
                LODTurnedIn = 1000;
                LODOpticsOut = 1000;
                LODOpticsIn = 1000;
                class Hitpoints {};
            };
        };
        class AnimationSources: AnimationSources {
            class RearDoors: RearDoors {
                displayName = "";
            };
            class bench_hide: cargolights_hide {
                mass = 1;
                displayname = "hide benches";
                onPhaseChanged = "{(_this select 0) lockCargo [_x,(_this select 1) isEqualTo 1]}foreach [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,17,18];";
            };
            class holder_small_hide {
                source = "user";
                animPeriod = 0.000000000000001;
                initPhase = 0;
            };
            class exhaust_hide {
                source = "user";
                animPeriod = 0.000000000000001;
                initPhase = 0;
                mass = 1;
                displayName = "hide exhaust";
            };
            class HIDE_winch: exhaust_hide {
                displayName = "hide winch";
            };
            class HIDE_front_armor: exhaust_hide {
                displayName = "hide front armor";
            };
            class HUDaction {
                animperiod = 1;
                initphase = 0;
                source = "user";
            };
            class HUDaction_Hide: HUDaction {};
            class ReloadAnim_3 {
                source = "reload";
                weapon = "rhs_weap_pkt_v3";
            };
            class ReloadMagazine_3 {
                source = "reloadmagazine";
                weapon = "rhs_weap_pkt_v3";
            };
            class Revolving_3 {
                source = "revolving";
                weapon = "rhs_weap_pkt_v3";
            };
            class muzzle_rot_hmg3: ReloadMagazine_3 {
                source = "ammorandom";
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
        };
        class UserActions {
            class HUDoff {
                condition = "(player==driver this) and (this animationphase 'HUDAction' !=0)";
                displayname = "$STR_RHS_MI17HudOn_Name";
                displaynamedefault = "$STR_RHS_MI17HudOn_Name";
                onlyforplayer = 1;
                position = "zamerny";
                radius = 1;
                statement = "this animate ['HUDAction',0];this animate ['HUDaction_Hide',0]";
            };
            class HUDon {
                condition = "(player==driver this) and (this animationphase 'HUDAction' !=1)";
                displayname = "$STR_RHS_MI17HudOff_Name";
                displaynamedefault = "$STR_RHS_MI17HudOff_Name";
                onlyforplayer = 1;
                position = "zamerny";
                radius = 1;
                statement = "this animate ['HUDAction',1];this animate ['HUDaction_Hide',1]";
            };
            class ToggleLight {
                displayName = "Toggle interior light";
                position = "pos driver";
                radius = 15;
                showwindow = 0;
                condition = "player in this;";
                statement = "[this,'cargolights_hide'] call rhs_fnc_toggleIntLight";
                onlyforplayer = 1;
            };
            class WheelBrakes: ToggleLight {
                displayName = "Toggle Wheel Brakes";
                shortcut = "binocular";
                condition = "!difficultyEnabledRTD && (call rhs_fnc_findPlayer) isEqualTo (driver this)";
                statement = "[this] call rhs_fnc_heli_wheelBrakes";
            };
        };
        class Exhausts {
            class Exhaust01 {
                direction = "exhaust1h_dir";
                position = "exhaust1h";
                effect = "ExhaustEffectHeli";
            };
            class Exhaust02 {
                direction = "exhaust2h_dir";
                position = "exhaust2h";
                effect = "ExhaustEffectHeli";
            };
        };
        class Components: Components {
            class TransportPylonsComponent {
                UIPicture = "\rhsafrf\addons\rhs_a2port_air\data\loadouts\RHS_Mi8_EDEN_CA.paa";
                class pylons {
                    class pylon1 {
                        hardpoints[] = {
                            "RHS_HP_FAB250",
                            "RHS_HP_FAB500",
                            "RHS_HP_KMGU2",
                            "RHS_HP_APU68M3_S24",
                            "RHS_HP_B13L1",
                            "RHS_HP_B8V20",
                            "RHS_HP_UB16",
                            "RHS_HP_UB32",
                            "RHS_HP_UPK23"
                        };
                        priority = 1;
                        attachment = "rhs_mag_b8v20a_s8kom";
                        maxweight = 1200;
                        UIposition[] = {0.525, 0.48};
                        hitpoint = "HitPylon1";
                    };
                    class pylon2: pylon1 {
                        UIposition[] = {0.14, 0.48};
                        mirroredMissilePos = 1;
                        hitpoint = "HitPylon2";
                    };
                    class pylon3: pylon1 {
                        hardpoints[] = {
                            "RHS_HP_FAB250",
                            "RHS_HP_FAB500",
                            "RHS_HP_APU68M3_S24",
                            "RHS_HP_B8V20",
                            "RHS_HP_UB16",
                            "RHS_HP_UB32",
                            "RHS_HP_UPK23"
                        };
                        attachment = "rhs_mag_b8v20a_s8df";
                        maxweight = 1200;
                        priority = 2;
                        UIposition[] = {0.575, 0.43};
                        hitpoint = "HitPylon3";
                    };
                    class pylon4: pylon3 {
                        UIposition[] = {0.09, 0.43};
                        mirroredMissilePos = 3;
                        hitpoint = "HitPylon4";
                    };
                    class pylon5 {
                        hardpoints[] = {};
                        priority = 4;
                        attachment = "";
                        maxweight = 400;
                        UIposition[] = {0, 0.6};
                    };
                    class pylon6: pylon5 {
                        UIposition[] = {0, 0.6};
                        mirroredMissilePos = 5;
                    };
                    class cmDispenser {
                        hardpoints[] = {
                            "RHS_cm_ASO2",
                            "RHS_cm_ASO2_x2",
                            "RHS_cm_ASO2_x4",
                            "RHS_cm_ASO2_x6"
                        };
                        priority = 1;
                        attachment = "rhs_ASO2_CMFlare_Chaff_Magazine_x6";
                        maxweight = 800;
                        UIposition[] = {0.33, 0};
                    };
                };
            };
            class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                class Components {
                    class EmptyDisplay {
                        componentType = "EmptyDisplayComponent";
                    };
                    class MinimapDisplay {
                        componentType = "MinimapDisplayComponent";
                        resource = "RscCustomInfoMiniMap";
                    };
                    class CrewDisplay {
                        componentType = "CrewDisplayComponent";
                        resource = "RscCustomInfoCrew";
                    };
                    class SlingLoadDisplay {
                        componentType = "SlingLoadDisplayComponent";
                        resource = "RscCustomInfoSlingLoad";
                    };
                    class SensorDisplay {
                        componentType = "SensorsDisplayComponent";
                        resource = "RscCustomInfoSensors";
                        range[] = {3000, 8000, 16000, 35000};
                    };
                };
            };
            class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                defaultDisplay = "";
                class Components {
                    class EmptyDisplay {
                        componentType = "EmptyDisplayComponent";
                    };
                    class MinimapDisplay {
                        componentType = "MinimapDisplayComponent";
                        resource = "RscCustomInfoMiniMap";
                    };
                    class CrewDisplay {
                        componentType = "CrewDisplayComponent";
                        resource = "RscCustomInfoCrew";
                    };
                    class SlingLoadDisplay {
                        componentType = "SlingLoadDisplayComponent";
                        resource = "RscCustomInfoSlingLoad";
                    };
                    class SensorDisplay {
                        componentType = "SensorsDisplayComponent";
                        resource = "RscCustomInfoSensors";
                        range[] = {3000, 8000, 16000, 35000};
                    };
                };
            };
        };
    };
    class rhs_mi8mtv3_heavy_base: rhs_mi8mtv3_base {
        displayName = "Mi-8MTV-3 (Heavy)";
        class AnimationSources: AnimationSources {
            class holder_small_hide: holder_small_hide {
                initPhase = 1;
            };
        };
        class Components: Components {
            class TransportPylonsComponent {
                UIPicture = "\rhsafrf\addons\rhs_a2port_air\data\loadouts\RHS_Mi8_Hvy_EDEN_CA.paa";
                class pylons {
                    class pylon1 {
                        hardpoints[] = {
                            "RHS_HP_FAB250",
                            "RHS_HP_FAB500",
                            "RHS_HP_KMGU2",
                            "RHS_HP_APU68M3_S24",
                            "RHS_HP_B13L1",
                            "RHS_HP_B8V20",
                            "RHS_HP_UB16",
                            "RHS_HP_UB32",
                            "RHS_HP_UPK23"
                        };
                        priority = 1;
                        attachment = "rhs_mag_b8v20a_s8kom";
                        maxweight = 800;
                        UIposition[] = {0.525, 0.48};
                        hitpoint = "HitPylon1";
                    };
                    class pylon2: pylon1 {
                        UIposition[] = {0.14, 0.48};
                        mirroredMissilePos = 1;
                        hitpoint = "HitPylon2";
                    };
                    class pylon3: pylon1 {
                        hardpoints[] = {
                            "RHS_HP_FAB250",
                            "RHS_HP_FAB500",
                            "RHS_HP_APU68M3_S24",
                            "RHS_HP_B8V20",
                            "RHS_HP_UB16",
                            "RHS_HP_UB32",
                            "RHS_HP_UPK23"
                        };
                        attachment = "rhs_mag_b8v20a_s8kom";
                        maxweight = 800;
                        priority = 2;
                        UIposition[] = {0.575, 0.43};
                        hitpoint = "HitPylon3";
                    };
                    class pylon4: pylon3 {
                        UIposition[] = {0.09, 0.43};
                        mirroredMissilePos = 3;
                        hitpoint = "HitPylon4";
                    };
                    class pylon5: pylon1 {
                        hardpoints[] = {
                            "RHS_HP_FAB250",
                            "RHS_HP_APU68M3_S24",
                            "RHS_HP_B8V20",
                            "RHS_HP_UB16",
                            "RHS_HP_UB32",
                            "RHS_HP_UPK23"
                        };
                        priority = 4;
                        attachment = "rhs_mag_b8v20a_s8kom";
                        maxweight = 400;
                        UIposition[] = {0.625, 0.38};
                        hitpoint = "HitPylon5";
                    };
                    class pylon6: pylon5 {
                        UIposition[] = {0.04, 0.38};
                        mirroredMissilePos = 5;
                        hitpoint = "HitPylon6";
                    };
                    class cmDispenser {
                        hardpoints[] = {
                            "RHS_cm_ASO2",
                            "RHS_cm_ASO2_x2",
                            "RHS_cm_ASO2_x4",
                            "RHS_cm_ASO2_x6"
                        };
                        priority = 1;
                        attachment = "rhs_ASO2_CMFlare_Chaff_Magazine_x6";
                        maxweight = 800;
                        UIposition[] = {0.33, 0};
                    };
                };
            };
        };
    };
    class rhs_mi8amtsh_base: rhs_mi8mtv3_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_mi8amtsh_base.paa";
        Icon = "\rhsafrf\addons\rhs_a2port_air\data\map_ico\icomap_mi17_ca.paa";
        driveraction = "RHS_Mi8_PilotV2";
        driverinaction = "RHS_Mi8_PilotV2";
        class Turrets: Turrets {
            class CopilotTurret: CopilotTurret {
                proxyindex = 4;
                gunnerUsesPilotView = 0;
                LODTurnedOut = 1200;
                LODTurnedIn = 1200;
                LODOpticsOut = 1200;
                LODOpticsIn = 1200;
            };
            class SideTurret: SideTurret {};
            class BackTurret: BackTurret {
                initturn = 180;
                maxturn = 235;
                maxElev = 15;
                minturn = 130;
                initElev = -41;
                minElev = -51;
                gunnerRightLegAnimName = "gunner2_leg_right";
                gunnerLeftLegAnimName = "gunner2_leg_left";
                gunneraction = "RHS_Mi17v2_Gunner";
                gunnerinaction = "RHS_Mi17v2_Gunner";
            };
            class FrontTurret: FrontTurret {
                initturn = -70;
                maxturn = -30;
                minturn = -121;
                gunnerRightLegAnimName = "gunner3_leg_right";
                gunnerLeftLegAnimName = "gunner3_leg_left";
                gunnercompartments = "Compartment1";
                gunneraction = "RHS_Mi8_Gunner";
                gunnerinaction = "RHS_Mi8_Gunner";
            };
        };
        model = "\rhsafrf\addons\rhs_a2port_air\mi17\Mi_171";
        picture = "\rhsafrf\addons\rhs_a2port_air\data\ico\rhs_mi8amtsh_pic_ca.paa";
        displayName = "$STR_RHS_MI8AMTSh_Name";
        drivercompartments = "Compartment1";
        cargocompartments[] = {"Compartment1"};
        cargoiscodriver[] = {0};
        hiddenselectionstextures[] = {
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi_171_co.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
        class textureSources {
            class standard {
                displayName = "Grey";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\mi_171_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\mi171_det_co.paa"};
                factions[] = {"rhs_faction_vvs_c", "rhs_faction_vvs"};
            };
            class Civilian: standard {
                displayName = "Civilian";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi_171_civil_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8civil_det_g_co.paa"};
            };
            class Camo: standard {
                displayName = "CDF";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi_171_cdf_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_cdf_co.paa"};
            };
            class Camo1: standard {
                displayName = "Chedaki";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi_171_chdkz_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_cdf_co.paa"};
            };
            class Camo2: standard {
                displayName = "Camo #1";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi_171_camo1_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo1_co.paa"};
            };
            class Camo3: standard {
                displayName = "Camo #2";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi_171_camo2_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo2_co.paa"};
            };
            class Camo4: standard {
                displayName = "Camo #3";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi_171_camo_mvd_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo_mvd_co.paa"};
            };
            class Camo5: standard {
                displayName = "Camo #4";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi_171_camo3_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo3_co.paa"};
            };
        };
        class AnimationSources: AnimationSources {
            class RearDoors: RearDoors {
                displayName = "";
            };
            class HIDE_weapon_holders: exhaust_hide {
                displayName = "hide weapon holders";
            };
        };
        class Components: Components {
            class TransportPylonsComponent {
                UIPicture = "\rhsafrf\addons\rhs_a2port_air\data\loadouts\RHS_Mi8_EDEN_CA.paa";
                class pylons {
                    class pylon1 {
                        hardpoints[] = {
                            "RHS_HP_FAB250",
                            "RHS_HP_FAB500",
                            "RHS_HP_KMGU2",
                            "RHS_HP_APU68M3_S24",
                            "RHS_HP_B13L1",
                            "RHS_HP_B8V20",
                            "RHS_HP_UB16",
                            "RHS_HP_UB32",
                            "RHS_HP_UPK23"
                        };
                        priority = 1;
                        attachment = "rhs_mag_b8v20a_s8kom";
                        maxweight = 1200;
                        UIposition[] = {0.525, 0.48};
                        hitpoint = "HitPylon1";
                    };
                    class pylon2: pylon1 {
                        UIposition[] = {0.14, 0.48};
                        mirroredMissilePos = 1;
                        hitpoint = "HitPylon2";
                    };
                    class pylon3: pylon1 {
                        hardpoints[] = {
                            "RHS_HP_FAB250",
                            "RHS_HP_FAB500",
                            "RHS_HP_APU68M3_S24",
                            "RHS_HP_B8V20",
                            "RHS_HP_UB16",
                            "RHS_HP_UB32",
                            "RHS_HP_UPK23"
                        };
                        attachment = "rhs_mag_b8v20a_s8df";
                        maxweight = 1200;
                        priority = 2;
                        UIposition[] = {0.575, 0.43};
                        hitpoint = "HitPylon3";
                    };
                    class pylon4: pylon3 {
                        UIposition[] = {0.09, 0.43};
                        mirroredMissilePos = 3;
                        hitpoint = "HitPylon4";
                    };
                    class pylon5: pylon1 {
                        hardpoints[] = {
                            "RHS_HP_FAB250",
                            "RHS_HP_APU68M3_S24",
                            "RHS_HP_B8V20",
                            "RHS_HP_UB16",
                            "RHS_HP_UB32",
                            "RHS_HP_UPK23"
                        };
                        priority = 4;
                        attachment = "rhs_mag_b8v20a_s8kom";
                        maxweight = 400;
                        UIposition[] = {0.625, 0.38};
                        hitpoint = "HitPylon5";
                    };
                    class pylon6: pylon5 {
                        UIposition[] = {0.04, 0.38};
                        mirroredMissilePos = 5;
                        hitpoint = "HitPylon6";
                    };
                    class cmDispenser {
                        hardpoints[] = {"RHS_cm_ASO2", "RHS_cm_ASO2_x2", "RHS_cm_ASO2_x4"};
                        priority = 1;
                        attachment = "rhs_ASO2_CMFlare_Chaff_Magazine_x4";
                        maxweight = 800;
                        UIposition[] = {0.33, 0};
                    };
                };
            };
        };
    };
    class rhs_mi8t_base: RHS_Mi8_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_mi8t_base.paa";
        displayName = "$STR_RHS_MI8T_Name";
        Icon = "\rhsafrf\addons\rhs_a2port_air\data\map_ico\icomap_mi17_amb_CA.paa";
        model = "\rhsafrf\addons\rhs_a2port_air\mi17\Mi_8T";
        accuracy = 1.5;
        tf_isolatedAmount_api = 0.5;
        hasGunner = 0;
        driverDoor = "LeftDoor";
        cargoDoors[] = {"LeftDoor"};
        transportsoldier = 13;
        cargoProxyIndexes[] = {1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15, 16};
        getInProxyOrder[] = {
            1,
            2,
            3,
            4,
            5,
            6,
            7,
            8,
            9,
            10,
            11,
            12,
            13,
            14,
            15,
            16
        };
        class Components: Components {
            class TransportPylonsComponent {
                UIPicture = "\rhsafrf\addons\rhs_a2port_air\data\loadouts\RHS_Mi8_NoPylon_EDEN_CA.paa";
                class pylons {
                    class cmDispenser {
                        hardpoints[] = {"RHS_cm_ASO2", "RHS_cm_ASO2_x2", "RHS_cm_ASO2_x4"};
                        priority = 1;
                        attachment = "";
                        maxweight = 800;
                        UIposition[] = {0.33, 0};
                    };
                };
            };
        };
        class Turrets: Turrets {
            class CopilotTurret: CopilotTurret {
                proxyindex = 1;
            };
            class CargoTurret_01: CargoTurret {
                gunnerAction = "passenger_inside_2";
                gunnerGetInAction = "GetInHeli_Transport_01Cargo";
                gunnerGetOutAction = "RHS_HIND_Cargo_Exit";
                memoryPointsGetInGunner = "pos cargo";
                memoryPointsGetInGunnerDir = "pos cargo dir";
                gunnerName = "Passenger (Right Rear Doors)";
                gunnerCompartments = "Compartment1";
                proxyIndex = 3;
                maxElev = 15;
                minElev = -45;
                maxTurn = -14;
                minTurn = -85;
                isPersonTurret = 1;
                gunnerUsesPilotView = 1;
                gunnerDoor = "LeftDoor";
                memorypointgunneroptics = "";
                selectionFireAnim = "";
                commanding = -2;
                weapons[] = {"rhs_weap_DummyLauncher"};
                playerPosition = 2;
                soundAttenuationTurret = "HeliAttenuationRamp";
                disableSoundAttenuation = 0;
                LODTurnedOut = 1200;
                LODTurnedIn = 1200;
                LODOpticsOut = 1200;
                LODOpticsIn = 1200;
                enabledByAnimationSource = "RearDoors";
                class Hitpoints {};
            };
            class CargoTurret_02: CargoTurret_01 {
                gunnerName = "Passenger (Left Rear Doors)";
                memoryPointsGetInGunner = "pos driver";
                memoryPointsGetInGunnerDir = "pos driver dir";
                proxyIndex = 14;
                maxTurn = 85;
                minTurn = 15;
            };
            class CargoTurret_03: CargoTurret_01 {
                gunnerName = "Passenger (Left Door)";
                memoryPointsGetInGunner = "pos gunner";
                memoryPointsGetInGunnerDir = "pos gunner dir";
                proxyIndex = 2;
                maxTurn = 35;
                minTurn = -8;
                enabledByAnimationSource = "LeftDoor";
            };
        };
        hiddenSelections[] = {
            "Camo1",
            "Camo2",
            "Camo8",
            "Camo4",
            "n1",
            "n2",
            "tail_decals"
        };
        hiddenselectionstextures[] = {
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_g_vsr_co.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_co.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\mi8t_tv2_g_vsr_co.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
        class textureSources {
            class standard {
                displayName = "Grey";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_g_vsr_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\mi8t_tv2_g_vsr_co.paa"};
                factions[] = {"rhs_faction_vvs_c", "rhs_faction_vvs"};
            };
            class Civilian: standard {
                displayName = "Civilian";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8civil_body_g_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8civil_det_g_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\mi8tcivil_tv2_g_co.paa"};
            };
            class Camo: standard {
                displayName = "CDF";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_g_cdf_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_cdf_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\camo\mi8t_tv2_g_cdf_co.paa"};
            };
            class Camo1: standard {
                displayName = "Chedaki";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_body_g_chdkz_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_det_g_cdf_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\camo\mi8t_tv2_g_chdkz_co.paa"};
            };
            class Camo2: standard {
                displayName = "Camo #1";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo1_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo1_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\camo\mi8t_tv2_g_camo1_co.paa"};
            };
            class Camo3: standard {
                displayName = "Camo #2";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo2_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo2_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\camo\mi8t_tv2_g_camo2_co.paa"};
            };
            class Camo4: standard {
                displayName = "Camo #3";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo3_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo_mvd_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\camo\mi8t_tv2_g_camo3_co.paa"};
            };
            class Camo5: standard {
                displayName = "Camo #4";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo4_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo3_co.paa", "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\camo\mi8t_tv2_g_camo4_co.paa"};
            };
        };
        class AnimationSources: AnimationSources {
            class LeftDoor {
                source = "door";
                animPeriod = 0.8;
                initPhase = 1;
            };
            class hide_turrets: hide_turrets {
                initPhase = 1;
            };
            class hide_door_hatch: hide_door_hatch {
                initPhase = 0;
            };
            class intake_hide: intake_hide {
                displayname = "";
            };
            class antennas_switch {
                source = "user";
                useSource = 1;
                displayname = "twin antennas";
                initPhase = 0;
                animPeriod = 0.0001;
                onPhaseChanged = "";
            };
            class hide_antennas: antennas_switch {
                useSource = 0;
                displayname = "hide antennas";
            };
            class hide_antenna_aft: hide_antennas {
                initphase = 1;
                displayname = "hide aft antenna";
            };
            class reardoors_hide {
                displayname = "hide rear doors";
                source = "user";
                animPeriod = 0.000000000000001;
                initPhase = 0;
                onPhaseChanged = "{(_this select 0) lockCargo [_x,(_this select 1) isEqualTo 1]}foreach [14,15];";
                useSource = 1;
                forceAnimatePhase = 1;
                forceAnimate[] = {"RearDoors", 1};
            };
        };
        class Attributes: Attributes {
            class ObjectTexture: ObjectTexture {};
            class rhs_decalNumber_type: rhs_decalNumber_type {};
            class rhs_decalNumber: rhs_decalNumber {};
            class rhs_decalTail: rhs_decalTail {};
            class rhs_reardoors {
                displayName = "Open rear doors";
                property = "rhs_opendoors";
                control = "CheckboxNumber";
                expression = "[_this,14,15,true] call rhs_fnc_mi8_checkDoor";
                defaultValue = "0";
            };
            class rhs_leftdoor: rhs_reardoors {
                displayName = "Open left door";
                property = "rhs_leftdoor";
                expression = "_this animateDoor ['LeftDoor',_value,true]";
            };
        };
        class UserActions {
            class openDoor {
                displayName = "Open Rear Doors";
                position = "";
                radius = 3;
                priority = 1.5;
                showWindow = 0;
                userActionID = 55;
                onlyForplayer = 1;
                condition = "this doorPhase 'RearDoors' < 0.5 AND alive this";
                statement = "[this,14,15] call rhs_fnc_mi8_checkDoor";
            };
            class closeDoor: openDoor {
                userActionID = 56;
                displayName = "Close Rear Doors";
                condition = "this animationSourcePhase 'RearDoors_Hide' < 0.5 AND this doorPhase 'RearDoors' > 0.5 AND alive this";
            };
            class openDoor_L: openDoor {
                userActionID = 57;
                displayName = "Open Left Door";
                position = "";
                condition = "this doorPhase 'LeftDoor' < 0.5 AND alive this";
                statement = "this animateDoor ['LeftDoor',1]";
            };
            class closeDoor_L: openDoor {
                userActionID = 58;
                displayName = "Close Left Door";
                condition = "this doorPhase 'LeftDoor' > 0.5 AND alive this";
                statement = "this animateDoor ['LeftDoor',0]";
            };
            class ToggleLight {
                displayName = "Toggle interior light";
                position = "pos driver";
                radius = 15;
                showwindow = 0;
                condition = "player in this;";
                statement = "[this,'cargolights_hide'] call rhs_fnc_toggleIntLight";
                onlyforplayer = 1;
            };
            class WheelBrakes: ToggleLight {
                displayName = "Toggle Wheel Brakes";
                shortcut = "binocular";
                condition = "!difficultyEnabledRTD && (call rhs_fnc_findPlayer) isEqualTo (driver this)";
                statement = "[this] call rhs_fnc_heli_wheelBrakes";
            };
        };
        attendant = 1;
        threat[] = {0, 0, 0};
        class Reflectors {
            class Left {
                color[] = {1100, 1000, 900};
                ambient[] = {1100, 1000, 900};
                position = "L svetlo";
                direction = "konec L svetla";
                hitpoint = "L svetlo";
                selection = "L svetlo";
                size = 1;
                innerAngle = 30;
                outerAngle = 120;
                coneFadeCoef = 5;
                intensity = 100;
                useFlare = 1;
                dayLight = 0;
                flareSize = 0.75;
                class Attenuation {
                    start = 1;
                    constant = 1;
                    linear = 0;
                    quadratic = 15;
                };
            };
            class Right: Left {
                position = "P svetlo";
                direction = "konec P svetla";
                hitpoint = "P svetlo";
                selection = "P svetlo";
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                getIn = "_this call rhs_fnc_mi8_doors";
                getOut = "_this call rhs_fnc_mi8_doors";
            };
        };
    };
    class rhs_mi8amt_base: RHS_Mi8_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_mi8amt_base.paa";
        displayName = "$STR_RHS_MI8AMT_Name";
        Icon = "\rhsafrf\addons\rhs_a2port_air\data\map_ico\icomap_mi17_amb_CA.paa";
        model = "\rhsafrf\addons\rhs_a2port_air\mi17\Mi_8AMT";
        accuracy = 1.5;
        tf_isolatedAmount_api = 0.5;
        hasGunner = 0;
        driverDoor = "LeftDoor";
        cargoDoors[] = {"LeftDoor"};
        transportsoldier = 13;
        cargoProxyIndexes[] = {1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15, 16};
        getInProxyOrder[] = {
            1,
            2,
            3,
            4,
            5,
            6,
            7,
            8,
            9,
            10,
            11,
            12,
            13,
            14,
            15,
            16
        };
        class Turrets: Turrets {
            class CopilotTurret: CopilotTurret {
                proxyindex = 1;
            };
            class CargoTurret_01: CargoTurret {
                gunnerAction = "passenger_inside_2";
                gunnerGetInAction = "GetInHeli_Transport_01Cargo";
                gunnerGetOutAction = "RHS_HIND_Cargo_Exit";
                memoryPointsGetInGunner = "pos cargo";
                memoryPointsGetInGunnerDir = "pos cargo dir";
                gunnerName = "Passenger (Right Rear Doors)";
                gunnerCompartments = "Compartment1";
                proxyIndex = 3;
                maxElev = 15;
                minElev = -45;
                maxTurn = -14;
                minTurn = -85;
                isPersonTurret = 1;
                gunnerUsesPilotView = 1;
                gunnerDoor = "LeftDoor";
                memorypointgunneroptics = "";
                selectionFireAnim = "";
                commanding = -2;
                weapons[] = {"rhs_weap_DummyLauncher"};
                playerPosition = 2;
                soundAttenuationTurret = "HeliAttenuationRamp";
                disableSoundAttenuation = 0;
                LODTurnedOut = 1200;
                LODTurnedIn = 1200;
                LODOpticsOut = 1200;
                LODOpticsIn = 1200;
                enabledByAnimationSource = "RearDoors";
                class Hitpoints {};
            };
            class CargoTurret_02: CargoTurret_01 {
                gunnerName = "Passenger (Left Rear Doors)";
                memoryPointsGetInGunner = "pos driver";
                memoryPointsGetInGunnerDir = "pos driver dir";
                proxyIndex = 14;
                maxTurn = 85;
                minTurn = 15;
            };
            class CargoTurret_03: CargoTurret_01 {
                gunnerName = "Passenger (Left Door)";
                memoryPointsGetInGunner = "pos gunner";
                memoryPointsGetInGunnerDir = "pos gunner dir";
                proxyIndex = 2;
                maxTurn = 35;
                minTurn = -8;
                enabledByAnimationSource = "LeftDoor";
            };
        };
        class AnimationSources: AnimationSources {
            class LeftDoor {
                source = "door";
                animPeriod = 0.8;
                initPhase = 1;
            };
            class hide_turrets: hide_turrets {
                initPhase = 1;
            };
            class hide_door_hatch: hide_door_hatch {
                initPhase = 0;
            };
            class reardoors_hide {
                displayname = "hide rear doors";
                source = "user";
                animPeriod = 0.000000000000001;
                initPhase = 0;
                onPhaseChanged = "{(_this select 0) lockCargo [_x,(_this select 1) isEqualTo 1]}foreach [14,15];";
                useSource = 1;
                forceAnimatePhase = 1;
                forceAnimate[] = {"RearDoors", 1};
            };
        };
        class Attributes: Attributes {
            class ObjectTexture: ObjectTexture {};
            class rhs_decalNumber_type: rhs_decalNumber_type {};
            class rhs_decalNumber: rhs_decalNumber {};
            class rhs_decalTail: rhs_decalTail {};
            class rhs_reardoors {
                displayName = "Open rear doors";
                property = "rhs_opendoors";
                control = "CheckboxNumber";
                expression = "[_this,14,15,true] call rhs_fnc_mi8_checkDoor";
                defaultValue = "0";
            };
            class rhs_leftdoor: rhs_reardoors {
                displayName = "Open left door";
                property = "rhs_leftdoor";
                expression = "_this animateDoor ['LeftDoor',_value,true]";
            };
        };
        class UserActions {
            class openDoor {
                displayName = "Open Rear Doors";
                position = "";
                radius = 3;
                priority = 1.5;
                showWindow = 0;
                userActionID = 55;
                onlyForplayer = 1;
                condition = "this doorPhase 'RearDoors' < 0.5 AND alive this";
                statement = "[this,14,15] call rhs_fnc_mi8_checkDoor";
            };
            class closeDoor: openDoor {
                userActionID = 56;
                displayName = "Close Rear Doors";
                condition = "this animationSourcePhase 'RearDoors_Hide' < 0.5 AND this doorPhase 'RearDoors' > 0.5 AND alive this";
            };
            class openDoor_L: openDoor {
                userActionID = 57;
                displayName = "Open Left Door";
                position = "";
                condition = "this doorPhase 'LeftDoor' < 0.5 AND alive this";
                statement = "this animateDoor ['LeftDoor',1]";
            };
            class closeDoor_L: openDoor {
                userActionID = 58;
                displayName = "Close Left Door";
                condition = "this doorPhase 'LeftDoor' > 0.5 AND alive this";
                statement = "this animateDoor ['LeftDoor',0]";
            };
            class ToggleLight {
                displayName = "Toggle interior light";
                position = "pos driver";
                radius = 15;
                showwindow = 0;
                condition = "player in this;";
                statement = "[this,'cargolights_hide'] call rhs_fnc_toggleIntLight";
                onlyforplayer = 1;
            };
            class WheelBrakes: ToggleLight {
                displayName = "Toggle Wheel Brakes";
                shortcut = "binocular";
                condition = "!difficultyEnabledRTD && (call rhs_fnc_findPlayer) isEqualTo (driver this)";
                statement = "[this] call rhs_fnc_heli_wheelBrakes";
            };
        };
        attendant = 1;
        threat[] = {0, 0, 0};
        class Reflectors {
            class Left {
                color[] = {1100, 1000, 900};
                ambient[] = {1100, 1000, 900};
                position = "L svetlo";
                direction = "konec L svetla";
                hitpoint = "L svetlo";
                selection = "L svetlo";
                size = 1;
                innerAngle = 30;
                outerAngle = 120;
                coneFadeCoef = 5;
                intensity = 100;
                useFlare = 1;
                dayLight = 0;
                flareSize = 0.75;
                class Attenuation {
                    start = 1;
                    constant = 1;
                    linear = 0;
                    quadratic = 15;
                };
            };
            class Right: Left {
                position = "P svetlo";
                direction = "konec P svetla";
                hitpoint = "P svetlo";
                selection = "P svetlo";
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                getIn = "_this call rhs_fnc_mi8_doors";
                getOut = "_this call rhs_fnc_mi8_doors";
            };
        };
    };
    class RHS_Mi8_VVS_Base: RHS_Mi8_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8_VVS_Base.paa";
        side = 0;
        typicalCargo[] = {"rhs_pilot_transport_heli"};
        faction = "rhs_faction_vvs";
    };
    class RHS_Mi8MTV3_VVS_Base: rhs_mi8mtv3_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8MTV3_VVS_Base.paa";
        side = 0;
        faction = "rhs_faction_vvs";
    };
    class RHS_Mi8MTV3_Heavy_VVS_Base: rhs_mi8mtv3_heavy_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8MTV3_VVS_Base.paa";
        side = 0;
        faction = "rhs_faction_vvs";
    };
    class RHS_Mi8AMTSh_VVS_Base: rhs_mi8amtsh_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8AMTSh_VVS_Base.paa";
        side = 0;
        faction = "rhs_faction_vvs";
    };
    class RHS_Mi8T_VVS_Base: rhs_mi8t_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8AMT_VVS_Base.paa";
        side = 0;
        faction = "rhs_faction_vvs";
    };
    class RHS_Mi8AMT_VVS_Base: rhs_mi8amt_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8AMT_VVS_Base.paa";
        side = 0;
        faction = "rhs_faction_vvs";
    };
    class RHS_Mi8mt_vvs: RHS_Mi8_VVS_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8mt_vvs.paa";
        scope = 2;
        displayName = "$STR_RHS_MI8MT_Name";
        author = "$STR_RHS_AUTHOR_FULL";
        transportsoldier = 14;
    };
    class RHS_Mi8mt_vvsc: RHS_Mi8mt_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8mt_vvsc.paa";
        faction = "rhs_faction_vvs_c";
        author = "$STR_RHS_AUTHOR_FULL";
        rhs_decalParameters[] = {"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"};
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class RHS_Mi8mt_vdv: RHS_Mi8mt_vvsc {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8mt_vdv.paa";
        faction = "rhs_faction_vdv";
        author = "$STR_RHS_AUTHOR_FULL";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class RHS_Mi8mt_vv: RHS_Mi8mt_vdv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8mt_vv.paa";
        faction = "rhs_faction_vv";
        author = "$STR_RHS_AUTHOR_FULL";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo3_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class RHS_Mi8mt_Cargo_vvs: RHS_Mi8mt_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8mt_Cargo_vvs.paa";
        displayName = "$STR_RHS_MI8MT_CARGO_Name";
        author = "$STR_RHS_AUTHOR_FULL";
        driverDoor = "LeftDoor";
        cargoDoors[] = {"LeftDoor"};
        transportsoldier = 13;
        cargoProxyIndexes[] = {1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14, 15};
        getInProxyOrder[] = {
            1,
            2,
            3,
            4,
            5,
            6,
            7,
            8,
            9,
            10,
            11,
            12,
            13,
            14,
            15,
            16
        };
        class Turrets: Turrets {
            class CopilotTurret: CopilotTurret {};
            class CargoTurret_01: CargoTurret {
                gunnerAction = "passenger_inside_2";
                gunnerGetInAction = "GetInHeli_Transport_01Cargo";
                gunnerGetOutAction = "RHS_HIND_Cargo_Exit";
                memoryPointsGetInGunner = "pos cargo";
                memoryPointsGetInGunnerDir = "pos cargo dir";
                gunnerName = "Passenger (Right Rear Doors)";
                gunnerCompartments = "Compartment1";
                proxyIndex = 2;
                maxElev = 15;
                minElev = -45;
                maxTurn = -14;
                minTurn = -85;
                isPersonTurret = 1;
                gunnerUsesPilotView = 1;
                gunnerDoor = "LeftDoor";
                memorypointgunneroptics = "";
                selectionFireAnim = "";
                LODTurnedOut = 1200;
                LODTurnedIn = 1200;
                LODOpticsOut = 1200;
                LODOpticsIn = 1200;
                playerPosition = 2;
                soundAttenuationTurret = "HeliAttenuationRamp";
                disableSoundAttenuation = 0;
                weapons[] = {"rhs_weap_DummyLauncher"};
                enabledByAnimationSource = "RearDoors";
                class Hitpoints {};
            };
            class CargoTurret_02: CargoTurret_01 {
                gunnerName = "Passenger (Left Rear Doors)";
                memoryPointsGetInGunner = "pos driver";
                memoryPointsGetInGunnerDir = "pos driver dir";
                proxyIndex = 13;
                maxTurn = 85;
                minTurn = 15;
            };
            class CargoTurret_03: CargoTurret_01 {
                gunnerName = "Passenger (Left Door)";
                memoryPointsGetInGunner = "pos gunner";
                memoryPointsGetInGunnerDir = "pos gunner dir";
                proxyIndex = 16;
                maxTurn = 35;
                minTurn = -8;
                enabledByAnimationSource = "LeftDoor";
            };
        };
        class AnimationSources: AnimationSources {
            class LeftDoor {
                source = "door";
                animPeriod = 0.8;
                initPhase = 1;
            };
            class hide_turrets: hide_turrets {
                initPhase = 1;
            };
            class hide_door_hatch: hide_door_hatch {
                initPhase = 0;
            };
        };
        class Attributes: Attributes {
            class ObjectTexture: ObjectTexture {};
            class rhs_decalNumber_type: rhs_decalNumber_type {};
            class rhs_decalNumber: rhs_decalNumber {};
            class rhs_decalTail: rhs_decalTail {};
            class rhs_reardoors {
                displayName = "Open rear doors";
                property = "rhs_opendoors";
                control = "CheckboxNumber";
                expression = "[_this,13,14,true] call rhs_fnc_mi8_checkDoor";
                defaultValue = "0";
            };
            class rhs_leftdoor: rhs_reardoors {
                displayName = "Open left door";
                property = "rhs_leftdoor";
                expression = "_this animateDoor ['LeftDoor',_value,true]";
            };
        };
        class UserActions {
            class openDoor {
                displayName = "Open Rear Doors";
                position = "";
                radius = 3;
                priority = 11;
                userActionID = 55;
                onlyForplayer = 1;
                showWindow = 0;
                condition = "this doorPhase 'RearDoors' < 0.5 AND alive this";
                statement = "[this,13,14] call rhs_fnc_mi8_checkDoor";
                shortcut = "user12";
            };
            class closeDoor: openDoor {
                userActionID = 56;
                displayName = "Close Rear Doors";
                condition = "this doorPhase 'RearDoors' > 0.5 AND alive this";
            };
            class openDoor_L: openDoor {
                userActionID = 57;
                displayName = "Open Left Door";
                condition = "this doorPhase 'LeftDoor' < 0.5 AND alive this";
                statement = "this animateDoor ['LeftDoor',1]";
                shortcut = "";
            };
            class closeDoor_L: openDoor_L {
                userActionID = 58;
                displayName = "Close Left Door";
                condition = "this doorPhase 'LeftDoor' > 0.5 AND alive this";
                statement = "this animateDoor ['LeftDoor',0]";
            };
            class ToggleLight {
                displayName = "Toggle interior light";
                position = "pos driver";
                radius = 15;
                showwindow = 0;
                condition = "player in this;";
                statement = "[this,'cargolights_hide'] call rhs_fnc_toggleIntLight";
                onlyforplayer = 1;
            };
            class WheelBrakes: ToggleLight {
                displayName = "Toggle Wheel Brakes";
                shortcut = "binocular";
                condition = "!difficultyEnabledRTD && (call rhs_fnc_findPlayer) isEqualTo (driver this)";
                statement = "[this] call rhs_fnc_heli_wheelBrakes";
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                getIn = "_this call rhs_fnc_mi8_doors";
                getOut = "_this call rhs_fnc_mi8_doors";
            };
        };
    };
    class RHS_Mi8mt_Cargo_vvsc: RHS_Mi8mt_Cargo_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8mt_Cargo_vvsc.paa";
        faction = "rhs_faction_vvs_c";
        author = "$STR_RHS_AUTHOR_FULL";
        rhs_decalParameters[] = {"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"};
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class RHS_Mi8mt_Cargo_vdv: RHS_Mi8mt_Cargo_vvsc {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8mt_Cargo_vdv.paa";
        faction = "rhs_faction_vdv";
        author = "$STR_RHS_AUTHOR_FULL";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class RHS_Mi8mt_Cargo_vv: RHS_Mi8mt_Cargo_vvsc {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8mt_Cargo_vv.paa";
        faction = "rhs_faction_vv";
        author = "$STR_RHS_AUTHOR_FULL";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo3_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class RHS_Mi8MTV3_vvs: RHS_Mi8MTV3_VVS_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8MTV3_vvs.paa";
        scope = 2;
        displayName = "$STR_RHS_MI8MTV3_Name";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Mi8MTV3_vvsc: RHS_Mi8MTV3_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8MTV3_vvsc.paa";
        faction = "rhs_faction_vvs_c";
        author = "$STR_RHS_AUTHOR_FULL";
        rhs_decalParameters[] = {"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"};
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class RHS_Mi8MTV3_vdv: RHS_Mi8MTV3_vvsc {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8MTV3_vdv.paa";
        faction = "rhs_faction_vdv";
        author = "$STR_RHS_AUTHOR_FULL";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class RHS_Mi8MTV3_UPK23_vvs: RHS_Mi8MTV3_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8MTV3_UPK23_vvs.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 1;
        scopeCurator = 2;
        displayName = "$STR_RHS_MI8MTV3_UPK_Name";
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class pylon1: pylon1 {
                        attachment = "rhs_mag_upk23_mixed";
                    };
                    class pylon2: pylon2 {
                        attachment = "rhs_mag_upk23_mixed";
                    };
                    class pylon3: pylon3 {
                        attachment = "rhs_mag_b8v20a_s8kom";
                    };
                    class pylon4: pylon4 {
                        attachment = "rhs_mag_b8v20a_s8kom";
                    };
                    class pylon5: pylon5 {};
                    class pylon6: pylon6 {};
                    class cmDispenser: cmDispenser {};
                };
            };
        };
        memoryPointGun[] = {"chase01", "chase02", "chase03", "chase04"};
        gunBeg[] = {
            "chase01dir",
            "chase02dir",
            "chase03dir",
            "chase04dir"
        };
        gunEnd[] = {"chase01", "chase02", "chase03", "chase04"};
    };
    class RHS_Mi8MTV3_UPK23_vvsc: RHS_Mi8MTV3_UPK23_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8MTV3_UPK23_vvsc.paa";
        faction = "rhs_faction_vvs_c";
        author = "$STR_RHS_AUTHOR_FULL";
        rhs_decalParameters[] = {"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"};
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class RHS_Mi8MTV3_UPK23_vdv: RHS_Mi8MTV3_UPK23_vvsc {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8MTV3_UPK23_vdv.paa";
        faction = "rhs_faction_vdv";
        author = "$STR_RHS_AUTHOR_FULL";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class RHS_Mi8MTV3_FAB_vvs: RHS_Mi8MTV3_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8MTV3_FAB_vvs.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 1;
        scopeCurator = 2;
        displayName = "$STR_RHS_MI8MTV3_FAB_Name";
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class pylon1: pylon1 {
                        attachment = "rhs_mag_fab250";
                    };
                    class pylon2: pylon2 {
                        attachment = "rhs_mag_fab250";
                    };
                    class pylon3: pylon3 {
                        attachment = "rhs_mag_b8v20a_s8kom";
                    };
                    class pylon4: pylon4 {
                        attachment = "rhs_mag_b8v20a_s8kom";
                    };
                    class pylon5: pylon5 {};
                    class pylon6: pylon6 {};
                    class cmDispenser: cmDispenser {};
                };
            };
        };
    };
    class RHS_Mi8MTV3_FAB_vvsc: RHS_Mi8MTV3_FAB_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8MTV3_FAB_vvsc.paa";
        faction = "rhs_faction_vvs_c";
        author = "$STR_RHS_AUTHOR_FULL";
        rhs_decalParameters[] = {"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"};
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class RHS_Mi8MTV3_FAB_vdv: RHS_Mi8MTV3_FAB_vvsc {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8MTV3_FAB_vdv.paa";
        faction = "rhs_faction_vdv";
        author = "$STR_RHS_AUTHOR_FULL";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class RHS_Mi8mtv3_Cargo_vvs: RHS_Mi8MTV3_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\RHS_Mi8mtv3_Cargo_vvs.paa";
        displayName = "$STR_RHS_Mi8mtv3_CARGO_Name";
        author = "$STR_RHS_AUTHOR_FULL";
        driverDoor = "LeftDoor";
        cargoDoors[] = {"LeftDoor"};
        transportsoldier = 12;
        cargoProxyIndexes[] = {1, 2, 4, 5, 6, 7, 8, 9, 10, 11, 13, 15};
        getInProxyOrder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 16};
        class Turrets: Turrets {
            class CopilotTurret: CopilotTurret {};
            class FrontTurret: FrontTurret {};
            class CargoTurret_01: CargoTurret {
                gunnerAction = "passenger_inside_2";
                gunnerGetInAction = "GetInHeli_Transport_01Cargo";
                gunnerGetOutAction = "RHS_HIND_Cargo_Exit";
                memoryPointsGetInGunner = "pos cargo";
                memoryPointsGetInGunnerDir = "pos cargo dir";
                gunnerName = "Passenger (Right Rear Doors)";
                gunnerCompartments = "Compartment1";
                proxyIndex = 3;
                maxElev = 15;
                minElev = -45;
                maxTurn = -14;
                minTurn = -85;
                isPersonTurret = 1;
                gunnerUsesPilotView = 1;
                gunnerDoor = "LeftDoor";
                memorypointgunneroptics = "";
                selectionFireAnim = "";
                LODTurnedOut = 1200;
                LODTurnedIn = 1200;
                LODOpticsOut = 1200;
                LODOpticsIn = 1200;
                playerPosition = 3;
                soundAttenuationTurret = "HeliAttenuationRamp";
                disableSoundAttenuation = 0;
                weapons[] = {"rhs_weap_DummyLauncher"};
                enabledByAnimationSource = "RearDoors";
                class Hitpoints {};
            };
            class CargoTurret_02: CargoTurret_01 {
                gunnerName = "Passenger (Left Rear Doors)";
                memoryPointsGetInGunner = "pos driver";
                memoryPointsGetInGunnerDir = "pos driver dir";
                proxyIndex = 12;
                maxTurn = 85;
                minTurn = 15;
            };
            class CargoTurret_03: CargoTurret_01 {
                gunnerName = "Passenger (Left Door)";
                memoryPointsGetInGunner = "pos gunner";
                memoryPointsGetInGunnerDir = "pos gunner dir";
                proxyIndex = 16;
                maxTurn = 35;
                minTurn = -8;
                enabledByAnimationSource = "LeftDoor";
            };
        };
        class AnimationSources: AnimationSources {
            class LeftDoor {
                source = "door";
                animPeriod = 0.8;
                initPhase = 1;
            };
            class hide_turrets: hide_turrets {
                initPhase = 1;
            };
            class hide_door_hatch: hide_door_hatch {
                initPhase = 0;
            };
        };
        class Attributes: Attributes {
            class ObjectTexture: ObjectTexture {};
            class rhs_decalNumber_type: rhs_decalNumber_type {};
            class rhs_decalNumber: rhs_decalNumber {};
            class rhs_decalTail: rhs_decalTail {};
            class rhs_reardoors {
                displayName = "Open rear doors";
                property = "rhs_opendoors";
                control = "CheckboxNumber";
                expression = "[_this,12,14,true] call rhs_fnc_mi8_checkDoor";
                defaultValue = "0";
            };
            class rhs_leftdoor: rhs_reardoors {
                displayName = "Open left door";
                property = "rhs_leftdoor";
                expression = "_this animateDoor ['LeftDoor',_value,true]";
            };
        };
        class UserActions {
            class HUDoff {
                condition = "(player==driver this) and (this animationphase 'HUDAction' !=0)";
                displayname = "$STR_RHS_MI17HudOn_Name";
                displaynamedefault = "$STR_RHS_MI17HudOn_Name";
                onlyforplayer = 1;
                position = "zamerny";
                radius = 1;
                statement = "this animate ['HUDAction',0];this animate ['HUDaction_Hide',0]";
            };
            class HUDon {
                condition = "(player==driver this) and (this animationphase 'HUDAction' !=1)";
                displayname = "$STR_RHS_MI17HudOff_Name";
                displaynamedefault = "$STR_RHS_MI17HudOff_Name";
                onlyforplayer = 1;
                position = "zamerny";
                radius = 1;
                statement = "this animate ['HUDAction',1];this animate ['HUDaction_Hide',1]";
            };
            class openDoor {
                displayName = "Open Rear Doors";
                position = "";
                radius = 3;
                priority = 11;
                userActionID = 55;
                onlyForplayer = 1;
                showWindow = 0;
                condition = "this doorPhase 'RearDoors' < 0.5 AND alive this";
                statement = "[this,12,14] call rhs_fnc_mi8_checkDoor";
                shortcut = "user12";
            };
            class closeDoor: openDoor {
                userActionID = 56;
                displayName = "Close Rear Doors";
                condition = "this doorPhase 'RearDoors' > 0.5 AND alive this";
            };
            class openDoor_L: openDoor {
                userActionID = 57;
                displayName = "Open Left Door";
                condition = "this doorPhase 'LeftDoor' < 0.5 AND alive this";
                statement = "this animateDoor ['LeftDoor',1]";
                shortcut = "";
            };
            class closeDoor_L: openDoor_L {
                userActionID = 58;
                displayName = "Close Left Door";
                condition = "this doorPhase 'LeftDoor' > 0.5 AND alive this";
                statement = "this animateDoor ['LeftDoor',0]";
            };
            class ToggleLight {
                displayName = "Toggle interior light";
                position = "pos driver";
                radius = 15;
                showwindow = 0;
                condition = "player in this;";
                statement = "[this,'cargolights_hide'] call rhs_fnc_toggleIntLight";
                onlyforplayer = 1;
            };
            class WheelBrakes: ToggleLight {
                displayName = "Toggle Wheel Brakes";
                shortcut = "binocular";
                condition = "!difficultyEnabledRTD && (call rhs_fnc_findPlayer) isEqualTo (driver this)";
                statement = "[this] call rhs_fnc_heli_wheelBrakes";
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                getIn = "_this call rhs_fnc_mi8_doors";
                getOut = "_this call rhs_fnc_mi8_doors";
            };
        };
    };
    class RHS_Mi8mtv3_Cargo_vvsc: RHS_Mi8mtv3_Cargo_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\RHS_Mi8mtv3_Cargo_vvsc.paa";
        faction = "rhs_faction_vvs_c";
        author = "$STR_RHS_AUTHOR_FULL";
        rhs_decalParameters[] = {"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"};
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class RHS_Mi8mtv3_Cargo_vdv: RHS_Mi8mtv3_Cargo_vvsc {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\RHS_Mi8mtv3_Cargo_vdv.paa";
        faction = "rhs_faction_vdv";
        author = "$STR_RHS_AUTHOR_FULL";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class RHS_Mi8MTV3_heavy_vvs: RHS_Mi8MTV3_Heavy_VVS_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8MTV3_heavy_vvs.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Mi8MTV3_heavy_vvsc: RHS_Mi8MTV3_heavy_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8MTV3_heavy_vvsc.paa";
        faction = "rhs_faction_vvs_c";
        author = "$STR_RHS_AUTHOR_FULL";
        rhs_decalParameters[] = {"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"};
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class RHS_Mi8MTV3_heavy_vdv: RHS_Mi8MTV3_heavy_vvsc {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8MTV3_heavy_vdv.paa";
        faction = "rhs_faction_vdv";
        author = "$STR_RHS_AUTHOR_FULL";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class RHS_Mi8T_vvs: RHS_Mi8T_VVS_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8t_vvs.paa";
        scope = 2;
        displayName = "$STR_RHS_Mi8T_Name";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Mi8T_vvsc: RHS_Mi8T_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8T_vvsc.paa";
        faction = "rhs_faction_vvs_c";
        author = "$STR_RHS_AUTHOR_FULL";
        rhs_decalParameters[] = {"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"};
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\camo\mi8t_tv2_g_camo1_co.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class RHS_Mi8T_vdv: RHS_Mi8T_vvsc {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8T_vdv.paa";
        faction = "rhs_faction_vdv";
        author = "$STR_RHS_AUTHOR_FULL";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\camo\mi8t_tv2_g_camo2_co.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
        class AnimationSources: AnimationSources {
            class antennas_switch: antennas_switch {
                initPhase = 1;
            };
        };
    };
    class RHS_Mi8t_vv: RHS_Mi8T_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8t_vv.paa";
        faction = "rhs_faction_vv";
        author = "$STR_RHS_AUTHOR_FULL";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo3_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo_mvd_co.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\camo\mi8t_tv2_g_camo3_co.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
        class AnimationSources: AnimationSources {
            class hide_antenna_aft: hide_antenna_aft {
                initphase = 0;
            };
        };
    };
    class RHS_Mi8AMT_vvs: RHS_Mi8AMT_VVS_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8AMT_vvs.paa";
        scope = 2;
        displayName = "$STR_RHS_Mi8AMT_Name";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Mi8AMT_vvsc: RHS_Mi8AMT_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8AMT_vvsc.paa";
        faction = "rhs_faction_vvs_c";
        author = "$STR_RHS_AUTHOR_FULL";
        rhs_decalParameters[] = {"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"};
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo1_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class RHS_Mi8AMT_vdv: RHS_Mi8AMT_vvsc {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8AMT_vdv.paa";
        faction = "rhs_faction_vdv";
        author = "$STR_RHS_AUTHOR_FULL";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_body_g_camo2_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo2_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class RHS_Mi8AMTSh_vvs: RHS_Mi8AMTSh_VVS_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8AMTSh_vvs.paa";
        scope = 2;
        displayName = "$STR_RHS_MI8AMTSh_Name";
        author = "$STR_RHS_AUTHOR_FULL";
    };
    class RHS_Mi8AMTSh_vvsc: RHS_Mi8AMTSh_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8AMTSh_vvsc.paa";
        faction = "rhs_faction_vvs_c";
        scope = 2;
        displayName = "$STR_RHS_MI8AMTSh_Name";
        author = "$STR_RHS_AUTHOR_FULL";
        rhs_decalParameters[] = {"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"};
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi_171_camo1_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class RHS_Mi8AMTSh_UPK23_vvs: RHS_Mi8AMTSh_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8AMTSh_UPK23_vvs.paa";
        displayName = "$STR_RHS_MI8AMTSh_UPK_Name";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 1;
        scopeCurator = 2;
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class pylon1: pylon1 {
                        attachment = "rhs_mag_upk23_mixed";
                    };
                    class pylon2: pylon2 {
                        attachment = "rhs_mag_upk23_mixed";
                    };
                    class pylon3: pylon3 {
                        attachment = "rhs_mag_b8v20a_s8kom";
                    };
                    class pylon4: pylon4 {
                        attachment = "rhs_mag_b8v20a_s8kom";
                    };
                    class pylon5: pylon5 {
                        attachment = "rhs_mag_b8v20a_s8df";
                    };
                    class pylon6: pylon6 {
                        attachment = "rhs_mag_b8v20a_s8df";
                    };
                    class cmDispenser: cmDispenser {};
                };
            };
        };
        memoryPointGun[] = {"chase01", "chase02", "chase03", "chase04"};
        gunBeg[] = {
            "chase01dir",
            "chase02dir",
            "chase03dir",
            "chase04dir"
        };
        gunEnd[] = {"chase01", "chase02", "chase03", "chase04"};
    };
    class RHS_Mi8AMTSh_UPK23_vvsc: RHS_Mi8AMTSh_UPK23_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8AMTSh_UPK23_vvsc.paa";
        faction = "rhs_faction_vvs_c";
        author = "$STR_RHS_AUTHOR_FULL";
        rhs_decalParameters[] = {"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"};
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi_171_camo1_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class RHS_Mi8AMTSh_FAB_vvs: RHS_Mi8AMTSh_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8AMTSh_FAB_vvs.paa";
        displayName = "$STR_RHS_MI8AMTSh_FAB_Name";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 1;
        scopeCurator = 2;
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class pylon1: pylon1 {
                        attachment = "rhs_mag_fab250";
                    };
                    class pylon2: pylon2 {
                        attachment = "rhs_mag_fab250";
                    };
                    class pylon3: pylon3 {
                        attachment = "rhs_mag_b8v20a_s8kom";
                    };
                    class pylon4: pylon4 {
                        attachment = "rhs_mag_b8v20a_s8kom";
                    };
                    class pylon5: pylon5 {
                        attachment = "rhs_mag_b8v20a_s8df";
                    };
                    class pylon6: pylon6 {
                        attachment = "rhs_mag_b8v20a_s8df";
                    };
                    class cmDispenser: cmDispenser {};
                };
            };
        };
    };
    class RHS_Mi8AMTSh_FAB_vvsc: RHS_Mi8AMTSh_FAB_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8AMTSh_FAB_vvsc.paa";
        faction = "rhs_faction_vvs_c";
        author = "$STR_RHS_AUTHOR_FULL";
        rhs_decalParameters[] = {"['Number',cRHSAIRMI8NumberPlaces,'AviaRed']"};
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi_171_camo1_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class RHS_Mi8amt_civilian: RHS_Mi8AMT_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8amt_civilian.paa";
        scope = 2;
        displayName = "$STR_RHS_MI8AMT_Name";
        author = "$STR_RHS_AUTHOR_FULL";
        rhs_decalParameters[] = {};
        vehicleClass = "Air";
        editorSubcategory = "rhs_EdSubcat_helicopter";
        side = 3;
        faction = "CIV_F";
        crew = "C_man_1_1_F";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8civil_body_g_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8civil_det_g_co.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa"
        };
        class EventHandlers: EventHandlers {};
        class AnimationSources: AnimationSources {
            class intake_hide: intake_hide {
                initPhase = 1;
            };
        };
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class cmDispenser: cmDispenser {
                        attachment = "";
                    };
                };
            };
        };
    };
    class RHS_Mi8t_civilian: RHS_Mi8T_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8t_civilian.paa";
        scope = 2;
        displayName = "$STR_RHS_MI8T_Name";
        author = "$STR_RHS_AUTHOR_FULL";
        rhs_decalParameters[] = {};
        vehicleClass = "Air";
        editorSubcategory = "rhs_EdSubcat_helicopter";
        side = 3;
        faction = "CIV_F";
        crew = "C_man_1_1_F";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8civil_body_g_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8civil_det_g_co.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\mi8tcivil_tv2_g_co.paa",
            "rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa"
        };
        class EventHandlers: EventHandlers {};
        class AnimationSources: AnimationSources {
            class antennas_switch: antennas_switch {
                initPhase = 1;
            };
        };
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class cmDispenser: cmDispenser {
                        attachment = "";
                    };
                };
            };
        };
    };
    class RHS_su25_base: O_Plane_CAS_02_F {
        dlc = "RHS_AFRF";
        rhs_decalParameters[] = {"['Number',cRHSAIRSU25NumberPlaces,'AviaRed']", "['Label', cRHSAIRSU25NosePlaces, 'Su25NoseArt']", "['Label', cRHSAIRSU25SidePlaces, 'Su25Ex']"};
        irTarget = 1;
        irTargetSize = 1;
        visualTarget = 1;
        visualTargetSize = 0.9;
        radarTarget = 1;
        radarTargetSize = 1;
        LESH_canBeTowed = 1;
        LESH_towFromFront = 1;
        LESH_AxisOffsetTarget[] = {0, 6.8, -2.04};
        LESH_WheelOffset[] = {0, -0.7};
        category = "Air";
        crew = "rhs_pilot";
        typicalCargo[] = {"rhs_pilot"};
        scope = 0;
        availableForSupportTypes[] = {"CAS_Bombing"};
        model = "\rhsafrf\addons\rhs_a2port_air\su25\su25";
        picture = "\rhsafrf\addons\rhs_a2port_air\data\ico\rhs_su25sm_pic_ca.paa";
        icon = "\rhsafrf\addons\rhs_a2port_air\data\map_ico\icomap_su25.paa";
        mapSize = 20;
        textSingular = "Su25";
        displayname = "$STR_RHS_SU25_Name";
        driverAction = "rhs_su25_pilot";
        driverLeftHandAnimName = "lever_pilot";
        driverRightHandAnimName = "stick_pilot";
        driverLeftLegAnimName = "pedal_L";
        driverRightLegAnimName = "pedal_R";
        memoryPointsGetInDriver = "pos driver";
        memoryPointsGetInDriverDir = "pos driver dir";
        memoryPointsGetInDriverPrecise = "pos driver";
        unitInfoType = "RHS_RscUnitInfoAir_Su25";
        driverWeaponsInfoType = "RHS_RscOptics_Su25_KlenPS";
        HeadAimDown = 6;
        headGforceLeaningFactor[] = {0.005, 0.001, 0.015};
        camShakeCoef = 0.7;
        driverCanSee = "2+4+8+16";
        allowTabLock = 0;
        driverCanEject = 1;
        driverCompartments = 1;
        class EjectionSystem {};
        ejectDamageLimit = 1;
        memoryPointDriverOptics = "pilotCamera";
        class PilotCamera {
            class OpticsIn {
                class Wide {
                    opticsDisplayName = "WFOV";
                    initAngleX = 0;
                    minAngleX = 0;
                    maxAngleX = 0;
                    initAngleY = 0;
                    minAngleY = 0;
                    maxAngleY = 0;
                    initFov = "(10 / 120)";
                    minFov = "(60 / 120)";
                    maxFov = "(60 / 120)";
                    directionStabilized = 1;
                    visionMode[] = {"Normal"};
                    gunneropticsmodel = "";
                    opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur2"};
                };
            };
            minTurn = -12;
            maxTurn = 12;
            initTurn = 0;
            minElev = -6;
            maxElev = 16;
            initElev = 0;
            maxXRotSpeed = 1;
            maxYRotSpeed = 1;
            maxMouseXRotSpeed = 0.5;
            maxMouseYRotSpeed = 0.5;
            pilotOpticsShowCursor = 1;
            controllable = 1;
        };
        class ViewPilot: ViewPilot {
            initAngleX = -0;
        };
        weapons[] = {"rhs_weap_MASTERSAFE", "rhs_weap_klen_ps", "rhs_weap_GSh302"};
        magazines[] = {"rhs_lasermag", "rhs_mag_gsh30_bt_250"};
        weaponsGroup1 = 128;
        weaponsGroup4 = 64;
        memoryPointGun[] = {"kulomet", "kulomet2"};
        gunBeg[] = {"muzzle_1", "muzzle_2"};
        gunEnd[] = {"chamber_1", "chamber_2"};
        selectionFireAnim = "zasleh";
        memoryPointLDust = "levy prach";
        memoryPointRDust = "pravy prach";
        memoryPointLRocket = "rocket_1";
        memoryPointRRocket = "rocket_2";
        memoryPointLMissile = "missile_1";
        memoryPointRMissile = "missile_2";
        memorypointcm[] = {"flare_launcher1", "flare_launcher2"};
        memorypointcmdir[] = {"flare_launcher1_dir", "flare_launcher2_dir"};
        selectionDamage = "trup";
        selectionShowDamage = "poskozeni";
        armor = 60;
        damageResistance = 0.0048;
        armorStructural = 2;
        epeImpulseDamageCoef = 1;
        class Hitpoints {
            class HitHull {
                armor = 999;
                explosionShielding = 0;
                passThrough = 0.01;
                minimalHit = 1;
                radius = 0.15;
                material = -1;
                name = "hit_hull";
                visual = "-";
                depends = "Total";
            };
            class HitAvionics {
                armor = 1;
                explosionShielding = 0.6;
                passThrough = 0.05;
                minimalHit = 0.1;
                radius = 0.08;
                material = -1;
                name = "hit_avionics";
                visual = "vis_avionics";
                depends = "0";
            };
            class HitEngine {
                armor = 1;
                explosionShielding = 0.25;
                passThrough = 0.2;
                minimalHit = 0.01;
                radius = 0.07;
                material = -1;
                name = "hit_engine_l";
                visual = "vis_engine_l";
                depends = "0";
            };
            class HitEngine2 {
                armor = 1;
                explosionShielding = 0.25;
                passThrough = 0.2;
                minimalHit = 0.01;
                radius = 0.07;
                material = -1;
                name = "hit_engine_r";
                visual = "vis_engine_r";
                depends = "0";
            };
            class HitFuel {
                armor = 1.4;
                explosionShielding = 0.2;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.1;
                material = -1;
                name = "hit_fuel";
                visual = "vis_fuel";
                depends = "0";
            };
            class HitFuel_left {
                armor = 1;
                explosionShielding = 0.6;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.1;
                material = -1;
                name = "hit_fuel_wing_l";
                visual = "vis_wing_l";
                depends = "0";
            };
            class HitFuel_right {
                armor = 1;
                explosionShielding = 0.6;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.1;
                material = -1;
                name = "hit_fuel_wing_r";
                visual = "vis_wing_r";
                depends = "0";
            };
            class HitFuel2 {
                armor = 999;
                explosionShielding = 0;
                passThrough = 0.1;
                minimalHit = 1;
                radius = 0.01;
                material = -1;
                name = "hit_fuel";
                visual = "ind_fuel_r";
                depends = "(HitFuel_left+HitFuel_right)*0.5";
            };
            class HitLAileron_link {
                armor = 0.6;
                explosionShielding = 0.6;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.12;
                material = -1;
                name = "hit_aileron_link_l";
                visual = "-";
                depends = "0";
            };
            class HitRAileron_link {
                armor = 0.6;
                explosionShielding = 0.6;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.12;
                material = -1;
                name = "hit_aileron_link_r";
                visual = "-";
                depends = "0";
            };
            class HitLAileron {
                armor = 0.6;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.13;
                material = -1;
                name = "hit_aileron_l";
                visual = "vis_wing_l";
                depends = "HitLAileron_link*0.7";
            };
            class HitRAileron {
                armor = 0.6;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.13;
                material = -1;
                name = "hit_aileron_r";
                visual = "vis_wing_r";
                depends = "HitRAileron_link*0.7";
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
            class HitLCElevator {
                armor = 0.6;
                explosionShielding = 0.6;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.12;
                material = -1;
                name = "hit_elevator_l";
                visual = "vis_elevator_l";
                depends = "HitControlRear";
            };
            class HitRElevator {
                armor = 0.6;
                explosionShielding = 0.6;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.12;
                material = -1;
                name = "hit_elevator_r";
                visual = "vis_elevator_r";
                depends = "HitControlRear";
            };
            class HitLCRudder {
                armor = 0.6;
                explosionShielding = 0.6;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.12;
                material = -1;
                name = "hit_rudder";
                visual = "vis_rudder";
                depends = "HitControlRear";
            };
            class HitGlass1 {
                armor = 0.5;
                explosionShielding = 0.6;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.3;
                material = -1;
                name = "glass1";
                visual = "glass1";
                depends = "0";
            };
            class HitGlass2 {
                armor = 0.5;
                explosionShielding = 0.6;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.3;
                material = -1;
                name = "glass2";
                visual = "glass2";
                depends = "0";
            };
            class Ind_Fire1 {
                armor = 999;
                explosionShielding = 0;
                passThrough = 0;
                minimalHit = 1;
                radius = 0.01;
                material = -1;
                name = "hit_fuel";
                visual = "ind_fire";
                depends = "HitEngine*0.5";
            };
            class Ind_Fire2 {
                armor = 999;
                explosionShielding = 0;
                passThrough = 0;
                minimalHit = 1;
                radius = 0.01;
                material = -1;
                name = "hit_fuel";
                visual = "ind_fire";
                depends = "HitEngine2*0.5";
            };
            class Ind_Hydr_L {
                armor = 999;
                explosionShielding = 0;
                passThrough = 0;
                minimalHit = 1;
                radius = 0.01;
                material = -1;
                name = "hit_fuel";
                visual = "ind_hydr_l";
                depends = "(HitLAileron+HitLCElevator+HitLCRudder)*0.5";
            };
            class Ind_Hydr_R {
                armor = 999;
                explosionShielding = 0;
                passThrough = 0;
                minimalHit = 1;
                radius = 0.01;
                material = -1;
                name = "hit_fuel";
                visual = "ind_hydr_r";
                depends = "(HitRAileron+HitRElevator)*0.5";
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
                minimalHit = -0.1;
                explosionShielding = 0.1;
                radius = 0.75;
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
                minimalHit = -0.1;
                explosionShielding = 0.1;
                radius = 0.75;
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
                minimalHit = -0.1;
                explosionShielding = 0.1;
                radius = 0.75;
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
            class HitPylon8 {
                armor = -30;
                material = -1;
                name = "hit_pylon_8";
                passThrough = 0;
                minimalHit = -0.1;
                explosionShielding = 0.1;
                radius = 0.75;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Pylon_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_pylon_8";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_Pylon_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_pylon_8";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_Pylon_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_pylon_8";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_Pylon_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_pylon_8";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class HitPylon9 {
                armor = -30;
                material = -1;
                name = "hit_pylon_9";
                passThrough = 0;
                minimalHit = -0.1;
                explosionShielding = 0.1;
                radius = 0.75;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Pylon_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_pylon_9";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_Pylon_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_pylon_9";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_Pylon_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_pylon_9";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_Pylon_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_pylon_9";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
            class HitPylon10 {
                armor = -30;
                material = -1;
                name = "hit_pylon_10";
                passThrough = 0;
                minimalHit = -0.1;
                explosionShielding = 0.1;
                radius = 0.75;
                visual = "-";
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Pylon_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "fx_pylon_10";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_Pylon_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "fx_pylon_10";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_Pylon_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "fx_pylon_10";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                    class RHS_Pylon_Shard {
                        simulation = "particles";
                        type = "RHS_ERA_Shard";
                        position = "fx_pylon_10";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 0.03;
                    };
                };
            };
        };
        vehicleClass = "rhs_vehclass_aircraft";
        incomingMissileDetectionSystem = 8;
        lockDetectionSystem = 8;
        hiddenselections[] = {
            "camo1",
            "camo2",
            "n1",
            "n2",
            "i1",
            "i2",
            "tail_decals"
        };
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body1_rus_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body2_rus_co.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
        class textureSources {
            class standard {
                displayName = "Blue";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body1_alt_co.paa", "\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body2_alt_co.paa"};
                factions[] = {"rhs_faction_vvs"};
            };
            class standard2: standard {
                displayName = "Grey";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body1_co.paa", "\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body2_co.paa"};
            };
            class Camo: standard {
                displayName = "Camo #1";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body1_rus_co.paa", "\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body2_rus_co.paa"};
                factions[] = {"rhs_faction_vvs_c"};
            };
            class Camo1: Camo {
                displayName = "Camo #2";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_a2port_air\su25\data\camo\su25_body1_camo1_co.paa", "\rhsafrf\addons\rhs_a2port_air\su25\data\camo\su25_body2_camo1_co.paa"};
            };
            class Camo2: standard {
                displayName = "CDF";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body1_cdf_co.paa", "\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body2_cdf_co.paa"};
            };
        };
        textureList[] = {};
        class Components {
            class TransportPylonsComponent {
                UIPicture = "\rhsafrf\addons\rhs_a2port_air\data\loadouts\RHS_Su25_EDEN_CA.paa";
                class pylons {
                    class pylon1 {
                        hardpoints[] = {
                            "RHS_HP_KH29",
                            "RHS_HP_FAB100",
                            "RHS_HP_FAB100_MBD3_U4T",
                            "RHS_HP_FAB100_MBD3_U6",
                            "RHS_HP_FAB250",
                            "RHS_HP_FAB500",
                            "RHS_HP_KMGU2",
                            "RHS_HP_O25L",
                            "RHS_HP_APU68M3_S24",
                            "RHS_HP_B13L",
                            "RHS_HP_B8M1",
                            "RHS_HP_UB16",
                            "RHS_HP_UB32",
                            "RHS_HP_R73"
                        };
                        priority = 9;
                        attachment = "rhs_mag_fab250";
                        hitpoint = "HitPylon1";
                        maxweight = 1200;
                        UIposition[] = {0.32, 0.35};
                    };
                    class pylon2: pylon1 {
                        UIposition[] = {0.32, 0.2};
                        mirroredMissilePos = 1;
                        hitpoint = "HitPylon2";
                    };
                    class pylon3: pylon1 {
                        hardpoints[] = {
                            "RHS_HP_KH25",
                            "RHS_HP_FAB100",
                            "RHS_HP_FAB100_MBD3_U4T",
                            "RHS_HP_FAB100_MBD3_U6",
                            "RHS_HP_FAB250",
                            "RHS_HP_FAB500",
                            "RHS_HP_KMGU2",
                            "RHS_HP_O25L",
                            "RHS_HP_APU68M3_S24",
                            "RHS_HP_B13L",
                            "RHS_HP_B8M1",
                            "RHS_HP_UB16",
                            "RHS_HP_UB32",
                            "RHS_HP_R73"
                        };
                        priority = 7;
                        hitpoint = "HitPylon3";
                        UIposition[] = {0.33, 0.4};
                    };
                    class pylon4: pylon3 {
                        UIposition[] = {0.33, 0.15};
                        mirroredMissilePos = 3;
                        hitpoint = "HitPylon4";
                    };
                    class pylon5: pylon1 {
                        hardpoints[] = {
                            "RHS_HP_KH25",
                            "RHS_HP_FAB100",
                            "RHS_HP_FAB100_MBD3_U4T",
                            "RHS_HP_FAB100_MBD3_U6",
                            "RHS_HP_FAB250",
                            "RHS_HP_FAB500",
                            "RHS_HP_KMGU2",
                            "RHS_HP_O25L",
                            "RHS_HP_APU68M3_S24",
                            "RHS_HP_B13L",
                            "RHS_HP_B8M1",
                            "RHS_HP_UB16",
                            "RHS_HP_UB32",
                            "RHS_HP_R73"
                        };
                        priority = 10;
                        attachment = "rhs_mag_b8m1_s8kom";
                        hitpoint = "HitPylon5";
                        maxweight = 1200;
                        UIposition[] = {0.34, 0.45};
                    };
                    class pylon6: pylon5 {
                        UIposition[] = {0.34, 0.1};
                        mirroredMissilePos = 5;
                        hitpoint = "HitPylon6";
                    };
                    class pylon7: pylon1 {
                        hardpoints[] = {
                            "RHS_HP_FAB100",
                            "RHS_HP_FAB100_MBD3_U4T",
                            "RHS_HP_FAB100_MBD3_U6",
                            "RHS_HP_FAB250",
                            "RHS_HP_FAB500",
                            "RHS_HP_KMGU2",
                            "RHS_HP_O25L",
                            "RHS_HP_APU68M3_S24",
                            "RHS_HP_B13L",
                            "RHS_HP_B8M1",
                            "RHS_HP_UB16",
                            "RHS_HP_UB32",
                            "RHS_HP_R73"
                        };
                        priority = 11;
                        attachment = "rhs_mag_b8m1_s8df";
                        hitpoint = "HitPylon7";
                        maxweight = 1200;
                        UIposition[] = {0.35, 0.5};
                    };
                    class pylon8: pylon7 {
                        UIposition[] = {0.35, 0.05};
                        mirroredMissilePos = 7;
                        hitpoint = "HitPylon8";
                    };
                    class pylon9: pylon1 {
                        hardpoints[] = {"RHS_HP_R60"};
                        priority = 12;
                        attachment = "rhs_mag_R60M";
                        hitpoint = "HitPylon9";
                        maxweight = 1200;
                        UIposition[] = {0.36, 0.55};
                    };
                    class pylon10: pylon9 {
                        UIposition[] = {0.36, 0};
                        mirroredMissilePos = 9;
                        hitpoint = "HitPylon10";
                    };
                    class cmDispenser {
                        hardpoints[] = {"RHS_cm_ASO2", "RHS_cm_ASO2_x2", "RHS_cm_ASO2_x4"};
                        priority = 1;
                        attachment = "rhs_ASO2_CMFlare_Chaff_Magazine_x4";
                        maxweight = 800;
                        UIposition[] = {0.625, 0.275};
                    };
                };
                class Presets {
                    class CAS {
                        attachment[] = {
                            "rhs_mag_b8m1_s8kom",
                            "rhs_mag_b8m1_s8kom",
                            "rhs_mag_b8m1_s8kom",
                            "rhs_mag_b8m1_s8kom",
                            "rhs_mag_b8m1_s8df",
                            "rhs_mag_b8m1_s8df",
                            "rhs_mag_b8m1_s8df",
                            "rhs_mag_b8m1_s8df",
                            "rhs_mag_R60M",
                            "rhs_mag_R60M",
                            "rhs_ASO2_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "Close Air Support";
                    };
                    class HeavyCAS {
                        attachment[] = {
                            "rhs_mag_b13l_s13b",
                            "rhs_mag_b13l_s13b",
                            "rhs_mag_b13l_s13t",
                            "rhs_mag_b13l_s13t",
                            "rhs_mag_b8m1_s8df",
                            "rhs_mag_b8m1_s8df",
                            "rhs_mag_b8m1_s8df",
                            "rhs_mag_b8m1_s8df",
                            "rhs_mag_R60M",
                            "rhs_mag_R60M",
                            "rhs_ASO2_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "Close Air Support (S-13)";
                    };
                    class GroundSupress_S24B {
                        attachment[] = {
                            "rhs_mag_apu68m3_s24b",
                            "rhs_mag_apu68m3_s24b",
                            "rhs_mag_apu68m3_s24b",
                            "rhs_mag_apu68m3_s24b",
                            "rhs_mag_apu68m3_s24b",
                            "rhs_mag_apu68m3_s24b",
                            "rhs_mag_apu68m3_s24b",
                            "rhs_mag_apu68m3_s24b",
                            "rhs_mag_R60M",
                            "rhs_mag_R60M",
                            "rhs_ASO2_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "Ground Supress (S-24B)";
                    };
                    class Bomb {
                        attachment[] = {
                            "rhs_mag_fab250",
                            "rhs_mag_fab250",
                            "rhs_mag_fab250",
                            "rhs_mag_fab250",
                            "rhs_mag_b8m1_s8kom",
                            "rhs_mag_b8m1_s8kom",
                            "rhs_mag_b8m1_s8df",
                            "rhs_mag_b8m1_s8df",
                            "rhs_mag_R60M",
                            "rhs_mag_R60M",
                            "rhs_ASO2_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "Bomb (FAB-250)";
                    };
                    class HeavyBomb {
                        attachment[] = {
                            "rhs_mag_fab500",
                            "rhs_mag_fab500",
                            "rhs_mag_fab500",
                            "rhs_mag_fab500",
                            "rhs_mag_b8m1_s8kom",
                            "rhs_mag_b8m1_s8kom",
                            "rhs_mag_b8m1_s8df",
                            "rhs_mag_b8m1_s8df",
                            "rhs_mag_R60M",
                            "rhs_mag_R60M",
                            "rhs_ASO2_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "Bomb (FAB-500)";
                    };
                    class AT {
                        attachment[] = {
                            "rhs_mag_fab250",
                            "rhs_mag_fab250",
                            "rhs_mag_kh25ML",
                            "rhs_mag_kh25ML",
                            "rhs_mag_kh25ML",
                            "rhs_mag_kh25ML",
                            "rhs_mag_b8m1_s8df",
                            "rhs_mag_b8m1_s8df",
                            "rhs_mag_R60M",
                            "rhs_mag_R60M",
                            "rhs_ASO2_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "Anti Tank (Kh-25ML)";
                    };
                    class HeavyAT {
                        attachment[] = {
                            "rhs_mag_kh29ML",
                            "rhs_mag_kh29ML",
                            "rhs_mag_fab250",
                            "rhs_mag_fab250",
                            "rhs_mag_b8m1_s8kom",
                            "rhs_mag_b8m1_s8kom",
                            "rhs_mag_b8m1_s8kom",
                            "rhs_mag_b8m1_s8kom",
                            "rhs_mag_R60M",
                            "rhs_mag_R60M",
                            "rhs_ASO2_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "Anti Tank (Kh-29ML)";
                    };
                    class HeavyATMix {
                        attachment[] = {
                            "rhs_mag_kh29ML",
                            "rhs_mag_kh29ML",
                            "rhs_mag_kh25ML",
                            "rhs_mag_kh25ML",
                            "rhs_mag_kh25ML",
                            "rhs_mag_kh25ML",
                            "rhs_mag_b8m1_s8kom",
                            "rhs_mag_b8m1_s8kom",
                            "rhs_mag_R60M",
                            "rhs_mag_R60M",
                            "rhs_ASO2_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "Anti Tank (Mixed)";
                    };
                    class Cluster {
                        attachment[] = {
                            "rhs_mag_rbk250_ao1",
                            "rhs_mag_rbk250_ao1",
                            "rhs_mag_rbk250_ao1",
                            "rhs_mag_rbk250_ao1",
                            "rhs_mag_b8m1_s8kom",
                            "rhs_mag_b8m1_s8kom",
                            "rhs_mag_b8m1_s8df",
                            "rhs_mag_b8m1_s8df",
                            "rhs_mag_R60M",
                            "rhs_mag_R60M",
                            "rhs_ASO2_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "Heavy CAS (S-13)";
                    };
                    class KMGU {
                        attachment[] = {
                            "rhs_mag_kmgu2_ao25",
                            "rhs_mag_kmgu2_ao25",
                            "rhs_mag_kmgu2_ao25",
                            "rhs_mag_kmgu2_ao25",
                            "rhs_mag_b8m1_s8kom",
                            "rhs_mag_b8m1_s8kom",
                            "rhs_mag_b8m1_s8df",
                            "rhs_mag_b8m1_s8df",
                            "rhs_mag_R60M",
                            "rhs_mag_R60M",
                            "rhs_ASO2_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "KMGU-2";
                    };
                };
            };
            class SensorsManagerComponent {
                class Components {
                    class PassiveRadarSensorComponent: SensorTemplatePassiveRadar {};
                };
            };
            class TransportCountermeasuresComponent {};
        };
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
                expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHSAIRSU25NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
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
                defaultValue = "-1";
                typeName = "Number";
                expression = "if(_value >= 0)then{if(_value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRSU25NumberPlaces}else{[_this, [['Number', cRHSAIRSU25NumberPlaces, _this getVariable ['rhs_decalNumber_type','AviaYellow'], _value] ] ] call rhs_fnc_decalsInit}};";
            };
            class rhs_decalNoseArt {
                displayName = "Define Nose Art";
                tooltip = "Define Nose Art texture located near the cabin. Appears on both sides";
                property = "rhs_decalNoseArt";
                control = "Combo";
                expression = "if(_value >= 0)then{ [_this, [ [ 'Label', cRHSAIRSU25NosePlaces, 'Su25NoseArt',_value] ] ] call rhs_fnc_decalsInit};";
                defaultValue = "-1";
                typeName = "Number";
                class values {
                    class Random {
                        name = "Random";
                        value = -1;
                        defaultValue = -1;
                    };
                    class Empty {
                        name = "Empty";
                        value = 0;
                    };
                    class Arrows {
                        name = "Aviation emblem";
                        value = 1;
                    };
                    class Thunders {
                        name = "Thunders";
                        value = 2;
                    };
                    class Eyes {
                        name = "Eyes";
                        value = 3;
                    };
                    class Stars {
                        name = "Stars";
                        value = 4;
                    };
                };
            };
            class rhs_decalSideArt: rhs_decalNoseArt {
                displayName = "Define Side Art";
                tooltip = "Define Side Art texture located near the jet intake. Appears on both sides";
                property = "rhs_decalSideArt";
                expression = "if(_value >= 0)then{ [_this, [ [ 'Label', cRHSAIRSU25SidePlaces, 'Su25Ex',_value] ] ] call rhs_fnc_decalsInit};";
                class values {
                    class Random {
                        name = "Random";
                        value = -1;
                        defaultValue = -1;
                    };
                    class Empty {
                        name = "Empty";
                        value = 0;
                    };
                    class Crow {
                        name = "Crow";
                        value = 1;
                    };
                    class Russia {
                        name = "Russia emblem";
                        value = 2;
                    };
                };
            };
            class rhs_decalTail {
                displayName = "Define tail decal";
                tooltip = "Define tail decal that will be drawn on vehicle";
                property = "rhs_decalTail";
                control = "Combo";
                expression = "[_this,[['Label', cRHSAIRSU25TailPlaces, 'Aviation',_value]]] call rhs_fnc_decalsInit";
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
        class Exhausts {
            class Exhaust1 {
                position = "exhaust1";
                direction = "exhaust1_dir";
                effect = "ExhaustsEffectPlaneHP";
                engineIndex = 0;
            };
            class Exhaust2 {
                position = "exhaust2";
                direction = "exhaust2_dir";
                effect = "ExhaustsEffectPlaneHP";
                engineIndex = 1;
            };
        };
        class RenderTargets {
            class Periscope {
                renderTarget = "rendertarget0";
                class CameraView1 {
                    pointPosition = "PIP0_pos";
                    pointDirection = "PIP0_dir";
                    renderVisionMode = 0;
                    renderQuality = 2;
                    fov = 0.5;
                };
            };
        };
        class compartmentsLights {
            class Comp1 {
                class Light_General {
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
                    point = "light_general";
                };
            };
        };
        class Reflectors {
            class Left {
                ambient[] = {100, 100, 100, 0};
                color[] = {7000, 7500, 10000, 1};
                coneFadeCoef = 10;
                dayLight = 0;
                direction = "konec l svetla";
                flareSize = 4;
                hitpoint = "l svetlo";
                innerAngle = 20;
                intensity = 50;
                outerAngle = 60;
                position = "l svetlo";
                selection = "l svetlo";
                size = 1;
                useFlare = 1;
                class Attenuation {
                    constant = 0;
                    linear = 0;
                    quadratic = 4;
                    start = 1;
                };
            };
            class Left_Flare: Left {
                intensity = 0.5;
                useFlare = 1;
                innerAngle = 5;
                outerAngle = 175;
            };
            class Right: Left {
                position = "p svetlo";
                direction = "konec p svetla";
                hitpoint = "p svetlo";
                selection = "p svetlo";
            };
            class Right_Flare: Right {
                intensity = 0.5;
                useFlare = 1;
                innerAngle = 5;
                outerAngle = 175;
            };
        };
        aggregateReflectors[] = {{"Left", "Left_Flare"}, {"Right", "Right_Flare"}};
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
                color[] = {1, 1, 1};
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
        class Damage {
            tex[] = {"rhsafrf\addons\rhs_a2port_air\su25\data\rhs_su25_warningLights_empty_ca.paa", "rhsafrf\addons\rhs_a2port_air\su25\data\rhs_su25_warningLights_ca.paa"};
            mat[] = {
                "rhsafrf\addons\rhs_a2port_air\su25\data\su25_glass.rvmat",
                "rhsafrf\addons\rhs_a2port_air\su25\data\su25_glass_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\su25\data\su25_glass_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\su25\data\su25_glass_in.rvmat",
                "rhsafrf\addons\rhs_a2port_air\su25\data\su25_glass_in_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\su25\data\su25_glass_in_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\su25\data\su25_body1.rvmat",
                "rhsafrf\addons\rhs_a2port_air\su25\data\su25_body1_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\su25\data\su25_body1_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_air\su25\data\su25_body2.rvmat",
                "rhsafrf\addons\rhs_a2port_air\su25\data\su25_body2_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\su25\data\su25_body2_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_air\su25\data\su25_glass.rvmat",
                "rhsafrf\addons\rhs_a2port_air\su25\data\su25_glass_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\su25\data\su25_glass_destruct.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class AnimationSources: AnimationSources {
            class eject {
                source = "door";
                animPeriod = 0.6;
                initPhase = 0;
            };
            class eject_hide {
                source = "user";
                animPeriod = 0.6;
                initPhase = 0;
            };
            class throttle_source: eject_hide {
                animPeriod = 10;
            };
            class rwr_lights_lock {
                source = "user";
                initPhase = 0;
                animPeriod = 8;
            };
            class rwr_lock_dir_primary: rwr_lights_lock {
                animPeriod = 0.1;
            };
            class rwr_lock_primary: rwr_lights_lock {
                animPeriod = 0.0000001;
            };
            class rwr_signal_strenght: rwr_lights_lock {
                animPeriod = 0.0000001;
            };
            class rwr_lights: rwr_lock_primary {};
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
            class hit_pylon_8_source {
                source = "Hit";
                hitpoint = "HitPylon8";
            };
            class hit_pylon_9_source {
                source = "Hit";
                hitpoint = "HitPylon9";
            };
            class hit_pylon_10_source {
                source = "Hit";
                hitpoint = "HitPylon10";
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
        threat[] = {1, 1, 1};
        driveOnComponent[] = {"gear_f1", "gear_l1", "gear_r1"};
        defaultUserMFDvalues[] = {0, 0, 0, 0, 0, 0};
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
                    class HorizonBankMGun {
                        center[] = {0, 0};
                        type = "rotational";
                        source = "HorizonBank";
                        min = -6.28319;
                        max = 6.28319;
                        minAngle = -360;
                        maxAngle = 360;
                        aspectRatio = 0.8;
                    };
                    class HorizonBankReverted {
                        pos0[] = {-0, -0};
                        pos10[] = {0, 0};
                        center[] = {0, 0};
                        type = "rotational";
                        source = "HorizonBank";
                        min = -6.28319;
                        max = 6.28319;
                        minAngle = 360;
                        maxAngle = -360;
                        aspectRatio = 0.8;
                    };
                    class ImpactPoint {
                        type = "vector";
                        source = "ImpactPoint";
                        pos0[] = {0.5, 0.23};
                        pos10[] = {1.38, 1.46};
                    };
                    class TargetingPodDir {
                        type = "vector";
                        source = "pilotcamera";
                        pos0[] = {"0.50+0.034", "0.27-0.0455"};
                        pos10[] = {2.02, 1.47};
                    };
                    class TargetingPodTarget: TargetingPodDir {};
                    class MissileFlightTimeRot1 {
                        type = "rotational";
                        source = "MissileFlightTime";
                        sourceScale = 2.5;
                        center[] = {0, 0};
                        min = 0;
                        max = 0.5;
                        minAngle = 0;
                        maxAngle = 18;
                        aspectRatio = 0.840909;
                    };
                    class MissileFlightTimeRot2: MissileFlightTimeRot1 {
                        maxAngle = 37;
                        max = 6;
                    };
                    class MissileFlightTimeRot3: MissileFlightTimeRot1 {
                        maxAngle = 55.5;
                        max = 9;
                    };
                    class MissileFlightTimeRot4: MissileFlightTimeRot1 {
                        maxAngle = 74;
                        max = 12;
                    };
                    class MissileFlightTimeRot5: MissileFlightTimeRot1 {
                        maxAngle = 92.5;
                        max = 15;
                    };
                    class MissileFlightTimeRot6: MissileFlightTimeRot1 {
                        maxAngle = 111;
                        max = 18;
                    };
                    class MissileFlightTimeRot7: MissileFlightTimeRot1 {
                        maxAngle = 129.5;
                        max = 21;
                    };
                    class MissileFlightTimeRot8: MissileFlightTimeRot1 {
                        maxAngle = 148;
                        max = 24;
                    };
                    class MissileFlightTimeRot9: MissileFlightTimeRot1 {
                        maxAngle = 166.5;
                        max = 27;
                    };
                    class MissileFlightTimeRot10: MissileFlightTimeRot1 {
                        maxAngle = 185;
                        max = 30;
                    };
                    class MissileFlightTimeRot11: MissileFlightTimeRot1 {
                        maxAngle = 203.5;
                        max = 33;
                    };
                    class MissileFlightTimeRot12: MissileFlightTimeRot1 {
                        maxAngle = 222;
                        max = 36;
                    };
                    class MissileFlightTimeRot13: MissileFlightTimeRot1 {
                        maxAngle = 240.5;
                        max = 39;
                    };
                    class MissileFlightTimeRot14: MissileFlightTimeRot1 {
                        maxAngle = 259;
                        max = 42;
                    };
                    class MissileFlightTimeRot15: MissileFlightTimeRot1 {
                        maxAngle = 277.5;
                        max = 45;
                    };
                    class MissileFlightTimeRot16: MissileFlightTimeRot1 {
                        maxAngle = 296;
                        max = 48;
                    };
                    class MissileFlightTimeRot17: MissileFlightTimeRot1 {
                        maxAngle = 314.5;
                        max = 51;
                    };
                    class MissileFlightTimeRot18: MissileFlightTimeRot1 {
                        maxAngle = 333;
                        max = 54;
                    };
                    class MissileFlightTimeRot19: MissileFlightTimeRot1 {
                        maxAngle = 351.5;
                        max = 57;
                    };
                    class MissileFlightTimeRot20: MissileFlightTimeRot1 {
                        maxAngle = 370;
                        max = 60;
                    };
                    class UserRot1 {
                        type = "rotational";
                        source = "user";
                        sourceIndex = 4;
                        sourceScale = 0.004;
                        center[] = {0, 0};
                        min = 0;
                        max = 0.5;
                        minAngle = 0;
                        maxAngle = 18;
                        aspectRatio = 0.840909;
                    };
                    class UserRot2: UserRot1 {
                        maxAngle = 37;
                        max = 6;
                    };
                    class UserRot3: UserRot1 {
                        maxAngle = 55.5;
                        max = 9;
                    };
                    class UserRot4: UserRot1 {
                        maxAngle = 74;
                        max = 12;
                    };
                    class UserRot5: UserRot1 {
                        maxAngle = 92.5;
                        max = 15;
                    };
                    class UserRot6: UserRot1 {
                        maxAngle = 111;
                        max = 18;
                    };
                    class UserRot7: UserRot1 {
                        maxAngle = 129.5;
                        max = 21;
                    };
                    class UserRot8: UserRot1 {
                        maxAngle = 148;
                        max = 24;
                    };
                    class UserRot9: UserRot1 {
                        maxAngle = 166.5;
                        max = 27;
                    };
                    class UserRot10: UserRot1 {
                        maxAngle = 185;
                        max = 30;
                    };
                    class UserRot11: UserRot1 {
                        maxAngle = 203.5;
                        max = 33;
                    };
                    class UserRot12: UserRot1 {
                        maxAngle = 222;
                        max = 36;
                    };
                    class UserRot13: UserRot1 {
                        maxAngle = 240.5;
                        max = 39;
                    };
                    class UserRot14: UserRot1 {
                        maxAngle = 259;
                        max = 42;
                    };
                    class UserRot15: UserRot1 {
                        maxAngle = 277.5;
                        max = 45;
                    };
                    class UserRot16: UserRot1 {
                        maxAngle = 296;
                        max = 48;
                    };
                    class UserRot17: UserRot1 {
                        maxAngle = 314.5;
                        max = 51;
                    };
                    class UserRot18: UserRot1 {
                        maxAngle = 333;
                        max = 54;
                    };
                    class UserRot19: UserRot1 {
                        maxAngle = 351.5;
                        max = 57;
                    };
                    class UserRot20: UserRot1 {
                        maxAngle = 370;
                        max = 60;
                    };
                };
                class Draw {
                    color[] = {0.69, 0.22, 0};
                    alpha = 1;
                    class ImpactPoint {
                        condition = "1 - atmissile";
                        class Cros {
                            type = "line";
                            points[] = {
                                {"ImpactPoint", 1, {0.111111, 0}, 1},
                                {"ImpactPoint", 1, {0.0277778, 0}, 1},
                                {},
                                {"ImpactPoint", 1, {-0.111111, 0}, 1},
                                {"ImpactPoint", 1, {-0.0277778, 0}, 1},
                                {},
                                {"ImpactPoint", 1, {0, 0.0934343}, 1},
                                {"ImpactPoint", 1, {0, 0.0233586}, 1},
                                {},
                                {"ImpactPoint", 1, {0, -0.0934343}, 1},
                                {"ImpactPoint", 1, {0, -0.0233586}, 1},
                                {}
                            };
                        };
                        class Dot {
                            type = "line";
                            points[] = {
                                {"ImpactPoint", {0, 0.0035}, 1},
                                {"ImpactPoint", {0.0035, -0}, 1},
                                {"ImpactPoint", {0, -0.0035}, 1},
                                {"ImpactPoint", {-0.0035, -0}, 1},
                                {"ImpactPoint", {0, 0.0035}, 1}
                            };
                        };
                        class Ring {
                            type = "line";
                            points[] = {
                                {"ImpactPoint", {0.187939, 0.0575216}, 1},
                                {"ImpactPoint", {0.193185, 0.0435287}, 1},
                                {"ImpactPoint", {0.196962, 0.0292045}, 1},
                                {"ImpactPoint", {0.199239, 0.014658}, 1},
                                {"ImpactPoint", {0.2, 0.00000000735146}, 1},
                                {"ImpactPoint", {0.199239, -0.014658}, 1},
                                {"ImpactPoint", {0.196962, -0.0292045}, 1},
                                {"ImpactPoint", {0.193185, -0.0435286}, 1},
                                {"ImpactPoint", {0.187939, -0.0575216}, 1},
                                {"ImpactPoint", {0.181262, -0.0710767}, 1},
                                {"ImpactPoint", {0.173205, -0.0840909}, 1},
                                {"ImpactPoint", {0.16383, -0.0964651}, 1},
                                {"ImpactPoint", {0.153209, -0.108105}, 1},
                                {"ImpactPoint", {0.141421, -0.118923}, 1},
                                {"ImpactPoint", {0.128558, -0.128835}, 1},
                                {"ImpactPoint", {0.114715, -0.137766}, 1},
                                {"ImpactPoint", {0.1, -0.14565}, 1},
                                {"ImpactPoint", {0.0845237, -0.152424}, 1},
                                {"ImpactPoint", {0.068404, -0.158039}, 1},
                                {"ImpactPoint", {0.0517638, -0.162451}, 1},
                                {"ImpactPoint", {0.0347296, -0.165627}, 1},
                                {"ImpactPoint", {0.0174311, -0.167542}, 1},
                                {"ImpactPoint", {0, -0.168182}, 1},
                                {},
                                {"ImpactPoint", {0.187939, 0.0575216}, 1},
                                {"ImpactPoint", {0.169145, 0.0517694}, 1},
                                {},
                                {"ImpactPoint", {0.196962, 0.0292045}, 1},
                                {"ImpactPoint", {0.187113, 0.0277442}, 1},
                                {},
                                {"ImpactPoint", {0.2, 0.00000000735146}, 1},
                                {"ImpactPoint", {0.18, 0.00000000661632}, 1},
                                {},
                                {"ImpactPoint", {0.196962, -0.0292045}, 1},
                                {"ImpactPoint", {0.187113, -0.0277442}, 1},
                                {},
                                {"ImpactPoint", {0.187939, -0.0575216}, 1},
                                {"ImpactPoint", {0.178542, -0.0546455}, 1},
                                {},
                                {"ImpactPoint", {0.173205, -0.0840909}, 1},
                                {"ImpactPoint", {0.155885, -0.0756818}, 1},
                                {},
                                {"ImpactPoint", {0.153209, -0.108105}, 1},
                                {"ImpactPoint", {0.145548, -0.1027}, 1},
                                {},
                                {"ImpactPoint", {0.128558, -0.128835}, 1},
                                {"ImpactPoint", {0.12213, -0.122393}, 1},
                                {},
                                {"ImpactPoint", {0.1, -0.14565}, 1},
                                {"ImpactPoint", {0.09, -0.131085}, 1},
                                {},
                                {"ImpactPoint", {0.068404, -0.158039}, 1},
                                {"ImpactPoint", {0.0649838, -0.150137}, 1},
                                {},
                                {"ImpactPoint", {0.0347296, -0.165627}, 1},
                                {"ImpactPoint", {0.0329932, -0.157345}, 1},
                                {},
                                {"ImpactPoint", {0, -0.168182}, 1},
                                {"ImpactPoint", {0, -0.151364}, 1},
                                {}
                            };
                        };
                        class Triangle {
                            type = "line";
                            width = 9;
                            points[] = {
                                {"ImpactPoint", 1, {"HorizonBankReverted", 0, 0.192}, 1},
                                {"ImpactPoint", 1, {"HorizonBankReverted", 0.01, 0.177}, 1},
                                {"ImpactPoint", 1, {"HorizonBankReverted", -0.01, 0.177}, 1},
                                {"ImpactPoint", 1, {"HorizonBankReverted", 0, 0.192}, 1}
                            };
                        };
                        class LaunchAutorization {
                            type = "line";
                            width = 14;
                            points[] = {
                                {"ImpactPoint", {0, -0.172386}, 1},
                                {"MissileFlightTimeRot1", {0, 0.205}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot2", {0, 0.205}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot3", {0, 0.205}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot4", {0, 0.205}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot5", {0, 0.205}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot6", {0, 0.205}, 1, "ImpactPoint", 1}
                            };
                        };
                        class LaunchAutorizationBig {
                            type = "line";
                            width = 24;
                            points[] = {
                                {"MissileFlightTimeRot1", {0, 0.215}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot2", {0, 0.215}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot3", {0, 0.215}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot4", {0, 0.215}, 1, "ImpactPoint", 1},
                                {"MissileFlightTimeRot5", {0, 0.215}, 1, "ImpactPoint", 1}
                            };
                        };
                    };
                    class TargetingPod: ImpactPoint {
                        condition = "atmissile-pilotcameralock";
                        class Cros {
                            type = "line";
                            points[] = {
                                {"TargetingPodDir", 1, {0.111111, 0}, 1},
                                {"TargetingPodDir", 1, {0.0277778, 0}, 1},
                                {},
                                {"TargetingPodDir", 1, {-0.111111, 0}, 1},
                                {"TargetingPodDir", 1, {-0.0277778, 0}, 1},
                                {},
                                {"TargetingPodDir", 1, {0, 0.0934343}, 1},
                                {"TargetingPodDir", 1, {0, 0.0233586}, 1},
                                {},
                                {"TargetingPodDir", 1, {0, -0.0934343}, 1},
                                {"TargetingPodDir", 1, {0, -0.0233586}, 1},
                                {}
                            };
                        };
                        class Dot {
                            type = "line";
                            points[] = {
                                {"TargetingPodDir", {0, 0.0035}, 1},
                                {"TargetingPodDir", {0.0035, -0}, 1},
                                {"TargetingPodDir", {0, -0.0035}, 1},
                                {"TargetingPodDir", {-0.0035, -0}, 1},
                                {"TargetingPodDir", {0, 0.0035}, 1}
                            };
                        };
                        class Ring {
                            type = "line";
                            points[] = {
                                {"TargetingPodDir", {0.187939, 0.0575216}, 1},
                                {"TargetingPodDir", {0.193185, 0.0435287}, 1},
                                {"TargetingPodDir", {0.196962, 0.0292045}, 1},
                                {"TargetingPodDir", {0.199239, 0.014658}, 1},
                                {"TargetingPodDir", {0.2, 0.00000000735146}, 1},
                                {"TargetingPodDir", {0.199239, -0.014658}, 1},
                                {"TargetingPodDir", {0.196962, -0.0292045}, 1},
                                {"TargetingPodDir", {0.193185, -0.0435286}, 1},
                                {"TargetingPodDir", {0.187939, -0.0575216}, 1},
                                {"TargetingPodDir", {0.181262, -0.0710767}, 1},
                                {"TargetingPodDir", {0.173205, -0.0840909}, 1},
                                {"TargetingPodDir", {0.16383, -0.0964651}, 1},
                                {"TargetingPodDir", {0.153209, -0.108105}, 1},
                                {"TargetingPodDir", {0.141421, -0.118923}, 1},
                                {"TargetingPodDir", {0.128558, -0.128835}, 1},
                                {"TargetingPodDir", {0.114715, -0.137766}, 1},
                                {"TargetingPodDir", {0.1, -0.14565}, 1},
                                {"TargetingPodDir", {0.0845237, -0.152424}, 1},
                                {"TargetingPodDir", {0.068404, -0.158039}, 1},
                                {"TargetingPodDir", {0.0517638, -0.162451}, 1},
                                {"TargetingPodDir", {0.0347296, -0.165627}, 1},
                                {"TargetingPodDir", {0.0174311, -0.167542}, 1},
                                {"TargetingPodDir", {0, -0.168182}, 1},
                                {},
                                {"TargetingPodDir", {0.187939, 0.0575216}, 1},
                                {"TargetingPodDir", {0.169145, 0.0517694}, 1},
                                {},
                                {"TargetingPodDir", {0.196962, 0.0292045}, 1},
                                {"TargetingPodDir", {0.187113, 0.0277442}, 1},
                                {},
                                {"TargetingPodDir", {0.2, 0.00000000735146}, 1},
                                {"TargetingPodDir", {0.18, 0.00000000661632}, 1},
                                {},
                                {"TargetingPodDir", {0.196962, -0.0292045}, 1},
                                {"TargetingPodDir", {0.187113, -0.0277442}, 1},
                                {},
                                {"TargetingPodDir", {0.187939, -0.0575216}, 1},
                                {"TargetingPodDir", {0.178542, -0.0546455}, 1},
                                {},
                                {"TargetingPodDir", {0.173205, -0.0840909}, 1},
                                {"TargetingPodDir", {0.155885, -0.0756818}, 1},
                                {},
                                {"TargetingPodDir", {0.153209, -0.108105}, 1},
                                {"TargetingPodDir", {0.145548, -0.1027}, 1},
                                {},
                                {"TargetingPodDir", {0.128558, -0.128835}, 1},
                                {"TargetingPodDir", {0.12213, -0.122393}, 1},
                                {},
                                {"TargetingPodDir", {0.1, -0.14565}, 1},
                                {"TargetingPodDir", {0.09, -0.131085}, 1},
                                {},
                                {"TargetingPodDir", {0.068404, -0.158039}, 1},
                                {"TargetingPodDir", {0.0649838, -0.150137}, 1},
                                {},
                                {"TargetingPodDir", {0.0347296, -0.165627}, 1},
                                {"TargetingPodDir", {0.0329932, -0.157345}, 1},
                                {},
                                {"TargetingPodDir", {0, -0.168182}, 1},
                                {"TargetingPodDir", {0, -0.151364}, 1},
                                {}
                            };
                        };
                        class Triangle {
                            type = "line";
                            width = 9;
                            points[] = {
                                {"TargetingPodDir", 1, {"HorizonBankReverted", 0, 0.192}, 1},
                                {"TargetingPodDir", 1, {"HorizonBankReverted", 0.01, 0.177}, 1},
                                {"TargetingPodDir", 1, {"HorizonBankReverted", -0.01, 0.177}, 1},
                                {"TargetingPodDir", 1, {"HorizonBankReverted", 0, 0.192}, 1}
                            };
                        };
                        class LaunchAutorization {
                            type = "line";
                            width = 14;
                            points[] = {
                                {"TargetingPodDir", {0, -0.172386}, 1},
                                {"UserRot1", {0, 0.205}, 1, "TargetingPodDir", 1},
                                {"UserRot2", {0, 0.205}, 1, "TargetingPodDir", 1},
                                {"UserRot3", {0, 0.205}, 1, "TargetingPodDir", 1},
                                {"UserRot4", {0, 0.205}, 1, "TargetingPodDir", 1},
                                {"UserRot5", {0, 0.205}, 1, "TargetingPodDir", 1},
                                {"UserRot6", {0, 0.205}, 1, "TargetingPodDir", 1}
                            };
                        };
                        class LaunchAutorizationBig {
                            type = "line";
                            width = 24;
                            points[] = {
                                {"UserRot1", {0, 0.215}, 1, "TargetingPodDir", 1},
                                {"UserRot2", {0, 0.215}, 1, "TargetingPodDir", 1},
                                {"UserRot3", {0, 0.215}, 1, "TargetingPodDir", 1},
                                {"UserRot4", {0, 0.215}, 1, "TargetingPodDir", 1},
                                {"UserRot5", {0, 0.215}, 1, "TargetingPodDir", 1}
                            };
                        };
                    };
                    class TargetingPodTarget: ImpactPoint {
                        condition = "(atmissile)*(pilotcameralock>=0)*laseron";
                        class Cros {
                            type = "line";
                            points[] = {
                                {"TargetingPodTarget", 1, {0.111111, 0}, 1},
                                {"TargetingPodTarget", 1, {0.0277778, 0}, 1},
                                {},
                                {"TargetingPodTarget", 1, {-0.111111, 0}, 1},
                                {"TargetingPodTarget", 1, {-0.0277778, 0}, 1},
                                {},
                                {"TargetingPodTarget", 1, {0, 0.0934343}, 1},
                                {"TargetingPodTarget", 1, {0, 0.0233586}, 1},
                                {},
                                {"TargetingPodTarget", 1, {0, -0.0934343}, 1},
                                {"TargetingPodTarget", 1, {0, -0.0233586}, 1},
                                {}
                            };
                        };
                        class Dot {
                            type = "line";
                            points[] = {
                                {"TargetingPodTarget", {0, 0.0035}, 1},
                                {"TargetingPodTarget", {0.0035, -0}, 1},
                                {"TargetingPodTarget", {0, -0.0035}, 1},
                                {"TargetingPodTarget", {-0.0035, -0}, 1},
                                {"TargetingPodTarget", {0, 0.0035}, 1}
                            };
                        };
                        class Ring {
                            type = "line";
                            points[] = {
                                {"TargetingPodTarget", {0.187939, 0.0575216}, 1},
                                {"TargetingPodTarget", {0.193185, 0.0435287}, 1},
                                {"TargetingPodTarget", {0.196962, 0.0292045}, 1},
                                {"TargetingPodTarget", {0.199239, 0.014658}, 1},
                                {"TargetingPodTarget", {0.2, 0.00000000735146}, 1},
                                {"TargetingPodTarget", {0.199239, -0.014658}, 1},
                                {"TargetingPodTarget", {0.196962, -0.0292045}, 1},
                                {"TargetingPodTarget", {0.193185, -0.0435286}, 1},
                                {"TargetingPodTarget", {0.187939, -0.0575216}, 1},
                                {"TargetingPodTarget", {0.181262, -0.0710767}, 1},
                                {"TargetingPodTarget", {0.173205, -0.0840909}, 1},
                                {"TargetingPodTarget", {0.16383, -0.0964651}, 1},
                                {"TargetingPodTarget", {0.153209, -0.108105}, 1},
                                {"TargetingPodTarget", {0.141421, -0.118923}, 1},
                                {"TargetingPodTarget", {0.128558, -0.128835}, 1},
                                {"TargetingPodTarget", {0.114715, -0.137766}, 1},
                                {"TargetingPodTarget", {0.1, -0.14565}, 1},
                                {"TargetingPodTarget", {0.0845237, -0.152424}, 1},
                                {"TargetingPodTarget", {0.068404, -0.158039}, 1},
                                {"TargetingPodTarget", {0.0517638, -0.162451}, 1},
                                {"TargetingPodTarget", {0.0347296, -0.165627}, 1},
                                {"TargetingPodTarget", {0.0174311, -0.167542}, 1},
                                {"TargetingPodTarget", {0, -0.168182}, 1},
                                {},
                                {"TargetingPodTarget", {0.187939, 0.0575216}, 1},
                                {"TargetingPodTarget", {0.169145, 0.0517694}, 1},
                                {},
                                {"TargetingPodTarget", {0.196962, 0.0292045}, 1},
                                {"TargetingPodTarget", {0.187113, 0.0277442}, 1},
                                {},
                                {"TargetingPodTarget", {0.2, 0.00000000735146}, 1},
                                {"TargetingPodTarget", {0.18, 0.00000000661632}, 1},
                                {},
                                {"TargetingPodTarget", {0.196962, -0.0292045}, 1},
                                {"TargetingPodTarget", {0.187113, -0.0277442}, 1},
                                {},
                                {"TargetingPodTarget", {0.187939, -0.0575216}, 1},
                                {"TargetingPodTarget", {0.178542, -0.0546455}, 1},
                                {},
                                {"TargetingPodTarget", {0.173205, -0.0840909}, 1},
                                {"TargetingPodTarget", {0.155885, -0.0756818}, 1},
                                {},
                                {"TargetingPodTarget", {0.153209, -0.108105}, 1},
                                {"TargetingPodTarget", {0.145548, -0.1027}, 1},
                                {},
                                {"TargetingPodTarget", {0.128558, -0.128835}, 1},
                                {"TargetingPodTarget", {0.12213, -0.122393}, 1},
                                {},
                                {"TargetingPodTarget", {0.1, -0.14565}, 1},
                                {"TargetingPodTarget", {0.09, -0.131085}, 1},
                                {},
                                {"TargetingPodTarget", {0.068404, -0.158039}, 1},
                                {"TargetingPodTarget", {0.0649838, -0.150137}, 1},
                                {},
                                {"TargetingPodTarget", {0.0347296, -0.165627}, 1},
                                {"TargetingPodTarget", {0.0329932, -0.157345}, 1},
                                {},
                                {"TargetingPodTarget", {0, -0.168182}, 1},
                                {"TargetingPodTarget", {0, -0.151364}, 1},
                                {}
                            };
                        };
                        class Triangle {
                            type = "line";
                            width = 9;
                            points[] = {
                                {"TargetingPodTarget", 1, {"HorizonBankReverted", 0, 0.192}, 1},
                                {"TargetingPodTarget", 1, {"HorizonBankReverted", 0.01, 0.177}, 1},
                                {"TargetingPodTarget", 1, {"HorizonBankReverted", -0.01, 0.177}, 1},
                                {"TargetingPodTarget", 1, {"HorizonBankReverted", 0, 0.192}, 1}
                            };
                        };
                        class LaunchAutorization {
                            type = "line";
                            width = 14;
                            points[] = {
                                {"TargetingPodTarget", {0, -0.172386}, 1},
                                {"UserRot1", {0, 0.205}, 1, "TargetingPodTarget", 1},
                                {"UserRot2", {0, 0.205}, 1, "TargetingPodTarget", 1},
                                {"UserRot3", {0, 0.205}, 1, "TargetingPodTarget", 1},
                                {"UserRot4", {0, 0.205}, 1, "TargetingPodTarget", 1},
                                {"UserRot5", {0, 0.205}, 1, "TargetingPodTarget", 1},
                                {"UserRot6", {0, 0.205}, 1, "TargetingPodTarget", 1}
                            };
                        };
                        class LaunchAutorizationBig {
                            type = "line";
                            width = 24;
                            points[] = {
                                {"UserRot1", {0, 0.215}, 1, "TargetingPodTarget", 1},
                                {"UserRot2", {0, 0.215}, 1, "TargetingPodTarget", 1},
                                {"UserRot3", {0, 0.215}, 1, "TargetingPodTarget", 1},
                                {"UserRot4", {0, 0.215}, 1, "TargetingPodTarget", 1},
                                {"UserRot5", {0, 0.215}, 1, "TargetingPodTarget", 1}
                            };
                        };
                    };
                    class StaticReticle {
                        condition = "user5";
                        class Shape {
                            type = "polygon";
                            texture = "rhsafrf\addons\rhs_c_a2port_air\Su25\rhs_su25_reticle_static_ca.paa";
                            points[] = {{{{0.055, 0.145}, 1}, {{0.955, 0.145}, 1}, {{0.955, 0.845}, 1}, {{0.055, 0.845}, 1}}};
                        };
                    };
                };
            };
            class MFD_1 {
                topLeft = "MFD_WS_TL";
                topRight = "MFD_WS_TR";
                bottomLeft = "MFD_WS_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0.15, 1, 0.15, 1};
                enableParallax = 0;
                font = "PuristaMedium";
                class Bones {};
                class Draw {
                    alpha = 0.5;
                    color[] = {1, 1, 1};
                    class MgunAmmo {
                        condition = "ammo2>=1";
                        class BlackBackground {
                            color[] = {0, 0, 0};
                            alpha = 1;
                            class AmmoBox {
                                type = "polygon";
                                width = 4;
                                points[] = {{{{0.838, 0.825}, 1}, {{0.922, 0.825}, 1}, {{0.922, 0.975}, 1}, {{0.838, 0.975}, 1}}};
                            };
                        };
                        class Full {
                            condition = "ammo2>=212";
                            class AmmoText {
                                type = "text";
                                source = "static";
                                text = "К";
                                scale = 1;
                                sourceScale = 1;
                                align = "center";
                                pos[] = {{0.875, 0.82}, 1};
                                right[] = {{0.91, 0.82}, 1};
                                down[] = {{0.875, 0.96}, 1};
                            };
                        };
                        class AlmostFull {
                            condition = "(ammo2>=137)*(ammo2<=211)";
                            class AmmoText {
                                type = "text";
                                source = "static";
                                text = "3/4";
                                scale = 1;
                                sourceScale = 1;
                                align = "center";
                                pos[] = {{0.875, 0.82}, 1};
                                right[] = {{0.91, 0.82}, 1};
                                down[] = {{0.875, 0.96}, 1};
                            };
                        };
                        class Half {
                            condition = "(ammo2>=63)*(ammo2<=136)";
                            class AmmoText {
                                type = "text";
                                source = "static";
                                text = "1/2";
                                scale = 1;
                                sourceScale = 1;
                                align = "center";
                                pos[] = {{0.875, 0.82}, 1};
                                right[] = {{0.91, 0.82}, 1};
                                down[] = {{0.875, 0.96}, 1};
                            };
                        };
                        class AlmostEmpty {
                            condition = "(ammo2<=62)";
                            class AmmoText {
                                type = "text";
                                source = "static";
                                text = "1/4";
                                scale = 1;
                                sourceScale = 1;
                                align = "center";
                                pos[] = {{0.875, 0.82}, 1};
                                right[] = {{0.91, 0.82}, 1};
                                down[] = {{0.875, 0.96}, 1};
                            };
                        };
                    };
                    class WeaponTypeRocket {
                        condition = "rocket";
                        class BlackBackground {
                            color[] = {0, 0, 0};
                            alpha = 1;
                            class AmmoBox {
                                type = "polygon";
                                width = 4;
                                points[] = {{{{0.838, 0.125}, 1}, {{0.922, 0.125}, 1}, {{0.922, 0.275}, 1}, {{0.838, 0.275}, 1}}};
                            };
                        };
                        class AmmoText {
                            type = "text";
                            source = "static";
                            text = "НРС";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{0.875, 0.11}, 1};
                            right[] = {{0.91, 0.11}, 1};
                            down[] = {{0.875, 0.25}, 1};
                        };
                    };
                    class WeaponTypeMissiles: WeaponTypeRocket {
                        condition = "missile";
                        class BlackBackground: BlackBackground {
                            class AmmoBox: AmmoBox {};
                        };
                        class AmmoText {
                            type = "text";
                            source = "static";
                            text = "УР";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{0.875, 0.11}, 1};
                            right[] = {{0.91, 0.11}, 1};
                            down[] = {{0.875, 0.25}, 1};
                        };
                    };
                    class WeaponTypeBombs: WeaponTypeRocket {
                        condition = "bomb";
                        class BlackBackground: BlackBackground {
                            class AmmoBox: AmmoBox {};
                        };
                        class AmmoText {
                            type = "text";
                            source = "static";
                            text = "Б";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{0.875, 0.11}, 1};
                            right[] = {{0.91, 0.11}, 1};
                            down[] = {{0.875, 0.25}, 1};
                        };
                    };
                    class WeaponTypeMgun: WeaponTypeRocket {
                        condition = "mgun";
                        class BlackBackground: BlackBackground {
                            class AmmoBox: AmmoBox {};
                        };
                        class AmmoText {
                            type = "text";
                            source = "static";
                            text = "ВПУ";
                            scale = 1;
                            sourceScale = 1;
                            align = "center";
                            pos[] = {{0.875, 0.11}, 1};
                            right[] = {{0.91, 0.11}, 1};
                            down[] = {{0.875, 0.25}, 1};
                        };
                    };
                    class Pylon1 {
                        type = "pylonicon";
                        pos[] = {{0.345, 0.34}, 1};
                        pylon = 1;
                        name = "rhs_su25_box";
                    };
                    class Pylon2: Pylon1 {
                        pylon = 2;
                        pos[] = {{0.405, 0.32}, 1};
                    };
                    class Pylon3: Pylon1 {
                        pylon = 3;
                        pos[] = {{0.281, 0.32}, 1};
                    };
                    class Pylon4: Pylon1 {
                        pylon = 4;
                        pos[] = {{0.469, 0.32}, 1};
                    };
                    class Pylon5: Pylon1 {
                        pylon = 5;
                        pos[] = {{0.217, 0.32}, 1};
                    };
                    class Pylon6: Pylon1 {
                        pylon = 6;
                        pos[] = {{0.533, 0.32}, 1};
                    };
                    class Pylon7: Pylon1 {
                        pylon = 7;
                        pos[] = {{0.153, 0.32}, 1};
                    };
                    class Pylon8: Pylon1 {
                        pylon = 8;
                        pos[] = {{0.597, 0.32}, 1};
                    };
                    class Pylon9: Pylon1 {
                        pylon = 9;
                        pos[] = {{0.094, 0.32}, 1};
                    };
                    class Pylon10: Pylon1 {
                        pylon = 10;
                        pos[] = {{0.661, 0.32}, 1};
                    };
                };
            };
            class MFD_2 {
                topLeft = "MFD_Lights_TL";
                topRight = "MFD_Lights_TR";
                bottomLeft = "MFD_Lights_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0.15, 1, 0.15, 1};
                enableParallax = 0;
                class Bones {};
                class Draw {
                    alpha = 1;
                    color[] = {1, 1, 1};
                    class Launch_Authorized {
                        condition = "((impactDistance/LarTop)>=LarAmmoMin)*((impactDistance/LarTop)<=LarAmmoMax)+(user1>=1)+missilelocked";
                        color[] = {0.69, 0.22, 0};
                        alpha = 0.2;
                        class Bulb {
                            type = "polygon";
                            texture = "a3\Data_f\light_flare_ca.paa";
                            points[] = {{{{0.898, 0.085}, 1}, {{0.982, 0.085}, 1}, {{0.982, 0.515}, 1}, {{0.898, 0.515}, 1}}};
                        };
                    };
                    class Laser_Active {
                        color[] = {0, 0.49, 0};
                        alpha = 0.1;
                        condition = "laseron";
                        class Bulb {
                            type = "polygon";
                            texture = "a3\Data_f\light_flare_ca.paa";
                            points[] = {{{{0.018, 0.085}, 1}, {{0.102, 0.085}, 1}, {{0.102, 0.515}, 1}, {{0.018, 0.515}, 1}}};
                        };
                    };
                    class Laser_Cooldown: Laser_Active {
                        condition = "user0";
                        blinkingPattern[] = {0.3, 0.3};
                        blinkingStartsOn = 1;
                        class Bulb: Bulb {};
                    };
                    class Launch_Disengage {
                        condition = "(((impactDistance/LarTop)<=LarAmmoMin)+((impactDistance/LarTop)>=LarAmmoMax))*rocket+(user1<=-1)";
                        color[] = {0.94, 0.01, 0};
                        alpha = 0.07;
                        class Bulb {
                            type = "polygon";
                            texture = "a3\Data_f\light_flare_ca.paa";
                            points[] = {{{{0.018, 0.485}, 1}, {{0.102, 0.485}, 1}, {{0.102, 0.915}, 1}, {{0.018, 0.915}, 1}}};
                        };
                    };
                };
            };
        };
        maxOmega = 2000;
        engineMOI = 16;
        class Wheels {
            disableWheelsWhenDestroyed = 1;
            class Wheel_1 {
                side = "left";
                boneName = "Wheel_1";
                center = "Wheel_1_center";
                boundary = "Wheel_1_rim";
                suspForceAppPointOffset = "Wheel_1_center";
                tireForceAppPointOffset = "Wheel_1_center";
                suspTravelDirection[] = {0, -1, 0};
                steering = 1;
                width = 0.16;
                mass = 150;
                MOI = 40;
                dampingRate = 0.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 21500;
                maxHandBrakeTorque = 0;
                maxCompression = 0.2105;
                maxDroop = 0.015;
                sprungMass = 4066;
                springStrength = 56600;
                springDamperRate = 215569.6;
                longitudinalStiffnessPerUnitGravity = 8000;
                latStiffX = 25;
                latStiffY = 180;
                frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1, 1}};
            };
            class Wheel_1_fake: Wheel_1 {};
            class Wheel_2: Wheel_1 {
                boneName = "Wheel_2";
                steering = 0;
                center = "Wheel_2_center";
                boundary = "Wheel_2_rim";
                width = 0.28;
                springDamperRate = 220569.6;
                sprungMass = 6652;
                springStrength = 151000;
                suspForceAppPointOffset = "Wheel_2_center";
                tireForceAppPointOffset = "Wheel_2_center";
            };
            class Wheel_3: Wheel_2 {
                boneName = "Wheel_3";
                side = "right";
                center = "Wheel_3_center";
                boundary = "Wheel_3_rim";
                suspForceAppPointOffset = "Wheel_3_center";
                tireForceAppPointOffset = "Wheel_3_center";
            };
        };
        maxSpeed = 900;
        landingAoa = 0.113446;
        landingSpeed = 250;
        stallSpeed = 190;
        stallWarningTreshold = 0.07;
        wheelSteeringSensitivity = 1.3;
        airBrake = 1;
        airBrakeFrictionCoef = 2.2;
        flaps = 1;
        flapsFrictionCoef = 0.32;
        gearsUpFrictionCoef = 0.55;
        airFrictionCoefs0[] = {0, 0, 0};
        airFrictionCoefs1[] = {0.1, 0.52, 0.0067};
        airFrictionCoefs2[] = {0.001, 0.0054, 0.00007};
        angleOfIndicence = -0.00872665;
        envelope[] = {
            0,
            0.07,
            0.28,
            0.83,
            1.11,
            1.74,
            2.51,
            3.41,
            4.46,
            5.64,
            6.96,
            8.42,
            8.8,
            9.11,
            9.38,
            9.45,
            9.43,
            9,
            8,
            7,
            6
        };
        altNoForce = 15000;
        altFullForce = 4000;
        thrustCoef[] = {
            1.28,
            1.33,
            1.37,
            1.4,
            1.41,
            1.39,
            1.36,
            1.33,
            1.29,
            1.25,
            1.2,
            1.15,
            1.05,
            0.5,
            0,
            0,
            0,
            0,
            0
        };
        aileronSensitivity = 0.85;
        aileronCoef[] = {
            0,
            0.1,
            0.3,
            0.6,
            0.8,
            0.95,
            1,
            1.02,
            1.03,
            1.04,
            1.04,
            1,
            0.9,
            0.7,
            0.3,
            0.2,
            0.15,
            0.1,
            0.1
        };
        elevatorSensitivity = 0.95;
        elevatorCoef[] = {
            0,
            0.2,
            0.95,
            0.8,
            0.75,
            0.7,
            0.65,
            0.6,
            0.55,
            0.5,
            0.46,
            0.32,
            0.29,
            0.16,
            0.14,
            0.12,
            0.1,
            0.09,
            0.08
        };
        rudderInfluence = 0.966;
        rudderCoef[] = {
            0,
            0.6,
            1.2,
            1.5,
            1.8,
            2,
            3.2,
            3.4,
            3.45,
            3.5,
            3.55,
            3.6,
            2.2,
            1.3,
            0.3,
            0.2,
            0.15,
            0.1,
            0.1
        };
        aileronControlsSensitivityCoef = 3.6;
        elevatorControlsSensitivityCoef = 3.4;
        rudderControlsSensitivityCoef = 3.4;
        draconicForceXCoef = 13;
        draconicForceYCoef = 1.3;
        draconicForceZCoef = 1;
        draconicTorqueXCoef[] = {
            4.8,
            5,
            5.5,
            6.2,
            6.6,
            7.4,
            8,
            8.5,
            8,
            8.4,
            8.6,
            8.7,
            8.8,
            8.9,
            9,
            9.1
        };
        draconicTorqueYCoef[] = {
            12,
            7.5,
            4,
            1.5,
            0.1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        };
        soundIncommingMissile[] = {"\rhsafrf\addons\rhs_c_a2port_air\sounds\alarm_beep", 1.098107, 1};
        soundLocked[] = {"", 1.5848932, 1};
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
            class RETICLE {
                displayName = "<t color='#FBB829'>Toggle reticle</t>";
                position = "";
                radius = 10;
                priority = 10.5;
                onlyforplayer = 1;
                showWindow = 0;
                hideOnUse = 1;
                condition = "(call rhs_fnc_findPlayer) in this";
                shortcut = "user10";
                statement = "if(((getUserMFDvalue this) select 5) isEqualTo 0)then{this setUserMFDvalue [5,1];}else{this setUserMFDvalue [5,0];};";
            };
        };
        class EventHandlers: EventHandlers {
            hit = "";
            class RHS_EventHandlers {
                hit = "_this call RHS_fnc_AI_eject";
                init = "_this call rhs_fnc_air_init";
                postInit = "_this call rhs_fnc_reapplyTextures";
                getout = "[_this select 0, _this select 2,'rhs_su25_canopy'] call rhs_fnc_K36D_seatEjection";
                engine = "[_this select 0,_this select 1,10] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_addParachutes;";
            };
        };
    };
    class RHS_Su25_VVS_Base: RHS_su25_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Su25_VVS_Base.paa";
        accuracy = 0.5;
        side = 0;
        faction = "rhs_faction_vvs_c";
        vehicleClass = "rhs_vehclass_aircraft";
    };
    class RHS_Su25SM_vvs: RHS_Su25_VVS_Base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Su25SM_vvs.paa";
        faction = "rhs_faction_vvs";
        scope = 2;
        displayName = "$STR_RHS_SU25_Name";
        author = "$STR_RHS_AUTHOR_FULL";
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body1_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body2_co.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class RHS_Su25SM_KH29_vvs: RHS_Su25SM_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Su25SM_KH29_vvs.paa";
        displayName = "$STR_RHS_SU25_KH29_Name";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 1;
        scopeCurator = 2;
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class pylon1: pylon1 {
                        attachment = "rhs_mag_kh29l";
                    };
                    class pylon2: pylon2 {
                        attachment = "rhs_mag_kh29l";
                    };
                    class pylon3: pylon3 {
                        attachment = "rhs_mag_kh25ML";
                    };
                    class pylon4: pylon4 {
                        attachment = "rhs_mag_kh25ML";
                    };
                    class pylon5: pylon5 {
                        attachment = "rhs_mag_kh25ML";
                    };
                    class pylon6: pylon6 {
                        attachment = "rhs_mag_kh25ML";
                    };
                    class pylon7: pylon7 {};
                    class pylon8: pylon8 {};
                    class pylon9: pylon9 {};
                    class pylon10: pylon10 {};
                    class cmDispenser: cmDispenser {};
                };
            };
        };
    };
    class RHS_Su25SM_CAS_vvs: RHS_Su25SM_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Su25SM_CAS_vvs.paa";
        displayName = "$STR_RHS_SU25_CAS_Name";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 1;
        scopeCurator = 2;
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class pylon1: pylon1 {
                        attachment = "rhs_mag_b8m1_s8kom";
                    };
                    class pylon2: pylon2 {
                        attachment = "rhs_mag_b8m1_s8kom";
                    };
                    class pylon3: pylon3 {
                        attachment = "rhs_mag_b8m1_s8kom";
                    };
                    class pylon4: pylon4 {
                        attachment = "rhs_mag_b8m1_s8kom";
                    };
                    class pylon5: pylon5 {
                        attachment = "rhs_mag_b8m1_s8df";
                    };
                    class pylon6: pylon6 {
                        attachment = "rhs_mag_b8m1_s8df";
                    };
                    class pylon7: pylon7 {
                        attachment = "rhs_mag_b8m1_s8df";
                    };
                    class pylon8: pylon8 {
                        attachment = "rhs_mag_b8m1_s8df";
                    };
                    class pylon9: pylon9 {};
                    class pylon10: pylon10 {};
                    class cmDispenser: cmDispenser {};
                };
            };
        };
    };
    class RHS_Su25SM_Cluster_vvs: RHS_Su25SM_vvs {
        displayName = "$STR_RHS_SU25_Cluster_Name";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 1;
        scopeCurator = 2;
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class pylon1: pylon1 {
                        attachment = "rhs_mag_rbk250_ao1";
                    };
                    class pylon2: pylon2 {
                        attachment = "rhs_mag_rbk250_ao1";
                    };
                    class pylon3: pylon3 {
                        attachment = "rhs_mag_rbk250_ao1";
                    };
                    class pylon4: pylon4 {
                        attachment = "rhs_mag_rbk250_ao1";
                    };
                    class pylon5: pylon5 {
                        attachment = "rhs_mag_b8m1_s8df";
                    };
                    class pylon6: pylon6 {
                        attachment = "rhs_mag_b8m1_s8df";
                    };
                    class pylon7: pylon7 {
                        attachment = "rhs_mag_b8m1_s8df";
                    };
                    class pylon8: pylon8 {
                        attachment = "rhs_mag_b8m1_s8df";
                    };
                    class pylon9: pylon9 {};
                    class pylon10: pylon10 {};
                    class cmDispenser: cmDispenser {};
                };
            };
        };
    };
    class RHS_Su25SM_vvsc: RHS_Su25SM_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Su25SM_vvsc.paa";
        faction = "rhs_faction_vvs_c";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        rhs_decalParameters[] = {"['Number',cRHSAIRSU25NumberPlaces,'AviaBlue']", "['Label', cRHSAIRSU25NosePlaces, 'Su25NoseArt']", "['Label', cRHSAIRSU25SidePlaces, 'Su25Ex']"};
        hiddenselectionstextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\Su25\DATA\camo\su25_body1_camo1_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\Su25\DATA\camo\su25_body2_camo1_co.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"
        };
    };
    class RHS_Su25SM_KH29_vvsc: RHS_Su25SM_vvsc {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Su25SM_KH29_vvsc.paa";
        displayName = "$STR_RHS_SU25_KH29_Name";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 1;
        scopeCurator = 2;
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class pylon1: pylon1 {
                        attachment = "rhs_mag_kh29l";
                    };
                    class pylon2: pylon2 {
                        attachment = "rhs_mag_kh29l";
                    };
                    class pylon3: pylon3 {
                        attachment = "rhs_mag_kh25ML";
                    };
                    class pylon4: pylon4 {
                        attachment = "rhs_mag_kh25ML";
                    };
                    class pylon5: pylon5 {
                        attachment = "rhs_mag_kh25ML";
                    };
                    class pylon6: pylon6 {
                        attachment = "rhs_mag_kh25ML";
                    };
                    class pylon7: pylon7 {};
                    class pylon8: pylon8 {};
                    class pylon9: pylon9 {};
                    class pylon10: pylon10 {};
                    class cmDispenser: cmDispenser {};
                };
            };
        };
    };
    class RHS_Su25SM_CAS_vvsc: RHS_Su25SM_vvsc {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Su25SM_CAS_vvsc.paa";
        displayName = "$STR_RHS_SU25_CAS_Name";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 1;
        scopeCurator = 2;
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class pylon1: pylon1 {
                        attachment = "rhs_mag_b8m1_s8kom";
                    };
                    class pylon2: pylon2 {
                        attachment = "rhs_mag_b8m1_s8kom";
                    };
                    class pylon3: pylon3 {
                        attachment = "rhs_mag_b8m1_s8kom";
                    };
                    class pylon4: pylon4 {
                        attachment = "rhs_mag_b8m1_s8kom";
                    };
                    class pylon5: pylon5 {
                        attachment = "rhs_mag_b8m1_s8df";
                    };
                    class pylon6: pylon6 {
                        attachment = "rhs_mag_b8m1_s8df";
                    };
                    class pylon7: pylon7 {
                        attachment = "rhs_mag_b8m1_s8df";
                    };
                    class pylon8: pylon8 {
                        attachment = "rhs_mag_b8m1_s8df";
                    };
                    class pylon9: pylon9 {};
                    class pylon10: pylon10 {};
                    class cmDispenser: cmDispenser {};
                };
            };
        };
    };
    class RHS_Su25SM_Cluster_vvsc: RHS_Su25SM_vvsc {
        displayName = "$STR_RHS_SU25_Cluster_Name";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 1;
        scopeCurator = 2;
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class pylon1: pylon1 {
                        attachment = "rhs_mag_rbk250_ao1";
                    };
                    class pylon2: pylon2 {
                        attachment = "rhs_mag_rbk250_ao1";
                    };
                    class pylon3: pylon3 {
                        attachment = "rhs_mag_rbk250_ao1";
                    };
                    class pylon4: pylon4 {
                        attachment = "rhs_mag_rbk250_ao1";
                    };
                    class pylon5: pylon5 {
                        attachment = "rhs_mag_b8m1_s8df";
                    };
                    class pylon6: pylon6 {
                        attachment = "rhs_mag_b8m1_s8df";
                    };
                    class pylon7: pylon7 {
                        attachment = "rhs_mag_b8m1_s8df";
                    };
                    class pylon8: pylon8 {
                        attachment = "rhs_mag_b8m1_s8df";
                    };
                    class pylon9: pylon9 {};
                    class pylon10: pylon10 {};
                    class cmDispenser: cmDispenser {};
                };
            };
        };
    };
    class RHS_Ka52_base: Heli_Attack_02_base_F {
        dlc = "RHS_AFRF";
        rhs_decalParameters[] = {"['Number',cRHSAIRKA52NumberPlaces,'AviaYellow']"};
        category = "Air";
        class RotorLibHelicopterProperties {
            RTDconfig = "rhsafrf\addons\rhs_c_a2port_air\ka52\RTD_Heli_Attack_02.xml";
            autoHoverCorrection[] = {3.2, 0, 0};
            defaultCollective = 0.805;
            retreatBladeStallWarningSpeed = 83;
            maxTorque = 3300;
            stressDamagePerSec = 0.01;
            maxHorizontalStabilizerLeftStress = 8000;
            maxHorizontalStabilizerRightStress = 8000;
            maxVerticalStabilizerStress = 4000;
            horizontalWingsAngleCollMin = 0;
            horizontalWingsAngleCollMax = 0;
            maxMainRotorStress = 225000;
            maxTailRotorStress = 225000;
        };
        numberPhysicalWheels = 3;
        maxSpeed = 395;
        bodyFrictionCoef = 0.426;
        liftForceCoef = 6;
        cyclicForwardForceCoef = 1;
        backRotorForceCoef = 1.35;
        maxMainRotorDive = 7;
        minMainRotorDive = -7;
        neutralMainRotorDive = 0;
        gearRetracting = 1;
        mainRotorSpeed = 1;
        backRotorSpeed = 1;
        mainBladeRadius = 6.9;
        tailBladeRadius = 6.9;
        tailBladeCenter = "tail_blade_center";
        mainBladeCenter = "main_blade_center";
        LESH_canBeTowed = 1;
        LESH_towFromFront = 1;
        LESH_AxisOffsetTarget[] = {0, 6.5, -1.05};
        LESH_WheelOffset[] = {0, -1};
        scope = 0;
        side = 0;
        faction = "rhs_faction_vvs";
        crew = "rhs_pilot_combat_heli";
        typicalCargo[] = {"rhs_pilot_combat_heli"};
        fuelCapacity = 1870;
        RHS_fuelCapacity = 1870;
        driverCanEject = 1;
        driverCompartments = 1;
        ejectSpeed[] = {1, 0, 11};
        destrType = "DestructWreck";
        accuracy = 0.55;
        displayName = "Ka-52";
        vehicleClass = "rhs_vehclass_helicopter";
        editorSubcategory = "rhs_EdSubcat_helicopter";
        model = "\rhsafrf\addons\rhs_a2port_air\ka52\KA52.p3d";
        icon = "\rhsafrf\addons\rhs_a2port_air\data\map_ico\Icon_ka52_CA.paa";
        picture = "\rhsafrf\addons\rhs_a2port_air\data\ico\rhs_ka52_pic_ca.paa";
        mapSize = 15;
        castDriverShadow = 1;
        viewCargoShadow = 1;
        camShakeCoef = 0.8;
        transportsoldier = 0;
        driverDoor = "DoorL";
        driverLeftHandAnimName = "lever_pilot";
        driverRightHandAnimName = "stick_pilot";
        driveOnComponent[] = {"F_gear_d3", "L_gear_d3", "R_gear_d3"};
        getInRadius = 1.5;
        precisegetinout = 1;
        memoryPointsGetInDriverPrecise = "pos driver";
        getInAction = "Heli_Attack_01_Pilot_Enter";
        getOutAction = "Heli_Attack_01_Pilot_Exit";
        selectionHRotorStill = "velka vrtule staticka";
        selectionHRotorMove = "velka vrtule blur";
        selectionVRotorStill = "mala vrtule staticka";
        selectionVRotorMove = "mala vrtule blur";
        memoryPointLRocket = "l raketa";
        memoryPointRRocket = "p raketa";
        memoryPointLMissile = "l strela";
        memoryPointRMissile = "p strela";
        memoryPointGun[] = {"chase01", "chase02", "chase03", "chase04"};
        gunBeg[] = {
            "chase01dir",
            "chase02dir",
            "chase03dir",
            "chase04dir"
        };
        gunEnd[] = {"chase01", "chase02", "chase03", "chase04"};
        class PilotCamera {};
        unitInfoType = "RHS_RscUnitInfoAir_Ka52";
        receiveRemoteTargets = 1;
        reportRemoteTargets = 1;
        reportOwnPosition = 1;
        irTarget = 1;
        irTargetSize = 0.9;
        visualTarget = 1;
        visualTargetSize = 0.9;
        radarTarget = 1;
        radarTargetSize = 1;
        threat[] = {0.6, 1, 0.8};
        weapons[] = {"rhs_weap_MASTERSAFE", "rhs_weap_DIRCM_Vitebsk"};
        magazines[] = {
            "rhs_mag_DIRCM_Vitebsk",
            "rhs_mag_DIRCM_Vitebsk",
            "rhs_mag_DIRCM_Vitebsk",
            "rhs_mag_DIRCM_Vitebsk",
            "rhs_mag_DIRCM_Vitebsk",
            "rhs_mag_DIRCM_Vitebsk",
            "rhs_mag_DIRCM_Vitebsk",
            "rhs_mag_DIRCM_Vitebsk",
            "rhs_mag_DIRCM_Vitebsk",
            "rhs_mag_DIRCM_Vitebsk"
        };
        weaponsGroup1 = 128;
        weaponsGroup4 = 64;
        driverAction = "RHS_KA52_Pilot";
        driverInAction = "RHS_KA52_Pilot";
        armor = 45;
        armorStructural = 20;
        damageResistance = 0.00555;
        hullDamageCauseExplosion = 1;
        epeImpulseDamageCoef = 1;
        hullExplosionDelay[] = {10, 20};
        class HitPoints: HitPoints {
            class HitHull: HitHull {
                simulation = "RHS_Hull_Helicopter";
                armor = -150;
                minimalHit = -0.2;
                radius = 0.1;
                name = "hull_hit";
                armorComponent = "Hit_Hull";
                visual = "zbytek";
                passThrough = 1;
                class DestructionEffects: RHS_Effects_Helicopter_Hull_Destruction {};
            };
            class HitHRotor: HitHRotor {
                armor = 0.3;
            };
            class HitGlass1: HitGlass1 {
                armor = 3;
            };
            class HitGlass2: HitGlass2 {
                armor = 3;
            };
            class HitGlass3: HitGlass3 {
                armor = 1;
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class BrokenGlass1 {
                        simulation = "particles";
                        type = "BrokenGlass1N_0850_2250";
                        position = "glass3_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2 {
                        simulation = "particles";
                        type = "BrokenGlass2N_0850_2250";
                        position = "glass3_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3 {
                        simulation = "particles";
                        type = "BrokenGlass3N_0850_2250";
                        position = "glass3_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4 {
                        simulation = "particles";
                        type = "BrokenGlass4N_0850_2250";
                        position = "glass3_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5 {
                        simulation = "particles";
                        type = "BrokenGlass5N_0850_2250";
                        position = "glass3_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass6 {
                        simulation = "particles";
                        type = "BrokenGlass6N_0850_2250";
                        position = "glass3_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass7 {
                        simulation = "particles";
                        type = "BrokenGlass7N_0850_2250";
                        position = "glass3_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass1S {
                        simulation = "particles";
                        type = "BrokenGlass1S_0850_2250";
                        position = "glass3_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2S {
                        simulation = "particles";
                        type = "BrokenGlass2S_0850_2250";
                        position = "glass3_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3S {
                        simulation = "particles";
                        type = "BrokenGlass3S_0850_2250";
                        position = "glass3_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4S {
                        simulation = "particles";
                        type = "BrokenGlass4S_0850_2250";
                        position = "glass3_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5S {
                        simulation = "particles";
                        type = "BrokenGlass5S_0850_2250";
                        position = "glass3_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass6S {
                        simulation = "particles";
                        type = "BrokenGlass6S_0850_2250";
                        position = "glass3_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass7S {
                        simulation = "particles";
                        type = "BrokenGlass7S_0850_2250";
                        position = "glass3_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "glass3_effect";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "glass3_effect";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "glass3_effect";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                };
            };
            class HitGlass4: HitGlass4 {
                armor = 1;
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class BrokenGlass1 {
                        simulation = "particles";
                        type = "BrokenGlass1N_0850_2250";
                        position = "glass4_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2 {
                        simulation = "particles";
                        type = "BrokenGlass2N_0850_2250";
                        position = "glass4_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3 {
                        simulation = "particles";
                        type = "BrokenGlass3N_0850_2250";
                        position = "glass4_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4 {
                        simulation = "particles";
                        type = "BrokenGlass4N_0850_2250";
                        position = "glass4_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5 {
                        simulation = "particles";
                        type = "BrokenGlass5N_0850_2250";
                        position = "glass4_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass6 {
                        simulation = "particles";
                        type = "BrokenGlass6N_0850_2250";
                        position = "glass4_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass7 {
                        simulation = "particles";
                        type = "BrokenGlass7N_0850_2250";
                        position = "glass4_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass1S {
                        simulation = "particles";
                        type = "BrokenGlass1S_0850_2250";
                        position = "glass4_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass2S {
                        simulation = "particles";
                        type = "BrokenGlass2S_0850_2250";
                        position = "glass4_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass3S {
                        simulation = "particles";
                        type = "BrokenGlass3S_0850_2250";
                        position = "glass4_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass4S {
                        simulation = "particles";
                        type = "BrokenGlass4S_0850_2250";
                        position = "glass4_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass5S {
                        simulation = "particles";
                        type = "BrokenGlass5S_0850_2250";
                        position = "glass4_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass6S {
                        simulation = "particles";
                        type = "BrokenGlass6S_0850_2250";
                        position = "glass4_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class BrokenGlass7S {
                        simulation = "particles";
                        type = "BrokenGlass7S_0850_2250";
                        position = "glass4_effect";
                        intensity = 0.15;
                        interval = 1;
                        lifeTime = 0.05;
                    };
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "glass4_effect";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "glass4_effect";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "glass4_effect";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                };
            };
            class HitRotor1: HitGlass3 {
                armor = 1;
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_ERA_Flash {
                        simulation = "particles";
                        type = "RHS_ERA_Flash";
                        position = "rotor1_pos";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.006;
                    };
                    class RHS_ERA_Sound {
                        simulation = "sound";
                        type = "RHS_ERA_Explosion_Sound";
                        position = "rotor1_pos";
                        intensity = 1;
                        interval = 1;
                        lifeTime = 1;
                    };
                    class RHS_ERA_Smoke {
                        simulation = "particles";
                        type = "RHS_ERA_Smoke";
                        position = "rotor1_pos";
                        intensity = 0.1;
                        interval = 1;
                        lifeTime = 0.04;
                    };
                };
            };
            class HitRotor2: HitRotor1 {
                class DestructionEffects: DestructionEffects {
                    class RHS_ERA_Flash: RHS_ERA_Flash {
                        position = "rotor2_pos";
                    };
                    class RHS_ERA_Sound: RHS_ERA_Sound {
                        position = "rotor2_pos";
                    };
                    class RHS_ERA_Smoke: RHS_ERA_Smoke {
                        position = "rotor2_pos";
                    };
                };
            };
            class HitRotor3: HitRotor1 {
                class DestructionEffects: DestructionEffects {
                    class RHS_ERA_Flash: RHS_ERA_Flash {
                        position = "rotor3_pos";
                    };
                    class RHS_ERA_Sound: RHS_ERA_Sound {
                        position = "rotor3_pos";
                    };
                    class RHS_ERA_Smoke: RHS_ERA_Smoke {
                        position = "rotor3_pos";
                    };
                };
            };
            class HitRotor4: HitRotor1 {
                class DestructionEffects: DestructionEffects {
                    class RHS_ERA_Flash: RHS_ERA_Flash {
                        position = "rotor4_pos";
                    };
                    class RHS_ERA_Sound: RHS_ERA_Sound {
                        position = "rotor4_pos";
                    };
                    class RHS_ERA_Smoke: RHS_ERA_Smoke {
                        position = "rotor4_pos";
                    };
                };
            };
            class HitRotor5: HitRotor1 {
                class DestructionEffects: DestructionEffects {
                    class RHS_ERA_Flash: RHS_ERA_Flash {
                        position = "rotor5_pos";
                    };
                    class RHS_ERA_Sound: RHS_ERA_Sound {
                        position = "rotor5_pos";
                    };
                    class RHS_ERA_Smoke: RHS_ERA_Smoke {
                        position = "rotor5_pos";
                    };
                };
            };
            class HitRotor6: HitRotor1 {
                class DestructionEffects: DestructionEffects {
                    class RHS_ERA_Flash: RHS_ERA_Flash {
                        position = "rotor6_pos";
                    };
                    class RHS_ERA_Sound: RHS_ERA_Sound {
                        position = "rotor6_pos";
                    };
                    class RHS_ERA_Smoke: RHS_ERA_Smoke {
                        position = "rotor6_pos";
                    };
                };
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
        class TransportMagazines {
            class _xx_rhs_30Rnd_545x39_7N10_AK {
                magazine = "rhs_30Rnd_545x39_7N10_AK";
                count = 6;
            };
            class _xx_rhs_mag_rgd5 {
                magazine = "rhs_mag_rgd5";
                count = 2;
            };
            class _xx_rhs_mag_nspn_red {
                magazine = "rhs_mag_nspn_red";
                count = 4;
            };
            class _xx_rhs_mag_rdg2_white {
                magazine = "rhs_mag_rdg2_white";
                count = 4;
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 2;
            };
        };
        class TransportWeapons {};
        class TransportBackpacks {};
        gunnerCanSee = 55;
        driverCanSee = 55;
        laserScanner = 1;
        LockDetectionSystem = "8 + 4";
        incomingMissileDetectionSystem = "8 + 16";
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
                        angleRangeHorizontal = 120;
                        angleRangeVertical = 100;
                        typeRecognitionDistance = 4000;
                        maxFogSeeThrough = 1;
                        groundNoiseDistanceCoef = -1;
                        maxGroundNoiseDistance = -1;
                        minSpeedThreshold = 0;
                        maxSpeedThreshold = 0;
                        maxTrackableSpeed = 125;
                    };
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
                UIPicture = "\rhsafrf\addons\rhs_a2port_air\data\loadouts\RHS_Ka52_EDEN_CA.paa";
                class pylons {
                    class pylon1 {
                        hardpoints[] = {
                            "RHS_HP_FAB250_KA52",
                            "RHS_HP_FAB500_KA52",
                            "RHS_HP_KMGU2_KA52",
                            "RHS_HP_B13L1_KA52",
                            "RHS_HP_B8V20_KA52",
                            "RHS_HP_UB16_KA52",
                            "RHS_HP_UB32_KA52",
                            "RHS_HP_UPK23_KA52"
                        };
                        priority = 1;
                        attachment = "rhs_mag_b8v20a_ka52_s8kom";
                        maxweight = 650;
                        UIposition[] = {0.504, 0.4};
                        turret[] = {};
                        hitpoint = "HitPylon1";
                    };
                    class pylon2: pylon1 {
                        UIposition[] = {0.165, 0.4};
                        mirroredMissilePos = 1;
                        hitpoint = "HitPylon2";
                    };
                    class pylon3: pylon1 {
                        hardpoints[] = {
                            "RHS_HP_FAB250",
                            "RHS_HP_B13L1_KA52",
                            "RHS_HP_B8V20_KA52",
                            "RHS_HP_UB16_KA52",
                            "RHS_HP_UB32_KA52",
                            "RHS_HP_UPK23_KA52",
                            "RHS_HP_APU6_9m127_KA52"
                        };
                        attachment = "rhs_mag_apu6_9m127m_ka52";
                        maxweight = 450;
                        priority = 2;
                        UIposition[] = {0.584, 0.35};
                        turret[] = {0};
                        hitpoint = "HitPylon3";
                    };
                    class pylon4: pylon3 {
                        UIposition[] = {0.085, 0.35};
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
                            "rhs_mag_fab250_ka52",
                            "rhs_mag_fab250_ka52",
                            "rhs_mag_apu6_9m127m_ka52",
                            "rhs_mag_apu6_9m127m_ka52",
                            "rhs_UV26_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "Bomb";
                    };
                    class ClusterMine {
                        attachment[] = {
                            "rhs_mag_kmgu2_pfm1_ka52",
                            "rhs_mag_kmgu2_pfm1_ka52",
                            "rhs_mag_apu6_9m127m_ka52",
                            "rhs_mag_apu6_9m127m_ka52",
                            "rhs_UV26_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "KMGU-2 (AP Mines)";
                    };
                    class ClusterHE {
                        attachment[] = {
                            "rhs_mag_kmgu2_ao25_ka52",
                            "rhs_mag_kmgu2_ao25_ka52",
                            "rhs_mag_apu6_9m127m_ka52",
                            "rhs_mag_apu6_9m127m_ka52",
                            "rhs_UV26_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "KMGU-2 (HE)";
                    };
                    class UPK {
                        attachment[] = {
                            "rhs_mag_upk23_ka52_mixed",
                            "rhs_mag_upk23_ka52_mixed",
                            "rhs_mag_apu6_9m127m_ka52",
                            "rhs_mag_apu6_9m127m_ka52",
                            "rhs_UV26_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "UPK-23-250";
                    };
                    class CAS {
                        attachment[] = {
                            "rhs_mag_b8v20a_ka52_s8kom",
                            "rhs_mag_b8v20a_ka52_s8kom",
                            "rhs_mag_apu6_9m127m_ka52",
                            "rhs_mag_apu6_9m127m_ka52",
                            "rhs_UV26_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "Close Air Support";
                    };
                    class HeavyCAS {
                        attachment[] = {
                            "rhs_mag_b13l1_ka52_s13b",
                            "rhs_mag_b13l1_ka52_s13b",
                            "rhs_mag_apu6_9m127m_ka52",
                            "rhs_mag_apu6_9m127m_ka52",
                            "rhs_UV26_CMFlare_Chaff_Magazine_x4"
                        };
                        displayname = "Close Air Support (S-13)";
                    };
                };
            };
        };
        class ViewPilot {
            initAngleX = -4;
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
        class Viewoptics {
            initAngleX = 0;
            minAngleX = 0;
            maxAngleX = 0;
            initAngleY = 0;
            minAngleY = 0;
            maxAngleY = 0;
            initFov = 0.1;
            minFov = 0.1;
            maxFov = 1.2;
        };
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "n1",
            "n2",
            "tail_decals",
            "mfd_gun_tex"
        };
        hiddenSelectionsTextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_01_RU_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_02_RU_co.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa",
            "\rhsafrf\addons\rhs_a2port_air\Ka52\Data\rhs_ka52_samshin_wfov.paa"
        };
        class textureSources {
            class standard {
                displayName = "Grey";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_01_co.paa", "\rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_02_co.paa"};
                factions[] = {"rhs_faction_vvs_c", "rhs_faction_vvs"};
            };
            class Camo: standard {
                displayName = "Camo";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_01_RU_co.paa", "\rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_02_RU_co.paa"};
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
                expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHSAIRKA52NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
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
                expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRKA52NumberPlaces}else{[_this, [['Number', cRHSAIRKA52NumberPlaces, _this getVariable ['rhs_decalNumber_type','AviaYellow'], _value] ] ] call rhs_fnc_decalsInit}};";
            };
            class rhs_decalTail {
                displayName = "Define tail decal";
                tooltip = "Define tail decalthat will be drawn on vehicle";
                property = "rhs_decalTail";
                control = "Combo";
                expression = "[_this,[['Label', cRHSAIRKA52TailPlaces, 'Aviation',_value]]] call rhs_fnc_decalsInit";
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
        class AnimationSources: AnimationSources {
            class DoorL {
                source = "door";
                animPeriod = 1.4;
            };
            class DoorR: DoorL {};
            class landingLights: DoorL {};
            class eject {
                source = "user";
                animPeriod = 0.0000001;
                initPhase = 0;
            };
            class k37_pilot_rocket_hide: eject {};
            class k37_gunner_rocket_hide: eject {};
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
            class mfd_right_gun_tg {
                source = "user";
                animPeriod = 0.0000001;
                initPhase = 1;
            };
            class mfd_right_gun_ta: mfd_right_gun_tg {};
            class mfd_left_toggle: mfd_right_gun_tg {
                initPhase = 0;
            };
            class muzzle_rot_cannon {
                weapon = "rhs_weap_2a42";
                source = "ammorandom";
            };
            class muzzle_hide_upk23 {
                weapon = "RHS_Weap_GSh23Lx2";
                source = "reload";
            };
            class muzzle_rot_upk23: muzzle_rot_cannon {
                weapon = "RHS_Weap_GSh23Lx2";
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
            class MFD_Left_Toggle {
                displayName = "Toggle MFD";
                position = "";
                priority = 0.01;
                radius = 3;
                onlyForplayer = 1;
                showWindow = 0;
                condition = "(call rhs_fnc_findPlayer) isEqualTo (driver this)";
                statement = "this animateSource ['mfd_left_toggle',1-(this animationSourcePhase 'mfd_left_toggle')]";
            };
            class openDoor {
                displayName = "Lights up";
                position = "";
                priority = 0.01;
                radius = 3;
                onlyForplayer = 1;
                showWindow = 0;
                condition = "this doorPhase 'landingLights' < 0.5 AND alive this";
                statement = "this animateDoor ['landingLights',1]";
            };
            class closeDoor: openDoor {
                displayName = "Lights down";
                condition = "this doorPhase 'landingLights' > 0.5 AND alive this";
                statement = "this animateDoor ['landingLights',0]";
            };
        };
        enableManualFire = 1;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerDoor = "doorR";
                gunnerLeftHandAnimName = "lever_gunner";
                gunnerRightHandAnimName = "stick_gunner";
                gunnerLeftLegAnimName = "pedalL";
                gunnerRightLegAnimName = "pedalR";
                gunnerAction = "RHS_KA52_Gunner";
                gunnerInAction = "RHS_KA52_Gunner";
                gunnerGetInAction = "pilot_Heli_Light_02_Enter";
                gunnerGetOutAction = "pilot_Heli_Light_02_exit";
                isCopilot = 1;
                startEngine = 0;
                outGunnerMayFire = 1;
                commanding = -1;
                primaryGunner = 1;
                usePIP = 1;
                castGunnerShadow = 1;
                viewGunnerShadow = 1;
                CanEject = 1;
                memoryPointsGetInGunner = "Pos_Gunner";
                memoryPointsGetInGunnerDir = "Pos_Gunner_dir";
                memoryPointsGetInGunnerPrecise = "pos gunner";
                precisegetinout = 1;
                minElev = -80;
                maxElev = 15;
                initElev = 0;
                minTurn = -120;
                maxTurn = 120;
                initTurn = 0;
                gunBeg = "gunstart";
                gunEnd = "gunend";
                body = "MainTurret";
                gun = "MainGun";
                memoryPointGun = "machinegun";
                memoryPointGunnerOptics = "pilotview";
                selectionFireAnim = "zasleh";
                turretInfoType = "RHS_RscWeaponKa52_FCS";
                canUseScanners = 0;
                allowTabLock = 0;
                class Viewoptics {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.067;
                    minFov = 0.019;
                    maxFov = 0.067;
                };
                gunnerOpticsEffect[] = {"TankCommanderOptics1"};
                class OpticsIn {
                    class Samshin_WFOV {
                        opticsDisplayName = "3";
                        gunneropticsmodel = "rhsafrf\addons\rhs_optics\vehicles\rhs_samshin_WFOV";
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
                    };
                    class Samshin_NFOV: Samshin_WFOV {
                        opticsDisplayName = "15";
                        gunneropticsmodel = "rhsafrf\addons\rhs_optics\vehicles\rhs_samshin";
                        initfov = 0.0466667;
                        maxfov = 0.0466667;
                        minfov = 0.0466667;
                    };
                    class Samshin_NFOV_Stabilised: Samshin_NFOV {
                        opticsDisplayName = "22";
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
                                resource = "RscCustomInfoSensors";
                                range[] = {8000, 16000, 24000, 4000};
                            };
                        };
                    };
                };
                gunnerForceOptics = 0;
                weapons[] = {"rhs_weap_MASTERSAFE_Holdster15", "rhs_weap_fcs_mi24", "rhs_weap_2a42"};
                magazines[] = {"rhs_laserfcsmag", "rhs_mag_3uor6_230", "rhs_mag_3ubr8_230"};
                class HitTurret {
                    armor = 0.8;
                    material = -1;
                    name = "gun1";
                    visual = "gun1";
                    passThrough = 0.5;
                };
                class HitGun {
                    armor = 0.4;
                    material = -1;
                    name = "gun2";
                    visual = "gun2";
                    passThrough = 0.2;
                };
            };
        };
        class compartmentsLights {
            class Comp1 {
                class Light_Pilot {
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
                        hardLimitStart = 0.5;
                        hardLimitEnd = 0.6;
                    };
                    point = "light_pilot";
                };
                class Light_Gunner: Light_Pilot {
                    point = "light_gunner";
                };
            };
            class Comp2: Comp1 {
                class Light_Pilot: Light_Pilot {};
                class Light_Gunner: Light_Gunner {};
            };
        };
        class Reflectors {
            class LSvetla {
                color[] = {7000, 7500, 10000};
                ambient[] = {70, 75, 100};
                intensity = 50;
                size = 1;
                innerAngle = 5;
                outerAngle = 75;
                coneFadeCoef = 10;
                position = "L svetlo";
                direction = "konec L svetla";
                hitpoint = "L svetlo";
                selection = "L svetlo";
                useFlare = 0;
                dayLight = 0;
                flareSize = 0.75;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 0;
                    hardLimitStart = 200;
                    hardLimitEnd = 250;
                };
            };
            class LSvetlaFlare: LSvetla {
                position = "L_Flare";
                useFlare = 1;
                color[] = {10, 10, 9};
                ambient[] = {10, 10, 9};
            };
            class RSvetla: LSvetla {
                position = "P svetlo";
                direction = "konec P svetla";
                hitpoint = "P svetlo";
                selection = "P svetlo";
            };
            class RSvetlaFlare: RSvetla {
                position = "R_Flare";
                useFlare = 1;
                color[] = {10, 10, 9};
                ambient[] = {10, 10, 9};
            };
        };
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
                color[] = {1, 1, 1};
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
        dammageHalf[] = {"\rhsafrf\addons\rhs_a2port_air\ka52\data\Ka52_cauges_CO.paa", "\rhsafrf\addons\rhs_a2port_air\ka52\data\Ka52_caugesmf_CO.paa"};
        dammageFull[] = {"\rhsafrf\addons\rhs_a2port_air\ka52\data\Ka52_cauges_CO.paa", "\rhsafrf\addons\rhs_a2port_air\ka52\data\Ka52_caugesmf_CO.paa"};
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_01.rvmat",
                "rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_01_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_01_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_02.rvmat",
                "rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_02_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_02_destruct.rvmat",
                "rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_glass.rvmat",
                "rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_glass_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_glass_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_glass_in.rvmat",
                "rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_glass_in_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_glass_in_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\ka52\data\Ka52_cauges_light.rvmat",
                "rhsafrf\addons\rhs_a2port_air\ka52\data\Ka52_cauges_bug.rvmat",
                "rhsafrf\addons\rhs_a2port_air\ka52\data\Ka52_cauges_bug.rvmat",
                "rhsafrf\addons\rhs_a2port_air\ka52\data\Ka52_weapons.rvmat",
                "rhsafrf\addons\rhs_a2port_air\ka52\data\Ka52_weapons_damage.rvmat",
                "rhsafrf\addons\rhs_a2port_air\ka52\data\Ka52_weapons_destruct.rvmat"
            };
        };
        class MFD {
            class MFD_Left_Compass {
                topLeft = "mfd_2_nav_tl";
                topRight = "mfd_2_nav_tr";
                bottomLeft = "mfd_2_nav_bl";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0, 1, 0, 0.1};
                font = "rhs_digital_font_var";
                enableParallax = 0;
                class material {
                    ambient[] = {1, 1, 1, 1};
                    diffuse[] = {1, 1, 1, 1};
                    emissive[] = {400, 200, 200, 1};
                };
                class Bones {};
                class Draw {
                    alpha = 0.95;
                    color[] = {0, 0.83, 0.83};
                    condition = "on";
                    class Text {
                        type = "text";
                        align = "center";
                        scale = 1;
                        source = "Heading";
                        sourceScale = 1;
                        pos[] = {{0.498, 0.19}, 1};
                        right[] = {{0.543, 0.19}, 1};
                        down[] = {{0.498, 0.24}, 1};
                    };
                };
            };
            class MFD_Right_Gun: MFD_Left_Compass {
                topLeft = "mfd_3_gun_tl";
                topRight = "mfd_3_gun_tr";
                bottomLeft = "mfd_3_gun_bl";
                color[] = {0, 1, 0, 0.1};
                font = "rhs_digital_font_var";
                turret[] = {0};
                class material {
                    ambient[] = {1, 1, 1, 1};
                    diffuse[] = {1, 1, 1, 1};
                    emissive[] = {400, 200, 200, 1};
                };
                class Draw {
                    alpha = 0.95;
                    color[] = {0.45, 0.7, 0.29};
                    condition = "on";
                    class Speed {
                        type = "text";
                        align = "left";
                        scale = 1;
                        source = "speed";
                        sourceScale = 3.6;
                        sourceLength = 1;
                        pos[] = {{0.425, 0.165}, 1};
                        right[] = {{0.46, 0.165}, 1};
                        down[] = {{0.425, 0.21}, 1};
                    };
                    class Height: Speed {
                        source = "altitudeAGL";
                        sourceOffset = -2;
                        sourceScale = 1;
                        sourceLength = 1;
                        pos[] = {{0.625, 0.165}, 1};
                        right[] = {{0.66, 0.165}, 1};
                        down[] = {{0.625, 0.21}, 1};
                    };
                    class TurretDirection {
                        type = "text";
                        align = "center";
                        scale = 1;
                        source = "userText";
                        sourceIndex = 2;
                        sourceScale = 1;
                        sourceLength = 2;
                        pos[] = {{0.515, 0.165}, 1};
                        right[] = {{0.55, 0.165}, 1};
                        down[] = {{0.515, 0.21}, 1};
                    };
                    class TurretElevation {
                        type = "text";
                        align = "left";
                        scale = 1;
                        source = "userText";
                        sourceIndex = 3;
                        sourceScale = 1;
                        sourceLength = 1;
                        sourcePrecision = 1;
                        pos[] = {{0.88, 0.385}, 1};
                        right[] = {{0.895, 0.385}, 1};
                        down[] = {{0.88, 0.405}, 1};
                    };
                    class DistanceToTarget {
                        type = "text";
                        align = "center";
                        scale = 1;
                        source = "userText";
                        sourceIndex = 1;
                        sourceScale = 1;
                        sourceLength = 1;
                        sourcePrecision = 1;
                        pos[] = {{0.515, 0.74}, 1};
                        right[] = {{0.55, 0.74}, 1};
                        down[] = {{0.515, 0.785}, 1};
                    };
                };
            };
            class MFD_left_Gun: MFD_Right_Gun {
                topLeft = "mfd_2_gun_tl";
                topRight = "mfd_2_gun_tr";
                bottomLeft = "mfd_2_gun_bl";
                color[] = {0, 1, 0, 0.1};
                font = "rhs_digital_font_var";
                class material {
                    ambient[] = {1, 1, 1, 1};
                    diffuse[] = {1, 1, 1, 1};
                    emissive[] = {400, 200, 200, 1};
                };
                class Draw: Draw {
                    class Speed: Speed {};
                    class Height: Height {};
                    class TurretDirection: TurretDirection {};
                    class TurretElevation: TurretElevation {};
                    class DistanceToTarget: DistanceToTarget {};
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
                        source = "turretworld";
                        pos0[] = {0.5, 0.41};
                        pos10[] = {1.15, 1.75};
                    };
                };
                class Draw {
                    alpha = 0.95;
                    color[] = {0, 0.3, 0.05};
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
                        pos0[] = {0.5, 0.39};
                        pos10[] = {1.134, 0.96};
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
                        aspectRatio = 0.899054;
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
                        pos0[] = {0.5, 0.39};
                        pos10[] = {1.134, 0.96};
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
                        max = 50;
                        minPos[] = {0, "0.15*0.65"};
                        maxPos[] = {0, "0.65*0.65"};
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
                        pos0[] = {0.5, 0.58};
                        pos10[] = {1.384, 1.3652};
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
                    alpha = 0.95;
                    color[] = {0, 0.3, 0.05};
                    condition = "on";
                    class MGunD {
                        condition = "mgun+rocket+bomb";
                        class Cross {
                            type = "line";
                            width = 3;
                            points[] = {
                                {"ImpactPoint", {0, -0.0269716}, 1},
                                {"ImpactPoint", {0, -0.0359621}, 1},
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
                                {"ImpactPoint", {0, -0.0314669}, 1},
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
                                {"ImpactPoint", {0, -0.0269716}, 1},
                                {"ImpactPoint", {0.005208, -0.0265616}, 1},
                                {"ImpactPoint", {0.01026, -0.0253452}, 1},
                                {"ImpactPoint", {0.015, -0.0233574}, 1},
                                {"ImpactPoint", {0.019284, -0.0206603}, 1},
                                {"ImpactPoint", {0.02298, -0.0173373}, 1},
                                {"ImpactPoint", {0.02598, -0.0134858}, 1},
                                {"ImpactPoint", {0.028191, -0.00922429}, 1},
                                {"ImpactPoint", {0.029544, -0.00468227}, 1},
                                {"ImpactPoint", {0.03, 0}, 1},
                                {"ImpactPoint", {0.029544, 0.00468227}, 1},
                                {"ImpactPoint", {0.028191, 0.00922429}, 1},
                                {"ImpactPoint", {0.02598, 0.0134858}, 1},
                                {"ImpactPoint", {0.02298, 0.0173373}, 1},
                                {"ImpactPoint", {0.019284, 0.0206603}, 1},
                                {"ImpactPoint", {0.015, 0.0233574}, 1},
                                {"ImpactPoint", {0.01026, 0.0253452}, 1},
                                {"ImpactPoint", {0.005208, 0.0265616}, 1},
                                {"ImpactPoint", {0, 0.0269716}, 1},
                                {"ImpactPoint", {-0.005208, 0.0265616}, 1},
                                {"ImpactPoint", {-0.01026, 0.0253452}, 1},
                                {"ImpactPoint", {-0.015, 0.0233574}, 1},
                                {"ImpactPoint", {-0.019284, 0.0206603}, 1},
                                {"ImpactPoint", {-0.02298, 0.0173373}, 1},
                                {"ImpactPoint", {-0.02598, 0.0134858}, 1},
                                {"ImpactPoint", {-0.028191, 0.00922429}, 1},
                                {"ImpactPoint", {-0.029544, 0.00468227}, 1},
                                {"ImpactPoint", {-0.03, 0}, 1},
                                {"ImpactPoint", {-0.029544, -0.00468227}, 1},
                                {"ImpactPoint", {-0.028191, -0.00922429}, 1},
                                {"ImpactPoint", {-0.02598, -0.0134858}, 1},
                                {"ImpactPoint", {-0.02298, -0.0173373}, 1},
                                {"ImpactPoint", {-0.019284, -0.0206603}, 1},
                                {"ImpactPoint", {-0.015, -0.0233574}, 1},
                                {"ImpactPoint", {-0.01026, -0.0253452}, 1},
                                {"ImpactPoint", {-0.005208, -0.0265616}, 1},
                                {"ImpactPoint", {0, -0.0269716}, 1}
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
                            {},
                            {{0.52, 0.14}, 1},
                            {{0.5, 0.12}, 1},
                            {{0.48, 0.14}, 1},
                            {},
                            {{0.3, 0.115}, 1},
                            {{0.7, 0.115}, 1},
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
                        condition = "50-altitudeAGL";
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
                            text = 50;
                            pos[] = {{0.79, 0.17}, 1};
                            right[] = {{0.83, 0.17}, 1};
                            down[] = {{0.79, 0.205}, 1};
                        };
                    };
                    class RadarBoxes {
                        type = "radar";
                        pos0[] = {0.5, 0.39};
                        pos10[] = {1.134, 0.96};
                        width = 4;
                        points[] = {
                            {{-0.002, -0.00179811}, 1},
                            {{0.002, -0.00179811}, 1},
                            {{0.002, 0.00179811}, 1},
                            {{-0.002, 0.00179811}, 1},
                            {{-0.002, -0.00179811}, 1}
                        };
                    };
                    class TargetDiamond {
                        class shape {
                            type = "line";
                            width = 4;
                            points[] = {
                                {"Target", 1, "Limit0109", 1, {0.02, 0.0179811}, 1},
                                {"Target", 1, "Limit0109", 1, {-0.02, 0.0179811}, 1},
                                {"Target", 1, "Limit0109", 1, {-0.02, -0.0179811}, 1},
                                {"Target", 1, "Limit0109", 1, {0.02, -0.0179811}, 1},
                                {"Target", 1, "Limit0109", 1, {0.02, 0.0179811}, 1}
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
                        sourceOffset = -2;
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
                    class HeadingScale {
                        type = "scale";
                        source = "heading";
                        horizontal = 1;
                        sourceScale = 0.1;
                        width = 4;
                        top = 0.3;
                        center = 0.5;
                        bottom = 0.7;
                        lineXleft = 0.11;
                        lineYright = 0.1;
                        lineXleftMajor = 0.11;
                        lineYrightMajor = 0.09;
                        majorLineEach = 2;
                        numberEach = 2;
                        step = 0.5;
                        stepSize = 0.0555556;
                        align = "center";
                        scale = 1;
                        pos[] = {"0.32-0.01", "0.0+0.05"};
                        right[] = {"0.38-0.01", "0.0+0.05"};
                        down[] = {"0.32-0.01", "0.04+0.05"};
                    };
                };
            };
        };
        class EventHandlers: Eventhandlers {
            hit = "";
            class RHS_EventHandlers {
                hit = "_this call RHS_fnc_AI_eject";
                init = "_this call rhs_fnc_air_init";
                postInit = "_this call rhs_fnc_reapplyTextures";
                getout = "_this spawn rhs_fnc_ka52_ejection";
                engine = "_this call rhs_fnc_addParachutes;";
            };
        };
    };
    class RHS_Ka52Black_base: RHS_Ka52_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ka52Black_base.paa";
        accuracy = 0.5;
        hiddenSelectionsTextures[] = {
            "\rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_01_co.paa",
            "\rhsafrf\addons\rhs_a2port_air\ka52\data\ka52_02_co.paa",
            "a3\data_f\clear_empty.paa",
            "a3\data_f\clear_empty.paa",
            "rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa",
            "\rhsafrf\addons\rhs_a2port_air\Ka52\Data\rhs_ka52_samshin_wfov.paa"
        };
    };
    class RHS_Ka52_vvsc: RHS_Ka52_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ka52_vvsc.paa";
        scope = 2;
        faction = "rhs_faction_vvs_c";
        author = "$STR_RHS_AUTHOR_FULL";
        availableForSupportTypes[] = {"CAS_Heli"};
    };
    class RHS_Ka52_vvs: RHS_Ka52Black_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ka52_vvs.paa";
        scope = 2;
        faction = "rhs_faction_vvs";
        author = "$STR_RHS_AUTHOR_FULL";
        availableForSupportTypes[] = {"CAS_Heli"};
    };
    class RHS_Ka52_UPK23_vvs: RHS_Ka52_vvs {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ka52_UPK23_vvs.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 1;
        scopeCurator = 2;
        displayName = "Ka-52 (UPK)";
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class pylon1: pylon1 {
                        attachment = "rhs_mag_upk23_ka52_mixed";
                        turret[] = {};
                    };
                    class pylon2: pylon2 {
                        attachment = "rhs_mag_upk23_ka52_mixed";
                        turret[] = {};
                    };
                    class pylon3: pylon3 {
                        attachment = "rhs_mag_apu6_9m127m_ka52";
                        turret[] = {0};
                    };
                    class pylon4: pylon4 {
                        attachment = "rhs_mag_apu6_9m127m_ka52";
                        turret[] = {0};
                    };
                    class cmDispenser: cmDispenser {};
                };
            };
        };
    };
    class RHS_Ka52_UPK23_vvsc: RHS_Ka52_vvsc {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Ka52_UPK23_vvsc.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 1;
        scopeCurator = 2;
        displayName = "Ka-52 (UPK)";
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class pylon1: pylon1 {
                        attachment = "rhs_mag_upk23_ka52_mixed";
                        turret[] = {};
                    };
                    class pylon2: pylon2 {
                        attachment = "rhs_mag_upk23_ka52_mixed";
                        turret[] = {};
                    };
                    class pylon3: pylon3 {
                        attachment = "rhs_mag_apu6_9m127m_ka52";
                        turret[] = {0};
                    };
                    class pylon4: pylon4 {
                        attachment = "rhs_mag_apu6_9m127m_ka52";
                        turret[] = {0};
                    };
                    class cmDispenser: cmDispenser {};
                };
            };
        };
    };
    class rhs_ka52_blade: Plane {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_ka52_blade.paa";
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;
        hiddenSelections[] = {};
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "Ka-52 Blade";
        draconicForceXCoef = 17.2;
        draconicForceYCoef = 12.6;
        draconicForceZCoef = 10.15;
        draconicTorqueXCoef = 11.29;
        draconicTorqueYCoef = 13.1;
        Icon = "iconParachute";
        picture = "\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
        model = "\rhsafrf\addons\rhs_a2port_air\ka52\Ka52_rotor.p3d";
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
    class Car_f;
    class rhs_ka52_ejection_vest: Car_f {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_ka52_ejection_vest.paa";
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;
        hiddenSelections[] = {};
        author = "$STR_RHS_AUTHOR_FULL";
        displayName = "K37-800 Ejection Vest";
        simulation = "carX";
        Icon = "iconParachute";
        picture = "\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
        model = "\rhsafrf\addons\rhs_a2port_air\ka52\rhs_ka52_ejection_vest.p3d";
        memoryPointsGetInCargo = "Cargo";
        memoryPointsGetInCargoDir = "Cargo dir";
        ejectSpeed[] = {1, 0, 1};
        unitInfoType = "RscUnitInfoSoldier";
        hideUnitInfo = 1;
        cargoAction[] = {"RHS_ka52_Pilot_Eject"};
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
        driveOnComponent[] = {};
        class Turrets {};
        class UserActions {};
        class Eventhandlers {};
        SLX_XEH_DISABLED = 1;
    };
    class rhs_ka52_rps_rocket: rhs_ka52_ejection_vest {
        displayName = "Ka-52 ejection rocket";
        editorCategory = "EdCat_Things";
        editorSubcategory = "EdSubcat_Military";
        vehicleClass = "Small_items";
        model = "\rhsafrf\addons\rhs_a2port_air\ka52\Ka52_rps_rocket.p3d";
        class AnimationSources {
            class hide_booster {
                source = "user";
                animPeriod = 0.6;
                initPhase = 0;
            };
        };
        armor = 100000000000;
        class Eventhandlers {
            HandleDamage = "deleteVehicle (_this select 0)";
        };
        driveOnComponent[] = {};
    };
    class UAV_02_base_F: UAV {
        class EventHandlers;
    };
    class rhs_pchela1t_base: UAV_02_base_F {
        dlc = "RHS_AFRF";
        rhs_decalParameters[] = {"['Number',cRHSAIRPchelaNumberPlaces,'AviaRed']"};
        rhs_hasNoRadar = 1;
        category = "Autonomous";
        wreck = "";
        scope = 0;
        faction = "rhs_faction_vvs";
        side = 0;
        crew = "O_UAV_AI";
        typicalCargo[] = {"O_UAV_AI"};
        accuracy = 1;
        class Library {
            libTextDesc = "The Pchela-1T is an unmanned aerial vehicle (UAV) developed in Russia. Its primary uses are surveillance and observation or target designation.";
        };
        displayName = "Pchela-1T";
        model = "\rhsafrf\addons\rhs_a2port_air\PCHELA1T\Pchela1T.p3d";
        icon = "\rhsafrf\addons\rhs_a2port_air\data\map_ico\icon_Pchela1T_CA.paa";
        mapSize = 5;
        armor = 75;
        damageResistance = 0.03176;
        class Hitpoints {
            class HitHull {
                armor = -50;
                explosionShielding = 0.8;
                passThrough = 1;
                minimalHit = -0.4;
                radius = 0.15;
                material = -1;
                name = "trup";
                visual = "zbytek";
                depends = "0";
            };
            class HitEngine {
                armor = -40;
                explosionShielding = 1;
                passThrough = 0.2;
                minimalHit = -0.05;
                radius = 0.07;
                material = -1;
                name = "motor";
                visual = "zbytek";
                depends = "0";
            };
            class HitLCRudder {
                armor = -30;
                explosionShielding = 0.6;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.12;
                material = -1;
                name = "hit_rudder";
                armorComponent = "hit_rudder";
                visual = "-";
                depends = "0";
            };
            class HitLAileron {
                armor = -30;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.13;
                material = -1;
                name = "hit_wing_l";
                armorComponent = "hit_wing_l";
                visual = "-";
                depends = "0";
            };
            class HitRAileron {
                armor = -30;
                explosionShielding = 0.5;
                passThrough = 0.1;
                minimalHit = 0.1;
                radius = 0.13;
                material = -1;
                name = "hit_wing_r";
                armorComponent = "hit_wing_r";
                visual = "-";
                depends = "0";
            };
        };
        uavCameraDriverPos = "gunnerview";
        uavCameraDriverDir = "gunnerview_dir";
        uavCameraGunnerPos = "gunnerview";
        uavCameraGunnerDir = "gunnerview_dir";
        memoryPointLDust = "DustLeft";
        memoryPointRDust = "DustRight";
        memoryPointDriverOptics = "gunnerview";
        driveOnComponent[] = {"gear_1", "gear_2"};
        weapons[] = {};
        magazines[] = {};
        class Turrets {
            class MainTurret: NewTurret {
                isCopilot = 0;
                minElev = -85;
                maxElev = 0;
                initElev = 0;
                minTurn = -360;
                maxTurn = 360;
                initTurn = 0;
                outGunnerMayFire = 1;
                inGunnerMayFire = 1;
                commanding = -1;
                body = "Optics_turret";
                gun = "Optics_gun";
                animationSourceBody = "mainTurret";
                animationSourceGun = "mainGun";
                memoryPointGun = "gunnerview";
                memoryPointGunnerOptics = "gunnerview";
                gunBeg = "gunnerview_dir";
                gunEnd = "gunnerview";
                gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F.p3d";
                gunnerForceOptics = 1;
                turretInfoType = "RscOptics_UAV_gunner";
                stabilizedInAxes = 3;
                enableManualFire = 0;
                weapons[] = {};
                magazines[] = {};
                GunnerCompartments = "Compartment1";
                gunnerInAction = "Disabled";
                gunnerAction = "Disabled";
                startEngine = 0;
                class OpticsIn {
                    class Wide {
                        opticsDisplayName = "W";
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.5;
                        minFov = 0.05;
                        maxFov = 0.5;
                        directionStabilized = 1;
                        visionMode[] = {"Normal", "Ti"};
                        thermalMode[] = {0, 1};
                        gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
                    };
                };
                class OpticsOut {
                    class Monocular {
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 1.1;
                        minFov = 0.133;
                        maxFov = 1.1;
                        visionMode[] = {"Normal", "NVG"};
                        gunnerOpticsModel = "";
                        gunnerOpticsEffect[] = {};
                    };
                };
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {"rhsafrf\addons\rhs_a2port_air\PCHELA1T\data\pchela1t.rvmat", "rhsafrf\addons\rhs_a2port_air\PCHELA1T\data\pchela1t_damage.rvmat", "rhsafrf\addons\rhs_a2port_air\PCHELA1T\data\pchela1t_destruct.rvmat"};
        };
        class textureSources {
            class standard {
                displayName = "Grey";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_a2port_air\PCHELA1T\data\pchela1tblu_co.paa"};
                factions[] = {"rhs_faction_vvs_c", "rhs_faction_vvs"};
            };
            class Camo: standard {
                displayName = "Camo";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_a2port_air\PCHELA1T\data\pchela1t_co.paa"};
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
                expression = "_this setVariable ['%s', _value];[_this,[['Number', cRHSAIRPchelaNumberPlaces, _value]]] call rhs_fnc_decalsInit";
                defaultValue = 0;
                typeName = "STRING";
                class values {
                    class AviaRed {
                        name = "Aviation Red";
                        value = "AviaRed";
                    };
                    class AviaBlue {
                        name = "Aviation Blue";
                        value = "AviaBlue";
                        defaultValue = "AviaBlue";
                    };
                    class AviaWhiteOut {
                        name = "Aviation White Out";
                        value = "AviaWhiteOut";
                    };
                    class AviaYellow {
                        name = "Aviation Yellow";
                        value = "AviaYellow";
                    };
                    class AviaCDF {
                        name = "Aviation CDF";
                        value = "AviaCDF";
                    };
                    class Default {
                        name = "Default";
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
                expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRPchelaNumberPlaces}else{[_this, [['Number', cRHSAIRPchelaNumberPlaces, _this getVariable ['rhs_decalNumber_type','AviaYellow'], _value] ] ] call rhs_fnc_decalsInit}};";
            };
        };
        transportSoldier = 0;
        maxSpeed = 225;
        fuelCapacity = 1500;
        thrustCoef[] = {
            1.48,
            1.45,
            1.4,
            1.35,
            1.3,
            1.24,
            0.9,
            0.5,
            0.3,
            0.1,
            0,
            0,
            0,
            0,
            0,
            0
        };
        envelope[] = {
            0,
            0.07,
            0.26,
            0.59,
            1.04,
            1.63,
            1.98,
            2.7,
            3.2,
            4.05,
            4.68,
            5.49,
            6.19,
            7.04,
            7.53,
            7.9,
            7.4,
            7.2,
            6.5,
            6.2,
            6
        };
        angleOfIndicence = "-0.25*3.1415/180";
        landingSpeed = 73;
        flaps = 0;
        airBrake = 0;
        cabinOpening = 0;
        gearRetracting = 0;
        stallSpeed = 200;
        threat[] = {0.3, 0.3, 0.1};
        audible = 8;
        hiddenSelections[] = {"Camo", "n1", "n2", "n3"};
        hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_air\PCHELA1T\data\pchela1t_co.paa"};
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this call rhs_fnc_air_init";
                postInit = "_this call rhs_fnc_reapplyTextures";
            };
        };
    };
    class rhs_pchela1t_vvs: rhs_pchela1t_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_pchela1t_vvs.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_air\PCHELA1T\data\pchela1tblu_co.paa"};
    };
    class rhs_pchela1t_vvsc: rhs_pchela1t_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_pchela1t_vvsc.paa";
        scope = 2;
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_vvs_c";
    };
    class Module_F;
    class ModuleCAS_F: Module_F {
        class Arguments {
            class Vehicle {
                class values {
                    class RHS_Su25SM_vvs {
                        name = "Su-25 (FAB-250)";
                        value = "RHS_Su25SM_vvs";
                    };
                    class RHS_Su25SM_KH29_vvs {
                        name = "Su-25 (KH-29)";
                        value = "RHS_Su25SM_KH29_vvsc";
                    };
                    class RHS_Su25SM_Cluster_vvs {
                        name = "Su-25 (Cluster)";
                        value = "RHS_Su25SM_Cluster_vvsc";
                    };
                };
            };
        };
    };
};
