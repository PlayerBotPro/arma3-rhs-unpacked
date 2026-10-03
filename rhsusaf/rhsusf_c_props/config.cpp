class CfgPatches {
    class rhsusf_c_props {
        units[] = {
            "rhsusf_props_ScepterMFC_OD",
            "rhsusf_props_ScepterMFC_D",
            "rhsusf_props_ScepterMWC_OD",
            "rhsusf_props_ScepterMWC_D"
        };
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"rhsusf_main", "rhsusf_props"};
        name = "RHSUSF Editor Props";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class CfgVehicles {
    class Items_base_F;
    class rhsusf_props_JerryCan_Base: Items_base_F {
        author = "$STR_RHSUSF_AUTHOR_FULL";
        dlc = "RHS_USAF";
        scope = 1;
        class SimpleObject {
            eden = 1;
            animate[] = {};
            hide[] = {};
            verticalOffset = 0;
            verticalOffsetWorld = 0;
            init = "''";
        };
        displayName = "Jerry Can";
        icon = "iconObject_5x2";
        editorSubcategory = "EdSubcat_Tools";
    };
    class rhsusf_props_ScepterMFC_Base: rhsusf_props_JerryCan_Base {
        displayName = "Jerry Can (Fuel)";
        model = "\rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\ScepterMFC_20L.p3d";
        hiddenSelections[] = {"camo_fc"};
        hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa"};
    };
    class rhsusf_props_ScepterMWC_Base: rhsusf_props_JerryCan_Base {
        displayName = "Jerry Can (Water)";
        model = "\rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\ScepterMWC_20L.p3d";
        hiddenSelections[] = {"camo_wc"};
        hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa"};
    };
    class rhsusf_props_ScepterMFC_OD: rhsusf_props_ScepterMFC_Base {
        author = "$STR_RHSUSF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        displayName = "Jerry Can (Fuel/Olive)";
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_props_ScepterMFC_OD.paa";
        hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa"};
    };
    class rhsusf_props_ScepterMFC_D: rhsusf_props_ScepterMFC_Base {
        author = "$STR_RHSUSF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        displayName = "Jerry Can (Fuel/Tan)";
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_props_ScepterMFC_D.paa";
        hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa"};
    };
    class rhsusf_props_ScepterMWC_OD: rhsusf_props_ScepterMWC_Base {
        author = "$STR_RHSUSF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        displayName = "Jerry Can (Water/Olive)";
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_props_ScepterMWC_OD.paa";
        hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa"};
    };
    class rhsusf_props_ScepterMWC_D: rhsusf_props_ScepterMWC_Base {
        author = "$STR_RHSUSF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        displayName = "Jerry Can (Water/Tan)";
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_props_ScepterMWC_D.paa";
        hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa"};
    };
};
