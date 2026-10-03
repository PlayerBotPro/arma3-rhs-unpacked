private ["_tank","_class","_decal","_params","_h","_habartype","_typeNum"];

_tank = _this select 0;

if (!local _tank) exitWith {}; // Function should only run on local machine

if (isNil "cRHSCH53FuncLoaded") then
{
        cRHSCH53FuncLoaded = true; //here and above this name should correspond to the addon. Indicates that this script should not be run more than once
        cRHSCH53AddonName  = "rhsusf\addons\rhsusf_c_ch53"; // the prefix of the pbo this script is located in

        cCH53NumberPlaces = [2,3];                  // Places for numbers. Indecies from the hiddenSelections definition in the config. Can be up to 4 I think.
};

_class = typeOf _tank; // always the same

//diag_log format ["Init running. Class: %1", _class];

 _typeNum = "USMCGrey";
if ( (floor(random 100)) > 50) then
{
	_typeNum = "USMCBlackShadow"
};
//random number selection using gaussian distribution, min 20, medium 50, maximum 79
_randomNum = floor (random [20,50,79]);

_cfgParams= getArray (configFile >> "CfgVehicles" >> _class >> "rhs_decalParameters" );
if(count _cfgParams > 0)then{
        {
                _cfgParams set [_forEachIndex, call compile _x];
        }foreach _cfgParams;

        [
                _tank,
                _cfgParams
        ] call rhsusf_fnc_decalsInit;
        //diag_log format ["Params: %1", _cfgParams];
};
