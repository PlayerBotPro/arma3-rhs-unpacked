params ["_vehicle"];

if(local _vehicle)then{

	if (isNil "cRHST72FuncLoaded") then
	{
		cRHST72FuncLoaded = true;
		cRHST72AddonName  = "rhsafrf\addons\rhs_c_t72";

		cRHST72NumberPlaces = [11,12,13];			// Places for number
		cRHST72PlnSymPlaces = [14];					// Places for platoon symbol
		cRHST72HnrSymPlaces = [15];					// Places for honor symbol

		if (isNil "rhs_armor_hint") then{
			call rhs_fnc_hintArmor;
			rhs_armor_hint=true;
		};
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

	_vehicle lockTurret [[0,1],true];
	//player manned tanks starts with unloaded main gun
	_this spawn {
		params ["_vehicle"];

		sleep 0.01;
		if( isPlayer (gunner _vehicle) )then{
			_vehicle addMagazine ["rhs_mag_dummy",0];
			_vehicle loadMagazine [[0],(weapons _vehicle) select 0 ,"rhs_mag_dummy"];
			_vehicle removeMagazine "rhs_mag_dummy";
		}else{
			if ( ((count (crew _vehicle)) isEqualTo 0) )then{
				//load magazine works only if there is crew inside
				private _agent = createAgent ["VirtualMan_F", [0,0,10000], [], 0, "CAN_COLLIDE"];
				_agent moveInGunner _vehicle;

				_vehicle addMagazine ["rhs_mag_dummy",0];
				_vehicle loadMagazine [[0],(weapons _vehicle) select 0 ,"rhs_mag_dummy"];
				_vehicle removeMagazine "rhs_mag_dummy";
				sleep 0.5;
				deleteVehicle _agent;
			};
		};
	};
};
