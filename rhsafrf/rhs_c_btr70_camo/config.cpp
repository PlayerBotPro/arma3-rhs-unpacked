class CfgPatches {
    class rhs_c_btr70_camo {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {"rhs_c_btr"};
        version = "0.1.1.1";
    };
};
class CfgVehicles {
    class rhs_btr_base;
    class rhs_btr70_vmf: rhs_btr_base {
        class textureSources {
            class Camo1 {
                displayName = "3-Color Camo (1)";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_btr70_camo\data\btr70_tri1_1_co.paa", "rhsafrf\addons\rhs_btr70_camo\data\btr70_tri1_2_co.paa"};
                factions[] = {
                    "rhs_faction_vmf",
                    "rhs_faction_vdv",
                    "rhs_faction_vdv",
                    "rhs_faction_vv"
                };
            };
            class Camo2: Camo1 {
                displayName = "3-Color Camo (2)";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_btr70_camo\data\btr70_tri2_1_co.paa", "rhsafrf\addons\rhs_btr70_camo\data\btr70_tri2_2_co.paa"};
            };
            class Omon1: Camo1 {
                displayName = "Omon (1)";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_btr70_camo\data\btr70_omon1_1_co.paa", "rhsafrf\addons\rhs_btr70_camo\data\btr70_omon1_2_co.paa"};
            };
            class Omon2: Camo1 {
                displayName = "Omon (2)";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_btr70_camo\data\btr70_omon2_1_co.paa", "rhsafrf\addons\rhs_btr70_camo\data\btr70_omon2_2_co.paa"};
            };
            class MC: Camo1 {
                displayName = "MS (Peacekeeper)";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_btr70_camo\data\btr70_MC_1_co.paa", "rhsafrf\addons\rhs_btr70_camo\data\btr70_MC_2_co.paa"};
            };
            class Desert: Camo1 {
                displayName = "Desert";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_btr70_camo\data\btr70_des_1_co.paa", "rhsafrf\addons\rhs_btr70_camo\data\btr70_des_2_co.paa"};
            };
            class rhs_sand {
                displayName = "Sand";
                author = "beaar";
                textures[] = {"rhsafrf\addons\rhs_btr70_camo\data\btr70_1_sand_co.paa", "rhsafrf\addons\rhs_btr70_camo\data\btr70_2_sand_co.paa"};
                factions[] = {};
            };
            class Marine: Camo1 {
                displayName = "Marine";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"rhsafrf\addons\rhs_btr70_camo\data\btr70_mar_1_co.paa", "rhsafrf\addons\rhs_btr70_camo\data\btr70_mar_2_co.paa"};
            };
        };
    };
};
