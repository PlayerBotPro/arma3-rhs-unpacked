params ["_vehicle"];

if(local _vehicle)then{

	if (isNil "cRHSAIRFuncLoaded") then
	{
		cRHSAIRFuncLoaded = true;
		cRHSAIRAddonName  = "rhsafrf\addons\rhs_c_a2port_air";

		cRHSAIRSU25NumberPlaces = [2,3];
		cRHSAIRSU25NosePlaces = [4];
		cRHSAIRSU25SidePlaces = [5];
		cRHSAIRSU25TailPlaces = [6];
		cRHSAIRMI24NumberPlaces = [4,5];
		cRHSAIRMI24TailPlaces = [3];
		cRHSAIRKA52NumberPlaces = [2,3];
		cRHSAIRKA52TailPlaces = [4];
		cRHSAIRMI8NumberPlaces = [4,5];
		cRHSAIRMI8TailPlaces = [6];
		cRHSAIRPchelaNumberPlaces = [3,2,1]; //lol, made them in reveresed order on model
		cRHSAIRT50NumberPlaces = [2,3];
		cRHSAIRT50NumberPlaces2 = [4,5,6];
		cRHSAIRT50SquadPlaces = [7];
		cRHSAIRT50StarPlaces = [8];
		cRHSAIRTU95NumberPlaces = [3,4];
		cRHSAIRTU95StarPlaces = [2];
		cRHSAIRTU95NamePlaces = [1];
		cRHSAIRTU95COAPlaces = [0];
		cRHSAIRMIG29NumberPlaces = [3,4];
		cRHSAIRMIG29StarPlaces = [5];
		cRHSAIRMIG29TailNumberPlaces = [6,7];
		cRHSAIRMIG29TailTopNumberPlaces = [8,9];
		cRHSAIRMIG29SerbianTailStaticNumberPlaces = [10,11];
		cRHSAIRMIG29SerbianTailDynamicNumberPlaces = [12,13,14];
		cRHSAIRMIG29SerbianIntakeNumberPlaces = [15,16,17];
		cRHSAIRMIG29TailPlaces = [18];
		cRHSAIRMIG29NosePlaces = [19];
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
