/*
	rhs_fnc_sight_9s475

	a: reyhard, kudos to Sa-Matra for selectWeapon idea!
*/

//systemChat "init";
uiNameSpace setVariable ["RHS_9S475_Ctrl",_this select 0];

//remove additional handler if it's present
if( not ( (uiNameSpace getVariable ["rhs_9s475_keyEH",-1]) isEqualTo -1))then{
	(findDisplay 46) displayRemoveEventHandler ["KeyDown", uiNameSpace getVariable "rhs_9s475_keyEH"];
	//systemChat format[" %1 reload passed",(uiNameSpace getVariable ["rhs_9s475_keyEH",-1])];
};

//blocking certain options while piloting
inGameUISetEventHandler ["Action",
"
	_return=false;
	if ( (_this select 3) in ['LandGearUp','LandGear','EngineOn','EngineOff']) then {
		(vehicle (call rhs_fnc_findPlayer)) vehicleChat 'Hm... I cannot find those knobs here...';
		_return=true;
	};
	_return
"];

disableSerialization;
private _c			= uiNamespace getVariable "RHS_9s475_Ctrl";
//angle indicator
private _indicator	= _c displayCtrl 1;
//current zoom
private _mode		= _c displayCtrl 154;

// loop handling different optics mode, weapon changing & transition fade effect
["rhs_9s475_handler", "onEachFrame", {
	params["_tick","_mode","_indicator","_previousMode"];

	//remove EH
	if( isNull ( (uiNamespace getVariable "RHS_9s475_Ctrl") displayCtrl 154) )exitWith
	{
		([] call BIS_fnc_displayMission) displayRemoveEventHandler ['KeyDown', uiNameSpace getVariable "rhs_9s475_keyEH"];
		["rhs_9s475_handler", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		["rhs_9s475_bank_handler", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		uiNameSpace setVariable ["RHS_9s475_Ctrl",displayNull];
		inGameUISetEventHandler ["Action", ""];
		//systemChat "removing EH";
	};

	// Perform action only in optics mode
	if(cameraView isEqualTo "GUNNER")then
	{
		// Check if optic mode was changed
		private _currentMode = ctrlText _mode;
		if(_currentMode != _previousMode)then
		{
			private _unit				= call rhs_fnc_findPlayer;
			private _vehicle			= vehicle _unit;
			private _currentWeapon		= _vehicle currentWeaponTurret [0];
			private _weapons			= weapons _vehicle;
			private _missleLaunchers	= [];
			{if(_x isKindOf ["rhs_weap_9K114_launcher",configFile >> "CfgWeapons"])then{_missleLaunchers pushBack _x;_weapons = _weapons - [_x]}}foreach _weapons;
			// Excluded weapons list
			{_weapons = _weapons - [_x]}foreach ["rhs_weap_MASTERSAFE","rhs_weap_fcs_mi24"];

			switch(_currentMode)do
			{
				case "": 
				{ 	// KPS53AV
					if(_weapons isEqualTo [])then{
						_vehicle selectWeapon "rhs_weap_MASTERSAFE";
					}else{
						_vehicle selectWeapon (_weapons select 0);
					};

					// Indicator control
					_indicator ctrlSetTextColor [1,1,1,0];
					["rhs_9s475_bank_handler", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;

					// Fade effect representing switching between two separate sights
					if(_previousMode isEqualTo "9S475_3")then{
						titleCut ["", "black in", 3];
					};

					//systemChat "mode collimator";
				};
				case "9S475_3": 
				{	// 9S475 optic
					// Select missiles
					if(_missleLaunchers isEqualTo [])then{
						_vehicle selectWeapon "rhs_weap_MASTERSAFE";
					}else{
						_vehicle selectWeapon (_missleLaunchers select 0);
					};

					// Indicator control
					_indicator ctrlSetTextColor [1,1,1,1];
					["rhs_9s475_bank_handler", "onEachFrame", {
						if(cameraView isEqualTo "GUNNER")then
						{
							params["_vehicle","_indicator"];
							_indicator ctrlSetAngle [deg(_vehicle animationPhase "mainTurret")*0.99, 0.5, 0.5];
						};
					},[_vehicle,_indicator]] call BIS_fnc_addStackedEventHandler;

					// Fade effect representing switching between two separate sights
					if(_previousMode isEqualTo "")then{
						titleCut ["", "black in", 3];
					};

					//systemChat "mode optic";
				};
				case "9S475_10": 
				{
					// Indicator control
					_indicator ctrlSetTextColor [1,1,1,0];
					["rhs_9s475_bank_handler", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;

					//fix for directionStabilization quirk
					_vehicle lockCameraTo [AGLtoASL (positionCameraToWorld [0,0,5000]),[0]];
					_vehicle spawn {sleep 0.1;_this lockCameraTo [objNull,[0]]};

					//systemChat "mode optic zoom";
				};
			};
			// Update previous indicator
			_this set [3,_currentMode];
		};
	};
},[time,_mode,_indicator,""]] call BIS_fnc_addStackedEventHandler;

//systemChat "adding event handler";

_id = ([] call BIS_fnc_displayMission) displayAddEventHandler ["KeyDown", {

	private _unit		= call rhs_fnc_findPlayer;
	private _vehicle	= vehicle _unit;

	if( (_this select 1) in (actionKeys 'SwitchWeaponGrp1'+actionKeys 'SwitchWeaponGrp2'+actionKeys 'SwitchWeaponGrp3'+actionKeys 'SwitchWeaponGrp4'+actionKeys 'nextWeapon'+actionKeys 'prevWeapon') )exitWith
	{
		disableSerialization;
		private _c			= uiNamespace getVariable "RHS_9s475_Ctrl";
		//current zoom
		private _mode		= _c displayCtrl 154;

		private _currentMode		= ctrlText _mode;
		private _currentWeapon		= _vehicle currentWeaponTurret [0];
		private _weapons			= weapons _vehicle;
		private _missleLaunchers	= [];
		private _nextWeapon 		= "rhs_weap_MASTERSAFE";
		{if(_x isKindOf ["rhs_weap_9K114_launcher",configFile >> "CfgWeapons"])then{_missleLaunchers pushBack _x;_weapons = _weapons - [_x]}}foreach _weapons;
		// Excluded weapons list
		{_weapons = _weapons - [_x]}foreach ["rhs_weap_MASTERSAFE","rhs_weap_fcs_mi24"];

		//systemChat format ["%1", _currentMode];
		// Gun & Bombs
		if(_currentMode isEqualTo "")then{
			if(!(_weapons isEqualTo []))then{
				_nextWeapon = ((_weapons + _weapons) select ((_weapons find _currentWeapon) + 1));
			};
			//systemChat format["%1",_nextWeapon];
		}else{
		// Rockets
			if(!(_missleLaunchers isEqualTo []))then{
				_nextWeapon = ((_missleLaunchers + _missleLaunchers) select ((_missleLaunchers find _currentWeapon) + 1));
			};
		};
		[_vehicle,_nextWeapon] spawn {params["_vehicle","_nextWeapon"];_vehicle selectWeapon _nextWeapon;};
		true
	};

	if (
			( (_this select 1) in (actionKeys 'LandGear'+actionKeys 'LandGearUp'+actionKeys 'EngineOn'+actionKeys 'EngineOff') ) or
			( !(isEngineOn _vehicle) &&  ( (_this select 1) in (actionKeys 'heliCollectiveRaise') ) )
	)then { _vehicle vehicleChat 'Hm... I cannot find those knobs here...';true;}else{false};
}];

uiNameSpace setVariable ["rhs_9s475_keyEH",_id];