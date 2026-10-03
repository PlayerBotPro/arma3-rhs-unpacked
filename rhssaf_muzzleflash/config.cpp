class CfgPatches {
    class rhssaf_muzzleflash {
        units[] = {};
        weapons[] = {};
        name = "RHS: SAF muzzleflashes";
        requiredVersion = 2;
        requiredAddons[] = {
            "A3_data_f",
            "rhssaf_c_weapons",
            "rhs_muzzleflash",
            "rhsusf_muzzleflash",
            "rhs_weapons3"
        };
        author = "$STR_RHSSAF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
        versionDesc = "RHS";
        version = "VERSION";
        text = "QUOTE(RHS_TAG VERSION)";
    };
};
class CfgAddons {
    class PreloadBanks {};
    class PreloadAddons {
        class RHS_SAF {
            list[] = {"rhssaf_muzzleflash"};
        };
    };
};
