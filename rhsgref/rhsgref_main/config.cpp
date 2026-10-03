class CfgPatches {
    class rhsgref_main {
        units[] = {"rhs_Flag_chdkz", "rhs_Flag_Insurgents"};
        weapons[] = {};
        requiredVersion = 1.7;
        requiredAddons[] = {"rhs_main_loadorder", "rhsusf_main_loadorder"};
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
        authorUrl = "http://www.rhsmods.org/";
        versionDesc = "RHS";
        version = "0.4.1.1359";
        text = "QUOTE(RHS0.4.1.1359)";
    };
};
class CfgAddons {
    class PreloadAddons {
        class RHS_GREF {
            list[] = {
                "rhsgref_main",
                "rhsgref_main_loadorder",
                "rhsgref_muzzleflash",
                "rhsgref_c_weapons",
                "rhsgref_c_airweapons",
                "rhsgref_c_a2port_armor",
                "rhsgref_c_air",
                "rhsgref_c_tohport_air",
                "rhsgref_c_weapons",
                "rhsgref_c_radio",
                "rhsgref_c_troops",
                "rhsgref_c_vehicles_ret",
                "rhsgref_c_a29",
                "rhsgref_c_canoe",
                "rhsgref_c_radar"
            };
        };
    };
};
class CfgMods {
    class Mod_Base;
    class RHS_GREF: Mod_Base {
        author = "$STR_RHS_AUTHOR_FULL";
        picture = "\rhsgref\addons\rhsgref_main\data\rhs_logo_ca.paa";
        logo = "\rhsgref\addons\rhsgref_main\data\rhs_logo_ca.paa";
        logoOver = "\rhsgref\addons\rhsgref_main\data\rhs_logo_ca.paa";
        logoSmall = "\rhsgref\addons\rhsgref_main\data\rhs_logo_ca.paa";
        dlcColor[] = {0, 0, 0, 1};
        fieldManualTopicAndHint[] = {"RHS_GREF", "RHS_GREF_MAIN"};
        hideName = 1;
        hidePicture = 0;
        tooltip = "RHS: GREF";
        tooltipOwned = "RHS: GREF";
        name = "RHS: GREF";
        overview = "Insurgent forces brought to Arma 3 in full glory!";
        action = "http://www.rhsmods.org/";
        dir = "rhsgref";
    };
    class RHSGREF: RHS_GREF {};
    class RHSGREFDEV: RHS_GREF {
        picture = "\rhsgref\addons\rhsgref_main\data\rhsdev_logo_ca.paa";
        logo = "\rhsgref\addons\rhsgref_main\data\rhsdev_logo_ca.paa";
        logoOver = "\rhsgref\addons\rhsgref_main\data\rhsdev_logo_ca.paa";
        logoSmall = "\rhsgref\addons\rhsgref_main\data\rhsdev_logo_ca.paa";
        tooltip = "RHS: GREF Development Version";
        tooltipOwned = "RHS: GREF Development Version";
        name = "RHS: GREF Development Version";
        overview = "Development version, please report bugs to http://feedback.rhsmods.org/view_all_bug_page.php";
    };
};
class CfgVehicles {
    class FlagCarrierCore;
    class rhs_FlagCarrier: FlagCarrierCore {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 0;
        scopeCurator = 0;
        displayName = "";
        model = "\rhsgref\addons\rhsgref_vehicles_ret\flag_rebel.p3d";
        icon = "iconObject_circle";
        vehicleClass = "Flag";
        cost = 1000;
        keepHorizontalPlacement = 1;
        accuracy = 1000;
        animated = 0;
        nameSound = "obj_flag";
        supplyRadius = 2;
        hiddenSelections[] = {"vlajka"};
        hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_civ_CO.paa"};
        hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_civ.rvmat"};
    };
    class rhs_Flag_chdkz: rhs_FlagCarrier {
        scope = 2;
        scopeCurator = 2;
        displayName = "CHDKZ Small Flag";
        class EventHandlers {
            class RHS_EventHandlers {
                init = "(_this select 0) setFlagTexture '\rhsgref\addons\rhsgref_main\data\flag_chdkz_co.paa'";
            };
        };
    };
    class rhs_Flag_Insurgents: rhs_FlagCarrier {
        scope = 2;
        scopeCurator = 2;
        displayName = "Insurgents Small Flag";
        class EventHandlers {
            class RHS_EventHandlers {
                init = "(_this select 0) setFlagTexture '\rhsgref\addons\rhsgref_main\data\flag_Insurgents_co.paa'";
            };
        };
    };
};
class CfgMarkers {
    class flag_NATO;
    class rhs_flag_insurgents: flag_NATO {
        name = "Insurgents";
        icon = "\rhsgref\addons\rhsgref_main\data\Flags\flag_NAPA_co.paa";
        texture = "\rhsgref\addons\rhsgref_main\data\Flags\flag_NAPA_co.paa";
    };
};
class CfgFactionClasses {
    class rhsgref_faction_cdf_ground {
        displayName = "$STR_RHSGREF_FAC_CDF_GROUND_FORCES";
        priority = -9;
        side = 2;
        icon = "\rhsgref\addons\rhsgref_main\data\Icons\cdf_groundforces_co.paa";
        flag = "\rhsgref\addons\rhsgref_main\data\Flags\flag_cdf_co.paa";
        backpack_tf_faction_radio_api = "tf_bussole";
    };
    class rhsgref_faction_cdf_ground_b: rhsgref_faction_cdf_ground {
        side = 1;
        priority = -19;
    };
    class rhsgref_faction_cdf_air {
        displayName = "$STR_RHSGREF_FAC_CDF_AIR_FORCES";
        priority = -9;
        side = 2;
        icon = "\rhsgref\addons\rhsgref_main\data\Icons\cdf_airforces_co.paa";
        flag = "\rhsgref\addons\rhsgref_main\data\Flags\flag_cdf_co.paa";
        backpack_tf_faction_radio_api = "tf_bussole";
    };
    class rhsgref_faction_cdf_air_b: rhsgref_faction_cdf_air {
        side = 1;
        priority = -19;
    };
    class rhsgref_faction_cdf_ng {
        displayName = "$STR_RHSGREF_FAC_CDF_NATIONAL_GUARD";
        priority = -9;
        side = 2;
        icon = "\rhsgref\addons\rhsgref_main\data\Icons\cdf_paramilitary_co.paa";
        flag = "\rhsgref\addons\rhsgref_main\data\Flags\flag_cdf_co.paa";
        backpack_tf_faction_radio_api = "tf_bussole";
    };
    class rhsgref_faction_cdf_ng_b: rhsgref_faction_cdf_ng {
        side = 1;
        priority = -19;
    };
    class rhsgref_faction_un {
        displayName = "$STR_RHSGREF_FAC_CDF_UNITED_NATIONS";
        priority = -9;
        side = 2;
        icon = "\rhsgref\addons\rhsgref_main\data\Icons\cdf_paramilitary_co.paa";
        flag = "\rhsgref\addons\rhsgref_main\data\Flags\flag_cdf_co.paa";
        backpack_tf_faction_radio_api = "tf_bussole";
    };
    class rhsgref_faction_nationalist {
        displayName = "$STR_RHSGREF_FAC_NAPA";
        priority = -9;
        side = 2;
        icon = "\rhsgref\addons\rhsgref_main\data\Icons\cdf_napa_co.paa";
        flag = "\rhsgref\addons\rhsgref_main\data\Flags\flag_NAPA_co.paa";
        backpack_tf_faction_radio_api = "tf_bussole";
    };
    class rhsgref_faction_chdkz {
        displayName = "$STR_RHSGREF_FAC_CHDKZ";
        priority = -9;
        side = 0;
        icon = "\rhsgref\addons\rhsgref_main\data\Icons\cdf_napa_co.paa";
        flag = "\rhsgref\addons\rhsgref_main\data\flag_chdkz_co.paa";
        backpack_tf_faction_radio_api = "tf_bussole";
    };
    class rhsgref_faction_chdkz_g: rhsgref_faction_chdkz {
        side = 2;
    };
    class rhsgref_faction_hidf {
        displayName = "Horizon Islands Defence Force";
        priority = -9;
        side = 1;
        icon = "\a3\data_f_exp\factionicons\icon_gen_ca.paa";
        flag = "\a3\data_f_exp\flags\flag_tanoa_co.paa";
        backpack_tf_faction_radio_api = "tf_bussole";
    };
    class rhsgref_faction_tla {
        displayName = "Tanoan Liberation Army";
        priority = -9;
        side = 0;
        icon = "";
        flag = "";
        backpack_tf_faction_radio_api = "tf_bussole";
    };
    class rhsgref_faction_tla_g: rhsgref_faction_tla {
        side = 2;
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class t72_flag_init {
                file = "\rhsafrf\addons\rhs_c_cti_indep\scripts\rhs_t72_flag_init.sqf";
                description = "Independent T-72 flag init";
            };
        };
    };
};
class CfgVehicleClasses {
    class rhs_vehclass_apc {
        displayname = "$STR_RHSGREF_VEHCLASS_APC";
    };
    class rhs_vehclass_ifv {
        displayname = "$STR_RHSGREF_VEHCLASS_IFV";
    };
    class rhs_vehclass_car {
        displayname = "$STR_RHSGREF_VEHCLASS_CAR";
    };
    class rhs_vehclass_mrap {
        displayname = "$STR_RHSGREF_VEHCLASS_MRAP";
    };
    class rhs_vehclass_truck {
        displayname = "$STR_RHSGREF_VEHCLASS_TRUCK";
    };
    class rhs_vehclass_tank {
        displayname = "$STR_RHSGREF_VEHCLASS_TANK";
    };
    class rhs_vehclass_infantry {
        displayname = "$STR_RHSGREF_VEHCLASS_INFANTRY";
    };
    class rhsgref_vehclass_infantry_cdf {
        displayname = "$STR_RHSGREF_VEHCLASS_INFANTRY_CDF";
    };
    class rhsgref_vehclass_infantry_para {
        displayname = "$STR_RHSGREF_VEHCLASS_INFANTRY_PARA";
    };
    class rhsgref_vehclass_infantry_militia {
        displayname = "$STR_RHSGREF_VEHCLASS_INFANTRY_MILITIA";
    };
    class rhsgref_vehclass_infantry_paramil {
        displayname = "$STR_RHSGREF_VEHCLASS_INFANTRY_PARAMIL";
    };
    class rhsgref_vehclass_infantry_recon {
        displayname = "$STR_RHSGREF_VEHCLASS_INFANTRY_RECON";
    };
    class rhs_vehclass_artillery {
        displayname = "$STR_RHSGREF_VEHCLASS_ARTILLERY";
    };
    class rhs_vehclass_launcher {
        displayname = "$STR_RHSGREF_VEHCLASS_LAUNCHER";
    };
    class rhs_vehclass_aircraft {
        displayname = "$STR_RHSGREF_VEHCLASS_AIRPLANE";
    };
    class rhs_vehclass_helicopter {
        displayname = "$STR_RHSGREF_VEHCLASS_HELICOPTER";
    };
    class rhs_vehclass_aa {
        displayname = "$STR_RHSGREF_VEHCLASS_AA";
    };
};
class CfgEditorSubcategories {
    class rhs_EdSubcat_apc {
        displayname = "$STR_RHSGREF_VEHCLASS_APC";
    };
    class rhs_EdSubcat_ifv {
        displayname = "$STR_RHSGREF_VEHCLASS_IFV";
    };
    class rhs_EdSubcat_car {
        displayname = "$STR_RHSGREF_VEHCLASS_CAR";
    };
    class rhs_EdSubcat_truck {
        displayname = "$STR_RHSGREF_VEHCLASS_TRUCK";
    };
    class rhs_EdSubcat_mrap {
        displayname = "$STR_RHSGREF_VEHCLASS_MRAP";
    };
    class rhs_EdSubcat_tank {
        displayname = "$STR_RHSGREF_VEHCLASS_TANK";
    };
    class rhsgref_EdSubcat_infantry {
        displayname = "$STR_RHSGREF_VEHCLASS_INFANTRY";
    };
    class rhsgref_EdSubcat_infantry_cdf {
        displayname = "$STR_RHSGREF_VEHCLASS_INFANTRY_CDF";
    };
    class rhsgref_EdSubcat_infantry_para {
        displayname = "$STR_RHSGREF_VEHCLASS_INFANTRY_PARA";
    };
    class rhsgref_EdSubcat_infantry_militia {
        displayname = "$STR_RHSGREF_VEHCLASS_INFANTRY_MILITIA";
    };
    class rhsgref_EdSubcat_infantry_paramil {
        displayname = "$STR_RHSGREF_VEHCLASS_INFANTRY_PARAMIL";
    };
    class rhsgref_EdSubcat_infantry_recon {
        displayname = "$STR_RHSGREF_VEHCLASS_INFANTRY_RECON";
    };
    class rhs_EdSubcat_artillery {
        displayname = "$STR_RHSGREF_VEHCLASS_ARTILLERY";
    };
    class rhs_EdSubcat_launcher {
        displayname = "$STR_RHSGREF_VEHCLASS_LAUNCHER";
    };
    class rhs_EdSubcat_aircraft {
        displayname = "$STR_RHSGREF_VEHCLASS_AIRPLANE";
    };
    class rhs_EdSubcat_helicopter {
        displayname = "$STR_RHSGREF_VEHCLASS_HELICOPTER";
    };
    class rhs_EdSubcat_aa {
        displayname = "$STR_RHSGREF_VEHCLASS_AA";
    };
};
