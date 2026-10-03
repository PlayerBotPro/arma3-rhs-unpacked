params ["_tank"];

if(local _tank)then{

	private _class = typeOf _tank;
	if (isNil "cRHSSPRUTFuncLoaded") then
	{
		cRHSSPRUTFuncLoaded = true;
		cRHSSPRUTAddonName  = "rhsafrf\addons\rhs_c_sprut";

		cRHSSPRUTNumberPlaces = [3,4,5];			// Places for number
		cRHSSPRUTPlnSymPlaces = [6];				// Places for platoon symbol

		cRHSBMD4NumberPlaces = [5,6,7];			// Places for number
		cRHSBMD4PlnSymPlaces = [8];				// Places for platoon symbol

		if (isNil "rhs_armor_hint") then{
			call rhs_fnc_hintArmor;
			rhs_armor_hint=true;
		};
	};


	//diag_log format ["Init running. Class: %1", _class];

	private _cfgParams= getArray (configFile >> "CfgVehicles" >> _class >> "rhs_decalParameters" );
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

	if(_class isKindOf "rhs_sprut_vdv")then{
		//player manned tanks starts with unloaded main gun
		_this spawn {
			params ["_vehicle"];

			sleep 0.01;
			if( isPlayer (gunner _vehicle) )then{
				_vehicle addMagazine ["rhs_mag_dummy",0];
				_vehicle loadMagazine [[0],(weapons _vehicle) select 0 ,"rhs_mag_dummy"];
				_vehicle removeMagazine "rhs_mag_dummy";
			}else{
				if ( ((count (crew _vehicle)) isEqualTo 0) and (local _vehicle) )then{
					private _agent = createAgent ["VirtualMan_F", [0,0,10000], [], 0, "CAN_COLLIDE"];
					_agent moveInGunner _vehicle;

					_vehicle addMagazine ["rhs_mag_dummy",0];
					_vehicle loadMagazine [[0],(weapons _vehicle) select 0 ,"rhs_mag_dummy"];
					_vehicle removeMagazine "rhs_mag_dummy";
					moveOut _agent;
					deleteVehicle _agent;
				};
			};
		};
	};
};
