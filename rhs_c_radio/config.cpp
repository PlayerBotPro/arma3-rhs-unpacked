class CfgPatches {
    class RHS_c_radio {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {"rhs_main"};
    };
};
class CfgVoice {
    voices[] += {
        "RHS_Male01RUS",
        "RHS_Male02RUS",
        "RHS_Male03RUS",
        "RHS_Male04RUS",
        "RHS_Male05RUS"
    };
    class Base;
    class RHS_BaseRUS: Base {
        variants[] = {0.95, 1, 1.05};
        voiceType = "";
        scope = 0;
        directories[] = {"", ""};
        protocol = "RHS_RadioProtocolBaseRus";
    };
    class RHS_RUS: RHS_BaseRUS {
        protocol = "RHS_RadioProtocolRus";
        icon = "\rhsafrf\addons\RHS_main\data\flag_map\flag_rus_co.paa";
        identityTypes[] = {"LanguageRus"};
    };
    class RHS_Male01RUS: RHS_RUS {
        author = "$STR_A3_Bohemia_Interactive";
        displayName = "Russian Voice 01";
        directories[] = {"\rhsafrf\addons\rhs_s_radio\radio\Male01\", "\rhsafrf\addons\rhs_s_radio\radio\Male01\"};
        scope = 2;
    };
    class RHS_Male02RUS: RHS_RUS {
        author = "$STR_A3_Bohemia_Interactive";
        displayName = "Russian Voice 02";
        directories[] = {"\rhsafrf\addons\rhs_s_radio\radio\Male02\", "\rhsafrf\addons\rhs_s_radio\radio\Male02\"};
        scope = 2;
    };
    class RHS_Male03RUS: RHS_RUS {
        author = "$STR_A3_Bohemia_Interactive";
        displayName = "Russian Voice 03";
        directories[] = {"\rhsafrf\addons\rhs_s_radio\radio\Male03\", "\rhsafrf\addons\rhs_s_radio\radio\Male03\"};
        scope = 2;
    };
    class RHS_Male04RUS: RHS_RUS {
        author = "$STR_A3_Bohemia_Interactive";
        displayName = "Russian Voice 04";
        directories[] = {"\rhsafrf\addons\rhs_s_radio\radio\Male04\", "\rhsafrf\addons\rhs_s_radio\radio\Male04\"};
        scope = 2;
    };
    class RHS_Male05RUS: RHS_RUS {
        author = "$STR_A3_Bohemia_Interactive";
        displayName = "Russian Voice 05";
        directories[] = {"\rhsafrf\addons\rhs_s_radio\radio\Male02\", "\rhsafrf\addons\rhs_s_radio\radio\Male02\"};
        scope = 2;
    };
};
class CfgVoiceTypes {
    class Male01_F {
        voices[] += {"RHS_Male01RUS"};
    };
    class Male02_F {
        voices[] += {"RHS_Male02RUS"};
    };
    class Male03_F {
        voices[] += {"RHS_Male03RUS"};
    };
    class Male04_F {
        voices[] += {"RHS_Male04RUS"};
    };
    class Male05_F {
        voices[] += {"RHS_Male05RUS"};
    };
    class Male06_F {
        voices[] += {"RHS_Male05RUS"};
    };
    class Male07_F {
        voices[] += {"RHS_Male03RUS"};
    };
    class Male08_F {
        voices[] += {"RHS_Male03RUS"};
    };
    class Male09_F {
        voices[] += {"RHS_Male02RUS"};
    };
    class Male10_F {
        voices[] += {"RHS_Male01RUS"};
    };
    class Male11_F {
        voices[] += {"RHS_Male02RUS"};
    };
    class Male12_F {
        voices[] += {"RHS_Male03RUS"};
    };
};
class RadioProtocolBase {
    class Words;
    class Arguments;
};
class RHS_RadioProtocolBaseRUS: RadioProtocolBase {
    class Default;
    class Report;
    class PriorityReport;
    class Confirmation;
    class Completition;
    class JoinCompleted;
    class Failure;
    class Notify;
    class Detected;
    class NormalCommand;
    class CriticalReport;
    class UrgentCommand;
    class UICommand;
    class Design;
    class CombatShout: Default {
        noRadio = 1;
    };
    class SentUnitKilled;
    class SentSupportAskHeal;
    class SentSupportAskRepair;
    class SentSupportAskRefuel;
    class SentSupportAskRearm;
    class SentSupportConfirm;
    class SentSupportReady;
    class SentSupportDone;
    class SentSupportNotAvailable;
    class SentHealthCritical;
    class SentHealthNormal;
    class SentHealthUnconscious;
    class SentDammageCritical;
    class SentOutOfFirstAidKits;
    class SentFuelCritical;
    class SentFuelLow;
    class SentAmmoCritical;
    class SentAmmoLow;
    class SentReportPosition;
    class SentIsLeader;
    class SentCommandCompleted;
    class SentJoinCompleted;
    class SentFireReady;
    class SentDetectedMine;
    class SentDetectedBomb;
    class SentDetectedExplosive;
    class SentFireNegative;
    class SentCommandFailed;
    class SentDestinationUnreacheable;
    class SelectEnemyDetectedSentence;
    class SentEnemyDetectedGroupCoreRelative;
    class SentEnemyDetectedOnGridReference;
    class SentEnemyDetectedLocationRelative;
    class SentEnemyDetectedUnitRelative;
    class SentEnemyDetectedSenderRelative;
    class SentObjectDestroyed;
    class SentObjectDestroyedUnknown;
    class SentContact;
    class SentUnderFire;
    class SentCoverMe;
    class SentCovering;
    class SentSuppressing;
    class SentReloading;
    class SentThrowingGrenade;
    class SentThrowingSmoke;
    class SentIncomingGrenade;
    class SentEnemyContact;
    class SentEndangered;
    class SentRouted;
    class SentWitnessDeadBody;
    class SentWitnessKilled;
    class SentCombatGeneric;
    class SentCheering;
    class SentScreaming;
    class SentClear;
    class SentRepeatCommand;
    class SentWhereAreYou;
    class SentReturnToFormation;
    class SentFormColumn;
    class SentFormStaggeredColumn;
    class SentFormWedge;
    class SentFormEcholonLeft;
    class SentFormEcholonRight;
    class SentFormVee;
    class SentFormLine;
    class SentFormFile;
    class SentFormDiamond;
    class SentBehaviourCareless;
    class SentBehaviourSafe;
    class SentBehaviourAware;
    class SentBehaviourCombat;
    class SentBehaviourStealth;
    class SentOpenFire;
    class SentOpenFireInCombat;
    class SentHoldFire;
    class SentHoldFireInCombat;
    class SentCeaseFireInsideGroup;
    class SentCeaseFire;
    class SentLooseFormation;
    class SentKeepFormation;
    class SentUnitPosDown;
    class SentUnitPosMiddle;
    class SentUnitPosUp;
    class SentUnitPosAuto;
    class SentFormPosAdvance;
    class SentFormPosStayBack;
    class SentFormPosFlankLeft;
    class SentFormPosFlankRight;
    class SentReportStatus;
    class SentTeam;
    class SentTeamPlural;
    class SentWatchTgt;
    class SentWatchDir;
    class SentWatchPos;
    class SentWatchAround;
    class SentNoTarget;
    class SentTarget;
    class SentEngage;
    class SentFire;
    class SentEngageNoTarget;
    class SentFireNoTarget;
    class SelectCmdMoveSentence;
    class SentCmdMoveGroupRelative;
    class SentCmdMoveRecipientsRelative;
    class SentCmdMoveToGrid;
    class SentCmdMoveToTarget;
    class SentCmdMoveToObject;
    class SentCmdMoveLocationRelative;
    class SentCmdHealSomeone;
    class SentCmdHealSelf;
    class SentAssemble;
    class SentDisassemble;
    class SentCmdActionTakeBag;
    class SentCmdActionDropBag;
    class SentCmdActionOpenBag;
    class SentLightsOn;
    class SentLightsOff;
    class SentPointersOn;
    class SentPointersOff;
    class SentCmdHeal;
    class SentCmdHealFar;
    class SentCmdHealAt;
    class SentCmdRepair;
    class SentCmdRepairFar;
    class SentCmdRepairAt;
    class SentCmdRefuel;
    class SentCmdRefuelFar;
    class SentCmdRefuelAt;
    class SentCmdRearm;
    class SentCmdRearmFar;
    class SentCmdRearmAt;
    class SentCmdSupport;
    class SentCmdSupportFar;
    class SentCmdSupportAt;
    class SentCmdDropWeapon;
    class SentCmdDropMagazine;
    class SentCmdTakeWeapon;
    class SentCmdTakeWeaponFar;
    class SentCmdTakeWeaponAt;
    class SentCmdTakeMagazine;
    class SentCmdTakeMagazineFar;
    class SentCmdTakeMagazineAt;
    class SentCmdAction;
    class SentCmdActionNear;
    class SentCmdActionFar;
    class SentCmdActionAt;
    class SentCmdTakeFlag;
    class SentCmdTakeFlagFar;
    class SentCmdTakeFlagAt;
    class SentCmdReturnFlag;
    class SentCmdReturnFlagFar;
    class SentCmdReturnFlagAt;
    class SentCmdEject;
    class SentCmdPlaceCharge;
    class SentCmdDetonate;
    class SentCmdActivateTimer;
    class SentCmdDeactivateBomb;
    class SentCmdDeactivateMine;
    class SentCmdTakeMine;
    class SentCmdLightFire;
    class SentCmdLightFireFar;
    class SentCmdLightFireAt;
    class SentCmdPutOutFire;
    class SentCmdPutOutFireFar;
    class SentCmdPutOutFireAt;
    class SentCmdOpenDoor;
    class SentCmdOpenDoorFar;
    class SentCmdOpenDoorAt;
    class SentCmdCloseDoor;
    class SentCmdCloseDoorFar;
    class SentCmdCloseDoorAt;
    class SentCmdFollowMe;
    class SentCmdFollow;
    class SentCmdAttack;
    class SentAttackNoTarget;
    class SentCmdFire;
    class SentCmdGetIn;
    class SentCmdGetInCommander;
    class SentCmdGetInDriver;
    class SentCmdGetInPilot;
    class SentCmdGetInGunner;
    class SentCmdGetInCargo;
    class SentCmdSwitchToDriver;
    class SentCmdSwitchToGunner;
    class SentCmdSwitchToCommander;
    class SentCmdSwitchToCargo;
    class SentCmdGetOut;
    class SentCmdStop;
    class SentCmdExpect;
    class SentCmdHide;
    class SentCmdDismiss;
    class SentNotifyAttack;
    class SentNotifyAttackSubgroup;
    class SentNotifySupport;
    class SentConfirmMove;
    class SentConfirmAttack;
    class SentConfirmOther;
    class SentRepairThat;
    class SentARTYFireAt;
    class SentARTYFireAtWithAmmo;
    class SentARTYRoundsComplete;
    class SentARTYCannotExecuteAdjustCoordinates;
    class SentARTYCannotExecuteThatsOutsideOurFiringEnvelope;
    class SelectVehicleMoveSentence;
    class VehicleMoveGroupRelative;
    class VehicleMoveRecipientsRelative;
    class VehicleMoveToGrid;
    class VehicleMoveToObject;
    class VehicleMoveLocationRelative;
    class VehicleWatchTgt;
    class VehicleWatchPos;
    class VehicleJoin;
    class VehicleFire;
    class VehicleTarget;
    class VehicleNoTarget;
    class VehicleCeaseFire;
    class VehicleForward;
    class VehicleStop;
    class VehicleBackward;
    class VehicleFaster;
    class VehicleSlower;
    class VehicleLeft;
    class VehicleRight;
    class VehicleManualFire;
    class VehicleCancelManualFire;
    class VehicleDirectFire;
    class VehicleLoad;
    class VehicleLoadMagazine;
    class VehicleAzimut;
    class VehicleFireFailed;
    class ClausePosition;
    class ClausePositionNear;
    class SentObjectUnconscious;
    class SentObjectUnconsciousUnknown;
    class SentCmdPatchSomeone;
    class SentCmdCarrySomeone;
    class Words;
    class Arguments: Arguments {
        class Direction;
        class Distance1;
        class AggrTargets;
    };
};
class RadioProtocolRUS: RadioProtocolBase {
    class Words: Words {
        Smolko[] = {"Normal\020_Names\Smolko.ogg"};
        Sternik[] = {"Normal\020_Names\Sternik.ogg"};
        Stolarski[] = {"Normal\020_Names\Stolarski.ogg"};
        Stype[] = {"Normal\020_Names\Stype.ogg"};
        Yakhin[] = {"Normal\020_Names\Yakhin.ogg"};
        Zielinski[] = {"Normal\020_Names\Zielinski.ogg"};
        Adamovich[] = {"Normal\020_Names\Adamovich.ogg"};
        Burak[] = {"Normal\020_Names\Burak.ogg"};
        Gorecki[] = {"Normal\020_Names\Gorecki.ogg"};
        Ivanov[] = {"Normal\020_Names\Ivanov.ogg"};
        Kesson[] = {"Normal\020_Names\Kesson.ogg"};
        Kowalski[] = {"Normal\020_Names\Kowalski.ogg"};
        Kruglikov[] = {"Normal\020_Names\Kruglikov.ogg"};
        Krupin[] = {"Normal\020_Names\Krupin.ogg"};
        Kushan[] = {"Normal\020_Names\Kushan.ogg"};
        Nowak[] = {"Normal\020_Names\Nowak.ogg"};
        Petrenko[] = {"Normal\020_Names\Petrenko.ogg"};
        class Normal {
            Smolko[] = {"Normal\020_Names\Smolko.ogg"};
            Sternik[] = {"Normal\020_Names\Sternik.ogg"};
            Stolarski[] = {"Normal\020_Names\Stolarski.ogg"};
            Stype[] = {"Normal\020_Names\Stype.ogg"};
            Yakhin[] = {"Normal\020_Names\Yakhin.ogg"};
            Zielinski[] = {"Normal\020_Names\Zielinski.ogg"};
            Adamovich[] = {"Normal\020_Names\Adamovich.ogg"};
            Burak[] = {"Normal\020_Names\Burak.ogg"};
            Gorecki[] = {"Normal\020_Names\Gorecki.ogg"};
            Ivanov[] = {"Normal\020_Names\Ivanov.ogg"};
            Kesson[] = {"Normal\020_Names\Kesson.ogg"};
            Kowalski[] = {"Normal\020_Names\Kowalski.ogg"};
            Kruglikov[] = {"Normal\020_Names\Kruglikov.ogg"};
            Krupin[] = {"Normal\020_Names\Krupin.ogg"};
            Kushan[] = {"Normal\020_Names\Kushan.ogg"};
            Nowak[] = {"Normal\020_Names\Nowak.ogg"};
            Petrenko[] = {"Normal\020_Names\Petrenko.ogg"};
        };
        class CombatEngage: Normal {
            Smolko[] = {"Normal\020_Names\Smolko.ogg"};
            Sternik[] = {"Normal\020_Names\Sternik.ogg"};
            Stolarski[] = {"Normal\020_Names\Stolarski.ogg"};
            Stype[] = {"Normal\020_Names\Stype.ogg"};
            Yakhin[] = {"Normal\020_Names\Yakhin.ogg"};
            Zielinski[] = {"Normal\020_Names\Zielinski.ogg"};
            Adamovich[] = {"Normal\020_Names\Adamovich.ogg"};
            Burak[] = {"Normal\020_Names\Burak.ogg"};
            Gorecki[] = {"Normal\020_Names\Gorecki.ogg"};
            Ivanov[] = {"Normal\020_Names\Ivanov.ogg"};
            Kesson[] = {"Normal\020_Names\Kesson.ogg"};
            Kowalski[] = {"Normal\020_Names\Kowalski.ogg"};
            Kruglikov[] = {"Normal\020_Names\Kruglikov.ogg"};
            Krupin[] = {"Normal\020_Names\Krupin.ogg"};
            Kushan[] = {"Normal\020_Names\Kushan.ogg"};
            Nowak[] = {"Normal\020_Names\Nowak.ogg"};
            Petrenko[] = {"Normal\020_Names\Petrenko.ogg"};
        };
        class NormalContact: Normal {
            Smolko[] = {"NormalContact\020_Names\Smolko.ogg"};
            Sternik[] = {"NormalContact\020_Names\Sternik.ogg"};
            Stolarski[] = {"NormalContact\020_Names\Stolarski.ogg"};
            Stype[] = {"NormalContact\020_Names\Stype.ogg"};
            Yakhin[] = {"NormalContact\020_Names\Yakhin.ogg"};
            Zielinski[] = {"NormalContact\020_Names\Zielinski.ogg"};
            Adamovich[] = {"NormalContact\020_Names\Adamovich.ogg"};
            Burak[] = {"NormalContact\020_Names\Burak.ogg"};
            Gorecki[] = {"NormalContact\020_Names\Gorecki.ogg"};
            Ivanov[] = {"NormalContact\020_Names\Ivanov.ogg"};
            Kesson[] = {"NormalContact\020_Names\Kesson.ogg"};
            Kowalski[] = {"NormalContact\020_Names\Kowalski.ogg"};
            Kruglikov[] = {"NormalContact\020_Names\Kruglikov.ogg"};
            Krupin[] = {"NormalContact\020_Names\Krupin.ogg"};
            Kushan[] = {"NormalContact\020_Names\Kushan.ogg"};
            Nowak[] = {"NormalContact\020_Names\Nowak.ogg"};
            Petrenko[] = {"NormalContact\020_Names\Petrenko.ogg"};
        };
        class CombatContact: Normal {
            Smolko[] = {"CombatContact\020_Names\Smolko.ogg"};
            Sternik[] = {"CombatContact\020_Names\Sternik.ogg"};
            Stolarski[] = {"CombatContact\020_Names\Stolarski.ogg"};
            Stype[] = {"CombatContact\020_Names\Stype.ogg"};
            Yakhin[] = {"CombatContact\020_Names\Yakhin.ogg"};
            Zielinski[] = {"CombatContact\020_Names\Zielinski.ogg"};
            Adamovich[] = {"CombatContact\020_Names\Adamovich.ogg"};
            Burak[] = {"CombatContact\020_Names\Burak.ogg"};
            Gorecki[] = {"CombatContact\020_Names\Gorecki.ogg"};
            Ivanov[] = {"CombatContact\020_Names\Ivanov.ogg"};
            Kesson[] = {"CombatContact\020_Names\Kesson.ogg"};
            Kowalski[] = {"CombatContact\020_Names\Kowalski.ogg"};
            Kruglikov[] = {"CombatContact\020_Names\Kruglikov.ogg"};
            Krupin[] = {"CombatContact\020_Names\Krupin.ogg"};
            Kushan[] = {"CombatContact\020_Names\Kushan.ogg"};
            Nowak[] = {"CombatContact\020_Names\Nowak.ogg"};
            Petrenko[] = {"CombatContact\020_Names\Petrenko.ogg"};
        };
        class Stealth: Normal {
            Smolko[] = {"Stealth\020_Names\Smolko.ogg"};
            Sternik[] = {"Stealth\020_Names\Sternik.ogg"};
            Stolarski[] = {"Stealth\020_Names\Stolarski.ogg"};
            Stype[] = {"Stealth\020_Names\Stype.ogg"};
            Yakhin[] = {"Stealth\020_Names\Yakhin.ogg"};
            Zielinski[] = {"Stealth\020_Names\Zielinski.ogg"};
            Adamovich[] = {"Stealth\020_Names\Adamovich.ogg"};
            Burak[] = {"Stealth\020_Names\Burak.ogg"};
            Gorecki[] = {"Stealth\020_Names\Gorecki.ogg"};
            Ivanov[] = {"Stealth\020_Names\Ivanov.ogg"};
            Kesson[] = {"Stealth\020_Names\Kesson.ogg"};
            Kowalski[] = {"Stealth\020_Names\Kowalski.ogg"};
            Kruglikov[] = {"Stealth\020_Names\Kruglikov.ogg"};
            Krupin[] = {"Stealth\020_Names\Krupin.ogg"};
            Kushan[] = {"Stealth\020_Names\Kushan.ogg"};
            Nowak[] = {"Stealth\020_Names\Nowak.ogg"};
            Petrenko[] = {"Stealth\020_Names\Petrenko.ogg"};
        };
        class Combat: Normal {
            Smolko[] = {"Combat\020_Names\Smolko.ogg"};
            Sternik[] = {"Combat\020_Names\Sternik.ogg"};
            Stolarski[] = {"Combat\020_Names\Stolarski.ogg"};
            Stype[] = {"Combat\020_Names\Stype.ogg"};
            Yakhin[] = {"Combat\020_Names\Yakhin.ogg"};
            Zielinski[] = {"Combat\020_Names\Zielinski.ogg"};
            Adamovich[] = {"Combat\020_Names\Adamovich.ogg"};
            Burak[] = {"Combat\020_Names\Burak.ogg"};
            Gorecki[] = {"Combat\020_Names\Gorecki.ogg"};
            Ivanov[] = {"Combat\020_Names\Ivanov.ogg"};
            Kesson[] = {"Combat\020_Names\Kesson.ogg"};
            Kowalski[] = {"Combat\020_Names\Kowalski.ogg"};
            Kruglikov[] = {"Combat\020_Names\Kruglikov.ogg"};
            Krupin[] = {"Combat\020_Names\Krupin.ogg"};
            Kushan[] = {"Combat\020_Names\Kushan.ogg"};
            Nowak[] = {"Combat\020_Names\Nowak.ogg"};
            Petrenko[] = {"Combat\020_Names\Petrenko.ogg"};
        };
        class NormalEngage: Normal {
            Smolko[] = {"NormalEngage\020_Names\Smolko.ogg"};
            Sternik[] = {"NormalEngage\020_Names\Sternik.ogg"};
            Stolarski[] = {"NormalEngage\020_Names\Stolarski.ogg"};
            Stype[] = {"NormalEngage\020_Names\Stype.ogg"};
            Yakhin[] = {"NormalEngage\020_Names\Yakhin.ogg"};
            Zielinski[] = {"NormalEngage\020_Names\Zielinski.ogg"};
            Adamovich[] = {"NormalEngage\020_Names\Adamovich.ogg"};
            Burak[] = {"NormalEngage\020_Names\Burak.ogg"};
            Gorecki[] = {"NormalEngage\020_Names\Gorecki.ogg"};
            Ivanov[] = {"NormalEngage\020_Names\Ivanov.ogg"};
            Kesson[] = {"NormalEngage\020_Names\Kesson.ogg"};
            Kowalski[] = {"NormalEngage\020_Names\Kowalski.ogg"};
            Kruglikov[] = {"NormalEngage\020_Names\Kruglikov.ogg"};
            Krupin[] = {"NormalEngage\020_Names\Krupin.ogg"};
            Kushan[] = {"NormalEngage\020_Names\Kushan.ogg"};
            Nowak[] = {"NormalEngage\020_Names\Nowak.ogg"};
            Petrenko[] = {"NormalEngage\020_Names\Petrenko.ogg"};
        };
        class NormalWatch: Normal {
            Smolko[] = {"NormalWatch\020_Names\Smolko.ogg"};
            Sternik[] = {"NormalWatch\020_Names\Sternik.ogg"};
            Stolarski[] = {"NormalWatch\020_Names\Stolarski.ogg"};
            Stype[] = {"NormalWatch\020_Names\Stype.ogg"};
            Yakhin[] = {"NormalWatch\020_Names\Yakhin.ogg"};
            Zielinski[] = {"NormalWatch\020_Names\Zielinski.ogg"};
            Adamovich[] = {"NormalWatch\020_Names\Adamovich.ogg"};
            Burak[] = {"NormalWatch\020_Names\Burak.ogg"};
            Gorecki[] = {"NormalWatch\020_Names\Gorecki.ogg"};
            Ivanov[] = {"NormalWatch\020_Names\Ivanov.ogg"};
            Kesson[] = {"NormalWatch\020_Names\Kesson.ogg"};
            Kowalski[] = {"NormalWatch\020_Names\Kowalski.ogg"};
            Kruglikov[] = {"NormalWatch\020_Names\Kruglikov.ogg"};
            Krupin[] = {"NormalWatch\020_Names\Krupin.ogg"};
            Kushan[] = {"NormalWatch\020_Names\Kushan.ogg"};
            Nowak[] = {"NormalWatch\020_Names\Nowak.ogg"};
            Petrenko[] = {"NormalWatch\020_Names\Petrenko.ogg"};
        };
        class NormalTarget: Normal {
            Smolko[] = {"NormalTarget\020_Names\Smolko.ogg"};
            Sternik[] = {"NormalTarget\020_Names\Sternik.ogg"};
            Stolarski[] = {"NormalTarget\020_Names\Stolarski.ogg"};
            Stype[] = {"NormalTarget\020_Names\Stype.ogg"};
            Yakhin[] = {"NormalTarget\020_Names\Yakhin.ogg"};
            Zielinski[] = {"NormalTarget\020_Names\Zielinski.ogg"};
            Adamovich[] = {"NormalTarget\020_Names\Adamovich.ogg"};
            Burak[] = {"NormalTarget\020_Names\Burak.ogg"};
            Gorecki[] = {"NormalTarget\020_Names\Gorecki.ogg"};
            Ivanov[] = {"NormalTarget\020_Names\Ivanov.ogg"};
            Kesson[] = {"NormalTarget\020_Names\Kesson.ogg"};
            Kowalski[] = {"NormalTarget\020_Names\Kowalski.ogg"};
            Kruglikov[] = {"NormalTarget\020_Names\Kruglikov.ogg"};
            Krupin[] = {"NormalTarget\020_Names\Krupin.ogg"};
            Kushan[] = {"NormalTarget\020_Names\Kushan.ogg"};
            Nowak[] = {"NormalTarget\020_Names\Nowak.ogg"};
            Petrenko[] = {"NormalTarget\020_Names\Petrenko.ogg"};
        };
        class StealthEngage: Normal {
            Smolko[] = {"StealthEngage\020_Names\Smolko.ogg"};
            Sternik[] = {"StealthEngage\020_Names\Sternik.ogg"};
            Stolarski[] = {"StealthEngage\020_Names\Stolarski.ogg"};
            Stype[] = {"StealthEngage\020_Names\Stype.ogg"};
            Yakhin[] = {"StealthEngage\020_Names\Yakhin.ogg"};
            Zielinski[] = {"StealthEngage\020_Names\Zielinski.ogg"};
            Adamovich[] = {"StealthEngage\020_Names\Adamovich.ogg"};
            Burak[] = {"StealthEngage\020_Names\Burak.ogg"};
            Gorecki[] = {"StealthEngage\020_Names\Gorecki.ogg"};
            Ivanov[] = {"StealthEngage\020_Names\Ivanov.ogg"};
            Kesson[] = {"StealthEngage\020_Names\Kesson.ogg"};
            Kowalski[] = {"StealthEngage\020_Names\Kowalski.ogg"};
            Kruglikov[] = {"StealthEngage\020_Names\Kruglikov.ogg"};
            Krupin[] = {"StealthEngage\020_Names\Krupin.ogg"};
            Kushan[] = {"StealthEngage\020_Names\Kushan.ogg"};
            Nowak[] = {"StealthEngage\020_Names\Nowak.ogg"};
            Petrenko[] = {"StealthEngage\020_Names\Petrenko.ogg"};
        };
        class StealthWatch: Normal {
            Smolko[] = {"StealthWatch\020_Names\Smolko.ogg"};
            Sternik[] = {"StealthWatch\020_Names\Sternik.ogg"};
            Stolarski[] = {"StealthWatch\020_Names\Stolarski.ogg"};
            Stype[] = {"StealthWatch\020_Names\Stype.ogg"};
            Yakhin[] = {"StealthWatch\020_Names\Yakhin.ogg"};
            Zielinski[] = {"StealthWatch\020_Names\Zielinski.ogg"};
            Adamovich[] = {"StealthWatch\020_Names\Adamovich.ogg"};
            Burak[] = {"StealthWatch\020_Names\Burak.ogg"};
            Gorecki[] = {"StealthWatch\020_Names\Gorecki.ogg"};
            Ivanov[] = {"StealthWatch\020_Names\Ivanov.ogg"};
            Kesson[] = {"StealthWatch\020_Names\Kesson.ogg"};
            Kowalski[] = {"StealthWatch\020_Names\Kowalski.ogg"};
            Kruglikov[] = {"StealthWatch\020_Names\Kruglikov.ogg"};
            Krupin[] = {"StealthWatch\020_Names\Krupin.ogg"};
            Kushan[] = {"StealthWatch\020_Names\Kushan.ogg"};
            Nowak[] = {"StealthWatch\020_Names\Nowak.ogg"};
            Petrenko[] = {"StealthWatch\020_Names\Petrenko.ogg"};
        };
    };
};
class RHS_RadioProtocolRUS: RHS_RadioProtocolBaseRUS {
    class Words: Words {
        NO_SPEECH[] = {};
        micOut1[] = {"\rhsafrf\addons\rhs_s_radio\radio\static\micIn.wss"};
        micOut2[] = {"\rhsafrf\addons\rhs_s_radio\radio\static\micIn.wss"};
        micOut3[] = {"\rhsafrf\addons\rhs_s_radio\radio\static\micIn.wss"};
        micOut4[] = {"\rhsafrf\addons\rhs_s_radio\radio\static\micOut.wss"};
        micOut5[] = {"\rhsafrf\addons\rhs_s_radio\radio\static\micOut.wss"};
        micOut6[] = {"\rhsafrf\addons\rhs_s_radio\radio\static\micOut.wss"};
        loop[] = {"\A3\Dubbing_Radio_F\Sfx\radionoise1.ogg"};
        micOut[] = {"\rhsafrf\addons\rhs_s_radio\radio\static\micOut.wss"};
        beepBeep[] = {"\rhsafrf\addons\rhs_s_radio\radio\static\micIn.wss"};
        pause[] = {"\A3\Dubbing_Radio_F\Sfx\empty01s.ogg"};
        xmit[] = {"\rhsafrf\addons\rhs_s_radio\radio\static\micIn.wss"};
        all[] = {"RU\numbers\all"};
        allGroup[] = {"RU\team\team"};
        grid_move_to_zero[] = {"RU\numbers\zero"};
        grid_move_to_one[] = {"RU\numbers\one"};
        grid_move_to_two[] = {"RU\numbers\two"};
        grid_move_to_three[] = {"RU\numbers\three"};
        grid_move_to_four[] = {"RU\numbers\four"};
        grid_move_to_five[] = {"RU\numbers\five"};
        grid_move_to_six[] = {"RU\numbers\six"};
        grid_move_to_seven[] = {"RU\numbers\seven"};
        grid_move_to_eight[] = {"RU\numbers\eight"};
        grid_move_to_nine[] = {"RU\numbers\nine"};
        grid_zero[] = {"RU\numbers\zero"};
        grid_one[] = {"RU\numbers\one"};
        grid_two[] = {"RU\numbers\two"};
        grid_three[] = {"RU\numbers\three"};
        grid_four[] = {"RU\numbers\four"};
        grid_five[] = {"RU\numbers\five"};
        grid_six[] = {"RU\numbers\six"};
        grid_seven[] = {"RU\numbers\seven"};
        grid_eight[] = {"RU\numbers\eight"};
        grid_nine[] = {"RU\numbers\nine"};
        grid_zero_2[] = {"RU\numbers\zero"};
        grid_one_2[] = {"RU\numbers\one"};
        grid_two_2[] = {"RU\numbers\two"};
        grid_three_2[] = {"RU\numbers\three"};
        grid_four_2[] = {"RU\numbers\four"};
        grid_five_2[] = {"RU\numbers\five"};
        grid_six_2[] = {"RU\numbers\six"};
        grid_seven_2[] = {"RU\numbers\seven"};
        grid_eight_2[] = {"RU\numbers\eight"};
        grid_nine_2[] = {"RU\numbers\nine"};
        grid_zero_3[] = {"RU\numbers\zero"};
        grid_one_3[] = {"RU\numbers\one"};
        grid_two_3[] = {"RU\numbers\two"};
        grid_three_3[] = {"RU\numbers\three"};
        grid_four_3[] = {"RU\numbers\four"};
        grid_five_3[] = {"RU\numbers\five"};
        grid_six_3[] = {"RU\numbers\six"};
        grid_seven_3[] = {"RU\numbers\seven"};
        grid_eight_3[] = {"RU\numbers\eight"};
        grid_nine_3[] = {"RU\numbers\nine"};
        zero[] = {"RU\numbers\zero"};
        one[] = {"RU\numbers\one2"};
        two[] = {"RU\numbers\two2"};
        three[] = {"RU\numbers\three2"};
        four[] = {"RU\numbers\four2"};
        five[] = {"RU\numbers\five2"};
        six[] = {"RU\numbers\six2"};
        seven[] = {"RU\numbers\seven2"};
        eight[] = {"RU\numbers\eight2"};
        nine[] = {"RU\numbers\nine2"};
        ten[] = {"RU\numbers\ten2"};
        eleven[] = {"RU\numbers\eleven2"};
        twelve[] = {"RU\numbers\twelve2"};
        thirteen[] = {"RU\numbers\thirteen"};
        fourteen[] = {"RU\numbers\fourteen"};
        fifteen[] = {"RU\numbers\fifteen"};
        sixteen[] = {"RU\numbers\sixteen"};
        seventeen[] = {"RU\numbers\seventeen"};
        eighteen[] = {"RU\numbers\eighteen"};
        nineteen[] = {"RU\numbers\nineteen"};
        twenty[] = {"RU\numbers\twenty"};
        thirty[] = {"RU\numbers\thirty"};
        forty[] = {"RU\numbers\forty"};
        fifty[] = {"RU\numbers\fifty"};
        sixty[] = {"RU\numbers\sixty"};
        seventy[] = {"RU\numbers\seventy"};
        eighty[] = {"RU\numbers\eighty"};
        ninety[] = {"RU\numbers\ninety"};
        hundred[] = {"RU\numbers\hundred"};
        zero2[] = {"RU\numbers\zero"};
        one2[] = {"RU\numbers\one"};
        two2[] = {"RU\numbers\two"};
        three2[] = {"RU\numbers\three"};
        four2[] = {"RU\numbers\four"};
        five2[] = {"RU\numbers\five"};
        six2[] = {"RU\numbers\six"};
        seven2[] = {"RU\numbers\seven"};
        eight2[] = {"RU\numbers\eight"};
        nine2[] = {"RU\numbers\nine"};
        ten2[] = {"RU\numbers\ten"};
        eleven2[] = {"RU\numbers\eleven"};
        twelve2[] = {"RU\numbers\twelve"};
        alpha[] = {"RU\alphabet\alpha"};
        bravo[] = {"RU\alphabet\bravo"};
        charlie[] = {"RU\alphabet\charlie"};
        delta[] = {"RU\alphabet\delta"};
        echo[] = {"RU\alphabet\echo"};
        foxtrot[] = {"RU\alphabet\fotxtrot"};
        golf[] = {"RU\alphabet\golf"};
        hotel[] = {"RU\alphabet\hotel"};
        india[] = {"RU\alphabet\india"};
        juliet[] = {"RU\alphabet\juliet"};
        kilo[] = {"RU\alphabet\kilo"};
        lima[] = {"RU\alphabet\lima"};
        mike[] = {"RU\alphabet\mike"};
        november[] = {"RU\alphabet\november"};
        oscar[] = {"RU\alphabet\oscar"};
        papa[] = {"RU\alphabet\papa"};
        quebec[] = {"RU\alphabet\quebec"};
        romeo[] = {"RU\alphabet\romeo"};
        sierra[] = {"RU\alphabet\sierra"};
        tango[] = {"RU\alphabet\tango"};
        uniform[] = {"RU\alphabet\uniform"};
        victor[] = {"RU\alphabet\victor"};
        whiskey[] = {"RU\alphabet\whiskey"};
        xray[] = {"RU\alphabet\xray"};
        yankee[] = {"RU\alphabet\yankee"};
        zulu[] = {"RU\alphabet\zulu"};
        whiteTeam[] = {"RU\team\teamwhite"};
        redTeam[] = {"RU\team\teamred"};
        greenTeam[] = {"RU\team\teamgreen"};
        blueTeam[] = {"RU\team\teamblue"};
        yellowTeam[] = {"RU\team\teamyellow"};
        at10[] = {"RU\clockfacing\10oclock"};
        at11[] = {"RU\clockfacing\11oclock"};
        at12[] = {"RU\clockfacing\12oclock"};
        at1[] = {"RU\clockfacing\1oclock"};
        at2[] = {"RU\clockfacing\2oclock"};
        at3[] = {"RU\clockfacing\3oclock"};
        at4[] = {"RU\clockfacing\4oclock"};
        at5[] = {"RU\clockfacing\5oclock"};
        at6[] = {"RU\clockfacing\6oclock"};
        at7[] = {"RU\clockfacing\7oclock"};
        at8[] = {"RU\clockfacing\8oclock"};
        at9[] = {"RU\clockfacing\9oclock"};
        dist75[] = {"RU\distance\dist50"};
        dist100[] = {"RU\distance\dist100"};
        dist200[] = {"RU\distance\dist200"};
        dist300[] = {"RU\distance\dist200"};
        dist400[] = {"RU\distance\dist500"};
        dist500[] = {"RU\distance\dist500"};
        dist600[] = {"RU\distance\dist500"};
        dist700[] = {"RU\distance\dist500"};
        dist800[] = {"RU\distance\dist500"};
        dist1000[] = {"RU\distance\dist1000"};
        dist1500[] = {"RU\distance\dist1000"};
        dist2000[] = {"RU\distance\dist2000"};
        dist2500[] = {"RU\distance\dist2000"};
        move_dist75[] = {"RU\distance\dist50"};
        move_dist100[] = {"RU\distance\dist100"};
        move_dist200[] = {"RU\distance\dist200"};
        move_dist300[] = {"RU\distance\dist200"};
        move_dist400[] = {"RU\distance\dist500"};
        move_dist500[] = {"RU\distance\dist500"};
        move_dist600[] = {"RU\distance\dist500"};
        move_dist700[] = {"RU\distance\dist500"};
        move_dist800[] = {"RU\distance\dist500"};
        move_dist1000[] = {"RU\distance\dist1000"};
        move_dist1500[] = {"RU\distance\dist1000"};
        move_dist2000[] = {"RU\distance\dist2000"};
        move_dist2500[] = {"RU\distance\dist2000"};
        far[] = {"RU\distance\distfar"};
        klick[] = {"RU\distance\klick"};
        klicks[] = {"RU\distance\klicks"};
        meters[] = {"RU\distance\meters"};
        north[] = {"RU\direction\north"};
        northEast[] = {"RU\direction\northeast"};
        east[] = {"RU\direction\east"};
        southEast[] = {"RU\direction\southeast"};
        south[] = {"RU\direction\south"};
        southWest[] = {"RU\direction\southwest"};
        west[] = {"RU\direction\west"};
        northWest[] = {"RU\direction\northwest"};
        north2[] = {"RU\direction\north2"};
        northEast2[] = {"RU\direction\northeast2"};
        east2[] = {"RU\direction\east2"};
        southEast2[] = {"RU\direction\southeast2"};
        south2[] = {"RU\direction\south2"};
        southWest2[] = {"RU\direction\southwest2"};
        west2[] = {"RU\direction\west2"};
        northWest2[] = {"RU\direction\northwest2"};
        bearing000[] = {};
        bearing015[] = {};
        bearing030[] = {};
        bearing045[] = {};
        bearing060[] = {};
        bearing075[] = {};
        bearing090[] = {};
        bearing105[] = {};
        bearing120[] = {};
        bearing135[] = {};
        bearing150[] = {};
        bearing165[] = {};
        bearing180[] = {};
        bearing195[] = {};
        bearing210[] = {};
        bearing225[] = {};
        bearing240[] = {};
        bearing255[] = {};
        bearing270[] = {};
        bearing285[] = {};
        bearing300[] = {};
        bearing315[] = {};
        bearing330[] = {};
        bearing345[] = {};
        bearing360[] = {};
        That[] = {"\A3\Dubbing_Radio_F\Sfx\empty01s.ogg"};
        At[] = {"RU\core\targets\at"};
        veh_unknown_s[] = {"RU\vehicles\unknown"};
        veh_infantry_s[] = {"RU\vehicles\soldier"};
        veh_infantry_AT_s[] = {"RU\vehicles\launchersoldier"};
        veh_infantry_MG_s[] = {"RU\vehicles\mgunner"};
        veh_infantry_Sniper_s[] = {"RU\vehicles\sniper"};
        veh_infantry_officer_s[] = {"RU\vehicles\officer"};
        veh_infantry_SF_s[] = {"RU\vehicles\specialforce"};
        veh_infantry_pilot_s[] = {"RU\vehicles\pilot"};
        veh_infantry_civilian_s[] = {"RU\vehicles\man"};
        veh_vehicle_s[] = {"RU\vehicles\vehicle"};
        veh_vehicle_car_s[] = {"RU\vehicles\car"};
        veh_vehicle_armedcar_s[] = {"RU\vehicles\armedcar"};
        veh_vehicle_truck_s[] = {"RU\vehicles\truck"};
        veh_vehicle_armor_s[] = {"RU\vehicles\armedcar"};
        veh_vehicle_APC_s[] = {"RU\vehicles\trackedapc"};
        veh_vehicle_tank_s[] = {"RU\vehicles\tank"};
        veh_air_s[] = {"RU\vehicles\aircraft"};
        veh_air_helicopter_s[] = {"RU\vehicles\helicopter"};
        veh_air_gunship_s[] = {"RU\vehicles\gunship"};
        veh_air_plane_s[] = {"RU\vehicles\airplane"};
        veh_air_parachute_s[] = {"RU\vehicles\parachute"};
        veh_ship_s[] = {"RU\vehicles\ship"};
        veh_ship_boat_s[] = {"RU\vehicles\ship"};
        veh_ship_attackBoat_s[] = {"RU\vehicles\ship"};
        veh_ship_submarine_s[] = {"RU\vehicles\ship"};
        veh_static_s[] = {"RU\vehicles\staticMGWeapon"};
        veh_Static_MG_s[] = {"RU\vehicles\staticMGWeapon"};
        veh_static_AA_s[] = {"RU\vehicles\staticATLauncher"};
        veh_static_AT_s[] = {"RU\vehicles\staticATLauncher"};
        veh_Static_mortar_s[] = {"RU\vehicles\staticMortar"};
        veh_static_GL_s[] = {"RU\vehicles\staticgrenadelauncher"};
        veh_static_cannon_s[] = {"RU\vehicles\staticcannon"};
        veh_infantry_AA_s[] = {"RU\vehicles\launchersoldier"};
        veh_infantry_medic_s[] = {"RU\vehicles\medic"};
        veh_infantry_diver_s[] = {"RU\vehicles\specialforce"};
        veh_vehicle_ugv_s[] = {"RU\vehicles\uav"};
        veh_vehicle_mrap_s[] = {"RU\vehicles\armedcar"};
        veh_air_uav_s[] = {"RU\vehicles\uav"};
        veh_unknown_p[] = {"RU\vehicles\unknown"};
        veh_infantry_p[] = {"RU\vehicles\soldiers"};
        veh_infantry_AT_p[] = {"RU\vehicles\launchersoldiers"};
        veh_infantry_MG_p[] = {"RU\vehicles\mgunners"};
        veh_infantry_Sniper_p[] = {"RU\vehicles\snipers"};
        veh_infantry_officer_p[] = {"RU\vehicles\officers"};
        veh_infantry_SF_p[] = {"RU\vehicles\specialforces"};
        veh_infantry_pilot_p[] = {"RU\vehicles\pilots"};
        veh_infantry_civilian_p[] = {"RU\vehicles\men"};
        veh_vehicle_p[] = {"RU\vehicles\vehicles"};
        veh_vehicle_car_p[] = {"RU\vehicles\cars"};
        veh_vehicle_armedcar_p[] = {"RU\vehicles\armedcars"};
        veh_vehicle_truck_p[] = {"RU\vehicles\trucks"};
        veh_vehicle_armor_p[] = {"RU\vehicles\armedcars"};
        veh_vehicle_APC_p[] = {"RU\vehicles\trackedapc"};
        veh_vehicle_tank_p[] = {"RU\vehicles\tanks"};
        veh_air_p[] = {"RU\vehicles\aircrafts"};
        veh_air_helicopter_p[] = {"RU\vehicles\helicopters"};
        veh_air_gunship_p[] = {"RU\vehicles\gunships"};
        veh_air_plane_p[] = {"RU\vehicles\airplanes"};
        veh_air_parachute_p[] = {"RU\vehicles\parachutes"};
        veh_ship_p[] = {"RU\vehicles\ships"};
        veh_ship_boat_p[] = {"RU\vehicles\ships"};
        veh_ship_attackBoat_p[] = {"RU\vehicles\ships"};
        veh_ship_submarine_p[] = {"RU\vehicles\ships"};
        veh_static_p[] = {"RU\vehicles\staticMGWeapons"};
        veh_Static_MG_p[] = {"RU\vehicles\staticMGWeapons"};
        veh_static_AA_p[] = {"RU\vehicles\staticATLaunchers"};
        veh_static_AT_p[] = {"RU\vehicles\staticATLaunchers"};
        veh_Static_mortar_p[] = {"RU\vehicles\staticMortars"};
        veh_static_GL_p[] = {"RU\vehicles\staticgrenadelaunchers"};
        veh_static_cannon_p[] = {"RU\vehicles\staticcannons"};
        veh_infantry_AA_p[] = {"RU\vehicles\launchersoldiers"};
        veh_infantry_medic_p[] = {"RU\vehicles\medics"};
        veh_infantry_diver_p[] = {"RU\vehicles\specialforces"};
        veh_vehicle_ugv_p[] = {"RU\vehicles\uavs"};
        veh_vehicle_mrap_p[] = {"RU\vehicles\armedcars"};
        veh_air_uav_p[] = {"RU\vehicles\uavs"};
        obj_tent[] = {"RU\objects\tent"};
        obj_tents[] = {"RU\objects\tents"};
        obj_tent_CZ[] = {"RU\objects\tent"};
        obj_tents_CZ[] = {"RU\objects\tents"};
        obj_tent_CZ4P[] = {"RU\objects\tent"};
        obj_tents_CZ4P[] = {"RU\objects\tents"};
        obj_tent_RU[] = {"RU\objects\tent"};
        obj_tents_RU[] = {"RU\objects\tents"};
        obj_fortification[] = {"RU\objects\fortification"};
        obj_fortifications[] = {"RU\objects\fortifications"};
        obj_fortification_CZ[] = {"RU\objects\fortification"};
        obj_fortifications_CZ[] = {"RU\objects\fortifications"};
        obj_fortification_CZ4P[] = {"RU\objects\fortification"};
        obj_fortifications_CZ4P[] = {"RU\objects\fortifications"};
        obj_fortification_RU[] = {"RU\objects\fortification"};
        obj_fortifications_RU[] = {"RU\objects\fortifications"};
        obj_wall[] = {"RU\objects\wall"};
        obj_walls[] = {"RU\objects\walls"};
        obj_wall_CZ[] = {"RU\objects\wall"};
        obj_walls_CZ[] = {"RU\objects\walls"};
        obj_wall_CZ4P[] = {"RU\objects\wall"};
        obj_walls_CZ4P[] = {"RU\objects\walls"};
        obj_wall_RU[] = {"RU\objects\wall"};
        obj_walls_RU[] = {"RU\objects\walls"};
        obj_fence[] = {"RU\objects\fence"};
        obj_fences[] = {"RU\objects\fences"};
        obj_fence_CZ[] = {"RU\objects\fence"};
        obj_fences_CZ[] = {"RU\objects\fences"};
        obj_fence_CZ4P[] = {"RU\objects\fence"};
        obj_fences_CZ4P[] = {"RU\objects\fences"};
        obj_fence_RU[] = {"RU\objects\fence"};
        obj_fences_RU[] = {"RU\objects\fences"};
        obj_target[] = {"RU\objects\target"};
        obj_targets[] = {"RU\objects\targets"};
        obj_target_CZ[] = {"RU\objects\target"};
        obj_targets_CZ[] = {"RU\objects\targets"};
        obj_target_CZ4P[] = {"RU\objects\target"};
        obj_targets_CZ4P[] = {"RU\objects\targets"};
        obj_target_RU[] = {"RU\objects\target"};
        obj_targets_RU[] = {"RU\objects\targets"};
        obj_object[] = {"RU\objects\object"};
        obj_objects[] = {"RU\objects\objects"};
        obj_object_CZ[] = {"RU\objects\object"};
        obj_objects_CZ[] = {"RU\objects\objects"};
        obj_object_CZ4P[] = {"RU\objects\object"};
        obj_objects_CZ4P[] = {"RU\objects\objects"};
        obj_object_RU[] = {"RU\objects\object"};
        obj_objects_RU[] = {"RU\objects\objects"};
        obj_flag[] = {"RU\objects\flag"};
        obj_flags[] = {"RU\objects\flags"};
        obj_flag_CZ[] = {"RU\objects\flag"};
        obj_flags_CZ[] = {"RU\objects\flags"};
        obj_flag_CZ4P[] = {"RU\objects\flag"};
        obj_flags_CZ4P[] = {"RU\objects\flags"};
        obj_flag_RU[] = {"RU\objects\flag"};
        obj_flags_RU[] = {"RU\objects\flags"};
        obj_ammocrate[] = {"RU\objects\ammocrate"};
        obj_ammocrates[] = {"RU\objects\ammocrates"};
        obj_ammocrate_CZ[] = {"RU\objects\ammocrate"};
        obj_ammocrates_CZ[] = {"RU\objects\ammocrates"};
        obj_ammocrate_CZ4P[] = {"RU\objects\ammocrate"};
        obj_ammocrates_CZ4P[] = {"RU\objects\ammocrates"};
        obj_ammocrate_RU[] = {"RU\objects\ammocrate"};
        obj_ammocrates_RU[] = {"RU\objects\ammocrates"};
        obj_building[] = {"RU\objects\building"};
        obj_buildings[] = {"RU\objects\buildings"};
        obj_building_CZ[] = {"RU\objects\building"};
        obj_buildings_CZ[] = {"RU\objects\buildings"};
        obj_building_CZ4P[] = {"RU\objects\building"};
        obj_buildings_CZ4P[] = {"RU\objects\buildings"};
        obj_building_RU[] = {"RU\objects\building"};
        obj_buildings_RU[] = {"RU\objects\buildings"};
        obj_house[] = {"RU\objects\house"};
        obj_houses[] = {"RU\objects\houses"};
        obj_house_CZ[] = {"RU\objects\house"};
        obj_houses_CZ[] = {"RU\objects\houses"};
        obj_house_CZ4P[] = {"RU\objects\house"};
        obj_houses_CZ4P[] = {"RU\objects\houses"};
        obj_house_RU[] = {"RU\objects\house"};
        obj_houses_RU[] = {"RU\objects\houses"};
        obj_structure[] = {"RU\objects\structure"};
        obj_structures[] = {"RU\objects\structures"};
        obj_structure_CZ[] = {"RU\objects\structure"};
        obj_structures_CZ[] = {"RU\objects\structures"};
        obj_structure_CZ4P[] = {"RU\objects\structure"};
        obj_structures_CZ4P[] = {"RU\objects\structures"};
        obj_structure_RU[] = {"RU\objects\structure"};
        obj_structures_RU[] = {"RU\objects\structures"};
        obj_church[] = {"RU\objects\church"};
        obj_churches[] = {"RU\objects\churchs"};
        obj_church_CZ[] = {"RU\objects\church"};
        obj_churches_CZ[] = {"RU\objects\churchs"};
        obj_church_CZ4P[] = {"RU\objects\church"};
        obj_churches_CZ4P[] = {"RU\objects\churchs"};
        obj_church_RU[] = {"RU\objects\church"};
        obj_churches_RU[] = {"RU\objects\churchs"};
        obj_cross[] = {"RU\objects\cross"};
        obj_crosses[] = {"RU\objects\crosses"};
        obj_cross_CZ[] = {"RU\objects\cross"};
        obj_crosses_CZ[] = {"RU\objects\crosses"};
        obj_cross_CZ4P[] = {"RU\objects\cross"};
        obj_crosses_CZ4P[] = {"RU\objects\crosses"};
        obj_cross_RU[] = {"RU\objects\cross"};
        obj_crosses_RU[] = {"RU\objects\crosses"};
        obj_bush[] = {"RU\objects\bush"};
        obj_bushes[] = {"RU\objects\bushes"};
        obj_bush_CZ[] = {"RU\objects\bush"};
        obj_bushes_CZ[] = {"RU\objects\bushes"};
        obj_bush_CZ4P[] = {"RU\objects\bush"};
        obj_bushes_CZ4P[] = {"RU\objects\bushes"};
        obj_bush_RU[] = {"RU\objects\bush"};
        obj_bushes_RU[] = {"RU\objects\bushes"};
        obj_tree[] = {"RU\objects\tree"};
        obj_trees[] = {"RU\objects\trees"};
        obj_tree_CZ[] = {"RU\objects\tree"};
        obj_trees_CZ[] = {"RU\objects\trees"};
        obj_tree_CZ4P[] = {"RU\objects\tree"};
        obj_trees_CZ4P[] = {"RU\objects\trees"};
        obj_tree_RU[] = {"RU\objects\tree"};
        obj_trees_RU[] = {"RU\objects\trees"};
        obj_rock[] = {"RU\objects\rock"};
        obj_rocks[] = {"RU\objects\rocks"};
        obj_rock_CZ[] = {"RU\objects\rock"};
        obj_rocks_CZ[] = {"RU\objects\rocks"};
        obj_rock_CZ4P[] = {"RU\objects\rock"};
        obj_rocks_CZ4P[] = {"RU\objects\rocks"};
        obj_rock_RU[] = {"RU\objects\rock"};
        obj_rocks_RU[] = {"RU\objects\rocks"};
        obj_forest[] = {"RU\objects\forest"};
        obj_forests[] = {"RU\objects\forests"};
        obj_forest_CZ[] = {"RU\objects\forest"};
        obj_forests_CZ[] = {"RU\objects\forests"};
        obj_forest_CZ4P[] = {"RU\objects\forest"};
        obj_forests_CZ4P[] = {"RU\objects\forests"};
        obj_forest_RU[] = {"RU\objects\forest"};
        obj_forests_RU[] = {"RU\objects\forests"};
        obj_ruin[] = {"RU\objects\ruin"};
        obj_ruins[] = {"RU\objects\ruins"};
        obj_ruin_CZ[] = {"RU\objects\ruin"};
        obj_ruins_CZ[] = {"RU\objects\ruins"};
        obj_ruin_CZ4P[] = {"RU\objects\ruin"};
        obj_ruins_CZ4P[] = {"RU\objects\ruins"};
        obj_ruin_RU[] = {"RU\objects\ruin"};
        obj_ruins_RU[] = {"RU\objects\ruins"};
        obj_bunker[] = {"RU\objects\bunker"};
        obj_bunkers[] = {"RU\objects\bunkers"};
        obj_bunker_CZ[] = {"RU\objects\bunker"};
        obj_bunkers_CZ[] = {"RU\objects\bunkers"};
        obj_bunker_CZ4P[] = {"RU\objects\bunker"};
        obj_bunkers_CZ4P[] = {"RU\objects\bunkers"};
        obj_bunker_RU[] = {"RU\objects\bunker"};
        obj_bunkers_RU[] = {"RU\objects\bunkers"};
        enemy[] = {"RU\side\enemy"};
        friendly[] = {"RU\side\friendly"};
        civilian[] = {"RU\side\civilian"};
        resistance[] = {"RU\side\Guerilla"};
        unknown[] = {"\A3\Dubbing_Radio_F\Sfx\empty01s.ogg"};
        mgun[] = {"RU\weapons\machinegun"};
        heat[] = {"RU\weapons\cannonLow"};
        sabot[] = {"RU\weapons\cannonLow"};
        cannon[] = {"RU\weapons\cannonHigh"};
        cannonLow[] = {"RU\weapons\cannonLow"};
        cannonHigh[] = {"RU\weapons\cannonLow"};
        RocketsPairs[] = {"RU\weapons\rockets"};
        RocketsSalvo[] = {"RU\weapons\rockets"};
        Bombs[] = {"RU\weapons\cannonLow"};
        Flares[] = {"RU\weapons\cannonLow"};
        missiles[] = {"RU\weapons\missiles"};
        rockets[] = {"RU\weapons\rockets"};
        rifle[] = {"RU\weapons\rifle"};
        sidearm[] = {"RU\weapons\sidearm"};
        atlauncher[] = {"RU\weapons\atlauncher"};
        aalauncher[] = {"RU\weapons\aalauncher"};
        grenadelauncher[] = {"RU\weapons\grenadelauncher"};
        magazine[] = {"RU\weapons\magazine"};
        handgrenade[] = {"RU\weapons\handgrenade"};
        grenade[] = {"RU\weapons\grenade"};
        smokeshell[] = {"RU\weapons\smokeshell"};
        flare[] = {"RU\weapons\flare"};
        mine[] = {"RU\weapons\mine"};
        satchelcharge[] = {"RU\weapons\satchelcharge"};
        binoculars[] = {"RU\weapons\binoculars"};
        nvgoggles[] = {"RU\weapons\nvgoggles"};
        laserdesignator[] = {"RU\weapons\laserdesignator"};
        sniperRifle[] = {"RU\weapons\sniperrifle"};
        position[] = {"RU\position"};
        CannotFire[] = {"RU\CannotFireNowE"};
        CeaseFire[] = {"RU\DoNotFire"};
        Target[] = {"RU\objects\target"};
        Take[] = {"RU\take"};
        From[] = {"RU\from"};
        Move[] = {"RU\report\Movement"};
        MoveTo[] = {"RU\report\MovementTo"};
        MoveAt[] = {"RU\report\MovementAt"};
        On2[] = {"RU\report\On"};
        Direction[] = {"RU\report\direction"};
        StandBy[] = {"RU\report\StandBy"};
        MoveToPos[] = {"RU\report\MovementToPosition"};
        GoTo[] = {"RU\report\MovementDirection"};
        GoDir[] = {"RU\report\direction"};
        GoFast[] = {"RU\report\moveoutE"};
        HealAt[] = {"RU\healat"};
        RepairAt[] = {"RU\repairat"};
        RefuelAt[] = {"RU\refuelat"};
        RearmAt[] = {"RU\report\MovementDirection"};
        SupportAt[] = {"RU\actions\support"};
        Heal[] = {"RU\actions\heal"};
        HealThatSoldier[] = {"RU\actions\heal"};
        Healsomeone[] = {"RU\actions\heal"};
        PatchYourself[] = {"RU\actions\healyourself"};
        Attack[] = {"RU\attackE"};
        GetIn[] = {"RU\embarkment"};
        Board[] = {"RU\nastoupit"};
        Halt[] = {"RU\halt"};
        Forward[] = {"RU\combat\goe"};
        Reverse[] = {"RU\reverse"};
        Fast[] = {"RU\fast"};
        Slow[] = {"RU\slow"};
        Left[] = {"RU\left"};
        Right[] = {"RU\right"};
        fromYou[] = {"RU\report\fromYou"};
        fromUs[] = {"RU\report\fromUs"};
        inFrontOf[] = {"RU\report\inFrontOf"};
        rightOf[] = {"RU\report\rightOf"};
        behind[] = {"RU\report\behind"};
        leftOf[] = {"RU\report\leftOf"};
        dangerouslyCloseTo[] = {"RU\report\close"};
        notFarFrom[] = {"RU\report\close"};
        farFrom[] = {"RU\report\far"};
        front[] = {"RU\report\front"};
        rear[] = {"RU\report\rear"};
        rightFlank[] = {"RU\report\right"};
        leftFlank[] = {"RU\report\left"};
        damnClose[] = {"RU\report\close"};
        notFar[] = {"RU\report\mediumRange"};
        closeTo[] = {"RU\closeTo"};
        and[] = {"RU\core\targets\and"};
        us[] = {"us"};
        our[] = {"our"};
        you[] = {"you"};
        me[] = {"me"};
        in[] = {"in"};
        of[] = {"\A3\Dubbing_Radio_F\Sfx\empty01s.ogg"};
        Contact[] = {"RU\ContactE"};
        FireAt[] = {"RU\fireat"};
        Fire[] = {"RU\fireE"};
        Gunner[] = {"RU\Asgunner"};
        Commander[] = {"RU\AsCommander"};
        Driver[] = {"RU\AsDriver"};
        Pilot[] = {"RU\Aspilot"};
        Loader[] = {"RU\Asgunner"};
        Crewchief[] = {"RU\AsCommander"};
        IsDownE[] = {"RU\IsDownE"};
        ShitE[] = {"RU\ShitE"};
        IsHitE[] = {"RU\IsHitE"};
        DamnitWeLostE[] = {"RU\DamnitWeLostE"};
        ManDownE[] = {"RU\ManDownE"};
        TheBastardsGotE[] = {"RU\TheBastardsGotE"};
        TheyGotE[] = {"RU\TheyGotE"};
        FuckE[] = {"RU\FuckE"};
        WeNeedMedicalAssistanceAt[] = {"RU\WeNeedMedicalAssistanceAt"};
        Over1[] = {"RU\static\endmessage02"};
        Over2[] = {"RU\static\endmessage01"};
        Receive1[] = {"RU\static\hearing01"};
        Receive2[] = {"RU\static\hearing02"};
        Receive3[] = {"RU\static\hearing03"};
        RequestingRepairTeamAt[] = {"RU\RequestingRepairTeamAt"};
        WereRunningOnFumesNeedRefuelAt[] = {"RU\WereRunningOnFumesNeedRefuelAt"};
        RequestingUrgentResupplyAt[] = {"RU\RequestingUrgentResupplyAt"};
        ProvidingSupportAt[] = {"RU\ProvidingSupportAt"};
        HoldOnGuysSupportsOnTheWayE[] = {"RU\HoldOnGuysSupportsOnTheWayE"};
        WereOnIt[] = {"RU\WereOnIt"};
        ImAtGrid[] = {"RU\ImAtGrid"};
        ProvidingSupportTo[] = {"RU\ProvidingSupportTo"};
        Out1[] = {"RU\static\out"};
        YoureGoodToGoE[] = {"RU\YoureGoodToGoE"};
        SupportComplete[] = {"RU\SupportComplete"};
        Negative[] = {"RU\Negative"};
        NoSupportAvailableAtThisTime[] = {"RU\NoSupportAvailableAtThisTime"};
        ImHitE[] = {"RU\ImHitE"};
        ImBleedingE[] = {"RU\ImBleedingE"};
        SomebodyHelpMeE[] = {"RU\SomebodyHelpMeE"};
        Here[] = {"RU\Here"};
        GetMeACorpsmanNowE[] = {"RU\GetMeACorpsmanNowE"};
        CorpsmanE[] = {"RU\CorpsmanE"};
        TheyGotMeE[] = {"RU\TheyGotMeE"};
        NeedHelpE[] = {"RU\NeedHelpE"};
        WoundedE[] = {"RU\WoundedE"};
        StatusRedE[] = {"RU\StatusRedE"};
        VehicleIsFUBARE[] = {"RU\criticaldamagee"};
        WereHeavilyDamagedE[] = {"RU\criticaldamagee"};
        CriticalDamageE[] = {"RU\criticaldamagee"};
        BeAdvised[] = {"RU\BeAdvised"};
        ImOutOfFuelE[] = {"RU\ImOutOfFuelE"};
        ThisIs[] = {"RU\ThisIs"};
        ImRunningOutOfFuel[] = {"RU\ImRunningOutOfFuel"};
        GoddamnE[] = {"RU\GoddamnE"};
        OutOfAmmoE[] = {"RU\OutOfAmmoE"};
        NoMoreAmmoE[] = {"RU\NoMoreAmmoE"};
        CantShootE[] = {"RU\CantShootE"};
        RunningOutOfAmmoE[] = {"RU\RunningOutOfAmmoE"};
        Away[] = {"RU\Away"};
        Grid[] = {"RU\Grid"};
        ListenUp[] = {"RU\ListenUp"};
        IsNowInCommand[] = {"RU\Commands"};
        ImTheNewActual[] = {"RU\ImTheNewActual"};
        ImTakingCommand[] = {"RU\ImTakingCommand"};
        NowInCharge[] = {"RU\NowInCharge"};
        Ready[] = {"RU\Ready"};
        ReadyForOrders[] = {"RU\ReadyForOrders"};
        IsReady[] = {"RU\IsReady"};
        Waiting[] = {"RU\Waiting"};
        StandingBy[] = {"RU\StandingBy"};
        AwaitingOrders[] = {"RU\AwaitingOrders"};
        ReadyToFire[] = {"RU\ReadyToFire"};
        HaveTheTargetInMySights[] = {"RU\HaveTheTargetInMySights"};
        TargetInSight[] = {"RU\TargetInSight"};
        TargetAcquired[] = {"RU\TargetAcquired"};
        ObservingHostile[] = {"RU\ObservingHostile"};
        EyesOnTarget[] = {"RU\EyesOnTarget"};
        UnableToFireE[] = {"RU\UnableToFireE"};
        CannotFireNowE[] = {"RU\CannotFireNowE"};
        NoCanDo[] = {"RU\NoCanDo"};
        Sorry[] = {"RU\Sorry"};
        ICant[] = {"RU\ICant"};
        DamnE[] = {"RU\DamnE"};
        ICantGetThere[] = {"RU\ICantGetThere"};
        CantMakeItThere[] = {"RU\CantMakeItThere"};
        TargetDestroyedE[] = {"RU\TargetDestroyedE"};
        YeahE[] = {"RU\YeahE"};
        GetSomeE[] = {"RU\GetSomeE"};
        GotThatSuckerE[] = {"RU\GotThatSuckerE"};
        ScratchOneE[] = {"RU\ScratchOneE"};
        TargetEliminated[] = {"RU\TargetEliminated"};
        HesDownE[] = {"RU\gotthatsuckere"};
        SuccessfullyEngaged[] = {"RU\SuccessfullyEngaged"};
        NoLongerAProblem[] = {"RU\NoLongerAProblem"};
        IveGotHimE[] = {"RU\IveGotHimE"};
        HostileDownE[] = {"RU\HostileDownE"};
        ContactE[] = {"RU\ContactE"};
        IseeEnemy[] = {"RU\ContactE"};
        EnemiesE[] = {"RU\EnemiesE"};
        HostilesE[] = {"RU\combat\ContactE"};
        UnderHeavyFireE[] = {"RU\UnderHeavyFireE"};
        UnderFireE[] = {"RU\UnderFireE"};
        TheyreShootingAtUsE[] = {"RU\TheyreShootingAtUsE"};
        EnemyFireE[] = {"RU\hc\TakingHeavyFireE"};
        BeingEngagedE[] = {"RU\UnderFireE"};
        FuckThatsCloseE[] = {"RU\FuckThatsCloseE"};
        TakingFireE[] = {"RU\TakingFireE"};
        IncomingE[] = {"RU\IncomingE"};
        Clear[] = {"RU\Clear"};
        NoEnemiesInSight[] = {"RU\NoEnemiesInSight"};
        AreaClear[] = {"RU\SectorClear"};
        ShouldBeSafeNow[] = {"RU\ShouldBeSafeNow"};
        SayAgain[] = {"RU\SayAgain"};
        RepeatLast[] = {"RU\RepeatLast"};
        ReportPositionE[] = {"RU\ReportPositionE"};
        WhatIsYourLocationQ[] = {"RU\WhatIsYourLocationQ"};
        WhereAreYouQ[] = {"RU\WhereAreYouQ"};
        WhatIsYourPositionQ[] = {"RU\WhatIsYourPositionQ"};
        NeedSITREPE[] = {"RU\NeedSITREPE"};
        FallBackE[] = {"RU\FallBackE"};
        ReturnToFormationE[] = {"RU\ReturnToFormationE"};
        FormOnMeE[] = {"RU\FormOnMeE"};
        GetBackE[] = {"RU\GetBackE"};
        StayInFormationE[] = {"RU\StayInFormationE"};
        RegroupE[] = {"RU\RegroupE"};
        DoYouReadQ[] = {"RU\DoYouReadQ"};
        ReportStatus[] = {"RU\ReportStatus"};
        SendSITREP[] = {"RU\SendSITREP"};
        WhatsYourStatusQ[] = {"RU\WhatsYourStatusQ"};
        Formation[] = {"RU\Formation"};
        FormationColumn[] = {"RU\FormationColumn"};
        FormationStaggeredColumn[] = {"RU\FormationStaggeredColumn"};
        FormationWedge[] = {"RU\FormationWedge"};
        FormationEchelonLeft[] = {"RU\FormationEchelonLeft"};
        FormationEchelonRight[] = {"RU\FormationEchelonRight"};
        FormationVee[] = {"RU\FormationVee"};
        FormationLine[] = {"RU\FormationLine"};
        FormationFile[] = {"RU\FormationFile"};
        FormationDiamond[] = {"RU\FormationDiamond"};
        AtEase[] = {"RU\AtEase"};
        Relax[] = {"RU\Relax"};
        StayFrosty[] = {"RU\StayFrosty"};
        StayAlert[] = {"RU\StayAlert"};
        BeVigilant[] = {"RU\BeVigilant"};
        LookSharp[] = {"RU\LookSharp"};
        GetReadyForContactE[] = {"RU\GetReadyForContactE"};
        GetReadyToFightE[] = {"RU\GetReadyToFightE"};
        LockAndLoadE[] = {"RU\LockAndLoadE"};
        DangerE[] = {"RU\DangerE"};
        Silence[] = {"RU\Silence"};
        DownAndQuiet[] = {"RU\DownAndQuiet"};
        Stealth[] = {"RU\Stealth"};
        FireAtWill[] = {"RU\FireAtWill"};
        WeaponsFree[] = {"RU\WeaponsFree"};
        ClearedToEngage[] = {"RU\ClearedToEngage"};
        OpenUpE[] = {"RU\combat\OpenUpE"};
        WeaponsHotE[] = {"RU\WeaponsHotE"};
        LightEmUpE[] = {"RU\LightEmUpE"};
        LetEmRipE[] = {"RU\LetEmRipE"};
        GiveEmHellE[] = {"RU\GiveEmHellE"};
        GoGoGoE[] = {"RU\GoGoGoE"};
        SmokeEmE[] = {"RU\SmokeEmE"};
        HoldFire[] = {"RU\HoldFire"};
        HoldFireE[] = {"RU\HoldFire"};
        DoNotFireE[] = {"RU\DoNotFireE"};
        CeaseFireE[] = {"RU\CeaseFireE"};
        CeaseFireGoddamnitE[] = {"RU\CeaseFireGoddamnitE"};
        CheckYourFireE[] = {"RU\CheckYourFireE"};
        YoureFiringOnFriendliesE[] = {"RU\YoureFiringOnFriendliesE"};
        BlueOnBlueE[] = {"RU\DoNotFire"};
        EngageAtWill[] = {"RU\EngageAtWill"};
        YoureFreeToEngage[] = {"RU\YoureFreeToEngage"};
        EngageAtYourDiscretion[] = {"RU\EngageAtYourDiscretion"};
        Disengage[] = {"RU\Disengage"};
        GoProne[] = {"RU\GoProne"};
        HitTheDirt[] = {"RU\HitTheDirt"};
        GetDown[] = {"RU\GetDown"};
        StayCrouched[] = {"RU\civilian\hlavydolu"};
        StandUp[] = {"RU\StandUp"};
        OnYourFeet[] = {"RU\OnYourFeet"};
        GetUp[] = {"RU\GetUp"};
        CopyMyStance[] = {"RU\CopyMyStance"};
        FollowMyLead[] = {"RU\FollowMyLead"};
        Advance[] = {"RU\Advance"};
        TakePoint[] = {"RU\TakePoint"};
        StayBack[] = {"RU\StayBack"};
        CoverOurRear[] = {"RU\CoverOurRear"};
        FlankLeft[] = {"RU\FlankLeft"};
        FlankRight[] = {"RU\FlankRight"};
        Is[] = {"RU\Is"};
        Are[] = {"RU\Are"};
        WatchThat[] = {"RU\WatchThat"};
        ObserveThat[] = {"RU\ObserveThat"};
        Watch[] = {"RU\Watch"};
        WatchThatPosition[] = {"RU\WatchThatPosition"};
        ObserveThatPosition[] = {"RU\ObserveThatPosition"};
        ScanHorizon[] = {"RU\ScanHorizon"};
        CoverAllSectors[] = {"RU\CoverAllSectors"};
        NoMoreTarget[] = {"RU\NoMoreTarget"};
        NoTarget[] = {"RU\NoTarget"};
        CancelTarget[] = {"RU\CancelTarget"};
        TargetThat[] = {"RU\TargetThat"};
        EngageThat[] = {"RU\EngageThat"};
        FireAtThat[] = {"RU\FireAtThat"};
        PutFireOnThat[] = {"RU\PutFireOnThat"};
        EngageE[] = {"RU\EngageE"};
        FireE[] = {"RU\FireE"};
        EjectE[] = {"RU\actions\EjectE"};
        BailOutE[] = {"RU\actions\BailOutE"};
        SetACharge[] = {"RU\actions\SetACharge"};
        DetonateChargeNowE[] = {"RU\actions\DetonateChargeNowE"};
        SetTheTimer[] = {"RU\actions\SetTheTimer"};
        DeactivateThatCharge[] = {"RU\actions\DeactivateThatCharge"};
        DisarmThatMine[] = {"RU\actions\DisarmThatMine"};
        PickUpThatMine[] = {"RU\actions\PickUpThatMine"};
        GoAndLightThatFire[] = {"RU\actions\GoAndLightThatFire"};
        PutOutThatFire[] = {"RU\actions\PutOutThatFire"};
        OpenThatDoor[] = {"RU\actions\OpenThatDoor"};
        CloseThatDoor[] = {"RU\actions\CloseThatDoor"};
        Support[] = {"RU\actions\Support"};
        TakeTheFlag[] = {"RU\actions\TakeTheFlag"};
        ReturnTheFlag[] = {"RU\actions\ReturnTheFlag"};
        ExecuteAction[] = {"RU\actions\ExecuteAction"};
        Follow[] = {"RU\report\MovementTo"};
        AttackE[] = {"RU\AttackE"};
        GetOutOfThat[] = {"RU\GetOutOfThat"};
        Dismount[] = {"RU\Dismount"};
        Disembark[] = {"RU\Disembark"};
        HaltE[] = {"RU\HaltE"};
        DoNotMoveE[] = {"RU\StopE"};
        StopE[] = {"RU\StopE"};
        StayThere[] = {"RU\StayHere"};
        WaitForMe[] = {"RU\WaitForMe"};
        StayPut[] = {"RU\StayPut"};
        TakeCoverE[] = {"RU\TakeCoverE"};
        HideE[] = {"RU\HideE"};
        ConcealYourSelfE[] = {"RU\ConcealYourSelfE"};
        ImOnHim[] = {"RU\ImOnHim"};
        EngagingE[] = {"RU\combat\EngagingE"};
        GoingWeaponsHot[] = {"RU\GoingWeaponsHot"};
        EngagingTargetE[] = {"RU\EngagingTargetE"};
        Supporting[] = {"RU\iamprovidingsupportout"};
        ProvidingSupport[] = {"RU\ProvidingSupport"};
        IAttack[] = {"RU\IAttackE"};
        IamAttackingTarget[] = {"RU\IamAttackingTarget"};
        Roger[] = {"RU\RogerThat"};
        Copy[] = {"RU\secops\generic\CopyThat"};
        Understood[] = {"RU\Understood"};
        ImOnIt[] = {"RU\ImOnItOut"};
        OnTheWay[] = {"RU\RogerWereOnIt"};
        OscarMike[] = {"RU\OscarMike"};
        SolidCopy[] = {"RU\SolidCopy"};
        GotIt[] = {"RU\GotIt"};
        MaintainFormation[] = {"RU\MaintainFormation"};
        SwitchingToManualFire[] = {"RU\ManualFire"};
        DisablingManualFire[] = {"RU\CancelManualFire"};
        ToThe[] = {"RU\core\location\ToThe"};
        OfYou[] = {"RU\report\OfYou"};
        OfYourPosition[] = {"RU\core\location\report\OfYourPosition"};
        ToOur[] = {"RU\report\ToOur"};
        FromMe[] = {"RU\report\FromMe"};
        Just[] = {"RU\report\Just"};
        Way[] = {"RU\report\Way"};
        SuppressingE[] = {"RU\combat\SuppressingE"};
        Suppressing[] = {"RU\combat\SuppressingE"};
        SuppressiveFire[] = {"RU\combat\SuppresiveFireE"};
        C_SuppresiveFireE[] = {"RU\combat\SuppresiveFireE"};
        C_HangOnILLSuppressE[] = {"RU\combat\HangOnILLSuppressE"};
        C_SuppressingE[] = {"RU\combat\SuppressingE"};
        C_TakeHimOutE[] = {"RU\combat\TakeHimOutE"};
        C_CarefulJustBeCareful[] = {"RU\combat\CarefulJustBeCareful"};
        C_CheckSectors[] = {"RU\combat\CheckSectors"};
        C_ScanYourSector[] = {"RU\combat\ScanYourSector"};
        C_OpenUpE[] = {"RU\combat\OpenUpE"};
        C_GoImCoveringE[] = {"RU\combat\GoImCoveringE"};
        C_GoILLCoverE[] = {"RU\combat\GoILLCoverE"};
        C_CoveringFireE[] = {"RU\combat\CoveringFireE"};
        C_CoveringGoE[] = {"RU\combat\CoveringGoE"};
        C_MoveOutE[] = {"RU\combat\MoveOutE"};
        C_GoE[] = {"RU\combat\GoE"};
        C_MoveE[] = {"RU\combat\MoveE"};
        C_EngagingE[] = {"RU\combat\EngagingE"};
        C_CoverMeE[] = {"RU\combat\CoverMeE"};
        C_OKLetsGo[] = {"RU\combat\OKLetsGo"};
        C_MovingE[] = {"RU\combat\MovingE"};
        C_GoingE[] = {"RU\combat\GoingE"};
        C_ReloadingE[] = {"RU\combat\ReloadingE"};
        C_IgottaReloadE[] = {"RU\combat\IgottaReloadE"};
        C_CoverMeWhileIReloadE[] = {"RU\combat\CoverMeWhileIReloadE"};
        C_ChangingMagsE[] = {"RU\combat\ChangingMagsE"};
        C_FireInTheHoleE[] = {"RU\combat\GetDownE"};
        C_GrenadeE[] = {"RU\combat\GrenadeE"};
        C_WatchForGrenadeE[] = {"RU\combat\WatchForGrenadeE"};
        C_ThrowingFragE[] = {"RU\combat\ThrowingFragE"};
        C_ThrowingSmokeNowE[] = {"RU\combat\ThrowingSmokeNowE"};
        C_SmokeOutE[] = {"RU\combat\SmokeOutE"};
        C_FragOutE[] = {"RU\combat\FragOutE"};
        C_ContactE[] = {"RU\combat\ContactE"};
        C_DidYouSeeThatQ[] = {"RU\combat\DidYouSeeThatQ"};
        C_FuckSawThatQ[] = {"RU\combat\FuckSawThatQ"};
        C_TargetE[] = {"RU\combat\TargetE"};
        C_GotATargetE[] = {"RU\combat\GotATargetE"};
        C_HostilesE[] = {"RU\combat\ContactE"};
        C_BadGuysE[] = {"RU\combat\BadGuysE"};
        C_RightThereE[] = {"RU\combat\RightThereE"};
        C_TakeCoverE[] = {"RU\combat\TakeCoverE"};
        C_ShitE[] = {"RU\combat\ShitE"};
        C_GetDownE[] = {"RU\combat\GetDownE"};
        C_HolyShitE[] = {"RU\combat\HolyShitE"};
        C_OhJesusE[] = {"RU\combat\OhJesusE"};
        C_WhatTheFuckQ[] = {"RU\combat\WhatTheFuckQ"};
        C_WhatTheHellQ[] = {"RU\combat\WhatTheHellQ"};
        C_FocusE[] = {"RU\combat\FocusE"};
        C_WhatTheFuckWasThatQ[] = {"RU\combat\WhatTheFuckWasThatQ"};
        C_HitTheDeckE[] = {"RU\combat\HitTheDeckE"};
        C_CheckThatOut[] = {"RU\combat\CheckThatOut"};
        C_WhatAView[] = {"RU\combat\WhatAView"};
        C_WhatAMess[] = {"RU\combat\WhatAMess"};
        C_WishIHadntSeeThat[] = {"RU\combat\WishIHadntSeeThat"};
        C_ThatSucks[] = {"RU\combat\ThatSucks"};
        C_MotherfuckerE[] = {"RU\combat\MotherfuckerE"};
        C_SweetJesusE[] = {"RU\combat\SweetJesusE"};
        C_SeeThatQE[] = {"RU\combat\SeeThatQE"};
        C_ManDownE[] = {"RU\combat\ManDownE"};
        C_FuckHesDownE[] = {"RU\combat\FuckHesDownE"};
        C_HesDeadE[] = {"RU\combat\HesDeadE"};
        C_HesGoneE[] = {"RU\combat\HesGoneE"};
        C_WeLostHimE[] = {"RU\combat\WeLostHimE"};
        C_TheyGotHimE[] = {"RU\combat\TheyGotHimE"};
        C_NoE[] = {"RU\combat\NoE"};
        C_FuckE[] = {"RU\combat\FuckE"};
        C_ManHitE[] = {"RU\combat\ManHitE"};
        C_scream1[] = {"RU\combat\scream1"};
        C_scream2[] = {"RU\combat\scream2"};
        C_scream3[] = {"RU\combat\scream3"};
        C_scream4[] = {"RU\combat\scream4"};
        C_woohoo1[] = {"RU\combat\woohoo1"};
        C_woohoo2[] = {"RU\combat\woohoo2"};
        C_woohoo3[] = {"RU\combat\woohoo3"};
        C_woohoo4[] = {"RU\combat\woohoo4"};
        maddox_conversation_Y_0[] = {"RU\CAMPAIGN\maddox_conversation\maddox_conversation_Y_0"};
        maddox_conversation_Y_1[] = {"RU\CAMPAIGN\maddox_conversation\maddox_conversation_Y_1"};
        maddox_conversation_Y_2[] = {"RU\CAMPAIGN\maddox_conversation\maddox_conversation_Y_2"};
        lhd_soldier_sentry_Y_0[] = {"EN\CAMPAIGN\lhd_soldier_sentry\lhd_soldier_sentry_Y_0"};
        lhd_soldier_generic_Y_0[] = {"EN\CAMPAIGN\lhd_soldier_generic\lhd_soldier_generic_Y_0"};
        ss_pull[] = {"RU\CAMPAIGN\skeet_shooting\ss_pull"};
        ss_quit[] = {"RU\CAMPAIGN\skeet_shooting\ss_quit"};
        reforger_soldier_dressler_R_0[] = {"RU\CAMPAIGN\reforger_soldier_dressler\reforger_soldier_dressler_R_0"};
        reforger_soldier_marny_R_0[] = {"RU\CAMPAIGN\reforger_soldier_marny\reforger_soldier_marny_R_0"};
        rt_approaches_unguarded_quarry_R_0[] = {"RU\CAMPAIGN\RT_approaches_unguarded_quarry\rt_approaches_unguarded_quarry_R_0"};
        lopotev_in_hideout_3_R_0[] = {"RU\CAMPAIGN\Lopotev_in_hideout_3\lopotev_in_hideout_3_R_0"};
        lopotev_in_hideout_3_R_1[] = {"RU\CAMPAIGN\Lopotev_in_hideout_3\lopotev_in_hideout_3_R_1"};
        lopotev_not_present_in_hideout_2_R_0[] = {"RU\CAMPAIGN\Lopotev_not_present_in_Hideout_2\lopotev_not_present_in_hideout_2_R_0"};
        lopotev_not_present_in_hideout_2_R_1[] = {"RU\CAMPAIGN\Lopotev_not_present_in_Hideout_2\lopotev_not_present_in_hideout_2_R_1"};
        lopotev_present_in_hideout_1_R_0[] = {"RU\CAMPAIGN\Lopotev_present_in_Hideout_1\lopotev_present_in_hideout_1_R_0"};
        lopotev_present_in_hideout_1_R_1[] = {"RU\CAMPAIGN\Lopotev_present_in_Hideout_1\lopotev_present_in_hideout_1_R_1"};
        lopotev_present_in_hideout_1_R_2[] = {"RU\CAMPAIGN\Lopotev_present_in_Hideout_1\lopotev_present_in_hideout_1_R_2"};
        lopotev_not_present_in_zub_R_0[] = {"RU\CAMPAIGN\Lopotev_not_present_in_Zub\lopotev_not_present_in_zub_R_0"};
        lopotev_not_present_in_zub_R_1[] = {"RU\CAMPAIGN\Lopotev_not_present_in_Zub\lopotev_not_present_in_zub_R_1"};
        nikolayevs_house_explosion_Y_0[] = {"RU\CAMPAIGN\Nikolayevs_house_explosion\nikolayevs_house_explosion_Y_0"};
        nikolayevs_house_explosion_Y_1[] = {"RU\CAMPAIGN\Nikolayevs_house_explosion\nikolayevs_house_explosion_Y_1"};
        nikolayevs_house_explosion_Y_2[] = {"RU\CAMPAIGN\Nikolayevs_house_explosion\nikolayevs_house_explosion_Y_2"};
        nikolayevs_house_explosion_Y_3[] = {"RU\CAMPAIGN\Nikolayevs_house_explosion\nikolayevs_house_explosion_Y_3"};
        nikolayevs_house_explosion_Y_4[] = {"RU\CAMPAIGN\Nikolayevs_house_explosion\nikolayevs_house_explosion_Y_4"};
        nikolayevs_house_explosion_Y_5[] = {"RU\CAMPAIGN\Nikolayevs_house_explosion\nikolayevs_house_explosion_Y_5"};
        nikolayevs_house_explosion_Y_6[] = {"RU\CAMPAIGN\Nikolayevs_house_explosion\nikolayevs_house_explosion_Y_6"};
        nikolayevs_house_explosion_Y_7[] = {"RU\CAMPAIGN\Nikolayevs_house_explosion\nikolayevs_house_explosion_Y_7"};
        nikolayevs_house_explosion_Y_8[] = {"RU\CAMPAIGN\Nikolayevs_house_explosion\nikolayevs_house_explosion_Y_8"};
        noticing_smugglers_R_0[] = {"RU\CAMPAIGN\noticing_smugglers\noticing_smugglers_R_0"};
        noticing_smugglers_R_1[] = {"RU\CAMPAIGN\noticing_smugglers\noticing_smugglers_R_1"};
        fyodor_Y_x1[] = {"RU\CAMPAIGN\fyodor\fyodor_Y_x1"};
        reporting_after_downed_crew_reached_C_0[] = {"RU\CAMPAIGN\reporting_after_downed_crew_reached\reporting_after_downed_crew_reached_C_0"};
        reporting_after_downed_crew_reached_C_1[] = {"RU\CAMPAIGN\reporting_after_downed_crew_reached\reporting_after_downed_crew_reached_C_1"};
        reporting_after_downed_crew_reached_C_2[] = {"RU\CAMPAIGN\reporting_after_downed_crew_reached\reporting_after_downed_crew_reached_C_2"};
        reporting_after_downed_crew_reached_C_3[] = {"RU\CAMPAIGN\reporting_after_downed_crew_reached\reporting_after_downed_crew_reached_C_3"};
        reporting_after_downed_crew_reached_C_4[] = {"RU\CAMPAIGN\reporting_after_downed_crew_reached\reporting_after_downed_crew_reached_C_4"};
        reporting_after_downed_crew_reached_C_5[] = {"RU\CAMPAIGN\reporting_after_downed_crew_reached\reporting_after_downed_crew_reached_C_5"};
        reporting_after_downed_crew_reached_C_6[] = {"RU\CAMPAIGN\reporting_after_downed_crew_reached\reporting_after_downed_crew_reached_C_6"};
        reporting_after_downed_crew_reached_C_7[] = {"RU\CAMPAIGN\reporting_after_downed_crew_reached\reporting_after_downed_crew_reached_C_7"};
        reporting_smugglers_eliminated_C_0[] = {"RU\CAMPAIGN\reporting_smugglers_eliminated\reporting_smugglers_eliminated_C_0"};
        reporting_smugglers_eliminated_C_1[] = {"RU\CAMPAIGN\reporting_smugglers_eliminated\reporting_smugglers_eliminated_C_1"};
        reporting_smugglers_eliminated_C_2[] = {"RU\CAMPAIGN\reporting_smugglers_eliminated\reporting_smugglers_eliminated_C_2"};
        reporting_smugglers_eliminated_C_3[] = {"RU\CAMPAIGN\reporting_smugglers_eliminated\reporting_smugglers_eliminated_C_3"};
        reporting_smugglers_eliminated_C_4[] = {"RU\CAMPAIGN\reporting_smugglers_eliminated\reporting_smugglers_eliminated_C_4"};
        reporting_smugglers_eliminated_C_5[] = {"RU\CAMPAIGN\reporting_smugglers_eliminated\reporting_smugglers_eliminated_C_5"};
        reporting_smugglers_eliminated_C_6[] = {"RU\CAMPAIGN\reporting_smugglers_eliminated\reporting_smugglers_eliminated_C_6"};
        reporting_smugglers_eliminated_C_7[] = {"RU\CAMPAIGN\reporting_smugglers_eliminated\reporting_smugglers_eliminated_C_7"};
        giving_smugglers_a_chance_C_0[] = {"RU\CAMPAIGN\giving_smugglers_a_chance\giving_smugglers_a_chance_C_0"};
        giving_smugglers_a_chance_C_1[] = {"RU\CAMPAIGN\giving_smugglers_a_chance\giving_smugglers_a_chance_C_1"};
        giving_smugglers_a_chance_C_2[] = {"RU\CAMPAIGN\giving_smugglers_a_chance\giving_smugglers_a_chance_C_2"};
        killing_nikitin_Y_0[] = {"RU\CAMPAIGN\killing_nikitin\killing_nikitin_Y_0"};
        killing_nikitin_Y_1[] = {"RU\CAMPAIGN\killing_nikitin\killing_nikitin_Y_1"};
        coming_to_safehouse_C_0[] = {"RU\CAMPAIGN\coming_to_safehouse\coming_to_safehouse_C_0"};
        coming_to_safehouse_C_1[] = {"RU\CAMPAIGN\coming_to_safehouse\coming_to_safehouse_C_1"};
        coming_to_safehouse_C_2[] = {"RU\CAMPAIGN\coming_to_safehouse\coming_to_safehouse_C_2"};
        coming_to_safehouse_C_3[] = {"RU\CAMPAIGN\coming_to_safehouse\coming_to_safehouse_C_3"};
        coming_to_safehouse_C_4[] = {"RU\CAMPAIGN\coming_to_safehouse\coming_to_safehouse_C_4"};
        coming_to_safehouse_C_5[] = {"RU\CAMPAIGN\coming_to_safehouse\coming_to_safehouse_C_5"};
        coming_to_safehouse_C_6[] = {"RU\CAMPAIGN\coming_to_safehouse\coming_to_safehouse_C_6"};
        coming_to_safehouse_C_7[] = {"RU\CAMPAIGN\coming_to_safehouse\coming_to_safehouse_C_7"};
        coming_to_safehouse_C_8[] = {"RU\CAMPAIGN\coming_to_safehouse\coming_to_safehouse_C_8"};
        coming_to_safehouse_C_9[] = {"RU\CAMPAIGN\coming_to_safehouse\coming_to_safehouse_C_9"};
        coming_to_safehouse_C_10[] = {"RU\CAMPAIGN\coming_to_safehouse\coming_to_safehouse_C_10"};
        coming_to_safehouse_C_11[] = {"RU\CAMPAIGN\coming_to_safehouse\coming_to_safehouse_C_11"};
        coming_to_safehouse_C_12[] = {"RU\CAMPAIGN\coming_to_safehouse\coming_to_safehouse_C_12"};
        reporting_sentry_point_C_0[] = {"RU\CAMPAIGN\Reporting_sentry_point\reporting_sentry_point_C_0"};
        reporting_sentry_point_C_1[] = {"RU\CAMPAIGN\Reporting_sentry_point\reporting_sentry_point_C_1"};
        reporting_sentry_point_C_2[] = {"RU\CAMPAIGN\Reporting_sentry_point\reporting_sentry_point_C_2"};
        identfy_nikitin_C_0[] = {"RU\CAMPAIGN\identfy_nikitin\identfy_nikitin_C_0"};
        identfy_nikitin_C_1[] = {"RU\CAMPAIGN\identfy_nikitin\identfy_nikitin_C_1"};
        identfy_nikitin_C_2[] = {"RU\CAMPAIGN\identfy_nikitin\identfy_nikitin_C_2"};
        identfy_nikitin_C_3[] = {"RU\CAMPAIGN\identfy_nikitin\identfy_nikitin_C_3"};
        identfy_nikitin_C_4[] = {"RU\CAMPAIGN\identfy_nikitin\identfy_nikitin_C_4"};
        identfy_nikitin_C_5[] = {"RU\CAMPAIGN\identfy_nikitin\identfy_nikitin_C_5"};
        identfy_nikitin_C_6[] = {"RU\CAMPAIGN\identfy_nikitin\identfy_nikitin_C_6"};
        identfy_nikitin_C_7[] = {"RU\CAMPAIGN\identfy_nikitin\identfy_nikitin_C_7"};
        usmc_checkpoint_Y_0[] = {"RU\CAMPAIGN\usmc_checkpoint\usmc_checkpoint_Y_0"};
        usmc_checkpoint_Y_1[] = {"RU\CAMPAIGN\usmc_checkpoint\usmc_checkpoint_Y_1"};
        usmc_checkpoint_Y_2[] = {"RU\CAMPAIGN\usmc_checkpoint\usmc_checkpoint_Y_2"};
        usmc_checkpoint_Y_3[] = {"RU\CAMPAIGN\usmc_checkpoint\usmc_checkpoint_Y_3"};
        usmc_checkpoint_Y_4[] = {"RU\CAMPAIGN\usmc_checkpoint\usmc_checkpoint_Y_4"};
        usmc_checkpoint_Y_5[] = {"RU\CAMPAIGN\usmc_checkpoint\usmc_checkpoint_Y_5"};
        cdf_checkpoint_Y_0[] = {"RU\CAMPAIGN\CDF_Checkpoint\cdf_checkpoint_Y_0"};
        spukayevs_house_1_Y_0[] = {"RU\CAMPAIGN\spukayevs_house_1\spukayevs_house_1_Y_0"};
        spukayevs_house_1_Y_1[] = {"RU\CAMPAIGN\spukayevs_house_1\spukayevs_house_1_Y_1"};
        spukayevs_house_1_Y_2[] = {"RU\CAMPAIGN\spukayevs_house_1\spukayevs_house_1_Y_2"};
        spukayevs_house_1_Y_3[] = {"RU\CAMPAIGN\spukayevs_house_1\spukayevs_house_1_Y_3"};
        spukayevs_house_1_Y_4[] = {"RU\CAMPAIGN\spukayevs_house_1\spukayevs_house_1_Y_4"};
        spukayevs_house_1_Y_5[] = {"RU\CAMPAIGN\spukayevs_house_1\spukayevs_house_1_Y_5"};
        spukayevs_house_1_Y_6[] = {"RU\CAMPAIGN\spukayevs_house_1\spukayevs_house_1_Y_6"};
        spukayevs_house_1_Y_7[] = {"RU\CAMPAIGN\spukayevs_house_1\spukayevs_house_1_Y_7"};
        cdf_encounter_Y_0[] = {"RU\CAMPAIGN\cdf_encounter\cdf_encounter_Y_0"};
        cdf_encounter_Y_1[] = {"RU\CAMPAIGN\cdf_encounter\cdf_encounter_Y_1"};
        cdf_encounter_Y_2[] = {"RU\CAMPAIGN\cdf_encounter\cdf_encounter_Y_2"};
        cdf_encounter_Y_3[] = {"RU\CAMPAIGN\cdf_encounter\cdf_encounter_Y_3"};
        cdf_encounter_Y_4[] = {"RU\CAMPAIGN\cdf_encounter\cdf_encounter_Y_4"};
        cdf_encounter_Y_5[] = {"RU\CAMPAIGN\cdf_encounter\cdf_encounter_Y_5"};
        cdf_encounter_Y_6[] = {"RU\CAMPAIGN\cdf_encounter\cdf_encounter_Y_6"};
        cdf_encounter_Y_7[] = {"RU\CAMPAIGN\cdf_encounter\cdf_encounter_Y_7"};
        specnaz_encounter_Y_0[] = {"RU\CAMPAIGN\specnaz_encounter\specnaz_encounter_Y_0"};
        specnaz_encounter_Y_1[] = {"RU\CAMPAIGN\specnaz_encounter\specnaz_encounter_Y_1"};
        specnaz_encounter_Y_2[] = {"RU\CAMPAIGN\specnaz_encounter\specnaz_encounter_Y_2"};
        specnaz_encounter_Y_3[] = {"RU\CAMPAIGN\specnaz_encounter\specnaz_encounter_Y_3"};
        specnaz_encounter_Y_4[] = {"RU\CAMPAIGN\specnaz_encounter\specnaz_encounter_Y_4"};
        specnaz_encounter_Y_5[] = {"RU\CAMPAIGN\specnaz_encounter\specnaz_encounter_Y_5"};
        talk_with_hastrman_Y_0[] = {"RU\CAMPAIGN\talk_with_hastrman\talk_with_hastrman_Y_0"};
        talk_with_hastrman_Y_1[] = {"RU\CAMPAIGN\talk_with_hastrman\talk_with_hastrman_Y_1"};
        checking_radio_source_Y_0[] = {"RU\CAMPAIGN\checking_radio_source\checking_radio_source_Y_0"};
        checking_radio_source_Y_1[] = {"RU\CAMPAIGN\checking_radio_source\checking_radio_source_Y_1"};
        checking_radio_source_Y_2[] = {"RU\CAMPAIGN\checking_radio_source\checking_radio_source_Y_2"};
        checking_radio_source_Y_3[] = {"RU\CAMPAIGN\checking_radio_source\checking_radio_source_Y_3"};
        usmc_welcome_Y_0[] = {"RU\CAMPAIGN\usmc_welcome\usmc_welcome_Y_0"};
        lopotev_attacked_Y_0[] = {"RU\CAMPAIGN\lopotev_attacked\lopotev_attacked_Y_0"};
        column_Y_0[] = {"RU\CAMPAIGN\column\column_Y_0"};
        harbour_Y_0[] = {"RU\CAMPAIGN\harbour\harbour_Y_0"};
        harbour_Y_1[] = {"RU\CAMPAIGN\harbour\harbour_Y_1"};
        harbour_Y_2[] = {"RU\CAMPAIGN\harbour\harbour_Y_2"};
        harbour_Y_3[] = {"RU\CAMPAIGN\harbour\harbour_Y_3"};
        second_harbour_Y_0[] = {"RU\CAMPAIGN\second_harbour\second_harbour_Y_0"};
        second_harbour_Y_1[] = {"RU\CAMPAIGN\second_harbour\second_harbour_Y_1"};
        second_harbour_Y_2[] = {"RU\CAMPAIGN\second_harbour\second_harbour_Y_2"};
        second_harbour_Y_3[] = {"RU\CAMPAIGN\second_harbour\second_harbour_Y_3"};
        HC_Advancing[] = {"RU\hc\Advancing"};
        HC_Affirmative[] = {"RU\hc\Affirmative"};
        HC_AssaultingEnemyPosition[] = {"RU\hc\AssaultingEnemyPosition"};
        HC_AttackingE[] = {"RU\hc\AttackingE"};
        HC_CombatReady[] = {"RU\hc\CombatReady"};
        HC_EngagingE[] = {"RU\hc\EngagingE"};
        HC_MovingToPosition[] = {"RU\hc\MovingToPosition"};
        HC_OrderReceived[] = {"RU\hc\OrderReceived"};
        HC_PinnedDownE[] = {"RU\hc\PinnedDownE"};
        HC_ReportingIn[] = {"RU\hc\ReportingIn"};
        HC_StandingByForOrders[] = {"RU\hc\StandingByForOrders"};
        HC_TakingHeavyFireE[] = {"RU\hc\TakingHeavyFireE"};
        HC_WaitingForOrders[] = {"RU\hc\WaitingForOrders"};
        HC_WeHaveCasaultiesE[] = {"RU\hc\WeHaveCasaultiesE"};
        HC_WeveGotMenKIAE[] = {"RU\hc\WeveGotMenKIAE"};
        ALICE_Positive_01[] = {"RU\ALICE\Positive\Positive_01"};
        ALICE_Positive_02[] = {"RU\ALICE\Positive\Positive_02"};
        ALICE_Positive_03[] = {"RU\ALICE\Positive\Positive_03"};
        ALICE_Positive_04[] = {"RU\ALICE\Positive\Positive_04"};
        ALICE_Positive_05[] = {"RU\ALICE\Positive\Positive_05"};
        ALICE_Positive_06[] = {"RU\ALICE\Positive\Positive_06"};
        ALICE_Positive_07[] = {"RU\ALICE\Positive\Positive_07"};
        ALICE_Positive_08[] = {"RU\ALICE\Positive\Positive_08"};
        ALICE_Positive_09[] = {"RU\ALICE\Positive\Positive_09"};
        ALICE_Positive_10[] = {"RU\ALICE\Positive\Positive_10"};
        ALICE_Positive_11[] = {"RU\ALICE\Positive\Positive_11"};
        ALICE_Positive_12[] = {"RU\ALICE\Positive\Positive_12"};
        ALICE_Positive_13[] = {"RU\ALICE\Positive\Positive_13"};
        ALICE_Positive_14[] = {"RU\ALICE\Positive\Positive_14"};
        ALICE_Positive_15[] = {"RU\ALICE\Positive\Positive_15"};
        ALICE_Positive_16[] = {"RU\ALICE\Positive\Positive_16"};
        ALICE_Positive_17[] = {"RU\ALICE\Positive\Positive_17"};
        ALICE_Positive_18[] = {"RU\ALICE\Positive\Positive_18"};
        ALICE_Positive_19[] = {"RU\ALICE\Positive\Positive_19"};
        ALICE_Positive_20[] = {"RU\ALICE\Positive\Positive_20"};
        ALICE_Positive_21[] = {"RU\ALICE\Positive\Positive_21"};
        ALICE_Positive_22[] = {"RU\ALICE\Positive\Positive_22"};
        ALICE_Positive_23[] = {"RU\ALICE\Positive\Positive_23"};
        ALICE_Positive_24[] = {"RU\ALICE\Positive\Positive_24"};
        ALICE_Positive_25[] = {"RU\ALICE\Positive\Positive_25"};
        ALICE_Positive_26[] = {"RU\ALICE\Positive\Positive_26"};
        ALICE_Positive_27[] = {"RU\ALICE\Positive\Positive_27"};
        ALICE_Positive_28[] = {"RU\ALICE\Positive\Positive_28"};
        ALICE_Positive_29[] = {"RU\ALICE\Positive\Positive_29"};
        ALICE_Positive_30[] = {"RU\ALICE\Positive\Positive_30"};
        ALICE_Positive_31[] = {"RU\ALICE\Positive\Positive_31"};
        ALICE_Positive_32[] = {"RU\ALICE\Positive\Positive_32"};
        ALICE_Positive_33[] = {"RU\ALICE\Positive\Positive_33"};
        ALICE_Positive_34[] = {"RU\ALICE\Positive\Positive_34"};
        ALICE_Positive_35[] = {"RU\ALICE\Positive\Positive_35"};
        ALICE_Positive_36[] = {"RU\ALICE\Positive\Positive_36"};
        ALICE_Positive_37[] = {"RU\ALICE\Positive\Positive_37"};
        ALICE_Positive_38[] = {"RU\ALICE\Positive\Positive_38"};
        ALICE_Neutral_01[] = {"RU\ALICE\Neutral\Neutral_01"};
        ALICE_Neutral_02[] = {"RU\ALICE\Neutral\Neutral_02"};
        ALICE_Neutral_03[] = {"RU\ALICE\Neutral\Neutral_03"};
        ALICE_Neutral_04[] = {"RU\ALICE\Neutral\Neutral_04"};
        ALICE_Neutral_05[] = {"RU\ALICE\Neutral\Neutral_05"};
        ALICE_Neutral_06[] = {"RU\ALICE\Neutral\Neutral_06"};
        ALICE_Neutral_07[] = {"RU\ALICE\Neutral\Neutral_07"};
        ALICE_Neutral_08[] = {"RU\ALICE\Neutral\Neutral_08"};
        ALICE_Neutral_09[] = {"RU\ALICE\Neutral\Neutral_09"};
        ALICE_Neutral_10[] = {"RU\ALICE\Neutral\Neutral_10"};
        ALICE_Neutral_11[] = {"RU\ALICE\Neutral\Neutral_11"};
        ALICE_Neutral_12[] = {"RU\ALICE\Neutral\Neutral_12"};
        ALICE_Neutral_13[] = {"RU\ALICE\Neutral\Neutral_13"};
        ALICE_Neutral_14[] = {"RU\ALICE\Neutral\Neutral_14"};
        ALICE_Neutral_15[] = {"RU\ALICE\Neutral\Neutral_15"};
        ALICE_Neutral_16[] = {"RU\ALICE\Neutral\Neutral_16"};
        ALICE_Neutral_17[] = {"RU\ALICE\Neutral\Neutral_17"};
        ALICE_Neutral_18[] = {"RU\ALICE\Neutral\Neutral_18"};
        ALICE_Neutral_19[] = {"RU\ALICE\Neutral\Neutral_19"};
        ALICE_Neutral_20[] = {"RU\ALICE\Neutral\Neutral_20"};
        ALICE_Neutral_21[] = {"RU\ALICE\Neutral\Neutral_21"};
        ALICE_Neutral_22[] = {"RU\ALICE\Neutral\Neutral_22"};
        ALICE_Neutral_23[] = {"RU\ALICE\Neutral\Neutral_23"};
        ALICE_Neutral_24[] = {"RU\ALICE\Neutral\Neutral_24"};
        ALICE_Neutral_25[] = {"RU\ALICE\Neutral\Neutral_25"};
        ALICE_Neutral_26[] = {"RU\ALICE\Neutral\Neutral_26"};
        ALICE_Neutral_27[] = {"RU\ALICE\Neutral\Neutral_27"};
        ALICE_Neutral_28[] = {"RU\ALICE\Neutral\Neutral_28"};
        ALICE_Neutral_29[] = {"RU\ALICE\Neutral\Neutral_29"};
        ALICE_Neutral_30[] = {"RU\ALICE\Neutral\Neutral_30"};
        ALICE_Neutral_31[] = {"RU\ALICE\Neutral\Neutral_31"};
        ALICE_Neutral_32[] = {"RU\ALICE\Neutral\Neutral_32"};
        ALICE_Neutral_33[] = {"RU\ALICE\Neutral\Neutral_33"};
        ALICE_Neutral_34[] = {"RU\ALICE\Neutral\Neutral_34"};
        ALICE_Neutral_35[] = {"RU\ALICE\Neutral\Neutral_35"};
        ALICE_Neutral_36[] = {"RU\ALICE\Neutral\Neutral_36"};
        ALICE_Neutral_37[] = {"RU\ALICE\Neutral\Neutral_37"};
        ALICE_Neutral_38[] = {"RU\ALICE\Neutral\Neutral_38"};
        ALICE_Negative_01[] = {"RU\ALICE\Negative\Negative_01"};
        ALICE_Negative_02[] = {"RU\ALICE\Negative\Negative_02"};
        ALICE_Negative_03[] = {"RU\ALICE\Negative\Negative_03"};
        ALICE_Negative_04[] = {"RU\ALICE\Negative\Negative_04"};
        ALICE_Negative_05[] = {"RU\ALICE\Negative\Negative_05"};
        ALICE_Negative_06[] = {"RU\ALICE\Negative\Negative_06"};
        ALICE_Negative_07[] = {"RU\ALICE\Negative\Negative_07"};
        ALICE_Negative_08[] = {"RU\ALICE\Negative\Negative_08"};
        ALICE_Negative_09[] = {"RU\ALICE\Negative\Negative_09"};
        ALICE_Negative_10[] = {"RU\ALICE\Negative\Negative_10"};
        ALICE_Negative_11[] = {"RU\ALICE\Negative\Negative_11"};
        ALICE_Negative_12[] = {"RU\ALICE\Negative\Negative_12"};
        ALICE_Negative_13[] = {"RU\ALICE\Negative\Negative_13"};
        ALICE_Negative_14[] = {"RU\ALICE\Negative\Negative_14"};
        ALICE_Negative_15[] = {"RU\ALICE\Negative\Negative_15"};
        ALICE_Negative_16[] = {"RU\ALICE\Negative\Negative_16"};
        ALICE_Sad_01[] = {"RU\ALICE\Sad\Sad_01"};
        ALICE_Sad_02[] = {"RU\ALICE\Sad\Sad_02"};
        ALICE_Sad_03[] = {"RU\ALICE\Sad\Sad_03"};
        ALICE_Sad_04[] = {"RU\ALICE\Sad\Sad_04"};
        ALICE_Sad_05[] = {"RU\ALICE\Sad\Sad_05"};
        ALICE_Sad_06[] = {"RU\ALICE\Sad\Sad_06"};
        ALICE_Sad_07[] = {"RU\ALICE\Sad\Sad_07"};
        ALICE_Sad_08[] = {"RU\ALICE\Sad\Sad_08"};
        ALICE_Sad_09[] = {"RU\ALICE\Sad\Sad_09"};
        ALICE_Sad_10[] = {"RU\ALICE\Sad\Sad_10"};
        ALICE_Sad_11[] = {"RU\ALICE\Sad\Sad_11"};
        ALICE_Sad_12[] = {"RU\ALICE\Sad\Sad_12"};
        ALICE_Sad_13[] = {"RU\ALICE\Sad\Sad_13"};
        ALICE_Sad_14[] = {"RU\ALICE\Sad\Sad_14"};
        ALICE_Sad_15[] = {"RU\ALICE\Sad\Sad_15"};
        ALICE_Sad_16[] = {"RU\ALICE\Sad\Sad_16"};
        ALICE_Sad_17[] = {"RU\ALICE\Sad\Sad_17"};
        ALICE_Sad_18[] = {"RU\ALICE\Sad\Sad_18"};
        ALICE_Sad_19[] = {"RU\ALICE\Sad\Sad_19"};
        ALICE_Sad_20[] = {"RU\ALICE\Sad\Sad_20"};
        ALICE_Sad_21[] = {"RU\ALICE\Sad\Sad_21"};
        ALICE_Sad_22[] = {"RU\ALICE\Sad\Sad_22"};
        ALICE_Sad_23[] = {"RU\ALICE\Sad\Sad_23"};
        ALICE_Sad_24[] = {"RU\ALICE\Sad\Sad_24"};
        ALICE_Sad_25[] = {"RU\ALICE\Sad\Sad_25"};
        ALICE_Sad_26[] = {"RU\ALICE\Sad\Sad_26"};
        ALICE_Sad_27[] = {"RU\ALICE\Sad\Sad_27"};
        ALICE_Sad_28[] = {"RU\ALICE\Sad\Sad_28"};
        ALICE_Sad_29[] = {"RU\ALICE\Sad\Sad_29"};
        ALICE_Sad_30[] = {"RU\ALICE\Sad\Sad_30"};
        ALICE_Sad_31[] = {"RU\ALICE\Sad\Sad_31"};
        ALICE_Sad_32[] = {"RU\ALICE\Sad\Sad_32"};
        ALICE_Sad_33[] = {"RU\ALICE\Sad\Sad_33"};
        ALICE_Sad_34[] = {"RU\ALICE\Sad\Sad_34"};
        ALICE_Sad_35[] = {"RU\ALICE\Sad\Sad_35"};
        ALICE_Sad_36[] = {"RU\ALICE\Sad\Sad_36"};
        ALICE_Sad_37[] = {"RU\ALICE\Sad\Sad_37"};
        ALICE_Sad_38[] = {"RU\ALICE\Sad\Sad_38"};
        ALICE_Remark_01[] = {"RU\ALICE\Remarks\Remark_01"};
        ALICE_Remark_02[] = {"RU\ALICE\Remarks\Remark_02"};
        ALICE_Remark_03[] = {"RU\ALICE\Remarks\Remark_03"};
        ALICE_Remark_04[] = {"RU\ALICE\Remarks\Remark_04"};
        ALICE_Remark_05[] = {"RU\ALICE\Remarks\Remark_05"};
        ALICE_Remark_06[] = {"RU\ALICE\Remarks\Remark_06"};
        ALICE_Remark_07[] = {"RU\ALICE\Remarks\Remark_07"};
        ALICE_Remark_08[] = {"RU\ALICE\Remarks\Remark_08"};
        ALICE_Remark_09[] = {"RU\ALICE\Remarks\Remark_09"};
        ALICE_Remark_10[] = {"RU\ALICE\Remarks\Remark_10"};
        ALICE_Remark_11[] = {"RU\ALICE\Remarks\Remark_11"};
        ALICE_Remark_12[] = {"RU\ALICE\Remarks\Remark_12"};
        ALICE_Remark_13[] = {"RU\ALICE\Remarks\Remark_13"};
        ALICE_Remark_14[] = {"RU\ALICE\Remarks\Remark_14"};
        ALICE_Remark_15[] = {"RU\ALICE\Remarks\Remark_15"};
        ALICE_Remark_16[] = {"RU\ALICE\Remarks\Remark_16"};
        ALICE_Remark_17[] = {"RU\ALICE\Remarks\Remark_17"};
        ALICE_Remark_18[] = {"RU\ALICE\Remarks\Remark_18"};
        ALICE_Remark_19[] = {"RU\ALICE\Remarks\Remark_19"};
        ALICE_Remark_20[] = {"RU\ALICE\Remarks\Remark_20"};
        ALICE_Remark_21[] = {"RU\ALICE\Remarks\Remark_21"};
        ALICE_Remark_22[] = {"RU\ALICE\Remarks\Remark_22"};
        ALICE_Remark_23[] = {"RU\ALICE\Remarks\Remark_23"};
        ALICE_Remark_24[] = {"RU\ALICE\Remarks\Remark_24"};
        ALICE_Remark_25[] = {"RU\ALICE\Remarks\Remark_25"};
        ALICE_Remark_26[] = {"RU\ALICE\Remarks\Remark_26"};
        ALICE_Remark_27[] = {"RU\ALICE\Remarks\Remark_27"};
        ALICE_Remark_28[] = {"RU\ALICE\Remarks\Remark_28"};
        ALICE_Remark_29[] = {"RU\ALICE\Remarks\Remark_29"};
        ALICE_Remark_30[] = {"RU\ALICE\Remarks\Remark_30"};
        ALICE_Remark_31[] = {"RU\ALICE\Remarks\Remark_31"};
        ALICE_Remark_32[] = {"RU\ALICE\Remarks\Remark_32"};
        ALICE_Remark_33[] = {"RU\ALICE\Remarks\Remark_33"};
        ALICE_Remark_34[] = {"RU\ALICE\Remarks\Remark_34"};
        ALICE_Remark_35[] = {"RU\ALICE\Remarks\Remark_35"};
        ALICE_Remark_36[] = {"RU\ALICE\Remarks\Remark_36"};
        ALICE_Remark_37[] = {"RU\ALICE\Remarks\Remark_37"};
        ALICE_Generic_01[] = {"RU\ALICE\Generic\Generic_01"};
        ALICE_Generic_02[] = {"RU\ALICE\Generic\Generic_02"};
        ALICE_Generic_03[] = {"RU\ALICE\Generic\Generic_03"};
        ALICE_Generic_04[] = {"RU\ALICE\Generic\Generic_04"};
        ALICE_Generic_05[] = {"RU\ALICE\Generic\Generic_05"};
        ALICE_Generic_06[] = {"RU\ALICE\Generic\Generic_06"};
        ALICE_Generic_07[] = {"RU\ALICE\Generic\Generic_07"};
        ALICE_Generic_08[] = {"RU\ALICE\Generic\Generic_08"};
        ALICE_Laugh01[] = {"RU\ALICE\Generic\Laugh01"};
        ALICE_Laugh02[] = {"RU\ALICE\Generic\Laugh02"};
        ALICE_Laugh03[] = {"RU\ALICE\Generic\Laugh03"};
        ALICE_Laugh04[] = {"RU\ALICE\Generic\Laugh04"};
        ALICE_Sigh01[] = {"RU\ALICE\Generic\Sigh01"};
        ALICE_Sigh02[] = {"RU\ALICE\Generic\Sigh02"};
        ALICE_Sigh03[] = {"RU\ALICE\Generic\Sigh03"};
        ALICE_Sigh04[] = {"RU\ALICE\Generic\Sigh04"};
        ALICE_Weep01[] = {"RU\ALICE\Generic\Weep01"};
        ALICE_Weep02[] = {"RU\ALICE\Generic\Weep02"};
        ALICE_Weep03[] = {"RU\ALICE\Generic\Weep03"};
        ALICE_Weep04[] = {"RU\ALICE\Generic\Weep04"};
        ALICE_Whistle01[] = {"RU\ALICE\Generic\Whistle01"};
        ALICE_Whistle02[] = {"RU\ALICE\Generic\Whistle02"};
        ALICE_Yawn01[] = {"RU\ALICE\Generic\Yawn01"};
        ALICE_Yawn02[] = {"RU\ALICE\Generic\Yawn02"};
        ALICE_Scream_01[] = {"RU\ALICE\Screams\Scream_01"};
        ALICE_Scream_02[] = {"RU\ALICE\Screams\Scream_02"};
        ALICE_Scream_03[] = {"RU\ALICE\Screams\Scream_03"};
        ALICE_Scream_04[] = {"RU\ALICE\Screams\Scream_04"};
        ALICE_Scream_05[] = {"RU\ALICE\Screams\Scream_05"};
        ALICE_Scream_06[] = {"RU\ALICE\Screams\Scream_06"};
        ALICE_Scream_07[] = {"RU\ALICE\Screams\Scream_07"};
        ALICE_Scream_08[] = {"RU\ALICE\Screams\Scream_08"};
        Hi_EN[] = {"EN\core\greeting\hi"};
        Hi_RU[] = {"RU\core\greeting\hi"};
        Hi1_RU[] = {"RU\core\greeting\hie"};
        Hi2_RU[] = {"RU\core\greeting\heya"};
        Hi3_RU[] = {"RU\core\greeting\howdye"};
        Hi_CZ[] = {"CZ\core\greeting\Ahoj"};
        Sir_EN[] = {"EN\core\greeting\sir"};
        Sir_RU[] = {"RU\core\greeting\sirq"};
        Sir_CZ[] = {"CZ\core\greeting\PaneQ"};
        SirQ_EN[] = {"EN\core\greeting\sirq"};
        SirQ_RU[] = {"RU\core\greeting\sirq"};
        SirQ_CZ[] = {"CZ\core\greeting\PaneQ"};
        PrivateQ_EN[] = {"EN\core\greeting\privateq"};
        PrivateQ_RU[] = {"RU\core\greeting\privateq"};
        PrivateQ_CZ[] = {"CZ\core\greeting\VojineQ"};
        CorporalQ_EN[] = {"EN\core\greeting\corporalq"};
        CorporalQ_RU[] = {"RU\core\greeting\corporalq"};
        CorporalQ_CZ[] = {"CZ\core\greeting\SvobodnikuQ"};
        SergeantQ_EN[] = {"EN\core\greeting\sergeantq"};
        SergeantQ_RU[] = {"RU\core\greeting\sergeantq"};
        SergeantQ_CZ[] = {"CZ\core\greeting\SerzanteQ"};
        LieutenantQ_EN[] = {"EN\core\greeting\lieutenantq"};
        LieutenantQ_RU[] = {"RU\core\greeting\lieutenantq"};
        LieutenantQ_CZ[] = {"CZ\core\greeting\PorucikuQ"};
        CaptainQ_EN[] = {"EN\core\greeting\captainq"};
        CaptainQ_RU[] = {"RU\core\greeting\captainq"};
        CaptainQ_CZ[] = {"CZ\core\greeting\KapitaneQ"};
        MajorQ_EN[] = {"EN\core\greeting\majorq"};
        MajorQ_RU[] = {"RU\core\greeting\majorq"};
        MajorQ_CZ[] = {"CZ\core\greeting\MajoreQ"};
        ColonelQ_EN[] = {"EN\core\greeting\colonelq"};
        ColonelQ_RU[] = {"RU\core\greeting\colonelq"};
        ColonelQ_CZ[] = {"CZ\core\greeting\PlukovnikuQ"};
        Soldier_EN[] = {"EN\core\greeting\soldier"};
        Soldier_RU[] = {"RU\core\greeting\soldier"};
        Soldier_CZ[] = {"CZ\core\greeting\VojakuQ"};
        Marine_EN[] = {"EN\core\greeting\marine"};
        Marine_RU[] = {"RU\core\greeting\marine"};
        Marine_CZ[] = {"CZ\core\greeting\marine"};
        SoldierQ_EN[] = {"EN\core\greeting\soldierq"};
        SoldierQ_RU[] = {"RU\core\greeting\soldierq"};
        SoldierQ_CZ[] = {"CZ\core\greeting\VojakuQ"};
        MarineQ_EN[] = {"EN\core\greeting\marineq"};
        MarineQ_RU[] = {"RU\core\greeting\marineq"};
        MarineQ_CZ[] = {"CZ\core\greeting\VojakuQ"};
        DoYouWantQ_EN[] = {"EN\core\greeting\DoYouWantQ"};
        DoYouWantQ_RU[] = {"RU\core\greeting\DoYouWantQ"};
        DoYouWantQ_CZ[] = {"CZ\core\greeting\CoChceteQ"};
        DoYouNeedQ_EN[] = {"EN\core\greeting\DoYouNeedQ"};
        DoYouNeedQ_RU[] = {"RU\core\greeting\DoYouNeedQ"};
        DoYouNeedQ_CZ[] = {"CZ\core\greeting\CoPotrebujeteQ"};
        CantYouSeeImBusyQ_EN[] = {"EN\core\greeting\CantYouSeeImBusyQ"};
        CantYouSeeImBusyQ_RU[] = {"RU\core\greeting\dontyouseeimbusyq"};
        CantYouSeeImBusyQ_CZ[] = {"CZ\core\greeting\NeviditeZeMamPraciQ"};
        BitOccupiedAtTheMoment_EN[] = {"EN\core\greeting\bit_occupied_at_the_moment"};
        BitOccupiedAtTheMoment_RU[] = {"RU\core\greeting\idonthavetime"};
        BitOccupiedAtTheMoment_CZ[] = {"CZ\core\greeting\KamoTedFaktNemuzu"};
        Dude_EN[] = {"EN\core\greeting\dude"};
        Dude_RU[] = {"RU\core\greeting\dude"};
        Dude_CZ[] = {"CZ\core\greeting\dude"};
        ImBusy_EN[] = {"EN\core\greeting\imbusy"};
        ImBusy_RU[] = {"RU\core\greeting\sorrymateimbusynow"};
        ImBusy_CZ[] = {"CZ\core\greeting\MamPraciE"};
        PissOff_EN[] = {"EN\core\greeting\pissoff"};
        PissOff_RU[] = {"RU\core\greeting\pissoff"};
        PissOff_CZ[] = {"CZ\core\greeting\DiDoHajzluE"};
        MadamQ_EN[] = {"EN\core\greeting\madamq"};
        MadamQ_RU[] = {"RU\core\greeting\madamq"};
        MadamQ_CZ[] = {"CZ\core\greeting\MadamQ"};
        ALovelyDayToYou_EN[] = {"EN\core\greeting\HaveANiceDay"};
        ALovelyDayToYou_RU[] = {"RU\core\greeting\HaveANiceDay"};
        ALovelyDayToYou_CZ[] = {"CZ\core\greeting\PeknyDen"};
        TopOfTheMorningMiss_EN[] = {"EN\core\greeting\MorningMadam"};
        TopOfTheMorningMiss_RU[] = {"RU\core\greeting\MorningMadam"};
        TopOfTheMorningMiss_CZ[] = {"CZ\core\greeting\BryRanoPani"};
        Gorgeous_EN[] = {"EN\core\greeting\madam"};
        Gorgeous_RU[] = {"RU\core\greeting\madamq"};
        Gorgeous_CZ[] = {"CZ\core\greeting\MadamQ"};
        Hello_EN[] = {"EN\core\greeting\hello"};
        Hello_RU[] = {"RU\core\greeting\hello"};
        Hello_CZ[] = {"CZ\core\greeting\Cau"};
        Sexy_EN[] = {"EN\core\greeting\HowYouDoinQ"};
        Sexy_RU[] = {"RU\core\greeting\HowYouDoinQ"};
        Sexy_CZ[] = {"CZ\core\greeting\JakToDeQ"};
        YessirQ_EN[] = {"EN\core\greeting\sirq"};
        YessirQ_RU[] = {"RU\core\greeting\yessirq"};
        YessirQ_CZ[] = {"CZ\core\greeting\AnoQ"};
        WhatQ_EN[] = {"EN\core\greeting\whatq"};
        WhatQ_RU[] = {"RU\core\greeting\whatq"};
        WhatQ_CZ[] = {"CZ\core\greeting\CoQ"};
        YepQ_EN[] = {"EN\core\greeting\yepq"};
        YepQ_RU[] = {"RU\core\greeting\yepq"};
        YepQ_CZ[] = {"CZ\core\greeting\AnoQ"};
        YeahQ_EN[] = {"EN\core\greeting\yeahq"};
        YeahQ_RU[] = {"RU\core\greeting\yeahq"};
        YeahQ_CZ[] = {"CZ\core\greeting\AnoQ"};
        NotNow_EN[] = {"EN\core\greeting\notnow"};
        NotNow_RU[] = {"RU\core\greeting\notnow"};
        NotNow_CZ[] = {"CZ\core\greeting\TedNe"};
        Later_EN[] = {"EN\core\greeting\later"};
        Later_RU[] = {"RU\core\greeting\later"};
        Later_CZ[] = {"CZ\core\greeting\PozdejiE"};
        NoTime_EN[] = {"EN\core\greeting\notime"};
        NoTime_RU[] = {"RU\core\greeting\notime"};
        NoTime_CZ[] = {"CZ\core\greeting\NemamCasE"};
        Hush_EN[] = {"EN\core\greeting\hush"};
        Hush_RU[] = {"RU\core\greeting\shushe"};
        Hush_CZ[] = {"CZ\core\greeting\PstE"};
        Shh_EN[] = {"EN\core\greeting\shh"};
        Shh_RU[] = {"RU\core\greeting\shhe"};
        Shh_CZ[] = {"CZ\core\greeting\SssE"};
        NiceToSeeYou_EN[] = {"EN\core\greeting\nicetoseeyou"};
        NiceToSeeYou_RU[] = {"RU\core\greeting\gladtoseeyou"};
        NiceToSeeYou_CZ[] = {"CZ\core\greeting\RadVasVidim"};
        ToHaveYouHere_EN[] = {"EN\core\greeting\NiceToHaveYouHere"};
        ToHaveYouHere_RU[] = {"RU\core\greeting\NiceToHaveYouHere"};
        ToHaveYouHere_CZ[] = {"CZ\core\greeting\FajnZeJsteTady"};
        Glad_EN[] = {"EN\core\greeting\glad"};
        Glad_RU[] = {"RU\core\greeting\glad"};
        Glad_CZ[] = {"CZ\core\greeting\EMPTY"};
        YouGuysAreHere_EN[] = {"EN\core\greeting\YouGuysAreHere"};
        YouGuysAreHere_RU[] = {"RU\core\greeting\YouGuysAreHere"};
        YouGuysAreHere_CZ[] = {"CZ\core\greeting\ToJeFajnZeVasTuMame"};
        YouAreHere_EN[] = {"EN\core\greeting\YouAreHere"};
        YouAreHere_RU[] = {"RU\core\greeting\YouAreHere"};
        YouAreHere_CZ[] = {"CZ\core\greeting\DobreZeTuJste"};
        CanIHelpYouQ_EN[] = {"EN\core\greeting\CanIHelpYouQ"};
        CanIHelpYouQ_RU[] = {"RU\core\greeting\MayIHelpYouQ"};
        CanIHelpYouQ_CZ[] = {"CZ\core\greeting\MuzuVamPomoctQ"};
        GetLostE_EN[] = {"EN\core\greeting\GetLostE"};
        GetLostE_RU[] = {"RU\core\greeting\goawaye"};
        GetLostE_CZ[] = {"CZ\core\greeting\TahniE"};
        GoHomeAlready_EN[] = {"EN\core\greeting\GoHomeAlready"};
        GoHomeAlready_RU[] = {"RU\core\greeting\GoHomeAlready"};
        GoHomeAlready_CZ[] = {"CZ\core\greeting\PadejteDomuE"};
        BabykillingMorons_EN[] = {"EN\core\greeting\BabyKillersE"};
        BabykillingMorons_RU[] = {"RU\core\greeting\BabyKillersE"};
        BabykillingMorons_CZ[] = {"CZ\core\greeting\VrahouniE"};
        GoAwayMurderers_EN[] = {"EN\core\greeting\GoHomeMurderersE"};
        GoAwayMurderers_RU[] = {"RU\core\greeting\GoHomeMurderersE"};
        GoAwayMurderers_CZ[] = {"CZ\core\greeting\TahneteDoHajzluVyVraziE"};
        LeaveUsAloneE_EN[] = {"EN\core\greeting\LeaveUsAloneE"};
        LeaveUsAloneE_RU[] = {"RU\core\greeting\LeaveUsAloneE"};
        LeaveUsAloneE_CZ[] = {"CZ\core\greeting\NechteNasNaPokojiE"};
        LeaveMeAlone_EN[] = {"EN\core\greeting\LeaveMeAlone"};
        LeaveMeAlone_RU[] = {"RU\core\greeting\LeaveMeAlone"};
        LeaveMeAlone_CZ[] = {"CZ\core\greeting\NechMeBejt"};
        GoBackToYourOwnCountry_EN[] = {"EN\core\greeting\GoBackToYourOwnCountryE"};
        GoBackToYourOwnCountry_RU[] = {"RU\core\greeting\GoBackToYourOwnCountry"};
        GoBackToYourOwnCountry_CZ[] = {"CZ\core\greeting\BezteDoPrdeleE"};
        FuckingPig_EN[] = {"EN\core\greeting\FuckingPigE"};
        FuckingPig_RU[] = {"RU\core\greeting\FuckingPig"};
        FuckingPig_CZ[] = {"CZ\core\greeting\SvineZasranyE"};
        StupidSonOfABitchE_EN[] = {"EN\core\greeting\StupidSonOfABitchE"};
        StupidSonOfABitchE_RU[] = {"RU\core\greeting\StupidSonOfABitchE"};
        StupidSonOfABitchE_CZ[] = {"CZ\core\greeting\KokoteBlbaE"};
        DamnYouE_EN[] = {"EN\core\greeting\DamnYouE"};
        DamnYouE_RU[] = {"RU\core\greeting\DamnYouE"};
        DamnYouE_CZ[] = {"CZ\core\greeting\ChcipniE"};
        MayIAskYouSomethingQ_EN[] = {"EN\core\greeting\CanIAskYouSomethingQ"};
        MayIAskYouSomethingQ_RU[] = {"RU\core\greeting\CanIAskYouSomethingQ"};
        MayIAskYouSomethingQ_CZ[] = {"CZ\core\greeting\MuzuSeNaNecoZeptatQ"};
        PleaseCanYouHelpQ_EN[] = {"EN\core\greeting\PleaseCanYouHelpQ"};
        PleaseCanYouHelpQ_RU[] = {"RU\core\greeting\PleaseCanYouHelpQ"};
        PleaseCanYouHelpQ_CZ[] = {"CZ\core\greeting\ProsimVasMuzeteMiPomoctQ"};
        Speak_EN[] = {"EN\core\greeting\speak"};
        Speak_RU[] = {"RU\core\greeting\speak"};
        Speak_CZ[] = {"CZ\core\greeting\Mluvte"};
        HelpUs_EN[] = {"EN\core\greeting\helpus"};
        HelpUs_RU[] = {"RU\core\greeting\help_us"};
        HelpUs_CZ[] = {"CZ\core\greeting\PomozteNam"};
        IWillTellYouNothing_EN[] = {"EN\core\greeting\IllTellYouNothingE"};
        IWillTellYouNothing_RU[] = {"RU\core\greeting\IllTellYouNothingE"};
        IWillTellYouNothing_CZ[] = {"CZ\core\greeting\NicVamNereknu"};
        ImNotSayingAnotherWord_EN[] = {"EN\core\greeting\IwontSayAnotherWordE"};
        ImNotSayingAnotherWord_RU[] = {"RU\core\greeting\IwontSayAnotherWordE"};
        ImNotSayingAnotherWord_CZ[] = {"CZ\core\greeting\UzNicNepovim"};
        KeepingMyMouthShut_EN[] = {"EN\core\greeting\ImKeepingMyMouthShut"};
        KeepingMyMouthShut_RU[] = {"RU\core\greeting\ImKeepingMyMouthShut"};
        KeepingMyMouthShut_CZ[] = {"CZ\core\greeting\VamTedaNicNereknu"};
        MindYourOwnBusiness_EN[] = {"EN\core\greeting\MindYourOwnBusiness"};
        MindYourOwnBusiness_RU[] = {"RU\core\greeting\MindYourOwnBusiness"};
        MindYourOwnBusiness_CZ[] = {"CZ\core\greeting\HledteSiSvyho"};
        GoBotherSomeoneElse_EN[] = {"EN\core\greeting\GoBotherSomeoneElse"};
        GoBotherSomeoneElse_RU[] = {"RU\core\greeting\GoBotherSomeoneElse"};
        GoBotherSomeoneElse_CZ[] = {"CZ\core\greeting\VobtezujNekohoJinyho"};
        WhatsUpQ_EN[] = {"EN\core\greeting\WhatsUpQ"};
        WhatsUpQ_RU[] = {"RU\core\greeting\WhatsUpQ"};
        WhatsUpQ_CZ[] = {"CZ\core\greeting\CoJeQ"};
        SupQ_EN[] = {"EN\core\greeting\supq"};
        SupQ_RU[] = {"RU\core\greeting\supq"};
        SupQ_CZ[] = {"CZ\core\greeting\Cus"};
        Yo_EN[] = {"EN\core\greeting\Heya"};
        Yo_RU[] = {"RU\core\greeting\Heya"};
        Yo_CZ[] = {"CZ\core\greeting\Zdar"};
        HowsThingsQ_EN[] = {"EN\core\greeting\HowsThingsQ"};
        HowsThingsQ_RU[] = {"RU\core\greeting\HowsThingsQ"};
        HowsThingsQ_CZ[] = {"CZ\core\greeting\JakToDeQ"};
        HowAreYouQ_EN[] = {"EN\core\greeting\HowAreYouQ"};
        HowAreYouQ_RU[] = {"RU\core\greeting\HowAreYouQ"};
        HowAreYouQ_CZ[] = {"CZ\core\greeting\JakSeDariQ"};
        Hey_EN[] = {"EN\core\greeting\hey"};
        Hey_RU[] = {"RU\core\greeting\hiya"};
        Hey_CZ[] = {"CZ\core\greeting\NazdarE"};
        Hiya_EN[] = {"EN\core\greeting\hiya"};
        Hiya_RU[] = {"RU\core\greeting\hiya"};
        Hiya_CZ[] = {"CZ\core\greeting\HejE"};
        WhatsHappeningQ_EN[] = {"EN\core\greeting\WhatsHappeningQ"};
        WhatsHappeningQ_RU[] = {"RU\core\greeting\WhatsHappeningQ"};
        WhatsHappeningQ_CZ[] = {"CZ\core\greeting\TakCoQ"};
        Handsome_EN[] = {"EN\core\greeting\handsome"};
        Handsome_RU[] = {"RU\core\greeting\handsome"};
        Handsome_CZ[] = {"CZ\core\greeting\handsome"};
        DontTouchMe_EN[] = {"EN\core\greeting\DontTouchMe"};
        DontTouchMe_RU[] = {"RU\core\greeting\DontTouchMe"};
        DontTouchMe_CZ[] = {"CZ\core\greeting\NechMeBejt"};
        Thanks_EN[] = {"EN\core\greeting\thanks"};
        Thanks_RU[] = {"RU\core\greeting\thanks"};
        Thanks_CZ[] = {"CZ\core\greeting\Diky"};
        Thank_EN[] = {"EN\core\greeting\thank"};
        Thank_RU[] = {"RU\core\greeting\thank"};
        Thank_CZ[] = {"CZ\core\greeting\Diky"};
        ThankYou_EN[] = {"EN\core\greeting\ThankYou"};
        ThankYou_RU[] = {"RU\core\greeting\ThankYou"};
        ThankYou_CZ[] = {"CZ\core\greeting\Dekuju"};
        You_EN[] = {"EN\core\greeting\you"};
        You_RU[] = {"RU\core\greeting\you"};
        You_CZ[] = {"CZ\core\greeting\EMPTY"};
        For_EN[] = {"EN\core\greeting\for"};
        For_RU[] = {"RU\core\greeting\for"};
        For_CZ[] = {"CZ\core\greeting\EMPTY"};
        TheInformation_EN[] = {"EN\core\greeting\TheInformation"};
        TheInformation_RU[] = {"RU\core\greeting\TheInformation"};
        TheInformation_CZ[] = {"CZ\core\greeting\DikZaInformace"};
        Trying_EN[] = {"EN\core\greeting\trying"};
        Trying_RU[] = {"RU\core\greeting\trying"};
        Trying_CZ[] = {"CZ\core\greeting\DikZaSnahu"};
        Anyway_EN[] = {"EN\core\greeting\anyway"};
        Anyway_RU[] = {"RU\core\greeting\anyway"};
        Anyway_CZ[] = {"CZ\core\greeting\StejneDiky"};
        Nothing_EN[] = {"EN\core\greeting\nothing"};
        Nothing_RU[] = {"RU\core\greeting\nothing"};
        Nothing_CZ[] = {"CZ\core\greeting\HmTakDik"};
        HelpedUsOutALot_EN[] = {"EN\core\greeting\HelpedUsALot"};
        HelpedUsOutALot_RU[] = {"RU\core\greeting\HelpedUsALot"};
        HelpedUsOutALot_CZ[] = {"CZ\core\greeting\TohlePomohloDiky"};
        Bye_EN[] = {"EN\core\greeting\bye"};
        Bye_RU[] = {"RU\core\greeting\bye"};
        Bye_CZ[] = {"CZ\core\greeting\Nashle"};
        Goodbye_EN[] = {"EN\core\greeting\goodbye"};
        Goodbye_RU[] = {"RU\core\greeting\goodbye"};
        Goodbye_CZ[] = {"CZ\core\greeting\Nashledanou"};
        Cya_EN[] = {"EN\core\greeting\Seeya"};
        Cya_RU[] = {"RU\core\greeting\Seeya"};
        Cya_CZ[] = {"CZ\core\greeting\Cau"};
        TalkToYouLater_EN[] = {"EN\core\greeting\TalkToYouLater"};
        TalkToYouLater_RU[] = {"RU\core\greeting\TalkToYouLater"};
        TalkToYouLater_CZ[] = {"CZ\core\greeting\TakZasNekdy"};
        TakeCare_EN[] = {"EN\core\greeting\TakeCare"};
        TakeCare_RU[] = {"RU\core\greeting\TakeCare"};
        TakeCare_CZ[] = {"CZ\core\greeting\MejSe"};
        Whatever_EN[] = {"EN\core\greeting\whatever"};
        Whatever_RU[] = {"RU\core\greeting\whatever"};
        Whatever_CZ[] = {"CZ\core\greeting\TakCus"};
        JustLeave_EN[] = {"EN\core\greeting\JustLeave"};
        JustLeave_RU[] = {"RU\core\greeting\JustLeave"};
        JustLeave_CZ[] = {"CZ\core\greeting\Zmiz"};
        IwillOnlyTellYouMyNameRankAndSerialnumber_EN[] = {"EN\core\greeting\IwillOnlyTellYouMyNameRankAndSerialnumber"};
        IwillOnlyTellYouMyNameRankAndSerialnumber_RU[] = {"RU\core\greeting\IwillOnlyTellYouMyNameRankAndSerialnumber"};
        IwillOnlyTellYouMyNameRankAndSerialnumber_CZ[] = {"CZ\core\generic\ReknuJenomSvojeJmenoHodnostACislo"};
        NiceWeatherIsntItQ_EN[] = {"EN\core\weather\NiceWeatherHuhQ"};
        NiceWeatherIsntItQ_RU[] = {"RU\core\weather\NiceWeatherHuhQ"};
        NiceWeatherIsntItQ_CZ[] = {"CZ\core\weather\DneskaJePekneZeJoQ"};
        ThatsSomeNastyWeatherAintItQ_EN[] = {"EN\core\weather\NastyWeatherHuhQ"};
        ThatsSomeNastyWeatherAintItQ_RU[] = {"RU\core\weather\NastyWeatherHuhQ"};
        ThatsSomeNastyWeatherAintItQ_CZ[] = {"CZ\core\weather\ToJeAleHnusneCoQ"};
        WhatsTheWeatherForecastLikeQ_EN[] = {"EN\core\weather\WhatsTheWeatherForecastLikeQ"};
        WhatsTheWeatherForecastLikeQ_RU[] = {"RU\core\weather\WhatsTheWeatherForecastLikeQ"};
        WhatsTheWeatherForecastLikeQ_CZ[] = {"CZ\core\weather\JakaJePredpovedQ"};
        AnyWordOnWhatTheWeathersGonnaDoQ_EN[] = {"EN\core\weather\AnyWordOnWhatTheWeathersGonnaDoQ"};
        AnyWordOnWhatTheWeathersGonnaDoQ_RU[] = {"RU\core\weather\AnyWordOnWhatTheWeathersGonnaDoQ"};
        AnyWordOnWhatTheWeathersGonnaDoQ_CZ[] = {"CZ\core\weather\NeviteJakBudeQ"};
        SeemsLikeItllStayLikeThisForAWhile_EN[] = {"EN\core\weather\SeemsLikeItllStayLikeThisForAWhile"};
        SeemsLikeItllStayLikeThisForAWhile_RU[] = {"RU\core\weather\SeemsLikeItllStayLikeThisForAWhile"};
        SeemsLikeItllStayLikeThisForAWhile_CZ[] = {"CZ\core\weather\NoAsiToVydrzi"};
        IHeardWellGetSomeRainSoon_EN[] = {"EN\core\weather\IheardWellGetSomeRainSoon"};
        IHeardWellGetSomeRainSoon_RU[] = {"RU\core\weather\IheardWellGetSomeRainSoon"};
        IHeardWellGetSomeRainSoon_CZ[] = {"CZ\core\weather\PrejMaPrset"};
        ThingsShouldBeClearingUpSoon_EN[] = {"EN\core\weather\ThingsShouldBeClearingUpSoon"};
        ThingsShouldBeClearingUpSoon_RU[] = {"RU\core\weather\ThingsShouldBeClearingUpSoon"};
        ThingsShouldBeClearingUpSoon_CZ[] = {"CZ\core\weather\PrejSeToMaLepsit"};
        DidYou_EN[] = {"EN\core\targets\DidYouQ"};
        DidYou_RU[] = {"RU\core\targets\EMPTY"};
        DidYou_CZ[] = {"CZ\core\targets\EMPTY"};
        YesISawSomething_RU[] = {};
        NoticeAnythingOutOfTheOrdinaryRecentlyQ_EN[] = {"EN\core\targets\SeeAnythingRecentlyQ"};
        NoticeAnythingOutOfTheOrdinaryRecentlyQ_RU[] = {"RU\core\targets\didyouseeanyoneelsearoundhereq"};
        NoticeAnythingOutOfTheOrdinaryRecentlyQ_CZ[] = {"CZ\core\targets\NevsimliJsteSiNecehoPodezrelehoQ"};
        SeeAnyoneElseAroundHereQ_EN[] = {"EN\core\targets\SeeAnyoneElseAroundHereQ"};
        SeeAnyoneElseAroundHereQ_RU[] = {"RU\core\targets\DidYouSeeAnyoneElseAroundHereQ"};
        SeeAnyoneElseAroundHereQ_CZ[] = {"CZ\core\targets\NevideliJstePosledniDobouNecoQ"};
        Sorry_EN[] = {"EN\core\targets\sorry"};
        Sorry_RU[] = {"RU\core\targets\EMPTY"};
        Sorry_CZ[] = {"CZ\core\targets\EMPTY"};
        IDidntSeeAnything_EN[] = {"EN\core\targets\IdidntSeeAnything"};
        IDidntSeeAnything_RU[] = {"RU\core\targets\SorryIDidntSeeAnything"};
        IDidntSeeAnything_CZ[] = {"CZ\core\targets\NikdeNic"};
        ISawALotOfUnits_EN[] = {"EN\core\targets\IveSeenLotsOfUnits"};
        ISawALotOfUnits_RU[] = {"RU\core\targets\IveSeenLotsOfUnits"};
        ISawALotOfUnits_CZ[] = {"CZ\core\targets\JoBylaTohoSpousta"};
        Several_EN[] = {"EN\core\targets\several"};
        Several_RU[] = {"RU\core\targets\FewMore"};
        Several_CZ[] = {"CZ\core\targets\Par"};
        Some_EN[] = {"EN\core\targets\some"};
        Some_RU[] = {"RU\core\targets\Few"};
        Some_CZ[] = {"CZ\core\targets\Dost"};
        ALotOf_EN[] = {"EN\core\targets\ALotOf"};
        ALotOf_RU[] = {"RU\core\targets\ALotOf"};
        ALotOf_CZ[] = {"CZ\core\targets\Hodne"};
        West_EN[] = {"EN\core\targets\west"};
        West_RU[] = {"RU\core\targets\western"};
        West_CZ[] = {"CZ\core\targets\Zapadni"};
        East_EN[] = {"EN\core\targets\east"};
        East_RU[] = {"RU\core\targets\eastern"};
        East_CZ[] = {"CZ\core\targets\Vychodni"};
        Independent_EN[] = {"EN\core\targets\independent"};
        Independent_RU[] = {"RU\core\targets\independent"};
        Independent_CZ[] = {"CZ\core\targets\independent"};
        Civilian_EN[] = {"EN\core\targets\civilian"};
        Civilian_RU[] = {"RU\core\targets\civilian"};
        Civilian_CZ[] = {"CZ\core\targets\civilian"};
        Local_EN[] = {"EN\core\targets\Local"};
        Local_RU[] = {"RU\core\targets\Local"};
        Local_CZ[] = {"CZ\core\targets\Local"};
        OfThem_EN[] = {"EN\core\targets\OfThem"};
        OfThem_RU[] = {"RU\core\targets\OfThem"};
        OfThem_CZ[] = {"CZ\core\targets\ByloJich"};
        One_EN[] = {"EN\core\targets\one"};
        One_RU[] = {"RU\core\targets\one"};
        One_CZ[] = {"CZ\core\targets\Jeden"};
        In_EN[] = {"EN\core\targets\in"};
        In_RU[] = {"RU\core\targets\in"};
        In_CZ[] = {"CZ\core\targets\in"};
        Near_EN[] = {"EN\core\targets\near"};
        Near_RU[] = {"RU\core\targets\near"};
        Near_CZ[] = {"CZ\core\targets\U"};
        NotFar_EN[] = {"EN\core\targets\notfar"};
        NotFar_RU[] = {"RU\core\targets\EMPTY"};
        NotFar_CZ[] = {"CZ\core\targets\Nedaleko"};
        From_EN[] = {"EN\core\targets\from"};
        From_RU[] = {"RU\core\targets\NotFarFrom"};
        From_CZ[] = {"CZ\core\targets\from"};
        Around_EN[] = {"EN\core\targets\around"};
        Around_RU[] = {"RU\core\targets\around"};
        Around_CZ[] = {"CZ\core\targets\around"};
        Here_EN[] = {"EN\core\targets\here"};
        Here_RU[] = {"RU\core\targets\Near"};
        Here_CZ[] = {"CZ\core\targets\Pobliz"};
        JustNow_EN[] = {"EN\core\targets\JustNow"};
        JustNow_RU[] = {"RU\core\targets\AboutAnHourAgo"};
        JustNow_CZ[] = {"CZ\core\targets\PravePredChvili"};
        AFew_EN[] = {"EN\core\targets\AFew"};
        AFew_RU[] = {"RU\core\targets\Few"};
        AFew_CZ[] = {"CZ\core\targets\Par"};
        MinutesAgo_EN[] = {"EN\core\targets\MinutesAgo"};
        MinutesAgo_RU[] = {"RU\core\targets\AboutAnHourAgo"};
        MinutesAgo_CZ[] = {"CZ\core\targets\PravePredChvili"};
        HoursAgo_EN[] = {"EN\core\targets\HoursAgo"};
        HoursAgo_RU[] = {"RU\core\targets\AwhileAgo"};
        HoursAgo_CZ[] = {"CZ\core\targets\AsiPredHodinou"};
        Today_EN[] = {"EN\core\targets\today"};
        Today_RU[] = {"RU\core\targets\AwhileAgo"};
        Today_CZ[] = {"CZ\core\targets\AsiPredHodinou"};
        Yesterday_EN[] = {"EN\core\targets\yesterday"};
        Yesterday_RU[] = {"RU\core\targets\ItWasYesterday"};
        Yesterday_CZ[] = {"CZ\core\targets\ByloToVcera"};
        SeveralDaysAgo_EN[] = {"EN\core\targets\SeveralDaysAgo"};
        SeveralDaysAgo_RU[] = {"RU\core\targets\ItWasYesterday"};
        SeveralDaysAgo_CZ[] = {"CZ\core\targets\JeToDlouho"};
        ISaw_EN[] = {"EN\core\targets\ISaw"};
        ISaw_RU[] = {"RU\core\targets\ISaw"};
        ISaw_CZ[] = {"CZ\core\targets\VidelJsem"};
        And_EN[] = {"EN\core\targets\and"};
        And_RU[] = {"RU\core\targets\and"};
        And_CZ[] = {"CZ\core\targets\A"};
        An_EN[] = {"EN\core\targets\an_EN"};
        An_RU[] = {"RU\core\targets\an_RU"};
        An_CZ[] = {"CZ\core\targets\an_CZ"};
        A_EN[] = {"EN\core\targets\a_EN"};
        A_RU[] = {"RU\core\targets\a_RU"};
        A_CZ[] = {"CZ\core\targets\a_CZ"};
        Where_EN[] = {"EN\core\location\WhereQ"};
        Where_RU[] = {"RU\core\location\WhereAreWe"};
        Where_CZ[] = {"CZ\core\location\KdeToJsmeQ"};
        WhereAreWe_EN[] = {"EN\core\location\WhereAreWe"};
        WhereAreWe_RU[] = {"RU\core\location\WhereAreWe"};
        WhereAreWe_CZ[] = {"CZ\core\location\KdeToJsmeQ"};
        DoYouKnowWhereWeAreQ_EN[] = {"EN\core\location\DoYouKnowWhereWeAreQ"};
        DoYouKnowWhereWeAreQ_RU[] = {"RU\core\location\DoYouKnowWhereWeAreQ"};
        DoYouKnowWhereWeAreQ_CZ[] = {"CZ\core\location\NeviteKdeJsmeQ"};
        WhereIsTheClosestSettlementQ_EN[] = {"EN\core\location\WhereIsTheClosestSettlementQ"};
        WhereIsTheClosestSettlementQ_RU[] = {"RU\core\location\WhereIsTheClosestSettlementQ"};
        WhereIsTheClosestSettlementQ_CZ[] = {"CZ\core\location\KdeJeTadyNejblizsiVesniceQ"};
        CanYouPointMeToTheNearestSettlementQ_EN[] = {"EN\core\location\CanYouPointMeToTheNearestSettlementQ"};
        CanYouPointMeToTheNearestSettlementQ_RU[] = {"RU\core\location\CanYouPointMeToTheNearestSettlementQ"};
        CanYouPointMeToTheNearestSettlementQ_CZ[] = {"CZ\core\location\MuzeteMiUkazatCestuDoNejblizsiVsiQ"};
        ThisPlaceIsCalledQ_EN[] = {"EN\core\location\ThisPlaceIsCalledQ"};
        ThisPlaceIsCalledQ_RU[] = {"RU\core\location\ThisPlaceIsCalledQ"};
        ThisPlaceIsCalledQ_CZ[] = {"CZ\core\location\TadySeToJmenuje"};
        WhatSettlementIsThisQ_EN[] = {"EN\core\location\WhatSettlementIsThisQ"};
        WhatSettlementIsThisQ_RU[] = {"RU\core\location\WhatSettlementIsThisQ"};
        WhatSettlementIsThisQ_CZ[] = {"CZ\core\location\CoJeTohleMistoZacQ"};
        ImNotFromAroundHere_EN[] = {"EN\core\location\ImNotFromAroundHere"};
        ImNotFromAroundHere_RU[] = {"RU\core\location\ImNotFromAroundHere"};
        ImNotFromAroundHere_CZ[] = {"CZ\core\location\LitujuNejsemVocad"};
        NoIdeaIDontLiveHere_EN[] = {"EN\core\location\NoIdeaIDontLiveHere"};
        NoIdeaIDontLiveHere_RU[] = {"RU\core\location\NoIdeaIDontLiveHere"};
        NoIdeaIDontLiveHere_CZ[] = {"CZ\core\location\NevimJsemOdjinud"};
        Is_EN[] = {"EN\core\location\is"};
        Is_RU[] = {"RU\core\location\is"};
        Is_CZ[] = {"CZ\core\location\Je"};
        Probably_EN[] = {"EN\core\location\probably"};
        Probably_RU[] = {"RU\core\location\probably"};
        Probably_CZ[] = {"CZ\core\location\NejblizJeAsi"};
        ToThe_EN[] = {"EN\core\location\ToThe"};
        ToThe_RU[] = {"RU\core\location\ToThe"};
        ToThe_CZ[] = {"CZ\core\location\KusNa"};
        WeAre_EN[] = {"EN\core\location\WeAre"};
        WeAre_RU[] = {"RU\core\location\WeAre"};
        WeAre_CZ[] = {"CZ\core\location\TohleJE"};
        ItsCalled_EN[] = {"EN\core\location\ItsCalled"};
        ItsCalled_RU[] = {"RU\core\location\ItsCalled"};
        ItsCalled_CZ[] = {"CZ\core\location\TohleJE"};
        ItsNameIs_EN[] = {"EN\core\location\ItsNameIs"};
        ItsNameIs_RU[] = {"RU\core\location\ItsNameIs"};
        ItsNameIs_CZ[] = {"CZ\core\location\TadySeToJmenuje"};
        ThisIs_EN[] = {"EN\core\location\ThisIs"};
        ThisIs_RU[] = {"RU\core\location\ThisIs"};
        ThisIs_CZ[] = {"CZ\core\location\TohleJE"};
        Good_EN[] = {"EN\core\generic\good"};
        Good_RU[] = {"RU\core\generic\EMPTY"};
        Good_CZ[] = {"CZ\core\generic\good"};
        Day_EN[] = {"EN\core\generic\day"};
        Day_RU[] = {"RU\core\greeting\Goodday"};
        Day_CZ[] = {"CZ\core\generic\day"};
        Evening_EN[] = {"EN\core\generic\evening"};
        Evening_RU[] = {"RU\core\greeting\Goodevening"};
        Evening_CZ[] = {"CZ\core\generic\evening"};
        Morning_EN[] = {"EN\core\generic\morning"};
        Morning_RU[] = {"RU\core\greeting\GoodMornin"};
        Morning_CZ[] = {"CZ\core\generic\morning"};
        There_EN[] = {"EN\core\generic\there"};
        There_RU[] = {"RU\core\generic\EMPTY"};
        There_CZ[] = {"CZ\core\generic\there"};
        Yes_EN[] = {"EN\core\generic\yes"};
        Yes_RU[] = {"RU\core\generic\yes"};
        YesQ_RU[] = {"RU\core\greeting\yesq"};
        Yes_CZ[] = {"CZ\core\greeting\AnoQ"};
        No_EN[] = {"EN\core\generic\no"};
        No_RU[] = {"RU\core\generic\no"};
        No_CZ[] = {"CZ\core\generic\no"};
        AreYouKiddingQ_EN[] = {"EN\core\generic\AreYouKiddingQ"};
        AreYouKiddingQ_RU[] = {"RU\core\generic\AreYouKiddingQ"};
        AreYouKiddingQ_CZ[] = {"CZ\core\generic\DelasSiSranduQ"};
        YouAskedMeThatJustNow_EN[] = {"EN\core\generic\YouAskedMeThatJustNow"};
        YouAskedMeThatJustNow_RU[] = {"RU\core\generic\YouAskedMeThatJustNow"};
        YouAskedMeThatJustNow_CZ[] = {"CZ\core\generic\TohleUzTuBylo"};
        StopAskingMeTheSameStuff_EN[] = {"EN\core\generic\StopAskingMeThat"};
        StopAskingMeTheSameStuff_RU[] = {"RU\core\generic\StopAskingMeThat"};
        StopAskingMeTheSameStuff_CZ[] = {"CZ\core\generic\PrestanSePtatNaToSamy"};
        IDont_EN[] = {"EN\core\generic\IDont"};
        IDont_RU[] = {"RU\core\generic\EMPTY"};
        IDont_CZ[] = {"CZ\core\generic\EMPTY"};
        Understand_EN[] = {"EN\core\generic\understand"};
        Understand_RU[] = {"RU\core\greeting\WhatDoYouNeedQ"};
        Understand_CZ[] = {"CZ\core\generic\MuzuVamPomoctQ"};
        AreYouSayingQ_EN[] = {"EN\core\generic\AreYouSaying"};
        AreYouSayingQ_RU[] = {"RU\core\greeting\WhatDoYouWantQ"};
        AreYouSayingQ_CZ[] = {"CZ\core\generic\CoPotrebujeteQ"};
        KnowWhatYouMean_EN[] = {"EN\core\generic\KnowWhatYouMean"};
        KnowWhatYouMean_RU[] = {"RU\core\greeting\WhatQ"};
        KnowWhatYouMean_CZ[] = {"CZ\core\generic\CoChceteQ"};
        What_EN[] = {"EN\core\generic\what"};
        What_RU[] = {"RU\core\generic\EMPTY"};
        What_CZ[] = {"CZ\core\generic\EMPTY"};
        EnglishQ[] = {"EN\core\language\englishq"};
        RussianQ[] = {"RU\core\language\russianq"};
        CzechQ[] = {"CZ\core\language\ChernarussianQ"};
        Elektrozavodsk[] = {"RU\core\maploc\Elektrozavodsk"};
        Elektrozavodsk2[] = {"RU\core\maploc\Elektrozavodsk2"};
        Gorka[] = {"RU\core\maploc\Gorka"};
        Gorka2[] = {"RU\core\maploc\Gorka2"};
        Chernogorsk[] = {"RU\core\maploc\Chernogorsk"};
        Chernogorsk2[] = {"RU\core\maploc\Chernogorsk2"};
        Krasnostav[] = {"RU\core\maploc\Krasnostav"};
        Krasnostav2[] = {"RU\core\maploc\Krasnostav2"};
        Solnichniy[] = {"RU\core\maploc\Solnichniy"};
        Solnichniy2[] = {"RU\core\maploc\Solnichniy2"};
        StarySobor[] = {"RU\core\maploc\StarySobor"};
        StarySobor2[] = {"RU\core\maploc\StarySobor2"};
        Vybor[] = {"RU\core\maploc\Vybor"};
        Vybor2[] = {"RU\core\maploc\Vybor2"};
        Zelenogorsk[] = {"RU\core\maploc\Zelenogorsk"};
        Zelenogorsk2[] = {"RU\core\maploc\Zelenogorsk2"};
        Pusta[] = {"RU\core\maploc\Pusta"};
        Pusta2[] = {"RU\core\maploc\Pusta2"};
        Vyshnoe[] = {"RU\core\maploc\Vyshnoe"};
        Vyshnoe2[] = {"RU\core\maploc\Vyshnoe2"};
        Balota[] = {"RU\core\maploc\Balota"};
        Balota2[] = {"RU\core\maploc\Balota2"};
        Bor[] = {"RU\core\maploc\Bor"};
        Bor2[] = {"RU\core\maploc\Bor2"};
        Dolina[] = {"RU\core\maploc\Dolina"};
        Dolina2[] = {"RU\core\maploc\Dolina2"};
        Drozhino[] = {"RU\core\maploc\Drozhino"};
        Drozhino2[] = {"RU\core\maploc\Drozhino2"};
        Dubrovka[] = {"RU\core\maploc\Dubrovka"};
        Dubrovka2[] = {"RU\core\maploc\Dubrovka2"};
        Grishino[] = {"RU\core\maploc\Grishino"};
        Grishino2[] = {"RU\core\maploc\Grishino2"};
        Guglovo[] = {"RU\core\maploc\Guglovo"};
        Guglovo2[] = {"RU\core\maploc\Guglovo2"};
        Gvozdno[] = {"RU\core\maploc\Gvozdno"};
        Gvozdno2[] = {"RU\core\maploc\Gvozdno2"};
        Kabanino[] = {"RU\core\maploc\Kabanino"};
        Kabanino2[] = {"RU\core\maploc\Kabanino2"};
        Kamenka[] = {"RU\core\maploc\Kamenka"};
        Kamenka2[] = {"RU\core\maploc\Kamenka2"};
        Kamyshovo[] = {"RU\core\maploc\Kamyshovo"};
        Kamyshovo2[] = {"RU\core\maploc\Kamyshovo2"};
        Khelm[] = {"RU\core\maploc\Khelm"};
        Khelm2[] = {"RU\core\maploc\Khelm2"};
        Komarovo[] = {"RU\core\maploc\Komarovo"};
        Komarovo2[] = {"RU\core\maploc\Komarovo2"};
        Kozlovka[] = {"RU\core\maploc\Kozlovka"};
        Kozlovka2[] = {"RU\core\maploc\Kozlovka2"};
        Lopatino[] = {"RU\core\maploc\Lopatino"};
        Lopatino2[] = {"RU\core\maploc\Lopatino2"};
        Mogilevka[] = {"RU\core\maploc\Mogilevka"};
        Mogilevka2[] = {"RU\core\maploc\Mogilevka2"};
        Msta[] = {"RU\core\maploc\Msta"};
        Msta2[] = {"RU\core\maploc\Msta2"};
        Myshkino[] = {"RU\core\maploc\Myshkino"};
        Myshkino2[] = {"RU\core\maploc\Myshkino2"};
        Nadezhdino[] = {"RU\core\maploc\Nadezhdino"};
        Nadezhdino2[] = {"RU\core\maploc\Nadezhdino2"};
        Nizhnoye[] = {"RU\core\maploc\Nizhnoye"};
        Nizhnoye2[] = {"RU\core\maploc\Nizhnoye2"};
        NovySobor[] = {"RU\core\maploc\NovySobor"};
        NovySobor2[] = {"RU\core\maploc\NovySobor2"};
        Olsha[] = {"RU\core\maploc\Olsha"};
        Olsha2[] = {"RU\core\maploc\Olsha2"};
        Orlovets[] = {"RU\core\maploc\Orlovets"};
        Orlovets2[] = {"RU\core\maploc\Orlovets2"};
        Pavlovo[] = {"RU\core\maploc\Pavlovo"};
        Pavlovo2[] = {"RU\core\maploc\Pavlovo2"};
        Petrovka[] = {"RU\core\maploc\Petrovka"};
        Petrovka2[] = {"RU\core\maploc\Petrovka2"};
        Pogorevka[] = {"RU\core\maploc\Pogorevka"};
        Pogorevka2[] = {"RU\core\maploc\Pogorevka2"};
        Polana[] = {"RU\core\maploc\Polana"};
        Polana2[] = {"RU\core\maploc\Polana2"};
        Prigorodki[] = {"RU\core\maploc\Prigorodki"};
        Prigorodki2[] = {"RU\core\maploc\Prigorodki2"};
        Pustoshka[] = {"RU\core\maploc\Pustoshka"};
        Pustoshka2[] = {"RU\core\maploc\Pustoshka2"};
        Rogovo[] = {"RU\core\maploc\Rogovo"};
        Rogovo2[] = {"RU\core\maploc\Rogovo2"};
        Shakhovka[] = {"RU\core\maploc\Shakhovka"};
        Shakhovka2[] = {"RU\core\maploc\Shakhovka2"};
        Sosnovka[] = {"RU\core\maploc\Sosnovka"};
        Sosnovka2[] = {"RU\core\maploc\Sosnovka2"};
        Staroye[] = {"RU\core\maploc\Staroye"};
        Staroye2[] = {"RU\core\maploc\Staroye2"};
        Tulga[] = {"RU\core\maploc\Tulga"};
        Tulga2[] = {"RU\core\maploc\Tulga2"};
        Pulkovo[] = {"RU\core\maploc\Pulkovo"};
        Pulkovo2[] = {"RU\core\maploc\Pulkovo2"};
        Berezino[] = {"RU\core\maploc\Town"};
        Berezino2[] = {"RU\core\maploc\Town"};
        Kamenyy[] = {"RU\core\maploc\Kamenyy"};
        Kamenyy2[] = {"RU\core\maploc\Kamenyy2"};
        Strelka[] = {"RU\core\maploc\Strelka"};
        Strelka2[] = {"RU\core\maploc\Strelka2"};
        airfield[] = {"RU\core\maploc\airfield"};
        airfield2[] = {"RU\core\maploc\airfield2"};
        town[] = {"RU\core\maploc\town"};
        town2[] = {"RU\core\maploc\town2"};
        village[] = {"RU\core\maploc\village"};
        village2[] = {"RU\core\maploc\village2"};
        HQ[] = {"RU\secops\callsigns\base"};
        Frostbite[] = {"RU\secops\callsigns\frostbite"};
        Base[] = {"RU\secops\callsigns\base"};
        Command[] = {"RU\secops\callsigns\command"};
        Battlemage[] = {"RU\secops\callsigns\battlemage"};
        Manhattan[] = {"RU\secops\callsigns\manhattan"};
        Firefly[] = {"RU\secops\callsigns\firefly"};
        Team[] = {"RU\secops\callsigns\team"};
        Squad[] = {"RU\secops\callsigns\squad"};
        Razor[] = {"RU\secops\callsigns\razor"};
        Swordsman[] = {"RU\secops\callsigns\swordsman"};
        Sabre[] = {"RU\secops\callsigns\sabre"};
        StarForce[] = {"RU\secops\callsigns\star_force"};
        Super[] = {"RU\secops\callsigns\super"};
        Hammer[] = {"RU\secops\callsigns\hammer"};
        Reaper[] = {"RU\secops\callsigns\reaper"};
        Fatman[] = {"RU\secops\callsigns\fatman"};
        Fortune[] = {"RU\secops\callsigns\fortune"};
        Anvil[] = {"RU\secops\callsigns\anvil"};
        SecOpNew1[] = {"RU\secops\generic\secopnew1"};
        SecOpNew2[] = {"RU\secops\generic\secopnew2"};
        SecOpNew3[] = {"RU\secops\generic\secopnew3"};
        Over[] = {};
        Out[] = {};
        Confirmed[] = {"RU\secops\generic\confirmed"};
        Affirmative[] = {"RU\secops\generic\affirmative"};
        Good[] = {"RU\secops\generic\good"};
        To[] = {"RU\secops\generic\to"};
        Message[] = {"RU\secops\generic\message"};
        ComeIn[] = {"RU\secops\generic\comein"};
        DoYouCopyQ[] = {"RU\secops\generic\doyoucopyq"};
        GoAhead[] = {"RU\secops\generic\goahead"};
        Yes[] = {"RU\secops\generic\yes"};
        WeCopyYouLoudAndClear[] = {"RU\secops\generic\wecopyyouloudandclear"};
        SendIt[] = {"RU\secops\generic\sendit"};
        No[] = {"RU\secops\generic\no"};
        CanDo[] = {"RU\secops\generic\cando"};
        WeAre[] = {"RU\secops\generic\weare"};
        Job[] = {"RU\secops\generic\job"};
        WellDone[] = {"RU\secops\generic\welldone"};
        SecOpComplete[] = {"RU\secops\generic\secopcomplete"};
        TheSecOpWasAFailure[] = {"RU\secops\generic\thesecopwasafailure"};
        MissionFailure[] = {"RU\secops\generic\missionfailure"};
        TheOpWasAFailure[] = {"RU\secops\generic\theopwasafailure"};
        ObjectiveFailed[] = {"RU\secops\generic\objectivefailed"};
        WereUnableToTakeOnAnotherObjective[] = {"RU\secops\generic\wereunabletotakeonanotherobjective"};
        AtThisTime[] = {"RU\secops\generic\atthistime"};
        WeCannotDivert[] = {"RU\secops\generic\wecannotdivert"};
        NoWayWeCanDivertNow[] = {"RU\secops\generic\nowaywecandivertnow"};
        WeHaveTooManyOtherTasksToComplete[] = {"RU\secops\generic\wehavetoomanyothertaskstocomplete"};
        TheresNoWayWeCanHelpWithThatRightNow[] = {"RU\secops\generic\theresnowaywecanhelpwiththatrightnow"};
        Were[] = {"RU\secops\generic\were"};
        On[] = {"RU\secops\on"};
        OurWay[] = {"RU\secops\generic\ourway"};
        Route[] = {"RU\secops\generic\route"};
        It[] = {"RU\secops\generic\it"};
        UnableToCompleteTheObjective[] = {"RU\secops\generic\unabletocompletetheobjective"};
        WeCannotFinishTheOp[] = {"RU\secops\generic\wecannotfinishtheop"};
        WeHaveToAbort[] = {"RU\secops\generic\wehavetoabort"};
        WeCannotCompleteThisMission[] = {"RU\secops\generic\wecannotcompletethismission"};
        Aborting[] = {"RU\secops\generic\aborting"};
        ContinueYourPreviousMission[] = {"RU\secops\generic\continueyourpreviousmission"};
        AbortTheOp[] = {"RU\secops\generic\aborttheop"};
        ReturnToYourPrimary[] = {"RU\secops\generic\returntoyourprimary"};
        CarryOnWithYourPriorTasks[] = {"RU\secops\generic\carryonwithyourpriortasks"};
        SecOp_Attack_Loc_Briefing1[] = {"RU\secops\attack_location\secop_attack_loc_briefing1"};
        SecOp_Attack_Loc_Briefing2[] = {"RU\secops\attack_location\secop_attack_loc_briefing2"};
        SecOp_Attack_Loc_Briefing_Timeout[] = {"RU\secops\attack_location\secop_attack_loc_briefing_timeout"};
        SecOp_Attack_Loc_Debriefing_End1[] = {"RU\secops\attack_location\secop_attack_loc_debriefing_end1"};
        SecOp_Attack_Loc_Briefing_Reinf_1[] = {"RU\secops\attack_location\secop_attack_loc_briefing_reinf1"};
        SecOp_Attack_Loc_Briefing_Reinf_2[] = {"RU\secops\attack_location\secop_attack_loc_briefing_reinf2"};
        SecOp_Ambush_Briefing_1[] = {"RU\secops\ambush\secop_ambush_briefing_1"};
        SecOp_Ambush_Briefing_2[] = {"RU\secops\ambush\secop_ambush_briefing_2"};
        SecOp_Ambush_Briefing_Timeout[] = {"RU\secops\ambush\secop_ambush_briefing_timeout"};
        SecOp_Ambush_Debriefing_End_1[] = {"RU\secops\ambush\secop_ambush_debriefing_end_1"};
        SecOp_Ambush_Debriefing_End_2[] = {"RU\secops\ambush\secop_ambush_debriefing_end_2"};
        SecOp_Ambush_Debriefing_End_3[] = {"RU\secops\ambush\secop_ambush_debriefing_end_3"};
        SecOp_Rescue_Briefing_1[] = {"RU\secops\rescue\secop_rescue_briefing_1"};
        SecOp_Rescue_Briefing_2[] = {"RU\secops\rescue\secop_rescue_briefing_2"};
        SecOp_Rescue_Briefing_Not_Accepted[] = {"RU\secops\rescue\secop_rescue_briefing_not_accepted"};
        SecOp_Rescue_Briefing_Timeout[] = {"RU\secops\rescue\secop_rescue_briefing_timeout"};
        SecOp_Rescue_Radio_1[] = {"RU\secops\rescue\secop_rescue_radio_1"};
        SecOp_Rescue_Debriefing_End_1[] = {"RU\secops\rescue\secop_rescue_debriefing_end_1"};
        SecOp_Rescue_Debriefing_End_2[] = {"RU\secops\rescue\secop_rescue_debriefing_end_2"};
        SecOp_TRAP_Briefing_1[] = {"RU\secops\trap\secop_trap_briefing_1"};
        SecOp_TRAP_Briefing_2[] = {"RU\secops\trap\secop_trap_briefing_2"};
        SecOp_TRAP_Briefing_Timeout[] = {"RU\secops\trap\secop_trap_briefing_timeout"};
        SecOP_TRAP_Debriefing_End_1[] = {"RU\secops\trap\secop_trap_debriefing_end_1"};
        SecOp_TRAP_Debriefing_End_2[] = {"RU\secops\trap\secop_trap_debriefing_end_2"};
        SecOp_TRAP_Debriefing_End_3[] = {"RU\secops\trap\secop_trap_debriefing_end_3"};
        SecOp_TRAP_Radio_1[] = {"RU\secops\trap\secop_trap_radio_1"};
        SecOp_TRAP_Radio_2[] = {"RU\secops\trap\secop_trap_radio_2"};
        SecOp_Escort_Briefing_1[] = {"RU\secops\escort\secop_escort_briefing_1"};
        SecOp_Escort_Briefing_2[] = {"RU\secops\escort\secop_escort_briefing_2"};
        SecOp_Escort_Briefing_Timeout[] = {"RU\secops\escort\secop_escort_briefing_timeout"};
        SecOp_Escort_Radio_1[] = {"RU\secops\escort\secop_escort_radio_1"};
        SecOp_Escort_Radio_2[] = {"RU\secops\escort\secop_escort_radio_2"};
        SecOp_Escort_Radio_3[] = {"RU\secops\escort\secop_escort_radio_3"};
        SecOp_Escort_Radio_4[] = {"RU\secops\escort\secop_escort_radio_4"};
        SecOp_Escort_Debriefing_End_1[] = {"RU\secops\escort\secop_escort_debriefing_end_1"};
        SecOp_Escort_Debriefing_End_2[] = {"RU\secops\escort\secop_escort_debriefing_end_2"};
        SecOp_Escort_Debriefing_End_3[] = {"RU\secops\escort\secop_escort_debriefing_end_3"};
        SecOp_Patrol_Briefing_1[] = {"RU\secops\patrol\secop_patrol_briefing_1"};
        SecOp_Patrol_Briefing_2[] = {"RU\secops\patrol\secop_patrol_briefing_2"};
        SecOp_Patrol_Briefing_Timeout[] = {"RU\secops\patrol\secop_patrol_briefing_timeout"};
        SecOp_Patrol_Radio_1[] = {"RU\secops\patrol\secop_patrol_radio_1"};
        SecOp_Patrol_Radio_2[] = {"RU\secops\patrol\secop_patrol_radio_2"};
        SecOp_Patrol_Debriefing_End_1[] = {"RU\secops\patrol\secop_patrol_debriefing_end_1"};
        SecOp_Transportation_Briefing_1[] = {"RU\secops\transportation\secop_transportation_briefing_1"};
        SecOp_Transportation_Briefing_2[] = {"RU\secops\transportation\secop_transportation_briefing_2"};
        SecOp_Transportation_Briefing_Timeout[] = {"RU\secops\transportation\secop_transportation_briefing_timeout"};
        SecOp_Transportation_Radio_1[] = {"RU\secops\transportation\secop_transportation_radio_1"};
        SecOp_Transportation_Radio_2[] = {"RU\secops\transportation\secop_transportation_radio_2"};
        SecOp_Transportation_Radio_3[] = {"RU\secops\transportation\secop_transportation_radio_3"};
        SecOp_Transportation_Debriefing_End_1[] = {"RU\secops\transportation\secop_transportation_debriefing_end_1"};
        SecOp_Transportation_Debriefing_End_2[] = {"RU\secops\transportation\secop_transportation_debriefing_end_2"};
        SecOp_Transportation_Debriefing_End_3[] = {"RU\secops\transportation\secop_transportation_debriefing_end_3"};
        SecOp_Transportation_Debriefing_End_4[] = {"RU\secops\transportation\secop_transportation_debriefing_end_4"};
        SecOp_Defend_Loc_Briefing_1[] = {"RU\secops\defend_location\secop_defend_loc_briefing_1"};
        SecOp_Defend_Loc_Briefing_2[] = {"RU\secops\defend_location\secop_defend_loc_briefing_2"};
        SecOp_Defend_Loc_Briefing_Timeout[] = {"RU\secops\defend_location\secop_defend_loc_briefing_timeout"};
        SecOp_Defend_Loc_Abort_1[] = {"RU\secops\defend_location\secop_defend_loc_abort_1"};
        SecOp_Defend_Loc_Radio_1A[] = {"RU\secops\defend_location\secop_defend_loc_radio_1a"};
        SecOp_Defend_Loc_Radio_1B[] = {"RU\secops\defend_location\secop_defend_loc_radio_1b"};
        SecOp_Defend_Loc_Debriefing_End_1[] = {"RU\secops\defend_location\secop_defend_loc_debriefing_end_1"};
        SecOp_Defend_Loc_Debriefing_End_2[] = {"RU\secops\defend_location\secop_defend_loc_debriefing_end_2"};
        SecOp_Destroy_Briefing_1[] = {"RU\secops\destroy\secop_destroy_briefing_1"};
        SecOp_Destroy_Briefing_2[] = {"RU\secops\destroy\secop_destroy_briefing_2"};
        SecOp_Destroy_Briefing_Timeout[] = {"RU\secops\destroy\secop_destroy_briefing_timeout"};
        SecOp_Destroy_Debriefing_End_1[] = {"RU\secops\destroy\secop_destroy_debriefing_end_1"};
        SecOp_Search_Briefing_1[] = {"RU\secops\search\secop_search_briefing_1"};
        SecOp_Search_Briefing_2[] = {"RU\secops\search\secop_search_briefing_2"};
        SecOp_Search_Briefing_Timeout[] = {"RU\secops\search\secop_search_briefing_timeout"};
        SecOp_Search_Radio_1[] = {"RU\secops\search\secop_search_radio_1"};
        SecOp_Search_Debriefing_End_1[] = {"RU\secops\search\secop_search_debriefing_end_1"};
        SecOp_Search_Debriefing_End_2[] = {"RU\secops\search\secop_search_debriefing_end_2"};
        SecOp_Search_Debriefing_End_3[] = {"RU\secops\search\secop_search_debriefing_end_3"};
        SecOp_Reinforce_Briefing_1[] = {"RU\secops\reinforce\str_som_reinforce_briefing_1"};
        SecOp_Reinforce_Briefing_2[] = {"RU\secops\reinforce\str_som_reinforce_briefing_2"};
        SecOp_Reinforce_Briefing_Timeout[] = {"RU\secops\reinforce\str_som_reinforce_briefing_timeout"};
        SecOp_Reinforce_Debriefing_1[] = {"RU\secops\reinforce\str_som_reinforce_debriefing_end1"};
        SecOp_Reinforce_Debriefing_2[] = {"RU\secops\reinforce\str_som_reinforce_debriefing_end2"};
        SecOp_Reinforce_Debriefing_3[] = {"RU\secops\reinforce\str_som_reinforce_debriefing_end3"};
        SecOp_Tactical_Strike_Briefing_1[] = {"RU\secops\airstrike\secop_airstrike_01"};
        SecOp_Tactical_Strike_Briefing_2[] = {"RU\secops\airstrike\secop_airstrike_02"};
        SecOp_Tactical_Strike_Briefing_Accepted[] = {"RU\secops\airstrike\secop_airstrike_04"};
        SecOp_Tactical_Strike_Radio_1[] = {"RU\secops\airstrike\secop_airstrike_03"};
        SecOp_Aerial_Recon_Briefing_1[] = {"RU\secops\uav\secop_uav_01"};
        SecOp_Aerial_Recon_Briefing_2[] = {"RU\secops\uav\secop_uav_02"};
        SecOp_Aerial_Recon_Briefing_Accepted[] = {"RU\secops\uav\secop_uav_03"};
        SecOp_Aerial_Recon_Radio_1[] = {"RU\secops\uav\secop_uav_04"};
        SecOp_Aerial_Recon_Radio_2[] = {"RU\secops\uav\secop_uav_05"};
        SecOp_Aerial_Recon_Radio_3[] = {"RU\secops\uav\secop_uav_06"};
        SecOp_Artillery_Barrage_Available_1[] = {"RU\secops\artillery\secop_artillery_01"};
        SecOp_Artillery_Barrage_Available_2[] = {"RU\secops\artillery\secop_artillery_02"};
        SecOp_Artillery_Barrage_Available_3[] = {"RU\secops\artillery\secop_artillery_03"};
        SecOp_Artillery_Barrage_Request_1[] = {"RU\secops\artillery\secop_artillery_04"};
        SecOp_Artillery_Barrage_Request_2[] = {"RU\secops\artillery\secop_artillery_05"};
        SecOp_Artillery_Barrage_Request_3[] = {"RU\secops\artillery\secop_artillery_06"};
        SecOp_Artillery_Barrage_Request_4[] = {"RU\secops\artillery\secop_artillery_07"};
        SecOp_Artillery_Barrage_Request_5[] = {"RU\secops\artillery\secop_artillery_08"};
        SecOp_Artillery_Barrage_Request_6[] = {"RU\secops\artillery\secop_artillery_09"};
        SecOp_Artillery_Barrage_Request_7[] = {"RU\secops\artillery\secop_artillery_10"};
        SecOp_Artillery_Barrage_Request_8[] = {"RU\secops\artillery\secop_artillery_11"};
        SecOp_Artillery_Barrage_Request_9[] = {"RU\secops\artillery\secop_artillery_12"};
        SecOp_Artillery_Barrage_Response_1[] = {"RU\secops\artillery\secop_artillery_13"};
        SecOp_Artillery_Barrage_Response_2[] = {"RU\secops\artillery\secop_artillery_14"};
        SecOp_Artillery_Barrage_Response_3[] = {"RU\secops\artillery\secop_artillery_15"};
        SecOp_Artillery_Barrage_Response_4[] = {"RU\secops\artillery\secop_artillery_16"};
        SecOp_Artillery_Barrage_Response_5[] = {"RU\secops\artillery\secop_artillery_17"};
        SecOp_Artillery_Barrage_Response_6[] = {"RU\secops\artillery\secop_artillery_18"};
        SecOp_Artillery_Barrage_Response_7[] = {"RU\secops\artillery\secop_artillery_19"};
        SecOp_Artillery_Barrage_Response_8[] = {"RU\secops\artillery\secop_artillery_20"};
        SecOp_Artillery_Barrage_Response_9[] = {"RU\secops\artillery\secop_artillery_21"};
        SecOp_Artillery_Barrage_Unavailable_1[] = {"RU\secops\artillery\secop_artillery_22"};
        SecOp_Artillery_Barrage_Unavailable_2[] = {"RU\secops\artillery\secop_artillery_23"};
        SecOp_Artillery_Barrage_Unavailable_3[] = {"RU\secops\artillery\secop_artillery_24"};
        SecOp_Artillery_Barrage_OutOfRange_1[] = {"RU\secops\artillery\secop_artillery_25"};
        SecOp_Artillery_Barrage_OutOfRange_2[] = {"RU\secops\artillery\secop_artillery_26"};
        SecOp_Artillery_Barrage_OutOfRange_3[] = {"RU\secops\artillery\secop_artillery_27"};
        SecOp_Artillery_Barrage_OutOfRange_4[] = {"RU\secops\artillery\secop_artillery_28"};
        SecOp_Artillery_Barrage_Splash[] = {"RU\secops\artillery\secop_artillery_29"};
        SecOp_Artillery_Barrage_Shot[] = {"RU\secops\artillery\secop_artillery_30"};
        SecOp_Artillery_Barrage_RoundsComplete[] = {"RU\secops\artillery\secop_artillery_31"};
        SecOp_Artillery_Barrage_CheckFire1[] = {"RU\secops\artillery\secop_artillery_32"};
        SecOp_Artillery_Barrage_CheckFire2[] = {"RU\secops\artillery\secop_artillery_33"};
        SecOp_Artillery_Barrage_CheckFireResponse1[] = {"RU\secops\artillery\secop_artillery_34"};
        SecOp_Artillery_Barrage_CheckFireResponse2[] = {"RU\secops\artillery\secop_artillery_35"};
        SecOp_Artillery_Barrage_Interrupted1[] = {"RU\secops\artillery\secop_artillery_36"};
        SecOp_Artillery_Barrage_InterruptedResponse1[] = {"RU\secops\artillery\secop_artillery_37"};
        10MinutesLeft[] = {"RU\Warfare\10MinutesLeft"};
        20MinutesLeft[] = {"RU\Warfare\20MinutesLeft"};
        5MinutesLeft[] = {"RU\Warfare\5MinutesLeft"};
        Accomplished[] = {"RU\Warfare\Accomplished"};
        AntiAirRadar[] = {"RU\Warfare\AntiAirRadar"};
        ArtilleryBattery[] = {"RU\Warfare\ArtilleryBattery"};
        ArtilleryRadar[] = {"RU\Warfare\ArtilleryRadar"};
        Barracks[] = {"RU\Warfare\Barracks"};
        BaseUnderAtack[] = {"RU\Warfare\BaseUnderAtack"};
        Cancelled[] = {"RU\Warfare\Cancelled"};
        CanDoWereOnIt[] = {"RU\Warfare\CanDoWereOnIt"};
        Captured[] = {"RU\Warfare\Captured"};
        CapturedNear[] = {"RU\Warfare\CapturedNear"};
        CiviliansUnderEnemyFireIn[] = {"RU\Warfare\CiviliansUnderEnemyFireIn"};
        Constructed[] = {"RU\Warfare\Constructed"};
        Deployed[] = {"RU\Warfare\Deployed"};
        Destroyed[] = {"RU\Warfare\Destroyed"};
        EnemyBaseLocated[] = {"RU\Warfare\EnemyBaseLocated"};
        EnemyForcesDetected[] = {"RU\Warfare\EnemyForcesDetected"};
        Failed[] = {"RU\Warfare\Failed"};
        Funds[] = {"RU\Warfare\Funds"};
        Headquarters[] = {"RU\Warfare\Headquarters"};
        HeavyVehicleSupply[] = {"RU\Warfare\HeavyVehicleSupply"};
        Helipad[] = {"RU\Warfare\Helipad"};
        HostilesDetectedNear[] = {"RU\Warfare\HostilesDetectedNear"};
        Insufficient[] = {"RU\Warfare\Insufficient"};
        IsUnderAttack[] = {"RU\Warfare\IsUnderAttack"};
        LightVehicleSupply[] = {"RU\Warfare\LightVehicleSupply"};
        Lost[] = {"RU\Warfare\Lost"};
        LostAt[] = {"RU\Warfare\LostAt"};
        Mission[] = {"RU\Warfare\Mission"};
        Mobilized[] = {"RU\Warfare\Mobilized"};
        NegativeWeCannotDivert[] = {"RU\Warfare\NegativeWeCannotDivert"};
        NewIntelAvailable[] = {"RU\Warfare\NewIntelAvailable"};
        NewMissionAvailable[] = {"RU\Warfare\NewMissionAvailable"};
        NewSupportAvailable[] = {"RU\Warfare\NewSupportAvailable"};
        PermissionGranted[] = {"RU\Warfare\PermissionGranted"};
        RequestingAssistance[] = {"RU\Warfare\RequestingAssistance"};
        RequestingPermissionToJoin[] = {"RU\Warfare\RequestingPermissionToJoin"};
        RequestingPermissionToLeave[] = {"RU\Warfare\RequestingPermissionToLeave"};
        RequestRejected[] = {"RU\Warfare\RequestRejected"};
        Resources[] = {"RU\Warfare\Resources"};
        ServicePoint[] = {"RU\Warfare\ServicePoint"};
        Strongpoint[] = {"RU\Warfare\Strongpoint"};
        Strongpoint_alt[] = {"RU\Warfare\Strongpoint_alt"};
        Supplies[] = {"RU\Warfare\Supplies"};
        UAVTerminal[] = {"RU\Warfare\UAVTerminal"};
        UnderAttack[] = {"RU\Warfare\UnderAttack"};
        VotingForNewCommander[] = {"RU\Warfare\VotingForNewCommander"};
        SupportRequestRGCASBombing[] = {"RU\secops\airstrike\secop_airstrike_01"};
        SupportRequestRGCASHelicopter[] = {"RU\secops\airstrike\secop_airstrike_01"};
        SupportRequestRGSupplyDrop[] = {};
        SupportRequestRGUAV[] = {};
        SupportRequestRGArty[] = {"RU\secops\artillery\secop_artillery_04"};
        SupportRequestRGTransport[] = {"RU\secops\transport\secop_trans_01"};
        RequestAcknowledgedSGCASBombing[] = {"RU\secops\airstrike\secop_airstrike_04"};
        RequestAcknowledgedSGCASHelicopter[] = {"RU\secops\airstrike\secop_airstrike_04"};
        RequestAcknowledgedSGSupplyDrop[] = {"RU\secops\supply_drop\secop_supplydrop_01"};
        RequestAcknowledgedSGUAV[] = {};
        RequestAcknowledgedSGArty[] = {"RU\hc\orderreceived"};
        RequestAcknowledgedTransport[] = {"RU\secops\transport\secop_trans_04"};
        UnitDestroyedHQCASBombing[] = {};
        UnitDestroyedHQSupplyDrop[] = {};
        UnitDestroyedHQUAV[] = {};
        UnitDestroyedHQArty[] = {};
        UnitDestroyedHQTransport[] = {};
        RequestAccomplishedSGCASBombing[] = {};
        RequestAccomplishedSGCASHelicopter[] = {};
        RequestAccomplishedSGSupplyDrop[] = {};
        RequestAccomplishedSGUAV[] = {};
        RequestAccomplishedSGArty[] = {"RU\secops\generic\wecopyyouloudandclear"};
        RequestAccomplishedSGTransport[] = {};
        SupportAddedDuringMission[] = {"RU\Warfare\NewSupportAvailable"};
        ArtySGSupportRoundsComplete[] = {"RU\secops\artillery\wecopyyouloudandclear"};
        TransportSGWelcomeAboard[] = {};
        TransportSGLZCoordinatesSelected[] = {};
    };
    class NormalCommand: NormalCommand {
        versions[] = {"version1", 1};
        class version1 {
            text = "NormalCommand | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
            speech[] = {
                "%1",
                "%2",
                "%3",
                "%4",
                "%5",
                "%6",
                "%7",
                "%8",
                "%9",
                "%10",
                "%11",
                "%12",
                "%13",
                "%14",
                "%15",
                "%16"
            };
        };
    };
    class SentDetectedMine: NormalCommand {
        versions[] = {
            "Mine_detected_1",
            "1",
            "Mine_detected",
            "1",
            "Mine_detected3",
            "1",
            "Mine_detected2",
            "1"
        };
        class Mine_detected_1 {
            textOrig = "Mine detected";
            text = "$STR_A3_Mine_detected";
            wordsClass = "Normal";
            speech[] = {"XMIT", "mine"};
            gesture = "";
        };
        class Mine_detected {
            textOrig = "Mine detected";
            text = "$STR_A3_Mine_detected";
            wordsClass = "Normal";
            speech[] = {"XMIT", "DangerE", "mine"};
            gesture = "";
        };
        class Mine_detected2 {
            textOrig = "Mine detected";
            text = "$STR_A3_Mine_detected";
            wordsClass = "Normal";
            speech[] = {"XMIT", "mine"};
            gesture = "";
        };
        class Mine_detected3 {
            textOrig = "Mine detected";
            text = "$STR_A3_Mine_detected";
            wordsClass = "Normal";
            speech[] = {"XMIT", "beadvised", "mine"};
            gesture = "";
        };
    };
    class SentConfirmSuppress: Report {
        versions[] = {
            "Copy_6",
            0.2,
            "Copy_7",
            0.2,
            "Suppressing",
            0.3,
            "Suppressing",
            0.3
        };
        class Copy_6 {
            textOrig = "Copy";
            text = "Copy";
            wordsClass = "Normal";
            speech[] = {"XMIT", "C_HangOnILLSuppressE"};
            gesture = "";
        };
        class Copy_7 {
            textOrig = "Copy";
            text = "Copy";
            wordsClass = "Normal";
            speech[] = {"XMIT", "C_OpenUpE"};
            gesture = "";
        };
        class Suppressing {
            textOrig = "Suppressing";
            text = "Suppressing";
            wordsClass = "Normal";
            speech[] = {"XMIT", "Suppressing"};
            gesture = "";
        };
        class Suppressing2 {
            textOrig = "Suppressing";
            text = "Suppressing";
            wordsClass = "Normal";
            speech[] = {"XMIT", "C_OpenUpE"};
            gesture = "";
        };
    };
    class SentCmdSuppress: NormalCommand {
        versions[] = {"Suppressive_fire_", 1};
        class Suppressive_fire_ {
            textOrig = "Suppressive fire!";
            text = "Suppressive fire";
            wordsClass = "Normal";
            speech[] = {"XMIT", "SuppressiveFire"};
            gesture = "";
        };
    };
    class SentNotifySuppress: NormalCommand {
        versions[] = {};
    };
    class SentSupportRequestRGCASHelicopter: NormalCommand {
        versions[] = {
            "Requesting_close_air_support_at_the_designated_location__Over__1",
            "Stealth",
            "Requesting_close_air_support_at_the_designated_location__Over_",
            "(1 - (Stealth))"
        };
        class Requesting_close_air_support_at_the_designated_location__Over__1 {
            textOrig = "Requesting close air support at the designated location. Over.";
            text = "$STR_A3_Requesting_close_air_support_at_the_designated_location__Over_";
            wordsClass = "Stealth";
            speech[] = {"XMIT", "SecOp_Tactical_Strike_Briefing_1"};
            gesture = "";
        };
        class Requesting_close_air_support_at_the_designated_location__Over_ {
            textOrig = "Requesting close air support at the designated location. Over.";
            text = "$STR_A3_Requesting_close_air_support_at_the_designated_location__Over_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "SecOp_Tactical_Strike_Briefing_2"};
            gesture = "";
        };
    };
    class SentSupportRequestRGSupplyDrop: NormalCommand {
        versions[] = {
            "Requesting_supply_drop_at_the_transmitted_coordinates__Over__1",
            "Stealth",
            "Requesting_supply_drop_at_the_transmitted_coordinates__Over_",
            "(1 - (Stealth))"
        };
        class Requesting_supply_drop_at_the_transmitted_coordinates__Over__1 {
            textOrig = "Requesting supply drop at the transmitted coordinates. Over.";
            text = "$STR_A3_Requesting_supply_drop_at_the_transmitted_coordinates__Over_";
            wordsClass = "Stealth";
            speech[] = {"XMIT", "SupportRequestRGSupplyDrop"};
            gesture = "";
        };
        class Requesting_supply_drop_at_the_transmitted_coordinates__Over_ {
            textOrig = "Requesting supply drop at the transmitted coordinates. Over.";
            text = "$STR_A3_Requesting_supply_drop_at_the_transmitted_coordinates__Over_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "SupportRequestRGSupplyDrop"};
            gesture = "";
        };
    };
    class SentSupportRequestRGUAV: NormalCommand {
        versions[] = {
            "Requesting_aerial_recon_at_the_transmitted_location__Over__1",
            "Stealth",
            "Requesting_aerial_recon_at_the_transmitted_location__Over_",
            "(1 - (Stealth))"
        };
        class Requesting_aerial_recon_at_the_transmitted_location__Over__1 {
            textOrig = "Requesting aerial recon at the transmitted location. Over.";
            text = "$STR_A3_Requesting_aerial_recon_at_the_transmitted_location__Over_";
            wordsClass = "Stealth";
            speech[] = {"XMIT", "SecOp_Aerial_Recon_Briefing_1"};
            gesture = "";
        };
        class Requesting_aerial_recon_at_the_transmitted_location__Over_ {
            textOrig = "Requesting aerial recon at the transmitted location. Over.";
            text = "$STR_A3_Requesting_aerial_recon_at_the_transmitted_location__Over_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "SecOp_Aerial_Recon_Briefing_2"};
            gesture = "";
        };
    };
    class SentSupportRequestRGArty: NormalCommand {
        versions[] = {
            "Requesting_immediate_fire_support_at_the_designated_coordinates__Over__1",
            "Stealth",
            "Requesting_immediate_fire_support_at_the_designated_coordinates__Over_",
            "(1 - (Stealth))"
        };
        class Requesting_immediate_fire_support_at_the_designated_coordinates__Over__1 {
            textOrig = "Requesting immediate fire support at the designated coordinates. Over.";
            text = "$STR_A3_Requesting_immediate_fire_support_at_the_designated_coordinates__Over_";
            wordsClass = "Stealth";
            speech[] = {"XMIT", "SecOp_Artillery_Barrage_Request_1"};
            gesture = "";
        };
        class Requesting_immediate_fire_support_at_the_designated_coordinates__Over_ {
            textOrig = "Requesting immediate fire support at the designated coordinates. Over.";
            text = "$STR_A3_Requesting_immediate_fire_support_at_the_designated_coordinates__Over_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "SecOp_Artillery_Barrage_Request_2"};
            gesture = "";
        };
    };
    class SentSupportRequestRGTransport: NormalCommand {
        versions[] = {
            "Requesting_airlift_at_the_designated_coordinates__Over__1",
            "Stealth",
            "Requesting_airlift_at_the_designated_coordinates__Over_",
            "(1 - (Stealth))"
        };
        class Requesting_airlift_at_the_designated_coordinates__Over__1 {
            textOrig = "Requesting airlift at the designated coordinates. Over.";
            text = "$STR_A3_Requesting_airlift_at_the_designated_coordinates__Over_";
            wordsClass = "Stealth";
            speech[] = {"XMIT", "SupportRequestRGTransport"};
            gesture = "";
        };
        class Requesting_airlift_at_the_designated_coordinates__Over_ {
            textOrig = "Requesting airlift at the designated coordinates. Over.";
            text = "$STR_A3_Requesting_airlift_at_the_designated_coordinates__Over_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "SupportRequestRGTransport"};
            gesture = "";
        };
    };
    class SentRequestAcknowledgedSGCASBombing: NormalCommand {
        versions[] = {"Copy_that__strike_aircraft_on_the_way__Out_", 1};
        class Copy_that__strike_aircraft_on_the_way__Out_ {
            textOrig = "Copy that, strike aircraft on the way. Out.";
            text = "$STR_A3_Copy_that__strike_aircraft_on_the_way__Out_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "SecOp_Tactical_Strike_Briefing_Accepted"};
            gesture = "";
        };
    };
    class SentRequestAcknowledgedSGCASHelicopter: NormalCommand {
        versions[] = {"Roger__coordinates_received__CAS_is_inbound__Out_", 1};
        class Roger__coordinates_received__CAS_is_inbound__Out_ {
            textOrig = "Roger, coordinates received, CAS is inbound. Out.";
            text = "$STR_A3_Roger__coordinates_received__CAS_is_inbound__Out_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "SecOp_Tactical_Strike_Briefing_Accepted"};
            gesture = "";
        };
    };
    class SentRequestAcknowledgedSGSupplyDrop: NormalCommand {
        versions[] = {"Affirmative__supplies_en_route__Out_", 1};
        class Affirmative__supplies_en_route__Out_ {
            textOrig = "Affirmative, supplies en route. Out.";
            text = "$STR_A3_Affirmative__supplies_en_route__Out_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "RequestAcknowledgedSGSupplyDrop"};
            gesture = "";
        };
    };
    class SentRequestAcknowledgedSGUAV: NormalCommand {
        versions[] = {"Acknowledged__dispatching_drone_to_the_designated_coordinates__Out_", 1};
        class Acknowledged__dispatching_drone_to_the_designated_coordinates__Out_ {
            textOrig = "Acknowledged, dispatching drone to the designated coordinates. Out.";
            text = "$STR_A3_Acknowledged__dispatching_drone_to_the_designated_coordinates__Out_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "SecOp_Aerial_Recon_Briefing_Accepted"};
            gesture = "";
        };
    };
    class SentRequestAcknowledgedSGArty: NormalCommand {
        versions[] = {"Target_location_received__ordnance_is_inbound__Out_", 1};
        class Target_location_received__ordnance_is_inbound__Out_ {
            textOrig = "Target location received, ordnance is inbound. Out.";
            text = "$STR_A3_Target_location_received__ordnance_is_inbound__Out_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "SecOp_Artillery_Barrage_Response_1"};
            gesture = "";
        };
    };
    class SentRequestAcknowledgedTransport: NormalCommand {
        versions[] = {"Roger__transport_dispatched_", 1};
        class Roger__transport_dispatched_ {
            textOrig = "Roger, transport dispatched.";
            text = "$STR_A3_Roger__transport_dispatched_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "RequestAcknowledgedTransport"};
            gesture = "";
        };
    };
    class SentUnitDestroyedHQCASBombing: NormalCommand {
        versions[] = {"Be_advised__we_ve_lost_contact_with_the_aircraft__Out_", 1};
        class Be_advised__we_ve_lost_contact_with_the_aircraft__Out_ {
            textOrig = "Be advised, we've lost contact with the aircraft. Out.";
            text = "$STR_A3_Be_advised__we_ve_lost_contact_with_the_aircraft__Out_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "UnitDestroyedHQCASBombing"};
            gesture = "";
        };
    };
    class SentUnitDestroyedHQCASHelicopter: NormalCommand {
        versions[] = {"Be_advised__we_just_lost_contact_with_the_chopper__Out_", 1};
        class Be_advised__we_just_lost_contact_with_the_chopper__Out_ {
            textOrig = "Be advised, we just lost contact with the chopper. Out.";
            text = "$STR_A3_Be_advised__we_just_lost_contact_with_the_chopper__Out_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "UnitDestroyedHQCASBombing"};
            gesture = "";
        };
    };
    class SentUnitDestroyedHQSupplyDrop: NormalCommand {
        versions[] = {"Be_advised__support_aircraft_is_unresponsive__Out_", 1};
        class Be_advised__support_aircraft_is_unresponsive__Out_ {
            textOrig = "Be advised, support aircraft is unresponsive. Out.";
            text = "$STR_A3_Be_advised__support_aircraft_is_unresponsive__Out_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "UnitDestroyedHQSupplyDrop"};
            gesture = "";
        };
    };
    class SentUnitDestroyedHQUAV: NormalCommand {
        versions[] = {"Be_advised__the_drone_has_dropped_off_the_grid__Out_", 1};
        class Be_advised__the_drone_has_dropped_off_the_grid__Out_ {
            textOrig = "Be advised, the drone has dropped off the grid. Out.";
            text = "$STR_A3_Be_advised__the_drone_has_dropped_off_the_grid__Out_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "UnitDestroyedHQUAV"};
            gesture = "";
        };
    };
    class SentUnitDestroyedHQArty: NormalCommand {
        versions[] = {"Be_advised__the_artillery_is_not_responding__Out_", 1};
        class Be_advised__the_artillery_is_not_responding__Out_ {
            textOrig = "Be advised, the artillery is not responding. Out.";
            text = "$STR_A3_Be_advised__the_artillery_is_not_responding__Out_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "SecOp_Artillery_Barrage_Unavailable_1"};
            gesture = "";
        };
    };
    class SentUnitDestroyedHQTransport: NormalCommand {
        versions[] = {"Be_advised__we_ve_lost_contact_with_the_aircraft__Out__1", 1};
        class Be_advised__we_ve_lost_contact_with_the_aircraft__Out__1 {
            textOrig = "Be advised, we've lost contact with the aircraft. Out.";
            text = "$STR_A3_Be_advised__we_ve_lost_contact_with_the_aircraft__Out_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "UnitDestroyedHQTransport"};
            gesture = "";
        };
    };
    class SentRequestAccomplishedSGCASBombing: NormalCommand {
        versions[] = {"Payload_delivered__We_re_RTB__Out_", 1};
        class Payload_delivered__We_re_RTB__Out_ {
            textOrig = "Payload delivered, We're RTB. Out.";
            text = "$STR_A3_Payload_delivered__We_re_RTB__Out_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "SecOp_Tactical_Strike_Briefing_1"};
            gesture = "";
        };
    };
    class SentRequestAccomplishedSGCASHelicopter: NormalCommand {
        versions[] = {"CAS_mission_complete__RTB__Out_", 1};
        class CAS_mission_complete__RTB__Out_ {
            textOrig = "CAS mission complete. RTB. Out.";
            text = "$STR_A3_CAS_mission_complete__RTB__Out_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "SecOp_Tactical_Strike_Briefing_2"};
            gesture = "";
        };
    };
    class SentRequestAccomplishedSGSupplyDrop: NormalCommand {
        versions[] = {"The_supplies_have_been_dropped__Out_", 1};
        class The_supplies_have_been_dropped__Out_ {
            textOrig = "The supplies have been dropped. Out.";
            text = "$STR_A3_The_supplies_have_been_dropped__Out_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "RequestAccomplishedSGSupplyDrop"};
            gesture = "";
        };
    };
    class SentRequestAccomplishedSGUAV: NormalCommand {
        versions[] = {"Drone_is_bingo_fuel_and_RTB__Out_", 1};
        class Drone_is_bingo_fuel_and_RTB__Out_ {
            textOrig = "Drone is bingo fuel and RTB. Out.";
            text = "$STR_A3_Drone_is_bingo_fuel_and_RTB__Out_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "RequestAccomplishedSGUAV"};
            gesture = "";
        };
    };
    class SentRequestAccomplishedSGArty: NormalCommand {
        versions[] = {"Splash__Out_", 1};
        class Splash__Out_ {
            textOrig = "Splash. Out.";
            text = "$STR_A3_Splash__Out_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "SecOp_Artillery_Barrage_RoundsComplete"};
            gesture = "";
        };
    };
    class SentRequestAccomplishedSGTransport: NormalCommand {
        versions[] = {"We_re_here__good_luck_out_there_", 1};
        class We_re_here__good_luck_out_there_ {
            textOrig = "We're here, good luck out there.";
            text = "$STR_A3_We_re_here__good_luck_out_there_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "RequestAccomplishedSGTransport"};
            gesture = "";
        };
    };
    class SentSupportAddedDuringMission: NormalCommand {
        versions[] = {"Be_advised__support_units_are_now_on_standby__Out_", 1};
        class Be_advised__support_units_are_now_on_standby__Out_ {
            textOrig = "Be advised, support units are now on standby. Out.";
            text = "$STR_A3_Be_advised__support_units_are_now_on_standby__Out_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "NewSupportAvailable"};
            gesture = "";
        };
    };
    class SentArtySGSupportRoundsComplete: NormalCommand {
        versions[] = {"Rounds_complete__Out_", 1};
        class Rounds_complete__Out_ {
            textOrig = "Rounds complete. Out.";
            text = "$STR_A3_Rounds_complete__Out_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "SecOp_Artillery_Barrage_RoundsComplete"};
            gesture = "";
        };
    };
    class SentTransportSGWelcomeAboard: NormalCommand {
        versions[] = {"Everyone_in__Let_s_get_out_of_here_", 1};
        class Everyone_in__Let_s_get_out_of_here_ {
            textOrig = "Everyone in? Let's get out of here.";
            text = "$STR_A3_Everyone_in__Let_s_get_out_of_here_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "TransportSGWelcomeAboard"};
            gesture = "";
        };
    };
    class SentTransportSGLZCoordinatesSelected: NormalCommand {
        versions[] = {"Copy__We_re_moving_out_", 1};
        class Copy__We_re_moving_out_ {
            textOrig = "Copy. We're moving out.";
            text = "$STR_A3_Copy__We_re_moving_out_";
            wordsClass = "Normal";
            speech[] = {"XMIT", "TransportSGLZCoordinatesSelected"};
            gesture = "";
        };
    };
    class SentSuppress {
        versions[] = {"Version1", 0.5, "Version2", 0.5};
        class Version1 {
            text = "$STR_SENT_UNIT_SUPPRESS_1";
            speech[] = {"%1.1", "C_SuppresiveFireE"};
        };
        class Version2 {
            text = "$STR_SENT_UNIT_SUPPRESS_2";
            speech[] = {"%1.1", "C_OpenUpE"};
        };
    };
    class SentAssemble {
        sentences[] = {"SentAssembleDefault"};
    };
    class SentAssembleDefault {
        versions[] = {"SentAssemble_1", 1};
        class SentAssemble_1 {
            text = "$STR_EP1_SENTASSEMBLE_1";
            speech[] = {"%1", "AssembleThat", "%2"};
        };
    };
    class SentDisassemble {
        sentences[] = {"SentDisassembleDefault"};
    };
    class SentDisassembleDefault {
        versions[] = {"SentDisassemble_1", 1};
        class SentDisassemble_1 {
            text = "$STR_EP1_SENTDISASSEMBLE_1";
            speech[] = {"%1", "DisassembleThat", "%2"};
        };
    };
    class SentCmdActionOpenBag {
        sentences[] = {"SentCmdActionOpenBagDefault"};
    };
    class SentCmdActionOpenBagDefault {
        versions[] = {"SentCmdActionOpenBag_1", 1};
        class SentCmdActionOpenBag_1 {
            text = "$STR_EP1_SENTCMDACTIONOPENBAG_1";
            speech[] = {"NO_SPEECH"};
        };
    };
    class SentCmdActionDropBag {
        sentences[] = {"SentCmdActionDropBagDefault"};
    };
    class SentCmdActionDropBagDefault {
        versions[] = {"SentCmdActionDropBag_1", 1};
        class SentCmdActionDropBag_1 {
            text = "$STR_EP1_SENTCMDACTIONDROPBAG_1";
            speech[] = {"NO_SPEECH"};
        };
    };
    class SentCmdActionTakeBag {
        sentences[] = {"SentCmdActionTakeBagDefault"};
    };
    class SentCmdActionTakeBagDefault {
        versions[] = {"SentCmdActionTakeBag_1", 1};
        class SentCmdActionTakeBag_1 {
            text = "$STR_EP1_SENTCMDACTIONTAKEBAG_1";
            speech[] = {"NO_SPEECH"};
        };
    };
    class SentUnitKilled: SentUnitKilled {
        versions[] = {
            "Version1",
            0.2,
            "Version2",
            0.1,
            "Version3",
            0.1,
            "Version4",
            0.2
        };
        class Version1 {
            text = "$STR_A3___1_1___KIA";
            speech[] = {"%1.1", "IsDownE"};
        };
        class Version2 {
            text = "$STR_A3___1_1___KIA";
            speech[] = {"ShitE", "%1.1", "IsDownE"};
        };
        class Version3 {
            text = "$STR_A3___1_1___KIA";
            speech[] = {"ManDownE", "%1.1", "IsDownE"};
        };
        class Version4 {
            text = "$STR_A3___1_1___KIA";
            speech[] = {"GoddamnE", "%1.1", "IsDownE"};
        };
    };
    class SentSupportAskHeal: SentSupportAskHeal {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "Requesting support ? Grid: %1";
            speech[] = {"HQ", "WeNeedMedicalAssistanceAt", "%1", "Over1"};
        };
    };
    class SentSupportAskRepair: SentSupportAskRepair {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "Requesting support ? Grid: %1";
            speech[] = {"HQ", "RequestingRepairTeamAt", "%1", "Over1"};
        };
    };
    class SentSupportAskRefuel: SentSupportAskRefuel {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "Requesting support ? Grid: %1";
            speech[] = {
                "HQ",
                "WereRunningOnFumesNeedRefuelAt",
                "%1",
                "Over1"
            };
        };
    };
    class SentSupportAskRearm: SentSupportAskRearm {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "Requesting support ? Grid: %1";
            speech[] = {"HQ", "RequestingUrgentResupplyAt", "%1", "Over1"};
        };
    };
    class SentSupportConfirm: SentSupportConfirm {
        versions[] = {"Version1", 0.4, "Version2", 0.2, "Version3", 0.4};
        class Version1 {
            text = "$STR_A3_Support_confirmed";
            speech[] = {"SolidCopy", "ProvidingSupportAt", "%2"};
        };
        class Version2 {
            text = "$STR_A3_Support_confirmed";
            speech[] = {"HoldOnGuysSupportsOnTheWayE"};
        };
        class Version3 {
            text = "$STR_A3_Support_confirmed";
            speech[] = {"Roger", "WereOnIt"};
        };
    };
    class SentSupportReady: SentSupportReady {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "";
            speech[] = {
                "ImAtGrid",
                "%2",
                "ProvidingSupportTo",
                "%1",
                "Out1"
            };
        };
    };
    class SentSupportDone: SentSupportDone {
        versions[] = {"Version1", 0.7, "Version2", 0.3};
        class Version1 {
            text = "";
            speech[] = {"YoureGoodToGoE"};
        };
        class Version2 {
            text = "";
            speech[] = {"SupportComplete", "GiveEmHellE"};
        };
    };
    class SentSupportNotAvailable: SentSupportNotAvailable {
        gesture = "gestureNo";
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Negative";
            speech[] = {"NoSupportAvailableAtThisTime", "Out1"};
        };
    };
    class SentHealthCritical: SentHealthCritical {
        versions[] = {
            "Version1",
            0.2,
            "Version2",
            0.05,
            "Version3",
            0.1,
            "Version4",
            0.15,
            "Version5",
            0.1,
            "Version6",
            0.2,
            "Version7",
            0.2
        };
        class Version1 {
            text = "$STR_A3_Injured";
            speech[] = {"ImHitE"};
        };
        class Version2 {
            text = "$STR_A3_Injured";
            speech[] = {"ImBleedingE"};
        };
        class Version3 {
            text = "$STR_A3_Injured";
            speech[] = {"SomebodyHelpMeE"};
        };
        class Version4 {
            text = "$STR_A3_Injured";
            speech[] = {"TheyGotMeE"};
        };
        class Version5 {
            text = "$STR_A3_Injured";
            speech[] = {"NeedHelpE"};
        };
        class Version6 {
            text = "$STR_A3_Injured";
            speech[] = {"WoundedE"};
        };
        class Version7 {
            text = "$STR_A3_Injured";
            speech[] = {"CorpsmanE"};
        };
    };
    class SentDammageCritical: SentDammageCritical {
        versions[] = {
            "Version1",
            0.3,
            "Version2",
            0.1,
            "Version3",
            0.2,
            "Version4",
            0.4
        };
        class Version1 {
            text = "$STR_A3_Critical_damage";
            speech[] = {"StatusRedE"};
        };
        class Version2 {
            text = "$STR_A3_Critical_damage";
            speech[] = {"VehicleIsFUBARE"};
        };
        class Version3 {
            text = "$STR_A3_Critical_damage";
            speech[] = {"VehicleIsFUBARE"};
        };
        class Version4 {
            text = "$STR_A3_Critical_damage";
            speech[] = {"CriticalDamageE"};
        };
    };
    class SentFuelCritical: SentFuelCritical {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_No_fuel";
            speech[] = {"ImOutOfFuelE"};
        };
    };
    class SentFuelLow: SentFuelLow {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Low_fuel";
            speech[] = {"ImRunningOutOfFuel"};
        };
    };
    class SentAmmoCritical: SentAmmoCritical {
        versions[] = {"Version1", 0.3, "Version2", 0.4, "Version3", 0.3};
        class Version1 {
            text = "$STR_A3_No_ammo";
            speech[] = {"GoddamnE", "OutOfAmmoE"};
        };
        class Version2 {
            text = "$STR_A3_No_ammo";
            speech[] = {"NoMoreAmmoE"};
        };
        class Version3 {
            text = "$STR_A3_No_ammo";
            speech[] = {"CantShootE", "OutOfAmmoE"};
        };
    };
    class SentAmmoLow: SentAmmoLow {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Low_ammo";
            speech[] = {"RunningOutOfAmmoE"};
        };
    };
    class SentReportPosition: Report {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "%2";
            speech[] = {"%1", "Grid", "%2", "Over1"};
        };
    };
    class SentIsLeader: SentIsLeader {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1___Taking_command";
            speech[] = {"%1", "IsNowInCommand"};
        };
    };
    class SentCommandCompleted: SentCommandCompleted {
        versions[] = {
            "Version1",
            0.3,
            "Version2",
            0.15,
            "Version3",
            0.15,
            "Version4",
            0.25
        };
        class Version1 {
            text = "";
            speech[] = {"%1", "Ready"};
        };
        class Version2 {
            text = "";
            speech[] = {"%1", "ReadyForOrders"};
        };
        class Version3 {
            text = "";
            speech[] = {"%1", "Waiting"};
        };
        class Version4 {
            text = "";
            speech[] = {"%1", "StandingBy"};
        };
    };
    class SentJoinCompleted: SentJoinCompleted {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "";
            speech[] = {"%1", "Waiting"};
        };
    };
    class SentFireReady: SentFireReady {
        versions[] = {
            "Version1",
            0.3,
            "Version2",
            0.05,
            "Version3",
            0.15
        };
        class Version1 {
            text = "$STR_A3_Ready_to_fire";
            speech[] = {"ReadyToFire", "%1"};
        };
        class Version2 {
            text = "$STR_A3_Ready_to_fire";
            speech[] = {"TargetInSight", "hc_waitingfororders", "%1"};
        };
        class Version3 {
            text = "$STR_A3_Ready_to_fire";
            speech[] = {"TargetInSight", "%1"};
        };
    };
    class SentFireNegative: SentFireNegative {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Negative";
            speech[] = {"UnableToFireE"};
        };
    };
    class SentCommandFailed: SentCommandFailed {
        gesture = "gestureNo";
        versions[] = {"Version1", 0.6, "Version2", 0.4};
        class Version1 {
            text = "$STR_A3_Negative";
            speech[] = {"Negative"};
        };
        class Version2 {
            text = "$STR_A3_Negative";
            speech[] = {"ICant"};
        };
    };
    class SentDestinationUnreacheable: SentDestinationUnreacheable {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Negative";
            speech[] = {"DamnE", "ICantGetThere"};
        };
    };
    class SelectEnemyDetectedSentence: SelectEnemyDetectedSentence {
        sentences[] = {"SentEnemyDetectedGroupCoreRelative", 1};
    };
    class SentEnemyDetectedGroupCoreRelative: SentEnemyDetectedGroupCoreRelative {
        versions[] = {"Version1", 0.5, "Version2", 0.5};
        class Version1 {
            text = "$STR_A3_Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_102";
            speech[] = {
                "targetinsight",
                "%2",
                "Direction",
                "%6.102",
                "%5.101",
                "Receive1"
            };
        };
        class Version2 {
            text = "$STR_A3_Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_102";
            speech[] = {
                "ObservingHostile",
                "%2",
                "%6.101",
                "%5.101",
                "Receive3"
            };
        };
        class Version3 {
            text = "$STR_SENT_DETECTED_GROUP_8";
            speech[] = {"%8", "%2", "%9"};
        };
    };
    class SentEnemyDetectedOnGridReference: SentEnemyDetectedOnGridReference {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_CMPS";
            speech[] = {"Contact", "%3", "%4", "%2"};
        };
    };
    class SentEnemyDetectedLocationRelative: SentEnemyDetectedLocationRelative {
        versions[] = {"Version1", 1};
        class Version2 {
            text = "";
            speech[] = {"%4", "%2", "%11.100", "%12.101", "of", "%14"};
        };
    };
    class SentEnemyDetectedUnitRelative: SentEnemyDetectedUnitRelative {
        versions[] = {"Version1", 1, "Version2", 1};
        class Version1 {
            text = "";
            speech[] = {
                "%13",
                "BeAdvised",
                "%4",
                "%2",
                "%10.101",
                "fromyou",
                "%9.1"
            };
        };
        class Version2 {
            text = "";
            speech[] = {
                "%13",
                "%4",
                "%2",
                "at",
                "%10.102",
                "fromyou",
                "%9.101"
            };
        };
    };
    class SentEnemyDetectedSenderRelative: SentEnemyDetectedSenderRelative {
        versions[] = {"Version1", 1, "Version2", 1};
        class Version1 {
            text = "";
            speech[] = {"Contact", "%4", "%2", "%8.102", "fromus", "%7.1"};
        };
        class Version2 {
            text = "";
            speech[] = {
                "Contact",
                "%4",
                "%2",
                "%7.1",
                "at",
                "%8.101",
                "fromus"
            };
        };
    };
    class SentObjectDestroyed: SentObjectDestroyed {
        versions[] = {
            "Version1",
            0.1,
            "Version2",
            0.1,
            "Version3",
            0.1,
            "Version4",
            0.1,
            "Version5",
            0.1
        };
        class Version1 {
            text = "$STR_A3___2___Neutralized";
            speech[] = {"TargetDestroyedE"};
        };
        class Version2 {
            text = "$STR_A3___2___Neutralized";
            speech[] = {"ScratchOneE"};
        };
        class Version3 {
            text = "$STR_A3___2___Neutralized";
            speech[] = {"TargetEliminated"};
        };
        class Version4 {
            text = "$STR_A3___2___Neutralized";
            speech[] = {"HesDownE"};
        };
        class Version5 {
            text = "$STR_A3___2___Neutralized";
            speech[] = {"IveGotHimE"};
        };
    };
    class SentObjectDestroyedUnknown: SentObjectDestroyedUnknown {
        versions[] = {
            "Version1",
            0.1,
            "Version2",
            0.1,
            "Version3",
            0.1,
            "Version4",
            0.1,
            "Version5",
            0.1
        };
        class Version1 {
            text = "$STR_A3_Target_neutralized";
            speech[] = {"TargetDestroyedE"};
        };
        class Version2 {
            text = "$STR_A3_Target_neutralized";
            speech[] = {"ScratchOneE"};
        };
        class Version3 {
            text = "$STR_A3_Target_neutralized";
            speech[] = {"TargetEliminated"};
        };
        class Version4 {
            text = "$STR_A3_Target_neutralized";
            speech[] = {"HesDownE"};
        };
        class Version5 {
            text = "$STR_A3_Target_neutralized";
            speech[] = {"IveGotHimE"};
        };
    };
    class SentContact: SentContact {
        versions[] = {"Version1", 0.6, "Version2", 0.1, "Version3", 0.3};
        class Version1 {
            text = "$STR_A3_Contact";
            speech[] = {"ContactE"};
        };
        class Version2 {
            text = "$STR_A3_Contact";
            speech[] = {"EnemiesE"};
        };
        class Version3 {
            text = "$STR_A3_Contact";
            speech[] = {"HostilesE"};
        };
    };
    class SentCmdHealSomeone: UrgentCommand {
        versions[] = {"__1_1___Heal____2", "1"};
        class __1_1___Heal____2_1 {
            textOrig = "%1.1 — Heal — %2";
            text = "%1.1 - Heal - %2";
            wordsClass = "Stealth";
            speech[] = {"XMIT", "%1.1", "HealThatSoldier"};
            gesture = "";
        };
        class __1_1___Heal____2 {
            textOrig = "%1.1 — Heal — %2";
            text = "%1.1 - Heal - %2";
            wordsClass = "Normal";
            speech[] = {"XMIT", "%1.1", "HealThatSoldier"};
            gesture = "";
        };
    };
    class SentCmdHealSelf: NormalCommand {
        versions[] = {"__1_1___Patch_yourself_up", "Stealth"};
        class __1_1___Patch_yourself_up_1 {
            textOrig = "%1.1 — Patch yourself up";
            text = "%1.1 - Patch yourself up";
            wordsClass = "Stealth";
            speech[] = {"XMIT", "%1.1", "PatchYourself"};
            gesture = "";
        };
        class __1_1___Patch_yourself_up {
            textOrig = "%1.1 — Patch yourself up";
            text = "%1.1 - Patch yourself up";
            wordsClass = "Normal";
            speech[] = {"XMIT", "%1.1", "PatchYourself"};
            gesture = "";
        };
    };
    class SentUnderFire: SentUnderFire {
        versions[] = {
            "Version1",
            0.1,
            "Version2",
            0.1,
            "Version3",
            0.1,
            "Version4",
            0.1,
            "Version5",
            0.1,
            "Version6",
            0.1
        };
        class Version1 {
            textOrig = "";
            text = "";
            speech[] = {"%1", "UnderFireE"};
        };
        class Version2 {
            textOrig = "";
            text = "";
            speech[] = {"%1", "TheyreShootingAtUsE"};
        };
        class Version3 {
            textOrig = "";
            text = "";
            speech[] = {"%1", "EnemyFireE"};
        };
        class Version4 {
            textOrig = "";
            text = "";
            speech[] = {"%1", "BeingEngagedE"};
        };
        class Version5 {
            textOrig = "";
            text = "";
            speech[] = {"%1", "FuckThatsCloseE"};
        };
        class Version6 {
            textOrig = "";
            text = "";
            speech[] = {"%1", "IncomingE"};
        };
    };
    class SentClear: SentClear {
        gesture = "gestureUp";
        versions[] = {"Version1", 0.5, "Version2", 0.4};
        class Version1 {
            text = "$STR_A3_Area_clear";
            speech[] = {"Clear"};
        };
        class Version2 {
            text = "$STR_A3_Area_clear";
            speech[] = {"AreaClear"};
        };
    };
    class SentRepeatCommand: SentRepeatCommand {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Repeat_command";
            speech[] = {"SayAgain", "Over1"};
        };
    };
    class SentWhereAreYou: SentWhereAreYou {
        versions[] = {"Version1", 0.5, "Version2", 0.5};
        class Version1 {
            text = "$STR_A3_Report_position";
            speech[] = {"WhatIsYourPositionQ", "Receive3"};
        };
        class Version2 {
            text = "$STR_A3_Report_position";
            speech[] = {"WhatIsYourPositionQ", "Receive1"};
        };
    };
    class SentReturnToFormation: SentReturnToFormation {
        gesture = "GestureFollow";
        versions[] = {
            "Version1",
            0.1,
            "Version2",
            0.3,
            "Version3",
            0.1,
            "Version4",
            0.1,
            "Version5",
            0.2,
            "Version6",
            0.2
        };
        class Version1 {
            text = "$STR_A3___1___Regroup";
            speech[] = {"%1", "FallBackE"};
        };
        class Version2 {
            text = "$STR_A3___1___Regroup";
            speech[] = {"%1", "ReturnToFormationE"};
        };
        class Version3 {
            text = "$STR_A3___1___Regroup";
            speech[] = {"%1", "FormOnMeE"};
        };
        class Version4 {
            text = "$STR_A3___1___Regroup";
            speech[] = {"%1", "GetBackE"};
        };
        class Version5 {
            text = "$STR_A3___1___Regroup";
            speech[] = {"%1", "StayInFormationE"};
        };
        class Version6 {
            text = "$STR_A3___1___Regroup";
            speech[] = {"%1", "RegroupE"};
        };
    };
    class SentFormColumn: SentFormColumn {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Formation___Column";
            speech[] = {"FormationColumn"};
        };
    };
    class SentFormStaggeredColumn: SentFormStaggeredColumn {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Formation___Staggered_col_";
            speech[] = {"FormationStaggeredColumn"};
        };
    };
    class SentFormWedge: SentFormWedge {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Formation___Wedge";
            speech[] = {"FormationWedge"};
        };
    };
    class SentFormEcholonLeft: SentFormEcholonLeft {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Formation___Echelon_L_";
            speech[] = {"FormationEchelonLeft"};
        };
    };
    class SentFormEcholonRight: SentFormEcholonRight {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Formation___Echelon_R_";
            speech[] = {"FormationEchelonRight"};
        };
    };
    class SentFormVee: SentFormVee {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Formation___Vee";
            speech[] = {"FormationVee"};
        };
    };
    class SentFormLine: SentFormLine {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Formation___Line";
            speech[] = {"FormationLine"};
        };
    };
    class SentFormFile: SentFormFile {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Formation___File";
            speech[] = {"FormationFile"};
        };
    };
    class SentFormDiamond: SentFormDiamond {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Formation___Diamond";
            speech[] = {"FormationDiamond"};
        };
    };
    class SentBehaviourCareless: SentBehaviourCareless {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "";
            speech[] = {};
        };
    };
    class SentBehaviourSafe: SentBehaviourSafe {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1___Relax";
            speech[] = {"%1", "AtEase"};
        };
    };
    class SentBehaviourAware: SentBehaviourAware {
        versions[] = {"Version1", 0.25, "Version2", 0.65};
        class Version1 {
            text = "$STR_A3___1___Aware";
            speech[] = {"%1", "StayFrosty"};
        };
        class Version2 {
            text = "$STR_A3___1___Aware";
            speech[] = {"%1", "StayAlert"};
        };
    };
    class SentBehaviourCombat: SentBehaviourCombat {
        versions[] = {"Version1", 0.2, "Version2", 0.1};
        class Version1 {
            text = "$STR_A3___1___Combat";
            speech[] = {"%1", "StandBy"};
        };
        class Version2 {
            text = "$STR_A3___1___Combat";
            speech[] = {"%1", "GetReadyToFightE"};
        };
    };
    class SentBehaviourStealth: SentBehaviourStealth {
        versions[] = {"Version1", 0.2, "Version2", 0.1, "Version2", 0.1};
        class Version1 {
            text = "$STR_A3___1___Stealth";
            speech[] = {"%1", "Silence"};
        };
        class Version2 {
            text = "$STR_A3___1___Stealth";
            speech[] = {"%1", "Stealth"};
        };
        class Version3 {
            text = "$STR_A3___1___Stealth";
            speech[] = {"%1", "Stealth"};
        };
    };
    class SentOpenFire: SentOpenFire {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Open_fire";
            speech[] = {"%1.1", "FireAtWill"};
        };
    };
    class SentOpenFireInCombat: SentOpenFireInCombat {
        gesture = "gestureAdvance";
        versions[] = {"Version1", 0.2, "Version2", 0.2};
        class Version1 {
            text = "$STR_A3___1_1___Open_fire";
            speech[] = {"%1.1", "OpenUpE"};
        };
        class Version2 {
            text = "$STR_A3___1_1___Open_fire";
            speech[] = {"%1.1", "GoGoGoE"};
        };
    };
    class SentHoldFire: SentHoldFire {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Hold_fire";
            speech[] = {"%1.1", "HoldFire"};
        };
    };
    class SentHoldFireInCombat: SentHoldFireInCombat {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Hold_fire";
            speech[] = {"%1.1", "HoldFireE"};
        };
    };
    class SentCeaseFireInsideGroup: SentCeaseFireInsideGroup {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Hold_fire";
            speech[] = {"%1.1", "CeaseFireGoddamnitE"};
        };
    };
    class SentCeaseFire: SentCeaseFire {
        versions[] = {"Version1", 0.4, "Version2", 0.3};
        class Version1 {
            text = "$STR_A3___2_1___Cease_fire";
            speech[] = {"%2.1", "CheckYourFireE"};
        };
        class Version2 {
            text = "$STR_A3___2_1___Cease_fire";
            speech[] = {"%2.1", "YoureFiringOnFriendliesE"};
        };
    };
    class SentLooseFormation: SentLooseFormation {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Free_to_engage";
            speech[] = {"%1.1", "EngageAtWill"};
        };
    };
    class SentKeepFormation: SentKeepFormation {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Disengage";
            speech[] = {"%1.1", "Disengage"};
        };
    };
    class SentUnitPosDown: SentUnitPosDown {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Prone";
            speech[] = {"%1.1", "GoProne"};
            gesture = "gestureCover";
        };
    };
    class SentUnitPosMiddle: SentUnitPosMiddle {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Crouch";
            speech[] = {"%1.1", "stayCrouched"};
        };
    };
    class SentUnitPosUp: SentUnitPosUp {
        versions[] = {"Version1", 0.4, "Version2", 0.3};
        class Version1 {
            text = "$STR_A3___1_1___Stand";
            speech[] = {"%1.1", "StandUp"};
            gesture = "gestureUp";
        };
        class Version2 {
            text = "$STR_A3___1_1___Stand";
            speech[] = {"%1.1", "OnYourFeet"};
            gesture = "gestureUp";
        };
    };
    class SentUnitPosAuto: SentUnitPosAuto {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Copy_my_stance";
            speech[] = {"%1.1", "CopyMyStance"};
        };
    };
    class SentFormPosAdvance: SentFormPosAdvance {
        versions[] = {"Version1", 0.8, "Version2", 0.2};
        class Version1 {
            text = "$STR_A3___1_1___Advance";
            speech[] = {"%1.1", "Advance"};
        };
        class Version2 {
            text = "$STR_A3___1_1___Advance";
            speech[] = {"%1.1", "TakePoint"};
        };
    };
    class SentFormPosStayBack: SentFormPosStayBack {
        versions[] = {"Version1", 0.8, "Version2", 0.2};
        class Version1 {
            text = "$STR_A3___1_1___Stay_back";
            speech[] = {"%1.1", "StayBack"};
        };
        class Version2 {
            text = "$STR_A3___1_1___Stay_back";
            speech[] = {"%1.1", "CoverOurRear"};
        };
    };
    class SentFormPosFlankLeft: SentFormPosFlankLeft {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Flank_left";
            speech[] = {"%1.1", "FlankLeft"};
        };
    };
    class SentFormPosFlankRight: SentFormPosFlankRight {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Flank_right";
            speech[] = {"%1.1", "FlankRight"};
        };
    };
    class SentReportStatus: SentReportStatus {
        versions[] = {"Version1", 0.5, "Version2", 0.5};
        class Version1 {
            text = "$STR_A3___1_1___SITREP";
            speech[] = {"%1.1", "ReportStatus", "Receive1"};
        };
        class Version2 {
            text = "$STR_A3___1_1___SITREP";
            speech[] = {"%1.1", "WhatsYourStatusQ", "Receive3"};
        };
    };
    class SentTeam: SentTeam {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1____2";
            speech[] = {"%2"};
        };
    };
    class SentTeamPlural: SentTeamPlural {
        versions[] = {"Version2", 1};
        class Version2 {
            text = "$STR_A3___1_1____2";
            speech[] = {"%2"};
        };
    };
    class SentWatchTgt: SentWatchTgt {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Watch____2";
            speech[] = {"%1.1", "direction", "%2"};
        };
    };
    class SentWatchDir: SentWatchDir {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Watch____2_CMPS";
            speech[] = {"%1.1", "direction", "%2"};
        };
    };
    class SentWatchPos: SentWatchPos {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Observe_position";
            speech[] = {"%1.1", "direction", "%2"};
        };
    };
    class SentWatchAround: SentWatchAround {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Scan_horizon";
            speech[] = {"%1.1", "ScanHorizon"};
        };
    };
    class SentNoTarget: SentNoTarget {
        versions[] = {"Version2", 1};
        class Version1 {
            text = "$STR_A3___1_1___No_target";
            speech[] = {"%1.1", "NoMoreTarget"};
        };
        class Version2 {
            text = "$STR_A3___1_1___No_target";
            speech[] = {"%1.1", "CancelTarget"};
        };
    };
    class SentTarget: SentTarget {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1___Engage_____2____6";
            speech[] = {"%1", "obj_target", "%2"};
            gesture = "gesturePoint";
        };
    };
    class SentEngage: SentEngage {
        gesture = "gestureAttack";
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1___Engage_____2____6";
            speech[] = {"%1", "obj_target", "%2", "executeAction"};
        };
    };
    class SentFire: SentFire {
        gesture = "GestureAttack";
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1___Engage";
            speech[] = {"%1", "obj_target", "%2", "fireatwill"};
        };
    };
    class SentEngageNoTarget: SentEngageNoTarget {
        gesture = "gestureAdvance";
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1___Engage";
            speech[] = {"%1", "ExecuteAction"};
        };
    };
    class SentFireNoTarget: SentFireNoTarget {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1___Engage";
            speech[] = {"%1", "FireAtWill"};
        };
    };
    class SelectCmdMoveSentence: SelectCmdMoveSentence {
        sentences[] = {
            "SentCmdMoveGroupRelative",
            "GroupCompactness",
            "SentCmdMoveToGrid",
            "((DistanceToGroup factor [750,1000]) + (1 - GroupCompactness)/2) / 2"
        };
    };
    class SentCmdMoveGroupRelative: SentCmdMoveGroupRelative {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3__mUNIT___Move____mGRPDIS_ABS____mGRPDIR_CMPS";
            speech[] = {"%1.1", "Move", "On2", "%11"};
            gesture = "gestureGo";
        };
    };
    class SentCmdMoveRecipientsRelative: SentCmdMoveRecipientsRelative {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3__mUNIT___Move____mGRPDIR_1";
            speech[] = {"%1.1", "MoveTo", "%11.101", "%10.101"};
            gesture = "gestureGo";
        };
    };
    class SentCmdMoveToGrid: SentCmdMoveToGrid {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3__mUNIT___Move___Grid___mGRID";
            speech[] = {"%1.1", "MoveToPos", "%2"};
            gesture = "gestureGoB";
        };
    };
    class SentCmdMoveToObject: SentCmdMoveToObject {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3__mUNIT___Move___Grid___mGRID";
            speech[] = {"%1.1", "%8", "%11", "Advance"};
            gesture = "gestureGo";
        };
    };
    class SentCmdMoveLocationRelative: SentCmdMoveLocationRelative {
        versions[] = {
            "Version2",
            "InsideLocation",
            "Version1",
            "1 - InsideLocation"
        };
        class Version1 {
            text = "$STR_A3__mUNIT___Move___Grid___mGRID";
            speech[] = {"%1.1", "GoTo", "%7"};
        };
        class Version2 {
            text = "$STR_A3__mUNIT___Move___Grid___mGRID";
            speech[] = {"%1.1", "Move", "%5.101", "%6.102", "of", "%7"};
        };
    };
    class SentCmdMoveToTarget: SentCmdMoveToTarget {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3__mUNIT___Move___Grid___mGRID";
            speech[] = {"%1.1", "%2", "%4", "Advance"};
            gesture = "gestureGo";
        };
        class Version2 {
            text = "$STR_A3__mUNIT___Move___Grid___mGRID";
            speech[] = {"%1.1", "GoTo", "%2", "%4.2"};
            gesture = "gestureGo";
        };
        class Version3 {
            text = "$STR_A3__mUNIT___Move___Grid___mGRID";
            speech[] = {"%1.1", "GoTo", "%2", "%4.1"};
            gesture = "gestureGoB";
        };
    };
    class SentCmdHeal: SentCmdHeal {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Go_to_medic____2____3";
            speech[] = {"%1.1", "HealAt", "That", "%2"};
        };
    };
    class SentCmdHealFar: SentCmdHealFar {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Go_to_medic____2____3";
            speech[] = {"%1.1", "HealAt", "That", "%2"};
        };
    };
    class SentCmdHealAt: SentCmdHealAt {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Go_to_medic___2_____3";
            speech[] = {"%1.1", "HealAt", "That", "%2"};
        };
    };
    class SentCmdRepair: SentCmdRepair {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Repair_vehicle____2____3";
            speech[] = {"%1.1", "RepairAt", "%2"};
        };
    };
    class SentCmdRepairFar: SentCmdRepairFar {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Repair_vehicle____2____3";
            speech[] = {"%1.1", "RepairAt", "%2"};
        };
    };
    class SentCmdRepairAt: SentCmdRepairAt {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Repair_vehicle___2_____3";
            speech[] = {"%1.1", "RepairAt", "%2"};
        };
    };
    class SentCmdRefuel: SentCmdRefuel {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Refuel_vehicle____2____3";
            speech[] = {"%1.1", "RefuelAt", "%2"};
        };
    };
    class SentCmdRefuelFar: SentCmdRefuelFar {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Refuel_vehicle___Grid___2";
            speech[] = {"%1.1", "RefuelAt", "%2"};
        };
    };
    class SentCmdRefuelAt: SentCmdRefuelAt {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Refuel_vehicle___2_____3";
            speech[] = {"%1.1", "RefuelAt", "%2"};
        };
    };
    class SentCmdRearm: SentCmdRearm {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Rearm____2____3";
            speech[] = {"%1.1", "RearmAt", "%2"};
        };
    };
    class SentCmdRearmFar: SentCmdRearmFar {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Rearm___Grid___2";
            speech[] = {"%1.1", "RearmAt", "%2"};
        };
    };
    class SentCmdRearmAt: SentCmdRearmAt {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Rearm___2_____3";
            speech[] = {"%1.1", "RearmAt", "%2"};
        };
    };
    class SentCmdSupport: SentCmdSupport {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Get_support____2____3";
            speech[] = {"%1.1", "SupportAt", "%2"};
        };
    };
    class SentCmdSupportFar: SentCmdSupportFar {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Get_support___Grid___2";
            speech[] = {"%1.1", "SupportAt", "%2"};
        };
    };
    class SentCmdSupportAt: SentCmdSupportAt {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Get_support___2_____3_CMPS";
            speech[] = {"%1.1", "SupportAt", "%2"};
        };
    };
    class SentCmdDropWeapon: SentCmdDropWeapon {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Drop_weapon____2";
            speech[] = {"%1.1", "Drop", "That", "%2"};
        };
    };
    class SentCmdDropMagazine: SentCmdDropMagazine {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Drop_magazine____2";
            speech[] = {"%1.1", "Drop", "That", "Magazine"};
        };
    };
    class SentCmdTakeWeapon: SentCmdTakeWeapon {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Take_weapon____2____3____4";
            speech[] = {"%1.1", "Take", "That", "%2"};
        };
    };
    class SentCmdTakeWeaponFar: SentCmdTakeWeaponFar {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Take_weapon____2___Grid___3";
            speech[] = {"%1.1", "Take", "That", "%2"};
        };
    };
    class SentCmdTakeWeaponAt: SentCmdTakeWeaponAt {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Take_weapon____3___2_____4";
            speech[] = {"%1.1", "Take", "That", "%2"};
        };
    };
    class SentCmdTakeMagazine: SentCmdTakeMagazine {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Take_magazine____2____3";
            speech[] = {"%1.1", "Take", "That", "Magazine"};
        };
    };
    class SentCmdTakeMagazineFar: SentCmdTakeMagazineFar {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Take_magazine___Grid___2";
            speech[] = {"%1.1", "Take", "That", "Magazine"};
        };
    };
    class SentCmdTakeMagazineAt: SentCmdTakeMagazineAt {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Take_magazine____2____3";
            speech[] = {"%1.1", "Take", "That", "Magazine"};
        };
    };
    class SentCmdAction: SentCmdAction {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_SENT_CMD_ACTION_1";
            speech[] = {};
        };
    };
    class SentCmdActionNear: SentCmdActionNear {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_SENT_CMD_ACTION_NEAR_1";
            speech[] = {};
        };
    };
    class SentCmdActionFar: SentCmdActionFar {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_SENT_CMD_ACTION_FAR_1";
            speech[] = {};
        };
    };
    class SentCmdActionAt: SentCmdActionAt {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_SENT_CMD_ACTION_AT_1";
            speech[] = {};
        };
    };
    class SentCmdTakeFlag: SentCmdTakeFlag {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_SENT_CMD_TAKE_FLAG_1";
            speech[] = {"%1.1", "TakeTheFlag", "At", "%2"};
        };
    };
    class SentCmdTakeFlagFar: SentCmdTakeFlagFar {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_SENT_CMD_TAKE_FLAG_1";
            speech[] = {"%1.1", "TakeTheFlag", "At", "%2"};
        };
    };
    class SentCmdTakeFlagAt: SentCmdTakeFlagAt {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_SENT_CMD_TAKE_FLAG_1";
            speech[] = {"%1.1", "TakeTheFlag", "At", "%2"};
        };
    };
    class SentCmdReturnFlag: SentCmdReturnFlag {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_SENT_CMD_RETURN_FLAG_1";
            speech[] = {"%1.1", "ReturnTheFlag", "At", "%2"};
        };
    };
    class SentCmdReturnFlagFar: SentCmdReturnFlagFar {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_SENT_CMD_RETURN_FLAG_1";
            speech[] = {"%1.1", "ReturnTheFlag", "At", "%2"};
        };
    };
    class SentCmdReturnFlagAt: SentCmdReturnFlagAt {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_SENT_CMD_RETURN_FLAG_1";
            speech[] = {"%1.1", "ReturnTheFlag", "At", "%2"};
        };
    };
    class SentCmdEject: SentCmdEject {
        versions[] = {"Version1", 0.7, "Version2", 0.3};
        class Version1 {
            text = "$STR_A3___1_1___Eject";
            speech[] = {"%1.1", "EjectE"};
        };
        class Version2 {
            text = "$STR_A3___1_1___Eject";
            speech[] = {"%1.1", "BailOutE"};
        };
    };
    class SentCmdPlaceCharge: SentCmdPlaceCharge {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Set_charge";
            speech[] = {"%1.1", "SetACharge"};
        };
    };
    class SentCmdDetonate: SentCmdDetonate {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Detonate_charge";
            speech[] = {"%1.1", "DetonateChargeNowE"};
        };
    };
    class SentCmdActivateTimer: SentCmdActivateTimer {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Set_timer";
            speech[] = {"%1.1", "SetTheTimer"};
        };
    };
    class SentCmdDeactivateBomb: SentCmdDeactivateBomb {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Deactivate_charge";
            speech[] = {"%1.1", "DeactivateThatCharge"};
        };
    };
    class SentCmdDeactivateMine: SentCmdDeactivateMine {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Disarm_mine";
            speech[] = {"%1.1", "DisarmThatMine"};
        };
    };
    class SentCmdTakeMine: SentCmdTakeMine {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Take_mine";
            speech[] = {"%1.1", "PickUpThatMine"};
        };
    };
    class SentCmdLightFire: SentCmdLightFire {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Light_fire";
            speech[] = {"GoAndLightThatFire"};
        };
    };
    class SentCmdLightFireFar: SentCmdLightFireFar {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Light_fire";
            speech[] = {"%1.1", "GoAndLightThatFire"};
        };
    };
    class SentCmdLightFireAt: SentCmdLightFireAt {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Light_fire";
            speech[] = {"%1.1", "GoAndLightThatFire"};
        };
    };
    class SentCmdPutOutFire: SentCmdPutOutFire {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_SENT_CMD_PUT_OUT_FIRE_1";
            speech[] = {"%1.1", "PutOutThatFire"};
        };
    };
    class SentCmdPutOutFireFar: SentCmdPutOutFireFar {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Extinguish_fire";
            speech[] = {"%1.1", "PutOutThatFire"};
        };
    };
    class SentCmdPutOutFireAt: SentCmdPutOutFireAt {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Extinguish_fire";
            speech[] = {"%1.1", "PutOutThatFire"};
        };
    };
    class SentCmdOpenDoor: SentCmdOpenDoor {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Open_door";
            speech[] = {"%1.1", "OpenThatDoor"};
        };
    };
    class SentCmdOpenDoorFar: SentCmdOpenDoorFar {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Open_door";
            speech[] = {"%1.1", "OpenThatDoor"};
        };
    };
    class SentCmdOpenDoorAt: SentCmdOpenDoorAt {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Open_door";
            speech[] = {"%1.1", "OpenThatDoor"};
        };
    };
    class SentCmdCloseDoor: SentCmdCloseDoor {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Close_door";
            speech[] = {"%1.1", "CloseThatDoor"};
        };
    };
    class SentCmdCloseDoorFar: SentCmdCloseDoorFar {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Close_door";
            speech[] = {"%1.1", "CloseThatDoor"};
        };
    };
    class SentCmdCloseDoorAt: SentCmdCloseDoorAt {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Close_door";
            speech[] = {"%1.1", "CloseThatDoor"};
        };
    };
    class SentCmdFollowMe: SentCmdFollowMe {
        gesture = "GestureFollow";
        versions[] = {
            "Version1",
            0.1,
            "Version2",
            0.3,
            "Version3",
            0.1,
            "Version4",
            0.1,
            "Version5",
            0.2,
            "Version6",
            0.2
        };
        class Version1 {
            text = "$STR_A3___1___Regroup";
            speech[] = {"%1", "FallBackE"};
        };
        class Version2 {
            text = "$STR_A3___1___Regroup";
            speech[] = {"%1", "ReturnToFormationE"};
        };
        class Version3 {
            text = "$STR_A3___1___Regroup";
            speech[] = {"%1", "FormOnMeE"};
        };
        class Version4 {
            text = "$STR_A3___1___Regroup";
            speech[] = {"%1", "GetBackE"};
        };
        class Version5 {
            text = "$STR_A3___1___Regroup";
            speech[] = {"%1", "StayInFormationE"};
        };
        class Version6 {
            text = "$STR_A3___1___Regroup";
            speech[] = {"%1", "RegroupE"};
        };
    };
    class SentCmdFollow: SentCmdFollow {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Join_group____2_1";
            speech[] = {"%1.1", "Follow", "%2.1"};
        };
    };
    class SentCmdAttack: SentCmdAttack {
        gesture = "GestureAttack";
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1___Engage";
            speech[] = {"%1.1", "obj_target", "%2", "ExecuteAction"};
        };
    };
    class SentAttackNoTarget: SentAttackNoTarget {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1___Engage";
            speech[] = {"%1.1", "AttackE"};
        };
    };
    class SentCmdFire: SentCmdFire {
        gesture = "GestureAttack";
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1___Engage";
            speech[] = {"%1.1", "obj_target", "%2", "fireatwill"};
        };
    };
    class SentCmdGetIn: SentCmdGetIn {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Get_in";
            speech[] = {"%1.1", "GetIn", "%2"};
        };
    };
    class SentCmdGetInCommander: SentCmdGetInCommander {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Get_in___Commander";
            speech[] = {"%1.1", "%2", "Commander"};
        };
    };
    class SentCmdGetInDriver: SentCmdGetInDriver {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Get_in___Driver";
            speech[] = {"%1.1", "%2", "Driver"};
        };
    };
    class SentCmdGetInPilot: SentCmdGetInPilot {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Get_in___Pilot";
            speech[] = {"%1.1", "%2", "Pilot"};
        };
    };
    class SentCmdGetInGunner: SentCmdGetInGunner {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Get_in___Gunner";
            speech[] = {"%1.1", "%2", "Gunner"};
        };
    };
    class SentCmdGetInCargo: SentCmdGetInCargo {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Get_in___Passenger";
            speech[] = {"%1.1", "GetIn", "%2"};
        };
    };
    class SentCmdSwitchToDriver: SentCmdSwitchToDriver {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Switch_to_driver";
            speech[] = {};
        };
    };
    class SentCmdSwitchToGunner: SentCmdSwitchToGunner {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Switch_to_gunner";
            speech[] = {};
        };
    };
    class SentCmdSwitchToCommander: SentCmdSwitchToCommander {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Switch_to_commander";
            speech[] = {};
        };
    };
    class SentCmdSwitchToCargo: SentCmdSwitchToCargo {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Switch_to_cargo";
            speech[] = {};
        };
    };
    class SentCmdGetOut: SentCmdGetOut {
        versions[] = {"Version1", 0.5, "Version2", 0.5};
        class Version1 {
            text = "$STR_A3___1_1___Dismount";
            speech[] = {"%1.1", "Dismount"};
        };
        class Version2 {
            text = "$STR_A3___1_1___Dismount";
            speech[] = {"%1.1", "Disembark"};
        };
    };
    class SentCmdStop: SentCmdStop {
        versions[] = {"Version1", 0.5, "Version2", 0.5};
        class Version1 {
            text = "$STR_A3___1_1___Stop";
            speech[] = {"%1.1", "HaltE"};
            gesture = "gestureFreeze";
        };
        class Version2 {
            text = "$STR_A3___1_1___Stop";
            speech[] = {"%1.1", "StopE"};
            gesture = "gestureFreeze";
        };
    };
    class SentCmdExpect: SentCmdExpect {
        versions[] = {"Version1", 0.5, "Version2", 0.5};
        class Version1 {
            text = "$STR_A3___1_1___Stop";
            speech[] = {"%1.1", "StayThere"};
        };
        class Version2 {
            text = "$STR_A3___1_1___Stop";
            speech[] = {"%1.1", "WaitForMe"};
        };
    };
    class SentCmdHide: SentCmdHide {
        versions[] = {"Version1", 0.5, "Version2", 0.3, "Version3", 0.2};
        class Version1 {
            text = "$STR_A3___1___Take_cover";
            speech[] = {"%1.1", "TakeCoverE"};
            gesture = "gestureCover";
        };
        class Version2 {
            text = "$STR_A3___1___Take_cover";
            speech[] = {"%1.1", "HideE"};
            gesture = "gestureCover";
        };
        class Version3 {
            text = "$STR_A3___1___Take_cover";
            speech[] = {"%1.1", "ConcealYourSelfE"};
            gesture = "gestureCover";
        };
    };
    class SentCmdDismiss: SentCmdDismiss {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "";
            speech[] = {};
        };
    };
    class SentNotifyAttack: SentNotifyAttack {
        versions[] = {"Version1", 0.4, "Version2", 0.6};
        class Version1 {
            text = "$STR_A3_Engaging____2";
            speech[] = {"Copy"};
        };
        class Version2 {
            text = "$STR_A3_Engaging____2";
            speech[] = {"IamAttackingTarget"};
        };
    };
    class SentNotifyAttackSubgroup: SentNotifyAttack {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___3_1___Engaging____2";
            speech[] = {"%3.1", "Copy"};
        };
    };
    class SentNotifySupport: SentNotifySupport {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3___1_1___Supporting";
            speech[] = {"%1.1", "Supporting"};
        };
    };
    class SentConfirmMove: SentConfirmMove {
        versions[] = {
            "Version1",
            0.3,
            "Version2",
            0.3,
            "Version3",
            0.2,
            "Version4",
            0.2
        };
        class Version1 {
            text = "$STR_A3_Copy";
            speech[] = {"HC_Affirmative"};
            gesture = "gestureYes";
        };
        class Version2 {
            text = "$STR_A3_Copy";
            speech[] = {"Copy"};
        };
        class Version3 {
            text = "$STR_A3_Copy";
            speech[] = {"Understood"};
            gesture = "gestureYes";
        };
        class Version4 {
            text = "$STR_A3_Copy";
            speech[] = {"ImOnIt"};
            gesture = "gestureYes";
        };
    };
    class SentConfirmAttack: SentConfirmAttack {
        versions[] = {
            "Version1",
            0.2,
            "Version2",
            0.2,
            "Version3",
            0.2,
            "Version4",
            0.2,
            "Version5",
            0.2
        };
        class Version1 {
            text = "$STR_A3_Copy";
            speech[] = {"Roger"};
            gesture = "gestureYes";
        };
        class Version2 {
            text = "$STR_A3_Copy";
            speech[] = {"ImOnIt"};
            gesture = "gestureYes";
        };
        class Version3 {
            text = "$STR_A3_Copy";
            speech[] = {"Copy"};
            gesture = "gestureYes";
        };
        class Version4 {
            text = "$STR_A3_Copy";
            speech[] = {"IAttack"};
            gesture = "gestureYes";
        };
        class Version5 {
            text = "$STR_A3_Copy";
            speech[] = {"IamAttackingTarget"};
            gesture = "gestureYes";
        };
    };
    class SentConfirmOther: SentConfirmOther {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Copy";
            speech[] = {"Roger"};
            gesture = "gestureYes";
        };
    };
    class SelectVehicleMoveSentence: SelectVehicleMoveSentence {
        sentences[] = {"VehicleMoveRecipientsRelative", 1};
    };
    class VehicleMoveGroupRelative: VehicleMoveGroupRelative {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3__mUNIT___Move____mGRPDIS_ABS____mGRPDIR_1";
            speech[] = {"XMIT", "Move", "%10", "%9.101"};
            gesture = "gestureGo";
        };
    };
    class VehicleMoveRecipientsRelative: VehicleMoveRecipientsRelative {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3__mUNIT___Move____mGRPDIS_ABS____mGRPDIR_1";
            speech[] = {"XMIT", "Move", "%10", "%9.101"};
            gesture = "gestureGo";
        };
    };
    class VehicleMoveToGrid: VehicleMoveToGrid {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3__mUNIT___Move___Grid___mGRID";
            speech[] = {"XMIT", "MoveToPos", "%1"};
            gesture = "gestureGoB";
        };
        class Version2 {
            text = "$STR_A3__mUNIT___Move___Grid___mGRID";
            speech[] = {"XMIT", "grid", "%1", "Advance"};
            gesture = "gestureGo";
        };
    };
    class VehicleMoveToObject: VehicleMoveToObject {
        versions[] = {"Version1", 0.8, "Version2", 0.2};
        class Version1 {
            text = "$STR_A3__mUNIT___Move___Grid___mGRID";
            speech[] = {"XMIT", "GoTo", "%7"};
            gesture = "gestureGo";
        };
        class Version2 {
            text = "$STR_A3__mUNIT___Move___Grid___mGRID";
            speech[] = {"XMIT", "GoDir", "%7", "%8.2"};
            gesture = "gestureGoB";
        };
    };
    class VehicleMoveLocationRelative: VehicleMoveLocationRelative {
        versions[] = {
            "Version1",
            "1 - InsideLocation",
            "Version2",
            "InsideLocation"
        };
        class Version1 {
            text = "$STR_A3__mUNIT___Move___Grid___mGRID";
            speech[] = {"XMIT", "Move", "%4.101", "%5", "of", "%6"};
        };
        class Version2 {
            text = "$STR_A3__mUNIT___Move___Grid___mGRID";
            speech[] = {"XMIT", "MoveTo", "%6"};
        };
    };
    class VehicleWatchTgt: VehicleWatchTgt {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Watch____1";
            speech[] = {"XMIT", "Watch", "%1"};
        };
    };
    class VehicleWatchPos: VehicleWatchPos {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Observe____1____2";
            speech[] = {"XMIT", "Watch", "%1", "%2"};
        };
    };
    class VehicleJoin: VehicleJoin {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Keep_formation";
            speech[] = {"XMIT", "StayInFormationE"};
        };
    };
    class VehicleFire: VehicleFire {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Engage____1____6_ABS____7_CLCK";
            speech[] = {"XMIT", "obj_target", "%1", "fireatwill"};
        };
    };
    class VehicleTarget: VehicleTarget {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Target____1____6_ABS____7_CLCK";
            speech[] = {"XMIT", "obj_target", "%1", "direction", "%2"};
        };
    };
    class VehicleNoTarget: VehicleNoTarget {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Cancel_target";
            speech[] = {"XMIT", "NoTarget"};
        };
    };
    class VehicleCeaseFire: VehicleCeaseFire {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Cease_fire";
            speech[] = {"XMIT", "CeaseFire"};
        };
    };
    class VehicleForward: VehicleForward {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Forward";
            speech[] = {"XMIT", "Forward"};
        };
    };
    class VehicleStop: VehicleStop {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Stop";
            speech[] = {"XMIT", "Halt"};
        };
    };
    class VehicleBackward: VehicleBackward {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Backward";
            speech[] = {"XMIT", "Reverse"};
        };
    };
    class VehicleFaster: VehicleFaster {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Fast";
            speech[] = {"XMIT", "Fast"};
        };
    };
    class VehicleSlower: VehicleSlower {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Slow";
            speech[] = {"XMIT", "Slow"};
        };
    };
    class VehicleLeft: VehicleLeft {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Left";
            speech[] = {"XMIT", "Left"};
        };
    };
    class VehicleRight: VehicleRight {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Right";
            speech[] = {"XMIT", "Right"};
        };
    };
    class VehicleManualFire: VehicleManualFire {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Manual_fire";
            speech[] = {"XMIT", "SwitchingtoManualFire"};
        };
    };
    class VehicleCancelManualFire: VehicleCancelManualFire {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Cancel_manual_fire";
            speech[] = {"XMIT", "DisablingManualFire"};
        };
    };
    class VehicleDirectFire: VehicleDirectFire {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Fire";
            speech[] = {"XMIT", "Fire"};
        };
    };
    class VehicleLoad: VehicleLoad {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Load____1";
            speech[] = {"%1"};
        };
    };
    class VehicleLoadMagazine: VehicleLoadMagazine {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Load____1";
            speech[] = {"%1"};
        };
    };
    class VehicleAzimut: VehicleAzimut {
        versions[] = {"Version1", 1};
        class Version1 {
            text = "$STR_A3_Watch____1";
            speech[] = {"%1"};
        };
    };
    class VehicleFireFailed: VehicleFireFailed {
        versions[] = {"Version1", 0.5, "Version2", 0.5};
        class Version1 {
            text = "$STR_A3_Cannot_fire";
            speech[] = {"Negative"};
        };
        class Version2 {
            text = "$STR_A3_Cannot_fire";
            speech[] = {"CannotFire"};
        };
    };
    class ClausePosition: ClausePosition {
        text = "$STR_SENT_CLAUSE_POSITION";
        speech[] = {"%1", "%2"};
    };
    class ClausePositionNear: ClausePositionNear {
        text = "$STR_SENT_CLAUSE_POSITION_NEAR";
        speech[] = {"that", "%1", "at", "%2"};
    };
    class Report;
    class SentCovering: CombatShout {
        versions[] = {
            "Version1",
            0.25,
            "Version2",
            0.25,
            "Version3",
            0.05,
            "Version4",
            0.1,
            "Version5",
            0.1,
            "Version6",
            0.2
        };
        class Version1 {
            text = "";
            speech[] = {"C_GoImCoveringE"};
        };
        class Version2 {
            text = "";
            speech[] = {"C_GoILLCoverE"};
        };
        class Version3 {
            text = "";
            speech[] = {"C_CoveringFireE"};
        };
        class Version4 {
            text = "";
            speech[] = {"C_CoveringGoE"};
        };
        class Version5 {
            text = "";
            speech[] = {"C_MoveOutE"};
        };
        class Version6 {
            text = "";
            speech[] = {"C_GoE"};
        };
        class Version7 {
            text = "";
            speech[] = {"C_MoveE"};
        };
    };
    class SentCoverMe: CombatShout {
        versions[] = {
            "Version2",
            0.3,
            "Version3",
            0.2,
            "Version4",
            0.3,
            "Version5",
            0.2
        };
        class Version1 {
            text = "";
            speech[] = {"C_EngagingE"};
        };
        class Version2 {
            text = "";
            speech[] = {"C_CoverMeE"};
        };
        class Version3 {
            text = "";
            speech[] = {"C_OKLetsGo"};
        };
        class Version4 {
            text = "";
            speech[] = {"C_MovingE"};
        };
        class Version5 {
            text = "";
            speech[] = {"C_GoingE"};
        };
    };
    class SentSuppressing: CombatShout {
        versions[] = {
            "Version1",
            0.4,
            "Version2",
            0.15,
            "Version3",
            0.35,
            "Version4",
            0.1
        };
        class Version1 {
            text = "";
            speech[] = {"C_SuppresiveFireE"};
        };
        class Version2 {
            text = "";
            speech[] = {"C_HangOnILLSuppressE"};
        };
        class Version3 {
            text = "";
            speech[] = {"C_SuppressingE"};
        };
        class Version4 {
            text = "";
            speech[] = {"C_OpenUpE"};
        };
    };
    class SentReloading: CombatShout {
        versions[] = {
            "Version1",
            0.4,
            "Version2",
            0.3,
            "Version3",
            0.05,
            "Version4",
            0.25
        };
        class Version1 {
            text = "";
            speech[] = {"C_ReloadingE"};
        };
        class Version2 {
            text = "";
            speech[] = {"C_IgottaReloadE"};
        };
        class Version3 {
            text = "";
            speech[] = {"C_CoverMeWhileIReloadE"};
        };
        class Version4 {
            text = "";
            speech[] = {"C_ChangingMagsE"};
        };
    };
    class SentThrowingGrenade: CombatShout {
        versions[] = {"Version1", 0.5, "Version2", 0.3, "Version3", 0.2};
        class Version1 {
            text = "";
            speech[] = {"C_FireInTheHoleE"};
        };
        class Version2 {
            text = "";
            speech[] = {"C_ThrowingFragE"};
        };
        class Version3 {
            text = "";
            speech[] = {"C_FragOutE"};
        };
    };
    class SentThrowingSmoke: CombatShout {
        versions[] = {"Version1", 0.5, "Version2", 0.5};
        class Version1 {
            text = "";
            speech[] = {"C_ThrowingSmokeNowE"};
        };
        class Version2 {
            text = "";
            speech[] = {"C_SmokeOutE"};
        };
    };
    class SentIncomingGrenade: CombatShout {
        versions[] = {"Version1", 0.7, "Version2", 0.3};
        class Version1 {
            text = "";
            speech[] = {"C_GrenadeE"};
        };
        class Version2 {
            text = "";
            speech[] = {"C_WatchForGrenadeE"};
        };
    };
    class SentEnemyContact: CombatShout {
        versions[] = {
            "Version1",
            0.25,
            "Version2",
            0.1,
            "Version3",
            0.05,
            "Version4",
            0.15,
            "Version5",
            0.1,
            "Version6",
            0.2,
            "Version7",
            0.1,
            "Version8",
            0.05
        };
        class Version1 {
            text = "";
            speech[] = {"C_ContactE"};
        };
        class Version2 {
            text = "";
            speech[] = {"C_DidYouSeeThatQ"};
        };
        class Version3 {
            text = "";
            speech[] = {"C_FuckSawThatQ"};
        };
        class Version4 {
            text = "";
            speech[] = {"C_TargetE"};
        };
        class Version5 {
            text = "";
            speech[] = {"C_GotATargetE"};
        };
        class Version6 {
            text = "";
            speech[] = {"C_HostilesE"};
        };
        class Version7 {
            text = "";
            speech[] = {"C_RightThereE"};
        };
        class Version8 {
            text = "";
            speech[] = {"C_TakeHimOutE"};
        };
    };
    class SentEndangered: CombatShout {
        versions[] = {
            "Version1",
            0.2,
            "Version2",
            0.15,
            "Version3",
            0.2,
            "Version4",
            0.15,
            "Version5",
            0.1,
            "Version6",
            0.05,
            "Version7",
            0.05,
            "Version8",
            0.1
        };
        class Version1 {
            text = "";
            speech[] = {"C_TakeCoverE"};
        };
        class Version2 {
            text = "";
            speech[] = {"C_ShitE"};
        };
        class Version3 {
            text = "";
            speech[] = {"C_GetDownE"};
        };
        class Version4 {
            text = "";
            speech[] = {"C_HitTheDeckE"};
        };
        class Version5 {
            text = "";
            speech[] = {"C_WhatTheFuckQ"};
        };
        class Version6 {
            text = "";
            speech[] = {"C_WhatTheHellQ"};
        };
        class Version7 {
            text = "";
            speech[] = {"C_WhatTheFuckWasThatQ"};
        };
        class Version8 {
            text = "";
            speech[] = {"C_CheckThatOut"};
        };
    };
    class SentRouted: CombatShout {
        versions[] = {"Version1", 0.5, "Version2", 0.5};
        class Version1 {
            text = "";
            speech[] = {"C_HolyShitE"};
        };
        class Version2 {
            text = "";
            speech[] = {"C_OhJesusE"};
        };
    };
    class SentWitnessDeadBody: CombatShout {
        versions[] = {
            "Version1",
            0.05,
            "Version2",
            0.3,
            "Version3",
            0.05,
            "Version4",
            0.2,
            "Version5",
            0.15,
            "Version6",
            0.15,
            "Version7",
            0.1
        };
        class Version1 {
            text = "";
            speech[] = {"C_WhatAView"};
        };
        class Version2 {
            text = "";
            speech[] = {"C_WhatAMess"};
        };
        class Version3 {
            text = "";
            speech[] = {"C_WishIHadntSeeThat"};
        };
        class Version4 {
            text = "";
            speech[] = {"C_ThatSucks"};
        };
        class Version5 {
            text = "";
            speech[] = {"C_MotherfuckerE"};
        };
        class Version6 {
            text = "";
            speech[] = {"C_SweetJesusE"};
        };
        class Version7 {
            text = "";
            speech[] = {"C_SeeThatQE"};
        };
    };
    class SentWitnessKilled: CombatShout {
        versions[] = {
            "Version1",
            0.2,
            "Version2",
            0.1,
            "Version3",
            0.1,
            "Version4",
            0.1,
            "Version5",
            0.05,
            "Version6",
            0.1,
            "Version7",
            0.1,
            "Version8",
            0.1,
            "Version9",
            0.15
        };
        class Version1 {
            text = "";
            speech[] = {"C_ManDownE"};
        };
        class Version2 {
            text = "";
            speech[] = {"C_FuckHesDownE"};
        };
        class Version3 {
            text = "";
            speech[] = {"C_HesDeadE"};
        };
        class Version4 {
            text = "";
            speech[] = {"C_HesGoneE"};
        };
        class Version5 {
            text = "";
            speech[] = {"C_WeLostHimE"};
        };
        class Version6 {
            text = "";
            speech[] = {"C_TheyGotHimE"};
        };
        class Version7 {
            text = "";
            speech[] = {"C_NoE"};
        };
        class Version8 {
            text = "";
            speech[] = {"C_FuckE"};
        };
        class Version9 {
            text = "";
            speech[] = {"C_ManHitE"};
        };
    };
    class SentCombatGeneric: CombatShout {
        versions[] = {
            "Version1",
            0.2,
            "Version2",
            0.15,
            "Version3",
            0.2,
            "Version4",
            0.15
        };
        class Version1 {
            text = "";
            speech[] = {"C_ScanYourSector"};
        };
        class Version2 {
            text = "";
            speech[] = {"C_CarefulJustBeCareful"};
        };
        class Version3 {
            text = "";
            speech[] = {"C_CheckSectors"};
        };
        class Version4 {
            text = "";
            speech[] = {"C_FocusE"};
        };
    };
    class SentCheering: CombatShout {
        versions[] = {
            "Version1",
            0.25,
            "Version2",
            0.25,
            "Version3",
            0.25,
            "Version4",
            0.25
        };
        class Version1 {
            text = "";
            speech[] = {"C_woohoo1"};
        };
        class Version2 {
            text = "";
            speech[] = {"C_woohoo2"};
        };
        class Version3 {
            text = "";
            speech[] = {"C_woohoo3"};
        };
        class Version4 {
            text = "";
            speech[] = {"C_woohoo4"};
        };
    };
    class SentScreaming: CombatShout {
        versions[] = {
            "Version1",
            0.2,
            "Version2",
            0.15,
            "Version3",
            0.2,
            "Version4",
            0.15
        };
        class Version1 {
            text = "";
            speech[] = {"C_scream1"};
        };
        class Version2 {
            text = "";
            speech[] = {"C_scream2"};
        };
        class Version3 {
            text = "";
            speech[] = {"C_scream3"};
        };
        class Version4 {
            text = "";
            speech[] = {"C_scream4"};
        };
    };
    class HC_Select {
        versions[] = {
            "Version1",
            0.33,
            "Version2",
            0.33,
            "Version3",
            0.34
        };
        class Version1 {
            text = "";
            speech[] = {"Receive1"};
        };
        class Version2 {
            text = "";
            speech[] = {"Receive2"};
        };
        class Version3 {
            text = "";
            speech[] = {"Receive3"};
        };
    };
    class HC_Move {
        versions[] = {
            "Version1",
            1,
            "Version2",
            1,
            "Version3",
            1,
            "Version4",
            1
        };
        class Version1 {
            text = "";
            speech[] = {"HC_Advancing"};
        };
        class Version2 {
            text = "";
            speech[] = {"HC_Affirmative"};
        };
        class Version3 {
            text = "";
            speech[] = {"HC_MovingToPosition"};
        };
        class Version4 {
            text = "";
            speech[] = {"HC_OrderReceived"};
        };
    };
    class HC_Attack {
        versions[] = {
            "Version1",
            1,
            "Version2",
            1,
            "Version3",
            1,
            "Version4",
            1,
            "Version5",
            1,
            "Version6",
            1
        };
        class Version1 {
            text = "";
            speech[] = {"HC_Advancing"};
        };
        class Version2 {
            text = "";
            speech[] = {"HC_Affirmative"};
        };
        class Version3 {
            text = "";
            speech[] = {"HC_OrderReceived"};
        };
        class Version4 {
            text = "";
            speech[] = {"HC_EngagingE"};
        };
        class Version5 {
            text = "";
            speech[] = {"HC_AssaultingEnemyPosition"};
        };
        class Version6 {
            text = "";
            speech[] = {"HC_AttackingE"};
        };
    };
    class Arguments: Arguments {
        class Direction: Direction {
            class Compass1 {
                class 0 {
                    text = "$STR_Q_NORTH";
                    speech[] = {"North"};
                };
                class 45 {
                    text = "$STR_Q_NORTH_EAST";
                    speech[] = {"NorthEast"};
                };
                class 90 {
                    text = "$STR_Q_EAST";
                    speech[] = {"East"};
                };
                class 135 {
                    text = "$STR_Q_SOUTH_EAST";
                    speech[] = {"SouthEast"};
                };
                class 180 {
                    text = "$STR_Q_SOUTH";
                    speech[] = {"South"};
                };
                class 225 {
                    text = "$STR_Q_SOUTH_WEST";
                    speech[] = {"SouthWest"};
                };
                class 270 {
                    text = "$STR_Q_WEST";
                    speech[] = {"West"};
                };
                class 315 {
                    text = "$STR_Q_NORTH_WEST";
                    speech[] = {"NorthWest"};
                };
            };
            class Compass2 {
                class 0 {
                    text = "$STR_A3_Arguments_Direction_Compass2_0_0";
                    speech[] = {"bearing000"};
                };
                class 15 {
                    text = "$STR_A3_Arguments_Direction_Compass2_15_0";
                    speech[] = {"bearing015"};
                };
                class 30 {
                    text = "$STR_A3_Arguments_Direction_Compass2_30_0";
                    speech[] = {"bearing030"};
                };
                class 45 {
                    text = "$STR_A3_Arguments_Direction_Compass2_45_0";
                    speech[] = {"bearing045"};
                };
                class 60 {
                    text = "$STR_A3_Arguments_Direction_Compass2_60_0";
                    speech[] = {"bearing060"};
                };
                class 75 {
                    text = "$STR_A3_Arguments_Direction_Compass2_75_0";
                    speech[] = {"bearing075"};
                };
                class 90 {
                    text = "$STR_A3_Arguments_Direction_Compass2_90_0";
                    speech[] = {"bearing090"};
                };
                class 105 {
                    text = "$STR_A3_Arguments_Direction_Compass2_105_0";
                    speech[] = {"bearing105"};
                };
                class 120 {
                    text = "$STR_A3_Arguments_Direction_Compass2_120_0";
                    speech[] = {"bearing120"};
                };
                class 135 {
                    text = "$STR_A3_Arguments_Direction_Compass2_135_0";
                    speech[] = {"bearing135"};
                };
                class 150 {
                    text = "$STR_A3_Arguments_Direction_Compass2_150_0";
                    speech[] = {"bearing150"};
                };
                class 165 {
                    text = "$STR_A3_Arguments_Direction_Compass2_165_0";
                    speech[] = {"bearing165"};
                };
                class 180 {
                    text = "$STR_A3_Arguments_Direction_Compass2_180_0";
                    speech[] = {"bearing180"};
                };
                class 195 {
                    text = "$STR_A3_Arguments_Direction_Compass2_195_0";
                    speech[] = {"bearing195"};
                };
                class 210 {
                    text = "$STR_A3_Arguments_Direction_Compass2_210_0";
                    speech[] = {"bearing210"};
                };
                class 225 {
                    text = "$STR_A3_Arguments_Direction_Compass2_225_0";
                    speech[] = {"bearing225"};
                };
                class 240 {
                    text = "$STR_A3_Arguments_Direction_Compass2_240_0";
                    speech[] = {"bearing240"};
                };
                class 255 {
                    text = "$STR_A3_Arguments_Direction_Compass2_255_0";
                    speech[] = {"bearing255"};
                };
                class 270 {
                    text = "$STR_A3_Arguments_Direction_Compass2_270_0";
                    speech[] = {"bearing270"};
                };
                class 285 {
                    text = "$STR_A3_Arguments_Direction_Compass2_285_0";
                    speech[] = {"bearing285"};
                };
                class 300 {
                    text = "$STR_A3_Arguments_Direction_Compass2_300_0";
                    speech[] = {"bearing300"};
                };
                class 315 {
                    text = "$STR_A3_Arguments_Direction_Compass2_315_0";
                    speech[] = {"bearing315"};
                };
                class 330 {
                    text = "$STR_A3_Arguments_Direction_Compass2_330_0";
                    speech[] = {"bearing330"};
                };
                class 345 {
                    text = "$STR_A3_Arguments_Direction_Compass2_345_0";
                    speech[] = {"bearing345"};
                };
                class 360 {
                    text = "$STR_A3_Arguments_Direction_Compass2_360_0";
                    speech[] = {"bearing360"};
                };
            };
            class Relative1 {
                class 0 {
                    text = "$STR_A3_Arguments_Direction_Relative1_0_0";
                    speech[] = {"InFrontOf"};
                };
                class 90 {
                    text = "$STR_A3_Arguments_Direction_Relative1_90_0";
                    speech[] = {"RightOf"};
                };
                class 180 {
                    text = "$STR_A3_Arguments_Direction_Relative1_270_0";
                    speech[] = {"Behind"};
                };
                class 270 {
                    text = "$STR_A3_Arguments_Direction_Relative1_180_0";
                    speech[] = {"LeftOf"};
                };
            };
            class Relative2 {
                class 0 {
                    text = "$STR_A3_Arguments_Direction_Relative1_0_0";
                    speech[] = {"Front"};
                };
                class 90 {
                    text = "$STR_A3_Arguments_Direction_Relative1_90_0";
                    speech[] = {"Right"};
                };
                class 180 {
                    text = "$STR_A3_Arguments_Direction_Relative1_270_0";
                    speech[] = {"Rear"};
                };
                class 270 {
                    text = "$STR_A3_Arguments_Direction_Relative1_180_0";
                    speech[] = {"Left"};
                };
            };
            class Relative3 {
                class 0 {
                    text = "$STR_A3_Arguments_Direction_Relative1_0_0";
                    speech[] = {"Front"};
                };
                class 90 {
                    text = "$STR_A3_Arguments_Direction_Relative1_90_0";
                    speech[] = {"RightFlank"};
                };
                class 180 {
                    text = "$STR_A3_Arguments_Direction_Relative1_270_0";
                    speech[] = {"Rear"};
                };
                class 270 {
                    text = "$STR_A3_Arguments_Direction_Relative1_180_0";
                    speech[] = {"LeftFlank"};
                };
            };
        };
    };
    class CuratorWaypointPlaced {
        versions[] = {
            "Normal_OnTheWay",
            "(1 - Stealth) * 1",
            "Stealth_OnTheWay",
            "(Stealth) * 1",
            "Normal_Confirmation1",
            "(1 - Stealth) * 1",
            "Stealth_Confirmation1",
            "(Stealth) * 1",
            "Normal_Confirmation2",
            "(1 - Stealth) * 1",
            "Stealth_Confirmation2",
            "(Stealth) * 1"
        };
        class Normal_OnTheWay {
            gesture = "";
            speech[] = {"XMIT", "OnTheWay"};
            text = "";
            wordsClass = "Normal";
        };
        class Stealth_OnTheWay {
            gesture = "";
            speech[] = {"XMIT", "OnTheWay"};
            text = "";
            wordsClass = "Stealth";
        };
        class Normal_Confirmation1 {
            gesture = "";
            speech[] = {"XMIT", "HC_MovingToPosition"};
            text = "";
            wordsClass = "Normal";
        };
        class Stealth_Confirmation1 {
            gesture = "";
            speech[] = {"XMIT", "HC_MovingToPosition"};
            text = "";
            wordsClass = "Stealth";
        };
        class Normal_Confirmation2 {
            gesture = "";
            speech[] = {"XMIT", "HC_Affirmative"};
            text = "";
            wordsClass = "Normal";
        };
        class Stealth_Confirmation2 {
            gesture = "";
            speech[] = {"XMIT", "HC_Affirmative"};
            text = "";
            wordsClass = "Stealth";
        };
    };
    class CuratorWaypointPlacedAttack {
        versions[] = {
            "Normal_CopyIAmOnHim",
            "(1 - Stealth) * 1",
            "Stealth_CopyIAmOnHim",
            "(Stealth) * 1",
            "Normal_LockAndLoad",
            "(1 - Stealth) * 1",
            "Stealth_LockAndLoad",
            "(Stealth) * 1",
            "Normal_TargetAcquired",
            "(1 - Stealth) * 1",
            "Stealth_TargetAcquired",
            "(Stealth) * 1",
            "Normal_TargetInSight",
            "(1 - Stealth) * 1",
            "Stealth_TargetInSight",
            "(Stealth) * 1"
        };
        class Normal_CopyIAmOnHim {
            gesture = "";
            speech[] = {"XMIT", "ImOnIt"};
            text = "";
            wordsClass = "Normal";
        };
        class Stealth_CopyIAmOnHim {
            gesture = "";
            speech[] = {"XMIT", "ImOnIt"};
            text = "";
            wordsClass = "Stealth";
        };
        class Normal_LockAndLoad {
            gesture = "";
            speech[] = {"XMIT", "HC_EngagingE"};
            text = "";
            wordsClass = "Normal";
        };
        class Stealth_LockAndLoad {
            gesture = "";
            speech[] = {"XMIT", "HC_EngagingE"};
            text = "";
            wordsClass = "Stealth";
        };
        class Normal_TargetAcquired {
            gesture = "";
            speech[] = {"XMIT", "TargetAcquired"};
            text = "";
            wordsClass = "Normal";
        };
        class Stealth_TargetAcquired {
            gesture = "";
            speech[] = {"XMIT", "TargetAcquired"};
            text = "";
            wordsClass = "Stealth";
        };
        class Normal_TargetInSight {
            gesture = "";
            speech[] = {"XMIT", "TargetInSight"};
            text = "";
            wordsClass = "Normal";
        };
        class Stealth_TargetInSight {
            gesture = "";
            speech[] = {"XMIT", "TargetInSight"};
            text = "";
            wordsClass = "Stealth";
        };
    };
    class CuratorObjectPlaced {
        versions[] = {
            "Normal_AwaitingOrders",
            "(1 - Stealth) * 1",
            "Stealth_AwaitingOrders",
            "(Stealth) * 1",
            "Normal_IAmReady",
            "(1 - Stealth) * 1",
            "Stealth_IAmReady",
            "(Stealth) * 1",
            "Normal_ReadyForOrders",
            "(1 - Stealth) * 1",
            "Stealth_ReadyForOrders",
            "(Stealth) * 1",
            "Normal_StandingBy",
            "(1 - Stealth) * 1",
            "Stealth_StandingBy",
            "(Stealth) * 1",
            "Normal_Waiting",
            "(1 - Stealth) * 1",
            "Stealth_Waiting",
            "(Stealth) * 1"
        };
        class Normal_AwaitingOrders {
            gesture = "";
            speech[] = {"XMIT", "AwaitingOrders"};
            text = "";
            wordsClass = "Normal";
        };
        class Stealth_AwaitingOrders {
            gesture = "";
            speech[] = {"XMIT", "AwaitingOrders"};
            text = "";
            wordsClass = "Stealth";
        };
        class Normal_IAmReady {
            gesture = "";
            speech[] = {"XMIT", "ReadyForOrders"};
            text = "";
            wordsClass = "Normal";
        };
        class Stealth_IAmReady {
            gesture = "";
            speech[] = {"XMIT", "ReadyForOrders"};
            text = "";
            wordsClass = "Stealth";
        };
        class Normal_ReadyForOrders {
            gesture = "";
            speech[] = {"XMIT", "Ready"};
            text = "";
            wordsClass = "Normal";
        };
        class Stealth_ReadyForOrders {
            gesture = "";
            speech[] = {"XMIT", "Ready"};
            text = "";
            wordsClass = "Stealth";
        };
        class Normal_StandingBy {
            gesture = "";
            speech[] = {"XMIT", "StandingBy"};
            text = "";
            wordsClass = "Normal";
        };
        class Stealth_StandingBy {
            gesture = "";
            speech[] = {"XMIT", "StandingBy"};
            text = "";
            wordsClass = "Stealth";
        };
        class Normal_Waiting {
            gesture = "";
            speech[] = {"XMIT", "Waiting"};
            text = "";
            wordsClass = "Normal";
        };
        class Stealth_Waiting {
            gesture = "";
            speech[] = {"XMIT", "Waiting"};
            text = "";
            wordsClass = "Stealth";
        };
    };
    class curatorObjectDestroyed {
        versions[] = {
            "Normal_ScreamingE",
            "(1 - Stealth) * 1",
            "Stealth_ScreamingE",
            "(Stealth) * 1"
        };
        class Normal_ScreamingE {
            gesture = "";
            speech[] = {"XMIT", "ScreamingE"};
            text = "";
            wordsClass = "Normal";
        };
        class Stealth_ScreamingE {
            gesture = "";
            speech[] = {"XMIT", "ScreamingE"};
            text = "";
            wordsClass = "Stealth";
        };
    };
    class curatorModuleCAS {
        versions[] = {
            "Normal_RequestAcknowledgedSGCASBombing",
            "(1 - Stealth) * 1",
            "Stealth_RequestAcknowledgedSGCASBombing",
            "(Stealth) * 1",
            "Normal_RequestAcknowledgedSGCASHelicopter",
            "(1 - Stealth) * 1",
            "Stealth_RequestAcknowledgedSGCASHelicopter",
            "(Stealth) * 1"
        };
        class Normal_RequestAcknowledgedSGCASBombing {
            gesture = "";
            speech[] = {"XMIT", "RequestAcknowledgedSGCASBombing"};
            text = "";
            wordsClass = "Normal";
        };
        class Stealth_RequestAcknowledgedSGCASBombing {
            gesture = "";
            speech[] = {"XMIT", "RequestAcknowledgedSGCASBombing"};
            text = "";
            wordsClass = "Stealth";
        };
        class Normal_RequestAcknowledgedSGCASHelicopter {
            gesture = "";
            speech[] = {"XMIT", "RequestAcknowledgedSGCASHelicopter"};
            text = "";
            wordsClass = "Normal";
        };
        class Stealth_RequestAcknowledgedSGCASHelicopter {
            gesture = "";
            speech[] = {"XMIT", "RequestAcknowledgedSGCASHelicopter"};
            text = "";
            wordsClass = "Stealth";
        };
    };
    class WordSeveral {
        sentences[] = {"WordSeveralDefault", 1};
    };
    class WordSeveralDefault {
        versions[] = {"WordSeveral_1", 1};
        class WordSeveral_1 {
            text = "Several";
            speech[] = {"Several"};
        };
    };
    class WordSingle {
        sentences[] = {"WordSingleDefault", 1};
    };
    class WordSingleDefault {
        versions[] = {"WordSingle_1", 1};
        class WordSingle_1 {
            text = "Single";
            speech[] = {"Single"};
        };
    };
    class WordNone {
        sentences[] = {"WordNoneDefault", 1};
    };
    class WordNoneDefault {
        versions[] = {"WordNone_1", 1};
        class WordNone_1 {
            text = "None";
            speech[] = {"None"};
        };
    };
    class WordSome {
        sentences[] = {"WordSomeDefault", 1};
    };
    class WordSomeDefault {
        versions[] = {"WordSome_1", 1};
        class WordSome_1 {
            text = "Some";
            speech[] = {"Some"};
        };
    };
    class WordALotOf {
        sentences[] = {"WordALotOfDefault", 1};
    };
    class WordALotOfDefault {
        versions[] = {"WordALotOf_1", 1};
        class WordALotOf_1 {
            text = "A Lot Of";
            speech[] = {"ALotOf"};
        };
    };
    class WordIndependent {
        sentences[] = {"WordIndependentDefault", 1};
    };
    class WordIndependentDefault {
        versions[] = {"WordIndependent_1", 1};
        class WordIndependent_1 {
            text = "Independent";
            speech[] = {"Independent"};
        };
    };
    class WordCivilian {
        sentences[] = {"WordCivilianDefault", 1};
    };
    class WordCivilianDefault {
        versions[] = {"WordCivilian_1", 1};
        class WordCivilian_1 {
            text = "Civilian";
            speech[] = {"Civilian"};
        };
    };
    class WordOfThem {
        sentences[] = {"WordOfThemDefault", 1};
    };
    class WordOfThemDefault {
        versions[] = {"WordOfThem_1", 1};
        class WordOfThem_1 {
            text = "of them";
            speech[] = {"OfThem"};
        };
    };
    class WordNear {
        sentences[] = {"WordNearDefault", 1};
    };
    class WordNearDefault {
        versions[] = {"WordNear_1", 1};
        class WordNear_1 {
            text = "near";
            speech[] = {"Near"};
        };
    };
    class WordNotFar {
        sentences[] = {"WordNotFarDefault", 1};
    };
    class WordNotFarDefault {
        versions[] = {"WordNotFar_1", 1};
        class WordNotFar_1 {
            text = "not far";
            speech[] = {"NotFar"};
        };
    };
    class WordFrom {
        sentences[] = {"WordFromDefault", 1};
    };
    class WordFromDefault {
        versions[] = {"WordFrom_1", 1};
        class WordFrom_1 {
            text = "from";
            speech[] = {"From"};
        };
    };
    class WordAround {
        sentences[] = {"WordAroundDefault", 1};
    };
    class WordAroundDefault {
        versions[] = {"WordAround_1", 1};
        class WordAround_1 {
            text = "around";
            speech[] = {"Around"};
        };
    };
    class WordHere {
        sentences[] = {"WordHereDefault", 1};
    };
    class WordHereDefault {
        versions[] = {"WordHere_1", 1};
        class WordHere_1 {
            text = "here";
            speech[] = {"Here"};
        };
    };
    class WordThere {
        sentences[] = {"WordThereDefault", 1};
    };
    class WordThereDefault {
        versions[] = {"WordThere_1", 1};
        class WordThere_1 {
            text = "there";
            speech[] = {"There"};
        };
    };
    class WordProbably {
        sentences[] = {"WordProbablyDefault", 1};
    };
    class WordProbablyDefault {
        versions[] = {"WordProbably_1", 1};
        class WordProbably_1 {
            text = "probably";
            speech[] = {"Probably"};
        };
    };
    class WordIsProbablyToThe {
        sentences[] = {"WordIsProbablyToTheDefault", 1};
    };
    class WordIsProbablyToTheDefault {
        versions[] = {"WordIsProbablyToThe_1", 1};
        class WordIsProbablyToThe_1 {
            text = "is probably to the";
            speech[] = {"IsProbablyToThe"};
        };
    };
    class WordJustNow {
        sentences[] = {"WordJustNowDefault", 1};
    };
    class WordJustNowDefault {
        versions[] = {"WordJustNow_1", 1};
        class WordJustNow_1 {
            text = "Just Now";
            speech[] = {"JustNow"};
        };
    };
    class WordAFewMinutesAgo {
        sentences[] = {"WordAFewMinutesAgoDefault", 1};
    };
    class WordAFewMinutesAgoDefault {
        versions[] = {"WordAFewMinutesAgo_1", 1};
        class WordAFewMinutesAgo_1 {
            text = "A few Minutes Ago";
            speech[] = {"AFewMinutesAgo"};
        };
    };
    class WordAFewHoursAgo {
        sentences[] = {"WordAFewHoursAgoDefault", 1};
    };
    class WordAFewHoursAgoDefault {
        versions[] = {"WordAFewHoursAgo_1", 1};
        class WordAFewHoursAgo_1 {
            text = "A Few Hours Ago";
            speech[] = {"AFewHoursAgo"};
        };
    };
    class WordToday {
        sentences[] = {"WordTodayDefault", 1};
    };
    class WordTodayDefault {
        versions[] = {"WordToday_1", 1};
        class WordToday_1 {
            text = "Today";
            speech[] = {"Today"};
        };
    };
    class WordYesterday {
        sentences[] = {"WordYesterdayDefault", 1};
    };
    class WordYesterdayDefault {
        versions[] = {"WordYesterday_1", 1};
        class WordYesterday_1 {
            text = "Yesterday";
            speech[] = {"Yesterday"};
        };
    };
    class WordSeveralDaysAgo {
        sentences[] = {"WordSeveralDaysAgoDefault", 1};
    };
    class WordSeveralDaysAgoDefault {
        versions[] = {"WordSeveralDaysAgo_1", 1};
        class WordSeveralDaysAgo_1 {
            text = "Several Days Ago";
            speech[] = {"SeveralDaysAgo"};
        };
    };
    class WordEnglishQ {
        sentences[] = {"WordEnglishQDefault", 1};
    };
    class WordEnglishQDefault {
        versions[] = {"WordEnglishQ_1", 1};
        class WordEnglishQ_1 {
            text = "English?";
            speech[] = {"EnglishQ"};
        };
    };
    class WordRussianQ {
        sentences[] = {"WordRussianQDefault", 1};
    };
    class WordRussianQDefault {
        versions[] = {"WordRussianQ_1", 1};
        class WordRussianQ_1 {
            text = "Russian?";
            speech[] = {"RussianQ"};
        };
    };
    class WordDidYouSeeAnythingRecentlyQ {
        sentences[] = {"WordDidYouSeeAnythingRecentlyQDefault", 1};
    };
    class WordDidYouSeeAnythingRecentlyQDefault {
        versions[] = {"WordDidYouSeeAnythingRecentlyQ_1", 1};
        class WordDidYouSeeAnythingRecentlyQ_1 {
            text = "Did you see anything recently?";
            speech[] = {"DidYouSeeAnythingRecentlyQ"};
        };
    };
    class WordYesISawSomething {
        sentences[] = {"WordYesISawSomethingDefault", 1};
    };
    class WordYesISawSomethingDefault {
        versions[] = {"WordYesISawSomething_1", 1};
        class WordYesISawSomething_1 {
            text = "Yes, I saw something";
            speech[] = {"YesISawSomething"};
        };
    };
    class WordNoIDidntSeeAnything {
        sentences[] = {"WordNoIDidntSeeAnythingDefault", 1};
    };
    class WordNoIDidntSeeAnythingDefault {
        versions[] = {"WordNoIDidntSeeAnything_1", 1};
        class WordNoIDidntSeeAnything_1 {
            text = "No, I didn't see anything";
            speech[] = {"NoIDidntSeeAnything"};
        };
    };
    class WordWhatsTheWeatherForecastQ {
        sentences[] = {"WordWhatsTheWeatherForecastQDefault", 1};
    };
    class WordWhatsTheWeatherForecastQDefault {
        versions[] = {"WordWhatsTheWeatherForecastQ_1", 1};
        class WordWhatsTheWeatherForecastQ_1 {
            text = "What's the weather forecast?";
            speech[] = {"WhatsTheWeatherForecastQ"};
        };
    };
    class WordNiceWeatherHuhQ {
        sentences[] = {"WordNiceWeatherHuhQDefault", 1};
    };
    class WordNiceWeatherHuhQDefault {
        versions[] = {"WordNiceWeatherHuhQ_1", 1};
        class WordNiceWeatherHuhQ_1 {
            text = "Nice weather, huh?";
            speech[] = {"NiceWeatherHuhQ"};
        };
    };
    class WordNastyWeatherHuhQ {
        sentences[] = {"WordNastyWeatherHuhQDefault", 1};
    };
    class WordNastyWeatherHuhQDefault {
        versions[] = {"WordNastyWeatherHuhQ_1", 1};
        class WordNastyWeatherHuhQ_1 {
            text = "Nasty weather, huh?";
            speech[] = {"NastyWeatherHuhQ"};
        };
    };
    class WordShouldBeClearingUpSoon {
        sentences[] = {"WordShouldBeClearingUpSoonDefault", 1};
    };
    class WordShouldBeClearingUpSoonDefault {
        versions[] = {"WordShouldBeClearingUpSoon_1", 1};
        class WordShouldBeClearingUpSoon_1 {
            text = "Should be clearing up soon";
            speech[] = {"ShouldBeClearingUpSoon"};
        };
    };
    class WordIReckonWellGetSomeRainSoon {
        sentences[] = {"WordIReckonWellGetSomeRainSoonDefault", 1};
    };
    class WordIReckonWellGetSomeRainSoonDefault {
        versions[] = {"WordIReckonWellGetSomeRainSoon_1", 1};
        class WordIReckonWellGetSomeRainSoon_1 {
            text = "I reckon we'll get some rain soon";
            speech[] = {"IReckonWellGetSomeRainSoon"};
        };
    };
    class WordTheySayItllStayLikeThisForAWhile {
        sentences[] = {"WordTheySayItllStayLikeThisForAWhileDefault", 1};
    };
    class WordTheySayItllStayLikeThisForAWhileDefault {
        versions[] = {"WordTheySayItllStayLikeThisForAWhile_1", 1};
        class WordTheySayItllStayLikeThisForAWhile_1 {
            text = "They say it'll stay like this for a while";
            speech[] = {"TheySayItllStayLikeThisForAWhile"};
        };
    };
    class WordWhatsTheClosestSettlementQ {
        sentences[] = {"WordWhatsTheClosestSettlementQDefault", 1};
    };
    class WordWhatsTheClosestSettlementQDefault {
        versions[] = {"WordWhatsTheClosestSettlementQ_1", 1};
        class WordWhatsTheClosestSettlementQ_1 {
            text = "What's the closest settlement?";
            speech[] = {"WhatsTheClosestSettlementQ"};
        };
    };
    class WordTheClosestOneIs {
        sentences[] = {"WordTheClosestOneIsDefault", 1};
    };
    class WordTheClosestOneIsDefault {
        versions[] = {"WordTheClosestOneIs_1", 1};
        class WordTheClosestOneIs_1 {
            text = "The closest one is";
            speech[] = {"TheClosestOneIs"};
        };
    };
    class WordImNotFromAroundHere {
        sentences[] = {"WordImNotFromAroundHereDefault", 1};
    };
    class WordImNotFromAroundHereDefault {
        versions[] = {"WordImNotFromAroundHere_1", 1};
        class WordImNotFromAroundHere_1 {
            text = "I'm not from around here";
            speech[] = {"ImNotFromAroundHere"};
        };
    };
    class WordNoIdeaIDontLiveHere {
        sentences[] = {"WordNoIdeaIDontLiveHereDefault", 1};
    };
    class WordNoIdeaIDontLiveHereDefault {
        versions[] = {"WordNoIdeaIDontLiveHere_1", 1};
        class WordNoIdeaIDontLiveHere_1 {
            text = "No idea, I don't live here";
            speech[] = {"NoIdeaIDontLiveHere"};
        };
    };
    class WordYouAlreadyAskedMeThat {
        sentences[] = {"WordYouAlreadyAskedMeThatDefault", 1};
    };
    class WordYouAlreadyAskedMeThatDefault {
        versions[] = {"WordYouAlreadyAskedMeThat_1", 1};
        class WordYouAlreadyAskedMeThat_1 {
            text = "You already asked me that";
            speech[] = {"YouAlreadyAskedMeThat"};
        };
    };
    class WordAreYouKiddingQ {
        sentences[] = {"WordAreYouKiddingQDefault", 1};
    };
    class WordAreYouKiddingQDefault {
        versions[] = {"WordAreYouKiddingQ_1", 1};
        class WordAreYouKiddingQ_1 {
            text = "Are you kidding?";
            speech[] = {"AreYouKiddingQ"};
        };
    };
    class WordStopAskingMeThat {
        sentences[] = {"WordStopAskingMeThatDefault", 1};
    };
    class WordStopAskingMeThatDefault {
        versions[] = {"WordStopAskingMeThat_1", 1};
        class WordStopAskingMeThat_1 {
            text = "Stop asking me that";
            speech[] = {"StopAskingMeThat"};
        };
    };
    class WordSorryIDontUnderstand {
        sentences[] = {"WordSorryIDontUnderstandDefault", 1};
    };
    class WordSorryIDontUnderstandDefault {
        versions[] = {"WordSorryIDontUnderstand_1", 1};
        class WordSorryIDontUnderstand_1 {
            text = "Sorry, I don't understand";
            speech[] = {"SorryIDontUnderstand"};
        };
    };
    class WordUhWhatQ {
        sentences[] = {"WordUhWhatQDefault", 1};
    };
    class WordUhWhatQDefault {
        versions[] = {"WordUhWhatQ_1", 1};
        class WordUhWhatQ_1 {
            text = "Uh, what?";
            speech[] = {"UhWhatQ"};
        };
    };
    class WordIWillOnlyTellYouMyNameRankAndSerialNumber {
        sentences[] = {"WordIWillOnlyTellYouMyNameRankAndSerialNumberDefault", 1};
    };
    class WordIWillOnlyTellYouMyNameRankAndSerialNumberDefault {
        versions[] = {"WordIWillOnlyTellYouMyNameRankAndSerialNumber_1", 1};
        class WordIWillOnlyTellYouMyNameRankAndSerialNumber_1 {
            text = "I will only tell you my name, rank, and serial number";
            speech[] = {"IWillOnlyTellYouMyNameRankAndSerialNumber"};
        };
    };
    class WordSirQ {
        sentences[] = {"WordSirQDefault", 1};
    };
    class WordSirQDefault {
        versions[] = {"WordSirQ_1", 1};
        class WordSirQ_1 {
            text = "Sir?";
            speech[] = {"SirQ"};
        };
    };
    class WordPrivateQ {
        sentences[] = {"WordPrivateQDefault", 1};
    };
    class WordPrivateQDefault {
        versions[] = {"WordPrivateQ_1", 1};
        class WordPrivateQ_1 {
            text = "Private?";
            speech[] = {"PrivateQ"};
        };
    };
    class WordCorporalQ {
        sentences[] = {"WordCorporalQDefault", 1};
    };
    class WordCorporalQDefault {
        versions[] = {"WordCorporalQ_1", 1};
        class WordCorporalQ_1 {
            text = "Corporal?";
            speech[] = {"CorporalQ"};
        };
    };
    class WordSergeantQ {
        sentences[] = {"WordSergeantQDefault", 1};
    };
    class WordSergeantQDefault {
        versions[] = {"WordSergeantQ_1", 1};
        class WordSergeantQ_1 {
            text = "Sergeant?";
            speech[] = {"SergeantQ"};
        };
    };
    class WordLieutenantQ {
        sentences[] = {"WordLieutenantQDefault", 1};
    };
    class WordLieutenantQDefault {
        versions[] = {"WordLieutenantQ_1", 1};
        class WordLieutenantQ_1 {
            text = "Lieutenant?";
            speech[] = {"LieutenantQ"};
        };
    };
    class WordCaptainQ {
        sentences[] = {"WordCaptainQDefault", 1};
    };
    class WordCaptainQDefault {
        versions[] = {"WordCaptainQ_1", 1};
        class WordCaptainQ_1 {
            text = "Captain?";
            speech[] = {"CaptainQ"};
        };
    };
    class WordMajorQ {
        sentences[] = {"WordMajorQDefault", 1};
    };
    class WordMajorQDefault {
        versions[] = {"WordMajorQ_1", 1};
        class WordMajorQ_1 {
            text = "Major?";
            speech[] = {"MajorQ"};
        };
    };
    class WordColonelQ {
        sentences[] = {"WordColonelQDefault", 1};
    };
    class WordColonelQDefault {
        versions[] = {"WordColonelQ_1", 1};
        class WordColonelQ_1 {
            text = "Colonel?";
            speech[] = {"ColonelQ"};
        };
    };
    class WordYesPrivate {
        sentences[] = {"WordYesPrivateDefault", 1};
    };
    class WordYesPrivateDefault {
        versions[] = {"WordYesPrivate_1", 1};
        class WordYesPrivate_1 {
            text = "Yes, private";
            speech[] = {"YesPrivate"};
        };
    };
    class WordYesCorporal {
        sentences[] = {"WordYesCorporalDefault", 1};
    };
    class WordYesCorporalDefault {
        versions[] = {"WordYesCorporal_1", 1};
        class WordYesCorporal_1 {
            text = "Yes, corporal";
            speech[] = {"YesCorporal"};
        };
    };
    class WordYesSergeant {
        sentences[] = {"WordYesSergeantDefault", 1};
    };
    class WordYesSergeantDefault {
        versions[] = {"WordYesSergeant_1", 1};
        class WordYesSergeant_1 {
            text = "Yes, sergeant";
            speech[] = {"YesSergeant"};
        };
    };
    class WordYesLieutenant {
        sentences[] = {"WordYesLieutenantDefault", 1};
    };
    class WordYesLieutenantDefault {
        versions[] = {"WordYesLieutenant_1", 1};
        class WordYesLieutenant_1 {
            text = "Yes, lieutenant";
            speech[] = {"YesLieutenant"};
        };
    };
    class WordYesCaptain {
        sentences[] = {"WordYesCaptainDefault", 1};
    };
    class WordYesCaptainDefault {
        versions[] = {"WordYesCaptain_1", 1};
        class WordYesCaptain_1 {
            text = "Yes, captain";
            speech[] = {"YesCaptain"};
        };
    };
    class WordYesMajor {
        sentences[] = {"WordYesMajorDefault", 1};
    };
    class WordYesMajorDefault {
        versions[] = {"WordYesMajor_1", 1};
        class WordYesMajor_1 {
            text = "Yes, major";
            speech[] = {"YesMajor"};
        };
    };
    class WordYesColonel {
        sentences[] = {"WordYesColonelDefault", 1};
    };
    class WordYesColonelDefault {
        versions[] = {"WordYesColonel_1", 1};
        class WordYesColonel_1 {
            text = "Yes, colonel";
            speech[] = {"YesColonel"};
        };
    };
    class WordSoldierQ {
        sentences[] = {"WordSoldierQDefault", 1};
    };
    class WordSoldierQDefault {
        versions[] = {"WordSoldierQ_1", 1};
        class WordSoldierQ_1 {
            text = "Soldier?";
            speech[] = {"SoldierQ"};
        };
    };
    class WordMorninSoldier {
        sentences[] = {"WordMorninSoldierDefault", 1};
    };
    class WordMorninSoldierDefault {
        versions[] = {"WordMorninSoldier_1", 1};
        class WordMorninSoldier_1 {
            text = "Mornin', soldier";
            speech[] = {"MorninSoldier"};
        };
    };
    class WordEveninSoldier {
        sentences[] = {"WordEveninSoldierDefault", 1};
    };
    class WordEveninSoldierDefault {
        versions[] = {"WordEveninSoldier_1", 1};
        class WordEveninSoldier_1 {
            text = "Evenin', soldier";
            speech[] = {"EveninSoldier"};
        };
    };
    class WordGoodDaySir {
        sentences[] = {"WordGoodDaySirDefault", 1};
    };
    class WordGoodDaySirDefault {
        versions[] = {"WordGoodDaySir_1", 1};
        class WordGoodDaySir_1 {
            text = "Good day, sir";
            speech[] = {"GoodDaySir"};
        };
    };
    class WordGoodEveningSir {
        sentences[] = {"WordGoodEveningSirDefault", 1};
    };
    class WordGoodEveningSirDefault {
        versions[] = {"WordGoodEveningSir_1", 1};
        class WordGoodEveningSir_1 {
            text = "Good evening, sir";
            speech[] = {"GoodEveningSir"};
        };
    };
    class WordGoodMorningSir {
        sentences[] = {"WordGoodMorningSirDefault", 1};
    };
    class WordGoodMorningSirDefault {
        versions[] = {"WordGoodMorningSir_1", 1};
        class WordGoodMorningSir_1 {
            text = "Good morning, sir";
            speech[] = {"GoodMorningSir"};
        };
    };
    class WordGoodDay {
        sentences[] = {"WordGoodDayDefault", 1};
    };
    class WordGoodDayDefault {
        versions[] = {"WordGoodDay_1", 1};
        class WordGoodDay_1 {
            text = "Good day";
            speech[] = {"GoodDay"};
        };
    };
    class WordGoodMorning {
        sentences[] = {"WordGoodMorningDefault", 1};
    };
    class WordGoodMorningDefault {
        versions[] = {"WordGoodMorning_1", 1};
        class WordGoodMorning_1 {
            text = "Good morning";
            speech[] = {"GoodMorning"};
        };
    };
    class WordGoodEvening {
        sentences[] = {"WordGoodEveningDefault", 1};
    };
    class WordGoodEveningDefault {
        versions[] = {"WordGoodEvening_1", 1};
        class WordGoodEvening_1 {
            text = "Good evening";
            speech[] = {"GoodEvening"};
        };
    };
    class WordWhatQ {
        sentences[] = {"WordWhatQDefault", 1};
    };
    class WordWhatQDefault {
        versions[] = {"WordWhatQ_1", 1};
        class WordWhatQ_1 {
            text = "What?";
            speech[] = {"WhatQ"};
        };
    };
    class WordYesSir {
        sentences[] = {"WordYesSirDefault", 1};
    };
    class WordYesSirDefault {
        versions[] = {"WordYesSir_1", 1};
        class WordYesSir_1 {
            text = "Yes, sir";
            speech[] = {"YesSir"};
        };
    };
    class WordHelloSir {
        sentences[] = {"WordHelloSirDefault", 1};
    };
    class WordHelloSirDefault {
        versions[] = {"WordHelloSir_1", 1};
        class WordHelloSir_1 {
            text = "Hello, sir";
            speech[] = {"HelloSir"};
        };
    };
    class WordYep {
        sentences[] = {"WordYepDefault", 1};
    };
    class WordYepDefault {
        versions[] = {"WordYep_1", 1};
        class WordYep_1 {
            text = "Yep";
            speech[] = {"Yep"};
        };
    };
    class WordYeahQ {
        sentences[] = {"WordYeahQDefault", 1};
    };
    class WordYeahQDefault {
        versions[] = {"WordYeahQ_1", 1};
        class WordYeahQ_1 {
            text = "Yeah?";
            speech[] = {"YeahQ"};
        };
    };
    class WordHi {
        sentences[] = {"WordHiDefault", 1};
    };
    class WordHiDefault {
        versions[] = {"WordHi_1", 1};
        class WordHi_1 {
            text = "Hi";
            speech[] = {"Hi"};
        };
    };
    class WordHiThereE {
        sentences[] = {"WordHiThereEDefault", 1};
    };
    class WordHiThereEDefault {
        versions[] = {"WordHiThereE_1", 1};
        class WordHiThereE_1 {
            text = "Hi there!";
            speech[] = {"HiThereE"};
        };
    };
    class WordHeyMan {
        sentences[] = {"WordHeyManDefault", 1};
    };
    class WordHeyManDefault {
        versions[] = {"WordHeyMan_1", 1};
        class WordHeyMan_1 {
            text = "Hey, man";
            speech[] = {"HeyMan"};
        };
    };
    class WordHiDude {
        sentences[] = {"WordHiDudeDefault", 1};
    };
    class WordHiDudeDefault {
        versions[] = {"WordHiDude_1", 1};
        class WordHiDude_1 {
            text = "Hi, dude";
            speech[] = {"HiDude"};
        };
    };
    class WordHello {
        sentences[] = {"WordHelloDefault", 1};
    };
    class WordHelloDefault {
        versions[] = {"WordHello_1", 1};
        class WordHello_1 {
            text = "Hello";
            speech[] = {"Hello"};
        };
    };
    class WordHowsThingsQ {
        sentences[] = {"WordHowsThingsQDefault", 1};
    };
    class WordHowsThingsQDefault {
        versions[] = {"WordHowsThingsQ_1", 1};
        class WordHowsThingsQ_1 {
            text = "How's things?";
            speech[] = {"HowsThingsQ"};
        };
    };
    class WordHowAreYouQ {
        sentences[] = {"WordHowAreYouQDefault", 1};
    };
    class WordHowAreYouQDefault {
        versions[] = {"WordHowAreYouQ_1", 1};
        class WordHowAreYouQ_1 {
            text = "How are you?";
            speech[] = {"HowAreYouQ"};
        };
    };
    class WordHeyE {
        sentences[] = {"WordHeyEDefault", 1};
    };
    class WordHeyEDefault {
        versions[] = {"WordHeyE_1", 1};
        class WordHeyE_1 {
            text = "Hey!";
            speech[] = {"HeyE"};
        };
    };
    class WordWhatDoYouWantQ {
        sentences[] = {"WordWhatDoYouWantQDefault", 1};
    };
    class WordWhatDoYouWantQDefault {
        versions[] = {"WordWhatDoYouWantQ_1", 1};
        class WordWhatDoYouWantQ_1 {
            text = "What do you want?";
            speech[] = {"WhatDoYouWantQ"};
        };
    };
    class WordWhatDoYouNeedQ {
        sentences[] = {"WordWhatDoYouNeedQDefault", 1};
    };
    class WordWhatDoYouNeedQDefault {
        versions[] = {"WordWhatDoYouNeedQ_1", 1};
        class WordWhatDoYouNeedQ_1 {
            text = "What do you need?";
            speech[] = {"WhatDoYouNeedQ"};
        };
    };
    class WordWhatsUpQ {
        sentences[] = {"WordWhatsUpQDefault", 1};
    };
    class WordWhatsUpQDefault {
        versions[] = {"WordWhatsUpQ_1", 1};
        class WordWhatsUpQ_1 {
            text = "What's up?";
            speech[] = {"WhatsUpQ"};
        };
    };
    class WordYesQ {
        sentences[] = {"WordYesQDefault", 1};
    };
    class WordYesQDefault {
        versions[] = {"WordYesQ_1", 1};
        class WordYesQ_1 {
            text = "Yes?";
            speech[] = {"YesQ"};
        };
    };
    class WordMaamQ {
        sentences[] = {"WordMaamQDefault", 1};
    };
    class WordMaamQDefault {
        versions[] = {"WordMaamQ_1", 1};
        class WordMaamQ_1 {
            text = "Ma'am?";
            speech[] = {"MaamQ"};
        };
    };
    class WordHaveANiceDay {
        sentences[] = {"WordHaveANiceDayDefault", 1};
    };
    class WordHaveANiceDayDefault {
        versions[] = {"WordHaveANiceDay_1", 1};
        class WordHaveANiceDay_1 {
            text = "Have a nice day";
            speech[] = {"HaveANiceDay"};
        };
    };
    class WordMorningMaam {
        sentences[] = {"WordMorningMaamDefault", 1};
    };
    class WordMorningMaamDefault {
        versions[] = {"WordMorningMaam_1", 1};
        class WordMorningMaam_1 {
            text = "Morning, ma'am";
            speech[] = {"MorningMaam"};
        };
    };
    class WordHelloThere {
        sentences[] = {"WordHelloThereDefault", 1};
    };
    class WordHelloThereDefault {
        versions[] = {"WordHelloThere_1", 1};
        class WordHelloThere_1 {
            text = "Hello there";
            speech[] = {"HelloThere"};
        };
    };
    class WordHowYouDoinQ {
        sentences[] = {"WordHowYouDoinQDefault", 1};
    };
    class WordHowYouDoinQDefault {
        versions[] = {"WordHowYouDoinQ_1", 1};
        class WordHowYouDoinQ_1 {
            text = "How you doin'?";
            speech[] = {"HowYouDoinQ"};
        };
    };
    class WordDontTouchMeE {
        sentences[] = {"WordDontTouchMeEDefault", 1};
    };
    class WordDontTouchMeEDefault {
        versions[] = {"WordDontTouchMeE_1", 1};
        class WordDontTouchMeE_1 {
            text = "Don't touch me!";
            speech[] = {"DontTouchMeE"};
        };
    };
    class WordNotNowE {
        sentences[] = {"WordNotNowEDefault", 1};
    };
    class WordNotNowEDefault {
        versions[] = {"WordNotNowE_1", 1};
        class WordNotNowE_1 {
            text = "Not now!";
            speech[] = {"NotNowE"};
        };
    };
    class WordLater {
        sentences[] = {"WordLaterDefault", 1};
    };
    class WordLaterDefault {
        versions[] = {"WordLater_1", 1};
        class WordLater_1 {
            text = "Later";
            speech[] = {"Later"};
        };
    };
    class WordNoTimeE {
        sentences[] = {"WordNoTimeEDefault", 1};
    };
    class WordNoTimeEDefault {
        versions[] = {"WordNoTimeE_1", 1};
        class WordNoTimeE_1 {
            text = "No time!";
            speech[] = {"NoTimeE"};
        };
    };
    class WordHushE {
        sentences[] = {"WordHushEDefault", 1};
    };
    class WordHushEDefault {
        versions[] = {"WordHushE_1", 1};
        class WordHushE_1 {
            text = "Hush!";
            speech[] = {"HushE"};
        };
    };
    class WordSsshhE {
        sentences[] = {"WordSsshhEDefault", 1};
    };
    class WordSsshhEDefault {
        versions[] = {"WordSsshhE_1", 1};
        class WordSsshhE_1 {
            text = "Ssshh!";
            speech[] = {"SsshhE"};
        };
    };
    class WordCantYouSeeImBusyQ {
        sentences[] = {"WordCantYouSeeImBusyQDefault", 1};
    };
    class WordCantYouSeeImBusyQDefault {
        versions[] = {"WordCantYouSeeImBusyQ_1", 1};
        class WordCantYouSeeImBusyQ_1 {
            text = "Can't you see I'm busy?";
            speech[] = {"CantYouSeeImBusyQ"};
        };
    };
    class WordBitOccupiedAtTheMomentDude {
        sentences[] = {"WordBitOccupiedAtTheMomentDudeDefault", 1};
    };
    class WordBitOccupiedAtTheMomentDudeDefault {
        versions[] = {"WordBitOccupiedAtTheMomentDude_1", 1};
        class WordBitOccupiedAtTheMomentDude_1 {
            text = "Bit occupied at the moment, dude";
            speech[] = {"BitOccupiedAtTheMomentDude"};
        };
    };
    class WordImBusyE {
        sentences[] = {"WordImBusyEDefault", 1};
    };
    class WordImBusyEDefault {
        versions[] = {"WordImBusyE_1", 1};
        class WordImBusyE_1 {
            text = "I'm busy!";
            speech[] = {"ImBusyE"};
        };
    };
    class WordPissOffE {
        sentences[] = {"WordPissOffEDefault", 1};
    };
    class WordPissOffEDefault {
        versions[] = {"WordPissOffE_1", 1};
        class WordPissOffE_1 {
            text = "Piss off!";
            speech[] = {"PissOffE"};
        };
    };
    class WordNiceToSeeYou {
        sentences[] = {"WordNiceToSeeYouDefault", 1};
    };
    class WordNiceToSeeYouDefault {
        versions[] = {"WordNiceToSeeYou_1", 1};
        class WordNiceToSeeYou_1 {
            text = "Nice to see you";
            speech[] = {"NiceToSeeYou"};
        };
    };
    class WordGoodToSeeYou {
        sentences[] = {"WordGoodToSeeYouDefault", 1};
    };
    class WordGoodToSeeYouDefault {
        versions[] = {"WordGoodToSeeYou_1", 1};
        class WordGoodToSeeYou_1 {
            text = "Good to see you";
            speech[] = {"GoodToSeeYou"};
        };
    };
    class WordHeyGladYoureHere {
        sentences[] = {"WordHeyGladYoureHereDefault", 1};
    };
    class WordHeyGladYoureHereDefault {
        versions[] = {"WordHeyGladYoureHere_1", 1};
        class WordHeyGladYoureHere_1 {
            text = "Hey, glad you're here";
            speech[] = {"HeyGladYoureHere"};
        };
    };
    class WordCanIHelpYouQ {
        sentences[] = {"WordCanIHelpYouQDefault", 1};
    };
    class WordCanIHelpYouQDefault {
        versions[] = {"WordCanIHelpYouQ_1", 1};
        class WordCanIHelpYouQ_1 {
            text = "Can I help you?";
            speech[] = {"CanIHelpYouQ"};
        };
    };
    class WordGetLostE {
        sentences[] = {"WordGetLostEDefault", 1};
    };
    class WordGetLostEDefault {
        versions[] = {"WordGetLostE_1", 1};
        class WordGetLostE_1 {
            text = "Get lost!";
            speech[] = {"GetLostE"};
        };
    };
    class WordLeaveMeAloneE {
        sentences[] = {"WordLeaveMeAloneEDefault", 1};
    };
    class WordLeaveMeAloneEDefault {
        versions[] = {"WordLeaveMeAloneE_1", 1};
        class WordLeaveMeAloneE_1 {
            text = "Leave me alone!";
            speech[] = {"LeaveMeAloneE"};
        };
    };
    class WordLeaveUsAloneE {
        sentences[] = {"WordLeaveUsAloneEDefault", 1};
    };
    class WordLeaveUsAloneEDefault {
        versions[] = {"WordLeaveUsAloneE_1", 1};
        class WordLeaveUsAloneE_1 {
            text = "Leave us alone!";
            speech[] = {"LeaveUsAloneE"};
        };
    };
    class WordFuckingPig {
        sentences[] = {"WordFuckingPigDefault", 1};
    };
    class WordFuckingPigDefault {
        versions[] = {"WordFuckingPig_1", 1};
        class WordFuckingPig_1 {
            text = "Fucking pig";
            speech[] = {"FuckingPig"};
        };
    };
    class WordSonOfABitchE {
        sentences[] = {"WordSonOfABitchEDefault", 1};
    };
    class WordSonOfABitchEDefault {
        versions[] = {"WordSonOfABitchE_1", 1};
        class WordSonOfABitchE_1 {
            text = "Son of a bitch!";
            speech[] = {"SonOfABitchE"};
        };
    };
    class WordDamnYouE {
        sentences[] = {"WordDamnYouEDefault", 1};
    };
    class WordDamnYouEDefault {
        versions[] = {"WordDamnYouE_1", 1};
        class WordDamnYouE_1 {
            text = "Damn you!";
            speech[] = {"DamnYouE"};
        };
    };
    class WordCanIAskYouSomethingQ {
        sentences[] = {"WordCanIAskYouSomethingQDefault", 1};
    };
    class WordCanIAskYouSomethingQDefault {
        versions[] = {"WordCanIAskYouSomethingQ_1", 1};
        class WordCanIAskYouSomethingQ_1 {
            text = "Can I ask you something?";
            speech[] = {"CanIAskYouSomethingQ"};
        };
    };
    class WordPleaseCanYouHelpQ {
        sentences[] = {"WordPleaseCanYouHelpQDefault", 1};
    };
    class WordPleaseCanYouHelpQDefault {
        versions[] = {"WordPleaseCanYouHelpQ_1", 1};
        class WordPleaseCanYouHelpQ_1 {
            text = "Please, can you help?";
            speech[] = {"PleaseCanYouHelpQ"};
        };
    };
    class WordSpeak {
        sentences[] = {"WordSpeakDefault", 1};
    };
    class WordSpeakDefault {
        versions[] = {"WordSpeak_1", 1};
        class WordSpeak_1 {
            text = "Speak";
            speech[] = {"Speak"};
        };
    };
    class WordHelpUs {
        sentences[] = {"WordHelpUsDefault", 1};
    };
    class WordHelpUsDefault {
        versions[] = {"WordHelpUs_1", 1};
        class WordHelpUs_1 {
            text = "Help us";
            speech[] = {"HelpUs"};
        };
    };
    class WordIWontSayAnotherWord {
        sentences[] = {"WordIWontSayAnotherWordDefault", 1};
    };
    class WordIWontSayAnotherWordDefault {
        versions[] = {"WordIWontSayAnotherWord_1", 1};
        class WordIWontSayAnotherWord_1 {
            text = "I won't say another word";
            speech[] = {"IWontSayAnotherWord"};
        };
    };
    class WordMindYourOwnBusiness {
        sentences[] = {"WordMindYourOwnBusinessDefault", 1};
    };
    class WordMindYourOwnBusinessDefault {
        versions[] = {"WordMindYourOwnBusiness_1", 1};
        class WordMindYourOwnBusiness_1 {
            text = "Mind your own business";
            speech[] = {"MindYourOwnBusiness"};
        };
    };
    class WordGoBotherSomeoneElse {
        sentences[] = {"WordGoBotherSomeoneElseDefault", 1};
    };
    class WordGoBotherSomeoneElseDefault {
        versions[] = {"WordGoBotherSomeoneElse_1", 1};
        class WordGoBotherSomeoneElse_1 {
            text = "Go bother someone else";
            speech[] = {"GoBotherSomeoneElse"};
        };
    };
};
class CfgSounds {
    class rhs_rus_land_rc_01 {
        name = "Russian Radio Chatter 01";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_01.wss", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_02 {
        name = "Russian Radio Chatter 02";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_02.wss", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_03 {
        name = "Russian Radio Chatter 03";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_03.wss", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_04 {
        name = "Russian Radio Chatter 04";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_04.ogg", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_05 {
        name = "Russian Radio Chatter 05";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_05.wss", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_06 {
        name = "Russian Radio Chatter 06";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_06.ogg", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_07 {
        name = "Russian Radio Chatter 07";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_07.wss", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_08 {
        name = "Russian Radio Chatter 08";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_08.wss", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_09 {
        name = "Russian Radio Chatter 09";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_09.ogg", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_10 {
        name = "Russian Radio Chatter 10";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_10.wss", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_11 {
        name = "Russian Radio Chatter 11";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_11.ogg", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_12 {
        name = "Russian Radio Chatter 12";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_12.wss", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_13 {
        name = "Russian Radio Chatter 13";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_13.ogg", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_14 {
        name = "Russian Radio Chatter 14";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_14.ogg", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_15 {
        name = "Russian Radio Chatter 15";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_15.ogg", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_16 {
        name = "Russian Radio Chatter 16";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_16.ogg", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_17 {
        name = "Russian Radio Chatter 17";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_17.wss", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_18 {
        name = "Russian Radio Chatter 18";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_18.wss", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_19 {
        name = "Russian Radio Chatter 19";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_19.wss", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_20 {
        name = "Russian Radio Chatter 20";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_20.wss", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_21 {
        name = "Russian Radio Chatter 21";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_21.ogg", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_22 {
        name = "Russian Radio Chatter 22";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_22.ogg", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_23 {
        name = "Russian Radio Chatter 23";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_23.wss", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_24 {
        name = "Russian Radio Chatter 24";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_24.ogg", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_25 {
        name = "Russian Radio Chatter 25";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_25.wss", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_26 {
        name = "Russian Radio Chatter 26";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_26.wss", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_27 {
        name = "Russian Radio Chatter 27";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_27.ogg", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_28 {
        name = "Russian Radio Chatter 28";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_28.ogg", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_29 {
        name = "Russian Radio Chatter 29";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_29.ogg", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_30 {
        name = "Russian Radio Chatter 30";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_30.wss", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_31 {
        name = "Russian Radio Chatter 31";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_31.wss", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_32 {
        name = "Russian Radio Chatter 32";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_32.wss", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_33 {
        name = "Russian Radio Chatter 33";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_33.wss", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_34 {
        name = "Russian Radio Chatter 34";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_34.wss", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_35 {
        name = "Russian Radio Chatter 35";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_35.ogg", 0.4, 1};
        titles[] = {};
    };
    class rhs_rus_land_rc_36 {
        name = "Russian Radio Chatter 36";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_36.ogg", 0.4, 1};
        titles[] = {};
    };
};
class CfgRadio {
    class rhs_rus_land_rc_01 {
        name = "Russian Radio Chatter 01";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_01.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_02 {
        name = "Russian Radio Chatter 02";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_02.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_03 {
        name = "Russian Radio Chatter 03";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_03.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_04 {
        name = "Russian Radio Chatter 04";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_04.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_05 {
        name = "Russian Radio Chatter 05";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_05.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_06 {
        name = "Russian Radio Chatter 06";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_06.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_07 {
        name = "Russian Radio Chatter 07";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_07.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_08 {
        name = "Russian Radio Chatter 08";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_08.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_09 {
        name = "Russian Radio Chatter 09";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_09.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_10 {
        name = "Russian Radio Chatter 10";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_10.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_11 {
        name = "Russian Radio Chatter 11";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_11.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_12 {
        name = "Russian Radio Chatter 12";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_12.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_13 {
        name = "Russian Radio Chatter 13";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_13.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_14 {
        name = "Russian Radio Chatter 14";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_14.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_15 {
        name = "Russian Radio Chatter 15";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_15.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_16 {
        name = "Russian Radio Chatter 16";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_16.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_17 {
        name = "Russian Radio Chatter 17";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_17.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_18 {
        name = "Russian Radio Chatter 18";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_18.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_19 {
        name = "Russian Radio Chatter 19";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_19.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_20 {
        name = "Russian Radio Chatter 20";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_20.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_21 {
        name = "Russian Radio Chatter 21";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_21.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_22 {
        name = "Russian Radio Chatter 22";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_22.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_23 {
        name = "Russian Radio Chatter 23";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_23.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_24 {
        name = "Russian Radio Chatter 24";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_24.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_25 {
        name = "Russian Radio Chatter 25";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_25.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_26 {
        name = "Russian Radio Chatter 26";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_26.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_27 {
        name = "Russian Radio Chatter 27";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_27.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_28 {
        name = "Russian Radio Chatter 28";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_28.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_29 {
        name = "Russian Radio Chatter 29";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_29.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_30 {
        name = "Russian Radio Chatter 30";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_30.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_31 {
        name = "Russian Radio Chatter 31";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_31.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_32 {
        name = "Russian Radio Chatter 32";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_32.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_33 {
        name = "Russian Radio Chatter 33";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_33.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_34 {
        name = "Russian Radio Chatter 34";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_34.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_35 {
        name = "Russian Radio Chatter 35";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_35.wss", 0.4, 1};
        title = "";
    };
    class rhs_rus_land_rc_36 {
        name = "Russian Radio Chatter 36";
        sound[] = {"\rhsafrf\addons\rhs_s_radio\rc\rus_rc_36.wss", 0.4, 1};
        title = "";
    };
};
