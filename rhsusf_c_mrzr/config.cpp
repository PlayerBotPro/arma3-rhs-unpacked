class CfgPatches {
    class rhsusf_c_mrzr {
        units[] = {
            "rhsusf_mrzr4_d",
            "rhsusf_mrzr4_d_mud",
            "rhsusf_mrzr4_w",
            "rhsusf_mrzr4_w_mud"
        };
        weapons[] = {};
        requiredVersion = "REQUIRED_VERSION";
        requiredAddons[] = {"rhsusf_main", "rhsusf_c_troops"};
        name = "MRZR";
        author = "$STR_RHSUSF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
    };
};
class DefaultEventhandlers;
class CfgMovesBasic {
    class DefaultDie;
    class BlendAnims;
    class ManActions {
        rhs_mrzr_driver = "rhs_mrzr_driver";
        rhs_mrzr_passenger = "rhs_mrzr_passenger_Idle";
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
        class rhs_mrzr_passengerActions: FFV_BaseActions {
            upDegree = "ManPosCombat";
            stop = "rhs_mrzr_passenger_Aim";
            stopRelaxed = "rhs_mrzr_passenger_Aim";
            default = "rhs_mrzr_passenger_Aim";
            Stand = "rhs_mrzr_passenger_Idle";
            HandGunOn = "rhs_mrzr_passenger_Aim_Pistol";
            PrimaryWeapon = "rhs_mrzr_passenger_Aim";
            Binoculars = "rhs_mrzr_passenger_Aim_Binoc";
            die = "rhs_mrzr_passenger_Die";
            Unconscious = "rhs_mrzr_passenger_Die";
            civil = "rhs_mrzr_passenger_Idle_Unarmed";
            Obstructed = "rhs_mrzr_passenger_Obstructed";
        };
        class rhs_mrzr_passengerIdleUnarmedActions: FFV_BaseActions {
            upDegree = "ManPosNoWeapon";
            stop = "rhs_mrzr_passenger_Idle_Unarmed";
            stopRelaxed = "rhs_mrzr_passenger_Idle_Unarmed";
            default = "rhs_mrzr_passenger_Idle_Unarmed";
            Stand = "rhs_mrzr_passenger_Idle_Unarmed";
            HandGunOn = "rhs_mrzr_passenger_Aim_Pistol";
            PrimaryWeapon = "rhs_mrzr_passenger_Aim";
            Binoculars = "rhs_mrzr_passenger_Aim_Unarmed_Binoc";
            die = "rhs_mrzr_passenger_Die_Pistol";
            Unconscious = "rhs_mrzr_passenger_Die_Pistol";
            civil = "rhs_mrzr_passenger_Idle_Unarmed";
            throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
            GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
            GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
            GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
            GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
            GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
            GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
        };
        class rhs_mrzr_passengerDeadActions: FFV_BaseActions {
            stop = "rhs_mrzr_passenger_Die";
            default = "rhs_mrzr_passenger_Die";
            die = "rhs_mrzr_passenger_Die";
            Unconscious = "rhs_mrzr_passenger_Die";
        };
        class rhs_mrzr_passengerDeadPistolActions: FFV_BaseActions {
            stop = "rhs_mrzr_passenger_Die_Pistol";
            default = "rhs_mrzr_passenger_Die_Pistol";
            die = "rhs_mrzr_passenger_Die_Pistol";
            Unconscious = "rhs_mrzr_passenger_Die_Pistol";
        };
        class rhs_mrzr_passengerPistolActions: rhs_mrzr_passengerActions {
            upDegree = "ManPosHandGunStand";
            stop = "rhs_mrzr_passenger_Aim_Pistol";
            stopRelaxed = "rhs_mrzr_passenger_Aim_Pistol";
            default = "rhs_mrzr_passenger_Aim_Pistol";
            Binoculars = "rhs_mrzr_passenger_Aim_Pistol_Binoc";
            throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
            Stand = "rhs_mrzr_passenger_Idle_Pistol";
            die = "rhs_mrzr_passenger_Die_Pistol";
            Unconscious = "rhs_mrzr_passenger_Die_Pistol";
            Obstructed = "rhs_mrzr_passenger_Obstructed_Pistol";
            GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
            GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
            GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
            GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
            GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
            GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
        };
        class rhs_mrzr_passengerBinocActions: rhs_mrzr_passengerActions {
            binocOn = "";
            upDegree = "ManPosBinocStand";
            stop = "rhs_mrzr_passenger_Aim_Binoc";
            stopRelaxed = "rhs_mrzr_passenger_Aim_Binoc";
            default = "rhs_mrzr_passenger_Aim_Binoc";
        };
        class rhs_mrzr_passengerBinocPistolActions: rhs_mrzr_passengerBinocActions {
            stop = "rhs_mrzr_passenger_Aim_Pistol_Binoc";
            stopRelaxed = "rhs_mrzr_passenger_Aim_Pistol_Binoc";
            default = "rhs_mrzr_passenger_Aim_Pistol_Binoc";
            die = "rhs_mrzr_passenger_Die_Pistol";
            Unconscious = "rhs_mrzr_passenger_Die_Pistol";
            GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
            GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
            GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
            GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
            GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
            GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
        };
        class rhs_mrzr_passengerBinocUnarmedActions: rhs_mrzr_passengerBinocActions {
            stop = "rhs_mrzr_passenger_Aim_Unarmed_Binoc";
            stopRelaxed = "rhs_mrzr_passenger_Aim_Unarmed_Binoc";
            default = "rhs_mrzr_passenger_Aim_Unarmed_Binoc";
            die = "rhs_mrzr_passenger_Die_Pistol";
            Unconscious = "rhs_mrzr_passenger_Die_Pistol";
            GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
            GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
            GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
            GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
            GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
            GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
        };
        class rhs_mrzr_passengerIdleActions: rhs_mrzr_passengerActions {
            upDegree = "ManPosStand";
            stop = "rhs_mrzr_passenger_Idle";
            stopRelaxed = "rhs_mrzr_passenger_Idle";
            default = "rhs_mrzr_passenger_Idle";
            Combat = "rhs_mrzr_passenger_Aim";
            fireNotPossible = "rhs_mrzr_passenger_Aim";
            PlayerStand = "rhs_mrzr_passenger_Aim";
        };
        class rhs_mrzr_passengerIdlePistolActions: rhs_mrzr_passengerActions {
            Stand = "rhs_mrzr_passenger_Idle_Pistol";
            upDegree = "ManPosHandGunStand";
            stop = "rhs_mrzr_passenger_Idle_Pistol";
            stopRelaxed = "rhs_mrzr_passenger_Idle_Pistol";
            default = "rhs_mrzr_passenger_Idle_Pistol";
            Combat = "rhs_mrzr_passenger_Aim_Pistol";
            fireNotPossible = "rhs_mrzr_passenger_Aim_Pistol";
            PlayerStand = "rhs_mrzr_passenger_Aim_Pistol";
            die = "rhs_mrzr_passenger_Die_Pistol";
            Unconscious = "rhs_mrzr_passenger_Die_Pistol";
            GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
            GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
            GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
            GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
            GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
            GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
        };
        class rhs_mrzr_passengerObstructedActions: rhs_mrzr_passengerActions {
            stop = "rhs_mrzr_passenger_Obstructed";
            stopRelaxed = "rhs_mrzr_passenger_Obstructed";
            default = "rhs_mrzr_passenger_Obstructed";
            Combat = "rhs_mrzr_passenger_Aim";
            fireNotPossible = "rhs_mrzr_passenger_Obstructed";
            PlayerStand = "rhs_mrzr_passenger_Obstructed";
        };
        class rhs_mrzr_passengerObstructedPistolActions: rhs_mrzr_passengerPistolActions {
            Stand = "rhs_mrzr_passenger_Obstructed_Pistol";
            stop = "rhs_mrzr_passenger_Obstructed_Pistol";
            stopRelaxed = "rhs_mrzr_passenger_Obstructed_Pistol";
            default = "rhs_mrzr_passenger_Obstructed_Pistol";
            Combat = "rhs_mrzr_passenger_Aim_Pistol";
            fireNotPossible = "rhs_mrzr_passenger_Obstructed_Pistol";
            PlayerStand = "rhs_mrzr_passenger_Obstructed_Pistol";
        };
    };
};
class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
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
        class cargo_base: cargo_marksman {
            variantsPlayer[] = {};
            variantsAI[] = {};
        };
        class cargo_base_idle: cargo_base {
            weaponLowered = 1;
            enableOptics = 0;
            disableWeapons = 1;
            disableWeaponsLong = 1;
            variantsPlayer[] = {};
            variantsAI[] = {};
        };
        class cargo_basepistol: AmovPercMstpSrasWpstDnon {
            variantsPlayer[] = {};
            variantsAI[] = {};
        };
        class cargo_base_idle_pistol: cargo_basepistol {
            weaponLowered = 1;
            enableOptics = 0;
            disableWeapons = 1;
            disableWeaponsLong = 1;
        };
        class cargo_basebinoc: AmovPercMstpSoptWbinDnon {
            weaponLowered = 0;
            canPullTrigger = 1;
        };
        class rhs_mrzr_passenger_Aim: cargo_base {
            actions = "rhs_mrzr_passengerActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aim.rtm";
            speed = 100000;
            ConnectTo[] = {"rhs_mrzr_passenger_Aim_ToBinoc", 0.1};
            InterpolateTo[] = {
                "rhs_mrzr_passenger_Idle",
                0.1,
                "rhs_mrzr_passenger_toObstructed",
                0.1,
                "rhs_mrzr_passenger_Aim_ToPistol",
                0.1,
                "rhs_mrzr_passenger_Idle_Unarmed",
                0.2,
                "rhs_mrzr_passenger_Die",
                0.1
            };
            variantsAI[] = {"rhs_mrzr_passenger_Aim_Idling", 1};
            variantsPlayer[] = {"rhs_mrzr_passenger_Aim_Idling", 1};
        };
        class rhs_mrzr_passenger_Obstructed: cargo_base_idle {
            actions = "rhs_mrzr_passengerObstructedActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aim_obstructed.rtm";
            speed = 10000000000;
            weaponLowered = 0;
            leftHandIKCurve[] = {1};
            weaponObstructed = 1;
            interpolationRestart = 1;
            InterpolateTo[] = {
                "rhs_mrzr_passenger_fromObstructed",
                0.1,
                "rhs_mrzr_passenger_Die",
                0.1
            };
        };
        class rhs_mrzr_passenger_fromObstructed: cargo_base_idle {
            actions = "rhs_mrzr_passengerActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aim_fromobstructed.rtm";
            speed = -0.15;
            looped = 0;
            weaponLowered = 0;
            leftHandIKCurve[] = {1};
            interpolationRestart = 1;
            reverse = "rhs_mrzr_passenger_toObstructed";
            minplaytime = 0.95;
            ConnectTo[] = {"rhs_mrzr_passenger_Aim", 0.1};
            InterpolateTo[] = {"rhs_mrzr_passenger_Aim", 0.1};
        };
        class rhs_mrzr_passenger_toObstructed: cargo_base_idle {
            actions = "rhs_mrzr_passengerObstructedActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aim_toobstructed.rtm";
            speed = -0.15;
            weaponLowered = 0;
            weaponObstructed = 1;
            looped = 0;
            leftHandIKCurve[] = {1};
            interpolationRestart = 1;
            reverse = "rhs_mrzr_passenger_fromObstructed";
            minplaytime = 0.95;
            ConnectTo[] = {"rhs_mrzr_passenger_Obstructed", 0.1};
            InterpolateTo[] = {"rhs_mrzr_passenger_Obstructed", 0.1};
        };
        class rhs_mrzr_passenger_Aim_Idling: rhs_mrzr_passenger_Aim {
            variantsPlayer[] = {};
            headBobStrength = 0;
            soundEnabled = 1;
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aim1.rtm";
            speed = -8;
            ConnectTo[] = {"rhs_mrzr_passenger_Aim", 0.1};
        };
        class rhs_mrzr_passenger_Idle: cargo_base_idle {
            actions = "rhs_mrzr_passengerIdleActions";
            file = "\rhsusf\addons\rhsusf_mrzr\data\anims\rhs_mrzr_passengeraim_idle.rtm";
            speed = 100000;
            aiming = "aimingDefault";
            aimingBody = "aimingNo";
            leftHandIKCurve[] = {1};
            InterpolateTo[] = {
                "rhs_mrzr_passenger_Aim",
                0.1,
                "rhs_mrzr_passenger_Aim_ToPistol",
                0.1,
                "rhs_mrzr_passenger_Idle_Unarmed",
                0.2,
                "rhs_mrzr_passenger_Die",
                0.1
            };
            variantsAI[] = {"rhs_mrzr_passenger_Idle_Idling", 1};
            variantsPlayer[] = {"rhs_mrzr_passenger_Idle_Idling", 1};
        };
        class rhs_mrzr_passenger_Idle_Idling: rhs_mrzr_passenger_Idle {
            variantsPlayer[] = {};
            headBobStrength = 0;
            soundEnabled = 1;
            file = "\rhsusf\addons\rhsusf_mrzr\data\anims\rhs_mrzr_passengeraim_idle.rtm";
            speed = -10;
            ConnectTo[] = {"rhs_mrzr_passenger_Idle", 0.1};
        };
        class rhs_mrzr_passenger_Aim_Pistol: cargo_basepistol {
            actions = "rhs_mrzr_passengerPistolActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimpistol.rtm";
            aiming = "aimingRifleSlingDefault";
            aimingBody = "aimingUpRifleSlingDefault";
            speed = 100000;
            variantsAI[] = {"rhs_mrzr_passenger_Aim_Pistol_Idling", 1};
            variantsPlayer[] = {"rhs_mrzr_passenger_Aim_Pistol_Idling", 1};
            ConnectTo[] = {"rhs_mrzr_passenger_Aim_Pistol_ToBinoc", 0.1};
            InterpolateTo[] = {
                "rhs_mrzr_passenger_Aim_FromPistol",
                0.1,
                "rhs_mrzr_passenger_Idle_Pistol",
                0.2,
                "rhs_mrzr_passenger_toObstructed_Pistol",
                0.2,
                "rhs_mrzr_passenger_Idle_Unarmed",
                0.2,
                "rhs_mrzr_passenger_Die_Pistol",
                0.5
            };
        };
        class rhs_mrzr_passenger_Aim_Pistol_Idling: rhs_mrzr_passenger_Aim_Pistol {
            variantsPlayer[] = {};
            headBobStrength = 0;
            soundEnabled = 1;
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimpistol1.rtm";
            speed = -8;
            ConnectTo[] = {"rhs_mrzr_passenger_Aim_Pistol", 0.1};
        };
        class rhs_mrzr_passenger_Idle_Pistol: cargo_base_idle_pistol {
            actions = "rhs_mrzr_passengerIdlePistolActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2idlepistol.rtm";
            speed = 100000;
            aiming = "aimingRifleSlingDefault";
            aimingBody = "aimingUpRifleSlingDefault";
            InterpolateTo[] = {
                "rhs_mrzr_passenger_Aim_Pistol",
                0.1,
                "rhs_mrzr_passenger_Aim_FromPistol",
                0.1,
                "rhs_mrzr_passenger_Idle_Unarmed",
                0.1,
                "rhs_mrzr_passenger_Die_Pistol",
                0.1
            };
            variantsAI[] = {"rhs_mrzr_passenger_Idle_Pistol_Idling", 1};
            variantsPlayer[] = {"rhs_mrzr_passenger_Idle_Pistol_Idling", 1};
        };
        class rhs_mrzr_passenger_Idle_Pistol_Idling: rhs_mrzr_passenger_Idle {
            variantsPlayer[] = {};
            headBobStrength = 0;
            soundEnabled = 1;
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2idlepistol1.rtm";
            speed = -10;
            ConnectTo[] = {"rhs_mrzr_passenger_Idle_Pistol", 0.1};
        };
        class rhs_mrzr_passenger_Obstructed_Pistol: cargo_base_idle_pistol {
            actions = "rhs_mrzr_passengerObstructedPistolActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimpistol_obstructed.rtm";
            speed = 10000000000;
            weaponLowered = 0;
            weaponObstructed = 1;
            interpolationRestart = 1;
            InterpolateTo[] = {
                "rhs_mrzr_passenger_fromObstructed_Pistol",
                0.1,
                "rhs_mrzr_passenger_Die",
                0.1
            };
        };
        class rhs_mrzr_passenger_fromObstructed_Pistol: cargo_base_idle_pistol {
            actions = "rhs_mrzr_passengerPistolActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimpistol_fromobstructed.rtm";
            speed = -0.15;
            weaponLowered = 0;
            interpolationRestart = 1;
            looped = 0;
            reverse = "rhs_mrzr_passenger_toObstructed_Pistol";
            minplaytime = 0.95;
            ConnectTo[] = {"rhs_mrzr_passenger_Aim_Pistol", 0.1};
            InterpolateTo[] = {"rhs_mrzr_passenger_Aim_Pistol", 0.1};
        };
        class rhs_mrzr_passenger_toObstructed_Pistol: cargo_base_idle_pistol {
            actions = "rhs_mrzr_passengerObstructedPistolActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimpistol_toobstructed.rtm";
            speed = -0.15;
            weaponLowered = 0;
            interpolationRestart = 1;
            looped = 0;
            weaponObstructed = 1;
            reverse = "rhs_mrzr_passenger_fromObstructed_Pistol";
            minplaytime = 0.95;
            ConnectTo[] = {"rhs_mrzr_passenger_Obstructed_Pistol", 0.1};
            InterpolateTo[] = {"rhs_mrzr_passenger_Obstructed_Pistol", 0.1};
        };
        class rhs_mrzr_passenger_Aim_ToPistol: AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon {
            actions = "rhs_mrzr_passengerPistolActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimtopistol.rtm";
            speed = 2;
            ConnectTo[] = {"rhs_mrzr_passenger_Aim_ToPistol_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_mrzr_passenger_Aim_ToPistol_End: AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon_end {
            actions = "rhs_mrzr_passengerPistolActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimtopistol_end.rtm";
            speed = 1.875;
            ConnectTo[] = {"rhs_mrzr_passenger_Aim_Pistol", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_mrzr_passenger_Aim_FromPistol: AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon {
            actions = "rhs_mrzr_passengerPistolActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimFrompistol.rtm";
            speed = 2.30769;
            ConnectTo[] = {"rhs_mrzr_passenger_Aim_FromPistol_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_mrzr_passenger_Aim_FromPistol_End: AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon_end {
            actions = "rhs_mrzr_passengerActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimfrompistol_end.rtm";
            aiming = "aimingDefault";
            aimingBody = "aimingUpDefault";
            speed = 2;
            leftHandIKCurve[] = {0, 0, 0.5, 1};
            ConnectTo[] = {"rhs_mrzr_passenger_Aim", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_mrzr_passenger_Aim_Binoc: cargo_basebinoc {
            actions = "rhs_mrzr_passengerBinocActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aim_Binoc.rtm";
            aiming = "aimingDefault";
            aimingBody = "aimingUpDefault";
            speed = -8;
            rightHandIKCurve[] = {0};
            InterpolateTo[] = {
                "rhs_mrzr_passenger_Aim_FromBinoc",
                0.1,
                "rhs_mrzr_passenger_Die",
                0.1
            };
        };
        class rhs_mrzr_passenger_Aim_Pistol_Binoc: cargo_basebinoc {
            actions = "rhs_mrzr_passengerBinocPistolActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimpistol_Binoc.rtm";
            aiming = "aimingRifleSlingDefault";
            aimingBody = "aimingUpRifleSlingDefault";
            showHandGun = 1;
            speed = -8;
            InterpolateTo[] = {
                "rhs_mrzr_passenger_Aim_Pistol_FromBinoc",
                0.1,
                "rhs_mrzr_passenger_Die_Pistol",
                0.1
            };
        };
        class rhs_mrzr_passenger_Aim_ToBinoc: AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon {
            actions = "rhs_mrzr_passengerBinocActions";
            aiming = "aimingDefault";
            aimingBody = "aimingUpDefault";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aim_ToBinoc.rtm";
            speed = 1.57895;
            leftHandIKCurve[] = {0, 1, 0.15, 0};
            ConnectTo[] = {"rhs_mrzr_passenger_Aim_ToBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_mrzr_passenger_Aim_ToBinoc_End: AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon_end {
            actions = "rhs_mrzr_passengerBinocActions";
            aiming = "aimingDefault";
            aimingBody = "aimingUpDefault";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aim_ToBinoc_end.rtm";
            speed = 1.76471;
            ConnectTo[] = {"rhs_mrzr_passenger_Aim_Binoc", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_mrzr_passenger_Aim_FromBinoc: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon {
            actions = "rhs_mrzr_passengerBinocActions";
            aiming = "aimingDefault";
            aimingBody = "aimingUpDefault";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aim_frombinoc.rtm";
            speed = 1.57895;
            ConnectTo[] = {"rhs_mrzr_passenger_Aim_FromBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_mrzr_passenger_Aim_FromBinoc_End: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon_end {
            actions = "rhs_mrzr_passengerActions";
            aiming = "aimingDefault";
            aimingBody = "aimingUpDefault";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aim_frombinoc_end.rtm";
            speed = 1.76471;
            leftHandIKCurve[] = {0, 0, 0.5, 1};
            ConnectTo[] = {"rhs_mrzr_passenger_Aim", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_mrzr_passenger_Aim_Pistol_ToBinoc: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon {
            actions = "rhs_mrzr_passengerBinocActions";
            showHandGun = 1;
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimpistol_ToBinoc.rtm";
            speed = 1.76471;
            ConnectTo[] = {"rhs_mrzr_passenger_Aim_Pistol_ToBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_mrzr_passenger_Aim_Pistol_ToBinoc_End: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end {
            actions = "rhs_mrzr_passengerBinocActions";
            showHandGun = 1;
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimpistol_ToBinoc_end.rtm";
            speed = 1.76471;
            ConnectTo[] = {"rhs_mrzr_passenger_Aim_Pistol_Binoc", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_mrzr_passenger_Aim_Pistol_FromBinoc: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon {
            actions = "rhs_mrzr_passengerBinocActions";
            showHandGun = 1;
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimpistol_frombinoc.rtm";
            speed = 1.57895;
            ConnectTo[] = {"rhs_mrzr_passenger_Aim_Pistol_FromBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_mrzr_passenger_Aim_Pistol_FromBinoc_End: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end {
            actions = "rhs_mrzr_passengerActions";
            showHandGun = 1;
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimpistol_frombinoc_end.rtm";
            speed = 1.76471;
            ConnectTo[] = {"rhs_mrzr_passenger_Aim_Pistol", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_mrzr_passenger_Idle_Unarmed: cargo_base_idle {
            actions = "rhs_mrzr_passengerIdleUnarmedActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2idleunarmed.rtm";
            speed = 100000;
            aiming = "aimingNo";
            aimingBody = "aimingNo";
            weaponIK = 0;
            InterpolateTo[] = {
                "rhs_mrzr_passenger_Aim_FromPistol_End",
                0.1,
                "rhs_mrzr_passenger_Aim_ToPistol_End",
                0.1,
                "rhs_mrzr_passenger_Aim_Unarmed_ToBinoc",
                0.1,
                "rhs_mrzr_passenger_Die_Pistol",
                0.1
            };
            variantsAI[] = {"rhs_mrzr_passenger_Idle_Unarmed_Idling", 1};
            variantsPlayer[] = {"rhs_mrzr_passenger_Idle_Unarmed_Idling", 1};
        };
        class rhs_mrzr_passenger_Idle_Unarmed_Idling: rhs_mrzr_passenger_Idle {
            variantsPlayer[] = {};
            headBobStrength = 0;
            soundEnabled = 1;
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2idleunarmed1.rtm";
            speed = -10;
            ConnectTo[] = {"rhs_mrzr_passenger_Idle_Unarmed", 0.1};
        };
        class rhs_mrzr_passenger_Aim_Unarmed_Binoc: cargo_basebinoc {
            actions = "rhs_mrzr_passengerBinocUnarmedActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimUnarmed_Binoc.rtm";
            aiming = "aimingRifleSlingDefault";
            aimingBody = "aimingUpRifleSlingDefault";
            showHandGun = 0;
            speed = -8;
            InterpolateTo[] = {
                "rhs_mrzr_passenger_Aim_Unarmed_FromBinoc",
                0.1,
                "rhs_mrzr_passenger_Die_Pistol",
                0.1
            };
        };
        class rhs_mrzr_passenger_Aim_Unarmed_ToBinoc: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon {
            actions = "rhs_mrzr_passengerBinocUnarmedActions";
            showHandGun = 0;
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimUnarmed_ToBinoc.rtm";
            speed = 1.76471;
            ConnectTo[] = {"rhs_mrzr_passenger_Aim_Unarmed_ToBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_mrzr_passenger_Aim_Unarmed_ToBinoc_End: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end {
            actions = "rhs_mrzr_passengerBinocUnarmedActions";
            showHandGun = 0;
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimUnarmed_ToBinoc_end.rtm";
            speed = 1.76471;
            ConnectTo[] = {"rhs_mrzr_passenger_Aim_Unarmed_Binoc", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_mrzr_passenger_Aim_Unarmed_FromBinoc: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon {
            actions = "rhs_mrzr_passengerBinocUnarmedActions";
            showHandGun = 0;
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimUnarmed_frombinoc.rtm";
            speed = 1.57895;
            ConnectTo[] = {"rhs_mrzr_passenger_Aim_Unarmed_FromBinoc_End", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_mrzr_passenger_Aim_Unarmed_FromBinoc_End: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end {
            actions = "rhs_mrzr_passengerIdleUnarmedActions";
            showHandGun = 0;
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimUnarmed_frombinoc_end.rtm";
            speed = 1.76471;
            ConnectTo[] = {"rhs_mrzr_passenger_Idle_Unarmed", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_mrzr_passenger_Die: DefaultDie {
            actions = "rhs_mrzr_passengerDeadActions";
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2die.rtm";
            speed = 1;
            looped = 0;
            terminal = 1;
            ragdoll = 1;
            ConnectTo[] = {"Unconscious", 0.1};
            InterpolateTo[] = {};
        };
        class rhs_mrzr_passenger_Die_Pistol: rhs_mrzr_passenger_Die {
            file = "\A3\cargoposes_F_heli\anim\passenger_inside_2diepistol.rtm";
            actions = "rhs_mrzr_passengerDeadPistolActions";
            showHandGun = 1;
        };
        class rhs_mrzr_driver: Crew {
            leftHandIKCurve[] = {1};
            rightHandIKCurve[] = {1};
            leftLegIKCurve[] = {1};
            rightLegIKCurve[] = {1};
            leaning = "crewShake_mrzr";
            file = "\rhsusf\addons\rhsusf_mrzr\data\anims\MRZR_Driver.rtm";
            speed = 10000000000;
            looped = 0;
            interpolateTo[] = {"KIA_Driver_mid01", 1};
        };
    };
    class BlendAnims: BlendAnims {
        crewShake_mrzr[] = {
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
class cfgFunctions {
    class RHS {
        class functions {
            class unflipVehicle {
                file = "\rhsusf\addons\rhsusf_c_mrzr\scripts\unflipVehicle.sqf";
            };
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
        class CargoTurret;
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
        };
    };
    class MRAP_01_base_F: Car_F {
        class EventHandlers;
    };
    class rhsusf_mrzr_base: MRAP_01_base_F {
        dlc = "RHS_USAF";
        category = "Car";
        editorSubcategory = "EdSubcat_Cars";
        vehicleClass = "rhs_vehclass_car";
        faction = "rhs_faction_socom";
        destrType = "DestructDefault";
        extCameraPosition[] = {0, 0.75, -7};
        attenuationEffectType = "OpenCarAttenuation";
        weapons[] = {"MRZRHorn"};
        rhs_decalParameters[] = {"['Label', [5,6,7,8,9], 'ODA_MRZR_D']", "['Label', [10,11], 'MRZR_Bumperstickers']"};
        class TransportBackpacks {
            class _xx_rhsusf_falconii {
                backpack = "rhsusf_falconii";
                count = 4;
            };
        };
        class RenderTargets {};
        class TransportMagazines {
            class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {
                count = 30;
                magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
            };
            class _xx_rhs_mag_M433_HEDP {
                count = 20;
                magazine = "rhs_mag_M433_HEDP";
            };
            class _xx_rhsusf_100Rnd_556x45_soft_pouch {
                count = 11;
                magazine = "rhsusf_100Rnd_556x45_soft_pouch";
            };
            class _xx_rhs_mag_M441_HE {
                count = 10;
                magazine = "rhs_mag_M441_HE";
            };
            class _xx_rhs_mag_M714_white {
                count = 4;
                magazine = "rhs_mag_M714_white";
            };
            class _xx_rhs_mag_M662_red {
                count = 2;
                magazine = "rhs_mag_M662_red";
            };
            class _xx_rhs_mag_m67 {
                count = 4;
                magazine = "rhs_mag_m67";
            };
            class _xx_rhs_mag_m18_green {
                count = 2;
                magazine = "rhs_mag_m18_green";
            };
            class _xx_rhs_mag_m18_red {
                count = 2;
                magazine = "rhs_mag_m18_red";
            };
            class _xx_rhs_mag_an_m8hc {
                count = 4;
                magazine = "rhs_mag_an_m8hc";
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name = "FirstAidKit";
                count = 8;
            };
            class _xx_Medikit {
                name = "Medikit";
                count = 1;
            };
        };
        class TransportWeapons {
            class _xx_weap {
                count = 2;
                weapon = "rhs_weap_m4_carryhandle";
            };
        };
        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 5;
                canBeTransported = 1;
                dimensions[] = {"BBox_1_1_pos", "BBox_1_2_pos"};
            };
            class Carrier {
                cargoBayDimensions[] = {"VVT_cargo_1", "VVT_cargo_2"};
                disableHeightLimit = 1;
                maxLoadMass = 25000;
                cargoAlignment[] = {"left", "front"};
                cargoSpacing[] = {0, 0, 0};
                exits[] = {"VVT_exit"};
                unloadingInterval = 2;
                loadingDistance = 5;
                loadingAngle = 60;
                parachuteClassDefault = "B_Parachute_02_F";
                parachuteHeightLimitDefault = 5;
            };
        };
        displayName = "MRZR 4";
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2",
            "camo3",
            "camomerged",
            "decal_hood_main",
            "decal_hood_1",
            "decal_hood_2",
            "decal_hood_3",
            "decal_hood_4",
            "sticker_mid",
            "sticker_rear"
        };
        precision = 10;
        brakeDistance = 3;
        acceleration = 15;
        fireResistance = 5;
        armor = 32;
        cost = 50000;
        transportMaxBackpacks = 3;
        transportSoldier = 0;
        crewVulnerable = 1;
        crewCrashProtection = 0.25;
        driverLeftHandAnimName = "steeringwheel";
        driverRightHandAnimName = "steeringwheel";
        hideWeaponsDriver = 0;
        HeadAimDown = 15;
        getInRadius = 1.5;
        slingLoadCargoMemoryPoints[] = {
            "SlingLoadCargo1",
            "SlingLoadCargo2",
            "SlingLoadCargo3",
            "SlingLoadCargo4"
        };
        class EventHandlers: EventHandlers {
            class RHSUSF_EventHandlers {
                engine = "_this call rhs_fnc_engineCheckDamage";
                postInit = "_this call rhs_fnc_reapplyTextures";
            };
        };
        class Turrets: Turrets {
            class CargoTurret_01: CargoTurret {
                gunnerCompartments = "Compartment1";
                memoryPointsGetInGunner = "pos cargo RF";
                memoryPointsGetInGunnerDir = "pos cargo RF dir";
                gunnerAction = "passenger_inside_1";
                gunnerName = "$STR_A3_TURRETS_CARGOTURRET_F";
                isPersonTurret = 1;
                enableFFVWeaponObstruction = 1;
                proxyIndex = 2;
                class TurnOut {
                    limitsArrayTop[] = {
                        {28.7267, -86.447},
                        {26.7899, -30.4307},
                        {10.0909, -16.9596},
                        {5.3567, -1.3237},
                        {3.7548, 54.7238}
                    };
                    limitsArrayBottom[] = {
                        {-8.7914, -95.7334},
                        {-26.2615, -38.6995},
                        {-24.1625, -23.4721},
                        {-12.2238, -3.9537},
                        {-10.9171, 46.5569},
                        {-8.2158, 49.7788}
                    };
                };
                class TurnIn: TurnOut {};
                ejectDeadGunner = 0;
                soundAttenuationTurret = "";
                disableSoundAttenuation = 1;
                playerPosition = 2;
                gunnerGetInAction = "ChopperLight_R_In_H";
                gunnergetOutAction = "GetOutLow";
                usePreciseGetInAction = 1;
            };
            class CargoTurret_02: CargoTurret_01 {
                canHideGunner = 0;
                gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L";
                gunnerAction = "rhs_mrzr_passenger";
                gunnerInAction = "rhs_mrzr_passenger";
                animationSourceHatch = "FFV_turn_L";
                gunnerLeftLegAnimName = "FFV_LB_LF";
                gunnerRightLegAnimName = "FFV_LB_RF";
                memoryPointsGetInGunner = "pos cargo LB";
                memoryPointsGetInGunnerDir = "pos cargo LB dir";
                proxyIndex = 3;
                class TurnOut {
                    limitsArrayTop[] = {{35.4526, 63.7415}, {32.4939, 116.4933}};
                    limitsArrayBottom[] = {{-18.7593, 73.6969}, {-23.6628, 109.8309}};
                };
                class TurnIn: TurnOut {};
                playerPosition = 3;
                gunnerGetInAction = "ChopperLight_L_In_H";
            };
            class CargoTurret_03: CargoTurret_02 {
                gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R";
                gunnerAction = "rhs_mrzr_passenger";
                gunnerInAction = "rhs_mrzr_passenger";
                animationSourceHatch = "FFV_turn_R";
                gunnerLeftLegAnimName = "FFV_RB_LF";
                gunnerRightLegAnimName = "FFV_RB_RF";
                memoryPointsGetInGunner = "pos cargo RB";
                memoryPointsGetInGunnerDir = "pos cargo RB dir";
                proxyIndex = 4;
                class TurnOut {
                    limitsArrayTop[] = {{32.7761, -88.5404}, {34.2324, -49.191}};
                    limitsArrayBottom[] = {{-29.9524, -99.7416}, {-16.9604, -47.9381}};
                };
                class TurnIn: TurnOut {};
                playerPosition = 4;
                gunnerGetInAction = "ChopperLight_R_In_H";
            };
            class CargoTurret_04: CargoTurret {
                gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R2";
                gunnerCompartments = "Compartment2";
                gunnerAction = "passenger_flatground_2";
                gunnerInAction = "passenger_flatground_2";
                memoryPointsGetInGunner = "pos cargo R";
                memoryPointsGetInGunnerDir = "pos cargo R dir";
                proxyIndex = 5;
                canHideGunner = 0;
                allowLauncherIn = 0;
                allowLauncherOut = 0;
                class TurnIn {
                    limitsArrayTop[] = {{33.8208, -93.9616}, {40.8906, 66.5705}};
                    limitsArrayBottom[] = {
                        {-9.4643, -94.5753},
                        {-8.3683, -67.6867},
                        {-9.7173, 43.6372},
                        {-10.1082, 78.9166}
                    };
                };
                class dynamicViewLimits {
                    CargoTurret_05[] = {-65, 75};
                };
                playerPosition = 5;
            };
            class CargoTurret_05: CargoTurret_04 {
                gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L2";
                gunnerAction = "passenger_flatground_4";
                gunnerInAction = "passenger_flatground_4";
                proxyIndex = 6;
                class TurnIn {
                    limitsArrayTop[] = {{37.1488, -71.9003}, {36.4967, 92.2757}};
                    limitsArrayBottom[] = {
                        {-22.1832, -70.0989},
                        {-13.9068, -22.8107},
                        {-7.1236, 75.6849},
                        {-7.8564, 102.5826}
                    };
                };
                class dynamicViewLimits {
                    CargoTurret_04[] = {-75, 65};
                };
                playerPosition = 6;
            };
        };
        class HitPoints: HitPoints {
            class HitLFWheel: HitLFWheel {
                armor = 9.825;
                name = "wheel_1_1_disc";
                visual = "wheel_1_1";
                passThrough = 0;
                radius = 0.19;
            };
            class HitLF2Wheel: HitLF2Wheel {
                armor = 9.825;
                name = "wheel_1_2_arm";
                visual = "wheel_1_2";
                passThrough = 0;
                radius = 0.19;
            };
            class HitRFWheel: HitRFWheel {
                armor = 9.825;
                name = "wheel_2_1_disc";
                visual = "wheel_2_1";
                passThrough = 0;
                radius = 0.19;
            };
            class HitRF2Wheel: HitRF2Wheel {
                armor = 9.825;
                name = "wheel_2_2_arm";
                visual = "wheel_2_2";
                passThrough = 0;
                radius = 0.19;
            };
            class HitFuel {
                armor = 0.5;
                material = -1;
                name = "fueltank";
                visual = "-";
                passThrough = 0.2;
                radius = 0.1;
            };
            class HitEngine {
                armor = 0.5;
                material = -1;
                name = "engine";
                visual = "zbytek";
                passThrough = 0.2;
                radius = 0.1;
            };
            class HitBody: HitBody {
                name = "body";
                visual = "camo1";
                passThrough = 1;
                radius = 0.15;
            };
        };
        driverAction = "rhs_mrzr_driver";
        getInAction = "ChopperLight_L_In_H";
        getOutAction = "GetOutLow";
        soundGetIn[] = {"", 0.4466836, 1};
        soundGetOut[] = {"", 0.4466836, 1, 40};
        soundDammage[] = {"", 0.56234133, 1};
        soundEngineOnInt[] = {"A3\Sounds_F\vehicles2\soft\Quadbike_01\Quadbike_01_Engine_Ext_Start", 0.5011872, 1};
        soundEngineOffInt[] = {"A3\Sounds_F\vehicles2\soft\Quadbike_01\Quadbike_01_Engine_Ext_stop", 0.39810717, 1};
        soundEngineOnExt[] = {
            "A3\Sounds_F\vehicles2\soft\Quadbike_01\Quadbike_01_Engine_Ext_Start",
            0.5011872,
            1,
            50
        };
        soundEngineOffExt[] = {
            "A3\Sounds_F\vehicles2\soft\Quadbike_01\Quadbike_01_Engine_Ext_stop",
            0.39810717,
            1,
            50
        };
        buildCrash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
            1.9952624,
            1,
            75
        };
        buildCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
            1.9952624,
            1,
            75
        };
        buildCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
            1.9952624,
            1,
            75
        };
        buildCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
            1.9952624,
            1,
            75
        };
        buildCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
            1.9952624,
            1,
            75
        };
        buildCrash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
            1.9952624,
            1,
            75
        };
        buildCrash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
            1.9952624,
            1,
            75
        };
        buildCrash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
            1.9952624,
            1,
            75
        };
        soundBuildingCrash[] = {
            "buildCrash0",
            0.125,
            "buildCrash1",
            0.125,
            "buildCrash2",
            0.125,
            "buildCrash3",
            0.125,
            "buildCrash4",
            0.125,
            "buildCrash5",
            0.125,
            "buildCrash6",
            0.125,
            "buildCrash7",
            0.125
        };
        WoodCrash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_01",
            1.9952624,
            1,
            75
        };
        WoodCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_02",
            1.9952624,
            1,
            75
        };
        WoodCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_03",
            1.9952624,
            1,
            75
        };
        WoodCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_04",
            1.9952624,
            1,
            75
        };
        WoodCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_05",
            1.9952624,
            1,
            75
        };
        WoodCrash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_06",
            1.9952624,
            1,
            75
        };
        WoodCrash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_07",
            1.9952624,
            1,
            75
        };
        WoodCrash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_08",
            1.9952624,
            1,
            75
        };
        soundWoodCrash[] = {
            "woodCrash0",
            0.125,
            "woodCrash1",
            0.125,
            "woodCrash2",
            0.125,
            "woodCrash3",
            0.125,
            "woodCrash4",
            0.125,
            "woodCrash5",
            0.125,
            "woodCrash6",
            0.125,
            "woodCrash7",
            0.125
        };
        armorCrash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
            1.9952624,
            1,
            75
        };
        armorCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
            1.9952624,
            1,
            75
        };
        armorCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
            1.9952624,
            1,
            75
        };
        armorCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
            1.9952624,
            1,
            75
        };
        armorCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
            1.9952624,
            1,
            75
        };
        armorCrash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
            1.9952624,
            1,
            75
        };
        armorCrash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
            1.9952624,
            1,
            75
        };
        armorCrash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
            1.9952624,
            1,
            75
        };
        soundArmorCrash[] = {
            "ArmorCrash0",
            0.125,
            "ArmorCrash1",
            0.125,
            "ArmorCrash2",
            0.125,
            "ArmorCrash3",
            0.125,
            "ArmorCrash4",
            0.125,
            "ArmorCrash5",
            0.125,
            "ArmorCrash6",
            0.125,
            "ArmorCrash7",
            0.125
        };
        Crash0[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
            1.9952624,
            1,
            75
        };
        Crash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
            1.9952624,
            1,
            75
        };
        Crash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
            1.9952624,
            1,
            75
        };
        Crash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
            1.9952624,
            1,
            75
        };
        Crash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
            1.9952624,
            1,
            75
        };
        Crash5[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
            1.9952624,
            1,
            75
        };
        Crash6[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
            1.9952624,
            1,
            75
        };
        Crash7[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
            1.9952624,
            1,
            75
        };
        soundCrashes[] = {
            "Crash0",
            0.125,
            "Crash1",
            0.125,
            "Crash2",
            0.125,
            "Crash3",
            0.125,
            "Crash4",
            0.125,
            "Crash5",
            0.125,
            "Crash6",
            0.125,
            "Crash7",
            0.125
        };
        BushCrash1[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_01",
            0.63095737,
            1,
            50
        };
        BushCrash2[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_02",
            0.63095737,
            1,
            50
        };
        BushCrash3[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03",
            0.63095737,
            1,
            50
        };
        BushCrash4[] = {
            "A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03",
            0.63095737,
            0.8,
            50
        };
        soundBushCrash[] = {
            "BushCrash1",
            0.25,
            "BushCrash2",
            0.25,
            "BushCrash3",
            0.25,
            "BushCrash4",
            0.25
        };
        class Sounds {
            soundSetsInt[] = {
                "Quadbike_01_Engine_RPM0_INT_SoundSet",
                "Quadbike_01_Engine_RPM1_INT_SoundSet",
                "Quadbike_01_Engine_RPM2_INT_SoundSet",
                "Quadbike_01_Engine_RPM3_INT_SoundSet",
                "Quadbike_01_Engine_RPM4_INT_SoundSet",
                "Quadbike_01_Engine_RPM5_INT_SoundSet",
                "Quadbike_01_Engine_RPM6_INT_SoundSet",
                "Quadbike_01_Rattling_INT_SoundSet",
                "Quadbike_01_Stress_INT_SoundSet",
                "Quadbike_01_Rain_INT_SoundSet",
                "Quadbike_01_Tires_Rock_Fast_OPEN_SoundSet",
                "Quadbike_01_Tires_Grass_Fast_OPEN_SoundSet",
                "Quadbike_01_Tires_Sand_Fast_OPEN_SoundSet",
                "Quadbike_01_Tires_Gravel_Fast_OPEN_SoundSet",
                "Quadbike_01_Tires_Mud_Fast_OPEN_SoundSet",
                "Quadbike_01_Tires_Asphalt_Fast_OPEN_SoundSet",
                "Quadbike_01_Tires_Water_Fast_OPEN_SoundSet",
                "Quadbike_01_Tires_Rock_Slow_OPEN_SoundSet",
                "Quadbike_01_Tires_Grass_Slow_OPEN_SoundSet",
                "Quadbike_01_Tires_Sand_Slow_OPEN_SoundSet",
                "Quadbike_01_Tires_Gravel_Slow_OPEN_SoundSet",
                "Quadbike_01_Tires_Mud_Slow_OPEN_SoundSet",
                "Quadbike_01_Tires_Asphalt_Slow_OPEN_SoundSet",
                "Quadbike_01_Tires_Water_Slow_OPEN_SoundSet",
                "Quadbike_01_Tires_Turn_Hard_OPEN_SoundSet",
                "Quadbike_01_Tires_Turn_Soft_OPEN_SoundSet",
                "Quadbike_01_Tires_Brake_Hard_OPEN_SoundSet",
                "Quadbike_01_Tires_Brake_Soft_OPEN_SoundSet",
                "",
                "Tires_Movement_Dirt_Int_01_SoundSet"
            };
            soundSetsExt[] = {
                "Quadbike_01_Engine_RPM0_EXT_SoundSet",
                "Quadbike_01_Engine_RPM1_EXT_SoundSet",
                "Quadbike_01_Engine_RPM2_EXT_SoundSet",
                "Quadbike_01_Engine_RPM3_EXT_SoundSet",
                "Quadbike_01_Engine_RPM4_EXT_SoundSet",
                "Quadbike_01_Engine_RPM5_EXT_SoundSet",
                "Quadbike_01_Engine_RPM6_EXT_SoundSet",
                "Quadbike_01_Rattling_EXT_SoundSet",
                "Quadbike_01_Stress_EXT_SoundSet",
                "Quadbike_01_Rain_EXT_SoundSet",
                "Quadbike_01_Tires_Rock_Fast_EXT_SoundSet",
                "Quadbike_01_Tires_Grass_Fast_EXT_SoundSet",
                "Quadbike_01_Tires_Sand_Fast_EXT_SoundSet",
                "Quadbike_01_Tires_Gravel_Fast_EXT_SoundSet",
                "Quadbike_01_Tires_Mud_Fast_EXT_SoundSet",
                "Quadbike_01_Tires_Asphalt_Fast_EXT_SoundSet",
                "Quadbike_01_Tires_Water_Fast_EXT_SoundSet",
                "Quadbike_01_Tires_Rock_Slow_EXT_SoundSet",
                "Quadbike_01_Tires_Grass_Slow_EXT_SoundSet",
                "Quadbike_01_Tires_Sand_Slow_EXT_SoundSet",
                "Quadbike_01_Tires_Gravel_Slow_EXT_SoundSet",
                "Quadbike_01_Tires_Mud_Slow_EXT_SoundSet",
                "Quadbike_01_Tires_Asphalt_Slow_EXT_SoundSet",
                "Quadbike_01_Tires_Water_Slow_EXT_SoundSet",
                "Quadbike_01_Tires_Turn_Hard_EXT_SoundSet",
                "Quadbike_01_Tires_Turn_Soft_EXT_SoundSet",
                "Quadbike_01_Tires_Brake_Hard_EXT_SoundSet",
                "Quadbike_01_Tires_Brake_Soft_EXT_SoundSet",
                "",
                "Tires_Movement_Dirt_Ext_01_SoundSet"
            };
        };
        normalSpeedForwardCoef = 0.7;
        slowSpeedForwardCoef = 0.4;
        turnCoef = 3;
        terrainCoef = 0.2;
        simulation = "carx";
        maxSpeed = 95;
        fuelCapacity = 28;
        wheelCircumference = 1.5;
        brakeIdleSpeed = 1.4;
        maxFordingDepth = 0.7;
        waterSpeedFactor = 0.3;
        waterResistance = 1;
        waterResistanceCoef = 0.2;
        waterLeakiness = 10;
        switchTime = 0.2;
        latency = 1.3;
        transmissionLosses = 18;
        changeGearType = "rpmratio";
        changeGearOmegaRatios[] = {
            0.36875,
            0.125,
            0.0875,
            0.0625,
            0.94375,
            0.2,
            0.85625,
            0.425,
            1,
            0.5
        };
        class complexGearbox {
            GearboxRatios[] = {
                "R1",
                -2.47,
                "N",
                0,
                "D1",
                3.95,
                "D2",
                2.21,
                "D3",
                1.435
            };
            TransmissionRatios[] = {"High", 6.8};
            gearBoxMode = "auto";
            moveOffGear = 1;
            driveString = "D";
            neutralString = "N";
            reverseString = "R";
        };
        dampersBumpCoef = 0.3;
        differentialType = "all_limited";
        frontRearSplit = 0.12;
        frontBias = 1.3;
        rearBias = 1.3;
        centreBias = 1.3;
        clutchStrength = 40;
        dampingRateFullThrottle = 0.05;
        dampingRateZeroThrottleClutchEngaged = 0.15;
        dampingRateZeroThrottleClutchDisengaged = 0.35;
        torqueCurve[] = {
            {0.125, 0.421053},
            {0.25, 0.578947},
            {0.375, 0.631579},
            {0.5, 0.684211},
            {0.625, 0.789474},
            {0.75, 0.842105},
            {0.875, 1},
            {1.12513, 0}
        };
        engineMOI = 0.1;
        enginePower = 66;
        peakTorque = 118.75;
        minOmega = 40;
        maxOmega = 837.76;
        idleRPM = 600;
        redRPM = 8000;
        engineLosses = 34;
        thrustDelay = 0.1;
        engineBrakeCoef = 0.1;
        antiRollbarForceCoef = 4.4;
        antiRollbarForceLimit = 7.4;
        antiRollbarSpeedMin = 15;
        antiRollbarSpeedMax = 95;
        accelAidForceSpd = 2.23;
        accelAidForceCoef = 8;
        accelAidForceYOffset = -1.3;
        class Wheels {
            class LF {
                side = "left";
                boneName = "wheel_1_1_damper";
                center = "wheel_1_1_axis";
                boundary = "wheel_1_1_bound";
                suspForceAppPointOffset = "wheel_1_1_axis";
                tireForceAppPointOffset = "wheel_1_1_axis";
                suspTravelDirection[] = {0, -1, 0};
                steering = 1;
                width = 0.2;
                mass = 40;
                MOI = 1.97192;
                dampingRate = 0.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 5000;
                maxHandBrakeTorque = 0;
                maxCompression = 0.2;
                maxDroop = 0.05;
                sprungMass = -1;
                springStrength = 17000;
                springDamperRate = 2500;
                longitudinalStiffnessPerUnitGravity = 9000;
                latStiffX = 20;
                latStiffY = 120;
                frictionVsSlipGraph[] = {{0.17, 1.95}, {0.4, 1.55}, {1, 1.15}};
            };
            class LR: LF {
                boneName = "wheel_1_2_damper";
                steering = 0;
                center = "wheel_1_2_axis";
                boundary = "wheel_1_2_bound";
                suspForceAppPointOffset = "wheel_1_2_axis";
                tireForceAppPointOffset = "wheel_1_2_axis";
                maxBrakeTorque = 5000;
                maxHandBrakeTorque = 10000;
            };
            class RF: LF {
                boneName = "wheel_2_1_damper";
                center = "wheel_2_1_axis";
                boundary = "wheel_2_1_bound";
                suspForceAppPointOffset = "wheel_2_1_axis";
                tireForceAppPointOffset = "wheel_2_1_axis";
                steering = 1;
                maxBrakeTorque = 5000;
                side = "right";
            };
            class RR: RF {
                boneName = "wheel_2_2_damper";
                steering = 0;
                center = "wheel_2_2_axis";
                boundary = "wheel_2_2_bound";
                suspForceAppPointOffset = "wheel_2_2_axis";
                tireForceAppPointOffset = "wheel_2_2_axis";
                maxBrakeTorque = 5000;
                maxHandBrakeTorque = 10000;
            };
        };
        class Exhausts {
            class Exhaust {
                position = "exhaust";
                direction = "exhaust_dir";
                effect = "ExhaustsEffect";
            };
        };
        memoryPointsGetInCargo[] = {
            "pos codriver",
            "pos cargo 1",
            "pos cargo 2",
            "pos cargo 3",
            "pos cargo 3",
            "pos cargo 3",
            "pos cargo 3"
        };
        memoryPointsGetInCargoDir[] = {
            "pos codriver dir",
            "pos cargo dir 1",
            "pos cargo dir 2",
            "pos cargo dir 3",
            "pos cargo dir 3",
            "pos cargo dir 3",
            "pos cargo dir 3"
        };
        model = "\rhsusf\addons\rhsusf_mrzr\rhs_mrzr4";
        mapSize = 8.02;
        side = 1;
        class Damage {
            tex[] = {};
            mat[] = {
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_yel_rubber.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_yel_rubber_dam.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\mrzr_destr.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_blue.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_blue_dam.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\mrzr_destr.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_blue_metal.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_blue_metal_dam.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\mrzr_destr.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_blue_mud.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_blue_mud_dam.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\mrzr_destr.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_blue_rubber.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_blue_rubber_dam.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\mrzr_destr.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_grn.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_grn_dam.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\mrzr_destr.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_grn_metal.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_grn_metal_dam.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\mrzr_destr.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_grn_mud.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_grn_mud_dam.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\mrzr_destr.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_grn_rubber.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_grn_rubber_dam.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\mrzr_destr.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_red.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_red_dam.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\mrzr_destr.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_red_metal.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_red_metal_dam.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\mrzr_destr.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_red_mud.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_red_mud_dam.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\mrzr_destr.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_red_rubber.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_red_rubber_dam.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\mrzr_destr.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_yel.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_yel_dam.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\mrzr_destr.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_yel_metal.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_yel_metal_dam.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\mrzr_destr.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_yel_metal_mud.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_yel_metal_mud_dam.rvmat",
                "rhsusf\addons\rhsusf_mrzr\data\mrzr_destr.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default.rvmat",
                "a3\data_f\default_destruct.rvmat"
            };
        };
        class Reflectors {
            class LSvetla {
                color[] = {800, 900, 650};
                ambient[] = {2, 2, 2};
                position = "L svetlo";
                direction = "konec L svetla";
                hitpoint = "L svetlo";
                selection = "L svetlo";
                size = 1;
                innerAngle = 30;
                outerAngle = 100;
                coneFadeCoef = 10;
                intensity = 1.5;
                useFlare = 1;
                dayLight = 0;
                flareSize = 0.85;
                class Attenuation {
                    start = 1;
                    constant = 0;
                    linear = 0;
                    quadratic = 0.25;
                    hardLimitStart = 30;
                    hardLimitEnd = 60;
                };
            };
            class RSvetla: LSvetla {
                position = "P svetlo";
                direction = "konec P svetla";
                hitpoint = "P svetlo";
                selection = "P svetlo";
            };
        };
        aggregateReflectors[] = {{"LSvetla", "RSvetla"}};
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
            class cage_fold_on {
                displayName = "Lower Roll Cage";
                position = "pos_driverpos";
                radius = 2;
                onlyForPlayer = 0;
                condition = "(player == driver this) && this animationSourcePhase 'cage_fold' < 0.5";
                statement = "this animateSource ['cage_fold', 1]";
            };
            class cage_fold_off {
                displayName = "Raise Roll Cage";
                position = "pos_driverpos";
                radius = 2;
                onlyForPlayer = 0;
                condition = "(player == driver this) && this animationSourcePhase 'cage_fold' > 0.5";
                statement = "this animateSource ['cage_fold', 0]";
            };
            class PressXToFlipTheThing {
                displayNameDefault = "Set up the MRZR";
                displayName = "Set up the MRZR";
                position = "";
                radius = 2.7;
                onlyForPlayer = 1;
                condition = "not canmove this AND {alive this} AND {count crew this == 0}";
                statement = "[this] call rhs_fnc_unflipVehicle";
            };
        };
        class AnimationSources: AnimationSources {
            class light_bo {
                source = "user";
                animPeriod = 0.00001;
                initPhase = 1;
            };
            class light_stop: light_bo {
                initPhase = 0;
            };
            class tailgateHide {
                source = "user";
                animPeriod = 0.00001;
                initPhase = 0;
                mass = 1;
                displayName = "Hide tailgate";
            };
            class tailgate_open {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
                displayName = "Open Tailgate";
            };
            class cage_fold {
                source = "user";
                animPeriod = 3;
                initPhase = 0;
                displayName = "Fold roll-cage";
                onPhaseChanged = "{(_this select 0) animate [_x,(_this select 1),true]}foreach ['cage_fold_1','cage_fold_2'];";
            };
        };
        class textureSources {
            class standard {
                displayName = "Tan";
                textures[] = {
                    "\rhsusf\addons\rhsusf_mrzr\data\blue_tan_co.paa",
                    "\rhsusf\addons\rhsusf_mrzr\data\yel_tan_co.paa",
                    "\rhsusf\addons\rhsusf_mrzr\data\red_tan_co.paa",
                    "\rhsusf\addons\rhsusf_mrzr\data\grn_tan_co.paa",
                    "\rhsusf\addons\rhsusf_mrzr\data\merged\orng_tan_co.paa"
                };
                materials[] = {
                    "\rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_blue.rvmat",
                    "\rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_yel_metal.rvmat",
                    "\rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_red.rvmat",
                    "\rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_grn.rvmat"
                };
                factions[] = {"rhs_faction_socom"};
            };
            class mud {
                displayName = "Tan (Muddy)";
                textures[] = {
                    "\rhsusf\addons\rhsusf_mrzr\data\blue_tan_mud_co.paa",
                    "\rhsusf\addons\rhsusf_mrzr\data\yel_tan_mud_co.paa",
                    "\rhsusf\addons\rhsusf_mrzr\data\red_tan_mud_co.paa",
                    "\rhsusf\addons\rhsusf_mrzr\data\grn_tan_mud_co.paa",
                    "\rhsusf\addons\rhsusf_mrzr\data\merged\orng_tan_mud_co.paa"
                };
                materials[] = {
                    "\rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_blue_mud.rvmat",
                    "\rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_yel_metal_mud.rvmat",
                    "\rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_red_mud.rvmat",
                    "\rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_grn_mud.rvmat"
                };
                factions[] = {"rhs_faction_socom"};
            };
            class paint1: standard {
                displayName = "Painted (Woodland)";
                textures[] = {
                    "\rhsusf\addons\rhsusf_mrzr\data\blue_tan_pnt1_co.paa",
                    "\rhsusf\addons\rhsusf_mrzr\data\yel_tan_pnt1_co.paa",
                    "\rhsusf\addons\rhsusf_mrzr\data\red_tan_pnt1_co.paa",
                    "\rhsusf\addons\rhsusf_mrzr\data\grn_tan_pnt1_co.paa",
                    "\rhsusf\addons\rhsusf_mrzr\data\merged\orng_tan_paint_co.paa"
                };
                factions[] = {"rhs_faction_socom"};
            };
            class mud_pnt1: mud {
                displayName = "Painted (Woodland, Muddy)";
                textures[] = {
                    "\rhsusf\addons\rhsusf_mrzr\data\blue_tan_pnt1_mud_co.paa",
                    "\rhsusf\addons\rhsusf_mrzr\data\yel_tan_pnt1_mud_co.paa",
                    "\rhsusf\addons\rhsusf_mrzr\data\red_tan_pnt1_mud_co.paa",
                    "\rhsusf\addons\rhsusf_mrzr\data\grn_tan_pnt1_mud_co.paa",
                    "\rhsusf\addons\rhsusf_mrzr\data\merged\orng_tan_paint_mud_co.paa"
                };
                factions[] = {"rhs_faction_socom"};
            };
            class olive: standard {
                displayName = "Olive";
                textures[] = {
                    "\rhsusf\addons\rhsusf_mrzr\data\blue_grn_co.paa",
                    "\rhsusf\addons\rhsusf_mrzr\data\yel_grn_co.paa",
                    "\rhsusf\addons\rhsusf_mrzr\data\red_grn_co.paa",
                    "\rhsusf\addons\rhsusf_mrzr\data\grn_grn_co.paa",
                    "\rhsusf\addons\rhsusf_mrzr\data\merged\orng_grn_co.paa"
                };
                factions[] = {"rhs_faction_socom"};
            };
            class mud_olive: mud {
                displayName = "Olive (Muddy)";
                textures[] = {
                    "\rhsusf\addons\rhsusf_mrzr\data\blue_grn_mud_co.paa",
                    "\rhsusf\addons\rhsusf_mrzr\data\yel_grn_mud_co.paa",
                    "\rhsusf\addons\rhsusf_mrzr\data\red_grn_mud_co.paa",
                    "\rhsusf\addons\rhsusf_mrzr\data\grn_grn_mud_co.paa",
                    "\rhsusf\addons\rhsusf_mrzr\data\merged\orng_grn_mud_co.paa"
                };
                factions[] = {"rhs_faction_socom"};
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
            class rhs_define_mainset {
                control = "Combo";
                displayName = "Define Main Set";
                tooltip = "Define Main Set";
                property = "rhs_define_mainset";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = 0;
                typeName = "STRING";
                class values {
                    class ODA_MRZR_D {
                        name = "ODA Desert";
                        value = "ODA_MRZR_D";
                        defaultValue = "ODA_MRZR_D";
                    };
                };
            };
            class rhs_hood_main {
                displayName = "Define Main Hood Decal";
                tooltip = "Define Main Hood Decal.  Type 8 to show decal, type 0 to clear that place.";
                property = "rhs_hood_main";
                control = "Edit";
                expression = "if(_value in [0,8])then{ [_this, [ [ 'Label', [5],  _this getVariable ['rhs_define_mainset','ODA_MRZR_D'],_value] ] ] call rhsusf_fnc_decalsInit;}";
                defaultValue = "-1";
                validate = "NUMBER";
                typeName = "NUMBER";
            };
            class rhs_hood_first {
                displayName = "Define Battalion Hood Decal";
                tooltip = "Define Battalion Hood Decal. Type 3 to show decal, type 0 to clear that place.";
                property = "rhs_hood_first";
                control = "Edit";
                expression = "if(_value in [0,3])then{ [_this, [ [ 'Label', [6],  _this getVariable ['rhs_define_mainset','ODA_MRZR_D'],_value] ] ] call rhsusf_fnc_decalsInit;}";
                defaultValue = "-1";
                validate = "NUMBER";
                typeName = "NUMBER";
            };
            class rhs_hood_battalion {
                displayName = "Define Battalion Hood Decal";
                tooltip = "Define Battalion Hood Decal. Available numbers from 1 to 4, type 0 to clear that place.";
                property = "rhs_hood_battalion";
                control = "Edit";
                expression = "if(_value in [0,1,2,3,4])then{ [_this, [ [ 'Label', [7],  _this getVariable ['rhs_define_mainset','ODA_MRZR_D'],_value] ] ] call rhsusf_fnc_decalsInit;}";
                defaultValue = "-1";
                validate = "NUMBER";
                typeName = "NUMBER";
            };
            class rhs_hood_company {
                displayName = "Define Company Hood Decal";
                tooltip = "Define Company Hood Decal. Available numbers from 1 to 3, type 0 to clear that place.";
                property = "rhs_hood_company";
                control = "Edit";
                expression = "if(_value in [0,1,2,3])then{ [_this, [ [ 'Label', [8],  _this getVariable ['rhs_define_mainset','ODA_MRZR_D'],_value] ] ] call rhsusf_fnc_decalsInit;}";
                defaultValue = "-1";
                validate = "NUMBER";
                typeName = "NUMBER";
            };
            class rhs_hood_team {
                displayName = "Define Team Hood Decal";
                tooltip = "Define Team Hood Decal. Available numbers from 1 to 6, type 0 to clear that place.";
                property = "rhs_hood_team";
                control = "Edit";
                expression = "if(_value in [0,1,2,3,4,5,6])then{ [_this, [ [ 'Label', [9],  _this getVariable ['rhs_define_mainset','ODA_MRZR_D'],_value] ] ] call rhsusf_fnc_decalsInit;}";
                defaultValue = "-1";
                validate = "NUMBER";
                typeName = "NUMBER";
            };
            class rhs_bumerstickers {
                displayName = "Show Bumperstickers";
                tooltip = "Show a random bumpersticker.";
                property = "rhs_bumerstickers";
                control = "CheckboxNumber";
                expression = "[_this, [[ 'Label', [10,11], 'MRZR_Bumperstickers', _value]]] call rhsusf_fnc_decalsInit;";
                defaultValue = "0";
            };
        };
    };
    class rhsusf_mrzr4_d: rhsusf_mrzr_base {
        author = "$STR_RHSUSF_AUTHOR_FULL";
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_mrzr4_d.paa";
        scope = 2;
        displayName = "MRZR 4";
        icon = "\rhsusf\addons\rhsusf_mrzr\icons\rhs_mrzr4_unarmed_icon_ca.paa";
        picture = "\rhsusf\addons\rhsusf_mrzr\pictures\rhs_mrzr4_unarmed_pic_ca.paa";
        crew = "rhsusf_socom_marsoc_jtac";
        hiddenSelectionsTextures[] = {
            "\rhsusf\addons\rhsusf_mrzr\data\blue_tan_co.paa",
            "\rhsusf\addons\rhsusf_mrzr\data\yel_tan_co.paa",
            "\rhsusf\addons\rhsusf_mrzr\data\red_tan_co.paa",
            "\rhsusf\addons\rhsusf_mrzr\data\grn_tan_co.paa",
            "\rhsusf\addons\rhsusf_mrzr\data\merged\orng_tan_co.paa"
        };
    };
    class rhsusf_mrzr4_d_mud: rhsusf_mrzr4_d {
        author = "$STR_RHSUSF_AUTHOR_FULL";
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_mrzr4_d_mud.paa";
        scope = 1;
        displayName = "MRZR 4 (mud)";
        hiddenSelectionsTextures[] = {
            "\rhsusf\addons\rhsusf_mrzr\data\blue_tan_mud_co.paa",
            "\rhsusf\addons\rhsusf_mrzr\data\yel_tan_mud_co.paa",
            "\rhsusf\addons\rhsusf_mrzr\data\red_tan_mud_co.paa",
            "\rhsusf\addons\rhsusf_mrzr\data\grn_tan_mud_co.paa",
            "\rhsusf\addons\rhsusf_mrzr\data\merged\orng_tan_mud_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "\rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_blue_mud.rvmat",
            "\rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_yel_metal_mud.rvmat",
            "\rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_red_mud.rvmat",
            "\rhsusf\addons\rhsusf_mrzr\data\rhsusf_mrzr_grn_mud.rvmat"
        };
    };
    class rhsusf_mrzr4_w: rhsusf_mrzr4_d {
        author = "$STR_RHSUSF_AUTHOR_FULL";
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_mrzr4_w.paa";
        scope = 1;
        displayName = "MRZR 4 (W)";
        hiddenSelectionsTextures[] = {
            "\rhsusf\addons\rhsusf_mrzr\data\blue_tan_pnt1_co.paa",
            "\rhsusf\addons\rhsusf_mrzr\data\yel_tan_pnt1_co.paa",
            "\rhsusf\addons\rhsusf_mrzr\data\red_tan_pnt1_co.paa",
            "\rhsusf\addons\rhsusf_mrzr\data\grn_tan_pnt1_co.paa",
            "\rhsusf\addons\rhsusf_mrzr\data\merged\orng_grn_co.paa"
        };
    };
    class rhsusf_mrzr4_w_mud: rhsusf_mrzr4_d_mud {
        author = "$STR_RHSUSF_AUTHOR_FULL";
        editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_mrzr4_w_mud.paa";
        scope = 1;
        displayName = "MRZR 4 (W, mud)";
        hiddenSelectionsTextures[] = {
            "\rhsusf\addons\rhsusf_mrzr\data\blue_tan_pnt1_mud_co.paa",
            "\rhsusf\addons\rhsusf_mrzr\data\yel_tan_pnt1_mud_co.paa",
            "\rhsusf\addons\rhsusf_mrzr\data\red_tan_pnt1_mud_co.paa",
            "\rhsusf\addons\rhsusf_mrzr\data\grn_tan_pnt1_mud_co.paa",
            "\rhsusf\addons\rhsusf_mrzr\data\merged\orng_grn_mud_co.paa"
        };
    };
};
class CfgWeapons {
    class Default;
    class MRZRHorn: Default {
        cursor = "";
        cursorAim = "";
        scope = 1;
        displayName = "$STR_A3_cfgWeapons_CarHorn0";
        reloadTime = 0;
        drySound[] = {
            "rhsusf\addons\rhsusf_mrzr\sounds\rhs_mrzr_horn.wss",
            1,
            1,
            200
        };
        canLock = 0;
        optics = 0;
        enableAttack = 0;
    };
};
