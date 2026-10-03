class CfgPatches {
    class rhs_decals {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {"rhs_main"};
    };
};
class CfgFunctions {
    class RHS {
        tag = "RHS";
        class decals {
            class decalsReadParams {
                file = "\rhsafrf\addons\rhs_decals\scripts\readParams.sqf";
                description = "generic decal drawing function which read params from config";
            };
            class decalsInit {
                file = "\rhsafrf\addons\rhs_decals\scripts\init.sqf";
                description = "decals init function";
            };
            class drawSymbol {
                file = "\rhsafrf\addons\rhs_decals\scripts\drawSymbol.sqf";
                description = "function for drawing symbols";
            };
            class drawNumber {
                file = "\rhsafrf\addons\rhs_decals\scripts\drawNumber.sqf";
                description = "function for drawing number";
            };
            class echoDebug {
                file = "\rhsafrf\addons\rhs_decals\scripts\functions\echoDebug.sqf";
                description = "debug function";
            };
            class randomNum {
                file = "\rhsafrf\addons\rhs_decals\scripts\functions\getRandomNumber.sqf";
                description = "get random number";
            };
            class numberToDigits {
                file = "\rhsafrf\addons\rhs_decals\scripts\functions\numberToDigits.sqf";
                description = "number to digit";
            };
        };
    };
};
