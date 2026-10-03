private ["_tank","_class","_decal","_params","_h","_habartype"];

_tank = _this select 0;

if (isNil "cRHST72FuncLoaded") then
{
        cRHST72FuncLoaded = true; //here and above this name should correspond to the addon. Indicates that this script should not be run more than once
        cRHST72AddonName  = "rhsafrf\addons\rhs_air"; // the prefix of the pbo this script is located in

        cRHST72NumberPlaces = [0,1,2];                  // Places for numbers. Indecies from the hiddenSelections definition in the config. Can be up to 4 I think.
        cRHST72PlnSymPlaces = [3];                              // Places for platoon symbol
};

_decal = "\rhsafrf\addons\RHS_Decals\Scripts\init.sqf"; // always the same
_class = typeOf _tank; // always the same

diag_log format ["Init running. Class: %1", _class];

switch (_class) do
{
        // here we have the cases for every actual ingame class. Can be as many of these ass you need
        case "RHS_T50_vvs" :
        {
                _params = [
                        _tank,
                        [
                                // decal arrays, can be as many of these as you need. If a certain placement array is not defined it will be left transparent on the model.
                                ["Number", cRHST72NumberPlaces,"Default"], // see below for explanation (number arrays)
                                ["Label", cRHST72PlnSymPlaces, "Platoon",8] // see below for explanation (label arrays)
                        ]
                ];
        };

        case "RHS_T50_vvs_blueonblue" :
        {
                _params = [
                        _tank,
                        [
                                ["Number",cRHST72NumberPlaces,"Default"],
                                ["Label",cRHST72PlnSymPlaces, "Platoon",8]
                        ]
                ];
        };

        case "RHS_T50_vvs_bluecamo" :
        {
                _params = [
                        _tank,
                        [
                                ["Number",cRHST72NumberPlaces,"Default"],
                                ["Label",cRHST72PlnSymPlaces, "Platoon",8]
                        ]
                ];
        };

        // default case is always there to make sure that any vehicle that calls this class but is not of the right class it will have transparent decals
        default {
                _params = [
                        _tank,
                        [

                        ]
                ];
        };
};

diag_log format ["Params: %1", _params];

private ["_h"];
_h = _params execVM _decal;