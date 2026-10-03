params ["_vehicle"];

if(local _vehicle)then{

	if (isNil "cRHSMI28FuncLoaded") then
	{
		cRHSMI28FuncLoaded = true;
		cRHSMI28AddonName  = "rhsafrf\addons\rhs_c_mi28";

		cRHSAIRMI28NumberPlaces = [4,5];
		cRHSAIRMI28TailPlaces = [3];
	};

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

};