class CfgPatches {
    class rhs_c_bmd_camo {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {"rhs_c_bmd"};
        version = "0.1.1.1";
    };
};
class CfgVehicles {
    class rhs_bmd_base;
    class rhs_bmd2_base: rhs_bmd_base {
        class textureSources {
            class Camo1 {
                displayName = "Tricolor (1)";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_01_rus1_co.paa", "rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_02_rus1_co.paa", "rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_03_rus1_co.paa"};
                factions[] = {"rhs_faction_vdv"};
            };
            class Camo2: Camo1 {
                displayName = "Tricolor (2)";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_01_rus2_co.paa", "rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_02_rus2_co.paa", "rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_03_rus2_co.paa"};
            };
            class Camo3: Camo1 {
                displayName = "Tricolor (3)";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_01_rus3_co.paa", "rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_02_rus3_co.paa", "rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_03_rus3_co.paa"};
            };
            class Camo4: Camo1 {
                displayName = "Tricolor (4)";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_01_rus4_co.paa", "rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_02_rus4_co.paa", "rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_03_rus4_co.paa"};
            };
            class MC: Camo1 {
                displayName = "MS (Peacekeeper)";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_01_peace_co.paa", "rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_02_peace_co.paa", "rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_03_peace_co.paa"};
            };
            class Desert: Camo1 {
                displayName = "Desert";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_01_des_co.paa", "rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_02_des_co.paa", "rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_03_des_co.paa"};
            };
        };
    };
    class rhs_bmd1_base: rhs_bmd_base {
        class textureSources {
            class Camo1 {
                displayName = "Tricolor (1)";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_01_rus1_co.paa", "rhsafrf\addons\rhs_bmd_camo\data\sa_bmd1_02_rus1_co.paa", "rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_03_rus1_co.paa"};
                factions[] = {};
            };
            class MC {
                displayName = "MS (Peacekeeper)";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_01_peace_co.paa", "rhsafrf\addons\rhs_bmd\data\sa_bmd1_02_co.paa", "rhsafrf\addons\rhs_bmd_camo\data\sa_bmd2_03_peace_co.paa"};
            };
        };
    };
};
