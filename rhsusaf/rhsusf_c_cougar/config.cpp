class CfgPatches {
    class rhsusf_c_Cougar {
        units[] = {
            "rhsusf_CGRCAT1A2_usmc_d",
            "rhsusf_CGRCAT1A2_usmc_wd",
            "rhsusf_CGRCAT1A2_M2_usmc_d",
            "rhsusf_CGRCAT1A2_M2_usmc_wd",
            "rhsusf_CGRCAT1A2_Mk19_usmc_d",
            "rhsusf_CGRCAT1A2_Mk19_usmc_wd"
        };
        weapons[] = {};
        requiredVersion = 1.38;
        requiredAddons[] = {"rhsusf_main", "rhsusf_c_troops"};
        name = "Cougar MRAP";
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
    class rhs_cougar_hatch: RscWeaponZeroing {
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
    class BlendAnims;
    class ManActions {
        RHS_cougar_Driver = "RHS_cougar_Driver";
        RHS_cougar_Cargo01_FFV = "RHS_cougar_Cargo01_FFV";
        rhs_cougar_turnout_1 = "rhs_cougar_turnout_1_Idle";
    };
    class Actions {
        class RifleStandActions;
        class FFV_BaseActions: RifleStandActions {
            AdjustF = "";
            AdjustB = "";
            AdjustL = "";
            AdjustR = "";
            AdjustLF = "";
            AdjustLB = "";
            AdjustRB = "";
            AdjustRF = "";
            agonyStart = "";
            agonyStop = "";
            medicStop = "";
            medicStart = "";
            medicStartUp = "";
            medicStartRightSide = "";
            GestureAgonyCargo = "";
            grabCarry = "";
            grabCarried = "";
            grabDrag = "";
            grabDragged = "";
            carriedStill = "";
            released = "";
            releasedBad = "";
            Stop = "";
            StopRelaxed = "";
            TurnL = "";
            TurnR = "";
            TurnLRelaxed = "";
            TurnRRelaxed = "";
            ReloadMagazine = "";
            ReloadMGun = "";
            ReloadRPG = "ReloadRPG";
            ReloadMortar = "";
            WalkF = "";
            WalkLF = "";
            WalkRF = "";
            WalkL = "";
            WalkR = "";
            WalkLB = "";
            WalkRB = "";
            WalkB = "";
            PlayerWalkF = "";
            PlayerWalkLF = "";
            PlayerWalkRF = "";
            PlayerWalkL = "";
            PlayerWalkR = "";
            PlayerWalkLB = "";
            PlayerWalkRB = "";
            PlayerWalkB = "";
            SlowF = "";
            SlowLF = "";
            SlowRF = "";
            SlowL = "";
            SlowR = "";
            SlowLB = "";
            SlowRB = "";
            SlowB = "";
            PlayerSlowF = "";
            PlayerSlowLF = "";
            PlayerSlowRF = "";
            PlayerSlowL = "";
            PlayerSlowR = "";
            PlayerSlowLB = "";
            PlayerSlowRB = "";
            PlayerSlowB = "";
            FastF = "";
            FastLF = "";
            FastRF = "";
            FastL = "";
            FastR = "";
            FastLB = "";
            FastRB = "";
            FastB = "";
            TactF = "";
            TactLF = "";
            TactRF = "";
            TactL = "";
            TactR = "";
            TactLB = "";
            TactRB = "";
            TactB = "";
            PlayerTactF = "";
            PlayerTactLF = "";
            PlayerTactRF = "";
            PlayerTactL = "";
            PlayerTactR = "";
            PlayerTactLB = "";
            PlayerTactRB = "";
            PlayerTactB = "";
            EvasiveLeft = "";
            EvasiveRight = "";
            startSwim = "";
            surfaceSwim = "";
            bottomSwim = "";
            StopSwim = "";
            startDive = "";
            SurfaceDive = "";
            BottomDive = "";
            StopDive = "";
            Down = "";
            Up = "";
            PlayerStand = "";
            PlayerCrouch = "";
            PlayerProne = "";
            Lying = "";
            Stand = "";
            Combat = "";
            Crouch = "";
            CanNotMove = "";
            Civil = "";
            CivilLying = "";
            FireNotPossible = "";
            WeaponOn = "";
            WeaponOff = "";
            Default = "";
            JumpOff = "";
            StrokeFist = "";
            StrokeGun = "";
            SitDown = "";
            Salute = "";
            saluteOff = "";
            GetOver = "";
            Diary = "";
            Surrender = "";
            Gear = "";
            BinocOn = "";
            BinocOff = "";
            PutDown = "";
            PutDownEnd = "";
            Medic = "";
            MedicOther = "";
            Treated = "";
            LadderOnDown = "";
            LadderOnUp = "";
            LadderOff = "";
            LadderOffTop = "";
            LadderOffBottom = "";
            PrimaryWeapon = "";
            SecondaryWeapon = "";
            Binoculars = "";
        };
        class rhs_cougar_turnout_1Actions: FFV_BaseActions {
            upDegree = "ManPosCombat";
            stop = "rhs_cougar_turnout_1_Aim";
            stopRelaxed = "rhs_cougar_turnout_1_Aim";
            default = "rhs_cougar_turnout_1_Aim";
            Stand = "rhs_cougar_turnout_1_Idle";
            HandGunOn = "rhs_cougar_turnout_1_Aim_Pistol";
            PrimaryWeapon = "rhs_cougar_turnout_1_Aim";
            Binoculars = "rhs_cougar_turnout_1_Aim_Binoc";
            die = "rhs_cougar_turnout_1_Die";
            Unconscious = "rhs_cougar_turnout_1_Die";
            civil = "rhs_cougar_turnout_1_Idle_Unarmed";
            Obstructed = "rhs_cougar_turnout_1_Obstructed";
        };
        class rhs_cougar_turnout_1IdleUnarmedActions: FFV_BaseActions {
            upDegree = "ManPosNoWeapon";
            stop = "rhs_cougar_turnout_1_Idle_Unarmed";
            stopRelaxed = "rhs_cougar_turnout_1_Idle_Unarmed";
            default = "rhs_cougar_turnout_1_Idle_Unarmed";
            Stand = "rhs_cougar_turnout_1_Idle_Unarmed";
            HandGunOn = "rhs_cougar_turnout_1_Aim_Pistol";
            PrimaryWeapon = "rhs_cougar_turnout_1_Aim";
            Binoculars = "rhs_cougar_turnout_1_Aim_Unarmed_Binoc";
            die = "rhs_cougar_turnout_1_Die_Pistol";
            Unconscious = "rhs_cougar_turnout_1_Die_Pistol";
            civil = "rhs_cougar_turnout_1_Idle_Unarmed";
            throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
            GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
            GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
            GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
            GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
            GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
            GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
        };
        class rhs_cougar_turnout_1DeadActions: FFV_BaseActions {
            stop = "rhs_cougar_turnout_1_Die";
            default = "rhs_cougar_turnout_1_Die";
            die = "rhs_cougar_turnout_1_Die";
            Unconscious = "rhs_cougar_turnout_1_Die";
        };
        class rhs_cougar_turnout_1DeadPistolActions: FFV_BaseActions {
            stop = "rhs_cougar_turnout_1_Die_Pistol";
            default = "rhs_cougar_turnout_1_Die_Pistol";
            die = "rhs_cougar_turnout_1_Die_Pistol";
            Unconscious = "rhs_cougar_turnout_1_Die_Pistol";
        };
        class rhs_cougar_turnout_1PistolActions: rhs_cougar_turnout_1Actions {
            upDegree = "ManPosHandGunStand";
            stop = "rhs_cougar_turnout_1_Aim_Pistol";
            stopRelaxed = "rhs_cougar_turnout_1_Aim_Pistol";
            default = "rhs_cougar_turnout_1_Aim_Pistol";
            Binoculars = "rhs_cougar_turnout_1_Aim_Pistol_Binoc";
            throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
            Stand = "rhs_cougar_turnout_1_Idle_Pistol";
            die = "rhs_cougar_turnout_1_Die_Pistol";
            Unconscious = "rhs_cougar_turnout_1_Die_Pistol";
            Obstructed = "rhs_cougar_turnout_1_Obstructed_Pistol";
            GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
            GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
            GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
            GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
            GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
            GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
        };
        class rhs_cougar_turnout_1BinocActions: rhs_cougar_turnout_1Actions {
            binocOn = "";
            upDegree = "ManPosBinocStand";
            stop = "rhs_cougar_turnout_1_Aim_Binoc";
            stopRelaxed = "rhs_cougar_turnout_1_Aim_Binoc";
            default = "rhs_cougar_turnout_1_Aim_Binoc";
        };
        class rhs_cougar_turnout_1BinocPistolActions: rhs_cougar_turnout_1BinocActions {
            stop = "rhs_cougar_turnout_1_Aim_Pistol_Binoc";
            stopRelaxed = "rhs_cougar_turnout_1_Aim_Pistol_Binoc";
            default = "rhs_cougar_turnout_1_Aim_Pistol_Binoc";
            die = "rhs_cougar_turnout_1_Die_Pistol";
            Unconscious = "rhs_cougar_turnout_1_Die_Pistol";
            GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
            GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
            GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
            GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
            GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
            GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
        };
        class rhs_cougar_turnout_1BinocUnarmedActions: rhs_cougar_turnout_1BinocActions {
            stop = "rhs_cougar_turnout_1_Aim_Unarmed_Binoc";
            stopRelaxed = "rhs_cougar_turnout_1_Aim_Unarmed_Binoc";
            default = "rhs_cougar_turnout_1_Aim_Unarmed_Binoc";
            die = "rhs_cougar_turnout_1_Die_Pistol";
            Unconscious = "rhs_cougar_turnout_1_Die_Pistol";
            GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
            GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
            GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
            GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
            GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
            GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
        };
        class rhs_cougar_turnout_1IdleActions: rhs_cougar_turnout_1Actions {
            upDegree = "ManPosStand";
            stop = "rhs_cougar_turnout_1_Idle";
            stopRelaxed = "rhs_cougar_turnout_1_Idle";
            default = "rhs_cougar_turnout_1_Idle";
            Combat = "rhs_cougar_turnout_1_Aim";
            fireNotPossible = "rhs_cougar_turnout_1_Aim";
            PlayerStand = "rhs_cougar_turnout_1_Aim";
        };
        class rhs_cougar_turnout_1IdlePistolActions: rhs_cougar_turnout_1Actions {
            Stand = "rhs_cougar_turnout_1_Idle_Pistol";
            upDegree = "ManPosHandGunStand";
            stop = "rhs_cougar_turnout_1_Idle_Pistol";
            stopRelaxed = "rhs_cougar_turnout_1_Idle_Pistol";
            default = "rhs_cougar_turnout_1_Idle_Pistol";
            Combat = "rhs_cougar_turnout_1_Aim_Pistol";
            fireNotPossible = "rhs_cougar_turnout_1_Aim_Pistol";
            PlayerStand = "rhs_cougar_turnout_1_Aim_Pistol";
            die = "rhs_cougar_turnout_1_Die_Pistol";
            Unconscious = "rhs_cougar_turnout_1_Die_Pistol";
            GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
            GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
            GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
            GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
            GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
            GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
        };
        class rhs_cougar_turnout_1ObstructedActions: rhs_cougar_turnout_1Actions {
            stop = "rhs_cougar_turnout_1_Obstructed";
            stopRelaxed = "rhs_cougar_turnout_1_Obstructed";
            default = "rhs_cougar_turnout_1_Obstructed";
            Combat = "rhs_cougar_turnout_1_Aim";
            fireNotPossible = "rhs_cougar_turnout_1_Obstructed";
            PlayerStand = "rhs_cougar_turnout_1_Obstructed";
        };
        class rhs_cougar_turnout_1ObstructedPistolActions: rhs_cougar_turnout_1PistolActions {
            Stand = "rhs_cougar_turnout_1_Obstructed_Pistol";
            stop = "rhs_cougar_turnout_1_Obstructed_Pistol";
            stopRelaxed = "rhs_cougar_turnout_1_Obstructed_Pistol";
            default = "rhs_cougar_turnout_1_Obstructed_Pistol";
            Combat = "rhs_cougar_turnout_1_Aim_Pistol";
            fireNotPossible = "rhs_cougar_turnout_1_Obstructed_Pistol";
            PlayerStand = "rhs_cougar_turnout_1_Obstructed_Pistol";
        };
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class RHS_cougar_Driver: Crew {
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\cougar_Driver";
            interpolateTo[] = {"RHS_cougar_KIA_Driver", 1};
        };
        class RHS_cougar_KIA_Driver: DefaultDie {
            actions = "DeadActions";
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\cougar_KIA_Driver";
            speed = 10000000000;
            terminal = 1;
            soundEnabled = 0;
            looped = 0;
            connectTo[] = {"Unconscious", 0.1};
        };
        class RHS_cougar_Cargo01_FFV: Crew {
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\Cargo";
            interpolateTo[] = {"RHS_m113_KIA_Cargo01_FFV", 1};
            speed = 10000000000;
            canPullTrigger = 0;
        };
        class AmovPercMstpSrasWrflDnon;
        class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon;
        class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon_end;
        class AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon;
        class AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon_end;
        class AmovPercMstpSrasWpstDnon;
        class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon;
        class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon_end;
        class AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon;
        class AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon_end;
        class AmovPercMstpSoptWbinDnon;
        class AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon;
        class AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon_end;
        class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon;
        class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon_end;
        class AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon;
        class AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end;
        class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon;
        class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end;
        class cargo_marksman: AmovPercMstpSrasWrflDnon {};
        class cargo_base;
        class cargo_base_idle;
        class cargo_basepistol;
        class cargo_base_idle_pistol;
        class cargo_basebinoc;
        class rhs_cougar_turnout_1_Aim: cargo_base {
            actions = "rhs_cougar_turnout_1Actions";
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aim.rtm";
            speed = 100000;
            ConnectTo[] = {"rhs_cougar_turnout_1_Aim_ToBinoc", 0.1};
            InterpolateTo[] = {
                "rhs_cougar_turnout_1_Idle",
                0.1,
                "rhs_cougar_turnout_1_toObstructed",
                0.1,
                "rhs_cougar_turnout_1_Aim_ToPistol",
                0.1,
                "rhs_cougar_turnout_1_Idle_Unarmed",
                0.2,
                "rhs_cougar_turnout_1_Die",
                0.1
            };
            variantsAI[] = {"rhs_cougar_turnout_1_Aim_Idling", 1};
            variantsPlayer[] = {};
        };
        class rhs_cougar_turnout_1_Obstructed: cargo_base_idle {
            actions = "rhs_cougar_turnout_1ObstructedActions";
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aim_obstructed.rtm";
            speed = 10000000000;
            weaponLowered = 0;
            leftHandIKCurve[] = {1};
            weaponObstructed = 1;
            interpolationRestart = 1;
            InterpolateTo[] = {
                "rhs_cougar_turnout_1_fromObstructed",
                0.1,
                "rhs_cougar_turnout_1_Die",
                0.1
            };
        };
        class rhs_cougar_turnout_1_fromObstructed: cargo_base_idle {
            actions = "rhs_cougar_turnout_1Actions";
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aim_fromobstructed.rtm";
            speed = -0.15;
            looped = 0;
            weaponLowered = 0;
            leftHandIKCurve[] = {1};
            interpolationRestart = 1;
            reverse = "rhs_cougar_turnout_1_toObstructed";
            minplaytime = 0.95;
            ConnectTo[] = {"rhs_cougar_turnout_1_Aim", 0.1};
            InterpolateTo[] = {"rhs_cougar_turnout_1_Aim", 0.1};
        };
        class rhs_cougar_turnout_1_toObstructed: cargo_base_idle {
            actions = "rhs_cougar_turnout_1ObstructedActions";
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aim_toobstructed.rtm";
            speed = -0.15;
            weaponLowered = 0;
            weaponObstructed = 1;
            looped = 0;
            leftHandIKCurve[] = {1};
            interpolationRestart = 1;
            reverse = "rhs_cougar_turnout_1_fromObstructed";
            minplaytime = 0.95;
            ConnectTo[] = {"rhs_cougar_turnout_1_Obstructed", 0.1};
            InterpolateTo[] = {"rhs_cougar_turnout_1_Obstructed", 0.1};
        };
        class rhs_cougar_turnout_1_Aim_Idling: rhs_cougar_turnout_1_Aim {
            variantsPlayer[] = {};
            headBobStrength = 0;
            soundEnabled = 1;
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aim1.rtm";
            speed = -8;
            ConnectTo[] = {"rhs_cougar_turnout_1_Aim", 0.1};
        };
        class rhs_cougar_turnout_1_Idle: cargo_base_idle {
            actions = "rhs_cougar_turnout_1IdleActions";
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1idle.rtm";
            speed = 100000;
            aiming = "aimingDefault";
            aimingBody = "aimingNo";
            leftHandIKCurve[] = {0};
            InterpolateTo[] = {
                "rhs_cougar_turnout_1_Aim",
                0.1,
                "rhs_cougar_turnout_1_Aim_ToPistol",
                0.1,
                "rhs_cougar_turnout_1_Idle_Unarmed",
                0.2,
                "rhs_cougar_turnout_1_Die",
                0.1
            };
            variantsAI[] = {"rhs_cougar_turnout_1_Idle_Idling", 1};
            variantsPlayer[] = {"rhs_cougar_turnout_1_Idle_Idling", 1};
        };
        class rhs_cougar_turnout_1_Idle_Idling: rhs_cougar_turnout_1_Idle {
            variantsPlayer[] = {};
            headBobStrength = 0;
            soundEnabled = 1;
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1idle1.rtm";
            speed = -10;
            ConnectTo[] = {"rhs_cougar_turnout_1_Idle", 0.1};
        };
        class rhs_cougar_turnout_1_Aim_Pistol: cargo_basepistol {
            actions = "rhs_cougar_turnout_1PistolActions";
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimpistol.rtm";
            aiming = "aimingRifleSlingDefault";
            aimingBody = "aimingUpRifleSlingDefault";
            speed = 100000;
            variantsAI[] = {"rhs_cougar_turnout_1_Aim_Pistol_Idling", 1};
            variantsPlayer[] = {"rhs_cougar_turnout_1_Aim_Pistol_Idling", 1};
            ConnectTo[] = {"rhs_cougar_turnout_1_Aim_Pistol_ToBinoc", 0.1};
            InterpolateTo[] = {
                "rhs_cougar_turnout_1_Aim_FromPistol",
                0.1,
                "rhs_cougar_turnout_1_Idle_Pistol",
                0.2,
                "rhs_cougar_turnout_1_toObstructed_Pistol",
                0.2,
                "rhs_cougar_turnout_1_Idle_Unarmed",
                0.2,
                "rhs_cougar_turnout_1_Die_Pistol",
                0.5
            };
        };
        class rhs_cougar_turnout_1_Aim_Pistol_Idling: rhs_cougar_turnout_1_Aim_Pistol {
            variantsPlayer[] = {};
            headBobStrength = 0;
            soundEnabled = 1;
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimpistol1.rtm";
            speed = -8;
            ConnectTo[] = {"rhs_cougar_turnout_1_Aim_Pistol", 0.1};
        };
        class rhs_cougar_turnout_1_Idle_Pistol: cargo_base_idle_pistol {
            actions = "rhs_cougar_turnout_1IdlePistolActions";
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1idlepistol.rtm";
            speed = 100000;
            aiming = "aimingRifleSlingDefault";
            aimingBody = "aimingUpRifleSlingDefault";
            InterpolateTo[] = {
                "rhs_cougar_turnout_1_Aim_Pistol",
                0.1,
                "rhs_cougar_turnout_1_Aim_FromPistol",
                0.1,
                "rhs_cougar_turnout_1_Idle_Unarmed",
                0.1,
                "rhs_cougar_turnout_1_Die_Pistol",
                0.1
            };
            variantsAI[] = {"rhs_cougar_turnout_1_Idle_Pistol_Idling", 1};
            variantsPlayer[] = {"rhs_cougar_turnout_1_Idle_Pistol_Idling", 1};
        };
        class rhs_cougar_turnout_1_Idle_Pistol_Idling: rhs_cougar_turnout_1_Idle {
            variantsPlayer[] = {};
            headBobStrength = 0;
            soundEnabled = 1;
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1idlepistol1.rtm";
            speed = -10;
            ConnectTo[] = {"rhs_cougar_turnout_1_Idle_Pistol", 0.1};
        };
        class rhs_cougar_turnout_1_Obstructed_Pistol: cargo_base_idle_pistol {
            actions = "rhs_cougar_turnout_1ObstructedPistolActions";
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimpistol_obstructed.rtm";
            speed = 10000000000;
            weaponLowered = 0;
            weaponObstructed = 1;
            interpolationRestart = 1;
            InterpolateTo[] = {
                "rhs_cougar_turnout_1_fromObstructed_Pistol",
                0.1,
                "rhs_cougar_turnout_1_Die",
                0.1
            };
        };
        class rhs_cougar_turnout_1_fromObstructed_Pistol: cargo_base_idle_pistol {
            actions = "rhs_cougar_turnout_1PistolActions";
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimpistol_fromobstructed.rtm";
            speed = -0.15;
            weaponLowered = 0;
            interpolationRestart = 1;
            looped = 0;
            reverse = "rhs_cougar_turnout_1_toObstructed_Pistol";
            minplaytime = 0.95;
            ConnectTo[] = {"rhs_cougar_turnout_1_Aim_Pistol", 0.1};
            InterpolateTo[] = {"rhs_cougar_turnout_1_Aim_Pistol", 0.1};
        };
        class rhs_cougar_turnout_1_toObstructed_Pistol: cargo_base_idle_pistol {
            actions = "rhs_cougar_turnout_1ObstructedPistolActions";
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimpistol_toobstructed.rtm";
            speed = -0.15;
            weaponLowered = 0;
            interpolationRestart = 1;
            looped = 0;
            weaponObstructed = 1;
            reverse = "rhs_cougar_turnout_1_fromObstructed_Pistol";
            minplaytime = 0.95;
            ConnectTo[] = {"rhs_cougar_turnout_1_Obstructed_Pistol", 0.1};
            InterpolateTo[] = {"rhs_cougar_turnout_1_Obstructed_Pistol", 0.1};
        };
        class rhs_cougar_turnout_1_Aim_ToPistol: AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon {
            actions = "rhs_cougar_turnout_1PistolActions";
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimtopistol.rtm";
            speed = 1.2;
            ConnectTo[] = {"rhs_cougar_turnout_1_Aim_ToPistol_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_cougar_turnout_1_Aim_ToPistol_End: AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon_end {
            actions = "rhs_cougar_turnout_1PistolActions";
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimtopistol_end.rtm";
            speed = 1.42857;
            ConnectTo[] = {"rhs_cougar_turnout_1_Aim_Pistol", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_cougar_turnout_1_Aim_FromPistol: AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon {
            actions = "rhs_cougar_turnout_1PistolActions";
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimFrompistol.rtm";
            speed = 1.42857;
            ConnectTo[] = {"rhs_cougar_turnout_1_Aim_FromPistol_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_cougar_turnout_1_Aim_FromPistol_End: AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon_end {
            actions = "rhs_cougar_turnout_1Actions";
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimfrompistol_end.rtm";
            aiming = "aimingDefault";
            aimingBody = "aimingUpDefault";
            speed = 1.2;
            leftHandIKCurve[] = {0, 0, 0.5, 1};
            ConnectTo[] = {"rhs_cougar_turnout_1_Aim", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_cougar_turnout_1_Aim_Binoc: cargo_basebinoc {
            actions = "rhs_cougar_turnout_1BinocActions";
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aim_Binoc.rtm";
            aiming = "aimingDefault";
            aimingBody = "aimingUpDefault";
            speed = -8;
            rightHandIKCurve[] = {1};
            InterpolateTo[] = {
                "rhs_cougar_turnout_1_Aim_FromBinoc",
                0.1,
                "rhs_cougar_turnout_1_Die",
                0.1
            };
        };
        class rhs_cougar_turnout_1_Aim_Pistol_Binoc: cargo_basebinoc {
            actions = "rhs_cougar_turnout_1BinocPistolActions";
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimpistol_Binoc.rtm";
            aiming = "aimingRifleSlingDefault";
            aimingBody = "aimingUpRifleSlingDefault";
            showHandGun = 1;
            speed = -8;
            InterpolateTo[] = {
                "rhs_cougar_turnout_1_Aim_Pistol_FromBinoc",
                0.1,
                "rhs_cougar_turnout_1_Die_Pistol",
                0.1
            };
        };
        class rhs_cougar_turnout_1_Aim_ToBinoc: AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon {
            actions = "rhs_cougar_turnout_1BinocActions";
            aiming = "aimingDefault";
            aimingBody = "aimingUpDefault";
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aim_ToBinoc.rtm";
            speed = 1.57895;
            leftHandIKCurve[] = {0, 1, 0.15, 0};
            ConnectTo[] = {"rhs_cougar_turnout_1_Aim_ToBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_cougar_turnout_1_Aim_ToBinoc_End: AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon_end {
            actions = "rhs_cougar_turnout_1BinocActions";
            aiming = "aimingDefault";
            aimingBody = "aimingUpDefault";
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aim_ToBinoc_end.rtm";
            speed = 1.76471;
            ConnectTo[] = {"rhs_cougar_turnout_1_Aim_Binoc", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_cougar_turnout_1_Aim_FromBinoc: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon {
            actions = "rhs_cougar_turnout_1BinocActions";
            aiming = "aimingDefault";
            aimingBody = "aimingUpDefault";
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aim_frombinoc.rtm";
            speed = 1.57895;
            ConnectTo[] = {"rhs_cougar_turnout_1_Aim_FromBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_cougar_turnout_1_Aim_FromBinoc_End: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon_end {
            actions = "rhs_cougar_turnout_1Actions";
            aiming = "aimingDefault";
            aimingBody = "aimingUpDefault";
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aim_frombinoc_end.rtm";
            speed = 1.76471;
            leftHandIKCurve[] = {0, 0, 0.5, 1};
            ConnectTo[] = {"rhs_cougar_turnout_1_Aim", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_cougar_turnout_1_Aim_Pistol_ToBinoc: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon {
            actions = "rhs_cougar_turnout_1BinocActions";
            showHandGun = 1;
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimpistol_ToBinoc.rtm";
            speed = 1.76471;
            ConnectTo[] = {"rhs_cougar_turnout_1_Aim_Pistol_ToBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_cougar_turnout_1_Aim_Pistol_ToBinoc_End: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end {
            actions = "rhs_cougar_turnout_1BinocActions";
            showHandGun = 1;
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimpistol_ToBinoc_end.rtm";
            speed = 1.76471;
            ConnectTo[] = {"rhs_cougar_turnout_1_Aim_Pistol_Binoc", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_cougar_turnout_1_Aim_Pistol_FromBinoc: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon {
            actions = "rhs_cougar_turnout_1BinocActions";
            showHandGun = 1;
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimpistol_frombinoc.rtm";
            speed = 1.57895;
            ConnectTo[] = {"rhs_cougar_turnout_1_Aim_Pistol_FromBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_cougar_turnout_1_Aim_Pistol_FromBinoc_End: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end {
            actions = "rhs_cougar_turnout_1Actions";
            showHandGun = 1;
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimpistol_frombinoc_end.rtm";
            speed = 1.76471;
            ConnectTo[] = {"rhs_cougar_turnout_1_Aim_Pistol", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_cougar_turnout_1_Idle_Unarmed: cargo_base_idle {
            actions = "rhs_cougar_turnout_1IdleUnarmedActions";
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1idleunarmed.rtm";
            speed = 100000;
            aiming = "aimingNo";
            aimingBody = "aimingNo";
            weaponIK = 0;
            InterpolateTo[] = {
                "rhs_cougar_turnout_1_Aim_FromPistol_End",
                0.1,
                "rhs_cougar_turnout_1_Aim_ToPistol_End",
                0.1,
                "rhs_cougar_turnout_1_Aim_Unarmed_ToBinoc",
                0.1,
                "rhs_cougar_turnout_1_Die_Pistol",
                0.1
            };
            variantsAI[] = {"rhs_cougar_turnout_1_Idle_Unarmed_Idling", 1};
            variantsPlayer[] = {"rhs_cougar_turnout_1_Idle_Unarmed_Idling", 1};
        };
        class rhs_cougar_turnout_1_Idle_Unarmed_Idling: rhs_cougar_turnout_1_Idle {
            variantsPlayer[] = {};
            headBobStrength = 0;
            soundEnabled = 1;
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1idleunarmed1.rtm";
            speed = -10;
            ConnectTo[] = {"rhs_cougar_turnout_1_Idle_Unarmed", 0.1};
        };
        class rhs_cougar_turnout_1_Aim_Unarmed_Binoc: cargo_basebinoc {
            actions = "rhs_cougar_turnout_1BinocUnarmedActions";
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimUnarmed_Binoc.rtm";
            aiming = "aimingRifleSlingDefault";
            aimingBody = "aimingUpRifleSlingDefault";
            showHandGun = 0;
            speed = -8;
            InterpolateTo[] = {
                "rhs_cougar_turnout_1_Aim_Unarmed_FromBinoc",
                0.1,
                "rhs_cougar_turnout_1_Die_Pistol",
                0.1
            };
        };
        class rhs_cougar_turnout_1_Aim_Unarmed_ToBinoc: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon {
            actions = "rhs_cougar_turnout_1BinocUnarmedActions";
            showHandGun = 0;
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimUnarmed_ToBinoc.rtm";
            speed = 1.76471;
            ConnectTo[] = {"rhs_cougar_turnout_1_Aim_Unarmed_ToBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_cougar_turnout_1_Aim_Unarmed_ToBinoc_End: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end {
            actions = "rhs_cougar_turnout_1BinocUnarmedActions";
            showHandGun = 0;
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimUnarmed_ToBinoc_end.rtm";
            speed = 1.76471;
            ConnectTo[] = {"rhs_cougar_turnout_1_Aim_Unarmed_Binoc", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_cougar_turnout_1_Aim_Unarmed_FromBinoc: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon {
            actions = "rhs_cougar_turnout_1BinocUnarmedActions";
            showHandGun = 0;
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimUnarmed_frombinoc.rtm";
            speed = 1.57895;
            ConnectTo[] = {"rhs_cougar_turnout_1_Aim_Unarmed_FromBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_cougar_turnout_1_Aim_Unarmed_FromBinoc_End: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end {
            actions = "rhs_cougar_turnout_1IdleUnarmedActions";
            showHandGun = 0;
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimUnarmed_frombinoc_end.rtm";
            speed = 1.76471;
            ConnectTo[] = {"rhs_cougar_turnout_1_Idle_Unarmed", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_cougar_turnout_1_Die: DefaultDie {
            actions = "rhs_cougar_turnout_1DeadActions";
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1die.rtm";
            speed = 1;
            looped = 0;
            terminal = 1;
            ragdoll = 1;
            ConnectTo[] = {"Unconscious", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_cougar_turnout_1_Die_Pistol: rhs_cougar_turnout_1_Die {
            file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1diepistol.rtm";
            actions = "rhs_cougar_turnout_1DeadPistolActions";
            showHandGun = 1;
        };
    };
    class BlendAnims: BlendAnims {
        crewShake_cougar[] = {
            "weapon",
            0,
            "Camera",
            0.5,
            "launcher",
            0.5,
            "Head",
            0.5,
            "Neck",
            0.5,
            "Neck1",
            0.5,
            "LeftShoulder",
            0.45,
            "LeftArm",
            0.35,
            "LeftArmRoll",
            0.25,
            "LeftForeArm",
            0.15,
            "RightShoulder",
            0.45,
            "RightArm",
            0.35,
            "RightArmRoll",
            0.25,
            "RightForeArm",
            0.315,
            "spine3",
            0.475,
            "spine2",
            0.45,
            "spine1",
            0.4,
            "spine",
            0.35,
            "pelvis",
            0.2,
            "LeftUpLeg",
            0.1,
            "LeftUpLegRoll",
            0.25,
            "LeftLeg",
            0.1,
            "RightUpLeg",
            0.1,
            "RightUpLegRoll",
            0.25,
            "RightLeg",
            0.1
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
    };
    class MRAP_01_base_F: Car_F {
        class EventHandlers;
    };
    class rhsusf_Cougar_base: MRAP_01_base_F {
        dlc = "RHS_USAF";
        category = "Car";
        side = 1;
        editorSubcategory = "rhs_EdSubcat_mrap";
        vehicleClass = "rhs_vehclass_MRAP";
        insideSoundCoef = 0.4;
        displayName = "Cougar";
        unitInfoType = "RscUnitInfo";
        weapons[] = {"TruckHorn2", "rhsusf_weap_duke"};
        magazines[] = {"rhsusf_mag_duke"};
        model = "\rhsusf\addons\rhsusf_cougar\CGRCAT1A2";
        picture = "\rhsusf\addons\rhsusf_cougar\pictures\rhs_cgrcat1a2_unarmed_pic_ca.paa";
        Icon = "\a3\soft_f_beta\Truck_01\Data\UI\map_truck_01_CA.paa";
        mapSize = 12.02;
        transportMaxBackpacks = 25;
        transportSoldier = 4;
        destrType = "DestructDefault";
        crewExplosionProtection = 1;
        camShakeCoef = 0.3;
        dustFrontLeftPos = "wheel_1_1_bound";
        dustFrontRightPos = "wheel_2_1_bound";
        dustBackLeftPos = "wheel_1_2_bound";
        dustBackRightPos = "wheel_2_2_bound";
        tf_hasLRradio_api = 1;
        selectionBrakeLights = "light_brake";
        selectionBackLights = "light_drive";
        driverAction = "RHS_cougar_Driver";
        driverInAction = "RHS_cougar_Driver";
        driverLeftHandAnimName = "drivewheel";
        driverRightHandAnimName = "drivewheel";
        cargoAction[] = {
            "passenger_APC_narrow_generic01_ns",
            "passenger_APC_generic04_ns",
            "passenger_APC_generic04_ns",
            "passenger_APC_generic03_ns"
        };
        cargoProxyIndexes[] = {1, 2, 3, 5};
        getInProxyOrder[] = {1, 2, 3, 4, 5};
        memoryPointsGetInCargo[] = {"pos codriver", "pos cargo"};
        memoryPointsGetInCargoDir[] = {"pos codriver dir", "pos cargo dir"};
        getInAction = "GetInMRAP_01";
        getOutAction = "GetOutMRAP_01";
        driverDoor = "DoorL";
        cargoDoors[] = {"DoorR", "DoorB"};
        viewDriverInExternal = 1;
        forceHideDriver = 1;
        hiddenSelections[] = {"camo", "camo1", "camo2", "pintle"};
        class textureSources {
            class rhs_desert {
                displayName = "Desert";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_cougar\data\CGR_Body_CO.paa",
                    "rhsusf\addons\rhsusf_cougar\data\CGR_Labels_CA.paa",
                    "rhsusf\addons\rhsusf_rg33l\data\MCTAGS_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
                };
                factions[] = {};
            };
            class rhs_woodland {
                displayName = "Woodland";
                author = "$STR_RHSUSF_AUTHOR_FULL";
                textures[] = {
                    "rhsusf\addons\rhsusf_cougar\data\CGR_Body_WD_CO.paa",
                    "rhsusf\addons\rhsusf_cougar\data\CGR_Labels_CA.paa",
                    "rhsusf\addons\rhsusf_rg33l\data\MCTAGS_WD_CO.paa",
                    "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
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
                gunnerAction = "rhs_cougar_turnout_1";
                gunnerInAction = "RHS_cougar_Cargo01_FFV";
                animationSourceHatch = "hatch1";
                enabledByAnimationSource = "hatch1_door";
                isPersonTurret = 2;
                gunnerGetInAction = "GetInMantis";
                gunnerGetOutAction = "GetOutMantis";
                memoryPointsGetInGunner = "pos cargoFFV1";
                memoryPointsGetInGunnerDir = "pos cargoFFV1 dir";
                rhs_hatch_control = 1;
                gunnerName = "Passenger (Rear Hatch)";
                gunnerCompartments = "Compartment1";
                gunnerDoor = "DoorB";
                memoryPointGunnerOptics = "";
                selectionFireAnim = "";
                canHideGunner = 1;
                commanding = -2;
                LODTurnedIn = 1200;
                LODTurnedOut = 0;
                proxyIndex = 4;
                maxElev = 45;
                minElev = -35;
                maxTurn = 61;
                minTurn = -65;
                class TurnIn {
                    limitsArrayTop[] = {{0, 0}, {0, 0}};
                    limitsArrayBottom[] = {{0, 0}, {0, 0}};
                };
                class TurnOut {
                    limitsArrayTop[] = {{45, -90.1745}, {44.9894, 80.629}};
                    limitsArrayBottom[] = {
                        {5.464, -89.894},
                        {-9.4602, -71.7306},
                        {-7.5523, -40.9866},
                        {-16.3809, -30.7844},
                        {-7.1172, -30.2764},
                        {-13.0122, -5.9314},
                        {-12.7133, 26.3332},
                        {-23.1407, 58.6419},
                        {-8.5688, 77.4948},
                        {-7.292, 80.6933}
                    };
                };
                class Hitpoints {};
            };
        };
        class AnimationSources {
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
            class HitLFWheel {
                source = "Hit";
                hitpoint = "HitLFWheel";
                raw = 1;
            };
            class HitRFWheel: HitLFWheel {
                hitpoint = "HitRFWheel";
            };
            class HitLBWheel: HitLFWheel {
                hitpoint = "HitLF2Wheel";
            };
            class HitRBWheel: HitLFWheel {
                hitpoint = "HitRF2Wheel";
            };
            class HitLF2Wheel: HitLFWheel {
                hitpoint = "HitLBWheel";
            };
            class HitRF2Wheel: HitLFWheel {
                hitpoint = "HitRBWheel";
            };
            class HitLMWheel: HitLFWheel {
                hitpoint = "HitLMWheel";
            };
            class HitRMWheel: HitLFWheel {
                hitpoint = "HitRMWheel";
            };
            class HitGlass1 {
                source = "Hit";
                hitpoint = "HitGlass1";
                raw = 1;
            };
            class HitGlass2 {
                source = "Hit";
                hitpoint = "HitGlass2";
                raw = 1;
            };
            class HitGlass3 {
                source = "Hit";
                hitpoint = "HitGlass3";
                raw = 1;
            };
            class HitGlass4 {
                source = "Hit";
                hitpoint = "HitGlass4";
                raw = 1;
            };
            class HitGlass5 {
                source = "Hit";
                hitpoint = "HitGlass5";
                raw = 1;
            };
            class HitGlass6 {
                source = "Hit";
                hitpoint = "HitGlass6";
                raw = 1;
            };
            class HitGlass7 {
                source = "Hit";
                hitpoint = "HitGlass7";
                raw = 1;
            };
            class HitGlass8 {
                source = "Hit";
                hitpoint = "HitGlass8";
                raw = 1;
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
                armor = -200;
                passThrough = 1;
                name = "karoserie";
                visual = "zbytek";
                minimalhit = -45;
                explosionShielding = 0.01;
                radius = 0.22;
            };
            class HitFuel {
                armor = -50;
                material = -1;
                name = "Hit_Fuel";
                armorComponent = "Hit_Fuel_L";
                visual = "-";
                explosionShielding = 0.5;
                passThrough = 0;
            };
            class HitFuel2: HitFuel {
                armorComponent = "Hit_Fuel_R";
            };
            class HitEngine {
                armor = -50;
                material = -1;
                name = "Hit_Engine";
                armorComponent = "Hit_Engine";
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
            class HitGlass1 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass1";
                name = "glass1";
                visual = "glass1";
            };
            class HitGlass2 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass2";
                name = "glass2";
                visual = "glass2";
            };
            class HitGlass3 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass3";
                name = "glass3";
                visual = "glass3";
            };
            class HitGlass4 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass4";
                name = "glass4";
                visual = "glass4";
            };
            class HitGlass5 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass5";
                name = "glass5";
                visual = "glass5";
            };
            class HitGlass6 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass6";
                name = "glass6";
                visual = "glass6";
            };
            class HitGlass7 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass7";
                name = "glass7";
                visual = "glass7";
            };
            class HitGlass8 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass8";
                name = "glass8";
                visual = "glass8";
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
        antiRollbarForceCoef = 26.5;
        antiRollbarForceLimit = 26.5;
        antiRollbarSpeedMin = 10;
        antiRollbarSpeedMax = 75;
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
                maxCompression = 0.12;
                maxDroop = 0.12;
                sprungMass = -1;
                springStrength = 405000;
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
        };
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_cougar\data\CGR_Body.rvmat",
                "rhsusf\addons\rhsusf_cougar\data\CGR_Body_dam.rvmat",
                "rhsusf\addons\rhsusf_cougar\data\CGR_destruction.rvmat",
                "rhsusf\addons\rhsusf_cougar\data\CGR_Int.rvmat",
                "rhsusf\addons\rhsusf_cougar\data\CGR_Int_dam.rvmat",
                "rhsusf\addons\rhsusf_cougar\data\CGR_destruction.rvmat",
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
            class RHSUSF_EventHandlers {
                postInit = "_this call rhs_fnc_reapplyTextures";
                seatSwitched = "if(not(_this select 1 in [driver (_this select 0),gunner (_this select 0)]))then{ (_this select 1) action ['turnIn',_this select 0]}";
                turnIn = "([0] + _this)  call rhsusf_fnc_turretAction;";
                turnOut = "([1] + _this) call rhsusf_fnc_turretAction;";
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
    };
    class rhsusf_CGRCAT1A2_usmc_d: rhsusf_Cougar_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_CGRCAT1A2_usmc_d.paa";
        displayName = "$STR_RHS_CGR_NAME";
        picture = "\rhsusf\addons\rhsusf_cougar\pictures\rhs_cgrcat1a2_unarmed_pic_ca.paa";
        scope = 2;
        accuracy = 0.5;
        faction = "rhs_faction_usmc_d";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_cougar\data\CGR_Body_CO.paa",
            "rhsusf\addons\rhsusf_cougar\data\CGR_Labels_CA.paa",
            "rhsusf\addons\rhsusf_rg33l\data\MCTAGS_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
        };
    };
    class rhsusf_cougar_GPK_base: rhsusf_Cougar_base {
        class AnimationSources: AnimationSources {
            class GunnerAdjust_source {
                source = "user";
                animPeriod = 1;
                initPhase = 0.25;
            };
            class HitGlass9 {
                source = "Hit";
                hitpoint = "HitGlass9";
                raw = 1;
            };
            class HitGlass10 {
                source = "Hit";
                hitpoint = "HitGlass10";
                raw = 1;
            };
            class HitGlass11 {
                source = "Hit";
                hitpoint = "HitGlass11";
                raw = 1;
            };
            class HitGlass12 {
                source = "Hit";
                hitpoint = "HitGlass12";
                raw = 1;
            };
            class HitGlass13 {
                source = "Hit";
                hitpoint = "HitGlass13";
                raw = 1;
            };
            class HitGlass14 {
                source = "Hit";
                hitpoint = "HitGlass14";
                raw = 1;
            };
        };
        class Hitpoints: HitPoints {
            class HitGlass9 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass9";
                name = "glass9";
                visual = "glass9";
            };
            class HitGlass10 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass10";
                name = "glass10";
                visual = "glass10";
            };
            class HitGlass11 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass11";
                name = "glass11";
                visual = "glass11";
            };
            class HitGlass12 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass12";
                name = "glass12";
                visual = "glass12";
            };
            class HitGlass13 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass13";
                name = "glass13";
                visual = "glass13";
            };
            class HitGlass14 {
                armor = -70;
                explosionShielding = 0.4;
                passThrough = 0;
                minimalHit = -0.1;
                radius = 0.2;
                armorComponent = "glass14";
                name = "glass14";
                visual = "glass14";
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
    class rhsusf_CGRCAT1A2_M2_usmc_d: rhsusf_cougar_GPK_base {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_CGRCAT1A2_M2_usmc_d.paa";
        displayName = "$STR_RHS_CGR_M2_NAME";
        picture = "\rhsusf\addons\rhsusf_cougar\pictures\rhs_cgrcat1a2_armed_pic_ca.paa";
        model = "\rhsusf\addons\rhsusf_cougar\CGRCAT1A2_M2";
        faction = "rhs_faction_usmc_d";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_cougar\data\CGR_Body_CO.paa",
            "rhsusf\addons\rhsusf_cougar\data\CGR_Labels_CA.paa",
            "rhsusf\addons\rhsusf_rg33l\data\MCTAGS_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
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
                gunnerAction = "RHS_MCTAGS_Gunner03";
                gunnerInAction = "RHS_MCTAGS_Gunner03_in";
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
                    limitsArrayTop[] = {{45, -90.1745}, {44.9894, 80.629}};
                    limitsArrayBottom[] = {
                        {5.464, -89.894},
                        {-9.4602, -71.7306},
                        {-7.5523, -40.9866},
                        {-16.3809, -30.7844},
                        {-7.1172, -30.2764},
                        {-13.0122, -5.9314},
                        {-12.7133, 26.3332},
                        {-23.1407, 58.6419},
                        {-8.5688, 77.4948},
                        {-7.292, 80.6933}
                    };
                };
            };
        };
    };
    class rhsusf_CGRCAT1A2_Mk19_usmc_d: rhsusf_CGRCAT1A2_M2_usmc_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_CGRCAT1A2_Mk19_usmc_d.paa";
        displayName = "$STR_RHS_CGR_MK19_NAME";
        model = "\rhsusf\addons\rhsusf_cougar\CGRCAT1A2_MK19";
        faction = "rhs_faction_usmc_d";
        crew = "rhsusf_usmc_marpat_d_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_cougar\data\CGR_Body_CO.paa",
            "rhsusf\addons\rhsusf_cougar\data\CGR_Labels_CA.paa",
            "rhsusf\addons\rhsusf_rg33l\data\MCTAGS_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
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
        };
    };
    class rhsusf_CGRCAT1A2_usmc_wd: rhsusf_CGRCAT1A2_usmc_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_CGRCAT1A2_usmc_wd.paa";
        displayName = "$STR_RHS_CGR_NAME";
        faction = "rhs_faction_usmc_wd";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_cougar\data\CGR_Body_WD_CO.paa",
            "rhsusf\addons\rhsusf_cougar\data\CGR_Labels_CA.paa",
            "rhsusf\addons\rhsusf_rg33l\data\MCTAGS_WD_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
        };
    };
    class rhsusf_CGRCAT1A2_M2_usmc_wd: rhsusf_CGRCAT1A2_M2_usmc_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_CGRCAT1A2_M2_usmc_wd.paa";
        displayName = "$STR_RHS_CGR_M2_NAME";
        faction = "rhs_faction_usmc_wd";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_cougar\data\CGR_Body_WD_CO.paa",
            "rhsusf\addons\rhsusf_cougar\data\CGR_Labels_CA.paa",
            "rhsusf\addons\rhsusf_rg33l\data\MCTAGS_WD_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
        };
    };
    class rhsusf_CGRCAT1A2_Mk19_usmc_wd: rhsusf_CGRCAT1A2_Mk19_usmc_d {
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_CGRCAT1A2_Mk19_usmc_wd.paa";
        displayName = "$STR_RHS_CGR_MK19_NAME";
        faction = "rhs_faction_usmc_wd";
        crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        HiddenSelectionsTextures[] = {
            "rhsusf\addons\rhsusf_cougar\data\CGR_Body_WD_CO.paa",
            "rhsusf\addons\rhsusf_cougar\data\CGR_Labels_CA.paa",
            "rhsusf\addons\rhsusf_rg33l\data\MCTAGS_WD_CO.paa",
            "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
        };
    };
};
