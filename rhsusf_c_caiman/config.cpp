class CfgPatches {
    class rhsusf_c_Caiman {
        units[] = {
            "rhsusf_M1220_usarmy_d",
            "rhsusf_M1220_M2_usarmy_d",
            "rhsusf_M1220_MK19_usarmy_d",
            "rhsusf_M1220_M153_M2_usarmy_d",
            "rhsusf_M1220_M153_MK19_usarmy_d",
            "rhsusf_M1230_M2_usarmy_d",
            "rhsusf_M1230_MK19_usarmy_d",
            "rhsusf_M1230a1_usarmy_d",
            "rhsusf_M1220_usarmy_wd",
            "rhsusf_M1220_M2_usarmy_wd",
            "rhsusf_M1220_MK19_usarmy_wd",
            "rhsusf_M1220_M153_M2_usarmy_wd",
            "rhsusf_M1220_M153_MK19_usarmy_wd",
            "rhsusf_M1230_M2_usarmy_wd",
            "rhsusf_M1230_MK19_usarmy_wd",
            "rhsusf_M1230a1_usarmy_wd"
        };
        weapons[] = {};
        requiredVersion = 1.38;
        requiredAddons[] = {"rhsusf_main", "rhsusf_c_troops"};
        name = "Caiman MRAP";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class DefaultEventhandlers;
class RCWSOptics;
class RscPicture;
class RscInGameUI {
    class RscUnitInfo;
    class RscWeaponZeroing: RscUnitInfo {
        class WeaponInfoControlsGroupLeft;
    };
};
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        RHS_CMN_Driver = "RHS_CMN_Driver";
        RHS_CMN_CROWSgunner = "RHS_CMN_CROWSgunner";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class RHS_CMN_Driver: Crew {
            file = "\rhsusf\addons\rhsusf_c_caiman\anims\Caiman_Driver";
            interpolateTo[] = {"RHS_CMN_KIA_Driver", 1};
        };
        class RHS_CMN_KIA_Driver: DefaultDie {
            actions = "DeadActions";
            file = "\rhsusf\addons\rhsusf_C_caiman\anims\Caiman_KIA_Driver";
            speed = 10000000000;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_CMN_CROWSgunner: Crew {
            file = "\rhsusf\addons\rhsusf_c_caiman\anims\rhs_CMN_CROWSgunner";
            interpolateTo[] = {"RHS_CMN_KIA_CROWSgunner", 1};
        };
        class RHS_CMN_KIA_CROWSgunner: DefaultDie {
            actions = "DeadActions";
            file = "\rhsusf\addons\rhsusf_C_caiman\anims\rhs_CMN_KIA_CROWSgunner";
            speed = 10000000000;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
    };
};
class CfgVehicles {
    class LandVehicle;
    class Car: LandVehicle {
        class NewTurret;
        class ViewOptics;
    };
    class Car_F: Car {
        class AnimationSources;
        class HitPoints;
        class EventHandlers;
    };
    class Truck_F: Car_F {
        class ViewPilot;
        class HitPoints: HitPoints {
            class HitLFWheel;
            class HitLBWheel;
            class HitLMWheel;
            class HitLF2Wheel;
            class HitRFWheel;
            class HitRBWheel;
            class HitRMWheel;
            class HitRF2Wheel;
            class HitBody;
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
            class HitGlass5;
            class HitGlass6;
        };
        class AnimationSources;
    };
    class Truck_01_base_F: Truck_F {
        class AnimationSources: AnimationSources {
            class HitGlass1;
        };
    };
    class rhsusf_caiman_base: Truck_01_base_F {
        dlc = "RHS_USAF";
        category = "Car";
        side = 1;
        editorSubcategory = "rhs_EdSubcat_mrap";
        vehicleClass = "rhs_vehclass_MRAP";
        insideSoundCoef = 0.4;
        displayName = "Caiman";
        unitInfoType = "RscUnitInfo";
        weapons[] = {"TruckHorn2", "rhsusf_weap_duke"};
        magazines[] = {"rhsusf_mag_duke"};
        model = "\rhsusf\addons\rhsusf_caiman\M1220";
        picture = "\rhsusf\addons\rhsusf_caiman\pictures\rhs_caiman_unarmed_pic_ca.paa";
        Icon = "\a3\soft_f_beta\Truck_01\Data\UI\map_truck_01_CA.paa";
        mapSize = 12.02;
        transportMaxBackpacks = 25;
        transportSoldier = 9;
        destrType = "DestructDefault";
        crewExplosionProtection = 1;
        extCameraPosition[] = {0.5, 2, -9};
        camShakeCoef = 0.3;
        dustFrontLeftPos = "wheel_1_1_bound";
        dustFrontRightPos = "wheel_2_1_bound";
        dustBackLeftPos = "wheel_1_3_bound";
        dustBackRightPos = "wheel_2_3_bound";
        tf_hasLRradio_api = 1;
        selectionBrakeLights = "light_brake";
        selectionBackLights = "light_drive";
        driverAction = "RHS_CMN_Driver";
        driverInAction = "RHS_CMN_Driver";
        driverLeftHandAnimName = "drivewheel";
        driverRightHandAnimName = "drivewheel";
        driverRightLegAnimName = "pedal_r";
        getInProxyOrder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        memoryPointsGetInCargo[] = {"pos codriver", "pos cargo"};
        memoryPointsGetInCargoDir[] = {"pos codriver dir", "pos cargo dir"};
        getInAction = "GetInLow";
        getOutAction = "GetOutLow";
        driverDoor = "DoorL";
        cargoDoors[] = {"DoorR", "DoorB"};
        viewDriverInExternal = 1;
        forceHideDriver = 1;
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6",
            "camo7",
            "camo8",
            "camo9"
        };
        class textureSources {
            class rhs_desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_caiman\data\cmn_Body_CO.paa",
                    "rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_CO.paa",
                    "rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_CO.paa",
                    "rhsusf\addons\rhsusf_caiman\data\cmn_Armor_CO.paa",
                    "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa",
                    "rhsusf\addons\rhsusf_caiman\data\cmn_wheel_d_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
                    "rhsusf\addons\rhsusf_caiman\data\cmn_AMB_CO.paa",
                    "rhsusf\addons\rhsusf_caiman\data\M153_CO.paa",
                    "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
                };
                factions[] = {};
            };
            class rhs_woodland {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_caiman\data\cmn_Body_WD_CO.paa",
                    "rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_WD_CO.paa",
                    "rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_WD_CO.paa",
                    "rhsusf\addons\rhsusf_caiman\data\cmn_Armor_WD_CO.paa",
                    "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa",
                    "rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
                    "rhsusf\addons\rhsusf_caiman\data\cmn_AMB_WD_CO.paa",
                    "rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa",
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
        class Turrets {};
        cargoCompartments[] = {1, 1};
        class AnimationSources: AnimationSources {
            class hide_spare {};
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
                armor = 1.5;
                passThrough = 1;
                name = "karoserie";
                visual = "zbytek";
                minimalhit = 0.15;
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
                color[] = {"450*0.25", "878*0.25", "816*0.25"};
                ambient[] = {1.2, 4.4, 4.1};
                intensity = 5;
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
        maxFordingDepth = -1.3;
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
        antiRollbarForceCoef = 3.5;
        antiRollbarForceLimit = 4.5;
        antiRollbarSpeedMin = 40;
        antiRollbarSpeedMax = 95;
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
                steering = 1;
                width = 0.34;
                mass = 80;
                MOI = 25;
                dampingRate = 0.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 35000;
                maxHandBrakeTorque = 0;
                maxCompression = 0.12;
                maxDroop = 0.12;
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
                "rhsusf\addons\rhsusf_caiman\data\cmn_Body.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\cmn_Body_dam.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\cmn_destruction.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\cmn_Chassis.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_dam.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\cmn_destruction.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_dam.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\cmn_destruction.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\cmn_Armor.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\cmn_Armor_dam.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\cmn_destruction.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\cmn_amb.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\cmn_amb_dam.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\cmn_destruction.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\cmn_wheel.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\cmn_wheel_dam.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\cmn_destruction.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\cmn_int.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\cmn_int_dam.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\cmn_destruction.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\crows.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\crows.rvmat",
                "rhsusf\addons\rhsusf_caiman\data\cmn_destruction.rvmat",
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
                postInit = "_this call rhs_fnc_reapplyTextures";
                seatSwitched = "if(not(_this select 1 in [driver (_this select 0),gunner (_this select 0)]))then{ (_this select 1) action ['turnIn',_this select 0]}";
                engine = "_this call rhs_fnc_engineCheckDamage";
            };
        };
        class TransportBackpacks {
            class _xx_rhsusf_falconii {
                backpack = "rhsusf_falconii";
                count = 1;
            };
        };
        class TransportMagazines {
            class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
                magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
                count = 10;
            };
            class _xx_rhs_mag_m67 {
                magazine = "rhs_mag_m67";
                count = 2;
            };
            class _xx_rhs_mag_m18_green {
                magazine = "rhs_mag_m18_green";
                count = 2;
            };
            class _xx_rhs_mag_m18_red {
                magazine = "rhs_mag_m18_red";
                count = 2;
            };
            class _xx_rhs_mag_an_m8hc {
                magazine = "rhs_mag_an_m8hc";
                count = 4;
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 10;
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
        };
        class RHS_TowingSystem {
            class Carrier {
                rhs_maxCargoMass = 5443;
                rhs_attachPoint = "";
                rhs_attachPointPos[] = {-0.04, -3.38, -1.49};
            };
        };
    };
    class rhsusf_M1220_usarmy_d: rhsusf_caiman_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1220_usarmy_d.paa";
        displayName = "$STR_RHS_M1220_NAME";
        picture = "\rhsusf\addons\rhsusf_caiman\pictures\rhs_caiman_unarmed_pic_ca.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_caiman\data\cmn_Body_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Armor_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_AMB_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\M153_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
    };
    class rhsusf_caiman_GPK_base: rhsusf_caiman_base {
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
        };
        class EventHandlers: EventHandlers {
            class RHS_Turret_EH {
                turnIn = "_this call rhsusf_fnc_turret_gunnerAdjust_turnIn";
                hit = "_this call rhsusf_fnc_turret_gunnerAdjust_AI_hit";
                engine = "_this call rhsusf_fnc_turret_gunnerAdjust_AI_engine";
            };
        };
    };
    class rhsusf_M1220_M2_usarmy_d: rhsusf_caiman_GPK_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1220_M2_usarmy_d.paa";
        displayName = "$STR_RHS_M1220_M2_NAME";
        picture = "\rhsusf\addons\rhsusf_caiman\pictures\rhs_caiman_armed_pic_ca.paa";
        model = "\rhsusf\addons\rhsusf_caiman\M1220_M2";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_caiman\data\cmn_Body_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Armor_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_AMB_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\M153_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
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
            class M2_Turret: NewTurret {
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
                startEngine = 0;
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
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.04, -3.38, -1.76};
            };
        };
    };
    class rhsusf_M1220_MK19_usarmy_d: rhsusf_M1220_M2_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1220_MK19_usarmy_d.paa";
        displayName = "$STR_RHS_M1220_MK19_NAME";
        picture = "\rhsusf\addons\rhsusf_caiman\pictures\rhs_caiman_armed_pic_ca.paa";
        model = "\rhsusf\addons\rhsusf_caiman\M1220_Mk19";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_caiman\data\cmn_Body_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Armor_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_AMB_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\M153_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
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
                    1200,
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
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.04, -3.38, -1.54};
            };
        };
    };
    class rhsusf_M1220_M153_M2_usarmy_d: rhsusf_M1220_M2_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1220_M153_M2_usarmy_d.paa";
        displayName = "$STR_RHS_M1220_M153_M2_NAME";
        picture = "\rhsusf\addons\rhsusf_caiman\pictures\rhs_caiman_CROWS_pic_ca.paa";
        model = "\rhsusf\addons\rhsusf_caiman\M1220_M153_M2";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_caiman\data\cmn_Body_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Armor_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_AMB_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\M153_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
        scope = 2;
        accuracy = 0.5;
        transportSoldier = 8;
        threat[] = {0.9, 0.3, 0.1};
        showNVGGunner = 1;
        class AnimationSources: AnimationSources {
            class belt_rotation {
                source = "reload";
                weapon = "RHS_M2_CROWS_M153";
            };
            class ReloadMagazine {
                source = "reloadmagazine";
                weapon = "RHS_M2_CROWS_M153";
            };
            class Revolving {
                source = "revolving";
                weapon = "RHS_M2_CROWS_M153";
            };
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
        animationList[] = {};
        class MFD {
            class MFD_CROWS {
                topLeft = "CROWS_TL";
                topRight = "CROWS_TR";
                bottomLeft = "CROWS_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {0.84, 0.86, 0.84};
                alpha = 1;
                enableParallax = 0;
                font = "RobotoCondensedLight";
                class material {
                    ambient[] = {3, 3, 3, 1};
                    diffuse[] = {10, 10, 10, 1};
                    emissive[] = {400, 200, 200, 1};
                };
                class Bones {
                    class Static_Offset {
                        type = "fixed";
                        pos[] = {0.08, 0.9};
                    };
                    class Cross {
                        type = "fixed";
                        pos[] = {0, -0.145};
                    };
                    class TurretRotation {
                        type = "rotational";
                        source = "weaponHeading";
                        sourceIndex = 0;
                        center[] = {0, 0};
                        min = -180;
                        max = 180;
                        minAngle = -180;
                        maxAngle = 180;
                        sourceOffset = -180;
                        aspectRatio = 1.29101;
                    };
                };
                class Draw {
                    color[] = {1, 0, 0, 1};
                    alpha = 1;
                    class StaticDraw {
                        type = "line";
                        width = 3;
                        points[] = {
                            {"Cross", {0.43, 0.645503}, 1},
                            {"Cross", {0.57, 0.645503}, 1},
                            {},
                            {"Cross", {0.5, 0.555132}, 1},
                            {"Cross", {0.5, 0.735873}, 1},
                            {},
                            {"Static_Offset", {0, -0.0774603}, 1},
                            {"Static_Offset", {0.010416, -0.0762829}, 1},
                            {"Static_Offset", {0.02052, -0.0727895}, 1},
                            {"Static_Offset", {0.03, -0.0670806}, 1},
                            {"Static_Offset", {0.038568, -0.0593346}, 1},
                            {"Static_Offset", {0.04596, -0.0497915}, 1},
                            {"Static_Offset", {0.05196, -0.0387302}, 1},
                            {"Static_Offset", {0.056382, -0.0264914}, 1},
                            {"Static_Offset", {0.059088, -0.0134471}, 1},
                            {"Static_Offset", {0.06, 0}, 1},
                            {"Static_Offset", {0.059088, 0.0134471}, 1},
                            {"Static_Offset", {0.056382, 0.0264914}, 1},
                            {"Static_Offset", {0.05196, 0.0387302}, 1},
                            {"Static_Offset", {0.04596, 0.0497915}, 1},
                            {"Static_Offset", {0.038568, 0.0593346}, 1},
                            {"Static_Offset", {0.03, 0.0670806}, 1},
                            {"Static_Offset", {0.02052, 0.0727895}, 1},
                            {"Static_Offset", {0.010416, 0.0762829}, 1},
                            {"Static_Offset", {0, 0.0774603}, 1},
                            {"Static_Offset", {-0.010416, 0.0762829}, 1},
                            {"Static_Offset", {-0.02052, 0.0727895}, 1},
                            {"Static_Offset", {-0.03, 0.0670806}, 1},
                            {"Static_Offset", {-0.038568, 0.0593346}, 1},
                            {"Static_Offset", {-0.04596, 0.0497915}, 1},
                            {"Static_Offset", {-0.05196, 0.0387302}, 1},
                            {"Static_Offset", {-0.056382, 0.0264914}, 1},
                            {"Static_Offset", {-0.059088, 0.0134471}, 1},
                            {"Static_Offset", {-0.06, 0}, 1},
                            {"Static_Offset", {-0.059088, -0.0134471}, 1},
                            {"Static_Offset", {-0.056382, -0.0264914}, 1},
                            {"Static_Offset", {-0.05196, -0.0387302}, 1},
                            {"Static_Offset", {-0.04596, -0.0497915}, 1},
                            {"Static_Offset", {-0.038568, -0.0593346}, 1},
                            {"Static_Offset", {-0.03, -0.0670806}, 1},
                            {"Static_Offset", {-0.02052, -0.0727895}, 1},
                            {"Static_Offset", {-0.010416, -0.0762829}, 1},
                            {"Static_Offset", {0, -0.0774603}, 1},
                            {},
                            {"Static_Offset", {0, -0.0774603}, 1},
                            {"Static_Offset", {0, -0.0645503}, 1},
                            {},
                            {"Static_Offset", {0.03, -0.0670826}, 1},
                            {"Static_Offset", {0.025, -0.0559022}, 1},
                            {},
                            {"Static_Offset", {0.0519615, -0.0387302}, 1},
                            {"Static_Offset", {0.0433013, -0.0322751}, 1},
                            {},
                            {"Static_Offset", {0.06, 0.0000000033859}, 1},
                            {"Static_Offset", {0.05, 0.00000000282158}, 1},
                            {},
                            {"Static_Offset", {0.0519615, 0.0387302}, 1},
                            {"Static_Offset", {0.0433013, 0.0322751}, 1},
                            {},
                            {"Static_Offset", {0.03, 0.0670826}, 1},
                            {"Static_Offset", {0.025, 0.0559022}, 1},
                            {},
                            {"Static_Offset", {-0.00000000524537, 0.0774603}, 1},
                            {"Static_Offset", {-0.00000000437114, 0.0645503}, 1},
                            {},
                            {"Static_Offset", {-0.03, 0.0670826}, 1},
                            {"Static_Offset", {-0.025, 0.0559022}, 1},
                            {},
                            {"Static_Offset", {-0.0519615, 0.0387302}, 1},
                            {"Static_Offset", {-0.0433013, 0.0322751}, 1},
                            {},
                            {"Static_Offset", {-0.06, -0.000000000923705}, 1},
                            {"Static_Offset", {-0.05, -0.000000000769754}, 1},
                            {},
                            {"Static_Offset", {-0.0519615, -0.0387302}, 1},
                            {"Static_Offset", {-0.0433013, -0.0322752}, 1},
                            {},
                            {"Static_Offset", {-0.03, -0.0670826}, 1},
                            {"Static_Offset", {-0.025, -0.0559022}, 1},
                            {},
                            {"Static_Offset", 1, {"TurretRotation", 0, -0.0580952}, 1},
                            {"Static_Offset", 1, {"TurretRotation", 0, 0}, 1},
                            {}
                        };
                    };
                    class StaticDrawBold {
                        type = "line";
                        width = 8;
                        points[] = {
                            {"Cross", {0.3, 0.645503}, 1},
                            {"Cross", {0.43, 0.645503}, 1},
                            {},
                            {"Cross", {0.57, 0.645503}, 1},
                            {"Cross", {0.7, 0.645503}, 1},
                            {},
                            {"Cross", {0.5, 0.387302}, 1},
                            {"Cross", {0.5, 0.555132}, 1},
                            {},
                            {"Cross", {0.5, 0.735873}, 1},
                            {"Cross", {0.5, 0.903704}, 1},
                            {}
                        };
                    };
                    class Range_Text {
                        type = "text";
                        source = "static";
                        text = "LRF:";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.01, 0.51}, 1};
                        right[] = {{0.06, 0.51}, 1};
                        down[] = {{0.01, 0.56}, 1};
                    };
                    class Range_Value {
                        type = "text";
                        source = "laserDist";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.08;
                        pos[] = {{"0.01+0.1", 0.51}, 1};
                        right[] = {{0.16, 0.51}, 1};
                        down[] = {{"0.01+0.1", 0.56}, 1};
                    };
                    class Ballistic_Text {
                        type = "text";
                        source = "static";
                        text = "Ballistic:";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.01, 0.67}, 1};
                        right[] = {{0.06, 0.67}, 1};
                        down[] = {{0.01, 0.72}, 1};
                    };
                    class Ballistic_Value {
                        type = "text";
                        source = "laserDist";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.08;
                        pos[] = {{"0.01+0.13", 0.67}, 1};
                        right[] = {{0.19, 0.67}, 1};
                        down[] = {{"0.01+0.13", 0.72}, 1};
                    };
                    class Mode_Text {
                        type = "text";
                        source = "static";
                        text = "FOV:";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.01, 0.71}, 1};
                        right[] = {{0.06, 0.71}, 1};
                        down[] = {{0.01, 0.76}, 1};
                    };
                    class Mode_Value {
                        type = "text";
                        source = "static";
                        text = "1.0x";
                        sourceScale = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.08;
                        pos[] = {{"0.01+0.1", 0.71}, 1};
                        right[] = {{0.16, 0.71}, 1};
                        down[] = {{"0.01+0.1", 0.76}, 1};
                    };
                    class Elev_Text {
                        type = "text";
                        source = "static";
                        text = "Elev:";
                        scale = 1;
                        sourceScale = 1;
                        align = "right";
                        pos[] = {{0.01, 0.75}, 1};
                        right[] = {{0.06, 0.75}, 1};
                        down[] = {{0.01, 0.8}, 1};
                    };
                    class Elev_Value {
                        type = "text";
                        source = "[y]turretworld";
                        sourceScale = 1;
                        sourcePrecision = 1;
                        sourceLength = 3;
                        scale = 1;
                        align = "right";
                        refreshRate = 0.08;
                        pos[] = {{"0.01+0.1", 0.75}, 1};
                        right[] = {{0.16, 0.75}, 1};
                        down[] = {{"0.01+0.1", 0.8}, 1};
                    };
                };
            };
        };
        class Turrets: Turrets {
            class CROWS_Turret: NewTurret {
                body = "mainTurret";
                gun = "mainGun";
                animationSourceBody = "mainTurret";
                animationSourceGun = "mainGun";
                turretInfoType = "RHS_RscM153_CROWS";
                usePip = 1;
                headAimDown = 22;
                discreteDistance[] = {
                    100,
                    150,
                    200,
                    250,
                    300,
                    350,
                    400,
                    450,
                    500,
                    550,
                    600,
                    650,
                    700,
                    750,
                    800,
                    850,
                    900,
                    950,
                    1000,
                    1050,
                    1100,
                    1150,
                    1200,
                    1250,
                    1300,
                    1350,
                    1400,
                    1450,
                    1500,
                    1550,
                    1600,
                    1650,
                    1700,
                    1750,
                    1800,
                    1850,
                    1900,
                    1950,
                    2000
                };
                discreteDistanceInitIndex = 2;
                soundServo[] = {
                    "A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01",
                    0.17782794,
                    1,
                    10
                };
                soundServoVertical[] = {
                    "A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01",
                    0.17782794,
                    1,
                    10
                };
                gunnerForceOptics = 0;
                gunnerOutOpticsShowCursor = 0;
                weapons[] = {"RHS_M2_CROWS_M153"};
                magazines[] = {
                    "rhs_mag_400rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_400rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_400rnd_127x99_mag_Tracer_Red",
                    "rhs_mag_400rnd_127x99_mag_Tracer_Red"
                };
                minElev = -20;
                maxElev = 60;
                gunnerAction = "RHS_CMN_CROWSgunner";
                viewGunnerInExternal = 1;
                gunnerGetInAction = "GetInMRAP_01_cargo";
                gunnerGetOutAction = "GetOutMRAP_01";
                gunnerDoor = "DoorR";
                gunnerCompartments = "Compartment1";
                ejectDeadGunner = 0;
                castGunnerShadow = 1;
                stabilizedInAxes = 3;
                startEngine = 0;
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                memoryPointGunnerOptics = "PIP0_dir";
                gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_CROWS_monitor";
                disableSoundAttenuation = 0;
                animationSourceStickX = "gunner_stick_trav";
                animationSourceStickY = "gunner_stick_elev";
                outGunnerMayFire = 1;
                gunnerRightHandAnimName = "gunner_stick";
                memoryPointsGetInGunner = "pos codriver";
                memoryPointsGetInGunnerDir = "pos codriver dir";
                class ViewOptics: RCWSOptics {
                    initAngleX = -15;
                    minAngleX = -45;
                    maxAngleX = 45;
                    minFov = 0.0083333;
                    maxFov = 0.25;
                    initFov = 0.25;
                    visionMode[] = {"Normal"};
                    thermalMode[] = {0, 1};
                };
                class ViewGunner: ViewOptics {
                    initAngleX = -25;
                    minAngleX = -45;
                    maxAngleX = 45;
                    minFov = 0.25;
                    maxFov = 1.25;
                    initFov = 0.75;
                    visionMode[] = {"Normal"};
                    thermalMode[] = {2, 3};
                };
                class OpticsIn {
                    class DaysightWFOV: ViewOptics {
                        opticsDisplayName = "1.0x";
                        gunnerOpticsModel = "\rhsusf\addons\rhsusf_optics\data\rhsusf_CROWS_monitor";
                        visionMode[] = {"Normal"};
                        hitpoint = "Hit_Optic_CROWS_Day";
                        initFov = 0.7;
                        minFov = 0.7;
                        maxFov = 0.7;
                    };
                    class ThermalWFOV: DaysightWFOV {
                        opticsDisplayName = "4.3x";
                        visionMode[] = {"TI"};
                        thermalMode[] = {0, 1};
                        hitpoint = "Hit_Optic_CROWS_TI";
                        initFov = 0.162791;
                        minFov = 0.162791;
                        maxFov = 0.162791;
                    };
                    class ThermalNFOV: ThermalWFOV {
                        opticsDisplayName = "12.5x";
                        initFov = 0.056;
                        minFov = 0.056;
                        maxFov = 0.056;
                    };
                    class DaysightNFOV: DaysightWFOV {
                        opticsDisplayName = "15.0x";
                        initFov = 0.0466667;
                        minFov = 0.0466667;
                        maxFov = 0.0466667;
                    };
                    class DaysightVNFOV: DaysightWFOV {
                        opticsDisplayName = "30.0x";
                        initFov = 0.0233333;
                        minFov = 0.0233333;
                        maxFov = 0.0233333;
                    };
                };
                class Hitpoints {
                    class Hit_Optic_CROWS_Day {
                        armor = -40;
                        explosionShielding = 0;
                        name = "";
                        visual = "vis_optic_CROWS_Day";
                        armorComponent = "Hit_Optic_CROWS_Day";
                        passThrough = 0;
                    };
                    class Hit_Optic_CROWS_TI {
                        armor = -40;
                        explosionShielding = 0;
                        name = "";
                        visual = "vis_optic_CROWS_TI";
                        armorComponent = "Hit_Optic_CROWS_TI";
                        passThrough = 0;
                    };
                    class Hit_Optic_CROWS_LRF {
                        armor = -40;
                        explosionShielding = 0;
                        name = "";
                        visual = "vis_optic_CROWS_LRF";
                        armorComponent = "Hit_Optic_CROWS_LRF";
                        passThrough = 0;
                    };
                    class HitTurret {
                        armor = -120;
                        minimalHit = -0.13;
                        explosionShielding = 0.5;
                        name = "";
                        visual = "vis_turret";
                        armorComponent = "Hit_Turret";
                        passThrough = 0;
                    };
                    class HitGun {
                        armor = -120;
                        minimalHit = -0.13;
                        explosionShielding = 0.5;
                        name = "";
                        visual = "vis_gun";
                        armorComponent = "Hit_Gun";
                        passThrough = 0;
                    };
                };
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
            class Gunner_display {
                renderTarget = "rendertarget2";
                class CameraView1 {
                    pointPosition = "PIP0_pos";
                    pointDirection = "PIP0_dir";
                    renderVisionMode = 2;
                    renderQuality = 2;
                    fov = 0.7;
                    turret[] = {0};
                };
                BBoxes[] = {"PIP_3_TL", "PIP_3_TR", "PIP_3_BL", "PIP_3_BR"};
            };
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.04, -3.38, -1.54};
            };
        };
    };
    class rhsusf_M1220_M153_MK19_usarmy_d: rhsusf_M1220_M153_M2_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1220_M153_MK19_usarmy_d.paa";
        displayName = "$STR_RHS_M1220_M153_MK19_NAME";
        model = "\rhsusf\addons\rhsusf_caiman\M1220_M153_MK19";
        class AnimationSources: AnimationSources {
            class belt_rotation {
                source = "reload";
                weapon = "RHS_MK19_CROWS_M153";
            };
            class ReloadMagazine {
                source = "reloadmagazine";
                weapon = "RHS_MK19_CROWS_M153";
            };
            class Revolving {
                source = "revolving";
                weapon = "RHS_MK19_CROWS_M153";
            };
        };
        class Turrets: Turrets {
            class CROWS_Turret: CROWS_Turret {
                weapons[] = {"RHS_MK19_CROWS_M153"};
                magazines[] = {"RHS_96Rnd_40mm_MK19_M430A1", "RHS_96Rnd_40mm_MK19_M430A1", "RHS_96Rnd_40mm_MK19_M430A1"};
            };
        };
    };
    class rhsusf_M1230_M2_usarmy_d: rhsusf_caiman_GPK_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1230_M2_usarmy_d.paa";
        displayName = "$STR_RHS_M1230_M2_NAME";
        picture = "\rhsusf\addons\rhsusf_caiman\pictures\rhs_caiman_APK_armed_pic_ca.paa";
        model = "\rhsusf\addons\rhsusf_caiman\M1230_M2";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_caiman\data\cmn_Body_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Armor_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_AMB_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\M153_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
        scope = 2;
        accuracy = 0.5;
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
            class LWPK_hide {
                source = "user";
                animPeriod = 0.00001;
                initPhase = 0;
                mass = 1;
                displayName = "hide Low Wire Protection Kit";
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
            class rhs_hideLWPK {
                control = "CheckboxNumber";
                defaultValue = "0";
                displayName = "hide Low Wire Protection Kit";
                property = "rhs_hideLWPK";
                expression = "_this animate ['LWPK_hide',_value,true]";
            };
        };
        threat[] = {0.9, 0.3, 0.1};
        showNVGGunner = 1;
        class Turrets: Turrets {
            class M2_Turret: NewTurret {
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
                startEngine = 0;
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
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.04, -3.6, -2.07};
            };
        };
    };
    class rhsusf_M1230_MK19_usarmy_d: rhsusf_M1230_M2_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1230_MK19_usarmy_d.paa";
        displayName = "$STR_RHS_M1230_MK19_NAME";
        picture = "\rhsusf\addons\rhsusf_caiman\pictures\rhs_caiman_APK_armed_pic_ca.paa";
        model = "\rhsusf\addons\rhsusf_caiman\M1230_Mk19";
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_caiman\data\cmn_Body_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Armor_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_AMB_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\M153_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
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
        };
    };
    class rhsusf_M1230a1_usarmy_d: rhsusf_M1220_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1230a1_usarmy_d.paa";
        model = "\rhsusf\addons\rhsusf_caiman\M1230A1";
        displayName = "$STR_RHS_M1230A1_NAME";
        picture = "\rhsusf\addons\rhsusf_caiman\pictures\rhs_caiman_MEDIC_pic_ca.paa";
        transportSoldier = 5;
        cargoAction[] = {
            "passenger_generic01_foldhands",
            "passenger_apc_generic02",
            "passenger_apc_generic04",
            "passenger_injured_medevac_truck03",
            "passenger_injured_medevac_truck02"
        };
        scope = 2;
        accuracy = 0.5;
        attendant = 1;
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 20;
            };
            class _xx_Toolkit {
                name = "Toolkit";
                count = 1;
            };
            class _xx_Medikit {
                name = "Medikit";
                count = 2;
            };
        };
        faction = "rhs_faction_usarmy_d";
        crew = "rhsusf_army_ocp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_caiman\data\cmn_Body_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Armor_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_wheel_d_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_AMB_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\M153_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
        class RHS_TowingSystem: RHS_TowingSystem {
            class Carrier: Carrier {
                rhs_attachPointPos[] = {-0.04, -3.38, -2.07};
            };
        };
    };
    class rhsusf_M1220_usarmy_wd: rhsusf_M1220_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m1220_usarmy_wd.paa";
        displayName = "$STR_RHS_M1220_NAME";
        picture = "\rhsusf\addons\rhsusf_caiman\pictures\rhs_caiman_unarmed_pic_ca.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_caiman\data\cmn_Body_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Armor_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_AMB_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1220_M2_usarmy_wd: rhsusf_M1220_M2_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1220_M2_usarmy_wd.paa";
        displayName = "$STR_RHS_M1220_M2_NAME";
        picture = "\rhsusf\addons\rhsusf_caiman\pictures\rhs_caiman_armed_pic_ca.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_caiman\data\cmn_Body_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Armor_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_AMB_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1220_MK19_usarmy_wd: rhsusf_M1220_MK19_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1220_MK19_usarmy_wd.paa";
        displayName = "$STR_RHS_M1220_MK19_NAME";
        picture = "\rhsusf\addons\rhsusf_caiman\pictures\rhs_caiman_armed_pic_ca.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_caiman\data\cmn_Body_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Armor_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_AMB_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1230_M2_usarmy_wd: rhsusf_M1230_M2_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1230_M2_usarmy_wd.paa";
        displayName = "$STR_RHS_M1230_M2_NAME";
        picture = "\rhsusf\addons\rhsusf_caiman\pictures\rhs_caiman_APK_armed_pic_ca.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_caiman\data\cmn_Body_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Armor_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_AMB_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
        class AnimationSources: AnimationSources {
            class lwpk_hide: LWPK_hide {
                initPhase = 1;
            };
        };
    };
    class rhsusf_M1230_MK19_usarmy_wd: rhsusf_M1230_MK19_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1230_MK19_usarmy_wd.paa";
        displayName = "$STR_RHS_M1230_MK19_NAME";
        picture = "\rhsusf\addons\rhsusf_caiman\pictures\rhs_caiman_APK_armed_pic_ca.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_caiman\data\cmn_Body_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Armor_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_AMB_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
        class AnimationSources: AnimationSources {
            class lwpk_hide: LWPK_hide {
                initPhase = 1;
            };
        };
    };
    class rhsusf_M1220_M153_M2_usarmy_wd: rhsusf_M1220_M153_M2_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1220_M153_M2_usarmy_wd.paa";
        displayName = "$STR_RHS_M1220_M153_M2_NAME";
        picture = "\rhsusf\addons\rhsusf_caiman\pictures\rhs_caiman_CROWS_pic_ca.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_caiman\data\cmn_Body_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Armor_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_AMB_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1220_M153_MK19_usarmy_wd: rhsusf_M1220_M153_MK19_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1220_M153_MK19_usarmy_wd.paa";
        displayName = "$STR_RHS_M1220_M153_MK19_NAME";
        picture = "\rhsusf\addons\rhsusf_caiman\pictures\rhs_caiman_CROWS_pic_ca.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_caiman\data\cmn_Body_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Armor_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_AMB_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
    class rhsusf_M1230a1_usarmy_wd: rhsusf_M1230a1_usarmy_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_M1230a1_usarmy_wd.paa";
        displayName = "$STR_RHS_M1230A1_NAME";
        picture = "\rhsusf\addons\rhsusf_caiman\pictures\rhs_caiman_unarmed_pic_ca.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usarmy_wd";
        crew = "rhsusf_army_ucp_driver_armored";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_caiman\data\cmn_Body_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_Armor_WD_CO.paa",
            "rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
            "rhsusf\addons\rhsusf_caiman\data\cmn_AMB_WD_CO.paa",
            "rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa",
            "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa"
        };
    };
};
