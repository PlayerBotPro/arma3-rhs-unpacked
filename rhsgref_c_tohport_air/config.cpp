class DefaultEventhandlers;
class CfgPatches {
    class rhsgref_c_tohport_air {
        units[] = {
            "rhsgref_mi24g_CAS",
            "rhsgref_mi24g_UPK23",
            "rhsgref_mi24g_FAB",
            "rhsgref_b_mi24g_CAS",
            "rhsgref_b_mi24g_UPK23",
            "rhsgref_b_mi24g_FAB"
        };
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {"rhsgref_main", "rhsgref_c_airweapons"};
        name = "TKOH ports";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {};
    };
};
class DefaultVehicleSystemsDisplayManagerLeft {
    class components;
};
class DefaultVehicleSystemsDisplayManagerRight {
    class components;
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgVehicles {
    class Air;
    class Helicopter: Air {
        class Turrets;
    };
    class Helicopter_Base_F: Helicopter {
        class Turrets: Turrets {
            class MainTurret;
        };
        class CargoTurret;
    };
    class Heli_Attack_02_base_F: Helicopter_Base_F {};
    class RHS_Mi24_base: Heli_Attack_02_base_F {
        class Turrets: Turrets {
            class MainTurret: MainTurret {};
            class CargoTurret_01: CargoTurret {};
            class CargoTurret_02: CargoTurret_01 {};
            class CargoTurret_03: CargoTurret_01 {};
            class CargoTurret_04: CargoTurret_01 {};
        };
    };
    class RHS_Mi24V_Base: RHS_Mi24_base {};
    class RHS_Mi24V_VVS_Base: RHS_Mi24V_Base {
        class EventHandlers;
    };
    class rhsgref_cdf_Mi35: RHS_Mi24V_VVS_Base {
        class Components;
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers;
        };
        class AnimationSources;
    };
    class rhsgref_mi24g_base: rhsgref_cdf_Mi35 {
        model = "\rhsgref\addons\rhsgref_tohport_air\SuperHind\SuperHIND.p3d";
        scope = 0;
        hiddenSelections[] = {
            "Camo1",
            "Camo2",
            "Camo3",
            "tail_decals",
            "n1",
            "n2"
        };
        hiddenselectionstextures[] = {"\rhsgref\addons\rhsgref_tohport_air\superhind\data\mi24sh_001_co.paa", "\rhsgref\addons\rhsgref_tohport_air\superhind\data\mi24sh_002_co.paa", "\rhsgref\addons\rhsgref_tohport_air\superHind\data\mi35_sh_co.paa"};
        class textureSources {
            class standard {
                displayName = "Grey";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsgref\addons\rhsgref_tohport_air\superhind\data\mi24sh_001_co.paa", "\rhsgref\addons\rhsgref_tohport_air\superhind\data\mi24sh_002_co.paa", "\rhsgref\addons\rhsgref_tohport_air\superHind\data\mi35_sh_co.paa"};
                factions[] = {"rhs_faction_vvs_c", "rhs_faction_vvs"};
            };
            class Camo: standard {
                displayName = "Camo #1";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_a2port_air\mi35\data\mi24v_001_co.paa", "\rhsafrf\addons\rhs_a2port_air\mi35\data\mi24v_002_co.paa", "\rhsgref\addons\rhsgref_tohport_air\superHind\data\mi35_sh_g_co.paa"};
            };
            class Camo1: standard {
                displayName = "Camo #2";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_001_camo1_co.paa", "\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_002_camo1_co.paa", "\rhsgref\addons\rhsgref_tohport_air\superHind\data\mi35_sh_g_co.paa"};
            };
            class Camo2: standard {
                displayName = "Camo #3";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_001_camo2_co.paa", "\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_002_camo2_co.paa", "\rhsgref\addons\rhsgref_tohport_air\superHind\data\mi35_sh_g3_co.paa"};
            };
            class Camo3: standard {
                displayName = "Camo #4";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_001_camo3_co.paa", "\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_002_camo3_co.paa", "\rhsgref\addons\rhsgref_tohport_air\superHind\data\mi35_sh_co.paa"};
            };
            class Camo4: standard {
                displayName = "Soot Camo #1";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_a2port_air\mi35\data\soot\mi24p_001_soot1_co.paa", "\rhsafrf\addons\rhs_a2port_air\mi35\data\soot\mi24p_002_soot1_co.paa", "\rhsgref\addons\rhsgref_tohport_air\superHind\data\mi35_sh_g2_co.paa"};
            };
            class Camo5: standard {
                displayName = "Soot Camo #2";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_a2port_air\mi35\data\soot\mi24p_001_soot2_co.paa", "\rhsafrf\addons\rhs_a2port_air\mi35\data\soot\mi24p_002_soot2_co.paa", "\rhsgref\addons\rhsgref_tohport_air\superHind\data\mi35_sh_g2_co.paa"};
            };
            class Camo6: standard {
                displayName = "Soot Camo #3";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_a2port_air\mi35\data\soot\mi24p_001_soot3_co.paa", "\rhsafrf\addons\rhs_a2port_air\mi35\data\soot\mi24p_002_soot3_co.paa", "\rhsgref\addons\rhsgref_tohport_air\superHind\data\mi35_sh_g2_co.paa"};
            };
            class Camo7: standard {
                displayName = "CDF";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {"\rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_001_co.paa", "\rhsafrf\addons\rhs_a2port_air\mi35\data\mi35_002_co.paa", "\rhsgref\addons\rhsgref_tohport_air\superHind\data\mi35_sh_cdf_co.paa"};
            };
        };
        class Attributes {
            class ObjectTexture {
                control = "ObjectTexture";
                data = "ObjectTexture";
                displayName = "Skin";
                tooltip = "Texture and material set applied on the object.";
            };
            class rhs_hideExhaust {
                displayName = "Hide exhaust cover";
                tooltip = "Hide exhaust cover. WARNING: DUE TO HOW ENGINE WORKS IT DOESN'T CHANGE EXHAUST MEMORY POINTS";
                property = "rhs_hideExhaust";
                control = "CheckboxNumber";
                expression = "_this animate ['exhaust_hide',_value,true]";
                defaultValue = "0";
            };
            class rhs_air_filter {
                displayName = "Hide air filter";
                tooltip = "Hide air filter";
                property = "rhs_air_filter";
                control = "CheckboxNumber";
                expression = "_this animate ['HideAirFilter',_value,true]";
                defaultValue = "0";
            };
            class rhs_opendoors {
                displayName = "Open cargo doors";
                property = "rhs_opendoors";
                control = "CheckboxNumber";
                expression = "_this animateDoor ['Door_Cargo',_value,true]";
                defaultValue = "0";
            };
            class rhs_decalNumber_type {
                displayName = "Define font type of side number";
                tooltip = "Define kind of font that will be drawn on vehicle";
                property = "rhs_decalNumber_type";
                control = "Combo";
                expression = "if(_value != 'NoChange')then{ _this setVariable ['%s', _value];[_this,[['Number', cRHSAIRMI24NumberPlaces, _value]]] call rhs_fnc_decalsInit}";
                defaultValue = 0;
                typeName = "STRING";
                class values {
                    class NoChange {
                        name = "Default";
                        value = "NoChange";
                    };
                    class AviaCDF {
                        name = "Aviation CDF";
                        value = "AviaCDF";
                    };
                    class AviaYellow {
                        name = "Aviation Yellow";
                        value = "AviaYellow";
                    };
                    class AviaBlue {
                        name = "Aviation Blue";
                        value = "AviaBlue";
                        defaultValue = "AviaBlue";
                    };
                    class AviaRed {
                        name = "Aviation Red";
                        value = "AviaRed";
                    };
                    class AviaWhiteOut {
                        name = "Aviation White Out";
                        value = "AviaWhiteOut";
                    };
                    class Default {
                        name = "Default (White)";
                        value = "Default";
                    };
                    class DefaultRed {
                        name = "Default (Red)";
                        value = "DefaultRed";
                    };
                    class BoldRed {
                        name = "Bold Red";
                        value = "BoldRed";
                    };
                    class CDF {
                        name = "CDF";
                        value = "CDF";
                    };
                    class Handpaint {
                        name = "Handpaint";
                        value = "Handpaint";
                    };
                    class HandpaintBlack {
                        name = "Handpaint Black";
                        value = "HandpaintBlack";
                    };
                    class Iraqi {
                        name = "Iraqi";
                        value = "Iraqi";
                    };
                };
            };
            class rhs_decalNumber {
                displayName = "Set side number";
                tooltip = "Set side number. 2 numbers are required. Type 0 to hide numbers completly";
                property = "rhs_decalNumber";
                control = "Edit";
                validate = "Number";
                defaultValue = "-1";
                expression = "if(_value >= 0)then{if(_value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSAIRMI24NumberPlaces}else{[_this, [['Number', cRHSAIRMI24NumberPlaces, _this getVariable ['rhs_decalNumber_type','AviaCDF'],_value] ] ] call rhs_fnc_decalsInit}};";
            };
            class rhs_decalTail {
                displayName = "Define tail decal";
                tooltip = "Define tail decalthat will be drawn on vehicle";
                property = "rhs_decalTail";
                control = "Combo";
                expression = "[_this,[['Label', cRHSAIRMI24TailPlaces, 'Aviation',_value]]] call rhs_fnc_decalsInit";
                defaultValue = -1;
                typeName = "Number";
                class values {
                    class Default {
                        name = "Default";
                        value = -1;
                    };
                    class Empty {
                        name = "Empty";
                        value = 0;
                    };
                    class VVS {
                        name = "VVS Russia";
                        value = 3;
                        defaultValue = 3;
                    };
                };
            };
        };
        selectionHRotorStill = "main rotor static";
        selectionHRotorMove = "main rotor blur";
        selectionVRotorStill = "tail rotor static";
        selectionVRotorMove = "tail rotor blur";
        incomingMissileDetectionSystem = "4+8";
        lockDetectionSystem = "4+8";
        memoryPointLRocket = "rocket_1";
        memoryPointRRocket = "rocket_2";
        memoryPointLMissile = "rocket_1";
        memoryPointRMissile = "rocket_2";
        weapons[] = {"rhs_weap_DIRCM_Lipa"};
        magazines[] = {
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa",
            "rhs_mag_DIRCM_Lipa"
        };
        transportsoldier = 4;
        cargoProxyIndexes[] = {1, 2, 3, 4};
        getInProxyOrder[] = {1, 2, 3, 4, 5, 6, 7, 8};
        class Components: Components {
            class TransportPylonsComponent {
                UIPicture = "\rhsgref\addons\rhsgref_tohport_air\SuperHind\loadouts\RHS_Mi24G_EDEN_CA.paa";
                class pylons {
                    class pylon1 {
                        hardpoints[] = {
                            "RHS_HP_FAB250",
                            "RHS_HP_FAB500",
                            "RHS_HP_APU68M3_S24",
                            "RHS_HP_B13L1",
                            "RHS_HP_B8V20",
                            "RHS_HP_UB16",
                            "RHS_HP_UB32",
                            "RHS_HP_UPK23"
                        };
                        priority = 1;
                        attachment = "rhs_mag_b8v20a_s8df";
                        maxweight = 550;
                        UIposition[] = {0.503, 0.3};
                        turret[] = {};
                        hitpoint = "HitPylon1";
                    };
                    class pylon2: pylon1 {
                        UIposition[] = {0.165, 0.3};
                        mirroredMissilePos = 1;
                        hitpoint = "HitPylon2";
                    };
                    class pylon3: pylon1 {
                        hardpoints[] = {
                            "RHS_HP_FAB250",
                            "RHS_HP_APU68M3_S24",
                            "RHS_HP_B8V20",
                            "RHS_HP_UB16",
                            "RHS_HP_UB32",
                            "RHS_HP_UPK23"
                        };
                        attachment = "rhs_mag_b8v20a_s8kom";
                        maxweight = 400;
                        priority = 2;
                        UIposition[] = {0.583, 0.35};
                        turret[] = {};
                        hitpoint = "HitPylon3";
                    };
                    class pylon4: pylon3 {
                        UIposition[] = {0.085, 0.35};
                        mirroredMissilePos = 3;
                        hitpoint = "HitPylon4";
                    };
                    class pylon5: pylon1 {
                        hardpoints[] = {"RHS_HP_MOKOPA", "RHS_HP_INGWE"};
                        priority = 4;
                        attachment = "rhs_mag_zt3_4";
                        maxweight = 250;
                        UIposition[] = {0.628, 0.4};
                        turret[] = {0};
                        hitpoint = "HitPylon5";
                    };
                    class pylon6: pylon5 {
                        UIposition[] = {0.04, 0.4};
                        mirroredMissilePos = 5;
                        hitpoint = "HitPylon6";
                    };
                    class cmDispenser {
                        hardpoints[] = {"RHS_cm_ASO2", "RHS_cm_ASO2_x2", "RHS_cm_ASO2_x4"};
                        priority = 1;
                        attachment = "rhs_ASO2_CMFlare_Chaff_Magazine_x4";
                        maxweight = 800;
                        UIposition[] = {0.33, 0};
                    };
                };
            };
            class SensorsManagerComponent {
                class Components {
                    class IRSensorComponent: SensorTemplateIR {
                        class AirTarget {
                            minRange = 2000;
                            maxRange = 4000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 4000;
                            maxRange = 4000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        animDirection = "FLIR_VRot";
                        angleRangeHorizontal = 46;
                        angleRangeVertical = 36;
                        typeRecognitionDistance = -1;
                        groundNoiseDistanceCoef = 0.07;
                        maxGroundNoiseDistance = 0;
                        minSpeedThreshold = 0;
                        maxSpeedThreshold = 0;
                        maxFogSeeThrough = 0.95;
                        minTrackableSpeed = 0;
                        maxTrackableSpeed = 695;
                    };
                    class VisualSensorComponent: SensorTemplateVisual {
                        class AirTarget {
                            minRange = 500;
                            maxRange = 2000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget {
                            minRange = 500;
                            maxRange = 2000;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        maxTrackableSpeed = 70;
                        animDirection = "FLIR_VRot";
                        angleRangeHorizontal = 46;
                        angleRangeVertical = 36;
                    };
                    class LaserSensorComponent: SensorTemplateLaser {};
                    class PassiveRadarSensorComponent: SensorTemplatePassiveRadar {};
                };
            };
            class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                class Components: components {
                    class VehiclePrimaryGunnerDisplay {
                        componentType = "TransportFeedDisplayComponent";
                        source = "PrimaryGunner";
                    };
                    class SensorDisplay {
                        componentType = "SensorsDisplayComponent";
                        range[] = {4000, 2000, 8000, 16000};
                        resource = "RscCustomInfoSensors";
                    };
                };
            };
            class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                defaultDisplay = "SensorDisplay";
                class Components: components {
                    class VehiclePrimaryGunnerDisplay {
                        componentType = "TransportFeedDisplayComponent";
                        source = "PrimaryGunner";
                    };
                    class SensorDisplay {
                        componentType = "SensorsDisplayComponent";
                        range[] = {4000, 2000, 8000, 16000};
                        resource = "RscCustomInfoSensors";
                    };
                };
            };
            class TransportCountermeasuresComponent {};
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                body = "Gun_HRot";
                gun = "Gun_VRot";
                weapons[] = {"rhs_weap_gi2", "Laserdesignator_pilotCamera"};
                magazines[] = {"rhs_mag_GI2_420_HE", "rhs_mag_GI2_420_AP", "Laserbatteries"};
                gunBeg = "z_gun_muzzle";
                gunEnd = "z_gun_chamber";
                memoryPointGun = "z_gun_chamber";
                particlesPos = "z_gun_chamber";
                particlesDir = "z_gun_muzzle";
                selectionFireAnim = "zasleh";
                maxhorizontalrotspeed = 2.444;
                maxverticalrotspeed = 1.666;
                initelev = 15;
                initturn = 0;
                maxelev = 15;
                minelev = -55;
                maxturn = 110;
                minturn = -110;
                primarygunner = 1;
                stabilizedInAxes = 3;
                memoryPointGunnerOptics = "z_flir_pos";
                gunnerOpticsEffect[] = {"TankCommanderOptics1", "BWTV"};
                turretInfoType = "RscOptics_Heli_Attack_01_gunner";
                discreteDistance[] = {
                    100,
                    200,
                    300,
                    400,
                    500,
                    600,
                    700,
                    800,
                    1000,
                    1200,
                    1500,
                    1800,
                    2100
                };
                discreteDistanceInitIndex = 5;
                class OpticsIn {
                    class Wide {
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.466;
                        minFov = 0.466;
                        maxFov = 0.466;
                        opticsDisplayName = "W";
                        visionMode[] = {"Normal", "Ti"};
                        thermalMode[] = {0, 1};
                        gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
                    };
                    class Medium: Wide {
                        initFov = 0.093;
                        minFov = 0.093;
                        maxFov = 0.093;
                        opticsDisplayName = "M";
                        gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
                    };
                    class Narrow: Wide {
                        initFov = 0.029;
                        minFov = 0.029;
                        maxFov = 0.029;
                        opticsDisplayName = "N";
                        gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
                    };
                };
                class OpticsOut {
                    class Monocular {
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        minFov = 0.25;
                        maxFov = 1.25;
                        initFov = 0.75;
                        visionMode[] = {"Normal", "NVG"};
                        gunnerOpticsModel = "";
                        gunnerOpticsEffect[] = {};
                    };
                };
                class Components {
                    class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                        class Components: components {
                            class VehiclePrimaryGunnerDisplay {
                                componentType = "TransportFeedDisplayComponent";
                                source = "PrimaryGunner";
                            };
                            class SensorDisplay {
                                componentType = "SensorsDisplayComponent";
                                range[] = {4000, 2000, 8000, 16000};
                                resource = "RscCustomInfoSensors";
                            };
                        };
                    };
                    class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                        defaultDisplay = "SensorDisplay";
                        class Components: components {
                            class VehiclePrimaryGunnerDisplay {
                                componentType = "TransportFeedDisplayComponent";
                                source = "PrimaryGunner";
                            };
                            class SensorDisplay {
                                componentType = "SensorsDisplayComponent";
                                range[] = {4000, 2000, 8000, 16000};
                                resource = "RscCustomInfoSensors";
                            };
                        };
                    };
                };
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
        };
        driveOnComponent[] = {"wheels"};
        class AnimationSources: AnimationSources {
            class HideAirFilter {
                source = "user";
                initPhase = 0;
                animPeriod = 0.00001;
                mass = 1;
                displayName = "hide air filter";
            };
            class recoil_source {
                source = "reload";
                weapon = "rhs_weap_gi2";
            };
            class muzzle_source: recoil_source {};
            class muzzle_rot_source: recoil_source {
                source = "ammorandom";
            };
            class atgm_revolving_source {
                source = "revolving";
                weapon = "rhs_weap_9M120_launcher";
            };
            class muzzle_hide_upk23 {
                weapon = "RHS_Weap_GSh23L";
                source = "reload";
            };
            class muzzle_rot_upk23 {
                weapon = "RHS_Weap_GSh23L";
                source = "ammorandom";
            };
            class rwr_lights_lock {
                source = "user";
                initPhase = 0;
                animPeriod = 8;
            };
            class rwr_lock_dir_primary: rwr_lights_lock {
                animPeriod = 0.1;
            };
            class rwr_lock_primary: rwr_lights_lock {
                animPeriod = 0.0000001;
            };
            class rwr_signal_strenght: rwr_lights_lock {
                animPeriod = 0.0000001;
            };
            class rwr_lights: rwr_lock_primary {};
        };
        class RenderTargets {
            class RenderGunnerView {
                renderTarget = "rendertarget0";
                class CameraViewGunner {
                    pointPosition = "z_flir_pos";
                    pointDirection = "z_flir_dir";
                    renderVisionMode = 2;
                    renderQuality = 2;
                    fov = 0.1;
                };
                turret[] = {0};
            };
        };
    };
    class rhsgref_mi24g_CAS: rhsgref_mi24g_base {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_mi24g_CAS.paa";
        displayName = "$STR_RHSGREF_AIR_SUPERHIND_NAME";
        scope = 2;
        crew = "rhsgref_cdf_air_pilot";
        author = "RHS (TOH port)";
        side = 2;
        faction = "rhsgref_faction_cdf_air";
    };
    class rhsgref_mi24g_UPK23: rhsgref_mi24g_base {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_mi24g_UPK23.paa";
        displayName = "$STR_RHSGREF_AIR_SUPERHIND_UPK_NAME";
        scope = 1;
        scopeCurator = 2;
        crew = "rhsgref_cdf_air_pilot";
        author = "RHS (TOH port)";
        side = 2;
        faction = "rhsgref_faction_cdf_air";
        memoryPointGun[] = {"chase01", "chase02", "chase03", "chase04"};
        gunBeg[] = {
            "chase01dir",
            "chase02dir",
            "chase03dir",
            "chase04dir"
        };
        gunEnd[] = {"chase01", "chase02", "chase03", "chase04"};
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class pylon1: pylon1 {
                        attachment = "rhs_mag_upk23_mixed";
                        turret[] = {};
                    };
                    class pylon2: pylon2 {
                        attachment = "rhs_mag_upk23_mixed";
                        turret[] = {};
                    };
                    class pylon3: pylon3 {
                        attachment = "rhs_mag_b8v20a_s8kom";
                        turret[] = {};
                    };
                    class pylon4: pylon4 {
                        attachment = "rhs_mag_b8v20a_s8kom";
                        turret[] = {};
                    };
                    class pylon5: pylon5 {
                        attachment = "rhs_mag_zt3_4";
                        turret[] = {0};
                    };
                    class pylon6: pylon6 {
                        attachment = "rhs_mag_zt3_4";
                        turret[] = {0};
                    };
                    class cmDispenser: cmDispenser {};
                };
            };
        };
    };
    class rhsgref_mi24g_FAB: rhsgref_mi24g_base {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_mi24g_FAB.paa";
        displayName = "$STR_RHSGREF_AIR_SUPERHIND_FAB_NAME";
        scope = 1;
        scopeCurator = 2;
        crew = "rhsgref_cdf_air_pilot";
        author = "RHS (TOH port)";
        side = 2;
        faction = "rhsgref_faction_cdf_air";
        class Components: Components {
            class TransportPylonsComponent: TransportPylonsComponent {
                class pylons: pylons {
                    class pylon1: pylon1 {
                        attachment = "rhs_mag_fab250";
                        turret[] = {};
                    };
                    class pylon2: pylon2 {
                        attachment = "rhs_mag_fab250";
                        turret[] = {};
                    };
                    class pylon3: pylon3 {
                        attachment = "rhs_mag_b8v20a_s8kom";
                        turret[] = {};
                    };
                    class pylon4: pylon4 {
                        attachment = "rhs_mag_b8v20a_s8kom";
                        turret[] = {};
                    };
                    class pylon5: pylon5 {
                        attachment = "rhs_mag_zt3_4";
                        turret[] = {0};
                    };
                    class pylon6: pylon6 {
                        attachment = "rhs_mag_zt3_4";
                        turret[] = {0};
                    };
                    class cmDispenser: cmDispenser {};
                };
            };
        };
    };
    class rhsgref_b_mi24g_CAS: rhsgref_mi24g_CAS {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_b_mi24g_CAS.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhsgref_faction_cdf_air_b";
        side = 1;
        scope = 2;
        scopeCurator = 2;
        crew = "rhsgref_cdf_b_air_pilot";
    };
    class rhsgref_b_mi24g_UPK23: rhsgref_mi24g_UPK23 {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_b_mi24g_UPK23.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhsgref_faction_cdf_air_b";
        side = 1;
        scope = 1;
        scopeCurator = 2;
        crew = "rhsgref_cdf_b_air_pilot";
    };
    class rhsgref_b_mi24g_FAB: rhsgref_mi24g_FAB {
        editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_b_mi24g_FAB.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        faction = "rhsgref_faction_cdf_air_b";
        side = 1;
        scope = 1;
        scopeCurator = 2;
        crew = "rhsgref_cdf_b_air_pilot";
    };
};
