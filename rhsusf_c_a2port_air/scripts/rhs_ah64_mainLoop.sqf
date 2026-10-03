/*
	rhs_fnc_ah64_mainLoop
	a: reyhard
*/

disableSerialization;

uiNameSpace setVariable ["RHS_AH64_Main_Ctrl",_this select 0];

private _c			= uiNamespace getVariable "RHS_AH64_Main_Ctrl";

// Hide IHADSS by default
private _ihadss 	= _c displayCtrl 411;
_ihadss ctrlShow false;

// loop handling different optics mode, weapon changing & transition fade effect
["rhs_ah64_mainLoop", "onEachFrame", {

	params["_tick","_startTime"];
	//hintSilent format["running for %1s",round(time-_startTime)];

	//remove EH
	if( isNull ( (uiNamespace getVariable "RHS_AH64_Main_Ctrl") displayCtrl 8550))exitWith
	{
		["rhs_ah64_mainLoop", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		uiNameSpace setVariable ["RHS_AH64_Main_Ctrl",displayNull];

		if( not ( (uiNameSpace getVariable ["rhs_ah64d_weaponPage_eh",-1]) isEqualTo -1))then
		{
			(findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rhs_ah64d_weaponPage_eh"];
		};
		if( not ( (uiNameSpace getVariable ["rhs_ah64d_videoKey_eh",-1]) isEqualTo -1))then
		{
			(findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rhs_ah64d_videoKey_eh"];
		};
		["rhs_ah64_videoFeed_pfh", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		//systemChat "removing EH";
	};

	// Define common variables -
	private _unit		= call rhs_fnc_findPlayer;
	private _vehicle	= vehicle _unit;
	private _grp		= group _unit;

	// Geting out from vehicle
	if(!(alive _vehicle))exitWith{};

	// Geting out from vehicle
	if(isNull objectParent _unit)exitWith{};

	// Calculate checks only when in cockpit mode
	if(cameraView isEqualTo "INTERNAL")then
	{

		if(time >= _tick)then
		{
			_this set [0,time+0.01];

			private _MFDValues = getUserMFDvalue _vehicle;

			// Calculate time to WP only if speed is higher than 5m/s
			private _speed = speed _vehicle;
			if(speed _vehicle >= 5)then
			{
				private _currentWP			= currentWaypoint _grp;
				private _currentWP_Distance	= (waypointPosition [_grp, _currentWP]) distance2d _vehicle;

				if(_currentWP_Distance > 100)then
				{
					// Calculate time to WP
					private _timeToWaypoint = (_currentWP_Distance/_speed)/360;
					private _minutesToWaypoint = round(linearConversion [0,1,_timeToWaypoint-(floor _timeToWaypoint),0,60,true]);
					if(_minutesToWaypoint < 10)then
					{
						_minutesToWaypoint = format["0%1",_minutesToWaypoint];
					};
					_vehicle setUserMFDText [1,format["%1:%2",(floor _timeToWaypoint),_minutesToWaypoint]];
				};
			};

			// Determine current mode & store it as a number in MFD
			private _modeIndex = [_unit,_vehicle] call rhs_fnc_MFD_checkFireMode;
			_vehicle setUserMFDValue [10,_modeIndex];

			// Calculate fuel flow & remaining flight time

			// Radar MFD handling
			private _radarStatus = _vehicle isVehicleSensorEnabled  "ActiveRadarSensorComponent";
			if(
				isVehicleRadarOn _vehicle &&
				{
					((_radarStatus # 0) # 1) OR
					((_radarStatus # 1) # 1)
				}
			)then
			{
				private _radarPhase = _MFDValues # 16;
				// Loop from 0 to 1
				if(_radarPhase <= 1)then
				{
					_radarPhase = _radarPhase + 0.005;
				}else{
					_radarPhase = 0;
				};
				_vehicle setUserMFDValue [16,_radarPhase];
				// Handling of Ground & Air to Air mode of radar
				//if(input)
			}else{
				private _radarPhase = _MFDValues # 16;
				// Animate to 1 and end
				if(_radarPhase > 0)then
				{
					_vehicle setUserMFDValue [16,0];
				};
			};
		};
	};



	// Damage functions
	private _radarDamage	= _vehicle getHitPointDamage "Hit_Longbow";
	private _tadsDamage		= _vehicle getHitPointDamage "Hit_Optic_TADS";

	if(_radarDamage isEqualTo 1)then
	{
		_vehicle enableVehicleSensor ["ActiveRadarSensorComponent",false];
		_vehicle enableVehicleSensor ["ActiveRadarSensorComponent_Air",false];
	};
	if(_tadsDamage isEqualTo 1)then
	{
		_vehicle enableVehicleSensor ["IRSensorComponent",false];
		_vehicle enableVehicleSensor ["VisualSensorComponent",false];
	};
},[time,time]] call BIS_fnc_addStackedEventHandler;
/*

[] spawn
{


	disableSerialization;v

	private _c = uiNamespace getVariable "RHS_AH64_Main_Ctrl";

	private _z = (_c displayCtrl 154);
	private _t = false;

	private _RHS_TV_ppEffect = ppEffectCreate ["FilmGrain", 1400];
	_RHS_TV_ppEffect ppEffectAdjust [0.15,1,1,0.45,1, false];
	_RHS_TV_ppEffect ppEffectCommit 0;
	private _RHS_TVBW_ppEffect = ppEffectCreate ["colorCorrections", 1500];
	_RHS_TVBW_ppEffect ppEffectAdjust [1,1,0,[1,1,1,0],[1,1,1,0],[0.75,0.25,0,1]];
	_RHS_TVBW_ppEffect ppEffectCommit 0;

	_lockPos = (positionCameraToWorld [0,0,4210]);
	while{not(isNull _z)}do
	{
		if(cameraView == "gunner")then
		{
			{_x ppEffectEnable true}foreach [_RHS_TV_ppEffect,_RHS_TVBW_ppEffect];
		}else{
			{_x ppEffectEnable false}foreach [_RHS_TV_ppEffect,_RHS_TVBW_ppEffect];
		};

		_r = (ctrlText _z);
		if(!(_r isEqualTo "W") && _t)then{
			_t=false;
			_v lockCameraTo [AGLtoASL _lockPos,[0]];
			sleep 0.01;
			_v lockCameraTo [objNull,[0]];
		}else{
			if(_r isEqualTo "W")then{
				_t=true;
			};
		};
		sleep 0.01;
		_lockPos = (positionCameraToWorld [0,0,4210]);
	};
	ppEffectDestroy _RHS_TV_ppEffect;
	ppEffectDestroy _RHS_TVBW_ppEffect;
	uiNameSpace setVariable ["RHS_AH64_Main_Ctrl",displayNull];
};*/