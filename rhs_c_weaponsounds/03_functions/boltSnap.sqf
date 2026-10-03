params [
	"_unit",
	"_weapon",
	"_sound"
];
if (_unit == cameraOn) exitWith {};
private _camPos = positionCameraToWorld [0,0,0];
if ((_camPos distance _unit) <= 30) then {
	if((_unit ammo _weapon) > 0) then {
		private _lastShot = _unit getVariable ["RHS_lastShot", 0];
		if ((time - _lastShot) >= 0.18) then {	
			[_unit,_sound] spawn {
				params ["_unit","_sound"];
				private _dummy = "#particleSource" createVehicleLocal (eyePos _unit);
				_dummy say3d [_sound,100,1];
				sleep 1.5;
				deleteVehicle _dummy;
			};
		};
		_unit setVariable ["RHS_lastShot", time, false];
	};
};