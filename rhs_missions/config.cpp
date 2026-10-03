class CfgPatches {
    class RHS_Missions_Pack {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {"rhs_main"};
    };
};
class CfgMissions {
    class MPMissions {
        class RHS_MP_ZGM_01 {
            briefingName = "RHS Zeus TVT 18 - Altis v1.0";
            directory = "rhsafrf\addons\rhs_missions\MPMissions\rhs_zeus.Altis";
        };
        class RHS_MP_ZGM_02 {
            briefingName = "RHS Zeus TVT 18 - Chernarus v1.0";
            directory = "rhsafrf\addons\rhs_missions\MPMissions\rhs_zeus.Chernarus";
        };
        class RHS_MP_ZGM_03 {
            briefingName = "RHS Zeus TVT 18 - Takistan v1.0";
            directory = "rhsafrf\addons\rhs_missions\MPMissions\rhs_zeus.Takistan";
        };
        class RHS_MP_CTI_01 {
            briefingName = "RHS BECTI 32 - Altis";
            directory = "rhsafrf\addons\rhs_missions\MPMissions\rhs_ctix_becti.altis";
        };
        class RHS_MP_CTI_02 {
            briefingName = "RHS BECTI 32 - Chernarus";
            directory = "rhsafrf\addons\rhs_missions\MPMissions\rhs_ctix_becti.chernarus";
        };
        class RHS_MP_Co10_czeczenia {
            briefingName = "RHS Co 1-10 Insurgency Action";
            directory = "rhsafrf\addons\rhs_missions\MPMissions\rhs_co1-10_czeczenia.Altis";
        };
    };
    class Showcases {
        class RHS_Showcases {
            briefingName = "RHS Showcases";
            class Showcase_Towing {
                briefingName = "Towing";
                directory = "rhsafrf\addons\rhs_missions\SPMissions\rhs_showcase_towing.Stratis";
            };
        };
    };
};
