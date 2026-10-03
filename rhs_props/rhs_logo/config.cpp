class CfgPatches {
    class rhs_logo {
        requiredAddons[] = {"A3_Structures_F", "rhs_main"};
        requiredVersion = 1.9;
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
        units[] = {"rhs_logo"};
        weapons[] = {};
    };
};
class CfgVehicles {
    class House_F;
    class rhs_logo: House_F {
        author = "$STR_RHS_AUTHOR_FULL";
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_logo.paa";
        displayName = "RHS Logo";
        scope = 2;
        scopeCurator = 2;
        model = "\rhsafrf\addons\rhs_props\rhs_logo\rhs_logo";
        class DestructionEffects {};
    };
};
