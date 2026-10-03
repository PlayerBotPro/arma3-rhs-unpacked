class CfgPatches {
    class rhsusf_decals {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {"rhsusf_main"};
    };
};
class CfgFunctions {
    class RHSUSF {
        tag = "RHSUSF";
        class decals {
            class decalsInit {
                file = "\rhsusf\addons\rhsusf_decals\scripts\init.sqf";
                description = "decals init function";
            };
            class drawSymbol {
                file = "\rhsusf\addons\rhsusf_decals\scripts\drawSymbol.sqf";
                description = "function for drawing symbols";
            };
            class drawNumber {
                file = "\rhsusf\addons\rhsusf_decals\scripts\drawNumber.sqf";
                description = "function for drawing number";
            };
            class echoDebug {
                file = "\rhsusf\addons\rhsusf_decals\scripts\functions\echoDebug.sqf";
                description = "debug function";
            };
            class randomNum {
                file = "\rhsusf\addons\rhsusf_decals\scripts\functions\getRandomNumber.sqf";
                description = "get random number";
            };
            class numberToDigits {
                file = "\rhsusf\addons\rhsusf_decals\scripts\functions\numberToDigits.sqf";
                description = "number to digit";
            };
        };
    };
};
