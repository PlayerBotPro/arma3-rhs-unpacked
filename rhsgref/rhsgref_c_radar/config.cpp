class DefaultEventhandlers;
class CfgPatches {
    class rhsgref_c_radar {
        units[] = {"rhsgref_serhat_radar", "rhsgref_serhat_radar_d"};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {"rhsgref_main"};
        name = "RHS GREF Radar";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class CfgVehicles {
    class NonStrategic;
    class rhsgref_serhat_radar: NonStrategic {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_serhat_radar.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        dlc = "RHS_GREF";
        mapSize = 4.02;
        scope = 2;
        scopeCurator = 2;
        displayName = "SERHAT Radar (Woodland)";
        model = "rhsgref\addons\rhsgref_radar\rhs_serhat_radar.p3d";
        icon = "iconObject_5x2";
        editorCategory = "EdCat_Things";
        editorSubcategory = "EdSubcat_Military";
        vehicleClass = "Military";
        destrType = "DestructNo";
        class AnimationSources {};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_radar\data\serhat_radar_co.paa"};
    };
    class rhsgref_serhat_radar_d: rhsgref_serhat_radar {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_serhat_radar.paa";
        displayName = "SERHAT Radar (Desert)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_radar\data\serhat_radar_d_co.paa"};
    };
};
