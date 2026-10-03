class CfgPatches {
    class rhsusf_c_statics {
        units[] = {
            "RHS_M2StaticMG_D",
            "RHS_M2StaticMG_WD",
            "RHS_M2StaticMG_USMC_D",
            "RHS_M2StaticMG_USMC_WD",
            "RHS_M2StaticMG_MiniTripod_D",
            "RHS_M2StaticMG_MiniTripod_WD",
            "RHS_M2StaticMG_MiniTripod_USMC_D",
            "RHS_M2StaticMG_MiniTripod_USMC_WD",
            "RHS_MK19_TriPod_D",
            "RHS_MK19_TriPod_WD",
            "RHS_MK19_TriPod_USMC_D",
            "RHS_MK19_TriPod_USMC_WD",
            "RHS_TOW_TriPod_D",
            "RHS_TOW_TriPod_WD",
            "RHS_TOW_TriPod_USMC_D",
            "RHS_TOW_TriPod_USMC_WD",
            "RHS_Stinger_AA_pod_D",
            "RHS_Stinger_AA_pod_WD",
            "RHS_Stinger_AA_pod_USMC_D",
            "RHS_Stinger_AA_pod_USMC_WD",
            "RHS_M252_D",
            "RHS_M252_WD",
            "RHS_M252_USMC_D",
            "RHS_M252_USMC_WD",
            "RHS_M119_D",
            "RHS_M119_WD",
            "RHS_M2_Gun_Bag",
            "RHS_M2_Tripod_Bag",
            "RHS_M2_MiniTripod_Bag",
            "RHS_Mk19_Gun_Bag",
            "RHS_Mk19_Tripod_Bag",
            "rhs_Tow_Gun_Bag",
            "rhs_TOW_Tripod_Bag",
            "rhs_M252_Gun_Bag",
            "rhs_M252_Bipod_Bag"
        };
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {"rhsusf_c_troops", "rhsusf_c_heavyweapons", "rhsusf_main"};
        name = "RHSUSF Static Weapons";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class DefaultEventhandlers;
class Mode_SemiAuto;
class Mode_Burst;
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        RHS_StaticWeapon_GetOut_Low = "amovppnemstpsraswrfldnon";
        RHS_StaticWeapon_GetOut_Medium = "amovpknlmstpsraswrfldnon";
        RHSUSF_LowTripod_Gunner = "RHSUSF_LowTripod_Gunner";
        RHS_M2_Gunner = "RHS_M2_Gunner";
        RHS_M119_Commander = "RHS_M119_Commander";
        RHS_M119_Gunner = "RHS_M119_Gunner";
        RHS_M119_Cargo = "RHS_M119_Cargo";
        RHS_TOW_Gunner = "RHS_TOW_Gunner";
        RHS_Stinger_Gunner = "RHS_Stinger_Gunner";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class RHSUSF_LowTripod_Gunner: Crew {
            file = "rhsusf\addons\rhsusf_heavyweapons\Anim\LowTripod_Gunner.rtm";
            connectTo[] = {"Static_Dead", 1};
            leftHandIKBeg = 1;
            leftHandIKCurve[] = {1};
            leftHandIKEnd = 1;
            rightHandIKCurve[] = {1};
            righHandIKBeg = 1;
            righHandIKEnd = 1;
            collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
        };
        class RHS_M2_Gunner: RHSUSF_LowTripod_Gunner {
            file = "rhsusf\addons\rhsusf_heavyweapons\Anim\M2_Gunner.rtm";
            collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Idle.p3d";
        };
        class RHS_M119_Commander: RHSUSF_LowTripod_Gunner {
            file = "rhsusf\addons\rhsusf_heavyweapons\Anim\M119_Commander.rtm";
        };
        class RHS_M119_Gunner: RHSUSF_LowTripod_Gunner {
            file = "rhsusf\addons\rhsusf_heavyweapons\Anim\M119_Gunner.rtm";
        };
        class RHS_M119_Cargo: RHSUSF_LowTripod_Gunner {
            file = "rhsusf\addons\rhsusf_heavyweapons\Anim\M119_Cargo.rtm";
        };
        class RHS_TOW_Gunner: RHSUSF_LowTripod_Gunner {
            file = "rhsusf\addons\rhsusf_heavyweapons\Anim\TOW_Gunner.rtm";
        };
        class RHS_Stinger_Gunner: RHSUSF_LowTripod_Gunner {
            file = "rhsusf\addons\rhsusf_heavyweapons\Anim\Stinger_Gunner.rtm";
        };
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class Functions {
            class fired_StingerAA {
                file = "\rhsusf\addons\rhsusf_c_statics\scripts\rhs_stinger_aa_fired.sqf";
                description = "AINET smart fuse for HE-FRAG rounds";
            };
            class fired_m119 {
                file = "\rhsusf\addons\rhsusf_c_statics\scripts\rhs_m119_fired.sqf";
                description = "AINET smart fuse for HE-FRAG rounds";
            };
            class m119_fold {
                file = "\rhsusf\addons\rhsusf_c_statics\scripts\rhs_m119_fold.sqf";
                description = "fold/unfold m119 arty";
            };
        };
    };
};
class RHS_UserAction_Towing_Detach {
    displayNameDefault = "<img image='\rhsusf\addons\rhsusf_main\data\actions\rhs_tow_detach_ca.paa' size='3.5' />";
    displayName = "<img image='\rhsusf\addons\rhsusf_main\data\actions\rhs_tow_detach_ca.paa' size='1.5' /> <t color='#00FF7F'>Detach vehicle</t>";
    position = "";
    radius = 2.5;
    onlyForplayer = 1;
    priority = 15;
    showWindow = 1;
    condition = "(alive this) && {speed this < 3}  && {this getVariable ['rhs_towing_detach',true]}";
    statement = "[this] spawn rhs_fnc_towing_detach;";
};
class RHS_UserAction_Towing_Attach {
    displayNameDefault = "<img image='\rhsusf\addons\rhsusf_main\data\actions\rhs_tow_attach_ca.paa' size='3.5' />";
    displayName = "<img image='\rhsusf\addons\rhsusf_main\data\actions\rhs_tow_attach_ca.paa' size='1.5' /> <t color='#00FF7F'>Select towing vehicle</t>";
    position = "";
    radius = 2.5;
    onlyForplayer = 1;
    priority = 15;
    showWindow = 1;
    condition = "(alive this) && (this  animationPhase 'Unfold' == 1) && {this getVariable ['rhs_towing_enabled',true]}";
    statement = "[this] call rhs_fnc_towing_selectVehicle";
};
class RHS_UserAction_Towing_Drag {
    displayNameDefault = "<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\ladderup_ca.paa' size='2.5' />";
    displayName = "<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\ladderup_ca.paa' /> <t color='#00FF7F'>Drag heavy weapon</t>";
    position = "";
    radius = 1.5;
    onlyForplayer = 1;
    priority = 15;
    showWindow = 1;
    condition = "(alive this) && (this  animationPhase 'Unfold' == 1) && {this getVariable ['rhs_towing_enabled',true]}";
    statement = "[this] call rhs_fnc_towing_drag";
};
class CfgVehicles {
    class LandVehicle;
    class StaticWeapon: LandVehicle {
        class Turrets {
            class MainTurret;
        };
        class ViewOptics;
        class EventHandlers;
        class ViewPilot;
        class VehicleTransport {
            class Cargo {
                canBeTransported = 0;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
        };
    };
    class StaticMGWeapon: StaticWeapon {};
    class StaticATWeapon: StaticWeapon {};
    class StaticAAWeapon: StaticWeapon {};
    class StaticCannon: StaticWeapon {
        class ViewOptics;
    };
    class StaticGrenadeLauncher: StaticWeapon {
        class ViewOptics;
    };
    class StaticMortar: StaticWeapon {};
    class Helicopter;
    class Helicopter_Base_F: Helicopter {
        class EventHandlers;
    };
    class RHS_TowedWeapons_Base: Helicopter_Base_F {
        simulation = "helicopterX";
        destrType = "DestructDefault";
        armor = 80;
        armorStructural = 50;
        epeImpulseDamageCoef = 1;
        gearRetracting = 1;
        hasDriver = 0;
        secondaryExplosion = 0;
        fuelExplosionPower = 0;
        disableInventory = 1;
        class Hitpoints {};
        class Reflectors {};
        class Turrets {};
        class UserActions {
            class Detach: RHS_UserAction_Towing_Detach {};
        };
        class EventHandlers: EventHandlers {
            killed = "_this call rhs_fnc_towing_destroyed";
        };
    };
    class RHS_FakeCarrier: StaticWeapon {
        scope = 1;
        model = "\rhsafrf\addons\rhs_heavyweapons\data\rhs_fakeTow";
        accuracy = 1000;
        hiddenSelections[] = {"Camo_1"};
        class Turrets {};
        class RHS_TowingSystem {
            class Carrier {
                rhs_maxCargoMass = 9999;
                rhs_attachPoint = "";
                rhs_attachPointPos[] = {0, 0, 0};
            };
        };
    };
    class rhs_m2staticmg_base: StaticMGWeapon {
        dlc = "RHS_USAF";
        model = "\rhsusf\addons\rhsusf_heavyweapons\m2_mg";
        picture = "\rhsusf\addons\rhsusf_heavyweapons\data\ico\RHS_M2StaticMG_D_ca.paa";
        icon = "\rhsusf\addons\rhsusf_heavyweapons\data\map_ico\icomap_M2_CA.paa";
        mapSize = 3;
        sensorPosition = "gunnerView";
        class Hitpoints {
            class HitHull {
                armor = 1;
                passThrough = 1;
                name = "telo";
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_heavyweapons\data\m2_stojan.rvmat",
                "rhsusf\addons\rhsusf_heavyweapons\data\m2_stojan.rvmat",
                "rhsusf\addons\rhsusf_heavyweapons\data\static_destroyed.rvmat",
                "a3\soft_f\offroad_01\data\m2.rvmat",
                "a3\soft_f\offroad_01\data\m2.rvmat",
                "rhsusf\addons\rhsusf_heavyweapons\data\static_destroyed.rvmat"
            };
        };
        displayName = "M2HB (M3 AA)";
        class ViewPilot: ViewPilot {
            initAngleX = -0;
            initAngleY = 0;
            initFov = 0.9;
            minFov = 0.25;
            maxFov = 1.25;
            minAngleX = -65;
            maxAngleX = 85;
            minAngleY = -150;
            maxAngleY = 150;
            minMoveX = -0.075;
            maxMoveX = 0.075;
            minMoveY = -0.075;
            maxMoveY = 0.075;
            minMoveZ = -0.075;
            maxMoveZ = 0.1;
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                optics = 1;
                turretInfoType = "RHS_RscWeaponZeroing";
                discreteDistance[] = {
                    100,
                    200,
                    300,
                    400,
                    500,
                    600,
                    800,
                    1000,
                    1200,
                    1500
                };
                discreteDistanceInitIndex = 2;
                gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                animationSourceStickX = "MainTurret_Inertia";
                animationSourceStickY = "MainGun_Inertia";
                gunnerLeftHandAnimName = "otochlaven_shake";
                gunnerRightHandAnimName = "otochlaven_shake";
                gunnerLeftLegAnimName = "leg_left";
                gunnerRightLegAnimName = "leg_right";
                selectionFireAnim = "zasleh";
                minElev = -20;
                minTurn = -180;
                maxTurn = 180;
                weapons[] = {"RHS_M2"};
                magazines[] = {
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red"
                };
                gunnerAction = "RHS_M2_Gunner";
                disableSoundAttenuation = 1;
            };
        };
        class AnimationSources {
            class ReloadAnim {
                source = "reload";
                weapon = "RHS_M2";
            };
            class ReloadMagazine {
                source = "reloadmagazine";
                weapon = "RHS_M2";
            };
            class Revolving {
                source = "revolving";
                weapon = "RHS_M2";
            };
            class muzzleHMG_ROT: ReloadAnim {
                source = "ammorandom";
            };
        };
        armorStructural = 10;
        class assembleInfo {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {"RHS_M2_Gun_Bag", "RHS_M2_Tripod_Bag"};
            displayName = "";
        };
    };
    class RHS_M2StaticMG_MiniTripod_base: rhs_m2staticmg_base {
        displayName = "M2HB (M3)";
        model = "\rhsusf\addons\rhsusf_heavyweapons\m2_mg2";
        picture = "\rhsusf\addons\rhsusf_heavyweapons\data\ico\RHS_M2StaticMG_MiniTripod_D_ca.paa";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                initturn = 0;
                maxturn = 90;
                minturn = -90;
                gunnerAction = "RHSUSF_LowTripod_Gunner";
                gunnerGetInAction = "RHS_StaticWeapon_GetOut_Medium";
                gunnerGetOutAction = "RHS_StaticWeapon_GetOut_Medium";
            };
        };
        class assembleInfo {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {"RHS_M2_Gun_Bag", "RHS_M2_MiniTripod_Bag"};
            displayName = "";
        };
    };
    class RHS_M2StaticMG_D: rhs_m2staticmg_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_M2StaticMG_D.paa";
        scope = 2;
        side = 1;
        author = "RHS (A2 port)";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_rifleman";
        typicalCargo[] = {"rhsusf_army_ocp_rifleman"};
    };
    class RHS_M2StaticMG_MiniTripod_D: RHS_M2StaticMG_MiniTripod_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_M2StaticMG_MiniTripod_D.paa";
        scope = 2;
        side = 1;
        author = "RHS (A2 port)";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_rifleman";
        typicalCargo[] = {"rhsusf_army_ocp_rifleman"};
    };
    class RHS_M2StaticMG_WD: rhs_m2staticmg_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_M2StaticMG_WD.paa";
        scope = 2;
        side = 1;
        author = "RHS (A2 port)";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_rifleman";
        typicalCargo[] = {"rhsusf_army_ucp_rifleman"};
    };
    class RHS_M2StaticMG_MiniTripod_WD: RHS_M2StaticMG_MiniTripod_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_M2StaticMG_MiniTripod_WD.paa";
        scope = 2;
        side = 1;
        author = "RHS (A2 port)";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_rifleman";
        typicalCargo[] = {"rhsusf_army_ucp_rifleman"};
    };
    class RHS_M2StaticMG_USMC_D: rhs_m2staticmg_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_M2StaticMG_USMC_D.paa";
        scope = 2;
        side = 1;
        author = "RHS (A2 port)";
        faction = "rhs_faction_usmc_d";
        crew = "rhsusf_usmc_marpat_d_rifleman";
        typicalCargo[] = {"rhsusf_usmc_marpat_d_rifleman"};
    };
    class RHS_M2StaticMG_MiniTripod_USMC_D: RHS_M2StaticMG_MiniTripod_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_M2StaticMG_MiniTripod_USMC_D.paa";
        scope = 2;
        side = 1;
        author = "RHS (A2 port)";
        faction = "rhs_faction_usmc_d";
        crew = "rhsusf_usmc_marpat_d_rifleman";
        typicalCargo[] = {"rhsusf_usmc_marpat_d_rifleman"};
    };
    class RHS_M2StaticMG_USMC_WD: rhs_m2staticmg_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_M2StaticMG_USMC_WD.paa";
        scope = 2;
        side = 1;
        author = "RHS (A2 port)";
        faction = "rhs_faction_usmc_wd";
        crew = "rhsusf_usmc_marpat_wd_rifleman";
        typicalCargo[] = {"rhsusf_usmc_marpat_wd_rifleman"};
    };
    class RHS_M2StaticMG_MiniTripod_USMC_WD: RHS_M2StaticMG_MiniTripod_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_M2StaticMG_MiniTripod_USMC_WD.paa";
        scope = 2;
        side = 1;
        author = "RHS (A2 port)";
        faction = "rhs_faction_usmc_wd";
        crew = "rhsusf_usmc_marpat_wd_rifleman";
        typicalCargo[] = {"rhsusf_usmc_marpat_wd_rifleman"};
    };
    class RHS_MK19_TriPod_base: StaticGrenadeLauncher {
        dlc = "RHS_USAF";
        displayName = "Mk19 (M3)";
        model = "\rhsusf\addons\rhsusf_heavyweapons\Mk19_minitripod\mk19_stat";
        picture = "\rhsusf\addons\rhsusf_heavyweapons\data\ico\RHS_MK19_TriPod_D_ca.paa";
        icon = "\rhsusf\addons\rhsusf_heavyweapons\data\map_ico\icomap_mk19_stat_CA.paa";
        mapSize = 2.5;
        sensorPosition = "gunnerView";
        class Hitpoints {
            class HitHull {
                armor = 1;
                passThrough = 1;
                name = "telo";
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_heavyweapons\data\m2_stojan.rvmat",
                "rhsusf\addons\rhsusf_heavyweapons\data\m2_stojan.rvmat",
                "rhsusf\addons\rhsusf_heavyweapons\data\static_destroyed.rvmat",
                "rhsusf\addons\rhsusf_heavyweapons\mk19_minitripod\data\weaponmount_mk64_paint.rvmat",
                "rhsusf\addons\rhsusf_heavyweapons\mk19_minitripod\data\weaponmount_mk64_paint.rvmat",
                "rhsusf\addons\rhsusf_heavyweapons\data\static_destroyed.rvmat",
                "rhsusf\addons\rhsusf_heavyweapons\mk19_minitripod\data\mk19.rvmat",
                "rhsusf\addons\rhsusf_heavyweapons\mk19_minitripod\data\mk19.rvmat",
                "rhsusf\addons\rhsusf_heavyweapons\data\static_destroyed.rvmat"
            };
        };
        class ViewPilot: ViewPilot {
            initAngleX = -0;
            initAngleY = 0;
            initFov = 0.9;
            minFov = 0.25;
            maxFov = 1.25;
            minAngleX = -65;
            maxAngleX = 85;
            minAngleY = -150;
            maxAngleY = 150;
            minMoveX = -0.075;
            maxMoveX = 0.075;
            minMoveY = -0.075;
            maxMoveY = 0.075;
            minMoveZ = -0.075;
            maxMoveZ = 0.1;
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerLeftHandAnimName = "otochlaven";
                gunnerRightHandAnimName = "otochlaven";
                gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                minElev = -10;
                minTurn = -90;
                maxTurn = 90;
                initTurn = 0;
                turretInfoType = "RHS_RscWeaponZeroing";
                discreteDistance[] = {
                    300,
                    400,
                    500,
                    600,
                    700,
                    800,
                    900,
                    1000,
                    1100,
                    1200,
                    1300,
                    1400,
                    1500
                };
                discreteDistanceInitIndex = 0;
                weapons[] = {"RHS_MK19"};
                magazines[] = {
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1"
                };
                gunnerAction = "RHSUSF_LowTripod_Gunner";
                gunnerGetInAction = "RHS_StaticWeapon_GetOut_Medium";
                gunnerGetOutAction = "RHS_StaticWeapon_GetOut_Medium";
                disableSoundAttenuation = 1;
            };
        };
        class AnimationSources {
            class belt_rotation {
                source = "reload";
                weapon = "RHS_MK19";
            };
            class ReloadMagazine {
                source = "reloadmagazine";
                weapon = "RHS_MK19";
            };
            class Revolving {
                source = "revolving";
                weapon = "RHS_MK19";
            };
        };
        class assembleInfo {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {"RHS_Mk19_Gun_Bag", "RHS_Mk19_Tripod_Bag"};
            displayName = "";
        };
    };
    class RHS_MK19_TriPod_D: RHS_MK19_TriPod_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_MK19_TriPod_D.paa";
        scope = 2;
        side = 1;
        author = "RHS (A2 port)";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_rifleman";
        typicalCargo[] = {"rhsusf_army_ocp_rifleman"};
    };
    class RHS_MK19_TriPod_WD: RHS_MK19_TriPod_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_MK19_TriPod_WD.paa";
        scope = 2;
        side = 1;
        author = "RHS (A2 port)";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_rifleman";
        typicalCargo[] = {"rhsusf_army_ucp_rifleman"};
    };
    class RHS_MK19_TriPod_USMC_D: RHS_MK19_TriPod_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_MK19_TriPod_USMC_D.paa";
        scope = 2;
        side = 1;
        author = "RHS (A2 port)";
        faction = "rhs_faction_usmc_d";
        crew = "rhsusf_usmc_marpat_d_rifleman";
        typicalCargo[] = {"rhsusf_usmc_marpat_d_rifleman"};
    };
    class RHS_MK19_TriPod_USMC_WD: RHS_MK19_TriPod_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_MK19_TriPod_USMC_WD.paa";
        scope = 2;
        side = 1;
        author = "RHS (A2 port)";
        faction = "rhs_faction_usmc_wd";
        crew = "rhsusf_usmc_marpat_wd_rifleman";
        typicalCargo[] = {"rhsusf_usmc_marpat_wd_rifleman"};
    };
    class RHS_TOW_TriPod_base: StaticATWeapon {
        dlc = "RHS_USAF";
        mapSize = 2.5;
        model = "rhsusf\addons\rhsusf_heavyweapons\TOW\TOW_static";
        picture = "\rhsusf\addons\rhsusf_heavyweapons\data\ico\RHS_TOW_TriPod_D_ca.paa";
        icon = "\rhsusf\addons\rhsusf_heavyweapons\data\map_ico\icomap_tow_static_CA.paa";
        displayname = "$STR_RHS_DN_tow_tripod";
        sensorPosition = "gunnerView";
        class Hitpoints {
            class HitHull {
                armor = 1;
                passThrough = 1;
                name = "telo";
            };
        };
        class ViewPilot: ViewPilot {
            initAngleX = -0;
            initAngleY = 0;
            initFov = 0.9;
            minFov = 0.25;
            maxFov = 1.25;
            minAngleX = -65;
            maxAngleX = 85;
            minAngleY = -150;
            maxAngleY = 150;
            minMoveX = -0.075;
            maxMoveX = 0.075;
            minMoveY = -0.075;
            maxMoveY = 0.075;
            minMoveZ = -0.075;
            maxMoveZ = 0.1;
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_heavyweapons\tow\data\tow.rvmat",
                "rhsusf\addons\rhsusf_heavyweapons\tow\data\tow.rvmat",
                "rhsusf\addons\rhsusf_heavyweapons\data\static_destroyed.rvmat",
                "rhsusf\addons\rhsusf_heavyweapons\tow\data\tow_tripod.rvmat",
                "rhsusf\addons\rhsusf_heavyweapons\tow\data\tow_tripod.rvmat",
                "rhsusf\addons\rhsusf_heavyweapons\data\static_destroyed.rvmat"
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerOpticsEffect[] = {"TankGunnerOptics2", "OpticsBlur1", "OpticsCHAbera1"};
                minElev = -10;
                minturn = -180;
                maxturn = 180;
                weapons[] = {"Rhs_weap_TOW_Launcher_static"};
                magazines[] = {
                    "rhs_mag_TOW2A",
                    "rhs_mag_TOW2A",
                    "rhs_mag_TOW2A",
                    "rhs_mag_TOW2bb"
                };
                gunnerAction = "rhs_TOW_Gunner";
                gunnerGetInAction = "RHS_StaticWeapon_GetOut_Medium";
                gunnerGetOutAction = "RHS_StaticWeapon_GetOut_Medium";
                gunnerLeftHandAnimName = "handle_Elev2";
                gunnerRightHandAnimName = "handle_Horiz2";
                gunnerLeftLegAnimName = "leg_left";
                gunnerRightLegAnimName = "leg_right";
                animationSourceElevation = "ObsElevation";
                maxHorizontalRotSpeed = 0.25;
                maxVerticalRotSpeed = 0.15;
                disableSoundAttenuation = 1;
                class ViewGunner {
                    initAngleX = 5;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                class OpticsIn {
                    class Wide: ViewOptics {
                        initFov = 0.233333;
                        minFov = 0.233333;
                        maxFov = 0.233333;
                        visionMode[] = {"Normal"};
                        thermalMode[] = {4};
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_heavyweapons\TOW\TOW_optic";
                    };
                    class Narrow: Wide {
                        initFov = 0.0538462;
                        minFov = 0.0538462;
                        maxFov = 0.0538462;
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_heavyweapons\TOW\TOW_optic";
                    };
                    class Wide_TI: Wide {
                        initFov = 0.175;
                        minFov = 0.175;
                        maxFov = 0.175;
                        visionMode[] = {"TI"};
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_heavyweapons\TOW\TOW_TI";
                    };
                    class Narrow_TI: Wide_TI {
                        initFov = 0.0583333;
                        minFov = 0.0583333;
                        maxFov = 0.0583333;
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_heavyweapons\TOW\TOW_TI_Narrow";
                    };
                };
            };
        };
        class assembleInfo {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {"RHS_Tow_Gun_Bag", "RHS_Tow_Tripod_Bag"};
            displayName = "";
        };
        class AnimationSources {
            class revolving {
                source = "revolving";
                weapon = "Rhs_weap_TOW_Launcher_static";
            };
            class ReloadMagazine {
                source = "reloadmagazine";
                weapon = "Rhs_weap_TOW_Launcher_static";
            };
        };
        class RenderTargets {
            class Scope {
                renderTarget = "rendertarget0";
                class CameraView1 {
                    pointPosition = "gunnerview";
                    pointDirection = "gunnerview_dir";
                    renderQuality = 2;
                    renderVisionMode = 4;
                    fov = 0.0538462;
                };
                BBoxes[] = {"PIP_1_TL", "PIP_1_TR", "PIP_1_BL", "PIP_1_BR"};
            };
        };
        class Attributes {
            class TurretElevation {
                displayName = "Turret elevation";
                property = "TurretElevation";
                control = "slider";
                defaultValue = "0";
                expression = "_this elevatePeriscope [[0],_value,true]";
            };
        };
    };
    class RHS_TOW_TriPod_D: RHS_TOW_TriPod_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_TOW_TriPod_D.paa";
        scope = 2;
        side = 1;
        author = "RHS (A2 port)";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_rifleman";
        typicalCargo[] = {"rhsusf_army_ocp_rifleman"};
    };
    class RHS_TOW_TriPod_WD: RHS_TOW_TriPod_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_TOW_TriPod_WD.paa";
        scope = 2;
        side = 1;
        author = "RHS (A2 port)";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_rifleman";
        typicalCargo[] = {"rhsusf_army_ucp_rifleman"};
    };
    class RHS_TOW_TriPod_USMC_D: RHS_TOW_TriPod_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_TOW_TriPod_USMC_D.paa";
        scope = 2;
        side = 1;
        author = "RHS (A2 port)";
        faction = "rhs_faction_usmc_d";
        crew = "rhsusf_usmc_marpat_d_rifleman";
        typicalCargo[] = {"rhsusf_usmc_marpat_d_rifleman"};
    };
    class RHS_TOW_TriPod_USMC_WD: RHS_TOW_TriPod_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_TOW_TriPod_USMC_WD.paa";
        scope = 2;
        side = 1;
        author = "RHS (A2 port)";
        faction = "rhs_faction_usmc_wd";
        crew = "rhsusf_usmc_marpat_wd_rifleman";
        typicalCargo[] = {"rhsusf_usmc_marpat_wd_rifleman"};
    };
    class RHS_Stinger_AA_pod_Base: StaticAAWeapon {
        dlc = "RHS_USAF";
        gunnercansee = "2+4+8+32";
        displayName = "FIM-92F (DMS)";
        threat[] = {0.3, 0.3, 1};
        mapsize = 2.8;
        model = "\rhsusf\addons\rhsusf_heavyweapons\Stinger\FIM92_static";
        picture = "\rhsusf\addons\rhsusf_heavyweapons\data\ico\RHS_Stinger_AA_pod_D_ca.paa";
        icon = "\rhsusf\addons\rhsusf_heavyweapons\Data\map_ico\icomap_FIM92_static_CA.paa";
        memoryPointMissile[] = {"Rocket_2", "Rocket_1"};
        memoryPointMissileDir[] = {"Rocket_2_End", "Rocket_1_End"};
        class Hitpoints {
            class HitHull {
                armor = 1;
                passThrough = 1;
                name = "telo";
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_heavyweapons\stinger\data\stinger_tripod.rvmat",
                "rhsusf\addons\rhsusf_heavyweapons\stinger\data\stinger_tripod.rvmat",
                "rhsusf\addons\rhsusf_heavyweapons\data\static_destroyed.rvmat",
                "rhsusf\addons\rhsusf_weapons\fim92\data\stinger.rvmat",
                "rhsusf\addons\rhsusf_weapons\fim92\data\stinger.rvmat",
                "rhsusf\addons\rhsusf_heavyweapons\data\static_destroyed.rvmat"
            };
        };
        class ViewPilot: ViewPilot {
            initAngleX = -0;
            initAngleY = 0;
            initFov = 0.9;
            minFov = 0.25;
            maxFov = 1.25;
            minAngleX = -65;
            maxAngleX = 85;
            minAngleY = -150;
            maxAngleY = 150;
            minMoveX = -0.075;
            maxMoveX = 0.075;
            minMoveY = -0.075;
            maxMoveY = 0.075;
            minMoveZ = -0.075;
            maxMoveZ = 0.1;
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunneropticseffect[] = {"OpticsCHAbera1", "OpticsBlur2"};
                gunnerOpticsModel = "\rhsusf\addons\rhsusf_heavyweapons\TOW\TOW_TI";
                gunnerLeftHandAnimName = "otochlaven";
                gunnerRightHandAnimName = "otochlaven";
                weapons[] = {"Rhs_weap_stinger_Launcher_static"};
                magazines[] = {
                    "Rhs_mag_2Rnd_stinger",
                    "Rhs_mag_2Rnd_stinger",
                    "Rhs_mag_2Rnd_stinger",
                    "Rhs_mag_2Rnd_stinger",
                    "Rhs_mag_2Rnd_stinger"
                };
                minTurn = -180;
                maxTurn = 180;
                minelev = -10;
                maxelev = 120;
                gunneraction = "rhs_stinger_gunner";
                gunnerReversedGetOut = 1;
                class ViewOptics {
                    initanglex = 0;
                    initangley = 0;
                    initfov = 0.155;
                    maxanglex = 30;
                    maxangley = 100;
                    maxfov = 0.155;
                    minanglex = -30;
                    minangley = -100;
                    minfov = 0.047;
                };
                disableSoundAttenuation = 1;
            };
        };
        class AnimationSources {
            class MagazineReload {
                source = "reloadmagazine";
                weapon = "Rhs_weap_stinger_Launcher_static";
            };
            class Revolving {
                source = "revolving";
                weapon = "Rhs_weap_stinger_Launcher_static";
            };
        };
        class RenderTargets {
            class Scope {
                renderTarget = "rendertarget0";
                class CameraView1 {
                    pointPosition = "gunnerview";
                    pointDirection = "gunnerview_dir";
                    renderQuality = 2;
                    renderVisionMode = 4;
                    fov = 0.0538462;
                };
                BBoxes[] = {"PIP_1_TL", "PIP_1_TR", "PIP_1_BL", "PIP_1_BR"};
            };
        };
        class EventHandlers: EventHandlers {
            class RHSUSF_EventHandlers {
                fired = "_this call rhs_fnc_fired_StingerAA";
            };
        };
    };
    class RHS_Stinger_AA_pod_D: RHS_Stinger_AA_pod_Base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_Stinger_AA_pod_D.paa";
        scope = 2;
        side = 1;
        author = "RHS (A2 port)";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_rifleman";
        typicalCargo[] = {"rhsusf_army_ocp_rifleman"};
    };
    class RHS_Stinger_AA_pod_WD: RHS_Stinger_AA_pod_Base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_Stinger_AA_pod_WD.paa";
        scope = 2;
        side = 1;
        author = "RHS (A2 port)";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_rifleman";
        typicalCargo[] = {"rhsusf_army_ucp_rifleman"};
    };
    class RHS_Stinger_AA_pod_USMC_D: RHS_Stinger_AA_pod_Base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_Stinger_AA_pod_USMC_D.paa";
        scope = 2;
        side = 1;
        author = "RHS (A2 port)";
        faction = "rhs_faction_usmc_d";
        crew = "rhsusf_usmc_marpat_d_rifleman";
        typicalCargo[] = {"rhsusf_usmc_marpat_d_rifleman"};
    };
    class RHS_Stinger_AA_pod_USMC_WD: RHS_Stinger_AA_pod_Base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_Stinger_AA_pod_USMC_WD.paa";
        scope = 2;
        side = 1;
        author = "RHS (A2 port)";
        faction = "rhs_faction_usmc_wd";
        crew = "rhsusf_usmc_marpat_wd_rifleman";
        typicalCargo[] = {"rhsusf_usmc_marpat_wd_rifleman"};
    };
    class RHS_M252_Base: StaticMortar {
        dlc = "RHS_USAF";
        availableForSupportTypes[] = {"Artillery"};
        displayname = "$STR_RHS_DN_m252";
        class Library {
            libTextDesc = "$STR_RHS_LIB_m252";
        };
        vehicleClass = "rhs_vehclass_artillery";
        editorSubcategory = "rhs_EdSubcat_artillery";
        unitInfoType = "RscUnitInfoMortar";
        model = "\rhsusf\addons\rhsusf_m252\rhs_mortar_m252.p3d";
        picture = "\rhsusf\addons\rhsusf_heavyweapons\data\ico\RHS_M252_D_ca.paa";
        icon = "\rhsusf\addons\rhsusf_heavyweapons\data\map_ico\icomap_mortar_m251_CA.paa";
        transportSoldier = 1;
        cargoAction[] = {"Mortar_Gunner"};
        mapSize = 1.5;
        class Hitpoints {
            class HitHull {
                armor = -200;
                minimalHit = -0.1;
                explosionShielding = 0.2;
                name = "hit_hull";
                visual = "zbytek";
                passThrough = 1;
                radius = 0.2;
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class ViewOptics;
                gunnerAction = "Mortar_Gunner";
                gunnerGetInAction = "RHS_StaticWeapon_GetOut_Medium";
                gunnerGetOutAction = "RHS_StaticWeapon_GetOut_Medium";
                turretInfoType = "RHSUSF_gui_optic_mortar";
                gunnerOpticsModel = "\rhsusf\addons\rhsusf_heavyweapons\M119_Howitzer\optika_M119";
                weapons[] = {"rhs_mortar_81mm"};
                magazines[] = {"rhs_12Rnd_m821_HE"};
                cameraDir = "look";
                memoryPointGunnerOptics = "eye";
                elevationMode = 3;
                initCamElev = 0;
                minCamElev = -35;
                maxCamElev = 35;
                initElev = 0;
                initTurn = 0;
                minElev = 0.63;
                maxElev = 40.83;
                minTurn = -180;
                maxTurn = 180;
                usePiP = 2;
                class Hitpoints {};
                disableSoundAttenuation = 1;
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_m252\data\m252.rvmat",
                "rhsusf\addons\rhsusf_m252\data\m252_damage.rvmat",
                "rhsusf\addons\rhsusf_heavyweapons\data\static_destroyed.rvmat",
                "rhsusf\addons\rhsusf_m252\data\m252_chrome.rvmat",
                "rhsusf\addons\rhsusf_m252\data\m252_damage.rvmat",
                "rhsusf\addons\rhsusf_heavyweapons\data\static_destroyed.rvmat"
            };
        };
        htMin = 1;
        htMax = 480;
        afMax = 0;
        mfMax = 0;
        mFact = 1;
        tBody = 100;
        artilleryScanner = 1;
        class assembleInfo {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {"RHS_M252_Gun_Bag", "RHS_M252_Bipod_Bag"};
            displayName = "";
        };
        class Attributes {
            class rhs_ammoslot_1_type {
                displayName = "Ammo slot #1 type";
                tooltip = "Define type of shell for #1 slot [HE rounds]";
                property = "rhs_ammoslot_1_type";
                control = "Combo";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = 0;
                typeName = "STRING";
                class values {
                    class rhs_1Rnd_m821_HE {
                        name = "He-FRAG M821";
                        value = "rhs_1Rnd_m821_HE";
                        defaultValue = "rhs_1Rnd_m821_HE";
                    };
                };
            };
            class rhs_ammoslot_1 {
                displayName = "Ammo slot #1 count";
                tooltip = "Define number of rounds stored inside of type #1. Max 40. Leave -1 for default loadout";
                property = "rhs_ammoslot_1";
                control = "Edit";
                expression = "if(_value >= 0)then{ [_this,_value,'%s',40,['rhs_ammoslot_1','rhs_ammoslot_2','rhs_ammoslot_3']] spawn rhsusf_fnc_Eden_DefineLoadout};";
                defaultValue = "-1";
                validate = "NUMBER";
                typeName = "NUMBER";
            };
            class rhs_ammoslot_2_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #2 type";
                tooltip = "Define type of shell for #2 slot [Smoke rounds]";
                property = "rhs_ammoslot_2_type";
                class values {
                    class 8Rnd_82mm_Mo_Smoke_white {
                        name = "Smoke M819";
                        value = "8Rnd_82mm_Mo_Smoke_white";
                        defaultValue = "8Rnd_82mm_Mo_Smoke_white";
                    };
                };
            };
            class rhs_ammoslot_2: rhs_ammoslot_1 {
                displayName = "Ammo slot #2 count";
                tooltip = "Define number of rounds stored inside of type #2. Max 40. Leave -1 for default loadout";
                property = "rhs_ammoslot_2";
            };
            class rhs_ammoslot_3_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #3 type";
                tooltip = "Define type of shell for #3 slot [Illumination rounds]";
                property = "rhs_ammoslot_3_type";
                class values {
                    class 8Rnd_82mm_Mo_Flare_white {
                        name = "Illumination M853A1";
                        value = "8Rnd_82mm_Mo_Flare_white";
                        defaultValue = "8Rnd_82mm_Mo_Flare_white";
                    };
                };
            };
            class rhs_ammoslot_3: rhs_ammoslot_1 {
                displayName = "Ammo slot #3 count";
                tooltip = "Define number of rounds stored inside of type #3. Max 40. Leave -1 for default loadout";
                property = "rhs_ammoslot_3";
            };
        };
    };
    class RHS_M252_D: RHS_M252_Base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_M252_D.paa";
        scope = 2;
        side = 1;
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_rifleman";
        typicalCargo[] = {"rhsusf_army_ocp_rifleman"};
    };
    class RHS_M252_WD: RHS_M252_Base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_M252_WD.paa";
        scope = 2;
        side = 1;
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_rifleman";
        typicalCargo[] = {"rhsusf_army_ucp_rifleman"};
    };
    class RHS_M252_USMC_D: RHS_M252_Base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_M252_USMC_D.paa";
        scope = 2;
        side = 1;
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_usmc_d";
        crew = "rhsusf_usmc_marpat_d_rifleman";
        typicalCargo[] = {"rhsusf_usmc_marpat_d_rifleman"};
    };
    class RHS_M252_USMC_WD: RHS_M252_Base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_M252_USMC_WD.paa";
        scope = 2;
        side = 1;
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhs_faction_usmc_wd";
        crew = "rhsusf_usmc_marpat_wd_rifleman";
        typicalCargo[] = {"rhsusf_usmc_marpat_wd_rifleman"};
    };
    class RHS_M119_base: StaticCannon {
        dlc = "RHS_USAF";
        accuracy = 0.12;
        cost = 10000;
        availableForSupportTypes[] = {"Artillery"};
        artilleryScanner = 1;
        slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1", "SlingLoadCargo2", "SlingLoadCargo3"};
        displayName = "$STR_RHS_DN_M119";
        vehicleClass = "rhs_vehclass_artillery";
        editorSubcategory = "rhs_EdSubcat_artillery";
        unitInfoType = "RscUnitInfoMortar";
        model = "\rhsusf\addons\rhsusf_heavyweapons\M119_Howitzer\M119";
        picture = "\rhsusf\addons\rhsusf_heavyweapons\data\ico\RHS_M119_D_ca.paa";
        icon = "\rhsusf\addons\rhsusf_heavyweapons\data\map_ico\icomap_m119_CA.paa";
        driveOnComponent[] = {"wheel_1_1", "wheel_1_2"};
        mapSize = 4.5;
        cargoAction[] = {"rhs_M119_Cargo", "rhs_M119_Commander"};
        typicalCargo[] = {"I_Soldier_F", "I_Soldier_F", "I_Soldier_F"};
        transportSoldier = 2;
        memoryPointsGetInCargo = "pos_cargo_dir";
        memoryPointsGetInCargoDir = "pos_cargo";
        class Hitpoints {
            class HitHull {
                armor = 1;
                passThrough = 1;
                name = "telo";
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {"rhsusf\addons\rhsusf_heavyweapons\m119_howitzer\data\m119.rvmat", "rhsusf\addons\rhsusf_heavyweapons\m119_howitzer\data\m119.rvmat", "rhsusf\addons\rhsusf_heavyweapons\data\static_destroyed.rvmat"};
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunBeg = "Usti hlavne";
                gunEnd = "Konec hlavne";
                gunnerLeftHandAnimName = "handleElev";
                weapons[] = {"RHS_weap_M119"};
                magazines[] = {"RHS_mag_m1_he_12", "rhs_mag_m314_ilum_4", "rhs_mag_m60a2_smoke_4"};
                gunnerAction = "rhs_M119_Gunner";
                gunnerOpticsModel = "\rhsusf\addons\rhsusf_heavyweapons\M119_Howitzer\optika_M119";
                gunnerOpticsEffect[] = {"OpticsCHAbera1", "OpticsBlur2"};
                elevationMode = 1;
                turretInfoType = "RHSUSF_gui_optic_mortar";
                gunnerForceOptics = 0;
                minElev = -9;
                maxelev = 80;
                minTurn = -180;
                maxTurn = 180;
                maxHorizontalRotSpeed = 0.65;
                maxVerticalRotSpeed = 0.45;
                class ViewOptics: ViewOptics {
                    initFov = 0.155;
                    minFov = 0.155;
                    maxFov = 0.155;
                };
            };
        };
        class AnimationSources {
            class fold_arty {
                source = "door";
                animPeriod = 1.8;
            };
            class fold_arty_gun {
                source = "user";
                animPeriod = 1.8;
            };
            class fold_arty_plate: fold_arty_gun {
                animPeriod = 0.001;
            };
            class fold_arty_handler: fold_arty_plate {
                mass = -1;
                displayName = "fold gun";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                onPhaseChanged = "[_this select 0,_this select 1] call rhs_fnc_m119_fold;";
            };
            class recoil_source {
                source = "reload";
                weapon = "RHS_weap_M119";
            };
            class muzzle_hide_arty: recoil_source {};
        };
        class Library {
            libTextDesc = "$STR_RHS_LIB_M119";
        };
        htMin = 1;
        htMax = 480;
        afMax = 0;
        mfMax = 0;
        mFact = 1;
        tBody = 450;
        class EventHandlers: EventHandlers {
            class RHSUSF_EventHandlers {
                fired = "_this spawn rhs_fnc_fired_m119";
            };
        };
        class UserActions {
            class Fold {
                displayNameDefault = "<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa' size='3.5' /> Static Mode";
                displayName = "<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa' /> Switch to static mode";
                position = "zamerny";
                radius = 4;
                onlyForplayer = 0;
                priority = 10;
                condition = "(alive this) && (this doorPhase 'fold_arty' >= 0.99)";
                statement = "[this,0] call rhs_fnc_m119_fold;";
            };
            class Unfold: Fold {
                priority = 0;
                displayNameDefault = "<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\unloadVehicle_ca.paa' size='3.5' /> Moving Mode";
                displayName = "<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\unloadVehicle_ca.paa' /> Switch to moving mode";
                condition = "(alive this) && ((count (crew this)) == 0) && (this  doorPhase 'fold_arty' <= 0.01)";
                statement = "[this,1] call rhs_fnc_m119_fold;";
            };
            class AttachVehicle: RHS_UserAction_Towing_Attach {
                position = "tow_point";
                condition = "(alive this)&& (this  doorPhase 'fold_arty' >= 0.99)";
            };
            class DragVehicle: RHS_UserAction_Towing_Drag {
                position = "tow_point";
                condition = "(alive this)&& (this  doorPhase 'fold_arty' >= 0.99)";
            };
        };
        class Attributes {
            class ObjectTexture {
                control = "ObjectTexture";
                data = "ObjectTexture";
                displayName = "Skin";
                tooltip = "Texture and material set applied on the object.";
            };
            class rhs_caseDeleteTime {
                displayName = "Spent case liftime";
                tooltip = "Define how long spent caseses are rendred in game. Type -1 for infinitve time";
                property = "rhs_caseDeleteTime";
                control = "Edit";
                validate = "Number";
                typeName = "Number";
                defaultValue = "120";
                expression = "_this setVariable ['rhs_caseDeleteTime',_value]";
            };
            class rhs_ammoslot_1_type {
                displayName = "Ammo slot #1 type";
                tooltip = "Define type of shell for #1 slot [HE rounds]";
                property = "rhs_ammoslot_1_type";
                control = "Combo";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = 0;
                typeName = "STRING";
                class values {
                    class RHS_mag_m1_he_12 {
                        name = "He-FRAG M1";
                        value = "RHS_mag_m1_he_12";
                        defaultValue = "RHS_mag_m1_he_12";
                    };
                };
            };
            class rhs_ammoslot_1 {
                displayName = "Ammo slot #1 count";
                tooltip = "Define number of rounds stored inside of type #1. Max 40. Leave -1 for default loadout";
                property = "rhs_ammoslot_1";
                control = "Edit";
                expression = "if(_value >= 0)then{ [_this,_value,'%s',40,['rhs_ammoslot_1','rhs_ammoslot_2','rhs_ammoslot_3']] spawn rhsusf_fnc_Eden_DefineLoadout};";
                defaultValue = "-1";
                validate = "NUMBER";
                typeName = "NUMBER";
            };
            class rhs_ammoslot_2_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #2 type";
                tooltip = "Define type of shell for #2 slot [Smoke rounds]";
                property = "rhs_ammoslot_2_type";
                class values {
                    class rhs_mag_m60a2_smoke_4 {
                        name = "Smoke M60A2";
                        value = "rhs_mag_m60a2_smoke_4";
                        defaultValue = "rhs_mag_m60a2_smoke_4";
                    };
                };
            };
            class rhs_ammoslot_2: rhs_ammoslot_1 {
                displayName = "Ammo slot #2 count";
                tooltip = "Define number of rounds stored inside of type #2. Max 40. Leave -1 for default loadout";
                property = "rhs_ammoslot_2";
            };
            class rhs_ammoslot_3_type: rhs_ammoslot_1_type {
                displayName = "Ammo slot #3 type";
                tooltip = "Define type of shell for #3 slot [Illumination rounds]";
                property = "rhs_ammoslot_3_type";
                class values {
                    class rhs_mag_m314_ilum_4 {
                        name = "Illumination M314";
                        value = "rhs_mag_m314_ilum_4";
                        defaultValue = "rhs_mag_m314_ilum_4";
                    };
                };
            };
            class rhs_ammoslot_3: rhs_ammoslot_1 {
                displayName = "Ammo slot #3 count";
                tooltip = "Define number of rounds stored inside of type #3. Max 40. Leave -1 for default loadout";
                property = "rhs_ammoslot_3";
            };
        };
        class RHS_TowingSystem {
            class Cargo {
                rhs_fakeVehicle = "rhs_M119_towingVehicle";
                rhs_animationsOnAttach[] = {};
                rhs_animationsOnDetach[] = {};
                rhs_towedMass = 1420;
                rhs_towingPoint = "tow_point";
                rhs_additionalRopeOffset[] = {0, 0, 0.6};
                rhs_ropeLength = 0.1;
                rhs_maxAttachDistance = 2;
                rhs_dragOffset[] = {0, 0.6, 0.7};
            };
        };
    };
    class RHS_M119_D: RHS_M119_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_M119_D.paa";
        scope = 2;
        side = 1;
        author = "RHS (A2 port)";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_rifleman";
        typicalCargo[] = {"rhsusf_army_ocp_rifleman"};
    };
    class RHS_M119_WD: RHS_M119_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_M119_WD.paa";
        scope = 2;
        side = 1;
        author = "RHS (A2 port)";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_rifleman";
        typicalCargo[] = {"rhsusf_army_ucp_rifleman"};
    };
    class rhs_M119_towingVehicle_base: RHS_TowedWeapons_Base {
        reversed = 0;
        displayname = "M119 Tow";
        model = "\rhsusf\addons\rhsusf_heavyweapons\M119_Howitzer\M119";
        driveOnComponent[] = {"wheels"};
        class AnimationSources {
            class fold_arty {
                source = "user";
                animPeriod = 1.8;
                initPhase = 1;
            };
            class fold_arty_gun {
                source = "user";
                animPeriod = 1.8;
                initPhase = "rad(4)";
            };
            class fold_arty_plate: fold_arty_gun {
                animPeriod = 0.001;
                initPhase = 0;
            };
            class fold_arty_handler: fold_arty_plate {};
            class recoil_source {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class muzzle_hide_arty: recoil_source {};
            class Wheel_1_source {
                source = "wheel";
                wheel = "Wheel_1";
            };
            class Wheel_2_source {
                source = "wheel";
                wheel = "Wheel_2";
            };
            class HideWheels {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
            };
        };
        maxOmega = 1000;
        maxSpeed = 40;
        class Wheels {
            class Wheel_1 {
                steering = 1;
                side = "left";
                boneName = "damper_front";
                suspForceAppPointOffset = "wheel_1_center";
                tireForceAppPointOffset = "wheel_1_center";
                center = "wheel_1_center";
                boundary = "wheel_1_bound";
                suspTravelDirection[] = {0, -1, 0};
                width = 0.27;
                mass = 115;
                MOI = 50.3885;
                dampingRate = 0.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 0;
                maxHandBrakeTorque = 0;
                maxCompression = 0.1;
                maxDroop = 0.1;
                sprungMass = -1;
                springStrength = 11600;
                springDamperRate = 3280;
                longitudinalStiffnessPerUnitGravity = 25000;
                latStiffX = 12.5;
                latStiffY = 18;
                frictionVsSlipGraph[] = {{0, 5}, {0.5, 2}, {1, 1}};
            };
            class Wheel_2: Wheel_1 {
                steering = 1;
                side = "right";
                boneName = "damper_left";
                suspForceAppPointOffset = "wheel_2_center";
                tireForceAppPointOffset = "wheel_2_center";
                center = "wheel_2_center";
                boundary = "wheel_2_bound";
            };
        };
    };
    class rhs_M119_towingVehicle: rhs_M119_towingVehicle_base {
        scope = 1;
    };
    class Bag_Base;
    class Weapon_Bag_Base: Bag_Base {
        class assembleInfo;
    };
    class RHS_M2_Gun_Bag: Weapon_Bag_Base {
        dlc = "RHS_USAF";
        scope = 2;
        author = "$STR_A3_Bohemia_Interactive";
        displayName = "M2 Gun Bag";
        mass = 382;
        model = "\rhsusf\addons\rhsusf_heavyweapons\bags\StaticX.p3d";
        picture = "\rhsusf\addons\rhsusf_heavyweapons\bags\staticX_CA.paa";
        icon = "\rhsusf\addons\rhsusf_heavyweapons\bags\mapIcon_backpack_CA.paa";
        class assembleInfo {
            primary = 0;
            base = "";
            assembleTo = "";
            dissasembleTo[] = {};
            displayName = "";
        };
        faction = "rhs_faction_usarmy_d";
        editorSubcategory = "EdSubcat_DismantledWeapons";
    };
    class RHS_M2_Tripod_Bag: Weapon_Bag_Base {
        dlc = "RHS_USAF";
        scope = 2;
        mass = 250;
        author = "$STR_A3_Bohemia_Interactive";
        displayName = "M2 Tripod Bag";
        model = "\rhsusf\addons\rhsusf_heavyweapons\bags\StaticY.p3d";
        picture = "\rhsusf\addons\rhsusf_heavyweapons\bags\staticY_CA.paa";
        icon = "\rhsusf\addons\rhsusf_heavyweapons\bags\mapIcon_backpack_CA.paa";
        faction = "rhs_faction_usarmy_d";
        class assembleInfo: assembleInfo {
            displayName = "$STR_A3_CfgVehicles_B_HMG_01_Wpn_assembleInfo0";
            assembleTo = "RHS_M2StaticMG_D";
            base[] = {"RHS_M2_Gun_Bag"};
        };
        editorSubcategory = "EdSubcat_DismantledWeapons";
    };
    class RHS_M2_MiniTripod_Bag: RHS_M2_Tripod_Bag {
        scope = 2;
        mass = 200;
        author = "$STR_A3_Bohemia_Interactive";
        displayName = "M3 Minitripod Bag";
        class assembleInfo: assembleInfo {
            displayName = "$STR_A3_CfgVehicles_B_HMG_01_Wpn_assembleInfo0";
            assembleTo = "RHS_M2StaticMG_MiniTripod_D";
            base[] = {"RHS_M2_Gun_Bag"};
        };
    };
    class RHS_Mk19_Gun_Bag: RHS_M2_Gun_Bag {
        scope = 2;
        author = "$STR_A3_Bohemia_Interactive";
        displayName = "Mk19 Gun Bag";
        mass = 302;
    };
    class RHS_Mk19_Tripod_Bag: RHS_M2_Tripod_Bag {
        scope = 2;
        mass = 139;
        author = "$STR_A3_Bohemia_Interactive";
        displayName = "Mk19 Tripod Bag";
        class assembleInfo: assembleInfo {
            displayName = "$STR_A3_CfgVehicles_B_gmg_01_Wpn_assembleInfo0";
            assembleTo = "RHS_MK19_TriPod_D";
            base[] = {"RHS_Mk19_Gun_Bag"};
        };
    };
    class rhs_Tow_Gun_Bag: RHS_M2_Gun_Bag {
        author = "$STR_A3_Bohemia_Interactive";
        displayName = "TOW Gun Bag";
        mass = 302;
    };
    class rhs_TOW_Tripod_Bag: RHS_M2_Tripod_Bag {
        author = "$STR_A3_Bohemia_Interactive";
        mass = 139;
        displayName = "TOW Tripod Bag";
        class assembleInfo: assembleInfo {
            displayName = "$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
            assembleTo = "RHS_TOW_TriPod_WD";
            base[] = {"rhs_TOW_Gun_Bag"};
        };
    };
    class rhs_M252_Gun_Bag: RHS_M2_Gun_Bag {
        author = "$STR_RHSUSF_AUTHOR_FULL";
        displayName = "M252 Gun Bag";
        mass = 162;
    };
    class rhs_M252_Bipod_Bag: RHS_M2_Tripod_Bag {
        author = "$STR_RHSUSF_AUTHOR_FULL";
        mass = 339;
        displayName = "M252 Tripod Bag";
        class assembleInfo: assembleInfo {
            displayName = "$STR_A3_CfgVehicles_B_Mortar_01_Wpn_assembleInfo0";
            assembleTo = "RHS_M252_WD";
            base[] = {"rhs_M252_Gun_Bag"};
        };
    };
};
