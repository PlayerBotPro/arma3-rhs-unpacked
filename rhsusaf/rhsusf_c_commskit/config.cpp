class CfgPatches {
    class rhsusf_c_commskit {
        units[] = {"rhsusf_props_anprc152", "Item_rhsusf_radio_anprc152"};
        weapons[] = {"rhsusf_radio_anprc152"};
        requiredVersion = 0.1;
        requiredAddons[] = {"rhsusf_c_troops"};
        name = "Combat Net Radio System";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class CfgVehicleClasses {
    class RHSUSF_CNR {
        displayName = "Combat Net Radio";
    };
};
class CfgVehicles {
    class Building;
    class Thing;
    class Item_Base_F;
    class cnr_base_obj: Thing {
        dlc = "RHS_USAF";
        author = "Feint";
        scope = 1;
        accuracy = 0.3;
        vehicleClass = "RHSUSF_CNR";
        simulation = "thingX";
        nameSound = "";
        model = "\rhsusf\addons\rhsusf_commskit\RHS_ANPRC152.p3d";
        displayName = "AN/PRC-152";
        class DestructionEffects {};
        armor = 450;
        cost = 0;
        class EventHandlers;
    };
    class rhsusf_props_anprc152: cnr_base_obj {
        author = "$STR_RHSUSF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        dlc = "RHS_USAF";
        model = "\rhsusf\addons\rhsusf_commskit\RHS_ANPRC152.p3d";
        displayName = "AN/PRC-152";
    };
    class Item_rhsusf_radio_anprc152: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "AN/PRC-152";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        vehicleClass = "Items";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_InventoryItems";
        model = "\A3\Weapons_f\dummyweapon.p3d";
        class TransportItems {
            class rhsusf_radio_anprc152 {
                name = "rhsusf_radio_anprc152";
                count = 1;
            };
        };
    };
};
class CfgWeapons {
    class ItemCore;
    class ItemRadio: ItemCore {
        class ItemInfo;
    };
    class rhsusf_radio_anprc152: ItemRadio {
        author = "$STR_RHSUSF_AUTHOR_FULL";
        dlc = "RHS_USAF";
        model = "\rhsusf\addons\rhsusf_commskit\RHS_ANPRC152.p3d";
        displayName = "AN/PRC-152";
        class ItemInfo: ItemInfo {
            mass = 10.74;
        };
    };
};
