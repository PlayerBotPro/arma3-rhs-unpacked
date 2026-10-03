/*
	rhs_fnc_towing_selectVehicle

	a: reyhard
*/
params["_towedVehicle"];


private _cargoConfig		= (configOf _towedVehicle >> "RHS_TowingSystem" >> "Cargo");
private _cargoMass			= [_cargoConfig,"rhs_towedMass",500] call BIS_fnc_returnConfigEntry;
private _maxAttachDistance	= [_cargoConfig,"rhs_maxAttachDistance",2] call BIS_fnc_returnConfigEntry;

private _actionHolders = [];
{
	private _carrierConfig = (configOf _x >> "RHS_TowingSystem" >> "Carrier");
	if(!(isNull _carrierConfig))then
	{
		[_carrierConfig,"rhs_towedMass",500] call BIS_fnc_returnConfigEntry;

		private _attachPoint		= [_carrierConfig,"rhs_attachPoint",""] call BIS_fnc_returnConfigEntry;
		if(_attachPoint isEqualTo "")then{
			_attachPoint = [_carrierConfig,"rhs_attachPointPos",[]] call BIS_fnc_returnConfigEntry;
		}else{
			_attachPoint = _x selectionPosition _attachPoint;
		};
		if(count _attachPoint isEqualTo 0)exitWith{};

		_actionHolder = "Sign_Sphere100cm_Geometry_F" createVehicleLocal [0,0,100];
		_actionHolder attachTo [_x,_attachPoint];
		_actionHolder setObjectTexture [0,""];

		[
			_actionHolder, 
			"Attach vehicle", 
			"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_loadDevice_ca.paa", 
			"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_loadDevice_ca.paa", 
			"_this distance _target < 3", 
			"_caller distance _target < 3", 
			{ }, 
			{ }, 
			{ 
				params ["_target", "_caller", "_actionId", "_arguments"];
				private _fakeVehicle = [_arguments # 0,_arguments # 1] call rhs_fnc_towing_attach;
				(_arguments # 0) setVariable ["rhs_towing_selectionConfirmed",true];

				// Temporarily disable collision with player & fake vehicle
				[_caller,_fakeVehicle] spawn 
				{
					params ["_caller","_fakeVehicle"];
					_caller disableCollisionWith _fakeVehicle;
					sleep 2;
					_caller enableCollisionWith _fakeVehicle;
				};
			}, 
			{ }, 
			[_towedVehicle,_x], 
			2, 
			nil, 
			true, 
			false
		] call BIS_fnc_holdActionAdd;
		private _actionID = name _actionHolder;
		[_actionID, "onEachFrame", 
		{
			params["_vehicle","_actionID"];
			if(!alive _vehicle)exitWith
			{
				[_actionID, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
			};
			drawIcon3D ["\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_loadDevice_ca.paa", [1,1,1,1],  getposVisual _vehicle, 1, 1, 0, "Attach point", 1, 0.05, "TahomaB"];
		},[_actionHolder,_actionID]] call BIS_fnc_addStackedEventHandler;
		_actionHolders pushback _actionHolder;

	};
}foreach (nearestObjects [getpos _towedVehicle, ["Car", "Tank"], 6*2]);


if(_actionHolders isEqualTo [])exitWith
{
	hint "No valid nearby vehicles found"
};

hint "Confirm selection on nearby vehicle";
_towedVehicle setVariable ["rhs_towing_selectionConfirmed",false];

private _towingPoint		= [_cargoConfig,"rhs_towingPoint",""] call BIS_fnc_returnConfigEntry;
["rhs_towing_selectVehicle_handler", "onEachFrame", {
	params["_time","_player","_vehicle","_towingPoint","_maxAttachDistance","_actionHolders"];


	//hintSilent format["condition %1",player distance _towingPoint];

	if(time > _time)then
	{
		_this set [0,time + 0.01];
		private _endCode = _vehicle getVariable ["rhs_towing_selectionConfirmed",false];;
		// Exit if vehicle is destroyed
		if( !alive _vehicle )then
		{
			_endCode = true;
		};

		if( (_player distance _towingPoint) > _maxAttachDistance*2)then
		{
			hint "Attaching process canceled! You moved too far away from attach point.";
			_endCode = true;
		};

		if(_endCode)exitWith
		{
			{deleteVehicle _x}foreach _actionHolders;
			// Remove on eachFrame event
			["rhs_towing_selectVehicle_handler", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		};
	};
},[time,call rhs_fnc_findPlayer,_towedVehicle,_towedVehicle modelToWorldVisual (_towedVehicle selectionPosition _towingPoint),_maxAttachDistance,_actionHolders]] call BIS_fnc_addStackedEventHandler;