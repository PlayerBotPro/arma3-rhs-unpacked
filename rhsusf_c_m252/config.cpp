class CfgPatches {
    class rhsusf_c_m252 {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {"rhsusf_c_statics"};
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class DefaultEventhandlers;
class Mode_SemiAuto;
class Mode_Burst;
class CfgVehicles {
    class ThingX;
    class LandVehicle;
    class StaticWeapon: LandVehicle {
        class Turrets {
            class MainTurret;
        };
    };
    class StaticMortar: StaticWeapon {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class ViewOptics;
            };
        };
    };
    class Mortar_01_base_F: StaticMortar {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class ViewOptics;
            };
        };
    };
    class B_Mortar_01_F: Mortar_01_base_F {};
    class Arty_Optic_Base: ThingX {
        author = "$STR_RHSUSF_AUTHOR_FULL";
    };
    class ammocase_Base: ThingX {
        scope = 1;
        scopeCurator = 1;
        dlc = "RHS_USAF";
        model = "";
        vehicleClass = "rhs_vehclass_artillery";
        editorSubcategory = "rhs_EdSubcat_artillery";
    };
    class 81mm_mortar_case_single: ammocase_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "Mortar Ammo Case";
        model = "\rhsusf\addons\rhsusf_m252\rhs_81case_single_small";
    };
    class 81mm_mortar_case_quad: ammocase_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "Mortar Ammo Case";
        model = "\rhsusf\addons\rhsusf_m252\rhs_81case_quad_small";
    };
    class rhs_mortar_M67: Arty_Optic_Base {
        displayName = "M67 Mortar Sight";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        dlc = "RHS_USAF";
        model = "\rhsusf\addons\rhsusf_m252\rhs_m67_sightunit";
        vehicleClass = "rhs_vehclass_artillery";
        editorSubcategory = "rhs_EdSubcat_artillery";
    };
    class rhs_mortar_M821_inv: ammocase_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "M821 Mortar Round";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        dlc = "RHS_USAF";
        model = "\rhsusf\addons\rhsusf_m252\rhs_m821_he_inv";
        vehicleClass = "rhs_vehclass_artillery";
        editorSubcategory = "rhs_EdSubcat_artillery";
    };
};
