/*
	rhs_fnc_stryker_m1126_init
*/
params["_vehicle"];

private _sections = getArray (configFile >> "CfgVehicles" >> typeOf _vehicle >> "hiddenSelections");
_vehicle setObjectTexture [_sections find "BFT_screen", getText (configFile >> "CfgWorlds" >> worldName >> "pictureMap")];

if (!local _vehicle) exitWith {}; // Function should only run on local machine

private _cfgParams= getArray (configFile >> "CfgVehicles" >> typeOf _vehicle >> "rhs_decalParameters" );
if(count _cfgParams > 0)then{
	{
		_cfgParams set [_forEachIndex, call compile _x];
	}foreach _cfgParams;

	[
		_vehicle,
		_cfgParams
	] call rhsusf_fnc_decalsInit;
	//diag_log format ["Params: %1", _cfgParams];
};

private _text = format["%1-%2%3",selectRandom ["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r"], ceil random(3.99),ceil random(3.99)];

private _fnc_decal = 
{
	params["_vehicle","_selection","_text","_type","_style"];

	private _hiddenSelections = getArray (configFile >> "CfgVehicles" >> typeOf _vehicle >> "hiddenSelections");

	private _i = 0;
	private _indexes = [];

	// Find indexes of selection
	while{_i = _i + 1;true}do{
		_search = _hiddenSelections find (format["%1%2",_selection,_i]);
		if(_search isEqualTo -1)exitWith{};
		_indexes pushBack _search;
	};

	// Exit if there are no valid indexes
	if(_indexes isEqualTo [])exitWith{};

	private _textArray = _text splitString "";
	{
		_vehicle setObjectTextureGlobal [_x,format["\rhsusf\addons\%1\Data\%4\%2\%3_ca.paa","RHSUSF_Decals",_style,_textArray # _foreachIndex,_type]];
	} forEach _indexes; 
};
[_vehicle,"callsign",_text,"Numbers","USStencil"] call  _fnc_decal;