params ["_vehicle"];

if(local _vehicle)then{

	_vehicle setVariable ["unload",0];

	if (isNil "cBMDFuncLoaded") then
	{
		cBMDFuncLoaded = true;
		cBMDAddonName  = "rhsafrf\addons\rhs_c_bmd";
		cBMD3NumberPlaces = [3,4,5]; // Places for number
		cBMDArmySymPlaces = [6];
		cBMDPlnSymPlaces = [7];     // Places for platoon symbol

		if (isNil "rhs_armor_hint") then{
			call rhs_fnc_hintArmor;
			rhs_armor_hint=true;
		};
	};

	/*******************************************************************************
	* Paint & Spray =)                                                             *
	*******************************************************************************/
	private _class = typeOf _vehicle;

	//diag_log format ["Init running. Class: %1", _class];
	private _cfgParams= getArray (configFile >> "CfgVehicles" >> _class >> "rhs_decalParameters" );
	if(count _cfgParams > 0)then{
		{
			_cfgParams set [_forEachIndex, call compile _x];
		}foreach _cfgParams;

		[
			_vehicle,
			_cfgParams
		] call rhs_fnc_decalsInit;
		//diag_log format ["Params: %1", _cfgParams];
	};

	private _habartype = getNumber (configFile >> "CfgVehicles" >> _class >> "rhs_habarType" );
	[_vehicle,_habartype] call rhs_fnc_bmd_habar; // Habar

};