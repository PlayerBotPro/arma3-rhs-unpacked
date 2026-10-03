/*
	Dynamic object drawing handler

	Small loop for crews of helicopters and planes which enables near zero pixel object drawing which was optimization brought with Apex DLC.



	a: reyhard
*/

params["_mode"];

// read variable from profile name space
private _type = profileNamespace getVariable ["rhs_dynamicObjectDistance",0];

_return = false;

switch (_mode) do
{
	case "INIT":
	{
		// exit if type is set to 0
		if(_type isEqualTo 0)exitWith{_return=true};

		// change feature type of all vehicles
		{_x setFeatureType (_type min 1)}foreach vehicles;

		RHS_dynamicOD_check =
		{
			if(count vehicles != RHS_dynamicOD_count)then
			{
				['CHANGE'] call RHS_fnc_dynamicObjectDrawing;
			};
		};

		// store current amount of vehicles
		RHS_dynamicOD_count = count vehicles;
	};
	case "CHANGE":
	{
		// change feature type of all vehicles
		{_x setFeatureType (_type min 1)}foreach vehicles;
	};
	case "END":
	{
		// exit if type is set to 0
		if(_type isEqualTo 0)exitWith{};

		// change feature type of all vehicles back to 0
		{_x setFeatureType 0}foreach vehicles;

		// deinitalize global variable
		RHS_dynamicOD_count = nil;
		RHS_dynamicOD_check = nil;
	};

	default {};
};

_return