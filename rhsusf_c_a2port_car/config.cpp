class CfgPatches {
    class rhsusf_c_a2port_car {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {"rhsusf_main"};
        version = 1;
    };
};
class CfgAnimationSourceSounds {
    class RHS_HMMWV_Door {
        class DoorMovement {
            loop = 0;
            terminate = 0;
            trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
            sound0[] = {
                "A3\Sounds_F\environment\structures\doors\MetalDoors\MetalDoorsSqueak_1",
                0.562341,
                1,
                20
            };
            sound1[] = {
                "A3\Sounds_F\environment\structures\doors\MetalDoors\MetalDoorsSqueak_2",
                0.562341,
                1,
                20
            };
            sound2[] = {
                "A3\Sounds_F\environment\structures\doors\MetalDoors\MetalDoorsSqueak_3",
                0.562341,
                1,
                20
            };
            sound3[] = {
                "A3\Sounds_F\environment\structures\doors\MetalDoors\MetalDoorsSqueak_4",
                0.562341,
                1,
                20
            };
            sound[] = {
                "sound0",
                0.2,
                "sound1",
                0.2,
                "sound2",
                0.4,
                "sound3",
                0.2
            };
        };
        class OpenTheDoor {
            loop = 0;
            terminate = 0;
            trigger = "direction * (phase factor[0.01,0.02])";
            sound0[] = {
                "\rhsusf\addons\rhsusf_a2port_car\sounds\hmmwv\hmmwv_open_door",
                "db+6",
                1,
                20
            };
            sound[] = {"sound0", 1};
        };
        class SlamTheDoor {
            loop = 0;
            terminate = 0;
            trigger = "(1 - direction) * (phase factor[0.1,0.09])";
            sound0[] = {
                "\rhsusf\addons\rhsusf_a2port_car\sounds\hmmwv\hmmwv_slam_door",
                "db+6",
                1,
                20
            };
            sound[] = {"sound0", 1};
        };
    };
    class RHSUSF_Truck_Door {
        class DoorMovement {
            loop = 0;
            terminate = 1;
            trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
            sound0[] = {
                "\rhsusf\addons\rhsusf_a2port_car\sounds\truck\truck_ext_getout",
                "db+12",
                1,
                60
            };
            sound1[] = {
                "\rhsusf\addons\rhsusf_a2port_car\sounds\truck\truck_int_getout",
                "db+12",
                1,
                60
            };
            sound[] = {"sound0", 0.5, "sound1", 0.5};
        };
    };
    class RHS_Gearbox {
        class GearMovement {
            loop = 0;
            terminate = 1;
            trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
            sound0[] = {
                "\rhsusf\addons\rhsusf_a2port_car\sounds\Gear_Change",
                "db+14",
                1,
                60
            };
            sound[] = {"sound0", 1};
        };
    };
    class RHS_Wipers {
        class DoorMovement {
            loop = 0;
            terminate = 1;
            trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
            sound0[] = {
                "\rhsusf\addons\rhsusf_a2port_car\sounds\wipers.wss",
                "db+8",
                1,
                60
            };
            sound[] = {"sound0", 1};
        };
    };
};
class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        rhs_passenger_apc_generic01 = "rhs_passenger_apc_generic01_settlein";
        rhs_passenger_apc_generic02 = "rhs_passenger_apc_generic02_settlein";
        rhs_passenger_apc_generic02b = "rhs_passenger_apc_generic02b_settlein";
        rhs_passenger_apc_generic03 = "rhs_passenger_apc_generic03_settlein";
        rhs_passenger_apc_generic03_low = "rhs_passenger_apc_generic03_low_settlein";
        rhs_passenger_apc_generic04 = "rhs_passenger_apc_generic04_settlein";
        rhs_passenger_apc_narrow_generic01 = "rhs_passenger_apc_narrow_generic01_settlein";
        rhs_passenger_apc_narrow_generic01_low = "rhs_passenger_apc_narrow_generic01_low_settlein";
        rhs_passenger_apc_narrow_generic02 = "rhs_passenger_apc_narrow_generic02_settlein";
        rhs_passenger_apc_narrow_generic02_low = "rhs_passenger_apc_narrow_generic02_low_settlein";
        rhs_passenger_apc_narrow_generic03 = "rhs_passenger_apc_narrow_generic03_settlein";
        rhs_passenger_apc_narrow_generic03still = "rhs_passenger_apc_narrow_generic03still_settlein";
        rhs_passenger_apc_generic01_ns = "rhs_passenger_apc_generic01";
        rhs_passenger_apc_generic02_ns = "rhs_passenger_apc_generic02";
        rhs_passenger_apc_generic02b_ns = "rhs_passenger_apc_generic02b";
        rhs_passenger_apc_generic03_ns = "rhs_passenger_apc_generic03";
        rhs_passenger_apc_generic04_ns = "rhs_passenger_apc_generic04";
        rhs_passenger_apc_narrow_generic01_ns = "rhs_passenger_apc_narrow_generic01";
        rhs_passenger_apc_narrow_generic02_ns = "rhs_passenger_apc_narrow_generic02";
        rhs_passenger_apc_narrow_generic03_ns = "rhs_passenger_apc_narrow_generic03";
        rhs_passenger_apc_narrow_generic03still_ns = "rhs_passenger_apc_narrow_generic03still";
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class KIA_rhs_passenger_apc_generic01: DefaultDie {
            actions = "DeadActions";
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic01_KIA.rtm";
            speed = 1;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class rhs_passenger_apc_generic01_settlein: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic01_settlein.rtm";
            speed = -1.5;
            looped = 0;
            connectTo[] = {"rhs_passenger_apc_generic01", 1};
            interpolateTo[] = {"KIA_rhs_passenger_apc_generic01", 1};
            variantsAI[] = {"rhs_passenger_apc_generic01", 1};
            variantsPlayer[] = {"rhs_passenger_apc_generic01", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_passenger_apc_generic01: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic01.rtm";
            speed = 0.037453;
            interpolateTo[] = {"KIA_rhs_passenger_apc_generic01", 1};
        };
        class KIA_rhs_passenger_apc_generic02: DefaultDie {
            actions = "DeadActions";
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic02_KIA.rtm";
            speed = 1;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class rhs_passenger_apc_generic02_settlein: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic02_settlein.rtm";
            speed = -1.5;
            looped = 0;
            connectTo[] = {"rhs_passenger_apc_generic02", 1};
            interpolateTo[] = {"KIA_rhs_passenger_apc_generic02", 1};
            variantsAI[] = {"rhs_passenger_apc_generic02", 1};
            variantsPlayer[] = {"rhs_passenger_apc_generic02", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_passenger_apc_generic02: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic02.rtm";
            speed = 0.037453;
            interpolateTo[] = {"KIA_rhs_passenger_apc_generic02", 1};
        };
        class rhs_passenger_apc_generic02b_settlein: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic02_settlein.rtm";
            speed = -1.5;
            looped = 0;
            connectTo[] = {"rhs_passenger_apc_generic02b", 1};
            interpolateTo[] = {"KIA_rhs_passenger_apc_generic02", 1};
            variantsAI[] = {"rhs_passenger_apc_generic02b", 1};
            variantsPlayer[] = {"rhs_passenger_apc_generic02b", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_passenger_apc_generic02b: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic02.rtm";
            speed = 0.049917;
            interpolateTo[] = {"KIA_rhs_passenger_apc_generic02", 1};
        };
        class KIA_rhs_passenger_apc_generic03: DefaultDie {
            actions = "DeadActions";
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic03_KIA.rtm";
            speed = 1;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class rhs_passenger_apc_generic03_settlein: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic03_settlein.rtm";
            speed = -1.5;
            looped = 0;
            connectTo[] = {"rhs_passenger_apc_generic03", 1};
            interpolateTo[] = {"KIA_rhs_passenger_apc_generic03", 1};
            variantsAI[] = {"rhs_passenger_apc_generic03", 1};
            variantsPlayer[] = {"rhs_passenger_apc_generic03", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_passenger_apc_generic03: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic03.rtm";
            speed = 0.037453;
            interpolateTo[] = {"KIA_rhs_passenger_apc_generic03", 1};
        };
        class rhs_passenger_apc_generic03_low_settlein: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic03_low_settlein.rtm";
            speed = -1.5;
            looped = 0;
            connectTo[] = {"rhs_passenger_apc_generic03_low", 1};
            interpolateTo[] = {"KIA_rhs_passenger_apc_generic03", 1};
            variantsAI[] = {"rhs_passenger_apc_generic03_low", 1};
            variantsPlayer[] = {"rhs_passenger_apc_generic03_low", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_passenger_apc_generic03_low: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic03_low.rtm";
            speed = 0.037453;
            interpolateTo[] = {"KIA_rhs_passenger_apc_generic03", 1};
        };
        class KIA_rhs_passenger_apc_generic04: DefaultDie {
            actions = "DeadActions";
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic04_KIA.rtm";
            speed = 1;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class rhs_passenger_apc_generic04_settlein: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic04_settlein.rtm";
            speed = -1.5;
            looped = 0;
            connectTo[] = {"rhs_passenger_apc_generic04", 1};
            interpolateTo[] = {"KIA_rhs_passenger_apc_generic04", 1};
            variantsAI[] = {"rhs_passenger_apc_generic04", 1};
            variantsPlayer[] = {"rhs_passenger_apc_generic04", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_passenger_apc_generic04: Crew {
            variantsAI[] = {
                "rhs_passenger_apc_generic04",
                0.2,
                "rhs_passenger_apc_generic04still",
                0.8
            };
            variantsPlayer[] = {
                "rhs_passenger_apc_generic04",
                0.1,
                "rhs_passenger_apc_generic04still",
                0.9
            };
            variantAfter[] = {33, 33, 33};
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic04.rtm";
            speed = -33;
            interpolateTo[] = {
                "rhs_passenger_apc_generic04still",
                1,
                "KIA_rhs_passenger_apc_generic04",
                1
            };
        };
        class rhs_passenger_apc_generic04still: rhs_passenger_apc_generic04 {
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_generic04still.rtm";
            speed = -33;
            interpolateTo[] = {
                "rhs_passenger_apc_generic04",
                1,
                "KIA_rhs_passenger_apc_generic04",
                1
            };
        };
        class KIA_rhs_passenger_apc_narrow_generic01: DefaultDie {
            actions = "DeadActions";
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic01_KIA.rtm";
            speed = 1;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class rhs_passenger_apc_narrow_generic01_settlein: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic01_settlein.rtm";
            speed = -1.5;
            looped = 0;
            connectTo[] = {"rhs_passenger_apc_narrow_generic01", 1};
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic01", 1};
            variantsAI[] = {"rhs_passenger_apc_narrow_generic01", 1};
            variantsPlayer[] = {"rhs_passenger_apc_narrow_generic01", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_passenger_apc_narrow_generic01: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic01.rtm";
            speed = 0.049917;
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic01", 1};
        };
        class rhs_passenger_apc_narrow_generic01_low_settlein: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic01_low_settlein.rtm";
            speed = -1.5;
            looped = 0;
            connectTo[] = {"rhs_passenger_apc_narrow_generic01_low", 1};
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic01", 1};
            variantsAI[] = {"rhs_passenger_apc_narrow_generic01_low", 1};
            variantsPlayer[] = {"rhs_passenger_apc_narrow_generic01_low", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_passenger_apc_narrow_generic01_low: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic01_low.rtm";
            speed = 0.049917;
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic01", 1};
        };
        class KIA_rhs_passenger_apc_narrow_generic02: DefaultDie {
            actions = "DeadActions";
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic02_KIA.rtm";
            speed = 1;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class rhs_passenger_apc_narrow_generic02_settlein: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic02_settlein.rtm";
            speed = -1.5;
            looped = 0;
            connectTo[] = {"rhs_passenger_apc_narrow_generic02", 1};
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic02", 1};
            variantsAI[] = {"rhs_passenger_apc_narrow_generic02", 1};
            variantsPlayer[] = {"rhs_passenger_apc_narrow_generic02", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_passenger_apc_narrow_generic02: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic02.rtm";
            speed = 0.027076;
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic02", 1};
        };
        class rhs_passenger_apc_narrow_generic02_low_settlein: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic02_low_settlein.rtm";
            speed = -1.5;
            looped = 0;
            connectTo[] = {"rhs_passenger_apc_narrow_generic02_low", 1};
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic02", 1};
            variantsAI[] = {"rhs_passenger_apc_narrow_generic02_low", 1};
            variantsPlayer[] = {"rhs_passenger_apc_narrow_generic02_low", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_passenger_apc_narrow_generic02_low: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic02_low.rtm";
            speed = 0.027076;
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic02", 1};
        };
        class KIA_rhs_passenger_apc_narrow_generic03: DefaultDie {
            actions = "DeadActions";
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03_KIA.rtm";
            speed = 1;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class rhs_passenger_apc_narrow_generic03_settlein: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03_settlein.rtm";
            speed = -1.5;
            looped = 0;
            connectTo[] = {"rhs_passenger_apc_narrow_generic03", 1};
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic03", 1};
            variantsAI[] = {"rhs_passenger_apc_narrow_generic03", 1};
            variantsPlayer[] = {"rhs_passenger_apc_narrow_generic03", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_passenger_apc_narrow_generic03: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03.rtm";
            speed = 0.062893;
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic03", 1};
        };
        class rhs_passenger_apc_narrow_generic03_low_settlein: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03_low_settlein.rtm";
            speed = -1.5;
            looped = 0;
            connectTo[] = {"rhs_passenger_apc_narrow_generic03_low", 1};
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic03", 1};
            variantsAI[] = {"rhs_passenger_apc_narrow_generic03_low", 1};
            variantsPlayer[] = {"rhs_passenger_apc_narrow_generic03_low", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_passenger_apc_narrow_generic03_low: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03_low.rtm";
            speed = 0.062893;
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic03", 1};
        };
        class rhs_passenger_apc_narrow_generic03still_settlein: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03still_settlein.rtm";
            speed = -1.5;
            looped = 0;
            connectTo[] = {"rhs_passenger_apc_narrow_generic03still", 1};
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic03", 1};
            variantsAI[] = {"rhs_passenger_apc_narrow_generic03still", 1};
            variantsPlayer[] = {"rhs_passenger_apc_narrow_generic03still", 1};
            variantAfter[] = {1.5, 1.5, 1.5};
            useIdles = 0;
            leftHandIKCurve[] = {0};
            rightHandIKCurve[] = {0};
        };
        class rhs_passenger_apc_narrow_generic03still: Crew {
            file = "\rhsusf\addons\rhsusf_a2port_car\data\anim\rhs_passenger_apc_narrow_generic03still.rtm";
            speed = 0.062893;
            interpolateTo[] = {"KIA_rhs_passenger_apc_narrow_generic03", 1};
        };
    };
};
class CfgSoundEffects {
    class AttenuationsEffects {
        class RHS_CarAttenuation {
            class Equalizer0 {
                center[] = {100, 250, 1000, 5000};
                bandwidth[] = {2, 2, 2, 2};
                gain[] = {0.9, 0.8, 0.7, 0.6};
            };
            class Equalizer1 {
                center[] = {60, 500, 3000, 8000};
                bandwidth[] = {2, 2, 2, 2};
                gain[] = {0.9, 0.8, 0.6, 0.5};
            };
            class Echo {
                WetDryMix = 0.1;
                Feedback = 0.1;
                Delay = 1;
            };
        };
    };
};
