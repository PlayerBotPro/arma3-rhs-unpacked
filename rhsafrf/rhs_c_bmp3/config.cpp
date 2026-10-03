class CfgPatches {
    class rhs_c_bmp3 {
        units[] = {
            "rhs_bmp3_msv",
            "rhs_bmp3_late_msv",
            "rhs_bmp3m_msv",
            "rhs_bmp3mera_msv"
        };
        weapons[] = {};
        requiredVersion = 1.42;
        requiredAddons[] = {
            "rhs_main",
            "rhs_c_heavyweapons",
            "rhs_decals",
            "rhs_optics",
            "rhs_c_troops"
        };
        name = "BMP-3 IFV";
        author = "$STR_RHS_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class DefaultEventhandlers;
class RCWSOptics;
class CfgMovesBasic {
    class Default;
    class DefaultDie;
    class ManActions {
        RHS_BMP3_Commander = "RHS_BMP3_Commander";
        RHS_BMP3_CommanderOUT = "RHS_BMP3_Commander_OUT";
        RHS_BMP3_Gunner = "RHS_BMP3_Gunner";
        RHS_BMP3_Gunner02 = "RHS_BMP3_Gunner02";
        RHS_BMP3_Gunner03 = "RHS_BMP3_Gunner03";
        RHS_BMP3_GunnerOut = "RHS_BMP3_Gunner_Out";
        RHS_BMP3_Driver = "RHS_BMP3_Driver";
        RHS_BMP3_DriverOut = "RHS_BMP3_Driver_out";
        RHS_BMP3_Cargo = "RHS_BMP3_Cargo01";
        RHS_VehicleTurnout_1 = "rhs_vehicle_turnout_1_Idle_Pistol";
        RHS_VehicleTurnout_BMP1_1 = "rhs_vehicle_turnout_BMP1_1_Idle_Pistol";
        RHS_VehicleTurnout_Sprut_1 = "rhs_vehicle_turnout_sprut_1_Idle_Pistol";
        RHS_passenger_inside_6 = "rhs_passenger_inside_6_Idle_Unarmed";
    };
    class Actions {
        class RifleStandActions;
        class FFV_BaseActions;
        class rhs_vehicle_turnout_1Actions: FFV_BaseActions {
            upDegree = "ManPosCombat";
            stop = "rhs_vehicle_turnout_1_Idle_Unarmed";
            stopRelaxed = "rhs_vehicle_turnout_1_Idle_Unarmed";
            default = "rhs_vehicle_turnout_1_Idle_Unarmed";
            Stand = "rhs_vehicle_turnout_1_Idle_Unarmed";
            HandGunOn = "rhs_vehicle_turnout_1_Aim_Pistol";
            PrimaryWeapon = "rhs_vehicle_turnout_1_Idle_Unarmed";
            Binoculars = "rhs_vehicle_turnout_1_Aim_Binoc";
            die = "rhs_vehicle_turnout_1_Die";
            Unconscious = "rhs_vehicle_turnout_1_Die";
            civil = "rhs_vehicle_turnout_1_Idle_Unarmed";
        };
        class rhs_vehicle_turnout_1IdleUnarmedActions: FFV_BaseActions {
            upDegree = "ManPosNoWeapon";
            stop = "rhs_vehicle_turnout_1_Idle_Unarmed";
            stopRelaxed = "rhs_vehicle_turnout_1_Idle_Unarmed";
            default = "rhs_vehicle_turnout_1_Idle_Unarmed";
            Stand = "rhs_vehicle_turnout_1_Idle_Unarmed";
            HandGunOn = "rhs_vehicle_turnout_1_Aim_Pistol";
            PrimaryWeapon = "rhs_vehicle_turnout_1_Idle_Unarmed";
            Binoculars = "rhs_vehicle_turnout_1_Aim_Unarmed_Binoc";
            die = "rhs_vehicle_turnout_1_Die_Pistol";
            Unconscious = "rhs_vehicle_turnout_1_Die_Pistol";
            civil = "rhs_vehicle_turnout_1_Idle_Unarmed";
            throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
        };
        class rhs_vehicle_turnout_1DeadActions: FFV_BaseActions {
            stop = "rhs_vehicle_turnout_1_Die";
            default = "rhs_vehicle_turnout_1_Die";
            die = "rhs_vehicle_turnout_1_Die";
            Unconscious = "rhs_vehicle_turnout_1_Die";
        };
        class rhs_vehicle_turnout_1DeadPistolActions: FFV_BaseActions {
            stop = "rhs_vehicle_turnout_1_Die_Pistol";
            default = "rhs_vehicle_turnout_1_Die_Pistol";
            die = "rhs_vehicle_turnout_1_Die_Pistol";
            Unconscious = "rhs_vehicle_turnout_1_Die_Pistol";
        };
        class rhs_vehicle_turnout_1PistolActions: rhs_vehicle_turnout_1Actions {
            upDegree = "ManPosHandGunStand";
            stop = "rhs_vehicle_turnout_1_Aim_Pistol";
            stopRelaxed = "rhs_vehicle_turnout_1_Aim_Pistol";
            default = "rhs_vehicle_turnout_1_Aim_Pistol";
            Binoculars = "rhs_vehicle_turnout_1_Aim_Pistol_Binoc";
            throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
            Stand = "rhs_vehicle_turnout_1_Idle_Pistol";
            die = "rhs_vehicle_turnout_1_Die_Pistol";
            Unconscious = "rhs_vehicle_turnout_1_Die_Pistol";
        };
        class rhs_vehicle_turnout_1BinocActions: rhs_vehicle_turnout_1Actions {
            binocOn = "";
            upDegree = "ManPosBinocStand";
            stop = "rhs_vehicle_turnout_1_Aim_Pistol_Binoc";
            stopRelaxed = "rhs_vehicle_turnout_1_Aim_Pistol_Binoc";
            default = "rhs_vehicle_turnout_1_Aim_Binoc";
        };
        class rhs_vehicle_turnout_1BinocPistolActions: rhs_vehicle_turnout_1BinocActions {
            stop = "rhs_vehicle_turnout_1_Aim_Pistol_Binoc";
            stopRelaxed = "rhs_vehicle_turnout_1_Aim_Pistol_Binoc";
            default = "rhs_vehicle_turnout_1_Aim_Pistol_Binoc";
            die = "rhs_vehicle_turnout_1_Die_Pistol";
            Unconscious = "rhs_vehicle_turnout_1_Die_Pistol";
        };
        class rhs_vehicle_turnout_1BinocUnarmedActions: rhs_vehicle_turnout_1BinocActions {
            stop = "rhs_vehicle_turnout_1_Aim_Unarmed_Binoc";
            stopRelaxed = "rhs_vehicle_turnout_1_Aim_Unarmed_Binoc";
            default = "rhs_vehicle_turnout_1_Aim_Unarmed_Binoc";
            die = "rhs_vehicle_turnout_1_Die_Pistol";
            Unconscious = "rhs_vehicle_turnout_1_Die_Pistol";
        };
        class rhs_vehicle_turnout_1IdleActions: rhs_vehicle_turnout_1Actions {
            upDegree = "ManPosStand";
            stop = "rhs_vehicle_turnout_1_Idle";
            stopRelaxed = "rhs_vehicle_turnout_1_Idle";
            default = "rhs_vehicle_turnout_1_Idle";
            Combat = "rhs_vehicle_turnout_1_Idle_Unarmed";
            fireNotPossible = "rhs_vehicle_turnout_1_Idle_Unarmed";
            PlayerStand = "rhs_vehicle_turnout_1_Idle_Unarmed";
        };
        class rhs_vehicle_turnout_1IdlePistolActions: rhs_vehicle_turnout_1Actions {
            Stand = "rhs_vehicle_turnout_1_Idle_Pistol";
            upDegree = "ManPosHandGunStand";
            stop = "rhs_vehicle_turnout_1_Idle_Pistol";
            stopRelaxed = "rhs_vehicle_turnout_1_Idle_Pistol";
            default = "rhs_vehicle_turnout_1_Idle_Pistol";
            Combat = "rhs_vehicle_turnout_1_Aim_Pistol";
            fireNotPossible = "rhs_vehicle_turnout_1_Aim_Pistol";
            PlayerStand = "rhs_vehicle_turnout_1_Aim_Pistol";
            die = "rhs_vehicle_turnout_1_Die_Pistol";
            Unconscious = "rhs_vehicle_turnout_1_Die_Pistol";
        };
        class rhs_vehicle_turnout_sprut_1Actions: FFV_BaseActions {
            upDegree = "ManPosCombat";
            stop = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
            stopRelaxed = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
            default = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
            Stand = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
            HandGunOn = "rhs_vehicle_turnout_sprut_1_Aim_Pistol";
            PrimaryWeapon = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
            Binoculars = "rhs_vehicle_turnout_sprut_1_Aim_Binoc";
            die = "rhs_vehicle_turnout_sprut_1_Die";
            Unconscious = "rhs_vehicle_turnout_sprut_1_Die";
            civil = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
        };
        class rhs_vehicle_turnout_sprut_1IdleUnarmedActions: FFV_BaseActions {
            upDegree = "ManPosNoWeapon";
            stop = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
            stopRelaxed = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
            default = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
            Stand = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
            HandGunOn = "rhs_vehicle_turnout_sprut_1_Aim_Pistol";
            PrimaryWeapon = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
            Binoculars = "rhs_vehicle_turnout_sprut_1_Aim_Unarmed_Binoc";
            die = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
            Unconscious = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
            civil = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
            throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
        };
        class rhs_vehicle_turnout_sprut_1DeadActions: FFV_BaseActions {
            stop = "rhs_vehicle_turnout_sprut_1_Die";
            default = "rhs_vehicle_turnout_sprut_1_Die";
            die = "rhs_vehicle_turnout_sprut_1_Die";
            Unconscious = "rhs_vehicle_turnout_sprut_1_Die";
        };
        class rhs_vehicle_turnout_sprut_1DeadPistolActions: FFV_BaseActions {
            stop = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
            default = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
            die = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
            Unconscious = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
        };
        class rhs_vehicle_turnout_sprut_1PistolActions: rhs_vehicle_turnout_sprut_1Actions {
            upDegree = "ManPosHandGunStand";
            stop = "rhs_vehicle_turnout_sprut_1_Aim_Pistol";
            stopRelaxed = "rhs_vehicle_turnout_sprut_1_Aim_Pistol";
            default = "rhs_vehicle_turnout_sprut_1_Aim_Pistol";
            Binoculars = "rhs_vehicle_turnout_sprut_1_Aim_Pistol_Binoc";
            throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
            Stand = "rhs_vehicle_turnout_sprut_1_Idle_Pistol";
            die = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
            Unconscious = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
        };
        class rhs_vehicle_turnout_sprut_1BinocActions: rhs_vehicle_turnout_sprut_1Actions {
            binocOn = "";
            upDegree = "ManPosBinocStand";
            stop = "rhs_vehicle_turnout_sprut_1_Aim_Pistol_Binoc";
            stopRelaxed = "rhs_vehicle_turnout_sprut_1_Aim_Pistol_Binoc";
            default = "rhs_vehicle_turnout_sprut_1_Aim_Binoc";
        };
        class rhs_vehicle_turnout_sprut_1BinocPistolActions: rhs_vehicle_turnout_sprut_1BinocActions {
            stop = "rhs_vehicle_turnout_sprut_1_Aim_Pistol_Binoc";
            stopRelaxed = "rhs_vehicle_turnout_sprut_1_Aim_Pistol_Binoc";
            default = "rhs_vehicle_turnout_sprut_1_Aim_Pistol_Binoc";
            die = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
            Unconscious = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
        };
        class rhs_vehicle_turnout_sprut_1BinocUnarmedActions: rhs_vehicle_turnout_sprut_1BinocActions {
            stop = "rhs_vehicle_turnout_sprut_1_Aim_Unarmed_Binoc";
            stopRelaxed = "rhs_vehicle_turnout_sprut_1_Aim_Unarmed_Binoc";
            default = "rhs_vehicle_turnout_sprut_1_Aim_Unarmed_Binoc";
            die = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
            Unconscious = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
        };
        class rhs_vehicle_turnout_sprut_1IdleActions: rhs_vehicle_turnout_sprut_1Actions {
            upDegree = "ManPosStand";
            stop = "rhs_vehicle_turnout_sprut_1_Idle";
            stopRelaxed = "rhs_vehicle_turnout_sprut_1_Idle";
            default = "rhs_vehicle_turnout_sprut_1_Idle";
            Combat = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
            fireNotPossible = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
            PlayerStand = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
        };
        class rhs_vehicle_turnout_sprut_1IdlePistolActions: rhs_vehicle_turnout_sprut_1Actions {
            Stand = "rhs_vehicle_turnout_sprut_1_Idle_Pistol";
            upDegree = "ManPosHandGunStand";
            stop = "rhs_vehicle_turnout_sprut_1_Idle_Pistol";
            stopRelaxed = "rhs_vehicle_turnout_sprut_1_Idle_Pistol";
            default = "rhs_vehicle_turnout_sprut_1_Idle_Pistol";
            Combat = "rhs_vehicle_turnout_sprut_1_Aim_Pistol";
            fireNotPossible = "rhs_vehicle_turnout_sprut_1_Aim_Pistol";
            PlayerStand = "rhs_vehicle_turnout_sprut_1_Aim_Pistol";
            die = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
            Unconscious = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
        };
        class rhs_vehicle_turnout_bmp1_1Actions: FFV_BaseActions {
            upDegree = "ManPosCombat";
            stop = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
            stopRelaxed = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
            default = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
            Stand = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
            HandGunOn = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol";
            PrimaryWeapon = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
            Binoculars = "rhs_vehicle_turnout_bmp1_1_Aim_Binoc";
            die = "rhs_vehicle_turnout_bmp1_1_Die";
            Unconscious = "rhs_vehicle_turnout_bmp1_1_Die";
            civil = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
        };
        class rhs_vehicle_turnout_bmp1_1IdleUnarmedActions: FFV_BaseActions {
            upDegree = "ManPosNoWeapon";
            stop = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
            stopRelaxed = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
            default = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
            Stand = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
            HandGunOn = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol";
            PrimaryWeapon = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
            Binoculars = "rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_Binoc";
            die = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
            Unconscious = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
            civil = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
            throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
        };
        class rhs_vehicle_turnout_bmp1_1DeadActions: FFV_BaseActions {
            stop = "rhs_vehicle_turnout_bmp1_1_Die";
            default = "rhs_vehicle_turnout_bmp1_1_Die";
            die = "rhs_vehicle_turnout_bmp1_1_Die";
            Unconscious = "rhs_vehicle_turnout_bmp1_1_Die";
        };
        class rhs_vehicle_turnout_bmp1_1DeadPistolActions: FFV_BaseActions {
            stop = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
            default = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
            die = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
            Unconscious = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
        };
        class rhs_vehicle_turnout_bmp1_1PistolActions: rhs_vehicle_turnout_bmp1_1Actions {
            upDegree = "ManPosHandGunStand";
            stop = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol";
            stopRelaxed = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol";
            default = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol";
            Binoculars = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol_Binoc";
            throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
            Stand = "rhs_vehicle_turnout_bmp1_1_Idle_Pistol";
            die = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
            Unconscious = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
        };
        class rhs_vehicle_turnout_bmp1_1BinocActions: rhs_vehicle_turnout_bmp1_1Actions {
            binocOn = "";
            upDegree = "ManPosBinocStand";
            stop = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol_Binoc";
            stopRelaxed = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol_Binoc";
            default = "rhs_vehicle_turnout_bmp1_1_Aim_Binoc";
        };
        class rhs_vehicle_turnout_bmp1_1BinocPistolActions: rhs_vehicle_turnout_bmp1_1BinocActions {
            stop = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol_Binoc";
            stopRelaxed = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol_Binoc";
            default = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol_Binoc";
            die = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
            Unconscious = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
        };
        class rhs_vehicle_turnout_bmp1_1BinocUnarmedActions: rhs_vehicle_turnout_bmp1_1BinocActions {
            stop = "rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_Binoc";
            stopRelaxed = "rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_Binoc";
            default = "rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_Binoc";
            die = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
            Unconscious = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
        };
        class rhs_vehicle_turnout_bmp1_1IdleActions: rhs_vehicle_turnout_bmp1_1Actions {
            upDegree = "ManPosStand";
            stop = "rhs_vehicle_turnout_bmp1_1_Idle";
            stopRelaxed = "rhs_vehicle_turnout_bmp1_1_Idle";
            default = "rhs_vehicle_turnout_bmp1_1_Idle";
            Combat = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
            fireNotPossible = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
            PlayerStand = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
        };
        class rhs_vehicle_turnout_bmp1_1IdlePistolActions: rhs_vehicle_turnout_bmp1_1Actions {
            Stand = "rhs_vehicle_turnout_bmp1_1_Idle_Pistol";
            upDegree = "ManPosHandGunStand";
            stop = "rhs_vehicle_turnout_bmp1_1_Idle_Pistol";
            stopRelaxed = "rhs_vehicle_turnout_bmp1_1_Idle_Pistol";
            default = "rhs_vehicle_turnout_bmp1_1_Idle_Pistol";
            Combat = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol";
            fireNotPossible = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol";
            PlayerStand = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol";
            die = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
            Unconscious = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
        };
        class rhs_passenger_inside_6Actions: FFV_BaseActions {
            upDegree = "ManPosCombat";
            stop = "rhs_passenger_inside_6_Aim";
            stopRelaxed = "rhs_passenger_inside_6_Aim";
            default = "rhs_passenger_inside_6_Aim";
            Stand = "rhs_passenger_inside_6_Idle";
            HandGunOn = "rhs_passenger_inside_6_Aim_Pistol";
            PrimaryWeapon = "rhs_passenger_inside_6_Idle_Unarmed";
            Binoculars = "rhs_passenger_inside_6_Aim_Binoc";
            die = "rhs_passenger_inside_6_Die";
            Unconscious = "rhs_passenger_inside_6_Die";
            civil = "rhs_passenger_inside_6_Idle_Unarmed";
            Obstructed = "rhs_passenger_inside_6_Obstructed";
        };
        class rhs_passenger_inside_6IdleUnarmedActions: FFV_BaseActions {
            upDegree = "ManPosNoWeapon";
            stop = "rhs_passenger_inside_6_Idle_Unarmed";
            stopRelaxed = "rhs_passenger_inside_6_Idle_Unarmed";
            default = "rhs_passenger_inside_6_Idle_Unarmed";
            Stand = "rhs_passenger_inside_6_Idle_Unarmed";
            HandGunOn = "rhs_passenger_inside_6_Idle_Unarmed";
            PrimaryWeapon = "rhs_passenger_inside_6_Idle_Unarmed";
            Binoculars = "rhs_passenger_inside_6_Aim_Unarmed_Binoc";
            die = "rhs_passenger_inside_6_Die_Pistol";
            Unconscious = "rhs_passenger_inside_6_Die_Pistol";
            civil = "rhs_passenger_inside_6_Idle_Unarmed";
            throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
        };
        class rhs_passenger_inside_6PistolActions: rhs_passenger_inside_6Actions {
            upDegree = "ManPosHandGunStand";
            stop = "rhs_passenger_inside_6_Aim_Pistol";
            stopRelaxed = "rhs_passenger_inside_6_Aim_Pistol";
            default = "rhs_passenger_inside_6_Aim_Pistol";
            Binoculars = "rhs_passenger_inside_6_Aim_Pistol_Binoc";
            throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
            Stand = "rhs_passenger_inside_6_Idle_Pistol";
            die = "rhs_passenger_inside_6_Die_Pistol";
            Unconscious = "rhs_passenger_inside_6_Die_Pistol";
            Obstructed = "rhs_passenger_inside_6_Obstructed_Pistol";
        };
        class rhs_passenger_inside_6BinocActions: rhs_passenger_inside_6Actions {
            binocOn = "";
            upDegree = "ManPosBinocStand";
            stop = "rhs_passenger_inside_6_Aim_Binoc";
            stopRelaxed = "rhs_passenger_inside_6_Aim_Binoc";
            default = "rhs_passenger_inside_6_Aim_Binoc";
        };
        class rhs_passenger_inside_6BinocUnarmedActions: rhs_passenger_inside_6BinocActions {
            stop = "rhs_passenger_inside_6_Aim_Unarmed_Binoc";
            stopRelaxed = "rhs_passenger_inside_6_Aim_Unarmed_Binoc";
            default = "rhs_passenger_inside_6_Aim_Unarmed_Binoc";
            die = "rhs_passenger_inside_6_Die_Pistol";
            Unconscious = "rhs_passenger_inside_6_Die_Pistol";
        };
        class rhs_passenger_inside_6IdleActions: rhs_passenger_inside_6Actions {
            upDegree = "ManPosStand";
            stop = "rhs_passenger_inside_6_Idle";
            stopRelaxed = "rhs_passenger_inside_6_Idle";
            default = "rhs_passenger_inside_6_Idle";
            Combat = "rhs_passenger_inside_6_Aim";
            fireNotPossible = "rhs_passenger_inside_6_Aim";
            PlayerStand = "rhs_passenger_inside_6_Aim";
        };
        class rhs_passenger_inside_6DeadActions: FFV_BaseActions {
            stop = "rhs_passenger_inside_6_Die";
            default = "rhs_passenger_inside_6_Die";
            die = "rhs_passenger_inside_6_Die";
            Unconscious = "rhs_passenger_inside_6_Die";
        };
        class rhs_passenger_inside_6DeadPistolActions: FFV_BaseActions {
            stop = "rhs_passenger_inside_6_Die_Pistol";
            default = "rhs_passenger_inside_6_Die_Pistol";
            die = "rhs_passenger_inside_6_Die_Pistol";
            Unconscious = "rhs_passenger_inside_6_Die_Pistol";
        };
        class rhs_passenger_inside_6BinocPistolActions: rhs_passenger_inside_6BinocActions {
            stop = "rhs_passenger_inside_6_Aim_Pistol_Binoc";
            stopRelaxed = "rhs_passenger_inside_6_Aim_Pistol_Binoc";
            default = "rhs_passenger_inside_6_Aim_Pistol_Binoc";
            die = "rhs_passenger_inside_6_Die_Pistol";
            Unconscious = "rhs_passenger_inside_6_Die_Pistol";
        };
        class rhs_passenger_inside_6IdlePistolActions: rhs_passenger_inside_6Actions {
            Stand = "rhs_passenger_inside_6_Idle_Pistol";
            upDegree = "ManPosHandGunStand";
            stop = "rhs_passenger_inside_6_Idle_Pistol";
            stopRelaxed = "rhs_passenger_inside_6_Idle_Pistol";
            default = "rhs_passenger_inside_6_Idle_Pistol";
            Combat = "rhs_passenger_inside_6_Aim_Pistol";
            fireNotPossible = "rhs_passenger_inside_6_Aim_Pistol";
            PlayerStand = "rhs_passenger_inside_6_Aim_Pistol";
            die = "rhs_passenger_inside_6_Die_Pistol";
            Unconscious = "rhs_passenger_inside_6_Die_Pistol";
        };
        class rhs_passenger_inside_6ObstructedActions: rhs_passenger_inside_6Actions {
            stop = "rhs_passenger_inside_6_Obstructed";
            stopRelaxed = "rhs_passenger_inside_6_Obstructed";
            default = "rhs_passenger_inside_6_Obstructed";
            Combat = "rhs_passenger_inside_6_Aim";
            fireNotPossible = "rhs_passenger_inside_6_Obstructed";
            PlayerStand = "rhs_passenger_inside_6_Obstructed";
        };
        class rhs_passenger_inside_6ObstructedPistolActions: rhs_passenger_inside_6PistolActions {
            Stand = "rhs_passenger_inside_6_Obstructed_Pistol";
            stop = "rhs_passenger_inside_6_Obstructed_Pistol";
            stopRelaxed = "rhs_passenger_inside_6_Obstructed_Pistol";
            default = "rhs_passenger_inside_6_Obstructed_Pistol";
            Combat = "rhs_passenger_inside_6_Aim_Pistol";
            fireNotPossible = "rhs_passenger_inside_6_Obstructed_Pistol";
            PlayerStand = "rhs_passenger_inside_6_Obstructed_Pistol";
        };
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class rhs_crew_in: Default {
            actions = "CargoActions";
            aiming = "aimingNo";
            aimingBody = "aimingNo";
            legs = "legsNo";
            head = "headNo";
            disableWeapons = 1;
            interpolationRestart = 1;
            soundEdge[] = {0.45};
            boundingSphere = 2.5;
            canPullTrigger = 0;
            leaning = "crewShake";
            rightHandIKCurve[] = {1};
            leftHandIKCurve[] = {1};
            rightLegIKCurve[] = {1};
            leftLegIKCurve[] = {1};
            ConnectTo[] = {};
            InterpolateTo[] = {"Unconscious", 0.1};
        };
        class KIA_RHS_BMP3_Commander: DefaultDie {
            actions = "DeadActions";
            file = "rhsafrf\addons\rhs_bmp3\anim\KIA_BMP3_Commander.rtm";
            speed = 0.5;
            looped = 0;
            terminal = 1;
            soundEnabled = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class KIA_RHS_BMP3_Gunner: KIA_RHS_BMP3_Commander {
            file = "\rhsafrf\addons\rhs_bmp3\anim\KIA_BMP3_Gunner.rtm";
        };
        class KIA_RHS_BMP3_Gunner02: KIA_RHS_BMP3_Commander {
            file = "\rhsafrf\addons\rhs_bmp3\anim\KIA_BMP3_Gunner02.rtm";
        };
        class KIA_RHS_BMP3_Gunner03: KIA_RHS_BMP3_Commander {
            file = "\rhsafrf\addons\rhs_bmp3\anim\KIA_BMP3_Gunner03.rtm";
        };
        class KIA_RHS_BMP3_Gunner_Out: KIA_RHS_BMP3_Commander {
            file = "\rhsafrf\addons\rhs_bmp3\anim\KIA_BMP3_Gunner_Out.rtm";
        };
        class KIA_RHS_BMP3_Commander_Out: KIA_RHS_BMP3_Commander {
            file = "\rhsafrf\addons\rhs_bmp3\anim\KIA_BMP3_Commander_Out.rtm";
        };
        class KIA_RHS_BMP3_Driver: KIA_RHS_BMP3_Commander {
            file = "\rhsafrf\addons\rhs_bmp3\anim\KIA_BMP3_Driver.rtm";
        };
        class KIA_RHS_BMP3_Driver_Out: KIA_RHS_BMP3_Commander {
            file = "\rhsafrf\addons\rhs_bmp3\anim\KIA_BMP3_Driver_Out.rtm";
        };
        class RHS_BMP3_Gunner: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_bmp3\anim\BMP3_Gunner.rtm";
            interpolateTo[] = {"KIA_RHS_BMP3_Gunner", 1};
        };
        class RHS_BMP3_Gunner_Out: Crew {
            file = "\rhsafrf\addons\rhs_bmp3\anim\BMP3_Gunner_Out.rtm";
            interpolateTo[] = {"KIA_RHS_BMP3_Gunner", 1};
        };
        class RHS_BMP3_Gunner02: Crew {
            file = "\rhsafrf\addons\rhs_bmp3\anim\BMP3_Gunner02.rtm";
            interpolateTo[] = {"KIA_RHS_BMP3_Gunner02", 1};
        };
        class RHS_BMP3_Gunner03: Crew {
            file = "\rhsafrf\addons\rhs_bmp3\anim\BMP3_Gunner03.rtm";
            interpolateTo[] = {"KIA_RHS_BMP3_Gunner03", 1};
        };
        class RHS_BMP3_Commander: rhs_crew_in {
            file = "\rhsafrf\addons\rhs_bmp3\anim\BMP3_Commander.rtm";
            interpolateTo[] = {"KIA_RHS_BMP3_Commander", 1};
        };
        class RHS_BMP3_Commander_Out: Crew {
            file = "\rhsafrf\addons\rhs_bmp3\anim\BMP3_Commander_Out.rtm";
            interpolateTo[] = {"KIA_RHS_BMP3_Commander", 1};
        };
        class RHS_BMP3_Driver: Crew {
            file = "\rhsafrf\addons\rhs_bmp3\anim\BMP3_Driver.rtm";
            interpolateTo[] = {"KIA_RHS_BMP3_Commander", 1};
        };
        class RHS_BMP3_Driver_Out: Crew {
            file = "\rhsafrf\addons\rhs_bmp3\anim\BMP3_Driver_Out.rtm";
            interpolateTo[] = {"KIA_RHS_BMP3_Commander", 1};
        };
        class RHS_KIA_BMP3_Cargo01: KIA_RHS_BMP3_Driver {
            file = "\rhsafrf\addons\rhs_bmp3\anim\KIA_BMP3_Cargo01.rtm";
        };
        class RHS_BMP3_Cargo01: Crew {
            file = "\rhsafrf\addons\rhs_bmp3\anim\BMP3_Cargo01_V0.rtm";
            interpolateTo[] = {"RHS_KIA_BMP3_Cargo01", 0.1};
            connectTo[] = {
                "RHS_BMP3_Cargo01",
                0.1,
                "RHS_BMP3_Cargo01_V1",
                0.1,
                "RHS_BMP3_Cargo01_V2",
                0.1,
                "RHS_BMP3_Cargo01_V3",
                0.1,
                "RHS_BMP3_Cargo01_V4",
                0.1
            };
            equivalentTo = "RHS_BMP3_Cargo01";
            variantsAI[] = {
                "RHS_BMP3_Cargo01",
                0.6,
                "RHS_BMP3_Cargo01_V1",
                0.1,
                "RHS_BMP3_Cargo01_V2",
                0.1,
                "RHS_BMP3_Cargo01_V3",
                0.1,
                "RHS_BMP3_Cargo01_V4",
                0.1
            };
            variantAfter[] = {5, 10, 20};
            speed = 0.3;
        };
        class RHS_BMP3_Cargo01_V1: RHS_BMP3_Cargo01 {
            file = "\rhsafrf\addons\rhs_bmp3\anim\BMP3_Cargo01_V1.rtm";
            connectTo[] = {"RHS_BMP3_Cargo01", 0.1};
            speed = 0.236;
            variantAfter[] = {4, 4, 4};
        };
        class RHS_BMP3_Cargo01_V2: RHS_BMP3_Cargo01 {
            file = "\rhsafrf\addons\rhs_bmp3\anim\BMP3_Cargo01_V2.rtm";
            connectTo[] = {"RHS_BMP3_Cargo01", 0.1};
            speed = 0.169;
            variantAfter[] = {6, 6, 6};
        };
        class RHS_BMP3_Cargo01_V3: RHS_BMP3_Cargo01 {
            file = "\rhsafrf\addons\rhs_bmp3\anim\BMP3_Cargo01_V3.rtm";
            connectTo[] = {"RHS_BMP3_Cargo01", 0.1};
            speed = 0.197;
            variantAfter[] = {5, 5, 5};
        };
        class RHS_BMP3_Cargo01_V4: RHS_BMP3_Cargo01 {
            file = "\rhsafrf\addons\rhs_bmp3\anim\BMP3_Cargo01_V4.rtm";
            connectTo[] = {"RHS_BMP3_Cargo01", 0.1};
            speed = 0.197;
            variantAfter[] = {5, 5, 5};
        };
        class vehicle_turnout_1_Aim_Pistol;
        class vehicle_turnout_1_Aim_Pistol_Idling;
        class vehicle_turnout_1_Idle_Pistol;
        class vehicle_turnout_1_Idle_Pistol_Idling;
        class vehicle_turnout_1_Aim_ToPistol;
        class vehicle_turnout_1_Aim_ToPistol_End;
        class vehicle_turnout_1_Aim_FromPistol;
        class vehicle_turnout_1_Aim_FromPistol_End;
        class vehicle_turnout_1_Aim_Binoc;
        class vehicle_turnout_1_Aim_Pistol_Binoc;
        class vehicle_turnout_1_Aim_ToBinoc;
        class vehicle_turnout_1_Aim_ToBinoc_End;
        class vehicle_turnout_1_Aim_FromBinoc;
        class vehicle_turnout_1_Aim_FromBinoc_End;
        class vehicle_turnout_1_Aim_Pistol_ToBinoc;
        class vehicle_turnout_1_Aim_Pistol_ToBinoc_End;
        class vehicle_turnout_1_Aim_Pistol_FromBinoc;
        class vehicle_turnout_1_Aim_Pistol_FromBinoc_End;
        class vehicle_turnout_1_Idle_Unarmed;
        class vehicle_turnout_1_Idle_Unarmed_Idling;
        class vehicle_turnout_1_Aim_Unarmed_Binoc;
        class vehicle_turnout_1_Aim_Unarmed_ToBinoc;
        class vehicle_turnout_1_Aim_Unarmed_ToBinoc_End;
        class vehicle_turnout_1_Aim_Unarmed_FromBinoc;
        class vehicle_turnout_1_Aim_Unarmed_FromBinoc_End;
        class vehicle_turnout_1_Die;
        class vehicle_turnout_1_Die_Pistol;
        class rhs_vehicle_turnout_1_Aim_Pistol: vehicle_turnout_1_Aim_Pistol {
            actions = "rhs_vehicle_turnout_1PistolActions";
            variantsAI[] = {"rhs_vehicle_turnout_1_Aim_Pistol_Idling", 1};
            variantsPlayer[] = {"rhs_vehicle_turnout_1_Aim_Pistol_Idling", 1};
            ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_Pistol_ToBinoc", 0.1};
            InterpolateTo[] = {
                "rhs_vehicle_turnout_1_Aim_FromPistol",
                0.1,
                "rhs_vehicle_turnout_1_Idle_Pistol",
                0.2,
                "rhs_vehicle_turnout_1_Idle_Unarmed",
                0.2,
                "rhs_vehicle_turnout_1_Die_Pistol",
                0.5
            };
        };
        class rhs_vehicle_turnout_1_Aim_Pistol_Idling: vehicle_turnout_1_Aim_Pistol_Idling {
            ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_Pistol", 0.1};
            InterpolateTo[] = {
                "rhs_vehicle_turnout_1_Aim_FromPistol",
                0.1,
                "rhs_vehicle_turnout_1_Idle_Pistol",
                0.2,
                "rhs_vehicle_turnout_1_Idle_Unarmed",
                0.2,
                "rhs_vehicle_turnout_1_Die_Pistol",
                0.5
            };
        };
        class rhs_vehicle_turnout_1_Idle_Pistol: vehicle_turnout_1_Idle_Pistol {
            actions = "rhs_vehicle_turnout_1IdlePistolActions";
            InterpolateTo[] = {
                "rhs_vehicle_turnout_1_Aim_Pistol",
                0.1,
                "rhs_vehicle_turnout_1_Aim_FromPistol",
                0.1,
                "rhs_vehicle_turnout_1_Idle_Unarmed",
                0.1,
                "rhs_vehicle_turnout_1_Die_Pistol",
                0.1
            };
            variantsAI[] = {"rhs_vehicle_turnout_1_Idle_Pistol_Idling", 1};
            variantsPlayer[] = {"rhs_vehicle_turnout_1_Idle_Pistol_Idling", 1};
        };
        class rhs_vehicle_turnout_1_Idle_Pistol_Idling: vehicle_turnout_1_Idle_Pistol_Idling {
            ConnectTo[] = {"rhs_vehicle_turnout_1_Idle_Pistol", 0.1};
            InterpolateTo[] = {
                "rhs_vehicle_turnout_1_Aim_Pistol",
                0.1,
                "rhs_vehicle_turnout_1_Aim_FromPistol",
                0.1,
                "rhs_vehicle_turnout_1_Idle_Unarmed",
                0.1,
                "rhs_vehicle_turnout_1_Die_Pistol",
                0.1
            };
        };
        class rhs_vehicle_turnout_1_Aim_ToPistol: vehicle_turnout_1_Aim_ToPistol {
            actions = "rhs_vehicle_turnout_1PistolActions";
            ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_ToPistol_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_1_Aim_ToPistol_End: vehicle_turnout_1_Aim_ToPistol_End {
            actions = "rhs_vehicle_turnout_1PistolActions";
            ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_Pistol", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_1_Aim_FromPistol: vehicle_turnout_1_Aim_FromPistol {
            actions = "rhs_vehicle_turnout_1PistolActions";
            ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_FromPistol_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_1_Aim_FromPistol_End: vehicle_turnout_1_Aim_FromPistol_End {
            actions = "rhs_vehicle_turnout_1Actions";
            ConnectTo[] = {"rhs_vehicle_turnout_1_Idle_Unarmed", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_1_Aim_Binoc: vehicle_turnout_1_Aim_Binoc {
            actions = "rhs_vehicle_turnout_1BinocActions";
            InterpolateTo[] = {
                "rhs_vehicle_turnout_1_Aim_FromBinoc",
                0.1,
                "rhs_vehicle_turnout_1_Die",
                0.1
            };
        };
        class rhs_vehicle_turnout_1_Aim_Pistol_Binoc: vehicle_turnout_1_Aim_Pistol_Binoc {
            actions = "rhs_vehicle_turnout_1BinocPistolActions";
            InterpolateTo[] = {
                "rhs_vehicle_turnout_1_Aim_Pistol_FromBinoc",
                0.1,
                "rhs_vehicle_turnout_1_Die_Pistol",
                0.1
            };
        };
        class rhs_vehicle_turnout_1_Aim_ToBinoc: vehicle_turnout_1_Aim_ToBinoc {
            actions = "rhs_vehicle_turnout_1BinocActions";
            ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_ToBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_1_Aim_ToBinoc_End: vehicle_turnout_1_Aim_ToBinoc_End {
            actions = "rhs_vehicle_turnout_1BinocActions";
            ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_Binoc", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_1_Aim_FromBinoc: vehicle_turnout_1_Aim_FromBinoc {
            actions = "rhs_vehicle_turnout_1BinocActions";
            ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_FromBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_1_Aim_FromBinoc_End: vehicle_turnout_1_Aim_FromBinoc_End {
            actions = "rhs_vehicle_turnout_1Actions";
            ConnectTo[] = {"rhs_vehicle_turnout_1_Idle_Unarmed", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_1_Aim_Pistol_ToBinoc: vehicle_turnout_1_Aim_Pistol_ToBinoc {
            actions = "rhs_vehicle_turnout_1BinocActions";
            ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_Pistol_ToBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_1_Aim_Pistol_ToBinoc_End: vehicle_turnout_1_Aim_Pistol_ToBinoc_End {
            actions = "rhs_vehicle_turnout_1BinocActions";
            ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_Pistol_Binoc", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_1_Aim_Pistol_FromBinoc: vehicle_turnout_1_Aim_Pistol_FromBinoc {
            actions = "rhs_vehicle_turnout_1BinocActions";
            ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_Pistol_FromBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_1_Aim_Pistol_FromBinoc_End: vehicle_turnout_1_Aim_Pistol_FromBinoc_End {
            actions = "rhs_vehicle_turnout_1Actions";
            ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_Pistol", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_1_Idle_Unarmed: vehicle_turnout_1_Idle_Unarmed {
            file = "\rhsafrf\addons\rhs_c_bmp3\anims\bmd4_commander_out.rtm";
            showWeaponAim = 0;
            actions = "rhs_vehicle_turnout_1IdleUnarmedActions";
            InterpolateTo[] = {
                "rhs_vehicle_turnout_1_Aim_FromPistol_End",
                0.1,
                "rhs_vehicle_turnout_1_Aim_ToPistol_End",
                0.1,
                "rhs_vehicle_turnout_1_Aim_Unarmed_ToBinoc",
                0.1,
                "rhs_vehicle_turnout_1_Die_Pistol",
                0.1
            };
            variantsAI[] = {"rhs_vehicle_turnout_1_Idle_Unarmed_Idling", 1};
            variantsPlayer[] = {"rhs_vehicle_turnout_1_Idle_Unarmed_Idling", 1};
        };
        class rhs_vehicle_turnout_1_Idle_Unarmed_Idling: vehicle_turnout_1_Idle_Unarmed_Idling {
            file = "\rhsafrf\addons\rhs_c_bmp3\anims\bmd4_commander_out.rtm";
            showWeaponAim = 0;
            variantsPlayer[] = {};
            ConnectTo[] = {"rhs_vehicle_turnout_1_Idle_Unarmed", 0.1};
            InterpolateTo[] = {
                "rhs_vehicle_turnout_1_Aim_FromPistol_End",
                0.1,
                "rhs_vehicle_turnout_1_Aim_ToPistol_End",
                0.1,
                "rhs_vehicle_turnout_1_Aim_Unarmed_ToBinoc",
                0.1,
                "rhs_vehicle_turnout_1_Die_Pistol",
                0.1
            };
        };
        class rhs_vehicle_turnout_1_Aim_Unarmed_Binoc: vehicle_turnout_1_Aim_Unarmed_Binoc {
            actions = "rhs_vehicle_turnout_1BinocUnarmedActions";
            InterpolateTo[] = {
                "rhs_vehicle_turnout_1_Aim_Unarmed_FromBinoc",
                0.1,
                "rhs_vehicle_turnout_1_Die_Pistol",
                0.1
            };
        };
        class rhs_vehicle_turnout_1_Aim_Unarmed_ToBinoc: vehicle_turnout_1_Aim_Unarmed_ToBinoc {
            actions = "rhs_vehicle_turnout_1BinocUnarmedActions";
            ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_Unarmed_ToBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_1_Aim_Unarmed_ToBinoc_End: vehicle_turnout_1_Aim_Unarmed_ToBinoc_End {
            file = "\rhsafrf\addons\rhs_bmp3\anim\commander_binoc2.rtm";
            actions = "rhs_vehicle_turnout_1BinocUnarmedActions";
            ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_Unarmed_Binoc", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_1_Aim_Unarmed_FromBinoc: vehicle_turnout_1_Aim_Unarmed_FromBinoc {
            actions = "rhs_vehicle_turnout_1BinocUnarmedActions";
            ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_Unarmed_FromBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_1_Aim_Unarmed_FromBinoc_End: vehicle_turnout_1_Aim_Unarmed_FromBinoc_End {
            actions = "rhs_vehicle_turnout_1Actions";
            ConnectTo[] = {"rhs_vehicle_turnout_1_Idle_Unarmed", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_1_Die: vehicle_turnout_1_Die {
            actions = "rhs_vehicle_turnout_1DeadActions";
            ConnectTo[] = {"Unconscious", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_1_Die_Pistol: vehicle_turnout_1_Die_Pistol {
            actions = "rhs_vehicle_turnout_1DeadPistolActions";
            showHandGun = 1;
        };
        class rhs_vehicle_turnout_sprut_1_Aim_Pistol: vehicle_turnout_1_Aim_Pistol {
            actions = "rhs_vehicle_turnout_sprut_1PistolActions";
            variantsAI[] = {"rhs_vehicle_turnout_sprut_1_Aim_Pistol_Idling", 1};
            variantsPlayer[] = {"rhs_vehicle_turnout_sprut_1_Aim_Pistol_Idling", 1};
            ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_Pistol_ToBinoc", 0.1};
            InterpolateTo[] = {
                "rhs_vehicle_turnout_sprut_1_Aim_FromPistol",
                0.1,
                "rhs_vehicle_turnout_sprut_1_Idle_Pistol",
                0.2,
                "rhs_vehicle_turnout_sprut_1_Idle_Unarmed",
                0.2,
                "rhs_vehicle_turnout_sprut_1_Die_Pistol",
                0.5
            };
        };
        class rhs_vehicle_turnout_sprut_1_Aim_Pistol_Idling: vehicle_turnout_1_Aim_Pistol_Idling {
            ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_Pistol", 0.1};
            InterpolateTo[] = {
                "rhs_vehicle_turnout_sprut_1_Aim_FromPistol",
                0.1,
                "rhs_vehicle_turnout_sprut_1_Idle_Pistol",
                0.2,
                "rhs_vehicle_turnout_sprut_1_Idle_Unarmed",
                0.2,
                "rhs_vehicle_turnout_sprut_1_Die_Pistol",
                0.5
            };
        };
        class rhs_vehicle_turnout_sprut_1_Idle_Pistol: vehicle_turnout_1_Idle_Pistol {
            actions = "rhs_vehicle_turnout_sprut_1IdlePistolActions";
            InterpolateTo[] = {
                "rhs_vehicle_turnout_sprut_1_Aim_Pistol",
                0.1,
                "rhs_vehicle_turnout_sprut_1_Aim_FromPistol",
                0.1,
                "rhs_vehicle_turnout_sprut_1_Idle_Unarmed",
                0.1,
                "rhs_vehicle_turnout_sprut_1_Die_Pistol",
                0.1
            };
            variantsAI[] = {"rhs_vehicle_turnout_sprut_1_Idle_Pistol_Idling", 1};
            variantsPlayer[] = {"rhs_vehicle_turnout_sprut_1_Idle_Pistol_Idling", 1};
        };
        class rhs_vehicle_turnout_sprut_1_Idle_Pistol_Idling: vehicle_turnout_1_Idle_Pistol_Idling {
            ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Idle_Pistol", 0.1};
            InterpolateTo[] = {
                "rhs_vehicle_turnout_sprut_1_Aim_Pistol",
                0.1,
                "rhs_vehicle_turnout_sprut_1_Aim_FromPistol",
                0.1,
                "rhs_vehicle_turnout_sprut_1_Idle_Unarmed",
                0.1,
                "rhs_vehicle_turnout_sprut_1_Die_Pistol",
                0.1
            };
        };
        class rhs_vehicle_turnout_sprut_1_Aim_ToPistol: vehicle_turnout_1_Aim_ToPistol {
            actions = "rhs_vehicle_turnout_sprut_1PistolActions";
            ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_ToPistol_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_sprut_1_Aim_ToPistol_End: vehicle_turnout_1_Aim_ToPistol_End {
            actions = "rhs_vehicle_turnout_sprut_1PistolActions";
            ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_Pistol", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_sprut_1_Aim_FromPistol: vehicle_turnout_1_Aim_FromPistol {
            actions = "rhs_vehicle_turnout_sprut_1PistolActions";
            ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_FromPistol_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_sprut_1_Aim_FromPistol_End: vehicle_turnout_1_Aim_FromPistol_End {
            actions = "rhs_vehicle_turnout_sprut_1Actions";
            ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Idle_Unarmed", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_sprut_1_Aim_Binoc: vehicle_turnout_1_Aim_Binoc {
            actions = "rhs_vehicle_turnout_sprut_1BinocActions";
            InterpolateTo[] = {
                "rhs_vehicle_turnout_sprut_1_Aim_FromBinoc",
                0.1,
                "rhs_vehicle_turnout_sprut_1_Die",
                0.1
            };
        };
        class rhs_vehicle_turnout_sprut_1_Aim_Pistol_Binoc: vehicle_turnout_1_Aim_Pistol_Binoc {
            actions = "rhs_vehicle_turnout_sprut_1BinocPistolActions";
            InterpolateTo[] = {
                "rhs_vehicle_turnout_sprut_1_Aim_Pistol_FromBinoc",
                0.1,
                "rhs_vehicle_turnout_sprut_1_Die_Pistol",
                0.1
            };
        };
        class rhs_vehicle_turnout_sprut_1_Aim_ToBinoc: vehicle_turnout_1_Aim_ToBinoc {
            actions = "rhs_vehicle_turnout_sprut_1BinocActions";
            ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_ToBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_sprut_1_Aim_ToBinoc_End: vehicle_turnout_1_Aim_ToBinoc_End {
            actions = "rhs_vehicle_turnout_sprut_1BinocActions";
            ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_Binoc", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_sprut_1_Aim_FromBinoc: vehicle_turnout_1_Aim_FromBinoc {
            actions = "rhs_vehicle_turnout_sprut_1BinocActions";
            ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_FromBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_sprut_1_Aim_FromBinoc_End: vehicle_turnout_1_Aim_FromBinoc_End {
            actions = "rhs_vehicle_turnout_sprut_1Actions";
            ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Idle_Unarmed", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_sprut_1_Aim_Pistol_ToBinoc: vehicle_turnout_1_Aim_Pistol_ToBinoc {
            actions = "rhs_vehicle_turnout_sprut_1BinocActions";
            ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_Pistol_ToBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_sprut_1_Aim_Pistol_ToBinoc_End: vehicle_turnout_1_Aim_Pistol_ToBinoc_End {
            actions = "rhs_vehicle_turnout_sprut_1BinocActions";
            ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_Pistol_Binoc", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_sprut_1_Aim_Pistol_FromBinoc: vehicle_turnout_1_Aim_Pistol_FromBinoc {
            actions = "rhs_vehicle_turnout_sprut_1BinocActions";
            ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_Pistol_FromBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_sprut_1_Aim_Pistol_FromBinoc_End: vehicle_turnout_1_Aim_Pistol_FromBinoc_End {
            actions = "rhs_vehicle_turnout_sprut_1Actions";
            ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_Pistol", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_sprut_1_Idle_Unarmed: vehicle_turnout_1_Idle_Unarmed {
            file = "\rhsafrf\addons\rhs_c_bmp3\anims\2s25_commander_out.rtm";
            showWeaponAim = 0;
            actions = "rhs_vehicle_turnout_sprut_1IdleUnarmedActions";
            InterpolateTo[] = {
                "rhs_vehicle_turnout_sprut_1_Aim_FromPistol_End",
                0.1,
                "rhs_vehicle_turnout_sprut_1_Aim_ToPistol_End",
                0.1,
                "rhs_vehicle_turnout_sprut_1_Aim_Unarmed_ToBinoc",
                0.1,
                "rhs_vehicle_turnout_sprut_1_Die_Pistol",
                0.1
            };
            variantsAI[] = {"rhs_vehicle_turnout_sprut_1_Idle_Unarmed_Idling", 1};
            variantsPlayer[] = {"rhs_vehicle_turnout_sprut_1_Idle_Unarmed_Idling", 1};
        };
        class rhs_vehicle_turnout_sprut_1_Idle_Unarmed_Idling: vehicle_turnout_1_Idle_Unarmed_Idling {
            file = "\rhsafrf\addons\rhs_c_bmp3\anims\2s25_commander_out.rtm";
            showWeaponAim = 0;
            variantsPlayer[] = {};
            ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Idle_Unarmed", 0.1};
            InterpolateTo[] = {
                "rhs_vehicle_turnout_sprut_1_Aim_FromPistol_End",
                0.1,
                "rhs_vehicle_turnout_sprut_1_Aim_ToPistol_End",
                0.1,
                "rhs_vehicle_turnout_sprut_1_Aim_Unarmed_ToBinoc",
                0.1,
                "rhs_vehicle_turnout_sprut_1_Die_Pistol",
                0.1
            };
        };
        class rhs_vehicle_turnout_sprut_1_Aim_Unarmed_Binoc: vehicle_turnout_1_Aim_Unarmed_Binoc {
            actions = "rhs_vehicle_turnout_sprut_1BinocUnarmedActions";
            InterpolateTo[] = {
                "rhs_vehicle_turnout_sprut_1_Aim_Unarmed_FromBinoc",
                0.1,
                "rhs_vehicle_turnout_sprut_1_Die_Pistol",
                0.1
            };
        };
        class rhs_vehicle_turnout_sprut_1_Aim_Unarmed_ToBinoc: vehicle_turnout_1_Aim_Unarmed_ToBinoc {
            actions = "rhs_vehicle_turnout_sprut_1BinocUnarmedActions";
            ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_Unarmed_ToBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_sprut_1_Aim_Unarmed_ToBinoc_End: vehicle_turnout_1_Aim_Unarmed_ToBinoc_End {
            file = "\rhsafrf\addons\rhs_bmp3\anim\commander_binoc2.rtm";
            actions = "rhs_vehicle_turnout_sprut_1BinocUnarmedActions";
            ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_Unarmed_Binoc", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_sprut_1_Aim_Unarmed_FromBinoc: vehicle_turnout_1_Aim_Unarmed_FromBinoc {
            actions = "rhs_vehicle_turnout_sprut_1BinocUnarmedActions";
            ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_Unarmed_FromBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_sprut_1_Aim_Unarmed_FromBinoc_End: vehicle_turnout_1_Aim_Unarmed_FromBinoc_End {
            actions = "rhs_vehicle_turnout_sprut_1Actions";
            ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Idle_Unarmed", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_sprut_1_Die: vehicle_turnout_1_Die {
            actions = "rhs_vehicle_turnout_sprut_1DeadActions";
            ConnectTo[] = {"Unconscious", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_sprut_1_Die_Pistol: vehicle_turnout_1_Die_Pistol {
            actions = "rhs_vehicle_turnout_sprut_1DeadPistolActions";
            showHandGun = 1;
        };
        class rhs_vehicle_turnout_bmp1_1_Aim_Pistol: vehicle_turnout_1_Aim_Pistol {
            actions = "rhs_vehicle_turnout_bmp1_1PistolActions";
            variantsAI[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Pistol_Idling", 1};
            variantsPlayer[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Pistol_Idling", 1};
            ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Pistol_ToBinoc", 0.1};
            InterpolateTo[] = {
                "rhs_vehicle_turnout_bmp1_1_Aim_FromPistol",
                0.1,
                "rhs_vehicle_turnout_bmp1_1_Idle_Pistol",
                0.2,
                "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed",
                0.2,
                "rhs_vehicle_turnout_bmp1_1_Die_Pistol",
                0.5
            };
        };
        class rhs_vehicle_turnout_bmp1_1_Aim_Pistol_Idling: vehicle_turnout_1_Aim_Pistol_Idling {
            ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Pistol", 0.1};
            InterpolateTo[] = {
                "rhs_vehicle_turnout_bmp1_1_Aim_FromPistol",
                0.1,
                "rhs_vehicle_turnout_bmp1_1_Idle_Pistol",
                0.2,
                "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed",
                0.2,
                "rhs_vehicle_turnout_bmp1_1_Die_Pistol",
                0.5
            };
        };
        class rhs_vehicle_turnout_bmp1_1_Idle_Pistol: vehicle_turnout_1_Idle_Pistol {
            actions = "rhs_vehicle_turnout_bmp1_1IdlePistolActions";
            InterpolateTo[] = {
                "rhs_vehicle_turnout_bmp1_1_Aim_Pistol",
                0.1,
                "rhs_vehicle_turnout_bmp1_1_Aim_FromPistol",
                0.1,
                "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed",
                0.1,
                "rhs_vehicle_turnout_bmp1_1_Die_Pistol",
                0.1
            };
            variantsAI[] = {"rhs_vehicle_turnout_bmp1_1_Idle_Pistol_Idling", 1};
            variantsPlayer[] = {"rhs_vehicle_turnout_bmp1_1_Idle_Pistol_Idling", 1};
        };
        class rhs_vehicle_turnout_bmp1_1_Idle_Pistol_Idling: vehicle_turnout_1_Idle_Pistol_Idling {
            ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Idle_Pistol", 0.1};
            InterpolateTo[] = {
                "rhs_vehicle_turnout_bmp1_1_Aim_Pistol",
                0.1,
                "rhs_vehicle_turnout_bmp1_1_Aim_FromPistol",
                0.1,
                "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed",
                0.1,
                "rhs_vehicle_turnout_bmp1_1_Die_Pistol",
                0.1
            };
        };
        class rhs_vehicle_turnout_bmp1_1_Aim_ToPistol: vehicle_turnout_1_Aim_ToPistol {
            actions = "rhs_vehicle_turnout_bmp1_1PistolActions";
            ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_ToPistol_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_bmp1_1_Aim_ToPistol_End: vehicle_turnout_1_Aim_ToPistol_End {
            actions = "rhs_vehicle_turnout_bmp1_1PistolActions";
            ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Pistol", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_bmp1_1_Aim_FromPistol: vehicle_turnout_1_Aim_FromPistol {
            actions = "rhs_vehicle_turnout_bmp1_1PistolActions";
            ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_FromPistol_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_bmp1_1_Aim_FromPistol_End: vehicle_turnout_1_Aim_FromPistol_End {
            actions = "rhs_vehicle_turnout_bmp1_1Actions";
            ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Idle_Unarmed", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_bmp1_1_Aim_Binoc: vehicle_turnout_1_Aim_Binoc {
            actions = "rhs_vehicle_turnout_bmp1_1BinocActions";
            InterpolateTo[] = {
                "rhs_vehicle_turnout_bmp1_1_Aim_FromBinoc",
                0.1,
                "rhs_vehicle_turnout_bmp1_1_Die",
                0.1
            };
        };
        class rhs_vehicle_turnout_bmp1_1_Aim_Pistol_Binoc: vehicle_turnout_1_Aim_Pistol_Binoc {
            actions = "rhs_vehicle_turnout_bmp1_1BinocPistolActions";
            InterpolateTo[] = {
                "rhs_vehicle_turnout_bmp1_1_Aim_Pistol_FromBinoc",
                0.1,
                "rhs_vehicle_turnout_bmp1_1_Die_Pistol",
                0.1
            };
        };
        class rhs_vehicle_turnout_bmp1_1_Aim_ToBinoc: vehicle_turnout_1_Aim_ToBinoc {
            actions = "rhs_vehicle_turnout_bmp1_1BinocActions";
            ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_ToBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_bmp1_1_Aim_ToBinoc_End: vehicle_turnout_1_Aim_ToBinoc_End {
            actions = "rhs_vehicle_turnout_bmp1_1BinocActions";
            ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Binoc", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_bmp1_1_Aim_FromBinoc: vehicle_turnout_1_Aim_FromBinoc {
            actions = "rhs_vehicle_turnout_bmp1_1BinocActions";
            ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_FromBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_bmp1_1_Aim_FromBinoc_End: vehicle_turnout_1_Aim_FromBinoc_End {
            actions = "rhs_vehicle_turnout_bmp1_1Actions";
            ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Idle_Unarmed", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_bmp1_1_Aim_Pistol_ToBinoc: vehicle_turnout_1_Aim_Pistol_ToBinoc {
            actions = "rhs_vehicle_turnout_bmp1_1BinocActions";
            ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Pistol_ToBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_bmp1_1_Aim_Pistol_ToBinoc_End: vehicle_turnout_1_Aim_Pistol_ToBinoc_End {
            actions = "rhs_vehicle_turnout_bmp1_1BinocActions";
            ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Pistol_Binoc", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_bmp1_1_Aim_Pistol_FromBinoc: vehicle_turnout_1_Aim_Pistol_FromBinoc {
            actions = "rhs_vehicle_turnout_bmp1_1BinocActions";
            ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Pistol_FromBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_bmp1_1_Aim_Pistol_FromBinoc_End: vehicle_turnout_1_Aim_Pistol_FromBinoc_End {
            actions = "rhs_vehicle_turnout_bmp1_1Actions";
            ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Pistol", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_bmp1_1_Idle_Unarmed: vehicle_turnout_1_Idle_Unarmed {
            file = "\rhsafrf\addons\rhs_c_bmp3\anims\bmp1_commander_out.rtm";
            showWeaponAim = 0;
            actions = "rhs_vehicle_turnout_bmp1_1IdleUnarmedActions";
            InterpolateTo[] = {
                "rhs_vehicle_turnout_bmp1_1_Aim_FromPistol_End",
                0.1,
                "rhs_vehicle_turnout_bmp1_1_Aim_ToPistol_End",
                0.1,
                "rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_ToBinoc",
                0.1,
                "rhs_vehicle_turnout_bmp1_1_Die_Pistol",
                0.1
            };
            variantsAI[] = {"rhs_vehicle_turnout_bmp1_1_Idle_Unarmed_Idling", 1};
            variantsPlayer[] = {"rhs_vehicle_turnout_bmp1_1_Idle_Unarmed_Idling", 1};
        };
        class rhs_vehicle_turnout_bmp1_1_Idle_Unarmed_Idling: vehicle_turnout_1_Idle_Unarmed_Idling {
            file = "\rhsafrf\addons\rhs_c_bmp3\anims\bmp1_commander_out.rtm";
            showWeaponAim = 0;
            variantsPlayer[] = {};
            ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Idle_Unarmed", 0.1};
            InterpolateTo[] = {
                "rhs_vehicle_turnout_bmp1_1_Aim_FromPistol_End",
                0.1,
                "rhs_vehicle_turnout_bmp1_1_Aim_ToPistol_End",
                0.1,
                "rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_ToBinoc",
                0.1,
                "rhs_vehicle_turnout_bmp1_1_Die_Pistol",
                0.1
            };
        };
        class rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_Binoc: vehicle_turnout_1_Aim_Unarmed_Binoc {
            actions = "rhs_vehicle_turnout_bmp1_1BinocUnarmedActions";
            InterpolateTo[] = {
                "rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_FromBinoc",
                0.1,
                "rhs_vehicle_turnout_bmp1_1_Die_Pistol",
                0.1
            };
        };
        class rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_ToBinoc: vehicle_turnout_1_Aim_Unarmed_ToBinoc {
            actions = "rhs_vehicle_turnout_bmp1_1BinocUnarmedActions";
            ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_ToBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_ToBinoc_End: vehicle_turnout_1_Aim_Unarmed_ToBinoc_End {
            file = "\rhsafrf\addons\rhs_bmp3\anim\commander_binoc2.rtm";
            actions = "rhs_vehicle_turnout_bmp1_1BinocUnarmedActions";
            ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_Binoc", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_FromBinoc: vehicle_turnout_1_Aim_Unarmed_FromBinoc {
            actions = "rhs_vehicle_turnout_bmp1_1BinocUnarmedActions";
            ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_FromBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_FromBinoc_End: vehicle_turnout_1_Aim_Unarmed_FromBinoc_End {
            actions = "rhs_vehicle_turnout_bmp1_1Actions";
            ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Idle_Unarmed", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_bmp1_1_Die: vehicle_turnout_1_Die {
            actions = "rhs_vehicle_turnout_bmp1_1DeadActions";
            ConnectTo[] = {"Unconscious", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_vehicle_turnout_bmp1_1_Die_Pistol: vehicle_turnout_1_Die_Pistol {
            actions = "rhs_vehicle_turnout_bmp1_1DeadPistolActions";
            showHandGun = 1;
        };
        class cargo_base;
        class cargo_base_idle;
        class cargo_base_idle_pistol;
        class cargo_basepistol;
        class cargo_basebinoc;
        class AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon;
        class AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon_end;
        class AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon;
        class AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon_end;
        class AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon;
        class AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon_end;
        class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon;
        class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon_end;
        class AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon;
        class AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end;
        class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon;
        class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end;
        class rhs_passenger_inside_6_Aim: cargo_base {
            actions = "rhs_passenger_inside_6Actions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aim.rtm";
            speed = 100000;
            ConnectTo[] = {"rhs_passenger_inside_6_Aim_ToBinoc", 0.1};
            InterpolateTo[] = {
                "rhs_passenger_inside_6_Idle",
                0.1,
                "rhs_passenger_inside_6_toObstructed",
                0.1,
                "rhs_passenger_inside_6_Aim_ToPistol",
                0.1,
                "rhs_passenger_inside_6_Idle_Unarmed",
                0.2,
                "rhs_passenger_inside_6_Die",
                0.1
            };
            variantsAI[] = {"rhs_passenger_inside_6_Aim_Idling", 1};
            variantsPlayer[] = {"rhs_passenger_inside_6_Aim_Idling", 1};
        };
        class rhs_passenger_inside_6_Obstructed: cargo_base_idle {
            actions = "rhs_passenger_inside_6ObstructedActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aim_obstructed.rtm";
            speed = 10000000000;
            weaponLowered = 0;
            leftHandIKCurve[] = {1};
            weaponObstructed = 1;
            interpolationRestart = 1;
            InterpolateTo[] = {
                "rhs_passenger_inside_6_fromObstructed",
                0.1,
                "rhs_passenger_inside_6_Die",
                0.1
            };
        };
        class rhs_passenger_inside_6_fromObstructed: cargo_base_idle {
            actions = "rhs_passenger_inside_6ObstructedActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aim_fromobstructed.rtm";
            speed = -0.15;
            looped = "false";
            weaponLowered = 0;
            leftHandIKCurve[] = {1};
            interpolationRestart = 1;
            reverse = "rhs_passenger_inside_6_toObstructed";
            minplaytime = 0.95;
            ConnectTo[] = {"rhs_passenger_inside_6_Aim", 0.1};
            InterpolateTo[] = {"rhs_passenger_inside_6_Aim", 0.1};
        };
        class rhs_passenger_inside_6_toObstructed: cargo_base_idle {
            actions = "rhs_passenger_inside_6ObstructedActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aim_toobstructed.rtm";
            speed = -0.15;
            weaponLowered = 0;
            weaponObstructed = 1;
            looped = "false";
            leftHandIKCurve[] = {1};
            interpolationRestart = 1;
            reverse = "rhs_passenger_inside_6_fromObstructed";
            minplaytime = 0.95;
            ConnectTo[] = {"rhs_passenger_inside_6_Obstructed", 0.1};
            InterpolateTo[] = {"rhs_passenger_inside_6_Obstructed", 0.1};
        };
        class rhs_passenger_inside_6_Aim_Idling: rhs_passenger_inside_6_Aim {
            variantsPlayer[] = {};
            headBobStrength = 0;
            soundEnabled = 1;
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aim1.rtm";
            speed = -8;
            ConnectTo[] = {"rhs_passenger_inside_6_Aim", 0.1};
        };
        class rhs_passenger_inside_6_Idle: cargo_base_idle {
            actions = "rhs_passenger_inside_6IdleActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6idle.rtm";
            speed = 100000;
            aiming = "aimingDefault";
            aimingBody = "aimingNo";
            leftHandIKCurve[] = {1};
            InterpolateTo[] = {
                "rhs_passenger_inside_6_Aim",
                0.1,
                "rhs_passenger_inside_6_Aim_ToPistol",
                0.1,
                "rhs_passenger_inside_6_Idle_Unarmed",
                0.2,
                "rhs_passenger_inside_6_Die",
                0.1
            };
            variantsAI[] = {"rhs_passenger_inside_6_Idle_Idling", 1};
            variantsPlayer[] = {"rhs_passenger_inside_6_Idle_Idling", 1};
        };
        class rhs_passenger_inside_6_Idle_Idling: rhs_passenger_inside_6_Idle {
            variantsPlayer[] = {};
            headBobStrength = 0;
            soundEnabled = 1;
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6idle1.rtm";
            speed = -10;
            ConnectTo[] = {"rhs_passenger_inside_6_Idle", 0.1};
        };
        class rhs_passenger_inside_6_Aim_Pistol: cargo_basepistol {
            actions = "rhs_passenger_inside_6PistolActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimpistol.rtm";
            aiming = "aimingRifleSlingDefault";
            aimingBody = "aimingUpRifleSlingDefault";
            speed = 100000;
            variantsAI[] = {"rhs_passenger_inside_6_Aim_Pistol_Idling", 1};
            variantsPlayer[] = {"rhs_passenger_inside_6_Aim_Pistol_Idling", 1};
            ConnectTo[] = {"rhs_passenger_inside_6_Aim_Pistol_ToBinoc", 0.1};
            InterpolateTo[] = {
                "rhs_passenger_inside_6_Aim_FromPistol",
                0.1,
                "rhs_passenger_inside_6_Idle_Pistol",
                0.2,
                "rhs_passenger_inside_6_toObstructed_Pistol",
                0.2,
                "rhs_passenger_inside_6_Idle_Unarmed",
                0.2,
                "rhs_passenger_inside_6_Die_Pistol",
                0.5
            };
        };
        class rhs_passenger_inside_6_Aim_Pistol_Idling: rhs_passenger_inside_6_Aim_Pistol {
            variantsPlayer[] = {};
            headBobStrength = 0;
            soundEnabled = 1;
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimpistol1.rtm";
            speed = -8;
            ConnectTo[] = {"rhs_passenger_inside_6_Aim_Pistol", 0.1};
        };
        class rhs_passenger_inside_6_Idle_Pistol: cargo_base_idle_pistol {
            actions = "rhs_passenger_inside_6IdlePistolActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6idlepistol.rtm";
            speed = 100000;
            aiming = "aimingRifleSlingDefault";
            aimingBody = "aimingUpRifleSlingDefault";
            InterpolateTo[] = {
                "rhs_passenger_inside_6_Aim_Pistol",
                0.1,
                "rhs_passenger_inside_6_Aim_FromPistol",
                0.1,
                "rhs_passenger_inside_6_Idle_Unarmed",
                0.1,
                "rhs_passenger_inside_6_Die_Pistol",
                0.1
            };
            variantsAI[] = {"rhs_passenger_inside_6_Idle_Pistol_Idling", 1};
            variantsPlayer[] = {"rhs_passenger_inside_6_Idle_Pistol_Idling", 1};
        };
        class rhs_passenger_inside_6_Idle_Pistol_Idling: rhs_passenger_inside_6_Idle {
            variantsPlayer[] = {};
            headBobStrength = 0;
            soundEnabled = 1;
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6idlepistol1.rtm";
            speed = -10;
            ConnectTo[] = {"rhs_passenger_inside_6_Idle_Pistol", 0.1};
        };
        class rhs_passenger_inside_6_Obstructed_Pistol: cargo_base_idle_pistol {
            actions = "rhs_passenger_inside_6ObstructedPistolActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimpistol_obstructed.rtm";
            speed = 10000000000;
            weaponLowered = 0;
            weaponObstructed = 1;
            interpolationRestart = 1;
            InterpolateTo[] = {
                "rhs_passenger_inside_6_fromObstructed_Pistol",
                0.1,
                "rhs_passenger_inside_6_Die",
                0.1
            };
        };
        class rhs_passenger_inside_6_fromObstructed_Pistol: cargo_base_idle_pistol {
            actions = "rhs_passenger_inside_6ObstructedPistolActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimpistol_fromobstructed.rtm";
            speed = -0.15;
            weaponLowered = 0;
            interpolationRestart = 1;
            looped = "false";
            reverse = "rhs_passenger_inside_6_toObstructed_Pistol";
            minplaytime = 0.95;
            ConnectTo[] = {"rhs_passenger_inside_6_Aim_Pistol", 0.1};
            InterpolateTo[] = {"rhs_passenger_inside_6_Aim_Pistol", 0.1};
        };
        class rhs_passenger_inside_6_toObstructed_Pistol: cargo_base_idle_pistol {
            actions = "rhs_passenger_inside_6ObstructedPistolActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimpistol_toobstructed.rtm";
            speed = -0.15;
            weaponLowered = 0;
            interpolationRestart = 1;
            looped = "false";
            weaponObstructed = 1;
            reverse = "rhs_passenger_inside_6_fromObstructed_Pistol";
            minplaytime = 0.95;
            ConnectTo[] = {"rhs_passenger_inside_6_Obstructed_Pistol", 0.1};
            InterpolateTo[] = {"rhs_passenger_inside_6_Obstructed_Pistol", 0.1};
        };
        class rhs_passenger_inside_6_Aim_ToPistol: AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon {
            actions = "rhs_passenger_inside_6PistolActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimtopistol.rtm";
            speed = 2;
            ConnectTo[] = {"rhs_passenger_inside_6_Aim_ToPistol_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_passenger_inside_6_Aim_ToPistol_End: AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon_end {
            actions = "rhs_passenger_inside_6PistolActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimtopistol_end.rtm";
            speed = 1.875;
            ConnectTo[] = {"rhs_passenger_inside_6_Aim_Pistol", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_passenger_inside_6_Aim_FromPistol: AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon {
            actions = "rhs_passenger_inside_6PistolActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimFrompistol.rtm";
            speed = 2.30769;
            ConnectTo[] = {"rhs_passenger_inside_6_Aim_FromPistol_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_passenger_inside_6_Aim_FromPistol_End: AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon_end {
            actions = "rhs_passenger_inside_6Actions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimfrompistol_end.rtm";
            aiming = "aimingDefault";
            aimingBody = "aimingUpDefault";
            speed = 2;
            leftHandIKCurve[] = {0, 0, 0.5, 1};
            ConnectTo[] = {"rhs_passenger_inside_6_Aim", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_passenger_inside_6_Aim_Binoc: cargo_basebinoc {
            actions = "rhs_passenger_inside_6BinocActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aim_Binoc.rtm";
            aiming = "aimingDefault";
            aimingBody = "aimingUpDefault";
            speed = -8;
            rightHandIKCurve[] = {0};
            InterpolateTo[] = {
                "rhs_passenger_inside_6_Aim_FromBinoc",
                0.1,
                "rhs_passenger_inside_6_Die",
                0.1
            };
        };
        class rhs_passenger_inside_6_Aim_Pistol_Binoc: cargo_basebinoc {
            actions = "rhs_passenger_inside_6BinocPistolActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimpistol_Binoc.rtm";
            aiming = "aimingRifleSlingDefault";
            aimingBody = "aimingUpRifleSlingDefault";
            showHandGun = 1;
            speed = -8;
            InterpolateTo[] = {
                "rhs_passenger_inside_6_Aim_Pistol_FromBinoc",
                0.1,
                "rhs_passenger_inside_6_Die_Pistol",
                0.1
            };
        };
        class rhs_passenger_inside_6_Aim_ToBinoc: AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon {
            actions = "rhs_passenger_inside_6BinocActions";
            aiming = "aimingDefault";
            aimingBody = "aimingUpDefault";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aim_ToBinoc.rtm";
            speed = 1.57895;
            leftHandIKCurve[] = {0, 1, 0.15, 0};
            ConnectTo[] = {"rhs_passenger_inside_6_Aim_ToBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_passenger_inside_6_Aim_ToBinoc_End: AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon_end {
            actions = "rhs_passenger_inside_6BinocActions";
            aiming = "aimingDefault";
            aimingBody = "aimingUpDefault";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aim_ToBinoc_end.rtm";
            speed = 1.76471;
            ConnectTo[] = {"rhs_passenger_inside_6_Aim_Binoc", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_passenger_inside_6_Aim_FromBinoc: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon {
            actions = "rhs_passenger_inside_6BinocActions";
            aiming = "aimingDefault";
            aimingBody = "aimingUpDefault";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aim_frombinoc.rtm";
            speed = 1.57895;
            ConnectTo[] = {"rhs_passenger_inside_6_Aim_FromBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_passenger_inside_6_Aim_FromBinoc_End: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon_end {
            actions = "rhs_passenger_inside_6Actions";
            aiming = "aimingDefault";
            aimingBody = "aimingUpDefault";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aim_frombinoc_end.rtm";
            speed = 1.76471;
            leftHandIKCurve[] = {0, 0, 0.5, 1};
            ConnectTo[] = {"rhs_passenger_inside_6_Aim", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_passenger_inside_6_Aim_Pistol_ToBinoc: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon {
            actions = "rhs_passenger_inside_6BinocActions";
            showHandGun = 1;
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimpistol_ToBinoc.rtm";
            speed = 1.76471;
            ConnectTo[] = {"rhs_passenger_inside_6_Aim_Pistol_ToBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_passenger_inside_6_Aim_Pistol_ToBinoc_End: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end {
            actions = "rhs_passenger_inside_6BinocActions";
            showHandGun = 1;
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimpistol_ToBinoc_end.rtm";
            speed = 1.76471;
            ConnectTo[] = {"rhs_passenger_inside_6_Aim_Pistol_Binoc", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_passenger_inside_6_Aim_Pistol_FromBinoc: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon {
            actions = "rhs_passenger_inside_6BinocActions";
            showHandGun = 1;
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimpistol_frombinoc.rtm";
            speed = 1.57895;
            ConnectTo[] = {"rhs_passenger_inside_6_Aim_Pistol_FromBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_passenger_inside_6_Aim_Pistol_FromBinoc_End: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end {
            actions = "rhs_passenger_inside_6Actions";
            showHandGun = 1;
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimpistol_frombinoc_end.rtm";
            speed = 1.76471;
            ConnectTo[] = {"rhs_passenger_inside_6_Aim_Pistol", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_passenger_inside_6_Idle_Unarmed: cargo_base_idle {
            actions = "rhs_passenger_inside_6IdleUnarmedActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6idleunarmed.rtm";
            speed = 100000;
            aiming = "aimingNo";
            aimingBody = "aimingNo";
            weaponIK = 0;
            InterpolateTo[] = {
                "rhs_passenger_inside_6_Aim_FromPistol_End",
                0.1,
                "rhs_passenger_inside_6_Aim_ToPistol_End",
                0.1,
                "rhs_passenger_inside_6_Aim_Unarmed_ToBinoc",
                0.1,
                "rhs_passenger_inside_6_Die_Pistol",
                0.1
            };
            variantsAI[] = {"rhs_passenger_inside_6_Idle_Unarmed_Idling", 1};
            variantsPlayer[] = {"rhs_passenger_inside_6_Idle_Unarmed_Idling", 1};
        };
        class rhs_passenger_inside_6_Idle_Unarmed_Idling: rhs_passenger_inside_6_Idle {
            variantsPlayer[] = {};
            headBobStrength = 0;
            soundEnabled = 1;
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6idleunarmed1.rtm";
            speed = -10;
            ConnectTo[] = {"rhs_passenger_inside_6_Idle_Unarmed", 0.1};
        };
        class rhs_passenger_inside_6_Aim_Unarmed_Binoc: cargo_basebinoc {
            actions = "rhs_passenger_inside_6BinocUnarmedActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimUnarmed_Binoc.rtm";
            aiming = "aimingRifleSlingDefault";
            aimingBody = "aimingUpRifleSlingDefault";
            showHandGun = 0;
            speed = -8;
            InterpolateTo[] = {
                "rhs_passenger_inside_6_Aim_Unarmed_FromBinoc",
                0.1,
                "rhs_passenger_inside_6_Die_Pistol",
                0.1
            };
        };
        class rhs_passenger_inside_6_Aim_Unarmed_ToBinoc: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon {
            actions = "rhs_passenger_inside_6BinocUnarmedActions";
            showHandGun = 0;
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimUnarmed_ToBinoc.rtm";
            speed = 1.76471;
            ConnectTo[] = {"rhs_passenger_inside_6_Aim_Unarmed_ToBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_passenger_inside_6_Aim_Unarmed_ToBinoc_End: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end {
            actions = "rhs_passenger_inside_6BinocUnarmedActions";
            showHandGun = 0;
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimUnarmed_ToBinoc_end.rtm";
            speed = 1.76471;
            ConnectTo[] = {"rhs_passenger_inside_6_Aim_Unarmed_Binoc", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_passenger_inside_6_Aim_Unarmed_FromBinoc: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon {
            actions = "rhs_passenger_inside_6BinocUnarmedActions";
            showHandGun = 0;
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimUnarmed_frombinoc.rtm";
            speed = 1.57895;
            ConnectTo[] = {"rhs_passenger_inside_6_Aim_Unarmed_FromBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_passenger_inside_6_Aim_Unarmed_FromBinoc_End: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end {
            actions = "rhs_passenger_inside_6IdleUnarmedActions";
            showHandGun = 0;
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimUnarmed_frombinoc_end.rtm";
            speed = 1.76471;
            ConnectTo[] = {"rhs_passenger_inside_6_Idle_Unarmed", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_passenger_inside_6_Die: DefaultDie {
            actions = "rhs_passenger_inside_6DeadActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6die.rtm";
            speed = 1;
            looped = "false";
            terminal = 1;
            ragdoll = 1;
            ConnectTo[] = {"Unconscious", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_passenger_inside_6_Die_Pistol: rhs_passenger_inside_6_Die {
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_6diepistol.rtm";
            actions = "rhs_passenger_inside_6DeadPistolActions";
            showHandGun = 1;
        };
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class functions {
            class bmp3_init {
                file = "\rhsafrf\addons\rhs_c_bmp3\scripts\rhs_bmp3_init.sqf";
                description = "BMP3 decal init";
            };
            class bmp3_autoloader {
                file = "\rhsafrf\addons\rhs_c_bmp3\scripts\rhs_autoloader_bmp3.sqf";
                description = "Autoloader gun anim & stub ejection for BMP3";
            };
        };
    };
};
class CfgVehicles {
    class LandVehicle;
    class Tank: LandVehicle {
        class NewTurret;
        class Sounds;
        class HitPoints;
    };
    class Tank_F: Tank {
        class Turrets {
            class MainTurret: NewTurret {
                class Turrets {
                    class CommanderOptics;
                };
            };
        };
        class AnimationSources;
        class ViewPilot;
        class ViewOptics;
        class ViewCargo;
        class HeadLimits;
        class HitPoints: HitPoints {
            class HitHull;
            class HitEngine;
            class HitLTrack;
            class HitRTrack;
        };
        class Sounds: Sounds {
            class Engine;
            class Movement;
        };
        class EventHandlers;
        class Components;
    };
    class rhs_bmp3tank_base: Tank_F {
        dlc = "RHS_AFRF";
        rhs_decalParameters[] = {"['Number',cRHSBMP3NumberPlaces,'DefaultRed']", "['Label',cRHSBMP3PlnSymPlaces, 'Platoon',12]"};
        category = "Armored";
        destrType = "DestructDefault";
        author = "$STR_RHS_AUTHOR_FULL";
        weapons[] = {"rhs_weap_smokegen"};
        magazines[] = {"rhs_mag_smokegen"};
        vehicleClass = "rhs_vehclass_ifv";
        editorSubcategory = "rhs_EdSubcat_ifv";
        displayName = "$STR_BMP3_Name";
        faction = "rhs_faction_msv";
        crew = "rhs_msv_crew";
        accuracy = 0.3;
        side = 0;
        class MFD {
            class MFD_Left {
                topLeft = "MFD_1_TL";
                topRight = "MFD_1_TR";
                bottomLeft = "MFD_1_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {1, 1, 1};
                alpha = 0.5;
                enableParallax = 0;
                font = "rhs_digital_font_var";
                class Bones {};
                class Draw {
                    color[] = {0.07, 0.14, 0.07};
                    alpha = 0.12;
                    condition = "on";
                    class FuelNumber {
                        type = "text";
                        source = "fuel";
                        sourceScale = 677;
                        scale = 1;
                        align = "right";
                        pos[] = {{0.655, 0.205}, 1};
                        right[] = {{0.755, 0.205}, 1};
                        down[] = {{0.655, 0.515}, 1};
                    };
                };
            };
            class MFD_Right {
                topLeft = "MFD_2_TL";
                topRight = "MFD_2_TR";
                bottomLeft = "MFD_2_BL";
                borderLeft = 0;
                borderRight = 0;
                borderTop = 0;
                borderBottom = 0;
                color[] = {1, 1, 1};
                alpha = 0.5;
                enableParallax = 0;
                font = "rhs_digital_font_var";
                class Bones {};
                class Draw {
                    color[] = {0.07, 0.14, 0.07};
                    alpha = 0.12;
                    condition = "on";
                    class rpmNumber {
                        type = "text";
                        source = "rpm";
                        sourceScale = 1;
                        scale = 1;
                        refreshRate = 0.05;
                        align = "left";
                        pos[] = {{0.305, 0.205}, 1};
                        right[] = {{0.405, 0.205}, 1};
                        down[] = {{0.305, 0.515}, 1};
                    };
                    class SpeedNumber {
                        type = "text";
                        source = "speed";
                        sourceScale = 3.6;
                        scale = 1;
                        refreshRate = 0.05;
                        align = "left";
                        pos[] = {{0.795, 0.205}, 1};
                        right[] = {{0.895, 0.205}, 1};
                        down[] = {{0.795, 0.515}, 1};
                    };
                };
            };
        };
        model = "\rhsafrf\addons\rhs_bmp3\bmp3_early";
        picture = "\rhsafrf\addons\rhs_bmp3\pictures\rhs_bmp3_pic_ca.paa";
        Icon = "\rhsafrf\addons\rhs_bmp3\data\bis\icon_bmp3_ca.paa";
        mapsize = 7.1;
        typicalCargo[] = {
            "rhs_msv_crew_commander",
            "rhs_msv_crew",
            "rhs_msv_crew",
            ""
        };
        getInAction = "GetInLow";
        getOutAction = "GetOutLow";
        cargoGetInAction[] = {"GetInLow"};
        cargoGetOutAction[] = {"GetOutLow"};
        transportsoldier = 7;
        unloadInCombat = 1;
        cargoProxyIndexes[] = {1, 2, 3, 4, 5, 6, 7};
        getInProxyOrder[] = {8, 9, 1, 2, 3, 4, 5, 6, 7};
        weaponsGroup1 = "1 + 16";
        weaponsGroup2 = 128;
        weaponsGroup3 = 2;
        weaponsGroup4 = 4;
        tf_range_api = 35000;
        cargoAction[] = {
            "RHS_BMP3_Cargo",
            "RHS_BMP3_Cargo",
            "RHS_BMP3_Cargo",
            "RHS_BMP3_Cargo",
            "RHS_BMP3_Cargo",
            "RHS_BMP3_Cargo",
            "RHS_BMP3_Cargo",
            "YouShallNotSitHere"
        };
        waterPPInVehicle = 0;
        driveOnComponent[] = {"Track_L", "Track_R", "Slide"};
        driverOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
        driverDoor = "hatchD";
        driverAction = "RHS_BMP3_driverout";
        driverInAction = "RHS_BMP3_driver";
        driverLeftHandAnimName = "steering";
        driverRightHandAnimName = "steering";
        driverForceOptics = 0;
        viewDriverInExternal = 1;
        LODDriverTurnedOut = 0;
        LODDriverOpticsIn = 0;
        LODDriverOpticsOut = 0;
        headGforceLeaningFactor[] = {0.015, 0.011, 0.015};
        simulation = "tankX";
        maxSpeed = 70;
        normalSpeedForwardCoef = 0.73;
        slowSpeedForwardCoef = 0.35;
        fuelCapacity = 30;
        RHS_fuelCapacity = 672;
        tankTurnForce = 280000;
        tankTurnForceAngMinSpd = 0.6;
        tankTurnForceAngSpd = 0.82;
        accelAidForceCoef = 4;
        accelAidForceYOffset = -4;
        accelAidForceSpd = 2.83;
        canFloat = 1;
        waterLeakiness = 250;
        maxFordingDepth = 0.05;
        waterResistance = 1;
        waterDamageEngine = 0.9;
        engineShiftY = 0.7;
        waterLinearDampingCoefY = 2;
        waterLinearDampingCoefX = 2;
        waterAngularDampingCoef = 1.2;
        waterResistanceCoef = 0.15;
        waterEffectSpeed = 5;
        engineEffectSpeed = 5;
        waterFastEffectSpeed = 28;
        torqueCurve[] = {
            {0, 0},
            {0.229167, 0.648871},
            {0.4, 0.891855},
            {0.555903, 1},
            {0.656944, 0.993155},
            {0.813889, 0.973306},
            {0.904861, 0.92334},
            {1.05, 0}
        };
        engineMOI = 18;
        enginePower = 368;
        peakTorque = 1461;
        minOmega = 84;
        maxOmega = 301;
        idleRpm = 800;
        redRpm = 2880;
        thrustDelay = 0.6;
        clutchStrength = 30;
        brakeIdleSpeed = 1.78;
        latency = 0.6;
        antiRollbarForceCoef = 24;
        antiRollbarForceLimit = 42;
        antiRollbarSpeedMin = 30;
        antiRollbarSpeedMax = 75;
        engineLosses = 25;
        transmissionLosses = 15;
        changeGearType = "rpmratio";
        changeGearOmegaRatios[] = {
            1,
            0.347222,
            0.347222,
            0,
            0.9375,
            0.347222,
            0.885417,
            0.659722,
            0.954861,
            0.659722,
            1,
            0.659722
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -2.51,
                "N",
                0,
                "D1",
                3.31,
                "D2",
                1.934,
                "D3",
                1.132,
                "D4",
                0.662
            };
            AmphibiousRatios[] = {"R1", -10, "N", 0, "D1", 10};
            TransmissionRatios[] = {"High", 19};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
            transmissionDelay = 0.3;
        };
        class Wheels {
            class L2 {
                suspTravelDirection[] = {-0.125, -1, 0};
                side = "left";
                boneName = "wheel_podkoloL1";
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                steering = 0;
                width = 0.315;
                mass = 120;
                MOI = 7.5615;
                maxBrakeTorque = 4000;
                sprungMass = 1333.33;
                springStrength = 127500;
                springDamperRate = 11000;
                maxDroop = 0.18;
                maxCompression = 0.18;
                dampingRate = 1034;
                dampingRateInAir = 1034;
                dampingRateDamaged = 10;
                dampingRateDestroyed = 10000;
                latStiffX = 3;
                latStiffY = 40;
                longitudinalStiffnessPerUnitGravity = 32000;
                frictionVsSlipGraph[] = {{0, 0.65}, {0.18, 1}, {0.7, 0.95}};
            };
            class L3: L2 {
                boneName = "wheel_podkolol2";
                center = "wheel_1_3_axis";
                boundary = "wheel_1_3_bound";
            };
            class L4: L2 {
                boneName = "wheel_podkolol3";
                center = "wheel_1_4_axis";
                boundary = "wheel_1_4_bound";
            };
            class L5: L2 {
                boneName = "wheel_podkolol4";
                center = "wheel_1_5_axis";
                boundary = "wheel_1_5_bound";
            };
            class L6: L2 {
                boneName = "wheel_podkolol5";
                center = "wheel_1_6_axis";
                boundary = "wheel_1_6_bound";
            };
            class L7: L2 {
                boneName = "wheel_podkolol6";
                center = "wheel_1_7_axis";
                boundary = "wheel_1_7_bound";
            };
            class L9: L2 {
                boneName = "wheel_podkolol9";
                center = "wheel_1_9_axis";
                boundary = "wheel_1_9_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class L1: L2 {
                boneName = "";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class R2: L2 {
                suspTravelDirection[] = {0.125, -1, 0};
                boneName = "wheel_podkolop1";
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                side = "right";
            };
            class R3: R2 {
                boneName = "wheel_podkolop2";
                center = "wheel_2_3_axis";
                boundary = "wheel_2_3_bound";
            };
            class R4: R2 {
                boneName = "wheel_podkolop3";
                center = "wheel_2_4_axis";
                boundary = "wheel_2_4_bound";
            };
            class R5: R2 {
                boneName = "wheel_podkolop4";
                center = "wheel_2_5_axis";
                boundary = "wheel_2_5_bound";
            };
            class R6: R2 {
                boneName = "wheel_podkolop5";
                center = "wheel_2_6_axis";
                boundary = "wheel_2_6_bound";
            };
            class R7: R2 {
                boneName = "wheel_podkolop6";
                center = "wheel_2_7_axis";
                boundary = "wheel_2_7_bound";
            };
            class R9: R2 {
                boneName = "wheel_podkolop9";
                center = "wheel_2_9_axis";
                boundary = "wheel_2_9_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class R1: R2 {
                boneName = "";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
        };
        soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out", 0.56234133, 1};
        soundGetOut[] = {
            "A3\sounds_f\vehicles\armor\noises\get_in_out",
            0.56234133,
            1,
            20
        };
        soundDammage[] = {"", 0.56234133, 1};
        soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_start", 0.70794576, 1};
        soundEngineOnExt[] = {
            "\rhsafrf\addons\rhs_bmp\sounds\utd20_start",
            0.63095737,
            1,
            200
        };
        soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_stop", 0.70794576, 1};
        soundEngineOffExt[] = {
            "A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_stop",
            0.63095737,
            1,
            200
        };
        buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
        buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1, 1, 200};
        buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1, 1, 200};
        buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1, 1, 200};
        soundBuildingCrash[] = {
            "buildCrash0",
            0.25,
            "buildCrash1",
            0.25,
            "buildCrash2",
            0.25,
            "buildCrash3",
            0.25
        };
        WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
        WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1, 1, 200};
        WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1, 1, 200};
        WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1, 1, 200};
        WoodCrash4[] = {"A3\sounds_f\Vehicles\crashes\crash_01", 1, 1, 200};
        WoodCrash5[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
        soundWoodCrash[] = {
            "woodCrash0",
            0.166,
            "woodCrash1",
            0.166,
            "woodCrash2",
            0.166,
            "woodCrash3",
            0.166,
            "woodCrash4",
            0.166,
            "woodCrash5",
            0.166
        };
        ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1, 1, 200};
        ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1, 1, 200};
        ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1, 1, 200};
        ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1, 1, 200};
        soundArmorCrash[] = {
            "ArmorCrash0",
            0.25,
            "ArmorCrash1",
            0.25,
            "ArmorCrash2",
            0.25,
            "ArmorCrash3",
            0.25
        };
        class Sounds {
            class Idle_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_idle",
                    0.70794576,
                    1,
                    200
                };
                frequency = "0.95	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
            };
            class Engine {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
                    0.7943282,
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
            };
            class Engine1_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
                    0.7943282,
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
            };
            class Engine2_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
                    0.8912509,
                    1,
                    250
                };
                frequency = "0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
            };
            class Engine3_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
                    1,
                    1,
                    300
                };
                frequency = "0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
            };
            class Engine4_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
                    1.1220185,
                    1,
                    340
                };
                frequency = "0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
                volume = "engineOn*camPos*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
            };
            class Engine5_ext {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
                    1.4125376,
                    1,
                    400
                };
                frequency = "0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
                volume = "engineOn*camPos*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
            };
            class IdleThrust {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_idle",
                    0.8912509,
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
            };
            class EngineThrust {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm1",
                    1.1220185,
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
            };
            class Engine1_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm2",
                    1.2589254,
                    1,
                    200
                };
                frequency = "0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
            };
            class Engine2_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm3",
                    1.4125376,
                    1,
                    250
                };
                frequency = "0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
            };
            class Engine3_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm4",
                    1.5848932,
                    1,
                    350
                };
                frequency = "0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
            };
            class Engine4_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm5",
                    1.7782794,
                    1,
                    400
                };
                frequency = "0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
            };
            class Engine5_Thrust_ext {
                sound[] = {
                    "A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm6",
                    1.9952624,
                    1,
                    450
                };
                frequency = "0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
                volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
            };
            class Idle_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_idle", 0.31622776, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
                volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
            };
            class Engine_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm1", 0.35481337, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
            };
            class Engine1_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm2", 0.39810717, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
            };
            class Engine2_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm3", 0.4466836, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
                volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
            };
            class Engine3_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm4", 0.5011872, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
                volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
            };
            class Engine4_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm5", 0.56234133, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
                volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
            };
            class Engine5_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm6", 0.63095737, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
                volume = "engineOn*(1-camPos)*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
            };
            class IdleThrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_idle", 0.35481337, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
            };
            class EngineThrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm1", 0.39810717, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
            };
            class Engine1_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm2", 0.4466836, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
            };
            class Engine2_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm3", 0.4466836, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
            };
            class Engine3_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm4", 0.5011872, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
            };
            class Engine4_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm5", 0.56234133, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
            };
            class Engine5_Thrust_int {
                sound[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm6", 0.63095737, 1};
                frequency = "0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
                volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
            };
            class NoiseInt {
                sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1", 0.56234133, 1};
                frequency = "1";
                volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 25])";
            };
            class NoiseExt {
                sound[] = {
                    "A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
                    0.7943282,
                    1,
                    150
                };
                frequency = "1";
                volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 25])";
            };
            class ThreadsOutH0 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
                    0.39810717,
                    1,
                    140
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
            };
            class ThreadsOutH1 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
                    0.4466836,
                    1,
                    160
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
            };
            class ThreadsOutH2 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_3.ogg",
                    0.5011872,
                    1,
                    180
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
            };
            class ThreadsOutH3 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_4.ogg",
                    0.56234133,
                    1,
                    200
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
            };
            class ThreadsOutH4 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_5.ogg",
                    0.56234133,
                    1,
                    220
                };
                frequency = "1";
                volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
            };
            class ThreadsOutS0 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
                    0.31622776,
                    1,
                    120
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
            };
            class ThreadsOutS1 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
                    0.35481337,
                    1,
                    140
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
            };
            class ThreadsOutS2 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_3.ogg",
                    0.39810717,
                    1,
                    160
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
            };
            class ThreadsOutS3 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_4.ogg",
                    0.4466836,
                    1,
                    180
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
            };
            class ThreadsOutS4 {
                sound[] = {
                    "\rhsafrf\addons\rhs_bmp\sounds\lanc_5.ogg",
                    0.5011872,
                    1,
                    200
                };
                frequency = "1";
                volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
            };
            class ThreadsInH0 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_01", 0.4466836, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
            };
            class ThreadsInH1 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_02", 0.4466836, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
            };
            class ThreadsInH2 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_03", 0.4466836, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
            };
            class ThreadsInH3 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_04", 0.5011872, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
            };
            class ThreadsInH4 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_05", 0.56234133, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
            };
            class ThreadsInS0 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_01", 0.35481337, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
            };
            class ThreadsInS1 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_02", 0.35481337, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
            };
            class ThreadsInS2 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_03", 0.39810717, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
            };
            class ThreadsInS3 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_04", 0.39810717, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
            };
            class ThreadsInS4 {
                sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_05", 0.4466836, 1};
                frequency = "1";
                volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
            };
        };
        class RenderTargets {
            class driverView2 {
                renderTarget = "rendertarget1";
                class Camera {
                    pointPosition = "dVis2P";
                    pointDirection = "dVis2D";
                    renderVisionMode = 0;
                    renderQuality = 4;
                    fov = 0.5;
                };
                BBoxes[] = {"PIP_1_TL", "PIP_1_TR", "PIP_1_BL", "PIP_1_BR"};
            };
            class driverView3 {
                renderTarget = "rendertarget2";
                class Camera {
                    pointPosition = "dVis3P";
                    pointDirection = "dVis3D";
                    renderVisionMode = 0;
                    renderQuality = 4;
                    fov = 0.5;
                };
                BBoxes[] = {"PIP_2_TL", "PIP_2_TR", "PIP_2_BL", "PIP_2_BR"};
            };
            class driverView4 {
                renderTarget = "rendertarget3";
                class Camera {
                    pointPosition = "dVis4P";
                    pointDirection = "dVis4D";
                    renderVisionMode = 0;
                    renderQuality = 2;
                    fov = 0.5;
                };
                BBoxes[] = {"PIP_3_TL", "PIP_3_TR", "PIP_3_BL", "PIP_3_BR"};
            };
        };
        unitInfoType = "RHS_RscInfoBMP3";
        driverCanSee = "2+4+8";
        gunnerCanSee = "2+4+8";
        commanderCanSee = "2+4+8";
        incomingMissileDetectionSystem = 0;
        tracksSpeed = 1.35;
        wheelCircumference = 1.922;
        attenuationEffectType = "TankAttenuation";
        class SpeechVariants {
            class Default {
                speechSingular[] = {"veh_vehicle_APC_s"};
                speechPlural[] = {"veh_vehicle_APC_p"};
            };
        };
        textSingular = "BMP";
        textPlural = "BMPs";
        nameSound = "veh_vehicle_APC_s";
        extCameraPosition[] = {0, 2, -9};
        HeadAimDown = 0;
        cost = 1500000;
        enableGPS = 0;
        class ViewPilot: ViewPilot {
            initAngleX = -12;
            minAngleY = -110;
            maxAngleY = 110;
        };
        armor = 200;
        armorStructural = 500;
        fuelExplosionPower = 0.5;
        damageResistance = 0.02;
        crewVulnerable = 0;
        class TransportMagazines {
            class _xx_rhs_30Rnd_545x39_7N10_AK {
                magazine = "rhs_30Rnd_545x39_7N10_AK";
                count = 30;
            };
            class _xx_rhs_10Rnd_762x54mmR_7N1 {
                magazine = "rhs_10Rnd_762x54mmR_7N1";
                count = 10;
            };
            class _xx_rhs_100Rnd_762x54mmR {
                magazine = "rhs_100Rnd_762x54mmR";
                count = 3;
            };
            class _xx_rhs_mag_rdg2_white {
                magazine = "rhs_mag_rdg2_white";
                count = 2;
            };
            class _xx_rhs_mag_rgd5 {
                magazine = "rhs_mag_rgd5";
                count = 9;
            };
            class _xx_rhs_VOG25 {
                magazine = "rhs_VOG25";
                count = 20;
            };
            class _xx_rhs_vg40op_white {
                magazine = "rhs_vg40op_white";
                count = 5;
            };
            class _xx_rhs_GRD40_white {
                magazine = "rhs_GRD40_white";
                count = 5;
            };
            class _xx_rhs_rpg26_mag {
                magazine = "rhs_rpg26_mag";
                count = 2;
            };
            class _xx_rhs_rpg7_OG7V_mag {
                magazine = "rhs_rpg7_OG7V_mag";
                count = 2;
            };
        };
        class TransportWeapons {
            class _xx_rhs_weap_ak74m {
                weapon = "rhs_weap_ak74m";
                count = 4;
            };
            class _xx_rhs_weap_rpg26 {
                weapon = "rhs_weap_rpg26";
                count = 2;
            };
            class _xx_rhs_weap_rpg7 {
                weapon = "rhs_weap_rpg7";
                count = 1;
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 4;
            };
            class _xx_Medikit {
                name = "Medikit";
                count = 1;
            };
        };
        class TransportBackpacks {
            class _xx_rhs_sidor {
                backpack = "rhs_sidor";
                count = 7;
            };
            class _xx_rhs_rpg {
                backpack = "rhs_rpg";
                count = 1;
            };
        };
        class HitPoints: HitPoints {
            class HitHull: HitHull {
                armor = 0.4;
                material = -1;
                name = "telo";
                visual = "zbytek";
                passThrough = 0;
                minimalHit = 0.44;
                explosionShielding = 0.5;
                radius = 0.15;
            };
            class HitEngine: HitEngine {
                armor = 0.25;
                material = -1;
                name = "motor";
                visual = "zbytek";
                passThrough = 0;
                minimalHit = 0.069;
                explosionShielding = 0.009;
                radius = 0.17;
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
            class HitLTrack: HitLTrack {
                armor = -150;
                material = -1;
                name = "pas_L";
                passThrough = 0;
                minimalHit = -0.25;
                explosionShielding = 0.15;
                radius = 0.3;
            };
            class HitRTrack: HitRTrack {
                armor = -150;
                material = -1;
                name = "pas_P";
                passThrough = 0;
                minimalHit = -0.25;
                explosionShielding = 0.15;
                radius = 0.3;
            };
            class HitFuel {
                armor = 1.2;
                explosionShielding = 0.001;
                material = -1;
                passThrough = 0;
                name = "palivo";
                visual = "-";
                radius = 0.05;
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        gunnerDoor = "hatchC";
                        body = "obsTurret";
                        gun = "obsGun";
                        commanding = 4;
                        primaryObserver = 1;
                        animationSourceBody = "obsTurret";
                        animationSourceGun = "obsGun";
                        maxHorizontalRotSpeed = 1.8;
                        maxVerticalRotSpeed = 1.8;
                        stabilizedInAxes = 3;
                        minElev = -5;
                        maxElev = 60;
                        initElev = 0;
                        minTurn = -360;
                        maxTurn = 360;
                        initTurn = 0;
                        soundServo[] = {
                            "A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
                            3.1622777,
                            1,
                            30
                        };
                        soundServoVertical[] = {
                            "A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
                            3.1622777,
                            1,
                            30
                        };
                        memoryPointGun = "usti hlavne3";
                        gunBeg = "usti hlavne3";
                        gunEnd = "konec hlavne3";
                        turretInfoType = "RHS_RscWeaponTKN3_FCS";
                        discreteDistance[] = {};
                        discreteDistanceInitIndex = 0;
                        canUseScanners = 0;
                        allowTabLock = 0;
                        memoryPointGunnerOutOptics = "commanderview";
                        memoryPointGunnerOptics = "commanderview";
                        gunnerOutOpticsModel = "";
                        gunnerOpticsEffect[] = {};
                        gunnerHasFlares = 1;
                        class ViewGunner {
                            initAngleX = 5;
                            minAngleX = -65;
                            maxAngleX = 85;
                            initAngleY = 0;
                            minAngleY = -150;
                            maxAngleY = 150;
                            initFov = 0.7;
                            minFov = 0.25;
                            maxFov = 1.1;
                        };
                        class ViewOptics: ViewOptics {
                            initAngleX = 0;
                            minAngleX = -30;
                            maxAngleX = 30;
                            initAngleY = 0;
                            minAngleY = -100;
                            maxAngleY = 100;
                            initFov = 0.101;
                            minFov = 0.102;
                            maxFov = 0.102;
                            visionMode[] = {"Normal"};
                        };
                        class OpticsIn {
                            class Wide: ViewOptics {
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
                                initFov = 0.14;
                                minFov = 0.14;
                                maxFov = 0.14;
                            };
                            class PZU: ViewOptics {
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pzu3.p3d";
                                initFov = 0.175;
                                minFov = 0.175;
                                maxFov = 0.175;
                            };
                            class Night: Wide {
                                initFov = 0.166667;
                                minFov = 0.166667;
                                maxFov = 0.166667;
                                visionMode[] = {"NVG"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3_night.p3d";
                            };
                            class Periscope: ViewOptics {
                                initAngleX = 0;
                                minAngleX = -30;
                                maxAngleX = 30;
                                initAngleY = 0;
                                minAngleY = -100;
                                maxAngleY = 100;
                                initFov = 0.26;
                                minFov = 0.26;
                                maxFov = 0.26;
                                visionMode[] = {"Normal"};
                                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
                                gunnerOpticsEffect[] = {"TankGunnerOptics1", "OpticsBlur2", "OpticsCHAbera2"};
                            };
                        };
                        gunnerAction = "rhs_bmp3_commanderOut";
                        gunnerInAction = "rhs_bmp3_commander";
                        gunnerGetInAction = "GetInHigh";
                        gunnerGetOutAction = "GetOutHigh";
                        gunnerType = "rhs_msv_crew_commander";
                        startEngine = 0;
                        viewGunnerInExternal = 1;
                        outGunnerMayFire = 1;
                        inGunnerMayFire = 1;
                        gunnerForceOptics = 0;
                        LodOpticsIn = 0;
                        LodOpticsOut = 0;
                        usePiP = 2;
                        class HitPoints {
                            class HitTurretCom {
                                armor = 0.3;
                                material = -1;
                                name = "vezVelitele";
                                visual = "vezVelitele";
                                passThrough = 0;
                                minimalHit = 0.03;
                                explosionShielding = 0.6;
                                radius = 0.15;
                                isTurret = 1;
                            };
                            class HitGunCom {
                                armor = 0.3;
                                material = -1;
                                name = "zbranVelitele";
                                visual = "zbranVelitele";
                                passThrough = 0;
                                minimalHit = 0.03;
                                explosionShielding = 0.6;
                                radius = 0.15;
                                isGun = 1;
                            };
                        };
                        selectionFireAnim = "";
                        class Components {
                            class VehicleSystemsDisplayManagerComponentLeft {
                                class EmptyDisplay {
                                    componentType = "EmptyDisplayComponent";
                                };
                                class CrewDisplay {
                                    componentType = "CrewDisplayComponent";
                                    resource = "RscCustomInfoCrew";
                                };
                            };
                            class VehicleSystemsDisplayManagerComponentRight {
                                class EmptyDisplay {
                                    componentType = "EmptyDisplayComponent";
                                };
                                class CrewDisplay {
                                    componentType = "CrewDisplayComponent";
                                    resource = "RscCustomInfoCrew";
                                };
                            };
                        };
                    };
                };
                gunnerDoor = "hatchG";
                memoryPointGun = "usti hlavne2";
                selectionFireAnim = "zasleh2";
                gunBeg = "usti hlavne";
                gunEnd = "konec hlavne";
                weapons[] = {
                    "rhs_weap_2a70",
                    "rhs_weap_2a72",
                    "rhs_weap_pkt_bmd_coax",
                    "rhs_weap_902a",
                    "rhs_weap_fcs"
                };
                magazines[] = {
                    "rhs_mag_3UOF17_22",
                    "rhs_mag_9m117_8",
                    "rhs_mag_3uof8_305",
                    "rhs_mag_3ubr6_195",
                    "rhs_mag_762x54mm_2000",
                    "rhs_mag_3d17_6",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
                animationSourceStickX = "joystick_gunner_X";
                animationSourceStickY = "joystick_gunner_Y";
                gunnerLeftHandAnimName = "joystick_gunner_Y";
                gunnerRightHandAnimName = "joystick_gunner_Y";
                maxHorizontalRotSpeed = 0.55;
                maxVerticalRotSpeed = 0.55;
                minElev = -5;
                maxElev = 60;
                initElev = 10;
                startEngine = 0;
                soundServo[] = {
                    "A3\Sounds_F\vehicles\armor\noises\servo_best",
                    1,
                    1,
                    50
                };
                class TurnIn {
                    limitsArrayTop[] = {{60, -180}, {60, 180}};
                    limitsArrayBottom[] = {
                        {-2.1, -180},
                        {-1.9, -134.6867},
                        {-4.7683, -133.6867},
                        {-5, 0},
                        {-4.7173, 133.6372},
                        {-1.9, 134.6867},
                        {-2.1, 180}
                    };
                };
                turretInfoType = "RHS_RscWeapon1k13_bmp3_FCS";
                discreteDistance[] = {0};
                discreteDistanceInitIndex = 0;
                canUseScanners = 0;
                allowTabLock = 0;
                memoryPointGunnerOptics = "gunnerview";
                gunnerOutOpticsModel = "";
                gunnerOutOpticsEffect[] = {};
                gunnerOpticsEffect[] = {};
                gunnerForceOptics = 0;
                class OpticsIn {
                    class DayMain: ViewOptics {
                        opticsDisplayName = "DAY1";
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.7;
                        minFov = 0.7;
                        maxFov = 0.7;
                        visionMode[] = {"Normal"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1k13_3s_1x.p3d";
                        gunnerOpticsEffect[] = {};
                    };
                    class Day2: DayMain {
                        opticsDisplayName = "DAY5";
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1k13_3s_5x.p3d";
                        initFov = 0.14;
                        minFov = 0.14;
                        maxFov = 0.14;
                    };
                    class Day3: DayMain {
                        opticsDisplayName = "DAY14";
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1k13_3s_14x.p3d";
                        initFov = 0.05;
                        minFov = 0.05;
                        maxFov = 0.05;
                    };
                    class night: DayMain {
                        opticsDisplayName = "NIGHT";
                        initFov = 0.14;
                        minFov = 0.14;
                        maxFov = 0.14;
                        visionMode[] = {"NVG"};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1k13_3s_5x_nvg.p3d";
                    };
                };
                gunnerAction = "rhs_bmp3_gunnerOut";
                gunnerInAction = "rhs_bmp3_gunner";
                forceHideGunner = 0;
                inGunnerMayFire = 1;
                viewGunnerInExternal = 1;
                LodOpticsIn = 0;
                LodOpticsOut = 0;
                usePiP = 2;
                headAimDown = 15;
                class Reflectors {
                    class Searchlight_FG125 {
                        color[] = {1900, 1300, 950};
                        ambient[] = {5, 5, 5};
                        position = "Light_FG125";
                        direction = "Light_FG125_end";
                        hitpoint = "Light_FG125";
                        selection = "Light_FG125";
                        size = 1;
                        innerAngle = 8;
                        outerAngle = 15;
                        coneFadeCoef = 1;
                        intensity = 45;
                        useFlare = 1;
                        dayLight = 1;
                        flareSize = 0.85;
                        class Attenuation {
                            start = 1;
                            constant = 0;
                            linear = 0;
                            quadratic = 0.02;
                            hardLimitStart = 630;
                            hardLimitEnd = 660;
                        };
                    };
                    class Searchlight_FG125_Flare {
                        color[] = {7, 6, 6.5};
                        ambient[] = {22, 22, 22};
                        position = "Light_FG125";
                        direction = "Light_FG125_end";
                        hitpoint = "Light_FG125";
                        selection = "Light_FG125";
                        size = 1;
                        innerAngle = 30;
                        outerAngle = 175;
                        coneFadeCoef = 10;
                        intensity = 100;
                        useFlare = 1;
                        dayLight = 0;
                        flareSize = 1.85;
                        class Attenuation {
                            start = 0;
                            constant = 0;
                            linear = 0;
                            quadratic = 10;
                            hardLimitStart = 0;
                            hardLimitEnd = 0.9;
                        };
                    };
                };
                armorLights = 0.1;
                class ViewGunner {
                    initAngleX = -15;
                    minAngleX = -65;
                    maxAngleX = 85;
                    initAngleY = -5;
                    minAngleY = -150;
                    maxAngleY = 150;
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                };
                commanding = 2;
                class HitPoints {
                    class HitTurret {
                        armor = 0.5;
                        material = -1;
                        name = "vez";
                        visual = "vez";
                        passThrough = 0;
                        minimalHit = 0.14;
                        explosionShielding = 0.001;
                        radius = 0.25;
                        isTurret = 1;
                    };
                    class HitGun {
                        armor = 0.6;
                        material = -1;
                        name = "zbran";
                        visual = "-";
                        passThrough = 0;
                        minimalHit = 0.13;
                        explosionShielding = 0.001;
                        radius = 0.25;
                        isGun = 1;
                    };
                };
                class Components {
                    class VehicleSystemsDisplayManagerComponentLeft {
                        class EmptyDisplay {
                            componentType = "EmptyDisplayComponent";
                        };
                        class CrewDisplay {
                            componentType = "CrewDisplayComponent";
                            resource = "RscCustomInfoCrew";
                        };
                    };
                    class VehicleSystemsDisplayManagerComponentRight {
                        class EmptyDisplay {
                            componentType = "EmptyDisplayComponent";
                        };
                        class CrewDisplay {
                            componentType = "CrewDisplayComponent";
                            resource = "RscCustomInfoCrew";
                        };
                    };
                };
            };
            class GPMGTurret1: NewTurret {
                gunnerDoor = "hatchRA";
                animationSourceHatch = "hatchR";
                proxyIndex = 8;
                body = "obsTurret2";
                gun = "obsGun2";
                animationSourceBody = "obsTurret2";
                animationSourceGun = "obsGun2";
                selectionFireAnim = "zasleh3";
                gunnerName = "$STR_MGFrontRight";
                hasGunner = 1;
                gunnerType = "rhs_msv_rifleman";
                isPersonTurret = 1;
                showAsCargo = 1;
                proxyType = "CPCargo";
                personTurretAction = "vehicle_turnout_1";
                minOutElev = -10;
                maxOutElev = 15;
                initOutElev = 0;
                minOutTurn = -100;
                maxOutTurn = 120;
                initOutTurn = 0;
                usePip = 1;
                dontCreateAI = 1;
                forceHideGunner = 0;
                primaryObserver = 0;
                primaryGunner = 0;
                commanding = 0;
                LodOpticsIn = 0;
                LodOpticsOut = 0;
                minElev = -24;
                maxElev = 35;
                minTurn = -10;
                maxTurn = 10;
                weapons[] = {"rhs_weap_pkt_bmd_bow1"};
                magazines[] = {
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250",
                    "rhs_mag_762x54mm_250"
                };
                ejectDeadGunner = 0;
                gunBeg = "muzzle2";
                gunEnd = "end2";
                memoryPointGun = "memoryPointGun2";
                memoryPointGunnerOptics = "gunnerview3";
                memoryPointsGetInGunner = "pos cargo R";
                memoryPointsGetInGunnerDir = "pos cargo R dir";
                usePreciseGetInAction = 0;
                preciseGetInOut = 0;
                gunnerAction = "rhs_bmp3_gunner03";
                gunnerInAction = "rhs_bmp3_gunner03";
                gunnerGetInAction = "GetInHigh";
                gunnerGetOutAction = "GetOutHigh";
                viewGunnerInExternal = 1;
                startEngine = 0;
                class Turrets {};
                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpp220a_right";
                gunnerOpticsColor[] = {1, 1, 1, 1};
                gunnerForceOptics = 0;
                gunnerOpticsEffect[] = {"TankGunnerOptics1", "WeaponsOptics", "OpticsCHAbera3"};
                class ViewOptics {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    opticsZoomMin = 0.166666;
                    opticsZoomMax = 0.166666;
                    distanceZoomMin = 200;
                    distanceZoomMax = 2000;
                    initFov = 0.166666;
                    minFov = 0.166666;
                    maxFov = 0.166666;
                };
                class TurnIn {
                    limitsArrayTop[] = {{10, -10}, {10, 10}};
                    limitsArrayBottom[] = {{-10, -10}, {-10, 10}};
                };
                class TurnOut {
                    limitsArrayTop[] = {{45, -150}, {45, 150}};
                    limitsArrayBottom[] = {{-24, -150}, {-24, 150}};
                };
                class Components {
                    class VehicleSystemsDisplayManagerComponentLeft {
                        class EmptyDisplay {
                            componentType = "EmptyDisplayComponent";
                        };
                        class CrewDisplay {
                            componentType = "CrewDisplayComponent";
                            resource = "RscCustomInfoCrew";
                        };
                    };
                    class VehicleSystemsDisplayManagerComponentRight {
                        class EmptyDisplay {
                            componentType = "EmptyDisplayComponent";
                        };
                        class CrewDisplay {
                            componentType = "CrewDisplayComponent";
                            resource = "RscCustomInfoCrew";
                        };
                    };
                };
                class HitPoints {
                    class HitTurret_Bow1 {
                        armor = 0.5;
                        material = -1;
                        name = "hit_obsgun2";
                        visual = "-";
                        passThrough = 0;
                        minimalHit = 0.14;
                        explosionShielding = 0.001;
                        radius = 0.25;
                        isTurret = 1;
                    };
                    class HitGun_Bow1 {
                        armor = 0.6;
                        material = -1;
                        name = "hit_obsgun2";
                        visual = "-";
                        passThrough = 0;
                        minimalHit = 0.13;
                        explosionShielding = 0.001;
                        radius = 0.25;
                        isGun = 1;
                    };
                };
            };
            class GPMGTurret2: GPMGTurret1 {
                proxyIndex = 9;
                gunnerDoor = "hatchLA";
                animationSourceHatch = "hatchL";
                weapons[] = {"rhs_weap_pkt_bmd_bow2"};
                body = "LF_Seat_turret";
                gun = "LF_Seat_gun";
                animationSourceBody = "LF_Seat_Turret";
                animationSourceGun = "LF_Seat_Gun";
                gunnerName = "Left Hull Gunner";
                memoryPointGunnerOptics = "gunnerView2";
                commanding = 1;
                gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpp220a";
                memoryPointsGetInGunner = "pos cargo L";
                memoryPointsGetInGunnerDir = "pos cargo L dir";
                memoryPointGun = "memoryPointGun3";
                gunBeg = "muzzle3";
                gunEnd = "end3";
                selectionFireAnim = "zasleh4";
                gunnerAction = "rhs_bmp3_gunner02";
                gunnerInAction = "rhs_bmp3_gunner02";
                personTurretAction = "vehicle_turnout_2";
                class HitPoints {
                    class HitTurret_Bow2 {
                        armor = 0.5;
                        material = -1;
                        name = "hit_obsgun3";
                        visual = "-";
                        passThrough = 0;
                        minimalHit = 0.14;
                        explosionShielding = 0.001;
                        radius = 0.25;
                        isTurret = 1;
                    };
                    class HitGun_Bow2 {
                        armor = 0.6;
                        material = -1;
                        name = "hit_obsgun3";
                        visual = "-";
                        passThrough = 0;
                        minimalHit = 0.13;
                        explosionShielding = 0.001;
                        radius = 0.25;
                        isGun = 1;
                    };
                };
            };
        };
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "n1",
            "n2",
            "n3",
            "i1",
            "f1",
            "f2",
            "f3",
            "f4",
            "f5",
            "f6",
            "f7",
            "f8",
            "f9"
        };
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_01_co.paa",
            "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_02_co.paa",
            "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_03_co.paa",
            "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_04_co.paa"
        };
        class textureSources {
            class standard {
                displayName = "Standard";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_01_co.paa",
                    "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_02_co.paa",
                    "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_03_co.paa",
                    "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_04_co.paa"
                };
                factions[] = {};
            };
            class rhs_sand: standard {
                displayName = "Sand";
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "rhsafrf\addons\rhs_bmp3_camo\data\rhs_bmp3_01_sand_co.paa",
                    "rhsafrf\addons\rhs_bmp3_camo\data\rhs_bmp3_02_sand_co.paa",
                    "rhsafrf\addons\rhs_bmp3_camo\data\rhs_bmp3_03_sand_co.paa",
                    "rhsafrf\addons\rhs_bmp3_camo\data\rhs_bmp3_04_sand_co.paa"
                };
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
            class rhs_decalNumber_type {
                displayName = "Define font type of plate number";
                tooltip = "Define kind of font that will be drawn on vehicle.";
                property = "rhs_decalNumber_type";
                control = "Combo";
                expression = "_this setVariable ['%s', _value];[_this,[['Number', cRHSBMP3NumberPlaces, _value]]] call rhs_fnc_decalsInit";
                defaultValue = 0;
                typeName = "STRING";
                class values {
                    class DefaultRed {
                        name = "Default (Red)";
                        value = "DefaultRed";
                    };
                    class Default {
                        name = "Default";
                        value = "Default";
                        defaultValue = "Default";
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
                    class LicensePlate {
                        name = "License Plate";
                        value = "LicensePlate";
                    };
                };
            };
            class rhs_decalNumber {
                collapsed = 1;
                displayName = "Set side number";
                tooltip = "Set side number. 4 numbers are required. Type 0 to hide numbers complety & leave at -1 to get random number";
                property = "rhs_decalNumber";
                control = "Edit";
                validate = "Number";
                typeName = "Number";
                defaultValue = "-1";
                expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHSBMP3NumberPlaces}else{[_this, [['Number', cRHSBMP3NumberPlaces, _this getVariable ['rhs_decalNumber_type','DefaultRed'], _value] ] ] call rhs_fnc_decalsInit}};";
            };
            class rhs_decalPlatoon_type {
                displayName = "Define platoon symbol type";
                tooltip = "Decal type";
                property = "rhs_decalPlatoon_type";
                control = "Combo";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = "0";
                typeName = "STRING";
                class values {
                    class Platoon {
                        name = "Platoon";
                        value = "Platoon";
                    };
                    class PlatoonGDR {
                        name = "Platoon GDR";
                        value = "PlatoonGDR";
                    };
                    class PlatoonVDV {
                        name = "Platoon VDV";
                        value = "PlatoonVDV";
                    };
                    class Army {
                        name = "Army";
                        value = "Army";
                        defaultValue = "Army";
                    };
                    class Honor {
                        name = "Honor";
                        value = "Honor";
                    };
                    class HonorGDR {
                        name = "Honor GDR";
                        value = "HonorGDR";
                    };
                };
            };
            class rhs_decalPlatoon {
                displayName = "Set platoon symbol";
                tooltip = "Set platoon symbol located on both sides. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
                property = "rhs_decalPlatoon";
                control = "Edit";
                validate = "none";
                defaultValue = "-1";
                expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cRHSBMP3PlnSymPlaces,  _this getVariable ['rhs_decalPlatoon_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
            };
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsafrf\addons\rhs_bmp3\data\3M_ERA.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\dam_3M_ERA.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_destr_bmp3.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_01.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_dam_bmp3_01.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_destr_bmp3.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_01_3M.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_dam_bmp3_01_3M.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_destr_bmp3.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_01_3MERA.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_dam_bmp3_01_3MERA.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_destr_bmp3.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_02.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_dam_bmp3_02.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_destr_bmp3.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_02_3MERA.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_dam_bmp3_02_3MERA.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_destr_bmp3.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_03.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_dam_bmp3_03.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_destr_bmp3.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_03_MOD.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_dam_bmp3_03_mod.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_destr_bmp3.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_03_3M.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_dam_bmp3_03_3M.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_destr_bmp3.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_04.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_dam_bmp3_04.rvmat",
                "rhsafrf\addons\rhs_bmp3\data\rhs_destr_bmp3.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4m_t.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_dam_bmd4m_t.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_destr_bmd4m_t.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_03.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_dam_bmd4_03.rvmat",
                "rhsafrf\addons\rhs_bmd_34\data\rhs_destr_bmd4_03.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class ViewOptics: ViewOptics {
            visionMode[] = {"Normal", "NVG"};
            initFov = 0.7;
            minFov = 0.7;
            maxFov = 0.7;
        };
        class Exhausts {
            class Exhaust1 {
                position = "exhaustl";
                direction = "exhaustl_dir";
                effect = "ExhaustEffectTankSide";
            };
            class Exhaust2 {
                position = "exhaustr";
                direction = "exhaustr_dir";
                effect = "ExhaustEffectTankSide";
            };
        };
        class AnimationSources {
            class muzzle_rot_coax {
                source = "ammorandom";
                weapon = "rhs_weap_pkt_bmd_coax";
            };
            class recoil_source {
                source = "reload";
                weapon = "rhs_weap_2a70";
            };
            class muzzle_hide_cannon: recoil_source {};
            class muzzle_rot_cannon: recoil_source {
                source = "ammorandom";
            };
            class recoil_source2 {
                source = "reload";
                weapon = "rhs_weap_2a72";
            };
            class muzzle_hide_hmg: recoil_source2 {};
            class muzzle_rot_hmg: recoil_source2 {
                source = "ammorandom";
            };
            class smokecap_revolving_source {
                source = "revolving";
                weapon = "rhs_weap_902a";
            };
            class muzzle_rot_coax2: muzzle_rot_hmg {
                weapon = "rhs_weap_pkt_bmd_bow1";
            };
            class muzzle_rot_coax3: muzzle_rot_hmg {
                weapon = "rhs_weap_pkt_bmd_bow2";
            };
            class autoloader {
                source = "user";
                animPeriod = 1.25;
                initPhase = 0;
            };
            class hatchC {
                source = "door";
                animPeriod = 2.1;
            };
            class HatchG: hatchC {};
            class HatchD: hatchC {};
            class HatchLA: hatchC {};
            class HatchRA: hatchC {};
            class elev {
                source = "user";
                animperiod = 0.0003;
            };
            class elev_bank {
                source = "user";
                animperiod = 0.0003;
            };
            class lead {
                source = "user";
                animperiod = 0.0016;
            };
            class offset {
                source = "user";
                animperiod = 0.0002;
            };
        };
        class Reflectors {
            class Driver_FG125_Cover {
                color[] = {1900, 1300, 950};
                ambient[] = {5, 5, 5};
                position = "Light_L";
                direction = "Light_L_end";
                hitpoint = "Light_L";
                selection = "Light_L";
                size = 1;
                innerAngle = 35;
                outerAngle = 75;
                coneFadeCoef = 5;
                intensity = 15;
                useFlare = 0;
                dayLight = 1;
                flareSize = 0.85;
                class Attenuation {
                    start = 1;
                    constant = 0;
                    linear = 0;
                    quadratic = 0.2;
                    hardLimitStart = 130;
                    hardLimitEnd = 160;
                };
            };
            class Driver_FG125_Cover_Flare: Driver_FG125_Cover {
                intensity = 5;
                innerAngle = 55;
                outerAngle = 155;
                flareSize = 0.3;
                useFlare = 1;
            };
        };
        aggregateReflectors[] = {{"Driver_FG125_Cover", "Driver_FG125_Cover_Flare"}};
        armorLights = 0.1;
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers {
                init = "_this call rhs_fnc_bmp3_init;";
                postInit = "_this call rhs_fnc_reapplyTextures";
                fired = "_this call RHS_fnc_bmp3_autoloader;";
                hitpart = "_this call rhs_fnc_hitSpall";
                engine = "[_this select 0,_this select 1,2] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_engineCheckDamage;";
                getOut = "_this call rhs_fnc_hatchAbandon";
            };
        };
        class Components: Components {
            class VehicleSystemsDisplayManagerComponentLeft {
                class EmptyDisplay {
                    componentType = "EmptyDisplayComponent";
                };
                class CrewDisplay {
                    componentType = "CrewDisplayComponent";
                    resource = "RscCustomInfoCrew";
                };
            };
            class VehicleSystemsDisplayManagerComponentRight {
                class EmptyDisplay {
                    componentType = "EmptyDisplayComponent";
                };
                class CrewDisplay {
                    componentType = "CrewDisplayComponent";
                    resource = "RscCustomInfoCrew";
                };
            };
        };
    };
    class rhs_bmp3_msv: rhs_bmp3tank_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp3_msv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
        displayName = "$STR_BMP3_Name";
    };
    class rhs_bmp3_late_msv: rhs_bmp3tank_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp3_late_msv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
        model = "\rhsafrf\addons\rhs_bmp3\bmp3_late";
        displayName = "$STR_BMP3_Late_Name";
        crew = "rhs_msv_emr_crew";
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_01_co.paa",
            "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_02_co.paa",
            "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_03_mod_co.paa",
            "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_04_co.paa"
        };
        class textureSources: textureSources {
            class standard: standard {
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_01_co.paa",
                    "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_02_co.paa",
                    "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_03_mod_co.paa",
                    "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_04_co.paa"
                };
            };
            class rhs_sand: rhs_sand {
                textures[] = {
                    "rhsafrf\addons\rhs_bmp3_camo\data\rhs_bmp3_01_sand_co.paa",
                    "rhsafrf\addons\rhs_bmp3_camo\data\rhs_bmp3_02_sand_co.paa",
                    "rhsafrf\addons\rhs_bmp3_camo\data\rhs_bmp3_03_mod_sand_co.paa",
                    "rhsafrf\addons\rhs_bmp3_camo\data\rhs_bmp3_04_sand_co.paa"
                };
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        gunnerType = "rhs_msv_emr_crew_commander";
                    };
                };
                magazines[] = {
                    "rhs_mag_3UOF17_22",
                    "rhs_mag_9m117m_8",
                    "rhs_mag_3uof8_305",
                    "rhs_mag_3ubr11_195",
                    "rhs_mag_762x54mm_2000",
                    "rhs_mag_3d17_6",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
            };
            class GPMGTurret1: GPMGTurret1 {};
            class GPMGTurret2: GPMGTurret2 {};
        };
    };
    class rhs_bmp3m_msv: rhs_bmp3tank_base {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp3m_msv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        scope = 2;
        model = "\rhsafrf\addons\rhs_bmp3\bmp3m";
        displayName = "$STR_BMP3M_Name";
        unitInfoType = "RHS_RscInfoBMP3M";
        crew = "rhs_msv_emr_crew";
        enableGPS = 1;
        reportOwnPosition = 1;
        enginePower = 478;
        peakTorque = 1650;
        torqueCurve[] = {
            {0, 0},
            {0.228896, 0.649091},
            {0.4, 0.892121},
            {0.519156, 1},
            {0.657143, 0.992727},
            {0.813961, 0.970303},
            {0.942857, 0.952121},
            {1.05, 0}
        };
        class Wheels: Wheels {
            class L2: L2 {
                dampingRate = 1034;
                dampingRateInAir = 1034;
            };
            class L3: L2 {
                boneName = "wheel_podkolol2";
                center = "wheel_1_3_axis";
                boundary = "wheel_1_3_bound";
            };
            class L4: L2 {
                boneName = "wheel_podkolol3";
                center = "wheel_1_4_axis";
                boundary = "wheel_1_4_bound";
            };
            class L5: L2 {
                boneName = "wheel_podkolol4";
                center = "wheel_1_5_axis";
                boundary = "wheel_1_5_bound";
            };
            class L6: L2 {
                boneName = "wheel_podkolol5";
                center = "wheel_1_6_axis";
                boundary = "wheel_1_6_bound";
            };
            class L7: L2 {
                boneName = "wheel_podkolol6";
                center = "wheel_1_7_axis";
                boundary = "wheel_1_7_bound";
            };
            class L9: L2 {
                boneName = "wheel_podkolol9";
                center = "wheel_1_9_axis";
                boundary = "wheel_1_9_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class L1: L2 {
                boneName = "";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class R2: L2 {
                boneName = "wheel_podkolop1";
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                side = "right";
            };
            class R3: R2 {
                boneName = "wheel_podkolop2";
                center = "wheel_2_3_axis";
                boundary = "wheel_2_3_bound";
            };
            class R4: R2 {
                boneName = "wheel_podkolop3";
                center = "wheel_2_4_axis";
                boundary = "wheel_2_4_bound";
            };
            class R5: R2 {
                boneName = "wheel_podkolop4";
                center = "wheel_2_5_axis";
                boundary = "wheel_2_5_bound";
            };
            class R6: R2 {
                boneName = "wheel_podkolop5";
                center = "wheel_2_6_axis";
                boundary = "wheel_2_6_bound";
            };
            class R7: R2 {
                boneName = "wheel_podkolop6";
                center = "wheel_2_7_axis";
                boundary = "wheel_2_7_bound";
            };
            class R9: R2 {
                boneName = "wheel_podkolop9";
                center = "wheel_2_9_axis";
                boundary = "wheel_2_9_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
            class R1: R2 {
                boneName = "";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                maxDroop = 0;
                maxCompression = 0;
            };
        };
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_01_3m_co.paa",
            "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_02_co.paa",
            "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_03_3m_co.paa",
            "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_04_co.paa"
        };
        class textureSources: textureSources {
            class standard: standard {
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_01_3m_co.paa",
                    "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_02_co.paa",
                    "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_03_3m_co.paa",
                    "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_04_co.paa"
                };
            };
            class rhs_sand: rhs_sand {
                textures[] = {
                    "rhsafrf\addons\rhs_bmp3_camo\data\rhs_bmp3_01_3m_sand_co.paa",
                    "rhsafrf\addons\rhs_bmp3_camo\data\rhs_bmp3_02_sand_co.paa",
                    "rhsafrf\addons\rhs_bmp3_camo\data\rhs_bmp3_03_3m_sand_co.paa",
                    "rhsafrf\addons\rhs_bmp3_camo\data\rhs_bmp3_04_sand_co.paa"
                };
            };
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        gunnerType = "rhs_msv_emr_crew_commander";
                        class Components {
                            class VehicleSystemsDisplayManagerComponentLeft {
                                class EmptyDisplay {
                                    componentType = "EmptyDisplayComponent";
                                };
                                class CrewDisplay {
                                    componentType = "CrewDisplayComponent";
                                    resource = "RscCustomInfoCrew";
                                };
                                class MinimapDisplay {
                                    componentType = "MinimapDisplayComponent";
                                    resource = "RscCustomInfoMiniMap";
                                };
                                class VehiclePrimaryGunnerDisplay {
                                    componentType = "TransportFeedDisplayComponent";
                                    source = "PrimaryGunner";
                                };
                            };
                            class VehicleSystemsDisplayManagerComponentRight {
                                class EmptyDisplay {
                                    componentType = "EmptyDisplayComponent";
                                };
                                class CrewDisplay {
                                    componentType = "CrewDisplayComponent";
                                    resource = "RscCustomInfoCrew";
                                };
                                class MinimapDisplay {
                                    componentType = "MinimapDisplayComponent";
                                    resource = "RscCustomInfoMiniMap";
                                };
                                class VehiclePrimaryGunnerDisplay {
                                    componentType = "TransportFeedDisplayComponent";
                                    source = "PrimaryGunner";
                                };
                            };
                        };
                    };
                };
                magazines[] = {
                    "rhs_mag_3UOF191_22",
                    "rhs_mag_9m117m1_8",
                    "rhs_mag_3uof8_305",
                    "rhs_mag_3ubr11_195",
                    "rhs_mag_762x54mm_2000",
                    "rhs_mag_3d17_6",
                    "rhs_laserfcsmag",
                    "rhs_laserfcsmag"
                };
                turretInfoType = "RHS_RscWeaponESSA_FCS";
                discreteDistance[] = {};
                discreteDistanceInitIndex = 0;
                class OpticsIn {
                    class Wide: ViewOptics {
                        opticsDisplayName = "DAY3";
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.233333;
                        minFov = 0.233333;
                        maxFov = 0.233333;
                        visionMode[] = {"Normal", "Ti"};
                        thermalMode[] = {0, 1};
                        gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_thermalscreen_empty.p3d";
                    };
                    class Medium: Wide {
                        opticsDisplayName = "DAY12";
                        initFov = 0.0583333;
                        minFov = 0.0583333;
                        maxFov = 0.0583333;
                    };
                    class Narrow: Medium {
                        opticsDisplayName = "DAY24";
                        initFov = 0.0291667;
                        minFov = 0.0291667;
                        maxFov = 0.0291667;
                    };
                    class Narrow2: Narrow {
                        opticsDisplayName = "AUTOTRACK";
                        directionStabilized = 1;
                    };
                };
                class Components {
                    class VehicleSystemsDisplayManagerComponentLeft {
                        class EmptyDisplay {
                            componentType = "EmptyDisplayComponent";
                        };
                        class CrewDisplay {
                            componentType = "CrewDisplayComponent";
                            resource = "RscCustomInfoCrew";
                        };
                    };
                    class VehicleSystemsDisplayManagerComponentRight {
                        class EmptyDisplay {
                            componentType = "EmptyDisplayComponent";
                        };
                        class CrewDisplay {
                            componentType = "CrewDisplayComponent";
                            resource = "RscCustomInfoCrew";
                        };
                    };
                };
            };
            class GPMGTurret1: GPMGTurret1 {};
            class GPMGTurret2: GPMGTurret2 {};
        };
    };
    class rhs_bmp3mera_msv: rhs_bmp3m_msv {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp3mera_msv.paa";
        author = "$STR_RHS_AUTHOR_FULL";
        model = "\rhsafrf\addons\rhs_bmp3\bmp3m_era";
        scope = 2;
        displayName = "$STR_BMP3MERA_Name";
        class HitPoints: HitPoints {
            class Armor_Composite_50 {
                armor = 999;
                material = -1;
                name = "Armor_CE_50_Hit";
                armorComponent = "Armor_CE_50";
                simulation = "RHS_Composite_50";
                passThrough = 0;
                minimalHit = 1;
                explosionShielding = 0;
                radius = 0.001;
                visual = "-";
            };
        };
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "n1",
            "n2",
            "n3",
            "i1",
            "f1",
            "f2",
            "f3",
            "f4",
            "f5",
            "f6",
            "f7",
            "f8",
            "f9"
        };
        hiddenSelectionsTextures[] = {
            "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_01_3mera_co.paa",
            "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_02_3mera_co.paa",
            "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_03_3m_co.paa",
            "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_04_co.paa",
            "rhsafrf\addons\rhs_bmp3\data\3m_era_co.paa"
        };
        class textureSources: textureSources {
            class standard: standard {
                author = "$STR_RHS_AUTHOR_FULL";
                textures[] = {
                    "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_01_3mera_co.paa",
                    "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_02_3mera_co.paa",
                    "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_03_3m_co.paa",
                    "rhsafrf\addons\rhs_bmp3\data\rhs_bmp3_04_co.paa",
                    "rhsafrf\addons\rhs_bmp3\data\3m_era_co.paa"
                };
            };
            class rhs_sand: rhs_sand {
                textures[] = {
                    "rhsafrf\addons\rhs_bmp3_camo\data\rhs_bmp3_01_3mera_sand_co.paa",
                    "rhsafrf\addons\rhs_bmp3_camo\data\rhs_bmp3_02_3mera_sand_co.paa",
                    "rhsafrf\addons\rhs_bmp3_camo\data\rhs_bmp3_03_3m_sand_co.paa",
                    "rhsafrf\addons\rhs_bmp3_camo\data\rhs_bmp3_04_sand_co.paa",
                    "rhsafrf\addons\rhs_bmp3_camo\data\3m_era_sand_co.paa"
                };
            };
        };
    };
};
