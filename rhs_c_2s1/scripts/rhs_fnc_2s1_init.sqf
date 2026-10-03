private ["_tank","_class","_cfgParams"];

params["_tank"];

if(local _tank)then{

	if (isNil "cRHS2S1FuncLoaded") then
	{
		cRHS2S1FuncLoaded = true;
		cRHS2S1AddonName  = "rhsafrf\addons\rhs_c_2s1";

		cRHS2S1NumberPlaces = [11,12,13];			// Places for number
		cRHS2S1BackSmallNumberPlaces = [14,15,16];			// Places for number
		cRHS2S1BackLargeNumberPlaces = [17,18,19];			// Places for number
		cRHS2S1BackTurretNumberPlaces = [20,21,22];			// Places for number
		cRHS2S1FrontTurretNumberPlaces = [23,24,25];			// Places for number
		cRHS2S1SerbianNumberPlaces = [26,27,28,29,30];			// Places for number
		cRHS2S1BackSymbol = 31;			// Places for number
		cRHS2S1TurretBackRightSymbol = 32;			// Places for number
		cRHS2S1TurretBackLeftSymbol = 33;			// Places for number
		cRHS2S1TurretFrontLeftSymbol = 34;			// Places for number
		cRHS2S1TurretFrontRightSymbol = 35;			// Places for number
		cRHS2S1HullRightSymbol = 36;			// Places for number
		cRHS2S1HullLeftSymbol = 37;			// Places for number
	};

	//diag_log format ["Init running. Class: %1", _class];

	private _cfgParams= getArray (configOF _tank >> "rhs_decalParameters" );
	if(count _cfgParams > 0)then{
		{
			_cfgParams set [_forEachIndex, call compile _x];
		}foreach _cfgParams;

		[
			_tank,
			_cfgParams
		] call rhs_fnc_decalsInit;
		//diag_log format ["Params: %1", _cfgParams];
	};
};