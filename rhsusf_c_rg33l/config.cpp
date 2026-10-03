class CfgPatches {
    class rhsusf_c_RG33L {
        units[] = {
            "rhsusf_M1232_usarmy_d",
            "rhsusf_M1232_usarmy_wd",
            "rhsusf_M1232_M2_usarmy_d",
            "rhsusf_M1232_M2_usarmy_wd",
            "rhsusf_M1232_MK19_usarmy_d",
            "rhsusf_M1232_MK19_usarmy_wd",
            "rhsusf_M1237_M2_usarmy_d",
            "rhsusf_M1237_M2_usarmy_wd",
            "rhsusf_M1237_MK19_usarmy_d",
            "rhsusf_M1237_MK19_usarmy_wd",
            "rhsusf_M1232_MC_M2_usmc_d",
            "rhsusf_M1232_MC_M2_usmc_wd",
            "rhsusf_M1232_MC_MK19_usmc_d",
            "rhsusf_M1232_MC_MK19_usmc_wd"
        };
        weapons[] = {};
        requiredVersion = 1.38;
        requiredAddons[] = {"rhsusf_main", "rhsusf_c_troops"};
        name = "RG33L MRAP";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class DefaultEventhandlers;
class RscPicture;
class RscInGameUI {
    class RscUnitInfo;
    class RscWeaponZeroing: RscUnitInfo {
        class WeaponInfoControlsGroupLeft;
    };
    class rhs_rg33l_hatch: RscWeaponZeroing {
        idd = 300;
        controls[] = {"CA_Zeroing", "RHS_tigr_handler"};
        class RHS_tigr_handler: RscPicture {
            idc = 59999;
        };
        onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0] call RHSusf_fnc_hatch_control";
    };
};
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        RHS_HEMTT_Driver = "RHS_HEMTT_Driver";
        RHS_rg33l_Cargo01_FFV = "RHS_rg33l_Cargo01_FFV";
        RHS_rg33l_Cargo02_FFV = "RHS_rg33l_Cargo02_FFV";
        RHS_rg33l_Cargo03_FFV = "RHS_rg33l_Cargo03_FFV";
        RHS_rg33l_Cargo04_FFV = "RHS_rg33l_Cargo04_FFV";
        RHS_MCTAGS_Gunner03 = "RHS_MCTAGS_Gunner03";
        RHS_MCTAGS_Gunner03_in = "RHS_MCTAGS_Gunner03_in";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class RHS_HEMTT_Driver: Crew {
            file = "\rhsusf\addons\rhsusf_c_RG33L\anims\HEMTT_Driver";
            interpolateTo[] = {"RHS_HEMTT_KIA_Driver", 1};
            speed = 10000000000;
        };
        class RHS_HEMTT_KIA_Driver: DefaultDie {
            actions = "DeadActions";
            file = "\rhsusf\addons\rhsusf_C_RG33L\anims\HEMTT_KIA_Driver";
            speed = 10000000000;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_rg33l_Cargo01_FFV: Crew {
            file = "\rhsusf\addons\rhsusf_c_RG33L\anims\CargoLeft";
            interpolateTo[] = {"RHS_m113_KIA_Cargo01_FFV", 1};
            speed = 10000000000;
            canPullTrigger = 0;
        };
        class RHS_rg33l_Cargo02_FFV: Crew {
            file = "\rhsusf\addons\rhsusf_c_RG33L\anims\CargoLeft1";
            interpolateTo[] = {"RHS_m113_KIA_Cargo01_FFV", 1};
            speed = 10000000000;
            canPullTrigger = 0;
        };
        class RHS_rg33l_Cargo03_FFV: Crew {
            file = "\rhsusf\addons\rhsusf_c_RG33L\anims\CargoLeft1";
            interpolateTo[] = {"RHS_m113_KIA_Cargo01_FFV", 1};
            speed = 10000000000;
            canPullTrigger = 0;
        };
        class RHS_rg33l_Cargo04_FFV: Crew {
            file = "\rhsusf\addons\rhsusf_c_RG33L\anims\CargoRight";
            interpolateTo[] = {"RHS_m113_KIA_Cargo01_FFV", 1};
            speed = 10000000000;
            canPullTrigger = 0;
        };
        class RHS_MCTAGS_Gunner03: Crew {
            file = "\rhsusf\addons\rhsusf_c_RG33L\anims\MCTAGS_Gunner03";
            interpolateTo[] = {"RHS_HMMWV_KIA_Gunner", 1};
            speed = 10000000000;
            boundingSphere = 2.5;
        };
        class RHS_MCTAGS_Gunner03_in: Crew {
            file = "\rhsusf\addons\rhsusf_c_RG33L\anims\MCTAGS_Gunner03_in";
            interpolateTo[] = {"RHS_HMMWV_KIA_Gunner", 1};
            boundingSphere = 2.5;
            leftHandIKEnd = 0;
            leftHandIKBeg = 0;
            rightHandIKBeg = 0;
            rightHandIKEnd = 0;
            rightHandIKCurve[] = {0};
            leftHandIKCurve[] = {0};
            rightLegIKCurve[] = {0};
            leftLegIKCurve[] = {0};
        };
    };
};
class CfgVehicles {
    class LandVehicle;
    class Car: LandVehicle {
        class NewTurret;
    };
    class Car_F: Car {
        class AnimationSources;
        class Turrets {
            class MainTurret: NewTurret {
                class ViewOptics;
            };
        };
        class HitPoints {
            class HitFuel;
            class HitEngine;
            class HitBody;
            class HitLFWheel;
            class HitLF2Wheel;
            class HitRFWheel;
            class HitRF2Wheel;
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
            class HitGlass5;
            class HitGlass6;
        };
        class EventHandlers;
        class ViewOptics;
    };
    class MRAP_01_base_F: Car_F {
        class EventHandlers;
        class AnimationSources: AnimationSources {
            class HitGlass1;
        };
    };
    class rhsusf_RG33L_base: MRAP_01_base_F {
        dlc = "RHS_USAF";
        category = "Car";
        side = 1;
        editorSubcategory = "rhs_EdSubcat_mrap";
        vehicleClass = "rhs_vehclass_MRAP";
        insideSoundCoef = 0.4;
        displayName = "RG33L";
        unitInfoType = "RscUnitInfo";
        weapons[] = {"TruckHorn2", "rhsusf_weap_duke"};
        magazines[] = {"rhsusf_mag_duke"};
        smokeLauncherGrenadeCount = 1;
        smokeLauncherVelocity = 14;
        smokeLauncherOnTurret = 0;
        smokeLauncherAngle = 150;
        model = "\rhsusf\addons\rhsusf_RG33L\M1232_D";
        picture = "\rhsusf\addons\rhsusf_rg33l\pictures\rhs_rg33l_unarmed_pic_ca.paa";
        Icon = "\a3\soft_f_beta\Truck_01\Data\UI\map_truck_01_CA.paa";
        mapSize = 12.02;
        transportMaxBackpacks = 25;
        transportSoldier = 5;
        destrType = "DestructDefault";
        crewExplosionProtection = 1;
        camShakeCoef = 0.3;
        maximumLoad = 4000;
        class TransportMagazines {
            class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
                magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
                count = 25;
            };
            class _xx_rhsusf_100Rnd_556x45_soft_pouch {
                magazine = "rhsusf_100Rnd_556x45_soft_pouch";
                count = 11;
            };
            class _xx_rhsusf_100Rnd_762x51 {
                magazine = "rhsusf_100Rnd_762x51";
                count = 11;
            };
            class _xx_rhs_fgm148_magazine_AT {
                magazine = "rhs_fgm148_magazine_AT";
                count = 2;
            };
            class _xx_rhs_m136_mag {
                magazine = "rhs_m136_mag";
                count = 2;
            };
            class _xx_rhs_mag_M441_HE {
                magazine = "rhs_mag_M441_HE";
                count = 20;
            };
            class _xx_rhs_mag_M714_white {
                magazine = "rhs_mag_M714_white";
                count = 8;
            };
            class _xx_rhs_mag_M662_red {
                magazine = "rhs_mag_M662_red";
                count = 4;
            };
            class _xx_rhs_mag_m67 {
                magazine = "rhs_mag_m67";
                count = 10;
            };
            class _xx_rhs_mag_m18_green {
                magazine = "rhs_mag_m18_green";
                count = 4;
            };
            class _xx_rhs_mag_m18_red {
                magazine = "rhs_mag_m18_red";
                count = 4;
            };
            class _xx_rhs_mag_an_m8hc {
                magazine = "rhs_mag_an_m8hc";
                count = 10;
            };
            class _xx_rhs_m136_hedp_mag {
                magazine = "rhs_m136_hedp_mag";
                count = 2;
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 10;
            };
            class _xx_Medikit {
                name = "Medikit";
                count = 1;
            };
            class _xx_Toolkit {
                name = "Toolkit";
                count = 1;
            };
        };
        class TransportWeapons {
            class _xx_rhs_weap_m4_carryhandle {
                weapon = "rhs_weap_m4_carryhandle";
                count = 2;
            };
            class _xx_rhs_weap_M136 {
                weapon = "rhs_weap_M136";
                count = 2;
            };
        };
        class TransportBackpacks {
            class _xx_rhsusf_falconii {
                backpack = "rhsusf_falconii";
                count = 1;
            };
        };
        dustFrontLeftPos = "wheel_1_1_bound";
        dustFrontRightPos = "wheel_2_1_bound";
        dustBackLeftPos = "wheel_1_3_bound";
        dustBackRightPos = "wheel_2_3_bound";
        tf_hasLRradio_api = 1;
        selectionBrakeLights = "light_brake";
        selectionBackLights = "light_drive";
        driverAction = "RHS_HMMWV_Driver";
        driverInAction = "RHS_HMMWV_Driver";
        viewDriverInExternal = 1;
        forceHideDriver = 1;
        driverLeftHandAnimName = "drivewheel";
        driverRightHandAnimName = "drivewheel";
        cargoProxyIndexes[] = {1, 2, 3, 4, 5};
        getInProxyOrder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        memoryPointsGetInCargo[] = {"pos codriver", "pos cargo"};
        memoryPointsGetInCargoDir[] = {"pos codriver dir", "pos cargo dir"};
        getInAction = "GetInMRAP_01";
        getOutAction = "GetOutMRAP_01";
        driverDoor = "DoorL";
        cargoDoors[] = {"DoorR", "DoorB"};
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "pintle",
            "camo7",
            "camo8",
            "camo9"
        };
        class textureSources {
            class rhs_desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_RG33L\data\RG33_Body_CO.paa",
                    "rhsusf\addons\rhsusf_RG33L\data\RG33_Chassis_CO.paa",
                    "rhsusf\addons\rhsusf_RG33L\data\RG33_Accessory2_CO.paa",
                    "rhsusf\addons\rhsusf_RG33L\data\RG33_Armor_CO.paa",
                    "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa",
                    "rhsusf\addons\rhsusf_RG33L\data\RG33_Wheels_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
                    "rhsusf\addons\rhsusf_RG33L\data\MCTAGS_CO.paa",
                    "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
                };
                factions[] = {};
            };
            class rhs_woodland {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_RG33L\data\RG33_Body_WD_CO.paa",
                    "rhsusf\addons\rhsusf_RG33L\data\RG33_Chassis_WD_CO.paa",
                    "rhsusf\addons\rhsusf_RG33L\data\RG33_Accessory2_WD_CO.paa",
                    "rhsusf\addons\rhsusf_RG33L\data\RG33_Armor_WD_CO.paa",
                    "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa",
                    "rhsusf\addons\rhsusf_RG33L\data\RG33_Wheels_WD_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
                    "rhsusf\addons\rhsusf_RG33L\data\MCTAGS_WD_CO.paa",
                    "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
                };
                factions[] = {};
            };
        };
        textureList[] = {};
        class Attributes {
            class ObjectTexture {
                control = "ObjectTexture";
                data = "ObjectTexture";
                displayName = "Skin";
                tooltip = "Texture and material set applied on the object.";
            };
            class rhs_hideDUKE {
                control = "CheckboxNumber";
                defaultValue = "0";
                displayName = "hide DUKE antennas";
                property = "rhs_hideDUKE";
                expression = "_this animate ['DUKE_Hide',_value,true];if(_value isEqualTo 1)then{_this removeWeaponTurret ['rhsusf_weap_duke',[-1]]};";
            };
            class DoorB {
                control = "CheckboxNumber";
                defaultValue = "0";
                displayName = "Open rear door";
                property = "Door_B";
                expression = "_this animateDoor ['%s',_value,true]";
            };
            class DoorL: DoorB {
                displayName = "Open left door";
                property = "Door_L";
            };
            class DoorR: DoorB {
                displayName = "Open right door";
                property = "Door_R";
            };
        };
        cargoCompartments[] = {1, 1};
        class CargoTurret;
        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret {
                weapons[] = {"rhsusf_weap_DummyLauncher"};
                gunnerAction = "vehicle_turnout_1";
                gunnerInAction = "RHS_rg33l_Cargo01_FFV";
                animationSourceHatch = "hatch1";
                enabledByAnimationSource = "hatch1_door";
                isPersonTurret = 2;
                gunnerGetInAction = "GetInMantis";
                gunnerGetOutAction = "GetOutMantis";
                memoryPointsGetInGunner = "pos cargoFFV1";
                memoryPointsGetInGunnerDir = "pos cargoFFV1 dir";
                rhs_hatch_control = 1;
                gunnerName = "Passenger (Left Front Hatch)";
                gunnerCompartments = "Compartment1";
                gunnerDoor = "DoorB";
                memoryPointGunnerOptics = "";
                selectionFireAnim = "";
                canHideGunner = 1;
                commanding = -2;
                LODTurnedIn = 1200;
                LODTurnedOut = 0;
                proxyIndex = 6;
                maxElev = 45;
                minElev = -35;
                maxTurn = 61;
                minTurn = -65;
                class TurnIn {
                    limitsArrayTop[] = {{0, 0}, {0, 0}};
                    limitsArrayBottom[] = {{0, 0}, {0, 0}};
                };
                class TurnOut {
                    limitsArrayTop[] = {{45, -160}, {45, 160}};
                    limitsArrayBottom[] = {
                        {-13.0935, -131.7034},
                        {-8.5738, -116.1285},
                        {-7.4638, -115.6226},
                        {-7.234, -114.7983},
                        {-4.9984, -114.6421},
                        {-5.0046, -111.7557},
                        {-8.0144, -109.7468},
                        {-6.4078, -82.353},
                        {-8.6081, -77.4222},
                        {-8.044, -72.854},
                        {-12.8238, -71.9509},
                        {-34.0392, 64.6688},
                        {-13.6844, 78.5021},
                        {-13.5075, 86.2302},
                        {-7.8451, 87.7567},
                        {-8.1937, 115.4737},
                        {-9.7993, 118.8243},
                        {-15.226, 120.0665},
                        {-13.9668, 123.0723},
                        {-11.6947, 124.4118},
                        {-11.0435, 131.5186},
                        {-13.0902, 145.9448}
                    };
                };
                class Hitpoints {};
            };
            class CargoTurret_02: CargoTurret_01 {
                proxyIndex = 7;
                gunnerInAction = "RHS_rg33l_Cargo03_FFV";
                enabledByAnimationSource = "hatch2_door";
                animationSourceHatch = "hatch2";
                gunnerName = "Passenger (Right Front Hatch)";
                memoryPointsGetInGunner = "pos cargoFFV2";
                memoryPointsGetInGunnerDir = "pos cargoFFV2 dir";
                class TurnOut {
                    limitsArrayTop[] = {{45, -160}, {45, 160}};
                    limitsArrayBottom[] = {
                        {-8.8824, -124.1897},
                        {-8.4829, -110.5723},
                        {-14.2171, -107.8792},
                        {-14.888, -90.4574},
                        {-10.2899, -88.1083},
                        {-9.2372, -76.2862},
                        {-11.9503, -70.827},
                        {-26.4059, 69.8273},
                        {-16.4806, 76.471},
                        {-7.9336, 77.7058},
                        {-8.3456, 84.5523},
                        {-2.2941, 87.9662},
                        {-2.9195, 91.027},
                        {-6.328, 92.3024},
                        {-6.4105, 102.5344},
                        {-8.1227, 117.8972},
                        {-11.4083, 129.4896},
                        {-15.1118, 155.2091}
                    };
                };
            };
            class CargoTurret_03: CargoTurret_01 {
                proxyIndex = 9;
                gunnerInAction = "RHS_rg33l_Cargo02_FFV";
                enabledByAnimationSource = "hatch3_door";
                animationSourceHatch = "hatch3";
                gunnerName = "Passenger (Left Rear Hatch)";
                memoryPointsGetInGunner = "pos cargoFFV3";
                memoryPointsGetInGunnerDir = "pos cargoFFV3 dir";
                class TurnOut {
                    limitsArrayTop[] = {{45, -160}, {45, 160}};
                    limitsArrayBottom[] = {
                        {-7.5497, -118.1134},
                        {-5.0811, -109.5662},
                        {-2.086, -108.5875},
                        {-2.0293, -106.3234},
                        {-4.2974, -104.8223},
                        {-4.2155, -93.8488},
                        {-5.2694, -82.0775},
                        {-7.1576, -80.3778},
                        {-7.6494, -75.741},
                        {-10.6541, -75.0728},
                        {-19.4964, -63.4559},
                        {-34.8309, -43.9211},
                        {-16.2113, 78.0132},
                        {-15.0773, 98.9538},
                        {-11.2594, 135.8711},
                        {-11.4296, 145.9026}
                    };
                };
            };
            class CargoTurret_04: CargoTurret_01 {
                proxyIndex = 8;
                gunnerInAction = "RHS_rg33l_Cargo04_FFV";
                enabledByAnimationSource = "hatch4_door";
                animationSourceHatch = "hatch4";
                gunnerName = "Passenger (Right Rear Hatch)";
                memoryPointsGetInGunner = "pos cargoFFV4";
                memoryPointsGetInGunnerDir = "pos cargoFFV4 dir";
                class TurnOut {
                    limitsArrayTop[] = {{45, -160}, {45, 160}};
                    limitsArrayBottom[] = {
                        {-27.0176, -127.8668},
                        {-34.2159, -91.8023},
                        {-21.1403, -86.9378},
                        {-16.7845, -66.8125},
                        {-26.2567, -51.5642},
                        {-19.914, 75.2879},
                        {-13.6206, 78.6425},
                        {-4.5589, 86.4639},
                        {-1.948, 88.9163},
                        {-2.276, 90.4988},
                        {-5.2764, 91.7104},
                        {-5.502, 101.8547},
                        {-6.5358, 110.5171},
                        {-10.381, 123.444},
                        {-16.2443, 150.451}
                    };
                };
            };
        };
        class DriverOpticsIn {
            class DVE_Wide: ViewOptics {
                camPos = "dve_view_pos";
                opticsModel = "rhsusf\addons\rhsusf_optics\data\rhsusf_DVE_4x3";
                visionMode[] = {"TI"};
                thermalMode[] = {0, 1};
                initFov = 0.6;
                minFov = 0.6;
                maxFov = 0.6;
                hitpoint = "Hit_Optic_DVEA";
            };
            class DVS_Rear: DVE_Wide {
                camPos = "dve_view_rear_pos";
                camDir = "dve_view_rear_dir";
                initFov = 0.875;
                minFov = 0.875;
                maxFov = 0.875;
                hitpoint = "Hit_Optic_Driver_Rear";
            };
        };
        class AnimationSources: AnimationSources {
            class longlights_hide {
                source = "user";
                animPeriod = 0.000001;
                initPhase = 1;
            };
            class shortlights_hide: longlights_hide {
                initPhase = 0;
            };
            class lights_hide: longlights_hide {
                initPhase = 0;
            };
            class cabinlights_hide: longlights_hide {};
            class light_bo {
                source = "user";
                animPeriod = 0.00001;
                initPhase = 1;
            };
            class light_stop: light_bo {
                initPhase = 0;
            };
            class light_svc: light_bo {
                initPhase = 1;
            };
            class DoorL {
                source = "door";
                animPeriod = 0.8;
                sound = "RHSUSF_Truck_Door";
                soundPosition = "osa_dvere_lp";
            };
            class DoorR: DoorL {
                soundPosition = "osa_dvere_pp";
            };
            class DoorB: DoorL {
                animPeriod = 1.8;
                soundPosition = "osa_dvere_pp";
            };
            class hatch1_door: DoorL {
                soundPosition = "osa_dvere_pp";
                initPhase = 0;
            };
            class hatch2_door: DoorL {
                soundPosition = "osa_dvere_pp";
                initPhase = 0;
            };
            class hatch3_door: DoorL {
                soundPosition = "osa_dvere_pp";
                initPhase = 0;
            };
            class hatch4_door: DoorL {
                soundPosition = "osa_dvere_pp";
                initPhase = 0;
            };
            class DUKE_Hide {
                source = "user";
                mass = -20;
                displayName = "hide DUKE antennas";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                animPeriod = 0.00001;
                initPhase = 0;
                onPhaseChanged = "_this call rhs_fnc_duke_vg;";
            };
            class HitDuke1 {
                source = "Hit";
                hitpoint = "HitDuke1";
            };
            class HitDuke2: HitDuke1 {
                hitpoint = "HitDuke2";
            };
            class HitGlass7: HitGlass1 {
                hitpoint = "HitGlass7";
            };
            class HitGlass8: HitGlass1 {
                hitpoint = "HitGlass8";
            };
            class HitGlass9: HitGlass1 {
                hitpoint = "HitGlass9";
            };
            class HitGlass10: HitGlass1 {
                hitpoint = "HitGlass10";
            };
            class HitGlass11: HitGlass1 {
                hitpoint = "HitGlass11";
            };
            class HitGlass12: HitGlass1 {
                hitpoint = "HitGlass12";
            };
            class HitGlass13: HitGlass1 {
                hitpoint = "HitGlass13";
            };
            class HitGlass14: HitGlass1 {
                hitpoint = "HitGlass14";
            };
            class HitGlass15: HitGlass1 {
                hitpoint = "HitGlass15";
            };
            class HitGlass16: HitGlass1 {
                hitpoint = "HitGlass16";
            };
            class HitGlass17: HitGlass1 {
                hitpoint = "HitGlass17";
            };
            class HitGlass18: HitGlass1 {
                hitpoint = "HitGlass18";
            };
            class HitGlass19: HitGlass1 {
                hitpoint = "HitGlass19";
            };
            class HitGlass20: HitGlass1 {
                hitpoint = "HitGlass20";
            };
            class HitGlass21: HitGlass1 {
                hitpoint = "HitGlass21";
            };
            class dve_fold {
                source = "user";
                animPeriod = 1.5;
                initPhase = 0;
            };
        };
        class UserActions {
            class light_bo_off {
                displayName = "B.O. Light off";
                position = "pos_driverpos";
                radius = 2;
                onlyForplayer = 0;
                condition = "(player == driver this) && this animationPhase 'light_bo'<0.5;";
                statement = "this animate ['light_bo', 1];this animate ['light_brake_bo', 1]";
            };
            class toggle_dve: light_bo_off {
                displayName = "Toggle DVE monitor";
                position = "zamerny";
                radius = 12;
                showwindow = 0;
                condition = "((driver this) isEqualTo (call rhs_fnc_findPlayer))";
                statement = "this animateSource ['dve_fold',abs((this AnimationSourcePhase 'dve_fold') - 1)]";
            };
            class light_bo_on: light_bo_off {
                displayName = "B.O. Light on";
                condition = "(player == driver this) && this animationPhase 'light_bo'==1;";
                statement = "this animate ['light_bo', 0];this animate ['light_brake_bo', 0]";
            };
            class light_stop_off: light_bo_off {
                displayName = "Stop Light off";
                condition = "(player == driver this) && this animationPhase 'light_stop'<0.5";
                statement = "this animate ['light_stop', 1]";
            };
            class light_stop_on: light_bo_off {
                displayName = "Stop Light on";
                condition = "(player == driver this) && this animationPhase 'light_stop'==1";
                statement = "this animate ['light_stop', 0]";
            };
            class lights_toggle {
                displayName = "Toggle short/long lights";
                position = "";
                shortcut = "vehLockTargets";
                radius = 12;
                priority = 1.5;
                showWindow = 0;
                onlyForplayer = 1;
                condition = "(player == driver this) AND (isLightOn this)";
                statement = "[this,0] call rhsusf_fnc_carLightToggle";
            };
            class cabinlights_toggle: lights_toggle {
                shortcut = "lockTarget";
                displayName = "Toggle cabin lights";
                statement = "[this,1] call rhsusf_fnc_carLightToggle";
            };
            class OpenCargoDoor {
                displayName = "Open Rear Door";
                position = "pos driver";
                radius = 15;
                showwindow = 0;
                condition = "this doorPhase 'DoorB' == 0 and {(call rhsusf_fnc_findPlayer) in this};";
                statement = "this animateDoor ['DoorB', 1];this setVariable ['ramp_handler',1,true]";
                onlyforplayer = 1;
                shortcut = "user12";
            };
            class CloseCargoDoor: OpenCargoDoor {
                displayName = "Close Rear Door";
                condition = "this doorPhase 'DoorB' > 0 and {(call rhsusf_fnc_findPlayer) in this};";
                statement = "this animateDoor ['DoorB', 0];this setVariable ['ramp_handler',0,true]";
            };
        };
        hullDamageCauseExplosion = 1;
        armorStructural = 8;
        class HitPoints: HitPoints {
            class HitHull: HitBody {
                armor = 0.75;
                passThrough = 1;
                name = "karoserie";
                visual = "zbytek";
                minimalhit = 0.05;
                explosionShielding = 0.01;
                radius = 0.22;
            };
            class HitFuel {
                armor = 1.5;
                material = -1;
                name = "palivo";
                visual = "-";
                explosionShielding = 0.5;
                passThrough = 0.2;
            };
            class HitEngine {
                armor = 0.9;
                material = -1;
                name = "motor";
                visual = "zbytek";
                passThrough = 0.2;
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Engine_Smoke {
                        simulation = "particles";
                        type = "SmallWreckSmoke";
                        position = "engine_smoke1";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 60;
                    };
                    class RHS_Engine_Fire: RHS_Engine_Smoke {
                        type = "SmallFireFPlace";
                    };
                    class RHS_Engine_Sparks: RHS_Engine_Smoke {
                        type = "RHS_FireSparks";
                    };
                    class RHS_Engine_Sounds: RHS_Engine_Smoke {
                        simulation = "sound";
                        type = "Fire";
                    };
                    class RHS_Engine_Smoke_small1: RHS_Engine_Smoke {
                        type = "WeaponWreckSmoke";
                        position = "engine_smoke2";
                    };
                    class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1 {
                        position = "engine_smoke3";
                    };
                };
            };
            class HitDuke1 {
                armor = 0.75;
                material = -1;
                name = "duke1";
                visual = "-";
                passThrough = 0;
                MinimalHit = 0.05;
                explosionShielding = 0.01;
                radius = 0.15;
            };
            class HitDuke2: HitDuke1 {
                name = "duke2";
                visual = "-";
            };
            class HitGlass7: HitGlass1 {
                name = "glass7";
                visual = "glass7";
            };
            class HitGlass8: HitGlass1 {
                name = "glass8";
                visual = "glass8";
            };
            class HitGlass9: HitGlass1 {
                name = "glass9";
                visual = "glass9";
            };
            class HitGlass10: HitGlass1 {
                name = "glass10";
                visual = "glass10";
            };
            class HitGlass11: HitGlass1 {
                name = "glass11";
                visual = "glass11";
            };
            class HitGlass12: HitGlass1 {
                name = "glass12";
                visual = "glass12";
            };
            class HitGlass13: HitGlass1 {
                name = "glass13";
                visual = "glass13";
            };
            class HitGlass14: HitGlass1 {
                name = "glass14";
                visual = "glass14";
            };
            class HitGlass15: HitGlass1 {
                name = "glass15";
                visual = "glass15";
            };
            class HitGlass16: HitGlass1 {
                name = "glass16";
                visual = "glass16";
            };
            class HitGlass17: HitGlass1 {
                name = "glass17";
                visual = "glass17";
            };
            class HitGlass18: HitGlass1 {
                name = "glass18";
                visual = "glass18";
            };
            class HitGlass19: HitGlass1 {
                name = "glass19";
                visual = "glass19";
            };
            class HitGlass20: HitGlass1 {
                name = "glass20";
                visual = "glass20";
            };
            class HitGlass21: HitGlass1 {
                name = "glass21";
                visual = "glass21";
            };
        };
        class Reflectors {
            class Left {
                color[] = {1900, 1300, 950};
                ambient[] = {5, 5, 5};
                position = "Light_L";
                direction = "Light_L_end";
                hitpoint = "Light_L";
                selection = "Light_L";
                size = 1;
                innerAngle = 100;
                outerAngle = 179;
                coneFadeCoef = 10;
                intensity = 1;
                useFlare = 0;
                dayLight = 0;
                flareSize = 1;
                class Attenuation {
                    start = 1;
                    constant = 0;
                    linear = 0;
                    quadratic = 0.25;
                    hardLimitStart = 30;
                    hardLimitEnd = 60;
                };
            };
            class Right: Left {
                position = "Light_R";
                direction = "Light_R_end";
                hitpoint = "Light_R";
                selection = "Light_R";
            };
            class Right2: Right {
                position = "light_R_flare";
                useFlare = 1;
            };
            class Left2: Left {
                position = "light_L_flare";
                useFlare = 1;
            };
            class Long_Left {
                color[] = {1900, 1300, 950};
                ambient[] = {5, 5, 5};
                position = "Light_L_Long";
                direction = "Light_L_Long_end";
                hitpoint = "Light_L";
                selection = "Light_L";
                size = 1;
                innerAngle = 22;
                outerAngle = 26;
                coneFadeCoef = 1;
                intensity = 100;
                useFlare = 0;
                dayLight = 0;
                flareSize = 1.5;
                flareMaxDistance = 750;
                class Attenuation {
                    start = 1;
                    constant = 0;
                    linear = 0.1;
                    quadratic = 0;
                    hardLimitStart = 500;
                    hardLimitEnd = 750;
                };
            };
            class Long_Right: Long_Left {
                position = "Light_R_Long";
                direction = "Light_R_Long_end";
                hitpoint = "Light_R";
                selection = "Light_R";
            };
            class Long_Right2: Long_Right {
                useFlare = 1;
                position = "light_R_Long_flare";
                innerAngle = 50;
                outerAngle = 179;
                coneFadeCoef = 51;
                intensity = 1;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 50;
                    hardLimitStart = 0;
                    hardLimitEnd = 3;
                };
            };
            class Long_Left2: Long_Left {
                useFlare = 1;
                position = "light_L_Long_flare";
                innerAngle = 50;
                outerAngle = 179;
                coneFadeCoef = 51;
                intensity = 1;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 50;
                    hardLimitStart = 0;
                    hardLimitEnd = 3;
                };
            };
            class cabin1 {
                color[] = {800, 900, 650};
                ambient[] = {5, 5, 5};
                intensity = 4;
                size = 1;
                innerAngle = 90;
                outerAngle = 165;
                coneFadeCoef = 1;
                position = "cabin_light1";
                direction = "cabin_light1_dir";
                hitpoint = "cabin_light1";
                selection = "cabin_light1";
                useFlare = 1;
                flareSize = 1;
                flareMaxDistance = 5;
                dayLight = 0;
                blinking = 0;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 70;
                    hardLimitStart = 2;
                    hardLimitEnd = 2.5;
                };
            };
            class cabin2: cabin1 {
                position = "cabin_light2";
                direction = "cabin_light2_dir";
                hitpoint = "cabin_light2";
                selection = "cabin_light2";
            };
            class cabin3: cabin1 {
                position = "cabin_light3";
                direction = "cabin_light3_dir";
                hitpoint = "cabin_light3";
                selection = "cabin_light3";
            };
        };
        aggregateReflectors[] = {{"Left", "Left2"}, {"Right", "Right2"}};
        armorLights = 0.01;
        class RenderTargets {
            class LeftMirror {
                renderTarget = "rendertarget0";
                class CameraView1 {
                    pointPosition = "m1p";
                    pointDirection = "m1d";
                    renderQuality = 2;
                    renderVisionMode = 4;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_1_TL", "PIP_1_TR", "PIP_1_BL", "PIP_1_BR"};
            };
            class RightMirror {
                renderTarget = "rendertarget1";
                class CameraView1 {
                    pointPosition = "m2p";
                    pointDirection = "m2d";
                    renderQuality = 2;
                    renderVisionMode = 4;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_2_TL", "PIP_2_TR", "PIP_2_BL", "PIP_2_BR"};
            };
            class DVE_Monitor {
                renderTarget = "rendertarget_dve";
                class CameraView1 {
                    pointPosition = "dve_view_pos";
                    pointDirection = "dve_view_dir";
                    renderQuality = 2;
                    renderVisionMode = 2;
                    fov = 0.6;
                };
                BBoxes[] = {
                    "PIP_DVE_TL",
                    "PIP_DVE_TR",
                    "PIP_DVE_BL",
                    "PIP_DVE_BR"
                };
            };
        };
        normalSpeedForwardCoef = 0.9;
        turnCoef = 3.5;
        terrainCoef = 0.5;
        simulation = "carx";
        precision = 9;
        brakeDistance = 3;
        acceleration = 15;
        fireResistance = 5;
        maxSpeed = 105;
        fuelCapacity = 20;
        wheelCircumference = 2.95;
        brakeIdleSpeed = 2;
        maxFordingDepth = 0.4;
        waterSpeedFactor = 0.3;
        waterResistance = 10;
        waterResistanceCoef = 0.2;
        waterLeakiness = 250;
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -5.03,
                "N",
                0,
                "D1",
                3.49,
                "D2",
                1.86,
                "D3",
                1.41,
                "D4",
                1,
                "D5",
                0.75,
                "D6",
                0.55
            };
            TransmissionRatios[] = {"High", 8.2};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        changeGearMinEffectivity[] = {0.95, 0, 0.99, 0.99, 0.99, 0.99, 0.99, 0.99};
        switchTime = 0.31;
        latency = 1.3;
        transmissionLosses = 18;
        dampersBumpCoef = 6;
        differentialType = "all_limited";
        frontRearSplit = 0.5;
        frontBias = 1.3;
        rearBias = 1.3;
        centreBias = 1.3;
        clutchStrength = 85;
        dampingRateFullThrottle = 0.078;
        dampingRateZeroThrottleClutchEngaged = 1.35;
        dampingRateZeroThrottleClutchDisengaged = 0.35;
        torqueCurve[] = {
            {0.318182, 0.457898},
            {0.454545, 0.786724},
            {0.590909, 1},
            {0.636364, 1},
            {0.727273, 0.990781},
            {0.909091, 0.974186},
            {0.954545, 0.940381},
            {1.05273, 0}
        };
        enginePower = 336;
        peakTorque = 2277.8;
        minOmega = 65;
        maxOmega = 230.38;
        idleRPM = 700;
        redRPM = 2200;
        engineLosses = 12;
        thrustDelay = 1;
        engineBrakeCoef = 0.8;
        antiRollbarForceCoef = 1.5;
        antiRollbarForceLimit = 2.5;
        antiRollbarSpeedMin = 10;
        antiRollbarSpeedMax = 65;
        accelAidForceSpd = 2.23;
        accelAidForceCoef = 4;
        accelAidForceYOffset = -1.3;
        class Wheels {
            class L1 {
                side = "left";
                boneName = "wheel_1_1_damper";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                suspForceAppPointOffset = "wheel_1_1_axis";
                tireForceAppPointOffset = "wheel_1_1_axis";
                suspTravelDirection[] = {-0.125, -1, 0};
                width = 0.37;
                steering = 1;
                mass = 80;
                MOI = 25;
                dampingRate = 0.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 35000;
                maxHandBrakeTorque = 0;
                maxCompression = 0.15;
                maxDroop = 0.15;
                sprungMass = -1;
                springStrength = 305000;
                springDamperRate = 45725;
                longitudinalStiffnessPerUnitGravity = 10000;
                latStiffX = 40;
                latStiffY = 180;
                frictionVsSlipGraph[] = {{0, 2.5}, {0.5, 2.3}, {1, 2}};
            };
            class L2: L1 {
                boneName = "wheel_1_2_damper";
                steering = 0;
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                suspForceAppPointOffset = "wheel_1_2_axis";
                tireForceAppPointOffset = "wheel_1_2_axis";
            };
            class L3: L1 {
                boneName = "wheel_1_3_damper";
                steering = 0;
                center = "wheel_1_3_axis";
                boundary = "wheel_1_3_bound";
                suspForceAppPointOffset = "wheel_1_3_axis";
                tireForceAppPointOffset = "wheel_1_3_axis";
                maxHandBrakeTorque = 300000;
            };
            class R1: L1 {
                boneName = "wheel_2_1_damper";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                suspForceAppPointOffset = "wheel_2_1_axis";
                tireForceAppPointOffset = "wheel_2_1_axis";
                steering = 1;
                side = "right";
                suspTravelDirection[] = {0.125, -1, 0};
            };
            class R2: R1 {
                boneName = "wheel_2_2_damper";
                steering = 0;
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                suspForceAppPointOffset = "wheel_2_2_axis";
                tireForceAppPointOffset = "wheel_2_2_axis";
            };
            class R3: R1 {
                boneName = "wheel_2_3_damper";
                steering = 0;
                center = "wheel_2_3_axis";
                boundary = "wheel_2_3_bound";
                suspForceAppPointOffset = "wheel_2_3_axis";
                tireForceAppPointOffset = "wheel_2_3_axis";
                maxHandBrakeTorque = 300000;
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_rg33l\data\RG33_Body.rvmat",
                "rhsusf\addons\rhsusf_rg33l\data\RG33_Body_dam.rvmat",
                "rhsusf\addons\rhsusf_rg33l\data\RG33_destruction.rvmat",
                "rhsusf\addons\rhsusf_rg33l\data\RG33_Armor.rvmat",
                "rhsusf\addons\rhsusf_rg33l\data\RG33_Armor_dam.rvmat",
                "rhsusf\addons\rhsusf_rg33l\data\RG33_destruction.rvmat",
                "rhsusf\addons\rhsusf_rg33l\data\RG33_Accessory2.rvmat",
                "rhsusf\addons\rhsusf_rg33l\data\RG33_Accessory2_dam.rvmat",
                "rhsusf\addons\rhsusf_rg33l\data\RG33_destruction.rvmat",
                "rhsusf\addons\rhsusf_rg33l\data\RG33_Interior.rvmat",
                "rhsusf\addons\rhsusf_rg33l\data\RG33_Interior_dam.rvmat",
                "rhsusf\addons\rhsusf_rg33l\data\RG33_destruction.rvmat",
                "rhsusf\addons\rhsusf_rg33l\data\RG33_Wheels.rvmat",
                "rhsusf\addons\rhsusf_rg33l\data\RG33_Wheels_dam.rvmat",
                "rhsusf\addons\rhsusf_rg33l\data\RG33_destruction.rvmat",
                "rhsusf\addons\rhsusf_rg33l\data\RG33_Chassis.rvmat",
                "rhsusf\addons\rhsusf_rg33l\data\RG33_Chassis_dam.rvmat",
                "rhsusf\addons\rhsusf_rg33l\data\RG33_destruction.rvmat",
                "rhsusf\addons\rhsusf_rg33\data\glass.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_int.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\glass_veh_armored_damage.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class EventHandlers: EventHandlers {
            init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
            class RHSUSF_EventHandlers {
                seatSwitched = "if(not(_this select 1 in [driver (_this select 0),gunner (_this select 0)]))then{ (_this select 1) action ['turnIn',_this select 0]}";
                postInit = "_this call rhs_fnc_reapplyTextures";
                turnIn = "([0] + _this)  call rhsusf_fnc_turretAction;";
                turnOut = "([1] + _this) call rhsusf_fnc_turretAction;";
                engine = "_this call rhs_fnc_engineCheckDamage";
            };
        };
        class RHS_TowingSystem {
            class Carrier {
                rhs_maxCargoMass = 8754;
                rhs_attachPoint = "";
                rhs_attachPointPos[] = {-0.05, -3.6, 0};
            };
        };
    };
    class rhsusf_M1232_usarmy_d: rhsusf_RG33L_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1232_usarmy_d.paa";
        displayName = "$STR_RHS_M1232_NAME";
        picture = "\rhsusf\addons\rhsusf_rg33l\pictures\rhs_rg33l_unarmed_pic_ca.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Body_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Accessory2_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Armor_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Wheels_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_RG33L\data\MCTAGS_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa",
            "rhsusf\addons\rhsusf_RG33L\Decals\RG33_USARMY_Decal_ca.paa"
        };
    };
    class rhsusf_RG33L_GPK_base: rhsusf_RG33L_base {
        threat[] = {0.9, 0.3, 0.1};
        showNVGGunner = 1;
        class AnimationSources: AnimationSources {
            class GunnerAdjust_source {
                source = "user";
                animPeriod = 1;
                initPhase = 0.25;
            };
            class hide_ogpkover {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide overhead protection";
                source = "user";
                mass = -20;
                animPeriod = 0.00001;
                initPhase = 1;
            };
            class hide_ogpknet {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide camo net";
                source = "user";
                mass = 0;
                animPeriod = 0.00001;
                initPhase = 1;
            };
            class hide_ogpkbust {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide turret bustle";
                source = "user";
                mass = -20;
                animPeriod = 0.00001;
                initPhase = 1;
            };
        };
        animationList[] = {
            "hide_ogpkover",
            0.5,
            "hide_ogpknet",
            0.5,
            "hide_ogpkbust",
            0.5
        };
        class RenderTargets: RenderTargets {
            class LeftMirror: LeftMirror {
                renderTarget = "rendertarget0";
                class CameraView1: CameraView1 {};
            };
            class RightMirror: RightMirror {
                renderTarget = "rendertarget1";
                class CameraView1: CameraView1 {};
            };
            class LeftMirror2 {
                renderTarget = "rendertarget2";
                class CameraView1 {
                    pointPosition = "pp4";
                    pointDirection = "pd4";
                    renderQuality = 2;
                    renderVisionMode = 4;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_4_TL", "PIP_4_TR", "PIP_4_BL", "PIP_4_BR"};
            };
            class RightMirror2 {
                renderTarget = "rendertarget3";
                class CameraView1 {
                    pointPosition = "pp3";
                    pointDirection = "pd3";
                    renderQuality = 2;
                    renderVisionMode = 4;
                    fov = 0.7;
                };
                BBoxes[] = {"PIP_3_TL", "PIP_3_TR", "PIP_3_BL", "PIP_3_BR"};
            };
            class DVE_Monitor: DVE_Monitor {
                renderTarget = "rendertarget_dve";
                class CameraView1: CameraView1 {};
                BBoxes[] = {
                    "PIP_DVE_TL",
                    "PIP_DVE_TR",
                    "PIP_DVE_BL",
                    "PIP_DVE_BR"
                };
            };
        };
        class EventHandlers: EventHandlers {
            class RHS_Turret_EH {
                turnIn = "_this call rhsusf_fnc_turret_gunnerAdjust_turnIn";
                hit = "_this call rhsusf_fnc_turret_gunnerAdjust_AI_hit";
                engine = "_this call rhsusf_fnc_turret_gunnerAdjust_AI_engine";
            };
        };
    };
    class rhsusf_M1232_M2_usarmy_d: rhsusf_RG33L_GPK_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1232_M2_usarmy_d.paa";
        displayName = "$STR_RHS_M1232_M2_NAME";
        picture = "\rhsusf\addons\rhsusf_rg33l\pictures\rhs_rg33l_armed_pic_ca.paa";
        model = "\rhsusf\addons\rhsusf_rg33l\M1232_M2";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Body_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Accessory2_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Armor_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Wheels_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_RG33L\data\MCTAGS_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa",
            "rhsusf\addons\rhsusf_RG33L\Decals\RG33_USARMY_Decal_ca.paa"
        };
        scope = 2;
        accuracy = 0.5;
        class AnimationSources: AnimationSources {
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
            class muzzle_rot_MG {
                source = "ammorandom";
                weapon = "RHS_M2";
            };
        };
        class Turrets: Turrets {
            class M2_Turret: MainTurret {
                gunnerLeftHandAnimName = "OtocHlaven_Shake";
                gunnerRightHandAnimName = "OtocHlaven_Shake";
                gunnerLeftLegAnimName = "gunner_legs";
                gunnerRightLegAnimName = "gunner_legs";
                body = "mainTurret";
                gun = "mainGun";
                animationSourceBody = "mainTurret";
                animationSourceGun = "mainGun";
                animationSourceStickX = "MainTurret_Inertia";
                animationSourceStickY = "MainGun_Inertia";
                turretInfoType = "RHS_RscWeaponZeroing_TurretAdjust";
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
                gunnerForceOptics = 0;
                gunnerOutOpticsShowCursor = 0;
                weapons[] = {"RHS_M2"};
                magazines[] = {
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red"
                };
                minElev = -10;
                maxElev = 40;
                soundServo[] = {"A3\sounds_f\dummysound", 0.000001, 1};
                gunnerAction = "RHS_HMMWV_Gunner03";
                gunnerInAction = "RHS_HMMWV_Gunner03_in";
                lodTurnedIn = 0;
                lodTurnedOut = 1000;
                lodOpticsOut = 1000;
                canhideGunner = 1;
                inGunnerMayFire = 0;
                outGunnerMayFire = 1;
                viewGunnerInExternal = 1;
                gunnerGetInAction = "GetInMRAP_01_cargo";
                gunnerGetOutAction = "GetOutMRAP_01";
                gunnerDoor = "DoorR";
                gunnerCompartments = "Compartment1";
                ejectDeadGunner = 0;
                castGunnerShadow = 1;
                stabilizedInAxes = 0;
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                memoryPointGunnerOptics = "";
                memoryPointGunnerOutOptics = "gunnerview";
                gunnerOpticsModel = "";
                gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                optics = 0;
                disableSoundAttenuation = 1;
                memoryPointsGetInGunner = "pos codriver";
                memoryPointsGetInGunnerDir = "pos codriver dir";
                class ViewOptics: ViewOptics {
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                class ViewGunner: ViewOptics {};
            };
            class CargoTurret_01: CargoTurret_01 {
                class TurnOut {
                    limitsArrayTop[] = {{45, -160}, {45, 160}};
                    limitsArrayBottom[] = {
                        {-13.8259, -132.4192},
                        {2.0787, -124.8144},
                        {6.2968, -91.8814},
                        {2.6767, -84.6096},
                        {-7.7983, -74.6288},
                        {-8.8897, -72.2775},
                        {-13.2618, -71.3303},
                        {-24.2613, 71.6531},
                        {-14.4574, 78.2305},
                        {-13.4463, 81.1107},
                        {-13.5018, 85.979},
                        {-7.8903, 86.9097},
                        {-8.0675, 116.0215},
                        {-8.9988, 117.599},
                        {-14.5298, 120.2257},
                        {-14.128, 123.0702},
                        {-11.482, 125.2442},
                        {-10.9541, 132.396},
                        {-12.4393, 139.8761},
                        {-14.6103, 145.9359}
                    };
                };
            };
            class CargoTurret_02: CargoTurret_02 {
                class TurnOut {
                    limitsArrayTop[] = {{45, -160}, {45, 160}};
                    limitsArrayBottom[] = {
                        {-8.4929, -121.755},
                        {-7.8962, -110.5382},
                        {-14.1648, -108.6039},
                        {-14.3219, -90.5885},
                        {-10.2817, -87.7792},
                        {-9.0565, -75.9969},
                        {-15.5082, -66.9248},
                        {-32.8865, -45.8966},
                        {-34.2066, 64.135},
                        {-16.2796, 77.8835},
                        {-6.7441, 84.5794},
                        {-4.5728, 87.2431},
                        {-2.2958, 89.0149},
                        {4.2706, 97.8377},
                        {5.679, 104.009},
                        {2.2804, 134.3323},
                        {-13.281, 135.8013},
                        {-17.2118, 157.5442}
                    };
                };
            };
            class CargoTurret_03: CargoTurret_03 {
                class TurnOut {
                    limitsArrayTop[] = {{45, -160}, {45, 160}};
                    limitsArrayBottom[] = {
                        {-8.3014, -121.1626},
                        {-6.9716, -114.7952},
                        {3.2541, -111.3805},
                        {3.6021, -87.3033},
                        {1.1921, -83.8334},
                        {-6.8407, -79.3857},
                        {-11.3016, -74.2475},
                        {-19.8969, -61.7452},
                        {-34.5781, -35.0912},
                        {-35.0492, 55.5252},
                        {-29.5614, 68.0467},
                        {-14.5186, 74.2655},
                        {-9.8469, 102.176},
                        {-5.5565, 133.2736},
                        {-6.8999, 146.1197}
                    };
                };
            };
            class CargoTurret_04: CargoTurret_04 {
                class TurnOut {
                    limitsArrayTop[] = {{45, -160}, {45, 160}};
                    limitsArrayBottom[] = {
                        {-28.5738, -127.5287},
                        {-33.7087, -92.9864},
                        {-21.1149, -88.4307},
                        {-16.48, -68.1569},
                        {-20.6228, -55.8327},
                        {-35.0127, -28.8438},
                        {-34.4964, 62.7092},
                        {-18.33, 75.6292},
                        {-12.2273, 78.4947},
                        {-5.0579, 85.8318},
                        {-1.974, 89.1489},
                        {2.6311, 94.9857},
                        {2.2924, 108.5605},
                        {1.4529, 119.3579},
                        {-0.9739, 121.3212},
                        {-10.3261, 123.4012},
                        {-16.7879, 151.699}
                    };
                };
            };
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.05, -3.6, -0.07};
            };
        };
    };
    class rhsusf_M1232_MK19_usarmy_d: rhsusf_M1232_M2_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1232_MK19_usarmy_d.paa";
        displayName = "$STR_RHS_M1232_MK19_NAME";
        model = "\rhsusf\addons\rhsusf_rg33l\M1232_MK19";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Body_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Accessory2_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Armor_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Wheels_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_RG33L\data\MCTAGS_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa",
            "rhsusf\addons\rhsusf_RG33L\Decals\RG33_USARMY_Decal_ca.paa"
        };
        accuracy = 0.5;
        class AnimationSources: AnimationSources {
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
        threat[] = {0.9, 0.3, 0.1};
        showNVGGunner = 1;
        class Turrets: Turrets {
            class M2_Turret: M2_Turret {
                discreteDistance[] = {
                    100,
                    200,
                    300,
                    400,
                    500,
                    600,
                    800,
                    1000,
                    1100,
                    1200,
                    1300,
                    1400,
                    1500
                };
                discreteDistanceInitIndex = 2;
                gunnerLeftHandAnimName = "OtocHlaven";
                gunnerRightHandAnimName = "OtocHlaven";
                weapons[] = {"RHS_MK19"};
                magazines[] = {
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M1001",
                    "RHS_48Rnd_40mm_MK19_M1001",
                    "RHS_48Rnd_40mm_MK19_M1001"
                };
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.05, -3.6, -0.07};
            };
        };
    };
    class rhsusf_M1237_base: rhsusf_RG33L_GPK_base {
        class Hitpoints: HitPoints {
            class Hit_Rhino {
                armor = -50;
                armorComponent = "rhino";
                name = "rhino";
                visual = "-";
                minimalhit = -0.4;
                explosionShielding = 8.5;
                passThrough = 0;
                radius = 0.2;
                class DestructionEffects {
                    ammoExplosionEffect = "";
                    class RHS_Rhino_Destruction_01 {
                        simulation = "particles";
                        type = "rhs_rhino_dst_01";
                        position = "fx_rhino_1";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 0.1;
                    };
                    class RHS_Rhino_Destruction_02: RHS_Rhino_Destruction_01 {
                        type = "rhs_rhino_dst_02";
                        position = "fx_rhino_2";
                    };
                    class RHS_Rhino_Destruction_03: RHS_Rhino_Destruction_01 {
                        type = "rhs_rhino_dst_03";
                        position = "fx_rhino_3";
                    };
                    class RHS_Rhino_Destruction_01_smoke: RHS_Rhino_Destruction_01 {
                        type = "SmallWreckSmoke";
                        position = "fx_rhino_1";
                    };
                    class RHS_Rhino_Destruction_02_smoke: RHS_Rhino_Destruction_01 {
                        type = "SmallWreckSmoke";
                        position = "fx_rhino_2";
                    };
                    class RHS_Rhino_Destruction_03_smoke: RHS_Rhino_Destruction_01 {
                        type = "SmallWreckSmoke";
                        position = "fx_rhino_3";
                    };
                    class RHS_Rhino_Destruction_01_sparks: RHS_Rhino_Destruction_01 {
                        type = "RHS_FireSparks";
                        position = "fx_rhino_1";
                    };
                    class RHS_Rhino_Destruction_02_sparks: RHS_Rhino_Destruction_01 {
                        type = "RHS_FireSparks";
                        position = "fx_rhino_2";
                    };
                    class RHS_Rhino_Destruction_03_sparks: RHS_Rhino_Destruction_01 {
                        type = "RHS_FireSparks";
                        position = "fx_rhino_3";
                    };
                };
            };
        };
        class AnimationSources: AnimationSources {
            class rhino {
                source = "door";
                animPeriod = 2;
            };
            class hide_rhino {
                author = "$STR_RHSUSF_AUTHOR_FULL";
                displayName = "hide rhino";
                source = "user";
                mass = -20;
                animPeriod = 0.00001;
                initPhase = 0;
            };
            class hit_rhino_source {
                source = "hit";
                hitpoint = "Hit_Rhino";
                raw = 1;
            };
        };
        class Attributes: Attributes {
            class ObjectTexture: ObjectTexture {};
            class rhs_hideDUKE: rhs_hideDUKE {};
            class DoorB: DoorB {};
            class DoorL: DoorL {};
            class DoorR: DoorR {};
            class rhino {
                control = "CheckboxNumber";
                defaultValue = "0";
                displayName = "Lower Rhino";
                property = "Rhino_down";
                expression = "_this animateDoor ['%s',_value,true]";
            };
        };
        class UserActions: UserActions {
            class LowerRhino {
                displayName = "Lower Rhino";
                position = "pos_driverpos";
                radius = 2;
                showwindow = 0;
                condition = "((call rhs_fnc_findPlayer) == driver this) && {this animationphase 'hide_rhino' < 0.5} && {this getHitpointDamage 'Hit_Rhino' < 1} && {this doorPhase 'rhino' < 0.1;}";
                statement = "[this,1] call rhs_fnc_rhino_system";
                onlyforplayer = 1;
            };
            class RaiseRhino: LowerRhino {
                displayName = "Raise Rhino";
                condition = "((call rhs_fnc_findPlayer) == driver this) && {this animationphase 'hide_rhino' < 0.5} && {this getHitpointDamage 'Hit_Rhino' < 1} && {this doorPhase 'rhino' > 0.9};";
                statement = "[this,0] call rhs_fnc_rhino_system";
            };
        };
    };
    class rhsusf_M1237_M2_usarmy_d: rhsusf_M1237_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1237_M2_usarmy_d.paa";
        displayName = "$STR_RHS_M1237_M2_NAME";
        picture = "\rhsusf\addons\rhsusf_rg33l\pictures\rhs_rg33l_rhino_pic_ca.paa";
        model = "\rhsusf\addons\rhsusf_rg33l\M1237_M2";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Body_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Accessory2_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Armor_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Wheels_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_RG33L\data\MCTAGS_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa",
            "rhsusf\addons\rhsusf_RG33L\Decals\RG33_USARMY_Decal_ca.paa"
        };
        scope = 2;
        accuracy = 0.5;
        class AnimationSources: AnimationSources {
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
            class muzzle_rot_MG {
                source = "ammorandom";
                weapon = "RHS_M2";
            };
        };
        threat[] = {0.9, 0.3, 0.1};
        showNVGGunner = 1;
        class Turrets: Turrets {
            class M2_Turret: MainTurret {
                gunnerLeftHandAnimName = "OtocHlaven_Shake";
                gunnerRightHandAnimName = "OtocHlaven_Shake";
                gunnerLeftLegAnimName = "gunner_legs";
                gunnerRightLegAnimName = "gunner_legs";
                body = "mainTurret";
                gun = "mainGun";
                animationSourceBody = "mainTurret";
                animationSourceGun = "mainGun";
                animationSourceStickX = "MainTurret_Inertia";
                animationSourceStickY = "MainGun_Inertia";
                turretInfoType = "RHS_RscWeaponZeroing_TurretAdjust";
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
                gunnerForceOptics = 0;
                gunnerOutOpticsShowCursor = 0;
                weapons[] = {"RHS_M2"};
                magazines[] = {
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_100rnd_127x99_mag_Tracer_Red"
                };
                minElev = -10;
                maxElev = 40;
                soundServo[] = {"A3\sounds_f\dummysound", 0.000001, 1};
                gunnerAction = "RHS_HMMWV_Gunner03";
                gunnerInAction = "RHS_HMMWV_Gunner03_in";
                lodTurnedIn = 0;
                lodTurnedOut = 1000;
                lodOpticsOut = 1000;
                canhideGunner = 1;
                inGunnerMayFire = 0;
                outGunnerMayFire = 1;
                viewGunnerInExternal = 1;
                gunnerGetInAction = "GetInMRAP_01_cargo";
                gunnerGetOutAction = "GetOutMRAP_01";
                gunnerDoor = "DoorR";
                gunnerCompartments = "Compartment1";
                ejectDeadGunner = 0;
                castGunnerShadow = 1;
                stabilizedInAxes = 0;
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                memoryPointGunnerOptics = "";
                memoryPointGunnerOutOptics = "gunnerview";
                gunnerOpticsModel = "";
                gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                optics = 0;
                disableSoundAttenuation = 1;
                memoryPointsGetInGunner = "pos codriver";
                memoryPointsGetInGunnerDir = "pos codriver dir";
                class ViewOptics: ViewOptics {
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                class ViewGunner: ViewOptics {};
            };
            class CargoTurret_01: CargoTurret_01 {
                class TurnOut {
                    limitsArrayTop[] = {{45, -160}, {45, 160}};
                    limitsArrayBottom[] = {
                        {-13.8259, -132.4192},
                        {2.0787, -124.8144},
                        {6.2968, -91.8814},
                        {2.6767, -84.6096},
                        {-7.7983, -74.6288},
                        {-8.8897, -72.2775},
                        {-13.2618, -71.3303},
                        {-24.2613, 71.6531},
                        {-14.4574, 78.2305},
                        {-13.4463, 81.1107},
                        {-13.5018, 85.979},
                        {-7.8903, 86.9097},
                        {-8.0675, 116.0215},
                        {-8.9988, 117.599},
                        {-14.5298, 120.2257},
                        {-14.128, 123.0702},
                        {-11.482, 125.2442},
                        {-10.9541, 132.396},
                        {-12.4393, 139.8761},
                        {-14.6103, 145.9359}
                    };
                };
            };
            class CargoTurret_02: CargoTurret_02 {
                class TurnOut {
                    limitsArrayTop[] = {{45, -160}, {45, 160}};
                    limitsArrayBottom[] = {
                        {-8.4929, -121.755},
                        {-7.8962, -110.5382},
                        {-14.1648, -108.6039},
                        {-14.3219, -90.5885},
                        {-10.2817, -87.7792},
                        {-9.0565, -75.9969},
                        {-15.5082, -66.9248},
                        {-32.8865, -45.8966},
                        {-34.2066, 64.135},
                        {-16.2796, 77.8835},
                        {-6.7441, 84.5794},
                        {-4.5728, 87.2431},
                        {-2.2958, 89.0149},
                        {4.2706, 97.8377},
                        {5.679, 104.009},
                        {2.2804, 134.3323},
                        {-13.281, 135.8013},
                        {-17.2118, 157.5442}
                    };
                };
            };
            class CargoTurret_03: CargoTurret_03 {
                class TurnOut {
                    limitsArrayTop[] = {{45, -160}, {45, 160}};
                    limitsArrayBottom[] = {
                        {-8.3014, -121.1626},
                        {-6.9716, -114.7952},
                        {3.2541, -111.3805},
                        {3.6021, -87.3033},
                        {1.1921, -83.8334},
                        {-6.8407, -79.3857},
                        {-11.3016, -74.2475},
                        {-19.8969, -61.7452},
                        {-34.5781, -35.0912},
                        {-35.0492, 55.5252},
                        {-29.5614, 68.0467},
                        {-14.5186, 74.2655},
                        {-9.8469, 102.176},
                        {-5.5565, 133.2736},
                        {-6.8999, 146.1197}
                    };
                };
            };
            class CargoTurret_04: CargoTurret_04 {
                class TurnOut {
                    limitsArrayTop[] = {{45, -160}, {45, 160}};
                    limitsArrayBottom[] = {
                        {-28.5738, -127.5287},
                        {-33.7087, -92.9864},
                        {-21.1149, -88.4307},
                        {-16.48, -68.1569},
                        {-20.6228, -55.8327},
                        {-35.0127, -28.8438},
                        {-34.4964, 62.7092},
                        {-18.33, 75.6292},
                        {-12.2273, 78.4947},
                        {-5.0579, 85.8318},
                        {-1.974, 89.1489},
                        {2.6311, 94.9857},
                        {2.2924, 108.5605},
                        {1.4529, 119.3579},
                        {-0.9739, 121.3212},
                        {-10.3261, 123.4012},
                        {-16.7879, 151.699}
                    };
                };
            };
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.05, -4.46, -0.07};
            };
        };
    };
    class rhsusf_M1237_MK19_usarmy_d: rhsusf_M1237_M2_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1237_MK19_usarmy_d.paa";
        displayName = "$STR_RHS_M1237_MK19_NAME";
        picture = "\rhsusf\addons\rhsusf_rg33l\pictures\rhs_rg33l_rhino_pic_ca.paa";
        model = "\rhsusf\addons\rhsusf_rg33l\M1237_MK19";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Body_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Accessory2_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Armor_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Wheels_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_RG33L\data\MCTAGS_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa",
            "rhsusf\addons\rhsusf_RG33L\Decals\RG33_USARMY_Decal_ca.paa"
        };
        accuracy = 0.5;
        class AnimationSources: AnimationSources {
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
        class Turrets: Turrets {
            class M2_Turret: M2_Turret {
                discreteDistance[] = {
                    100,
                    200,
                    300,
                    400,
                    500,
                    600,
                    800,
                    1000,
                    1100,
                    1200,
                    1300,
                    1400,
                    1500
                };
                discreteDistanceInitIndex = 2;
                gunnerLeftHandAnimName = "OtocHlaven";
                gunnerRightHandAnimName = "OtocHlaven";
                weapons[] = {"RHS_MK19"};
                magazines[] = {
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M430A1",
                    "RHS_48Rnd_40mm_MK19_M1001",
                    "RHS_48Rnd_40mm_MK19_M1001",
                    "RHS_48Rnd_40mm_MK19_M1001"
                };
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.05, -4.46, 0.14};
            };
        };
    };
    class rhsusf_M1232_MC_M2_usmc_d: rhsusf_M1232_M2_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1232_M2_usarmy_d.paa";
        displayName = "$STR_RHS_M1232_M2_MC_NAME";
        model = "\rhsusf\addons\rhsusf_rg33l\M1232_MC_M2";
        class Turrets: Turrets {
            class M2_Turret: M2_Turret {
                gunnerAction = "RHS_MCTAGS_Gunner03";
                gunnerInAction = "RHS_MCTAGS_Gunner03_in";
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
        };
        class AnimationSources: AnimationSources {
            class hide_ogpkover: hide_ogpkover {
                displayName = "";
            };
            class hide_ogpknet: hide_ogpknet {
                displayName = "";
            };
            class hide_ogpkbust: hide_ogpkbust {
                displayName = "";
            };
        };
        class RenderTargets: RenderTargets {
            class LeftMirror: LeftMirror {
                renderTarget = "rendertarget0";
                class CameraView1: CameraView1 {};
            };
            class RightMirror: RightMirror {
                renderTarget = "rendertarget1";
                class CameraView1: CameraView1 {};
            };
            class DVE_Monitor: DVE_Monitor {
                renderTarget = "rendertarget_dve";
                class CameraView1: CameraView1 {};
                BBoxes[] = {
                    "PIP_DVE_TL",
                    "PIP_DVE_TR",
                    "PIP_DVE_BL",
                    "PIP_DVE_BR"
                };
            };
        };
        faction = "rhs_faction_usmc_d";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Body_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Accessory2_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Armor_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Wheels_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_RG33L\data\MCTAGS_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa",
            "rhsusf\addons\rhsusf_RG33L\Decals\RG33_USMC_Decal_ca.paa"
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.05, -3.6, -0.1};
            };
        };
    };
    class rhsusf_M1232_MC_M2_usmc_wd: rhsusf_M1232_M2_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1232_M2_usarmy_wd.paa";
        displayName = "$STR_RHS_M1232_M2_MC_NAME";
        model = "\rhsusf\addons\rhsusf_rg33l\M1232_MC_M2";
        class Turrets: Turrets {
            class M2_Turret: M2_Turret {
                gunnerAction = "RHS_MCTAGS_Gunner03";
                gunnerInAction = "RHS_MCTAGS_Gunner03_in";
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
        };
        class AnimationSources: AnimationSources {
            class hide_ogpkover: hide_ogpkover {
                displayName = "";
            };
            class hide_ogpknet: hide_ogpknet {
                displayName = "";
            };
            class hide_ogpkbust: hide_ogpkbust {
                displayName = "";
            };
        };
        class RenderTargets: RenderTargets {
            class LeftMirror: LeftMirror {
                renderTarget = "rendertarget0";
                class CameraView1: CameraView1 {};
            };
            class RightMirror: RightMirror {
                renderTarget = "rendertarget1";
                class CameraView1: CameraView1 {};
            };
            class DVE_Monitor: DVE_Monitor {
                renderTarget = "rendertarget_dve";
                class CameraView1: CameraView1 {};
                BBoxes[] = {
                    "PIP_DVE_TL",
                    "PIP_DVE_TR",
                    "PIP_DVE_BL",
                    "PIP_DVE_BR"
                };
            };
        };
        faction = "rhs_faction_usmc_wd";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Body_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Chassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Accessory2_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Armor_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Wheels_WD_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_RG33L\data\MCTAGS_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa",
            "rhsusf\addons\rhsusf_RG33L\Decals\RG33_USMC_Decal_ca.paa"
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.05, -3.6, -0.1};
            };
        };
    };
    class rhsusf_M1232_MC_MK19_usmc_d: rhsusf_M1232_MK19_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1232_MK19_usarmy_d.paa";
        displayName = "$STR_RHS_M1232_MK19_MC_NAME";
        model = "\rhsusf\addons\rhsusf_rg33l\M1232_MC_MK19";
        class Turrets: Turrets {
            class M2_Turret: M2_Turret {
                gunnerAction = "RHS_MCTAGS_Gunner03";
                gunnerInAction = "RHS_MCTAGS_Gunner03_in";
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
        };
        class AnimationSources: AnimationSources {
            class hide_ogpkover: hide_ogpkover {
                displayName = "";
            };
            class hide_ogpknet: hide_ogpknet {
                displayName = "";
            };
            class hide_ogpkbust: hide_ogpkbust {
                displayName = "";
            };
        };
        class RenderTargets: RenderTargets {
            class LeftMirror: LeftMirror {
                renderTarget = "rendertarget0";
                class CameraView1: CameraView1 {};
            };
            class RightMirror: RightMirror {
                renderTarget = "rendertarget1";
                class CameraView1: CameraView1 {};
            };
            class DVE_Monitor: DVE_Monitor {
                renderTarget = "rendertarget_dve";
                class CameraView1: CameraView1 {};
                BBoxes[] = {
                    "PIP_DVE_TL",
                    "PIP_DVE_TR",
                    "PIP_DVE_BL",
                    "PIP_DVE_BR"
                };
            };
        };
        faction = "rhs_faction_usmc_d";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Body_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Accessory2_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Armor_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Wheels_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_RG33L\data\MCTAGS_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa",
            "rhsusf\addons\rhsusf_RG33L\Decals\RG33_USMC_Decal_ca.paa"
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.05, -3.6, 0.11};
            };
        };
    };
    class rhsusf_M1232_MC_MK19_usmc_wd: rhsusf_M1232_MK19_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1232_MK19_usarmy_wd.paa";
        displayName = "$STR_RHS_M1232_MK19_MC_NAME";
        model = "\rhsusf\addons\rhsusf_rg33l\M1232_MC_MK19";
        class Turrets: Turrets {
            class M2_Turret: M2_Turret {
                gunnerAction = "RHS_MCTAGS_Gunner03";
                gunnerInAction = "RHS_MCTAGS_Gunner03_in";
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
        };
        class AnimationSources: AnimationSources {
            class hide_ogpkover: hide_ogpkover {
                displayName = "";
            };
            class hide_ogpknet: hide_ogpknet {
                displayName = "";
            };
            class hide_ogpkbust: hide_ogpkbust {
                displayName = "";
            };
        };
        class RenderTargets: RenderTargets {
            class LeftMirror: LeftMirror {
                renderTarget = "rendertarget0";
                class CameraView1: CameraView1 {};
            };
            class RightMirror: RightMirror {
                renderTarget = "rendertarget1";
                class CameraView1: CameraView1 {};
            };
            class DVE_Monitor: DVE_Monitor {
                renderTarget = "rendertarget_dve";
                class CameraView1: CameraView1 {};
                BBoxes[] = {
                    "PIP_DVE_TL",
                    "PIP_DVE_TR",
                    "PIP_DVE_BL",
                    "PIP_DVE_BR"
                };
            };
        };
        faction = "rhs_faction_usmc_wd";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Body_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Chassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Accessory2_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Armor_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Wheels_WD_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_RG33L\data\MCTAGS_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa",
            "rhsusf\addons\rhsusf_RG33L\Decals\RG33_USMC_Decal_ca.paa"
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.05, -3.6, 0.11};
            };
        };
    };
    class rhsusf_M1232_usarmy_wd: rhsusf_M1232_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1232_usarmy_wd.paa";
        displayName = "$STR_RHS_M1232_NAME";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Body_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Chassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Accessory2_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Armor_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Wheels_WD_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_RG33L\data\MCTAGS_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa",
            "rhsusf\addons\rhsusf_RG33L\Decals\RG33_USARMY_Decal_ca.paa"
        };
    };
    class rhsusf_M1232_M2_usarmy_wd: rhsusf_M1232_M2_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1232_M2_usarmy_wd.paa";
        displayName = "$STR_RHS_M1232_M2_NAME";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Body_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Chassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Accessory2_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Armor_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Wheels_WD_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_RG33L\data\MCTAGS_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa",
            "rhsusf\addons\rhsusf_RG33L\Decals\RG33_USARMY_Decal_ca.paa"
        };
    };
    class rhsusf_M1232_MK19_usarmy_wd: rhsusf_M1232_MK19_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1232_MK19_usarmy_wd.paa";
        displayName = "$STR_RHS_M1232_MK19_NAME";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Body_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Chassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Accessory2_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Armor_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Wheels_WD_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_RG33L\data\MCTAGS_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa",
            "rhsusf\addons\rhsusf_RG33L\Decals\RG33_USARMY_Decal_ca.paa"
        };
    };
    class rhsusf_M1237_M2_usarmy_wd: rhsusf_M1237_M2_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1237_M2_usarmy_wd.paa";
        displayName = "$STR_RHS_M1237_M2_NAME";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Body_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Chassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Accessory2_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Armor_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Wheels_WD_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_RG33L\data\MCTAGS_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa",
            "rhsusf\addons\rhsusf_RG33L\Decals\RG33_USARMY_Decal_ca.paa"
        };
    };
    class rhsusf_M1237_MK19_usarmy_wd: rhsusf_M1237_MK19_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1237_MK19_usarmy_wd.paa";
        displayName = "$STR_RHS_M1237_MK19_NAME";
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Body_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Chassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Accessory2_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Armor_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_Wheels_WD_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_RG33L\data\MCTAGS_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa",
            "rhsusf\addons\rhsusf_RG33L\Decals\RG33_USARMY_Decal_ca.paa"
        };
    };
};
