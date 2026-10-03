// THIS SHOULD SMOOTH OUT THE CHANGE IN TARGETING

private ["_microAirVehicleCam","_staticGCS"];
_microAirVehicleCam = _this select 0;
_staticGCS = _this select 1;

if (isNil{_staticGCS getVariable "mavCamSetTargetRunning"}) then
	{
		_staticGCS setVariable ["mavCamSetTargetRunning",1,false];

		waitUntil {camCommitted _microAirVehicleCam};

		_microAirVehicleCam camSetTarget (_staticGCS getVariable "mavCurrentTarget");

		if ((_staticGCS getVariable "birdRecall") == 1) then {_microAirVehicleCam camSetTarget _staticGCS};

		_microAirVehicleCam camCommit 0.5;
		_staticGCS setVariable ["mavCamSetTargetRunning",nil,false];
	};
